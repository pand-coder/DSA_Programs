#include<iostream>
#include<stack>
using namespace std;

template<class T>
class Stack{
    stack<T> s;
    public:
    void push(T value)
    {
        s.push(value);
    }
    void pop()
    {
        s.pop();
    }
    bool isempty()
    {
        return s.empty();
    }

    T top()
    {
        return s.top();
    }
    size_t size()
    {
        return s.size();
    }
};

int main(void)
{
    int choice;
    Stack<int>s;
    Stack<char>c;
    Stack<double>d;
    Stack<float>f;
    Stack<string>tx;

    do{
        cout<<"Stack Operations"<<endl;
        cout<<"Choose the datatype:"<<endl;
        cout<<"1. Integer"<<endl;
        cout<<"2. Character"<<endl;
        cout<<"3. Double"<<endl;
        cout<<"4. Float"<<endl;
        cout<<"5. String"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choice;

        if(choice == 1){
            do{
                cout<<"Integer Operations"<<endl;
                cout<<"Choose the following options:"<<endl;
                cout<<"1. Add an element at end"<<endl;
                cout<<"2. Delete an element at end"<<endl;
                cout<<"3. Get Top Element"<<endl;
                cout<<"4. Size of stack"<<endl;
                cout<<"5. Check whether stack empty or not"<<endl;
                cout<<"6. Exit"<<endl;
                cin>>choice;

                if(choice == 1){
                    int v;
                    cout<<"Enter value: ";
                    cin>>v;
                    s.push(v);
                } else if(choice == 2){
                    s.pop();
                } else if(choice == 3){
                    cout<<"Top Element: "<<s.top()<<endl;
                } else if(choice == 4){
                    cout<<"Size of Stack: "<<s.size()<<endl;
                } else if(choice == 5){
                    cout<<"Stack is "<<(s.isempty() ? "empty" : "not empty")<<endl;
                } else if(choice == 6){
                    cout << "Exiting Integer Operations..." << endl;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while(choice != 6);
        } else if(choice == 2){
            do{
                cout<<"Character Operations"<<endl;
                cout<<"Choose the following options:"<<endl;
                cout<<"1. Add an element at end"<<endl;
                cout<<"2. Delete an element at end"<<endl;
                cout<<"3. Get Top Element"<<endl;
                cout<<"4. Size of stack"<<endl;
                cout<<"5. Check whether stack empty or not"<<endl;
                cout<<"6. Exit"<<endl;
                cin>>choice;

                if(choice == 1){
                    char ch;
                    cout<<"Enter value: ";
                    cin>>ch;
                    c.push(ch);
                } else if(choice == 2){
                    c.pop();
                } else if(choice == 3){
                    cout<<"Top Element: "<<c.top()<<endl;
                } else if(choice == 4){
                    cout<<"Size of Stack: "<<c.size()<<endl;
                } else if(choice == 5){
                    cout<<"Stack is "<<(c.isempty() ? "empty" : "not empty")<<endl;
                } else if(choice == 6){
                    cout << "Exiting Character Operations..." << endl;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while(choice != 6);
        } else if(choice == 3){
            do{
                cout<<"Double Operations"<<endl;
                cout<<"Choose the following options:"<<endl;
                cout<<"1. Add an element at end"<<endl;
                cout<<"2. Delete an element at end"<<endl;
                cout<<"3. Get Top Element"<<endl;
                cout<<"4. Size of stack"<<endl;
                cout<<"5. Check whether stack empty or not"<<endl;
                cout<<"6. Exit"<<endl;
                cin>>choice;

                if(choice == 1){
                    double dv;
                    cout<<"Enter value: ";
                    cin>>dv;
                    d.push(dv);
                } else if(choice == 2){
                    d.pop();
                } else if(choice == 3){
                    cout<<"Top Element: "<<d.top()<<endl;
                } else if(choice == 4){
                    cout<<"Size of Stack: "<<d.size()<<endl;
                } else if(choice == 5){
                    cout<<"Stack is "<<(d.isempty() ? "empty" : "not empty")<<endl;
                } else if(choice == 6){
                    cout << "Exiting Double Operations..." << endl;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while(choice != 6);
        } else if(choice == 4){
            do{
                cout<<"Float Operations"<<endl;
                cout<<"Choose the following options:"<<endl;
                cout<<"1. Add an element at end"<<endl;
                cout<<"2. Delete an element at end"<<endl;
                cout<<"3. Get Top Element"<<endl;
                cout<<"4. Size of stack"<<endl;
                cout<<"5. Check whether stack empty or not"<<endl;
                cout<<"6. Exit"<<endl;
                cin>>choice;

                if(choice == 1){
                    float fv;
                    cout<<"Enter value: ";
                    cin>>fv;
                    f.push(fv);
                } else if(choice == 2){
                    f.pop();
                } else if(choice == 3){
                    cout<<"Top Element: "<<f.top()<<endl;
                } else if(choice == 4){
                    cout<<"Size of Stack: "<<f.size()<<endl;
                } else if(choice == 5){
                    cout<<"Stack is "<<(f.isempty() ? "empty" : "not empty")<<endl;
                } else if(choice == 6){
                    cout << "Exiting Float Operations..." << endl;
                } else {
                    cout <<
                    "Invalid choice. Please try again." << endl;
                }
            } while(choice != 6);
        } else if(choice == 5){
            do{
                cout<<"String Operations"<<endl;
                cout<<"Choose the following options:"<<endl;
                cout<<"1. Add an element at end"<<endl;
                cout<<"2. Delete an element at end"<<endl;
                cout<<"3. Get Top Element"<<endl;
                cout<<"4. Size of stack"<<endl;
                cout<<"5. Check whether stack empty or not"<<endl;
                cout<<"6. Exit"<<endl;
                cin>>choice;

                if(choice == 1){
                    string sv;
                    cout<<"Enter value: ";
                    cin>>sv;
                    tx.push(sv);
                } else if(choice == 2){
                    tx.pop();
                } else if(choice == 3){
                    cout<<"Top Element: "<<tx.top()<<endl;
                } else if(choice == 4){
                    cout<<"Size of Stack: "<<tx.size()<<endl;
                } else if(choice == 5){
                    cout<<"Stack is "<<(tx.isempty() ? "empty" : "not empty")<<endl;
                } else if(choice == 6){
                    cout << "Exiting String Operations..." << endl;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while(choice != 6);
        } else if(choice == 6){
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while(choice != 6);

    return 0;
}
