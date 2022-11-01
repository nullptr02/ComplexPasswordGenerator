//
// Created by Michael on 2022-10-31.
//

#ifndef COMPLEXPASSWORDGENERATOR_RANDOM_H
#define COMPLEXPASSWORDGENERATOR_RANDOM_H

#include <cstdlib>
#include <array>
#include <vector>

template<class T, int n>
T randomChoice(std::array<T, n> choices) {
    return choices[std::rand() % sizeof(choices)];
}

int randomChoiceVectorInt(std::vector<int> choices);

#endif //COMPLEXPASSWORDGENERATOR_RANDOM_H
