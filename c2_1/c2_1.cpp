#include<iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    int array[100] ={0};
    for(int i =0;i<n;i++){
        cin >> array[i];
    }
    int sum =0;
    int max_idx=0;
    int min_idx =0;

    for (int j=0;j<n;j++){
        sum = sum+array[j];
        if(array[j]>array[max_idx]){
            max_idx = j;
        }
        if(array[j]<array[min_idx]){
            min_idx = j;
        }

    }
    cout << sum <<" "<<array[min_idx]<<" "<<array[max_idx]<<endl;

    return 0;

}
