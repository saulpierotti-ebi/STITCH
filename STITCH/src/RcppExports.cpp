// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_header_using_SeqLib
std::string get_header_using_SeqLib(std::string file_name);
RcppExport SEXP _STITCH_get_header_using_SeqLib(SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_header_using_SeqLib(file_name));
    return rcpp_result_gen;
END_RCPP
}
// get_read_span
int get_read_span(std::vector<int> cigarLengthVec, std::vector<std::string> cigarTypeVec);
RcppExport SEXP _STITCH_get_read_span(SEXP cigarLengthVecSEXP, SEXP cigarTypeVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cigarLengthVec(cigarLengthVecSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type cigarTypeVec(cigarTypeVecSEXP);
    rcpp_result_gen = Rcpp::wrap(get_read_span(cigarLengthVec, cigarTypeVec));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cigar_split_many
Rcpp::List cpp_cigar_split_many(std::vector <std::string> strings);
RcppExport SEXP _STITCH_cpp_cigar_split_many(SEXP stringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector <std::string> >::type strings(stringsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cigar_split_many(strings));
    return rcpp_result_gen;
END_RCPP
}
// cpp_deal_with_soft_clipped_bases
Rcpp::List cpp_deal_with_soft_clipped_bases(Rcpp::List splitCigarRead, bool useSoftClippedBases, int posRead, std::string seqRead, std::string qualRead);
RcppExport SEXP _STITCH_cpp_deal_with_soft_clipped_bases(SEXP splitCigarReadSEXP, SEXP useSoftClippedBasesSEXP, SEXP posReadSEXP, SEXP seqReadSEXP, SEXP qualReadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type splitCigarRead(splitCigarReadSEXP);
    Rcpp::traits::input_parameter< bool >::type useSoftClippedBases(useSoftClippedBasesSEXP);
    Rcpp::traits::input_parameter< int >::type posRead(posReadSEXP);
    Rcpp::traits::input_parameter< std::string >::type seqRead(seqReadSEXP);
    Rcpp::traits::input_parameter< std::string >::type qualRead(qualReadSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_deal_with_soft_clipped_bases(splitCigarRead, useSoftClippedBases, posRead, seqRead, qualRead));
    return rcpp_result_gen;
END_RCPP
}
// get_sample_data_from_SeqLib
Rcpp::List get_sample_data_from_SeqLib(std::string region, std::string file_name, std::string reference);
RcppExport SEXP _STITCH_get_sample_data_from_SeqLib(SEXP regionSEXP, SEXP file_nameSEXP, SEXP referenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type reference(referenceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sample_data_from_SeqLib(region, file_name, reference));
    return rcpp_result_gen;
END_RCPP
}
// get_sampleReadsRaw_from_SeqLib
Rcpp::List get_sampleReadsRaw_from_SeqLib(const bool useSoftClippedBases, const int bqFilter, const int iSizeUpperLimit, const std::vector<std::string> ref, const std::vector<std::string> alt, const int nSNPs, const std::vector<int> L, std::string region, std::string file_name, std::string reference);
RcppExport SEXP _STITCH_get_sampleReadsRaw_from_SeqLib(SEXP useSoftClippedBasesSEXP, SEXP bqFilterSEXP, SEXP iSizeUpperLimitSEXP, SEXP refSEXP, SEXP altSEXP, SEXP nSNPsSEXP, SEXP LSEXP, SEXP regionSEXP, SEXP file_nameSEXP, SEXP referenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const bool >::type useSoftClippedBases(useSoftClippedBasesSEXP);
    Rcpp::traits::input_parameter< const int >::type bqFilter(bqFilterSEXP);
    Rcpp::traits::input_parameter< const int >::type iSizeUpperLimit(iSizeUpperLimitSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type ref(refSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type alt(altSEXP);
    Rcpp::traits::input_parameter< const int >::type nSNPs(nSNPsSEXP);
    Rcpp::traits::input_parameter< const std::vector<int> >::type L(LSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_name(file_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type reference(referenceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sampleReadsRaw_from_SeqLib(useSoftClippedBases, bqFilter, iSizeUpperLimit, ref, alt, nSNPs, L, region, file_name, reference));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_sampleReads_from_hap
Rcpp::List rcpp_make_sampleReads_from_hap(const Rcpp::IntegerVector non_NA_cols, const int reference_phred, const Rcpp::IntegerVector reference_hap);
RcppExport SEXP _STITCH_rcpp_make_sampleReads_from_hap(SEXP non_NA_colsSEXP, SEXP reference_phredSEXP, SEXP reference_hapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type non_NA_cols(non_NA_colsSEXP);
    Rcpp::traits::input_parameter< const int >::type reference_phred(reference_phredSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type reference_hap(reference_hapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_sampleReads_from_hap(non_NA_cols, reference_phred, reference_hap));
    return rcpp_result_gen;
END_RCPP
}
// increment2N
Rcpp::NumericVector increment2N(int yT, int xT, Rcpp::NumericVector y, Rcpp::NumericVector z);
RcppExport SEXP _STITCH_increment2N(SEXP yTSEXP, SEXP xTSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type yT(yTSEXP);
    Rcpp::traits::input_parameter< int >::type xT(xTSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(increment2N(yT, xT, y, z));
    return rcpp_result_gen;
END_RCPP
}
// pseudoHaploid_update_model_9
Rcpp::List pseudoHaploid_update_model_9(const arma::vec& pRgivenH1, const arma::vec& pRgivenH2, const arma::mat& eMatHap_t1, const arma::mat& eMatHap_t2, const arma::mat& gamma_t1, const arma::mat& gamma_t2, const int K, const arma::ivec& srp);
RcppExport SEXP _STITCH_pseudoHaploid_update_model_9(SEXP pRgivenH1SEXP, SEXP pRgivenH2SEXP, SEXP eMatHap_t1SEXP, SEXP eMatHap_t2SEXP, SEXP gamma_t1SEXP, SEXP gamma_t2SEXP, SEXP KSEXP, SEXP srpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH1(pRgivenH1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH2(pRgivenH2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eMatHap_t1(eMatHap_t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eMatHap_t2(eMatHap_t2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_t1(gamma_t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_t2(gamma_t2SEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type srp(srpSEXP);
    rcpp_result_gen = Rcpp::wrap(pseudoHaploid_update_model_9(pRgivenH1, pRgivenH2, eMatHap_t1, eMatHap_t2, gamma_t1, gamma_t2, K, srp));
    return rcpp_result_gen;
END_RCPP
}
// get_random_values
Rcpp::NumericVector get_random_values(int N);
RcppExport SEXP _STITCH_get_random_values(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(get_random_values(N));
    return rcpp_result_gen;
END_RCPP
}
// sample_diploid_path
arma::imat sample_diploid_path(const arma::mat& alphaHat_t, const arma::mat& transMatRate_t_D, const arma::mat& eMat_t, const arma::mat& alphaMat_t, const int T, const int K, const arma::rowvec& c);
RcppExport SEXP _STITCH_sample_diploid_path(SEXP alphaHat_tSEXP, SEXP transMatRate_t_DSEXP, SEXP eMat_tSEXP, SEXP alphaMat_tSEXP, SEXP TSEXP, SEXP KSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaHat_t(alphaHat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t_D(transMatRate_t_DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eMat_t(eMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const int >::type T(TSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_diploid_path(alphaHat_t, transMatRate_t_D, eMat_t, alphaMat_t, T, K, c));
    return rcpp_result_gen;
END_RCPP
}
// make_and_bound_eMat_t
arma::mat make_and_bound_eMat_t(const arma::mat& eMatHap_t, const Rcpp::List& sampleReads, const int& nReads, const int& K, const int& T, const double& maxEmissionMatrixDifference, const int run_fb_grid_offset);
RcppExport SEXP _STITCH_make_and_bound_eMat_t(SEXP eMatHap_tSEXP, SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP KSEXP, SEXP TSEXP, SEXP maxEmissionMatrixDifferenceSEXP, SEXP run_fb_grid_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type eMatHap_t(eMatHap_tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int& >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxEmissionMatrixDifference(maxEmissionMatrixDifferenceSEXP);
    Rcpp::traits::input_parameter< const int >::type run_fb_grid_offset(run_fb_grid_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(make_and_bound_eMat_t(eMatHap_t, sampleReads, nReads, K, T, maxEmissionMatrixDifference, run_fb_grid_offset));
    return rcpp_result_gen;
END_RCPP
}
// forwardBackwardDiploid
Rcpp::List forwardBackwardDiploid(const Rcpp::List& sampleReads, const int nReads, const arma::vec& pi, const arma::mat& transMatRate_t_D, const arma::mat& alphaMat_t, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const double maxEmissionMatrixDifference, const int whatToReturn, const int Jmax, const int suppressOutput, const arma::mat& blocks_for_output, const bool generate_fb_snp_offsets, const Rcpp::NumericVector alphaStart, const Rcpp::NumericVector betaEnd, const int return_a_sampled_path, const bool run_fb_subset, const int run_fb_grid_offset);
RcppExport SEXP _STITCH_forwardBackwardDiploid(SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP piSEXP, SEXP transMatRate_t_DSEXP, SEXP alphaMat_tSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP maxEmissionMatrixDifferenceSEXP, SEXP whatToReturnSEXP, SEXP JmaxSEXP, SEXP suppressOutputSEXP, SEXP blocks_for_outputSEXP, SEXP generate_fb_snp_offsetsSEXP, SEXP alphaStartSEXP, SEXP betaEndSEXP, SEXP return_a_sampled_pathSEXP, SEXP run_fb_subsetSEXP, SEXP run_fb_grid_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t_D(transMatRate_t_DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const double >::type maxEmissionMatrixDifference(maxEmissionMatrixDifferenceSEXP);
    Rcpp::traits::input_parameter< const int >::type whatToReturn(whatToReturnSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const int >::type suppressOutput(suppressOutputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blocks_for_output(blocks_for_outputSEXP);
    Rcpp::traits::input_parameter< const bool >::type generate_fb_snp_offsets(generate_fb_snp_offsetsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type alphaStart(alphaStartSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type betaEnd(betaEndSEXP);
    Rcpp::traits::input_parameter< const int >::type return_a_sampled_path(return_a_sampled_pathSEXP);
    Rcpp::traits::input_parameter< const bool >::type run_fb_subset(run_fb_subsetSEXP);
    Rcpp::traits::input_parameter< const int >::type run_fb_grid_offset(run_fb_grid_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardBackwardDiploid(sampleReads, nReads, pi, transMatRate_t_D, alphaMat_t, eHaps_t, maxDifferenceBetweenReads, maxEmissionMatrixDifference, whatToReturn, Jmax, suppressOutput, blocks_for_output, generate_fb_snp_offsets, alphaStart, betaEnd, return_a_sampled_path, run_fb_subset, run_fb_grid_offset));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_calculate_fbd_dosage
Rcpp::List rcpp_calculate_fbd_dosage(const arma::mat& eHapsCurrent_t, const arma::mat& gamma_t, const Rcpp::IntegerVector grid, const int snp_start_1_based, const int snp_end_1_based, const int grid_offset);
RcppExport SEXP _STITCH_rcpp_calculate_fbd_dosage(SEXP eHapsCurrent_tSEXP, SEXP gamma_tSEXP, SEXP gridSEXP, SEXP snp_start_1_basedSEXP, SEXP snp_end_1_basedSEXP, SEXP grid_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type eHapsCurrent_t(eHapsCurrent_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_t(gamma_tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type grid(gridSEXP);
    Rcpp::traits::input_parameter< const int >::type snp_start_1_based(snp_start_1_basedSEXP);
    Rcpp::traits::input_parameter< const int >::type snp_end_1_based(snp_end_1_basedSEXP);
    Rcpp::traits::input_parameter< const int >::type grid_offset(grid_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_calculate_fbd_dosage(eHapsCurrent_t, gamma_t, grid, snp_start_1_based, snp_end_1_based, grid_offset));
    return rcpp_result_gen;
END_RCPP
}
// forwardBackwardHaploid
Rcpp::List forwardBackwardHaploid(const Rcpp::List& sampleReads, const int nReads, const arma::vec pi, const arma::mat& transMatRate_t_H, const arma::mat& alphaMat_t, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const double maxEmissionMatrixDifference, const int whatToReturn, const int Jmax, const int suppressOutput, const int model, const arma::vec& pRgivenH1, const arma::vec& pRgivenH2, const bool run_pseudo_haploid, const arma::mat& blocks_for_output, const bool generate_fb_snp_offsets, const Rcpp::NumericVector alphaStart, const Rcpp::NumericVector betaEnd, const bool run_fb_subset, const int run_fb_grid_offset);
RcppExport SEXP _STITCH_forwardBackwardHaploid(SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP piSEXP, SEXP transMatRate_t_HSEXP, SEXP alphaMat_tSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP maxEmissionMatrixDifferenceSEXP, SEXP whatToReturnSEXP, SEXP JmaxSEXP, SEXP suppressOutputSEXP, SEXP modelSEXP, SEXP pRgivenH1SEXP, SEXP pRgivenH2SEXP, SEXP run_pseudo_haploidSEXP, SEXP blocks_for_outputSEXP, SEXP generate_fb_snp_offsetsSEXP, SEXP alphaStartSEXP, SEXP betaEndSEXP, SEXP run_fb_subsetSEXP, SEXP run_fb_grid_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t_H(transMatRate_t_HSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const double >::type maxEmissionMatrixDifference(maxEmissionMatrixDifferenceSEXP);
    Rcpp::traits::input_parameter< const int >::type whatToReturn(whatToReturnSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const int >::type suppressOutput(suppressOutputSEXP);
    Rcpp::traits::input_parameter< const int >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH1(pRgivenH1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH2(pRgivenH2SEXP);
    Rcpp::traits::input_parameter< const bool >::type run_pseudo_haploid(run_pseudo_haploidSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blocks_for_output(blocks_for_outputSEXP);
    Rcpp::traits::input_parameter< const bool >::type generate_fb_snp_offsets(generate_fb_snp_offsetsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type alphaStart(alphaStartSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type betaEnd(betaEndSEXP);
    Rcpp::traits::input_parameter< const bool >::type run_fb_subset(run_fb_subsetSEXP);
    Rcpp::traits::input_parameter< const int >::type run_fb_grid_offset(run_fb_grid_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardBackwardHaploid(sampleReads, nReads, pi, transMatRate_t_H, alphaMat_t, eHaps_t, maxDifferenceBetweenReads, maxEmissionMatrixDifference, whatToReturn, Jmax, suppressOutput, model, pRgivenH1, pRgivenH2, run_pseudo_haploid, blocks_for_output, generate_fb_snp_offsets, alphaStart, betaEnd, run_fb_subset, run_fb_grid_offset));
    return rcpp_result_gen;
END_RCPP
}
// cpp_read_reassign
List cpp_read_reassign(arma::ivec ord, arma::ivec qnameInteger_ord, Rcpp::List sampleReadsRaw, int verbose, arma::ivec readStart_ord, arma::ivec readEnd_ord, int iSizeUpperLimit);
RcppExport SEXP _STITCH_cpp_read_reassign(SEXP ordSEXP, SEXP qnameInteger_ordSEXP, SEXP sampleReadsRawSEXP, SEXP verboseSEXP, SEXP readStart_ordSEXP, SEXP readEnd_ordSEXP, SEXP iSizeUpperLimitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type qnameInteger_ord(qnameInteger_ordSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sampleReadsRaw(sampleReadsRawSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type readStart_ord(readStart_ordSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type readEnd_ord(readEnd_ordSEXP);
    Rcpp::traits::input_parameter< int >::type iSizeUpperLimit(iSizeUpperLimitSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_read_reassign(ord, qnameInteger_ord, sampleReadsRaw, verbose, readStart_ord, readEnd_ord, iSizeUpperLimit));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_update_pieces
Rcpp::List rcpp_get_update_pieces(arma::cube& gammaSum_t, arma::mat& alphaMatSum_t, Rcpp::NumericVector& priorSum, arma::mat& hapSum_t, const arma::mat& gammaK_t, const arma::cube& gammaUpdate_t, const arma::mat& jUpdate_t, const bool only_update_hapSum);
RcppExport SEXP _STITCH_rcpp_get_update_pieces(SEXP gammaSum_tSEXP, SEXP alphaMatSum_tSEXP, SEXP priorSumSEXP, SEXP hapSum_tSEXP, SEXP gammaK_tSEXP, SEXP gammaUpdate_tSEXP, SEXP jUpdate_tSEXP, SEXP only_update_hapSumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type gammaSum_t(gammaSum_tSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type alphaMatSum_t(alphaMatSum_tSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type priorSum(priorSumSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type hapSum_t(hapSum_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gammaK_t(gammaK_tSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type gammaUpdate_t(gammaUpdate_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type jUpdate_t(jUpdate_tSEXP);
    Rcpp::traits::input_parameter< const bool >::type only_update_hapSum(only_update_hapSumSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_update_pieces(gammaSum_t, alphaMatSum_t, priorSum, hapSum_t, gammaK_t, gammaUpdate_t, jUpdate_t, only_update_hapSum));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_eMatHap_t
arma::mat rcpp_make_eMatHap_t(const Rcpp::List& sampleReads, const int nReads, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int Jmax, arma::mat& eMatHapOri_t, const arma::vec& pRgivenH1, const arma::vec& pRgivenH2, const bool run_pseudo_haploid);
RcppExport SEXP _STITCH_rcpp_make_eMatHap_t(SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP JmaxSEXP, SEXP eMatHapOri_tSEXP, SEXP pRgivenH1SEXP, SEXP pRgivenH2SEXP, SEXP run_pseudo_haploidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type eMatHapOri_t(eMatHapOri_tSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH1(pRgivenH1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pRgivenH2(pRgivenH2SEXP);
    Rcpp::traits::input_parameter< const bool >::type run_pseudo_haploid(run_pseudo_haploidSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_eMatHap_t(sampleReads, nReads, eHaps_t, maxDifferenceBetweenReads, Jmax, eMatHapOri_t, pRgivenH1, pRgivenH2, run_pseudo_haploid));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_path
arma::ivec rcpp_sample_path(const arma::rowvec read_labels, const arma::mat eMatHap_t, const Rcpp::List& sampleReads, const int nReads, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int Jmax, const arma::vec pi, const arma::mat& transMatRate_t_H, const arma::mat& alphaMat_t);
RcppExport SEXP _STITCH_rcpp_sample_path(SEXP read_labelsSEXP, SEXP eMatHap_tSEXP, SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP JmaxSEXP, SEXP piSEXP, SEXP transMatRate_t_HSEXP, SEXP alphaMat_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec >::type read_labels(read_labelsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type eMatHap_t(eMatHap_tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t_H(transMatRate_t_HSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_path(read_labels, eMatHap_t, sampleReads, nReads, eHaps_t, maxDifferenceBetweenReads, Jmax, pi, transMatRate_t_H, alphaMat_t));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_multiple_paths
Rcpp::List rcpp_sample_multiple_paths(const int n_starts, const int n_its, const Rcpp::List& sampleReads, const int nReads, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int Jmax, const arma::vec pi, const arma::mat& transMatRate_t, const arma::mat& alphaMat_t, const arma::ivec& srp, const arma::ivec& sum_dosage_vec);
RcppExport SEXP _STITCH_rcpp_sample_multiple_paths(SEXP n_startsSEXP, SEXP n_itsSEXP, SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP JmaxSEXP, SEXP piSEXP, SEXP transMatRate_tSEXP, SEXP alphaMat_tSEXP, SEXP srpSEXP, SEXP sum_dosage_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_starts(n_startsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_its(n_itsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t(transMatRate_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type srp(srpSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type sum_dosage_vec(sum_dosage_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_multiple_paths(n_starts, n_its, sampleReads, nReads, eHaps_t, maxDifferenceBetweenReads, Jmax, pi, transMatRate_t, alphaMat_t, srp, sum_dosage_vec));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_calculate_many_likelihoods
arma::mat rcpp_calculate_many_likelihoods(const arma::mat swap_mat, const Rcpp::List reads_at_SNPs, const arma::mat eMatHap_t, const Rcpp::List& sampleReads, const int nReads, const arma::mat& eHaps_t, const double maxDifferenceBetweenReads, const int Jmax, const arma::vec pi, const arma::mat& transMatRate_t, const arma::mat& alphaMat_t);
RcppExport SEXP _STITCH_rcpp_calculate_many_likelihoods(SEXP swap_matSEXP, SEXP reads_at_SNPsSEXP, SEXP eMatHap_tSEXP, SEXP sampleReadsSEXP, SEXP nReadsSEXP, SEXP eHaps_tSEXP, SEXP maxDifferenceBetweenReadsSEXP, SEXP JmaxSEXP, SEXP piSEXP, SEXP transMatRate_tSEXP, SEXP alphaMat_tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type swap_mat(swap_matSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type reads_at_SNPs(reads_at_SNPsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type eMatHap_t(eMatHap_tSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sampleReads(sampleReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type nReads(nReadsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eHaps_t(eHaps_tSEXP);
    Rcpp::traits::input_parameter< const double >::type maxDifferenceBetweenReads(maxDifferenceBetweenReadsSEXP);
    Rcpp::traits::input_parameter< const int >::type Jmax(JmaxSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type transMatRate_t(transMatRate_tSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alphaMat_t(alphaMat_tSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_calculate_many_likelihoods(swap_mat, reads_at_SNPs, eMatHap_t, sampleReads, nReads, eHaps_t, maxDifferenceBetweenReads, Jmax, pi, transMatRate_t, alphaMat_t));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_smoothed_rate
Rcpp::NumericVector rcpp_make_smoothed_rate(const Rcpp::NumericVector& sigmaSum_unnormalized, const Rcpp::NumericVector& sigma_rate, const Rcpp::IntegerVector& L_grid, const Rcpp::IntegerVector& grid_distances, const int nGrids, const int shuffle_bin_radius, const bool verbose);
RcppExport SEXP _STITCH_rcpp_make_smoothed_rate(SEXP sigmaSum_unnormalizedSEXP, SEXP sigma_rateSEXP, SEXP L_gridSEXP, SEXP grid_distancesSEXP, SEXP nGridsSEXP, SEXP shuffle_bin_radiusSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sigmaSum_unnormalized(sigmaSum_unnormalizedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sigma_rate(sigma_rateSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type L_grid(L_gridSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type grid_distances(grid_distancesSEXP);
    Rcpp::traits::input_parameter< const int >::type nGrids(nGridsSEXP);
    Rcpp::traits::input_parameter< const int >::type shuffle_bin_radius(shuffle_bin_radiusSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_smoothed_rate(sigmaSum_unnormalized, sigma_rate, L_grid, grid_distances, nGrids, shuffle_bin_radius, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_calculate_hwe_p
Rcpp::NumericVector rcpp_calculate_hwe_p(const Rcpp::NumericVector reference_hap);
RcppExport SEXP _STITCH_rcpp_calculate_hwe_p(SEXP reference_hapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type reference_hap(reference_hapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_calculate_hwe_p(reference_hap));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_column_of_vcf
Rcpp::StringVector rcpp_make_column_of_vcf(const arma::mat& gp_t, const int use_read_proportions, const arma::mat& read_proportions);
RcppExport SEXP _STITCH_rcpp_make_column_of_vcf(SEXP gp_tSEXP, SEXP use_read_proportionsSEXP, SEXP read_proportionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type gp_t(gp_tSEXP);
    Rcpp::traits::input_parameter< const int >::type use_read_proportions(use_read_proportionsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type read_proportions(read_proportionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_column_of_vcf(gp_t, use_read_proportions, read_proportions));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_STITCH_get_header_using_SeqLib", (DL_FUNC) &_STITCH_get_header_using_SeqLib, 1},
    {"_STITCH_get_read_span", (DL_FUNC) &_STITCH_get_read_span, 2},
    {"_STITCH_cpp_cigar_split_many", (DL_FUNC) &_STITCH_cpp_cigar_split_many, 1},
    {"_STITCH_cpp_deal_with_soft_clipped_bases", (DL_FUNC) &_STITCH_cpp_deal_with_soft_clipped_bases, 5},
    {"_STITCH_get_sample_data_from_SeqLib", (DL_FUNC) &_STITCH_get_sample_data_from_SeqLib, 3},
    {"_STITCH_get_sampleReadsRaw_from_SeqLib", (DL_FUNC) &_STITCH_get_sampleReadsRaw_from_SeqLib, 10},
    {"_STITCH_rcpp_make_sampleReads_from_hap", (DL_FUNC) &_STITCH_rcpp_make_sampleReads_from_hap, 3},
    {"_STITCH_increment2N", (DL_FUNC) &_STITCH_increment2N, 4},
    {"_STITCH_pseudoHaploid_update_model_9", (DL_FUNC) &_STITCH_pseudoHaploid_update_model_9, 8},
    {"_STITCH_get_random_values", (DL_FUNC) &_STITCH_get_random_values, 1},
    {"_STITCH_sample_diploid_path", (DL_FUNC) &_STITCH_sample_diploid_path, 7},
    {"_STITCH_make_and_bound_eMat_t", (DL_FUNC) &_STITCH_make_and_bound_eMat_t, 7},
    {"_STITCH_forwardBackwardDiploid", (DL_FUNC) &_STITCH_forwardBackwardDiploid, 18},
    {"_STITCH_rcpp_calculate_fbd_dosage", (DL_FUNC) &_STITCH_rcpp_calculate_fbd_dosage, 6},
    {"_STITCH_forwardBackwardHaploid", (DL_FUNC) &_STITCH_forwardBackwardHaploid, 21},
    {"_STITCH_cpp_read_reassign", (DL_FUNC) &_STITCH_cpp_read_reassign, 7},
    {"_STITCH_rcpp_get_update_pieces", (DL_FUNC) &_STITCH_rcpp_get_update_pieces, 8},
    {"_STITCH_rcpp_make_eMatHap_t", (DL_FUNC) &_STITCH_rcpp_make_eMatHap_t, 9},
    {"_STITCH_rcpp_sample_path", (DL_FUNC) &_STITCH_rcpp_sample_path, 10},
    {"_STITCH_rcpp_sample_multiple_paths", (DL_FUNC) &_STITCH_rcpp_sample_multiple_paths, 12},
    {"_STITCH_rcpp_calculate_many_likelihoods", (DL_FUNC) &_STITCH_rcpp_calculate_many_likelihoods, 11},
    {"_STITCH_rcpp_make_smoothed_rate", (DL_FUNC) &_STITCH_rcpp_make_smoothed_rate, 7},
    {"_STITCH_rcpp_calculate_hwe_p", (DL_FUNC) &_STITCH_rcpp_calculate_hwe_p, 1},
    {"_STITCH_rcpp_make_column_of_vcf", (DL_FUNC) &_STITCH_rcpp_make_column_of_vcf, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_STITCH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
