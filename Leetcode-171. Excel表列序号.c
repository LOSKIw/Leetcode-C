int times(int n, int time)
{
	int i;
	for (i = 0; i < time; i++)
	{
		n = n * 26;
	}
	return n;
}

int titleToNumber(char * s) {
	int i, size, sum = 0, temp;
	size = strlen(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		temp = s[i] - 'A' + 1;
		sum += times(temp, size - i - 1);
	}
	return sum;
}
/*
2019/7/24
�Ƚϼ򵥵���Ŀ����Ȼ�һ��Ƿ���һЩ���ۣ���������...�����㷴ʲô��...
*/