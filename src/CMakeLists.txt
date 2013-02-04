add_executable(gproftest main.cpp sumsquares.cpp)

set_target_properties(gproftest
    PROPERTIES
    LINKER_LANGUAGE CXX)
