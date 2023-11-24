#pragma once
extern "C" __declspec(dllexport) size_t _stdcall meshopt_buildMeshletsBound(size_t index_count, size_t max_vertices, size_t max_triangles);
extern "C" __declspec(dllexport) size_t _stdcall meshopt_buildMeshlets(meshopt_Meshlet * meshlets, unsigned int* meshlet_vertices, unsigned int* meshlet_triangles,
	const unsigned int* indices, size_t index_count, const float* vertex_positions, size_t vertex_count, size_t vertex_positions_stride, size_t max_vertices,
	size_t max_triangles, float cone_weight);