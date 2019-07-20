char** findWords(char** words, int wordsSize, int* returnSize) {
	int a[26] = { 2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3 };
	int i, j;
	int flag = 0, s = 0;
	char temp;
	int mark;
	char **save = (char**)malloc(sizeof(char*)*wordsSize);
	for (i = 0; i < wordsSize; i++)
	{
		if (words[i][0] >= 'a'&&words[i][0] <= 'z')
			temp = words[i][0] - 32;
		else
			temp = temp = words[i][0];
		for (j = 0; words[i][j] != '\0'; j++)
		{
			if (words[i][j] >= 'a'&&words[i][j] <= 'z')
				mark = words[i][j] - 32;
			else
				mark = words[i][j];
			if (a[mark - 'A'] != a[temp - 'A'])
			{
				s = 1;
				break;
			}

		}
		if (s == 0)
		{
			save[flag] = words[i];
			flag++;
		}
		s = 0;
	}
	*returnSize = flag;
	return save;
}
/*
2019/3/24
去评论区想看returnsize是什么结果看到了这个方法，觉得可能比我的方法简单就用了，其实我原来想要用同行统计的，而不是这个字符分别记录。
这个在构建过程中还是遇到了挺多的小问题，比如说改变了之前改变了原值（全变成了大写），二维指针数组的存入等等。还是需要抠细节。
尽快要把同行统计的方法实现一下，要不然就忘了。
*/