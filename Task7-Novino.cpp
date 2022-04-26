#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    //declare variables
    double hrs_worked = 0.0;
    double salary_rate = 0.0;

    //declare constant
    const int SENTINEL = -1;

    //ask user for input 
    cout << "Enter hours worked (-1 to end): ";
    cin >> hrs_worked ; //read hours worked in week

    cout << fixed << setprecision(2); //set format number

    while (hrs_worked != SENTINEL)
    {
        cout <<"Enter hourly rate of the employee (00.00): ";
        cin >> salary_rate; //read salary rate

        cout << "Salary is "
        << (hrs_worked <= 40 ? hrs_worked * salary_rate
                                : (40 * salary_rate) + 
                                (
                                    (hrs_worked - 40) * salary_rate * 1.5
                                )
            );
        cout << "\n \n";
        cout << "Enter hours worked (-1 to end): " ;
        cin >> hrs_worked; //read hours worked in week  
        
    }
    cout << "Thank you!";

    return 0;

}