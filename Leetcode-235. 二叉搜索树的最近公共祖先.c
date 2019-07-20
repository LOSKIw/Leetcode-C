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
��������������ã��������������Ŀ�е㻻������ҩ������벻��������������ݹ顣
��Ȼ���һ������˺�ϸ����ж������з���ֵ������һ���и��ø����ı�﷽ʽ��
*/