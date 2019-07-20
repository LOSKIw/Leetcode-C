int climbStairs(int n) {
	int *b = (int*)malloc(sizeof(int)*(n + 1));
	b[0] = b[1] = 1;
	if (n < 2)
		return b[n];
	for (int a = 2; a <= n; a++)
		b[a] = b[a - 1] + b[a - 2];
	return b[n];
}
/*
2019/3/19
可能我原本过去拘泥于方法，只想用动态规划，结果出来了45这个测试导致超出时间范围。算法书上其实也写了这种方法会指数级的增长计算量，除非加上一个计算表来标记，有时间一定要来回算一下，用自顶向下和自下向上的方法。
*/