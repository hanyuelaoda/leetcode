/**
*实现一个MyQueue类，该类用两个栈来实现一个队列。
*假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）。
*/

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 
class MyQueue
{
public:
	stack<int> s1, s2;
	/** Initialize your data structure here. */
	MyQueue() 
	{
		
	}

	/** Push element x to the back of queue. */
	void push(int x) 
	{
		s1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() 
	{
		int ret = 0;
		if (s2.empty() && !s1.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		ret = s2.top();
		s2.pop();
		return ret;
	}

	/** Get the front element. */
	int peek() 
	{
		if (s2.empty() && !s1.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();
	}

	/** Returns whether the queue is empty. */
	bool empty()
	{
		if (s1.empty() && s2.empty())
		{
			return true;
		}
		else return false;
	}
};
