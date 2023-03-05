#include <bits/stdc++.h>
using namespace std;
void func (int k, int c, int s)
{
    while(k){
        c++;
        s+=k%10;
        k/=10;
    }
    cout << c << "  " << s << endl;
}
int main()
{
    int k, c, s;
    for(int i = 0; i < 3; ++i){ //
        cin >> k; //вводим число
        c = 0, s = 0;
        func(k, c, s); // вызываем функцию
    }
    return 0;
}
