add_sourcefile_target(
    TARGET linearsearch_examples
    ADDITIONAL_SOURCES linearsearch.cpp
)

add_sourcefile_target(
    TARGET linearsearch_tests
    ADDITIONAL_SOURCES linearsearch.cpp
    LINK_TESTS
)
