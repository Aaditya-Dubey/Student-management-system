#include<iostream>
using namespace std;

	string arr1[15],arr2[15],arr3[15],arr4[15],arr5[15];
	int total=0;
	
void Data()
{
	int choice;
	
	if(total==0)
	{
		
		cout<<"How many students do you want to enter :";
		cin>>choice;
		total=total+choice;
		for(int i=0;i<choice;i++)
		{
			cout<<"\nEnter data of Student : "<<i+1<<endl;
			cout<<"Enter Name : ";
			cin>>arr1[i];
			cout<<"Enter Roll No. : ";
			cin>>arr2[i];
			cout<<"Enter Class : ";
			cin>>arr3[i];
			cout<<"Enter Course : ";
			cin>>arr4[i];
			cout<<"Enter Contact : ";
			cin>>arr5[i];
		}
		cout<<endl<<endl;
	}
	else
	{
		cout<<"How many students do you want to enter :";
		cin>>choice;
		for(int i=total;i<total+choice;i++)
		{
			
			cout<<"\nEnter data of Student : "<<i+1<<endl;
			cout<<"Enter Name : ";
			cin>>arr1[i];
			cout<<"Enter Roll No. : ";
			cin>>arr2[i];
			cout<<"Enter Class : ";
			cin>>arr3[i];
			cout<<"Enter Course : ";
			cin>>arr4[i];
			cout<<"Enter Contact : ";
			cin>>arr5[i];
		}
		cout<<endl<<endl;
		total=total+choice;	
	}
	
}
void Show()
{
		for(int i=0;i<total;i++)
		{
			cout<<"Data of Student : "<<i+1<<endl;
			cout<<"Name : "<<arr1[i]<<endl;
			cout<<"Roll No : "<<arr2[i]<<endl;
			cout<<"Class : "<<arr3[i]<<endl;
			cout<<"Course : "<<arr4[i]<<endl;
			cout<<"Contact : "<<arr5[i]<<endl;
			cout<<endl<<endl;
		}
}
void Update()
{
	string rollno;
	cout<<"Enter roll no of student which you want to update .";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"Privious data of Student : "<<i+1<<endl;
			cout<<"Name : "<<arr1[i]<<endl;
			cout<<"Roll No : "<<arr2[i]<<endl;
			cout<<"Class : "<<arr3[i]<<endl;
			cout<<"Course : "<<arr4[i]<<endl;
			cout<<"Contact : "<<arr5[i]<<endl;
			cout<<endl<<endl;
			
			cout<<"\nEnter data of Student : "<<i+1<<endl;
			cout<<"Enter Name : ";
			cin>>arr1[i];
			cout<<"Enter Roll No. : ";
			cin>>arr2[i];
			cout<<"Enter Class : ";
			cin>>arr3[i];
			cout<<"Enter Course : ";
			cin>>arr4[i];
			cout<<"Enter Contact : ";
			cin>>arr5[i];
			cout<<endl<<endl;
		}
	}
}
void Delete()
{
	int a;
	cout<<"Press 1 to delete full record ."<<endl;
	cout<<"Press 2 to delete specific record ."<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"All record is deleted ."<<endl;
		cout<<endl;
	}
	else if(a==2)
	{
		string rollno;
		cout<<"Enter Roll No you want to delete record ,"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				total--;
				cout<<"your required record is deleted ."<<endl<<endl;
			}
		}
	}
}






int main()
{

	int value;
	while(true)
	{
		cout<<"Press 1 to enter new data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to update data"<<endl;
		cout<<"Press 4 to delete data"<<endl;
		cout<<"Press 5 to exit"<<endl;
		cout<<endl<<"Press any option .";
	
		cin>>value;
		switch(value)
		{
			case 1:
				Data();
				break;
			case 2:
				Show();
				break;
			case 3:
				Update();
				break;
			case 4:
				Delete();
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"Invalid Input"<<endl;
				exit(0);
			}
			
				
				
		}
		
	}
	
	
	
	
	
	 
	

