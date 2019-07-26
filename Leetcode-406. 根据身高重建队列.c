int** reconstructQueue(int** people, int peopleSize, int* peopleColSize, int* returnSize, int** returnColumnSizes) {
	if (peopleSize == 0)
	{
		*returnSize = 0;
		*returnColumnSizes = (int*)malloc(sizeof(int));
		(*returnColumnSizes)[0] = 0;
		return NULL;
	}
	int** a = (int**)malloc(sizeof(int*)*peopleSize);
	int i, j, temp, *t;
	*returnSize = peopleSize;
	*returnColumnSizes = (int*)malloc(sizeof(int)*peopleSize);
	for (i = 0; i < peopleSize; i++)
		(*returnColumnSizes)[i] = 2;

	for (i = 0; i < peopleSize; i++)
	{
		a[i] = (int*)malloc(sizeof(int) * 2);
		a[i][0] = -1;
		for (j = i + 1; j < peopleSize; j++)
		{
			if (people[j][0] < people[i][0] || (people[j][0] == people[i][0] && people[j][1] < people[i][1]))
			{
				t = people[j];
				people[j] = people[i];
				people[i] = t;
			}
		}
	}
	int count;
	for (i = 0; i < peopleSize; i++)
	{
		count = 0;
		j = 0;
		while (a[j][0] != people[i][0] && a[j][0] != -1)
			j++;
		for (; count < people[i][1]; j++)
		{
			if (a[j][0] == -1 || a[j][0] == people[i][0])
				count++;
		}
		while (a[j][0] != -1)
			j++;
		a[j] = (int*)malloc(sizeof(int) * 2);
		a[j] = people[i];
	}
	return a;
}
/*
2019/7/26
��΢��һ���ɾ͸У�̰��ϵ�����⣬������Ŀ����һ��ע��֮��������ˣ������ڿ��������ʱ��ʱ���벻��ȫ��˼·���ˣ����ǳ��򲻹��Ͻ�������Ҫ������
*/