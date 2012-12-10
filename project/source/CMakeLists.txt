cmake_minimum_required (VERSION 0.1)
project (Cma)
INCLUDE(CPack)

# Version for the sake of making things
#	look organized and professional
set (Cma_VERSION_MAJOR 1)
set (Cma_VERSION_MINOR 0)

# Config a header file to pass some CMake settings
#	to source code. Hopefully they'll know how to
#	catch them and run to the inzone
configure_file (
	"${PROJECT_SOURCE_DIR}/CmaConfig.h.in"
	"${PROJECT_BINARY_DIR}/CmaConfig.h"
	)

# Add binary tree to set a path for adventurers
#	to seek the mysterious includes
include_directories ("${PROJECT_BINARY_DIR}")

# Add CmaLibrary library of libraries
include_directories ("${PROJECT_SOURCE_DIR}/CmaLibrary")
add_subdirectory (CmaLibrary)
set (EXTRA_LIBS ${EXTRA_LIBS} CmaLibrary)

# Add .exe file for execution
add_executable (Cma ma.c)
target_link_libraries (Cma ${EXTRA_LIBS})

# Drop in install targets; stir for 5 minutes
install (TARGETS Cma DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/CmaConfig.h"
	DESTINATION include)
