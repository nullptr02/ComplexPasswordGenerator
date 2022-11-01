//
// Created by Michael on 2022-10-31.
//

#ifndef COMPLEXPASSWORDGENERATOR_PASSWORD_H
#define COMPLEXPASSWORDGENERATOR_PASSWORD_H

#include <array>
#include <string>

template<class T, int n>
char randomChoice(std::array<T, n> choices);

std::string generatePassword(int length, bool lowerLettersEnabled, bool upperLettersEnabled, bool numbersEnabled,
                             bool specialsEnabled);

#endif //COMPLEXPASSWORDGENERATOR_PASSWORD_H
