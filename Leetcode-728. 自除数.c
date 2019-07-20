int* selfDividingNumbers(int left, int right, int* returnSize) {
	int i = left;
	int *a = (int*)malloc(sizeof(int)*(right - left));
	int temp, temp1, flag, count = 0;
	while (i <= right)
	{
		flag = 1;
		temp = i;
		while (temp > 1)
		{
			temp1 = temp % 10;
			if (temp1 == 0 || i % temp1 != 0)
			{
				flag = 0;
				break;
			}
			temp = temp / 10;
		}
		if (flag == 1)
			a[count++] = i;
		i++;
	}
	*returnSize = count;
	return a;
}
/*
2019/3/29
比较简单，不知道有没有优化方法，以后再看。
*/