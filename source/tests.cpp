#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <catch.hpp>

int main(int argc, char *argv[])
{
    std::cout << "hello world";
  return Catch::Session().run(argc, argv);
}
