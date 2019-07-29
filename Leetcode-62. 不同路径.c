int uniquePaths(int m, int n) {
	int **A = (int**)malloc(sizeof(int*)*m);
	int i, j;
	for (i = 0; i < m; i++)
	{
		A[i] = (int*)malloc(sizeof(int)*n);
	}
	A[0][0] = 1;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (i == 0 && j != 0)
			{
				A[i][j] = A[i][j - 1];
			}
			else if (j == 0 && i != 0)
			{
				A[i][j] = A[i - 1][j];
			}
			else
			{
				A[i][j] = A[i][j - 1] + A[i - 1][j];
			}
		}
	}
	return A[m - 1][n - 1];
}
/*
2019/7/29
动归
比较简单，不过是在知道它要用动归的基础上...
*/