// Copyright 2013-2015 the openage authors. See copying.md for legal info.

#ifndef OPENAGE_SHADER_SHADER_H_
#define OPENAGE_SHADER_SHADER_H_

#include <initializer_list>

#include <epoxy/gl.h>

namespace openage {
namespace shader {

const char *type_to_string(GLenum type);

class Shader {
public:
	Shader(GLenum type, std::initializer_list<const char *> sources);
	~Shader();

	GLuint id;
	GLenum type;
};

}} // openage::shader

#endif
