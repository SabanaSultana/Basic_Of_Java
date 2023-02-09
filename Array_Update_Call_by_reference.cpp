#include<iostream>
using namespace std;
int update(int a[],int n){
    cout<<"Element in update function"<<endl;
    a[0]=100;
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
     }
}

int main(){
   int a[5]={12,43,90,46,23};
   int  n=5;
    update(a,n);
   cout<<"Element in main function"<<endl;
    // update(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
   }
//    update(a,n);

}