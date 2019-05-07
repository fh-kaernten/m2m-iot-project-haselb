<?xml version="1.0" encoding="ASCII"?>
<ResourceModel:App xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:ResourceModel="http://www.infineon.com/Davex/Resource.ecore" name="CPU_CTRL_XMC4" URI="http://resources/4.0.4/app/CPU_CTRL_XMC4/0" description="Defines the number of bits assigned to preemption priority and subpriority." version="4.0.4" minDaveVersion="4.0.0" instanceLabel="CPU_CTRL_XMC4_0" appLabel="">
  <upwardMapList xsi:type="ResourceModel:RequiredApp" href="../../I2C_MASTER/v4_1_4/I2C_MASTER_0.app#//@requiredApps.1"/>
  <upwardMapList xsi:type="ResourceModel:RequiredApp" href="../../INTERRUPT/v4_0_4/INTERRUPT_0.app#//@requiredApps.0"/>
  <upwardMapList xsi:type="ResourceModel:RequiredApp" href="../../GLOBAL_SCU_XMC4/v4_1_4/GLOBAL_SCU_XMC4_0.app#//@requiredApps.0"/>
  <upwardMapList xsi:type="ResourceModel:RequiredApp" href="../../SYSTIMER/v4_1_16/SYSTIMER_0.app#//@requiredApps.1"/>
  <properties singleton="true" provideInit="true" sharable="true"/>
  <hwResources name="system_control" URI="http://resources/4.0.4/app/CPU_CTRL_XMC4/0/hwres_cpu" resourceGroupUri="peripheral/cpu/0/system_control" mResGrpUri="peripheral/cpu/0/system_control">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CPU/CPU_0.dd#//@provided.3"/>
  </hwResources>
</ResourceModel:App>
