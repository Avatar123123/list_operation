#include <iostream>
#include <vector>
#include <algorithm>


//function to calculate total 
double sum(std::vector<double> data)
{
    double sum = 0;
    for(int i = 0; i < data.size(); i++)
    {
        sum += data[i];
    }
    return sum;
}

// function to calculate Average 
double mean(std::vector<double> data)
{
    return sum(data)/data.size();
}

std::vector<double> sorted(std::vector<double> data)
{
    std::sort(data.begin(), data.end());
    return data; // Return the sorted vector
}

//function to calculate product
double product(std::vector<double> data)
{
    double product = 1;
    for(int i = 0; i < data.size(); i++)
    {
        product *= data[i];
    }
    return product;
}


    

