/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000e6548; end: 1000e6877; -[SCCameraStabilityServiceProvider provide] */

void FUN_1000e6548(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c45454();
  func_0x000107c61144(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1000e6878;
  puStack_90 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c76f0;
  func_0x000107c610f4();
  puVar4 = puVar2;
  func_0x000107c5c734(puVar2);
  func_0x000107c61180();
  func_0x000107c45490();
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126ae720;
  puStack_e0 = puVar7;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1000e94e8;
  puStack_c8 = &UNK_1108cc668;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_c0 = puVar1;
  puStack_b8 = puVar3;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puStack_108 = puVar7;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_106082f94;
  puStack_f0 = &UNK_110855710;
  puVar5 = PTR_PTR_1126ae720;
  puStack_e8 = puVar3;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_138 = puVar7;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1005d36b0;
  puStack_120 = &UNK_110867030;
  func_0x000107c6111c(auStack_110,auStack_80);
  puStack_118 = puVar2;
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_140,auStack_80);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126c7718;
  func_0x000107c610f4(PTR_PTR_1126c7718);
  func_0x000107c469ec();
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_140);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1000e6878; end: 1000e6903;  */

void FUN_1000e6878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c76e8;
    func_0x000107c610f4(PTR_PTR_1126c76e8);
    puVar1 = PTR_PTR_1126b7008;
    func_0x000107c610fc(PTR_PTR_1126b7008);
    func_0x000107c46ba8(puVar2,param_2,puVar1,0,0);
    func_0x000107c61170(puVar1);
    func_0x000107c42a6c(puVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000e6904; end: 1000e6977; -[SCGrapheneCoreCameraMetric2 init] */

undefined1 * FUN_1000e6904(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fceb8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e6978; end: 1000e6a03; -[SCCameraStabilityLogger initWithGrapheneLogger:isDebug:isSimulator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6978(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ed6708) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed6710) = param_3;
  *(undefined1 *)(param_1 + _DAT_112ed6718) = param_4;
  *(undefined1 *)(param_1 + _DAT_112ed6720) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1000e6a04; end: 1000e6a5f; -[SCCameraStabilityLogger establishPromise] */

/* WARNING: Possible PIC construction at 0x0001000e6a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e6a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6a04(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112ed6708) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000e6a60; end: 1000e6a67; -[SCPromise init] */

void FUN_1000e6a60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithIgnoreRedundantCompletio_1125e49b0,0)
  ;
  return;
}



/* Entry: 1000e6a68; end: 1000e6ad7; -[SCPromise initWithIgnoreRedundantCompletions:] */

undefined1 * FUN_1000e6a68(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e648;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c610f4();
    func_0x000107c3b9d8();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e6ad8; end: 1000e6ae3; -[SCFuture .cxx_construct] */

void FUN_1000e6ad8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1000e6ae4; end: 1000e6b1f; -[SCFuture _init] */

void FUN_1000e6ae4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270e650;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  return;
}



/* Entry: 1000e6b20; end: 1000e6bc3; -[SCCameraFixScheduler initWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ed6588;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  func_0x000107c56330();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112ed6590) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed6598) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000e6bc4; end: 1000e6bfb;  */

