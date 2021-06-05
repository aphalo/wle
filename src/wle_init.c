#include <R_ext/RS.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
  Check these declarations against the C/Fortran source code.
*/

/* .Fortran calls */
extern void F77_NAME(dennormu)(void *, void *, void *, void *, void *);
extern void F77_NAME(mleaic)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(mlecp)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(mlecv)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(mlecvone)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(mlewrpno)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(step)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wleaic)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wleaicfast)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlecp)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlecv)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlecvone)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlegamma)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wleinvga)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlenmix)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlenorm)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlenormmulti)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wleonestepfix)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wleregfix)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlew)(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wlew2)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wstep)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void F77_NAME(wwlecv)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_FortranMethodDef FortranEntries[] = {
  {"dennormu",      (DL_FUNC) &F77_NAME(dennormu),       5},
  {"mleaic",        (DL_FUNC) &F77_NAME(mleaic),        13},
  {"mlecp",         (DL_FUNC) &F77_NAME(mlecp),         12},
  {"mlecv",         (DL_FUNC) &F77_NAME(mlecv),         10},
  {"mlecvone",      (DL_FUNC) &F77_NAME(mlecvone),      10},
  {"mlewrpno",      (DL_FUNC) &F77_NAME(mlewrpno),      10},
  {"step",          (DL_FUNC) &F77_NAME(step),          12},
  {"wleaic",        (DL_FUNC) &F77_NAME(wleaic),        26},
  {"wleaicfast",    (DL_FUNC) &F77_NAME(wleaicfast),    25},
  {"wlecp",         (DL_FUNC) &F77_NAME(wlecp),         26},
  {"wlecv",         (DL_FUNC) &F77_NAME(wlecv),         26},
  {"wlecvone",      (DL_FUNC) &F77_NAME(wlecvone),      11},
  {"wlegamma",      (DL_FUNC) &F77_NAME(wlegamma),      16},
  {"wleinvga",      (DL_FUNC) &F77_NAME(wleinvga),      16},
  {"wlenmix",       (DL_FUNC) &F77_NAME(wlenmix),       26},
  {"wlenorm",       (DL_FUNC) &F77_NAME(wlenorm),       21},
  {"wlenormmulti",  (DL_FUNC) &F77_NAME(wlenormmulti),  21},
  {"wleonestepfix", (DL_FUNC) &F77_NAME(wleonestepfix), 19},
  {"wleregfix",     (DL_FUNC) &F77_NAME(wleregfix),     25},
  {"wlew",          (DL_FUNC) &F77_NAME(wlew),           9},
  {"wlew2",         (DL_FUNC) &F77_NAME(wlew2),         11},
  {"wstep",         (DL_FUNC) &F77_NAME(wstep),         30},
  {"wwlecv",        (DL_FUNC) &F77_NAME(wwlecv),        26},
  {NULL, NULL, 0}
};

void R_init_wle(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
