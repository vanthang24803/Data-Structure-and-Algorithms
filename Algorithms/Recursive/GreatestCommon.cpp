#include <iostream>

using namespace std;

int GreatestCommon(int a, int b)
{
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return GreatestCommon(b, a % b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int result = GreatestCommon(a, b);
    cout << result << endl;
    return 0;
}
