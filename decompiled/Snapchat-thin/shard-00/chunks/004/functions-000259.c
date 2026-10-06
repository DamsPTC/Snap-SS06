/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005d3404; end: 1005d3433;  */

void FUN_1005d3404(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aa8b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1005d3434; end: 1005d34b3; -[SCCameraNavigationServicesImpl init] */

undefined1 * FUN_1005d3434(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed960;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005d34b4; end: 1005d34d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d34b4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273e3d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d34d8; end: 1005d351f; -[SCCameraNavigationServicesImpl didLaunchCamera:] */

void FUN_1005d34d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3e15c(uVar2);
  func_0x000107c61180();
  func_0x000107c4d664(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1005d3520; end: 1005d3543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d3520(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273e3e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d3544; end: 1005d36a7; -[SCCameraUIServicesEntryPoint _toSnappableMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d3544(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1;
  FUN_1005d3520();
  func_0x000107c61180();
  lVar1 = lVar8;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4193c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11273e3e8;
    func_0x000107c61148(lVar8);
  }
  lVar1 = lVar8;
  func_0x000107c5cb40(lVar8);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = param_1;
  FUN_1005d34b4(param_1);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c4d534();
  FUN_1005d34b4(param_1);
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c519ac();
  func_0x0001005d3b6c();
  lVar7 = lVar2;
  func_0x000107c40bdc(lVar2,param_2,lVar5,lVar6,lVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1005d36a8; end: 1005d36af; -[SCCameraStabilityServices toSnappableMonitorFactory] */

undefined8 FUN_1005d36a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005d36b0; end: 1005d398b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d36b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126c7708;
    func_0x000107c610f4(PTR_PTR_1126c7708);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar1 + _DAT_11273e22c;
    func_0x000107c61148();
    lVar4 = lVar3;
    func_0x000107c5036c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    lVar7 = lVar1 + _DAT_11273e230;
    func_0x000107c61148();
    lVar8 = lVar7;
    func_0x000107c3f0f4();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c3f5f0();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c3f5ec();
    func_0x000107c61180();
    lVar12 = lVar1 + _DAT_11273e238;
    func_0x000107c61148();
    lVar13 = lVar12;
    func_0x000107c4e288();
    func_0x000107c61180();
    lVar14 = lVar1 + _DAT_11273e23c;
    func_0x000107c61148();
    lVar15 = lVar14;
    func_0x000107c42eb4();
    func_0x000107c61180();
    lVar16 = lVar1 + _DAT_11273e230;
    func_0x000107c61148();
    lVar17 = lVar16;
    func_0x000107c3f0f4();
    func_0x000107c61180();
    lVar18 = lVar17;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar19 = lVar1 + _DAT_11273e230;
    func_0x000107c61148();
    lVar20 = lVar19;
    func_0x000107c3f598();
    func_0x000107c61180();
    lVar21 = lVar1 + _DAT_11273e234;
    func_0x000107c61148();
    lVar22 = lVar21;
    func_0x000107c5bca0();
    func_0x000107c61180();
    lVar23 = lVar22;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar24 = lVar23;
    func_0x000107c3f0ec();
    func_0x000107c61180();
    func_0x000107c4896c(0x4010000000000000,puVar25,param_2,uVar2,lVar6,lVar11,lVar13,lVar15,lVar18,
                        lVar20,lVar24);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1005d398c; end: 1005d3993; -[SCCameraHardwareResourceImpl captureSessionFixer] */

undefined8 FUN_1005d398c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1005d3994; end: 1005d3b4b; -[SCCameraToSnappableStabilityMonitorFactoryImpl initWithStabilityLogger:timeoutDuration:hardwareRequestHandlerUpdatesObservable:captureSessionFixEventObservable:pageLoadMetricManager:featureStartupEventBus:hardwareResource:captureDeviceManager:cameraHardwareConfiguration:] */

undefined1 *
FUN_1005d3994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_78 = PTR_PTR_1126ef708;
  uStack_80 = param_2;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d3b4c; end: 1005d3b5b; -[_TtC15SCCameraUIScope15SCCameraUIScope navigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005d3b4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082428);
}



/* Entry: 1005d3b5c; end: 1005d3b8b; -[_TtC15SCCameraUIScope15SCCameraUIScope scopedCameraType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005d3b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082430);
}



/* Entry: 1005d3b8c; end: 1005d3bff; -[SCCameraToSnappableStabilityMonitorFactoryImpl createToSnappableStabilityMonitorWithNavigationType:cameraType:devicePosition:] */

void FUN_1005d3b8c(long param_1)

{
  func_0x000107c610f4(PTR_PTR_1126c7720);
  func_0x000107c45494(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d3c00; end: 1005d3c1b;  */

void FUN_1005d3c00(void)

{
  if (lRam0000000112ed6898 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e706698);
  return;
}



/* Entry: 1005d3c1c; end: 1005d3c4b;  */

void FUN_1005d3c1c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1005d3c4c; end: 1005d3d87;  */

void FUN_1005d3c4c(long param_1)

{
  long lVar1;
  
  if (lRam0000000112ed68a8 == 0) {
    lVar1 = 0xff;
    FUN_1005d3d88();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112ed68a8 = param_1;
    }
  }
  return;
}



/* Entry: 1005d3d88; end: 1005d3d9b;  */

void FUN_1005d3d88(undefined8 param_1)

{
  if (lRam0000000112ed6908 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7066f0);
  return;
}



/* Entry: 1005d3d9c; end: 1005d3e5f;  */

void FUN_1005d3d9c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_118 = &UNK_10db00eb0;
  puStack_110 = &UNK_10db00f10;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_f8 = &UNK_10db00eb0;
  puStack_e8 = &UNK_10db00f10;
  lVar2 = 0x13f;
  puStack_108 = puVar1;
  puStack_100 = puVar1;
  puStack_f0 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_e0 = *(long *)(lVar2 + -8) + 0x40;
    puStack_88 = &UNK_10db00f10;
    puStack_80 = &UNK_10db00f10;
    puStack_78 = &UNK_10db00f10;
    puStack_70 = &UNK_10db00f10;
    puStack_68 = &UNK_10db00f10;
    puStack_60 = &UNK_10db00f10;
    puStack_58 = &UNK_10db00f10;
    puStack_50 = &UNK_10db00f10;
    puStack_48 = &UNK_10db00f10;
    puStack_40 = &UNK_10db00f10;
    puStack_38 = &UNK_10db00f10;
    puStack_d8 = puVar1;
    puStack_d0 = puVar1;
    puStack_c8 = puVar1;
    puStack_c0 = puVar1;
    puStack_b8 = puVar1;
    puStack_b0 = puVar1;
    puStack_a8 = puVar1;
    puStack_a0 = puVar1;
    puStack_98 = puVar1;
    puStack_90 = puVar1;
    func_0x000107c6153c(param_1,0x100,0x1d,&puStack_118,param_1 + 0x10);
  }
  return;
}



/* Entry: 1005d3e60; end: 1005d45af; -[SCCameraToSnappableStabilityMonitorImpl initWith:timeoutDuration:navigationType:cameraType:devicePosition:captureDeviceManager:cameraHardwareConfiguration:hardwareRequestHandlerUpdatesObservable:captureSessionFixEventObservable:pageLoadMetricManager:hardwareResource:featureStartupEventBus:] */

void FUN_1005d3e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x0001005d3f50(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14);
  return;
}



/* Entry: 1005d45b0; end: 1005d45bb;  */

void FUN_1005d45b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_11034f520)();
  return;
}



/* Entry: 1005d45bc; end: 1005d462f;  */

void FUN_1005d45bc(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001005d462c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x2c),param_2,param_2,lVar1);
  return;
}



