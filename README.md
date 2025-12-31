How to setup this repo

## Install
curl -fsSL https://install.qmk.fm | sh

## link to qmk
ln -s ~/src/qmk_firmware/keyboards/crkbd/rev1/keymaps/kblack0610 ~/qmk_firmware/keyboards/crkbd/keymaps/kblack0610

## Setup with this repo
make sure to setup qmk to src:

`qmk setup`
`qmk setup -H <location>`

qmk compile and flash specific keyboards


