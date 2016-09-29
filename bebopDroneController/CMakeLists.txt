#------------------------------------------------------------------------------
# Generic file for generating executable. Name will be same as folder name
#------------------------------------------------------------------------------

cmake_minimum_required (VERSION 2.8)

#Use folder name as project name
get_filename_component(COMP_NAME ${CMAKE_CURRENT_BINARY_DIR} NAME)
project (${COMP_NAME})
MESSAGE("COMP_NAME " ${COMP_NAME})

#Add project version number

FILE(GLOB ALL_C_FILES *.c utilities/*.c)

#Include Folder
include_directories ("${CMAKE_BINARY_DIR}/include" ./utilities/)


#------------------------------------------------------------------------------
# Generic file ends here. Add project related settings in section below
#------------------------------------------------------------------------------

#list(REMOVE_ITEM PROJECT_LIBS foo beef)

#------------------------------------------------------------------------------
# Generating executable
#------------------------------------------------------------------------------
add_executable (${COMP_NAME} ${ALL_C_FILES})
set_target_properties(${COMP_NAME} PROPERTIES 
                      INSTALL_RPATH "/usr/local/lib")
set_target_properties(${COMP_NAME} PROPERTIES 
                      BUILD_WITH_INSTALL_RPATH true)
target_link_libraries (${COMP_NAME} ${PROJECT_LIBS} )


