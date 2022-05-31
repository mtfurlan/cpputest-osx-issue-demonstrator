

CPPUTEST_HOME=./cpputest

.DEFAULT_GOAL := test

SRC_DIRS = ../src

TEST_SRC_DIRS = .

INCLUDE_DIRS =\
  ./ \
  ../src \
  $(CPPUTEST_HOME)/include \

CPPUTEST_OBJS_DIR=.cpputestBuild/objs
CPPUTEST_LIB_DIR=.cpputestBuild/libs

COMPONENT_NAME = example

CPPUTEST_EXE_FLAGS += -c

CPPUTEST_USE_MEM_LEAK_DETECTION = Y
CXXFLAGS += -include $(CPPUTEST_HOME)/include/CppUTest/MemoryLeakDetectorNewMacros.h
CFLAGS += -include $(CPPUTEST_HOME)/include/CppUTest/MemoryLeakDetectorMallocMacros.h


CPPUTEST_USE_GCOV=Y

# run MakefileWorker.mk with the variables defined here
include $(CPPUTEST_HOME)/build/MakefileWorker.mk
