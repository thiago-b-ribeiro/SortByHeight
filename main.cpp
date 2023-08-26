/**
 * PROBLEM: Some people are standing in a row in a park. There are trees between them which cannot be moved.
 * Your task is to rearrange the people by their heights in a non-descending order without moving the trees.
 * People can be very tall!
 * 
 * @copyright Todos os direitos reservados ao autor.
 * 
 * @author Thiago Barbosa Ribeiro 
*/

#include "include/cSortByHeight.h"
#include <iostream>

int main ()
    {
    cSortByHeight * oSortByHeight = new cSortByHeight();
    std::vector<int> oVector = {-1, 150, 190, 170, -1, -1, 160, 180};

    std::cout << "Vetor inicial:" << std::endl;
    for (std::vector<int>::iterator it = oVector.begin(); it != oVector.end(); ++it)
        {
        std::cout << *it << " ";
        }

    oSortByHeight->SortVector(oVector);

    std::cout << "Vetor ordenado:" << std::endl;
    for (std::vector<int>::iterator it = oVector.begin(); it != oVector.end(); ++it)
        {
        std::cout << *it << " ";
        }
    std::cout << std::endl;

    return (0);
    }