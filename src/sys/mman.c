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

#include "p101_posix_optional/sys/p101_mman.h"
#include <sys/mman.h>

int p101_mlock(const struct p101_env *env, struct p101_error *err, const void *addr, size_t len)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = mlock(addr, len);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_mlockall(const struct p101_env *env, struct p101_error *err, int flags)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = mlockall(flags);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_munlock(const struct p101_env *env, struct p101_error *err, const void *addr, size_t len)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = munlock(addr, len);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_munlockall(const struct p101_env *env, struct p101_error *err)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = munlockall();

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_posix_madvise(const struct p101_env *env, struct p101_error *err, void *addr, size_t len, int advice)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_madvise(addr, len, advice);

    if(ret_val != 0)
    {
        P101_ERROR_RAISE_ERRNO(err, ret_val);
    }

    return ret_val;
}

int p101_shm_open(const struct p101_env *env, struct p101_error *err, const char *name, int oflag, mode_t mode)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = shm_open(name, oflag, mode);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int p101_shm_unlink(const struct p101_env *env, struct p101_error *err, const char *name)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = shm_unlink(name);

    if(ret_val == -1)
    {
        P101_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}
