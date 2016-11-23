// MeshConverter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Importer.hpp"      // C++ importer interface
#include "scene.h"       // Output data structure
#include "postprocess.h" // Post processing flags

int main()
{
	Assimp::Importer importer;
	Assimp::Exporter

	const aiScene* scene = importer.ReadFile("boblampclean.md5mesh",
		(aiProcess_Triangulate | aiProcess_GenSmoothNormals | aiProcess_FlipUVs | aiProcess_JoinIdenticalVertices));
	

	printf("hello world");

    return 0;
}

