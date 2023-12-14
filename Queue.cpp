#include<iostream>
using	namespace	std;
#include<stdio.h>
#define	MAX	5

int	queue_arr[MAX];
int	rear=-1;
int	front=-1;
insert(){
	int	added_item;
	if(rear==MAX-1){
		cout<<"Queue	Overflow"<<endl;
	}
	
	else{
		if(front==-1)
		front=0;
		printf("Input	the	element	for	adding	in	queue:");
		cin>>added_item;
		rear=rear+1;
		queue_arr[rear]=added_item;		
	}
}

del(){
	if(front==-1||front>rear)
	{
		cout<<"Queue	Underflow"<<endl;
	
	}
	else{
	
		cout<<"Element	deleted	from	queue"<<queue_arr[front]<<endl;
		front=front+1;
	}
}
display(){
	int	i;
	if(front==MAX-1)
		cout<<"Queue	is	empty"<<endl;
		
	else{
		cout<<"Queue	is:"<<endl;
		for(i=front;i<rear;i++)
			cout<<"QUEUE:"<<queue_arr[i];
		cout<<endl;
	}
}


main()
{
	int	choice;
	while(1)
	{
		cout<<"1.Insert"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Quit"<<endl;
		cout<<"Enter	your	choice"<<endl;
		cin>>choice;
		switch(choice){
			case	1:
					insert();
					break;
			case	2:
					del();
					break;
			case	3:		
					display();
					break;
			case	4:
					exit(1);
			default:
					cout<<"Wrong	choice"<<endl;
		}
	}
	return 0;
}


