int delete_c(char* c, int n)
{
	int i;
	for (i = n; c[i] != '\0'; i++)
	{
		c[i] = c[i + 1];
	}
	return 0;
}

char * removeKdigits(char * num, int k) {
	if (strlen(num) == k || num == NULL)
		return "0";
	int i, j, flag;
	for (i = 0; i < k; i++)
	{
		flag = 0;
		for (j = 0; num[j + 1] != '\0'; j++)
		{
			if (num[j] > num[j + 1])
			{
				delete_c(num, j);
				flag = 1;
				break;
			}
		}
		if (num[j + 1] == '\0'&&flag == 0)
			num[j] = '\0';
	}
	while (num[0] == '0')
	{
		delete_c(num, 0);
	}
	if (strlen(num) == 0)
		return "0";
	return num;
}
/*
2019/7/26
̰��ϵ��
��...���һ���������ε�...�ҿ���ǩ����һ��ջ�������ǿ����һ�£��������а취...?
���ǻ��Ǳ���������������ķ����۷��ˣ���������Ҫ�ھ򵽱��ʣ�����Ҫ˼����Ϊʲô���������������Ҳ�Ͳ��ᱻһ��ջ������ס�ˡ�
*/