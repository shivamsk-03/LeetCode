// Stack class.
class Stack {
public:
    int t;
    int *arr;
    int capacity;
    Stack(int capacity) {
        // Write your code here.
        this -> capacity = capacity;
        arr = new int[capacity];
        t = -1;
    }

    void push(int num) {
        // Write your code here.
        if(capacity-t > 1){
            t++;
            arr[t] = num;
        }
        else return;
    }

    int pop() {
        // Write your code here.
        if(t>=0){
            int x = arr[t];
            t--;
            return x;
            }
        else {
            return -1;
            }
    }
    
    int top() {
        // Write your code here.
        if(t>=0 && t < capacity) return arr[t];
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(t==-1)return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(t==capacity-1)return 1;
        else return 0;
    }
    
};
