int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int maxProfit_2(int* prices, int pricesSize) {
	int *A = (int*)malloc(sizeof(int)*pricesSize);
	int i, sum = 0;
	for (i = 1; i < pricesSize; i++)
	{
		A[i] = prices[i] - prices[i - 1];
	}
	for (i = 1; i < pricesSize; i++)
	{
		if (A[i] > 0)
		{
			sum += A[i];
		}
	}
	return sum;
}

int maxProfit(int k, int* prices, int pricesSize) {
	if (k == 0)
		return 0;
	if (k > pricesSize / 2)
		return maxProfit_2(prices, pricesSize);
	int ***A = (int***)malloc(sizeof(int**)*(pricesSize + 1));
	int i, j;
	for (i = 0; i <= pricesSize; i++)
	{
		A[i] = (int**)malloc(sizeof(int*)*(k + 1));
		for (j = 0; j < k + 1; j++)
		{
			A[i][j] = (int*)malloc(sizeof(int) * 2);
		}
	}

	for (i = 0; i < pricesSize; i++)
	{
		A[i][0][0] = 0;
		A[i][0][1] = -10000000;
		for (j = 1; j <= k; j++)
		{
			if (i == 0)
			{
				A[i][j][0] = 0;
				A[i][j][1] = -10000000;
			}
			A[i + 1][j][0] = max(A[i][j][0], A[i][j][1] + prices[i]);
			A[i + 1][j][1] = max(A[i][j][1], A[i][j - 1][0] - prices[i]);

		}
	}

	int max = A[pricesSize][0][0];
	for (i = 0; i <= k; i++)
	{
		if (A[pricesSize][i][0] > max)
			max = A[pricesSize][i][0];
	}
	return max;
}

/*
2019/7/28
动归
这种做法有一点暴力的意思其实，但是能让人感觉自己懂了【"感觉"
不断经过题解的部分进行优化，不过居然错在了写错变量导致一直在用一个常数计算
最后，开头加上的两个讨论一个是经过评论区提醒的，即k>pricesSize/2的分类
k==0的情况自然是我跑错了才发现的问题....
*/