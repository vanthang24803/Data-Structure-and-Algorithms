#include <iostream>

using namespace std;

long long exponential(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * exponential(a, b - 1);
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    long long result = exponential(a, b);
    cout << result << endl;
    return 0;
}
