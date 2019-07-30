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
	int *A = (int*)malloc(sizeof(int)*numsSize);
	int i, j, temp;
	A[0] = nums[0];
	for (i = 1; i < numsSize - 1; i++)
	{
		if (i == 1)
			A[1] = max(nums[1], nums[0]);
		else
		{
			A[i] = max(nums[i] + A[i - 2], A[i - 1]);
		}
	}
	if (numsSize < 2)
		return nums[0];
	temp = A[numsSize - 2];
	A[1] = nums[1];
	for (i = 2; i < numsSize; i++)
	{
		if (i == 2)
			A[2] = max(nums[1], nums[2]);
		else
		{
			A[i] = max(nums[i] + A[i - 2], A[i - 1]);
		}
	}
	return max(temp, A[numsSize - 1]);
}
/*
2019/7/30
����
������һ���⽻�˵�������زŶ�
�м䷸�ô���̫���ˣ�������һ���Ƚϼ򵥵���Ŀ����Ȼ��Ҫ˼��Ҳ���ҿ���ʾ֪����...
*/