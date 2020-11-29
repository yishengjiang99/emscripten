struct ipc_perm {
	key_t __ipc_perm_key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	gid_t cgid;
	mode_t mode;
	int __ipc_perm_seq;
	long __pad1;
	long __pad2;
};
<<<<<<< HEAD

#define IPC_64 0x100
=======
>>>>>>> e6c3efafa (Update musl to v1.2.2)
