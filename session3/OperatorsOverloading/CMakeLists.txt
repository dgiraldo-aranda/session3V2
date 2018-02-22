set(SRC_FILES
    Caja.h
    Caja.cpp
    FabricaCajas.h
    FabricaCajas.cpp
    )
add_library(${OperOverLib} STATIC ${SRC_FILES})
