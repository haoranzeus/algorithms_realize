PROJECT(INSERTION-SORT)
SET(SRC_LIST test.c insertion-sort.c)
set(CMAKE_C_FLAGS "-std=c99 -O2")
ADD_EXECUTABLE(insertion-sort ${SRC_LIST})