/* Entry: 1005d4630; end: 1005d466b;  */

void FUN_1005d4630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005d466c; end: 1005d467f;  */

void FUN_1005d466c(void)

{
  func_0x0001005d4650();
  return;
}



/* Entry: 1005d4680; end: 1005d468b;  */

undefined1  [16] FUN_1005d4680(void)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_10f76f24b;
  func_0x000107c613d0();
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_10f76f24b;
  return auVar2;
}



/* Entry: 1005d468c; end: 1005d4713;  */

ulong FUN_1005d468c(ulong param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char *unaff_x19;
  ulong *unaff_x21;
  ulong uStack_38;
  
  if (param_2 != param_3) {
    FUN_1003a9c70();
    while( true ) {
      puVar1 = &uStack_38;
      func_0x0001003a9cc0();
      FUN_1005d4714();
      if ((param_1 & 1) == 0) break;
      if (((char *)(uStack_38 + 1) == unaff_x19) || (*(char *)(uStack_38 + 1) != '}')) {
        func_0x000107c3aaac();
        func_0x000107c610ac();
        *puVar1 = param_1;
        return (ulong)(param_1 != 0);
      }
      param_1 = *unaff_x21;
      FUN_1003a9c38();
    }
    param_1 = *unaff_x21;
    func_0x0001003ac6ac(param_1);
    FUN_1003a9c38();
  }
  return param_1;
}



/* Entry: 1005d4714; end: 1005d4747;  */

bool FUN_1005d4714(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  func_0x000107c610ac(param_1,param_3,param_2 - param_1);
  *param_4 = param_1;
  return param_1 != 0;
}



/* Entry: 1005d4748; end: 1005d474f;  */

void FUN_1005d4748(void)

{
  return;
}



/* Entry: 1005d4750; end: 1005d47db;  */

