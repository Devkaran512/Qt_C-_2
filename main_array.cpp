#include <iostream>
#include <thread>
using namespace std;

void fun1(string msg) {
    cout << "Message: 1 bt dev " << msg << endl;
}
void fun2(string msg) {
    cout << "Message: 2 bt dev " << msg << endl;
}
void fun3(string msg) {
    cout << "Message: " << msg << endl;
}
void fun4(string msg) {
    cout << "Message: " << msg << endl;
}
void fun5(string msg) {
    cout << "Message: " << msg << endl;
}
void fun6(string msg) {
    cout << "Message: " << msg << endl;
}
void fun7(string msg) {
    cout << "Message: " << msg << endl;
}
void fun8(string msg) {
    cout << "Message: " << msg << endl;
}
void fun9(string msg) {
    cout << "Message: " << msg << endl;
}
void fun10(string msg) {
    cout << "Message: " << msg << endl;
}
void fun11(string msg) {
    cout << "Message: " << msg << endl;
}
void fun12(string msg) {
    cout << "Message: " << msg << endl;
}
void fun13(string msg) {
    cout << "Message: " << msg << endl;
}
void fun14(string msg) {
    cout << "Message: " << msg << endl;
}
void fun15(string msg) {
    cout << "Message: " << msg << endl;
}
void fun16(string msg) {
    cout << "Message: " << msg << endl;
}
void fun17(string msg) {
    cout << "Message: " << msg << endl;
}

int main() {
    thread t1(fun1, "fun 1");
    thread t2(fun2, "fun 2");
    thread t3(fun3, "fun 3");
    thread t4(fun4, "fun 4");
    thread t5(fun5, "fun 5");
    thread t6(fun6, "fun 6");
    thread t7(fun7, "fun 7");
    thread t8(fun8, "fun 8");
    thread t9(fun9, "fun 9");
    thread t10(fun10, "fun 10");
    thread t11(fun11, "fun 11");
    thread t12(fun12, "fun 12");
    thread t13(fun13, "fun 13");
    thread t14(fun14, "fun 14");
    thread t15(fun15, "fun 15");
    thread t16(fun16, "fun 16");
    thread t17(fun17, "fun 17");
    
    // Wait for thread to finish
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    t10.join();
    t11.join();
    t12.join();
    t13.join();
    t14.join();
    t15.join();
    t16.join();
    t17.join();

    cout << "Main thread finished." << endl;
    return 0;
}

