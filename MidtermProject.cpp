#include <iostream>
#include "ArrayListClass.h"
#include "List.h"

int main()
{
    std::cout << " Name: Bryan Nelson - Date: 03/20/22 \n";

/*---------------------------*/
    //  INSTANTIATION

    ArrayListClass A1;

/*---------------------------*/
    //  FUNCTIONALITY CHECKS
    std::cout << "\n Search function test. \n";
    A1.search("Soto");
    
    std::cout << "\n Specific list print test. \n";
    A1.printLetter('C');
    
    std::cout << "\n Print all lists test. \n";
    A1.printAll();

    system("Pause");
    return 0;
}




