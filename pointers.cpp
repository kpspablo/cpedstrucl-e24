#include<iostream>
#include<cstring>

using namespace std;
char* string_STRCAT(char* str1, char* str2);
char* string_STRCPY1(char* str1, char* str2);
char* string_STRREV(char* str1);
int string_STRCMP(char* str1, char* str2);

int main(){
	
	int choice;
	char str1[50];
	char str2[50];
	char str3[50];
	
	do{
	
	cout<<"\n\n\nEnter first message:";
	cin>>str1;
	cout<<"\nEnter second message:";
	cin>>str2;
	

	cout<<"\nMAIN MENU";
	cout<<"\n[1] STRCAT";
	cout<<"\n[2] STRCPY";
	cout<<"\n[3] STRREV";
	cout<<"\n[4] STRCMP";
	cout<<"\n[5] EXIT";
	
	cout<<"\nEnter choice:";
	cin>>choice;
	

	switch(choice)
	{
		case 1: 
			string_STRCAT(str1, str2);
			cout<<"\nMessage:" << str1;
		break;
		case 2: 
			cout<<"\nFirst message:" << str1;
			string_STRCPY1(str1, str2);
			cout<<"\nNew second message:" << str1;
		break;
		case 3:
			string_STRREV(str1);
			cout<<"Reverse first message:"<< str1;
		break;
		case 4:
			int res;
			res = string_STRCMP(str1, str2);
			if(res ==0)
				cout<<"Message are equal";
			else
				cout<<"Message not equal";
		break;
		case 5: return 0;
		break;
		default: cout<<"WRONG OUTPUT!"; break;
	}
		
}
	while(choice!=0);
}

char* string_STRCAT(char* str1, char*str2 ){
	int i(0), j(0);
	while(str1[i]!='\0')
		i++;
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return str1;
}

char* string_STRCPY1(char* str1, char* str2){
	int i=0;
	while(str1[i]!='\0'){
		str2[i] = str1[i];
		i++;
	}
}


char* string_STRREV(char *str1){
	int i=0, j=0;
	char temp;
	while(str1[i]!='\0')
		i++;
	i--;
	while (i>j){
		temp = str1[i];
		str1[i]= str1[j];
		str1[j]= temp;
		j++;
		i--;
	}
	return str1;
}

int string_STRCMP(char* str1, char* str2){
	int i=0;
	
	while(str1[i]!='\0' || str2[i]!='\0'){
		if(str1[i] != str2[i]);
		return (str1[i]-str2[i]);
		
		i++;
	}
}
