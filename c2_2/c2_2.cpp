#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    int result = 0;
    int p;
    while (n>0){
        p = n%10;
        result = result+p*count;
        count = count*2;
        n=n/10;
    }

    cout<<result<<endl;

    return 0;
}
