


#include <iostream>

using namespace std;
void swap(int* e, int* f){
    int temp;
    temp=*e;
    *e=*f;
    *f=temp;
}

void increment(int* g){
    cout << *g << endl;
    *g = *g+1;
    cout << *g << endl;
}

int main()
{
    
    int a=10;
    int b=20;
    int* c;
    int* d;
    c=&a;
    d=&b;
    
    
    increment(&a);
    
    
    cout<<a<<endl;
    cout<<"Hello World";

    return 0;
}
