#include <iostream>
#include <string>
#include <cmath>

std::pair<double, int> atoi(std::string str, int i)
{
    double result = 0;
    double dec = 0.1;
    bool virgule = 0;

    while (str[i] >= '0' && str[i] <= '9' || str[i] == '.')
    {
        if (str[i] == '.')
        {
            virgule = 1;
            i++;
        }
        if (virgule)
        {
            result += (str[i] - '0') * dec;
            dec *= 0.1;
        }
        else
            result = result * 10 + (str[i] - '0');
        i++;
    }
    return std::pair<double, int>(result, i);
}

/* Calculate a result of an operation */
double calculate(std::string operation)
{
    double result = 0;
    double temp = 0;
    bool sign = 1;
    std::pair<double, int> number;
    
    for (int i = 0; i < operation.length(); i++)
    {
        if (operation[i] == '-')
            sign = 0;
        else if (operation[i] == '+')
            sign = 1;
        else if (operation[i] >= '0' && operation[i] <= '9')
        {
            number = atoi(operation, i);
            i = number.second;
            if (i == '+' )

    }



}




int main(int argc, char **argv)
{

    std::string equation = argv[1];
    std::cout << "Equation: " << equation << std::endl;
    return 0; 
}