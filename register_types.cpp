#include "register_types.h"

#include "core/class_db.h"
#include "poisson_disk_sampling_module.h"

void register_poisson_disk_sampling_module_types() {
  ClassDB::register_class<PoissonDiskSampling>();
}

void unregister_poisson_disk_sampling_module_types() {}