int smallestRangeI(int* A, int ASize, int K) {
	int min = 10001, max = -1;
	int i;
	for (i = 0; i < ASize; i++)
	{
		if (A[i] < min)
			min = A[i];
		if (A[i] > max)
			max = A[i];
	}
	if (max - min < 2 * K)
		return 0;
	else
		return max - min - 2 * K;
}
/*
2019/7/21
��������Ŀ�Ժ��Ǹо��Ƚϼ򵥵�
����
��Ŀд��ʮ��ģ�����ɣ����˸о�ʮ������
*/