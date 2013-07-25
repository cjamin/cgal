namespace CGAL {
/*!
\ingroup PkgVisibility_2Classes

This class is a model of the concept `Visibility_2` offers visibility queries within 
an Arrangement. The algorithm it applies to obtain visibility is using preprocessing.

\cgalModels `Visibility_2` 

\sa `CGAL::Simple_visibility_2<Arrangement_2, Regularization_tag>`
\sa `CGAL::Naive_visibility_2<Arrangement_2, Regularization_tag>`

*/
template <typename Arrangement_2, typename Regularization_tag>
class Preprocessed_visibility_2 {
public:

/// \name Types 
/// @{

 /*!
  The type of input Arrangement.
  */
   typedef Arrangement_2 Input_Arrangement_2;

 /*!
  The type of output Arrangement.
  */
   typedef Arrangement_2 Output_Arrangement_2;

 /*! 
   The Point_2 type which is used for queries. 
 */ 
  typedef Input_Arrangement_2::Point_2 Point_2; 

  /*!
   Face_handle type of input Arrangement.
   */
  typedef Input_Arrangement_2::Face_handle Face_handle;

  /*!
   Halfedge_handle type of input Arrangement.
   */
  typedef Input_Arrangement_2::Halfedge_handle Halfedge_handle;

/// @}

/// \name Constructors 
/// @{

/*!
Default constructor creates an empty 'Preprocessed_visibility_2' object, that is not
attached to any  arrangement yet.
*/
Preprocessed_visibility_2();

/*! 
Constructs a `Preprocessed_visibility_2` object from a given `Input_Arrangement_2` and attaches it to `arr`.
*/ 
Preprocessed_visibility_2(const Input_Arrangement_2& arr); 

/// @}

/// \name functions 
/// @{

/*!
Returns whether an arrangement is attached to the visibility object
*/
  bool is_attached();

/*!
Attaches the given arrangement to the visibility object
*/
  void attach(const Input_Arrangement_2 &arr);

/*!
Detaches the arrangement from the visibility object it is currently attached to
*/
  void detach ();

/*!
Access to the attached arrangement
*/
  const Input_Arrangement_2& arr();

/*! 
Computes the visibility region for the given query point `q` in the
face `f` of the arrangement that is attached to the visibility object. 
The visibility region of `q` will be stored in `out_arr`.
\param out_arr is the output arrangement 
\pre `f` is a face of  this->arr()
\pre q is in the interior or on the foundary of the given face `f`
\return the face handle to the face in `out_arr` that represents the visibility region
*/ 
  Face_handle visibility_region(const Point_2& q, const Face& face, Output_Arrangement_2& out_arr); 

/*! 
Computes for the given query point `q` the visibility region that is on the side of `halfedge`. 
The visibility region of `q` will be stored in `out_arr`.
\param out_arr is the output arrangement  
\pre half_edge is a half edge of  this->arr()
\pre q is on halfedge
\return the face handle to the face in `out_arr` that represents the visibility region
*/ 
  Face_handle visibility_region(const Point_2& q, const Halfedge& halfedge, Output_Arrangement_2& out_arr); 

/// @}

}; /* end Visibility_2 */
}  /* namespace CGAL */
