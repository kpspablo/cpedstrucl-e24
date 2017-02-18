#include<iostream> 
using namespace std;
int main(){
	int j;
  	int a[]= {40, 30, 20, 50, 10};     
    for(int i=1;i<5;i++){
        int tmp=a[i];
		for(j=i-1;j>=0 && tmp<a[j];j--){
			a[j+1]=a[j];
		}
		a[j+1]=tmp;
        for(int k=0;k<5;++k)
        cout<<a[k]<<endl;   
    }
    return 0;
}
