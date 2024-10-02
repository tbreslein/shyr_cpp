#pragma once

#include "config.hpp"
#include "mesh.hpp"
#include <print>

namespace shyr
{

template <int N>
int run(const Config &config)
{
    const auto mesh = shyr::init_mesh<N>(config);
    for (int i{0}; i < mesh.n_comp; i++) {
        std::println("{}", mesh.xi_west[i]);
    }
    return 0;
}

} // namespace shyr
