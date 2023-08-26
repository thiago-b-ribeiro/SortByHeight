/**
 * PROBLEM: Some people are standing in a row in a park. There are trees between them which cannot be moved.
 * Your task is to rearrange the people by their heights in a non-descending order without moving the trees.
 * People can be very tall!
 * 
 * @copyright Todos os direitos reservados ao autor.
 * 
 * @author Thiago Barbosa Ribeiro 
*/

#include "../include/cSortByHeight.h"
#include <iostream>

/**
 * @brief Construtor da classe.
*/
cSortByHeight::cSortByHeight(){};

/**
 * @brief Destrutor da classe.
*/
cSortByHeight::~cSortByHeight(){};

/**
 * @brief Método que recebe um vetor numérico e ordena de forma crescente os valores.
 * @param oVetor Referência de um vetor numérico.
 * @return Vetor ordenado de forma crescente, mantendo as posições de valores -1.
*/
void cSortByHeight::SortVector(std::vector<int> & oVector)
    {
    int iTemp;

    for (std::vector<int>::iterator it = oVector.begin(); it != oVector.end(); ++it)
        {
        if (*it != -1)
            {

            int i = 1;
            while (*(std::next(it, i)) == -1)
                {
                ++i;
                }

            if (*it > *(std::next(it, i)))
                {
                iTemp = *it;
                *it = *(std::next(it, i));
                *(std::next(it, 1)) = iTemp;
                }
            }
        }
    
    std::cout << "Vetor m_oVector ordenado: ";
    for (std::vector<int>::iterator it = oVector.begin(); it != oVector.end(); ++it)
        {
        std::cout << *it << " ";
        }
    std::cout << std::endl;
    
    };