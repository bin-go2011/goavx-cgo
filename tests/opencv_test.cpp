// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "cv/core.h"

TEST_CASE("basic test", "[opencv]" ) {
    std::cout << std::hex << _cv_version() << std::endl;
}