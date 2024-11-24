#include "AudioTools.h"
#include "BluetoothA2DPSinkQueued.h"
#include "A2DPVolumeControl.h"

I2SStream i2s;
BluetoothA2DPSinkQueued a2dp_sink(i2s);

void setup() {
    auto cfg = i2s.defaultConfig();
    cfg.pin_bck = 14;
    cfg.pin_ws = 15;
    cfg.pin_data = 22;
    cfg.pin_mck = 0;
    i2s.begin(cfg);
    a2dp_sink.set_volume(20);
    a2dp_sink.start("MyMusic");
}

void loop() {
}