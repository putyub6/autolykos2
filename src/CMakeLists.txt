add_library(work STATIC work.cpp)
target_include_directories(work PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(autolykos2 main.cpp)
target_link_libraries(autolykos2 PRIVATE work)
