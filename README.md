# tipcoin [TIP, ]
http://tipcoin.com/

Tipcoin is like Bitcoin and Litecoin, but based on Dogecoin.
http://tipcoin.com/

Tipcoin is released under the terms of the MIT license.


#FAQ

# How many tipcoins can exist?
Total of 100,000,000,000 coins.

### How to mine tipcoins?
Scrypt Proof of Work

1 Minute Block Targets, 1 Hour Diff Readjustments

Special reward system: Random block rewards

1-50,000: 0-1,000,000 tipcoin Reward

50,001 — 100,000: 0-500,000 tipcoin Reward

100,001 — 150,000: 0-250,000 tipcoin Reward

150,001 — 200,000: 0-125,000 tipcoin Reward

200,001 — 250,000: 0-62,500 tipcoin Reward

250,001 - 300,000: 0-31,250 tipcoin Reward

300,000+ — 10,000 Reward (flat)

#Compiling tipcoind

    sudo apt-get install build-essential libssl-dev libdb5.1++-dev libboost-all-dev libqrencode-dev libminiupnpc-dev
    cd src
    make -f makefile.unix USE_UPNP=1 USE_IPV6=1 USE_QRCODE=1

#ports
RPC 55858
P2P 55859