undefined8 FUN_1005d4750(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 unaff_x23;
  
  uVar2 = (uint)param_2;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  puVar3 = (undefined1 *)(ulong)uVar1;
  func_0x00010054bacc();
  FUN_1005d47dc(param_2 >> 0x1f & 1);
  func_0x0001005d47ec();
  if (puVar3 == (undefined1 *)0x0) {
    if ((int)uVar2 < 0) {
      func_0x000107c3a9dc(0x2d);
    }
    func_0x000107c31788();
  }
  else {
    if ((int)uVar2 < 0) {
      *puVar3 = 0x2d;
    }
    FUN_10054bb78();
    unaff_x23 = param_1;
  }
  return unaff_x23;
}



/* Entry: 1005d47dc; end: 1005d480b;  */

void FUN_1005d47dc(long param_1,int param_2)

{
  long unaff_x21;
  
  if (*(ulong *)(unaff_x21 + 0x18) < (ulong)(*(long *)(unaff_x21 + 0x10) + param_1 + param_2)) {
    func_0x0001006769e0();
  }
  return;
}



/* Entry: 1005d480c; end: 1005d4853;  */

ulong FUN_1005d480c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar3;
  
  FUN_100153eb4();
  uVar3 = (ulong)*(char *)(param_1 + 0x17);
  puVar2 = unaff_x21;
  if ((long)uVar3 < 0) {
    puVar2 = (undefined8 *)*unaff_x21;
    uVar3 = unaff_x21[1];
  }
  func_0x000107c613d0();
  func_0x0001001539c4();
  if (uVar3 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (unaff_x20 != 0) {
    lVar1 = (long)puVar2 + param_4;
    FUN_1003b0714(lVar1,(long)puVar2 + uVar3);
    param_4 = lVar1 - (long)puVar2;
    if (lVar1 == (long)puVar2 + uVar3) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 1005d4854; end: 1005d4873;  */

void FUN_1005d4854(void)

{
  func_0x000107c61168(&PTR_PTR_112ed6ab0);
  return;
}



/* Entry: 1005d4874; end: 1005d4883;  */

void FUN_1005d4874(void)

{
  return;
}



/* Entry: 1005d4884; end: 1005d48ef;  */

void FUN_1005d4884(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto FUN_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed69d0;
  plVar5 = (long *)&UNK_10db00f88;
FUN_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1005d48f0; end: 1005d4e8b;  */

long FUN_1005d48f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_f0 [18];
  
  plVar3 = alStack_f0;
  plVar6 = alStack_f0;
  plVar7 = alStack_f0;
  plVar8 = alStack_f0;
  plVar9 = alStack_f0;
  plVar10 = alStack_f0;
  plVar11 = alStack_f0;
  plVar12 = alStack_f0;
  plVar13 = alStack_f0;
  plVar14 = alStack_f0;
  plVar15 = alStack_f0;
  plVar16 = alStack_f0;
  plVar17 = alStack_f0;
  lVar1 = param_1;
  FUN_1005d4884();
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 0x1b;
  *(undefined8 *)(lVar1 + 0x10) = 0xd;
  lVar2 = param_1;
  func_0x000107c614f0(param_1);
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar4 = PTR_PTR_1126c7878;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar3);
  *(undefined8 *)(lVar1 + 0x20) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar6);
  *(undefined **)(lVar1 + 0x28) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar7);
  *(undefined **)(lVar1 + 0x30) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar8);
  *(undefined **)(lVar1 + 0x38) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar9);
  *(undefined **)(lVar1 + 0x40) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar10);
  *(undefined **)(lVar1 + 0x48) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar11);
  *(undefined **)(lVar1 + 0x50) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar12);
  *(undefined **)(lVar1 + 0x58) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar13);
  *(undefined **)(lVar1 + 0x60) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar14);
  *(undefined **)(lVar1 + 0x68) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar15);
  *(undefined **)(lVar1 + 0x70) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_f0,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar16);
  *(undefined **)(lVar1 + 0x78) = puVar5;
  alStack_f0[0] = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c605b0(alStack_f0,lVar2);
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar17);
  *(undefined **)(lVar1 + 0x80) = puVar4;
  lVar2 = lVar1;
  FUN_1005d4fe0(lVar1);
  func_0x000107c61588(lVar1);
  uVar19 = *(undefined8 *)(lVar1 + 0x10);
  uVar18 = 0;
  FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),uVar19,uVar18);
  return lVar2;
}



/* Entry: 1005d4e8c; end: 1005d4ecb;  */

void FUN_1005d4e8c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1005d4ecc; end: 1005d4f47; +[SCStateMachineTransition transitionWithFromState:toState:onEvent:action:target:] */

void FUN_1005d4ecc(void)

