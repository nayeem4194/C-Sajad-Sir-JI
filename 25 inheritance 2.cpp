#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void set(void){
        data1 = 10;
        data2 = 20;
    }
    int setData1(){
        return data1;
    }
    int setdata2(){
        return data2;
    }
};
class base2 : private base{
    public:
    int data3;
    int setData3(){
        set();
    data3 = setData1() * setdata2();
    return data3;
    }
    void display(){
        cout<<"we have first number as = "<<setData1()<<endl;
        cout<<"we have second number as = "<<setdata2()<<endl;
        cout<<"we have third number as = "<<setData3()<<endl;
    }
};
int main(){
    base2 c1;
    c1.setData3();
    c1.display();
}