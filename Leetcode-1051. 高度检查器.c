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
原本应该是一道非常简单的题目，但是我手残直接去点提示了...
不过我可能也会以为考点是贪心之类的导致想麻烦了不会做...
*/