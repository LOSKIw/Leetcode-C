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
我用的循环迭代，简称就是暴力循环...
不过这个行数居然是从0行开始记的也太坑了吧
*/