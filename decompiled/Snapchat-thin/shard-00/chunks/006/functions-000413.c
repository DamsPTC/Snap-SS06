/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10088f11c; end: 10088f12f;  */

void FUN_10088f11c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010b2d8a20();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10088f130; end: 10088f15f;  */

void FUN_10088f130(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10088f160();
  return;
}



/* Entry: 10088f160; end: 10088f18f;  */

void FUN_10088f160(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x00010b1a7400();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 10088f190; end: 10088f1eb;  */

void FUN_10088f190(undefined8 param_1)

{
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x00010078a9f8();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10088f1ec();
  func_0x000107c61180();
  func_0x000107c4dcf0(uVar1);
  func_0x00010068e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10088f1ec; end: 10088f2fb;  */

void FUN_10088f1ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dff00;
  func_0x000107c610f4(PTR_PTR_1126dff00);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    lVar3 = param_1;
    FUN_10088f2fc(param_1);
    func_0x000107c61180();
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(param_1 + 0x178) == '\x01') {
    lVar4 = param_1 + 200;
    FUN_10088f730(lVar4);
    func_0x000107c61180();
  }
  else {
    lVar4 = 0;
  }
  lVar2 = param_1 + 0x180;
  FUN_100890860(lVar2);
  func_0x000107c61180();
  param_1 = param_1 + 0x1e8;
  FUN_100890a88(param_1);
  func_0x000107c61180();
  func_0x000107c4836c(puVar1,param_2,lVar3,lVar4,lVar2,param_1);
  FUN_100890ab8();
  func_0x000100890ac4();
  func_0x000100890acc();
  func_0x000100890ad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10088f2fc; end: 10088f39b;  */

void FUN_10088f2fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126e02a8;
  func_0x000107c610f4(PTR_PTR_1126e02a8);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  if (*(char *)(param_1 + 0x17) == '\x01') {
    param_1 = param_1 + 3;
    FUN_10089d074(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = (undefined8 *)0x0;
  }
  func_0x000107c467fc(puVar3,param_2,uVar1,uVar2,uVar4,param_1);
  FUN_10088f728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10088f39c; end: 10088f67b; -[SCFeatureToggleCameraButtonImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088f39c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_80,param_1);
  lVar6 = (long)_DAT_1127417e0;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c5bce8();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_100c3d7b8;
    puStack_90 = &UNK_11090d240;
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_1061aa5fc;
    puStack_b8 = &UNK_11084e400;
    func_0x000107c6111c(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d8,auStack_80);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10088f67c; end: 10088f727; -[SCNNetworkTypesUrlRequestInfo initWithExecutionStartDateNanos:executionEndDateNanos:redirectDateNanos:cronetMetrics:] */

undefined1 *
FUN_10088f67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270b8e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10088f728; end: 10088f72f;  */

void FUN_10088f728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10088f730; end: 10088f8a3;  */

void FUN_10088f730(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_PTR_1126e02b0;
  func_0x000107c610f4(PTR_PTR_1126e02b0);
  lVar4 = param_1;
  FUN_1001011a4(param_1);
  func_0x000107c61180();
  lVar5 = param_1 + 0x18;
  FUN_10088f8a4(lVar5);
  func_0x000107c61180();
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  lVar6 = param_1 + 0x38;
  FUN_1001011a4(lVar6);
  func_0x000107c61180();
  lVar7 = param_1 + 0x50;
  FUN_1005ad514(lVar7);
  func_0x000107c61180();
  uVar2 = *(undefined1 *)(param_1 + 0x68);
  lVar8 = param_1 + 0x70;
  FUN_1001011a4();
  func_0x000107c61180();
  lVar9 = param_1 + 0x88;
  FUN_1001011a4();
  func_0x000107c61180();
  func_0x000107c49164(puVar3,param_2,lVar4,lVar5,uVar1,lVar6,lVar7,uVar2,lVar8,lVar9,
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
  func_0x000100890838();
  func_0x000100890840();
  func_0x000100890848();
  func_0x000100890850();
  func_0x000107c61170(lVar5);
  func_0x000100890858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10088f8a4; end: 10088f95b;  */

void FUN_10088f8a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar3 = lVar4;
    FUN_1001011a4(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c40794(puVar2);
  FUN_10088f95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10088f95c; end: 10088f96f;  */

void FUN_10088f95c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10088f970; end: 10088f97f; -[SCFeatureToggleCameraButtonImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088f970(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127417d0) = 0;
  return;
}



/* Entry: 10088f980; end: 10088fa23;  */

void FUN_10088f980(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010088f9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2,*(undefined4 *)(param_1 + 0x40));
  return;
}



/* Entry: 10088fa24; end: 10088fae7;  */

void FUN_10088fa24(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10088fae8; end: 10088fcdb;  */

ulong FUN_10088fae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000100697f20();
  uVar2 = (ulong)*(uint *)(param_1 + 0x444);
  if ((*(uint *)(param_1 + 0x444) == 0) && ((int)param_3 != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    if ((*(byte *)(uVar1 + 0x10) & 1) == 0) {
      func_0x00010088fb60(uVar1,param_2,param_3);
      uVar2 = uVar1;
      if ((int)uVar1 == -1) {
        *(undefined4 *)(param_1 + 0x444) = 0xffffffff;
      }
      else if ((int)uVar1 < 1) {
        func_0x000100896590(param_1);
      }
    }
  }
  return uVar2;
}



/* Entry: 10088fcdc; end: 10088fcdf;  */

void FUN_10088fcdc(void)

{
  return;
}



/* Entry: 10088fce0; end: 10088ff2b;  */

void FUN_10088fce0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(code **)(param_1 + 4) = FUN_100890d98;
  *(undefined **)(param_1 + 6) = &UNK_10b3f1dc0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 10) = param_3[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *param_4;
  *param_4 = 0;
  *(undefined8 *)(param_1 + 0xe) = param_4[1];
  *(undefined1 *)(param_1 + 0x10) = *param_5;
  return;
}



/* Entry: 10088ff2c; end: 10088ffef; -[SCCameraToggleCameraButtonFeatureInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010088ff4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088ff88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088ffb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088ffcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010088ffb4) */
/* WARNING: Removing unreachable block (ram,0x00010088ff8c) */
/* WARNING: Removing unreachable block (ram,0x00010088ff50) */
/* WARNING: Removing unreachable block (ram,0x00010088ffd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088ff2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740d50);
  return;
}



/* Entry: 10088fff0; end: 10089065f;  */

void FUN_10088fff0(void)

{
  return;
}



/* Entry: 100890660; end: 10089082f; -[SCNNetworkTypesUrlResponseInfo initWithUrl:urlChain:httpStatusCode:httpStatusText:allHeadersList:wasCached:negotiatedProtocol:proxyServer:receivedByteCount:decompressedReceivedPayloadByteCount:] */

undefined1 *
FUN_100890660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_11270b8f0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_100890830(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_100890830(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_100890830(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_100890830(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_100890830(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    FUN_100890830(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100890830; end: 10089085f;  */

void FUN_100890830(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100890860; end: 100890a7f;  */

void FUN_100890860(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126dff08;
  func_0x000107c610f4(PTR_PTR_1126dff08);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) / 0x30);
    func_0x000107c61180();
    lVar1 = *(long *)(param_1 + 0x28);
    for (lVar4 = *(long *)(param_1 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
      lVar3 = lVar4;
      FUN_10089d444(lVar4);
      func_0x000107c61180();
      func_0x000107c3d798(puVar5,param_2,lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c40794(puVar5);
    FUN_100890a80();
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) / 0x30);
    func_0x000107c61180();
    lVar1 = *(long *)(param_1 + 0x48);
    for (lVar4 = *(long *)(param_1 + 0x40); lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
      lVar3 = lVar4;
      func_0x000107c2ffa4(lVar4);
      func_0x000107c61180();
      func_0x000107c3d798(puVar5,param_2,lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c40794(puVar5);
    func_0x000107c394ec();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c467c4();
  func_0x000107c61170(puVar5);
  FUN_100890a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100890a80; end: 100890a87;  */

void FUN_100890a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100890a88; end: 100890ab7;  */

void FUN_100890a88(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c2ffc8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100890ab8; end: 100890adb;  */

void FUN_100890ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100890adc; end: 100890aeb;  */

void FUN_100890adc(void)

{
  long *in_stack_00000008;
  
                    /* WARNING: Could not recover jumptable at 0x000100890ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_stack_00000008 + 0x18))();
  return;
}



/* Entry: 100890aec; end: 100890d97; -[SCHTTPRequestCallback onResponseStarted:info:] */

void FUN_100890aec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = param_4;
  func_0x000107c61170(uVar1);
  lVar2 = param_4;
  func_0x000107c42d68(param_4);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar1);
  func_0x000107c61180();
  func_0x000107c54868();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_4;
  func_0x000107c50664();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3db50();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c4080c(lVar3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          func_0x000107c61128(lVar3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar1 = uVar9;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        uVar4 = uVar1;
        func_0x000107c49d0c();
        func_0x000107c61170(uVar1);
        if ((int)uVar4 != 0) {
          func_0x000107c5dc0c();
          func_0x000107c61180();
          uVar1 = uVar9;
          func_0x000107c49820();
          *(undefined8 *)(param_1 + 0x50) = uVar1;
          func_0x000107c61170(uVar9);
          goto LAB_100890c88;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x000107c4080c(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
LAB_100890c88:
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar5);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c50384();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c40074();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar6);
  func_0x000107c61180();
  uVar9 = uVar6;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5043c();
  func_0x000107c61180();
  func_0x000107c5bb78(uVar4,param_2,uVar9,uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (param_4 != 0) {
      FUN_10014f860(param_4 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_4);
    return;
  }
  return;
}



/* Entry: 100890d98; end: 100890f7f;  */

void FUN_100890d98(long param_1)

{
  if (param_1 != 0) {
    FUN_10014f860(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100890f80; end: 100890f87; -[SCNNetworkTypesRequestResponseInfo failoverAdvice] */

undefined8 FUN_100890f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100890f88; end: 10089106b;  */

void FUN_100890f88(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar4 = *(long *)(param_1 + 8);
  lStack_48 = param_2;
  func_0x00010012d504(lVar4 + 0x10);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x62) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0xa8) = param_4;
  func_0x000107c61268(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined4 *)0x48;
  func_0x000107c60e20();
  *puVar1 = 1;
  func_0x00010089104c(0x100892a70);
  *(undefined8 *)(puVar1 + 6) = extraout_x8;
  *(undefined8 *)(puVar1 + 8) = 0x100892acc;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0xc) = uVar2;
  *(undefined8 *)(puVar1 + 0xe) = uVar3;
  puVar1[0x10] = param_3;
  func_0x00010089105c();
  func_0x000100140e00(auStack_50);
  func_0x0001001f1ba4(&lStack_48);
  return;
}



/* Entry: 10089106c; end: 100891073; -[SCRequest setFailoverAdvice:] */

void FUN_10089106c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100891074; end: 10089107b; -[SCNNetworkTypesRequestResponseInfo responseInfo] */

undefined8 FUN_100891074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10089107c; end: 100891083; -[SCNNetworkTypesUrlResponseInfo allHeadersList] */

undefined8 FUN_10089107c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100891084; end: 1008910ab;  */

void FUN_100891084(long param_1)

{
  if (param_1 != 0) {
    func_0x0001001f1ba4(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1008910ac; end: 1008911bb; -[SCRequestManagerRunningTaskState startReceivingDataForRequest:requestType:] */

void FUN_1008910ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_4);
  lVar1 = param_5;
  func_0x000107c61174();
  if (param_4 != 0) {
    FUN_10068d8a0();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c49820();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if ((lVar3 == 3) || (lVar3 == 0)) {
      func_0x000107c6071c();
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1008915ac;
      puStack_78 = &UNK_110844fe0;
      lStack_70 = param_2;
      func_0x000107c61174(param_4);
      lStack_68 = param_4;
      lStack_60 = lVar3;
      uStack_58 = param_1;
      func_0x000107c4e524(uVar4,param_3,&puStack_90);
      func_0x000107c61170(lStack_68);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1008911bc; end: 10089121b;  */

void FUN_1008911bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a5858);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10089121c; end: 10089125b; -[SCFeatureToggleCameraButtonImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089121c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127417dc,param_3);
  return;
}



/* Entry: 10089125c; end: 10089153b;  */

undefined8 *
FUN_10089125c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_158 [24];
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  puVar8 = param_1;
  func_0x00010089124c();
  uStack_68 = extraout_x8;
  func_0x000107c60d9c();
  uVar10 = param_1[0x44];
  uVar4 = *(char *)((long)param_1 + 0xac) == '\x01';
  puVar6 = puVar8;
  if ((bool)uVar4) {
    func_0x000107c60d88(param_1 + 10);
    puVar6 = param_1 + 0x1b;
    FUN_1008a465c(puVar6,param_2);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6;
      func_0x000107c60d9c();
      uVar9 = param_1[0x45];
      puVar6[5] = puVar7;
      puVar6[6] = uVar9;
    }
    puVar6 = param_1 + 10;
    func_0x000107c60d8c();
  }
  if (((*(byte *)((long)param_1 + 0x94) & 1) != 0) || (FUN_10089153c(), (int)puVar6 != 0)) {
    iVar5 = (int)puVar6;
    if ((param_1[0x55] == 0) || (FUN_10060f068(), iVar5 == 0)) {
      puStack_178 = (undefined8 *)param_5[1];
      puStack_180 = (undefined8 *)*param_5;
      lStack_168 = param_5[3];
      lStack_170 = param_5[2];
      func_0x000107c30074(param_1,puVar8,param_2,param_3,param_4,&puStack_180,uVar10);
      puVar6 = param_1;
    }
    else {
      FUN_100060b18(&uStack_e0,param_5);
      lVar1 = param_5[2];
      lVar2 = param_5[3];
      plStack_f8 = (undefined8 *)0x0;
      auStack_f0[0] = 0;
      uStack_100 = 0;
      puStack_180 = &uStack_100;
      puStack_178 = (undefined8 *)((ulong)puStack_178 & 0xffffffffffffff00);
      if (lVar2 != 0) {
        func_0x0001005acfb4(&uStack_100,lVar2);
        puVar6 = auStack_f0;
        func_0x000105301770(puVar6,lVar1,lVar1 + lVar2 * 0x30,plStack_f8);
        plStack_f8 = puVar6;
      }
      puStack_178 = (undefined8 *)CONCAT71(puStack_178._1_7_,1);
      FUN_1005ad154(&puStack_180);
      param_5 = (long *)param_1[0x55];
      puStack_180 = param_1;
      puStack_178 = puVar8;
      func_0x000107c396d0(&lStack_170);
      func_0x000107c60c94(auStack_158,param_3);
      uStack_110 = auStack_f0[0];
      uStack_140 = (undefined4)param_4;
      uStack_130 = uStack_d8;
      uStack_138 = uStack_e0;
      uStack_128 = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puStack_118 = plStack_f8;
      uStack_120 = uStack_100;
      uStack_100 = 0;
      plStack_f8 = (long *)0x0;
      auStack_f0[0] = 0;
      uStack_d0 = 0;
      puStack_c8 = &UNK_10b4a5eac;
      ppuStack_c0 = &PTR_DAT_110cee0e0;
      puVar8 = (undefined8 *)0x80;
      uStack_108 = uVar10;
      func_0x000107c60e20();
      puVar8[1] = puStack_178;
      *puVar8 = puStack_180;
      func_0x000107c60c94(puVar8 + 2,&lStack_170);
      func_0x000107c60c94(puVar8 + 5,auStack_158);
      uVar9 = uStack_110;
      puVar6 = puStack_118;
      uVar10 = uStack_120;
      *(undefined4 *)(puVar8 + 8) = uStack_140;
      puVar8[10] = uStack_130;
      puVar8[9] = uStack_138;
      puVar8[0xb] = uStack_128;
      uStack_138 = 0;
      uStack_130 = 0;
      puStack_118 = (undefined8 *)0x0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      puVar8[0xd] = puVar6;
      puVar8[0xc] = uVar10;
      puVar8[0xe] = uVar9;
      puVar8[0xf] = uStack_108;
      puStack_b8 = puVar8;
      (**(code **)(*param_5 + 0x10))(param_5,&puStack_c8);
      func_0x000107c396f0();
      func_0x000107c3007c(&puStack_180);
      func_0x0001005ad2a8(&uStack_100);
      puVar6 = &uStack_e0;
      func_0x000107c60ca0();
    }
  }
  FUN_100892a50(uStack_68);
  if ((bool)uVar4) {
    return puVar6;
  }
  func_0x000107c60e78();
  plStack_f8 = param_5;
  FUN_1005ad154(&puStack_180);
  func_0x000107c60ca0(&uStack_e0);
  func_0x000107c39678();
  if ((bRam00000001137f6578 & 1) == 0) {
    iVar5 = 0x137f6578;
    func_0x000107c60e48();
    if (iVar5 != 0) {
      bVar3 = 0x38;
      FUN_1005ec950();
      bRam00000001137f64fd = bVar3;
      FUN_100600444(0x1137f6578);
    }
  }
  return (undefined8 *)(ulong)bRam00000001137f64fd;
}



/* Entry: 10089153c; end: 1008915ab;  */

undefined1 FUN_10089153c(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6578 & 1) == 0) {
    iVar2 = 0x137f6578;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x38;
      FUN_1005ec950();
      uRam00000001137f64fd = uVar1;
      FUN_100600444(0x1137f6578);
    }
  }
  return uRam00000001137f64fd;
}



/* Entry: 1008915ac; end: 100891633;  */

/* WARNING: Possible PIC construction at 0x0001008915d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008915d8) */
/* WARNING: Removing unreachable block (ram,0x0001008915e8) */
/* WARNING: Removing unreachable block (ram,0x0001008915dc) */

void FUN_1008915ac(long param_1,undefined8 param_2)

{
  func_0x000107c4d9e8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100891634; end: 100891827; -[SCRequestManagerRunningTaskState _updateRequestConcurrencyWithRequestType:requestStart:] */

void FUN_100891634(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    if (param_3 < 6) {
      if ((1L << (param_3 & 0x3f) & 0x26U) == 0) {
        if ((1L << (param_3 & 0x3f) & 9U) != 0) {
          func_0x000107c5cd00(param_1);
          func_0x000107c59f94(param_1);
          if (param_3 == 3) {
            lVar1 = param_1;
            func_0x000107c4ce3c(param_1);
            lVar1 = lVar1 + -1;
            goto LAB_100891818;
          }
          if (param_3 == 0) {
            lVar1 = param_1;
            func_0x000107c4227c(param_1);
            lVar1 = lVar1 + -1;
            goto LAB_100891788;
          }
        }
      }
      else {
        func_0x000107c5cd04(param_1);
        func_0x000107c59f98(param_1);
        if (param_3 == 1) {
          lVar1 = param_1;
          func_0x000107c3dc88(param_1);
          lVar1 = lVar1 + -1;
          goto LAB_1008917ec;
        }
        if (param_3 == 5) {
          lVar1 = param_1;
          func_0x000107c3dc90(param_1);
          lVar1 = lVar1 + -1;
          goto LAB_1008917c0;
        }
        if (param_3 == 2) {
          lVar1 = param_1;
          func_0x000107c5d77c(param_1);
          lVar1 = lVar1 + -1;
          goto LAB_1008916f4;
        }
      }
    }
  }
  else if (param_3 < 6) {
    if ((1L << (param_3 & 0x3f) & 0x26U) == 0) {
      if ((1L << (param_3 & 0x3f) & 9U) != 0) {
        func_0x000107c5cd00(param_1);
        func_0x000107c59f94(param_1);
        if (param_3 == 3) {
          lVar1 = param_1;
          func_0x000107c4ce3c(param_1);
          lVar1 = lVar1 + 1;
LAB_100891818:
                    /* WARNING: Could not recover jumptable at 0x00010c1c75f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s_setMetadataRequestConcurrency__11264f7a0,lVar1);
          return;
        }
        if (param_3 == 0) {
          lVar1 = param_1;
          func_0x000107c4227c(param_1);
          lVar1 = lVar1 + 1;
LAB_100891788:
                    /* WARNING: Could not recover jumptable at 0x00010c191330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s_setDownloadRequestConcurrency__112641ee8,lVar1);
          return;
        }
      }
    }
    else {
      func_0x000107c5cd04(param_1);
      func_0x000107c59f98(param_1);
      if (param_3 == 1) {
        lVar1 = param_1;
        func_0x000107c3dc88(param_1);
        lVar1 = lVar1 + 1;
LAB_1008917ec:
                    /* WARNING: Could not recover jumptable at 0x00010c167cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_setAnalyticsRequestConcurrency__112637948,lVar1);
        return;
      }
      if (param_3 == 5) {
        lVar1 = param_1;
        func_0x000107c3dc90(param_1);
        lVar1 = lVar1 + 1;
LAB_1008917c0:
                    /* WARNING: Could not recover jumptable at 0x00010c167cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_setAnalyticsV2RequestConcurrency_112637950,lVar1);
        return;
      }
      if (param_3 == 2) {
        lVar1 = param_1;
        func_0x000107c5d77c(param_1);
        lVar1 = lVar1 + 1;
LAB_1008916f4:
                    /* WARNING: Could not recover jumptable at 0x00010c21cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_setUploadRequestConcurrency__112664de8,lVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 100891828; end: 10089182f; -[SCRequestManagerRunningTaskState totalRequestConcurrencyReceivingData] */

undefined8 FUN_100891828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100891830; end: 100891837; -[SCRequestManagerRunningTaskState setTotalRequestConcurrencyReceivingData:] */

void FUN_100891830(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 100891838; end: 10089183f; -[SCRequestManagerRunningTaskState metadataRequestConcurrency] */

undefined8 FUN_100891838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100891840; end: 100891847; -[SCRequestManagerRunningTaskState setMetadataRequestConcurrency:] */

void FUN_100891840(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 100891848; end: 100891b07; -[SCFeatureToggleCameraButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100891848(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  lVar14 = param_2;
  func_0x000107c3bae8();
  if ((int)lVar14 == 0) goto LAB_100891ac0;
  uVar2 = param_4;
  func_0x000107c3f0b0();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_1008918d0:
    lVar14 = param_2;
    func_0x000107c5cbac(param_2);
    func_0x000107c61180();
    func_0x000107c4977c(param_4,param_3,lVar14,0);
    func_0x000107c61170(lVar14);
    lVar14 = (long)_DAT_1127417c4;
    func_0x000107c5a050(*(undefined8 *)(param_2 + lVar14),param_3,0);
    if (uVar2 == 0) {
      uVar3 = param_4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c2ab54();
      param_1 = param_1 + 16.0;
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      param_1 = 16.0;
    }
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_2 + lVar14);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40284(param_1);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_2 + lVar14);
    uStack_98 = uVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar7 = param_4;
    func_0x000107c50890(param_4);
    func_0x000107c61180();
    uVar8 = uVar6;
    func_0x000107c40284(0xc020000000000000,uVar6,param_3,uVar7);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_2 + lVar14);
    uStack_90 = uVar8;
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c40290(0x4044000000000000);
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_2 + lVar14);
    uStack_88 = uVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar12 = uVar11;
    func_0x000107c40290(0x4044000000000000);
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar12;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_98,4);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1,param_3,puVar13);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    uVar3 = uVar2;
    func_0x000107c4e1ec();
    func_0x000107c61180();
    func_0x000107c61170();
    if (uVar3 == param_4) goto LAB_1008918d0;
  }
  func_0x000107c61170(uVar2);
LAB_100891ac0:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_4;
  }
  func_0x000107c60e78();
  return (ulong)(*(long *)(param_4 + (long)_DAT_1127417a0) == 9);
}



/* Entry: 100891b08; end: 100891b1f; -[SCFeatureToggleCameraButtonImpl _isDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100891b08(long param_1)

{
  return *(long *)(param_1 + _DAT_1127417a0) == 9;
}



/* Entry: 100891b20; end: 100891bab; -[SCFeatureToggleCameraButtonImpl configureWithCameraToolbar:] */

/* WARNING: Possible PIC construction at 0x000100891b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100891b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100891b58) */
/* WARNING: Removing unreachable block (ram,0x000100891b98) */
/* WARNING: Removing unreachable block (ram,0x000100891b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100891b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + _DAT_1127417bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100891bac; end: 100891e83; -[SCFeatureToggleCameraButtonImpl _createToolbarItemWithToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100891bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  lVar6 = (long)_DAT_1127417c0;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    func_0x000107c61174(lVar5);
    goto LAB_100891e28;
  }
  puVar1 = PTR_PTR_1126c7918;
  func_0x000107c610f4();
  func_0x000107c47fa4();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c3bae8();
  func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar6));
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x000107c520f4(lVar5);
  func_0x000100891ee8();
  func_0x000107c61180();
  func_0x000107c520fc(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c61170(lVar5);
  puVar1 = PTR_PTR_1126b9cb0;
  if (*(long *)(param_1 + _DAT_1127417a0) == 0) {
    lVar5 = param_1 + _DAT_1127417b4;
    func_0x000107c61148(lVar5);
    lVar2 = lVar5;
    func_0x000107c3de48();
    func_0x000107c61180();
    func_0x000107c5cbb8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar5);
    if (puVar1 != (undefined *)0x0) goto LAB_100891cd0;
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x000107c56ae0(lVar5);
  }
  else {
LAB_100891cd0:
    func_0x000100891f90();
    func_0x000107c61180();
    func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar6));
    func_0x000107c61170(lVar5);
  }
  func_0x000100891f90();
  func_0x000107c61180();
  func_0x000107c54780(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c61170(lVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c4d754(uVar4);
  func_0x000107c61180();
  func_0x000107c58e18(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c61170(uVar4);
  func_0x000107c52108(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c5210c(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c5a5cc(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c530e8(*(undefined8 *)(param_1 + lVar6));
  func_0x000107c61144(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c41d8c(uVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x000107c61174(lVar5);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
LAB_100891e28:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 100891e84; end: 100891ed7; -[SCCameraToolbarItemImpl initWithPosition:] */

void FUN_100891e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0498;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0xd0) = param_3;
    *(undefined1 *)((long)puVar1 + 0xc) = 1;
    *(undefined8 *)((long)puVar1 + 0x108) = 1;
  }
  return;
}



/* Entry: 100891ed8; end: 100891edf; -[SCCameraToolbarItemImpl setNormalImageName:] */

void FUN_100891ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891ee0; end: 100891eff; -[SCCameraToolbarItemImpl setAccessibilityIdentifier:] */

void FUN_100891ee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891f00; end: 100891f07; -[SCCameraToolbarItemImpl setAccessibilityLabel:] */

void FUN_100891f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891f08; end: 100891f7f; -[SCCameraToolbarItemImpl setNormalTitle:] */

/* WARNING: Possible PIC construction at 0x000100891f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100891f68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100891f40) */
/* WARNING: Removing unreachable block (ram,0x000100891f58) */
/* WARNING: Removing unreachable block (ram,0x000100891f6c) */

void FUN_100891f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100891f80; end: 100891f87; -[SCCameraToolbarItemImpl expandedTitle] */

undefined8 FUN_100891f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 100891f88; end: 100891fa7; -[SCCameraToolbarItemImpl setExpandedTitle:] */

void FUN_100891f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891fa8; end: 100891faf; -[SCCameraToolbarItemImpl normalTitle] */

undefined8 FUN_100891fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 100891fb0; end: 100891fb7; -[SCCameraToolbarItemImpl setSelectedTitle:] */

void FUN_100891fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891fb8; end: 100891fbf; -[SCCameraToolbarItemImpl setAccessibilityValueNormal:] */

void FUN_100891fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891fc0; end: 100891fc7; -[SCCameraToolbarItemImpl setAccessibilityValueSelected:] */

void FUN_100891fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100891fc8; end: 1008920b3; -[SCCameraToolbarItemImpl setVisibilityOptions:] */

void FUN_100891fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2237b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_setVisibilityOptions__112666810);
  return;
}



/* Entry: 1008920b4; end: 1008920df; -[SCCameraToolbarItemImpl setCameraUIItem:] */

void FUN_1008920b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  func_0x000100891fd4();
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 1008920e0; end: 10089212f; -[SCCameraToolbarItemImpl didTapEvent] */

void FUN_1008920e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x78);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100892130; end: 1008922d3; -[SCCameraVerticalToolbar addToolbarItem:] */

/* WARNING: Possible PIC construction at 0x000100892198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100892204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008922b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100892208) */
/* WARNING: Removing unreachable block (ram,0x000100892238) */
/* WARNING: Removing unreachable block (ram,0x000100892274) */
/* WARNING: Removing unreachable block (ram,0x000100892248) */
/* WARNING: Removing unreachable block (ram,0x000100892264) */
/* WARNING: Removing unreachable block (ram,0x00010089219c) */
/* WARNING: Removing unreachable block (ram,0x0001008921b8) */
/* WARNING: Removing unreachable block (ram,0x0001008922bc) */
/* WARNING: Removing unreachable block (ram,0x0001008922c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100892130(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c3f280();
    if (lVar1 == 0x1d) {
      *(undefined1 *)(param_1 + _DAT_112742b44) = 1;
    }
    func_0x000107c4d9e8(*(undefined8 *)(param_1 + _DAT_112742b84),param_2,param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008922d4; end: 1008922db; -[SCCameraToolbarItemImpl cameraUIItem] */

undefined8 FUN_1008922d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1008922dc; end: 1008922e3; -[SCCameraToolbarItemImpl isSelected] */

undefined1 FUN_1008922dc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1008922e4; end: 1008924bf; -[SCCameraVerticalToolbar _isItemVisibilityAllowedForVisibilityStatus:item:isSelected:] */

ulong FUN_1008922e4(ulong param_1,undefined8 param_2,long param_3,undefined *param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  func_0x000107c61174(param_4);
  puVar1 = param_4;
  func_0x000107c4eb70();
  puVar2 = param_4;
  func_0x000107c4a7bc(param_4);
  uVar3 = param_1;
  func_0x000107c3b58c(param_1,param_2,param_3);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40404(uVar3,param_2,puVar4);
  func_0x000107c61170(puVar4);
  if (((param_3 != 2) && (puVar1 == (undefined *)0x4)) && ((int)uVar5 == 0)) {
    param_1 = 0;
    goto LAB_100892414;
  }
  puVar4 = param_4;
  func_0x000107c5dfbc();
  puVar6 = param_4;
  func_0x000107c4e35c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar6 == (undefined *)0x0) {
    param_1 = 0;
    if (1 < param_3) {
      if (param_3 != 2) {
        if (param_3 == 3) {
          param_1 = (ulong)puVar4 >> 2 & 1;
        }
        goto LAB_100892414;
      }
LAB_1008924b8:
      param_1 = 1;
      goto LAB_100892414;
    }
    if (param_3 == 0) {
      if (((param_5 & 1) != 0) || ((((ulong)puVar4 & 1) != 0 && (puVar1 == (undefined *)0x2))))
      goto LAB_1008924b8;
    }
    else {
      if (param_3 != 1) goto LAB_100892414;
      if ((param_5 & 1) != 0) goto LAB_1008924b8;
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
    func_0x000107c61180();
    param_1 = uVar3;
    func_0x000107c40404(uVar3,param_2,puVar1);
  }
  else {
    puVar1 = param_4;
    func_0x000107c4e35c(param_4);
    func_0x000107c61180();
    puVar2 = param_4;
    func_0x000107c4e35c(param_4);
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c4a3b4();
    func_0x000107c3bb30(param_1,param_2,param_3,puVar1,puVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
LAB_100892414:
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 1008924c0; end: 1008924c7; -[SCCameraToolbarItemImpl position] */

undefined8 FUN_1008924c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1008924c8; end: 1008924cf; -[SCCameraToolbarItemImpl itemType] */

undefined8 FUN_1008924c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1008924d0; end: 1008924d7; -[SCCameraToolbarItemImpl visibilityOptions] */

undefined8 FUN_1008924d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1008924d8; end: 1008924ef; -[SCCameraToolbarItemImpl parentToolbarItem] */

void FUN_1008924d8(long param_1)

{
  func_0x000107c61148(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008924f0; end: 100892a4f; -[SCCameraVerticalToolbar _addToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008924f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    lVar11 = (long)_DAT_112742b84;
    lVar2 = *(long *)(param_1 + lVar11);
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126c87d0;
      func_0x000107c610f4();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112742b28);
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c49b60();
      lVar2 = (long)_DAT_112742b5c;
      uVar5 = *(undefined8 *)(param_1 + lVar2);
      func_0x000107c5dd3c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c44fac();
      uVar7 = *(undefined8 *)(param_1 + lVar2);
      func_0x000107c5dd3c(uVar7);
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c5af6c();
      lVar2 = param_1 + _DAT_112742b70;
      func_0x000107c61148(lVar2);
      func_0x000107c48de4(puVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      if (*(char *)(param_1 + _DAT_112742b9c) == '\x01') {
        func_0x000107c4964c(puVar3);
      }
      func_0x000107c579d8(puVar3);
      func_0x000107c53fcc(puVar3);
      func_0x000107c56bd8(*(undefined8 *)(param_1 + lVar11));
      lVar11 = (long)_DAT_112742b94;
      lVar2 = *(long *)(param_1 + lVar11);
      func_0x000107c4d9c0();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar9 = lVar2;
        func_0x000107c44ddc();
        if ((int)lVar9 != 0) {
          func_0x000107c550d8(puVar3);
        }
        func_0x000107c4ff88(*(undefined8 *)(param_1 + lVar11));
      }
      lVar11 = param_1;
      func_0x000107c3c75c();
      if ((int)lVar11 != 0) {
        func_0x000107c526c0(0,puVar3);
      }
      lVar11 = (long)_DAT_112742ba0;
      puVar10 = *(undefined **)(param_1 + lVar11);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
        puVar10 = PTR_PTR_1126ae810;
        func_0x000107c61160(PTR_PTR_1126ae810);
        func_0x000107c56bd8(*(undefined8 *)(param_1 + lVar11));
      }
      func_0x000107c61144(auStack_80,param_1);
      lVar11 = param_3;
      func_0x000107c41d8c(param_3);
      func_0x000107c61180();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_1061e4d1c;
      puStack_98 = &UNK_1109150f8;
      func_0x000107c6111c(auStack_88,auStack_80);
      func_0x000107c61174(param_3);
      lVar9 = lVar11;
      lStack_90 = param_3;
      func_0x000107c5c320(lVar11);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar11);
      lVar11 = param_3;
      func_0x000107c41a70(param_3);
      func_0x000107c61180();
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      puStack_d0 = &UNK_1061e4d90;
      puStack_c8 = &UNK_1109150f8;
      func_0x000107c6111c(auStack_b8,auStack_80);
      func_0x000107c61174(param_3);
      lVar9 = lVar11;
      lStack_c0 = param_3;
      func_0x000107c5c320(lVar11);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar11);
      lVar11 = param_3;
      func_0x000107c41a74(param_3);
      func_0x000107c61180();
      puStack_110 = puVar1;
      uStack_108 = 0xc2000000;
      puStack_100 = &UNK_1061e4dc4;
      puStack_f8 = &UNK_1109150f8;
      func_0x000107c6111c(auStack_e8,auStack_80);
      func_0x000107c61174(param_3);
      lVar9 = lVar11;
      lStack_f0 = param_3;
      func_0x000107c5c320(lVar11);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar11);
      lVar11 = param_3;
      func_0x000107c4d550(param_3);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_118,auStack_80);
      func_0x000107c61174(param_3);
      lVar9 = lVar11;
      func_0x000107c5c320(lVar11);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar11);
      func_0x000107c3ccec(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61120(auStack_118);
      func_0x000107c61170(lStack_f0);
      func_0x000107c61120(auStack_e8);
      func_0x000107c61170(lStack_c0);
      func_0x000107c61120(auStack_b8);
      func_0x000107c61170(lStack_90);
      func_0x000107c61120(auStack_88);
      func_0x000107c61120(auStack_80);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100892a50; end: 100892a6b;  */

void FUN_100892a50(void)

{
  return;
}



/* Entry: 100892a6c; end: 100892b43;  */

void FUN_100892a6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100892b44; end: 100892b53;  */

void FUN_100892b44(void)

{
  return;
}



/* Entry: 100892b54; end: 100892e0f;  */

void FUN_100892b54(undefined8 ******param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5,undefined8 *******param_6)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *****pppppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long lVar15;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  code *extraout_x9_01;
  ulong *puVar16;
  code *extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  ulong auStack_218 [3];
  undefined8 *****pppppuStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 ******ppppppuStack_1a8;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined4 uStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined4 uStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ******ppppppuStack_98;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  pppppppuVar18 = param_3;
  pppppppuVar11 = param_4;
  pppppppuVar14 = param_5;
  FUN_100892b44();
  uStack_48 = extraout_x8;
  FUN_10088a32c();
  uStack_130 = 0;
  ppppppuVar10 = param_1 + 5;
  pppppppuVar13 = &ppppppuStack_98;
  ppppppuStack_98 = param_2;
  FUN_100687710();
  if (ppppppuVar10 != (undefined8 ******)0x0) {
    ppppuStack_b0 = ppppppuVar10[3];
    ppppuStack_a8 = ppppppuVar10[4];
    if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
      do {
        FUN_10064bba4();
      } while (extraout_w11 != 0);
    }
    func_0x000100686b1c();
    lVar15 = 0xc0;
    if ((bool)in_ZR) {
      lVar15 = extraout_x9;
    }
    pppppppuVar18 = *(undefined8 ********)(extraout_x8_00 + lVar15);
    in_ZR = *(char *)(extraout_x8_00 + 0x58) == '\x01';
    if ((bool)in_ZR) {
      pppuStack_d0 = ppppuStack_b0[3];
      uStack_c8 = *(undefined4 *)(ppppuStack_b0 + 0x30);
      pppppuVar5 = (undefined8 *****)ppppuStack_b0;
      ppppppuStack_d8 = pppppppuVar18;
      ppppppuStack_c0 = param_5;
      FUN_100686db8();
      uStack_b8 = SUB84(pppppuVar5,0);
      ppppuStack_118 = ppppuStack_a8;
      ppppuStack_120 = ppppuStack_b0;
      ppppppuStack_128 = param_1;
      if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10 != 0);
      }
      ppppppuStack_108 = ppppppuStack_98;
      ppppppuStack_110 = pppppppuVar18;
      ppppppuStack_100 = param_3;
      ppppppuStack_f8 = param_4;
      ppppppuStack_f0 = param_5;
      FUN_10067d9d4(auStack_90,1);
      puVar7 = puStack_80;
      puStack_80[2] = 0;
      *puStack_80 = &PTR_DAT_1108789a8;
      puStack_80[1] = 0;
      puStack_78 = &UNK_10b2e1958;
      ppuStack_70 = &PTR_DAT_110cd3448;
      plVar6 = (long *)0x40;
      func_0x000107c60e20();
      ppppppuVar10 = ppppppuStack_f8;
      *plVar6 = (long)param_1;
      plVar6[2] = (long)ppppuStack_118;
      plVar6[1] = (long)ppppuStack_120;
      if ((undefined8 *****)ppppuStack_118 != (undefined8 *****)0x0) {
        pppppuVar5 = (undefined8 *****)(ppppuStack_118 + 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
          if (bVar3) {
            *pppppuVar5 = (undefined8 ****)((long)*pppppuVar5 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar6[4] = (long)ppppppuStack_108;
      plVar6[3] = (long)ppppppuStack_110;
      ppppppuStack_f8 = (undefined8 ******)0x0;
      plVar6[5] = (long)ppppppuStack_100;
      plVar6[6] = (long)ppppppuVar10;
      plVar6[7] = (long)ppppppuStack_f0;
      puVar7[3] = &PTR_FUN_110878a10;
      puVar7[4] = &UNK_10b2e1958;
      puVar7[5] = &PTR_DAT_110cd3448;
      puVar7[6] = plVar6;
      uStack_68 = 0;
      func_0x000107c2c870(&ppuStack_70);
      puVar7 = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      pppppppuVar13 = (undefined8 *******)(puVar7 + 3);
      puStack_e0 = puVar7;
      ppppppuStack_e8 = pppppppuVar13;
      FUN_10067db54(auStack_90);
      func_0x000107c2c7ec(&ppppppuStack_128);
      ppppuStack_120 = (undefined8 ****)puVar7;
      ppppppuStack_128 = pppppppuVar13;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10_00 != 0);
      }
      pppppppuVar13 = &ppppppuStack_128;
      pppppppuVar18 = &ppppppuStack_d8;
      func_0x000107c2ff1c();
      FUN_100576684(&ppppppuStack_128);
      FUN_10068f378(&ppppppuStack_e8);
      param_3 = pppppppuVar11;
      param_5 = param_6;
    }
    else {
      pppppppuVar14 = &ppppppuStack_128;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_98;
      ppppppuStack_128 = param_4;
      FUN_100892e10(param_1);
      FUN_100894084(&ppppppuStack_128);
    }
    func_0x00010067c914(&ppppuStack_b0);
    pppppppuVar11 = param_3;
    param_6 = param_5;
  }
  func_0x000100897490();
  FUN_100894084(&uStack_130);
  func_0x000100897498(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35a60();
  FUN_100576684();
  FUN_10068f378(&ppppppuStack_e8);
  func_0x00010067c914(&ppppuStack_b0);
  func_0x000100897490();
  puVar7 = &uStack_130;
  FUN_100894084();
  func_0x000107c359d4();
  ppppppuStack_1a8 = pppppppuVar13;
  func_0x000107c60d9c();
  puVar8 = puVar7 + 5;
  FUN_100893294();
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  plVar6 = puVar8 + 3;
  func_0x000100686b1c(*plVar6);
  lVar15 = 0xc0;
  if ((bool)in_ZR) {
    lVar15 = extraout_x9_00;
  }
  if (pppppppuVar18 != *(undefined8 ********)(extraout_x8_01 + lVar15)) {
    return;
  }
  puVar9 = puVar7 + 0xf;
  FUN_10088a33c(puVar9,&ppppppuStack_1a8);
  if (puVar9 != (undefined8 *)0x0) {
    return;
  }
  if ((*(byte *)(puVar8 + 0x37) & 1) == 0) {
    FUN_10002b838(&uStack_1e0,&UNK_10f742bea);
    func_0x000107c2c7f4(&uStack_1e0,2);
    puVar16 = &uStack_1e0;
  }
  else {
    FUN_10078a684(plVar6);
    ppppppuVar10 = *pppppppuVar14;
    func_0x000100787fec();
    func_0x00010088ae58();
    puVar8[0x35] = pppppppuVar11;
    bVar3 = false;
    if (*(char *)(puVar8 + 0x51) == '\x01') {
      if (*(char *)(puVar7 + 0x2d) == '\x01') {
        uVar12 = puVar7[0x2c];
        func_0x0001006882d4();
        (*extraout_x8_02)();
        uVar12 = uVar12 & 0xffffffff | 0x100000000;
      }
      else {
        uVar12 = 0;
      }
      uStack_1e0._0_5_ = (undefined5)uVar12;
      puVar1 = (undefined8 *)puVar7[0x24];
      for (puVar9 = (undefined8 *)puVar7[0x23]; bVar3 = puVar9 == puVar1, !bVar3;
          puVar9 = puVar9 + 2) {
        func_0x00010088ec58(*puVar9);
        (*extraout_x8_03)();
      }
    }
    lVar15 = puVar8[0x36];
    puVar8[0x36] = (undefined8 ******)(lVar15 + (long)param_6);
    pppppppuVar13 = (undefined8 *******)puVar8[3];
    pppppppuVar13[8] = (undefined8 ******)(lVar15 + (long)param_6);
    FUN_100688328(*(undefined1 *)(pppppppuVar13 + 0x24));
    lVar15 = 0xc0;
    if (bVar3) {
      lVar15 = extraout_x8_04;
    }
    uVar19 = *(undefined8 *)((long)pppppppuVar13 + lVar15);
    if (*(int *)(pppppppuVar13 + 0x4b) == 1) {
      ppppppuVar10 = *pppppppuVar14;
      *pppppppuVar14 = (undefined8 ******)0x0;
      func_0x00010089406c(puVar8 + 5,ppppppuVar10);
      func_0x00010088ec4c(puVar8[3]);
      (*extraout_x9_01)(auStack_218);
      puVar16 = (ulong *)puVar8[0x4f];
      uStack_1d8 = puVar16[1];
      uStack_1e0 = *puVar16;
      if (puVar16[1] != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10_01 != 0);
      }
      uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
      FUN_1008946fc();
      (*extraout_x8_05)();
    }
    else {
      uVar4 = *(char *)(pppppppuVar13 + 0x28) == '\x01';
      if ((bool)uVar4) {
        pppppppuVar13 = (undefined8 *******)puVar7[0x1e];
        (*(code *)(*pppppppuVar13)[5])
                  (pppppppuVar13,*(undefined4 *)(puVar8 + 0x4a),ppppppuVar10,param_6);
        pppppppuVar18 = (undefined8 *******)*pppppppuVar14;
        *pppppppuVar14 = (undefined8 ******)0x0;
        uVar4 = pppppppuVar13 == param_6;
        if (!(bool)uVar4) {
          puVar16 = &uStack_1f8;
          FUN_10002b838(puVar16,&UNK_10f742be9);
          func_0x000107c60e5c();
          uStack_1c0 = (undefined4)*puVar16;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x3e9);
          puVar16 = &uStack_1d8;
          uStack_1d0 = uStack_1f0;
          uStack_1d8 = uStack_1f8;
          uStack_1c8 = uStack_1e8;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          uStack_1e8 = 0;
          uStack_1bc = 0;
          uStack_1b8 = 0;
          func_0x000107c60ca0(&uStack_1f8);
          func_0x000107c2c7dc(puVar7,ppppppuStack_1a8,&uStack_1e0);
          FUN_1008a48bc(pppppppuVar18);
          goto LAB_100893204;
        }
      }
      else if (param_6 == (undefined8 *******)0x0) {
        pppppppuVar18 = (undefined8 *******)0x0;
      }
      else {
        pppppuStack_200 = *pppppppuVar14;
        *pppppppuVar14 = (undefined8 ******)0x0;
        FUN_100893e48();
        pppppppuVar18 = (undefined8 *******)&pppppuStack_200;
        FUN_100894084();
        func_0x000100787d68();
        pppppppuVar13 = pppppppuVar18;
        func_0x00010088d078();
      }
      func_0x000107c60d9c();
      if ((*(byte *)(puVar8 + 0x51) & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x51) = 1;
      }
      puVar8[0x50] = pppppppuVar13;
      func_0x00010088d104(ppppppuStack_1a8,pppppppuVar18);
      func_0x00010088ec4c(puVar8[3]);
      (*extraout_x9_02)(auStack_218);
      func_0x000100686b1c(puVar8[3]);
      lVar15 = 0xc0;
      if ((bool)uVar4) {
        lVar15 = extraout_x9_03;
      }
      uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
      uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
      FUN_1008946fc(auStack_218[0],*(undefined8 *)(extraout_x8_06 + lVar15));
      (*extraout_x8_07)();
    }
    FUN_1000ff348(&uStack_1e0);
    func_0x00010067c8a8(auStack_218);
    plVar17 = (long *)puVar7[0x32];
    func_0x000107c60de8(auStack_218,uVar19);
    lVar15 = *plVar6;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,*(undefined4 *)(lVar15 + 0xa8));
    FUN_100686d00();
    func_0x000107c60c94(&uStack_1d8,lVar15);
    uStack_1c0 = (undefined4)*plVar6;
    FUN_100686db8();
    uStack_1bc = (undefined1)*plVar6;
    FUN_100686eec();
    uStack_1b8 = *(undefined4 *)(*plVar6 + 0x194);
    FUN_10078a7ac(*(undefined8 *)(*plVar17 + 0x20),plVar17,auStack_218,&uStack_1e0);
    func_0x000107c60ca0(&uStack_1d8);
    puVar16 = auStack_218;
  }
LAB_100893204:
  func_0x000107c60ca0(puVar16);
  return;
}



/* Entry: 100892e10; end: 100893293;  */

void FUN_100892e10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x9;
  code *extraout_x9_00;
  ulong *puVar9;
  code *extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong auStack_d8 [3];
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_68;
  
  uStack_68 = param_2;
  func_0x000107c60d9c();
  lVar8 = param_1 + 0x28;
  FUN_100893294();
  if (lVar8 == 0) {
    return;
  }
  plVar10 = (long *)(lVar8 + 0x18);
  func_0x000100686b1c(*plVar10);
  lVar5 = 0xc0;
  if ((bool)in_ZR) {
    lVar5 = extraout_x9;
  }
  if (param_3 != *(long *)(extraout_x8 + lVar5)) {
    return;
  }
  lVar5 = param_1 + 0x78;
  FUN_10088a33c(lVar5,&uStack_68);
  if (lVar5 != 0) {
    return;
  }
  if ((*(byte *)(lVar8 + 0x1b8) & 1) == 0) {
    FUN_10002b838(&uStack_a0,&UNK_10f742bea);
    func_0x000107c2c7f4(&uStack_a0,2);
    puVar9 = &uStack_a0;
  }
  else {
    FUN_10078a684(plVar10);
    lVar5 = *param_5;
    func_0x000100787fec();
    func_0x00010088ae58();
    *(undefined8 *)(lVar8 + 0x1a8) = param_4;
    bVar3 = false;
    if (*(char *)(lVar8 + 0x288) == '\x01') {
      if (*(char *)(param_1 + 0x168) == '\x01') {
        uVar6 = *(ulong *)(param_1 + 0x160);
        func_0x0001006882d4();
        (*extraout_x8_00)();
        uVar6 = uVar6 & 0xffffffff | 0x100000000;
      }
      else {
        uVar6 = 0;
      }
      uStack_a0._0_5_ = (undefined5)uVar6;
      puVar2 = *(undefined8 **)(param_1 + 0x120);
      for (puVar12 = *(undefined8 **)(param_1 + 0x118); bVar3 = puVar12 == puVar2, !bVar3;
          puVar12 = puVar12 + 2) {
        func_0x00010088ec58(*puVar12);
        (*extraout_x8_01)();
      }
    }
    lVar1 = *(long *)(lVar8 + 0x1b0) + (long)param_6;
    *(long *)(lVar8 + 0x1b0) = lVar1;
    plVar7 = *(long **)(lVar8 + 0x18);
    plVar7[8] = lVar1;
    FUN_100688328((char)plVar7[0x24]);
    lVar1 = 0xc0;
    if (bVar3) {
      lVar1 = extraout_x8_02;
    }
    uVar11 = *(undefined8 *)((long)plVar7 + lVar1);
    if ((int)plVar7[0x4b] == 1) {
      lVar5 = *param_5;
      *param_5 = 0;
      func_0x00010089406c(lVar8 + 0x28,lVar5);
      func_0x00010088ec4c(*(undefined8 *)(lVar8 + 0x18));
      (*extraout_x9_00)(auStack_d8);
      puVar9 = *(ulong **)(lVar8 + 0x278);
      uStack_98 = puVar9[1];
      uStack_a0 = *puVar9;
      if (puVar9[1] != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10 != 0);
      }
      uStack_90 = CONCAT71(uStack_90._1_7_,1);
      FUN_1008946fc();
      (*extraout_x8_03)();
    }
    else {
      uVar4 = (char)plVar7[0x28] == '\x01';
      if ((bool)uVar4) {
        plVar7 = *(long **)(param_1 + 0xf0);
        (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined4 *)(lVar8 + 0x250),lVar5,param_6);
        plVar13 = (long *)*param_5;
        *param_5 = 0;
        uVar4 = plVar7 == param_6;
        if (!(bool)uVar4) {
          puVar9 = &uStack_b8;
          FUN_10002b838(puVar9,&UNK_10f742be9);
          func_0x000107c60e5c();
          uStack_80 = (undefined4)*puVar9;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3e9);
          puVar9 = &uStack_98;
          uStack_90 = uStack_b0;
          uStack_98 = uStack_b8;
          uStack_88 = uStack_a8;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          func_0x000107c60ca0(&uStack_b8);
          func_0x000107c2c7dc(param_1,uStack_68,&uStack_a0);
          FUN_1008a48bc(plVar13);
          goto LAB_100893204;
        }
      }
      else if (param_6 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        lStack_c0 = *param_5;
        *param_5 = 0;
        FUN_100893e48();
        plVar13 = &lStack_c0;
        FUN_100894084();
        func_0x000100787d68();
        plVar7 = plVar13;
        func_0x00010088d078();
      }
      func_0x000107c60d9c();
      if ((*(byte *)(lVar8 + 0x288) & 1) == 0) {
        *(undefined1 *)(lVar8 + 0x288) = 1;
      }
      *(long **)(lVar8 + 0x280) = plVar7;
      func_0x00010088d104(uStack_68,plVar13);
      func_0x00010088ec4c(*(undefined8 *)(lVar8 + 0x18));
      (*extraout_x9_01)(auStack_d8);
      func_0x000100686b1c(*(undefined8 *)(lVar8 + 0x18));
      lVar8 = 0xc0;
      if ((bool)uVar4) {
        lVar8 = extraout_x9_02;
      }
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      FUN_1008946fc(auStack_d8[0],*(undefined8 *)(extraout_x8_04 + lVar8));
      (*extraout_x8_05)();
    }
    FUN_1000ff348(&uStack_a0);
    func_0x00010067c8a8(auStack_d8);
    plVar7 = *(long **)(param_1 + 400);
    func_0x000107c60de8(auStack_d8,uVar11);
    lVar8 = *plVar10;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar8 + 0xa8));
    FUN_100686d00();
    func_0x000107c60c94(&uStack_98,lVar8);
    uStack_80 = (undefined4)*plVar10;
    FUN_100686db8();
    uStack_7c = (undefined1)*plVar10;
    FUN_100686eec();
    uStack_78 = *(undefined4 *)(*plVar10 + 0x194);
    FUN_10078a7ac(*(undefined8 *)(*plVar7 + 0x20),plVar7,auStack_d8,&uStack_a0);
    func_0x000107c60ca0(&uStack_98);
    puVar9 = auStack_d8;
  }
