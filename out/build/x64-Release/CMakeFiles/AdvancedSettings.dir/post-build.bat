@echo off
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=2& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/Readme.md Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/Readme.md || (set FAIL_LINE=3& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=4& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/LICENSE Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/LICENSE || (set FAIL_LINE=5& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/openvr/LICENSE-VALVE Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/LICENSE-VALVE || (set FAIL_LINE=6& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/material-symbols/LICENSE-MATERIAL-SYMBOLS Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/LICENSE-MATERIAL-SYMBOLS || (set FAIL_LINE=7& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/LICENSE-NOTO-SANS-CJK Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/LICENSE-NOTO-SANS-CJK || (set FAIL_LINE=8& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=9& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E make_directory Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/fonts || (set FAIL_LINE=10& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansJP-Regular.otf Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansSC-Regular.otf Z:/OpenVR-AdvancedSettings-qt6/third-party/noto-sans-cjk/NotoSansTC-Regular.otf Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/fonts || (set FAIL_LINE=11& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=12& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_directory Z:/OpenVR-AdvancedSettings-qt6/src/package_files/default_action_manifests Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/default_action_manifests || (set FAIL_LINE=13& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=14& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/src/package_files/action_manifest.json Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/action_manifest.json || (set FAIL_LINE=15& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/src/package_files/manifest.vrmanifest Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/manifest.vrmanifest || (set FAIL_LINE=16& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=17& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/src/package_files/restartvrserver.bat Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/restartvrserver.bat || (set FAIL_LINE=18& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/src/package_files/startdesktopmode.bat Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/startdesktopmode.bat || (set FAIL_LINE=19& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=20& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/openvr/bin/win64/openvr_api.dll Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/openvr_api.dll || (set FAIL_LINE=21& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=22& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/openssl/libcrypto-1_1-x64.dll Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/libcrypto-1_1-x64.dll || (set FAIL_LINE=23& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/openssl/libssl-1_1-x64.dll Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/libssl-1_1-x64.dll || (set FAIL_LINE=24& goto :ABORT)
D:\G\QT\Tools\CMake_64\bin\cmake.exe -E copy_if_different Z:/OpenVR-AdvancedSettings-qt6/third-party/openssl/LICENSE-OPENSSL Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/LICENSE-OPENSSL || (set FAIL_LINE=25& goto :ABORT)
cd /D Z:\OpenVR-AdvancedSettings-qt6\out\build\x64-Release || (set FAIL_LINE=26& goto :ABORT)
C:\Qt\6.8.3\msvc2022_64\bin\windeployqt.exe --dir Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release --qmldir Z:/OpenVR-AdvancedSettings-qt6/src/res/qml --release --no-compiler-runtime Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/AdvancedSettings.exe || (set FAIL_LINE=27& goto :ABORT)
goto :EOF

:ABORT
set ERROR_CODE=%ERRORLEVEL%
echo Batch file failed at line %FAIL_LINE% with errorcode %ERRORLEVEL%
exit /b %ERROR_CODE%