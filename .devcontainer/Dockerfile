FROM ubuntu:20.04

ENV HOME /root

RUN apt-get update \
    && apt-get install -y ca-certificates \
    && sed -i.bak -e 's%http://[^ ]\+%mirror://mirrors.ubuntu.com/mirrors.txt%g' /etc/apt/sources.list

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        tzdata \
    && apt-get clean && rm -rf /var/cache/apt/archives/* /var/lib/apt/lists/* \
    && ln -sf /usr/share/zoneinfo/Asia/Tokyo /etc/localtime \
    && echo 'Asia/Tokyo' >/etc/timezone

RUN set -x \
    && apt-get update \
    && apt-get install -y \
    git \
    openssh-client \
    sudo \
    vim \
    bash-completion \
    curl wget gnupg unzip \
    build-essential \
    libboost-all-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/atcoder/ac-library.git /ac-library \
    && mv /ac-library/atcoder /usr/local/include/

RUN groupadd --gid 1000 vscode \
    && useradd --uid 1000 --gid 1000 -m vscode \
    && echo vscode ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/vscode \
    && chmod 0440 /etc/sudoers.d/vscode

USER vscode
ENV HOME /home/vscode