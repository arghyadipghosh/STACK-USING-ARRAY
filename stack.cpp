#include<iostream>
using namespace std;


	int arr[10],top=-1;
	void push(int val)
	{
	   
	   top++;
	   arr[top]=val;
	   
	   	
		   	
	}
	void pop()
	{
		if(top<=-1)
		cout<<"stack underflow"<<endl;
		else
		{
			

		cout<<arr[top]<<endl;
				top--;	
		}
		
		
	}
	void display()
	{
		if(top>=0)
		{
		
		cout<<"stack elements:";
		for(int i=top;i>=0;i--)
		cout<<arr[i]<<endl;
}
else
cout<<"stack empty";
}

int main()
{
	int ch,val;
	cout<<"1)push in stack:"<<endl;
	cout<<"2)pop from stack:"<<endl;
	cout<<"3)display stack:"<<endl;
	cout<<"4)exit"<<endl;
	do{
		cout<<"enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
				
				cout<<"enter the value to be pushed:"<<endl;
				cin>>val;
				push(val);
				break;
			}
				
				case 2:
					{
						pop();
						break;
					}
					case 3:
						{
							display();
							break;
							
						}
						case 4:
							{
								cout<<"exit"<<endl;
							}
							default:
								{
									cout<<"out of choice";
								}
					
					
		}
	}while(ch!=4);

		
	return 0;
}
