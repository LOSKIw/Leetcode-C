int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
	int i, j;
	*returnColumnSizes = (int*)malloc(sizeof(int)*numRows);
	for (i = 0; i < numRows; i++)
	{
		(*returnColumnSizes)[i] = i + 1;
	}
	int **A = (int**)malloc(sizeof(int*)*numRows);
	for (i = 0; i < numRows; i++)
	{
		A[i] = (int*)malloc(sizeof(int)*(i + 1));
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				A[i][j] = 1;
			}
			else
			{
				A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
			}
		}
	}
	*returnSize = numRows;
	return A;
}
/*
2019/7/23
ԭ��Ӧ���ǱȽϼ򵥵���Ŀ...�������...
1.��֮ǰ�����������߿������ͰѺ����������ˣ�������а��첻�ԣ������ٲ���...
2.û���Ķ�Ӣ�����ʾ���Ͳ�֪�����ص����Ǵ�С��Ϣ����Ĵ洢��ʽ...�ֿ��˰��죬�������۲�����...
*/