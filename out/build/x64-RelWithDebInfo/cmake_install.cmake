# Install script for directory: Z:/OpenVR-AdvancedSettings-qt6

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "Z:/OpenVR-AdvancedSettings-qt6/out/install/x64-RelWithDebInfo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-RelWithDebInfo/RelWithDebInfo/AdvancedSettings.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "Z:/OpenVR-AdvancedSettings-qt6/third-party/openvr/bin/win64/openvr_api.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "Z:/OpenVR-AdvancedSettings-qt6/Readme.md"
    "Z:/OpenVR-AdvancedSettings-qt6/LICENSE"
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/openvr/LICENSE-VALVE"
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/material-symbols/LICENSE-MATERIAL-SYMBOLS"
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/LICENSE-NOTO-SANS-CJK"
    "Z:/OpenVR-AdvancedSettings-qt6/src/package_files/action_manifest.json"
    "Z:/OpenVR-AdvancedSettings-qt6/src/package_files/manifest.vrmanifest"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "Z:/OpenVR-AdvancedSettings-qt6/src/package_files/default_action_manifests")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/fonts" TYPE FILE FILES
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansJP-Regular.otf"
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansSC-Regular.otf"
    "Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansTC-Regular.otf"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "Z:/OpenVR-AdvancedSettings-qt6/src/package_files/restartvrserver.bat"
    "Z:/OpenVR-AdvancedSettings-qt6/src/package_files/startdesktopmode.bat"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-RelWithDebInfo/.qt/deploy_qml_app_AdvancedSettings_5f1cf8465a.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-RelWithDebInfo/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
