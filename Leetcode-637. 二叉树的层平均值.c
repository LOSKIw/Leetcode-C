int push(struct TreeNode** a, struct TreeNode* T, int flag1)
{
	a[flag1++] = T;
	return flag1;
}

struct TreeNode* pop(struct TreeNode** a, int flag2)
{
	return a[flag2++];
}

double* averageOfLevels(struct TreeNode* root, int* returnSize) {
	struct TreeNode* a[100000];
	double *n = (double*)malloc(sizeof(double) * 1000000);
	int flag1 = 0, i, j, k, flag2 = 0;
	struct TreeNode* T = root;
	flag1 = push(a, T, flag1);
	i = 1;

	double sum = 0;
	int count = 0;
	while (flag1 != flag2)
	{
		j = 0;
		sum = 0;
		for (k = 0; k < i; k++)
		{
			T = pop(a, flag2);
			flag2++;
			sum += T->val;
			if (T->left != NULL)
			{
				push(a, T->left, flag1);
				flag1++;
				j++;
			}
			if (T->right != NULL)
			{
				push(a, T->right, flag1);
				flag1++;
				j++;
			}
		}
		sum = sum / i;
		i = j;
		n[count++] = sum;
	}
	*returnSize = count;
	return n;
}
/*
2019/7/24
一开始为了图方便居然就想用栈...看来我的理解还不够，虽然一下子就能跑了还挺让我惊讶的
这个写出来没有用循环队列，有风险，以后可以的话要改进
*/