void FUN_1000e6bc4(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 1000e6bfc; end: 1000e6d1f; -[SCCameraStabilityServices initWithFrameStabilityMonitor:permissionStateStabilityMonitor:toSnappableMonitorFactory:videoStreamStabilityMonitor:blizzardPromiseKeeper:] */

undefined1 *
FUN_1000e6bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112704500;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e6d20; end: 1000e6d6b;  */

void FUN_1000e6d20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000e6d6c; end: 1000e6d87;  */

int FUN_1000e6d6c(int *param_1)

{
  if ((char)param_1[2] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1000e6d88; end: 1000e6e2b; -[SCEntryPoint setValue:forIvarName:] */

/* WARNING: Possible PIC construction at 0x0001000e6e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e6e14) */

void FUN_1000e6d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61174(param_3);
  func_0x000107c51804(puVar1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c61158(param_1);
  func_0x000107c61178(puVar1);
  func_0x000107c3ac4c();
  func_0x000107c60efc(uVar2,puVar1);
  func_0x000107c611c0(param_1,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000e6e2c; end: 1000e6f73; -[SCLegacyCameraStartupCommandsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e6e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c44428(PTR_PTR_1126ae790,param_2,0x21,0);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112761f8c);
  *(undefined **)(param_1 + _DAT_112761f8c) = puVar1;
  func_0x000107c61170(uVar3);
  func_0x000107c3ba34(param_1);
  func_0x000107c61144(auStack_38,param_1);
  lVar2 = param_1 + _DAT_112761f90;
  func_0x000107c61148(lVar2);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4fbb0(lVar2);
  func_0x000107c61170(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112761fc0);
  func_0x000107c61174(uVar3);
  puVar1 = PTR_PTR_1126d3e80;
  func_0x000107c61160(PTR_PTR_1126d3e80);
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1000e6f74; end: 1000e7077; +[SCQueuePerformer globalQueuePerformer:contextState:] */

void FUN_1000e6f74(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  if (param_3 < 9) {
    if (param_3 < 0) {
      if (param_3 == -0x8000) goto LAB_1000e7034;
      if (param_3 == -2) goto LAB_1000e700c;
    }
    else if ((param_3 != 0) && (param_3 == 2)) {
LAB_1000e6fe8:
      func_0x000107c3cd74(param_1);
      func_0x000107c61180();
      goto LAB_1000e7058;
    }
  }
  else if (param_3 < 0x15) {
    if (param_3 == 9) {
LAB_1000e7034:
      func_0x000107c3ae6c(param_1);
      func_0x000107c61180();
      goto LAB_1000e7058;
    }
    if (param_3 == 0x11) {
LAB_1000e700c:
      func_0x000107c3cd88(param_1);
      func_0x000107c61180();
      goto LAB_1000e7058;
    }
  }
  else if (param_3 != 0x15) {
    if (param_3 == 0x19) {
      func_0x000107c3cd70(param_1);
      func_0x000107c61180();
      goto LAB_1000e7058;
    }
    if (param_3 == 0x21) goto LAB_1000e6fe8;
  }
  func_0x000107c3b444(param_1);
  func_0x000107c61180();
LAB_1000e7058:
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1000e7078; end: 1000e70cb; +[SCQueuePerformer _userInteractivePerformer] */

void FUN_1000e7078(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe010 != -1) {
    FUN_10002a2fc(0x1137fe010,&PTR___NSConcreteGlobalBlock_110d98aa8);
  }
  uVar1 = uRam00000001137fe008;
  func_0x000107c61174(uRam00000001137fe008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e70cc; end: 1000e70ff;  */

void FUN_1000e70cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c46b68();
  uVar1 = puRam00000001137fe008;
  puRam00000001137fe008 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e7100; end: 1000e71f3; -[SCQueuePerformer initWithGlobalQueue:] */

undefined1 * FUN_1000e7100(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar3 = &uStack_30;
  puStack_28 = PTR_PTR_11270e3f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar3;
    func_0x000100081968();
    uVar7 = (uint)param_3;
    if (((ulong)puVar4 & 0xfffffffffffffffe) == 2) {
      *(uint *)((long)puVar3 + 0x28) = uVar7;
      func_0x000107c312b4();
      func_0x000107c61180();
    }
    else {
      uVar1 = 0x15;
      if (uVar7 != 0) {
        uVar1 = uVar7;
      }
      param_3 = (ulong)uVar1;
      *(uint *)((long)puVar3 + 0x28) = uVar1;
      func_0x000107c60f2c(param_3,0);
      func_0x000107c61180();
    }
    uVar6 = *(undefined8 *)((long)puVar3 + 0x10);
    *(ulong *)((long)puVar3 + 0x10) = param_3;
    func_0x000107c61170(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c60f58(*(undefined8 *)((long)puVar3 + 0x10));
    func_0x000107c5c200();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined **)((long)puVar3 + 8) = puVar5;
    func_0x000107c61170(uVar6);
    uVar2 = (undefined4)*(undefined8 *)((long)puVar3 + 0x10);
    FUN_100073498();
    *(undefined4 *)((long)puVar3 + 0x18) = uVar2;
    *(undefined8 *)((long)puVar3 + 0x30) = 1;
    *(undefined1 *)((long)puVar3 + 0x40) = 0;
    *(undefined4 *)((long)puVar3 + 0x44) = 0;
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1000e71f4; end: 1000e74cb; -[SCLegacyCameraStartupCommandsEntryPoint _initializeCamera] */

/* WARNING: Possible PIC construction at 0x0001000e7268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e72cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e72dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e731c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e732c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e73e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e73f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e7494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e74a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e7498) */
/* WARNING: Removing unreachable block (ram,0x0001000e7488) */
/* WARNING: Removing unreachable block (ram,0x0001000e7478) */
/* WARNING: Removing unreachable block (ram,0x0001000e7408) */
/* WARNING: Removing unreachable block (ram,0x0001000e73f8) */
/* WARNING: Removing unreachable block (ram,0x0001000e73e8) */
/* WARNING: Removing unreachable block (ram,0x0001000e737c) */
/* WARNING: Removing unreachable block (ram,0x0001000e736c) */
/* WARNING: Removing unreachable block (ram,0x0001000e7330) */
/* WARNING: Removing unreachable block (ram,0x0001000e7320) */
/* WARNING: Removing unreachable block (ram,0x0001000e72e0) */
/* WARNING: Removing unreachable block (ram,0x0001000e72d0) */
/* WARNING: Removing unreachable block (ram,0x0001000e726c) */
/* WARNING: Removing unreachable block (ram,0x0001000e74a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e71f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3e88;
  func_0x000107c610f4();
  param_1 = param_1 + _DAT_112761f98;
  func_0x000107c61148(param_1);
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c456e8(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000e74cc; end: 1000e757b; -[SCBlackCameraNoOutputDetectorImpl initWithAppStartExperimentReader:] */

undefined1 * FUN_1000e74cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fcea8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e757c; end: 1000e769f; -[SCManagedFrameHealthCheckerImpl initWithGrapheneLogger:blizzardLogger:] */

undefined1 *
FUN_1000e757c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fceb0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    uVar4 = 1;
    func_0x000107c60f6c();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e76a0; end: 1000e76af; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices cameraHardwareResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e76a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f68));
  return;
}



/* Entry: 1000e76b0; end: 1000e76df; -[SCCameraHardwareResourceImpl setBlackCameraNoOutputDetector:] */

void FUN_1000e76b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e76e0; end: 1000e773b;  */

long * FUN_1000e76e0(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = *param_1;
  if ((lStack_28 != 0) && (param_1[1] != 0)) {
    FUN_100105070(param_1[1],&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x000107c310d4();
      func_0x000107c60e14();
    }
  }
  return param_1;
}



/* Entry: 1000e773c; end: 1000e779f;  */

undefined ** FUN_1000e773c(void)

{
  int iVar1;
  
  if ((bRam00000001138466d8 & 1) == 0) {
    iVar1 = 0x138466d8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_1133b7c98,0x100000000);
      func_0x000107c60e4c(0x1138466d8);
    }
  }
  return &PTR_PTR_1133b7c98;
}



/* Entry: 1000e77a0; end: 1000e798f;  */

void FUN_1000e77a0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_b0 = (undefined8 *)0x0;
    iStack_a8 = 0;
    dVar8 = 0.0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    func_0x000107c6071c();
    plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffff00000000);
    dVar9 = dVar8;
    (*(code *)*param_1)(param_1[1],param_1[2],param_1[3],param_1 + 5,param_1[4],1,param_2,param_3,
                        param_4,&plStack_c0,&puStack_b0,&uStack_68);
    lVar7 = param_1[3];
    lVar4 = param_1[1];
    func_0x000107c60b14(lVar4);
    func_0x000107c61180();
    func_0x000107c6071c();
    func_0x000107c421e4(dVar9 - dVar8,lVar7);
    func_0x000107c61170(lVar4);
    if (iStack_a8 != 0) {
      param_1[4] = 0;
    }
    puVar6 = PTR_PTR_1126c0ab8;
    (**(code **)(*param_2 + 0x30))();
    plStack_c0 = param_2;
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)0x20;
      func_0x000107c60e20();
      *plVar5 = (long)&PTR_DAT_110d7f368;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)param_2;
    }
    plStack_b8 = plVar5;
    func_0x000107c4333c(puVar6);
    func_0x000107c61180();
    plVar5 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        func_0x000107c60d68(plVar5);
      }
    }
    if (lStack_78 < 0) {
      func_0x000107c60e14(uStack_88);
    }
    if (lStack_90 < 0) {
      func_0x000107c60e14(uStack_a0);
    }
    puStack_b0 = &uStack_68;
    FUN_100104170(&puStack_b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1000e7990; end: 1000e94af;  */

/* WARNING: Possible PIC construction at 0x0001000e8548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e86dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e8d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e9020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e90b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e914c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e9494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e8930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e8db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e8a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e8d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e8a28) */
/* WARNING: Removing unreachable block (ram,0x0001000e8db8) */
/* WARNING: Removing unreachable block (ram,0x0001000e8934) */
/* WARNING: Removing unreachable block (ram,0x0001000e9498) */
/* WARNING: Removing unreachable block (ram,0x0001000e94a8) */
/* WARNING: Removing unreachable block (ram,0x0001000e9150) */
/* WARNING: Removing unreachable block (ram,0x0001000e9190) */
/* WARNING: Removing unreachable block (ram,0x0001000e9448) */
/* WARNING: Removing unreachable block (ram,0x0001000e9468) */
/* WARNING: Removing unreachable block (ram,0x0001000e9470) */
/* WARNING: Removing unreachable block (ram,0x0001000e9474) */
/* WARNING: Removing unreachable block (ram,0x0001000e9480) */
/* WARNING: Removing unreachable block (ram,0x0001000e9488) */
/* WARNING: Removing unreachable block (ram,0x0001000e9490) */
/* WARNING: Removing unreachable block (ram,0x0001000e9170) */
/* WARNING: Removing unreachable block (ram,0x0001000e90b8) */
/* WARNING: Removing unreachable block (ram,0x0001000e90c4) */
/* WARNING: Removing unreachable block (ram,0x0001000e9110) */
/* WARNING: Removing unreachable block (ram,0x0001000e9024) */
/* WARNING: Removing unreachable block (ram,0x0001000e86e0) */
/* WARNING: Removing unreachable block (ram,0x0001000e8d24) */
/* WARNING: Removing unreachable block (ram,0x0001000e8e44) */
/* WARNING: Removing unreachable block (ram,0x0001000e84c4) */
/* WARNING: Removing unreachable block (ram,0x0001000e8004) */
/* WARNING: Removing unreachable block (ram,0x0001000e7ed8) */
/* WARNING: Removing unreachable block (ram,0x0001000e8b48) */
/* WARNING: Removing unreachable block (ram,0x0001000e9140) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1000e7990(undefined8 *******param_1,undefined8 param_2,undefined8 *******param_3,
                  long *param_4,undefined8 param_5,int param_6,long *param_7,long *param_8,
                  int *param_9,uint *param_10,long *param_11,undefined8 *******param_12)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *****pppppuVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  bool bVar28;
  undefined8 ******ppppppuVar29;
  int iVar30;
  long lVar31;
  undefined8 *****pppppuVar32;
  undefined8 *****unaff_x25;
  undefined8 *****pppppuVar33;
  undefined8 *****pppppuVar34;
  int iStack_294;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined4 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 *******pppppppuStack_180;
  undefined8 *****pppppuStack_178;
  undefined8 ******ppppppuStack_170;
  long lStack_168;
  float fStack_160;
  uint uStack_15c;
  undefined1 uStack_158;
  undefined7 uStack_157;
  long lStack_150;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined4 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_110;
  undefined8 *******apppppppuStack_108 [2];
  undefined1 uStack_f1;
  undefined8 *******pppppppuStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 uStack_91;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pppppppuVar19 = param_3;
  if (*param_4 == 0) goto code_r0x000107c61170;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  bVar5 = *(byte *)((long)param_7 + 0x1b);
  bVar9 = (int)param_7[1] == 0x10;
  bVar6 = bVar5 | bVar9;
  puVar26 = (undefined8 *)*param_8;
  puVar3 = (undefined8 *)param_8[1];
  puVar18 = puVar26;
  if (puVar26 == puVar3) {
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    if ((bVar5 & 1) != 0 || bVar9) {
      bVar8 = false;
      goto LAB_1000e7aac;
    }
    bVar8 = false;
    pppppuStack_178 = (undefined8 *****)0x0;
    pppppppuStack_180 = (undefined8 *******)0x0;
    lStack_168 = 0;
    ppppppuStack_170 = (undefined8 ******)0x0;
    fStack_160 = 1.0;
LAB_1000e7d10:
    pppppppuVar19 = param_1;
    func_0x000107c5c688();
    uStack_e8 = 0;
    pppppppuStack_f0 = (undefined8 *******)0x0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    fStack_d0 = fStack_160;
    FUN_1000e9bf8(&pppppppuStack_f0,pppppuStack_178);
    for (ppppppuVar22 = ppppppuStack_170; ppppppuVar22 != (undefined8 ******)0x0;
        ppppppuVar22 = (undefined8 ******)*ppppppuVar22) {
      FUN_10055a1c0(&pppppppuStack_f0,ppppppuVar22 + 2,ppppppuVar22 + 2);
    }
    (**(code **)(*param_7 + 0x18))(param_7,&pppppppuStack_f0);
    apppppppuStack_108[0] = &pppppppuStack_90;
    lVar24 = *param_4 + 0x60;
    pppppppuStack_90 = pppppppuVar19;
    FUN_1000e9dd8(lVar24,&pppppppuStack_90,&UNK_10dd5b8f9,apppppppuStack_108,&lStack_110);
    lVar31 = 0;
    lVar25 = -1;
    plVar27 = plStack_e0;
    do {
      if (plVar27 == (long *)0x0) {
        bVar9 = false;
        goto LAB_1000e8120;
      }
      pppppppuVar13 = (undefined8 *******)(plVar27 + 2);
      lVar11 = lVar24 + 0x18;
      FUN_10055a52c(lVar11,pppppppuVar13);
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) != 2)) {
        if (lVar31 == 0) {
          lVar31 = 0x38;
          func_0x000107c60e20();
          FUN_1001ccebc();
        }
        FUN_10002b838(apppppppuStack_108,"SELECT MAX(rowid) FROM ");
        lStack_110 = 0;
        if (lVar25 < 0) {
          pppppppuVar12 = pppppppuVar19;
          func_0x000107c613d0(pppppppuVar19);
          func_0x000107c60c5c(apppppppuStack_108,pppppppuVar19,pppppppuVar12);
          uVar14 = *(undefined8 *)(*param_4 + 0x58);
          func_0x000107c613a0(uVar14,apppppppuStack_108,uStack_f1,&lStack_110,0);
          if ((int)uVar14 == 0) {
            if (lStack_110 != 0) {
              lVar25 = lStack_110;
              func_0x000107c613a8();
              if ((int)lVar25 == 100) {
                lVar25 = lStack_110;
                func_0x000107c61358(lStack_110,0);
              }
              else {
                lVar25 = 0;
              }
              func_0x000107c61388(lStack_110);
            }
          }
          else {
            lStack_110 = 0;
          }
        }
        apppppppuStack_108[0] =
             (undefined8 *******)((ulong)apppppppuStack_108[0] & 0xffffffffffffff00);
        uStack_f1 = 0;
        func_0x000107c60c5c(apppppppuStack_108,"SELECT MAX(rowid) FROM index_",0x1d);
        pppppppuVar12 = pppppppuVar19;
        func_0x000107c613d0(pppppppuVar19);
        func_0x000107c60c5c(apppppppuStack_108,pppppppuVar19,pppppppuVar12);
        ppppppuVar29 = *pppppppuVar13;
        ppppppuVar22 = ppppppuVar29;
        func_0x000107c613d0(ppppppuVar29);
        func_0x000107c60c5c(apppppppuStack_108,ppppppuVar29,ppppppuVar22);
        lStack_110 = 0;
        uVar14 = *(undefined8 *)(*param_4 + 0x58);
        func_0x000107c613a0(uVar14,apppppppuStack_108,uStack_f1,&lStack_110,0);
        if ((int)uVar14 == 0) {
          if (lStack_110 == 0) goto LAB_1000e7f64;
          lVar11 = lStack_110;
          func_0x000107c613a8();
          if ((int)lVar11 == 100) {
            lVar11 = lStack_110;
            func_0x000107c61358(lStack_110,0);
            bVar9 = lVar11 == lVar25;
          }
          else {
            bVar9 = lVar25 == 0;
          }
          uVar17 = 1;
          if (bVar9) {
            uVar17 = 2;
          }
          func_0x000107c61388(lStack_110);
          lVar11 = lVar24 + 0x18;
          pppppppuStack_90 = pppppppuVar13;
          func_0x00010507ce00(lVar11,pppppppuVar13,&UNK_10dd5b8f9,&pppppppuStack_90,&uStack_91);
          *(undefined4 *)(lVar11 + 0x18) = uVar17;
          if (bVar9) {
            bVar9 = false;
          }
          else {
            FUN_10055a60c(&lStack_c8,pppppppuVar13);
            bVar9 = true;
            if ((pppppuStack_178 != (undefined8 *****)0x0) && (lStack_168 != 0)) {
              ppppppuVar22 = *pppppppuVar13;
              uVar21 = ((ulong)(uint)((int)ppppppuVar22 << 3) + 8 ^ (ulong)ppppppuVar22 >> 0x20) *
                       -0x622015f714c7d297;
              uVar21 = ((ulong)ppppppuVar22 >> 0x20 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297
              ;
              pppppuVar33 = (undefined8 *****)((uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297);
              uVar21 = (long)pppppuStack_178 - 1;
              if (((ulong)pppppuStack_178 & uVar21) == 0) {
                pppppuVar32 = (undefined8 *****)((ulong)pppppuVar33 & uVar21);
              }
              else {
                pppppuVar32 = pppppuVar33;
                if (pppppuStack_178 <= pppppuVar33) {
                  uVar20 = 0;
                  if (pppppuStack_178 != (undefined8 *****)0x0) {
                    uVar20 = (ulong)pppppuVar33 / (ulong)pppppuStack_178;
                  }
                  pppppuVar32 = (undefined8 *****)
                                ((long)pppppuVar33 - uVar20 * (long)pppppuStack_178);
                }
              }
              if ((pppppppuStack_180[(long)pppppuVar32] != (undefined8 ******)0x0) &&
                 (pppppuVar34 = *pppppppuStack_180[(long)pppppuVar32],
                 pppppuVar34 != (undefined8 *****)0x0)) {
                do {
                  pppppuVar23 = (undefined8 *****)pppppuVar34[1];
                  if (pppppuVar23 == pppppuVar33) {
                    if ((undefined8 ******)pppppuVar34[2] == ppppppuVar22) {
                      bVar8 = true;
                      break;
                    }
                  }
                  else {
                    if (((ulong)pppppuStack_178 & uVar21) == 0) {
                      pppppuVar23 = (undefined8 *****)((ulong)pppppuVar23 & uVar21);
                    }
                    else if (pppppuStack_178 <= pppppuVar23) {
                      uVar20 = 0;
                      if (pppppuStack_178 != (undefined8 *****)0x0) {
                        uVar20 = (ulong)pppppuVar23 / (ulong)pppppuStack_178;
                      }
                      pppppuVar23 = (undefined8 *****)
                                    ((long)pppppuVar23 - uVar20 * (long)pppppuStack_178);
                    }
                    if (pppppuVar23 != pppppuVar32) break;
                  }
                  pppppuVar34 = (undefined8 *****)*pppppuVar34;
                } while (pppppuVar34 != (undefined8 *****)0x0);
                bVar9 = true;
              }
            }
          }
          bVar28 = true;
        }
        else {
          lStack_110 = 0;
LAB_1000e7f64:
          FUN_10055a60c(&lStack_c8,pppppppuVar13);
          bVar28 = false;
          bVar8 = true;
          bVar9 = true;
          bVar6 = 1;
        }
        if (!bVar28) goto LAB_1000e8120;
      }
      else {
        bVar9 = false;
      }
      plVar27 = (long *)*plVar27;
    } while (!bVar9);
    bVar9 = true;
LAB_1000e8120:
    if ((bVar6 & 1) == 0) {
      iStack_294 = (int)uStack_d8;
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780c53,0xe);
      bVar28 = false;
      if (plStack_e0 != (long *)0x0) {
        bVar28 = bVar9;
      }
      plVar27 = plStack_e0;
      if (bVar28) {
        do {
          func_0x000107c60c5c(&uStack_b0,&DAT_10f68e8ee,1);
          lVar25 = plVar27[2];
          lVar24 = lVar25;
          func_0x000107c613d0(lVar25);
          func_0x000107c60c5c(&uStack_b0,lVar25,lVar24);
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780c62,6);
      pppppppuVar13 = pppppppuVar19;
      func_0x000107c613d0(pppppppuVar19);
      func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppppuVar13);
      if (plStack_e0 != (long *)0x0) {
        puVar16 = &UNK_10f780c69;
        if (!bVar9) {
          puVar16 = &UNK_10f780c7b;
        }
        uVar14 = 0x11;
        plVar27 = plStack_e0;
        if (!bVar9) {
          uVar14 = 0x12;
        }
        do {
          func_0x000107c60c5c(&uStack_b0,puVar16,uVar14);
          pppppppuVar13 = pppppppuVar19;
          func_0x000107c613d0(pppppppuVar19);
          func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppppuVar13);
          lVar25 = plVar27[2];
          lVar24 = lVar25;
          func_0x000107c613d0(lVar25);
          func_0x000107c60c5c(&uStack_b0,lVar25,lVar24);
          func_0x000107c60c5c(&uStack_b0,&UNK_10f780c8e,0xe);
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      puVar16 = &UNK_10f780c9d;
      if (!bVar9) {
        puVar16 = &UNK_10f780ca6;
      }
      uVar14 = 7;
      if (bVar9) {
        uVar14 = 8;
      }
      func_0x000107c60c5c(&uStack_b0,puVar16,uVar14);
      apppppppuStack_108[0] =
           (undefined8 *******)((ulong)apppppppuStack_108[0] & 0xffffffff00000000);
      (**(code **)(*param_7 + 0x10))(param_7,&uStack_b0,apppppppuStack_108);
      if (bVar9) {
        func_0x000107c60c5c(&uStack_b0,&DAT_10f684600,1);
        for (plVar27 = plStack_e0; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
          func_0x000107c60c5c(&uStack_b0,&DAT_10f46e95f,4);
          uVar15 = plVar27[2];
          uVar14 = uVar15;
          func_0x000107c613d0(uVar15);
          func_0x000107c60c5c(&uStack_b0,uVar15,uVar14);
          func_0x000107c60c5c(&uStack_b0,&UNK_10f780cae,7);
        }
      }
    }
    else {
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780b9d,0x14);
      pppppppuVar19 = param_1;
      func_0x000107c5c688(param_1);
      pppppppuVar13 = pppppppuVar19;
      func_0x000107c613d0();
      func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppppuVar13);
      iStack_294 = 0;
    }
    func_0x0001000eb038(&pppppppuStack_f0);
    func_0x0001000eb038(&pppppppuStack_180);
    if ((bVar6 & 1) != 0) goto LAB_1000e8360;
    lVar24 = *param_8;
    if (param_8[1] != lVar24) {
LAB_1000e8378:
      if (((*(byte *)(lVar24 + 8) & 1) == 0) && (*(char *)(lVar24 + 9) != '\x01'))
      goto code_r0x0001000e838c;
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780cb6,9);
      puVar18 = (undefined8 *)*param_8;
      puVar26 = (undefined8 *)param_8[1];
      if (puVar18 == puVar26) goto LAB_1000e8d4c;
      bVar28 = false;
      do {
        if (((*(byte *)(puVar18 + 1) & 1) != 0) || (*(char *)((long)puVar18 + 9) == '\x01')) {
          pcVar2 = ", ";
          if (!bVar28) {
            pcVar2 = " ";
          }
          uVar14 = 1;
          if (bVar28) {
            uVar14 = 2;
          }
          func_0x000107c60c5c(&uStack_b0,pcVar2,uVar14);
          uVar15 = *puVar18;
          uVar14 = uVar15;
          func_0x000107c613d0(uVar15);
          func_0x000107c60c5c(&uStack_b0,uVar15,uVar14);
          if (*(int *)((long)puVar18 + 0xc) == 1) {
            func_0x000107c60c5c(&uStack_b0,&UNK_10f780cc0,5);
          }
          bVar28 = true;
        }
        puVar18 = puVar18 + 4;
      } while (puVar18 != puVar26);
      if (bVar28) {
        puVar16 = &UNK_10f780ccd;
        uVar14 = 7;
      }
      else {
LAB_1000e8d4c:
        puVar16 = &UNK_10f780cc6;
        uVar14 = 6;
      }
      func_0x000107c60c5c(&uStack_b0,puVar16,uVar14);
      bVar28 = false;
      goto LAB_1000e83b0;
    }
LAB_1000e8398:
    bVar28 = false;
  }
  else {
    do {
      if (((*(byte *)(puVar18 + 1) & 1) == 0) && (*(char *)((long)puVar18 + 9) != '\x01')) {
        bVar8 = true;
        goto LAB_1000e7a7c;
      }
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar3);
    bVar8 = false;
LAB_1000e7a7c:
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    puVar18 = puVar26;
    if ((bVar5 & 1) == 0 && !bVar9) {
LAB_1000e7af8:
      lVar31 = 0;
      pppppppuVar19 = (undefined8 *******)0x0;
      pppppuVar33 = (undefined8 *****)0x0;
      pppppuStack_178 = (undefined8 *****)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      lStack_168 = 0;
      ppppppuStack_170 = (undefined8 ******)0x0;
      fStack_160 = 1.0;
      do {
        if (*(char *)(puVar26 + 1) == '\x01') {
          pppppuVar32 = (undefined8 *****)*puVar26;
          uVar21 = ((ulong)(uint)((int)pppppuVar32 << 3) + 8 ^ (ulong)pppppuVar32 >> 0x20) *
                   -0x622015f714c7d297;
          uVar21 = ((ulong)pppppuVar32 >> 0x20 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297;
          pppppuVar34 = (undefined8 *****)((uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297);
          if (pppppuVar33 != (undefined8 *****)0x0) {
            uVar21 = (long)pppppuVar33 - 1;
            if (((ulong)pppppuVar33 & uVar21) == 0) {
              unaff_x25 = (undefined8 *****)((ulong)pppppuVar34 & uVar21);
            }
            else {
              unaff_x25 = pppppuVar34;
              if (pppppuVar33 <= pppppuVar34) {
                uVar20 = 0;
                if (pppppuVar33 != (undefined8 *****)0x0) {
                  uVar20 = (ulong)pppppuVar34 / (ulong)pppppuVar33;
                }
                unaff_x25 = (undefined8 *****)((long)pppppuVar34 - uVar20 * (long)pppppuVar33);
              }
            }
            ppppppuVar22 = pppppppuVar19[(long)unaff_x25];
            if (ppppppuVar22 != (undefined8 ******)0x0) {
              do {
                while( true ) {
                  ppppppuVar22 = (undefined8 ******)*ppppppuVar22;
                  if (ppppppuVar22 == (undefined8 ******)0x0) goto LAB_1000e7be4;
                  pppppuVar23 = ppppppuVar22[1];
                  if (pppppuVar23 != pppppuVar34) break;
                  if (ppppppuVar22[2] == pppppuVar32) goto LAB_1000e7cec;
                }
                if (((ulong)pppppuVar33 & uVar21) == 0) {
                  pppppuVar23 = (undefined8 *****)((ulong)pppppuVar23 & uVar21);
                }
                else if (pppppuVar33 <= pppppuVar23) {
                  uVar20 = 0;
                  if (pppppuVar33 != (undefined8 *****)0x0) {
                    uVar20 = (ulong)pppppuVar23 / (ulong)pppppuVar33;
                  }
                  pppppuVar23 = (undefined8 *****)((long)pppppuVar23 - uVar20 * (long)pppppuVar33);
                }
              } while (pppppuVar23 == unaff_x25);
            }
          }
LAB_1000e7be4:
          ppppppuVar22 = (undefined8 ******)0x18;
          func_0x000107c60e20();
          *ppppppuVar22 = (undefined8 *****)0x0;
          ppppppuVar22[1] = pppppuVar34;
          ppppppuVar22[2] = pppppuVar32;
          if ((pppppuVar33 == (undefined8 *****)0x0) ||
             (fStack_160 * (float)pppppuVar33 < (float)(lVar31 + 1))) {
            uVar21 = 1;
            if ((undefined8 *****)0x2 < pppppuVar33) {
              uVar21 = (ulong)(((ulong)pppppuVar33 & (long)pppppuVar33 - 1U) != 0);
            }
            uVar21 = uVar21 | (long)pppppuVar33 << 1;
            uVar20 = (ulong)((float)(lVar31 + 1) / fStack_160);
            if (uVar21 <= uVar20) {
              uVar21 = uVar20;
            }
            FUN_1000e9bf8(&pppppppuStack_180,uVar21);
            pppppuVar33 = pppppuStack_178;
            if (((ulong)pppppuStack_178 & (long)pppppuStack_178 - 1U) == 0) {
              unaff_x25 = (undefined8 *****)((long)pppppuStack_178 - 1U & (ulong)pppppuVar34);
            }
            else {
              unaff_x25 = pppppuVar34;
              if (pppppuStack_178 <= pppppuVar34) {
                uVar21 = 0;
                if (pppppuStack_178 != (undefined8 *****)0x0) {
                  uVar21 = (ulong)pppppuVar34 / (ulong)pppppuStack_178;
                }
                unaff_x25 = (undefined8 *****)((long)pppppuVar34 - uVar21 * (long)pppppuStack_178);
              }
            }
          }
          ppppppuVar29 = pppppppuStack_180[(long)unaff_x25];
          if (ppppppuVar29 == (undefined8 ******)0x0) {
            *ppppppuVar22 = ppppppuStack_170;
            pppppppuStack_180[(long)unaff_x25] = &ppppppuStack_170;
            ppppppuStack_170 = ppppppuVar22;
            if (*ppppppuVar22 != (undefined8 *****)0x0) {
              pppppuVar32 = (undefined8 *****)(*ppppppuVar22)[1];
              if (((ulong)pppppuVar33 & (long)pppppuVar33 - 1U) == 0) {
                pppppuVar32 = (undefined8 *****)((ulong)pppppuVar32 & (long)pppppuVar33 - 1U);
              }
              else if (pppppuVar33 <= pppppuVar32) {
                uVar21 = 0;
                if (pppppuVar33 != (undefined8 *****)0x0) {
                  uVar21 = (ulong)pppppuVar32 / (ulong)pppppuVar33;
                }
                pppppuVar32 = (undefined8 *****)((long)pppppuVar32 - uVar21 * (long)pppppuVar33);
              }
              pppppppuStack_180[(long)pppppuVar32] = ppppppuVar22;
            }
          }
          else {
            *ppppppuVar22 = *ppppppuVar29;
            *ppppppuVar29 = ppppppuVar22;
          }
          lVar31 = lStack_168 + 1;
          pppppppuVar19 = pppppppuStack_180;
          lStack_168 = lVar31;
        }
LAB_1000e7cec:
        puVar26 = puVar26 + 4;
      } while (puVar26 != puVar3);
      goto LAB_1000e7d10;
    }
    do {
      if (((*(byte *)(puVar18 + 1) & 1) != 0) || (*(char *)((long)puVar18 + 9) == '\x01'))
      goto LAB_1000e7af8;
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar3);
LAB_1000e7aac:
    uStack_b8 = 0;
    lStack_c0 = 0;
    lStack_c8 = 0;
    func_0x000107c60c5c(&uStack_b0,&UNK_10f780b9d,0x14);
    pppppppuVar19 = param_1;
    func_0x000107c5c688(param_1);
    pppppppuVar13 = pppppppuVar19;
    func_0x000107c613d0();
    lVar31 = 0;
    func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppppuVar13);
    bVar9 = false;
    iStack_294 = 0;
LAB_1000e8360:
    bVar28 = true;
  }
  func_0x000107c60c5c(&uStack_b0,&UNK_10f780cd5,0xf);
LAB_1000e83b0:
  if (((!bVar8) && (!bVar9)) && ((*(byte *)((long)param_7 + 0x1a) & 1) == 0)) {
    if (0 < *param_9) {
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780ce5,7);
      func_0x000107c60ddc(&pppppppuStack_180,*param_9);
      pppppuVar33 = pppppuStack_178;
      pppppppuVar19 = pppppppuStack_180;
      if (-1 < (long)ppppppuStack_170) {
        pppppuVar33 = (undefined8 *****)((ulong)ppppppuStack_170 >> 0x38);
        pppppppuVar19 = &pppppppuStack_180;
      }
      func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppuVar33);
      if ((long)ppppppuStack_170 < 0) {
        func_0x000107c60e14(pppppppuStack_180);
      }
    }
    if (0 < (int)*param_10) {
      func_0x000107c60c5c(&uStack_b0,&UNK_10f780ced,8);
      func_0x000107c60ddc(&pppppppuStack_180,*param_10);
      pppppuVar33 = pppppuStack_178;
      pppppppuVar19 = pppppppuStack_180;
      if (-1 < (long)ppppppuStack_170) {
        pppppuVar33 = (undefined8 *****)((ulong)ppppppuStack_170 >> 0x38);
        pppppppuVar19 = &pppppppuStack_180;
      }
      func_0x000107c60c5c(&uStack_b0,pppppppuVar19,pppppuVar33);
      if ((long)ppppppuStack_170 < 0) {
        func_0x000107c60e14(pppppppuStack_180);
      }
    }
  }
  lVar24 = *param_4;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  lStack_120 = lStack_a0;
  FUN_1000eb16c(lVar24,&uStack_130);
  if (lStack_120 < 0) {
    func_0x000107c60e14(uStack_130);
    if (lVar24 != 0) goto LAB_1000e84f4;
LAB_1000e86f0:
    lVar25 = *(long *)(*param_4 + 0x58);
    lVar24 = lVar25;
    func_0x000107c61380();
    if (((((uint)lVar24 & 0xffffffef) != 1) || (func_0x000107c61374(), lVar25 == 0)) ||
       (func_0x000107c613d4(), (int)lVar25 != 0)) {
      uVar14 = *(undefined8 *)(*param_4 + 0x58);
      func_0x000107c61380(uVar14);
      uVar15 = *(undefined8 *)(*param_4 + 0x58);
      func_0x000107c61374(uVar15);
      FUN_10002b838(auStack_198,uVar15);
      uStack_1a8 = uStack_a8;
      uStack_1b0 = uStack_b0;
      lStack_1a0 = lStack_a0;
      func_0x000107c310c4(&pppppppuStack_180,2,3,uVar14,auStack_198,&uStack_1b0,0);
      *param_11 = (long)pppppppuStack_180;
      *(undefined4 *)(param_11 + 1) = pppppuStack_178._0_4_;
      if (*(char *)((long)param_11 + 0x27) < '\0') {
        func_0x000107c60e14(param_11[2]);
      }
      param_11[3] = lStack_168;
      param_11[2] = (long)ppppppuStack_170;
      param_11[4] = CONCAT44(uStack_15c,fStack_160);
      uStack_15c = uStack_15c & 0xffffff;
      ppppppuStack_170 = (undefined8 ******)((ulong)ppppppuStack_170 & 0xffffffffffffff00);
      if (*(char *)((long)param_11 + 0x3f) < '\0') {
        func_0x000107c60e14(param_11[5]);
        param_11[6] = lStack_150;
        param_11[5] = CONCAT71(uStack_157,uStack_158);
        param_11[7] = CONCAT17(uStack_141,uStack_148);
        uStack_141 = 0;
        uStack_158 = 0;
        *(undefined4 *)(param_11 + 8) = uStack_140;
        if ((int)uStack_15c < 0) {
          func_0x000107c60e14(ppppppuStack_170);
        }
      }
      else {
        param_11[6] = lStack_150;
        param_11[5] = CONCAT71(uStack_157,uStack_158);
        param_11[7] = CONCAT17(uStack_141,uStack_148);
        uStack_141 = 0;
        uStack_158 = 0;
        *(undefined4 *)(param_11 + 8) = uStack_140;
      }
      if (lStack_1a0 < 0) {
        func_0x000107c60e14(uStack_1b0);
      }
      if (cStack_181 < '\0') {
        func_0x000107c60e14(auStack_198[0]);
      }
      lStack_1f8 = *param_11;
      uStack_1f0 = (undefined4)param_11[1];
      if (*(char *)((long)param_11 + 0x27) < '\0') {
        FUN_100033dac(&lStack_1e8,param_11[2],param_11[3]);
      }
      else {
        lStack_1e0 = param_11[3];
        lStack_1e8 = param_11[2];
        lStack_1d8 = param_11[4];
      }
      if (*(char *)((long)param_11 + 0x3f) < '\0') {
        FUN_100033dac(&lStack_1d0,param_11[5],param_11[6]);
      }
      else {
        lStack_1c8 = param_11[6];
        lStack_1d0 = param_11[5];
        lStack_1c0 = param_11[7];
      }
      uStack_1b8 = (undefined4)param_11[8];
      pppppppuVar19 = (undefined8 *******)PTR____NSArray0__struct_11034ab48;
      if (param_1 != (undefined8 *******)0x0) {
        pppppppuVar13 = param_1;
        func_0x000107c60b14();
        func_0x000107c61180();
        pppppppuVar19 = (undefined8 *******)PTR__OBJC_CLASS___NSArray_1126ae530;
        pppppppuStack_80 = pppppppuVar13;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
      }
      func_0x000107c421dc(param_3);
      if (param_1 != (undefined8 *******)0x0) goto code_r0x000107c61170;
      if (lStack_1c0 < 0) {
        func_0x000107c60e14(lStack_1d0);
      }
      if (lStack_1d8 < 0) {
        func_0x000107c60e14(lStack_1e8);
      }
    }
  }
  else {
    if (lVar24 == 0) goto LAB_1000e86f0;
LAB_1000e84f4:
    pppppppuVar19 = param_3;
    func_0x000107c61164(param_3,PTR_s_docObjectContextWillFetchDocObje_1125bf798);
    if (((ulong)pppppppuVar19 & 1) != 0) {
      pppppppuVar19 = (undefined8 *******)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      func_0x000107c421ec(param_3);
      goto code_r0x000107c61170;
    }
    if (!bVar28) {
      pppppppuStack_180 = (undefined8 *******)((ulong)pppppppuStack_180 & 0xffffffff00000000);
      (**(code **)(*param_7 + 0x20))(param_7,lVar24,&pppppppuStack_180);
    }
    uVar4 = *param_10;
    iVar1 = uVar4 + *param_9;
    if (*param_9 < 1) {
      iVar1 = 0;
    }
    if (*(char *)((long)param_7 + 0x1a) == '\x01') {
      pppppppuStack_180 = (undefined8 *******)0x0;
      pppppuStack_178 = (undefined8 *****)0x0;
      ppppppuStack_170 = (undefined8 ******)0x0;
      pppppppuVar19 = &pppppppuStack_180;
      if ((int)uVar4 < 1) {
        pppppppuVar19 = param_12;
      }
      do {
        while( true ) {
          lVar25 = lVar24;
          func_0x000107c613a8();
          if ((int)lVar25 != 100) {
            uVar4 = *param_10;
            if ((0 < (int)uVar4) &&
               ((int)uVar4 < (int)((ulong)((long)pppppuStack_178 - (long)pppppppuStack_180) >> 3)))
            {
              func_0x000107c30724(param_12,param_12[1],pppppppuStack_180 + uVar4,pppppuStack_178,
                                  (long)pppppuStack_178 - (long)(pppppppuStack_180 + uVar4) >> 3);
            }
            goto LAB_1000e8df8;
          }
          func_0x000107c61358(lVar24,0);
          lVar25 = lVar24;
          func_0x000107c6134c(lVar24,1);
          if (lVar25 != 0) break;
          func_0x000107c61370(*(undefined8 *)(*param_4 + 0x58));
          func_0x000107c61380(*(undefined8 *)(*param_4 + 0x58));
        }
        func_0x000107c61350(lVar24,1);
        plVar27 = param_7;
        (**(code **)(*param_7 + 0x28))(param_7,lVar25,0,apppppppuStack_108);
      } while (((int)plVar27 == 0) || (((ulong)apppppppuStack_108[0] & 1) != 0));
      func_0x000107c451c0();
      func_0x000107c61180();
      pppppppuStack_f0 = param_1;
      func_0x000107c57f38();
      func_0x000107c5330c(pppppppuStack_f0);
      if (bVar8) {
        func_0x000100c43730(pppppppuVar19,pppppppuStack_f0,param_8,iVar1);
        pppppppuVar19 = pppppppuStack_f0;
      }
      else {
        FUN_100103f40(pppppppuVar19,&pppppppuStack_f0);
        pppppppuVar19 = pppppppuStack_f0;
      }
      goto code_r0x000107c61170;
    }
    if (bVar9) {
      pppppppuStack_180 = (undefined8 *******)0x0;
      pppppuStack_178 = (undefined8 *****)0x0;
      ppppppuStack_170 = (undefined8 ******)0x0;
      pppppppuVar19 = &pppppppuStack_180;
      if ((int)uVar4 < 1) {
        pppppppuVar19 = param_12;
      }
      bVar9 = bVar28;
      if (iStack_294 < 1) {
        bVar9 = true;
      }
      do {
        while( true ) {
          lVar25 = lVar24;
          func_0x000107c613a8();
          if ((int)lVar25 != 100) {
            uVar4 = *param_10;
            if ((0 < (int)uVar4) &&
               ((int)uVar4 < (int)((ulong)((long)pppppuStack_178 - (long)pppppppuStack_180) >> 3)))
            {
              func_0x000107c30724(param_12,param_12[1],pppppppuStack_180 + uVar4,pppppuStack_178,
                                  (long)pppppuStack_178 - (long)(pppppppuStack_180 + uVar4) >> 3);
            }
            goto LAB_1000e8df8;
          }
          func_0x000107c61358(lVar24,0);
          lVar25 = lVar24;
          func_0x000107c6134c(lVar24,1);
          if (lVar25 != 0) break;
          func_0x000107c61370(*(undefined8 *)(*param_4 + 0x58));
          func_0x000107c61380(*(undefined8 *)(*param_4 + 0x58));
        }
        func_0x000107c61350(lVar24,1);
        bVar10 = bVar28;
        if (!bVar9) {
          iVar30 = 1;
          do {
            lVar11 = lVar24;
            func_0x000107c61360(lVar24,iVar30 + 1);
            bVar10 = (int)lVar11 == 5;
            bVar7 = iVar30 < iStack_294;
            iVar30 = iVar30 + 1;
          } while (!bVar10 && bVar7);
        }
      } while ((bVar10) &&
              ((plVar27 = param_7,
               (**(code **)(*param_7 + 0x28))(param_7,lVar25,0,apppppppuStack_108),
               (int)plVar27 == 0 || (((ulong)apppppppuStack_108[0] & 1) != 0))));
      func_0x000107c451c0();
      func_0x000107c61180();
      pppppppuStack_f0 = param_1;
      func_0x000107c57f38();
      func_0x000107c5330c(pppppppuStack_f0);
      if (bVar8) {
        func_0x000100c43730(pppppppuVar19,pppppppuStack_f0,param_8,iVar1);
        pppppppuVar19 = pppppppuStack_f0;
      }
      else {
        FUN_100103f40(pppppppuVar19,&pppppppuStack_f0);
        pppppppuVar19 = pppppppuStack_f0;
      }
      goto code_r0x000107c61170;
    }
    pppppppuStack_180 = (undefined8 *******)0x0;
    pppppuStack_178 = (undefined8 *****)0x0;
    ppppppuStack_170 = (undefined8 ******)0x0;
    pppppppuVar19 = &pppppppuStack_180;
    if (!(bool)(bVar8 & 0 < (int)uVar4)) {
      pppppppuVar19 = param_12;
    }
    while (lVar25 = lVar24, func_0x000107c613a8(), (int)lVar25 == 100) {
      func_0x000107c61358(lVar24,0);
      lVar25 = lVar24;
      func_0x000107c6134c(lVar24,1);
      if (lVar25 != 0) {
        func_0x000107c61350(lVar24,1);
        func_0x000107c451c0();
        func_0x000107c61180();
        pppppppuStack_f0 = param_1;
        func_0x000107c57f38();
        func_0x000107c5330c(pppppppuStack_f0);
        if (bVar8) {
          func_0x000100c43730(pppppppuVar19,pppppppuStack_f0,param_8,iVar1);
          pppppppuVar19 = pppppppuStack_f0;
        }
        else {
          FUN_100103f40(param_12,&pppppppuStack_f0);
          pppppppuVar19 = pppppppuStack_f0;
        }
        goto code_r0x000107c61170;
      }
      func_0x000107c61370(*(undefined8 *)(*param_4 + 0x58));
      func_0x000107c61380(*(undefined8 *)(*param_4 + 0x58));
    }
    uVar4 = *param_10;
    if ((0 < (long)(int)uVar4 && bVar8) &&
       ((int)uVar4 < (int)((ulong)((long)pppppuStack_178 - (long)pppppppuStack_180) >> 3))) {
      func_0x000107c30724(param_12,param_12[1],pppppppuStack_180 + (int)uVar4,pppppuStack_178,
                          (long)pppppuStack_178 - (long)(pppppppuStack_180 + (int)uVar4) >> 3);
    }
LAB_1000e8df8:
    pppppppuStack_f0 = &pppppppuStack_180;
    FUN_100104170(&pppppppuStack_f0);
    if ((int)lVar25 - 0x66U < 0xfffffffe) {
      lVar11 = lVar25;
      func_0x000107c61378(lVar25);
      FUN_10002b838(auStack_210,lVar11);
      uStack_228 = uStack_a8;
      uStack_230 = uStack_b0;
      lStack_220 = lStack_a0;
      func_0x000107c310c4(&pppppppuStack_180,2,4,lVar25,auStack_210,&uStack_230,0);
      *param_11 = (long)pppppppuStack_180;
      *(undefined4 *)(param_11 + 1) = pppppuStack_178._0_4_;
      if (*(char *)((long)param_11 + 0x27) < '\0') {
        func_0x000107c60e14(param_11[2]);
      }
      param_11[3] = lStack_168;
      param_11[2] = (long)ppppppuStack_170;
      param_11[4] = CONCAT44(uStack_15c,fStack_160);
      uStack_15c = uStack_15c & 0xffffff;
      ppppppuStack_170 = (undefined8 ******)((ulong)ppppppuStack_170 & 0xffffffffffffff00);
      if (*(char *)((long)param_11 + 0x3f) < '\0') {
        func_0x000107c60e14(param_11[5]);
        param_11[6] = lStack_150;
        param_11[5] = CONCAT71(uStack_157,uStack_158);
        param_11[7] = CONCAT17(uStack_141,uStack_148);
        uStack_141 = 0;
        uStack_158 = 0;
        *(undefined4 *)(param_11 + 8) = uStack_140;
        if ((int)uStack_15c < 0) {
          func_0x000107c60e14(ppppppuStack_170);
        }
      }
      else {
        param_11[6] = lStack_150;
        param_11[5] = CONCAT71(uStack_157,uStack_158);
        param_11[7] = CONCAT17(uStack_141,uStack_148);
        uStack_141 = 0;
        uStack_158 = 0;
        *(undefined4 *)(param_11 + 8) = uStack_140;
      }
      if (lStack_220 < 0) {
        func_0x000107c60e14(uStack_230);
      }
      if (cStack_1f9 < '\0') {
        func_0x000107c60e14(auStack_210[0]);
      }
      if (*(char *)((long)param_11 + 0x27) < '\0') {
        FUN_100033dac(&lStack_268,param_11[2],param_11[3]);
      }
      else {
        lStack_260 = param_11[3];
        lStack_268 = param_11[2];
        lStack_258 = param_11[4];
      }
      if (*(char *)((long)param_11 + 0x3f) < '\0') {
        FUN_100033dac(&lStack_250,param_11[5],param_11[6]);
      }
      else {
        lStack_248 = param_11[6];
        lStack_250 = param_11[5];
        lStack_240 = param_11[7];
      }
      uStack_238 = (undefined4)param_11[8];
      pppppppuVar19 = (undefined8 *******)PTR____NSArray0__struct_11034ab48;
      if (param_1 != (undefined8 *******)0x0) {
        pppppppuVar13 = param_1;
        func_0x000107c60b14();
        func_0x000107c61180();
        pppppppuVar19 = (undefined8 *******)PTR__OBJC_CLASS___NSArray_1126ae530;
        pppppppuStack_88 = pppppppuVar13;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
      }
      func_0x000107c421dc(param_3);
      if (param_1 != (undefined8 *******)0x0) goto code_r0x000107c61170;
      if (lStack_240 < 0) {
        func_0x000107c60e14(lStack_250);
      }
      if (lStack_258 < 0) {
        func_0x000107c60e14(lStack_268);
      }
    }
    func_0x000107c613a4(lVar24);
    func_0x000107c61344(lVar24);
    if (param_6 != 0) {
      pppppppuVar19 = (undefined8 *******)PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      if (pppppppuVar19 != (undefined8 *******)0x0) {
        ppppppuVar29 = param_12[1];
        for (ppppppuVar22 = *param_12; ppppppuVar22 != ppppppuVar29; ppppppuVar22 = ppppppuVar22 + 1
            ) {
          func_0x000107c50940(*ppppppuVar22);
          func_0x000107c5496c(pppppppuVar19);
        }
      }
      goto code_r0x000107c61170;
    }
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    func_0x000107c60e14();
  }
  pppppppuVar19 = param_3;
  if (lVar31 != 0) {
    FUN_1001ced2c(lVar31);
    func_0x000107c60e14();
    pppppppuVar19 = param_3;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppppppuVar19);
  return;
code_r0x0001000e838c:
  lVar24 = lVar24 + 0x20;
  if (lVar24 == param_8[1]) goto LAB_1000e8398;
  goto LAB_1000e8378;
}



/* Entry: 1000e94b0; end: 1000e94df; -[SCCameraHardwareResourceImpl setFrameHealthChecker:] */

void FUN_1000e94b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e94e0; end: 1000e94e7; -[SCCameraStabilityServices frameStabilityMonitor] */

undefined8 FUN_1000e94e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000e94e8; end: 1000e9543;  */

void FUN_1000e94e8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c76f8;
    func_0x000107c610f4(PTR_PTR_1126c76f8);
    func_0x000107c48d20(0x4018000000000000);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000e9544; end: 1000e959b; -[SCCameraFrameStabilityMonitorImpl initWithTimeout:performer:fixScheduler:] */

void FUN_1000e9544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_1000e959c(param_1,param_4,param_5);
  return;
}



