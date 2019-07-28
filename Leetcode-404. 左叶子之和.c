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
应该是比较简单的一个二叉树问题，但是细节比较多，我弄的错误也比较多，以后还是要注意判断的周全与否。
*/