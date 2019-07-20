int repeatedNTimes(int* A, int ASize) {
	int n[10001], s = 0;
	int i;
	for (i = 0; i < 10001; n[i++] = 0);
	for (i = 0; i < ASize; i++)
	{
		n[A[i]]++;
		if (n[A[i]] == ASize / 2)
			return A[i];
	}
	return 0;
}
/*
2019/3/16
没什么好说的也...不过做的比较曲折...
*/