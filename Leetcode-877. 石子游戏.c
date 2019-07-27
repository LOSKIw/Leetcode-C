int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}


int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

bool stoneGame(int* piles, int pilesSize) {
	int**A = (int**)malloc(sizeof(int*)*pilesSize);
	int i, j;
	for (i = 0; i < pilesSize; i++)
	{
		A[i] = (int*)malloc(sizeof(int)*pilesSize);
		A[i][i] = piles[i];
	}
	for (i = 1; i < pilesSize; i++)
	{
		for (j = 0; j < pilesSize - i; j++)
		{
			A[j][j + i] = max(piles[j] - A[j + 1][i + j], piles[i + j] - A[i][i + j - 1]);
		}
	}
	return A[0][pilesSize - 1] > 0;
}
/*
2019/7/27
̰�Ķ���...?
һ��ʼ�Լ���һ���뷨�����ǿ��ǵ�̫���ˣ������Ŵ��������ҵ����Լ��������Ľ��͡���֮���ǲ�������һ��ʼ�����ô��

Ҳû����������ô�ѣ��Ͼ�
return true�������ˣ�
���ˣ�
*/

/*
�ݹ鳬ʱ��
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}


int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int turn(int *A, int L, int R,int sum)
{
	if(L==R)
		return sum+A[L];
	else
	{
		if((R-L)%2==1)
		{
			return max(turn(A,L+1,R,sum+A[L]),turn(A,L,R-1,sum+A[R]));
		}
		else
		{
			return min(turn(A,L+1,R,sum-A[L]),turn(A,L,R-1,sum-A[R]));
		}
	}
}

bool stoneGame(int* piles, int pilesSize){
	if(turn(piles,0,pilesSize-1,0)>0)
		return 1;
	else
		return 0;
}
*/

