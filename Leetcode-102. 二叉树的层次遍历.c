typedef struct queue {
	struct TreeNode **T;
	int front, back;
}queue, *Q;

int enqueue(Q q, struct TreeNode *Tree)
{
	q->T[q->back++] = Tree;
	return 0;
}

struct TreeNode *dequeue(Q q)
{
	return q->T[q->front++];
}

int qIsEmpty(Q q)
{
	return q->front == q->back;
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
	if (root == NULL)
	{
		*returnSize = 0;
		*returnColumnSizes = NULL;
		return NULL;
	}
	int i = 1, j, count = 0, LayerSon;
	Q q;
	q = (queue*)malloc(sizeof(queue));
	q->front = q->back = 0;
	q->T = (struct TreeNode**)malloc(sizeof(struct TreeNode) * 10000);
	int **A = (int**)malloc(sizeof(int*) * 10000);
	*returnColumnSizes = (int*)malloc(sizeof(int) * 10000);

	struct TreeNode *temp;
	enqueue(q, root);
	while (!qIsEmpty(q))
	{
		LayerSon = 0;
		A[count] = (int*)malloc(sizeof(int)*i);
		(*returnColumnSizes)[count] = i;
		for (j = 0; j < i; j++)
		{

			temp = dequeue(q);
			A[count][j] = temp->val;
			if (temp->left != NULL)
			{
				enqueue(q, temp->left);
				LayerSon++;
			}
			if (temp->right != NULL)
			{
				enqueue(q, temp->right);
				LayerSon++;
			}
		}
		i = LayerSon;
		count++;
	}
	*returnSize = count;
	return A;
}
/*
2019/7/24
完结了层次遍历平均值那道题的小尾巴，完整的写了一个队列
差一点就一遍过，可惜考虑不够周全，没有想到真的会有空指针进来，而且还真的会出错
*/