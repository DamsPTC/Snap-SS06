/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fc52e0; end: 106fc52ef;  */

bool FUN_106fc52e0(int param_1)

{
  return param_1 - 1U < 5;
}



/* Entry: 106fc52f0; end: 106fc536b;  */

undefined * FUN_106fc52f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9a40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e94358,
                        &UNK_10de1d9de,&UNK_10de1da00,3,FUN_106fc536c,2);
    do {
      if (puRam00000001136c9a40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9a40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9a40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9a40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9a40;
}



/* Entry: 106fc536c; end: 106fc5377;  */

bool FUN_106fc536c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fc5378; end: 106fc53f3;  */

undefined * FUN_106fc5378(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9a48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e94378,
                        &UNK_10de1da0c,&UNK_10de1da78,5,FUN_106fc53f4,2);
    do {
      if (puRam00000001136c9a48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9a48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9a48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9a48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9a48;
}



/* Entry: 106fc53f4; end: 106fc53ff;  */

bool FUN_106fc53f4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fc5400; end: 106fc547b; +[VLKNrfWifiRequest descriptor] */

undefined * FUN_106fc5400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56200,
                        &PTR____CFConstantStringClassReference_110e94398,0x1131a60e0,0x1131a6678,4,
                        0x20,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9a50 = puVar1;
  }
  return puRam00000001136c9a50;
}



/* Entry: 106fc547c; end: 106fc54f7; +[VLKNrfAuthRequest descriptor] */

undefined * FUN_106fc547c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56250,
                        &PTR____CFConstantStringClassReference_110e943b8,0x1131a60e0,0x1131a62d0,2,
                        0x10,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9a58 = puVar1;
  }
  return puRam00000001136c9a58;
}



/* Entry: 106fc54f8; end: 106fc5573; +[VLKNrfAuthResponse descriptor] */

undefined * FUN_106fc54f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b562a0,
                        &PTR____CFConstantStringClassReference_110e943d8,0x1131a60e0,0x1131a6918,5,
                        0x18,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9a60 = puVar1;
  }
  return puRam00000001136c9a60;
}



/* Entry: 106fc5574; end: 106fc55ef; +[VLKNrfBluetoothRequest descriptor] */

undefined * FUN_106fc5574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b562f0,
                        &PTR____CFConstantStringClassReference_110e943f8,0x1131a60e0,0x1131a6500,3,
                        0x18,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9a68 = puVar1;
  }
  return puRam00000001136c9a68;
}



/* Entry: 106fc55f0; end: 106fc566b; +[VLKNrfTimeRequest descriptor] */

undefined * FUN_106fc55f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56340,
                        &PTR____CFConstantStringClassReference_110e94418,0x1131a60e0,
                        &PTR_DAT_1131a60f8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9a70 = puVar1;
  }
  return puRam00000001136c9a70;
}



/* Entry: 106fc566c; end: 106fc56e7; +[VLKNrfOTARequest descriptor] */

undefined * FUN_106fc566c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56390,
                        &PTR____CFConstantStringClassReference_110e94438,0x1131a60e0,
                        &PTR_DAT_1131a6578,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9a78 = puVar1;
  }
  return puRam00000001136c9a78;
}



/* Entry: 106fc56e8; end: 106fc574f; +[VLKNrfStatusRequest descriptor] */

void FUN_106fc56e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b563e0,
                        &PTR____CFConstantStringClassReference_110e94458,0x1131a60e0,0x1131a6198,1,8
                        ,0x1d);
    puRam00000001136c9a80 = puVar1;
  }
  return;
}



/* Entry: 106fc5750; end: 106fc57b7; +[VLKNrfActionRequest descriptor] */

void FUN_106fc5750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56430,
                        &PTR____CFConstantStringClassReference_110e94478,0x1131a60e0,0x1131a61c0,1,8
                        ,0x1d);
    puRam00000001136c9a88 = puVar1;
  }
  return;
}



/* Entry: 106fc57b8; end: 106fc5833; +[VLKNrfUserAssociationRequest descriptor] */

undefined * FUN_106fc57b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56480,
                        &PTR____CFConstantStringClassReference_110e94498,0x1131a60e0,
                        &PTR_DAT_1131a6118,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9a90 = puVar1;
  }
  return puRam00000001136c9a90;
}



