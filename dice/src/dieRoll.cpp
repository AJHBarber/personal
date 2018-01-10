#include <iostream>

using namespace std;

int rolld6();

int main()
{
    cout<<rolld6()<<endl;

    return 0;

}

int rolld6()
{

    return rand() % 6 + 1;
}
