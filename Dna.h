/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment1

This file lists out all variables of the data sequence and all the methods utilized.
**/

#include <iostream>

using namespace std;

class Dna
{
private:
  float numA, numT, numC, numG;
  float numAA, numAC, numAT, numAG;
  float numCA, numCC, numCT, numCG;
  float numTA, numTC, numTT, numTG;
  float numGA, numGC, numGT, numGG;
  float sum;
  float sumBigrams;
  double mean;
  double variance;
  double sd;

  int numLines;

  void countNucleotides(string line);
  void countBigrams(string line, int i);
  float calcSum();
  float calcSumBigrams();
  double calcMean();
  double calcVariance(string file);
  double calcSd();

public:
  Dna();
  ~Dna();

  void readFile(string file);
  void outputData(string fileName);
  int generateLength();
};
