int bulbSwitch(int n) {
	int i, j;
	int *a = (int*)malloc(sizeof(int)*(n + 1));
	for (i = 0; i <= n; i++)
		a[i] = 0;
	int count = 0, temp = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
				temp++;
		}
		if (temp % 2 == 1)
			count++;
		temp = 0;
	}
	return count;
}
/*
2019/3/23
��һ�泬��ʱ�����ƣ���΢������һ�㣬������û���ҵ��㡣
*/