



#include <iostream>
#include <set>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    cout<<"Hello World";
    
    //set
    set <int> s;
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(9);
    s.insert(7);
    s.insert(5);
    
    
    
    
    //algo
    vector <int> v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(0);
    
    cout << binary_search(v.begin(), v.end(), 4) << endl;
    
    int a=0;
    int b=7;
    swap(a,b);
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    string str = "shdyf";
    reverse(str.begin(), str.end());
    cout << str << endl;
    
    
    
    return 0;
}
