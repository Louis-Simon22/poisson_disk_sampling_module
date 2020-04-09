#ifndef POISSONDISKSAMPLING_H
#define POISSONDISKSAMPLING_H

#include "core/reference.h"

class PoissonDiskSampling : public Reference {
	GDCLASS(PoissonDiskSampling, Reference);

protected:
	static void _bind_methods();

public:
	Array generate(float minimum_radius, Rect2 extents);
};

#endif // POISSONDISKSAMPLING_H