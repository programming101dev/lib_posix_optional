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

#include "p101_posix_optional/p101_spawn.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

int p101_posix_spawn(const struct p101_env *env, struct p101_error *err, pid_t *restrict pid, const char *restrict path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict],
                     char *const envp[restrict])
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn(pid, path, file_actions, attrp, argv, envp);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

#pragma GCC diagnostic push

int p101_posix_spawn_file_actions_addclose(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions, int fildes)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn_file_actions_addclose(file_actions, fildes);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawn_file_actions_adddup2(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions, int fildes, int newfildes)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn_file_actions_adddup2(file_actions, fildes, newfildes);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawn_file_actions_addopen(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *restrict file_actions, int fildes, const char *restrict path, int oflag, mode_t mode)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn_file_actions_addopen(file_actions, fildes, path, oflag, mode);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawn_file_actions_destroy(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn_file_actions_destroy(file_actions);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawn_file_actions_init(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawn_file_actions_init(file_actions);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_destroy(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_destroy(attr);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_getflags(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, short *restrict flags)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_getflags(attr, flags);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_getpgroup(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, pid_t *restrict pgroup)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_getpgroup(attr, pgroup);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_getsigdefault(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigdefault)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_getsigdefault(attr, sigdefault);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_getsigmask(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigmask)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_getsigmask(attr, sigmask);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_init(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_init(attr);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_setflags(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr, short flags)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_setflags(attr, flags);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_setpgroup(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr, pid_t pgroup)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_setpgroup(attr, pgroup);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_setsigdefault(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigdefault)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_setsigdefault(attr, sigdefault);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnattr_setsigmask(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigmask)
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnattr_setsigmask(attr, sigmask);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int p101_posix_spawnp(const struct p101_env *env, struct p101_error *err, pid_t *restrict pid, const char *restrict file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict],
                      char *const envp[restrict])
{
    int ret_val;

    P101_TRACE(env);
    errno   = 0;
    ret_val = posix_spawnp(pid, file, file_actions, attrp, argv, envp);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}
