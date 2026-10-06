/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045272c0; end: 104527313;  */

undefined8 * FUN_1045272c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 104527314; end: 1045273db;  */

int FUN_104527314(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045273dc; end: 1045273f3; -[SCShakeConfiguration promptMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045273dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113083b70);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1045273f4; end: 10452740b; -[SCShakeConfiguration setPromptMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045273f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083b70);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10452740c; end: 10452744b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10452740c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b70;
  _swift_beginAccess(unaff_x20 + _DAT_113083b70,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1045287f4;
  return auVar2;
}



/* Entry: 10452744c; end: 104527463; -[SCShakeConfiguration promptReportButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452744c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113083b78);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527464; end: 10452747b; -[SCShakeConfiguration setPromptReportButtonTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527464(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083b78);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10452747c; end: 1045274bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10452747c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b78;
  _swift_beginAccess(unaff_x20 + _DAT_113083b78,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1045274bc;
  return auVar2;
}



/* Entry: 1045274bc; end: 1045274bf;  */

void FUN_1045274bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1045274c0; end: 104527543; -[SCShakeConfiguration promptTweaksButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1045274c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083b80;
  _swift_beginAccess(param_1 + _DAT_113083b80,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104527544; end: 1045275df; -[SCShakeConfiguration setPromptTweaksButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527544(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083b80;
  _swift_beginAccess(param_1 + _DAT_113083b80,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1045275e0; end: 10452761f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1045275e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b80;
  _swift_beginAccess(unaff_x20 + _DAT_113083b80,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045287f8;
  return auVar2;
}



/* Entry: 104527620; end: 1045276a3; -[SCShakeConfiguration promptABOverrideButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104527620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083b88;
  _swift_beginAccess(param_1 + _DAT_113083b88,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1045276a4; end: 10452773f; -[SCShakeConfiguration setPromptABOverrideButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045276a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083b88;
  _swift_beginAccess(param_1 + _DAT_113083b88,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104527740; end: 10452777f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527740(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b88;
  _swift_beginAccess(unaff_x20 + _DAT_113083b88,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1045287fc;
  return auVar2;
}



/* Entry: 104527780; end: 104527803; -[SCShakeConfiguration promptFeedbackButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104527780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083b90;
  _swift_beginAccess(param_1 + _DAT_113083b90,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104527804; end: 10452789f; -[SCShakeConfiguration setPromptFeedbackButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527804(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083b90;
  _swift_beginAccess(param_1 + _DAT_113083b90,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1045278a0; end: 1045278df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1045278a0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b90;
  _swift_beginAccess(unaff_x20 + _DAT_113083b90,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528800;
  return auVar2;
}



/* Entry: 1045278e0; end: 104527963; -[SCShakeConfiguration promptCofTweaksButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1045278e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083b98;
  _swift_beginAccess(param_1 + _DAT_113083b98,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104527964; end: 1045279ff; -[SCShakeConfiguration setPromptCofTweaksButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527964(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083b98;
  _swift_beginAccess(param_1 + _DAT_113083b98,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104527a00; end: 104527a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527a00(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083b98;
  _swift_beginAccess(unaff_x20 + _DAT_113083b98,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528804;
  return auVar2;
}



/* Entry: 104527a40; end: 104527ac3; -[SCShakeConfiguration promptNetworkSpeedTestButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104527a40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083ba0;
  _swift_beginAccess(param_1 + _DAT_113083ba0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104527ac4; end: 104527b5f; -[SCShakeConfiguration setPromptNetworkSpeedTestButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527ac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083ba0;
  _swift_beginAccess(param_1 + _DAT_113083ba0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104527b60; end: 104527b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527b60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083ba0;
  _swift_beginAccess(unaff_x20 + _DAT_113083ba0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528808;
  return auVar2;
}



/* Entry: 104527ba0; end: 104527bb7; -[SCShakeConfiguration reportDefaultDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527ba0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113083ba8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527bb8; end: 104527bcf; -[SCShakeConfiguration setReportDefaultDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527bb8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083ba8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104527bd0; end: 104527c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527bd0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083ba8;
  _swift_beginAccess(unaff_x20 + _DAT_113083ba8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10452880c;
  return auVar2;
}



/* Entry: 104527c10; end: 104527c27; -[SCShakeConfiguration reportDefaultProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527c10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113083bb0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527c28; end: 104527c3f; -[SCShakeConfiguration setReportDefaultProjectName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527c28(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083bb0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104527c40; end: 104527c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527c40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083bb0;
  _swift_beginAccess(unaff_x20 + _DAT_113083bb0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528810;
  return auVar2;
}



/* Entry: 104527c80; end: 104527c97; -[SCShakeConfiguration reportDefaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527c80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113083bb8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527c98; end: 104527caf; -[SCShakeConfiguration setReportDefaultSubProjectName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527c98(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113083bb8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104527cb0; end: 104527cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527cb0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113083bb8;
  _swift_beginAccess(unaff_x20 + _DAT_113083bb8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528814;
  return auVar2;
}



/* Entry: 104527cf0; end: 104527e23; -[SCShakeConfiguration reportDefaultVideoAttachmentURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527cf0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_113813be0;
  puVar4 = auStack_50 + -extraout_x8;
  _swift_beginAccess(param_1 + _DAT_113813be0,auStack_48,0,0);
  func_0x000100029394(param_1 + lVar1,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527e24; end: 104527f77; -[SCShakeConfiguration setReportDefaultVideoAttachmentURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113813be0;
  _swift_beginAccess(param_1 + _DAT_113813be0,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x0001014522e4(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104527f78; end: 104527fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527f78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813be0;
  _swift_beginAccess(unaff_x20 + _DAT_113813be0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528818;
  return auVar2;
}



/* Entry: 104527fb8; end: 104527fcf; -[SCShakeConfiguration customNavigationTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527fb8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113813be8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104527fd0; end: 104527fe7; -[SCShakeConfiguration setCustomNavigationTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104527fd0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113813be8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104527fe8; end: 104528027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104527fe8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813be8;
  _swift_beginAccess(unaff_x20 + _DAT_113813be8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10452881c;
  return auVar2;
}



/* Entry: 104528028; end: 10452803f; -[SCShakeConfiguration customDescriptionPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528028(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113813bf0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104528040; end: 104528057; -[SCShakeConfiguration setCustomDescriptionPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528040(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113813bf0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104528058; end: 104528097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104528058(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813bf0;
  _swift_beginAccess(unaff_x20 + _DAT_113813bf0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528820;
  return auVar2;
}



/* Entry: 104528098; end: 1045280af; -[SCShakeConfiguration customAttachmentDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528098(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113813bf8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1045280b0; end: 1045280c7; -[SCShakeConfiguration setCustomAttachmentDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045280b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113813bf8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1045280c8; end: 104528107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1045280c8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813bf8;
  _swift_beginAccess(unaff_x20 + _DAT_113813bf8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528824;
  return auVar2;
}



/* Entry: 104528108; end: 10452818b; -[SCShakeConfiguration hideCustomAttachmentButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104528108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113813c00;
  _swift_beginAccess(param_1 + _DAT_113813c00,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10452818c; end: 104528227; -[SCShakeConfiguration setHideCustomAttachmentButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452818c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113813c00;
  _swift_beginAccess(param_1 + _DAT_113813c00,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104528228; end: 104528267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104528228(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813c00;
  _swift_beginAccess(unaff_x20 + _DAT_113813c00,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104528828;
  return auVar2;
}



/* Entry: 104528268; end: 104528273; -[SCShakeConfiguration customFeatureDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528268(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113813c08);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104528274; end: 1045282e7;  */

void FUN_104528274(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1045282e8; end: 1045282f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1045282e8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113813c08);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1045282f4; end: 104528343;  */

undefined1  [16] FUN_1045282f4(long *param_1)

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



/* Entry: 104528344; end: 10452834f; -[SCShakeConfiguration setCustomFeatureDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528344(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113813c08);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104528350; end: 1045283c7;  */

void FUN_104528350(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1045283c8; end: 1045283d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045283c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813c08);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1045283d4; end: 10452842b;  */

void FUN_1045283d4(undefined8 param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10452842c; end: 10452846b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10452842c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113813c08;
  _swift_beginAccess(unaff_x20 + _DAT_113813c08,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10452882c;
  return auVar2;
}



/* Entry: 10452846c; end: 1045285b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452846c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083ba8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083bb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083bb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_113813be0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813be8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813bf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813bf8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813c08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113083b80) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113083b90) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113083b88) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113083b98) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113813c00) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113083ba0) = 0;
  FUN_1045285b8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045285b8; end: 1045285ef;  */

void FUN_1045285b8(undefined8 param_1)

{
  if (lRam0000000113083be8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8127b4);
  return;
}



/* Entry: 1045285f0; end: 10452863f; -[SCShakeConfiguration init] */

void FUN_1045285f0(void)

{
  FUN_10452846c();
  return;
}



/* Entry: 104528640; end: 104528673;  */

void FUN_104528640(void)

{
  FUN_1045285b8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104528674; end: 10452874f; -[SCShakeConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104528674(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083b70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083b78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083ba8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083bb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083bb8 + 8));
  func_0x0001000293e4(param_1 + _DAT_113813be0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813be8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813bf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813bf8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113813c08 + 8))
  ;
  return;
}



/* Entry: 104528750; end: 104528757;  */

void FUN_104528750(void)

{
  if (lRam0000000113083be8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8127b4);
  return;
}



/* Entry: 104528758; end: 1045287f3;  */

void FUN_104528758(long param_1,ulong param_2)

{
  long lVar1;
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
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_b0 = &UNK_10dd14d38;
  puStack_a8 = &UNK_10dd14d38;
  puStack_a0 = &UNK_10dd14d50;
  puStack_98 = &UNK_10dd14d50;
  puStack_90 = &UNK_10dd14d50;
  puStack_88 = &UNK_10dd14d50;
  puStack_80 = &UNK_10dd14d50;
  puStack_78 = &UNK_10dd14d38;
  puStack_70 = &UNK_10dd14d38;
  puStack_68 = &UNK_10dd14d38;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dd14d38;
    puStack_50 = &UNK_10dd14d38;
    puStack_48 = &UNK_10dd14d38;
    puStack_40 = &UNK_10dd14d50;
    puStack_38 = &UNK_10dd14d38;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&puStack_b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1045287f4; end: 10452882f;  */

void FUN_1045287f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104528830; end: 1045288cf;  */

undefined8 FUN_104528830(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 unaff_x20;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  func_0x00010bffc480();
  _objc_release(param_1);
  _objc_release(param_3);
  return unaff_x20;
}



/* Entry: 1045288d0; end: 10452892b;  */

long FUN_1045288d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10452892c; end: 104528a0b;  */

undefined8 * FUN_10452892c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104528a0c; end: 104528a5f;  */

undefined8 * FUN_104528a0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104528a60; end: 104528b2b;  */

int FUN_104528a60(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104528b2c; end: 104528b9f; -[SCShakeLocalizedFeatureName initWithCanonical:localized:] */

void FUN_104528b2c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_104528830(param_3,uVar1,param_4,param_2);
  return;
}



/* Entry: 104528ba0; end: 104529043;  */

long FUN_104528ba0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104529044; end: 104529063; -[_TtC20SCShakeToReportScope22SCInSettingReportScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529044(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113083bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104529064; end: 104529073; -[_TtC20SCShakeToReportScope22SCInSettingReportScope shakeToReportModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083c00));
  return;
}



/* Entry: 104529074; end: 1045290ff; -[_TtC20SCShakeToReportScope22SCInSettingReportScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529074(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083c08;
  _swift_beginAccess(param_1 + _DAT_113083c08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104529100; end: 1045292a3; -[_TtC20SCShakeToReportScope22SCInSettingReportScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083c08;
  _swift_beginAccess(param_1 + _DAT_113083c08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1045292a4; end: 104529383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1045292a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113083c08;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083c08,0);
  *(undefined8 *)(unaff_x20 + _DAT_113083bf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083c00) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 104529384; end: 10452943b; -[_TtC20SCShakeToReportScope22SCInSettingReportScope initWithUIContainer:shakeToReportModel:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_113083c08;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113083c08,0);
  *(undefined8 *)(param_1 + _DAT_113083bf8) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083c00) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakAssign(lVar2,param_5);
  func_0x000100335978();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10452943c; end: 104529497; -[_TtC20SCShakeToReportScope22SCInSettingReportScope init] */

void FUN_10452943c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCShakeToReportScope.SCInSettingReportScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104529468);
  (*pcVar1)();
}



/* Entry: 104529498; end: 104529503; -[_TtC20SCShakeToReportScope22SCInSettingReportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104529498(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113083bf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083c00));
  param_1 = param_1 + _DAT_113083c08;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104529504; end: 10452956f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529504(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100340920();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113083c18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104529570; end: 104529577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529570(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100340920();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083c18) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104529578; end: 1045295c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529578(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083c18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045295c4; end: 1045296cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1045295c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100335978();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113083c08;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113083c08,0);
  *(long *)(lVar4 + _DAT_113083bf8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113083c00) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 1045296cc; end: 104529763; -[_TtC20SCShakeToReportScope30SCInSettingReportScopeServices buildWithUIContainer:shakeToReportModel:delegate:] */

void FUN_1045296cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1045295c4(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104529764; end: 1045297c3; -[_TtC20SCShakeToReportScope30SCInSettingReportScopeServices init] */

void FUN_104529764(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCShakeToReportScope.SCInSettingReportScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104529790);
  (*pcVar1)();
}



/* Entry: 1045297c4; end: 1045297e3; -[_TtC20SCShakeToReportScope30SCInSettingReportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045297c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083c18));
  return;
}



/* Entry: 1045297e4; end: 1045298bf;  */

void FUN_1045297e4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1045298c0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1045298c0; end: 1045298e3;  */

undefined1  [16] FUN_1045298c0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xd) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xc < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1045298e4; end: 104529923;  */

void FUN_1045298e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14e40;
  _swift_getWitnessTable(&UNK_10dd14e40,&UNK_1107847c8);
  puRam0000000113083c70 = puVar1;
  return;
}



/* Entry: 104529924; end: 104529927;  */

void FUN_104529924(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14ee0;
  _swift_getWitnessTable(&UNK_10dd14ee0,&UNK_1107847e8);
  puRam0000000113083c78 = puVar1;
  return;
}



/* Entry: 104529928; end: 104529967;  */

void FUN_104529928(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14ee0;
  _swift_getWitnessTable(&UNK_10dd14ee0,&UNK_1107847e8);
  puRam0000000113083c78 = puVar1;
  return;
}



/* Entry: 104529968; end: 1045299af;  */

undefined1  [16] FUN_104529968(void)

{
  return ZEXT816(0x1107847c8);
}



/* Entry: 1045299b0; end: 1045299cf; -[_TtC20SCShakeToReportScope20SCShakeToReportScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045299b0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113083c80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045299d0; end: 1045299e7; -[_TtC20SCShakeToReportScope20SCShakeToReportScope window] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045299d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083c88;
  _swift_beginAccess(param_1 + _DAT_113083c88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045299e8; end: 1045299f3; -[_TtC20SCShakeToReportScope20SCShakeToReportScope setWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045299e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083c88;
  _swift_beginAccess(param_1 + _DAT_113083c88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1045299f4; end: 104529b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045299f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083c88;
  _swift_beginAccess(unaff_x20 + _DAT_113083c88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104529b40; end: 104529b4f; -[_TtC20SCShakeToReportScope20SCShakeToReportScope showShakePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104529b40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083c90);
}



/* Entry: 104529b50; end: 104529b5b; -[_TtC20SCShakeToReportScope20SCShakeToReportScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104529b50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083c98;
  _swift_beginAccess(param_1 + _DAT_113083c98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104529b5c; end: 104529b9f;  */

void FUN_104529b5c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


