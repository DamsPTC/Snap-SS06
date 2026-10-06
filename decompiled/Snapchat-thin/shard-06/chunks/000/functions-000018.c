/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043b92ec; end: 1043b930b;  */

void FUN_1043b92ec(void)

{
  _objc_opt_self(&PTR_PTR_1129aafb8);
  return;
}



/* Entry: 1043b930c; end: 1043b9347;  */

void FUN_1043b930c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110765728;
  if (lRam00000001130750e0 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001130750e0 = param_1;
  }
  return;
}



/* Entry: 1043b9348; end: 1043b938f;  */

void FUN_1043b9348(void)

{
  FUN_1043b9390(0x1130750f8,&UNK_10dcf5e24);
  return;
}



/* Entry: 1043b9390; end: 1043b93cf;  */

void FUN_1043b9390(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x00010145621c(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1043b93d0; end: 1043b9417;  */

void FUN_1043b93d0(void)

{
  FUN_1043b9390(0x113075108,&UNK_10dcf5f14);
  return;
}



/* Entry: 1043b9418; end: 1043b945b;  */

void FUN_1043b9418(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1043b945c; end: 1043b94ab;  */

void FUN_1043b945c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1043b94ac; end: 1043ba273;  */

long FUN_1043b94ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043ba274; end: 1043ba2ab;  */

void FUN_1043ba274(undefined8 param_1)

{
  if (lRam0000000113075178 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e802808);
  return;
}



/* Entry: 1043ba2ac; end: 1043ba433;  */

long * FUN_1043ba2ac(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar3 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    plVar4 = param_2;
    (*pcVar8)(param_2,1,lVar3);
    if ((int)plVar4 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    lVar9 = (long)*(int *)(param_3 + 0x14);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar8)(lVar5,1,lVar3);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar3);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
    iVar1 = *(int *)(param_3 + 0x24);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
    _objc_retain();
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1043ba434; end: 1043ba4cb;  */

void FUN_1043ba434(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  return;
}



/* Entry: 1043ba4cc; end: 1043bab5f;  */

long FUN_1043ba4cc(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_2;
  (*pcVar5)(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar3 = param_2 + lVar6;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1 + lVar6,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1 + lVar6,param_2 + lVar6,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x20));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _objc_retain();
  return param_1;
}



/* Entry: 1043bab60; end: 1043bab77;  */

void FUN_1043bab60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043bab78; end: 1043bac03;  */

void FUN_1043bab78(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_38 = &UNK_10dcf6038;
    puStack_30 = &UNK_10dcf6050;
    lStack_48 = lStack_50;
    puStack_28 = puStack_40;
    _swift_initStructMetadata(param_1,0x100,6,&lStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043bac04; end: 1043bb7b7;  */

long FUN_1043bac04(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043bb7b8; end: 1043bb83f; -[SCFingerDownCaptureData image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bb7b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130751c0;
  _swift_beginAccess(param_1 + _DAT_1130751c0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1043bb840; end: 1043bb8f7; -[SCFingerDownCaptureData setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bb840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130751c0;
  _swift_beginAccess(param_1 + _DAT_1130751c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043bb8f8; end: 1043bb937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bb8f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751c0;
  _swift_beginAccess(unaff_x20 + _DAT_1130751c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1043bc2e0;
  return auVar2;
}



/* Entry: 1043bb938; end: 1043bb9bb; -[SCFingerDownCaptureData isoSpeedRating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043bb938(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130751c8;
  _swift_beginAccess(param_1 + _DAT_1130751c8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1043bb9bc; end: 1043bba57; -[SCFingerDownCaptureData setIsoSpeedRating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bb9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130751c8;
  _swift_beginAccess(param_1 + _DAT_1130751c8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1043bba58; end: 1043bba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bba58(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130751c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1043bc2e4;
  return auVar2;
}



/* Entry: 1043bba98; end: 1043bbb1f; -[SCFingerDownCaptureData exposureTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043bba98(long param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined4 *)(param_1 + _DAT_1130751d0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 1043bbb20; end: 1043bbbbf; -[SCFingerDownCaptureData setExposureTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bbb20(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined4 *)(param_2 + _DAT_1130751d0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  return;
}



/* Entry: 1043bbbc0; end: 1043bbbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bbbc0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130751d0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1043bc2e8;
  return auVar2;
}



/* Entry: 1043bbc00; end: 1043bbc87; -[SCFingerDownCaptureData brightness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043bbc00(long param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined4 *)(param_1 + _DAT_1130751d8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 1043bbc88; end: 1043bbd27; -[SCFingerDownCaptureData setBrightness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bbc88(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined4 *)(param_2 + _DAT_1130751d8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  return;
}



/* Entry: 1043bbd28; end: 1043bbd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bbd28(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130751d8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1043bbd68;
  return auVar2;
}



/* Entry: 1043bbd68; end: 1043bbd6b;  */

void FUN_1043bbd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1043bbd6c; end: 1043bbe2b; -[SCFingerDownCaptureData cameraInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bbd6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130751e0;
  _swift_beginAccess(param_1 + _DAT_1130751e0,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043bbe2c; end: 1043bbeff; -[SCFingerDownCaptureData setCameraInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bbe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
             PTR___ss11AnyHashableVSHsWP_11034e450);
  lVar1 = _DAT_1130751e0;
  _swift_beginAccess(param_1 + _DAT_1130751e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1043bbf00; end: 1043bbf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bbf00(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130751e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1043bc2ec;
  return auVar2;
}



/* Entry: 1043bbf40; end: 1043bbfc3; -[SCFingerDownCaptureData isLiveStream] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043bbf40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130751e8;
  _swift_beginAccess(param_1 + _DAT_1130751e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1043bbfc4; end: 1043bc05f; -[SCFingerDownCaptureData setIsLiveStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bbfc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130751e8;
  _swift_beginAccess(param_1 + _DAT_1130751e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1043bc060; end: 1043bc09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043bc060(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130751e8;
  _swift_beginAccess(unaff_x20 + _DAT_1130751e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1043bc2f0;
  return auVar2;
}



/* Entry: 1043bc0a0; end: 1043bc153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bc0a0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130751c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130751c8) = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_1130751d0) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_1130751d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130751e0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130751e8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043bc154; end: 1043bc173;  */

void FUN_1043bc154(void)

{
  _objc_opt_self(&PTR_PTR_1129ab090);
  return;
}



/* Entry: 1043bc174; end: 1043bc24b; -[SCFingerDownCaptureData initWithImage:isoSpeedRating:exposureTime:brightness:cameraInfo:isLiveStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bc174(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  long lStack_50;
  undefined8 uStack_48;
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
             PTR___ss11AnyHashableVSHsWP_11034e450);
  *(undefined8 *)(param_3 + _DAT_1130751c0) = param_5;
  *(undefined8 *)(param_3 + _DAT_1130751c8) = param_6;
  *(undefined4 *)(param_3 + _DAT_1130751d0) = param_1;
  *(undefined4 *)(param_3 + _DAT_1130751d8) = param_2;
  *(undefined8 *)(param_3 + _DAT_1130751e0) = param_7;
  *(undefined1 *)(param_3 + _DAT_1130751e8) = param_8;
  FUN_1043bc154();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_3;
  uStack_48 = param_7;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1043bc24c; end: 1043bc2a7; -[SCFingerDownCaptureData init] */

void FUN_1043bc24c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCapturer.FingerDownCaptureData",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043bc278);
  (*pcVar1)();
}



/* Entry: 1043bc2a8; end: 1043bc2df; -[SCFingerDownCaptureData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043bc2a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130751c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130751e0));
  return;
}



/* Entry: 1043bc2e0; end: 1043bc2f3;  */

void FUN_1043bc2e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1043bc2f4; end: 1043bc34b;  */

int FUN_1043bc2f4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1043bc34c; end: 1043bc3db;  */

uint FUN_1043bc34c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1043bc3dc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1043bc3dc; end: 1043bc897;  */

bool FUN_1043bc3dc(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (((((*param_1 ^ *param_2) & 1) != 0) || (((param_1[1] ^ param_2[1]) & 1) != 0)) ||
     (*(long *)(param_1 + 8) != *(long *)(param_2 + 8))) {
    return false;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = *(long *)(param_2 + 0x10);
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_1043bcdcc(0,0x113075220,&PTR_PTR_1126b7050);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  if (((param_1[0x18] ^ param_2[0x18]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x19] ^ param_2[0x19]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x1a] ^ param_2[0x1a]) & 1) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) {
    return false;
  }
  if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)) {
    return false;
  }
  uVar2 = *(ulong *)(param_1 + 0x30);
  lVar3 = *(long *)(param_2 + 0x30);
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_1043bcdcc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  if (((param_1[0x38] ^ param_2[0x38]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x39] ^ param_2[0x39]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x3a] ^ param_2[0x3a]) & 1) != 0) {
    return false;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  lVar3 = *(long *)(param_2 + 0x40);
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return false;
    }
  }
  else {
    if (lVar3 == 0) {
      return false;
    }
    FUN_1043bcdcc(0,0x113075218,&PTR_PTR_1126c8690);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return false;
    }
  }
  if (((param_1[0x48] ^ param_2[0x48]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x49] ^ param_2[0x49]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x4a] ^ param_2[0x4a]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x4b] ^ param_2[0x4b]) & 1) != 0) {
    return false;
  }
  if (((param_1[0x4c] ^ param_2[0x4c]) & 1) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x50) == *(long *)(param_2 + 0x50)) {
    if (((param_1[0x58] ^ param_2[0x58]) & 1) != 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x60) != *(long *)(param_2 + 0x60)) {
      return false;
    }
    if (*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x68)) {
      return false;
    }
    if (*(float *)(param_1 + 0x70) != *(float *)(param_2 + 0x70)) {
      return false;
    }
    if (((param_1[0x74] ^ param_2[0x74]) & 1) != 0) {
      return false;
    }
    if (((param_1[0x75] ^ param_2[0x75]) & 1) != 0) {
      return false;
    }
    if (((param_1[0x76] ^ param_2[0x76]) & 1) != 0) {
      return false;
    }
    if (((param_1[0x77] ^ param_2[0x77]) & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x78);
      lVar3 = *(long *)(param_2 + 0x78);
      if (uVar2 == 0) {
        if (lVar3 != 0) {
          return false;
        }
      }
      else {
        if (lVar3 == 0) {
          return false;
        }
        FUN_1043bcdcc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar3);
        _objc_retain();
        uVar1 = uVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar2);
        _objc_release(lVar3);
        if ((uVar1 & 1) == 0) {
          return false;
        }
      }
      uVar2 = *(ulong *)(param_1 + 0x80);
      lVar3 = *(long *)(param_2 + 0x80);
      if (uVar2 == 0) {
        if (lVar3 != 0) {
          return false;
        }
      }
      else {
        if (lVar3 == 0) {
          return false;
        }
        _swift_bridgeObjectRetain(lVar3);
        uVar1 = uVar2;
        _swift_bridgeObjectRetain();
        func_0x0001038a4f38();
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(lVar3);
        if ((uVar1 & 1) == 0) {
          return false;
        }
      }
      if (((((param_1[0x88] ^ param_2[0x88]) & 1) == 0) &&
          (((param_1[0x89] ^ param_2[0x89]) & 1) == 0)) &&
         ((((param_1[0x8a] ^ param_2[0x8a]) & 1) == 0 &&
          ((((param_1[0x8b] ^ param_2[0x8b]) & 1) == 0 &&
           (((param_1[0x8c] ^ param_2[0x8c]) & 1) == 0)))))) {
        return *(long *)(param_1 + 0x90) == *(long *)(param_2 + 0x90);
      }
      return false;
    }
    return false;
  }
  return false;
}



