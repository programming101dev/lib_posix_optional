#ifndef LIBP101_POSIX_OPTIONAL_P101_SPAWN_H
#define LIBP101_POSIX_OPTIONAL_P101_SPAWN_H

/*
 * Copyright 2022-2022 D'Arcy Smith.
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

#include <p101_env/env.h>
#include <spawn.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     *
     * @param env
     * @param err
     * @param pid
     * @param path
     * @param file_actions
     * @param attrp
     * @param argv
     * @param envp
     * @return
     */
    int p101_posix_spawn(const struct p101_env *env, struct p101_error *err, pid_t *restrict pid, const char *restrict path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict],
                         char *const envp[restrict]);

    /**
     *
     * @param env
     * @param err
     * @param file_actions
     * @param fildes
     * @return
     */
    int p101_posix_spawn_file_actions_addclose(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions, int fildes);

    /**
     *
     * @param env
     * @param err
     * @param file_actions
     * @param fildes
     * @param newfildes
     * @return
     */
    int p101_posix_spawn_file_actions_adddup2(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions, int fildes, int newfildes);

    /**
     *
     * @param env
     * @param err
     * @param file_actions
     * @param fildes
     * @param path
     * @param oflag
     * @param mode
     * @return
     */
    int p101_posix_spawn_file_actions_addopen(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *restrict file_actions, int fildes, const char *restrict path, int oflag, mode_t mode);

    /**
     *
     * @param env
     * @param err
     * @param file_actions
     * @return
     */
    int p101_posix_spawn_file_actions_destroy(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions);

    /**
     *
     * @param env
     * @param err
     * @param file_actions
     * @return
     */
    int p101_posix_spawn_file_actions_init(const struct p101_env *env, struct p101_error *err, posix_spawn_file_actions_t *file_actions);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @return
     */
    int p101_posix_spawnattr_destroy(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param flags
     * @return
     */
    int p101_posix_spawnattr_getflags(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, short *restrict flags);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pgroup
     * @return
     */
    int p101_posix_spawnattr_getpgroup(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, pid_t *restrict pgroup);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param sigdefault
     * @return
     */
    int p101_posix_spawnattr_getsigdefault(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigdefault);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param sigmask
     * @return
     */
    int p101_posix_spawnattr_getsigmask(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigmask);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @return
     */
    int p101_posix_spawnattr_init(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param flags
     * @return
     */
    int p101_posix_spawnattr_setflags(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr, short flags);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pgroup
     * @return
     */
    int p101_posix_spawnattr_setpgroup(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr, pid_t pgroup);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param sigdefault
     * @return
     */
    int p101_posix_spawnattr_setsigdefault(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigdefault);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param sigmask
     * @return
     */
    int p101_posix_spawnattr_setsigmask(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigmask);

    /**
     *
     * @param env
     * @param err
     * @param pid
     * @param file
     * @param file_actions
     * @param attrp
     * @param argv
     * @param envp
     * @return
     */
    int p101_posix_spawnp(const struct p101_env *env, struct p101_error *err, pid_t *restrict pid, const char *restrict file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict],
                          char *const envp[restrict]);

#ifdef __cplusplus
}
#endif

// Not on macOS
// int p101_posix_spawnattr_getschedparam(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, struct sched_param *restrict schedparam);
// int p101_posix_spawnattr_getschedpolicy(const struct p101_env *env, struct p101_error *err, const posix_spawnattr_t *restrict attr, int *restrict schedpolicy);
// int p101_posix_spawnattr_setschedparam(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *restrict attr, const struct sched_param *restrict schedparam);
// int p101_posix_spawnattr_setschedpolicy(const struct p101_env *env, struct p101_error *err, posix_spawnattr_t *attr, int schedpolicy);

#endif    // LIBP101_POSIX_OPTIONAL_P101_SPAWN_H
