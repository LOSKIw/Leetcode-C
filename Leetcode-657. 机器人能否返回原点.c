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
很简单，不知道为什么return值不能为fabs(x)+fabs(y)，否则就会结果出错
*/