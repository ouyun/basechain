

file(GLOB HEADERS "include/news/plugins/p2p/*.hpp")
add_library(p2p_plugin
            src/p2p_plugin.cpp
            ${HEADERS})
target_link_libraries(p2p_plugin appbase fc graphene_net)
target_include_directories(p2p_plugin PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")