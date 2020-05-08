/*
输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。
*/

class Solution
{
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode *ret = NULL;
		if (l1 == NULL)
		{
			return l2;
		}
		if (l2 == NULL)
		{
			return l1;
		}

		if (l1->val <= l2->val)
		{
			ret = l1;
			ret->next = mergeTwoLists(l1->next, l2);
		}
		else
		{
			ret = l2;
			ret->next = mergeTwoLists(l1, l2->next);
		}
		return ret;
	}
};
