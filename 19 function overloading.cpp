#include<iostream>
#include<math.h>
using namespace std;
double sum(int a, int b,int c){
    return a+b+c;
}
int sum(int a, int b){
    return a+b;
}
int main(){
    int a, b,c;
    cin>>a>>b>>c;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
}