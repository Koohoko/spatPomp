// -*- C++ -*-

#ifndef _SPATPOMP3_DEFINES_H_
#define _SPATPOMP3_DEFINES_H_

#include <R.h>
#include <Rmath.h>
#include <Rdefines.h>
#include <Rinternals.h>
#include "pomp_defines.h"

typedef void spatpomp_unit_measure_model_density (double *lik, const double *y, const double *x, const double *p, int give_log,
                                         const int *obsindex, const int *stateindex, const int *parindex, const int *covindex,
                                         int ncovars, const double *covars, double t, double u);

load_stack_incr_t *lsi;
load_stack_decr_t *lsd;
pomp_fun_handler_t *pfh;
lookup_in_table_t *lit;
table_lookup_t *tl;
make_covariate_table_t *mct;
set_pomp_userdata_t *spu;
unset_pomp_userdata_t *upu;
//typedef SEXP(*psp_load_stack_incr)();
//typedef SEXP(*psp_load_stack_decr)();
//typedef SEXP(*psp_pomp_fun_handler)();

//typedef SEXP(*psp_lookup_in_table)();
//typedef void(*psp_table_lookup)();
//typedef struct lookup_table(*psp_make_covariate_table)();

//psp_load_stack_incr sp_load_stack_incr;
//psp_load_stack_decr sp_load_stack_decr;
//psp_pomp_fun_handler sp_pomp_fun_handler;

//psp_lookup_in_table sp_lookup_in_table;
//psp_table_lookup sp_table_lookup;
//psp_make_covariate_table sp_make_covariate_table;

//unit_dmeasure.c
extern SEXP do_unit_dmeasure(SEXP object, SEXP y, SEXP x, SEXP times, SEXP units, SEXP params, SEXP log, SEXP gnsi);

//userdata.c
//extern void set_pomp_userdata(SEXP userdata);
//extern void unset_pomp_userdata(void);

// resample.c
extern void nosort_resamp(int nw, double *w, int np, int *p, int offset);
extern SEXP systematic_resampling(SEXP weights);

#endif
