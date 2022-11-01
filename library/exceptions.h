//
// Created by Michael on 2022-10-31.
//

#ifndef COMPLEXPASSWORDGENERATOR_EXCEPTIONS_H
#define COMPLEXPASSWORDGENERATOR_EXCEPTIONS_H

#include <exception>

class ZeroLengthPassword : std::exception {
};

class NoTypesError : std::exception {
};

#endif //COMPLEXPASSWORDGENERATOR_EXCEPTIONS_H
