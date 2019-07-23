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
原本应该是比较简单的题目...结果发现...
1.我之前可能做过或者看过，就把函数参数调了，结果运行半天不对，发现少参数...
2.没有阅读英语的提示，就不知到返回的三角大小信息数组的存储方式...又卡了半天，看了评论才明白...
*/