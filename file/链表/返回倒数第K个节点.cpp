/*
实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。

说明：
给定的 k 保证是有效的。
*/

class Solution 
{
public:
	int kthToLast(ListNode* head, int k)
	{
		ListNode* cur = head;
		ListNode* pre = cur;
		while (--k)
		{
			//题目确定k总是有效
			cur = cur->next;			
		}
		while (cur->next != NULL)
		{
			cur = cur->next;
			pre = pre->next;
		}
		return pre->val;
	}
};
