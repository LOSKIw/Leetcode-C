int comp(const int*a, const int*b)
{
	return *a - *b;
}
int* sortedSquares(int* A, int ASize, int* returnSize)
{
	int *a = (int*)malloc(sizeof(int)*ASize);
	*returnSize = ASize;
	for (int i = 0; i < ASize; i++)
	{
		a[i] = A[i] * A[i];
	}
	qsort(a, ASize, sizeof(int), comp);
	return a;
}
/*
2019/3/17
感觉很迷...就好像是一个帮助你熟悉qsort()函数的题目。不过我不看答案也不会知道，以后可以来复习其他排序。
qsort()函数看起来也挺迷的，四个参数，还有一个是函数,第一次见这种。
*/