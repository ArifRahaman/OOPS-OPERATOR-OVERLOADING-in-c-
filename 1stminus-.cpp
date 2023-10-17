
#include <iostream>
using namespace std;
class Sub
{
private:
    int a;
    int b;

public:
    Sub(int a = 0)
    {
        this->a = a;
    }
    void print()
    {
        cout << "Value of a is: " << a;
    }
 
    Sub operator-()
    {
        Sub temp;
        temp.a = -a;
        return temp;
    }

};
int main()
{
    Sub a(2);
    Sub b;
    b=-a;
    b.print();

    return 0;
}
