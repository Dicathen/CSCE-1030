/*Algorithm

1. Get the radius from the user
2. Get the height from the user.
3. Multiply square of radius, height, and pi. Store the product in a value labeled volume
4. Return result to user.*/

#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <random>
#include <fstream>

#include <stdio.h>
using namespace std;


/*int main()
{
    float radius;
    float height;
    std::cout<<"Enter radius";
    std::cin >> radius;
    cout <<"Enter height";
    std::cin >> height;

    float volume = radius*radius*height*3.1416;

    std::cout << "Volume is "<< volume << std::endl;


    return 0;
}*/

/*int main()
{
    //variable declaration
    float my_flt; //data type: float. name: my_flt;
    int my_int;
    double my_double;
    char my_char;

    //assignment operations
    my_flt = 2.7441;
    my_double = 9.65874;
    my_int = 25;
    my_char = '*';

    cout<<"my_flt: "<<my_flt<<endl;
    cout<<"my_double: "<<my_double<<endl;
    cout<<"my_int: "<<my_int<<endl;
    cout<<"my_char: "<<my_char<<endl;

    //variable initialization.
    int my_int2=25;
    double my_dbl2= 3.689;

    cout<<"my_int2: "<<my_int2<<endl;

    my_int2 = 45; //updating the variable

    cout<<"my_int2: "<<my_int2<<endl;

    int my_int3;

    my_int3 = my_int2;
    cout<<"my_int3: "<<my_int3<<endl;

    my_int3 = my_int3+5;

    cout<<"my_int3: "<<my_int3<<endl;

    int my_int4 = 3*my_int + 4*my_int2 +50;

    cout<<"my_int4: "<<my_int4<<endl;

    my_int3 -= 2;
    cout<<"my_int3: "<<my_int3<<endl;

    return 0;
}
*/
/*
int main()
{
    //double my_dbl = 2.65; //fixed point notation
    //Alternatively

    double my_dbl = 265e-2; //scientific notation, 265 * 10 ^(-2);

    cout<<"my dbl: "<< my_dbl << endl;
    return 0;
}
 */

/*
int main()
{
    double radius= 3.5;
    const double pi = 3.1416;


    double area = 3.1416 *radius*radius;
    cout<< " The area of the circle: "<<area<<endl;
}
 */

/*
int main()
{
    double x = 2.0, y = 3.0;

    double result = x/y;

    cout<<"result = "<<result<<endl;

    cout.setf(ios::fixed);
    cout.setf((ios::showpoint));

    cout.precision(3);
    cout<<"result = "<<result<<endl;

    cout.precision(4);
    cout<<"result = "<<result<<endl;
    return 0;
}
 */

/*
int main()
{
    double number = 18.0;
    double result = sqrt(number);

    cout<<"Result = "<<result<<endl;
    cout<<"The square root of 26 is "<< sqrt(26)<<endl;

    result = pow(2.0,3.0);

    cout<<"Result = "<<result<<endl;
    cout<<"Another power: "<< pow(15,1.0/3.0)<<endl;

    int x = -9;
    cout<<"Absolute value= "<< abs(x)<<endl;

    return 0;
}
 */

/*int main()
{
    int x = 2, y = 3;
    double result = x/y;
    cout<< "Result = " << result << endl;

    x = 10;
    result = x/y;
    cout<< "Result = " << result << endl;

    x = 26, y = 10;
    int quotient = x/y;
    cout<< "Quotient = " << quotient << endl;
    int remainder = x%y; // %: Modular operator, remainder operator.
    cout << "Remiander = " <<remainder<<endl;

    x = 32, y = 6;
    quotient = x/y;
    cout<< "Quotient = " << quotient << endl;
    remainder = x%y; // %: Modular operator, remainder operator.
    cout << "Remiander = " <<remainder<<endl;
}
 */
/*
int main()
{
    //double and integer are type compatible.
    int my_int = 12;
    double my_double = my_int;
    cout<< "My Double = "<< my_double << endl;

    double my_dbl2 = 3.654;
    int my_int2;
    my_int2 = my_dbl2;
    cout<<" My Double2 = "<< my_dbl2 << endl;

    //int-char are type compatible

    char my_ch='+';
    int my_int3;
    my_int3 = my_ch;
    cout<< "My Int3 = "<< my_int3 << endl;

    int my_int4 = 660;
    char my_ch2 = my_int4;
    cout<<"My Ch2 = "<< my_ch2 << endl;

    //implicit conversion -- compiler converts type of data if they are type compatible.

    //Explicit conversion --
    int x = 2, y = 3;
    double result = (double)(x)/y;
    cout<< "Result = " << result << endl;


*/

/*
int main()
{

    string my_str; //string declaration
    my_str = "Hello friend"; //assignment
    cout<<"my_str: " <<my_str << endl;

    string my_str2 = "This is CSCE1030. Welcome to the class";
    cout<< "my_str2: " <<my_str2 << endl;

    my_str = "Hello again";
    cout<< "my_str: " << my_str << endl;

    string fname, lname;
    cout<< "Enter name" << endl;
    cin >> fname >> lname;
    cout << "Name is: " << fname << " " << lname;


    string name;
    cout << "Enter name" << endl;
    //cin >> name; //only reads a single word.
    getline(cin,name); //read more than one word (the entire line)
    cout << "Name is: " << name << endl;



    return 0;
}
*/

/*
int main()
{
    short int my_short;
    my_short = 55000; //integer overflow error;
    cout << "my_short: " << my_short << endl;

    unsigned short in = my_short= 55000;
    cout << "my_short: " <<my_short << endl;


}
 */

/*
int main()
{

    int random;
    srand(time(NULL));
    random = rand();
    cout << "Random: " << random << endl;

    int roll;
    roll = rand() % 7;
    cout <<"roll = " << roll << endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1,6);
    for (int i = 0; i < 10; ++i) {
        std::cout << distrib(gen) << ' '<<endl;

    }
    return  0;
}
 */


  

int main()
{
    #define MYCONST 20
    int a[] = {3,-5,7,12,9};
    int *ptr = a;
    *ptr = (*ptr +1);
    cout << *(a +2);
    return 0;
}