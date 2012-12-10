# I think this adds a library
add_library(CmaLibrary cma.c)

# More install targets!
install (TARGETS CmaLibrary DESTINATION bin)
install (FILES cma.h DESTINATION include)
