add_executable(gproftest main.cpp sumsquares.cpp sumsquares.h setup.cpp setup.h print.cpp print.h artificialtime.cpp 
                artificialtime.h sqroot.cpp sqroot.h)

set_target_properties(gproftest
    PROPERTIES
    LINKER_LANGUAGE CXX)
