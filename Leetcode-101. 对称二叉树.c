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
时隔很久回来了，有依靠评论区的嫌疑...
题目建议递归和迭代都做，目前递归已经完成，以后回来看迭代吧。
*/