int numEquivDominoPairs(int** dominoes, int dominoesSize, int* dominoesColSize) {
	int i, j;
	int count = 0, temp;
	for (i = 0; i < dominoesSize; i++)
	{
		if (dominoes[i][0] == -1)
			continue;
		temp = 1;
		for (j = i + 1; j < dominoesSize; j++)
		{
			if (dominoes[j][0] == -1)
				continue;
			if ((dominoes[i][0] == dominoes[j][1] && dominoes[i][1] == dominoes[j][0]) || (dominoes[i][1] == dominoes[j][1] && dominoes[i][0] == dominoes[j][0]))
			{
				temp++;
				dominoes[j][0] = -1;
			}
		}
		count += (temp*(temp - 1) / 2);
		dominoes[i][0] = -1;
	}
	return count;
}
/*
2019/7/21
第一次参赛写出来的第一道题目
比较简单，我进行了一小小点优化，不进行多余判断并计数
不知道有没有实质的作用
还是比较简单的一道题目
*/