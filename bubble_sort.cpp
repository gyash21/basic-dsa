#include<iostream>
using namespace std;



void bubble_sort(int a[],int n){

for( int times=1; times<= n-1; times++){

    for(int j=0; j<=n - times -1; j++){

        if (a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
        
    }
}

}




int main(){

    int arr[] ={1, 3, 6, 19, 12, 8};
    int n = sizeof(arr)/sizeof(int);


bubble_sort(arr, n);

for(auto x: arr){
    cout<< x<<endl;
}

return 0;

}