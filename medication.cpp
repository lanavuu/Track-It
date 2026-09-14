#include "medication.h"

    // medication();
    // medication(std::string medication_name = "", int count = 0, int intervals = 0);

    // ~medication();

    // void set_medication(std::string medication);
    // void set_count(int count);
    // void set_intervals(int intervals);
    // std::string get_medication(std::string medication)const;
    // int get_count(int count)const;
    // int get_intervals(int intervals)const;

medication::medication(std::string medication_name, int required_amount_of_doses, int hours_between_doses, int doses_taken)
{
    this->medication_name = medication_name;
    this->required_amount_of_doses = required_amount_of_doses;
    this->hours_between_doses = hours_between_doses;
    this->doses_taken = doses_taken;


}

std::vector<int> medication::calculate_schedule(int start_hour)
{
    std::vector<int> schedule{};
    if (hours_between_doses <= 0 || required_amount_of_doses <= 0)
    {
        return schedule;
    }

    schedule[0] = start_hour + hours_between_doses;

    for (int i = 1; i < required_amount_of_doses; i++)
    {
        schedule[i] = schedule[i-1] + hours_between_doses;
    }

    return schedule;
}
