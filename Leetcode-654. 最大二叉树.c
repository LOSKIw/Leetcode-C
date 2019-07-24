int find_max(int* n, int l, int r)
{
	int i, max = -10000, flag;
	for (i = l; i <= r; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			flag = i;
		}
	}
	return flag;
}

int crttree(struct TreeNode** T, int* n, int L, int R)
{
	if (L == R)
	{
		*T = (struct TreeNode*)malloc(sizeof(struct TreeNode));
		(*T)->val = n[L];
		(*T)->left = NULL;
		(*T)->right = NULL;
		return 0;
	}
	int temp = find_max(n, L, R);
	*T = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	(*T)->val = n[temp];
	if (temp - 1 >= L)
	{
		crttree(&(*T)->left, n, L, temp - 1);
	}
	else
	{
		(*T)->left = NULL;
	}

	if (temp + 1 <= R)
	{
		crttree(&(*T)->right, n, temp + 1, R);
	}
	else
	{
		(*T)->right = NULL;
	}
	return 0;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
	struct TreeNode *T;
	crttree(&T, nums, 0, numsSize - 1);
	return T;
}
/*
2019/7/23
较简单的一道题，主要是回想起了课本里的公式，运用到了这里
递归思想
*/