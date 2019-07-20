struct TreeNode* check(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
	if (root == NULL)
		return NULL;
	if (root->val == p->val)
		return root;
	if (root->val == q->val)
		return root;
	struct TreeNode* u, *v;
	u = check(root->left, p, q);
	v = check(root->right, p, q);
	if (u != NULL && v != NULL)
		return root;
	else if (u == NULL && v != NULL)
		return v;
	else return u;

}
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
	return check(root, p, q);
}
/*
2019/3/22
做到这里，不禁觉得，二叉树的许多题目有点换汤不换药。大多离不开两个，遍历与递归。
当然，我还是用了很细碎的判断来进行返回值，相信一定有更好更简洁的表达方式。
*/