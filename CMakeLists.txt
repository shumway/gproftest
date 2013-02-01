cmake_minimum_required (VERSION 2.6)

project (GPROF_TEST)
set (GPROF_TEST_VERSION_MAJOR 0)
set (GPROF_TEST_VERSION_MINOR 1)

enable_language(CXX)

include(CheckIncludeFiles)
CHECK_INCLUDE_FILES(getopt.h HAVE_GETOPT_H)

configure_file (
  "${GPROF_TEST_SOURCE_DIR}/config_cmake.h.in"
  "${GPROF_TEST_BINARY_DIR}/config.h"
)

INCLUDE_DIRECTORIES(
    ${GPROF_TEST_BINARY_DIR}
    ${GPROF_TEST_SOURCE_DIR}/lib
    ${GPROF_TEST_SOURCE_DIR}/src
)

add_definitions(-DHAVE_CONFIG_H)

set(EXECUTABLE_OUTPUT_PATH ${GPROF_TEST_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${GPROF_TEST_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${GPROF_TEST_BINARY_DIR}/lib)


add_subdirectory(src)
