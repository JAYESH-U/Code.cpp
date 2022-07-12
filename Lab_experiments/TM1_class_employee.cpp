#include <cstdlib>
#include <iostream>

using namespace std;
class employee
{
	int   emp_num;
	char  emp_name[20];
	float emp_basic;
	float sal;
	float emp_da;
	float emp_hra;
	float net_sal;
	float emp_it;

	public:

		void get_details();
		void find_net_sal();
		void show_emp_details();
};

void employee :: get_details()
{
	cout<<"\nEnter employee number:\n";
	cin>>emp_num;
	cout<<"\nEnter employee name:\n";
	cin>>emp_name;
	cout<<"\nEnter employee basic:\n";
	cin>>emp_basic;
}

void employee :: find_net_sal()
{
	emp_da=0.70*emp_basic;
	emp_it=0.30*(emp_basic+emp_da);
	emp_hra=0.20*emp_basic;
	net_sal=(emp_basic+emp_da+emp_hra)-emp_it;
}

void employee :: show_emp_details()
{
	cout<<"\n\n\nDetails of   :  "<<emp_name;
	cout<<"\n\nEmployee number:      "<<emp_num;
	cout<<"\nBasic salary     :  "<<emp_basic;
	cout<<"\nEmployee DA      :  "<<emp_da;
	cout<<"\nEmployee HRA     :   "<<emp_hra;
	cout<<"\nIncome Tax       :  "<<emp_it;
	cout<<"\nNet Salary       :  "<<net_sal<<endl;
}

int main(int argc, char *argv[])
{   employee emp1;
	int i,num;
	//clrscr();


		emp1.get_details();

	
		emp1.find_net_sal();


		emp1.show_emp_details();

    
    return EXIT_SUCCESS;
}

