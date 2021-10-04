#include <iostream>
using namespace std;
struct node{
    /* data */
    int info;
    node *next;

};

class list{
private:
    /* data */
    node *head;
    node *temp;
    node *temp1;
    node* temp2;
    int key;
public:
    list(){
        head = temp = temp1 = NULL; 
}

    void print(){

    if(head == NULL){
        cout << "List is EMPTY. " <<endl;
        return;
    }
    while(temp!=NULL){
        cout << temp->info <<endl;
        temp = temp->next;
        }
    }

    void add(){
    if(head==NULL){
        head = new node;
        cout << "Please enter the value of HEAD. " << endl;
        cin >> head->info;
        head->next = NULL;

        return ;
    }
    temp = head;
    cout << "Enter where you want to add value. " << endl;
    cin >> key;
    //while (temp!=NULL)
   // {
        /* code */
        if(temp->info == key){
            temp1 = new node;
            cout <<"Enter the temp info"<<endl;
            cin >> temp->info;
            temp1->next = temp->next;
            temp->next=temp1;
        }

        //cout << ""
   // }
    
}


void del(){
    if(head == NULL){
        cout << "No value to Delete due of Empty list. " <<endl;
        return;
    }

    cout << "Enter the key deletation. " << endl;
    cin >> key;
    while (temp!=NULL){
        if (temp->next->info == key){
            temp2=temp->next;
            temp->next=temp2->next;
            delete temp2;
        }
        temp = temp->next;
        if (head->info == key)
        {
            head = head->next;
            delete temp;
        }
        
        
    }
    

}





};
int main()
{   
    list obj;
    int num;
    int len = 10;
    for(int i = 0;i<len;i++)
	{
		cout<<"enter element  :  ";
		cin>>num;
		obj.add();
	}
	cout<<endl;
    obj.print();
    obj.add();
    obj.del();
    return 0;
}