LAB_100893204:
  func_0x000107c60ca0(puVar9);
  return;
}



/* Entry: 100893294; end: 10089329b;  */

long FUN_100893294(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x29;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    func_0x000100687708();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *(long *)(unaff_x29 + -0x58)) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 10089329c; end: 1008933af;  */

void FUN_10089329c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong *in_x7;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_x30;
  
  FUN_10088b0e4();
  lVar4 = 0xc0;
  if (*(char *)(*param_2 + 0x120) == '\0') {
    lVar4 = 0x60;
  }
  if ((*(char *)(unaff_x19 + 8) == '\x01') && (lVar6 = *(long *)(unaff_x19 + 0x10), lVar6 != 0)) {
    uVar1 = *(uint *)(*param_2 + lVar4 + 0x38);
    uVar7 = *in_x7;
    iVar3 = (int)lVar6 + 0x60;
    func_0x000107c60d90();
    if (iVar3 != 0) {
      lVar4 = lVar6;
      FUN_10088b218(uVar7 >> 0x20 | (ulong)uVar1 << 0x20,lVar6,param_1);
      bVar2 = (*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28)) / 0x28 == *(long *)(lVar4 + 0x48);
      if (bVar2) {
        bVar2 = *(long *)(lVar4 + 0x30) == *(long *)(lVar4 + 0x28);
        if (!bVar2) {
          func_0x000100893400();
          uVar5 = extraout_x8;
          if (bVar2) {
            uVar5 = *(undefined8 *)(lVar4 + 0x28);
            *(undefined8 *)(lVar4 + 0x40) = uVar5;
          }
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
        }
      }
      else {
        func_0x000100893400();
        if (bVar2) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar4 + 0x28);
        }
        *(long *)(lVar4 + 0x48) = *(long *)(lVar4 + 0x48) + 1;
      }
      func_0x000100893428(lVar6 + 0x60,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
      return;
    }
  }
  return;
}



