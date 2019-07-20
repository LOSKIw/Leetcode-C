int maxProfit(int* prices, int pricesSize) {
	int i, j, max = 0;
	for (i = 0; i < pricesSize; i++)
	{
		for (j = i + 1; j < pricesSize; j++)
		{
			if (prices[j] - prices[i] >= 0 && prices[j] - prices[i] > max)
				max = prices[j] - prices[i];
		}
	}
	return max;
}
/*
2019/3/19
一定有更好的方法！
*/