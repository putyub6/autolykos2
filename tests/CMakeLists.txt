add_executable(autolykos2_tests test_core.cpp)
target_link_libraries(autolykos2_tests PRIVATE work)
target_include_directories(autolykos2_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND autolykos2_tests)
