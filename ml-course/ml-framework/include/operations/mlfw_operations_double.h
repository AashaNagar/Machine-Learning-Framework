
#ifndef __MLFW__OPERATIONS__DOUBLE__
#define __MLFW__OPERATIONS__DOUBLE__

mlfw_column_vec_double * mlfw_multiply_double_matrix_with_column_vector(mlfw_mat_double *left_matrix, mlfw_column_vec_double *right_vector);
mlfw_column_vec_double * mlfw_multiply_double_row_vector_with_column_vector(mlfw_row_vec_double * left_vector, mlfw_column_vec_double * right_vector);
mlfw_column_vec_double * mlfw_subtract_double_column_vector(mlfw_column_vec_double * left_vector, mlfw_column_vec_double * right_vector);

mlfw_column_vec_double * mlfw_multiply_double_scaler_with_column_vector(double scaler_value,mlfw_column_vec_double *vector);

#endif
