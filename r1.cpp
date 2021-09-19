



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string t;
    string s;
    cin >> s;
    cin >> t;
    int flag=1;

    int n= t.length();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(s[i]==t[j]){
                continue;
            }
            else{
                break;
                flag=-1;
            }


        }


    
    }
    if(flag==1){
        cout << "Yes" << endl;
    }
    else if(flag==0){
        cout << "No" << endl;
    }
        




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
