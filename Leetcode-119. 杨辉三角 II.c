int* getRow(int rowIndex, int* returnSize) {
	int *A = (int*)malloc(sizeof(int)*(rowIndex + 1));
	int *B = (int*)malloc(sizeof(int)*(rowIndex + 1));
	int i, j;
	*returnSize = rowIndex + 1;

	for (i = 0; i <= rowIndex; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				B[j] = 1;
			}
			else
			{
				B[j] = A[j - 1] + A[j];
			}
		}
		for (j = 0; j <= i; j++)
		{
			A[j] = B[j];
		}
	}
	return A;
}
/*
2019/7/23
���õ�ѭ����������ƾ��Ǳ���ѭ��...
�������������Ȼ�Ǵ�0�п�ʼ�ǵ�Ҳ̫���˰�
*/