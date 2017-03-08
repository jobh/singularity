/* 
 * Copyright (c) 2015-2016, Gregory M. Kurtzer. All rights reserved.
 * 
 * “Singularity” Copyright (c) 2016, The Regents of the University of California,
 * through Lawrence Berkeley National Laboratory (subject to receipt of any
 * required approvals from the U.S. Dept. of Energy).  All rights reserved.
 * 
 * This software is licensed under a customized 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 * NOTICE.  This Software was developed under funding from the U.S. Department of
 * Energy and the U.S. Government consequently retains certain rights. As such,
 * the U.S. Government has been granted for itself and others acting on its
 * behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software
 * to reproduce, distribute copies to the public, prepare derivative works, and
 * perform publicly and display publicly, and to permit other to do so. 
 * 
 */


#ifndef __SINGULARITY_CONFIG_DEFAULTS_H_
#define __SINGULARITY_CONFIG_DEFAULTS_H_

#define ALLOW_SETUID "allow setuid"
#define ALLOW_SETUID_DEFAULT 1

#define ALLOW_PID_NS "allow pid ns"
#define ALLOW_PID_NS_DEFAULT 1

// NOTE: This is missing from the default configuration file.
#define ALLOW_IPC_NS "allow ipc ns"
#define ALLOW_IPC_NS_DEFAULT 1

// NOTE: This is missing from the default configuration file.
#define ALLOW_USER_NS "allow user ns"
#define ALLOW_USER_NS_DEFAULT 1

#define ALLOW_NO_NEW_PRIVS_FAILURE "allow no_new_privs failure"
#define ALLOW_NO_NEW_PRIVS_FAILURE_DEFAULT 0

#define ENABLE_OVERLAY "enable overlay"
#define ENABLE_OVERLAY_DEFAULT 0

#define CONFIG_PASSWD "config passwd"
#define CONFIG_PASSWD_DEFAULT 1

#define CONFIG_GROUP "config group"
#define CONFIG_GROUP_DEFAULT 1

#define CONFIG_RESOLV_CONF "config resolv_conf"
#define CONFIG_RESOLV_CONF_DEFAULT 1

#define MOUNT_PROC "mount proc"
#define MOUNT_PROC_DEFAULT 1

#define MOUNT_SYS "mount sys"
#define MOUNT_SYS_DEFAULT 1

#define MOUNT_DEV "mount dev"
#define MOUNT_DEV_DEFAULT "yes"

#define MOUNT_HOME "mount home"
#define MOUNT_HOME_DEFAULT 1

#define MOUNT_TMP "mount tmp"
#define MOUNT_TMP_DEFAULT 1

#define MOUNT_HOSTFS "mount hostfs"
#define MOUNT_HOSTFS_DEFAULT 0

#define BIND_PATH "bind path"
#define BIND_PATH_DEFAULT "/etc/hosts"

#define USER_BIND_CONTROL "user bind control"
#define USER_BIND_CONTROL_DEFAULT 1

#define MOUNT_SLAVE "mount slave"
#define MOUNT_SLAVE_DEFAULT 1

#define CONTAINER_DIR "container dir"
#define CONTAINER_DIR_DEFAULT "/var/lib/singularity/mnt"

#define SESSIONDIR_PREFIX "sessiondir prefix"
#define SESSIONDIR_PREFIX_DEFAULT "/tmp/.singularity-session-"

#define SINGULARITY_USER "singularity user"
#define SINGULARITY_USER_DEFAULT "singularity"

#define PROTECTED_IMAGE_MODE "protected image mode"
#define PROTECTED_IMAGE_MODE_DEFAULT "none"

#define ALLOW_USER_IMAGE "allow user image"
#define ALLOW_USER_IMAGE_DEFAULT 1

#endif  // __SINGULARITY_CONFIG_DEFAULTS_H_
