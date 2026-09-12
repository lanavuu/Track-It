#include "medication.h"
#include <iomanip>

int main()
{
    //include while loop for program
    char new_medication_query{};
    std::vector<std::string> medication_list{};
    std::string medication_name{""};
    int count{};
    int intervals{};

    std::cout << "Enter new medication? [Y] or [N]: ";
    std::cin >> new_medication_query;
    
    // have not implemented N path yet

    //Inputting medication name, amount of doses, and interval between doses
    if (std::tolower(new_medication_query) == 'y')
    {
        std::cout << "Enter medication: ";
        std::cin >> medication_name;

        std::cout << "\nEnter amount of doses needed per day: ";
        std::cin >> count;

        std::cout << "\nEnter intervals between medication: ";
        std::cin >> intervals;
        
        medication medication1(medication_name, count, intervals);
    }



}