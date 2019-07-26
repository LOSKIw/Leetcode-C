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
贪心系列
唉...多此一举是最尴尬的...我看标签里有一个栈结果就想强行用一下，或许是有办法...?
但是还是被评论区的这个简洁的方法折服了，看来方法要挖掘到本质，就是要思考出为什么，如果我这样做了也就不会被一个栈给桎梏住了。
*/