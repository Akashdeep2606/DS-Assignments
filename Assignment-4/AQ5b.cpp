#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int>q;
public:
    void push(int x){
             int size=q.size();
             q.push(x);
             for(int i=0;i<size;i++){
                q.push(q.front());
                q.pop();
             }
    cout << x << " pushed into stack\n";
    }
    void pop(){
        if (q.empty()) {
            cout << "Stack underflow\n";
            return;
        }
        cout << "Popped: " << q.front() << endl;
        q.pop();
    }
    int top() {
        if (q.empty()) {
            cout << "Stack is empty!\n";
        }
        return q.front();
    }
     bool isEmpty() {
        return q.empty();
    }
    void display(){
        queue<int> temp=q;
        if(temp.empty()) cout <<  "Stack is empty\n";
        while(!temp.empty()){
             cout << temp.front() << " ";
             temp.pop();
        }
    cout<<endl;
    }
};
int main(){
    Stack s;
    s.push(20);
    s.push(5);
    s.push(4);
    s.display();
    cout << "Top element: " << s.top() << endl;
    s.pop();
    s.pop();
    cout << "Element which was added at first is:"<<endl;
    s.display();

    return 0;
}