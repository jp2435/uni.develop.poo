#include <iostream>
#include "./ex01/Queue.h"

using namespace std;


int main(){
    try{

    Queue<int> s1;
    Queue<double> s2;
    s1.enqueue(1);
    s1.enqueue(2);
    s1.enqueue(4);
    s1.enqueue(3);

    cout << s1.peek() << endl;
    s1.dequeue();
    cout << s1.top() << endl;
    cout << s2.peek();

    return 0;
    }catch(exception& e){
        cout << "Error:" << e.what() << endl;
        return -1;
    }
}