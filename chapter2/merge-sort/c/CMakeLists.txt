CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(MERGE-SORT)
AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
SET(CMAKE_C_FLAGS "-std=c99 -O2")
ADD_EXECUTABLE(merge-sort ${SRC_LIST})

