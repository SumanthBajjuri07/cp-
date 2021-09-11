

#include <iostream>

using namespace std;
void swap(int* e, int* f){
    int temp;
    temp=*e;
    *e=*f;
    *f=temp;
}

int main()
{
    
    int a=10;
    int b=20;
    int* c;
    int* d;
    c=&a;
    d=&b;
    
    swap(c,d);
    
    cout<<a<<" "<<b<<endl;
    cout<<"Hello World";

    return 0;
}
