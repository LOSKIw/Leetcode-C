int getnum(int *A, int n, int num)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (A[i] == num)
			return i;
	}
	return -1;
}

int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) {
	int i, j;
	int *A = (int*)malloc(sizeof(int)*findNumsSize);
	for (i = 0; i < findNumsSize; i++)
		A[i] = -1;

	for (i = 0; i < findNumsSize; i++)
	{
		j = getnum(nums, numsSize, findNums[i]) + 1;
		for (; j < numsSize; j++)
		{
			if (nums[j] > findNums[i])
			{
				A[i] = nums[j];
				break;
			}
		}
	}
	*returnSize = findNumsSize;
	return A;
}
/*
2019/7/21
较为简单的题目
可能有优化方法？但是我还是用了简单粗暴的方法
*/