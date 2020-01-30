#include <stdlib.h>
#include "object.h"  // File with the CwC declaration of Object
#include "string.h"  // File with the String class
#include "array.h"    // File with the two list classes
#include <iostream>

void FAIL() {   exit(1);    }

void OK(const char* m) {
    std::cout << m << std::endl;
}

void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

// test Object equals
void test_obj_equal() {
  Object * s = new Object();
  size_t hash = s->hash_me_();
  Object * t = new Object();
  size_t same = t->hash_me_();
  t_false(s->equals(t));
  t_false(hash == same);
  t_false(s->hash() == t->hash());
  OK("test objects equal");
    
  delete s;
  delete t;
}

// test String equals
void test_str_equal() {
  String * s = new String("Hello");
  size_t hash = s->hash_me_();
  String * t = new String("Hello");
  size_t same = t->hash_me_();
  t_true(s->equals(t));
  t_true(hash == same);
  t_true(s->compare(t) == 0);
  OK("test string equal");
    
  delete s;
  delete t;
}

// test String concat
void test_str_concat() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  t_true(s->equals(s));
  t_false(s->equals(t));
  t_false(s->equals(u));
  t_false(s->compare(t) == 0);
  OK("test string concat");
    
  delete s;
  delete t;
  delete u;
}

// test void_back
void test_void_back() {
  String * s = new String("Hello");
  Array * l = new Array();
  l->push_back(s);
  t_true(l->get(0)->equals(s));
  t_true(l->length() == 1);
  OK("test void_back");
    
  delete s;
  delete l;
}

// test add
void test_add() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("Hi");
    Array * l = new Array();
    l->push_back(s);
    l->push_back(t);
    l->add(1, u);
    Array * l_expect = new Array();
    l_expect->push_back(s);
    l_expect->push_back(u);
    l_expect->push_back(t);
    t_true(l->length() == 3);
    t_true(l->equals(l_expect));
    OK("test add");
    
    delete s;
    delete t;
    delete u;
    delete l;
    delete l_expect;
}

// test str add
void test_str_add() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("Hi");
    StrArray * l = new StrArray();
    l->push_back(s);
    l->push_back(t);
    l->add(1, u);
    StrArray * l_expect = new StrArray();
    l_expect->push_back(s);
    l_expect->push_back(u);
    l_expect->push_back(t);
    t_true(l->length() == 3);
    t_true(l->equals(l_expect));
    OK("test str add");
    
    delete s;
    delete t;
    delete u;
    delete l;
    delete l_expect;
}

// test int add
void test_int_add() {
    int s = 0;
    int t = 1;
    int u = -9;
    IntArray * l = new IntArray();
    l->push_back(s);
    l->push_back(t);
    l->add(1, u);
    IntArray * l_expect = new IntArray();
    l_expect->push_back(s);
    l_expect->push_back(u);
    l_expect->push_back(t);
    t_true(l->length() == 3);
    t_true(l->equals(l_expect));
    OK("test int add");

    delete l;
    delete l_expect;
}

// test float add
void test_float_add() {
    float s = 0;
    float t = 1.2;
    float u = -9.7;
    FloatArray * l = new FloatArray();
    l->push_back(s);
    l->push_back(t);
    l->add(1, u);
    FloatArray * l_expect = new FloatArray();
    l_expect->push_back(s);
    l_expect->push_back(u);
    l_expect->push_back(t);
    t_true(l->length() == 3);
    t_true(l->equals(l_expect));
    OK("test float add");

    delete l;
    delete l_expect;
}

// test bool add
void test_bool_add() {
    bool s = 0;
    bool t = 1;
    bool u = 1;
    BoolArray * l = new BoolArray();
    l->push_back(s);
    l->push_back(t);
    l->add(1, u);
    BoolArray * l_expect = new BoolArray();
    l_expect->push_back(s);
    l_expect->push_back(u);
    l_expect->push_back(t);
    t_true(l->length() == 3);
    t_true(l->equals(l_expect));
    OK("test bool add");

    delete l;
    delete l_expect;
}

// test add at pos 0
void test_add_zero() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * l = new Array();
    l->push_back(t);
    l->add(0, s);
    Array * l_expect = new Array();
    l_expect->push_back(s);
    l_expect->push_back(t);
    t_true(l->length() == 2);
    t_true(l->equals(l_expect));
    OK("test add zero");
    
    delete s;
    delete t;
    delete l;
    delete l_expect;
}

