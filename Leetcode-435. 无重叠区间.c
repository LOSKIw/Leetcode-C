int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
	if (intervalsSize == 0)
		return 0;
	int i, j, *temp;
	for (i = 0; i < intervalsSize; i++)
	{
		for (j = i + 1; j < intervalsSize; j++)
		{
			if (intervals[j][1]<intervals[i][1] || intervals[j][1] == intervals[i][1] && intervals[j][0]>intervals[i][0])
			{
				temp = intervals[j];
				intervals[j] = intervals[i];
				intervals[i] = temp;
			}
		}
	}

	int count = 0;
	for (i = 0; i < intervalsSize; i++)
	{
		if (intervals[i] == NULL)
			continue;
		for (j = i + 1; j < intervalsSize; j++)
		{
			if (intervals[j] == NULL)
				continue;
			if (intervals[j][0] < intervals[i][1])
			{
				intervals[j] = NULL;
				count++;
			}
		}
	}

	return count;
}
/*
2019/7/26
贪心系列，一开始没想出来
后来看了书有自己的思路后，做出来了一个，但是不正确因为没有考虑到方方面面
并不是单纯的区间大小排序，还有更多的考虑因素。
之后看了题解，明白了，希望能自己记住这个事情。
不过不知道有没有严谨的逻辑推理来得出这个结论
*/