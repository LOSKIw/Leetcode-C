int peakIndexInMountainArray(int* A, int ASize) {
	int max = A[0];
	int flag = 0;
	int i;
	for (i = 1; i < ASize; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			flag = i;
		}
	}
	return flag;
}
/*
2019/3/24
մմ��ϲ����Ϊ�õķ�����΢��ͬ��һ�㣬ȥ������һ�����־����������...
��������ִ̫�����㷨��...
*/