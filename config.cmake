# Project metadata
set(PROJECT_NAME "p101_posix_optional")
set(PROJECT_VERSION "0.0.1")
set(PROJECT_DESCRIPTION "Optional POSIX utilities")
set(PROJECT_LANGUAGE "C")

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Define library targets
set(LIBRARY_TARGETS p101_posix_optional)

# Source files for the library
set(p101_posix_optional_SOURCES
        src/aio.c
        src/pthread.c
        src/sched.c
        src/spawn.c
        src/stdlib.c
        src/sys/mman.c
)

# Header files for installation, merging sys/ headers into the main list
set(p101_posix_optional_HEADERS
        include/p101_posix_optional/p101_aio.h
        include/p101_posix_optional/p101_fcntl.h
        include/p101_posix_optional/p101_mqueue.h
        include/p101_posix_optional/p101_pthread.h
        include/p101_posix_optional/p101_sched.h
        include/p101_posix_optional/p101_spawn.h
        include/p101_posix_optional/p101_stdlib.h
        include/p101_posix_optional/p101_time.h
        include/p101_posix_optional/sys/p101_mman.h
)

# Linked libraries required for this project
set(p101_posix_optional_LINK_LIBRARIES
        p101_error
        p101_env
        p101_c
)
