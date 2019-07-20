int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
	int *B = (int*)malloc(sizeof(int)*ASize);
	*returnSize = ASize;
	int ji = 1, ou = 0;
	while (ou < ASize || ji < ASize)
	{
		while (ji < ASize&&A[ji] % 2 == 1)
		{
			B[ji] = A[ji];
			ji += 2;
		}
		while (ou < ASize&&A[ou] % 2 == 0)
		{
			B[ou] = A[ou];
			ou += 2;
		}
		if (ou < ASize)
		{
			B[ji] = A[ou];
			B[ou] = A[ji];
			ji += 2;
			ou += 2;
		}
	}
	return B;
}
/*
2019/7/20
一个其实很简单的题目，但是我在数组判断的过程中犯了好多错误...
最主要的是数组越界的判断，不过可能与我书写不规范也有关系。
最大while的判断内容我一开始也少了一半，提示我缺少任何细节都会有意想不到的错误发生。
*/