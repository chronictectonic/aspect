//-------------------------------------------------------------
//    $Id: simulator.h 232 2011-10-19 13:30:15Z bangerth $
//
//    Copyright (C) 2011 by the authors of the ASPECT code
//
//-------------------------------------------------------------
#ifndef __aspect__equation_data_h
#define __aspect__equation_data_h


#include <deal.II/base/point.h>



//TODO: should move into namespace aspect
namespace EquationData
{
  using namespace dealii;

  extern const double year_in_seconds;
  extern double T0, T1;

  template <int dim>
  Tensor<1,dim> gravity_vector (const Point<dim> &p);
}


#endif
