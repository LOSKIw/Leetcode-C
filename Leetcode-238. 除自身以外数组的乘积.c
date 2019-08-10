int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
	int *A = (int*)malloc(sizeof(int)*numsSize);
	int *B = (int*)malloc(sizeof(int)*numsSize);
	int i, j, k;
	*returnSize = numsSize;
	for (i = 0; i < numsSize; i++)
	{
		if (i == 0)
		{
			A[i] = nums[i];
		}
		else
		{
			A[i] = nums[i] * A[i - 1];
		}
	}
	for (i = numsSize - 1; i > -1; i--)
	{
		if (i == numsSize - 1)
		{
			B[i] = nums[i];
		}
		else
		{
			B[i] = nums[i] * B[i + 1];
		}
	}
	for (i = 0; i < numsSize; i++)
	{
		if (i == 0)
			nums[i] = B[i + 1];
		else if (i == numsSize - 1)
			nums[i] = A[i - 1];
		else
			nums[i] = A[i - 1] * B[i + 1];
	}
	return nums;
}
/*
2019/8/10
看了题解区大佬的思路才会做的...太巧妙了
*/