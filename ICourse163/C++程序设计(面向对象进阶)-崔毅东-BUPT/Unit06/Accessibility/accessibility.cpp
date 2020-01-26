#include <iostream>

using std::cout;
using std::cin;

/*  inheritance Map for accessibility ("private, protected, public")
 *  
 *
 *  Father     inh-raletive     S u n
 *
 *                          pri
 *                        / pro
 *  pri---------\  pub-> /  pub
 *               \      /           pri
 *  pro---------------------pro---> pro  
 *               /      \           pro
 *  pub---------/  pri-> \  pri 
 *                        \ pri
 *                          pri
 *
 * */

class A {
public:
    i { 0 };
protected:
    j { 0 };
private:
    k { 0 };

};

class Pub : public A {
public:
    void foo() {
        i++;
        j++;
       // k++; // is private member of A
    }
};

class Pro : protected A {
public:
    void foo() {
        i++;
        j++;
       // k++; // is private member of A
    }
};

class Pri : private A {
public:
    void foo() {
        i++;
        j++;
       // k++; // is private member of A
    }
};



int main() {
    Pub pub;
    Pro pro;
    Pri pri;

    pub.i++;
    //pub.j++; is protected
    //pub.k++; // is private
    
    //pri ans pro cann't access "i,j,k".
    std::cin.get();
    return 0;
}
