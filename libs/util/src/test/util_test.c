/**
 * Copyright (c) 2015 Runtime Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <assert.h>
#include <stddef.h>
#include "testutil/testutil.h"
#include "util_test_priv.h"

int
util_test_all(void)
{
    cbmem_test_suite();
    flash_map_test_suite();
    return tu_case_failed;
}

#ifdef PKG_TEST

int
main(int argc, char **argv)
{
    tu_config.tc_print_results = 1;
    tu_init();

    util_test_all();

    return tu_any_failed;
}

#endif