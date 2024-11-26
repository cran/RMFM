// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// VB_tLMFMcpp
Rcpp::List VB_tLMFMcpp(const arma::cube& Y, const arma::cube& M_int, const arma::cube& S1_int, const arma::cube& S2_int, const arma::mat& mu_int, const arma::mat& R_int, const arma::mat& C_int, const arma::vec& Lam1_int, const arma::vec& Lam2_int, const double& nu_int, const bool& add_IC_iter, const double& epsELBO, const int& maxIter, const bool& verbose, const bool& cal_eigs);
RcppExport SEXP _RMFM_VB_tLMFMcpp(SEXP YSEXP, SEXP M_intSEXP, SEXP S1_intSEXP, SEXP S2_intSEXP, SEXP mu_intSEXP, SEXP R_intSEXP, SEXP C_intSEXP, SEXP Lam1_intSEXP, SEXP Lam2_intSEXP, SEXP nu_intSEXP, SEXP add_IC_iterSEXP, SEXP epsELBOSEXP, SEXP maxIterSEXP, SEXP verboseSEXP, SEXP cal_eigsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type M_int(M_intSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type S1_int(S1_intSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type S2_int(S2_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mu_int(mu_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R_int(R_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C_int(C_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Lam1_int(Lam1_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Lam2_int(Lam2_intSEXP);
    Rcpp::traits::input_parameter< const double& >::type nu_int(nu_intSEXP);
    Rcpp::traits::input_parameter< const bool& >::type add_IC_iter(add_IC_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsELBO(epsELBOSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool& >::type cal_eigs(cal_eigsSEXP);
    rcpp_result_gen = Rcpp::wrap(VB_tLMFMcpp(Y, M_int, S1_int, S2_int, mu_int, R_int, C_int, Lam1_int, Lam2_int, nu_int, add_IC_iter, epsELBO, maxIter, verbose, cal_eigs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RMFM_VB_tLMFMcpp", (DL_FUNC) &_RMFM_VB_tLMFMcpp, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_RMFM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}