/* Entry: 1000e959c; end: 1000e96df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000e959c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6688) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6698) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed66a0) = param_2;
  *(undefined **)(unaff_x20 + _DAT_112ed6750) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112ed6758;
  uVar5 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  pcVar2 = "CameraStabilityMonitorBase";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + lVar1) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6760) = param_3;
  FUN_1000e96e0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  puVar4 = PTR_PTR_1126b6ca0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c47e14();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112ed6690);
  *(undefined **)(puVar3 + _DAT_112ed6690) = puVar4;
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  return puVar3;
}



/* Entry: 1000e96e0; end: 1000e96ff;  */

void FUN_1000e96e0(void)

{
  func_0x000107c61168(&PTR_PTR_11287c7d0);
  return;
}



/* Entry: 1000e9700; end: 1000e97db; -[SCCameraHealthMonitor initWithPerformer:delegate:] */

undefined1 *
FUN_1000e9700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ef710;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e97dc; end: 1000e980b; -[SCCameraHardwareResourceImpl setFrameStabilityMonitor:] */

void FUN_1000e97dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000e980c; end: 1000e9813; -[SCCameraStabilityServices videoStreamStabilityMonitor] */

undefined8 FUN_1000e980c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000e9814; end: 1000e989f;  */

void FUN_1000e9814(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c7710;
    func_0x000107c610f4(PTR_PTR_1126c7710);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c47518(0x4054000000000000,puVar3,param_2,uVar2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1000e98a0; end: 1000e98d7; -[SCCameraVideoStreamStabilityMonitorImpl initWithLogger:maxFrameProcessingTimeMs:] */

void FUN_1000e98a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  FUN_1000e98d8(param_1);
  return;
}



/* Entry: 1000e98d8; end: 1000e9b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e98d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed69e0);
  FUN_1000e9b3c(&uStack_100);
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = uStack_a0;
  puVar1[0xf] = uStack_88;
  puVar1[0xe] = uStack_90;
  puVar1[0x11] = uStack_78;
  puVar1[0x10] = uStack_80;
  puVar1[5] = uStack_d8;
  puVar1[4] = uStack_e0;
  puVar1[7] = uStack_c8;
  puVar1[6] = uStack_d0;
  puVar1[9] = uStack_b8;
  puVar1[8] = uStack_c0;
  puVar1[0xb] = uStack_a8;
  puVar1[10] = uStack_b0;
  puVar1[1] = uStack_f8;
  *puVar1 = uStack_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed69e8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed69f0);
  *puVar1 = 0x6c616e696769726f;
  puVar1[1] = 0xe800000000000000;
  lVar2 = _DAT_112ed69f8;
  (**(code **)(lVar6 + 0x68))
            (&stack0xfffffffffffffef0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0d7d10);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xfffffffffffffef0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ed6a00;
  uVar5 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _DAT_112ed6a08;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ed6a10;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ed6a18;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ed6a20;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ed6a28;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6a30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed6a38) = param_1;
  func_0x000107c61154(&stack0xfffffffffffffef0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000e9b3c; end: 1000e9ba3;  */

void FUN_1000e9b3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dafa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126dafa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  param_1[1] = puVar2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[0x10] = 0;
  param_1[0x11] = puVar1;
  return;
}



