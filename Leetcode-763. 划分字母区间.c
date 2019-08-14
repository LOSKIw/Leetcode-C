int* partitionLabels(char * S, int* returnSize) {
	int *A = (int*)malloc(sizeof(int) * 26);
	int *B = (int*)malloc(sizeof(int) * 26);
	int i;
	for (i = 0; i < 26; i++)
	{
		A[i] = 0;
	}
	int count = 0;
	for (i = strlen(S) - 1; i >= 0 && count <= 26; i--)
	{
		if (A[S[i] - 'a'] == 0)
		{
			A[S[i] - 'a'] = i;
			count++;
		}
	}

	int flag, temp_num = 0, temp = 0;
	i = 0;
	while (i < strlen(S))
	{
		flag = 0;
		temp = A[S[i] - 'a'];
		while (i <= temp)
		{
			if (A[S[i] - 'a'] > temp)
				temp = A[S[i] - 'a'];
			i++;
			flag++;
		}
		B[temp_num++] = flag;
	}
	*returnSize = temp_num++;
	return B;
}
/*
2019/8/15
̰��ϵ��
һ��ʼ��һ���С�뷨����û�г���ϵ��������ʾ֮�����������һ����뷨������������������и��õ��Ż�������
*/