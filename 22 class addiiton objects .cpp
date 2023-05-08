#include<iostream>
using namespace std;
class employ{
    int a;
    int b;
    public:
    void setData(int a1, int b1){
        a = a1;
        b = b1;
    }
    void setDataSum(employ s1, employ s2){
        a = s1.a + s2.a;
        b = s1.b + s2.b;
    }
    void display(){
        cout<<"The Number is "<<a<<" + "<<b<<"i"<<endl;
    }

};


int main(){
    employ amaan , rutba, sum;
    amaan.setData(1,2);
    amaan.display();
    rutba.setData(3,4);
    rutba.display();
    sum.setDataSum(amaan,rutba);
    sum.display();

}