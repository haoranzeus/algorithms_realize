CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(INSERTION-SORT)
AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
#SET(SRC_LIST test.c insertion-sort.c)
SET(CMAKE_C_FLAGS "-std=c99 -O2")
ADD_EXECUTABLE(insertion-sort ${SRC_LIST})

