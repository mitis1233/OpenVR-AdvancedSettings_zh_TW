include("Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/AdvancedSettings-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtmultimedia;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtwebsockets;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative")

qt6_deploy_qml_imports(TARGET AdvancedSettings PLUGINS_FOUND plugins_found)
qt6_deploy_runtime_dependencies(
    EXECUTABLE Z:/OpenVR-AdvancedSettings-qt6/out/build/x64-Release/Release/AdvancedSettings.exe
    ADDITIONAL_MODULES ${plugins_found}
    GENERATE_QT_CONF
)