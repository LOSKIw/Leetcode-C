int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
	int *B = (int*)malloc(sizeof(int)*ASize);
	*returnSize = ASize;
	int ji = 1, ou = 0;
	while (ou < ASize || ji < ASize)
	{
		while (ji < ASize&&A[ji] % 2 == 1)
		{
			B[ji] = A[ji];
			ji += 2;
		}
		while (ou < ASize&&A[ou] % 2 == 0)
		{
			B[ou] = A[ou];
			ou += 2;
		}
		if (ou < ASize)
		{
			B[ji] = A[ou];
			B[ou] = A[ji];
			ji += 2;
			ou += 2;
		}
	}
	return B;
}
/*
2019/7/20
һ����ʵ�ܼ򵥵���Ŀ���������������жϵĹ����з��˺ö����...
����Ҫ��������Խ����жϣ���������������д���淶Ҳ�й�ϵ��
���while���ж�������һ��ʼҲ����һ�룬��ʾ��ȱ���κ�ϸ�ڶ��������벻���Ĵ�������
*/