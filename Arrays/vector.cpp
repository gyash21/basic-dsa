#include<iostream>
#include<vector>
using namespace std;

int main() {


//Demo vector
    vector<int> arr={2,4,3,5,6};

    // Fill constructor
    vector<int> arr(10,9)

    //Pop_back

    arr.pop_back();

//Push back

arr.push_back(12);

//Print all elements

for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<endl;
}

//Size of vector
    cout<<arr.size()<<endl;

//Capacity of vector
cout<<arr.capacity()<<endl;
return 0;
}