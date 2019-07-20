int* sortedSquares(int* A, int ASize, int* returnSize)
{
	int *a = (int*)malloc(sizeof(int)*ASize);
	*returnSize = ASize;
	int i;
	for (i = 0; i < ASize; i++)
	{
		a[i] = A[i] * A[i];
	}
	int j, temp;
	for (i = 0; i < ASize - 1; i++)
	{
		for (j = i; j < ASize; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}
/*
2019/3/17
对于选择排序的复习
*/