/* Entry: 1000e9ba4; end: 1000e9beb; -[SCRuntimeStatistics init] */

void FUN_1000e9ba4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112700028;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1000e9bec; end: 1000e9bf7; +[SCDocPrefItem table] */

undefined * FUN_1000e9bec(void)

{
  return &UNK_10f7805f9;
}



/* Entry: 1000e9bf8; end: 1000e9cc7;  */

ulong * FUN_1000e9bf8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  
  puVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (ulong *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    puVar3 = param_2;
  }
  puVar14 = (ulong *)param_1[1];
  if (puVar14 < param_2) {
LAB_1000e9c40:
    if (param_2 == (ulong *)0x0) {
      puVar3 = (ulong *)*param_1;
      *param_1 = 0;
      if (puVar3 != (ulong *)0x0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        uVar2 = param_1[1];
        if ((uVar2 != 0) && (param_1[3] != 0)) {
          uVar5 = *param_2;
          uVar9 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
          uVar9 = (uVar5 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
          uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
          uVar10 = uVar2 - 1;
          if ((uVar2 & uVar10) == 0) {
            uVar12 = uVar9 & uVar10;
          }
          else {
            uVar12 = uVar9;
            if (uVar2 <= uVar9) {
              uVar12 = 0;
              if (uVar2 != 0) {
                uVar12 = uVar9 / uVar2;
              }
              uVar12 = uVar9 - uVar12 * uVar2;
            }
          }
          plVar4 = *(long **)(*param_1 + uVar12 * 8);
          if (plVar4 != (long *)0x0) {
            puVar3 = (ulong *)*plVar4;
            do {
              if (puVar3 == (ulong *)0x0) {
                return (ulong *)0x0;
              }
              uVar13 = puVar3[1];
              if (uVar13 == uVar9) {
                if (puVar3[2] == uVar5) {
                  return puVar3;
                }
              }
              else {
                if ((uVar2 & uVar10) == 0) {
                  uVar13 = uVar13 & uVar10;
                }
                else if (uVar2 <= uVar13) {
                  uVar1 = 0;
                  if (uVar2 != 0) {
                    uVar1 = uVar13 / uVar2;
                  }
                  uVar13 = uVar13 - uVar1 * uVar2;
                }
                if (uVar13 != uVar12) {
                  return (ulong *)0x0;
                }
              }
              puVar3 = (ulong *)*puVar3;
            } while( true );
          }
        }
        return (ulong *)0x0;
      }
      puVar14 = (ulong *)((long)param_2 << 3);
      func_0x000107c60e20();
      uVar2 = *param_1;
      *param_1 = (ulong)puVar14;
      if (uVar2 != 0) {
        func_0x000107c60e14();
        puVar14 = (ulong *)*param_1;
      }
      param_1[1] = (ulong)param_2;
      puVar3 = puVar14;
      func_0x000107c60ee4(puVar14,(ulong *)((long)param_2 << 3));
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        puVar6 = (ulong *)plVar4[1];
        uVar2 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar2) == 0) {
          puVar6 = (ulong *)((ulong)puVar6 & uVar2);
        }
        else if (param_2 <= puVar6) {
          uVar5 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar5 = (ulong)puVar6 / (ulong)param_2;
          }
          puVar6 = (ulong *)((long)puVar6 - uVar5 * (long)param_2);
        }
        puVar14[(long)puVar6] = (ulong)(param_1 + 2);
        plVar7 = (long *)*plVar4;
        while (plVar7 != (long *)0x0) {
          puVar11 = (ulong *)plVar7[1];
          if (((ulong)param_2 & uVar2) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & uVar2);
          }
          else if (param_2 <= puVar11) {
            uVar5 = 0;
            if (param_2 != (ulong *)0x0) {
              uVar5 = (ulong)puVar11 / (ulong)param_2;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar5 * (long)param_2);
          }
          plVar8 = plVar7;
          if (puVar11 != puVar6) {
            if (puVar14[(long)puVar11] == 0) {
              puVar14[(long)puVar11] = (ulong)plVar4;
              puVar6 = puVar11;
            }
            else {
              *plVar4 = *plVar7;
              *plVar7 = *(undefined8 *)puVar14[(long)puVar11];
              *(long **)puVar14[(long)puVar11] = plVar7;
              plVar8 = plVar4;
            }
          }
          plVar4 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return puVar3;
  }
  if (param_2 < puVar14) {
    puVar3 = (ulong *)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((ulong *)0x1 < puVar3) {
      puVar3 = (ulong *)(1L << (-LZCOUNT((long)puVar3 + -1) & 0x3fU));
    }
    if (param_2 <= puVar3) {
      param_2 = puVar3;
    }
    if (param_2 < puVar14) goto LAB_1000e9c40;
  }
  return puVar3;
}



