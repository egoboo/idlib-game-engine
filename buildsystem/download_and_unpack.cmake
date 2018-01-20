function(download_and_unpack remote local unpack)
	# Remove the file.
	message("removing ${local}")
	file(REMOVE ${local})
	# Remove the directory.
	message("removing ${unpack}")
	file(REMOVE ${unpack})
	# Download the file.
	message("downloading ${remote} to ${local}")
	file(DOWNLOAD ${remote} ${local}
		 STATUS status
		 LOG log)
	list(GET status 0 error_code)
	if(error_code)
		list( GET status 1 error_message )
		message( FATAL_ERROR "Failed to download file: ${error_message}" )
	endif()
	message("cr ${local} to ${unpack}")
	# Create unpack.
	message("creating ${unpack}")
	file(MAKE_DIRECTORY ${unpack})
	# Unpack unpack.
	message("unpacking ${local} to ${unpack}")
	execute_process(COMMAND ${CMAKE_COMMAND} -E tar xfz ${local}
                    WORKING_DIRECTORY ${unpack}
                    RESULT_VARIABLE status)
	list(GET status 0 error_code)
	if(error_code)
		list( GET status 1 error_message )
		message( FATAL_ERROR "Failed to upack file: ${error_message}" )
	endif()
endfunction()