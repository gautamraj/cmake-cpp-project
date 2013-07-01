# Just blindly compile everything we find. Note that you need to manually
# re-run cmake if you add files.
#LIST (APPEND test_SRCS test.h)
#LIST (APPEND test_LIBS ${Boost_LIBRARIES})
SET (test_SRCS main.cpp test.h)
SET (test_LIBS ${Boost_LIBRARIES})
SET (test_BIN ${PROJECT_NAME}-unittests)

message(STATUS ${test_SRCS})
message(STATUS ${test_LIBS})
#include(./common/MyClass/CMakeLists.txt)
add_subdirectory(./common/MyClass/)
message(STATUS ${test_SRCS})
message(STATUS ${test_LIBS})

ADD_EXECUTABLE(${test_BIN} ${test_SRCS})
TARGET_LINK_LIBRARIES(${test_BIN} ${test_LIBS})

# Create a test target to run the tests.
ADD_CUSTOM_TARGET(test "${MAINFOLDER}/bin/${test_BIN}" 
                  DEPENDS ${test_BIN} 
                  COMMENT "Executing ${test_BIN} unit tests..." 
                  VERBATIM SOURCES ${test_SRCS})
