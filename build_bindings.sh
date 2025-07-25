if [ ! -f extension_api.json];
then
	echo "Get extension_api.json first by launching godot engine with --dump-extension-api option"
else
	cd godot-cpp
	scons platform=linux custom_api_file=../extension_api.json
fi
