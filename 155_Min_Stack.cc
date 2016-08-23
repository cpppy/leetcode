class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s.push(x);
        if(s_min.empty()||x<=s_min.top()){
            s_min.push(x);
        }
    }
    
    void pop() {
        if(s.top()==s_min.top())
        {
            s_min.pop();
        }
        s.pop();
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s_min.top();
    }

private:
    stack<int> s;
    stack<int> s_min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
