#include<iostream>
#include<algorithm>
using namespace std;


bool compare(int a, int b){
    return a>b;
}






int main() {

    int arr[] = {-1, -3, 3, 4, 9, 12, -11, -19, 17};
    int n  = sizeof(arr)/sizeof(int);


    sort(arr, arr +n , compare);
    //reverse(arr, arr +n)

    //print the output
for(int x : arr){
cout<<x<<endl;
}
return 0;
}