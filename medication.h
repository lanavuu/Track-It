#pragma once
#include <iostream>
#include <vector>

class medication
{
    private:
    std::string medication_name{""};
    int count{};
    int intervals{};

    public:
    medication();
    medication(std::string medication_name = "", int count = 0, int intervals = 0);

    ~medication();

    void set_medication(std::string medication);
    void set_count(int count);
    void set_intervals(int intervals);
    std::string get_medication(std::string medication)const;
    int get_count(int count)const;
    int get_intervals(int intervals)const;



};