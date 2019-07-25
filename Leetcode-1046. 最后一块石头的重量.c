int lastStoneWeight(int* stones, int stonesSize) {
	if (stonesSize == 0)
		return 0;
	int i, j, temp;
	int size = stonesSize;
	while (size > 1)
	{
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (stones[j] > stones[size - i - 1])
				{
					temp = stones[size - i - 1];
					stones[size - i - 1] = stones[j];
					stones[j] = temp;
				}
			}
		}
		stones[size - 2] = stones[size - 1] - stones[size - 2];
		if (stones[size - 2] == 0)
			size -= 2;
		else
			size--;
	}
	if (size == 1)
		return stones[0];
	else
		return 0;
}
/*
2019/7/25
归在了贪心的系列里面，但是感觉这个算着比较暴力...
*/