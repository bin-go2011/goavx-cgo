// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>

#include "cv/core.h"

TEST_CASE("basic test", "[opencv]" ) {
    std::cout << std::hex << _cv_version() << std::endl;
}

TEST_CASE("mat properties", "[opencv]") {
    MatPtr mat = _cv_new_mat();

    printf("rows offset: %d\n", (char*)(&mat->rows) - (char*)(mat));
}