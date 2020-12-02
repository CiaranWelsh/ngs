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


















