#ifndef CGAL_KERNEL_D_CARTESIAN_BASE_H
#define CGAL_KERNEL_D_CARTESIAN_BASE_H

#include <CGAL/basic.h>
#include <CGAL/Kernel_d/Cartesian_complete.h>
#include <CGAL/Kernel_d/Cartesian_LA_base.h>

namespace CGAL {
#define CGAL_BASE \
Cartesian_complete_predicates< \
Cartesian_complete_constructors< \
Cartesian_complete_computes< \
Cartesian_complete_types< \
Cartesian_LA_base_d< \
		    FT_, Dim_ \
>, false, typename Default::Get<Derived_,Cartesian_base_d<FT_,Dim_> >::type \
>, false, typename Default::Get<Derived_,Cartesian_base_d<FT_,Dim_> >::type \
>, false, typename Default::Get<Derived_,Cartesian_base_d<FT_,Dim_> >::type \
>, false, typename Default::Get<Derived_,Cartesian_base_d<FT_,Dim_> >::type \
>
template < typename FT_, typename Dim_, typename Derived_=Default>
struct Cartesian_base_d : public CGAL_BASE
{
    CGAL_CONSTEXPR Cartesian_base_d(){}
    CGAL_CONSTEXPR Cartesian_base_d(int d):CGAL_BASE(d){}
};
#undef CGAL_BASE

} //namespace CGAL

#endif // CGAL_KERNEL_D_CARTESIAN_BASE_H
