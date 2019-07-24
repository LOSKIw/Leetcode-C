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
�ܵ��۵�һ����Ŀ...��c�����ǳ����Ѻ�...��ֻ�ܿ�������qsort
�Ժ�ʲôʱ����Ϥһ�»�������ɡ�Ӧ�ý�������ְ�...
*/