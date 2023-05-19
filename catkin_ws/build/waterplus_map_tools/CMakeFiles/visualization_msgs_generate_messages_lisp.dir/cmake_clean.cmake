file(REMOVE_RECURSE
  "wp_nav_test_automoc.cpp"
  "wp_manager_automoc.cpp"
  "waterplus_map_tools_automoc.cpp"
  "wp_saver_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/visualization_msgs_generate_messages_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
