int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

int rob(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return root->val;
	else
	{
		//��͵�ý��
		int temp1 = rob(root->left) + rob(root->right);
		//͵�ý��
		int temp2 = root->val;
		if (root->left != NULL)
			temp2 += rob(root->left->left) + rob(root->left->right);
		if (root->right != NULL)
			temp2 += rob(root->right->left) + rob(root->right->right);
		return max(temp1, temp2);
	}
}
/*
2019/7/30
����...?
һ��ʼ�Լ���Ϊ��˼·�ˣ���������˼·�в��
�������������������˺��������˼��
*/