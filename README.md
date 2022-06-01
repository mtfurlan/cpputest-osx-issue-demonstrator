# OSX c test issue demonstrator

Steps to replicate:
```sh
git clone https://github.com/mtfurlan/cpputest-osx-issue-demonstrator.git
cd cpputest-osx-issue-demonstrator
git submodule update --init
cd test
cd cpputest && ./autogen.sh && ./configure && make -j8 && cd ..
make
```

This works fine with clang and gcc, but not with apple clang.


Partial output on macos monterey:

```
g++ -g -fprofile-arcs -ftest-coverage -Wall -Wextra -Werror -Wshadow -Wswitch-default -Wswitch-enum -Wconversion -Wno-long-long -pedantic-errors -Woverloaded-virtual -Weverything -Wno-disabled-macro-expansion -Wno-padded -Wno-global-constructors -Wno-exit-time-destructors -Wno-weak-vtables -Wno-old-style-cast -Wno-c++11-long-long -Wno-c++98-compat-pedantic -Wno-reserved-id-macro -Wno-keyword-macro -Wno-reserved-id-macro -Wno-keyword-macro -Wno-poison-system-directories -include ./cpputest/include/CppUTest/MemoryLeakDetectorNewMacros.h  -Wall -Wextra -Werror -Wshadow -Wswitch-default -Wswitch-enum -Wconversion -Wno-long-long -pedantic-errors -include ./cpputest/include/CppUTest/MemoryLeakDetectorMallocMacros.h  -I./  -I../src  -I./cpputest/include
-c -MMD -MP -o .cpputestBuild/objs/./testrunner.o testrunner.cpp
In file included from testrunner.cpp:1:
In file included from ./cpputest/include/CppUTest/CommandLineTestRunner.h:31:
In file included from ././cpputest/include/CppUTest/TestHarness.h:39:
././cpputest/include/CppUTest/Utest.h:72:18: error: 'exitCurrentTest' overrides a member function but is not marked 'override' [-Werror,-Wsuggest-override]
    virtual void exitCurrentTest() const _override;                                                                                                                      ^
././cpputest/include/CppUTest/Utest.h:65:18: note: overridden virtual function is here
    virtual void exitCurrentTest() const=0;
                 ^
././cpputest/include/CppUTest/Utest.h:73:13: error: '~NormalTestTerminator' overrides a destructor but is not marked 'override' [-Werror,-Wsuggest-destructor-override]
    virtual ~NormalTestTerminator() _destructor_override;
            ^
././cpputest/include/CppUTest/Utest.h:66:13: note: overridden virtual function is here
    virtual ~TestTerminator();
            ^
```
