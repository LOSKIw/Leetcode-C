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
�о�����...�ͺ�����һ����������Ϥqsort()��������Ŀ�������Ҳ�����Ҳ����֪�����Ժ��������ϰ��������
qsort()����������Ҳͦ�Եģ��ĸ�����������һ���Ǻ���,��һ�μ����֡�
*/