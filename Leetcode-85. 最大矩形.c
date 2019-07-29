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

int maximalRectangle(char** matrix, int matrixSize, int* matrixColSize) {
	char **A = (char**)malloc(sizeof(char*)*(matrixSize));
	int i, j, k;
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			A[i] = (char*)malloc(sizeof(char)*(*matrixColSize));
		}
	}
	int temp, result = 0;
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			if (matrix[i][j] == '0')
			{
				A[i][j] = '0';
			}
			else if (j == 0)
			{
				A[i][j] = matrix[i][j];
			}
			else
			{
				A[i][j] = A[i][j - 1] + 1;
			}
		}
	}
	int min_wid;
	for (i = 0; i < matrixSize; i++)
	{
		for (j = 0; j < *matrixColSize; j++)
		{
			k = i;
			min_wid = A[i][j];
			while (k >= 0 && A[k][j] != '0')
			{
				min_wid = min(min_wid, A[k][j]);
				temp = (min_wid - '0')*(i - k + 1);
				result = max(result, temp);
				k--;
			}
		}
	}
	return result;
}
/*
2019/7/29
�Լ��������ĵ�һ��������Ŀ
��Ȼ���Լ����뷨�����ǵ�һ�뷢�������⣬������������ҵ������Ƶ��Ǻ���ļ��㷽��
��������붯��ϵ�к���
���б�Ľⷨ��
*/