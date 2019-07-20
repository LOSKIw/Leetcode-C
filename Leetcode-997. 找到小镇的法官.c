int findJudge(int N, int** trust, int trustSize, int* trustColSize) {
	int *a = (int*)malloc(sizeof(int)*(N + 1));
	int i;
	for (i = 0; i <= N; i++)
	{
		a[i] = 1;
	}
	for (i = 0; i < trustSize; i++)
	{
		a[trust[i][0]] = 0;
		if (a[trust[i][1]] != 0)
			a[trust[i][1]]++;
	}
	int result = 0;
	int count = 0;
	for (i = 1; i <= N; i++)
	{
		if (a[i] == N)
		{
			count++;
			result = i;
			if (count >= 2)
				return -1;
		}
	}
	if (result == 0)
		return -1;
	return result;
}
/*
2019/7/20
������
�ܼ򵥵�һ��������Ŀ��������Ҫע��һЩϸ�ڣ�����Ҫ�������ŵ��˵ļ������㣬��Ϊ����Ȼ�����ŵ��ˣ���˵�����Ƿ��١�

*/