{
  undefined *puVar1;
  undefined8 in_x6;
  
  puVar1 = PTR_PTR_1126c7878;
  func_0x000107c61174(in_x6);
  func_0x000107c610f4(puVar1);
  func_0x000107c3ba0c();
  func_0x000107c61170(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005d4f48; end: 1005d4fdf; -[SCStateMachineTransition _initWithFromState:toState:onEvent:action:target:] */

undefined1 *
FUN_1005d4f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112702fe8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_7);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  func_0x000107c61170(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d4fe0; end: 1005d511b;  */

void FUN_1005d4fe0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
  uVar4 = uVar3;
  FUN_1005d511c();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d5108);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x0001029efb3c(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d5104);
        (*pcVar2)();
      }
      FUN_1005d5170(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 1005d511c; end: 1005d516f;  */

void FUN_1005d511c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ed6860 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1005d4e8c(0xff,0x112ed6790,&PTR_PTR_1126c7878);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112ed6860 = puVar2;
  return;
}



/* Entry: 1005d5170; end: 1005d550f;  */

undefined8 FUN_1005d5170(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x0001005d53b8();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d53b8);
      (*pcVar1)();
    }
    func_0x0001029f3014(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      func_0x0001029f3564(uVar6 + 1);
      uVar3 = uStack_68;
    }
    func_0x0001029f3790(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 1005d5510; end: 1005d55f3; -[SCStateMachine initWithTransitions:initialState:name:logContext:] */

undefined1 *
FUN_1005d5510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112702fe0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c59840(puVar1);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar4 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    func_0x000107c61170(uVar3);
    *(undefined2 *)((long)puVar1 + 10) = param_6;
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c3ca50();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar4);
    *(undefined2 *)((long)puVar1 + 0xc) = 0x100;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d55f4; end: 1005d55fb; -[SCStateMachine setState:] */

void FUN_1005d55f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1005d55fc; end: 1005d581b; -[SCStateMachine _tableFromSet:] */

undefined * FUN_1005d55fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_140,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          func_0x000107c61128(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar3 = uVar7;
        func_0x000107c42a94(uVar7);
        func_0x000107c4d960(puVar4,param_2,uVar3);
        func_0x000107c61180();
        puVar5 = puVar1;
        func_0x000107c4d9e8(puVar1,param_2,puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        if (puVar5 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_f8 = uVar7;
          func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f8,1);
          func_0x000107c61180();
        }
        else {
          puVar4 = puVar5;
          func_0x000107c3e160(puVar5,param_2,uVar7);
          func_0x000107c61180();
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c42a94(uVar7);
        func_0x000107c4d960(puVar6,param_2,uVar7);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar1,param_2,puVar4,puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_140,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419a0(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_3 + 0x18);
}



/* Entry: 1005d581c; end: 1005d5823; -[SCStateMachineTransition event] */

undefined8 FUN_1005d581c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005d5824; end: 1005d5843;  */

void FUN_1005d5824(void)

{
  func_0x000107c61168(&PTR_PTR_112ed6630);
  return;
}



/* Entry: 1005d5844; end: 1005d5a27;  */

long FUN_1005d5844(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long alStack_90 [8];
  
  plVar3 = alStack_90;
  plVar6 = alStack_90;
  plVar7 = alStack_90;
  lVar1 = param_1;
  FUN_1005d4884();
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  lVar2 = param_1;
  func_0x000107c614f0(param_1);
  alStack_90[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_90,lVar2);
  puVar4 = PTR_PTR_1126c7878;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar3);
  *(undefined8 *)(lVar1 + 0x20) = puVar5;
  alStack_90[0] = param_1;
  func_0x000107c61174();
  func_0x000107c605b0(alStack_90,lVar2);
  puVar5 = puVar4;
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar6);
  *(undefined **)(lVar1 + 0x28) = puVar5;
  alStack_90[0] = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c605b0(alStack_90,lVar2);
  func_0x000107c5cf64();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(plVar7);
  *(undefined **)(lVar1 + 0x30) = puVar4;
  lVar2 = lVar1;
  FUN_1005d4fe0(lVar1);
  func_0x000107c61588(lVar1);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  uVar8 = 0;
  FUN_1005d4e8c(0,0x112ed6790,&PTR_PTR_1126c7878);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),uVar9,uVar8);
  return lVar2;
}



/* Entry: 1005d5a28; end: 1005d5a4b;  */

void FUN_1005d5a28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1005d5a4c; end: 1005d5a6f;  */

void FUN_1005d5a4c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d5a70; end: 1005d5a73;  */

void FUN_1005d5a70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1005d5a74; end: 1005d5b5f; -[SCCameraUIServicesEntryPoint _cameraFeaturePerformanceFeatureScopedLoggerFactoryWithNavigationTypeProvider:] */

