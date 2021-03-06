#pragma once
#include <optional>
#include <glad/glad.h>  // Initialize with gladLoadGL()
#include <memory>

struct ImageWindowState {
	GLuint texture;
	int width, height;
	float zoom;
	const char * filename;
	int id;
};

std::optional<ImageWindowState> LoadImageFile(const char * filepath);
bool SaveImageFile(const char * filepath, ImageWindowState * image);
