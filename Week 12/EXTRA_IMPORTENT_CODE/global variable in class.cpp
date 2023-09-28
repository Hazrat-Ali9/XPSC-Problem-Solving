#include<bits/stdc++.h>
using namespace std;
class MyClass
{
private:
    int myArray[5]; // private array of integers
public:
    void setArray(int index, int value)   // public function to set values in array
    {
        myArray[index] = value;
    }
    int getArray(int index)   // public function to get values from array
    {
        return myArray[index];
    }
};
int main()
{
    MyClass obj; // create an object of MyClass
    obj.setArray(0, 10); // set the value of the first element in the array
    obj.setArray(1, 20); // set the value of the second element in the array
    int value1 = obj.getArray(0);
    return 0;
}
