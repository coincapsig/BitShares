if( UNIX ) 
set(READLINE_LIBRARIES readline)
endif()

add_executable( bts_wallet main.cpp chain_connection.cpp )
target_link_libraries( bts_wallet  bshare ${PLATFORM_SPECIFIC_LIBS} ${rt_library} ${READLINE_LIBRARIES} ${CMAKE_DL_LIBS})

add_executable( bts_server server.cpp chain_connection.cpp chain_server.cpp )
target_link_libraries( bts_server bshare ${PLATFORM_SPECIFIC_LIBS} ${rt_library} ${CMAKE_DL_LIBS} )

