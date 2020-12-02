set(target ngs-adapt-c++)

set(
        SOURCES
        ReadCollectionItf
        PileupItf
        PileupEventItf
        ReferenceItf
        ReferenceSequenceItf
        AlignmentItf
        ReadGroupItf
        ReadItf
        FragmentItf
        StatisticsItf
        StringItf
        Refcount
        ErrorMsg
        ErrBlock
)

# This library uses a macro to whether we're on 32/64 bit system
message(STATUS "CMAKE_SIZEOF_VOID_P ${CMAKE_SIZEOF_VOID_P}")
if (${CMAKE_SIZEOF_VOID_P} EQUAL 8)
    set(_ARCH_BITS "64")
else ()
    set(_ARCH_BITS "32")
endif ()


# The makefile version has 4 rules, one each for
#	- linbgs-adapt-c++.a
#	- linbgs-adapt-c++.a.2
#	- linbgs-adapt-c++.a.2.10.8
#	- linbgs-adapt-c++.static.a
# But three of these are just softlinks (ln -s) so here we'll only create the one library

add_library(${target} STATIC ${SOURCES})
target_include_directories(${target} PUBLIC
        "${NGS_SDK_INCLUDE_DIR}"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/unix/fat86>"
        "$<INSTALL_INTERFACE:include/adapter/unix/fat86>"
        )
target_compile_definitions(${target} PUBLIC _ARCH_BITS=${_ARCH_BITS})