/* Entry: 106fc5834; end: 106fc58af; +[VLKHardwareVersion descriptor] */

undefined * FUN_106fc5834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9a98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b564d0,
                        &PTR____CFConstantStringClassReference_110e944b8,0x1131a60e0,
                        &PTR_DAT_1131a6210,2,0xc,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9a98 = puVar1;
  }
  return puRam00000001136c9a98;
}



/* Entry: 106fc58b0; end: 106fc592b; +[VLKNrfGpsUpdateRequest descriptor] */

undefined * FUN_106fc58b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56520,
                        &PTR____CFConstantStringClassReference_110e944d8,0x1131a60e0,
                        &PTR_s_latitude_1131a6320,3,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9aa0 = puVar1;
  }
  return puRam00000001136c9aa0;
}



/* Entry: 106fc592c; end: 106fc5993; +[VLKNrfDeviceRenameRequest descriptor] */

void FUN_106fc592c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9aa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56570,
                        &PTR____CFConstantStringClassReference_110e944f8,0x1131a60e0,
                        &PTR_DAT_1131a6138,1,0x10,0x1c);
    puRam00000001136c9aa8 = puVar1;
  }
  return;
}



/* Entry: 106fc5994; end: 106fc5a0f; +[VLKNrfTemperatureReport descriptor] */

undefined * FUN_106fc5994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b565c0,
                        &PTR____CFConstantStringClassReference_110e94518,0x1131a60e0,
                        &PTR_DAT_1131a65f8,4,0x14,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9ab0 = puVar1;
  }
  return puRam00000001136c9ab0;
}



/* Entry: 106fc5a10; end: 106fc5a8b; +[VLKNrfDebugReport descriptor] */

undefined * FUN_106fc5a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56a70,
                        &PTR____CFConstantStringClassReference_110e94538,0x1131a60e0,
                        &PTR_DAT_1131a6718,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9ab8 = puVar1;
  }
  return puRam00000001136c9ab8;
}



/* Entry: 106fc5a8c; end: 106fc5b1f; +[VLKNrfDebugReport_AppError descriptor] */

undefined * FUN_106fc5a8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56a98,
                        &PTR____CFConstantStringClassReference_110e94558,0x1131a60e0,
                        &PTR_DAT_1131a6380,3,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b56a70);
    puRam00000001136c9ac0 = puVar1;
  }
  return puRam00000001136c9ac0;
}



/* Entry: 106fc5b20; end: 106fc5ba3; +[VLKNrfDebugReport_HardfaultError descriptor] */

undefined * FUN_106fc5b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56ac0,
                        &PTR____CFConstantStringClassReference_110e94578,0x1131a60e0,
                        &PTR_DAT_1131a6b70,8,0x24,0x1c);
    func_0x00010c228780();
    puRam00000001136c9ac8 = puVar1;
  }
  return puRam00000001136c9ac8;
}



/* Entry: 106fc5ba4; end: 106fc5c27; +[VLKNrfDebugReport_WatchdogTimeoutError descriptor] */

undefined * FUN_106fc5ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56ae8,
                        &PTR____CFConstantStringClassReference_110e94598,0x1131a60e0,
                        &PTR_DAT_1131a6158,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c9ad0 = puVar1;
  }
  return puRam00000001136c9ad0;
}



/* Entry: 106fc5c28; end: 106fc5cbb; +[VLKNrfDebugReport_AmbaError descriptor] */

undefined * FUN_106fc5c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56b10,
                        &PTR____CFConstantStringClassReference_110e937d8,0x1131a60e0,0x1131a67b8,4,
                        0x20,0x1d);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b56a70);
    puRam00000001136c9ad8 = puVar1;
  }
  return puRam00000001136c9ad8;
}



/* Entry: 106fc5cbc; end: 106fc5d3f; +[VLKNrfDebugReport_AmbaError_AmbaKernelError descriptor] */

undefined * FUN_106fc5cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56b38,
                        &PTR____CFConstantStringClassReference_110e945b8,0x1131a60e0,
                        &PTR_DAT_1131a63e0,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c9ae0 = puVar1;
  }
  return puRam00000001136c9ae0;
}



/* Entry: 106fc5d40; end: 106fc5dd3; +[VLKNrfDebugReport_AmbaError_AmbaAssertFailure descriptor] */

