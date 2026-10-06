/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10448ed20; end: 10448ed6f;  */

undefined1  [16] FUN_10448ed20(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10448ed70; end: 10448ed7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448ed70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e078);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10448ed7c; end: 10448edd3;  */

void FUN_10448ed7c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10448edd4; end: 10448ee13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10448edd4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11307e078;
  _swift_beginAccess(unaff_x20 + _DAT_11307e078,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10448f398;
  return auVar2;
}



/* Entry: 10448ee14; end: 10448eea7; -[SCSnapTokenMetricsInfo prefetchError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448ee14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307e080;
  _swift_beginAccess(param_1 + _DAT_11307e080,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10448eea8; end: 10448ef5f; -[SCSnapTokenMetricsInfo setPrefetchError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448eea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e080;
  _swift_beginAccess(param_1 + _DAT_11307e080,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10448ef60; end: 10448ef9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10448ef60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11307e080;
  _swift_beginAccess(unaff_x20 + _DAT_11307e080,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10448f39c;
  return auVar2;
}



/* Entry: 10448efa0; end: 10448efe7;  */

void FUN_10448efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  func_0x0001003522c0(param_1,param_2,param_3);
  return;
}



/* Entry: 10448efe8; end: 10448eff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448efe8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _CACurrentMediaTime();
  lVar1 = _DAT_11307e040;
  _swift_beginAccess(unaff_x20 + _DAT_11307e040,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 10448eff4; end: 10448f00b; -[SCSnapTokenMetricsInfo setNetworkStartTsNow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448eff4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _CACurrentMediaTime();
  lVar1 = _DAT_11307e040;
  _swift_beginAccess(param_2 + _DAT_11307e040,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  _objc_release(param_2);
  return;
}



/* Entry: 10448f00c; end: 10448f05b;  */

void FUN_10448f00c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _CACurrentMediaTime();
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 10448f05c; end: 10448f067; -[SCSnapTokenMetricsInfo setNetworkEndTsNow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448f05c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _CACurrentMediaTime();
  lVar1 = _DAT_11307e048;
  _swift_beginAccess(param_2 + _DAT_11307e048,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  _objc_release(param_2);
  return;
}



/* Entry: 10448f068; end: 10448f0c7;  */

void FUN_10448f068(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _CACurrentMediaTime();
  lVar1 = *param_4;
  _swift_beginAccess(param_2 + lVar1,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  _objc_release(param_2);
  return;
}



/* Entry: 10448f0c8; end: 10448f0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10448f0c8(double param_1)

{
  long unaff_x20;
  
  _CACurrentMediaTime();
  return param_1 - *(double *)(unaff_x20 + _DAT_11307e038);
}



/* Entry: 10448f0ec; end: 10448f177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10448f0ec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11307e048;
  _swift_beginAccess(unaff_x20 + _DAT_11307e048,auStack_48,0,0);
  lVar1 = _DAT_11307e040;
  dVar4 = *(double *)(unaff_x20 + lVar2);
  dVar3 = 0.0;
  if (0.0 < dVar4) {
    _swift_beginAccess(unaff_x20 + _DAT_11307e040,auStack_60,0,0);
    if ((0.0 < *(double *)(unaff_x20 + lVar1)) &&
       (dVar3 = dVar4 - *(double *)(unaff_x20 + lVar1), dVar3 <= 0.0)) {
      dVar3 = 0.0;
    }
  }
  return dVar3;
}



/* Entry: 10448f178; end: 10448f287; -[SCSnapTokenMetricsInfo networkTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10448f178(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11307e048;
  _swift_beginAccess(param_1 + _DAT_11307e048,auStack_48,0,0);
  lVar1 = _DAT_11307e040;
  dVar4 = *(double *)(param_1 + lVar2);
  dVar3 = 0.0;
  if (0.0 < dVar4) {
    _swift_beginAccess(param_1 + _DAT_11307e040,auStack_60,0,0);
    if ((0.0 < *(double *)(param_1 + lVar1)) &&
       (dVar3 = dVar4 - *(double *)(param_1 + lVar1), dVar3 <= 0.0)) {
      dVar3 = 0.0;
    }
  }
  return dVar3;
}



/* Entry: 10448f288; end: 10448f31f; -[SCSnapTokenMetricsInfo responseProcessingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10448f288(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e048;
  _swift_beginAccess(param_1 + _DAT_11307e048,auStack_48,0,0);
  dVar2 = 0.0;
  if (0.0 < *(double *)(param_1 + lVar1)) {
    _objc_retain(0);
    _CACurrentMediaTime();
    lVar1 = _DAT_11307e040;
    _swift_beginAccess(param_1 + _DAT_11307e040,auStack_60,0,0);
    dVar3 = *(double *)(param_1 + lVar1);
    _objc_release(param_1);
    dVar2 = dVar2 - dVar3;
  }
  return dVar2;
}



/* Entry: 10448f320; end: 10448f37b; -[SCSnapTokenMetricsInfo init] */

void FUN_10448f320(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenServices.SnapTokenMetricsInfo",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10448f34c);
  (*pcVar1)();
}



/* Entry: 10448f37c; end: 10448f39f;  */

void FUN_10448f37c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10448f3a0; end: 10448f3af; -[_TtC17SnapTokenServices17SnapTokenServices internalManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448f3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e0b0));
  return;
}



