echo "Build all ChronicKernel variants"
echo "Make Mrproper"
make mrproper
./build-tmo.sh
echo "Make Mrproper"
make mrproper
./build-eur.sh
echo "Make Mrproper"
make mrproper
./build-att.sh
echo "Make Mrproper"
make mrproper
./build-vzw.sh
echo "Make Mrproper"
#make mrproper
#./build-spr.sh
echo "build All Branches Complete"
