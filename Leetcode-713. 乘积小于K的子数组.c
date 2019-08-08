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
��֪��ɶϵ�У�һ��ʼ���ö�̬�ı�����ٷ��ֳ�ʱ�ˣ�֮����һ�±�ǩ������˫ָ�룬��Ȼ�ܿ��Լ���д�����ˣ����ܲ����ر���?��Ȼ�Ҳ�û�п�����Ŀ���ʵ�������
*/