/* Entry: 10448f3b0; end: 10448f3bf; -[_TtC17SnapTokenServices17SnapTokenServices blizzardTokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448f3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e0c0));
  return;
}



/* Entry: 10448f3c0; end: 10448f433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e0b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e0b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307e0c0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10448f434; end: 10448f493; -[_TtC17SnapTokenServices17SnapTokenServices init] */

void FUN_10448f434(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenServices.SnapTokenServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10448f460);
  (*pcVar1)();
}



/* Entry: 10448f494; end: 10448f4db; -[_TtC17SnapTokenServices17SnapTokenServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448f494(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307e0b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307e0b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e0c0));
  return;
}



/* Entry: 10448f4dc; end: 10448f513;  */

void FUN_10448f4dc(undefined8 param_1)

{
  if (lRam000000011307e148 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80bbe8);
  return;
}



/* Entry: 10448f514; end: 10448f6c7;  */

long * FUN_10448f514(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    lVar9 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar9;
    lVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    lVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar2;
    lVar3 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar3;
    *(short *)(param_1 + 10) = (short)param_2[10];
    iVar5 = *(int *)(param_3 + 0x34);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x10);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(lVar3);
    (*pcVar11)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    iVar5 = *(int *)(param_3 + 0x3c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    iVar5 = *(int *)(param_3 + 0x44);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    (*pcVar11)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    lVar9 = (long)*(int *)(param_3 + 0x48);
    lVar7 = (long)param_2 + lVar9;
    (**(code **)(lVar10 + 0x30))(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10448f6c8; end: 10448f783;  */

void FUN_10448f6c8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  iVar1 = *(int *)(param_2 + 0x34);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(param_1 + iVar1,lVar2);
  (*pcVar4)(param_1 + *(int *)(param_2 + 0x44),lVar2);
  iVar1 = *(int *)(param_2 + 0x48);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (*pcVar4)(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x4c)));
  return;
}



/* Entry: 10448f784; end: 10448fb2f;  */

