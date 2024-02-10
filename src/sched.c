/*
 * Copyright 2021-2024 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "p101_posix_optional/p101_sched.h"
#include <sched.h>

int p101_sched_get_priority_max(const struct p101_env *env, struct p101_error *err, int policy)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = sched_get_priority_max(policy);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_sched_get_priority_min(const struct p101_env *env, struct p101_error *err, int policy)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = sched_get_priority_min(policy);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}
