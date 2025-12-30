#include "Array.hpp"

void test_for_built_in_types(void); 
void test_for_user_defined_type(void);

int main(void)
{
    test_for_built_in_types(); 
    test_for_user_defined_type(); 
    return (0); 
}

void test_for_built_in_types(void)
{
    //  Array of intgers 
    Array<int, 5> A_int; 
    A_int[0] = 30; 
    A_int[1] = 20; 
    A_int[2] = 15; 
    A_int[3] = 50; 
    A_int[4] = 5; 

    std::cout << "Before sort:" << std::endl; 
    for(std::size_t i = 0; i < A_int.size(); ++i)
        std::cout << "A_int[" << i << "]:" << A_int[i] << std::endl; 
        
    if(A_int.find(20) == true)
        std::cout << "20 is a part of array" << std::endl; 

    if(A_int.find(-30) == false) 
        std::cout << "-30 is not a part of array" << std::endl; 
        
    A_int.sort(); 

    std::cout << "After sort:" << std::endl; 
    for(std::size_t i = 0; i < A_int.size(); ++i)
        std::cout << "A_int[" << i << "]:" << A_int[i] << std::endl; 
}

void test_for_user_defined_type(void)
{

}