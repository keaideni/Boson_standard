#!/bin/sh

mkdir Corr
mkdir data
mkdir result

cat > data/QNosave.txt <<EOF
LatticeSize= 20
ParticleNo= 5
SiteNo= 2
DeltaQL= 2
DeltaQR= 3
D= 200
SweepNo= 3
EdgeCondition= 1
Energy= 0
Wz= 1
Wc= 1
gr= 0.015
gl= 0.015
EOF
