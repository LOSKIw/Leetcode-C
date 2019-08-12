int dayOfYear(char * date) {
	int month[12] = { 31,0,31,30,31,30,31,31,30,31,30 };
	int d = (date[8] - '0') * 10 + date[9] - '0';
	int m = (date[5] - '0') * 10 + date[6] - '0';
	int y = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + date[3] - '0';
	if (y % 100 == 0)
	{
		if (y % 400 == 0)
			month[1] = 29;
		else
			month[1] = 28;
	}
	else
	{
		if (y % 4 == 0)
			month[1] = 29;
		else
			month[1] = 28;
	}
	int i, result = 0;
	for (i = 0; i < m - 1; i++)
		result += month[i];
	result += d;
	return result;
}

/*
2019/8/12
很简单的一道题目，考虑清楚四百年四年一闰，百年不闰就成
*/