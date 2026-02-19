#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char c) {
        if (!isFull()) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
        return '\0'; 
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Stack s;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    string reversed = "";              // output string
    while (!s.isEmpty()) {
        reversed += s.pop();
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
} 
// #include <iostream>
// #include <stack>
// using namespace std;

// string reverseString(string str) {
//     stack<char> s;

//     // Step 1: push all characters into stack
//     for (char c : str) {
//         s.push(c);
//     }

//     // Step 2: pop characters back into the string
//     string reversed = "";
//     while (!s.empty()) {
//         reversed += s.top(); // take top character
//         s.pop();             // remove it
//     }

//     return reversed;
// }

// int main() {
//     string str = "hello";

//     cout << "Original String: " << str << endl;
//     cout << "Reversed String: " << reverseString(str) << endl;

//     return 0;
// }
