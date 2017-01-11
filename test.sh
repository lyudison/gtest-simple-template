export GTEST_DIR=../googletest/googletest/

g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc

g++ -isystem ${GTEST_DIR}/include -pthread Solution.cpp test.cpp libgtest.a -o test.out

./test.out
