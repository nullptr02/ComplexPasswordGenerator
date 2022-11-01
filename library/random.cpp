//
// Created by Michael on 2022-10-31.
//

#include <cstdlib>
#include <array>
#include <vector>

#include "random.h"

int randomChoiceVectorInt(std::vector<int> choices) {
    return choices[std::rand() % choices.size()];
}
