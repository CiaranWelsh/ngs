set(target ngs-bind-python)


set(
        SOURCES
        py_AlignmentItf
        py_AlignmentIteratorItf
        py_FragmentItf
        py_FragmentIteratorItf
        py_PackageItf
        py_PileupEventItf
        py_PileupEventIteratorItf
        py_PileupItf
        py_PileupIteratorItf
        py_ReadCollectionItf
        py_ReadGroupItf
        py_ReadGroupIteratorItf
        py_ReadItf
        py_ReadIteratorItf
        py_ReferenceItf
        py_ReferenceIteratorItf
        py_ReferenceSequenceItf
        py_StatisticsItf
        py_Refcount
        py_StringItf
)

add_library(${target} STATIC ${SOURCES})
target_include_directories(${target} PUBLIC
        ${NGS_SDK_INCLUDE_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        )



add_library(${target}-obj OBJECT ${SOURCES})
target_include_directories(${target}-obj PUBLIC
        ${NGS_SDK_INCLUDE_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        )










