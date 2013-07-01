SET (test_SRCS test-MyClass.cpp ${MAINFOLDER}/include/test.h)
SET (test_LIBS ${Boost_LIBRARIES} MyClass)
SET (test_BIN MyClass-unittests)

ADD_EXECUTABLE(${test_BIN} ${test_SRCS})
TARGET_LINK_LIBRARIES(${test_BIN} ${test_LIBS})

# Add the test
ADD_TEST(${test_BIN} ${MAINFOLDER}/bin/${test_BIN})
