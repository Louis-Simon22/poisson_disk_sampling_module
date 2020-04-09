#ifndef POISSONDISKSAMPLINGMODULE_H
#define POISSONDISKSAMPLINGMODULE_H

#include "core/reference.h"

struct Vector2Traits {
  using ValueType = float;

  static constexpr auto kSize = 2;

  static auto Get(const Vector2 &v, const std::size_t i) -> ValueType {
    return v[i];
  }

  static void Set(Vector2 *const v, const std::size_t i,
                            const ValueType val) {
    (*v)[i] = val;
  }
};

class PoissonDiskSampling : public Reference {
  GDCLASS(PoissonDiskSampling, Reference);

protected:
  static void _bind_methods();

public:
  Vector<Vector2> generate(real_t minimum_radius, Rect2 extents);
};

#endif // POISSONDISKSAMPLINGMODULE_H