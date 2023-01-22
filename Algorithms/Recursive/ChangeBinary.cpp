#include <iostream>
#include<string>

using namespace std;


void ChangeBinary(int n , string s){
  	if (n == 0) cout << s << " ";
	else {
		for (int i = 0; i <= 1; i++){
			ChangeBinary(n-1, s + char(i + '0'));
		}
	}
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ChangeBinary(n, "");
    return 0;
}
