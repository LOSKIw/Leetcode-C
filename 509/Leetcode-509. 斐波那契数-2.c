int fib(int N) {
	if (N < 2)
		return N;
	int i;
	int a = 0, b = 1, c;
	for (i = 2; i <= N; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
/*
2019/7/21
比较基础，非递归版
*/