void FUN_1005d5a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005d5b60; end: 1005d5d63; -[_TtC18SCCameraUIServices18SCCameraUIServices initWithCameraUIScopeViewContainer:cameraUIScopeViewContainerResolver:mainCameraViewControllerLifecycleBehaviorSubject:cameraService:cameraServicePromise:toSnappableStabilityMonitor:cameraFeaturePerformanceFeatureScopedLoggerFactory:cameraToolbarUIOrchestrator:cameraZoomIndicatorVisibilityBehaviorSubject:] */

void FUN_1005d5b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x0001005d5c4c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 1005d5d64; end: 1005d5d73; -[_TtC32SCCriticalSectionRegistryService32SCCriticalSectionRegistryService criticalSectionRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d5d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113097718));
  return;
}



/* Entry: 1005d5d74; end: 1005d5d83; -[_TtC15SCCameraUIScope15SCCameraUIScope viewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d5d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082480));
  return;
}



/* Entry: 1005d5d84; end: 1005d5d93; -[_TtC18SCCameraUIServices18SCCameraUIServices mainCameraViewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d5d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130385d8));
  return;
}



/* Entry: 1005d5d94; end: 1005d5db3; -[_TtC29SCCameraConfigurationServices29SCCameraConfigurationServices config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d5d94(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113081210));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d5db4; end: 1005d5dbb; -[SCCameraConfigurationImpl cameraLaunchingConfig] */

undefined8 FUN_1005d5db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1005d5dbc; end: 1005d5deb;  */

void FUN_1005d5dbc(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9c60);
  func_0x000107c45db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d5dec; end: 1005d5f6f; -[SCCameraLaunchingConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined8 *
FUN_1005d5dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e88b0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c3fa04();
    func_0x000107c61180();
    uVar5 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_58,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005d5f70; end: 1005d5fab; -[SCLazyPreloadedOnBackgroundThread target] */

void FUN_1005d5f70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701ac8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_target_112678178);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d5fac; end: 1005d5fb3; -[SCCameraCircumstanceEngineImpl circumstanceEngine] */

undefined8 FUN_1005d5fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005d5fb4; end: 1005d5ff3; -[SCCameraLaunchingConfigurationImpl preventUserInteractionDuringCameraLaunch] */

undefined8 FUN_1005d5fb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f0ac();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1005d5ff4; end: 1005d607b;  */

void FUN_1005d5ff4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c3b6a0(lVar1,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1005d607c; end: 1005d612b; -[SCCameraLaunchingConfigurationImpl _fetchConfigWithProvider:] */

void FUN_1005d607c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c4f558(param_3,param_2,&PTR____CFConstantStringClassReference_110de5378,0,0);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar2 = PTR_PTR_1126b9af0;
  func_0x000107c610f4(PTR_PTR_1126b9af0);
  func_0x000107c4636c();
  func_0x000107c61174(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005d612c; end: 1005d6193; +[CameraLaunchConfig descriptor] */

void FUN_1005d612c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc6d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3fd30,
                        &PTR____CFConstantStringClassReference_110de5938,
                        &PTR_s_snapchat_camera_1130df218,&PTR_DAT_1130df230,5,4,0x1c);
    puRam00000001136bc6d8 = puVar1;
  }
  return;
}



/* Entry: 1005d6194; end: 1005d62e7; -[SCameraUICriticalSectionMonitorImpl initWithCriticalSectionRegistry:videoDataSourceObservable:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:appLifecycleManager:shouldDisableUserInteractionDuringCameraLaunch:cameraUIScopeViewContainer:] */

undefined1 *
FUN_1005d6194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126ef780;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x48),param_4);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d62e8; end: 1005d6327; -[SCCameraLaunchingConfigurationImpl shouldSuspendIdleMonitorDuringMainCameraLaunch] */

