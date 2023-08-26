/**
 * PROBLEM: Some people are standing in a row in a park. There are trees between them which cannot be moved.
 * Your task is to rearrange the people by their heights in a non-descending order without moving the trees.
 * People can be very tall!
 * 
 * @copyright Todos os direitos reservados ao autor.
 * 
 * @author Thiago Barbosa Ribeiro 
*/

#ifndef CSORTBYHEIGHT_H
#define CSORTBYHEIGHT_H

#include <vector>

/** 
 * @class cSortByHeight
 * Classe que ordena um vetor numérico preservando valores -1 em suas posições de origem.
*/

class cSortByHeight
    {
    public:
        cSortByHeight();
        ~cSortByHeight();
        void SortVector(std::vector<int> & oVector);

    private:
        std::vector<int> m_oVectorTemp;
    };

#endif