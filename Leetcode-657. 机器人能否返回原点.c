bool judgeCircle(char* moves) {
	int x = 0, y = 0;
	char*a = moves;
	while (*a != '\0')
	{
		if (*a == 'U')
		{
			y++;
		}
		else if (*a == 'D')
		{
			y--;
		}
		else if (*a == 'L')
		{
			x--;
		}
		else
		{
			x++;
		}
		a++;
	}
	return x == 0 && y == 0;
}
/*
2019/3/14
�ܼ򵥣���֪��Ϊʲôreturnֵ����Ϊfabs(x)+fabs(y)������ͻ�������
*/