#include "medication.h"
#include <iomanip>

void enter_medication_info();
int main()
{
    //include while loop for program
    char new_medication_query{};
    std::vector<std::string> medication_list{};


    std::cout << "Enter new medication? [Y] or [N]: ";
    std::cin >> new_medication_query;
    
    // have not implemented N path yet

    //Inputting medication name, amount of doses, and interval between doses
    if (std::tolower(new_medication_query) == 'y')
    {
        enter_medication_info();
    }

    return 0;
}

void enter_medication_info()
{
    std::string medication_name{""};
    int doses_taken{};
    int hours_between_doses{};
    int required_amount_of_doses{};
    std::cout << "Enter medication: ";
    std::cin >> medication_name;

    std::cout << "\nEnter amount of doses needed per day: ";
    std::cin >> doses_taken;

    std::cout << "\nEnter intervals between medication: ";
    std::cin >> hours_between_doses;

    std::cout << "\nHow many doses have you taken today?: ";
    std::cin >> doses_taken;
    
    medication medication1(medication_name, required_amount_of_doses, hours_between_doses, doses_taken);
};

// lana@Mac Track-It % ./test
// Enter new medication? [Y] or [N]: y
// Enter medication: restasis

// Enter amount of doses needed per day: 4

// Enter intervals between medication: 4

// How many doses have you taken today?: 0
// lana@Mac Track-It % 

// next step: implement some print method to test if schedule works. **DOSES TAKEN IS NOT ACCOUNTED FOR YET**