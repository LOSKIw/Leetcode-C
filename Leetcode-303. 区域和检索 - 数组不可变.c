typedef struct {
	int *num;
	int n;
} NumArray;

NumArray* numArrayCreate(int* nums, int numsSize) {
	int i;
	NumArray *s = (NumArray*)malloc(sizeof(NumArray));
	s->num = (int*)malloc(sizeof(int)*numsSize);
	s->n = numsSize;
	for (i = 0; i < numsSize; i++)
	{
		s->num[i] = nums[i];
	}
	return s;
}

int numArraySumRange(NumArray* obj, int i, int j) {
	int a, sum = 0;
	for (a = i; a <= j; a++)
	{
		sum = sum + obj->num[a];
	}
	return sum;
}

void numArrayFree(NumArray* obj) {
	free(obj);

}
/*
2019 / 3 / 19
第一个比较完整的，内有结构以及多个函数的题目吧。
我想的比较简单。
PS : 刚刚lou了一眼评论，发现果然是我想的太简单了，效率太低，需要优化。
*/