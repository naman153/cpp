class MyStack {
    queue<int> one;
    queue<int> two;
public:
    /** Initialize your data structure here. */
    MyStack() {
        one={};
        two={};
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        two.push(x);
        while(!one.empty()){
            int temp=one.front();
            two.push(temp);
            one.pop();
        }
        swap(one, two);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp=one.front();
        one.pop();
        return temp;
    }
    
    /** Get the top element. */
    int top() {
        return one.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return one.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
