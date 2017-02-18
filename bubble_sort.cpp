#include<iostream> 
using namespace std;
int main(){
  	int a[]= {35,10,55,20,5};     
    for(int i=1;i<5;++i){
        for(int j=0;j<(5-i);++j)
            if(a[j]>a[j+1]){
                int swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        for(int k=0;k<5;++k)
        cout<<a[k]<<endl;   
    }
    return 0;
}
