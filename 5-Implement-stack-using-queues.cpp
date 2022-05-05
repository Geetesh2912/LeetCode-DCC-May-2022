//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/implement-stack-using-queues/
//submission link: https://leetcode.com/submissions/detail/693773202/

class MyStack {
public:
    queue<int> q;
    
    void push(int x) {
        q.push(x);
        for (int i=0; i<q.size()-1; i++)    //we add all elements which are at front to back of queue EXCEPT for the last one so that while pop we get it at front 
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int ans=q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
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
