#include "shyr.hpp"
#include <cstdio>

int main()
{
    puts("template");
    const auto config = shyr::Config{
        .xi_in = 1.0,
        .xi_out = 2.0,
        .init_cond = shyr::Initial::Noh,
        .boundary_cond_west = shyr::Boundary::NoGradients,
        .boundary_cond_east = shyr::Boundary::NoGradients,
        .rkf_method = shyr::RKF::RK1,
        .adiabatic_index = 1.0,
    };
    return shyr::run<10>(config);
}