// test add at pos 0
void test_str_add_zero() {
    String * s = new String("Hello");
    String * t = new String("World");
    StrArray * l = new StrArray();
    l->push_back(t);
    l->add(0, s);
    StrArray * l_expect = new StrArray();
    l_expect->push_back(s);
    l_expect->push_back(t);
    t_true(l->length() == 2);
    t_true(l->equals(l_expect));
    OK("test str add zero");
    
    delete s;
    delete t;
    delete l;
    delete l_expect;
}

// test add at pos 0
void test_int_add_zero() {
    int s = 6;
    int t = 7;
    IntArray * l = new IntArray();
    l->push_back(t);
    l->add(0, s);
    IntArray * l_expect = new IntArray();
    l_expect->push_back(s);
    l_expect->push_back(t);
    t_true(l->length() == 2);
    t_true(l->equals(l_expect));
    OK("test int add zero");
    
    delete l;
    delete l_expect;
}

// test add at pos 0
void test_float_add_zero() {
    float s = 4.6;
    float t = -3.7;
    FloatArray * l = new FloatArray();
    l->push_back(t);
    l->add(0, s);
    FloatArray * l_expect = new FloatArray();
    l_expect->push_back(s);
    l_expect->push_back(t);
    t_true(l->length() == 2);
    t_true(l->equals(l_expect));
    OK("test float add zero");
    
    delete l;
    delete l_expect;
}

// test add at pos 0
void test_bool_add_zero() {
    bool s = 0;
    bool t = 1;
    BoolArray * l = new BoolArray();
    l->push_back(t);
    l->add(0, s);
    BoolArray * l_expect = new BoolArray();
    l_expect->push_back(s);
    l_expect->push_back(t);
    t_true(l->length() == 2);
    t_true(l->equals(l_expect));
    OK("test bool add zero");
    
    delete l;
    delete l_expect;
}

// test add all
void test_add_all() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    String * u = new String("my");
    String * v = new String("beautiful");
    Array * add = new Array();
    add->push_back(u);
    add->push_back(v);
    original->add_all(1, add);
    Object * expected0 = original->get(0);
    Object * expected1 = original->get(1);
    Object * expected2 = original->get(2);
    Object * expected3 = original->get(3);
    t_true(expected0->equals(s));
    t_true(expected1->equals(u));
    t_true(expected2->equals(v));
    t_true(expected3->equals(t));
    t_true(original->length() == 4);
    OK("test add all");
    
    delete s;
    delete t;
    delete original;
    delete u;
    delete v;
    delete add;
}

// test add all
void test_str_add_all() {
    String * s = new String("Hello");
    String * t = new String("World");
    StrArray * original = new StrArray();
    original->push_back(s);
    original->push_back(t);
    String * u = new String("my");
    String * v = new String("beautiful");
    StrArray * add = new StrArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(1, add);
    String * expected0 = original->get(0);
    String * expected1 = original->get(1);
    String * expected2 = original->get(2);
    String * expected3 = original->get(3);
    t_true(expected0->equals(s));
    t_true(expected1->equals(u));
    t_true(expected2->equals(v));
    t_true(expected3->equals(t));
    t_true(original->length() == 4);
    OK("test str add all");
    
    delete s;
    delete t;
    delete original;
    delete u;
    delete v;
    delete add;
}

// test add all
void test_int_add_all() {
    int s = 46;
    int t = -3;
    IntArray * original = new IntArray();
    original->push_back(s);
    original->push_back(t);
    int u = 32;
    int v = 7;
    IntArray * add = new IntArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(1, add);
    int expected0 = original->get(0);
    int expected1 = original->get(1);
    int expected2 = original->get(2);
    int expected3 = original->get(3);
    t_true(expected0 == s);
    t_true(expected1 == u);
    t_true(expected2 == v);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test int add all");
    
    delete original;
    delete add;
}

// test add all
void test_float_add_all() {
    float s = 46.3;
    float t = -3.5;
    FloatArray * original = new FloatArray();
    original->push_back(s);
    original->push_back(t);
    float u = 32;
    float v = 7.8;
    FloatArray * add = new FloatArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(1, add);
    float expected0 = original->get(0);
    float expected1 = original->get(1);
    float expected2 = original->get(2);
    float expected3 = original->get(3);
    t_true(expected0 == s);
    t_true(expected1 == u);
    t_true(expected2 == v);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test float add all");
    
    delete original;
    delete add;
}