undefined * FUN_106fc5d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56b60,
                        &PTR____CFConstantStringClassReference_110e945d8,0x1131a60e0,
                        &PTR_DAT_1131a6250,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b56b10);
    puRam00000001136c9ae8 = puVar1;
  }
  return puRam00000001136c9ae8;
}



/* Entry: 106fc5dd4; end: 106fc5e4f; +[VLKNrfDiffUpdateRequest descriptor] */

undefined * FUN_106fc5dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56728,
                        &PTR____CFConstantStringClassReference_110e945f8,0x1131a60e0,0x1131a61e8,1,8
                        ,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9af0 = puVar1;
  }
  return puRam00000001136c9af0;
}



/* Entry: 106fc5e50; end: 106fc5ecb; +[VLKNrfBackgroundUpdateRequest descriptor] */

undefined * FUN_106fc5e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56778,
                        &PTR____CFConstantStringClassReference_110e94618,0x1131a60e0,0x1131a69e0,5,
                        0x20,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9af8 = puVar1;
  }
  return puRam00000001136c9af8;
}



/* Entry: 106fc5ecc; end: 106fc5f47; +[VLKNrfShellCmdRequest descriptor] */

undefined * FUN_106fc5ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b567c8,
                        &PTR____CFConstantStringClassReference_110e94638,0x1131a60e0,
                        &PTR_DAT_1131a6178,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b00 = puVar1;
  }
  return puRam00000001136c9b00;
}



/* Entry: 106fc5f48; end: 106fc5fc3; +[VLKNrfDiffUpdateResponse descriptor] */

undefined * FUN_106fc5f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56818,
                        &PTR____CFConstantStringClassReference_110e94658,0x1131a60e0,0x1131a6aa8,5,
                        0x18,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9b08 = puVar1;
  }
  return puRam00000001136c9b08;
}



/* Entry: 106fc5fc4; end: 106fc603f; +[VLKNrfBackgroundUpdateResponse descriptor] */

undefined * FUN_106fc5fc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56868,
                        &PTR____CFConstantStringClassReference_110e94678,0x1131a60e0,0x1131a6c70,8,
                        0x30,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9b10 = puVar1;
  }
  return puRam00000001136c9b10;
}



/* Entry: 106fc6040; end: 106fc60bb; +[VLKNrfBatteryInfo descriptor] */

undefined * FUN_106fc6040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b568b8,
                        &PTR____CFConstantStringClassReference_110e94698,0x1131a60e0,
                        &PTR_DAT_1131a6440,3,0xc,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b18 = puVar1;
  }
  return puRam00000001136c9b18;
}



/* Entry: 106fc60bc; end: 106fc6137; +[VLKAmbaFsStatus descriptor] */

undefined * FUN_106fc60bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56908,
                        &PTR____CFConstantStringClassReference_110e946b8,0x1131a60e0,
                        &PTR_DAT_1131a6290,2,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b20 = puVar1;
  }
  return puRam00000001136c9b20;
}



/* Entry: 106fc6138; end: 106fc61b3; +[VLKNrfEventLogData descriptor] */

undefined * FUN_106fc6138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56958,
                        &PTR____CFConstantStringClassReference_110e946d8,0x1131a60e0,
                        &PTR_DAT_1131a64a0,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b28 = puVar1;
  }
  return puRam00000001136c9b28;
}



/* Entry: 106fc61b4; end: 106fc622f; +[VLKNrfFirmwareVersionInfo descriptor] */

undefined * FUN_106fc61b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b569a8,
                        &PTR____CFConstantStringClassReference_110e946f8,0x1131a60e0,
                        &PTR_DAT_1131a6858,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b30 = puVar1;
  }
  return puRam00000001136c9b30;
}



/* Entry: 106fc6230; end: 106fc62ab; +[VLKNrfRequest descriptor] */

undefined * FUN_106fc6230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b569f8,
                        &PTR____CFConstantStringClassReference_110e94718,0x1131a60e0,
                        &PTR_DAT_1131a6db0,0xe,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9b38 = puVar1;
  }
  return puRam00000001136c9b38;
}



/* Entry: 106fc62ac; end: 106fc632b; +[VLKNrfResponse descriptor] */

