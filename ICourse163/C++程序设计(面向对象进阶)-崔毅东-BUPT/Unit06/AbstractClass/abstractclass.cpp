#include <iostream>

class Abs { // exist virtual function of pure, thus, it is astract class
public:
    virtual void test() = 0;
};

class A : public Abs {
    //haven't implement test() [virtual func of pure], therefore, it too.
    // virtual void test() = 0; // equation
};

class B : public Abs {
public:
    void test() override;
};

void B::test() {
    std::cout << "Override test()" << std::endl;
}

/*  Abs Class:
 *      1. cann't instance
 *      2. exist virtual function of pure
 *      3. haven't override virtual function of Abs_class, Sun_class also become Abs_class
 *      4. Can access sun_class func_member by use BaseClas pointer;
 * */

int main() {
    //Abstact Class cann't instance.
    //Abs abs; // error
    //A a;    // error

    B b; // ok
    b.test();

    //Base pointer to access sun_class func;
    Abs* abs_pointer = new B();
    abs_pointer->test();
    return 0;
}
