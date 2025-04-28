# Build, run tests and generate coverage reports

mkdir build 

cd build 

cmake -DCMAKE_BUILD_TYPE=Debug ..

make

./run_tests


# Capture coverage data 

lcov --directory . --capture --output-file coverage.info 

  

# Remove system and test files from the report (optional but recommended) 

lcov --remove coverage.info '/usr/*' '*/tests/*' --output-file coverage.info.cleaned 

  

# Generate HTML report 

genhtml coverage.info.cleaned --output-directory coverage-report