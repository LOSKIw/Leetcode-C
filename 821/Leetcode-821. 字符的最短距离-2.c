int* shortestToChar(char * S, char C, int* returnSize) {
	int*A;
	int i, j, count = 0, size;
	for (i = 0; S[i] != '\0'; i++)
	{
		if (S[i] == C)
			count++;
	}
	int *B = (int*)malloc(sizeof(int)*i);
	*returnSize = i;
	size = i;

	A = (int*)malloc(sizeof(int)*count);
	j = 0;
	for (i = 0; S[i] != '\0'; i++)
	{
		if (S[i] == C)
			A[j++] = i;
	}
	int temp;
	for (i = 0; S[i] != '\0'; i++)
	{
		temp = 10001;
		for (j = 0; j < count; j++)
		{
			if (abs(A[j] - i) < temp)
				temp = abs(A[j] - i);
		}
		B[i] = temp;
	}
	return B;
}
/*
2019/7/22
Ӧ��Ҳ���Ǵ��������õ����Ż������ɣ�����ȷʵ��ʱ��ռ��϶������Ż�
����...���и��򵥵ķ�����
*/