//
// Copyright (c) 2020 INRIA
//

#ifndef __pinocchio_autodiff_cppad_spatial_se3_tpl_hpp__
#define __pinocchio_autodiff_cppad_spatial_se3_tpl_hpp__

#include "pinocchio/spatial/fwd.hpp"

namespace pinocchio
{
  namespace internal
  {
    template<typename Scalar, int Options, typename NewScalar>
    struct cast_call_normalize_method<SE3Tpl<::cppad::AD<Scalar>,Options>,NewScalar,::cppad::AD<Scalar>>
    {
      template<typename T>
      static void run(T &)
      {
        // do nothing
      }
    };
  
    template<typename Scalar, int Options, typename NewScalar>i
    struct cast_call_normalize_method<SE3Tpl<Scalar,Options>,::cppad::AD<NewScalar>,Scalar>
    {
      template<typename T>
      static void run(T &)
      {
        // do nothing
      }
    };
  
  } // namespace internal
  
} // namespace pinocchio

#endif // ifndef __pinocchio_autodiff_cppad_spatial_se3_tpl_hpp__

