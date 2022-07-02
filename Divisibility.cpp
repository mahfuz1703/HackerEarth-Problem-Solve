#include <iostream>
using namespace std;

int main(){
    int t, a[100000], i, countt = 0;

    cin>>t;
    for(i = 0; i < t; i++){
        cin>>a[i];
    }
    for(i = 0; i < t; i++){
        countt = a[i] % 10;
    }
    if(countt % 10 == 0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
