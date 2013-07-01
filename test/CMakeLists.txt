SET (test_SRCS main.cpp test.h)
SET (test_LIBS ${Boost_LIBRARIES})
SET (test_BIN main-unittests)
SET (test_EXES ${test_BIN})

# Build the test.
ADD_EXECUTABLE(${test_BIN} ${test_SRCS})
TARGET_LINK_LIBRARIES(${test_BIN} ${test_LIBS})

# Add the test to the list.
ADD_TEST(${test_BIN} ${MAINFOLDER}/bin/${test_BIN})
ADD_SUBDIRECTORY(./common/MyClass/)
