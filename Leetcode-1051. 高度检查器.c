int heightChecker(int* heights, int heightsSize) {
	int i, j, temp, count = 0;
	int *A = (int*)malloc(sizeof(int)*heightsSize);
	for (i = 0; i < heightsSize; i++)
		A[i] = heights[i];
	for (i = 0; i < heightsSize; i++)
	{
		for (j = i; j < heightsSize; j++)
		{
			if (A[j] < A[i])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for (i = 0; i < heightsSize; i++)
		if (A[i] != heights[i])
			count++;
	return count;
}

/*
2019/8/20
ԭ��Ӧ����һ���ǳ��򵥵���Ŀ���������ֲ�ֱ��ȥ����ʾ��...
�����ҿ���Ҳ����Ϊ������̰��֮��ĵ������鷳�˲�����...
*/