/* Entry: 1008933b0; end: 100893447;  */

void FUN_1008933b0(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 100893448; end: 100893527;  */

void FUN_100893448(long param_1,undefined8 param_2,ulong param_3)

{
  long extraout_x8;
  undefined8 *extraout_x8_00;
  
  if ((0x3fff < param_3) && (0 < *(long *)(param_1 + 0x10))) {
    FUN_1006669e8();
    func_0x0001006669fc();
    func_0x000100666a08();
    if (extraout_x8 == 0) {
      func_0x000107c35870();
      func_0x000107c3589c();
      func_0x000107c358bc();
      func_0x000107c358a0();
      func_0x000107c358c0();
      func_0x000107c358a4();
      func_0x000107c3587c();
      func_0x000107c3588c();
      func_0x000107c35894();
      func_0x000107c358c4();
      func_0x000107c35888();
      func_0x000107c358c8(*extraout_x8_00);
      func_0x000107c358dc();
    }
  }
  return;
}



/* Entry: 100893528; end: 100893ceb;  */

void FUN_100893528(long param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long extraout_x9;
  long extraout_x9_00;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long **pplVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  double dVar25;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  int iStack_118;
  uint uStack_114;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  float fStack_90;
  long *plStack_88;
  long **pplStack_80;
  undefined8 uStack_78;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x58),param_5,param_4,
             *(undefined4 *)(*param_2 + 0xa8));
  FUN_10088c03c(*param_2);
  lVar10 = 0xc0;
  if ((bool)in_ZR) {
    lVar10 = 0x60;
  }
  uVar20 = *(ulong *)(extraout_x8 + lVar10);
  uVar11 = param_4 / 1000000;
  if ((long)(uVar11 * 1000000) < param_4) {
    uVar11 = uVar11 + 1;
  }
  func_0x00010088c048();
  puVar8 = *(undefined8 **)(param_1 + 0x30);
  uStack_138 = uVar20;
  uStack_130 = param_3;
  uStack_128 = uVar11;
  uStack_120 = param_5;
  FUN_100893cf4(puVar8,uVar20,&uStack_138);
  func_0x000100893df0();
  lVar10 = *(long *)(param_1 + 0x30);
  uVar11 = *(ulong *)(lVar10 + 0x30);
  if ((uVar11 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
    uVar12 = uVar11 - 1;
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar12 & uVar20;
    }
    else {
      uVar14 = uVar20;
      if (uVar11 <= uVar20) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = uVar20 / uVar11;
        }
        uVar14 = uVar20 - uVar14 * uVar11;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar10 + 0x28) + uVar14 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return;
          }
          uVar19 = plVar17[1];
          if (uVar20 != uVar19) break;
          if (plVar17[2] == uVar20) {
            if (lVar10 + 0x10 == plVar17[3]) {
              return;
            }
            if (*(int *)(plVar17[3] + 0x68) == 0) {
              return;
            }
            func_0x00010088c048();
            lVar10 = *(long *)(param_1 + 0x30);
            uStack_a8 = 0;
            lStack_b0 = 0;
            uStack_98 = 0;
            plStack_a0 = (long *)0x0;
            pplVar21 = &plStack_a0;
            fStack_90 = 1.0;
            plVar17 = (long *)(lVar10 + 0x18);
            goto LAB_1008936a8;
          }
        }
        if ((uVar11 & uVar12) == 0) {
          uVar19 = uVar19 & uVar12;
        }
        else if (uVar11 <= uVar19) {
          uVar15 = 0;
          if (uVar11 != 0) {
            uVar15 = uVar19 / uVar11;
          }
          uVar19 = uVar19 - uVar15 * uVar11;
        }
      } while (uVar19 == uVar14);
    }
  }
  return;
