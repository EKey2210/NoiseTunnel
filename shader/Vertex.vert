#version 150

uniform mat4 modelViewProjectionMatrix;
in vec3 position;

in vec2 texcoord;

out vec2 vTexCoord;

void main(){
  vTexCoord = texcoord;
  gl_Position = vec4(position,1.0);
}
