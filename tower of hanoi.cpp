#include<iostream>
using namespace std;

void TOH(int n,char beg, char aux,char end )
{
	if(n==1)
	{
		cout<<" Move Disk "<<n<<" from "<<beg<<" to "<<end<<endl;
		return;
	}
	TOH(n-1,beg,end,aux);
	cout<<" Move Disk "<<n<<" from "<<beg<<" to "<<end<<endl;
	TOH(n-1,aux,beg,end);
}
int main()
{
	int n;
	cout<<"Enter no. of disks: ";
	cin>>n;
	//calling the TOH
	TOH(n,'B','A','E');
	return 0;
}