/* Entry: 1043bc898; end: 1043bc903;  */

long FUN_1043bc898(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043bc904; end: 1043bc9ff;  */

undefined2 * FUN_1043bc904(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _objc_retain();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 1043bca00; end: 1043bcb9b;  */

undefined1 * FUN_1043bca00(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _objc_retain();
  _objc_release(uVar1);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _objc_retain();
  _objc_release(uVar1);
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _objc_retain();
  _objc_release(uVar1);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  param_1[0x77] = param_2[0x77];
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



/* Entry: 1043bcb9c; end: 1043bcce7;  */

undefined1 * FUN_1043bcb9c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _objc_release(uVar2);
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _objc_release(uVar2);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  param_1[0x76] = param_2[0x76];
  param_1[0x77] = param_2[0x77];
  _objc_release(*(undefined8 *)(param_1 + 0x78));
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



/* Entry: 1043bcce8; end: 1043bcdcb;  */

int FUN_1043bcce8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1043bcdcc; end: 1043bce0b;  */

void FUN_1043bcdcc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1043bce0c; end: 1043ca173;  */

long FUN_1043bce0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043ca174; end: 1043ca19f; -[SCManagedVideoCapturerOutputSettingsBuilder withPrimaryCameraPosition:secondaryCameraPosition:] */

void FUN_1043ca174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1043ca1a0(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ca1a0; end: 1043ca1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca1a0(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  
  uVar3 = 2;
  if (param_2 != 0) {
    uVar3 = 4;
  }
  uVar4 = 3;
  if (param_2 == 0) {
    uVar4 = 1;
  }
  uVar2 = 0;
  if (param_1 == 0) {
    uVar2 = uVar4;
  }
  if (param_1 != 1) {
    uVar3 = uVar2;
  }
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_113075678);
  *puVar1 = uVar3;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 1043ca1e4; end: 1043ca1fb; -[SCManagedCapturerState isCarouselLensesActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043ca1e4(long param_1)

{
  return *(uint *)(param_1 + _DAT_113075c20) & 1;
}



/* Entry: 1043ca1fc; end: 1043ca21f; -[SCManagedCapturerState updatedSourceOptionsForLensesActive:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1043ca1fc(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_113075c20) | param_4;
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_113075c20) & (param_4 ^ 0xffffffffffffffff);
  }
  return uVar1;
}



/* Entry: 1043ca220; end: 1043ca22f; -[SCImageCaptureConfiguration exposureCaptureDeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075390));
  return;
}



/* Entry: 1043ca230; end: 1043ca23f; -[SCImageCaptureConfiguration exposureCaptureDelayEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca230(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075398);
}



/* Entry: 1043ca240; end: 1043ca24f; -[SCImageCaptureConfiguration isStabilizationDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca240(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130753a0);
}



/* Entry: 1043ca250; end: 1043ca25f; -[SCImageCaptureConfiguration aspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca250(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130753a8);
}



/* Entry: 1043ca260; end: 1043ca26b; -[SCImageCaptureConfiguration snapSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130753b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130753b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca26c; end: 1043ca277; -[SCImageCaptureConfiguration captureSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca26c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130753b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130753b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca278; end: 1043ca283; -[SCImageCaptureConfiguration lensSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca278(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130753c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130753c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca284; end: 1043ca28f; -[SCImageCaptureConfiguration activeLensID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca284(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130753c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130753c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca290; end: 1043ca29f; -[SCImageCaptureConfiguration isGenAI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca290(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130753d0);
}



/* Entry: 1043ca2a0; end: 1043ca2af; -[SCImageCaptureConfiguration shouldCaptureFromVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca2a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130753d8);
}



/* Entry: 1043ca2b0; end: 1043ca2bf; -[SCImageCaptureConfiguration zoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca2b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130753e0);
}



/* Entry: 1043ca2c0; end: 1043ca2cf; -[SCImageCaptureConfiguration capturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130753e8));
  return;
}



/* Entry: 1043ca2d0; end: 1043ca2df; -[SCImageCaptureConfiguration fieldOfView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043ca2d0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1130753f0);
}



/* Entry: 1043ca2e0; end: 1043ca2ef; -[SCImageCaptureConfiguration lensInitiatedCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca2e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130753f8);
}



/* Entry: 1043ca2f0; end: 1043ca2ff; -[SCImageCaptureConfiguration isMainCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca2f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075400);
}



/* Entry: 1043ca300; end: 1043ca30f; -[SCImageCaptureConfiguration batchCaptureActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca300(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075408);
}



/* Entry: 1043ca310; end: 1043ca31f; -[SCImageCaptureConfiguration initiatedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca310(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075410);
}



/* Entry: 1043ca320; end: 1043ca32f; -[SCImageCaptureConfiguration audioConfigurationToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075418));
  return;
}



/* Entry: 1043ca330; end: 1043ca33f; -[SCImageCaptureConfiguration isCameraSettingsShutterSoundOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca330(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075420);
}



/* Entry: 1043ca340; end: 1043ca34f; -[SCImageCaptureConfiguration captureTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca340(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075428);
}



/* Entry: 1043ca350; end: 1043ca35b; -[SCImageCaptureConfiguration snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca350(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075430))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075430);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca35c; end: 1043ca3af; -[SCImageCaptureConfiguration activeCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca35c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113075438);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043ca3b0; end: 1043ca3bf; -[SCImageCaptureConfiguration shouldEnableHRSI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca3b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075440);
}



/* Entry: 1043ca3c0; end: 1043ca3cf; -[SCImageCaptureConfiguration shouldDisableFixDoubleLensEffects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca3c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075448);
}



/* Entry: 1043ca3d0; end: 1043ca3db; -[SCImageCaptureConfiguration detailedCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca3d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075450))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075450);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca3dc; end: 1043ca3eb; -[SCImageCaptureConfiguration scanSessionLaunched] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca3dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075458);
}



/* Entry: 1043ca3ec; end: 1043ca3fb; -[SCImageCaptureConfiguration ringStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca3ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075460);
}



/* Entry: 1043ca3fc; end: 1043ca40b; -[SCImageCaptureConfiguration cameraType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075468);
}



/* Entry: 1043ca40c; end: 1043ca41b; -[SCImageCaptureConfiguration isNightModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca40c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075470);
}



/* Entry: 1043ca41c; end: 1043ca42b; -[SCImageCaptureConfiguration isEnhancedNightModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca41c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075478);
}



/* Entry: 1043ca42c; end: 1043ca43b; -[SCImageCaptureConfiguration photoQualityPrioritization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ca42c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075480);
}



/* Entry: 1043ca43c; end: 1043ca44b; -[SCImageCaptureConfiguration shouldApplySuperResolutionIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca43c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075488);
}



/* Entry: 1043ca44c; end: 1043ca457; -[SCImageCaptureConfiguration superResolutionModelId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca44c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075490))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075490);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca458; end: 1043ca4af;  */

void FUN_1043ca458(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ca4b0; end: 1043ca4bf; -[SCImageCaptureConfiguration fingerDownCaptureData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075498));
  return;
}



/* Entry: 1043ca4c0; end: 1043ca4cf; -[SCImageCaptureConfiguration isHDModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca4c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130754a0);
}



/* Entry: 1043ca4d0; end: 1043ca4df; -[SCImageCaptureConfiguration isGreenScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca4d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130754a8);
}



/* Entry: 1043ca4e0; end: 1043ca4ef; -[SCImageCaptureConfiguration captureOrientationFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ca4e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130754b0);
}



/* Entry: 1043ca4f0; end: 1043cac3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ca4f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined4 param_27,undefined4 param_28,
                  undefined8 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
                  undefined8 param_33,undefined8 param_34,undefined4 param_35,undefined4 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined4 param_43)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_98 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113075390) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113075398) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130753a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130753a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130753b0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130753b8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130753c0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130753c8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_1130753d0) = (undefined1)param_15;
  *(undefined1 *)(unaff_x20 + _DAT_1130753d8) = param_15._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_1130753e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130753e8) = param_17;
  *(undefined4 *)(unaff_x20 + _DAT_1130753f0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_1130753f8) = (undefined1)param_18;
  *(undefined1 *)(unaff_x20 + _DAT_113075400) = param_18._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113075408) = param_18._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113075410) = param_18._3_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113075418) = param_20;
  *(undefined1 *)(unaff_x20 + _DAT_113075420) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_113075428) = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075430);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_113075438) = param_26;
  *(undefined1 *)(unaff_x20 + _DAT_113075440) = (undefined1)param_27;
  *(undefined1 *)(unaff_x20 + _DAT_113075448) = param_27._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075450);
  *puVar1 = param_29;
  puVar1[1] = param_30;
  *(undefined1 *)(unaff_x20 + _DAT_113075458) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_113075460) = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_113075468) = param_34;
  *(undefined1 *)(unaff_x20 + _DAT_113075470) = (undefined1)param_35;
  *(undefined1 *)(unaff_x20 + _DAT_113075478) = param_35._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113075480) = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_113075488) = param_38;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075490);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  *(undefined8 *)(unaff_x20 + _DAT_113075498) = param_42;
  *(undefined1 *)(unaff_x20 + _DAT_1130754a0) = (undefined1)param_43;
  *(undefined1 *)(unaff_x20 + _DAT_1130754a8) = param_43._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130754b0) = param_43._2_1_;
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043cac3c; end: 1043cafab; -[SCImageCaptureConfiguration initWithExposureCaptureDeadline:exposureCaptureDelayEnabled:isStabilizationDisabled:aspectRatio:snapSessionID:captureSessionID:lensSessionID:activeLensID:isGenAI:shouldCaptureFromVideo:zoomFactor:capturerState:fieldOfView:lensInitiatedCapture:isMainCamera:batchCaptureActive:initiatedRecording:audioConfigurationToken:isCameraSettingsShutterSoundOn:captureTrigger:snapSource:activeCameraModes:shouldEnableHRSI:shouldDisableFixDoubleLensEffects:detailedCameraModes:scanSessionLaunched:ringStyle:cameraType:isNightModeActive:isEnhancedNightModeActive:photoQualityPrioritization:shouldApplySuperResolutionIfPossible:superResolutionModelId:fingerDownCaptureData:isHDModeActive:isGreenScreen:captureOrientationFixEnabled:] */

void FUN_1043cac3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,long param_10,long param_11,long param_12,undefined1 param_13)

{
  long lVar1;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000088;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if (param_9 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_5;
    lStack_b0 = param_9;
  }
  if (param_10 == 0) {
    uStack_c8 = 0;
    lStack_c0 = 0;
    uStack_100 = param_5;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_100 = param_5;
    uStack_c8 = param_5;
    lStack_c0 = param_10;
  }
  if (param_11 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = uStack_100;
    lStack_d0 = param_11;
  }
  _objc_retain();
  lVar1 = param_12;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    uStack_100 = 0;
    lStack_f8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
    lStack_f8 = param_12;
  }
  if (in_stack_00000038 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000038);
  }
  if (in_stack_00000040 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(in_stack_00000040);
  }
  if (in_stack_00000050 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000050);
  }
  if (in_stack_00000088 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000088);
  }
  func_0x0001043ca8a0(param_1,param_2,param_3,param_6,param_7,param_8,lStack_b0,uStack_b8,lStack_c0,
                      uStack_c8,lStack_d0,uStack_d8,lStack_f8,uStack_100,param_13);
  return;
}



/* Entry: 1043cafac; end: 1043cafeb;  */

undefined8 FUN_1043cafac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043cc268(param_1);
  FUN_1043cc7a8(param_1);
  return uVar1;
}



/* Entry: 1043cafec; end: 1043cafef; -[SCImageCaptureConfiguration copyWithZone:] */

void FUN_1043cafec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043caff0; end: 1043cb02b; -[SCImageCaptureConfiguration description] */

void FUN_1043caff0(void)

{
  undefined1 auStack_1c0 [416];
  
  FUN_1043cc7dc(auStack_1c0);
  FUN_1043cc7a8(auStack_1c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cb02c; end: 1043cb073; -[SCImageCaptureConfiguration init] */

void FUN_1043cb02c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCImageCaptureConfigurationWrapper.swift",0x33,2,0xdc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043cb074);
  (*pcVar1)();
}



/* Entry: 1043cb074; end: 1043cb08f; +[SCImageCaptureConfigurationBuilder imageCaptureConfiguration] */

void FUN_1043cb074(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cb090; end: 1043cb0c3;  */

/* WARNING: Possible PIC construction at 0x0001043ccb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043ccb6c) */

void FUN_1043cb090(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043cd088();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043cd088();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


