namespace shyr
{

namespace Initial
{
enum Cond { Noh };
}

namespace Boundary
{
enum Cond { NoGradients };
}

namespace Physics
{
enum Type { EulerAdiabatic, EulerIsothermal };
}

namespace RKF
{
enum Method { RK1, RKF4, SSPRK3, SSPRK5 };
}

} // namespace shyr
