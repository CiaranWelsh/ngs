set(target ngs-bind-c++)

set(
        SOURCES
        ReadCollection
        ReferenceSequence
        ReferenceIterator
        Reference
        PileupIterator
        Pileup
        PileupEventIterator
        PileupEvent
        AlignmentIterator
        Alignment
        ReadGroupIterator
        ReadGroup
        ReadIterator
        Read
        FragmentIterator
        Fragment
        Statistics
        StringRef
)

add_library(${target} STATIC ${SOURCES})
target_include_directories(${target} PUBLIC ${NGS_SDK_INCLUDE_DIR})
target_link_libraries(${target} PUBLIC  ngs-sdk)

add_library(${target}-obj OBJECT ${SOURCES})
target_include_directories(${target}-obj PUBLIC
        ${NGS_SDK_INCLUDE_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        )










