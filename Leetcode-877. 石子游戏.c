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
贪心动归...?
一开始自己有一点想法，但是考虑的太简单了，后来才从评论区找到了自己能听懂的解释。总之就是并不是我一开始想的那么简单

也没有想象中那么难，毕竟
return true就完事了！
惊了！
*/

/*
递归超时版
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

