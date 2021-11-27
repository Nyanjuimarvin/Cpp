#include <iostream>

using namespace std;

template <typename W>

W add(W x , W y)
{
    return x + y;
}

int main()
{
    cout<<add<int>(4,6)<<endl;
    cout<<add<float>(4.56,55.6)<<endl;
    cout<<add<string>("Hello ","World")<<endl;
    return 0;
}
