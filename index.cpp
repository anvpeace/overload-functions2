#include <iostream>

using namespace std;

void addition(double, double);
void addition(double, double, double);
void addition(double, double, double, double);
void addition(double, double, double, double, double);




int main (){

    double number1;
    double number2[5];
    double var1;
    double var2;
    double var3;
    double var4;
    double var5;

    // Write a program that asks the user how many values should get added together (from 2 to 5).
        cout << "How many values do you want added?" << endl;
    // Then the user should input those numbers.
        cin >> number1;
        // cin >> number2;


    if((number1 < 2) && (number1 > 5)){
        cout << "How many values do you want added?" << endl;
    }


        for(int i = 1; i <= number1; i++){
            cout << "Input number " << i << endl;
            cin >> number2[i];
        }

    //  Write a function "addition" that takes two double
    // parameters and adds them together, printing out in the console the calculation.
        // addition(number1, number2);



    //  Furthermore
// overload the "addition" function 3 times so it takes three parameters, four parameters and
// five parameters adding those parameters in each case.


    //  addition(var1, var2, var3);



    



    // Prepare a switch that uses the version
    // of addition function with as many parameters as the user inputted at the beginning.
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }




    return 0;
}

//  Write a function "addition" that takes two double
// parameters and adds them together, printing out in the console the calculation.
// void addition(double number1, double number2){
//     cin >> number2;
//     cout << number1 + number2 << endl;
// }

// void addition(double var1, double var2, double var3){

//     cin >> var1;
//     cin >> var2;
//     cin >> var3;

//     cout << var1 + var2 + var3 << endl;


// }


//  Prepare a switch that uses the version
// of addition function with as many parameters as the user inputted at the beginning.

// eg.

// User inputted:
// 3

// Output:
// Input 1 Number.
// Input 2 Number.
// Input 3 Number.

// User inputted:
// 2
// 3
// 4

// Output:
// 2 + 3 + 4 = 9

// PS Keep in mind that this exercise can be solved better than the given solution when you have more knowledge of C++. Better solution will be shown in future lessons.