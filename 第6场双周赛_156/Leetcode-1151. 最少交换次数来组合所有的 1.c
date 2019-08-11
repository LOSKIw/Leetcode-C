int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int minSwaps(int* data, int dataSize) {
	int i, j;
	int temp = 0, count = 0;
	int *A = (int*)malloc(sizeof(int)*dataSize);

	for (i = 0; i < dataSize; i++)
	{
		if (data[i] == 1)
			count++;
	}

	for (i = 0; i < dataSize; i++)
	{
		if (i == 0)
		{
			if (data[0] == 1)
				A[0] = 1;
			else
				A[0] = 0;
			continue;
		}
		if (data[i] == 1)
			A[i] = A[i - 1] + 1;
		else
			A[i] = A[i - 1];
		if (i >= count)
		{
			if (data[i - count] == 1)
				A[i]--;
		}
		temp = max(temp, A[i]);
	}
	return count - temp;
}

/*
2019/8/11
比较好的是在超时之后自己进行了优化，动归的思想应该算
*/