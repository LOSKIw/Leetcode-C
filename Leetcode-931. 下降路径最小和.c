int minFallingPathSum(int** A, int ASize, int* AColSize) {
	int i, j, k, temp, min;
	int **B = (int**)malloc(sizeof(int*)*ASize);
	for (i = 0; i < ASize; i++)
		B[i] = (int*)calloc(ASize, sizeof(int));

	for (i = 0; i < ASize; i++)
	{
		for (j = 0; j < ASize; j++)
		{
			if (i == 0)
			{
				B[i][j] = A[i][j];
			}
			else
			{
				temp = 100000;
				for (k = j - 1; k <= j + 1; k++)
				{
					if (k < 0 || k == ASize)
						continue;
					if (B[i - 1][k] < temp)
						temp = B[i - 1][k];
				}
				B[i][j] = A[i][j] + temp;
			}
		}
	}
	min = 1000000;
	for (i = 0; i < ASize; i++)
	{
		if (B[ASize - 1][i] < min)
			min = B[ASize - 1][i];
	}
	return min;
}
/*
̰��+��̬�滮ϵ��
�տ�����о���������
�о���̬�滮һ�㶼�������һ����̬����ʹ��
һ�����滮���Ž�
������Լ��������
��Ȼ�м䷸�˺ü��������Ĵ���
����leetcode�������˵���ڲ����󣬲�֪��Ϊʲô��
*/