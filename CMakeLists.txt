project(ANN_BP)
cmake_minimum_required(VERSION 2.8)

find_package(Boost)
include_directories(
    ${Boost_INCLUDE_DIRS} 
    ${CMAKE_CURRENT_SOURCE_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

set ( VoxSim_HDRS
	include/ANN_BP_Layer.h
    include/ANN_BP_Link.h
    include/ANN_BP_Network.h
    include/ANN_BP_Node.h
    include/ANN_BP_Enums.h
    )

set ( VoxSim_SRCS
	src/ANN_BP_Layer.cpp
    src/ANN_BP_Link.cpp
    src/ANN_BP_Network.cpp
    src/ANN_BP_Node.cpp
    )

ADD_EXECUTABLE(
    ANN_BP
    main.cpp
    ${VoxSim_SRCS}
    ${VoxSim_HDRS}
    )

target_link_libraries(ANN_BP ${Boost_LIBRARIES})
