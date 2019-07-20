struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode*a = l1;
	struct ListNode*b = l2;
	struct ListNode*temp;
	struct ListNode*new;
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	if (a->val > b->val)
	{
		new = b;
		b = a;
		a = new;
	}
	new = a;
	while (a != NULL)
	{
		if (a->val > b->val)
		{
			temp->next = b;
			b = a;
			a = temp->next;
		}
		else
		{
			temp = a;
			a = a->next;
		}
	}
	temp->next = b;
	return new;
}
/*
2019/3/13
��һ�����������Ž�������⣬�����Һܾã�����Ҫ����һ�ߡ�
���õķ����Ƚ�ֱ�ӣ����ܴ��������˼������ÿһС���Ľ�����ÿһ�����������е����壬���ų�����������������ǱȽ�����ġ�
Ŀǰ��������˵����Ѱ�ҵ���ʼԪ�رȽ�С�Ķ��У����a������ʼ����������tempָ����ǵ�ǰa,b����ʼ��С����������ԭ�����������ͣ�����Ŀǰ������ǣ�a����˵��һֱָ���temp�����һ���֣���a��ǰԪ�ش���b��ǰԪ�أ���ͨ��temp����a,b�����������С�
���컹��Ҫ�عˣ����������ҵĵ�һ�����̵�����ɡ�
*/