undefined8 * FUN_10448f784(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  iVar6 = *(int *)(param_3 + 0x34);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar7 + -8);
  pcVar11 = *(code **)(lVar10 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar11)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
  iVar6 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
  iVar6 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  (*pcVar11)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
  lVar9 = (long)*(int *)(param_3 + 0x48);
  lVar8 = (long)param_2 + lVar9;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar7);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar7);
  }
  else {
    lVar8 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10448fb30; end: 10448fc63;  */

undefined8 * FUN_10448fb30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  uVar7 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  iVar1 = *(int *)(param_3 + 0x34);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x20);
  (*pcVar5)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  (*pcVar5)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar6 = (long)*(int *)(param_3 + 0x48);
  lVar3 = (long)param_2 + lVar6;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (*pcVar5)((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  return param_1;
}



/* Entry: 10448fc64; end: 10448fe2b;  */

undefined8 * FUN_10448fc64(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  uVar5 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  iVar1 = *(int *)(param_3 + 0x34);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x28);
  (*pcVar9)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  (*pcVar9)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  lVar7 = (long)*(int *)(param_3 + 0x48);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar6 = (long)param_1 + lVar7;
  (*pcVar10)(lVar6,1,lVar3);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar10)(lVar4,1,lVar3);
  if ((int)lVar6 == 0) {
    if ((int)lVar4 == 0) {
      (*pcVar9)((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_10448fde4;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_10448fde4;
  }
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
  ;
LAB_10448fde4:
  lVar6 = (long)*(int *)(param_3 + 0x4c);
  uVar5 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Entry: 10448fe2c; end: 10448fe43;  */

void FUN_10448fe2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10448fe44; end: 10448ff17;  */

void FUN_10448fe44(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR___sBbWV_11034d660;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a8 = PTR___sBbWV_11034d660 + 0x40;
  puStack_a0 = &UNK_10dd08208;
  puStack_98 = &UNK_10dd08208;
  puStack_90 = &UNK_10dd08208;
  puStack_78 = &UNK_10dd08220;
  puStack_70 = &UNK_10dd08220;
  lVar3 = 0x13f;
  puStack_b0 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puStack_a8;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar3 + -8) + 0x40;
    lVar3 = 0x13f;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    lStack_48 = lStack_68;
    func_0x0001000776dc();
    if (param_2 < 0x40) {
      lStack_40 = *(long *)(lVar3 + -8) + 0x40;
      puStack_38 = puVar2 + 0x40;
      _swift_initStructMetadata(param_1,0x100,0x10,&puStack_b0,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10448ff18; end: 10448ff2b;  */

bool FUN_10448ff18(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10448ff2c; end: 104490003;  */

void FUN_10448ff2c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104490004; end: 104490023;  */

void FUN_104490004(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104490024; end: 104490063;  */

void FUN_104490024(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08240;
  _swift_getWitnessTable(&UNK_10dd08240,&UNK_110778f50);
  puRam000000011307e1b8 = puVar1;
  return;
}



/* Entry: 104490064; end: 104490073;  */

undefined1  [16] FUN_104490064(void)

{
  return ZEXT816(0x110778f50);
}



/* Entry: 104490074; end: 1044900bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490074(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e1c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044900c0; end: 10449011b; -[SCMemoriesCRFeaturedStoryManagerServices init] */

void FUN_1044900c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMemoriesCRFeaturedStoryManagerServices.SCMemoriesCRFeaturedStoryManagerServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044900ec);
  (*pcVar1)();
}



/* Entry: 10449011c; end: 10449012b; -[SCMemoriesCRFeaturedStoryManagerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449011c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e1c0));
  return;
}



/* Entry: 10449012c; end: 10449013b; -[SCMemoriesCRFeaturedStory memoriesCRFeaturedStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10449012c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307e1f0);
}



/* Entry: 10449013c; end: 10449018b; -[SCMemoriesCRFeaturedStory phAssets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449013c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e1f8);
  func_0x0001011733e8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10449018c; end: 104490197; -[SCMemoriesCRFeaturedStory title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449018c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e200);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e200))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104490198; end: 1044901a3; -[SCMemoriesCRFeaturedStory subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490198(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e208);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e208))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044901a4; end: 1044901af; -[SCMemoriesCRFeaturedStory identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044901a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e210);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e210))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044901b0; end: 1044901f7;  */

void FUN_1044901b0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044901f8; end: 104490207; -[SCMemoriesCRFeaturedStory entryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044901f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307e218);
}



/* Entry: 104490208; end: 104490213; -[SCMemoriesCRFeaturedStory viewedAssetIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490208(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e220);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104490214; end: 104490223; -[SCMemoriesCRFeaturedStory seenInCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104490214(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307e228);
}



/* Entry: 104490224; end: 104490233; -[SCMemoriesCRFeaturedStory isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104490224(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307e230);
}



/* Entry: 104490234; end: 10449023f; -[SCMemoriesCRFeaturedStory activationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490234(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813ac8,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104490240; end: 10449024f; -[SCMemoriesCRFeaturedStory priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104490240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813ad0);
}



/* Entry: 104490250; end: 10449025f; -[SCMemoriesCRFeaturedStory lastSyncedTimeTimeIntervalSince1970] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104490250(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813ad8);
}



/* Entry: 104490260; end: 10449026f; -[SCMemoriesCRFeaturedStory entrySource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104490260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813ae0);
}



/* Entry: 104490270; end: 10449027b; -[SCMemoriesCRFeaturedStory referenceDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490270(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813ae8,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10449027c; end: 10449031f;  */

void FUN_10449027c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + *param_3,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104490320; end: 1044903f7; -[SCMemoriesCRFeaturedStory expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490320(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000104492838(param_1 + _DAT_113813af0,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044903f8; end: 104490403; -[SCMemoriesCRFeaturedStory snapFeedViewedAssetIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044903f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113813af8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104490404; end: 104490447;  */

void FUN_104490404(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104490448; end: 1044908bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104490448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e1f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307e1f8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e200);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e208);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e210);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11307e218) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11307e220) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11307e228) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11307e230) = param_12._1_1_;
  lVar2 = _DAT_113813ac8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar5 = *(code **)(lVar6 + 0x10);
  (*pcVar5)(unaff_x20 + lVar2,param_14,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_113813ad0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113813ad8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113813ae0) = param_16;
  (*pcVar5)(unaff_x20 + _DAT_113813ae8,param_17,lVar3);
  func_0x000104492838(param_18,unaff_x20 + _DAT_113813af0,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_113813af8) = param_19;
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x0001044927f8(param_18,0x112d373d8,&UNK_10d9014c0);
  pcVar5 = *(code **)(lVar6 + 8);
  (*pcVar5)(param_17,lVar3);
  (*pcVar5)(param_14,lVar3);
  return puVar4;
}



/* Entry: 1044908bc; end: 104490aef; -[SCMemoriesCRFeaturedStory initWithMemoriesCRFeaturedStoryType:phAssets:title:subtitle:identifier:entryType:viewedAssetIds:seenInCarousel:isHidden:activationDate:priority:lastSyncedTimeTimeIntervalSince1970:entrySource:referenceDate:expirationDate:snapFeedViewedAssetIds:] */

void FUN_1044908bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,uint param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined8 param_18)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [8];
  long alStack_128 [7];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lStack_b8 = param_17;
  uStack_b0 = param_18;
  uStack_98 = param_11 & 0xff;
  uStack_94 = param_11 >> 8 & 0xff;
  uStack_a8 = param_14;
  uStack_a0 = param_15;
  uStack_c8 = param_13;
  uStack_c0 = param_16;
  uStack_d8 = param_10;
  lVar2 = 0x112d373d8;
  uStack_90 = param_4;
  uStack_88 = param_9;
  uStack_80 = param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_f0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12;
  uVar3 = 0;
  func_0x0001011733e8();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  uStack_d0 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_e8 = uVar3;
  uStack_e0 = param_6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  uVar6 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  uVar4 = uStack_d8;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (uStack_d8,PTR___sSSN_11034da80);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar10,uStack_c8);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar9,uStack_c0);
  bVar1 = lStack_b8 == 0;
  if (!bVar1) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar7);
  }
  (**(code **)(lVar8 + 0x38))(puVar7,bVar1,1,lVar2);
  uVar5 = uStack_b0;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (uStack_b0,PTR___sSSN_11034da80);
  *(undefined1 **)(lVar10 + -0x18) = puVar7;
  *(undefined8 *)(lVar10 + -0x10) = uVar5;
  *(long *)(lVar10 + -0x20) = lVar9;
  *(undefined8 *)(lVar10 + -0x28) = uStack_a0;
  uVar5 = uStack_a8;
  *(long *)(lVar10 + -0x38) = lVar10;
  *(undefined8 *)(lVar10 + -0x30) = uVar5;
  *(char *)(lVar10 + -0x3f) = (char)uStack_94;
  *(char *)(lVar10 + -0x40) = (char)uStack_98;
  *(undefined8 *)(lVar10 + -0x48) = uVar4;
  *(undefined8 *)(lVar10 + -0x50) = uStack_88;
  func_0x000104490684(param_1,uStack_90,uStack_d0,uStack_e0,uStack_e8,param_7,uVar3,param_8,uVar6);
  return;
}



