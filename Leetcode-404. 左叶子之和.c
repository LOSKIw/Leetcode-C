int sumOfLeftLeaves(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
	{
		return 0;
	}
	else if (root->right != NULL && root->left == NULL)
	{
		return sumOfLeftLeaves(root->right);
	}
	if (root->left->left == NULL && root->left->right == NULL)
	{
		return root->left->val + sumOfLeftLeaves(root->right);
	}
	else
	{
		return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
	}
}
/*
2019/7/28
Ӧ���ǱȽϼ򵥵�һ�����������⣬����ϸ�ڱȽ϶࣬��Ū�Ĵ���Ҳ�Ƚ϶࣬�Ժ���Ҫע���жϵ���ȫ���
*/