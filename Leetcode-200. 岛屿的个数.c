int move[4][2] = { {0,1},
				{0,-1},
				{1,0},
				{-1,0} };

int search(char **grid, int **a, int x, int y, int row, int col) {
	int s;
	if (x < 0 || y < 0 || x >= row || y >= col)
		return 0;
	if (a[x][y] == 1 || grid[x][y] == '0')
		return 0;
	a[x][y] = 1;
	if (grid[x][y] == '1')
	{
		for (s = 0; s < 4; s++)
		{
			search(grid, a, x + move[s][0], y + move[s][1], row, col);
		}
	}
	return 1;
}

int numIslands(char** grid, int gridRowSize, int gridColSize) {
	int i, j;
	int count = 0;
	int** a;
	a = (int**)malloc(sizeof(int*)*gridRowSize);
	for (i = 0; i < gridRowSize; i++)
		a[i] = (int*)malloc(sizeof(int)*gridColSize);
	for (i = 0; i < gridRowSize; i++)
	{
		for (j = 0; j < gridColSize; j++)
		{
			a[i][j] = 0;
		}
	}
	for (i = 0; i < gridRowSize; i++)
	{
		for (j = 0; j < gridColSize; j++)
		{
			if (a[i][j] == 0 && grid[i][j] == '1')
			{
				count++;
				search(grid, a, i, j, gridRowSize, gridColSize);
			}
		}
	}
	return count;
}
/*
2019/3/22
体会到了成就感。
其中，移动二维数组的想法借用了《啊哈！算法》，其余的想法都是自己在粗略读过一遍后独立实现的。数组a是遍历标记，1则为已遍历。
malloc函数创建二维数组也是第一次使用，简单来说，先申请一个指针数组，每个指针指向一个大小为列数的数组，同时不知道为什么，使用colloc函数就会有报错，我看不懂的那种，可能colloc的应用有些许不同而我未能理解吧，毕竟我想使用colloc的原因也是为了节省将元素初始化为0的步骤。
别的便没太多好说的了，search函数中我还是用了十分繁琐的判断，不知道有没有优化方案，但是我觉得已经很不错，考虑了所有情况。
顺便说一下，这个可恶的题目一开始的grid数组居然是char类型的元素，让我一开始每次不论什么输入都输出0，在调整的过程中就落下了一对单引号，结果又让我的结果变为grid中1的个数，十分气人，不过再怎么说，这个目前是我做过的最完备的搜索/图论/递归题目。
*/