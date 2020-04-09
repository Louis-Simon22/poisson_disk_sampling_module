#include "register_types.h"

#include "core/class_db.h"
#include "poisson_disk_sampling.h"

void register_poisson_disk_sampling_types() {
    ClassDB::register_class<PoissonDiskSampling>();
}

void unregister_poisson_disk_sampling_types() {
   // Nothing to do here in this example.
}