#include "poisson_disk_sampling.h"

void PoissonDiskSampling::_bind_methods() {
	ClassDB::bind_method(D_METHOD("generate", "minimum_radius", "extents"),
			&PoissonDiskSampling::generate);
}

Array PoissonDiskSampling::generate(float minimum_radius, Rect2 extents) {
	auto points = Array();
	points.push_back(extents.get_position());
	return points;
}
