int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
	int i, j, result = 0;
	for (i = 0; i < gridSize; i++)
	{
		for (j = 0; j < *gridColSize; j++)
		{
			if (grid[i][j] == 1)
			{
				if (i - 1 >= 0 && grid[i - 1][j] != 1)
					result++;
				else if (i == 0)
					result++;
				if (i + 1 < gridSize&&grid[i + 1][j] != 1)
					result++;
				else if (i == gridSize - 1)
					result++;
				if (j - 1 >= 0 && grid[i][j - 1] != 1)
					result++;
				else if (j == 0)
					result++;
				if (j + 1 < *gridColSize&&grid[i][j + 1] != 1)
					result++;
				else if (j == *gridColSize - 1)
					result++;
			}
		}
	}
	return result;
}
/*
2019/8/8
���ˣ�ԭ����Ϊ���ѽ�����־�Ȼֻ��һ����...�ͱ��������...����˿���...
*/