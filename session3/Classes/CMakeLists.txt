set(SRC_FILES
    Car.h
    Car.cpp
    PowerfullCar.h
    PowerfullCar.cpp
    CarsManager.h
    CarsManager.cpp
    )
add_library(${CLASSESLib} STATIC ${SRC_FILES})
