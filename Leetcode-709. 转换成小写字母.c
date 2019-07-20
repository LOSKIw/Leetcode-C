char* toLowerCase(char* str) {
	char* sstr = str;
	while (*sstr != '\0')
	{
		if (*sstr >= 'A'&&*sstr <= 'Z')
			*sstr = *sstr + 32;
		sstr++;

	}
	return str;
}
/*
2019/3/18
很简单，没有太多可说。
*/