// test add all
void test_bool_add_all() {
    bool s = 1;
    bool t = 0;
    BoolArray * original = new BoolArray();
    original->push_back(s);
    original->push_back(t);
    bool u = 1;
    bool v = 1;
    BoolArray * add = new BoolArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(1, add);
    bool expected0 = original->get(0);
    bool expected1 = original->get(1);
    bool expected2 = original->get(2);
    bool expected3 = original->get(3);
    t_true(expected0 == s);
    t_true(expected1 == u);
    t_true(expected2 == v);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test bool add all");
    
    delete original;
    delete add;
}

// test add all at pos 0
void test_add_all_zero() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    String * u = new String("my");
    String * v = new String("beautiful");
    Array * add = new Array();
    add->push_back(u);
    add->push_back(v);
    original->add_all(0, add);
    Object * expected0 = original->get(0);
    Object * expected1 = original->get(1);
    Object * expected2 = original->get(2);
    Object * expected3 = original->get(3);
    t_true(expected0->equals(u));
    t_true(expected1->equals(v));
    t_true(expected2->equals(s));
    t_true(expected3->equals(t));
    t_true(original->length() == 4);
    OK("test add all 0");
    
    delete s;
    delete t;
    delete original;
    delete u;
    delete v;
    delete add;
}

// test add all at pos 0
void test_str_add_all_zero() {
    String * s = new String("Hello");
    String * t = new String("World");
    StrArray * original = new StrArray();
    original->push_back(s);
    original->push_back(t);
    String * u = new String("my");
    String * v = new String("beautiful");
    StrArray * add = new StrArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(0, add);
    String * expected0 = original->get(0);
    String * expected1 = original->get(1);
    String * expected2 = original->get(2);
    String * expected3 = original->get(3);
    t_true(expected0->equals(u));
    t_true(expected1->equals(v));
    t_true(expected2->equals(s));
    t_true(expected3->equals(t));
    t_true(original->length() == 4);
    OK("test str add all 0");
    
    delete s;
    delete t;
    delete original;
    delete u;
    delete v;
    delete add;
}

// test add all at pos 0
void test_int_add_all_zero() {
    int s = 78;
    int t = 9
    IntArray * original = new IntArray();
    original->push_back(s);
    original->push_back(t);
    int u = 16;
    int v = 73
    IntArray * add = new IntArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(0, add);
    int expected0 = original->get(0);
    int expected1 = original->get(1);
    int expected2 = original->get(2);
    int expected3 = original->get(3);
    t_true(expected0 == u);
    t_true(expected1 == v);
    t_true(expected2 == s);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test int add all 0");
    
    delete original;
    delete add;
}

// test add all at pos 0
void test_float_add_all_zero() {
    float s = 78.4;
    float t = 9;
    FloatArray * original = new FloatArray();
    original->push_back(s);
    original->push_back(t);
    float u = -16.2;
    float v = 73.2;
    FloatArray * add = new FloatArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(0, add);
    float expected0 = original->get(0);
    float expected1 = original->get(1);
    float expected2 = original->get(2);
    float expected3 = original->get(3);
    t_true(expected0 == u);
    t_true(expected1 == v);
    t_true(expected2 == s);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test float add all 0");
    
    delete original;
    delete add;
}

// test add all at pos 0
void test_bool_add_all_zero() {
    bool s = 0;
    bool t = 0;
    BoolArray * original = new BoolArray();
    original->push_back(s);
    original->push_back(t);
    bool u = 1;
    bool v = 0;
    BoolArray * add = new BoolArray();
    add->push_back(u);
    add->push_back(v);
    original->add_all(0, add);
    bool expected0 = original->get(0);
    bool expected1 = original->get(1);
    bool expected2 = original->get(2);
    bool expected3 = original->get(3);
    t_true(expected0 == u);
    t_true(expected1 == v);
    t_true(expected2 == s);
    t_true(expected3 == t);
    t_true(original->length() == 4);
    OK("test bool add all 0");
    
    delete original;
    delete add;
}

// test clear
void test_clear() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    t_true(original->length() == 2);
    original->clear();
    t_true(original->length() == 0);
    OK("test clear");
    
    delete original;
}

// test equals
void test_arr_equals() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    Array * copy = new Array();
    t_true(original->get(0) == nullptr);
    t_true(original->equals(copy));
    original->push_back(s);
    t_false(original->equals(copy));
    original->push_back(t);
    copy->push_back(s);
    copy->push_back(t);
    t_true(original->equals(copy));
    t_true(copy->equals(original));
    OK("test arrays equal");
    
    delete s;
    delete t;
    delete original;
    delete copy;
}

