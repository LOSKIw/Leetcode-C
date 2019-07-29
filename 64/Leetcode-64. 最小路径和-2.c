int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int minPathSum(int** grid, int gridSize, int* gridColSize) {
	int i, j;
	for (i = 0; i < gridSize; i++)
	{
		for (j = 0; j < *gridColSize; j++)
		{
			if (j == 0 && i == 0)
				continue;
			else if (j == 0 && i != 0)
			{
				grid[i][j] = grid[i][j] + grid[i - 1][j];
			}
			else if (j != 0 && i == 0)
			{
				grid[i][j] = grid[i][j] + grid[i][j - 1];
			}
			else
			{
				grid[i][j] = min(grid[i][j] + grid[i - 1][j], grid[i][j] + grid[i][j - 1]);
			}
		}
	}
	return grid[gridSize - 1][*gridColSize - 1];
}
/*
2019/7/29
动归系列
不告诉我的话我还真不知道这道题目要用动归，毕竟感觉图的题目一般不都是搜索吗...
而且一开始没看题，没发现只用向右或者向下走...
中间还多了好多差错...至今仍然不知道该怎么分辨size和colsize两个参数...
*/