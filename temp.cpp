#include <iostream>
using namespace std;
namespace first
{
    int val = 400;
}
namespace second
{
    int val = 300;
}
int val = 100;
int main()
{
    int val = 200;
    cout << val + first::val << endl;
    return 0;
}