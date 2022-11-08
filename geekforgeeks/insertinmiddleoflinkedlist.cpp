<<<<<<< HEAD
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* curr=head;
	int count=0;
	int pos,a=1;
	while(curr!=NULL)
	{
	    count++;
	    curr=curr->next;
	}
    if(count%2!=0){
        pos=(count+1)/2;
    }
    else{
        pos=count/2;
    }
    curr=head;
    Node* temp=new Node(x);
    while(a!=pos){
        curr=curr->next;
        a++;
    }
	temp->next=curr->next;
	curr->next=temp;
    return head;
	

=======
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* curr=head;
	int count=0;
	int pos,a=1;
	while(curr!=NULL)
	{
	    count++;
	    curr=curr->next;
	}
    if(count%2!=0){
        pos=(count+1)/2;
    }
    else{
        pos=count/2;
    }
    curr=head;
    Node* temp=new Node(x);
    while(a!=pos){
        curr=curr->next;
        a++;
    }
	temp->next=curr->next;
	curr->next=temp;
    return head;
	

>>>>>>> 51d26dc0fb8978a6469bf67e64f00d5d4bcd4fed
}