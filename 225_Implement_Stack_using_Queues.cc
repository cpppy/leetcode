class Stack {
public:
    queue<int> main;
    queue<int> temp;
    // Push element x onto stack.
    void push(int x) {
        main.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        if(!main.empty()){
            while(main.size()>1){
                int x=main.front();
                main.pop();
                temp.push(x);
            }
            main.pop();
        }
        else{
            int s=temp.size();
            int i=0;
            while(i<s-1){
                int x=temp.front();
                temp.pop();
                temp.push(x);
                i++;
            }
            temp.pop();
        }
    }

    // Get the top element.
    int top() {
        if(!main.empty()){
            while(main.size()>1){
                int x=main.front();
                main.pop();
                temp.push(x);
            }
            return main.front();
        }
        else{
            int s=temp.size();
            int i=0;
            while(i<s-1){
                int x=temp.front();
                temp.pop();
                temp.push(x);
                i++;
            }   
            int y=temp.front();
            temp.pop();
            temp.push(y);
            return y;
        }
    }

    // Return whether the stack is empty.
    bool empty() {
        if(main.empty() && temp.empty())  return true;
        else return false;
        
    }

};
