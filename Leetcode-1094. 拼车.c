bool carPooling(int** trips, int tripsSize, int* tripsColSize, int capacity) {
	int *a = (int*)malloc(sizeof(int) * 1001);
	int i;
	for (i = 0; i < 1001; i++)
		a[i] = 0;
	for (i = 0; i < tripsSize; i++)
	{
		a[trips[i][2]] -= trips[i][0];
		a[trips[i][1]] += trips[i][0];
	}
	int sum = 0;
	for (i = 0; i < 1001; i++)
	{
		sum += a[i];
		if (sum > capacity)
			return 0;
	}
	return 1;
}
/*
2019/7/26
贪婪问题系列，可能之前在校赛的时候着了一点门道，所以有这种思想了，就好做了许多，简单来说就是区间问题。
*/