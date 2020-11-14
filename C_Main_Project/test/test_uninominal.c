#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <uninominal.h>
#define PROJECT_NAME    "Uninominal"

/* Prototypes for all the test functions */
int no_of_votes(int vote1, int vote2);
int adding_candidates(int candidate1, int candidate2);
int no_of_voters(int voters1, int voters2);
int no_of_candidates(int candidates1, int candidates2);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "voting", test_no_of_votes);
  CU_add_test(suite, "newcandidate", test_adding_candidates);
  CU_add_test(suite, "listofvoters", test_no_of_voters);
  CU_add_test(suite, "listofcandidates", test_no_of_candidates);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_no_of_votes(void) {
  CU_ASSERT(30 == no_of_votes(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == no_of_votes(750, 7500));
}

void test_adding_candidates(void) {
  CU_ASSERT(3 == adding_candidates(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == adding_candidates(1000, 900));
}

void test_no_of_voters(void) {
  CU_ASSERT(1 == no_of_voters(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == no_of_voters(2, 5));
}

void test_no_of_candidates(void) {
  CU_ASSERT(1 == no_of_candidates(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == no_of_candidates(2, 2));
}