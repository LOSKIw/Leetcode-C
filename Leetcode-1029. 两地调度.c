int twoCitySchedCost(int** costs, int costsSize, int* costsColSize) {
	int *A = (int*)malloc(sizeof(int)*costsSize);
	int i, j;
	int result = 0;
	for (i = 0; i < costsSize; i++)
	{
		A[i] = costs[i][0] - costs[i][1];
	}
	int temp, *tempp;
	for (i = 0; i < costsSize; i++)
	{
		for (j = i; j < costsSize; j++)
		{
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;

				tempp = costs[i];
				costs[i] = costs[j];
				costs[j] = tempp;
			}
		}
	}
	for (i = 0; i < costsSize / 2; i++)
	{
		result += costs[i][0] + costs[i + costsSize / 2][1];
	}
	return result;
}
/*
2019/8/13
̰��ϵ��
�Լ�����̰�ĵĽṹ��ʽ֪���Ļ����࣬���ԱȽϾ����ڵ��ε�ѡ�񣬡������е�ӽ�����?
*/