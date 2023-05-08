#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll;
    public:
    void setData(string s1, int r1);
    void display(){
        cout<<"the name of student is "<<name<<endl;
        cout<<"the Roll Number of student is "<<roll<<endl;
    }
};
void student :: setData(string s1, int r1){
    name = s1;
    roll = r1;
}
int main(){
    student amaan;
    amaan.setData("Amaan", 36);
    amaan.display();
}