LAB_1008936a8:
  lVar24 = *plVar17;
  uVar7 = lVar24 == lVar10 + 0x10;
  if ((bool)uVar7) {
    func_0x000100893df0();
    iVar22 = 0;
    while (pplVar21 = (long **)*pplVar21, pplVar21 != (long **)0x0) {
      iVar22 = *(int *)(pplVar21 + 3) + iVar22;
    }
    iVar1 = iVar22 >> 0x1f;
    if (0 < iVar22) {
      iVar1 = 1;
    }
    func_0x000107c60d9c();
    *(undefined8 **)(param_1 + 0x80) = puVar8;
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(param_1 + 0x28), iVar2 != *(int *)(param_1 + 0x2c) || (-1 < iVar1)))) {
      FUN_1006662a4(*(undefined8 *)(param_1 + 0x38),&uStack_138);
      iVar5 = uStack_138._4_4_;
      puVar8 = &uStack_138;
      func_0x000100666a98();
      if (iVar2 != iVar5 || iVar22 < 1) {
        func_0x000107c60d9c();
        lVar10 = *(long *)(param_1 + 0x78);
        func_0x000107c2c94c(&uStack_138,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68));
        lVar10 = ((long)puVar8 - lVar10) / 1000000;
        uVar23 = 600;
        if ((uint)uStack_128 != 0) {
          uVar23 = (uint)uStack_128;
        }
        if (iVar22 < 1 || (long)(ulong)uVar23 <= lVar10) {
          uVar23 = 300;
          if (uStack_128._4_4_ != 0) {
            uVar23 = uStack_128._4_4_;
          }
          if (iVar1 != -1 || (long)(ulong)uVar23 <= lVar10) {
            (**(code **)(**(long **)(param_1 + 0x10) + 0x48))
                      (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x58));
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
            *(undefined8 **)(param_1 + 0x78) = puVar8;
            puVar3 = *(undefined8 **)(param_1 + 0x68);
            for (puVar8 = *(undefined8 **)(param_1 + 0x60); puVar8 != puVar3; puVar8 = puVar8 + 2) {
              plStack_88 = (long *)0x0;
              pplStack_80 = (long **)0x0;
              pplVar21 = (long **)puVar8[1];
              if (pplVar21 != (long **)0x0) {
                func_0x000107c60d6c();
                if (pplVar21 != (long **)0x0) {
                  plStack_88 = (long *)*puVar8;
                }
                pplStack_80 = pplVar21;
                if (plStack_88 != (long *)0x0) {
                  (**(code **)(*plStack_88 + 0x10))();
                }
              }
              func_0x000100669eb8(&plStack_88);
            }
            (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                      (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x58),3,
                       *(undefined4 *)(param_1 + 0x28));
          }
        }
        FUN_100667f48(&uStack_138);
      }
    }
    func_0x000107c35bb0();
    return;
  }
  uVar20 = *(ulong *)(lVar24 + 0x10);
  uVar11 = lVar24 + 0x58;
  func_0x0001006502bc(&uStack_138);
  if ((uint)uStack_128 != 0) {
    uVar12 = lVar24 + 0x18;
    func_0x000107c2c97c();
    if (uStack_120 == 0) {
      if (uVar11 != 0) goto LAB_1008936f8;
    }
    else {
      uVar7 = uVar12 < uStack_120 || uVar11 == 0;
      if (uVar12 >= uStack_120 && uVar11 != 0) {
LAB_1008936f8:
        func_0x000107c35bb8();
        lVar9 = extraout_x9 + 0xe80;
        if (!(bool)uVar7) {
          lVar9 = extraout_x8_00;
        }
        if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
          bVar4 = false;
        }
        else {
          uVar7 = *(int *)(*(long *)(lVar9 + 0x60) + 0x18) == 1;
          bVar4 = (bool)uVar7;
        }
        plVar17 = *(long **)(param_1 + 0x48);
        (**(code **)(*plVar17 + 0x10))();
        func_0x000107c35bb8();
        uVar14 = uStack_a8;
        lVar9 = extraout_x9_00 + 0xe80;
        if (!(bool)uVar7) {
          lVar9 = extraout_x8_01;
        }
        if (((*(byte *)(lVar9 + 0x10) & 1) == 0) ||
           (dVar25 = *(double *)(*(long *)(lVar9 + 0x60) + 0x10), dVar25 <= 0.0)) {
          dVar25 = 1.0;
        }
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = (uVar12 << 3) / uVar11;
        }
        uVar11 = (long)(dVar25 * (double)plVar17);
        if (!bVar4) {
          uVar11 = uVar19;
        }
        if (uVar11 + (uStack_128 >> 0x20) < (uStack_128 & 0xffffffff)) {
          uVar23 = uStack_114;
          if (uStack_114 < 2) {
            uVar23 = 1;
          }
          uVar23 = -uVar23;
        }
        else {
          uVar23 = (uint)(iStack_118 + (uint)uStack_128 <= uVar11);
        }
        if (uStack_a8 != 0) {
          uVar11 = uStack_a8 - 1;
          if ((uStack_a8 & uVar11) == 0) {
            uVar12 = uVar11 & uVar20;
          }
          else {
            uVar12 = uVar20;
            if (uStack_a8 <= uVar20) {
              uVar12 = 0;
              if (uStack_a8 != 0) {
                uVar12 = uVar20 / uStack_a8;
              }
              uVar12 = uVar20 - uVar12 * uStack_a8;
            }
          }
          plVar17 = *(long **)(lStack_b0 + uVar12 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_100893834;
                uVar19 = plVar17[1];
                if (uVar19 != uVar20) break;
                if (plVar17[2] == uVar20) goto LAB_100893ae0;
              }
              if ((uStack_a8 & uVar11) == 0) {
                uVar19 = uVar19 & uVar11;
              }
              else if (uStack_a8 <= uVar19) {
                uVar15 = 0;
                if (uStack_a8 != 0) {
                  uVar15 = uVar19 / uStack_a8;
                }
                uVar19 = uVar19 - uVar15 * uStack_a8;
              }
            } while (uVar19 == uVar12);
          }
        }
