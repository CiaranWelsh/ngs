set(target test_engine)

set(
        SOURCES
        AlignmentItf.hpp
        PileupEventItf.hpp
        PileupItf.hpp
        ReadCollectionItf.hpp
        ReadGroupItf.hpp
        ReadItf.hpp
        ReferenceItf.hpp
        ReferenceSequenceItf.hpp
        StatisticsItf.hpp
        test_engine.hpp
        test_engine.cpp
        ../ngs-test/main.cpp

)

add_executable(${target}  ${SOURCES})
target_link_libraries(${target} PRIVATE ngs-adapt-c++ ngs-disp  ngs-bind-c++)
target_include_directories(${target} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
#        $<BUILD_INTERFACE:${NGS_SDK_INCLUDE_DIR}>

        )


























