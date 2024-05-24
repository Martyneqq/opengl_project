#version 400
in vec3 color;
out vec4 colorFrag;

void main(){
	colorFrag = vec4(color, 1.0);
}