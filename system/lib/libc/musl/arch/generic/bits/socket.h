<<<<<<<< HEAD:system/lib/libc/musl/arch/generic/bits/socket.h
struct msghdr {
	void *msg_name;
	socklen_t msg_namelen;
	struct iovec *msg_iov;
	int msg_iovlen;
	void *msg_control;
	socklen_t msg_controllen;
	int msg_flags;
};

struct cmsghdr {
	socklen_t cmsg_len;
	int cmsg_level;
	int cmsg_type;
};
========
>>>>>>>> e6c3efafa (Update musl to v1.2.2):system/lib/libc/musl/arch/emscripten/bits/socket.h
