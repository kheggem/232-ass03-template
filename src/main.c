#ifndef UNITY_H
#define UNITY_H
#include "unity.h"
#endif

// ============================================================
// Declarations — implemented in test.c
// ============================================================cd
void test_swap_basic(void);
void test_swap_equal(void);
void test_find_last_basic(void);
void test_find_last_single(void);
void test_find_last_empty(void);
void test_link_three_chain(void);
void test_remove_middle_reconnects(void);
void test_remove_last_truncates(void);
void test_remove_first_isolates(void);
void test_swap_ptrs_redirects(void);
void test_swap_ptrs_values_unchanged(void);
void test_nullify_sets_null(void);
void test_nullify_value_unchanged(void);
void test_assign_bytes_first_and_last(void);
void test_assign_bytes_all(void);
void test_sum_chain_basic(void);
void test_sum_chain_single(void);
void test_sum_chain_null(void);

void setUp(void)    {}
void tearDown(void) {}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_swap_basic);
    RUN_TEST(test_swap_equal);
    RUN_TEST(test_find_last_basic);
    RUN_TEST(test_find_last_single);
    RUN_TEST(test_find_last_empty);
    RUN_TEST(test_link_three_chain);
    RUN_TEST(test_remove_middle_reconnects);
    RUN_TEST(test_remove_last_truncates);
    RUN_TEST(test_remove_first_isolates);
    RUN_TEST(test_swap_ptrs_redirects);
    RUN_TEST(test_swap_ptrs_values_unchanged);
    RUN_TEST(test_nullify_sets_null);
    RUN_TEST(test_nullify_value_unchanged);
    RUN_TEST(test_assign_bytes_first_and_last);
    RUN_TEST(test_assign_bytes_all);
    RUN_TEST(test_sum_chain_basic);
    RUN_TEST(test_sum_chain_single);
    RUN_TEST(test_sum_chain_null);

    return UNITY_END();
}

// ============================================================
//  SANDBOX
//  Add any manual experiments below.
//  This file is NOT used by CI.
// ============================================================