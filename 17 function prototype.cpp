#include<iostream>
#include<math.h>
using namespace std;
int sum(int,int);
int main(){
int a,b;
cin>>a>>b;
cout<<"sum is "<<sum(a,b);
}
int sum(int a, int b){
    int c=a+b;
    return c;
}