#include "core.hpp"

namespace shyr
{

struct Config {
    double xi_in;
    double xi_out;
    double adiabatic_index;
    Initial::Cond init_cond;
    Boundary::Cond boundary_cond_west;
    Boundary::Cond boundary_cond_east;
    RKF::Method rkf_method;
};

} // namespace shyr
