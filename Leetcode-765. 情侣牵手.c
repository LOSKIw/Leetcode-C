int minSwapsCouples(int* row, int rowSize) {
	int *A = (int*)malloc(sizeof(int)*rowSize / 2);
	int i, j, count = 0, temp, flag;
	int x1, x2;
	for (i = 0; i < rowSize / 2; i++)
	{
		A[i] = 0;
	}
	for (i = 0; i < rowSize; i += 2)
	{
		if (row[i] > row[i + 1])
		{
			x1 = row[i + 1];
			x2 = row[i];
			flag = i;
		}
		else
		{
			x1 = row[i];
			x2 = row[i + 1];
			flag = i + 1;
		}

		if (x1 % 2 == 0 && x1 + 1 != x2)
		{
			for (j = i + 2; j < rowSize; j++)
			{
				if (row[j] == x1 + 1)
				{
					temp = row[j];
					row[j] = row[flag];
					row[flag] = temp;
					break;
				}
			}
			count++;
		}
		else if (x1 % 2 != 0)
		{
			for (j = i + 2; j < rowSize; j++)
			{
				if (row[j] == x1 - 1)
				{
					temp = row[j];
					row[j] = row[flag];
					row[flag] = temp;
					break;
				}
			}
			count++;
		}
	}
	return count;
}
/*
2019/8/17
̰�İ�...
һ��ʼ����Ϊ�������һ���򵥵���·����ʵ���ܸ��Ӹ��ӣ���ΪҪ�кö�������ۣ��������ˣ�������⣬ֻ����˼·Ȼ��д�����Լ��ı�﷽ʽ��
*/