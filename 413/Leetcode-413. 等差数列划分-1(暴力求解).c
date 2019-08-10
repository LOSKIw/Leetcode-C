int get_num(int n)
{
	int i, result = 0;
	for (i = n - 1; i > 0; i--)
		result += i;
	return result;
}

int numberOfArithmeticSlices(int* A, int ASize) {
	int *M = (int*)malloc(sizeof(int)*ASize);
	int i;
	for (i = 0; i < ASize - 1; i++)
	{
		M[i] = A[i + 1] - A[i];
	}
	int result = 0, temp = 1;
	for (i = 1; i < ASize; i++)
	{
		if (M[i] == M[i - 1])
		{
			temp++;
		}
		else
		{
			if (temp < 2)
				temp = 1;
			else
			{
				result += get_num(temp);
				temp = 1;
			}
		}
	}
	return result;
}

/*
虽然是动归系列...但是我用暴力求解过了...
*/