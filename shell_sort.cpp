#include<iostream> 
using namespace std;
void shell_sort(int *a, int n){
	int count(0);
	int h, i, j, k;
	for(h=n; h/=2;){
		for(i=h; i<n; i++){
			k=a[i];
			for(j=i; j>=h && k<a[j-h]; j-=h){
				a[j] = a[j-h];
			}
			a[j]=k;
			cout << "PASS " <<++count<<endl;  
        	        for(int k=0;k<5;++k)
        		   cout<<a[k]<<" ";     
		}
	}
}
int main(int ac, char **av){
    int a[]= {40, 30, 20, 50, 10}; 
    int n = 5;
    shell_sort(a,n);  
    return 0;
}
