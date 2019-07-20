bool backspaceCompare(char* S, char* T) {
	int i, j;
	char *a = S, *b = T;
	char s[200], t[200];
	for (i = 0; *a != '\0';)
	{
		if (*a != '#')
		{
			s[i] = *a;
			i++;
			a++;
		}
		else if (*a == '#')
		{
			if (i == 0)
			{
				a++;
				continue;
			}
			i--;
			a++;
		}
	}
	s[i] = '\0';
	for (j = 0; *b != '\0';)
	{
		if (*b != '#')
		{
			t[j] = *b;
			j++;
			b++;
		}
		else if (*b == '#')
		{
			if (j == 0)
			{
				b++;
				continue;
			}
			j--;
			b++;
		}
	}
	t[j] = '\0';
	if (strcmp(t, s) != 0)
		return 0;
	else
		return 1;
}
/*
2019/3/12
突然想要做，就开始肝了，然而被一些奇奇怪怪的错误给卡住了，比如一开始读错了题目以为只要忽略'#'即可，或者在粘贴两段相同功能的代码段时忘记修改变量名，并且最后有搞乱了continue与功能代码的顺序导致无尽的循环。
主要来讲，还是栈的应用，读到'#'便进行回退（类似栈的pop?），在看评论的时候了解到了若退格数大于当前字符数也会有问题，因此也加了一层判断。
*/