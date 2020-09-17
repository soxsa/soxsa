#include "rack.hpp" 

using namespace rack;
extern Plugin* pluginInstance;
extern Model* modelSoxsaMinilabIndicator;

struct jack : SvgPort{
jack() {
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance,"res/jack.svg")));
    }
};

struct jackOutput : SvgPort{
jackOutput() {
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance,"res/jackOutput.svg")));
    }
};

struct soxsaKnob1 : SvgKnob {
soxsaKnob1() {
    box.size = Vec(25, 25);
    minAngle = -0.75*M_PI;
    maxAngle = 0.75*M_PI;
    setSvg(APP->window->loadSvg(asset::plugin(pluginInstance,"res/soxsaKnob1.svg")));
    }
};



