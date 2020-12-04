set(target ngs)

set(
        NGS_SDK_INCLUDE_DIR
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<INSTALL_INTERFACE:include>"
)

add_subdirectory(dispatch)
add_subdirectory(adapter)
add_subdirectory(language)


add_library(ngs-sdk STATIC
        $<TARGET_OBJECTS:ngs-disp-obj>
        $<TARGET_OBJECTS:ngs-bind-java-obj>
        $<TARGET_OBJECTS:ngs-bind-python-obj>
        $<TARGET_OBJECTS:ngs-bind-c++-obj>
        )

add_dependencies(ngs-sdk ngs-disp-obj ngs-bind-java-obj ngs-bind-python-obj ngs-bind-c++-obj)

if (BUILD_TESTS)
    add_subdirectory(test)
endif ()











