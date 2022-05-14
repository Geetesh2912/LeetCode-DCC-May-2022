//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/design-circular-queue/
//submission link: https://leetcode.com/submissions/detail/699436819/

class MyCircularQueue {
    int *arr;
    int size,cap;
public:
    MyCircularQueue(int k) {
        arr=new int [k];
        cap=k;
        size=0;
    }
    
    bool enQueue(int value) {
        if (isFull())
            return false;
        arr[size]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
            return false;
        for (int i=0; i<size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        return true;
    }
    
    int Front() {
        if (isEmpty())
            return -1;
        return arr[0];
    }
    
    int Rear() {
        if (isEmpty())
            return -1;
        return arr[size-1];
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    bool isFull() {
        return (size==cap);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
