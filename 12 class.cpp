#include<iostream>
using namespace std;

class area{
    private:
    int length;
    int bredth;
    public:
    int rectangle(int l, int b){
        length = l;
        bredth = b;
    }
    void are(){
        int ar = length*bredth;
        cout<<ar<<endl;
    }

};

int main(){
    area a1;
    a1.rectangle(2,9);
    a1.are();

    
    
}