int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
	int i, j, temp = nums[0];
	int result = 0;
	for (i = 0, j = 0; i < numsSize&&j < numsSize;)
	{
		if (temp < k&&i < numsSize - 1)
		{
			result += i - j + 1;
			temp *= nums[++i];
		}
		else if (temp < k&&i == numsSize - 1)
		{
			result += i - j + 1;
			break;
		}
		else
		{
			if (i == j)
			{
				i++;
				j++;
				if (i == numsSize)
					break;
				temp = nums[i];
			}
			else
			{
				temp /= nums[j++];
			}
		}
	}
	return result;
}

/*
2019/8/8
不知道啥系列，一开始想用动态的暴力穷举发现超时了，之后看了一下标签发现是双指针，居然很快自己就写出来了，可能不是特别难?虽然我并没有看出题目本质的能力。
*/