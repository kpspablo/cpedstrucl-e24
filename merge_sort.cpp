#include<iostream> 
using namespace std;
int a[]= {6,5,3,1,8,7,2,4};
int temp[8]; 
int count(0), l1, k, h1, h2, l2, i, j;
main(){
    for(int s=1; s<8; s=s*2){
    	l1=0;
    	k=0;
    	while(l1+s<8){
    		h1=l1+s-1;
    		l2=h1+1;
    		h2=l2+s-1;
    		if (h2>= 8)
    			h2=8-1;
    		i=l1;
    		j=l2;
    		while(i<=h1 && j<=h2){
    			if(a[i] <= a[j])
    				temp[k++]=a[i++];
    			else
    				temp[k++]=a[j++];
			}
		while(i<=h1)
			temp[k++]=a[i++];
		while(j<=h2)
			temp[k++]=a[j++];
		l1=h2+1;
	}
	for(i=l1; k<8; i++)
		temp[k++]=a[i];
	for(i=0;i<8;i++)
		a[i]=temp[i];
	cout << "PASS " <<++count<<endl;  
        for(k=0;k<8;++k)
        	cout<<a[k]<<endl;  	
	}

    return 0;
}
