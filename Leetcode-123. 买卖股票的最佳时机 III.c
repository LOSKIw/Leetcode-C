int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int maxProfit(int* prices, int pricesSize) {
	if (pricesSize == 0)
		return 0;
	int ***A = (int***)malloc(sizeof(int**)*(pricesSize + 1));
	int i, j;
	for (i = 0; i <= pricesSize; i++)
	{
		A[i] = (int**)malloc(sizeof(int*) * 3);
		for (j = 0; j <= 2; j++)
		{
			A[i][j] = (int*)malloc(sizeof(int) * 2);
		}
	}

	for (i = 0; i < pricesSize; i++)
	{
		A[i][0][0] = 0;
		A[i][0][1] = -100000;
		for (j = 1; j <= 2; j++)
		{
			if (i == 0)
			{
				A[0][j][0] = 0;
				A[0][j][1] = -100000;
			}
			A[i + 1][j][0] = max(A[i][j][0], A[i][j][1] + prices[i]);
			A[i + 1][j][1] = max(A[i][j][1], A[i][j - 1][0] - prices[i]);
		}
	}
	int max = A[pricesSize][0][0];
	for (i = 1; i <= 2; i++)
	{
		if (A[pricesSize][i][0] > max)
			max = A[pricesSize][i][0];
	}
	return max;
}

/*
2019/7/28
动归
得益于一位大神的总结，这一系列股票题目做的蛮快的。
这个就是股票Ⅳ的一个特殊情况，比Ⅳ少了一个变量而已
*/