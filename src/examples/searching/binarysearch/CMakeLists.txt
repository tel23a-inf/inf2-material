add_sourcefile_target(
    TARGET binarysearch_examples
    ADDITIONAL_SOURCES binarysearch.cpp
)

add_sourcefile_target(
    TARGET binarysearch_tests
    ADDITIONAL_SOURCES binarysearch.cpp
    LINK_TESTS
)