LAB_100893834:
        plVar17 = (long *)0x20;
        func_0x000107c60e20();
        uStack_78 = 1;
        *plVar17 = 0;
        plVar17[1] = uVar20;
        plVar17[2] = uVar20;
        *(uint *)(plVar17 + 3) = uVar23;
        pplStack_80 = pplVar21;
        if ((uVar14 == 0) || (fStack_90 * (float)uVar14 < (float)(uStack_98 + 1))) {
          uVar11 = 1;
          if (2 < uVar14) {
            uVar11 = (ulong)((uVar14 & uVar14 - 1) != 0);
          }
          uVar11 = uVar11 | uVar14 << 1;
          uVar12 = (ulong)((float)(uStack_98 + 1) / fStack_90);
          if (uVar11 <= uVar12) {
            uVar11 = uVar12;
          }
          uVar12 = uVar14;
          plStack_88 = plVar17;
          if (uVar11 - 1 == 0) {
            uVar11 = 2;
          }
          else if ((uVar11 & uVar11 - 1) != 0) {
            func_0x000107c60c44();
            uVar12 = uStack_a8;
          }
          if (uVar12 < uVar11) {
LAB_1008938dc:
            if (uVar11 >> 0x3d != 0) {
              func_0x000104bd35f4();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100893c7c);
              (*pcVar6)();
            }
            lVar9 = uVar11 << 3;
            func_0x000107c60e20(lVar9);
            func_0x000107c2c964(&lStack_b0,lVar9);
            for (uVar12 = 0; uVar11 != uVar12; uVar12 = uVar12 + 1) {
              *(undefined8 *)(lStack_b0 + uVar12 * 8) = 0;
            }
            uVar14 = uVar11;
            uStack_a8 = uVar11;
            if (plStack_a0 != (long *)0x0) {
              uVar15 = plStack_a0[1];
              uVar19 = uVar11 - 1;
              uVar12 = 0;
              if (uVar11 != 0) {
                uVar12 = uVar15 / uVar11;
              }
              uVar16 = uVar15;
              if (uVar11 <= uVar15) {
                uVar16 = uVar15 - uVar12 * uVar11;
              }
              if ((uVar11 & uVar19) == 0) {
                uVar16 = uVar15 & uVar19;
              }
              *(long ***)(lStack_b0 + uVar16 * 8) = pplVar21;
              plVar18 = plStack_a0;
              while (plVar13 = plVar18, plVar18 = (long *)*plVar13, plVar18 != (long *)0x0) {
                uVar12 = plVar18[1];
                if ((uVar11 & uVar19) == 0) {
                  uVar12 = uVar12 & uVar19;
                }
                else if (uVar11 <= uVar12) {
                  uVar15 = 0;
                  if (uVar11 != 0) {
                    uVar15 = uVar12 / uVar11;
                  }
                  uVar12 = uVar12 - uVar15 * uVar11;
                }
                if (uVar12 != uVar16) {
                  if (*(long *)(lStack_b0 + uVar12 * 8) == 0) {
                    *(long **)(lStack_b0 + uVar12 * 8) = plVar13;
                    uVar16 = uVar12;
                  }
                  else {
                    *plVar13 = *plVar18;
                    *plVar18 = **(long **)(lStack_b0 + uVar12 * 8);
                    **(undefined8 **)(lStack_b0 + uVar12 * 8) = plVar18;
                    plVar18 = plVar13;
                  }
                }
              }
            }
          }
          else {
            uVar14 = uVar12;
            if (uVar11 < uVar12) {
              uVar14 = (ulong)((float)uStack_98 / fStack_90);
              if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
                func_0x000107c60c44();
              }
              else if (1 < uVar14) {
                uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
              }
              if (uVar11 <= uVar14) {
                uVar11 = uVar14;
              }
              uVar14 = uStack_a8;
              if (uVar11 < uVar12) {
                if (uVar11 != 0) goto LAB_1008938dc;
                func_0x000107c2c964(&lStack_b0,0);
                uStack_a8 = 0;
                uVar14 = 0;
              }
            }
          }
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar12 = uVar14 - 1 & uVar20;
          }
          else {
            uVar12 = uVar20;
            if (uVar14 <= uVar20) {
              uVar11 = 0;
              if (uVar14 != 0) {
                uVar11 = uVar20 / uVar14;
              }
              uVar12 = uVar20 - uVar11 * uVar14;
            }
          }
        }
        plVar18 = *(long **)(lStack_b0 + uVar12 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar17 = (long)plStack_a0;
          *(long ***)(lStack_b0 + uVar12 * 8) = pplVar21;
          plStack_a0 = plVar17;
          if (*plVar17 != 0) {
            uVar11 = *(ulong *)(*plVar17 + 8);
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar11 = uVar11 & uVar14 - 1;
            }
            else if (uVar14 <= uVar11) {
              uVar20 = 0;
              if (uVar14 != 0) {
                uVar20 = uVar11 / uVar14;
              }
              uVar11 = uVar11 - uVar20 * uVar14;
            }
            *(long **)(lStack_b0 + uVar11 * 8) = plVar17;
          }
        }
        else {
          *plVar17 = *plVar18;
          *plVar18 = (long)plVar17;
        }
        plStack_88 = (long *)0x0;
        uStack_98 = uStack_98 + 1;
        func_0x000107c2c968(&plStack_88);
      }
    }
  }
