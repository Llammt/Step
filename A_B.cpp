#include <iostream>
using namespace std;

class A {
public:
    void set_a(int a){this->a = a;}
    int get_a() {return this->a;}

private:
  int a;
};

class B {
public:
    void set_b(int b) {this->b = b;}
    int get_b() {return this->b;}
    A a_b;

private:
    int b;

};

int main(){
    B bb;
    bb.a_b.set_a(5);
    cout << bb.a_b.get_a() << endl;
}
