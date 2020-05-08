class MyStack {
public:
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		if (!q1.empty() || q1.empty() && q2.empty())
			q1.push(x);
		else if (!q2.empty())
			q2.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int ret = 0;
		if (!q1.empty() && q2.empty())
		{
			while (q1.size() > 1)
			{
				q2.push(q1.front());
				q1.pop();
			}
			ret = q1.front();
			q1.pop();
		}
		else if (q1.empty() && !q2.empty())
		{
			while (q2.size() > 1)
			{
				q1.push(q2.front());
				q2.pop();
			}
			ret = q2.front();
			q2.pop();
		}
		return ret;
	}

	/** Get the top element. */
	int top() {
		int ret = 0;
		if (!q1.empty() && q2.empty())
		{
			while (q1.size() > 1)
			{
				q2.push(q1.front());
				q1.pop();
			}
			ret = q1.front();
			q2.push(q1.front());
			q1.pop();
		}
		else if (q1.empty() && !q2.empty())
		{
			while (q2.size() > 1)
			{
				q1.push(q2.front());
				q2.pop();
			}
			ret = q2.front();
			q1.push(q2.front());
			q2.pop();
		}
		return ret;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q1.empty() && q2.empty();
	}
private:
	queue<int> q1;
	queue<int> q2;
};
