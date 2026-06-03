/*
Assignment - 1 : Employee details
*/

#include<iostream>
using namespace std;

class employee
{
	int empno;
	char name[20];
	float sal;
	
	public:
		int bonus;
		void set_details(int e,char n[20],float s)
		{
			empno = e;
			name[20] = n[20];
			sal = s;
			
			
		}
		void display();
		void total_sal();
};

void employee::display()
{
	cout<<"empno ="<<empno<<endl;
	cout<<"name is "<<name<<endl;
	cout<<"sal ="<<sal<<endl;
	cout<<"bonus ="<<bonus<<endl;
	
}

void employee::total_sal()
{
	cout<<"total salary ="<<sal+bonus<<endl;
	
}

int main()
{
	employee emp1;
	cout<<"size of emp1 ="<<sizeof(emp1)<<endl;
	
	emp1.set_details(101,"somesh",16919.1);
	emp1.bonus = 200;
	emp1.display();
	emp1.total_sal();
	
	return 0;
}











