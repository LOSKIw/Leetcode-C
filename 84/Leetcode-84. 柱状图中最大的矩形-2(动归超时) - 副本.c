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

int largestRectangleArea(int* heights, int heightsSize) {
	int i, j;
	long long temp, result = 0, min_h;
	for (i = 0; i < heightsSize; i++)
	{
		if (heights != 0)
		{
			j = i;
			min_h = heights[i];
			while (j >= 0 && heights[j] != 0)
			{
				min_h = min(min_h, heights[j]);
				result = max(result, (i - j + 1)*min_h);
				j--;
			}
		}
	}
	return result;
}
/*
2019/7/30
动归
超时了又....
*/