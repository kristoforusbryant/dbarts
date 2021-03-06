#ifndef DBARTS_RANDOM_HPP
#define DBARTS_RANDOM_HPP

#include <dbarts/cstdint.hpp> // int types

struct ext_rng;

namespace dbarts {
  typedef enum {
    RNG_ALGORITHM_WICHMANN_HILL = 0,
    RNG_ALGORITHM_MARSAGLIA_MULTICARRY,
    RNG_ALGORITHM_SUPER_DUPER,
    RNG_ALGORITHM_MERSENNE_TWISTER,
    RNG_ALGORITHM_KNUTH_TAOCP,
    RNG_ALGORITHM_USER_UNIFORM,
    RNG_ALGORITHM_KNUTH_TAOCP2,
    RNG_ALGORITHM_LECUYER_CMRG,
    RNG_ALGORITHM_INVALID,       // here and up must match ext/random.h
    RNG_ALGORITHM_USER_POINTER   // implies user will set rng after object is created
  } rng_algorithm_t;
  
  typedef enum {
    RNG_STANDARD_NORMAL_BUGGY_KINDERMAN_RAMAGE = 0,
    RNG_STANDARD_NORMAL_AHRENS_DIETER,
    RNG_STANDARD_NORMAL_BOX_MULLER,
    RNG_STANDARD_NORMAL_USER_NORM,
    RNG_STANDARD_NORMAL_INVERSION,
    RNG_STANDARD_NORMAL_KINDERMAN_RAMAGE,
    RNG_STANDARD_NORMAL_INVALID // must be last
  } rng_standardNormal_t;
} // namespace dbarts

#endif // BART_CONTROL_HPP

