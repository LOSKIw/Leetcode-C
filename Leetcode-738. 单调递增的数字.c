int get_len(int N)
{
	int i;
	for (i = 0; N >= 1; i++)
	{
		N /= 10;
	}
	return i;
}

int monotoneIncreasingDigits(int N) {
	int len = get_len(N);
	int temp = N;
	int *A = (int*)malloc(sizeof(int)*(len));
	int i, j;
	for (i = len - 1; i >= 0; i--)
	{
		A[i] = temp % 10;
		temp /= 10;
	}
	for (i = 1; i < len; i++)
	{
		if (A[i - 1] > A[i])
		{
			A[i - 1]--;
			for (j = i; j < len; j++)
			{
				A[j] = 9;
			}
			i = 0;
		}
	}
	int result = 0;
	for (i = 0; i < len; i++)
	{
		temp = 1;
		for (j = 0; j < len - i - 1; j++)
		{
			temp *= 10;
		}
		result += A[i] * temp;
	}
	return result;
}
/*
2019/7/28
贪心系列
自己没能想出思路，从评论区得出来的。
*/