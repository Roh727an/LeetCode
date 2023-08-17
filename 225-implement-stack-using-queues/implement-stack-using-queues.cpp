class MyStack {
public:
    /*
    // Using 2 Queues 
    queue<int>q;
    queue<int>q_ref;
    */
    queue<int>q;
    MyStack() {

    }
    
    void push(int x) {
        /*
        // Using 2 Queues 
        // 1.Put Elements From Main Queue(MyStack) to Reference Queue
        while(!q.empty())
        {
            q_ref.push(q.front());
            q.pop();
        }
        // 2.Push Element(X) in Main Queue(MyStack)
        q.push(x);
        // 3.Put Back all Elements From Reference Queue to Main Queue(MyStack)
        while(!q_ref.empty())
        {
            q.push(q_ref.front());
            q_ref.pop();
        }
        */
        q.push(x);
    }
    
    int pop() {
        /*
        // Using 2 Queues 
        // Simply pop from Main Queue
        int ele=top();
        q.pop();
        return ele;
        */
        
        int n=q.size()-1;
        // Push Element from Front to Rear till size-1 times
        while(n--)
        {
            q.push(q.front());
            q.pop();
        }
        // Now Queue front is pointing at Last in Element so Pop it
        int del=q.front();
        q.pop();
        return del;
    }
    
    int top() {
        /*
        // Using 2 Queues 
        // Simply Return Main Queue front
        return q.front();
        */
        int n=q.size();
        int ele=-1;
        // Push Element from Front to Rear till size times
        while(n--)
        {
            q.push(q.front());
            // Store the Value of Front of Queue
            ele=q.front();
            q.pop();
        }
        // The Last ELement was Visited / Stored in ele is Rear of Queue/ Last in Element / Stack Top
        return ele;
    }
    
    bool empty() {
        /*
        // Using 2 Queues 
        return q.empty();
        */
         return q.empty();
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