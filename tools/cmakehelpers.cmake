# Creates multiple targets for a list of source files.
# By default, the following will be created:
# 
# - A build target that builds a binary from all given source files.
# - A run target that runs the binary.
#
# By default, the Catch2::Catch2WithMain library will be linked with the binary
# and catch_discover_tests will be called to discover tests.
#
# Parameters:
# - TARGET: The name of the binary target.
#           If not specified, the target name will be the same as the 
#           first source file name without the extension.
# - SOURCES: A list of source files to compile.
#
# Options:
# - NO_TESTS: If set to true, the test library will not be linked
#             and no test discovery will be performed.
# - NO_RUN_TARGET: If set to true, no run target will be created.
# 
function (add_binary_targets)
    set (options TESTS NO_RUN_TARGET)
    set (oneValueArgs TARGET)
    set (multiValueArgs SOURCES)
    cmake_parse_arguments(BT "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    # Emptiness check for the SOURCES list
    if (NOT BT_SOURCES)
        message(FATAL_ERROR "No source files provided for binary target")
    endif()

    if (NOT BT_TARGET)
        list(GET BT_SOURCES 0 BT_FIRST_SOURCE)
        get_filename_component(BT_TARGET ${BT_FIRST_SOURCE} NAME_WE)
    endif()
    
    message(STATUS "Creating binary target ${BT_TARGET} from sources ${BT_SOURCES}")
    add_executable(${BT_TARGET} ${BT_SOURCES})

    if (BT_TESTS)
        message(STATUS "Linking Catch2 with target ${BT_TARGET}")
        target_link_libraries(${BT_TARGET} PRIVATE Catch2::Catch2WithMain)
        catch_discover_tests(${BT_TARGET})
        add_dependencies(build-tests ${BT_TARGET})
    endif()

    if (NOT BT_NO_RUN_TARGET)
        message(STATUS "Creating run target for ${BT_TARGET}")
        add_custom_target(run_${BT_TARGET}
            COMMENT "Running ${BT_TARGET} ...\n\n"
            COMMAND ${BT_TARGET}
            DEPENDS ${BT_TARGET}
        )
    endif()
endfunction()
