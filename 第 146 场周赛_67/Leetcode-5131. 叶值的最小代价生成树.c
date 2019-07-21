int mctFromLeafValues(int* arr, int arrSize) {
	int i, j;
	int sum = 0, temp_min = 226, x1, x2, y1, y2;
	for (i = 0; i < arrSize - 1; i++)
	{
		temp_min = 226;
		x1 = -1; x2 = -1;
		for (j = 0; j < arrSize; j++)
		{
			if (arr[j] != 0)
			{
				if (x1 == -1)
				{
					x1 = j;
				}
				else
				{
					x2 = j;
					if (arr[x1] * arr[x2] < temp_min)
					{
						temp_min = arr[x1] * arr[x2];
						y1 = x1; y2 = x2;
					}
					x1 = x2;
				}

			}

		}
		if (arr[y1] > arr[y2])
		{
			arr[y2] = 0;
		}
		else
		{
			arr[y1] = 0;
		}
		sum += temp_min;
	}
	return sum;
}
/*
2019/7/21
用到了哈夫曼编码，或者是最小二叉树的方法，生成子树后"合并"，这里就是清除较小的值
感觉还是蛮有成就感的
*/