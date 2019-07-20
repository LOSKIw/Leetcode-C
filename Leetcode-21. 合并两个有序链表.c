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
第一道看评论区才解决的问题，卡了我很久，急需要重走一边。
采用的方法比较直接，我能大概明白意思，但是每一小步的交换，每一个操作所含有的意义，所排除掉的特殊情况，都是比较琐碎的。
目前来讲就是说，先寻找到起始元素比较小的队列（简称a），开始操作。其中temp指向的是当前a,b中起始较小的链表（拜其原本即有序所赐）。我目前的理解是，a可以说是一直指向的temp链表的一部分，若a当前元素大于b当前元素，即通过temp交换a,b两表，继续进行。
明天还需要回顾，这个大概是我的第一个复盘的任务吧。
*/