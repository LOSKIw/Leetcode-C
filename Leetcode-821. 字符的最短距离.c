int* shortestToChar(char * S, char C, int* returnSize) {
	int *A = (int*)malloc(sizeof(int)*strlen(S));
	int i, j, temp;
	for (i = 0; S[i] != '\0'; i++)
	{
		temp = 0;
		for (j = i; j < strlen(S) && S[j] != C; j++);
		if (j != strlen(S))
			temp = j - i;

		for (j = i; j >= 0 && S[j] != C; j--);

		if (temp == 0 || temp > i - j && j != -1)
			temp = i - j;

		A[i] = temp;
	}
	*returnSize = i;
	return A;
}
/*
2019/7/22
我用的是比较直接了当的做法，简称暴力求解...
应该...不，肯定有更简单的方法，要不尝试一下?
*/