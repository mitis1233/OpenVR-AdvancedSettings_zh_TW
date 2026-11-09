# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "AdvancedSettings_autogen"
  "CMakeFiles\\AdvancedSettings_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AdvancedSettings_autogen.dir\\ParseCache.txt"
  )
endif()
