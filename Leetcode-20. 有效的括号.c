bool isValid(char* s) {
	char a[10000000];
	int temp = 0;
	char* ss = s;
	int i;
	for (i = 0; ss[i] != '\0'; i++)
	{
		if (ss[i] == '(' || ss[i] == '[' || ss[i] == '{')
		{
			a[temp++] = ss[i];
		}
		else
		{
			if (temp < 1)
				return 0;
			switch (ss[i])
			{
			case ')':if (a[temp - 1] != '(')
			{
				return 0;
			}
					 else
			{
				temp--;
			}
					 break;
			case ']':if (a[temp - 1] != '[')
			{
				return 0;
			}
					 else
			{
				temp--;
			}
					 break;
			case '}':if (a[temp - 1] != '{')
			{
				return 0;
			}
					 else
			{
				temp--;
			}
					 break;
			}
		}
	}
	if (temp != 0)
		return 0;
	return 1;
}
/*
关键词:栈
2019/3/10 第一次完成
题目测试用数据十分鬼畜，一整个屏幕的符号，我也就只能这样吧数组开到这么鬼畜了。
运用到了栈的知识，可以说是栈的试手了，感觉相比别的有栈的模块的语言，C虽然要麻烦一点点，但是有一种自己构建栈的手感，虽然也仅仅只是一个数组栈，但是能有一个整体上的栈的工作方式的理解。
简单来概括一下我的代码，栈只吸取左括号，当字符串出现右括号时与前一个左括号（temp指向）进行比对。
其中遇到的问题：
1.若是到达了结尾'\0'但是仍有左括号未有匹配，前面的检测仍然会输出true，因此最后需要检查temp是否为0（括号成对出现）。
2.若是前面的括号都已经配对，又出现了新的右括号，由于此时temp为0，temp-1的数组下标不符合，会报错，因此在判断右括号的前面要进行对temp是否为0的判断。
*/