/* Entry: 104490af0; end: 104490b1f;  */

void FUN_104490af0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104490b20(param_1);
  return;
}



/* Entry: 104490b20; end: 104490d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104490b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long unaff_x20;
  code *pcVar13;
  undefined8 uVar14;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11307e1f0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e1f8) = uVar2;
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e200);
  *puVar1 = param_1[2];
  puVar1[1] = uVar3;
  uVar4 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e208);
  *puVar1 = param_1[4];
  puVar1[1] = uVar4;
  uVar5 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e210);
  *puVar1 = param_1[6];
  puVar1[1] = uVar5;
  uVar6 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11307e218) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11307e220) = uVar6;
  *(undefined1 *)(unaff_x20 + _DAT_11307e228) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(unaff_x20 + _DAT_11307e230) = *(undefined1 *)((long)param_1 + 0x51);
  lVar10 = 0;
  FUN_10448f4dc();
  lVar9 = _DAT_113813ac8;
  iVar7 = *(int *)(lVar10 + 0x34);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  pcVar13 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
  (*pcVar13)(unaff_x20 + lVar9,(long)param_1 + (long)iVar7,lVar11);
  *(undefined8 *)(unaff_x20 + _DAT_113813ad0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
  *(undefined8 *)(unaff_x20 + _DAT_113813ad8) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  *(undefined8 *)(unaff_x20 + _DAT_113813ae0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x40));
  (*pcVar13)(unaff_x20 + _DAT_113813ae8,(long)param_1 + (long)*(int *)(lVar10 + 0x44),lVar11);
  func_0x000104492838((long)param_1 + (long)*(int *)(lVar10 + 0x48),unaff_x20 + _DAT_113813af0,
                      0x112d373d8,&UNK_10d9014c0);
  uVar14 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x4c));
  *(undefined8 *)(unaff_x20 + _DAT_113813af8) = uVar14;
  puVar8 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar14);
  puVar12 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar12,puVar8);
  FUN_104490d30(param_1);
  return puVar12;
}



/* Entry: 104490d30; end: 104490d6b;  */

