#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){

for(int i=1; i<=n-1; i++){
int current = a[i];
int prev =i-1;

while (prev>=0 and a[prev]>current)
{
    a[prev+1] = a[prev];
    prev = prev-1;
}

a[prev+1] = current;
}

}



int main() {

 int arr[] ={1, 3, 6, 19, 12, 8};
    int n = sizeof(arr)/sizeof(int);


insertion_sort(arr, n);

for(auto x: arr){
    cout<< x<<endl;
}

return 0;
}