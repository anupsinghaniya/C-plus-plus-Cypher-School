//Program 1 Recursion.

#include<bits/stdc++.h>
using namespace std;

int power(int base, int pow){

        int num = 1;
        for(int i=0;i<pow;i++){
        num*=base;
    }
return num;

}
int main(){
    cout<<power(2,3);

return 0;
}


//Program 2 Recursion continue.

#include<bits/stdc++.h>
using namespace std;

// recursive fun
int power(int base, int pow){
// 1. base case
// 2. assumption
// 3. cal.
if (pow == 0) return 1;

int sm1Ans = power(base, pow-1);


return sm1Ans*base;
}

int main(){
    cout<<power(2,3);
    return 0;
}
