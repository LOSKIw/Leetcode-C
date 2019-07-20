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
		for (j = 0; j < ASize - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return a;
}
/*
2019/3/17
¶ÔÓÚÃ°ÅÝÅÅÐòµÄ¸´Ï°
*/