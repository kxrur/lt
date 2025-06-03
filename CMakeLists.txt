cmake_minimum_required(VERSION 3.15)
project(leetcode_practice CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# picky imgui config bellow. cheers to this [comment](https://github.com/conan-io/conan/issues/16499#issuecomment-2178256319)

# Include the directory for header files
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find all .cpp files in the src directory
file(GLOB_RECURSE SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
    ${PROJECT_SOURCE_DIR}/src/*.h
)

add_executable(${PROJECT_NAME} src/main.cpp
    ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE
)

install(TARGETS ${PROJECT_NAME} DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

# TODO: copy the `compile_bindings.json` to the project's root
