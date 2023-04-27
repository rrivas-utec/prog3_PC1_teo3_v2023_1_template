//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void question_11() {
    Multiplies<int> m1("1 20 3 4 5 10 15", 5);
    auto m2 = m1;
    for (int i = 0; i < m2.size(); ++i)
        cout << m2[i] << " "; // 20 5 10 15
}

static void question_12() {
    Multiplies<int> m1("1 20 3 4 5 10 15", 5);
    auto m2 = m1;
    for (auto ptr = m2.begin(); ptr != m2.end(); ++ptr)
        cout << *ptr << " "; // 20 5 10 15
    cout << endl;
}

static void question_13() {
    Multiplies<double> m1("1 20 3 4 5 10 15", 5);
    auto m2 = m1;
    double arr[] = {10, 20, 3};
    m2 = m2 ^ arr;
    for (auto ptr = m2.begin(); ptr != m2.end(); ++ptr)
        cout << *ptr << " ";
    cout << endl;
}

static void question_14() {
    Multiplies<int> m1("1 20 3 4 5 10 15", 5);
    Multiplies<int> m3("20 1 2 3", 5);
    auto m2 = m1;
    int arr[] = {10, 20, 3};
    m2 = m2 ^ arr;
    for (auto ptr = m2.begin(); ptr != m2.end(); ++ptr)
        cout << *ptr << " ";
    cout << endl;
    auto m4 = m3 ^ m2;
    for (auto ptr = m4.begin(); ptr != m4.end(); ++ptr)
        cout << *ptr << " ";
    cout << endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_11.in", question_11);
}

TEST_CASE("Question #1.2") {
    execute_test("test_12.in", question_12);
}

TEST_CASE("Question #1.3") {
    execute_test("test_13.in", question_13);
}

TEST_CASE("Question #1.4") {
    execute_test("test_14.in", question_14);
}