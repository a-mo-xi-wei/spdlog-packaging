cmake_minimum_required (VERSION 3.10)

project(test_log)

set(SOURCE_FILE
	main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILE})

add_subdirectory(MySpdlog)

target_link_libraries(${PROJECT_NAME} MySpdlog)

