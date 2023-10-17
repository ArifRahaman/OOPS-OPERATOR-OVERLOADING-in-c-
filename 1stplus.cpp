

#include <iostream>
using namespace std;

class Sum1
{
    private:
    int b;

public:
   
    Sum1(int b = 0)
    {
        this->b = b;
    }
    void show()
    {
        cout << "The value of b is: " << b << endl;
    }
    // Declare the friend function
  friend Sum1 operator+(const Sum1 &obj1,const Sum1 &obj2);
};

// Define the friend function
Sum1 operator+(const Sum1 &obj1,const Sum1 &obj2){
    Sum1 result;
    result.b=obj1.b+obj2.b;
    return result;
}

int main()
{
    Sum1 a(3);
    Sum1 b(8);
    Sum1 c;
    c = a + b; // Perform addition using the friend function
    c.show();
    return 0;
}
