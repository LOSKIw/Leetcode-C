int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
	int i, j, flag = 0, count, temp, min;
	for (count = 0; count < arr1Size;)
	{
		if (arr1[count] == arr2[flag])
		{
			count++;
		}
		for (j = count; j < arr1Size; j++)
		{
			if (arr1[j] == arr2[flag])
			{
				temp = arr1[j];
				arr1[j] = arr1[count];
				arr1[count++] = temp;
			}
		}
		if (flag == arr2Size - 1)
			break;
		flag++;
	}

	for (i = count; i < arr1Size; i++)
	{

		for (j = i; j < arr1Size; j++)
		{
			if (arr1[j] < arr1[i])
			{
				temp = arr1[j];
				arr1[j] = arr1[i];
				arr1[i] = temp;
			}
		}
	}
	*returnSize = arr1Size;
	return arr1;
}
/*
2019/7/22
还是比较简单的一道题目，但是一开始没有读题，以为不会有别的数字出现...
但是看来我对排序的细节还有问题，最近几天老是因为一点点小错导致升序降序排反。
可能有更简单的方法?【一般都是，毕竟我是暴力求解怪
*/