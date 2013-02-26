	{ 0,	0,	sys_restart_syscall,	"restart_syscall" }, /* 0 */
	{ 1,	TP,	sys_exit,		"exit" }, /* 1 */
	{ 0,	TP,	sys_fork,		"fork" }, /* 2 */
	{ 3,	TD,	sys_read,		"read" }, /* 3 */
	{ 3,	TD,	sys_write,		"write" }, /* 4 */
	{ 3,	TD|TF,	sys_open,		"open" }, /* 5 */
	{ 1,	TD,	sys_close,		"close" }, /* 6 */
	{ 3,	TP,	sys_waitpid,		"waitpid" }, /* 7 */
	{ 2,	TD|TF,	sys_creat,		"creat" }, /* 8 */
	{ 2,	TF,	sys_link,		"link" }, /* 9 */
	{ 1,	TF,	sys_unlink,		"unlink" }, /* 10 */
	{ 3,	TF|TP,	sys_execve,		"execve" }, /* 11 */
	{ 1,	TF,	sys_chdir,		"chdir" }, /* 12 */
	{ 1,	0,	sys_time,		"time" }, /* 13 */
	{ 3,	TF,	sys_mknod,		"mknod" }, /* 14 */
	{ 2,	TF,	sys_chmod,		"chmod" }, /* 15 */
	{ 3,	TF,	sys_chown,		"lchown" }, /* 16 */
	{ 2,	TF,	sys_stat,		"stat" }, /* 17 */
	{ 3,	TD,	sys_lseek,		"lseek" }, /* 18 */
	{ 0,	0,	sys_getpid,		"getpid" }, /* 19 */
	{ 5,	TF,	sys_mount,		"mount" }, /* 20 */
	{ 2,	TF,	sys_umount2,		"umount" }, /* 21 */
	{ 1,	0,	sys_setuid,		"setuid" }, /* 22 */
	{ 0,	NF,	sys_getuid,		"getuid" }, /* 23 */
	{ 1,	0,	sys_stime,		"stime" }, /* 24 */
	{ 4,	0,	sys_ptrace,		"ptrace" }, /* 25 */
	{ 1,	0,	sys_alarm,		"alarm" }, /* 26 */
	{ 2,	TD,	sys_fstat,		"fstat" }, /* 27 */
	{ 0,	TS,	sys_pause,		"pause" }, /* 28 */
	{ 2,	TF,	sys_utime,		"utime" }, /* 29 */
	{ 2,	TF,	sys_access,		"access" }, /* 30 */
	{ 1,	0,	sys_nice,		"nice" }, /* 31 */
	{ 0,	0,	sys_sync,		"sync" }, /* 32 */
	{ 2,	TS,	sys_kill,		"kill" }, /* 33 */
	{ 2,	TF,	sys_rename,		"rename" }, /* 34 */
	{ 2,	TF,	sys_mkdir,		"mkdir" }, /* 35 */
	{ 1,	TF,	sys_rmdir,		"rmdir" }, /* 36 */
	{ 1,	TD,	sys_dup,		"dup" }, /* 37 */
	{ 1,	TD,	sys_pipe,		"pipe" }, /* 38 */
	{ 1,	0,	sys_times,		"times" }, /* 39 */
	{ 1,	0,	sys_brk,		"brk" }, /* 40 */
	{ 1,	0,	sys_setgid,		"setgid" }, /* 41 */
	{ 0,	NF,	sys_getgid,		"getgid" }, /* 42 */
	{ 3,	TS,	sys_signal,		"signal" }, /* 43 */
	{ 0,	NF,	sys_geteuid,		"geteuid" }, /* 44 */
	{ 0,	NF,	sys_getegid,		"getegid" }, /* 45 */
	{ 1,	TF,	sys_acct,		"acct" }, /* 46 */
	{ 3,	TD,	sys_ioctl,		"ioctl" }, /* 47 */
	{ 3,	TD,	sys_fcntl,		"fcntl" }, /* 48 */
	{ 2,	0,	sys_setpgid,		"setpgid" }, /* 49 */
	{ 1,	0,	sys_umask,		"umask" }, /* 50 */
	{ 1,	TF,	sys_chroot,		"chroot" }, /* 51 */
	{ 2,	0,	sys_ustat,		"ustat" }, /* 52 */
	{ 2,	TD,	sys_dup2,		"dup2" }, /* 53 */
	{ 0,	0,	sys_getppid,		"getppid" }, /* 54 */
	{ 0,	0,	sys_getpgrp,		"getpgrp" }, /* 55 */
	{ 0,	0,	sys_setsid,		"setsid" }, /* 56 */
	{ 0,	TS,	sys_siggetmask,		"sgetmask" }, /* 57 */
	{ 1,	TS,	sys_sigsetmask,		"ssetmask" }, /* 58 */
	{ 2,	0,	sys_setreuid,		"setreuid" }, /* 59 */
	{ 2,	0,	sys_setregid,		"setregid" }, /* 60 */
	{ 1,	TS,	sys_sigpending,		"sigpending" }, /* 61 */
	{ 2,	0,	sys_sethostname,	"sethostname" }, /* 62 */
	{ 2,	0,	sys_setrlimit,		"setrlimit" }, /* 63 */
	{ 2,	0,	sys_getrlimit,		"ugetrlimit"	}, /* 64 */
	{ 2,	0,	sys_getrusage,		"getrusage" }, /* 65 */
	{ 2,	0,	sys_gettimeofday,	"gettimeofday" }, /* 66 */
	{ 2,	0,	sys_settimeofday,	"settimeofday" }, /* 67 */
	{ 2,	0,	sys_getgroups,		"getgroups" }, /* 68 */
	{ 2,	0,	sys_setgroups,		"setgroups" }, /* 69 */
	{ 5,	TD,	sys_select,		"select"	}, /* 70 */
	{ 2,	TF,	sys_symlink,		"symlink" }, /* 71 */
	{ 2,	TF,	sys_lstat,		"lstat" }, /* 72 */
	{ 3,	TF,	sys_readlink,		"readlink" }, /* 73 */
	{ 1,	TF,	sys_uselib,		"uselib" }, /* 74 */
	{ 2,	TF,	sys_swapon,		"swapon" }, /* 75 */
	{ 4,	0,	sys_reboot,		"reboot" }, /* 76 */
	{ 6,	TD,	sys_mmap,		"mmap2" }, /* 77 */
	{ 2,	0,	sys_munmap,		"munmap" }, /* 78 */
	{ 2,	TF,	sys_truncate,		"truncate" }, /* 79 */
	{ 2,	TD,	sys_ftruncate,		"ftruncate" }, /* 80 */
	{ 2,	TD,	sys_fchmod,		"fchmod" }, /* 81 */
	{ 3,	TD,	sys_fchown,		"fchown" }, /* 82 */
	{ 2,	0,	sys_getpriority,	"getpriority" }, /* 83 */
	{ 3,	0,	sys_setpriority,	"setpriority" }, /* 84 */
	{ 2,	TF,	sys_statfs,		"statfs" }, /* 85 */
	{ 2,	TD,	sys_fstatfs,		"fstatfs" }, /* 86 */
	{ 3,	TN,	sys_socket,		"socket" }, /* 87 */
	{ 3,	TN,	sys_bind,		"bind" }, /* 88 */
	{ 3,	TN,	sys_connect,		"connect" }, /* 89 */
	{ 2,	TN,	sys_listen,		"listen" }, /* 90 */
	{ 3,	TN,	sys_accept,		"accept" }, /* 91 */
	{ 3,	TN,	sys_getsockname,	"getsockname" }, /* 92 */
	{ 3,	TN,	sys_getpeername,	"getpeername" }, /* 93 */
	{ 4,	TN,	sys_socketpair,		"socketpair" }, /* 94 */
	{ 4,	TN,	sys_send,		"send" }, /* 95 */
	{ 6,	TN,	sys_sendto,		"sendto" }, /* 96 */
	{ 4,	TN,	sys_recv,		"recv" }, /* 97 */
	{ 6,	TN,	sys_recvfrom,		"recvfrom" }, /* 98 */
	{ 2,	TN,	sys_shutdown,		"shutdown" }, /* 99 */
	{ 5,	TN,	sys_setsockopt,		"setsockopt" }, /* 100 */
	{ 5,	TN,	sys_getsockopt,		"getsockopt" }, /* 101 */
	{ 3,	TN,	sys_sendmsg,		"sendmsg" }, /* 102 */
	{ 5,	TN,	sys_recvmsg,		"recvmsg" }, /* 103 */
	{ 3,	0,	sys_syslog,		"syslog" }, /* 104 */
	{ 3,	0,	sys_setitimer,		"setitimer" }, /* 105 */
	{ 2,	0,	sys_getitimer,		"getitimer" }, /* 106 */
	{ 0,	0,	sys_vhangup,		"vhangup" }, /* 107 */
	{ 4,	TP,	sys_wait4,		"wait4" }, /* 108 */
	{ 1,	TF,	sys_swapoff,		"swapoff" }, /* 109 */
	{ 1,	0,	sys_sysinfo,		"sysinfo" }, /* 110 */
	{ 4,	TI,	sys_shmget,		"shmget" }, /* 111 */
	{ 4,	TI,	sys_shmat,		"shmat" }, /* 112 */
	{ 4,	TI,	sys_shmctl,		"shmctl" }, /* 113 */
	{ 4,	TI,	sys_shmdt,		"shmdt" }, /* 114 */
	{ 4,	TI,	sys_semget,		"semget" }, /* 115 */
	{ 4,	TI,	sys_semop,		"semop" }, /* 116 */
	{ 4,	TI,	sys_semctl,		"semctl" }, /* 117 */
	{ 5,	TI,	sys_semtimedop,		"semtimedop" }, /* 118 */
	{ 4,	TI,	sys_msgget,		"msgget" }, /* 119 */
	{ 4,	TI,	sys_msgsnd,		"msgsnd" }, /* 120 */
	{ 4,	TI,	sys_msgrcv,		"msgrcv" }, /* 121 */
	{ 4,	TI,	sys_msgctl,		"msgctl" }, /* 122 */
	{ 1,	TD,	sys_fsync,		"fsync" }, /* 123 */
	{ 0,	TS,	printargs,		"sigreturn" }, /* 124 */
	{ 5,	TP,	sys_clone,		"clone" }, /* 125 */
	{ 2,	0,	sys_setdomainname,	"setdomainname" }, /* 126 */
	{ 1,	0,	sys_uname,		"uname" }, /* 127 */
	{ 1,	0,	sys_adjtimex,		"adjtimex" }, /* 128 */
	{ 3,	0,	sys_mprotect,		"mprotect" }, /* 129 */
	{ 3,	TS,	sys_sigprocmask,	"sigprocmask" }, /* 130 */
	{ 3,	0,	sys_init_module,	"init_module" }, /* 131 */
	{ 1,	0,	sys_delete_module,	"delete_module" }, /* 132 */
	{ 4,	0,	sys_quotactl,		"quotactl" }, /* 133 */
	{ 1,	0,	sys_getpgid,		"getpgid" }, /* 134 */
	{ 1,	TD,	sys_fchdir,		"fchdir" }, /* 135 */
	{ 0,	0,	sys_bdflush,		"bdflush" }, /* 136 */
	{ 3,	0,	sys_sysfs,		"sysfs" }, /* 137 */
	{ 1,	0,	sys_personality,	"personality" }, /* 138 */
	{ 5,	0,	sys_afs_syscall,	"afs_syscall" }, /* 139 */
	{ 1,	NF,	sys_setfsuid,		"setfsuid" }, /* 140 */
	{ 1,	NF,	sys_setfsgid,		"setfsgid" }, /* 141 */
	{ 5,	TD,	sys_llseek,		"_llseek" }, /* 142 */
	{ 3,	TD,	sys_getdents,		"getdents" }, /* 143 */
	{ 2,	TD,	sys_flock,		"flock" }, /* 144 */
	{ 3,	0,	sys_msync,		"msync" }, /* 145 */
	{ 3,	TD,	sys_readv,		"readv" }, /* 146 */
	{ 3,	TD,	sys_writev,		"writev" }, /* 147 */
	{ 1,	0,	sys_getsid,		"getsid" }, /* 148 */
	{ 1,	TD,	sys_fdatasync,		"fdatasync" }, /* 149 */
	{ 1,	0,	sys_sysctl,		"_sysctl" }, /* 150 */
	{ 2,	0,	sys_mlock,		"mlock" }, /* 151 */
	{ 2,	0,	sys_munlock,		"munlock" }, /* 152 */
	{ 1,	0,	sys_mlockall,		"mlockall" }, /* 153 */
	{ 0,	0,	sys_munlockall,		"munlockall" }, /* 154 */
	{ 0,	0,	sys_sched_setparam,	"sched_setparam" }, /* 155 */
	{ 2,	0,	sys_sched_getparam,	"sched_getparam" }, /* 156 */
	{ 3,	0,	sys_sched_setscheduler,	"sched_setscheduler" }, /* 157 */
	{ 1,	0,	sys_sched_getscheduler,	"sched_getscheduler" }, /* 158 */
	{ 0,	0,	sys_sched_yield,	"sched_yield" }, /* 159 */
	{ 1,	0,	sys_sched_get_priority_max,"sched_get_priority_max" }, /* 160 */
	{ 1,	0,	sys_sched_get_priority_min,"sched_get_priority_min" }, /* 161 */
	{ 2,	0,	sys_sched_rr_get_interval,"sched_rr_get_interval" }, /* 162 */
	{ 2,	0,	sys_nanosleep,		"nanosleep" }, /* 163 */
	{ 4,	0,	sys_mremap,		"mremap" }, /* 164 */
	{ 3,	0,	sys_setresuid,		"setresuid" }, /* 165 */
	{ 3,	0,	sys_getresuid,		"getresuid" }, /* 166 */
	{ 3,	TD,	sys_poll,		"poll" }, /* 167 */
	{ 3,	0,	sys_nfsservctl,		"nfsservctl" }, /* 168 */
	{ 3,	0,	sys_setresgid,		"setresgid" }, /* 169 */
	{ 3,	0,	sys_getresgid,		"getresgid" }, /* 170 */
	{ 5,	0,	sys_prctl,		"prctl" }, /* 171 */
	{ 0,	TS,	sys_rt_sigreturn,	"rt_sigreturn" }, /* 172 */
	{ 4,	TS,	sys_rt_sigaction,	"rt_sigaction" }, /* 173 */
	{ 4,	TS,	sys_rt_sigprocmask,	"rt_sigprocmask" }, /* 174 */
	{ 2,	TS,	sys_rt_sigpending,	"rt_sigpending" }, /* 175 */
	{ 4,	TS,	sys_rt_sigtimedwait,	"rt_sigtimedwait" }, /* 176 */
	{ 3,	TS,	sys_rt_sigqueueinfo,    "rt_sigqueueinfo" }, /* 177 */
	{ 2,	TS,	sys_rt_sigsuspend,	"rt_sigsuspend" }, /* 178 */
	{ 5,	TD,	sys_pread,		"pread64" }, /* 179 */
	{ 5,	TD,	sys_pwrite,		"pwrite64" }, /* 180 */
	{ 3,	TF,	sys_chown,		"chown" }, /* 181 */
	{ 2,	TF,	sys_getcwd,		"getcwd" }, /* 182 */
	{ 2,	0,	sys_capget,		"capget" }, /* 183 */
	{ 2,	0,	sys_capset,		"capset" }, /* 184 */
	{ 2,	TS,	sys_sigaltstack,	"sigaltstack" }, /* 185 */
	{ 4,	TD|TN,	sys_sendfile,		"sendfile" }, /* 186 */
	{ 5,	0,	sys_getpmsg,		"getpmsg" }, /* 187 */
	{ 5,	0,	sys_putpmsg,		"putpmsg" }, /* 188 */
	{ 0,	TP,	sys_vfork,		"vfork" }, /* 189 */
	{ 3,	TF,	sys_truncate64,		"truncate64" }, /* 190 */
	{ 3,	TD,	sys_ftruncate64,	"ftruncate64" }, /* 191 */
	{ 2,	TF,	sys_stat64,		"stat64" }, /* 192 */
	{ 2,	TF,	sys_lstat64,		"lstat64" }, /* 193 */
	{ 2,	TD,	sys_fstat64,		"fstat64" }, /* 194 */
	{ 2,	TF,	sys_pivotroot,		"pivot_root" }, /* 195 */
	{ 3,	0,	sys_mincore,		"mincore" }, /* 196 */
	{ 3,	0,	sys_madvise,		"madvise" }, /* 197 */
	{ 4,	TD,	sys_getdents64,		"getdents64" }, /* 198 */
	{ 3,	TD,	sys_fcntl,		"fcntl64" }, /* 199 */
	{ 0,	0,	sys_gettid,		"gettid" }, /* 200 */
	{ 4,	TD,	sys_readahead,		"readahead" }, /* 201 */
	{ 5,	TF,	sys_setxattr,		"setxattr" }, /* 202 */
	{ 5,	TF,	sys_setxattr,		"lsetxattr" }, /* 203 */
	{ 5,	TD,	sys_fsetxattr,		"fsetxattr" }, /* 204 */
	{ 4,	TF,	sys_getxattr,		"getxattr" }, /* 205 */
	{ 4,	TF,	sys_getxattr,		"lgetxattr" }, /* 206 */
	{ 4,	TD,	sys_fgetxattr,		"fgetxattr" }, /* 207 */
	{ 3,	TF,	sys_listxattr,		"listxattr" }, /* 208 */
	{ 3,	TF,	sys_listxattr,		"llistxattr" }, /* 209 */
	{ 3,	TD,	sys_flistxattr,		"flistxattr" }, /* 210 */
	{ 2,	TF,	sys_removexattr,	"removexattr" }, /* 211 */
	{ 2,	TF,	sys_removexattr,	"lremovexattr" }, /* 212 */
	{ 2,	TD,	sys_fremovexattr,	"fremovexattr" }, /* 213 */
	{ 2,	TS,	sys_kill,		"tkill" }, /* 214 */
	{ 4,	TD|TN,	sys_sendfile64,		"sendfile64" }, /* 215 */
	{ 5,	0,	sys_futex,		"futex" }, /* 216 */
	{ 3,	0,	sys_sched_setaffinity,	"sched_setaffinity" }, /* 217 */
	{ 3,	0,	sys_sched_getaffinity,	"sched_getaffinity" }, /* 218 */
	{ 2,	0,	sys_io_setup,		"io_setup" }, /* 219 */
	{ 1,	0,	sys_io_destroy,		"io_destroy" }, /* 220 */
	{ 5,	0,	sys_io_getevents,	"io_getevents" }, /* 221 */
	{ 3,	0,	sys_io_submit,		"io_submit" }, /* 222 */
	{ 3,	0,	sys_io_cancel,		"io_cancel" }, /* 223 */
	{ 5,	TD,	sys_fadvise64,		"fadvise64" }, /* 224 */
	{ 4,	0,	sys_migrate_pages,	"migrate_pages" }, /* 225 */
	{ 1,	TP,	sys_exit,		"exit_group" }, /* 226 */
	{ 4,	0,	sys_lookup_dcookie,	"lookup_dcookie" }, /* 227 */
	{ 1,	TD,	sys_epoll_create,	"epoll_create" }, /* 228 */
	{ 4,	TD,	sys_epoll_ctl,		"epoll_ctl" }, /* 229 */
	{ 4,	TD,	sys_epoll_wait,		"epoll_wait" }, /* 230 */
	{ 5,	0,	sys_remap_file_pages,	"remap_file_pages" }, /* 231 */
	{ 1,	0,	sys_set_tid_address,	"set_tid_address" }, /* 232 */
	{ 3,	0,	sys_timer_create,	"timer_create" }, /* 233 */
	{ 4,	0,	sys_timer_settime,	"timer_settime"	}, /* 234 */
	{ 2,	0,	sys_timer_gettime,	"timer_gettime"	}, /* 235 */
	{ 1,	0,	sys_timer_getoverrun,	"timer_getoverrun"}, /* 236 */
	{ 1,	0,	sys_timer_delete,	"timer_delete"	}, /* 237 */
	{ 2,	0,	sys_clock_settime,	"clock_settime"	}, /* 239 */
	{ 2,	0,	sys_clock_gettime,	"clock_gettime"	}, /* 239 */
	{ 2,	0,	sys_clock_getres,	"clock_getres"	}, /* 240 */
	{ 4,	0,	sys_clock_nanosleep,	"clock_nanosleep"}, /* 241 */
	{ 3,	TF,	sys_statfs64,		"statfs64" }, /* 242 */
	{ 3,	TD,	sys_fstatfs64,		"fstatfs64" }, /* 243 */
	{ 3,	TS,	sys_tgkill,		"tgkill" }, /* 244 */
	{ 2,	TF,	sys_utimes,		"utimes" }, /* 245 */
	{ 6,	TD,	sys_fadvise64_64,	"fadvise64_64" }, /* 246 */
	{ 6,	0,	sys_mbind,		"mbind" }, /* 247 */
	{ 5,	0,	sys_get_mempolicy,	"get_mempolicy" }, /* 248 */
	{ 3,	0,	sys_set_mempolicy,	"set_mempolicy" }, /* 249 */
	{ 4,	0,	sys_mq_open,		"mq_open" }, /* 250 */
	{ 1,	0,	sys_mq_unlink,		"mq_unlink"	}, /* 251 */
	{ 5,	0,	sys_mq_timedsend,	"mq_timedsend"	}, /* 252 */
	{ 5,	0,	sys_mq_timedreceive,	"mq_timedreceive" }, /* 253 */
	{ 2,	0,	sys_mq_notify,		"mq_notify"	}, /* 254 */
	{ 3,	0,	sys_mq_getsetattr,	"mq_getsetattr"	}, /* 255 */
	{ 4,	0,	sys_kexec_load,		"kexec_load" }, /* 256 */
	{ 5,	TP,	sys_waitid,		"waitid" }, /* 257 */
	{ 5,	0,	sys_add_key,		"add_key" }, /* 258 */
	{ 4,	0,	sys_request_key,	"request_key" }, /* 259 */
	{ 5,	0,	sys_keyctl,		"keyctl" }, /* 260 */
	{ 3,	0,	sys_ioprio_set,		"ioprio_set" }, /* 261 */
	{ 2,	0,	sys_ioprio_get,		"ioprio_get" }, /* 262 */
	{ 0,	TD,	sys_inotify_init,	"inotify_init" }, /* 263 */
	{ 3,	TD,	sys_inotify_add_watch,	"inotify_add_watch" }, /* 264 */
	{ 2,	TD,	sys_inotify_rm_watch,	"inotify_rm_watch" }, /* 265 */
	{ 1,	0,	printargs,		"raise_fpe" }, /* 266 */
	{ 4,	TD|TF,	sys_openat,		"openat" }, /* 267 */
	{ 3,	TD|TF,	sys_mkdirat,		"mkdirat" }, /* 268 */
	{ 4,	TD|TF,	sys_mknodat,		"mknodat" }, /* 269 */
	{ 5,	TD|TF,	sys_fchownat,		"fchownat" }, /* 270 */
	{ 3,	TD|TF,	sys_futimesat,		"futimesat" }, /* 271 */
	{ 4,	TD|TF,	sys_newfstatat,		"fstatat64" }, /* 272 */
	{ 3,	TD|TF,	sys_unlinkat,		"unlinkat" }, /* 273 */
	{ 4,	TD|TF,	sys_renameat,		"renameat" }, /* 274 */
	{ 5,	TD|TF,	sys_linkat,		"linkat" }, /* 275 */
	{ 3,	TD|TF,	sys_symlinkat,		"symlinkat" }, /* 276 */
	{ 4,	TD|TF,	sys_readlinkat,		"readlinkat" }, /* 277 */
	{ 3,	TD|TF,	sys_fchmodat,		"fchmodat" }, /* 278 */
	{ 3,	TD|TF,	sys_faccessat,		"faccessat" }, /* 279 */
	{ 6,	TD,	sys_pselect6,		"pselect6" }, /* 280 */
	{ 5,	TD,	sys_ppoll,		"ppoll" }, /* 281 */
	{ 1,	TP,	sys_unshare,		"unshare" }, /* 282 */
	{ 2,	0,	sys_set_robust_list,	"set_robust_list" }, /* 283 */
	{ 3,	0,	sys_get_robust_list,	"get_robust_list" }, /* 284 */
	{ 6,	TD,	sys_splice,		"splice" }, /* 285 */
	{ 4,	TD,	sys_sync_file_range,	"sync_file_range" }, /* 286 */
	{ 4,	TD,	sys_tee,		"tee" }, /* 287 */
	{ 4,	TD,	sys_vmsplice,		"vmsplice" }, /* 288 */
	{ 6,	TP,	sys_move_pages,		"move_pages" }, /* 289 */
	{ 1,	TP,	printargs,		"unused" }, /* 290 */
	{ 1,	0,	printargs,		"cmpxchg_badaddr" }, /* 291 */
	{ 3,	0,	sys_getcpu,		"getcpu" }, /* 292 */
	{ 6,	TD,	sys_epoll_pwait,	"epoll_pwait"	}, /* 293 */
	{ 4,	TD|TF,	sys_utimensat,		"utimensat" }, /* 294 */
	{ 3,	TD|TS,	sys_signalfd,		"signalfd" }, /* 295 */
	{ 2,	TD,	sys_timerfd_create,	"timerfd_create" }, /* 296 */
	{ 1,	TD,	sys_eventfd,		"eventfd" }, /* 297 */
	{ 6,	TD,	sys_fallocate,		"fallocate" }, /* 298 */
	{ 4,	TD,	sys_timerfd_settime,	"timerfd_settime" }, /* 299 */
	{ 2,	TD,	sys_timerfd_gettime,	"timerfd_gettime" }, /* 300 */
	{ 1,	0,	printargs,		"flush_cache" } /* 301 */