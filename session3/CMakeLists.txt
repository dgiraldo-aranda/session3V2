cmake_minimum_required(VERSION 2.8)

project(session3)
set(CMAKE_CXX_STANDARD 11)
add_executable(${PROJECT_NAME} "main.cpp")

set(BASE_DIR ${CMAKE_CURRENT_LIST_DIR})

set(SCOPELib Capacitacion.sesion3.scope)
set(POINTERSLib Capacitacion.sesion3.pointers)
set(CLASSESLib Capacitacion.sesion3.Classes)
set(OperPrecLib Capacitacion.sesion3.Operators.precedence)
set(OperOverLib Capacitacion.sesion3.Operators.overloading)

include_directories(${BASE_DIR}/Scope/)
include_directories(${BASE_DIR}/Pointers/)
include_directories(${BASE_DIR}/OperatorsPrecedence/)
include_directories(${BASE_DIR}/OperatorsOverloading/)
include_directories(${BASE_DIR}/Containers-Iterators/)
include_directories(${BASE_DIR}/Classes/)


add_subdirectory(Scope)
add_subdirectory(Pointers)
add_subdirectory(OperatorsPrecedence)
add_subdirectory(OperatorsOverloading)
add_subdirectory(Containers-Iterators)
add_subdirectory(Classes)

target_link_libraries(session3 ${POINTERSLib})
target_link_libraries(session3 ${CLASSESLib})
target_link_libraries(session3 ${OperPrecLib})
target_link_libraries(session3 ${OperOverLib})


