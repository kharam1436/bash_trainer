FROM centos:8

# Performance optimazation for dnf
RUN echo 'max_parallel_downloads=10' >> /etc/dnf/dnf.conf

# Install build tools
RUN dnf install -y gcc-c++ cmake make openssh-server

COPY src/ /home/

WORKDIR /home

# Compile the trainers
RUN for USER in $(ls); \
    do \
        cd $USER; \
        cmake -G "Unix Makefiles" .; \
        make; \
        cd ..; \
    done;

# Making account for each trainers
RUN for USER in $(ls); \
    do \
        useradd -s /home/${USER}/sh "${USER}" ; \
        echo "${USER}:${USER}" | chpasswd ; \
        # chown -R ${USER}:${USER} /home/${USER} \
    done;


# RUN for USER in $(ls); \
#     do \
#         # useradd -s /home/${USER}/sh "${USER}" ; \
#         # echo "${USER}:${USER}" | chpasswd ; \
#         # chwon -R ${USER} /home/${USER} \
#         cd $USER; \
#         cd .. \
#     done;

# SSH server settings
RUN ssh-keygen -A && rm -rf /run/nologin
EXPOSE 22
CMD [ "/usr/sbin/sshd", "-D" ]
