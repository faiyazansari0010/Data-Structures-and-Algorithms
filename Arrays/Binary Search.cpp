// 704. Binary Search

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
// If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity

#include<iostream>
using namespace std;

 int binarySearch(int array[],int n,int key){ 
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if (array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
 }

int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"Enter the array: ";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<key<<" is at position "<<binarySearch(array,n,key)<<endl;

    return 0;
}