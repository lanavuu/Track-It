// ================================================================
// File: Medication Class Definition
// - Defines the medication class with member variables and functions.
// - Encapsulates an object representing medications.
// ================================================================
#pragma once
#include <iostream>
#include <vector>
//each meducation is an object, ask fr its name, doses, etc as methods.
// ========================
// Class: medication
// - Represents a medication through an object.
// - medication_name: name of the medication.
// - doses_taken: amount of doses User has taken
// - hours_between_doses: intervals between doses User wishes to take.
// =========================
class medication
{
    private:
    std::string medication_name{""};
    int doses_taken{};
    int hours_between_doses{};
    int required_amount_of_doses{};

    public:
    // ==================
    // Constructors:
    // - medication(): Initializes an empty object representing medication
    // - medication(string, int, int): Parameterized constructor to initialize
    //  medication name, doses taken, and hours between doses.
    // ===================
    medication();
    medication(std::string medication_name, int required_amount_of_doses, int hours_between_doses, int doses_taken);
    // ===================
    // Destructor:
    // - default destrutor
    // ===================
    ~medication() = default;
    // ===================
    // Mutator and Accessors:
    // - mutators modify the private member variables.
    // - accessors retrieve the values of the private member variables.
    // ===================
    void set_medication(const std::string& medication_name) { this->medication_name = medication_name; };
    void set_doses_taken(int doses_taken) {this->doses_taken = doses_taken; };
    void set_hours_between_doses(int hours_between_doses) { this->hours_between_doses = hours_between_doses; };
    void set_required_amount_of_doses(int required_amount_of_doses) { this->required_amount_of_doses = required_amount_of_doses; };

    const std::string& get_medication() { return medication_name; };
    int get_doses_taken()const { return doses_taken; };
    int get_hours_between_doses()const { return hours_between_doses; };
    int get_required_amount_of_doses() const { return required_amount_of_doses; };
    // ================
    // Function: calculate_schedule
    // - retrieves ``start_hour``, ``hours_between_doses``, and ``required_amount_of_doses`` to calculate a schedule
    //   for the intervals between doses
    // ================
    std::vector<int> calculate_schedule(int start_hour);




};