undefined8 FUN_1005d62e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5adc8();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1005d6328; end: 1005d646b; -[SCCameraUIServicesEntryPoint _createHardwareRequestHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d6328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c7800;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  lVar2 = param_1;
  FUN_1005d34b4(param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5de90();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4c168(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  lVar5 = param_1;
  FUN_1005d3520(param_1);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c3f0f0();
  func_0x000107c61180();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_11273e3dc;
    func_0x000107c61148(lVar7);
  }
  lVar8 = lVar7;
  func_0x000107c3dfac(lVar7);
  func_0x000107c61180();
  func_0x000107c49504(puVar1,param_2,lVar3,uVar4,lVar6,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c3e740(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005d646c; end: 1005d647b; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices cameraHardwareOwnershipRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d646c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f80));
  return;
}



/* Entry: 1005d647c; end: 1005d6577; -[SCCameraUIHardwareOwnershipRequestHandler initWithViewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:requester:applicationLifecycleEvents:] */

undefined1 *
FUN_1005d647c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126ef770;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d6578; end: 1005d65ab; -[SCCameraUIHardwareOwnershipRequestHandler begin] */

void FUN_1005d6578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c3c95c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1005d65ac; end: 1005d69e3; -[SCCameraUIHardwareOwnershipRequestHandler _subcribe] */

void FUN_1005d65ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c61160(PTR_PTR_1126ae810);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_f8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_f0 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_100854550;
  puStack_108 = &UNK_11090b230;
  puStack_d8 = puStack_f0;
  puStack_b8 = puStack_f8;
  puStack_98 = puStack_100;
  func_0x000107c6111c(auStack_e8,auStack_80);
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1008babe4;
  puStack_148 = &UNK_11090b2a0;
  puStack_140 = &uStack_a0;
  func_0x000107c6111c(auStack_128,auStack_80);
  puStack_138 = &uStack_c0;
  puStack_130 = &uStack_e0;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5e370(uVar3);
  func_0x000107c61180();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_10608de58;
  puStack_180 = &UNK_11090b2d0;
  puStack_178 = &uStack_c0;
  puStack_170 = &uStack_a0;
  func_0x000107c6111c(auStack_168,auStack_80);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c41b80(uVar3);
  func_0x000107c61180();
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  puStack_1b8 = &UNK_10608dea8;
  puStack_1b0 = &UNK_1108e4dc0;
  puStack_1a8 = &uStack_c0;
  func_0x000107c6111c(auStack_1a0,auStack_80);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c419f0(uVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_1d0,auStack_80);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5e39c(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_1d0);
  func_0x000107c61120(auStack_1a0);
  func_0x000107c61120(auStack_168);
  func_0x000107c61120(auStack_128);
  func_0x000107c61120(auStack_e8);
  func_0x000107c60bcc(&uStack_e0,8);
  func_0x000107c60bcc(&uStack_c0,8);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005d69e4; end: 1005d6a83;  */

void FUN_1005d69e4(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1005d6a84; end: 1005d6ca3;  */

undefined8 * FUN_1005d6a84(void)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *extraout_x8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong auStack_98 [5];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  FUN_1005d6ca4();
  func_0x000107c43478();
  iVar2 = (int)puVar3;
  func_0x000107c61180();
  FUN_1005d4630();
  auStack_98[0] = 0;
  func_0x000107c44260();
  uVar4 = auStack_98[0];
  func_0x000107c61174(auStack_98[0]);
  if (iVar2 == 0) {
    FUN_1005d80cc();
    func_0x0001005d80d4();
  }
  else {
    func_0x000107c3ebcc();
    FUN_1005d80cc();
    func_0x0001005d80d4();
    if ((uVar4 & 1) != 0) {
      return (undefined8 *)0x1;
    }
  }
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
  FUN_1005d6ca4();
  func_0x000107c43478();
  func_0x000107c61180();
  func_0x0001005d80d4();
  puVar6 = puVar5;
  func_0x000107c57e54();
  puVar7 = puVar6;
  func_0x000107c2ff6c();
  func_0x000107c39450(auStack_98,0xc);
  FUN_10002b838(&uStack_b0,"success");
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_60 = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  pcVar1 = "true";
  if ((int)puVar6 == 0) {
    pcVar1 = "false";
  }
  func_0x000107c2ff54(auStack_98,&uStack_70,pcVar1);
  func_0x000107c39454();
  func_0x000107c39448(*puVar7);
  (*extraout_x8)();
  func_0x000107c39444();
  func_0x000107c2ff50(auStack_98);
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 1005d6ca4; end: 1005d6cb7;  */

void FUN_1005d6ca4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  puVar1 = (undefined8 *)*unaff_x19;
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    puVar1 = unaff_x19;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c057e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUTF8String__1125f3998,puVar1);
  return;
}



/* Entry: 1005d6cb8; end: 1005d6cef;  */

void FUN_1005d6cb8(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1005d6cf0; end: 1005d6cf7;  */

void FUN_1005d6cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d6cf8; end: 1005d6d5b;  */

void FUN_1005d6cf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d6d5c; end: 1005d6d8b;  */

void FUN_1005d6d5c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8920;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1005d6d8c; end: 1005d6eb3; -[SCCameraDeviceSettingsResolverServiceCameraFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d6d8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c40aa4();
  func_0x000107c611b0();
  puVar2 = PTR_PTR_1126cf790;
  func_0x000107c610f4(PTR_PTR_1126cf790);
  func_0x000107c46564();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112754cdc);
  }
  func_0x000107c61174(uVar3);
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1005d6eb4; end: 1005d6ef3;  */

