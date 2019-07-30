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

int get_minh(int* h, int L, int R)
{
	int i, min = L;
	for (i = L; i <= R; i++)
	{
		if (h[i] < h[min])
			min = i;
	}
	return min;
}

int get_mins(int *h, int l, int r)
{
	if (l > r)
		return 0;
	int i, temp;
	i = get_minh(h, l, r);
	temp = h[i] * (r - l + 1);
	temp = max(temp, get_mins(h, l, i - 1));
	temp = max(temp, get_mins(h, i + 1, r));
	return temp;
}

int largestRectangleArea(int* heights, int heightsSize) {
	return get_mins(heights, 0, heightsSize - 1);
}
/*
2019/7/30
≥¨ ±∞°∞°∞°∞°
∑÷÷Œ
*/