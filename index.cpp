#include <iostream>

using namespace std;

void addition(double[2], double[5]);
void addition(double(var[5]), double(var2[5]), double(var3[5]));
void addition(double(var[5]), double(var2[5]), double(var3[5]), double(var4[5]));
void addition(double(var[5]), double(var2[5]), double(var3[5]), double(var4[5]), double(var5[5]));




int main (){

    double input;
    double number1[2];
    double number2[5];
    int switchNum;
    double var[5];
    double var2[5];
    double var3[5];
    double var4[5];
    double var5[5];

    // Write a program that asks the user how many values should get added together (from 2 to 5).
        cout << "How many values do you want added?" << endl;
    // Then the user should input those numbers.
        cin >> input;



        switchNum = input;
        // cin >> number2;


    if((input < 2) && (input > 5)){
        cout << "How many values do you want added?" << endl;
    }


        for(int i = 1; i <= input; i++){
            cout << "Input number " << i << endl;
            cin >> number2[i];


            for(int j = 0;  j < number2[i]; ++j){
                
                var[0]  = number2[1]; 
                var2[0] = number2[2];
                var3[0] = number2[3];
                var4[0] = number2[4];
                var5[0] = number2[5];

                  for(int k = 0; k < number2[j]; k++){
                    number1[1]= number2[1]; 

                }

            }

          


        }

        
        cout << endl;

    //  Write a function "addition" that takes two double
    // parameters and adds them together, printing out in the console the calculation.
    //   addition(number1, number2);


    //  Furthermore
    // overload the "addition" function 3 times so it takes three parameters, four parameters and
    // five parameters adding those parameters in each case.
        // addition(var, var2, var3);
        // addition(var, var2, var3, var4);
        // addition(var, var2, var3, var4, var5);

    // Prepare a switch that uses the version
    // of addition function with as many parameters as the user inputted at the beginning.

     switch (switchNum){
    case 2:
              addition(number1, number2);
        break;

    case 3:
            addition(var, var2, var3);
        break;

    case 4:
            addition(var, var2, var3, var4);
        break;

    case 5:
            addition(var, var2, var3, var4, var5);
        break;

    default:
        break;
    }


    return 0;
}

//  Write a function "addition" that takes two double
// parameters and adds them together, printing out in the console the calculation.
void addition(double number1[2], double var2[5]){

   cout << endl;
    
    cout << number1[1] << " + " << var2[2] << " = " << (number1[1] + var2[2]) << endl;
}

void addition(double var[1], double var2[1], double var3[1]){

   cout << endl;

   cout << var[0] << " + " << var2[0] << " + " << var3[0] << " = " << (var[0] + var2[0] + var3[0]) << endl;
 
}

void addition(double(var[1]), double(var2[1]), double(var3[1]), double(var4[1])){

   cout << endl;

   cout << var[0]<< " + " << var2[0] << " + " << var3[0]<< " + " << var4[0]<< " = " << (var[0] + var2[0] + var3[0] + var4[0]) << endl;
 
}

void addition(double(var[5]), double(var2[5]), double(var3[5]), double(var4[5]), double(var5[5])){

   cout << endl;

   cout << var[0]<< " + " << var2[0] << " + " << var3[0]<< " + " << var4[0]<< " + "<< var5[0] <<" = " << (var[0] + var2[0] + var3[0] + var4[0] + var5[0]) << endl;
 
}

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