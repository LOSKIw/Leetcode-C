int* diStringMatch(char* S, int* returnSize) {
	*returnSize = strlen(S) + 1;
	int n = strlen(S);
	int i = 0, j = strlen(S);
	int *a = (int*)malloc(sizeof(int)*(n + 1));
	a[0] = 0;
	for (int s = 0; s < strlen(S); s++)
	{
		if (S[s] == 'I')
		{
			a[s] = i++;
		}
		else
		{
			a[s] = j--;
		}
	}
	a[strlen(S)] = i;
	return a;
}
/*
2019/3/17
�һ���˵ʲô������뷨̫�����˼�ֱ��
�����������������뷨�������Ȼ����1~N��ɣ���ô��һ��I��Ӧ�ľ�������Сֵ����һ��D��Ӧ�ľ��������ֵ��֮���Դ�����...�죬������ֱ�������ѹ�ĸо���
*/