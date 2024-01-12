#include <iostream>
using namespace std;
//Jai Nitin Mayur.M😊
int main() {
    int n,i;
    bool isprime = true;
    cout<<"enter a number to find if it is an factorial. "<<endl;
    cin>>n;
    for (int i = 2; i <n; ++i) {
        if (i == n)
        {
            i++;
        }
        if (n%i == 0)
        {
            isprime = false;
        }
    }
    if(isprime)
    {
        cout<<"it is a prime number";
    }else
    {
        cout<<"it is not a prime number";
    }
    return 0;
}
