#pragma once

#include "config.hpp"
#include <array>

namespace shyr
{
template <int N>
struct Mesh {
    static constexpr int n_gc = 2;
    static constexpr int n_comp = N + 2 * n_gc;
    static constexpr int imin = 0;
    static constexpr int imax = n_comp - 1;
    static constexpr int ixi_in = Mesh::n_gc;
    static constexpr int ixi_out = Mesh::n_comp - n_gc + 1;

    std::array<double, N> xi_cent;
    std::array<double, N> xi_west;
    std::array<double, N> xi_east;
    // std::array<double, N> d_area_xi_deta_dphi_east;
};

template <int N>
Mesh<N> init_mesh(const Config &config)
{
    Mesh<N> mesh = {};

    const double dxi = (config.xi_out - config.xi_in) / N;
    for (int i{0}; i < mesh.n_comp; i++) {
        mesh.xi_west[i] = config.xi_in + dxi * ((double)(i - mesh.ixi_in));
        mesh.xi_cent[i] = mesh.xi_west[i] + 0.5 * dxi;
        mesh.xi_east[i] = mesh.xi_west[i] + dxi;
    }

    return mesh;
}
} // namespace shyr
