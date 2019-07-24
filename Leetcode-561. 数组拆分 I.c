int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int arrayPairSum(int* nums, int numsSize)
{
	int sum = 0;
	qsort(nums, numsSize, sizeof(nums[0]), cmp);

	for (int i = 0; i < numsSize; i += 2)
	{
		sum += nums[i];
	}
	return sum;
}
/*
2019/7/24
很蛋疼的一道题目...对c语音非常不友好...我只能开挂用了qsort
以后什么时候熟悉一下基数排序吧【应该叫这个名字吧...
*/