# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build clock
add_executable(clock
  window.cpp
  glew.c
  clock.cpp
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  )
target_link_libraries(clock
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  vec2.cpp
  mat2.cpp
  tests.cpp
  rect.cpp
  circle.cpp
  window.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

# Build aufgabe_5
#add_executable(aufgabe_5
#  aufgabe_5.cpp
#  circle.cpp
#  vec2.cpp
#  mat2.cpp
#  )

# Build aufgabe_5
add_executable(aufgabe_5
  aufgabe_5.cpp
  glew.c
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  window.cpp
  )
target_link_libraries(aufgabe_5
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

# Build aufgabe_2_und_3
add_executable(aufgabe_2_und_3
  aufgabe_2_und_3.cpp
  glew.c
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  window.cpp
  )
target_link_libraries(aufgabe_2_und_3
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )