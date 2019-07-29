int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
	int i, j;
	long long **A = (long long **)malloc(sizeof(long long*)*obstacleGridSize);
	for (i = 0; i < obstacleGridSize; i++)
	{
		A[i] = (long long *)malloc(sizeof(long long)*(*obstacleGridColSize));
	}
	for (i = 0; i < obstacleGridSize; i++)
	{
		for (j = 0; j < *obstacleGridColSize; j++)
		{
			if (obstacleGrid[i][j] == 1)
			{
				A[i][j] = 0;
			}
			else if (i == 0 && j == 0)
			{
				A[i][j] = 1;
			}
			else if (i == 0 && j != 0)
			{
				A[i][j] = A[i][j - 1];
			}
			else if (i != 0 && j == 0)
			{
				A[i][j] = A[i - 1][j];
			}
			else
			{
				A[i][j] = A[i][j - 1] + A[i - 1][j];
			}
		}
	}
	return A[obstacleGridSize - 1][*obstacleGridColSize - 1];
}
/*
2019/7/29
动归系列
我就比较烦这种不给出数据范围导致溢出的题目，原本没什么问题非要被long long卡住。
不过在修改的过程中从评论区学到了一些简洁的写法，省去了很多判断。
*/