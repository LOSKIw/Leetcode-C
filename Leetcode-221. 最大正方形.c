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

int maximalSquare(char** matrix, int matrixSize, int* matrixColSize) {
	char **A = (char**)malloc(sizeof(char*)*(matrixSize));
	int i, j, k;
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			A[i] = (char*)malloc(sizeof(char)*(*matrixColSize));
		}
	}
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			if (matrix[i][j] == '0')
				A[i][j] = '0';
			else if (j == 0)
				A[i][j] = matrix[i][j];
			else
				A[i][j] = A[i][j - 1] + 1;
		}
	}
	int temp, result = 0, min_wid;
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			if (A[i][j] != '0')
			{
				k = i;
				min_wid = A[i][j] - '0';
				while (k >= 0 && A[k][j] != '0')
				{
					min_wid = min(min_wid, A[k][j] - '0');
					temp = min(i - k + 1, min_wid);
					if (i - k + 1 > min_wid)
						break;
					result = max(temp*temp, result);
					k--;
				}
			}
		}
	}
	return result;
}
/*
2019/7/29
动归
做完矩形做这个还蛮舒服的就是命名老是弄的乱七八糟的...
我的方法换汤不换药，应该有更好的方法。
*/