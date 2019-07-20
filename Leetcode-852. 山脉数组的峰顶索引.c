int peakIndexInMountainArray(int* A, int ASize) {
	int max = A[0];
	int flag = 0;
	int i;
	for (i = 1; i < ASize; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			flag = i;
		}
	}
	return flag;
}
/*
2019/3/24
沾沾自喜，以为用的方法稍微不同了一点，去评论区一看发现就是找最大项...
看来还是太执着于算法了...
*/