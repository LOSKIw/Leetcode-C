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
����ϵ��
������ʾ�������,�����ٿ�һ��ʼ��˼·�������ֵ�...�������ֱ�׼˼·������ǣ���������
*/