/* Entry: 1000e9cc8; end: 1000e9d4f;  */

void FUN_1000e9cc8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000e9d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1000e9d50; end: 1000e9dd7;  */

void FUN_1000e9d50(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000e9dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1000e9dd8; end: 1000ea00f;  */

undefined1  [16] FUN_1000e9dd8(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if (plVar9[2] == uVar11) {
            uVar3 = 0;
            goto LAB_1000e9fd0;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar10 <= uVar7) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar2 * uVar10;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar9 = (long *)0x40;
  func_0x000107c60e20();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  plVar9[2] = *(long *)*param_4;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  *(undefined4 *)(plVar9 + 7) = 0x3f800000;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_1000ea010(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar4 * uVar10;
      }
      *(long **)(lVar5 + uVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1000e9fd0:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1000ea010; end: 1000ea213;  */

void FUN_1000ea010(long *param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  long alStack_c8 [2];
  char cStack_b1;
  undefined8 ******ppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar12 = param_1[1];
  if (uVar12 > param_2 || param_2 == uVar12) {
    if (uVar12 <= param_2) {
      return;
    }
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (param_2 <= uVar6) {
      param_2 = uVar6;
    }
    if (uVar12 <= param_2) {
      return;
    }
  }
  if (param_2 == 0) {
    lVar11 = *param_1;
    *param_1 = 0;
    if (lVar11 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar11 = param_2 << 3;
    func_0x000107c60e20();
    lVar5 = *param_1;
    *param_1 = lVar11;
    if (lVar5 != 0) {
      func_0x000107c60e14();
      lVar11 = *param_1;
    }
    param_1[1] = param_2;
    func_0x000107c60ee4(lVar11,param_2 << 3);
    plVar7 = (long *)param_1[2];
    if (plVar7 == (long *)0x0) {
      return;
    }
    uVar12 = plVar7[1];
    uVar6 = param_2 - 1;
    if ((param_2 & uVar6) == 0) {
      uVar12 = uVar12 & uVar6;
    }
    else if (param_2 <= uVar12) {
      uVar10 = 0;
      if (param_2 != 0) {
        uVar10 = uVar12 / param_2;
      }
      uVar12 = uVar12 - uVar10 * param_2;
    }
    *(long **)(lVar11 + uVar12 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar7;
    while (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      if ((param_2 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (param_2 <= uVar10) {
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar3 * param_2;
      }
      plVar9 = plVar8;
      if (uVar10 != uVar12) {
        if (*(long *)(lVar11 + uVar10 * 8) == 0) {
          *(long **)(lVar11 + uVar10 * 8) = plVar7;
          uVar12 = uVar10;
        }
        else {
          *plVar7 = *plVar8;
          *plVar8 = **(undefined8 **)(lVar11 + uVar10 * 8);
          **(long **)(lVar11 + uVar10 * 8) = (long)plVar8;
          plVar9 = plVar7;
        }
      }
      plVar7 = plVar9;
      plVar8 = (long *)*plVar9;
    }
    return;
  }
  func_0x000104bd35f4();
  if ((*(byte *)((long)param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch((int)param_1[1]) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar7 = (long *)param_1[7];
    goto code_r0x0001000ea874;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    pcVar13 = ") ISNULL";
    pcVar14 = (char *)0x8;
    goto code_r0x0001000ea894;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    pcVar13 = ") IS NOT NULL";
    pcVar14 = (char *)0xd;
    goto code_r0x0001000ea894;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar7 = (long *)param_1[7];
    plVar8 = (long *)param_1[8];
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar8 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x10);
      plVar7 = plVar8;
code_r0x0001000ea808:
                    /* WARNING: Could not recover jumptable at 0x0001000ea82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar8 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
      goto code_r0x0001000ea808;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (param_1[10] != param_1[9]) {
      uVar12 = 0;
      pcVar14 = (char *)0x1;
      pcVar13 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_c8);
        pcVar2 = "?";
        if (uVar12 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar12 != 0) {
          uVar1 = 2;
        }
        plVar7 = alStack_c8;
        func_0x000107c60c70(plVar7,0,pcVar2,uVar1);
        uStack_a8 = plVar7[1];
        ppppppuStack_b0 = (undefined8 ******)*plVar7;
        uStack_a0 = plVar7[2];
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = 0;
        uVar6 = uStack_a8;
        pppppppuVar4 = (undefined8 *******)ppppppuStack_b0;
        if (-1 < (long)uStack_a0) {
          uVar6 = uStack_a0 >> 0x38;
          pppppppuVar4 = &ppppppuStack_b0;
        }
        func_0x000107c60c5c(param_2,pppppppuVar4,uVar6);
        if ((long)uStack_a0 < 0) {
          func_0x000107c60e14(ppppppuStack_b0);
        }
        if (cStack_b1 < '\0') {
          func_0x000107c60e14(alStack_c8[0]);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulong)(param_1[10] - param_1[9] >> 3));
      goto code_r0x0001000ea894;
    }
    goto code_r0x0001000ea888;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (param_1[10] == param_1[9]) goto code_r0x0001000ea888;
    uVar12 = 0;
    pcVar14 = (char *)0x1;
    pcVar13 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_c8);
      pcVar2 = "?";
      if (uVar12 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar12 != 0) {
        uVar1 = 2;
      }
      plVar7 = alStack_c8;
      func_0x000107c60c70(plVar7,0,pcVar2,uVar1);
      uStack_a8 = plVar7[1];
      ppppppuStack_b0 = (undefined8 ******)*plVar7;
      uStack_a0 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      uVar6 = uStack_a8;
      pppppppuVar4 = (undefined8 *******)ppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar6 = uStack_a0 >> 0x38;
        pppppppuVar4 = &ppppppuStack_b0;
      }
      func_0x000107c60c5c(param_2,pppppppuVar4,uVar6);
      if ((long)uStack_a0 < 0) {
        func_0x000107c60e14(ppppppuStack_b0);
      }
      if (cStack_b1 < '\0') {
        func_0x000107c60e14(alStack_c8[0]);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)(param_1[10] - param_1[9] >> 3));
    goto code_r0x0001000ea894;
  case 0xe:
    pcVar13 = (char *)param_1[2];
    pcVar14 = pcVar13;
    func_0x000107c613d0(pcVar13);
    goto code_r0x0001000ea894;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_c8);
    plVar7 = alStack_c8;
    func_0x000107c60c70(plVar7,0,"?",1);
    uStack_a8 = plVar7[1];
    ppppppuStack_b0 = (undefined8 ******)*plVar7;
    uStack_a0 = plVar7[2];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    uVar12 = uStack_a8;
    pppppppuVar4 = (undefined8 *******)ppppppuStack_b0;
    if (-1 < (long)uStack_a0) {
      uVar12 = uStack_a0 >> 0x38;
      pppppppuVar4 = &ppppppuStack_b0;
    }
    func_0x000107c60c5c(param_2,pppppppuVar4,uVar12);
    if ((long)uStack_a0 < 0) {
      func_0x000107c60e14(ppppppuStack_b0);
    }
    if (cStack_b1 < '\0') {
      func_0x000107c60e14(alStack_c8[0]);
    }
  default:
    goto LAB_1000ea8a4;
  }
  plVar7 = (long *)param_1[8];
code_r0x0001000ea874:
  (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
code_r0x0001000ea888:
  pcVar13 = ")";
  pcVar14 = (char *)0x1;
code_r0x0001000ea894:
  func_0x000107c60c5c(param_2,pcVar13,pcVar14);
LAB_1000ea8a4:
  return;
}



/* Entry: 1000ea214; end: 1000ea8cf;  */

void FUN_1000ea214(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001000ea874;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001000ea894;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001000ea894;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001000ea808:
                    /* WARNING: Could not recover jumptable at 0x0001000ea82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001000ea808;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001000ea894;
    }
    goto code_r0x0001000ea888;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001000ea888;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001000ea894;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x0001000ea894;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_1000ea8a4;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001000ea874:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001000ea888:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001000ea894:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_1000ea8a4:
  return;
}



/* Entry: 1000ea8d0; end: 1000eaf8b;  */

void FUN_1000ea8d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001000eaf30;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001000eaf50;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001000eaf50;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001000eaec4:
                    /* WARNING: Could not recover jumptable at 0x0001000eaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001000eaec4;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001000eaf50;
    }
    goto code_r0x0001000eaf44;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001000eaf44;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001000eaf50;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x0001000eaf50;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_1000eaf60;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001000eaf30:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001000eaf44:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001000eaf50:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_1000eaf60:
  return;
}



/* Entry: 1000eaf8c; end: 1000eafb3;  */

void FUN_1000eaf8c(long param_1)

{
  func_0x000107c61120(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1000eafb4; end: 1000eafe3; -[SCCameraHardwareResourceImpl setVideoStreamStabilityMonitor:] */

void FUN_1000eafb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000eafe4; end: 1000eb07f; -[_TtC30AppStartupStateServiceProvider36AppStartupStateServiceImplementation registerAppStartupStateHandler:] */

void FUN_1000eafe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_1000ec000();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000eb080; end: 1000eb16b;  */

long FUN_1000eb080(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_100102e7c();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1 + 4;
          FUN_100105738(plVar4,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1000eb16c; end: 1000eb287;  */

undefined8 FUN_1000eb16c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  uStack_48 = 0;
  lVar4 = param_1;
  FUN_1000eb080();
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    lVar4 = (long)*(char *)((long)param_2 + 0x17);
    puVar3 = param_2;
    if (lVar4 < 0) {
      lVar4 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
    }
    func_0x000107c613a0(uVar2,puVar3,(int)lVar4 + 1,&uStack_48,0);
    uVar1 = uStack_48;
    uVar5 = 0;
    if ((int)uVar2 == 0) {
      puStack_38 = param_2;
      FUN_100102e9c(param_1,param_2,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      uVar5 = uStack_48;
    }
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    func_0x000107c613a4(uVar5);
    func_0x000107c61344(uVar5);
  }
  return uVar5;
}



/* Entry: 1000eb288; end: 1000eb397;  */

undefined * FUN_1000eb288(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    FUN_1000285a8(0x112da0e80,&UNK_10d944000);
    puVar5 = puVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar8 = puVar10[-2];
      bVar2 = *(byte *)(puVar10 + -1);
      uVar9 = (ulong)bVar2;
      uVar12 = puVar10[1];
      uVar11 = *puVar10;
      func_0x000107c615f0(uVar11);
      uVar6 = uVar8;
      FUN_100296c10();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eb394);
        (*pcVar4)();
      }
      uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar9 + 0x40) = *(ulong *)(puVar5 + uVar9 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar8;
      *(byte *)(puVar1 + 1) = bVar2;
      puVar3 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x10);
      puVar3[1] = uVar12;
      *puVar3 = uVar11;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000eb398);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar10 = puVar10 + 4;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1000eb398; end: 1000eb39b;  */

void FUN_1000eb398(void)

{
  return;
}



/* Entry: 1000eb39c; end: 1000eb72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000eb39c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uStack_a0;
  long lStack_98;
  undefined8 *puStack_88;
  undefined1 uStack_80;
  
  puVar3 = param_1;
  FUN_1000eb398();
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000002b;
  FUN_1000a9a18(0xd00000000000002b,0x800000010ef827f0);
  func_0x000107c61170(uVar4);
  uStack_a0 = 0;
  lStack_98 = -0x2000000000000000;
  func_0x000107c602fc(0x3c);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010ef82820);
  uStack_80 = (undefined1)param_2;
  puStack_88 = param_1;
  func_0x000107c603d0(&puStack_88,&uStack_a0,&UNK_1103c2058,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(lStack_98);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112da0e48);
  func_0x000107c49be8();
  if (((uVar6 & 1) == 0) && (uVar11 = *(ulong *)(unaff_x20 + _DAT_112da0e40), uVar11 != 0)) {
    func_0x000107c6157c(uVar11);
    FUN_100083b20(&uStack_a0);
    lVar1 = lStack_98;
    uVar7 = uStack_a0;
    uVar6 = uStack_a0;
    func_0x000107c614f0(uStack_a0);
    (**(code **)(lVar1 + 8))();
    func_0x000107c615e8();
    func_0x00010485773c();
    func_0x000107c61574(uVar6);
    func_0x000107c61574();
    uVar6 = uVar11;
    if ((uVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      goto LAB_1000eb6b0;
    }
  }
  FUN_1000eb730();
  uVar11 = uVar6;
  FUN_100236cd0();
  func_0x000107c6142c(uVar6);
  if (uVar11 >> 0x3e == 0) {
    if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1000eb540;
LAB_1000eb5d0:
    func_0x000107c6142c(uVar11);
    puVar8 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
    func_0x000107c61168();
    func_0x000107c41590();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
      func_0x00010146db5c(param_1,param_2,param_3);
      goto LAB_1000eb6b0;
    }
    uStack_a0 = 0;
    lStack_98 = -0x2000000000000000;
    func_0x000107c602fc(0x4a);
    uVar4 = 0x800000010ef828b0;
    func_0x000107c5fb78(0xd000000000000048,0x800000010ef828b0);
    puVar9 = puVar8;
    func_0x000107c417f0(puVar8);
  }
  else {
    uVar6 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar6 = uVar11;
    }
    func_0x000107c60480();
    if (uVar6 == 0) goto LAB_1000eb5d0;
LAB_1000eb540:
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000eb730);
        (*pcVar2)();
      }
      puVar8 = *(undefined **)(uVar11 + 0x20);
      func_0x000107c61174(puVar8);
    }
    else {
      puVar8 = (undefined *)0x0;
      FUN_1002370d8(0,uVar11);
    }
    func_0x000107c6142c(uVar11);
    uStack_a0 = 0;
    lStack_98 = -0x2000000000000000;
    func_0x000107c602fc(0x4a);
    uVar4 = 0x800000010ef82860;
    func_0x000107c5fb78(0xd000000000000048,0x800000010ef82860);
    puVar9 = puVar8;
    func_0x000107c417f0(puVar8);
  }
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  func_0x000107c5fb78(puVar10,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(lStack_98);
LAB_1000eb6b0:
  func_0x000107c61428(puVar3,&uStack_a0,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return puVar8;
}



/* Entry: 1000eb730; end: 1000eb8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000eb730(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puStack_48;
  ulong uStack_40;
  long lStack_38;
  
  FUN_1000eb398();
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da0e48);
  func_0x000107c49be8();
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112da0e40);
  if (((ulong)puVar2 & 1) == 0) {
    if (uVar7 == 0) {
      func_0x00010146d9e8();
      puVar5 = puVar2;
      func_0x000107c4197c();
      goto LAB_1000eb878;
    }
    func_0x000107c6157c(uVar7);
    FUN_100083b20(&uStack_40);
    lVar1 = lStack_38;
    uVar4 = uStack_40;
    uVar3 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lVar1 + 8))();
    func_0x000107c615e8();
    func_0x00010485773c();
    func_0x000107c61574(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(uVar7);
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    FUN_100083b20(&uStack_40);
    uVar4 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 8))();
    func_0x000107c615e8(uStack_40);
    FUN_100083b20(&puStack_48);
    func_0x000107c61574(uVar4);
  }
  else {
    if (uVar7 == 0) {
      func_0x00010146d9e8();
      puVar5 = puVar2;
      func_0x000107c4197c();
LAB_1000eb878:
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      uVar6 = 0;
      func_0x0001002374e8(0,0x112d79960,&PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
      puVar2 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
      return puVar2;
    }
    FUN_100083b20(&uStack_40);
    uVar7 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 8))();
    func_0x000107c615e8(uStack_40);
    FUN_100083b20(&puStack_48);
  }
  func_0x000107c61574(uVar7);
  return puStack_48;
}



/* Entry: 1000eb8e4; end: 1000eb8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb8e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  FUN_100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = lStack_58;
  FUN_100083b20(&lStack_58);
  lVar2 = lVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_1000eb9e0();
  func_0x000107c610f8();
  FUN_1000285a8(0x112da05b8,&UNK_10d9433e8);
  pcVar4 = FUN_1000ebaa4;
  FUN_1000823a8(FUN_1000ebaa4,0);
  *(code **)(lVar3 + _DAT_112da05c0) = pcVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(lStack_58);
  func_0x000107c61170(lVar1);
  *param_1 = (long)puVar5;
  param_1[1] = (long)&PTR_DAT_1103bdbe8;
  return;
}



/* Entry: 1000eb8ec; end: 1000eb9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb8ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  FUN_100083b20(&lStack_58);
  lVar2 = lVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_1000eb9e0();
  func_0x000107c610f8();
  FUN_1000285a8(0x112da05b8,&UNK_10d9433e8);
  pcVar4 = FUN_1000ebaa4;
  FUN_1000823a8(FUN_1000ebaa4,0);
  *(code **)(lVar3 + _DAT_112da05c0) = pcVar4;
  puVar5 = auStack_68;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(lStack_58);
  func_0x000107c61170(lVar1);
  *param_1 = (long)puVar5;
  param_1[1] = (long)&PTR_DAT_1103bdbe8;
  return;
}



/* Entry: 1000eb9e0; end: 1000eb9ff;  */

void FUN_1000eb9e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7780);
  return;
}



/* Entry: 1000eba00; end: 1000eba2f; -[SCApplicationWindow uiEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eba00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750b58);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000eba30; end: 1000eba33;  */

void FUN_1000eba30(long param_1,long param_2)

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



/* Entry: 1000eba34; end: 1000eba5f;  */

void FUN_1000eba34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000eba60; end: 1000ebaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eba60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da05c0;
  func_0x000107c61428(unaff_x20 + _DAT_112da05c0,auStack_38,0,0);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1000ebaa4; end: 1000ebc13;  */

void FUN_1000ebaa4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0x112d79958;
  FUN_1000285a8(0x112d79958,&UNK_10d943450);
  func_0x000107c613fc();
  puVar4 = PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20;
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uVar7 = *(undefined8 *)puVar4;
  uVar8 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInDualCamera_110347ee8;
  *(undefined8 *)(lVar1 + 0x20) = uVar7;
  *(undefined8 *)(lVar1 + 0x28) = uVar8;
  uVar9 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0;
  uVar10 = *(undefined8 *)PTR__AVCaptureDeviceTypeBuiltInTripleCamera_110347f08;
  *(undefined8 *)(lVar1 + 0x30) = uVar9;
  *(undefined8 *)(lVar1 + 0x38) = uVar10;
  uVar11 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  uVar2 = 0;
  FUN_1000ebdd0(0);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
  puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceDiscoverySession_1126a6c90;
  func_0x000107c61168();
  func_0x000107c41fd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar3);
  puVar5 = puVar4;
  func_0x000107c4197c();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001002366e4(0);
  puVar6 = puVar5;
  func_0x000107c5fc54(puVar5,uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  *param_1 = puVar6;
  return;
}



/* Entry: 1000ebc14; end: 1000ebc1b;  */

void FUN_1000ebc14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ebc1c; end: 1000ebc93;  */

void FUN_1000ebc1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ebc94; end: 1000ebcd7;  */

void FUN_1000ebc94(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x0001000ebc74();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110567c18;
  *param_1 = lVar1;
  return;
}



/* Entry: 1000ebcd8; end: 1000ebda3;  */

undefined * FUN_1000ebcd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000052;
  FUN_1000a9a18(0xd000000000000052,0x800000010f0c9640);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126aefc0;
  func_0x000107c610f8(PTR_PTR_1126aefc0);
  func_0x000107c453e4();
  func_0x000107c4e428();
  func_0x000107c591b8(puVar3);
  func_0x000107c61428(param_1,auStack_60,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 1000ebda4; end: 1000ebdcf;  */

void FUN_1000ebda4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  FUN_1000ebcd8();
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000ebdd0; end: 1000ebde3;  */

void FUN_1000ebdd0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103ac520;
  if (lRam0000000112d79758 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d79758 = param_1;
  }
  return;
}



/* Entry: 1000ebde4; end: 1000ebe27;  */

void FUN_1000ebde4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1000ebe28; end: 1000ebeab; -[SCBareboneNavigationController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000ebe28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706260;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    func_0x000107c610fc();
    lVar4 = (long)_DAT_11278e2e8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c41c10(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x000107c53dec(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000ebeac; end: 1000ebef3; -[SCViewControllerLifecycleChecker init] */

void FUN_1000ebeac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270e2a0;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = 1;
  }
  return;
}



/* Entry: 1000ebef4; end: 1000ebeff; -[SCViewControllerLifecycleChecker didInit:] */

void FUN_1000ebef4(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



/* Entry: 1000ebf00; end: 1000ebf4f;  */

void FUN_1000ebf00(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c61188(param_1,&UNK_10f7c16a9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000ebf50; end: 1000ebfff; -[SCBareboneNavigationController patchForCustomNavigationBar] */

void FUN_1000ebf50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  func_0x000107c569d0(param_1,param_2,1);
  func_0x000107c59ea8(param_1);
  iVar1 = 2;
  FUN_100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (lRam00000001137f48d0 != -1) {
    FUN_10002a2fc(0x1137f48d0,&PTR___NSConcreteGlobalBlock_110cd1620);
  }
  puVar2 = PTR_PTR_1126e0118;
  func_0x000107c610f4(PTR_PTR_1126e0118);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c517e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1000ec000; end: 1000ec1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec000(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  puVar2 = &UNK_1107759f0;
  func_0x000107c613fc(&UNK_1107759f0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_2;
  func_0x000107c60bc4(param_2);
  FUN_10006c804();
  lVar3 = *(long *)(param_1 + _DAT_11307cd58);
  if (lVar3 != 0) {
    func_0x000107c61174();
    FUN_100070bfc();
    (**(code **)(param_2 + 0x10))(param_2,lVar3);
    func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  puVar4 = &UNK_110775a18;
  func_0x000107c613fc(&UNK_110775a18,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_104474284;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  lVar3 = _DAT_11307cd60;
  func_0x000107c61428(param_1 + _DAT_11307cd60,auStack_68,0x21,0);
  uVar7 = *(ulong *)(param_1 + lVar3);
  func_0x000107c6157c(puVar2);
  uVar5 = uVar7;
  func_0x000107c61558();
  *(ulong *)(param_1 + lVar3) = uVar7;
  uVar6 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    func_0x000104474154(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(param_1 + lVar3) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar7 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000104474154(uVar7,uVar5 + 1,1,uVar6);
  }
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  lVar1 = uVar7 + uVar5 * 0x10;
  *(undefined **)(lVar1 + 0x20) = &UNK_104474294;
  *(undefined **)(lVar1 + 0x28) = puVar4;
  *(ulong *)(param_1 + lVar3) = uVar7;
  func_0x000107c614a8(auStack_68);
  FUN_100070bfc();
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1000ec1a4; end: 1000ec1c7;  */

void FUN_1000ec1a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec1c8; end: 1000ec1cb;  */

void FUN_1000ec1c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec1cc; end: 1000ec28b;  */

/* WARNING: Possible PIC construction at 0x0001000ec258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000ec268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000ec25c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec1cc(long param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3ce18(param_1);
    uVar1 = param_2;
    func_0x000107c49a3c();
    if ((uVar1 & 1) == 0) {
      param_2 = param_1 + _DAT_112761f94;
      func_0x000107c61148(param_2);
      func_0x000107c3f0fc();
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c58fbc();
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c61170(param_1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1000ec28c; end: 1000ec3bb; -[SCLegacyCameraStartupCommandsEntryPoint _warmupCameraIfNeededForAppStartupState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  param_1 = param_1 + _DAT_112761f94;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3e47c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c3e49c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000ec3bc; end: 1000ec3cb; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices authorizationChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f78));
  return;
}



/* Entry: 1000ec3cc; end: 1000ec5c7; -[SCAppStartupState isAppLaunchingToCameraScreen] */

bool FUN_1000ec3cc(undefined **param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar2 = param_1;
  func_0x000107c5b654();
  func_0x000107c61180();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = param_1;
    func_0x000107c5b654();
    func_0x000107c61180();
    ppuVar4 = ppuVar3;
    func_0x000107c5c74c();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar2);
    if (ppuVar4 != (undefined **)0x1) {
      return false;
    }
  }
  ppuVar2 = param_1;
  func_0x000107c4ab6c();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
LAB_1000ec50c:
    func_0x000107c4ab6c();
    func_0x000107c61180();
    ppuVar2 = param_1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar4 = (undefined **)PTR_PTR_1126b1068;
      func_0x000107c610f4();
      func_0x000107c48fe4();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar5 = ppuVar4;
        func_0x000107c4e434();
        func_0x000107c61180();
        bVar1 = ppuVar5 == &PTR____CFConstantStringClassReference_110dad4b8;
        func_0x000107c61170();
        goto LAB_1000ec590;
      }
    }
    bVar1 = true;
  }
  else {
    ppuVar2 = ppuVar3;
    func_0x000107c5d0f0();
    func_0x000107c61180();
    ppuVar4 = ppuVar2;
    func_0x000107c49d0c();
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar4 = ppuVar3;
      func_0x000107c5d0f0();
      func_0x000107c61180();
      ppuVar5 = ppuVar4;
      func_0x000107c49d0c();
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar5 = ppuVar3;
        func_0x000107c5d0f0();
        func_0x000107c61180();
        ppuVar6 = ppuVar5;
        func_0x000107c49d0c();
        func_0x000107c61170(ppuVar5);
        func_0x000107c61170(ppuVar4);
        func_0x000107c61170(ppuVar2);
        if (((ulong)ppuVar6 & 1) != 0) {
          bVar1 = false;
          goto LAB_1000ec5a8;
        }
        goto LAB_1000ec50c;
      }
      bVar1 = false;
LAB_1000ec590:
      func_0x000107c61170(ppuVar4);
    }
    else {
      bVar1 = false;
    }
  }
  func_0x000107c61170(ppuVar2);
LAB_1000ec5a8:
  func_0x000107c61170(ppuVar3);
  return bVar1;
}



/* Entry: 1000ec5c8; end: 1000ec5cf; -[SCAppStartupState launchOptions] */

undefined8 FUN_1000ec5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1000ec5d0; end: 1000ec5f3;  */

void FUN_1000ec5d0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec5f4; end: 1000ec62b; -[SCBridgeServicesExposer exposeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112787cd8);
  *(undefined8 *)(param_1 + _DAT_112787cd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000ec62c; end: 1000ec65b; -[SCBridgeServicesExposer services] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec62c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112787cd8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000ec65c; end: 1000ec6d7;  */

void FUN_1000ec65c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec6d8; end: 1000ec6db;  */

void FUN_1000ec6d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec6dc; end: 1000ec707;  */

void FUN_1000ec6dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ec708; end: 1000ec8e3;  */

void FUN_1000ec708(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = *(long *)(unaff_x20 + 200);
  bVar1 = *(byte *)(unaff_x20 + 0x30);
  *(byte *)(lVar5 + 0x19) = bVar1 ^ 1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  uStack_80 = 0x3a656c64493a5357;
  uStack_78 = 0xe800000000000000;
  uVar7 = 0x656c6449;
  if (bVar1 == 0) {
    uVar7 = 0x656c6449746f4e;
  }
  uVar6 = 0xe400000000000000;
  if (bVar1 == 0) {
    uVar6 = 0xe700000000000000;
  }
  func_0x000107c61174(uVar3);
  func_0x000107c5fb78(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  func_0x000100029b28(uStack_80,uStack_78);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar7);
  *(undefined8 *)(lVar5 + 0x10) = uVar6;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61434(uVar7);
  FUN_1000ec920();
  func_0x000107c6142c(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  cVar2 = *(char *)(unaff_x20 + 0x20);
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  *(char *)(lVar5 + 0x40) = cVar2;
  puVar4 = &uStack_80;
  func_0x000107c61428(param_1,puVar4,0,0);
  uVar3 = *param_1;
  if (cVar2 == '\x01') {
    uVar6 = 0x800000010f1edc30;
    func_0x000107c61174(uVar3);
    uVar7 = 0xd000000000000012;
  }
  else {
    func_0x000107c61174(uVar3);
    FUN_1000e48c0(uVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar7 = 0x76697463413a5357;
    uVar6 = 0xee003a6567615065;
  }
  func_0x000100029b28(uVar7,uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar6);
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  *(undefined1 *)(lVar5 + 0x30) = 0;
  return;
}



/* Entry: 1000ec8e4; end: 1000ec91f;  */

void FUN_1000ec8e4(void)

{
  FUN_1000ec708();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ecda0,0,0);
  return;
}



/* Entry: 1000ec920; end: 1000ecd9f;  */

void FUN_1000ec920(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 auStack_90 [6];
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & param_1[7];
  puVar4 = param_1;
  func_0x000107c61434();
  lVar15 = 0;
  do {
    while (uVar13 == 0) {
      bVar3 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ecb24);
        (*pcVar2)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar15) {
        func_0x000107c61574(param_1);
        return;
      }
      uVar13 = (param_1 + 7)[lVar15];
    }
    FUN_1000298f0();
    func_0x000107c61428();
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    uVar6 = 0xd00000000000001a;
    func_0x000100029b28(0xd00000000000001a,0x800000010f1edc90);
    func_0x000107c61170(uVar5);
    puVar4 = auStack_90;
    func_0x000107c61428(unaff_x20 + 0x20,puVar4,0x21,0);
    uVar7 = *(ulong *)(unaff_x20 + 0x20);
    func_0x000107c61558();
    lVar14 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    uVar8 = uVar7;
    FUN_1000afb9c();
    uVar12 = (ulong)~(uint)puVar4 & 1;
    uVar9 = *(long *)(lVar14 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(lVar14 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ecb28);
      (*pcVar2)();
    }
    if (*(long *)(lVar14 + 0x18) < (long)uVar9) {
      func_0x0001000ecb3c();
      uVar10 = (uint)uVar7;
      FUN_1000afb9c();
      uVar8 = uVar9;
      if (((uint)puVar4 & 1) != (uVar10 & 1)) {
        func_0x000107c60624(&UNK_1107ad680);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ecb3c);
        (*pcVar2)();
      }
LAB_1000eca9c:
      if (((ulong)puVar4 & 1) != 0) goto LAB_1000ec994;
LAB_1000ecaa4:
      lVar1 = lVar14 + (uVar8 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar8 & 0x3f);
      *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 8) = uVar6;
      if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ecb2c);
        (*pcVar2)();
      }
      *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
    }
    else {
      if ((uVar7 & 1) != 0) goto LAB_1000eca9c;
      func_0x0001040be5c0();
      if (((ulong)puVar4 & 1) == 0) goto LAB_1000ecaa4;
LAB_1000ec994:
      *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 8) = uVar6;
    }
    uVar13 = uVar13 - 1 & uVar13;
    *(long *)(unaff_x20 + 0x20) = lVar14;
    puVar4 = auStack_90;
    func_0x000107c614a8();
  } while( true );
}



/* Entry: 1000ecda0; end: 1000ed2cf;  */

void FUN_1000ecda0(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1a8);
  iVar2 = 2;
  FUN_100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1c0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)&UNK_1040bbb08;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  lVar1 = unaff_x22 + 0x10;
  lVar17 = *(long *)(unaff_x22 + 0x198);
  func_0x000107c615ac(lVar1,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x188) = lVar1;
  if (lVar17 != 0) {
    uVar4 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f1edbe0);
    func_0x000107c4acc8(lVar17);
    func_0x000107c61170(uVar4);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar10 = *(undefined8 *)(unaff_x22 + 400);
  lVar6 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar5 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  lVar6 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar11)(uVar5,1,1,lVar6);
  lVar6 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar16 = *(long *)(lVar6 + -8);
  lVar13 = *(long *)(lVar16 + 0x40);
  uVar7 = lVar13 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  (**(code **)(lVar16 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar14 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  uVar15 = lVar13 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_110744b78;
  func_0x000107c613fc(&UNK_110744b78,uVar15 + 0x10,uVar12 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  (**(code **)(lVar16 + 0x20))(puVar8 + uVar14,uVar7,lVar6);
  *(undefined8 *)(puVar8 + uVar15) = uVar4;
  *(undefined8 *)(puVar8 + uVar15 + 8) = uVar10;
  func_0x000107c615c0(uVar7);
  func_0x000107c615f0(lVar17);
  func_0x000107c6157c(uVar10);
  FUN_1000ed8cc(uVar5,&UNK_10dcd5f28,puVar8,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  uVar5 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (*pcVar11)();
  lVar6 = 0x112da1570;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  lVar13 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(lVar13 + 0x40);
  uVar7 = lVar16 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  (**(code **)(lVar13 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  uVar15 = lVar16 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_110744ba0;
  func_0x000107c613fc(&UNK_110744ba0,uVar15 + 0x10,uVar12 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar14,uVar7,lVar6);
  *(undefined8 *)(puVar8 + uVar15) = uVar4;
  *(undefined8 *)(puVar8 + uVar15 + 8) = uVar10;
  func_0x000107c615c0(uVar7);
  func_0x000107c615f0(lVar17);
  func_0x000107c6157c(uVar10);
  FUN_1000ed8cc(uVar5,&UNK_10dcd5f38,puVar8,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar9);
  (*pcVar11)();
  lVar6 = 0x112da1580;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lVar13 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(lVar13 + 0x40);
  uVar5 = lVar16 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar13 + 0x10))();
  uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar14 = lVar16 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_110744bc8;
  func_0x000107c613fc(&UNK_110744bc8,uVar14 + 0x10,uVar7 | 7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar12,uVar5,lVar6);
  *(undefined8 *)(puVar8 + uVar14) = uVar4;
  *(undefined8 *)(puVar8 + uVar14 + 8) = uVar10;
  func_0x000107c615c0(uVar5);
  func_0x000107c615f0(lVar17);
  func_0x000107c6157c(uVar10);
  FUN_1000ed8cc(uVar9,&UNK_10dcd5f48,puVar8,&UNK_110744bf0,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5f60);
  func_0x0001000edad8(uVar9,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x1d8,lVar1,&UNK_1040bbb50,unaff_x22 + 0x160);
  return;
}



/* Entry: 1000ed2d0; end: 1000ed31b;  */

void FUN_1000ed2d0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar4));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000ed31c; end: 1000ed3ab;  */

void FUN_1000ed31c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_1040be0dc;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar6;
  plVar5[9] = lVar3;
  plVar5[10] = lVar2;
  plVar5[7] = param_2;
  plVar5[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ed3cc,0,0);
  return;
}


