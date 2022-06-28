// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


stack<int> ministack;
void push(stack<int>& s, int a){
  s.push(a);
  if(ministack.empty() || ministack.top()>=a)
   ministack.push(a);
       
// Your code goes here
}

bool isFull(stack<int>& s,int n){
   if(s.size()==n)
   return true;
   else
   return false;
// Your code goes here
}

bool isEmpty(stack<int>& s){
   if(s.size()==0)
   return true;
   else
   return false;
// Your code goes here
}

int pop(stack<int>& s){
   if(s.empty())
   return -1;
   
   int x = s.top();
   if(x==ministack.top())
   ministack.pop();
   s.pop();
   return x;
// Your code goes here
}

int getMin(stack<int>& s){
   if(ministack.empty())
   return -1;
   else
   return ministack.top();
// Your code goes here
}