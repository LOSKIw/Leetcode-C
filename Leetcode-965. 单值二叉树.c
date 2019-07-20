int check(struct TreeNode* root, int x) {
	if (root == NULL)
		return 1;
	if (root->val == x)
	{
		return check(root->left, x) && check(root->right, x);
	}
	else
		return 0;
}

bool isUnivalTree(struct TreeNode* root) {
	int n = root->val;
	return check(root, n);
}
/*
2019/3/21
�ڶ����������Ŀ���õ��˵ݹ�ı�����
Ҳ�ǵ�һ���Լ������������µĺ�����
*/