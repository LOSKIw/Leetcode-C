int maxProfit(int* prices, int pricesSize) {
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
/*
2019/7/28
�Ƚϼ򵥵���Ŀ���뵽�����ű���ѵ���ϵ�������
*/