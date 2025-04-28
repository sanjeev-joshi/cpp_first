# Build, tests and generate coverage reports from vscode

On workspace give <"ctrl+shift+b">
After the succesful execution, you will see build folder structure tree view like below
.
├── app
│   └── app
└── test
    ├── coverage_html
    │   ├── coverage
    │   │   └── <workspace>
    │   │           └── cpp_first
    │   │               ├── src
    │   │               │   └── logger
    │   │               │       ├── logger.cpp.html
    │   │               │       └── logger_test.cpp.html
    │   │               └── test
    │   │                   └── test.cpp.html
    │   ├── index.html
    │   └── style.css
    ├── log.txt
    ├── utest
    ├── utest.profdata
    └── utest.profraw


# Build, tests and generate coverage reports from CMakeList
Execute below commands from workspace
-> cd build
-> cmake ..
-> make build_app
-> make run_and_coverage
After the above commands, you will see the build folder structure tree view like below
.
├── app
│   └── app
├── CMakeCache.txt
├── CMakeFiles
│   ├── 3.16.3
│   │   ├── CMakeCCompiler.cmake
│   │   ├── CMakeCXXCompiler.cmake
│   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   ├── CMakeSystem.cmake
│   │   ├── CompilerIdC
│   │   │   ├── a.out
│   │   │   ├── CMakeCCompilerId.c
│   │   │   └── tmp
│   │   └── CompilerIdCXX
│   │       ├── a.out
│   │       ├── CMakeCXXCompilerId.cpp
│   │       └── tmp
│   ├── app.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   ├── depend.make
│   │   ├── flags.make
│   │   ├── link.txt
│   │   ├── progress.make
│   │   └── src
│   │       └── logger
│   ├── build_app.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   ├── depend.internal
│   │   ├── depend.make
│   │   └── progress.make
│   ├── build_test.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   ├── depend.internal
│   │   ├── depend.make
│   │   └── progress.make
│   ├── clean_all.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   └── progress.make
│   ├── cmake.check_cache
│   ├── CMakeDirectoryInformation.cmake
│   ├── CMakeOutput.log
│   ├── CMakeRuleHashes.txt
│   ├── CMakeTmp
│   ├── Makefile2
│   ├── Makefile.cmake
│   ├── progress.marks
│   ├── run_and_coverage.dir
│   │   ├── build.make
│   │   ├── cmake_clean.cmake
│   │   ├── DependInfo.cmake
│   │   ├── depend.internal
│   │   ├── depend.make
│   │   └── progress.make
│   ├── TargetDirectories.txt
│   └── utest.dir
│       ├── build.make
│       ├── cmake_clean.cmake
│       ├── DependInfo.cmake
│       ├── depend.make
│       ├── flags.make
│       ├── link.txt
│       ├── progress.make
│       ├── src
│       │   └── logger
│       └── test
├── cmake_install.cmake
├── log.txt
├── Makefile
└── test
    ├── coverage_html
    │   ├── coverage
    │   │   └── <workspace>
    │   │           └── cpp_first
    │   │               ├── src
    │   │               │   └── logger
    │   │               │       ├── logger.cpp.html
    │   │               │       └── logger_test.cpp.html
    │   │               └── test
    │   │                   └── test.cpp.html
    │   ├── index.html
    │   └── style.css
    ├── utest
    ├── utest.profdata
    └── utest.profraw
