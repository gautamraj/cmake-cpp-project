SET (my_SRCS ${CMAKE_CURRENT_LIST_DIR}/test-MyClass.cpp)

# Add to the list of things to compile
SET (test_SRCS ${test_SRCS} ${my_SRCS} PARENT_SCOPE)
SET (test_LIBS ${test_LIBS} MyClass PARENT_SCOPE)
