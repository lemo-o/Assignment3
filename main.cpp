#include <iostream>
#include <math.h> //I'm gonna use trunc
using namespace std;

//pecans are the snack of choice tonight
double pecan;
//define an int for intchecking and evenchecking
int two = 2;
//although if it's a decimal, then it's odd
//Wonder if I can do this as a void statement?
//void(/*int or decimal, even or odd, positive or negative, */)
/*{
    //cout >> //string int or decimal, string even or odd, string positive or negative 
}
*/
//Okay, better idea, testing for int/decimal, even/odd, positive/negative seperately rather than having stacked if statements
//Then using another variable to keep track
//I don't know how to use lists, so I'll use 3 variables
string a;
string b;
string c;
bool temp;
int main()
{

    /*I was going to use this, but I learned how it really worked and that it wouldn't work for this application
    if((cin >> pecan))
    {  
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    */
   cout << "Enter any value: \n";
   cin >> pecan;
   if(trunc(pecan)==pecan)
   {
       a = "It's an integer! ";
   }
   else
   {
       a  = "It's a float! ";
       temp = 1;
       //There is a cleverer way to handle temp and the fact that floats are odd, however, I don't wanna deal with it
   }
   //instead of importing math, just doing the operation myself
   int pistachios = trunc(pecan + .5);
   if(temp == 1 || (pistachios % 2 == 1))
   {
       b = "It's odd! ";
   }
   else
   {
       b = "It's even! ";
   }
   if(pecan >= 0)
   {
       c = "It's positive! ";
   }
   else
   {
       c = "It's negative! ";
   }
   cout << a << b << c << endl;
   return 0;
}
//I'm throwing all my trial an error here :)
//I don't want the variables to be different
//This is where I got stuck :/
/*int seedvar()  
{
    object a;
    //making seedvar a global variable so that I can plug it into uint_dist100
    return a.next();
}
*/
/*void* seedvar(){
    object a;
    return a.next();
} 
*/
/*void seedvar()
{
    object a;
    return a.next();
} */
/*void initialize()
{
    object a;
    a.distribution();
} */
    //really = uint_dist100(holder);
    //cout << really <<endl;

    
    //pointer* holder = seedvar;