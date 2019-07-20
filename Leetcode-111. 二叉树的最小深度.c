int minDepth(struct TreeNode* root) {
	int x, y;
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	else if (root->left == NULL)
	{
		y = minDepth(root->right);
		return y + 1;
	}
	else if (root->right == NULL)
	{
		y = minDepth(root->left);
		return y + 1;
	}
	x = minDepth(root->left);
	y = minDepth(root->right);
	if (x > y)
		return y + 1;
	else
		return x + 1;
}
/*
2019/3/23
被这道题卡住了很久，最后通过评论区的一个答案的模板改正，中间涉及了许多的讨论，总会有疏漏的地方，感觉递归的时候要想考虑全面还是很难的。
第一版答案没有保存，不过我的想法跟之前的二叉树题目应该很像，都是另外调用一个函数。
并且在过程中给了我一个提醒——Leetcode的话少用全局变量，要不然容易出现本地与线上测试结果不同的情况。
之前的想法还是"寻找NULL"结点，也因此导致了我的问题，若根节点只有一空的next指针，结果便会输出1，然而，题目要求是到达叶结点，不符合。所以判断条件应为寻找左子树右子树都为空的结点作为终点，否则都不予考虑pass掉。
这道题可能是目前我提交错误率最高的题目？
*/