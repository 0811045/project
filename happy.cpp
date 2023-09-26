#include <iostream>

using namespace std;


class test
{
    private:
        int a;
        int b;
        int c;
    public:
        test(int a, int b, int c);

};
test::test(int a=10, int b=20, int c=30):a(a),b(b),c(c)
{
}

int main()
{

    test test1(1,3);
   
}

