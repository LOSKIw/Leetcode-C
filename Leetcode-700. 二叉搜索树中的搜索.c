struct TreeNode* check(struct TreeNode* root, int x) {
	if (root == NULL)
		return NULL;
	if (root->val == x)
		return root;
	struct TreeNode* u, *v;
	u = check(root->left, x);
	v = check(root->right, x);
	if (u != NULL)
		return u;
	else if (v != NULL)
		return v;
	else
		return NULL;
}

struct TreeNode* searchBST(struct TreeNode* root, int val) {
	return check(root, val);
}
/*
2019/3/21
�����˵�ֵ���������뷨������Ҫ������������㣬Ȼ��Ҫ���صĲ�����0/1������һ��������㣬�����ڷ���ֵ���ж��ϻ��кܶ�ϸ������ۣ���������ȷ���鷳���������˵�϶��и��õ��Ż������ɡ�
��˵����Ȼ��Ŀ�������ˣ��һ��ǲ�̫���BST������������ʲô����ĵط�...
*/