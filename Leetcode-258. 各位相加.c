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
������Ŀ�������϶��и������Ч�ʵİ취������ϸ����ȡ�
*/