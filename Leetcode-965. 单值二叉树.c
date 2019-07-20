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
第二道树相关题目，用到了递归的遍历。
也是第一次自己在其中增加新的函数。
*/