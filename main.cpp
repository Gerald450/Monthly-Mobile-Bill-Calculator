#include <iostream>

#include <string>

#include <iomanip>

using namespace std;


int main()

{
   //simon
   
   //Declare Variables

   float bill = 0, billA, billB, billC = 69.99, minutes, extra, add_cst, diff, month_minutes;

   char choice, quit;

   string month;



   do { //Exit loop



       //Get choice

       cout << "Which package are you using?: ";

       cout << "A, B or C ?" << endl;

       cin >> choice;



       //Validation Loop

       while (choice != 'A' && choice != 'B' && choice != 'C')

       {

           cout << "ERROR: Enter a valid option: ";

           cin >> choice;

       }



       //Get Minutes

       cout << "How many minutes did you use? : ";

       cin >> minutes;



       //Validate minutes

       cout << "which month is the package for? : ";

       cin >> month;



       if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December")

       {

           month_minutes = 744 * 60;

           //Validation loop

           while (minutes > month_minutes)

           {

               cout << "ERROR: Please enter valid number of minutes for the specified month: ";

               cin >> minutes;

           }

       }

       else if (month == "April" || month == "June" || month == "September" || month == "November")

       {

           month_minutes = 720 * 60;

           //Validation loop

           while (minutes > month_minutes)

           {

               cout << "ERROR: Please enter valid number of minutes for the specified month: ";

               cin >> minutes;

           }

       }

       else
           //ABEL

           month_minutes = 672 * 60;

       //Validation loop

       while (minutes > month_minutes)

       {

           cout << "ERROR: Please enter valid number of minutes for the specified month: ";

           cin >> minutes;

       }



       // Calculate Bill A

       if (minutes > 450)

       {

           extra = minutes - 450;

           add_cst = extra * 0.45;

           bill = 39.99 + add_cst;

           billA = bill;

       }

       else

           bill = 39.99;

       billA = bill;

       //Calculate Bill B

       if (minutes > 900)

       {

           extra = minutes - 900;

           add_cst = extra * 0.40;

           billB = 59.99 + add_cst;

       }

       else

           billB = 59.99;





       switch (choice)

       {

       case 'A':



           //Display Bill

           cout << fixed << setprecision(2);

           cout << "Your monthly bill is: $" << billA << endl;


           //GERALD
           //Compare bills and display savings

           if (billA > billB)

           {

               diff = billA - billB;

               cout << "If you chose package B, you could have saved $" << diff << endl;

           }



           if (billA > billC)

           {

               diff = billA - billC;

               cout << "If you chose package C, you could have saved $" << diff << endl;

           }

           break;

       case 'B':

           //Display Bill

           cout << fixed << setprecision(2);

           cout << "Your monthly bill is: $" << billB << endl;



           //Compare bills and display savings

           if (billB > billA)

           {

               diff = billB - billA;

               cout << "If you chose package A, you could have saved $" << diff << endl;

           }



           if (billB > billC)

           {

               diff = billB - billC;

               cout << "If you chose package C, you could have saved $" << diff << endl;

           }

           break;

       case 'C':



           //Display Bill

           cout << fixed << setprecision(2);

           cout << "Your monthly bill is: $" << billC << endl;



           //Compare bills and display savings

           if (billC > billB)

           {

               diff = billC - billB;

               cout << "If you chose package B, you could have saved $" << diff << endl;

           }

           break;

       default: cout << "You did not enter A, B or C!\n";

       }

       cout << "Do you wish to exit: Y/N?" << endl; //to exit program

       cin >> quit;

   } while (quit != 'Y');

   return 0;

}

