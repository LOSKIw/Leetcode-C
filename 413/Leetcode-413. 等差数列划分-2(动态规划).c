int get_num(int n)
{
	int i, result = 0;
	for (i = n - 1; i > 0; i--)
		result += i;
	return result;
}

int numberOfArithmeticSlices(int* A, int ASize) {
	if (ASize == 0 || ASize < 3)
		return 0;
	int *M = (int*)malloc(sizeof(int)*ASize);
	int i;
	for (i = 1; i < ASize; i++)
	{
		M[i] = A[i] - A[i - 1];
	}
	int result = 0, temp = 1;
	M[0] = 0;
	A[0] = 0;
	A[1] = 0;
	for (i = 2; i < ASize; i++)
	{
		if (M[i] == M[i - 1])
			temp++;
		else
		{
			A[i] = 0;
			temp = 1;

		}

		if (temp >= 2)
		{
			A[i] = A[i - 1] + 1;
		}
		else
		{
			A[i] = 0;
		}
		result += A[i];
	}
	return result;
}

/*
2019/8/10
动归系列
正统做法...?
然而速度居然就这么变慢了???
*/