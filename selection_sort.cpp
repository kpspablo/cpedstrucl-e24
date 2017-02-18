#include<iostream> 
using namespace std;
int main(){
    int count(0);
    int a[]= {30, 40, 20, 50, 10};     
    for(int i=0;i<5-1;i++){
        int min=a[i], index=i;
	for(int j=i+1;j<5;j++)
            if(a[j]<min){
                min = a[j];
                index=j;
            }
            a[index] =a[i];
            a[i]=min;
	    cout << "PASS " <<++count<<endl;  
            for(int k=0;k<5;++k)
               cout<<a[k]<<endl;   
    }
    return 0;
}
