int check(struct TreeNode* right, struct TreeNode* left)
{
	if (right == NULL && left == NULL)
		return 1;
	else if (right == NULL && left != NULL || right != NULL && left == NULL)
		return 0;
	if (right->val != left->val)
		return 0;
	else
		return check(right->right, left->left) && check(right->left, left->right);
}

bool isSymmetric(struct TreeNode* root)
{
	if (root == NULL)
		return 1;
	else
		return check(root->right, root->left);
}
/*
2019/4/28
ʱ���ܾû����ˣ�������������������...
��Ŀ����ݹ�͵���������Ŀǰ�ݹ��Ѿ���ɣ��Ժ�����������ɡ�
*/