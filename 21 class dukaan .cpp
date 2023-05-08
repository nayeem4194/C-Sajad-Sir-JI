#include<iostream>
using namespace std;
class shop{
    private:
    int itemID[100];
    int itemPrice[100];
    int count;
    public:
    void counter(void){
        count = 0;
        // count++;
    }
    void setData(void){
        cout<<"put the item Id "<<endl;
        cin>>itemID[count];
        cout<<"put the item price "<<endl;
        cin>>itemPrice[count];
        count++;
    }
    void display(void){
        for (int i = 0; i < count; i++)
        {
        cout<<"item ID is "<<itemID[i]<<endl;
        cout<<"item price is "<<itemPrice[i]<<endl;
            
        }
        
    }

};
int main(){
    shop dukaan;
    dukaan.counter();
    dukaan.setData();
    dukaan.setData();
    dukaan.setData();
    dukaan.display();
}