int distributeCandies(int* candies, int candiesSize) {
	int A[200001] = { 0 };
	int i, j, count = 0;
	for (i = 0; i < candiesSize; i++)
	{
		j = candies[i] + 100000;
		A[j]++;
		if (A[j] <= 1)
			count++;
	}
	if (count > candiesSize / 2)
		return candiesSize / 2;
	else
		return count;
}
/*
2019/7/23
����������س�ʱ��...
������Ҳû���뵽���Կ�һ��200001��ô���int����...����
�����Ż��в�ͬ�ļ��ް�...
*/