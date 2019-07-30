int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int rob(int* nums, int numsSize) {
	if (numsSize == 0)
		return 0;
	int i, j;
	for (i = 1; i < numsSize; i++)
	{
		if (i == 1)
			nums[1] = max(nums[1], nums[0]);
		else
		{
			nums[i] = max(nums[i] + nums[i - 2], nums[i - 1]);
		}
	}
	return nums[numsSize - 1];
}
/*
2019/7/30
动归系列
比较简单的一个问题，很基础的动态规划
*/