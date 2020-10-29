#include <iostream>

using namespace std;

int main()

{
    cout << "-------------------------------------------------------------";

    cout << "\n\t\t    Age Conversion"<< endl;

    cout << "-------------------------------------------------------------";

    cout << "\n\t         Select Yours Operation"<< endl;

    cout << "-------------------------------------------------------------";

    cout << "\n\t   Press & Enter (M) - AGE in Monthw" << endl;

    cout << "\n\t   Press & Enter (D) - AGE in Days" << endl;

    cout << "\n\t   Press & Enter (H) - AGE in Hours" << endl;

    cout << "\n\t   Press & Enter (I) - AGE in Mints" << endl;

    cout << "\n\t   Press & Enter (S) - AGE in Seconds" << endl;

    cout << "-------------------------------------------------------------";

        // Take input from the user

        char Conversion;

        cout << "\nFrom Above Statements - Provide a Number to Perform Operation "

                "\n-------------------------------------------------------------"

                "\n\n\tPress - ( M - D - H - I - S) :  ";

        cin >> Conversion;

        Conversion = toupper(Conversion);

        if (Conversion == 'M')

        {
            int ageInYears, ageInDays, ageInMonths;

            cout<<"\n\t\tProvide your age in years: ";
            cin>>ageInYears;

            ageInMonths = ageInYears*12;
            cout<<"\n\t\tYour age in months: "<<ageInMonths<<endl;


        }

        else if (Conversion == 'D')

        {
            int ageInYears, ageInDays;

            cout<<"\n\t\tProvide your age in years: ";
            cin>>ageInYears;

            ageInDays = ageInYears*365;
            cout<<"\n\t\tYour age in days :"<<ageInDays<<endl;
        }

        else if (Conversion == 'H')

        {
            int ageInYears, ageInHours;

            cout<<"\n\t\tProvide your age in years: ";
            cin>>ageInYears;

            ageInHours = ageInYears*365*24;
            cout<<"\n\t\tYour age in hours :"<<ageInHours<<endl;

        }

        else if (Conversion == 'I')

        {
            int ageInYears, ageInMints;

            cout<<"\n\t\tProvide your age in years: ";
            cin>>ageInYears;

            ageInMints = ageInYears*365*24*60;
            cout<<"\n\t\tYour age in Mints :"<<ageInMints<<endl;

        }

        else if (Conversion == 'S')


        {
            int ageInYears, ageInSec;

            cout<<"\n\t\tProvide your age in years: ";
            cin>>ageInYears;

            ageInSec = ageInYears*365*24*60*60;
            cout<<"\n\t\tYour age in Second :"<<ageInSec<<endl;

        }

        // ELSE Block - If enter unexpected Character

        else

            {
                // block of code if condition is false

                cout << "\n\t\t----------------------------" << endl;

                cout << "\t\t\tInvalid Input" << endl;

                cout << "\t\t----------------------------" << endl;

            }

        return 0;

        }

