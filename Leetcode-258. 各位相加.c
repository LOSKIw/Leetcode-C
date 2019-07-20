int addDigits(int num) {
	int sum = 0;
	do
	{
		sum = 0;
		while (num != 0)
		{
			sum += num % 10;
			num = num / 10;
		}
		num = sum;
	} while (sum / 10 != 0);
	return sum;
}
/*
2019/3/25
根据题目描述，肯定有更快捷有效率的办法，今天赶个进度。
*/