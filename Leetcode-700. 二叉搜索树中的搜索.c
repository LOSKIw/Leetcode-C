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
运用了单值二叉树的想法，还是要遍历所有树结点，然而要返回的不再是0/1，而是一个树根结点，所以在返回值的判断上会有很多细碎的讨论，看起来的确很麻烦，或许或者说肯定有更好的优化方案吧。
话说，虽然题目做出来了，我还是不太清楚BST二叉搜索树有什么特殊的地方...
*/