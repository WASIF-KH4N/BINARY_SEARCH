//**BINARY SEARCH USING ITERATIVE METHOD**
#include <iostream>
using namespace std;
 int array[8],n,x;
int binarySearch(int low,int high){
    while(low<high){
        int mid=(low+high)/2;
        if (array[mid]==x){
            return mid;
        }
        else if(array[mid]>x){
            high=mid+1;
        }
        else
        {
            low=mid-1;
        }
        
    }
    return -1;
}
int main(){
    cout<<"Enter size of an array: ";
    cin>>n;
    cout<<"Enter the element of an array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];

    }
    cout<<"Enter the number to be searhed: ";
    cin>>x;
    int result=binarySearch(0,n);
    if(result==-1){
        cout<<"Element not found in array";
    }
    else{
        cout<<"Element found at index: "<<result;
       
    }
     return 0;

}
