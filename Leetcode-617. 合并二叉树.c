struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
	if (t1 == NULL && t2 == NULL)
		return NULL;
	struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	if (t1 == NULL)
	{
		temp->val = t2->val;
		temp->right = mergeTrees(t1, t2->right);
		temp->left = mergeTrees(t1, t2->left);
	}
	else if (t2 == NULL)
	{
		temp->val = t1->val;
		temp->right = mergeTrees(t1->right, t2);
		temp->left = mergeTrees(t1->left, t2);
	}
	else
	{
		temp->val = t1->val + t2->val;
		temp->right = mergeTrees(t1->right, t2->right);
		temp->left = mergeTrees(t1->left, t2->left);
	}
	return temp;
}
/*
2019/4/28
这个是真的，看到了评论才想出来...
运用了递归。
*/