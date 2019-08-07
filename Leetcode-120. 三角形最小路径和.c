int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
	if (triangleSize == 0)
		return 0;
	int **A = (int**)malloc(sizeof(int*)*triangleSize);
	int i, j;
	for (i = 0; i < triangleSize; i++)
	{
		A[i] = (int*)malloc(sizeof(int)*(i + 1));
	}
	A[0][0] = triangle[0][0];
	for (i = 1; i < triangleSize; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				A[i][j] = A[i - 1][j] + triangle[i][j];
			else if (j == i)
				A[i][j] = A[i - 1][j - 1] + triangle[i][j];
			else
				A[i][j] = min(A[i - 1][j] + triangle[i][j], A[i - 1][j - 1] + triangle[i][j]);
		}
	}
	int min = A[triangleSize - 1][0];
	for (i = 1; i < triangleSize; i++)
		if (A[triangleSize - 1][i] < min)
			min = A[triangleSize - 1][i];
	return min;
}
/*
2019/8/7
回来后的第一个动归试手
蛮简单的，但是据说有一维数组的方式，可以再看看
*/