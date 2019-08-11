

int maxAbsValExpr(int* arr1, int arr1Size, int* arr2, int arr2Size) {
	int i, j;
	int max1, max2, max3, max4;
	int min1, min2, min3, min4;
	max1 = max2 = max3 = max4 = -100001;
	min1 = min2 = min3 = min4 = +100001;

	for (i = 0; i < arr1Size; i++)
	{
		if (arr1[i] + arr2[i] + i > max1)
			max1 = arr1[i] + arr2[i] + i;
		if (arr1[i] + arr2[i] + i < min1)
			min1 = arr1[i] + arr2[i] + i;

		if (arr1[i] + arr2[i] - i > max2)
			max2 = arr1[i] + arr2[i] - i;
		if (arr1[i] + arr2[i] - i < min2)
			min2 = arr1[i] + arr2[i] - i;

		if (arr1[i] - arr2[i] + i > max3)
			max3 = arr1[i] - arr2[i] + i;
		if (arr1[i] - arr2[i] + i < min3)
			min3 = arr1[i] - arr2[i] + i;

		if (arr1[i] - arr2[i] - i > max4)
			max4 = arr1[i] - arr2[i] - i;
		if (arr1[i] - arr2[i] - i < min4)
			min4 = arr1[i] - arr2[i] - i;

		if (arr1[i] + arr2[i] - i > max2)
			max2 = arr1[i] + arr2[i] - i;
		if (arr1[i] + arr2[i] - i < min2)
			min2 = arr1[i] + arr2[i] - i;
	}
	int max = -100001;
	if (max1 - min1 > max)
		max = max1 - min1;
	if (max2 - min2 > max)
		max = max2 - min2;
	if (max3 - min3 > max)
		max = max3 - min3;
	if (max4 - min4 > max)
		max = max4 - min4;
	return max;
}
/*
2019/7/23
比赛时未能完成，超时了。
不过这么一看，我离正确答案还是有点接近的
只是考虑的不够周全，没有进行更深入的数学分析
*/