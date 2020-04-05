// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "cv/core.h"

TEST_CASE("format context", "[opencv]" ) {
    cv_version();
}