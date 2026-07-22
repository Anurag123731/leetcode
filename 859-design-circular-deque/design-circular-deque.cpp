class MyCircularDeque {
public:
deque<int>dq;
int n;
    MyCircularDeque(int k) {
         n =k;
    }
    
    bool insertFront(int value) {
        if(dq.size()>=n) return false;
        else{
            dq.push_front(value);
            return true;
        }
    }
    
    bool insertLast(int value) {
        if(dq.size()>=n) return false;
        else{
            dq.push_back(value);
            return true;
        }
    }
    
    bool deleteFront() {
        if(dq.size()){
            dq.pop_front();
            return true;
        }
        else return false;
    }
    
    bool deleteLast() {
        if(dq.size()){
            dq.pop_back();
            return true;
        }
        else return false;
    }
    
    int getFront() {
        if(dq.size()){
            int x=dq.front();
            return x;
        }
        else return -1;
    }
    
    int getRear() {
        if(dq.size()){
            int x=dq.back();
            return x;
        }
        else return -1;
    }
    
    bool isEmpty() {
        if(dq.size()) return false;
        else return true;
    }
    
    bool isFull() {
        if(dq.size()==n) return true;
        else return false;
    }
};

