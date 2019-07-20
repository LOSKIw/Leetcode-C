int bulbSwitch(int n) {
	int i, j;
	int *a = (int*)malloc(sizeof(int)*(n + 1));
	for (i = 0; i <= n; i++)
		a[i] = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = a; j <= n; j += i)
		{
			if (a[j] == 0)
				a[j] = 1;
			else
				a[j] = 0;
		}
	}
	int count = 0;
	for (i = 1; i <= n; i++)
		if (a[i] == 1)
			++count;
	return count;
}
/*
2019/3/23
这一版超出时间限制，虽然比较直观，但是没有想到有99999999这样的变态数据。
*/