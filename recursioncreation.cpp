#include<iostream>
using namespace std;


//create a recursive funtion of the following logic given in the main function.
long long factorial(int n){
    if(n <= 0 ) return 1;
    return factorial(n-1) * n;
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    long long ans = factorial(n); 

    cout<<ans<<endl;
}