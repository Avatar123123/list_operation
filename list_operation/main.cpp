#include <iostream>
#include <vector>
#include <algorithm>
#include "operation.hpp"

int main()
{
    std::vector<double> test_score;
    int number;

    std::cout << "****** This Program will conduct basic mathematical operations on a list of numbers that are entered. Please enter any non-integer value once you have finished entering the data. ******\n\n";
    std::cout << "Enter the number below:\n\n";

    while(std::cin >> number)
    {
        test_score.push_back(number);
    }


    std::cout << "Numbers that you entered:\n\n";

    for(int i = 0; i < test_score.size(); i++)
    {
        std::cout << test_score[i] << " " << "\n";
    }

    std::cout<< "Total: " << sum(test_score) << "\n"; 
    std::cout << "Average: " << mean(test_score) << "\n";
    std::cout << "Sorted: ";
    std::vector<double> sorted_scores = sorted(test_score);
        for(double individual_data: sorted_scores)
        {
        std::cout << individual_data << " ";
        }
    std::cout << "\nProduct: " << product(test_score) << "\n";

}
