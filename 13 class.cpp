#include <iostream>
using namespace std;

class GlassObject {
private:
    int feet; // distance in feet
    int inches; // distance in inches

public:
    // Constructor to set initial distance values
    GlassObject(int f, int i) {
        feet = f;
        inches = i;
    }

    // Function to show distance in feet and inches
    void showDistance() {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }
    void calculateDistanceSum(GlassObject obj) {
        int total_feet = feet + obj.feet;
        int total_inches = inches + obj.inches;
        cout<< "111   "<<feet<<endl;
        cout<< "222   "<<obj.feet<<endl;
        cout<< "333   "<<inches<<endl;
        cout<< "444   "<<obj.inches<<endl;
    }
};
int main() {
    // Create two GlassObject instances with initial distances
    GlassObject obj1(5, 6);
    GlassObject obj2(3, 10);

    // Show distances in feet and inches
    obj1.showDistance();
    obj2.showDistance();

    // Calculate and show sum of distances
    obj1.calculateDistanceSum(obj2);

    return 0;
}



