/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

/*
 * Caution!!! Important!!!
 * This file is generated by the script "utils/lexbor/tag_ns/tags.py"!
 * Do not change this file!
 */


#include <unit/test.h>

#include <lexbor/ns/ns.h>


TEST_BEGIN(names)
{
    const lxb_ns_data_t *entry;
    lxb_ns_heap_t *ns_heap;

    ns_heap = lxb_ns_heap_create();
    test_eq(lxb_ns_heap_init(ns_heap, 32), LXB_STATUS_OK);

    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "#undef", 6);
    test_ne(entry, NULL); test_eq_str(entry->name, "#undef");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "#any", 4);
    test_ne(entry, NULL); test_eq_str(entry->name, "#any");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/1999/xhtml", 28);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/1999/xhtml");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/1998/Math/MathML", 34);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/1998/Math/MathML");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/2000/svg", 26);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/2000/svg");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/1999/xlink", 28);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/1999/xlink");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/XML/1998/namespace", 36);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/XML/1998/namespace");
    entry = lxb_ns_data_by_link(ns_heap, (const lxb_char_t *) "http://www.w3.org/2000/xmlns/", 29);
    test_ne(entry, NULL); test_eq_str(entry->link, "http://www.w3.org/2000/xmlns/");

    lxb_ns_heap_destroy(ns_heap);
}
TEST_END

int
main(int argc, const char * argv[])
{
    TEST_INIT();

    TEST_ADD(names);

    TEST_RUN("lexbor/ns/res");
    TEST_RELEASE();
}