undefined8 FUN_104490d30(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10448f4dc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104490d6c; end: 104490d6f; -[SCMemoriesCRFeaturedStory copyWithZone:] */

void FUN_104490d6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104490d70; end: 104490de7; -[SCMemoriesCRFeaturedStory description] */

void FUN_104490d70(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10448f4dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104490de8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_104490d30(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104490de8; end: 104490fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104490de8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307e1f8);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11307e1f0);
  param_1[1] = uVar8;
  uVar1 = ((undefined8 *)(param_2 + _DAT_11307e200))[1];
  param_1[2] = *(undefined8 *)(param_2 + _DAT_11307e200);
  param_1[3] = uVar1;
  uVar2 = ((undefined8 *)(param_2 + _DAT_11307e208))[1];
  param_1[4] = *(undefined8 *)(param_2 + _DAT_11307e208);
  param_1[5] = uVar2;
  uVar3 = ((undefined8 *)(param_2 + _DAT_11307e210))[1];
  param_1[6] = *(undefined8 *)(param_2 + _DAT_11307e210);
  param_1[7] = uVar3;
  uVar10 = *(undefined8 *)(param_2 + _DAT_11307e220);
  param_1[8] = *(undefined8 *)(param_2 + _DAT_11307e218);
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + _DAT_11307e228);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)(param_2 + _DAT_11307e230);
  lVar5 = _DAT_113813ac8;
  lVar6 = 0;
  FUN_10448f4dc();
  iVar4 = *(int *)(lVar6 + 0x34);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
  (*pcVar9)((long)param_1 + (long)iVar4,param_2 + lVar5,lVar7);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38)) =
       *(undefined8 *)(param_2 + _DAT_113813ad0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c)) =
       *(undefined8 *)(param_2 + _DAT_113813ad8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40)) =
       *(undefined8 *)(param_2 + _DAT_113813ae0);
  (*pcVar9)((long)param_1 + (long)*(int *)(lVar6 + 0x44),param_2 + _DAT_113813ae8,lVar7);
  func_0x000104492838(param_2 + _DAT_113813af0,(long)param_1 + (long)*(int *)(lVar6 + 0x48),
                      0x112d373d8,&UNK_10d9014c0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113813af8);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _objc_release(param_2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x4c)) = uVar11;
  return;
}



/* Entry: 104490fd4; end: 10449101b; -[SCMemoriesCRFeaturedStory init] */

void FUN_104490fd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMemoriesCRFeaturedStoryManagerServices/MemoriesCRFeaturedStoryWrapper.swift",0x4d,2,
             0x72,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10449101c);
  (*pcVar1)();
}



/* Entry: 10449101c; end: 104491037; +[SCMemoriesCRFeaturedStoryBuilder memoriesCRFeaturedStory] */

