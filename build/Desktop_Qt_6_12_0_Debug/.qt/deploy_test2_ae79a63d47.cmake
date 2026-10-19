include("/home/cat/test2/build/Desktop_Qt_6_12_0_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/test2-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/cat/test2/build/Desktop_Qt_6_12_0_Debug/test2"
    GENERATE_QT_CONF
)
