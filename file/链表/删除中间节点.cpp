/*
实现一种算法，删除单向链表中间的某个节点（除了第一个和最后一个节点，不一定是中间节点），假定你只能访问该节点。
*/

class Solution
{
public:
	void deleteNode(ListNode* node) 
	{
		ListNode* tmp = node->next;
		node->val = node->next->val;
		node->next = node->next->next;
		delete tmp;
		tmp = NULL;
	}
};
