class MyQueue
{
public:
    //      using two stacks implementation is done
    stack<int> input, output;

    void push(int x)
    {
        while (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        input.push(x);
        while (!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
    }

    int pop()
    {
        if (input.empty())
            return 0;
        int val = input.top();
        input.pop();
        return val;
    }

    int peek()
    {
        if (input.empty())
            return 0;
        return input.top();
    }

    bool empty()
    {
        return input.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */