//a存储后面部分，b存储前面部分
class CQueue 
{
public:
	CQueue()
	{
		
	}

	void appendTail(int value) 
	{
		a.push(value);
	}

	int deleteHead() 
	{
		int tmp = 0;
		//当两个栈都为空时，返回-1
		if (b.empty() && a.empty())
		{
			return -1;
		}
		//只有b空时，将a的所有元素放到b中
		else if (b.empty() && (!a.empty()))
		{
			while (!a.empty())
			{
				b.push(a.top());
				a.pop();
			}
		}
		//将b的栈顶元素弹出
		tmp = b.top();
		b.pop();
		return tmp;
	}
private:
	stack<int> a;
	stack<int> b;
};
