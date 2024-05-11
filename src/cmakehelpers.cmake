# Creates a target for a source file.
# Expects the target name to be the same as the source file name without the extension.
# Will add that source file to the target.
# Additionally, you can specify additional source files to add to the target.
# If LINK_TESTS is set to true, the target will be linked with Catch2 and will be discovered as a test.
function (add_sourcefile_target)
    set (options LINK_TESTS)
    set (oneValueArgs TARGET)
    set (multiValueArgs ADDITIONAL_SOURCES)
    cmake_parse_arguments(T "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    add_executable(${T_TARGET} ${T_TARGET}.cpp ${T_ADDITIONAL_SOURCES})
    if (T_LINK_TESTS)
        target_link_libraries(${T_TARGET} PRIVATE Catch2::Catch2WithMain)
        catch_discover_tests(${T_TARGET})
    endif()
endfunction()
