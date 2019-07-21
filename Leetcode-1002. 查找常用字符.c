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
��Ȼ˵������һ�㣬���ǻ��Ǳ���Ҫ˵��ֻ�Ǹ�������Ŀ�����ĺ�ϸ��ֻ�ǡ�
Ҳϣ����Ŀ������һ�¸�ʽ֮��ģ�Ҫ��Ȼ�Ҿͻ�ɵɵ����Ϊ��һ�����ַ��������
*/