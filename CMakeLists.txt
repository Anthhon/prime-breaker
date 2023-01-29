cmake_minimum_required(VERSION 3.22.1)

# Default project config
project(Primebreaker VERSION 1.0)
add_executable(Primebreaker primebreaker.c)
target_link_libraries(Primebreaker m)
install(TARGETS Primebreaker DESTINATION bin)
