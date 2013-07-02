SET (project_SRCS main.cpp )
SET (project_LIBS ${Boost_LIBRARIES} MyClass )
SET (project_BIN ${PROJECT_NAME})

ADD_EXECUTABLE(${project_BIN} ${project_SRCS})
TARGET_LINK_LIBRARIES(${project_BIN} ${project_LIBS})
SET_TARGET_PROPERTIES(${project_BIN} PROPERTIES VERSION "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}" OUTPUT_NAME ${project_BIN} CLEAN_DIRECT_OUTPUT 1)

INSTALL(TARGETS ${project_BIN} DESTINATION bin)

add_subdirectory(common/)

# Add a syntax checker.
FILE (GLOB_RECURSE all_SRCS *.cpp *.cxx *.cc *.C *.c *.h *.hpp)
ADD_CUSTOM_TARGET (syntax 
    ${MAINFOLDER}/tools/syntax/cpplint.py 
    --verbose=3
    --counting=detailed
    --filter=-legal/copyright,-readability/streams
    ${all_SRCS}
    SOURCES ${all_SRCS})
#ADD_CUSTOM_TARGET (syntax 
#    ${MAINFOLDER}/tools/syntax/cpplint.py 
#    --verbose=3
#    --counting=detailed
#    --filter=+readability/streams
#    --filter=-legal/copyright
#    ${all_SRCS}
#    SOURCES ${all_SRCS})
