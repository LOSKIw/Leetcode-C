int minDepth(struct TreeNode* root) {
	int x, y;
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	else if (root->left == NULL)
	{
		y = minDepth(root->right);
		return y + 1;
	}
	else if (root->right == NULL)
	{
		y = minDepth(root->left);
		return y + 1;
	}
	x = minDepth(root->left);
	y = minDepth(root->right);
	if (x > y)
		return y + 1;
	else
		return x + 1;
}
/*
2019/3/23
������⿨ס�˺ܾã����ͨ����������һ���𰸵�ģ��������м��漰���������ۣ��ܻ�����©�ĵط����о��ݹ��ʱ��Ҫ�뿼��ȫ�滹�Ǻ��ѵġ�
��һ���û�б��棬�����ҵ��뷨��֮ǰ�Ķ�������ĿӦ�ú��񣬶����������һ��������
�����ڹ����и�����һ�����ѡ���Leetcode�Ļ�����ȫ�ֱ�����Ҫ��Ȼ���׳��ֱ��������ϲ��Խ����ͬ�������
֮ǰ���뷨����"Ѱ��NULL"��㣬Ҳ��˵������ҵ����⣬�����ڵ�ֻ��һ�յ�nextָ�룬���������1��Ȼ������ĿҪ���ǵ���Ҷ��㣬�����ϡ������ж�����ӦΪѰ����������������Ϊ�յĽ����Ϊ�յ㣬���򶼲��迼��pass����
����������Ŀǰ���ύ��������ߵ���Ŀ��
*/