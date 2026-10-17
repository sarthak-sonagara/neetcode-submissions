class MinStack {
    
    stack<int> st;
    stack<int> sm;

public:

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(sm.size())
            sm.push(min(val,sm.top()));
        else
            sm.push(val);
    }
    
    void pop() {
        st.pop();
        sm.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return sm.top();
    }
};
