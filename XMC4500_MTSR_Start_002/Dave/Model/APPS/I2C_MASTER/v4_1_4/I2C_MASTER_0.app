<?xml version="1.0" encoding="ASCII"?>
<ResourceModel:App xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:ResourceModel="http://www.infineon.com/Davex/Resource.ecore" name="I2C_MASTER" URI="http://resources/4.1.4/app/I2C_MASTER/0" description="Configures a USIC channel to perform transfer &amp; receive operations using I2C protocol." mode="NOTSHARABLE" version="4.1.4" minDaveVersion="4.0.0" instanceLabel="I2C_MASTER_0" appLabel="">
  <properties provideInit="true"/>
  <virtualSignals name="sda pin" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sdapad" hwSignal="pad" hwResource="//@hwResources.4"/>
  <virtualSignals name="scl pin" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sclpad" hwSignal="pad" hwResource="//@hwResources.5"/>
  <virtualSignals name="tx pin" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dout0" hwSignal="dout0" hwResource="//@hwResources.0"/>
  <virtualSignals name="rx pin" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dx0ins" hwSignal="dx0ins" hwResource="//@hwResources.0"/>
  <virtualSignals name="clockin" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dx1ins" hwSignal="dx1ins" hwResource="//@hwResources.0"/>
  <virtualSignals name="clockout" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_clkout" hwSignal="sclkout" hwResource="//@hwResources.0"/>
  <virtualSignals name="event_txbuffer_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_std_tx_int" hwSignal="transmit_buffer_int" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_rxbuffer_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_std_rx_int" hwSignal="standard_receive_int" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_altrx_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_alt_rx_int" hwSignal="alternate_receive_int" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_fifo_txbuffer_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_tx_int" hwSignal="standard_transmit_buffer_int" hwResource="//@hwResources.0"/>
  <virtualSignals name="event_fifo_rxbuffer_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_rx_int" hwSignal="standard_receive_buffer_int" hwResource="//@hwResources.0"/>
  <virtualSignals name="event_fifo_altrx_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_alt_rx_int" hwSignal="alternate_receive_buffer_int" hwResource="//@hwResources.0"/>
  <virtualSignals name="event_protocolspecific_interrupt" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_proto_specfic_int" hwSignal="protocol_specific_int" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="sr_transmit" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_tx_int" hwSignal="signal_in" hwResource="//@hwResources.1"/>
  <virtualSignals name="sr_receive" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_rx_int" hwSignal="signal_in" hwResource="//@hwResources.2"/>
  <virtualSignals name="sr_protocol_events" URI="http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_error_int" hwSignal="signal_in" hwResource="//@hwResources.3" required="false"/>
  <virtualSignals name="SDA_signal" URI="http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sdapad" hwSignal="pin" hwResource="//@hwResources.6"/>
  <virtualSignals name="SCL_signal" URI="http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sclpad" hwSignal="pin" hwResource="//@hwResources.7"/>
  <requiredApps URI="http://resources/4.1.4/app/I2C_MASTER/0/appres_clk_xmc4" requiredAppName="CLOCK_XMC4" requiringMode="SHARABLE">
    <downwardMapList xsi:type="ResourceModel:App" href="../../CLOCK_XMC4/v4_0_6/CLOCK_XMC4_0.app#/"/>
  </requiredApps>
  <requiredApps URI="http://resources/4.1.4/app/I2C_MASTER/0/appres_cpu" requiredAppName="CPU_CTRL_XMC4" requiringMode="SHARABLE">
    <downwardMapList xsi:type="ResourceModel:App" href="../../CPU_CTRL_XMC4/v4_0_4/CPU_CTRL_XMC4_0.app#/"/>
  </requiredApps>
  <hwResources name="Channel" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_usic_channel" resourceGroupUri="peripheral/usic/sv0/channel/*" solverVariable="true" mResGrpUri="peripheral/usic/sv0/channel/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/USIC2/USIC2_2.dd#//@provided.0"/>
    <solverVarMap index="2">
      <value variableName="sv0" solverValue="2"/>
    </solverVarMap>
    <solverVarMap index="2">
      <value variableName="sv0" solverValue="2"/>
    </solverVarMap>
  </hwResources>
  <hwResources name="NVIC Node Tx" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_nvic_node_i2c_tx" resourceGroupUri="peripheral/cpu/0/nvic/interrupt/*" mResGrpUri="peripheral/cpu/0/nvic/interrupt/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CPU/CPU_0.dd#//@provided.7"/>
  </hwResources>
  <hwResources name="NVIC Node Rx" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_nvic_node_i2c_rx" resourceGroupUri="peripheral/cpu/0/nvic/interrupt/*" mResGrpUri="peripheral/cpu/0/nvic/interrupt/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CPU/CPU_0.dd#//@provided.4"/>
  </hwResources>
  <hwResources name="NVIC Node Error" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_nvic_node_i2c_error" resourceGroupUri="" required="false" mResGrpUri="peripheral/cpu/0/nvic/interrupt/*"/>
  <hwResources name="SDA" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_i2c_sda" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port5/Port5_5.dd#//@provided.0"/>
  </hwResources>
  <hwResources name="SCL" URI="http://resources/4.1.4/app/I2C_MASTER/0/hwres_i2c_scl" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port5/Port5_5.dd#//@provided.1"/>
  </hwResources>
  <hwResources name="SDA" URI="http://resources/4.1.4/app/I2C_MASTER/0/__pin_hwres_i2c_sda" resourceGroupUri="devicepackage/0/58" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.2"/>
  </hwResources>
  <hwResources name="SCL" URI="http://resources/4.1.4/app/I2C_MASTER/0/__pin_hwres_i2c_scl" resourceGroupUri="devicepackage/0/56" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.1"/>
  </hwResources>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dout0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sdapad" systemDefined="true" sourceSignal="tx pin" targetSignal="sda pin" srcVirtualSignal="//@virtualSignals.2" targetVirtualSignal="//@virtualSignals.0"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sdapad/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dx0ins" systemDefined="true" sourceSignal="sda pin" targetSignal="rx pin" srcVirtualSignal="//@virtualSignals.0" targetVirtualSignal="//@virtualSignals.3"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_clkout/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sclpad" systemDefined="true" sourceSignal="clockout" targetSignal="scl pin" srcVirtualSignal="//@virtualSignals.5" targetVirtualSignal="//@virtualSignals.1"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sclpad/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_dx1ins" systemDefined="true" sourceSignal="scl pin" targetSignal="clockin" srcVirtualSignal="//@virtualSignals.1" targetVirtualSignal="//@virtualSignals.4"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_std_tx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_tx_int" systemDefined="true" sourceSignal="event_txbuffer_interrupt" targetSignal="sr_transmit" required="false" srcVirtualSignal="//@virtualSignals.6" targetVirtualSignal="//@virtualSignals.13"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_std_rx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_rx_int" systemDefined="true" sourceSignal="event_rxbuffer_interrupt" targetSignal="sr_receive" required="false" srcVirtualSignal="//@virtualSignals.7" targetVirtualSignal="//@virtualSignals.14"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_alt_rx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_rx_int" systemDefined="true" sourceSignal="event_altrx_interrupt" targetSignal="sr_receive" required="false" srcVirtualSignal="//@virtualSignals.8" targetVirtualSignal="//@virtualSignals.14"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_tx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_tx_int" systemDefined="true" sourceSignal="event_fifo_txbuffer_interrupt" targetSignal="sr_transmit" srcVirtualSignal="//@virtualSignals.9" targetVirtualSignal="//@virtualSignals.13"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_rx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_rx_int" systemDefined="true" sourceSignal="event_fifo_rxbuffer_interrupt" targetSignal="sr_receive" srcVirtualSignal="//@virtualSignals.10" targetVirtualSignal="//@virtualSignals.14"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_fifo_alt_rx_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_rx_int" systemDefined="true" sourceSignal="event_fifo_altrx_interrupt" targetSignal="sr_receive" srcVirtualSignal="//@virtualSignals.11" targetVirtualSignal="//@virtualSignals.14"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_proto_specfic_int/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_error_int" systemDefined="true" sourceSignal="event_protocolspecific_interrupt" targetSignal="sr_protocol_events" required="false" srcVirtualSignal="//@virtualSignals.12" targetVirtualSignal="//@virtualSignals.15"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sdapad/http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sdapad" systemDefined="true" sourceSignal="sda pin" targetSignal="SDA_signal" srcVirtualSignal="//@virtualSignals.0" targetVirtualSignal="//@virtualSignals.16"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sdapad/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sdapad" systemDefined="true" sourceSignal="SDA_signal" targetSignal="sda pin" srcVirtualSignal="//@virtualSignals.16" targetVirtualSignal="//@virtualSignals.0"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sclpad/http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sclpad" systemDefined="true" sourceSignal="scl pin" targetSignal="SCL_signal" srcVirtualSignal="//@virtualSignals.1" targetVirtualSignal="//@virtualSignals.17"/>
  <connections URI="http://resources/4.1.4/app/I2C_MASTER/0/http://resources/4.1.4/app/I2C_MASTER/0/__pin_vs_i2c_sclpad/http://resources/4.1.4/app/I2C_MASTER/0/vs_i2c_sclpad" systemDefined="true" sourceSignal="SCL_signal" targetSignal="scl pin" srcVirtualSignal="//@virtualSignals.17" targetVirtualSignal="//@virtualSignals.1"/>
</ResourceModel:App>
