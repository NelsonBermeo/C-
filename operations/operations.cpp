#include <iostream>
#include <cmath>

int main(){
    int students = 20;
    students = students + 1;
    //or we could do students+=1;
    //or we could do students++; 

    //We've got all of the normal operations you would expect 
    // and their format is normal

    // Type Conversions 

    //before the number we can put the data type we want that 
    // will be stored as whatever is defined to the left  
    int x  = (double) 3.14;
    std::cout << x;

    //another example (ASCII Stuff):
    std::cout<<(char)100;

    //We could want to divide ints, so as to get a decimal:
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score;

    // ---------------Math Related Functions----------------

    double a = 3;
    double b = 4;
    double c;

    //max function c = std::max(a,b);

    //max function c = std::min(a,b):

    //power c = pow(2,3); this is 2^3

    //square c = sqrt(9); 

    //abs value c = abs(-3);

    //round c = round(3.21);

    //ceiling c = ceil(3.21);

    //floor c = floor(3.21);

    //And there are a ton more 

    return 0;
}