int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int maxProfit(int* prices, int pricesSize) {
	int i;
	int **time = (int**)malloc(sizeof(int*)*(pricesSize + 1));
	for (i = 0; i < pricesSize + 1; i++)
	{
		time[i] = (int*)malloc(sizeof(int) * 2);
	}
	time[0][0] = 0;
	time[0][1] = -100000;
	for (i = 0; i < pricesSize; i++)
	{
		time[i + 1][0] = max(time[i][0], time[i][1] + prices[i]);
		if (i == 0)
		{
			time[i + 1][1] = time[0][0] - prices[i];
		}
		else
		{
			time[i + 1][1] = max(time[i][1], time[i - 1][0] - prices[i]);
		}
	}
	return time[pricesSize][0];
}
/*
2019/7/28
动归贪心系列
做完含手续费过来的，感觉这一类股票题虽然理论上的理解还有一些模棱两可但是实操上已经会了，蛮有意思的。
*/