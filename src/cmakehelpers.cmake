# Defines anexample target for a given source file.
# Expects the file stem (without extension) and any additional dependencies.
#
# - Creates a target <STEM>-example that depends on "<STEM>.cpp".
# - If any of the files "<STEM>_example.cpp", "<STEM>_example.cpp",
#   or "example_<STEM>.cpp" exists, it is also added as a dependency.
# - More Dependencies can be supplied using the DEPENDS keyword.
# - Links the Catch2::Catch2WithMain library.
function(add_example_executable)
    set(options)
    set(oneValueArgs STEM)
    set(multiValueArgs DEPENDS)
    cmake_parse_arguments(EE "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    set( TARGET_NAME "${EE_STEM}-example" )
    set( SOURCEFILE "${EE_STEM}.cpp")
    set ( DEPENDENCIES ${EE_DEPENDS} )
    set( EXAMPLEFILES "${EE_STEM}_example.cpp" "${EE_STEM}_examples.cpp" "example_${EE_STEM}.cpp")

    foreach ( EXAMPLEFILE ${EXAMPLEFILES}  )
        if ( EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${EXAMPLEFILE} )
            list( APPEND DEPENDENCIES ${EXAMPLEFILE})
        endif ()
    endforeach ()

    add_executable( ${TARGET_NAME} ${SOURCEFILE} ${DEPENDENCIES} )
endfunction()

# Defines a catch test target for a given source file.
# Expects the file stem (without extension) and any additional dependencies.
#
# - Creates a target <STEM>-test that depends on "<STEM>.cpp".
# - If any of the files "<STEM>_test.cpp", "<STEM>_tests.cpp",
#   or "test_<STEM>.cpp" exists, it is also added as a dependency.
# - More Dependencies can be supplied using the DEPENDS keyword.
# - Links the Catch2::Catch2WithMain library.
function(add_test_executable)
    set(options)
    set(oneValueArgs STEM)
    set(multiValueArgs DEPENDS)
    cmake_parse_arguments(TE "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    set( TARGET_NAME "${TE_STEM}-test" )
    set( SOURCEFILE "${TE_STEM}.cpp")
    set ( DEPENDENCIES ${TE_DEPENDS} )
    set( TESTFILES "${TE_STEM}_test.cpp" "${TE_STEM}_tests.cpp" "test_${TE_STEM}.cpp")

    foreach ( TESTFILE ${TESTFILES}  )
        if ( EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${TESTFILE} )
            list( APPEND DEPENDENCIES ${TESTFILE})
        endif ()
    endforeach ()

    add_executable( ${TARGET_NAME} ${SOURCEFILE} ${DEPENDENCIES} )
    target_link_libraries(${TARGET_NAME} PRIVATE Catch2::Catch2WithMain)
    catch_discover_tests(${TARGET_NAME})
endfunction()

# Checks if a file named ${DIRNAME}.cpp exists in the current source directory,
# where DIRNAME is the name of the current directory (without parent path).
# If so, defines an example target for this source file.
#
# - Creates a target <DIRNAME>-example that depends on "<DIRNAME>.cpp".
# - If any of the files "<DIRNAME>_example.cpp", "<DIRNAME>_examples.cpp",
#   or "example_<DIRNAME>.cpp" exists, it is also added as a dependency.
# - More Dependencies can be supplied using the DEPENDS keyword.
# - Links the Catch2::Catch2WithMain library.
function(add_example_executable_for_current_dir)
    get_filename_component(DIRNAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    if ( EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${DIRNAME}.cpp )
        add_example_executable(STEM ${DIRNAME})
    endif()
endfunction()

# Checks if a file named ${DIRNAME}.cpp exists in the current source directory,
# where DIRNAME is the name of the current directory (without parent path).
# If so, defines a catch test target for this source file.
#
# - Creates a target <DIRNAME>-test that depends on "<DIRNAME>.cpp".
# - If any of the files "<DIRNAME>_test.cpp", "<DIRNAME>_tests.cpp",
#   or "test_<DIRNAME>.cpp" exists, it is also added as a dependency.
# - More Dependencies can be supplied using the DEPENDS keyword.
# - Links the Catch2::Catch2WithMain library.
function(add_test_executable_for_current_dir)
    get_filename_component(DIRNAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    if ( EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${DIRNAME}.cpp )
        add_test_executable(STEM ${DIRNAME})
    endif()
endfunction()
