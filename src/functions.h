#include "define.h"

/* parallel.c */
void initialization_MPI();

/* parameters.c */
my_double read_parameter();
void assign_parameters();
void processor_splitting();
void allocate_fields();

/* grid */
void read_mesh();
void compute_volumes();

/* lb.c */
void design_lb();
void sendrecv_borders_pop(pop *f);
pop equilibrium(pop * f, int i, int j, int k);
void time_stepping(pop *f, pop *rhs_f);

/* initial_conditions.c */

void initial_conditions();

/* fluid.c */
void add_collision(pop * f, pop *rhs_f);
void compute_advection(pop * f, pop *rhs_f);
void hydro_fields();
