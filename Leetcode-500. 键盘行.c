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
ȥ�������뿴returnsize��ʲô���������������������ÿ��ܱ��ҵķ����򵥾����ˣ���ʵ��ԭ����Ҫ��ͬ��ͳ�Ƶģ�����������ַ��ֱ��¼��
����ڹ��������л���������ͦ���С���⣬����˵�ı���֮ǰ�ı���ԭֵ��ȫ����˴�д������άָ������Ĵ���ȵȡ�������Ҫ��ϸ�ڡ�
����Ҫ��ͬ��ͳ�Ƶķ���ʵ��һ�£�Ҫ��Ȼ�����ˡ�
*/