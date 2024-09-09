#include<iostream>
using name space std;
class stack
{
	public:
		char s[20];
		int top,MAX;
		stack();
		void push(char t);
		char pop();
		int IsEmpty();
		char getTop();
		int InsideStackOperatorPriority(char);// in stack priority
		int IncomingOperatorPriorty(char);// in coming priority
		void Infix_to_Postfix(char infix[20]);
};
Stack::Stack()
{
	top=1;
	MAX=20;
}
void Stack::push(char t)
{
	if(top==MAX-1)
	cout<<"Stack is overflow"<<endl;
	else
	s[++top]=t;
}
char Stack::pop()
{
	char ch;
	if(top==-1)
	cout<<"Stack is underflow "<<endl;
	else
	{
		ch=s[top];
		top--;
	}
	return ch;
}
int Stack::IsEmpty()
{
if(top==-1)
return 1;
else
return 0;	
}
char Stack::getTop()
{
	char ch;
	if(IsEmpty())
	cout<<"Stack is empty"<<endl;
	else
	{
		ch=s[top];
	}
	return ch;
}
int Stack::InsideStackOperatorPriority(char ch)
{
	switch(ch)
	{
	case'-':
	return 1;
	case'*':
	return 2;
	case'^':
	return 3;
	case'(':
	return 0;
	case'#':
	return -1;	
	case'/':
	}
	return 0;
}
int Stack::IncomingOperatorPriority(char ch)
{
}