LAB_100893ae0:
  puVar8 = &uStack_138;
  FUN_100666b94();
  plVar17 = (long *)(lVar24 + 8);
  goto LAB_1008936a8;
}



/* Entry: 100893cec; end: 100893cf3;  */

undefined8 * FUN_100893cec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [112];
  undefined8 uStack_28;
  
  puVar1 = param_1 + 1;
  uStack_28 = param_2;
  FUN_10088c05c(puVar1,&uStack_28);
  if (param_1 + 2 == puVar1) {
    FUN_10088c21c(auStack_98,*param_1);
    puVar1 = param_1 + 1;
    FUN_10088c36c(puVar1,&uStack_28,auStack_98);
    func_0x00010088ca5c(auStack_98);
  }
  return puVar1 + 3;
}



/* Entry: 100893cf4; end: 100893d17;  */

void FUN_100893cf4(long param_1)

{
  bool bVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  
  FUN_100893cec();
  plVar2 = (long *)(param_1 + 0x18);
  bVar1 = *(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x20) - *plVar2 >> 5;
  if (bVar1) {
    bVar1 = *(long *)(param_1 + 0x20) == *plVar2;
    if (!bVar1) {
      func_0x000100893dcc();
      lVar3 = extraout_x8;
      if (bVar1) {
        lVar3 = *plVar2;
        plVar2[3] = lVar3;
      }
      plVar2[2] = lVar3;
      return;
    }
  }
  else {
    func_0x000100893dcc();
    if (bVar1) {
      plVar2[3] = *plVar2;
    }
    plVar2[4] = plVar2[4] + 1;
  }
  return;
}



