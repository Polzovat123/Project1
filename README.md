# Laboratory one
glClear(GL_COLOR_BUFFER_BIT) - glClear sets the bitplane area of the window to values previously selected by glClearColor, glClearDepthf, and glClearStencil.
<br><br>
glEnableVertexAttribArray(0) - glEnableVertexAttribArray enables the generic vertex attribute array specified by index. glDisableVertexAttribArray disables the generic vertex attribute array specified by index.
<br><br>
glBindBuffer(GL_ARRAY_BUFFER, VBO) - glBindBuffer binds a buffer object to the specified buffer binding point.
<br><br>
glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0) - glVertexAttribPointer and glVertexAttribIPointer specify the location and data format of the array of generic vertex attributes at index index to use when rendering.
<br><br>
glDrawArrays(GL_TRIANGLES, 0, 3) - glDrawArrays specifies multiple geometric primitives with very few subroutine calls.
<br><br>
glDisableVertexAttribArray(0) - enable the generic vertex attribute array specified
<br><br>
glutSwapBuffers() - Performs a buffer swap on the layer in use for the current window. 
<br><br>
glutInit(&argc, argv) - glutInit will initialize the GLUT library and negotiate a session with the window system.
<br><br>
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA) - The initial display mode is used when creating top-level windows, subwindows, and overlays to determine the OpenGL display mode for the to-be-created window or overlay.
<br><br>
glutInitWindowSize(600, 600) - define size
<br><br>
glutInitWindowPosition(200, 200) - define position
<br><br>
glutCreateWindow("Sablin DP") - labele name
<br><br>
glutDisplayFunc(render_scene) - call render function
<br><br>
glClearColor(0.0f, 0.0f, 0.0f, 0.0f) - describe stan color
<br>
vec3 v[3];<br>
v[0] = vec3(-1.0f, -1.0f, 0.0f)<br>
v[1] = vec3(1.0f, -1.0f, 0.0f)<br>
v[2] = vec3(0.0f, 1.0f, 0.0f)<br>
<br><br>
glGenBuffers(3, &VBO) - glGenBuffers returns n buffer object names in buffers
<br><br>
glBindBuffer(GL_ARRAY_BUFFER, VBO) - glBindBuffer binds a buffer object to the specified buffer binding point.
<br><br>
glBufferData(GL_ARRAY_BUFFER, sizeof(v), v, GL_STATIC_DRAW) - data buff
<br><br>
glutMainLoop() - main loop
<br>
