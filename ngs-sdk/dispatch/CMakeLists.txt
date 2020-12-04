set(target ngs-disp)


set(SOURCES
        ReadCollectionItf
        ReferenceItf
        ReferenceSequenceItf
        PileupItf
        PileupEventItf
        AlignmentItf
        ReadGroupItf
        ReadItf
        FragmentItf
        StatisticsItf
        PackageItf
        StringItf
        Refcount
        VTable
        ErrBlock
        ErrorMsg
        )

# The original makefile does not build a SHARED library so we do not either.
add_library(${target} STATIC ${SOURCES})
target_include_directories(${target} PUBLIC "${NGS_SDK_INCLUDE_DIR}")

# we add an object library so that we can compile
# them later into ngs-sdk
add_library(${target}-obj OBJECT ${SOURCES})
target_include_directories(${target}-obj PUBLIC "${NGS_SDK_INCLUDE_DIR}")


















