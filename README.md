# Brief Guide

First, clone [Google Test](https://github.com/google/googletest)

Then, compile `Google Test` by running following commands in the target project directory:

g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc

and 

ar -rv libgtest.a gtest-all.o

Note that ${GTEST_DIR} is the directory of `Google Test`. Set it by typing the following command:

export GTEST_DIR=path/to/google/test

Lastly, compile the test source file with `${GTEST_DIR}/include`:

g++ -isystem ${GTEST_DIR}/include -pthread path/to/your_test.cpp libgtest.a
-o your_test.out

# Test

Modified and run `test.sh`. The output would look like this:

    [==========] Running 1 test from 1 test case.
    [----------] Global test environment set-up.
    [----------] 1 test from SolutionTest
    [ RUN      ] SolutionTest.Add
    [       OK ] SolutionTest.Add (0 ms)
    [----------] 1 test from SolutionTest (0 ms total)

    [----------] Global test environment tear-down
    [==========] 1 test from 1 test case ran. (0 ms total)
    [  PASSED   ] 1 test.
