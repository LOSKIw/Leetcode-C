int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	int u = maxDepth(root->left);
	int v = maxDepth(root->right);
	if (u > v)
		return u + 1;
	else
		return v + 1;
}
/*
2019/3/20
��һ���������Ŀ�����㷨��C����ʵ�֡���֪��Ϊʲô��һ�ν�������ʱ�򼸺�����˵��һ�ʴ���������ɾ��ʲô�Ķ�û��˵�����ܺ���Ҫ���ط��ི����
��������˶��������ݹ��˼�룬�ҵĴ����������ϲ�࣬�Ͼ��տ�����һ�¡�
*/