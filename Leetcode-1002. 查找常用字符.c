char ** commonChars(char ** A, int ASize, int* returnSize) {
	int temp[26], count[26];
	int i;
	int k;
	int j;
	for (i = 0; i < 26; i++)
	{
		temp[i] = 0;
		count[i] = 0;
	}
	for (i = 0; i < ASize; i++)
	{
		for (k = 0; k < 26; k++)
		{
			temp[k] = 0;
		}
		j = 0;
		while (A[i][j] != '\0')
		{
			temp[A[i][j] - 'a']++;
			j++;
		}
		for (j = 0; j < 26; j++)
		{
			if (count[j] == -1)
				continue;
			if (temp[j] == 0)
			{
				count[j] = -1;
			}
			else
			{
				if (count[j] == 0)
					count[j] = temp[j];
				else if (count[j] > temp[j])
					count[j] = temp[j];
			}
		}
	}
	int sum = 0;
	for (i = 0; i < 26; i++)
	{
		if (count[i] != -1)
			sum += count[i];
	}
	char **B = (char**)malloc(sizeof(char*)*sum);
	*returnSize = sum;
	k = 0;
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < count[i]; j++)
		{
			B[k] = (char*)malloc(sizeof(char) * 2);
			B[k][0] = 'a' + i;
			B[k++][1] = '\0';
		}

	}
	return B;
}
/*
2019/7/21
虽然说繁琐了一点，但是还是必须要说这只是个基本题目，考的很细节只是。
也希望题目能提醒一下格式之类的，要不然我就会傻傻的以为用一整个字符串输出了
*/