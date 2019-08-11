int* countBits(int num, int* returnSize) {
	int i = 0, j = 1, count;
	*returnSize = num + 1;
	int *A = (int*)malloc(sizeof(int)*(num + 1));
	for (i = 0; i <= num; i++)
	{
		A[i] = i;
	}
	int temp = 2;
	for (i = 2; i <= num; i++)
	{
		if (i >= temp && i <= 2 * temp - 1)
		{
			A[i] = A[i - temp] + 1;
		}
		if (i == 2 * temp - 1)
			temp *= 2;
	}
	return A;
}

/*
2019/8/11
动归系列
看了提示想出来的,现在再看一开始的思路真的蛮奇怪的...不过这种标准思路【大概是？】蛮巧妙
*/