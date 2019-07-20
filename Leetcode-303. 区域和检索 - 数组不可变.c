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
��һ���Ƚ������ģ����нṹ�Լ������������Ŀ�ɡ�
����ıȽϼ򵥡�
PS : �ո�lou��һ�����ۣ����ֹ�Ȼ�������̫���ˣ�Ч��̫�ͣ���Ҫ�Ż���
*/