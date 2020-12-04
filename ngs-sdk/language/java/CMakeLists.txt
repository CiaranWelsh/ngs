set(target ngs-bind-java)


set(
        SOURCES
        jni_ReadCollectionItf
        jni_ReferenceIteratorItf
        jni_ReferenceItf
        jni_ReferenceSequenceItf
        jni_PileupIteratorItf
        jni_PileupItf
        jni_PileupEventIteratorItf
        jni_PileupEventItf
        jni_AlignmentIteratorItf
        jni_AlignmentItf
        jni_ReadGroupIteratorItf
        jni_ReadGroupItf
        jni_ReadIteratorItf
        jni_ReadItf
        jni_FragmentItf
        jni_StatisticsItf
        jni_Package
        jni_String
        jni_Refcount
        jni_ErrorMsg
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