/* Entry: 100893d18; end: 100893dfb;  */

void FUN_100893d18(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 100893dfc; end: 100893e47;  */

undefined8 * FUN_100893dfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar3 = *param_3;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_100893eb0();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 100893e48; end: 100893eaf;  */

void FUN_100893e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_100893dfc(param_1 + 0x260,param_2,&uStack_18);
  return;
}



/* Entry: 100893eb0; end: 100893f43;  */

long FUN_100893eb0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  func_0x000100893e70(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_100893f44(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar2 = *param_2;
  *param_2 = 0;
  uVar3 = *param_3;
  *puStack_48 = uVar2;
  puStack_48[1] = uVar3;
  puStack_48 = puStack_48 + 2;
  func_0x00010067c778();
  FUN_100893fc4();
  lVar4 = param_1[1];
  FUN_100894004(auStack_58);
  return lVar4;
}



/* Entry: 100893f44; end: 100893f83;  */

void FUN_100893f44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010067c6cc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_100893fa0();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 100893f84; end: 100893f9f;  */

void FUN_100893f84(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_100893f84();
  return;
}



/* Entry: 100893fa0; end: 100893fc3;  */

void FUN_100893fa0(void)

{
  FUN_100893f84();
  return;
}



/* Entry: 100893fc4; end: 100893ffb;  */

void FUN_100893fc4(long *param_1,long param_2)

{
  FUN_10067bc1c();
  func_0x000107c610b4(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  FUN_10067c7c8();
  return;
}



/* Entry: 100893ffc; end: 100894003;  */

void FUN_100893ffc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10067bc1c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_100894084();
  }
  return;
}



/* Entry: 100894004; end: 100894063;  */

long * FUN_100894004(long *param_1)

{
  FUN_100893ffc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100894064; end: 100894083;  */

void FUN_100894064(void)

{
  return;
}



/* Entry: 100894084; end: 1008940a7;  */

undefined8 FUN_100894084(undefined8 param_1)

{
  func_0x00010089406c(param_1,0);
  return param_1;
}



/* Entry: 1008940a8; end: 100894117;  */

void FUN_1008940a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3f2b4(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100894118; end: 10089411f; -[SCMutablePublicCameraFeatureCatalog cameraUserActionLogger] */

undefined8 FUN_100894118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100894120; end: 10089414f; -[SCCameraToolbarItemImpl isChildItem] */

bool FUN_100894120(long param_1)

{
  param_1 = param_1 + 0xf8;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}


