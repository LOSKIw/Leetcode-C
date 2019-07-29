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
����ϵ��
�������ҵĻ��һ��治֪�������ĿҪ�ö��飬�Ͼ��о�ͼ����Ŀһ�㲻����������...
����һ��ʼû���⣬û����ֻ�����һ���������...
�м仹���˺ö���...������Ȼ��֪������ô�ֱ�size��colsize��������...
*/