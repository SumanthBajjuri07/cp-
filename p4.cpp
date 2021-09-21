



#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    //stack
    stack <string> st;
    st.push("he");
    cout << st.top() << endl;
    st.push("h");
    st.push("we");
    st.pop();
    cout << st.size() << endl;

    
    
    
    
    //queue
    queue <string> q;
    q.push("sonu");
    q.push("sam");
    q.push("johe");
    cout << q.front() << q.size() << endl;
    q.pop();
    cout << q.front() << q.size() << endl;
    
    
    
    
    
    //priority queue
    priority_queue <int> maxi;
    maxi.push(9);
    maxi.push(1);
    maxi.push(0);
    maxi.push(7);
    maxi.push(4);
    int n = maxi.size();
    
    for(int i=0; i<n; i++){
        cout << maxi.top() << endl;
        maxi.pop();
        
    }




    return 0;
}
