//Clustered Index:
//Ankit Vadehra
//12BCE0282

/*The system uses normal linear-sort on location
sample input output:
ID   Name   Loation
1	 ABC	delhi
2	 DEF	bombay
3	 GHI 	delhi
4	 HFH 	bombay
5	 YTU	chennai

it will cluster on the basis of location.
also, since small dataset used linear sort.
if it increases we can g for more efficient 




*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{	

	string emp_attrib[3]={"Emp_ID","Name","Location"};
	string employee[5][3];
	for (int i=0;i<5;i++){
		int j=0;
		cout<<"Emp_ID\n";
		cin>>employee[i][j];
		j=j+1;
		cout<<"\nName:\n";
		cin>>employee[i][j];
		j=j+1;
		cout<<"\nlocation:\n";
		cin>>employee[i][j];
	}
cout<<"\nClustering is being done on the basis of locations so as to make\nthe retrieval easier:";

//creating a backup because no idea, what might happen ahead.
string employee2[5][3];
for (int i=0;i<5;i++){
	int j=0;
	employee2[i][j]=employee[i][j];
	employee2[i][j+1]=employee[i][j+1];
	employee2[i][j+2]=employee[i][j+2];
}

//SOrting here, to get values easier.
//Using normal linear search. it is inefficient, sure, but small table+string values works with
//linear search. it is observed.
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++)
	{
		if(employee2[i][2]>employee2[j][2]){
			string temp=employee2[i][0];
			employee2[i][0]=employee2[j][0];
			employee2[j][0]=temp;

			temp=employee2[i][1];
			employee2[i][1]=employee2[j][1];
			employee2[j][1]=temp;

			temp=employee2[i][2];
			employee2[i][2]=employee2[j][2];
			employee2[j][2]=temp;

		}

	}
}

cout<<"\n this is it, now the clustered on basis of location is:\n";

cout<<emp_attrib[0]<<"\t"<<emp_attrib[1]<<"\t"<<emp_attrib[2]<<"\n";
for(int i=0;i<5;i++)
{
	cout<<employee2[i][0]<<"\t"<<employee2[i][1]<<"\t"<<employee2[i][2]<<"\n";

}


return 0;
}