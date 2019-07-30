int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

typedef struct stack {
	int *A;
	int top;
}stack, *s;

int pop(s S)
{
	return S->A[--S->top];
}

int push(s S, int n)
{
	S->A[S->top++] = n;
	return 0;
}

int get_top(s S)
{
	return S->A[S->top - 1];
}

int largestRectangleArea(int* heights, int heightsSize) {
	if (heightsSize == 0)
		return 0;
	int i = 0, j, temp = 0;
	s S;
	S = (s)malloc(sizeof(stack));
	S->A = (int*)malloc(sizeof(int)*(heightsSize + 1));
	S->top = 0;
	push(S, -1);
	push(S, 0);
	for (i = 1; i < heightsSize&&get_top(S) != -1; i++)
	{
		if (heights[get_top(S)] <= heights[i])
			push(S, i);
		else
		{
			while (get_top(S) != -1 && heights[get_top(S)] > heights[i])
			{
				temp = max(temp, heights[pop(S)] * (i - 1 - get_top(S)));
			}
			push(S, i);
		}
	}
	while (get_top(S) != -1)
		temp = max(temp, heights[pop(S)] * (i - 1 - get_top(S)));
	return temp;
}
/*
2019/7/30
用到了栈的思想，感觉更像是一步步递推的动归，省去了很多步骤所以速度更快。
*/