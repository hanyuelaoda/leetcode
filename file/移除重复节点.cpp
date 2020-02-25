/*
编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。
*/

//暴力法
class Solution 
{
public:
	ListNode* removeDuplicateNodes(ListNode* head) 
	{
		ListNode* cur = head;
		while (cur!= NULL)
		{
			ListNode* tmp = cur;
			while (tmp->next != NULL)
			{
				if (cur->val == tmp->next->val)
				{
					tmp->next = tmp->next->next;
				}
				else tmp = tmp->next;
			}
			cur = cur->next;
		}
		return head;
	}
};
