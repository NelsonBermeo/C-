#include <iostream>
//This is just for that long variable we use deftype ex for 
#include <vector>
//I guess c++ files have to have their own folder?
//We will need to declare and assign
//A type def is a reserved keyword used to create an additional name 
//  (alias) for another data type. New identifier for an existing
//  type. This helps with readability and reduces typos. 

//  Yeah so we just rename shit 
typedef std::vector<std::pair<std::string, int>> pairls_t;

//A more applicable case could be for strings 

typedef std::string str_t;

//So apparently we would do typedef with a different function call
//  idk why: 

using number_t = int;

int main(){
    //Now we can use 
    pairls_t pairlist;
    int x;
    x = 5;
    int y;
    y = 6;


    //Storing a string is a bit different
    std::string name = "Nelson";

    std::cout << x << "\n";
    std::cout << y << "\n";

//There are similar variable types like in java 
//  such as char, int, double and more 
//You use single quotes for a char 

    //Watch me print out a text and some variable
    std::cout << "Hello " << name<<"\n";

    //We can also create constants that prevent
    //The variable from being changed 

    const double PI = 3.14;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout<<circumference<<"cm"<<"\n";


    return 0;
}