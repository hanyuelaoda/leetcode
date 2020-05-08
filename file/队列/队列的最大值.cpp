/*
请定义一个队列并实现函数 max_value 得到队列里的最大值，要求函数max_value、push_back 和 pop_front 的均摊时间复杂度都是O(1)。

若队列为空，pop_front 和 max_value 需要返回 -1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/dui-lie-de-zui-da-zhi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class MaxQueue {
public:
	queue<int> mq;
	deque<int> mdq;
	MaxQueue() {

	}

	int max_value() {
		if (!mq.empty())
		{
			return mdq.front();
		}
		return -1;
	}

	void push_back(int value) {
		mq.push(value);
		if (mdq.empty())//mdq为空时，直接插入元素
		{
			mdq.push_back(value);
		}
		else if (value > mdq.front())//mdq每次插入，总是将小于value的值全部清除
		{
			mdq.clear();//小于value的元素全部清除
			mdq.push_front(value);
		}
		else 
		{
			while (value > mdq.back())//小于value的元素全部弹出
			{
				mdq.pop_back();
			}
			mdq.push_back(value);
		}
	}

	int pop_front() {
		int ret = -1;
		if (!mq.empty())
		{
			ret = mq.front();
			mq.pop();
			//若最大值被弹出，则mdq也弹出
			if (mdq.front() == ret)
			{
				mdq.pop_front();
			}
		}
		return ret;
	}
};
