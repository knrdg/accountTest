include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicAccountTests
        account_test.cpp)

target_link_libraries(runBasicAccountTests gtest gtest_main)
