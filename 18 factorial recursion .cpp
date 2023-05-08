#include<iostream>
#include<math.h>
using namespace std;
int factorial(int a){
    if (a<=1)
    {
        return 1;
    }
    else{
        return (a* factorial(a-1));
    }
    
}
int main(){
    int a;
    cin>>a;
    cout<<"the factorial is "<<factorial(a);
}