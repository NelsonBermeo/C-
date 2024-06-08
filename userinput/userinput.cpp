#include <iostream>

int main(){

    //we would take in data with cin >> (extraction operater)

    std::string name;
    std::cout << "What is your name?: ";
    std::cin >> name;
    std::cout << "Hello " << name << '\n';

    //There is a problem when we type in something that has spaces
    // to get around this we can use:

    //Trying to do both of these inputs led to an error so I had to chat gpt this solution line just below 
    //This is because cin is before getline bc there is a ghost line 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
    //So you could do that or you could make your getline function like:
    //std::getline(std::cin >> std::ws, full_name);
    std::string full_name;
    std::cout << "What is your full name?:";
    std::getline(std::cin, full_name);
    std::cout << "Hello " << full_name;
    return 0;
}