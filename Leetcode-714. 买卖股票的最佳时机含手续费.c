int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int maxProfit(int* prices, int pricesSize, int fee) {
	int i;
	int** A = (int**)malloc(sizeof(int*)*(pricesSize + 1));
	for (i = 0; i < (pricesSize + 1); i++)
		A[i] = (int*)malloc(sizeof(int) * 2);
	A[0][0] = 0;
	A[0][1] = -1000000;
	for (i = 0; i < pricesSize; i++)
	{
		A[i + 1][0] = max(A[i][0], A[i][1] + prices[i] - fee);
		A[i + 1][1] = max(A[i][1], A[i][0] - prices[i]);
	}
	return A[pricesSize][0];
}
/*
2019/7/28
����̰��...�����
�Լ�û�������˼·�������������һλ�����Լ��ܽ��˹�Ʊ���˼·���кܴ�Ķ����Ӱ�ӣ���ʵ���ǶԵ�ǰ�Ƿ���й�Ʊ��״̬�����ۣ���ȡ��ѣ�һ����ȡ��
*/