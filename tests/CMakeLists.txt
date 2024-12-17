# Add Testfiles
add_executable(test_math test_math.cpp)

# Link test-executable with Library
target_link_libraries(test_math MathFunctions)

# register test
add_test(NAME MathTests COMMAND test_math)
