#include "poisson_disk_sampling_module.h"

#include "poisson_disk_sampling.h"

void PoissonDiskSampling::_bind_methods() {
  ClassDB::bind_method(
      D_METHOD("generate2D", "minimum_distance", "maximum_attempts", "extents"),
      &PoissonDiskSampling::generate2D);
}

Vector<Vector2> PoissonDiskSampling::generate2D(real_t minimum_distance,
                                                int maximum_attempts,
                                                Rect2 extents) {
  const auto pos_min = extents.get_position();
  const auto pos_max = extents.get_position() + extents.get_size();
  const auto min = std::array<real_t, 2>{{pos_min[0], pos_min[1]}};
  const auto max = std::array<real_t, 2>{{pos_max[0], pos_max[1]}};
  const auto points =
      thinks::PoissonDiskSampling<real_t, 2, Vector2, Vector2Traits>(
          minimum_distance, min, max);
  auto points_array = Vector<Vector2>();
  for (const auto &point : points) {
    points_array.push_back(point);
  }
  return points_array;
}
