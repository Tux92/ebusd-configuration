# type (r[1-9];w;u),circuit,name,[comment],[QQ],ZZ,PBSB,[ID],field1,part (m/s),datatypes/templates,divider/values,unit,comment
# HC operation mode2,,,,,,,,,,,,,
*r,,,,,,"B511",,,,,,,
*uw,,,,,,"B510",,,,,,,
#uw,,SetMode,Operation Mode,,,,00,,,hcmode,,,,flowtempdesired,,temp1,,,,hwctempdesired,,temp1,,,,hwcflowtempdesired,,temp0,,,,,,IGN:1,,,,disablehc,,BI0,,,,disablehwctapping,,BI1,,,,disablehwcload,,BI2,,,,,,IGN:1,,,,remoteControlHcPump,,BI0,,,,releaseBackup,,BI1,,,,releaseCooling,,BI2,,,,
#uw,,SetMode,Operation Mode,,,,00,,,HEX:*
r,,Status00,Supply Temperature/unknown/Compressor modulation/Compressor State/Heating State/unknown/Defrost/Compressor Power,,,,00,SupplyTemp,,temp,,,,field2,,UCH,,,,CompressorModulation,,percent1,,,,CompressorState,,UCH,0=off;1=Heating Prerun;4=Heating;5=Heating Overrun;110=Defrosting,,,HeatingState,,UCH,8=off;9=Heating,,,field6,,UCH,,,,Defrost,,UCH,0=inactive;32=active,,,CompressorPower,,percent1,,,
r,,Status01,Supply Temperature/Return Temperature/Outside Temperature/HwC Temperature/Buffer Temperature/Pump status,,,,01,SupplyTemp,,temp1,,,,ReturnTemp,,temp1,,,,OutsideTemp,,temp2,,,,HwcTemp,,temp1,,,,BufferTemp,,temp1,,,,PumpStatus,,pumpstate,,,,
r,,Status07,Compressor Power/Daily Energy/StateA/StateB,,,,07,CompressorPower,,UCH,,%,,DailyEnergy,,energy,10,kWh,,StateA,,UCH,192=Eco mode HP off;193=Eco mode HP on;128=Normal mode HP off;129=Normal mode HP on;0=HP off;1=HP on,,,StateB,,UCH,0x00=ready;0x01=ready;0x0a=error;0x0b=error;0x08=heating;0x09=heating;0x10=cooling;0x11=cooling;0x80=heating_water;0x81=heating_water,,
*uw,,,,,,"B512",,,,,,,
uw,,StatusCirPump,Status circulation pump,,,,00,,,UCH,0=off;100=on,,