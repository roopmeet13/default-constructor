// using a default constructor 
#include <iostream>

using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    
    rectangle(){
        length=3;
        breadth=4;
    }
};
int main()
{
    // using a pointer to create an object and further calling its properties
rectangle *area= new rectangle;
area->length;
area->breadth;
cout<<area->length<<" "<<area->breadth<<endl;

    return 0;
}