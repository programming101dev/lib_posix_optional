#ifndef LIBP101_POSIX_OPTIONAL_P101_PTHREAD_H
#define LIBP101_POSIX_OPTIONAL_P101_PTHREAD_H

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
#include <pthread.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param inheritsched
     * @return
     */
    int p101_pthread_attr_getinheritsched(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict inheritsched);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param policy
     * @return
     */
    int p101_pthread_attr_getschedpolicy(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict policy);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param contentionscope
     * @return
     */
    int p101_pthread_attr_getscope(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict contentionscope);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param stackaddr
     * @param stacksize
     * @return
     */
    int p101_pthread_attr_getstack(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, void **restrict stackaddr, size_t *restrict stacksize);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param stacksize
     * @return
     */
    int p101_pthread_attr_getstacksize(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, size_t *restrict stacksize);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param inheritsched
     * @return
     */
    int p101_pthread_attr_setinheritsched(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int inheritsched);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param policy
     * @return
     */
    int p101_pthread_attr_setschedpolicy(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int policy);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param contentionscope
     * @return
     */
    int p101_pthread_attr_setscope(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int contentionscope);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param stackaddr
     * @param stacksize
     * @return
     */
    int p101_pthread_attr_setstack(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, void *stackaddr, size_t stacksize);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param stacksize
     * @return
     */
    int p101_pthread_attr_setstacksize(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, size_t stacksize);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_condattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_condattr_t *restrict attr, int *restrict pshared);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_condattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_condattr_t *attr, int pshared);

    /**
     *
     * @param env
     * @param err
     * @param thread
     * @param policy
     * @param param
     * @return
     */
    int p101_pthread_getschedparam(const struct p101_env *env, struct p101_error *err, pthread_t thread, int *restrict policy, struct sched_param *restrict param);

    /**
     *
     * @param env
     * @param err
     * @param mutex
     * @param prioceiling
     * @return
     */
    int p101_pthread_mutex_getprioceiling(const struct p101_env *env, struct p101_error *err, const pthread_mutex_t *restrict mutex, int *restrict prioceiling);

    /**
     *
     * @param env
     * @param err
     * @param mutex
     * @param prioceiling
     * @param old_ceiling
     * @return
     */
    int p101_pthread_mutex_setprioceiling(const struct p101_env *env, struct p101_error *err, pthread_mutex_t *restrict mutex, int prioceiling, int *restrict old_ceiling);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param prioceiling
     * @return
     */
    int p101_pthread_mutexattr_getprioceiling(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict prioceiling);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param protocol
     * @return
     */
    int p101_pthread_mutexattr_getprotocol(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict protocol);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_mutexattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict pshared);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param prioceiling
     * @return
     */
    int p101_pthread_mutexattr_setprioceiling(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int prioceiling);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param protocol
     * @return
     */
    int p101_pthread_mutexattr_setprotocol(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int protocol);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_mutexattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int pshared);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_rwlockattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_rwlockattr_t *restrict attr, int *restrict pshared);

    /**
     *
     * @param env
     * @param err
     * @param attr
     * @param pshared
     * @return
     */
    int p101_pthread_rwlockattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_rwlockattr_t *attr, int pshared);

    /**
     *
     * @param env
     * @param err
     * @param thread
     * @param policy
     * @param param
     * @return
     */
    int p101_pthread_setschedparam(const struct p101_env *env, struct p101_error *err, pthread_t thread, int policy, const struct sched_param *param);

#ifdef __cplusplus
}
#endif

// Not on macOS
// int p101_pthread_barrierattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_barrierattr_t *restrict attr, int *restrict pshared);
// int p101_pthread_barrierattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_barrierattr_t *attr, int pshared);
// int p101_pthread_getcpuclockid(const struct p101_env *env, struct p101_error *err, pthread_t thread_id, clockid_t *clock_id);
// int p101_pthread_setschedprio(const struct p101_env *env, struct p101_error *err, pthread_t thread, int prio);

#endif    // LIBP101_POSIX_OPTIONAL_P101_PTHREAD_H
