int minFallingPathSum(int** A, int ASize, int* AColSize) {
	int i, j, k, temp, min;
	int **B = (int**)malloc(sizeof(int*)*ASize);
	for (i = 0; i < ASize; i++)
		B[i] = (int*)calloc(ASize, sizeof(int));

	for (i = 0; i < ASize; i++)
	{
		for (j = 0; j < ASize; j++)
		{
			if (i == 0)
			{
				B[i][j] = A[i][j];
			}
			else
			{
				temp = 100000;
				for (k = j - 1; k <= j + 1; k++)
				{
					if (k < 0 || k == ASize)
						continue;
					if (B[i - 1][k] < temp)
						temp = B[i - 1][k];
				}
				B[i][j] = A[i][j] + temp;
			}
		}
	}
	min = 1000000;
	for (i = 0; i < ASize; i++)
	{
		if (B[ASize - 1][i] < min)
			min = B[ASize - 1][i];
	}
	return min;
}
/*
贪心+动态规划系列
刚看完书感觉就用上了
感觉动态规划一般都是配合着一个动态数组使用
一步步规划最优解
这道题自己想出来的
虽然中间犯了好几个蠢蠢的错误。
不过leetcode最近老是说有内部错误，不知道为什么。
*/