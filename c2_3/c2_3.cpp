#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<"*"<<endl;
        return 0;
    }

    for (int y=0;y<(2*n-1);y++){
        if (y<=n-1){
            for (int x=0;x<(2*n-1);x++){
                if(x>=(n-1)-y%(2*n-2) && x<=(n-1)+y%(2*n-2)){
                    cout<<"*";
                }
                else{
                cout<<" ";
                }
            }
            cout<<endl;
        }
        else {
            for(int x=0;x<(2*n-1);x++){
                if(x>=y-n+1 && x<=(n-1)+(2*n-2-y)){
                        cout<<"*";
                    }
                else{
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
        }
        
    return 0;
}