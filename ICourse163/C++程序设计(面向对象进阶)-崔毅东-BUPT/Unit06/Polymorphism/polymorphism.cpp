#include <iostream>
#include <string>
using std::cout;
using std::endl;

class A {
public:
    std::string toString() { return "A"; }    
    virtual std::string toString2() { return "A"; }    
};

class B : public A {
public:
    std::string toString() { return "B"; }
    std::string toString2() { return "B"; }
};

class C : public B {
public:
    std::string toString() { return "C"; }
    std::string toString2() { return "C"; }
};

//Overload : Static Binding --> Polymorphism

void print(A a) {
    cout << a.toString() << endl;    
}

void print(B b) {
    cout << b.toString() << endl;    
}

void print(C c) {
    cout << c.toString() << endl;    
}

//Dynamic Binding(virtual function) : Run-time Polymorphism
void print(A* o) {
    cout << o->toString2() << endl;    
}

void print2(A& o) {
    cout << o.toString2() << endl;    
}

int main() {
    cout << "Static Binding(Override): Polymorphism" << endl;
    A a;
    B b;
    C c;
    print(a); //A
    print(b); //B
    print(c); //C

    cout << "Dynamic Binding(virtual function): Ploymorphism"<< endl;
    A *aa = new A(), *bb = new B(), *cc = new C();
    print(aa); //A
    print(bb); //B
    print(cc); //C

    putchar('\n');

    print2(a); //A
    print2(b); //B
    print2(c); //C

    putchar('\n');

    A *aaa = &a, *bbb = &b, *ccc = &c;
    print(aaa); //A
    print(bbb); //B
    print(ccc); //C

    return 0;    
}
