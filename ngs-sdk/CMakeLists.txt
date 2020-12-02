set(target ngs)

set(
        NGS_SDK_INCLUDE_DIR
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<INSTALL_INTERFACE:include>"
        )

add_subdirectory(dispatch)
add_subdirectory(adapter)
#add_subdirectory(language)
