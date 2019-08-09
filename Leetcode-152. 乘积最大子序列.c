int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int maxProduct(int* nums, int numsSize) {
	int tMax = 1, tMin = 1, Max = -999999, temp;
	int i;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] < 0)
		{
			temp = tMax;
			tMax = tMin;
			tMin = temp;
		}

		tMax = max(tMax*nums[i], nums[i]);
		tMin = min(tMin*nums[i], nums[i]);
		Max = max(tMax, Max);
	}
	return Max;
}

/*
2019/8/9
����ϵ��
��Ҫ˼���Ǳ��浱ǰ������С���Ա�������������ʱ�������˼·�ڿ���������С�
*/