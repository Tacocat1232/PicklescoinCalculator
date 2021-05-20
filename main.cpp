//Online Picklescoin to USD 
#include <iostream>

int main()
{
    float number_of_pickles;
    float it_is_worth;
    float pickles_to_dollar;

std::cout << "How much Picklescoin do you have? \n";
std::cin >> number_of_pickles;

pickles_to_dollar = 2.40;

it_is_worth = number_of_pickles / pickles_to_dollar;

std::cout << "You have " << it_is_worth << " USD worth of Picklescoin\n \a ";

std::cout << "The current value of Picklescoin is " << pickles_to_dollar << "\n \a";
    return 0;
}
