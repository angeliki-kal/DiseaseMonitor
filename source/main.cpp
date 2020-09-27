#include "ReadFile.hpp"
#include "PatientRecord.hpp"
#include "RecordsHashTable.hpp"
#include "CommandLineInterface.hpp"
#include "MaxHeap.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;


int main(int argc, char** argv){
  ReadCmdArgs(argc, argv);
  HashTable disease_ht(h1, bucketSize), country_ht(h2, bucketSize);
  RecordsHashTable records_ht(h1, bucketSize);

  ReadPatientRecordFile(patientRecordsFile, records_ht, disease_ht, country_ht);

  //CommandLineInterface for user
	CommandLineInterface(records_ht, disease_ht, country_ht);

  // MaxHeap h("bla", 4);
  // cout << "-------------" << endl;
  // h.insert("asd", 2);
  // cout << "-------------" << endl;
  // h.insert("asd", 8);
  // cout << "-------------" << endl;
  // h.insert("asd", 1);
  // cout << "-------------" << endl;
  // h.insert("asd", 3);
  // cout << "-------------" << endl;
  // h.insert("asd", 0);
  //   cout << "-------print maxes------" << endl;
  // int k = 5;
  // for(int i=0; i<k; i++) {
  //   MaxHeapNode* max = h.getMax();
  //   cout << max->value << endl;
  //   delete max;
  // }

  return 0;
}