void FUN_1005d6eb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b320();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005d6ef4; end: 1005d6f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d6ef4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112754cd4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d6f18; end: 1005d76c7; -[SCCameraDeviceSettingsResolverServiceCameraFeatureEntryPoint _createResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d6f18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar1 = param_1;
  FUN_1005d6ef4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5bca0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4357c();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar25 = PTR_PTR_1126cf7a8;
  if ((int)lVar6 == 0) {
    lVar1 = param_1;
    FUN_1005d76c8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4195c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = param_1;
    FUN_1005d7860(param_1);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c3f2a8();
    lVar7 = lVar4;
    func_0x000107c4158c(lVar4,param_2,lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = param_1;
    FUN_1005d6ef4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5bca0();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3f070();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c3e66c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1005d7c74;
    puStack_80 = &UNK_110950120;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_78 = lVar6;
    puStack_70 = puVar8;
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    func_0x000107c429c4(lVar7,param_2,&puStack_98);
    puVar9 = PTR_PTR_1126cf798;
    func_0x000107c610f4();
    lVar1 = param_1;
    FUN_1005d7d4c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5036c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x0001005d7d70();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c3f0f4();
    func_0x000107c61180();
    lVar10 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = param_1;
    func_0x0001005d7d70();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c3f598();
    func_0x000107c61180();
    lVar13 = param_1;
    FUN_1005d76c8();
    func_0x000107c61180();
    lVar14 = lVar13;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar15 = lVar14;
    func_0x000107c4195c();
    func_0x000107c61180();
    lVar16 = lVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar17 = lVar16;
    func_0x000107c401cc();
    lVar18 = param_1;
    FUN_1005d76c8();
    func_0x000107c61180();
    lVar19 = lVar18;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c4195c();
    func_0x000107c61180();
    lVar21 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar22 = param_1;
    FUN_1005d7860(param_1);
    func_0x000107c61180();
    lVar23 = lVar22;
    func_0x000107c3f2a8();
    lVar24 = lVar21;
    func_0x000107c400a4(lVar21,param_2,lVar23);
    func_0x000107c61180();
    func_0x000107c45bc8(puVar9,param_2,lVar3,lVar10,lVar12,lVar17,lVar7,puVar8,lVar24);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    puVar25 = PTR_PTR_1126cf7b0;
    func_0x000107c610f4(PTR_PTR_1126cf7b0);
    FUN_1005d76c8(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4195c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4a738();
    func_0x000107c483c4(puVar25,param_2,puVar9,lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puStack_70);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar6);
  }
  else {
    lVar1 = param_1;
    FUN_1005d7860();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3f2a8();
    lVar3 = param_1;
    FUN_1005d76c8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4195c();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = param_1;
    FUN_1005d6ef4();
    func_0x000107c61180();
    lVar10 = lVar7;
    func_0x000107c5bca0();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c3f070();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar14 = lVar13;
    func_0x000107c3e66c();
    func_0x000107c61180();
    lVar15 = param_1;
    FUN_1005d7d4c();
    func_0x000107c61180();
    lVar16 = lVar15;
    func_0x000107c5036c();
    func_0x000107c61180();
    lVar17 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar18 = param_1;
    func_0x0001005d7d70(param_1);
    func_0x000107c61180();
    lVar19 = lVar18;
    func_0x000107c3f0f4();
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar21 = param_1;
    func_0x0001005d7d70(param_1);
    func_0x000107c61180();
    lVar22 = lVar21;
    func_0x000107c3f598();
    func_0x000107c61180();
    func_0x000107c50620(puVar25,param_2,lVar2,lVar6,lVar14,lVar17,lVar20,lVar22);
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    lVar1 = param_1;
    FUN_1005d7860();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c519ac();
    func_0x000107c61170(lVar1);
    if (lVar2 != 3) goto LAB_1005d76a4;
    if (param_1 != 0) {
      param_1 = param_1 + _DAT_112754cd8;
      func_0x000107c61148(param_1);
    }
    func_0x000107c5619c(param_1,param_2,puVar25);
    lVar7 = param_1;
  }
  func_0x000107c61170(lVar7);
LAB_1005d76a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1005d76c8; end: 1005d76eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d76c8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112754cd0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d76ec; end: 1005d76f3; -[SCCameraConfigurationImpl deviceSettingsConfig] */

undefined8 FUN_1005d76ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1005d76f4; end: 1005d775f;  */

void FUN_1005d76f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b9c38;
  func_0x000107c610f4(PTR_PTR_1126b9c38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3f070(uVar3);
  func_0x000107c61180();
  func_0x000107c45dc8(puVar2,param_2,uVar1,uVar3,*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005d7760; end: 1005d785f; -[SCCameraDeviceSettingsConfigurationImpl initWithCircumstanceEngine:captureFormatSelectionFrameworkConfig:appStartExperimentReader:] */

undefined1 *
FUN_1005d7760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e88e0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d7860; end: 1005d7883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d7860(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112754cbc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d7884; end: 1005d7893; -[_TtC15SCCameraUIScope15SCCameraUIScope cameraUsageTier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005d7884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082438);
}



/* Entry: 1005d7894; end: 1005d7933; -[SCCameraDeviceSettingsConfigurationImpl defaultDeviceSettingsMapForCameraUsageTier:] */

void FUN_1005d7894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e66c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126b9b08;
  func_0x000107c4164c(PTR_PTR_1126b9b08);
  func_0x000107c61180();
  func_0x000107c3b47c(param_1,param_2,param_3,puVar3,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005d7934; end: 1005d795b; +[_TtC29SCCameraConfigurationServices34kSCCameraDeviceSettingsFeatureName default_] */

void FUN_1005d7934(void)

{
  func_0x000107c5fadc(0x544c5541464544,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d795c; end: 1005d7a97; -[SCCameraDeviceSettingsConfigurationImpl _deviceSettingsMapForCameraUsageTier:featureName:fallbackSettings:] */

void FUN_1005d795c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c3b474(param_1,param_2,param_3,0,param_4,param_5);
  func_0x000107c61180();
  uVar5 = param_4;
  uVar6 = param_5;
  func_0x000107c3b474(param_1,param_2,param_3,1,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_58 = lVar1;
  lStack_50 = param_1;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_58,2);
  func_0x000107c61180();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_11117eb80;
  puVar3 = puVar7;
  func_0x000107c419a8(puVar2,param_2,puVar7,&PTR__OBJC_CLASS___NSConstantArray_11117eb80);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    puVar7 = *(undefined **)(lVar1 + 8);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar5);
    func_0x000107c5c734(puVar7);
    func_0x000107c61180();
    func_0x000107c3b0e8(lVar1,param_2,puVar3,ppuVar4,uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar2 = puVar7;
    func_0x000107c41960(puVar7,param_2,lVar1,uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005d7a98; end: 1005d7b5b; -[SCCameraDeviceSettingsConfigurationImpl _deviceSettingsForCameraUsageTier:devicePosition:featureName:fallbackSettings:] */

void FUN_1005d7a98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c3b0e8(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  uVar1 = uVar2;
  func_0x000107c41960(uVar2,param_2,param_1,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005d7b5c; end: 1005d7c1b; -[SCCameraDeviceSettingsConfigurationImpl _configKeyForCameraUsageTier:devicePosition:featureName:] */

void FUN_1005d7b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61174(param_5);
  uVar1 = param_1;
  func_0x000107c400a4(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3b0ec(param_1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c51804(puVar2,param_2,&PTR____CFConstantStringClassReference_110de54b8);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005d7c1c; end: 1005d7c47; -[SCCameraDeviceSettingsConfigurationImpl configKeyForCameraUsageTier:] */

undefined ** FUN_1005d7c1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de5478;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de5458;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de5498;
  if (param_3 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1005d7c48; end: 1005d7c73; -[SCCameraDeviceSettingsConfigurationImpl _configKeyForDevicePosition:] */

undefined ** FUN_1005d7c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de54d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de54f8;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1005d7c74; end: 1005d7d4b;  */

/* WARNING: Possible PIC construction at 0x0001005d7ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d7cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d7d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005d7d00) */
/* WARNING: Removing unreachable block (ram,0x0001005d7ce4) */
/* WARNING: Removing unreachable block (ram,0x0001005d7d2c) */

void FUN_1005d7c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c3f09c(puVar1);
  func_0x000107c61180();
  func_0x000107c50594(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005d7d4c; end: 1005d7d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d7d4c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112754cc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d7d94; end: 1005d7d9b; -[SCCameraDeviceSettingsConfigurationImpl conflictResolveMethod] */

undefined8 FUN_1005d7d94(void)

{
  return 1;
}



/* Entry: 1005d7d9c; end: 1005d7dc7; -[SCCameraDeviceSettingsResolver initWithCameraHardwareRequestHandler:cameraHardwareResource:captureDeviceManager:conflictResolveMethod:optimizedDefaultSettingsMap:defaultSettingsMap:featureNameBase:] */

void FUN_1005d7d9c(void)

{
  func_0x000107c45bcc();
  return;
}



/* Entry: 1005d7dc8; end: 1005d80cb; -[SCCameraDeviceSettingsResolver initWithCameraHardwareRequestHandler:cameraHardwareResource:captureDeviceManager:conflictResolveMethod:optimizedDefaultSettingsMap:defaultSettingsMap:featureNameBase:validateSettings:] */

undefined8 *
FUN_1005d7dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f40d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 2,param_4);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar1[5] = param_6;
    func_0x000107c61174(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    uVar5 = puVar1[1];
    func_0x000107c5d6fc(uVar5);
    func_0x000107c61180();
    uVar2 = uVar5;
    FUN_100078e94();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4da88(uVar5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar7 = uVar6;
    func_0x000107c5c320(uVar6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}


