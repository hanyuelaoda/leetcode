//请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只有一个输入且是要求被删除的节点。
class Solution 
{
public:
	void deleteNode(ListNode* node) 
	{
		node->val = node->next->val;
		node->next = node->next->next;
	}
};
