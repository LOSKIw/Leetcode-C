int distributeCandies(int* candies, int candiesSize) {
	int A[200001] = { 0 };
	int i, j, count = 0;
	for (i = 0; i < candiesSize; i++)
	{
		j = candies[i] + 100000;
		A[j]++;
		if (A[j] <= 1)
			count++;
	}
	if (count > candiesSize / 2)
		return candiesSize / 2;
	else
		return count;
}
/*
2019/7/23
暴力排序查重超时了...
但是我也没有想到可以开一个200001这么大的int数组...惊了
可能优化有不同的极限吧...
*/