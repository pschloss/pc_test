#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int addition(const NumericVector& values){

  int total = 0;

  for(int i = 0; i < values.size(); i++){
    total += values[i];
  }

  return total;
}
