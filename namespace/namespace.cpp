#include <iostream>
//name space is when we can define a variable multiple times
//we would include these namespaces outside the main function
//and we would specify which instance of a variable we would 
//be using if we need it 
//Without defining an isntance we would use the local variable 
//inside main i believe 

//Name spaces provide a solution for preventing name conflicts
//in large projects. Each entitiy needs a unique name so a name-
//space allows for identically named entities as long as the name
//spaces are different 

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    //Something interesting is that we can skip using std::cout or 
    // std::string throughout our program by putting the following 
    // two lines at the start of our code:
    using std::cout;
    using std::string;
    
    //We could also just tell our main that we are going to use 
    //a certain instance 
    using namespace first;
    int x = 0;
    //This is how you define an instance, you could take out "second::"
    // to use the namespace that was defined just before 
    std::cout << second::x;
    return 0;
}