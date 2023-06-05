# CMakeList.txt: projeto de CMake para FT Bakery, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (CMakeTarget "FT Bakery.cpp" "FT Bakery.h" "Cheese.cpp" "Cheese.h" "CottageCheese.h" "CottageCheese.cpp" "Ham.h" "Ham.cpp" "Mortadella.h" "Mortadella.cpp" "MyProgram.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
