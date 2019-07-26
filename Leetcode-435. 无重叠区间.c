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
̰��ϵ�У�һ��ʼû�����
�������������Լ���˼·����������һ�������ǲ���ȷ��Ϊû�п��ǵ���������
�����ǵ����������С���򣬻��и���Ŀ������ء�
֮������⣬�����ˣ�ϣ�����Լ���ס������顣
������֪����û���Ͻ����߼��������ó��������
*/