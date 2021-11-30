#include <vector>                                                               
#include <iostream>                                                                                                                          
#include <cmath>                                   
#include <numeric>
int main()                                                                      
{                                                                               
    std::vector<double> v;                                                            
    double input;                                                                
    std::cout << "Please enter numbers you want to find the mean of:" <<std::endl;
    std::cout << "Press a letter to calculate the mean and the standard deviation."<<std::endl;      
    while (std::cin >> input)                                      
        v.push_back(input);                                                     
    double average = std::accumulate( v.begin(), v.end(), 0.0)/v.size();              
    std::cout << "The mean is " << average << std::endl;
    double length = v.size();
    double E = 0;
    for (int i=0; i<length; i++)
        E+=(v[i]-average)*(v[i]-average);
    std::cout << "The standard deviatiton is: " << sqrt(E/length);
    return 0;                                                                   
}    
