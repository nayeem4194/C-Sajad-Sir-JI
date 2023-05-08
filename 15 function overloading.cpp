#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(string &sa, string &sb){
    string temp;
    temp=sa;
    sa=sb;
    sb=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping::"<<a<<" "<<b<<endl;
    cout<<"after swapping";
    swap(a,b);
    cout<<"   numbers are "<< a<<" "<<b<<endl;
    string c,d;
    cin>>c>>d;
    cout<<"Before swapping::"<<c<<" "<<d<<endl;
    cout<<"after swapping";
    swap(c,d);
    cout<<"   numbers are "<< c<<" "<<d<<endl;
}