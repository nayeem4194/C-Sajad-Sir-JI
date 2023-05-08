#include<iostream>
using namespace std;
class student{
    int id;
    int counter;
    public:
    int setCounter(void){
        counter = 1;
    }
    int setdata(){
        cout<<"Enter id of EMPLOY NO:- "<<counter<<" ";
        cin>>id;
        counter++;
    }
    void display(){
        cout<<"id : "<<id<<endl;
    }
};
int main(){
    student amaan;
    amaan.setCounter();
    amaan.setdata();
    amaan.setdata();
    amaan.setdata();
    amaan.display();
}