void FUN_10449101c(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104491038; end: 104491077; +[SCMemoriesCRFeaturedStoryBuilder memoriesCRFeaturedStoryWithExistingMemoriesCRFeaturedStory:] */

void FUN_104491038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044920a0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104491078; end: 10449108f; -[SCMemoriesCRFeaturedStoryBuilder withMemoriesCRFeaturedStoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e238);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104491090; end: 1044910eb; -[SCMemoriesCRFeaturedStoryBuilder withPhAssets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001011733e8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307e240);
  *(undefined8 *)(param_1 + _DAT_11307e240) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044910ec; end: 1044910f7; -[SCMemoriesCRFeaturedStoryBuilder withTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044910ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e248);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044910f8; end: 104491103; -[SCMemoriesCRFeaturedStoryBuilder withSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044910f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e250);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104491104; end: 10449110f; -[SCMemoriesCRFeaturedStoryBuilder withIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e258);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104491110; end: 10449115f;  */

void FUN_104491110(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104491160; end: 104491177; -[SCMemoriesCRFeaturedStoryBuilder withEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e260);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104491178; end: 104491183; -[SCMemoriesCRFeaturedStoryBuilder withViewedAssetIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307e268);
  *(undefined8 *)(param_1 + _DAT_11307e268) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104491184; end: 104491193; -[SCMemoriesCRFeaturedStoryBuilder withSeenInCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491184(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307e270) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104491194; end: 1044911a3; -[SCMemoriesCRFeaturedStoryBuilder withIsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491194(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307e278) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044911a4; end: 1044911af; -[SCMemoriesCRFeaturedStoryBuilder withActivationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044911a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_3);
  (**(code **)(lVar4 + 0x20))(puVar2,lVar3,lVar1);
  (**(code **)(lVar4 + 0x38))(puVar2,0,1,lVar1);
  lVar1 = _DAT_11307e280;
  _swift_beginAccess(param_1 + _DAT_11307e280,auStack_68,0x21,0);
  lVar3 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar2,param_1 + lVar1);
  _swift_endAccess(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1044911b0; end: 1044911c7; -[SCMemoriesCRFeaturedStoryBuilder withPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044911b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e288);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044911c8; end: 1044911df; -[SCMemoriesCRFeaturedStoryBuilder withLastSyncedTimeTimeIntervalSince1970:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044911c8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11307e290);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044911e0; end: 1044911f7; -[SCMemoriesCRFeaturedStoryBuilder withEntrySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044911e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e298);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044911f8; end: 104491203; -[SCMemoriesCRFeaturedStoryBuilder withReferenceDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044911f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_3);
  (**(code **)(lVar4 + 0x20))(puVar2,lVar3,lVar1);
  (**(code **)(lVar4 + 0x38))(puVar2,0,1,lVar1);
  lVar1 = _DAT_11307e2a0;
  _swift_beginAccess(param_1 + _DAT_11307e2a0,auStack_68,0x21,0);
  lVar3 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar2,param_1 + lVar1);
  _swift_endAccess(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104491204; end: 10449132f;  */

void FUN_104491204(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_3);
  (**(code **)(lVar4 + 0x20))(puVar2,lVar3,lVar1);
  (**(code **)(lVar4 + 0x38))(puVar2,0,1,lVar1);
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_68,0x21,0);
  lVar1 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar2,param_1 + lVar3);
  _swift_endAccess(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104491330; end: 10449143b; -[SCMemoriesCRFeaturedStoryBuilder withExpirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_11307e2a8;
  _swift_beginAccess(param_1 + _DAT_11307e2a8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9c6c(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  FUN_1044927f8(puVar3,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10449143c; end: 104491447; -[SCMemoriesCRFeaturedStoryBuilder withSnapFeedViewedAssetIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10449143c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307e2b0);
  *(undefined8 *)(param_1 + _DAT_11307e2b0) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104491448; end: 10449149b;  */

void FUN_104491448(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  _objc_retain(param_1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10449149c; end: 104491bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10449149c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 auStack_150 [8];
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  puVar19 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar19 - extraout_x12;
  plVar4 = (long *)0x0;
  __s10Foundation4DateVMa();
  lVar17 = plVar4[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_00;
  if (*(char *)((undefined8 *)((long)unaff_x20 + _DAT_11307e238) + 1) == '\x01') {
    uVar5 = 0xd00000000000001b;
    uVar8 = 0x800000010f202430;
    goto LAB_104491660;
  }
  lVar15 = *(long *)((long)unaff_x20 + _DAT_11307e240);
  if (lVar15 == 0) {
    uVar5 = 0x7374657373416870;
  }
  else {
    lVar10 = ((undefined8 *)((long)unaff_x20 + _DAT_11307e248))[1];
    if (lVar10 == 0) {
      uVar5 = 0x656c746974;
      uVar8 = 0xe500000000000000;
      goto LAB_104491660;
    }
    lVar11 = ((undefined8 *)((long)unaff_x20 + _DAT_11307e250))[1];
    if (lVar11 != 0) {
      lVar12 = ((undefined8 *)((long)unaff_x20 + _DAT_11307e258))[1];
      if (lVar12 == 0) {
        uVar5 = 0x696669746e656469;
        uVar8 = 0xea00000000007265;
      }
      else if (*(char *)((undefined8 *)((long)unaff_x20 + _DAT_11307e260) + 1) == '\x01') {
        uVar5 = 0x7079547972746e65;
        uVar8 = 0xe900000000000065;
      }
      else {
        lVar9 = *(long *)((long)unaff_x20 + _DAT_11307e268);
        if (lVar9 == 0) {
          uVar5 = 0x7341646577656976;
          uVar8 = 0xee00736449746573;
        }
        else {
          uStack_118 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e238);
          uStack_110 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e248);
          uStack_100 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e250);
          uStack_f8 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e258);
          uStack_f0 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e260);
          uStack_e4 = (uint)*(byte *)((long)unaff_x20 + _DAT_11307e270);
          if (uStack_e4 == 2) {
            *(undefined1 *)((long)unaff_x20 + _DAT_11307e270) = 0;
          }
          uStack_104 = (uint)*(byte *)((long)unaff_x20 + _DAT_11307e278);
          if (uStack_104 == 2) {
            *(undefined1 *)((long)unaff_x20 + _DAT_11307e278) = 0;
          }
          lVar3 = _DAT_11307e280;
          lStack_e0 = lVar9;
          lStack_d8 = lVar12;
          lStack_d0 = lVar11;
          lStack_c8 = lVar10;
          _swift_beginAccess((long)unaff_x20 + _DAT_11307e280,auStack_80,0,0);
          func_0x000104492838((long)unaff_x20 + lVar3,lVar18,0x112d373d8,&UNK_10d9014c0);
          pcVar16 = *(code **)(lVar17 + 0x30);
          lVar10 = lVar18;
          (*pcVar16)(lVar18,1,plVar4);
          if ((int)lVar10 != 1) {
            pcStack_120 = *(code **)(lVar17 + 0x20);
            (*pcStack_120)(lVar14,lVar18,plVar4);
            puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11307e288);
            if (*(char *)(puVar1 + 1) == '\x01') {
              uStack_128 = 0;
              *puVar1 = 0;
              *(undefined1 *)(puVar1 + 1) = 0;
            }
            else {
              uStack_128 = *puVar1;
            }
            puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_11307e290);
            if (*(char *)(puVar1 + 1) == '\x01') {
              uVar5 = 0;
              *puVar1 = 0;
              *(undefined1 *)(puVar1 + 1) = 0;
            }
            else {
              uVar5 = *puVar1;
            }
            lVar18 = _DAT_11307e2a0;
            if (*(char *)((undefined8 *)((long)unaff_x20 + _DAT_11307e298) + 1) == '\x01') {
              uVar5 = 0x756f537972746e65;
              uVar8 = 0xeb00000000656372;
            }
            else {
              uStack_138 = *(undefined8 *)((long)unaff_x20 + _DAT_11307e298);
              uStack_130 = uVar5;
              _swift_beginAccess((long)unaff_x20 + _DAT_11307e2a0,auStack_98,0,0);
              func_0x000104492838((long)unaff_x20 + lVar18,puVar19,0x112d373d8,&UNK_10d9014c0);
              puVar6 = puVar19;
              (*pcVar16)(puVar19,1,plVar4);
              if ((int)puVar6 != 1) {
                (*pcStack_120)(lVar13,puVar19,plVar4);
                if (*(long *)((long)unaff_x20 + _DAT_11307e2b0) != 0) {
                  lStack_140 = _DAT_11307e2a8;
                  pcStack_120 = (code *)*(long *)((long)unaff_x20 + _DAT_11307e2b0);
                  _swift_beginAccess((long)unaff_x20 + _DAT_11307e2a8,auStack_b0,0,0);
                  lVar18 = 0;
                  FUN_10449260c();
                  lStack_148 = lVar18;
                  _objc_allocWithZone();
                  *(undefined8 *)(lVar18 + _DAT_11307e1f0) = uStack_118;
                  *(long *)(lVar18 + _DAT_11307e1f8) = lVar15;
                  puVar1 = (undefined8 *)(lVar18 + _DAT_11307e200);
                  *puVar1 = uStack_110;
                  puVar1[1] = lStack_c8;
                  puVar1 = (undefined8 *)(lVar18 + _DAT_11307e208);
                  *puVar1 = uStack_100;
                  puVar1[1] = lStack_d0;
                  puVar1 = (undefined8 *)(lVar18 + _DAT_11307e210);
                  *puVar1 = uStack_f8;
                  puVar1[1] = lStack_d8;
                  *(undefined8 *)(lVar18 + _DAT_11307e218) = uStack_f0;
                  *(long *)(lVar18 + _DAT_11307e220) = lStack_e0;
                  *(byte *)(lVar18 + _DAT_11307e228) = (byte)uStack_e4 & 1;
                  *(byte *)(lVar18 + _DAT_11307e230) = (byte)uStack_104 & 1;
                  pcVar16 = *(code **)(lVar17 + 0x10);
                  (*pcVar16)(lVar18 + _DAT_113813ac8,lVar14,plVar4);
                  *(undefined8 *)(lVar18 + _DAT_113813ad0) = uStack_128;
                  *(undefined8 *)(lVar18 + _DAT_113813ad8) = uStack_130;
                  *(undefined8 *)(lVar18 + _DAT_113813ae0) = uStack_138;
                  (*pcVar16)(lVar18 + _DAT_113813ae8,lVar13,plVar4);
                  func_0x000104492838((long)unaff_x20 + lStack_140,lVar18 + _DAT_113813af0,
                                      0x112d373d8,&UNK_10d9014c0);
                  pcVar16 = pcStack_120;
                  *(code **)(lVar18 + _DAT_113813af8) = pcStack_120;
                  puVar2 = PTR_s_init_1125d9248;
                  lStack_b8 = lStack_148;
                  lStack_c0 = lVar18;
                  _swift_bridgeObjectRetain(lVar15);
                  _swift_bridgeObjectRetain(lStack_c8);
                  _swift_bridgeObjectRetain(lStack_d0);
                  _swift_bridgeObjectRetain(lStack_d8);
                  _swift_bridgeObjectRetain(lStack_e0);
                  _swift_bridgeObjectRetain(pcVar16);
                  plVar7 = &lStack_c0;
                  _objc_msgSendSuper2(plVar7,puVar2);
                  pcVar16 = *(code **)(lVar17 + 8);
                  (*pcVar16)(lVar13,plVar4);
                  (*pcVar16)(lVar14,plVar4);
                  return plVar7;
                }
                FUN_104492454(0xd000000000000016,0x800000010f202450);
                _swift_willThrow();
                pcVar16 = *(code **)(lVar17 + 8);
                (*pcVar16)(lVar13,plVar4);
                (*pcVar16)(lVar14,plVar4);
                return plVar4;
              }
              func_0x0001044927f8(puVar19,0x112d373d8,&UNK_10d9014c0);
              uVar5 = 0x636e657265666572;
              uVar8 = 0xed00006574614465;
            }
            FUN_104492454(uVar5,uVar8);
            _swift_willThrow();
            (**(code **)(lVar17 + 8))(lVar14,plVar4);
            return unaff_x20;
          }
          func_0x0001044927f8(lVar18,0x112d373d8,&UNK_10d9014c0);
          uVar5 = 0x6974617669746361;
          uVar8 = 0xee00657461446e6f;
        }
      }
      goto LAB_104491660;
    }
    uVar5 = 0x656c746974627573;
  }
  uVar8 = 0xe800000000000000;
LAB_104491660:
  FUN_104492454(uVar5,uVar8);
  _swift_willThrow();
  return unaff_x20;
}



/* Entry: 104491bf0; end: 104491c5b; -[SCMemoriesCRFeaturedStoryBuilder build] */

/* WARNING: Removing unreachable block (ram,0x000104491c3c) */

void FUN_104491bf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10449149c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104491c5c; end: 104491ceb; -[SCMemoriesCRFeaturedStoryBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000104491c98) */
/* WARNING: Removing unreachable block (ram,0x000104491ccc) */
/* WARNING: Removing unreachable block (ram,0x000104491c9c) */

void FUN_104491c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10449149c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104491cec; end: 104491e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491cec(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e238);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e240) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e248);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e250);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e258);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e260);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e268) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11307e270) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_11307e278) = 2;
  lVar2 = _DAT_11307e280;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e288);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e298);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (*pcVar4)(unaff_x20 + _DAT_11307e2a0,1,1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_11307e2a8,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_11307e2b0) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104491e7c; end: 104491e9b; -[SCMemoriesCRFeaturedStoryBuilder init] */

