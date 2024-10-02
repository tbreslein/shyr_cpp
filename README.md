# shyr

Simple HYdrodynamics with Riemann methods, in C

## TODO

- [ ] add Config
- [ ] add Mesh
- [ ] add State
- [ ] add init.h
- [ ] add Rhs
  - [ ] add NumFlux
  - [ ] add boundary conditions (no gradients)
- [ ] add Time
- [ ] add Output
- [ ] mainloop
- [ ] add sest dependency
- [ ] add tests
- [ ] add Sod test
- [ ] add Sedov test
  - [ ] cartesian
  - [ ] polar coords
    - [ ] add Source and SourceGeometric
- [ ] add Vortex test
  - [ ] add logpolar coords
- [ ] add Bondi test
  - [ ] add SourceGravity
- [ ] add Pringle test
  - [ ] add SourceVisc

## LICENSING

`shyr` is licensed under the MIT license. You can find the license text in the
`LICENSE` file.

The tests use the [`snitch v1.2.5`](https://github.com/snitch-org/snitch/releases/tag/v1.2.5)
library, which is licensed under the BSL-1.0 license. You can find the license
text in the `tests/SNITCH_LICENSE` file.