undefined * FUN_106fc62ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56a48,
                        &PTR____CFConstantStringClassReference_110e94738,0x1131a60e0,0x1131a5af0,
                        0x26,0xd0,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c9b40 = puVar1;
  }
  return puRam00000001136c9b40;
}



/* Entry: 106fc632c; end: 106fc637b; +[SCSpectaclesRpcInvocation git:] */

void FUN_106fc632c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc637c; end: 106fc63cb; +[SCSpectaclesRpcInvocation boardId:] */

void FUN_106fc637c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc63cc; end: 106fc641b; +[SCSpectaclesRpcInvocation setName:] */

void FUN_106fc63cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc641c; end: 106fc646b; +[SCSpectaclesRpcInvocation advertise:] */

void FUN_106fc641c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc646c; end: 106fc64bb; +[SCSpectaclesRpcInvocation amba:] */

void FUN_106fc646c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc64bc; end: 106fc650b; +[SCSpectaclesRpcInvocation flash:] */

void FUN_106fc64bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc650c; end: 106fc655b; +[SCSpectaclesRpcInvocation setLed:] */

void FUN_106fc650c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc655c; end: 106fc65ab; +[SCSpectaclesRpcInvocation setLeds:] */

void FUN_106fc655c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc65ac; end: 106fc65fb; +[SCSpectaclesRpcInvocation anim:] */

void FUN_106fc65ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc65fc; end: 106fc664b; +[SCSpectaclesRpcInvocation als:] */

void FUN_106fc65fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc664c; end: 106fc669b; +[SCSpectaclesRpcInvocation setTime:] */

void FUN_106fc664c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc669c; end: 106fc66eb; +[SCSpectaclesRpcInvocation getSerialNumber:] */

void FUN_106fc669c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc66ec; end: 106fc673b; +[SCSpectaclesRpcInvocation getName:] */

void FUN_106fc66ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc673c; end: 106fc678b; +[SCSpectaclesRpcInvocation getBleAddr:] */

void FUN_106fc673c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc678c; end: 106fc67db; +[SCSpectaclesRpcInvocation getWifiState:] */

void FUN_106fc678c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc67dc; end: 106fc682b; +[SCSpectaclesRpcInvocation wifiStart:] */

void FUN_106fc67dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc682c; end: 106fc687b; +[SCSpectaclesRpcInvocation wifiStop:] */

void FUN_106fc682c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc687c; end: 106fc68cb; +[SCSpectaclesRpcInvocation getTemperature:] */

void FUN_106fc687c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc68cc; end: 106fc691b; +[SCSpectaclesRpcInvocation imu:] */

void FUN_106fc68cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc691c; end: 106fc696b; +[SCSpectaclesRpcInvocation ambaGit:] */

void FUN_106fc691c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc696c; end: 106fc69bb; +[SCSpectaclesRpcInvocation authChipTest:] */

void FUN_106fc696c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc69bc; end: 106fc6a0b; +[SCSpectaclesRpcInvocation getFrameColor:] */

void FUN_106fc69bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6a0c; end: 106fc6a5b; +[SCSpectaclesRpcInvocation getAlsCalib:] */

void FUN_106fc6a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6a5c; end: 106fc6aab; +[SCSpectaclesRpcInvocation batteryStatus:] */

void FUN_106fc6a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6aac; end: 106fc6afb; +[SCSpectaclesRpcInvocation watchdog:] */

void FUN_106fc6aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6afc; end: 106fc6b4b; +[SCSpectaclesRpcInvocation halt:] */

void FUN_106fc6afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6b4c; end: 106fc6b9b; +[SCSpectaclesRpcInvocation shipmode:] */

void FUN_106fc6b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6b9c; end: 106fc6beb; +[SCSpectaclesRpcInvocation bug:] */

void FUN_106fc6b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6bec; end: 106fc6c3b; +[SCSpectaclesRpcInvocation getCameraTemperature:] */

void FUN_106fc6bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6c3c; end: 106fc6c8b; +[SCSpectaclesRpcInvocation getMediaCounts:] */

void FUN_106fc6c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6c8c; end: 106fc6cdb; +[SCSpectaclesRpcInvocation getResetReason:] */

void FUN_106fc6c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6cdc; end: 106fc6d2b; +[SCSpectaclesRpcInvocation bluetoothStart:] */

void FUN_106fc6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6d2c; end: 106fc6d7b; +[SCSpectaclesRpcInvocation bluetoothStop:] */

