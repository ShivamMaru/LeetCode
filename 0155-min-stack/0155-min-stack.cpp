class MinStack {
public:
    stack<int>st,stMin;
    MinStack() {
     
    }
    
    void push(int val) {
        if(stMin.empty() || val <= stMin.top())
            stMin.push(val);
    st.push(val);
    }
    
    void pop() {
        if(st.top() == stMin.top())
            stMin.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stMin.top();
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