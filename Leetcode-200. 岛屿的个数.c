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
��ᵽ�˳ɾ͸С�
���У��ƶ���ά������뷨�����ˡ��������㷨����������뷨�����Լ��ڴ��Զ���һ������ʵ�ֵġ�����a�Ǳ�����ǣ�1��Ϊ�ѱ�����
malloc����������ά����Ҳ�ǵ�һ��ʹ�ã�����˵��������һ��ָ�����飬ÿ��ָ��ָ��һ����СΪ���������飬ͬʱ��֪��Ϊʲô��ʹ��colloc�����ͻ��б����ҿ����������֣�����colloc��Ӧ����Щ��ͬ����δ�����ɣ��Ͼ�����ʹ��colloc��ԭ��Ҳ��Ϊ�˽�ʡ��Ԫ�س�ʼ��Ϊ0�Ĳ��衣
��ı�û̫���˵���ˣ�search�������һ�������ʮ�ַ������жϣ���֪����û���Ż������������Ҿ����Ѿ��ܲ������������������
˳��˵һ�£�����ɶ����Ŀһ��ʼ��grid�����Ȼ��char���͵�Ԫ�أ�����һ��ʼÿ�β���ʲô���붼���0���ڵ����Ĺ����о�������һ�Ե����ţ���������ҵĽ����Ϊgrid��1�ĸ�����ʮ�����ˣ���������ô˵�����Ŀǰ�������������걸������/ͼ��/�ݹ���Ŀ��
*/