// test String array equals
void test_str_arr_equals() {
    String* s = new String("Hello");
    String* t = new String("World");
    StrArray * original = new StrArray();
    StrArray * copy = new StrArray();
    t_true(original->equals(copy));
    original->push_back(s);
    t_false(original->equals(copy));
    copy->push_back(s);
    t_true(original->equals(copy));
    OK("test StrArray equals");
    
    delete s;
    delete t;
    delete original;
    delete copy;
}

// test Int array equals
void test_int_arr_equals() {
    int s = 5;
    int t = -8;
    IntArray * original = new IntArray();
    IntArray * copy = new IntArray();
    t_true(original->equals(copy));
    original->push_back(s);
    t_false(original->equals(copy));
    copy->push_back(s);
    t_true(original->equals(copy));
    copy->push_back(t);
    original->push_back(-8);
    t_true(original->equals(copy));
    OK("test IntArray equals");
    
    delete original;
    delete copy;
}

// test Float array equals
void test_float_arr_equals() {
    float s = 5.3;
    float t = -8;
    FloatArray * original = new FloatArray();
    FloatArray * copy = new FloatArray();
    t_true(original->equals(copy));
    original->push_back(s);
    t_false(original->equals(copy));
    copy->push_back(5.3);
    t_true(original->equals(copy));
    copy->push_back(t);
    original->push_back(t);
    t_true(original->equals(copy));
    OK("test FloatArray equals");
    
    delete original;
    delete copy;
}

// test Int array equals
void test_bool_arr_equals() {
    bool s = 0;
    bool t = 1;
    BoolArray * original = new BoolArray();
    BoolArray * copy = new BoolArray();
    t_true(original->equals(copy));
    original->push_back(s);
    t_false(original->equals(copy));
    copy->push_back(0);
    t_true(original->equals(copy));
    copy->push_back(t);
    original->push_back(1);
    t_true(original->equals(copy));
    OK("test BoolArray equals");
    
    delete original;
    delete copy;
}

// test get
void test_get() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    Object * expected0 = original->get(0);
    Object * expected1 = original->get(1);
    t_true(expected0->equals(s));
    t_true(expected1->equals(t));
    OK("test get");
    
    delete s;
    delete t;
    delete original;
}

// test hash
void test_hash() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    Array * other = new Array();
    other->push_back(s);
    t_false(original->hash() == other->hash());
    other->push_back(t);
    size_t hash = original->hash();
    size_t hash_other = other->hash();
    t_true(hash == hash_other);
    OK("test hash");
    
    delete s;
    delete t;
    delete original;
    delete other;
}

// test index of
void test_idx() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    size_t index_hello = original->index_of(s);
    t_true(index_hello == 0);
    size_t index_world = original->index_of(t);
    t_true(index_world == 1);
    String * u = new String("Hi");
    size_t not_exist = original->index_of(u);
    t_true(not_exist >= original->length());
    OK("test index of");
    
    delete s;
    delete t;
    delete original;
    delete u;
}

// test remove
void test_remove() {
    String * s = new String("Hello");
    String * t = new String("My");
    String * u = new String("World");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    original->push_back(u);
    size_t original_size = original->length();
    t_true(original_size == 3);
    Object * removed = original->remove(1);
    t_true(removed->equals(t));
    t_true(original->length() == 2);
    t_true((original->get(1))->equals(u));
    OK("test remove");
    
    delete s;
    delete t;
    delete u;
    delete original;
}

// test set
void test_set() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = new String("Goodbye");
    Array * original = new Array();
    original->push_back(s);
    original->push_back(t);
    t_true((original->get(0))->equals(s));
    original->set(0, u);
    t_true((original->get(0))->equals(u));
    OK("test set");
    
    delete s;
    delete t;
    delete u;
    delete original;
}

// test size
void test_size() {
    String * s = new String("Hello");
    String * t = new String("World");
    Array * original = new Array();
    t_true(original->length() == 0);
    original->push_back(s);
    t_true(original->length() == 1);
    original->push_back(t);
    t_true(original->length() == 2);
    OK("test size");
    
    delete s;
    delete t;
    delete original;
}
 
int main() {
    test_obj_equal();
    test_str_equal();
    test_str_concat();
    test_void_back();
    test_add();
    test_add_zero();
    test_add_all();
    test_add_all_zero();
    test_clear();
    test_arr_equals();
    test_get();
    test_hash();
    test_idx();
    test_remove();
    test_set();
    test_size();

  return 0;
}
