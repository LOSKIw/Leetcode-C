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
我还能说什么，这个想法太巧妙了简直。
评论区所给出来的想法。即其既然是由1~N组成，那么第一个I对应的绝对是最小值，第一个D对应的绝对是最大值，之后以此类推...天，真的有种被智商碾压的感觉。
*/