int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int search(int** map, int** A, int x, int y, int sizex, int sizey)
{
	if (x < 0 || x >= sizex || y < 0 || y >= sizey)
	{
		return 0;
	}
	else if (map[x][y] == 0 || A[x][y] == 1)
	{
		return 0;
	}
	else
	{
		A[x][y] = 1;
		return 1 + search(map, A, x + 1, y, sizex, sizey) + search(map, A, x - 1, y, sizex, sizey) + search(map, A, x, y + 1, sizex, sizey) + search(map, A, x, y - 1, sizex, sizey);
	}
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize) {
	int**A = (int**)malloc(sizeof(int*)*gridSize);
	int i, j;
	for (i = 0; i < gridSize; i++)
	{
		A[i] = (int*)malloc(sizeof(int)** gridColSize);
		for (j = 0; j < *gridColSize; j++)
			A[i][j] = 0;
	}
	int temp = 0;
	for (i = 0; i < gridSize; i++)
	{
		for (j = 0; j < *gridColSize; j++)
		{
			if (grid[i][j] == 0)
				continue;
			else if (A[i][j] == 1)
				continue;
			else
			{
				temp = max(temp, search(grid, A, i, j, gridSize, *gridColSize));
			}
		}
	}
	return temp;
}
/*
2019/8/8
感觉应该算深度优先搜索
比较简单，但是自己傻傻的以为必定是正方形导致交错了好几次...还是要多细心。
*/