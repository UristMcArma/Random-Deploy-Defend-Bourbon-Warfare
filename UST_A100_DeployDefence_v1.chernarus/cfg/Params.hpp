class Params {
  class BWMF_ParamWeather {
    title = "Weather";
    function = "potato_missionModules_fnc_setWeather";

    values[] = {0,1,2,3,4,5,6,7,8};
    texts[] = {"Clear (Calm)", "Cloudy (Light Winds)", "Cloudy (Strong Winds)", "Overcast (Calm)", "Overcast (Light Winds)", "Overcast (Strong Winds)", "Rain (Light Winds)", "Rain (Strong Winds)", "Storm"};
    default = -1;
  };
  class BWMF_ParamFog {
    title = "Fog";
    function = "potato_missionModules_fnc_setFog";

    values[] = {0,0.2,0.4,0.6};
    texts[] = {"None","Light","Medium","Heavy"};
    default = -1;
  };
  class BWMF_ParamTimeOfDay {
    title = "Time of Day";
    function = "potato_missionModules_fnc_setTime";

    values[] = {0,1,2,3,4,5,6,7};
    texts[] = {"Dawn", "Early Morning", "Morning", "Noon", "Afternoon", "Evening", "Dusk", "Night"};
    default = -1;
  };
};
