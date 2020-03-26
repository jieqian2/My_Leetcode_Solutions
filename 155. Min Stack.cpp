
class MinStack {
public:
    //use two stack
    
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    stack<int> orig;
    stack<int> min;
    
    void push(int x) {
        orig.push(x);
        if(min.empty() || x<=min.top())
            //notice! x==mintop, we still need to push
            min.push(x);
    }
    
    void pop() {
        if(orig.top()<=min.top())
            min.pop();
        orig.pop();
    }
    
    int top() {
        return orig.top();
    }
    
    int getMin() {
        return min.top();
    }
};
