int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	int u = maxDepth(root->left);
	int v = maxDepth(root->right);
	if (u > v)
		return u + 1;
	else
		return v + 1;
}
/*
2019/3/20
第一个树相关题目。《算法：C语言实现》不知道为什么第一次讲到树的时候几乎可以说是一笔带过，插入删除什么的都没有说，可能后面要着重分类讲述？
这道题用了二叉树，递归的思想，我的代码大概于书上差不多，毕竟刚看完这一章。
*/