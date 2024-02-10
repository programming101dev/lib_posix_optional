#ifndef LIBP101_POSIX_OPTIONAL_P101_PTHREAD_H
#define LIBP101_POSIX_OPTIONAL_P101_PTHREAD_H

/*
 * Copyright 2022-2024 D'Arcy Smith.
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

    int p101_pthread_attr_getinheritsched(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict inheritsched);
    int p101_pthread_attr_getschedpolicy(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict policy);
    int p101_pthread_attr_getscope(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, int *restrict contentionscope);
    int p101_pthread_attr_getstack(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, void **restrict stackaddr, size_t *restrict stacksize);
    int p101_pthread_attr_getstacksize(const struct p101_env *env, struct p101_error *err, const pthread_attr_t *restrict attr, size_t *restrict stacksize);
    int p101_pthread_attr_setinheritsched(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int inheritsched);
    int p101_pthread_attr_setschedpolicy(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int policy);
    int p101_pthread_attr_setscope(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, int contentionscope);
    int p101_pthread_attr_setstack(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, void *stackaddr, size_t stacksize);
    int p101_pthread_attr_setstacksize(const struct p101_env *env, struct p101_error *err, pthread_attr_t *attr, size_t stacksize);
    int p101_pthread_condattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_condattr_t *restrict attr, int *restrict pshared);
    int p101_pthread_condattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_condattr_t *attr, int pshared);
    int p101_pthread_getschedparam(const struct p101_env *env, struct p101_error *err, pthread_t thread, int *restrict policy, struct sched_param *restrict param);
    int p101_pthread_mutex_getprioceiling(const struct p101_env *env, struct p101_error *err, const pthread_mutex_t *restrict mutex, int *restrict prioceiling);
    int p101_pthread_mutex_setprioceiling(const struct p101_env *env, struct p101_error *err, pthread_mutex_t *restrict mutex, int prioceiling, int *restrict old_ceiling);
    int p101_pthread_mutexattr_getprioceiling(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict prioceiling);
    int p101_pthread_mutexattr_getprotocol(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict protocol);
    int p101_pthread_mutexattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_mutexattr_t *restrict attr, int *restrict pshared);
    int p101_pthread_mutexattr_setprioceiling(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int prioceiling);
    int p101_pthread_mutexattr_setprotocol(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int protocol);
    int p101_pthread_mutexattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_mutexattr_t *attr, int pshared);
    int p101_pthread_rwlockattr_getpshared(const struct p101_env *env, struct p101_error *err, const pthread_rwlockattr_t *restrict attr, int *restrict pshared);
    int p101_pthread_rwlockattr_setpshared(const struct p101_env *env, struct p101_error *err, pthread_rwlockattr_t *attr, int pshared);
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
