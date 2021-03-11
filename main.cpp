#include <iostream>


using namespace std;

#include <stdlib.h> /// system ("pause") ; is in this library

#include <fstream>

class Expensess
{
private:

    float budget = 0;

    float entertainment = 0;

    float college = 0;

    float food = 0;

    float network = 0;

    float phone = 0;

    float saving = 0;

    float rent = 0 ;

public:

    void askEntertainment()
    {
        cout << "For Entertainment : " ;

        cin >> entertainment;

        cout << endl;
    }

    void askcollege()
    {
        cout << "For College : " ;

        cin >> college;

        cout << endl;
    }

    void askfood()
    {
        cout << "For Food : " ;

        cin >> food;

        cout << endl;
    }

    void asknetwork()
    {
        cout << "For Network : " ;

        cin >> network;

        cout << endl;
    }

    void askphone()
    {
        cout << "For Phone : " ;

        cin >> phone;

        cout << endl;
    }

    void asksaving()
    {
        cout << "For Saving : " ;

        cin >> saving;

        cout << endl;
    }

    void askrent()
    {
        cout << "For Rent : " ;

        cin >> rent;

        cout << endl;
    }

    /// get info

    float getEntertainment()
    {
        return entertainment;
    }

    float getcollege()
    {
        return college;
    }

    float getfood()
    {
        return food;
    }

    float getnetwork()
    {
        return network;
    }

    float getphone()
    {
        return phone;
    }

    float getsaving()
    {
        return saving;
    }

    float getrent()
    {
        return rent;
    }

    /// Calculating


    /// Display

    void display()
    {
        cout << "The Input For Rent Is : " << getrent() << endl << endl;

        cout << "The Input For College IS : " << getcollege() << endl << endl;

        cout << "The Input For entertainment IS : " << getEntertainment() << endl << endl;

        cout << "The Input For food IS : " << getfood() << endl << endl;

        cout << "The Input For network IS : " << getnetwork() << endl << endl;

        cout << "The Input For phone IS : " << getphone() << endl << endl;

        cout << "The Input For rent IS : " << getrent() << endl << endl;
    }

};


struct expensess
{
    float entertainment = 0;

    float college = 0;

    float food = 0;

    float network = 0;

    float phone = 0;

    float saving = 0;

    float rent = 0 ;

};


void calculating_PayingRate(float elbudget, int days, float Workinghours)
{
    float weekly;

    float daily;

    float Paying_Rate;

    weekly = elbudget/4;

    daily = weekly/days;

    Paying_Rate = daily / Workinghours;

    cout << "Each week : " << weekly  <<" $" << endl << endl;

    cout << "Daily : " << daily <<" $" << endl << endl;

    cout << "Paying Rate : " << Paying_Rate <<" $" <<endl << endl;
}

void calculating_WorkingHours(float elbudget, int days, float payingRate)
{
    float workingHours;

    float weekly;

    float daily;

    weekly = elbudget/4;

    daily = weekly/days;

    workingHours = daily / payingRate;

    cout << "Each week : " << weekly  <<" $" << endl << endl;

    cout << "Daily : " << daily <<" $" << endl << endl;

    cout << "Working Hours : " << workingHours <<"." <<endl << endl;
}

float calculating_All (float rent, float entertainment, float college, float phone, float network, float food)
{
    float total = 0;

    return total = rent + entertainment + college + phone + network + food ;
}

float calculating_saving (float allcal, float budget)
{
    float saving = 0;

    return saving = budget - allcal;
}


int main()
{
    /// opening a file

    /// out file stream means in the write mode

    //ofstream file; /// file is an object

    //file.open("")



    int choice;

    float budget = 0;

    int WorkingDays = 0;

    float Workinghours = 0 ;

    float payingRate = 0;

    int option;

    repeat:

    cout << "I Need To Calculate My Expenses [1]" << endl << endl;

    cout << "I Need To Calculate My Monthly Budget [2]" << endl << endl;

    cout << "Enter Your Choice : ";

    cin >> choice;

        cout << endl;

        cout << endl;

        if (choice == 2)
        {
            cout << "Enter Monthly Budget Needed : ";

            cin  >> budget;

            cout << endl << endl;

            cout << "How Many Working Days Per A Week [1 to 7] ? ";

            cin  >> WorkingDays;

            cout << endl << endl;

            short int option;

            cout << "Do You Want Calculate Hours Per A Day [1] "<<endl <<"Do You Want Calculate Paying Rate [2] " << endl << endl;

            cout << "Enter your choice : " ;

            cin  >> option;

            cout << endl << endl;

                if (option == 1)
                {
                    cout << "How Much Is The Paying Rate : ";

                    cin  >> payingRate;

                    cout << endl << endl;

                    cout << endl << endl << "Calculating.........";

                    calculating_WorkingHours(budget,WorkingDays,payingRate);

                    cout << endl << endl;


                }

                else if (option == 2)
                {
                      cout << "How Many Hours Per A Day ?";

                      cin  >> Workinghours;

                      cout << endl << endl;

                      calculating_PayingRate(budget,WorkingDays,Workinghours);

                      cout << "Calculating........." << endl << endl;
                }

                else
                {
                        short int option;

                        cerr << "Make Sure You Entering The Right Value.";

                        cout << endl << endl;

                        cout << "TO Try Again [1] " << endl << " To Exit [2] : ";

                        cin  >> option;

                        if (option == 1)
                        {
                            goto repeat;
                        }

                        else
                        {
                            return 0;
                        }
                }

        }

        else if (choice == 1)
        {
            cout << "Enter Monthly Budget To Calculate Each Expenses: ";

            cin  >> budget;

            cout << endl << endl;

            Expensess ex1;

            ex1.askrent();

            ex1.askEntertainment();

            ex1.askfood();

            ex1.asknetwork();

            ex1.askphone();

            ex1.askcollege();

            float allCalculation = 0;

            allCalculation = calculating_All(ex1.getrent(),ex1.getEntertainment(),ex1.getcollege(),ex1.getphone(),ex1.getnetwork(),ex1.getfood());

                if ( budget < allCalculation )
                {
                    cout << "The Budget Is Not Enough." << endl << endl;

                    cout << "The Gap Is : " << allCalculation - budget << endl << endl;
                }

                cout << "The Total Is : " << allCalculation << endl << endl;

                cout << "The Saving Amount : " << calculating_saving(allCalculation,budget) << endl << endl;

                cout << "____________________________________________________________" << endl << endl;

                ex1.display();

                cout << endl;
        }

            cout << "Do You Want To End [1]" << endl << endl;

            cout << "Do You Want To Repeat [2]" << endl << endl;

            cin.clear();

            cout << "Enter Your Choice : ";

            cin >> option;

            if(option == 1)
            {
                return 0;
            }
            else if (option == 2)
            {
                goto repeat;
            }
            else
            {
                return 0;
            }

    /// instead of of return write system("pause")

    system("pause");
}

