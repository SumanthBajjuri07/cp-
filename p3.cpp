



#include <iostream>
#include <array>
#include <vector>
#include <deque>


using namespace std;

int main()
{
    
   
    
    
    
    //array
    array <int,5> a = {2,4,5,8,9};
    cout << a.size() << endl;
    cout << a.front() << a[2] << endl;
    std :: cout << a.back() << a.empty() << endl;
    
    
    
    //vector 
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    cout << v.at(1) << v[2] << endl;
    v.push_back(5);
    v.pop_back();
    cout << v.size() << v.capacity() << endl;
    cout << v.front() << v.back() << endl;
    v.clear();
    cout << v.size() << v.capacity() << endl;
    vector<int> b(5,2);
    vector<int> c(b);
    
    
    
    //deque
    deque<int> d;
    d.push_back(8);
    d.push_back(7);
    d.push_front(3);
    d.push_front(9);
    cout << d.at(0) << d[1] << endl;
    cout << d.front() << d.back() << endl;
    d.pop_back();
    d.pop_front();
    cout << d.front() << d.back() << endl;
    cout << d.size() << d.empty() << endl;
    
    
    
    
    
    
  

    return 0;
}
