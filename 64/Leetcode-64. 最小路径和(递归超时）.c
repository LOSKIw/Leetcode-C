int search(int** M, int **A, int x, int y, int sum, int X, int Y)
{
	if (A[x][y] == 1)
		return -1;
	int temp1, temp2, result = 1000000;
	if (x == X && y == Y)
		return sum + M[x][y];
	else
	{
		A[x][y] = 1;
		if (x < X)
			temp1 = search(M, A, x + 1, y, sum + M[x][y], X, Y);
		else
			temp1 = -1;
		if (y < Y)
			temp2 = search(M, A, x, y + 1, sum + M[x][y], X, Y);
		else
			temp2 = -1;
		if (temp1 != -1)
			result = temp1;
		if (temp2 != -1 && temp2 < result)
			result = temp2;
		A[x][y] = 0;
	}
	return result;
}

int minPathSum(int** grid, int gridSize, int* gridColSize) {
	int**A = (int**)malloc(sizeof(int*)*gridSize);
	int i, j;
	for (i = 0; i < gridSize; i++)
	{
		A[i] = (int*)malloc(sizeof(int)*(*gridColSize));
		for (j = 0; j < *gridColSize; j++)
			A[i][j] = 0;
	}
	#search(int** M, int **A, int x, int y, int sum, int X, int Y)
		return search(grid, A, 0, 0, 0, gridSize - 1, *gridColSize - 1);
}
/*
2019/7/29
不知道为什么卡了那么久，也不知道错在什么地方，反正这一版是错误的方向，看了评论区知道了要用动态规划
*/