// Program 1


#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int*p = &a;
    
    
    char ch = 10;
    char* pch = &ch;
    
    if(sizeof(ch) == sizeof(a))
    {
        cout<<"hey"<<endl;
    }
    else
    {
        cout<< "hii "<<endl;
    }
return 0;

}
