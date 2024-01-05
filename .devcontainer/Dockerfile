FROM debian:12.4-slim

RUN apt-get update && apt-get install -y \
    build-essential \
    clang \
    git \
    locales \
    man-db \
    manpages-dev \
    meson \
    python3-venv \
    wget \
    zsh \
    && rm -rf /var/lib/apt/lists/*

RUN sed -i '/en_US.UTF-8/s/^# //g' /etc/locale.gen && locale-gen

RUN sh -c "$(wget https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh -O -)" "" --unattended \
    && sed -i 's/ZSH_THEME="robbyrussell"/ZSH_THEME="lukerandall"/g' /root/.zshrc

CMD ["zsh"]
