#ifndef __MLFW__VEC__DOUBLE__
#define __MLFW__VEC__DOUBLE__
struct __mlfw_column_vec_double;
struct __mlfw_row_vec_double;
typedef struct __mlfw_column_vec_double mlfw_column_vec_double;
typedef struct __mlfw_row_vec_double mlfw_row_vec_double;


//column vector functio prototype
mlfw_column_vec_double * mlfw_column_vec_double_create_new(dimensions_t size);
void mlfw_column_vec_double_destroy(mlfw_column_vec_double *vector);
double mlfw_column_vec_double_get(mlfw_column_vec_double *vector,index_t index);
void mlfw_column_vec_double_set(mlfw_column_vec_double *vector,index_t index,double value);
mlfw_column_vec_double * mlfw_column_vec_double_create_new_filled(dimensions_t size,double value);
mlfw_row_vec_double* mlfw_column_vec_double_transpose(mlfw_column_vec_double *vector);
dimensions_t mlfw_column_vec_double_get_size(mlfw_column_vec_double *vector);

//row vector function prototype
mlfw_row_vec_double * mlfw_row_vec_double_create_new(dimensions_t size);
void mlfw_row_vec_double_destroy(mlfw_row_vec_double *vector);
double mlfw_row_vec_double_get(mlfw_row_vec_double *vector,index_t index);
void mlfw_row_vec_double_set(mlfw_row_vec_double *vector,index_t index,double value);

mlfw_row_vec_double * mlfw_row_vec_double_create_new_filled(dimensions_t size,double value);
mlfw_column_vec_double* mlfw_row_vec_double_transpose(mlfw_row_vec_double *vector);
dimensions_t mlfw_row_vec_double_get_size(mlfw_row_vec_double *vector);





#endif