//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <deque>
#include <vector>
#include "P2.h"
using namespace std;

static void question_21() {
    vector v1 = {1, 2, 3, 4};
    auto m1 = generate_matrix<3, 2>(v1);
    for (const auto& row: m1) {
        for (const auto& item: row)
            cout << setw(3) << item;
        cout << endl;
    }
}

static void question_22() {
    deque d1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque m1 = generate_matrix<3, 3>(d1);
    for (const auto& row: m1) {
        for (const auto& item: row)
            cout << setw(3) << item;
        cout << endl;
    }
}

TEST_CASE("Question #2.1") {
    execute_test("test_21.in", question_21);
}

TEST_CASE("Question #2.2") {
    execute_test("test_22.in", question_22);
}
