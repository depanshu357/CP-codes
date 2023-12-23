#include<iostream> 
using namespace std;   
class Base { public:     virtual void show() { cout<< "In Base" << endl; } };   
class Derived: public Base { public:     void show() { cout<< "In Derived" << endl; } };   
int main(void) {     Base *bp = new Derived;
     bp->show();     
     Base &br = *bp;     
     br.show();     
     return 0; } 