void FUN_106fc6d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6d7c; end: 106fc6dcb; +[SCSpectaclesRpcInvocation getFirmwareUpdateHash:] */

void FUN_106fc6d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6dcc; end: 106fc6e1b; +[SCSpectaclesRpcInvocation surfaceFirmwareRecoveryImage:] */

void FUN_106fc6dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6e1c; end: 106fc6e6b; +[SCSpectaclesRpcInvocation applyFirmwareDelta:] */

void FUN_106fc6e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6e6c; end: 106fc6ebb; +[SCSpectaclesRpcInvocation untarFirmwareImage:] */

void FUN_106fc6e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6ebc; end: 106fc6f0b; +[SCSpectaclesRpcInvocation cancelBackgroundUpdate:] */

void FUN_106fc6ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6f0c; end: 106fc6f5b; +[SCSpectaclesRpcInvocation getBackgroundUpdateParams:] */

void FUN_106fc6f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6f5c; end: 106fc6fab; +[SCSpectaclesRpcInvocation scheduleBackgroundUpdate:] */

void FUN_106fc6f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6fac; end: 106fc6ffb; +[SCSpectaclesRpcInvocation feedWatchdog:] */

void FUN_106fc6fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc6ffc; end: 106fc704b; +[SCSpectaclesRpcInvocation clearBug:] */

void FUN_106fc6ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc704c; end: 106fc709b; +[SCSpectaclesRpcInvocation keyExchange:] */

void FUN_106fc704c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc709c; end: 106fc70eb; +[SCSpectaclesRpcInvocation encryptionSetupNonceExchange:] */

void FUN_106fc709c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc70ec; end: 106fc713b; +[SCSpectaclesRpcInvocation peerVerification:] */

void FUN_106fc70ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc713c; end: 106fc718b; +[SCSpectaclesRpcInvocation userAssociation:] */

void FUN_106fc713c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc718c; end: 106fc71db; +[SCSpectaclesRpcInvocation updateGPSRequest:] */

void FUN_106fc718c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc71dc; end: 106fc722b; +[SCSpectaclesRpcInvocation getClientID:] */

void FUN_106fc71dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc722c; end: 106fc727b; +[SCSpectaclesRpcInvocation setAuthzCode:] */

void FUN_106fc722c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc727c; end: 106fc72cb; +[SCSpectaclesRpcInvocation revokeRefreshToken:] */

void FUN_106fc727c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc72cc; end: 106fc731b; +[SCSpectaclesRpcInvocation setWifiAP:] */

void FUN_106fc72cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc731c; end: 106fc736b; +[SCSpectaclesRpcInvocation getWifiAPList:] */

void FUN_106fc731c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc736c; end: 106fc73bb; +[SCSpectaclesRpcInvocation setWifiAPList:] */

void FUN_106fc736c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc73bc; end: 106fc740b; +[SCSpectaclesRpcInvocation getUploadToClientStatus:] */

void FUN_106fc73bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc740c; end: 106fc745b; +[SCSpectaclesRpcInvocation startUploadToClient:] */

void FUN_106fc740c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc745c; end: 106fc74ab; +[SCSpectaclesRpcInvocation clearContent:] */

void FUN_106fc745c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc74ac; end: 106fc74fb; +[SCSpectaclesRpcInvocation chargerState:] */

void FUN_106fc74ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc74fc; end: 106fc754b; +[SCSpectaclesRpcInvocation getUserMediaCounts:] */

void FUN_106fc74fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc754c; end: 106fc759b; +[SCSpectaclesRpcInvocation pairingWaitForUser:] */

void FUN_106fc754c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc759c; end: 106fc75eb; +[SCSpectaclesRpcInvocation enableHevc:] */

void FUN_106fc759c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc75ec; end: 106fc763b; +[SCSpectaclesRpcInvocation getLastCloudUploadTime:] */

void FUN_106fc75ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc763c; end: 106fc768b; +[SCSpectaclesRpcInvocation availableStoragePercentage:] */

void FUN_106fc763c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc768c; end: 106fc76db; +[SCSpectaclesRpcInvocation unpair:] */

void FUN_106fc768c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fc76dc; end: 106fc772b; +[SCSpectaclesRpcInvocation getAlsWeights:] */

void FUN_106fc76dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ad8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02bd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


