/*
给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。
请你返回该链表所表示数字的 十进制值 。
*/

//Definition for singly - linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) 
//	{
//		;
//	}
//};

class Solution1 
{
public:
	int getDecimalValue(ListNode* head) 
	{
		int num = 0;
		
		stack<int> mystack;
		for (ListNode *p = head; p != NULL; p = p->next)
		{
			mystack.push(p->val);
		}
		for (int exp = 0; mystack.size() > 0; exp++)
		{
			int tmp = mystack.top();
			num += tmp * pow(2, exp);
			mystack.pop();
		}
		return num;
	}
};

//网上的方法1：位运算
class Solution2 {
public:
	int getDecimalValue(ListNode* head) {
		ListNode *tmp = head;
		int re = 0;
		while (tmp != nullptr) {
			re = (re << 1) | (tmp->val);
			tmp = tmp->next;
		}
		return re;
	}
};

//网上的方法2：
class Solution3 {
public:
	int getDecimalValue(ListNode* head) {
		ListNode* cur = head;
		int ans = 0;
		while (cur != nullptr) {
			ans = ans * 2 + cur->val;
			cur = cur->next;
		}
		return ans;
	}
};
