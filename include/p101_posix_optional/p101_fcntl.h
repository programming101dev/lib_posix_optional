#ifndef LIBP101_POSIX_OPTIONAL_P101_FCNTL_H
#define LIBP101_POSIX_OPTIONAL_P101_FCNTL_H

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

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif

// Not available on macOS
// int p101_posix_fadvise(const struct p101_env *env, struct p101_error *err, int fd, off_t offset, off_t len, int advice);
// int p101_posix_fallocate(const struct p101_env *env, struct p101_error *err, int fd, off_t offset, off_t len);

#endif    // LIBP101_POSIX_OPTIONAL_P101_FCNTL_H
