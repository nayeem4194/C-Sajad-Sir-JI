#include<iostream>
using namespace std;
class Employ{
    public:
    int id;
    int salary;
    Employ(int x){
        id = x;
        salary = 3400;
    }
    Employ(){}
};
class Second : public Employ{
    public:
    Second(int y){
        id = y;
        salary = 0;
    }
};
int main(){
    Employ C1(3);
    cout<<C1.salary<<endl;
    cout<<C1.id<<endl;
    Second C2(4);
    cout<<C2.id<<endl;
    cout<<C2.salary<<endl;
}