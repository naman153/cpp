class MinStack {
    vector<int> temp;
public:
    /** initialize your data structure here. */
    MinStack() {
        temp={};
    }
    
    void push(int val) {
        temp.push_back(val);
    }
    
    void pop() {
        if(temp.empty()){
            return;
        }
        temp.pop_back();
    }
    
    int top() {
        if(temp.empty()){
            return -1;
        }
        return temp[temp.size()-1];
    }
    
    int getMin() {
        if(temp.empty()){
            return -1;
        }
        return *min_element(temp.begin(), temp.end());
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