void FUN_104491e7c(void)

{
  FUN_104491cec();
  return;
}



/* Entry: 104491e9c; end: 104491e9f;  */

void FUN_104491e9c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104491ea0; end: 104491f83; -[SCMemoriesCRFeaturedStoryBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491ea0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e240));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e248 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e250 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e258 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e268));
  FUN_1044927f8(param_1 + _DAT_11307e280,0x112d373d8,&UNK_10d9014c0);
  FUN_1044927f8(param_1 + _DAT_11307e2a0,0x112d373d8,&UNK_10d9014c0);
  FUN_1044927f8(param_1 + _DAT_11307e2a8,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307e2b0));
  return;
}



/* Entry: 104491f84; end: 104491fb7;  */

void FUN_104491f84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104491fb8; end: 10449209f; -[SCMemoriesCRFeaturedStory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104491fb8(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e1f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e200 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e208 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e210 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307e220));
  lVar1 = _DAT_113813ac8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*pcVar3)(param_1 + lVar1,lVar2);
  (*pcVar3)(param_1 + _DAT_113813ae8,lVar2);
  FUN_1044927f8(param_1 + _DAT_113813af0,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113813af8));
  return;
}



/* Entry: 1044920a0; end: 104492453;  */

/* WARNING: Possible PIC construction at 0x000104492120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104492124) */

void FUN_1044920a0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    func_0x000104492704(0);
    _objc_allocWithZone();
  }
  else {
    func_0x000104492704(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104492454; end: 10449260b;  */

undefined * FUN_104492454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  FUN_1044927f8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}


