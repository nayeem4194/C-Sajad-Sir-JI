#include<iostream>
using namespace std;
class shop{
    int a;
    int b;
    int c;
    public:
    int add(int x,int y,int z){
        a =x;
        b=y;
        c=z;
    }
    void show(){
        cout<<"the addition is "<<a+b+c<<" "<<endl;
    }
};


int main(){
    shop c1;
    int a,b,c;
    cin>>a>>b>>c;
    c1.add(a,b,c);
    c1.show();

}