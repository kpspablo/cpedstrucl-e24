#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; 
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};

int main() {
    LinkedList list;
    int choice, num, count (0);
    
    while(choice!=5){
    	cout << "\nMAIN MENU \n";
		cout << "1: Insert \n";
		cout << "2: Pop \n";
		cout << "3: Exit \n";
		cout << "Choice: ";
    	cin >> choice;
		switch(choice){
			case 1: cout << "Enter a number: ";	//push a number
					cin >> num;
					list.addValue(num);
					count++;
					break;
			case 2: if (count==0)	//pop a number and display the number that was pop
						cout << "EMPTY\n";
					else
			        	cout << list.popValue() << endl;
					count--;
					break;
			case 3: exit(1);
				break;
			default: cout << "INPUT INVALID\n";
		}
}
	return 0;
}
