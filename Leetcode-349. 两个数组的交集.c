int check(int *a, int num)
{
	int i, j, temp, max;
	for (i = 0; i < num; i++)
	{
		max = i;
		for (j = i; j < num; j++)
		{
			if (a[max] > a[j])
			{
				max = j;
			}
		}
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
	}
	return 0;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	if (nums1Size == 0 || nums2Size == 0)
	{
		*returnSize = 0;
		int *A;
		return A;
	}
	check(nums1, nums1Size);
	check(nums2, nums2Size);
	int *B = (int*)malloc(sizeof(int)*nums1Size);
	int count = -1, temp;
	int i = 0, j = 0;
	while (i < nums1Size&&j < nums2Size)
	{
		while (j < nums2Size&&nums2[j] < nums1[i])
		{
			j++;
		}
		if (j >= nums2Size)
			break;
		if (nums2[j] == nums1[i])
		{
			B[++count] = nums1[i];
		}
		temp = nums1[i];
		while (i < nums1Size&&nums1[i] == temp)
		{
			i++;
		}
	}
	*returnSize = count + 1;
	return B;
}
/*
���۰����������ζడ
���ָ���������Խ�羯ʾ
���ָ����벻���Ĳ�������
���ָ�����ϸ����©...��Ҫ�Լ�����ϰ,��Ȼ��++count��count++��ͬ���µ�Խ�綼���ֲ�����...
*/