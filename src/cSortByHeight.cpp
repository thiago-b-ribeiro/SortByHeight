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
            m_oVectorTemp.push_back(*it);
            }
        }

    for (int i = 0; i < m_oVectorTemp.size(); ++i)
        {
        int j = i + 1;
        for (; j < m_oVectorTemp.size(); ++j)
            {
            if (m_oVectorTemp[i] > m_oVectorTemp[j])
                {
                iTemp = m_oVectorTemp[i];
                m_oVectorTemp[i] = m_oVectorTemp[j];
                m_oVectorTemp[j] = iTemp;
                }
            }
        }

    std::vector<int>::iterator itVectorTemp = m_oVectorTemp.begin();
    for (std::vector<int>::iterator itVector = oVector.begin(); itVector != oVector.end(); ++itVector)
        {
        if (*itVector != -1)
            {
            *itVector = *itVectorTemp;
            ++itVectorTemp;
            }
        }
    std::cout << std::endl;
    
    };