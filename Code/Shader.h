#pragma once

class Shader
{
public:
	Shader();
	~Shader();

	void Use();
	void Compile(const char* vertexSource, const char* fragmentSource);

private:
	void checkCompileErrors(unsigned int shader, std::string type);

	unsigned int m_id;
};