/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0007dd80; end: 0007ddaf;  */

void FUN_0007dd80(void)

{
  FUN_0007ddc0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0007ddb0; end: 0007ddbf;  */

undefined1  [16] FUN_0007ddb0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 0007ddc0; end: 0007dddf;  */

void FUN_0007ddc0(void)

{
  _objc_opt_self(&PTR_PTR_00ac9a20);
  return;
}



/* Entry: 0007dde0; end: 0007dde3;  */

void FUN_0007dde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2530;
  _swift_getWitnessTable(&UNK_007d2530,&UNK_009a2ef8);
  puRam0000000000ae9170 = puVar1;
  return;
}



/* Entry: 0007dde4; end: 0007de23;  */

void FUN_0007dde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2530;
  _swift_getWitnessTable(&UNK_007d2530,&UNK_009a2ef8);
  puRam0000000000ae9170 = puVar1;
  return;
}



/* Entry: 0007de24; end: 0007de33;  */

undefined1  [16] FUN_0007de24(void)

{
  return ZEXT816(0x9a2ef8);
}



/* Entry: 0007de34; end: 0007de43; -[SCSnapTokenMetricsInfo accessType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007de34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae91a0);
}



/* Entry: 0007de44; end: 0007de53; -[SCSnapTokenMetricsInfo isTrySyncFirst] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0007de44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae91a8);
}



/* Entry: 0007de54; end: 0007de63; -[SCSnapTokenMetricsInfo isPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0007de54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae91b0);
}



/* Entry: 0007de64; end: 0007dee7; -[SCSnapTokenMetricsInfo isCacheHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0007de64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91b8;
  _swift_beginAccess(param_1 + _DAT_00ae91b8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 0007dee8; end: 0007df83; -[SCSnapTokenMetricsInfo setIsCacheHit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007dee8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91b8;
  _swift_beginAccess(param_1 + _DAT_00ae91b8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 0007df84; end: 0007dfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007df84(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91b8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f0f4;
  return auVar2;
}



/* Entry: 0007dfc4; end: 0007dfd3; -[SCSnapTokenMetricsInfo operationStartTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007dfc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae91c0);
}



/* Entry: 0007dfd4; end: 0007e057; -[SCSnapTokenMetricsInfo networkStartTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007dfd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91c8;
  _swift_beginAccess(param_1 + _DAT_00ae91c8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0007e058; end: 0007e0f3; -[SCSnapTokenMetricsInfo setNetworkStartTs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e058(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91c8;
  _swift_beginAccess(param_2 + _DAT_00ae91c8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 0007e0f4; end: 0007e133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e0f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91c8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_0007f0e8;
  return auVar2;
}



/* Entry: 0007e134; end: 0007e1b7; -[SCSnapTokenMetricsInfo networkEndTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007e134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91d0;
  _swift_beginAccess(param_1 + _DAT_00ae91d0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0007e1b8; end: 0007e253; -[SCSnapTokenMetricsInfo setNetworkEndTs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e1b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91d0;
  _swift_beginAccess(param_2 + _DAT_00ae91d0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 0007e254; end: 0007e293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e254(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91d0;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91d0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f0ec;
  return auVar2;
}



/* Entry: 0007e294; end: 0007e317; -[SCSnapTokenMetricsInfo keychainLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007e294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91d8;
  _swift_beginAccess(param_1 + _DAT_00ae91d8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0007e318; end: 0007e3b3; -[SCSnapTokenMetricsInfo setKeychainLatency:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e318(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91d8;
  _swift_beginAccess(param_2 + _DAT_00ae91d8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 0007e3b4; end: 0007e3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e3b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91d8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91d8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f0f0;
  return auVar2;
}



/* Entry: 0007e3f4; end: 0007e477; -[SCSnapTokenMetricsInfo lastFetchTokenAgeInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007e3f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91e0;
  _swift_beginAccess(param_1 + _DAT_00ae91e0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0007e478; end: 0007e513; -[SCSnapTokenMetricsInfo setLastFetchTokenAgeInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91e0;
  _swift_beginAccess(param_1 + _DAT_00ae91e0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 0007e514; end: 0007e553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e514(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91e0;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_0007e554;
  return auVar2;
}



/* Entry: 0007e554; end: 0007e557;  */

void FUN_0007e554(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_0099b9d0)();
  return;
}



/* Entry: 0007e558; end: 0007e5db; -[SCSnapTokenMetricsInfo getMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007e558(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae91e8;
  _swift_beginAccess(param_1 + _DAT_00ae91e8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0007e5dc; end: 0007e677; -[SCSnapTokenMetricsInfo setGetMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91e8;
  _swift_beginAccess(param_1 + _DAT_00ae91e8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 0007e678; end: 0007e6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e678(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91e8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f0f8;
  return auVar2;
}



/* Entry: 0007e6b8; end: 0007e6cf; -[SCSnapTokenMetricsInfo requestPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e6b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae91f0);
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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0007e6d0; end: 0007e6e7; -[SCSnapTokenMetricsInfo setRequestPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e6d0(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_00ae91f0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0007e6e8; end: 0007e727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e6e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91f0;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f0fc;
  return auVar2;
}



/* Entry: 0007e728; end: 0007e73f; -[SCSnapTokenMetricsInfo requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e728(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae91f8);
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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0007e740; end: 0007e757; -[SCSnapTokenMetricsInfo setRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e740(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_00ae91f8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0007e758; end: 0007e797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e758(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae91f8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91f8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f100;
  return auVar2;
}



/* Entry: 0007e798; end: 0007e7a3; -[SCSnapTokenMetricsInfo referrer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e798(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae9200);
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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0007e7a4; end: 0007e817;  */

void FUN_0007e7a4(long param_1,undefined8 param_2,long *param_3)

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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0007e818; end: 0007e823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e818(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_00ae9200);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 0007e824; end: 0007e873;  */

undefined1  [16] FUN_0007e824(long *param_1)

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



/* Entry: 0007e874; end: 0007e87f; -[SCSnapTokenMetricsInfo setReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e874(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_00ae9200);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0007e880; end: 0007e8f7;  */

void FUN_0007e880(long param_1,long param_2,long param_3,long *param_4)

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



/* Entry: 0007e8f8; end: 0007e903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e8f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9200);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0007e904; end: 0007e95b;  */

void FUN_0007e904(undefined8 param_1,undefined8 param_2,long *param_3)

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



/* Entry: 0007e95c; end: 0007e99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007e95c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae9200;
  _swift_beginAccess(unaff_x20 + _DAT_00ae9200,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f104;
  return auVar2;
}



/* Entry: 0007e99c; end: 0007ea2f; -[SCSnapTokenMetricsInfo prefetchError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e99c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00ae9208;
  _swift_beginAccess(param_1 + _DAT_00ae9208,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 0007ea30; end: 0007eae7; -[SCSnapTokenMetricsInfo setPrefetchError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ea30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae9208;
  _swift_beginAccess(param_1 + _DAT_00ae9208,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 0007eae8; end: 0007eb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0007eae8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae9208;
  _swift_beginAccess(unaff_x20 + _DAT_00ae9208,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x7f108;
  return auVar2;
}



/* Entry: 0007eb28; end: 0007eb6f;  */

void FUN_0007eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_0007eb70(param_1,param_2,param_3);
  return;
}



/* Entry: 0007eb70; end: 0007ec7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007eb70(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_00ae91c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae91d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae91d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae91e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae91e8) = 4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae91f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae91f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9200);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae91a0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_00ae91a8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_00ae91b0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_00ae91b8) = 0;
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_00ae91c0) = param_1;
  func_0x0007ec5c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007ec7c; end: 0007eca7; -[SCSnapTokenMetricsInfo initWithAccessType:isTrySyncFirst:isPrefetch:] */

void FUN_0007ec7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0007eb70(param_3,param_4,param_5);
  return;
}



/* Entry: 0007eca8; end: 0007ecb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007eca8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _CACurrentMediaTime();
  lVar1 = _DAT_00ae91c8;
  _swift_beginAccess(unaff_x20 + _DAT_00ae91c8,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 0007ecb4; end: 0007eccb; -[SCSnapTokenMetricsInfo setNetworkStartTsNow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ecb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _CACurrentMediaTime();
  lVar1 = _DAT_00ae91c8;
  _swift_beginAccess(param_2 + _DAT_00ae91c8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  _objc_release(param_2);
  return;
}



/* Entry: 0007eccc; end: 0007ed1b;  */

void FUN_0007eccc(undefined8 param_1,long *param_2)

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



/* Entry: 0007ed1c; end: 0007ed27; -[SCSnapTokenMetricsInfo setNetworkEndTsNow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ed1c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _CACurrentMediaTime();
  lVar1 = _DAT_00ae91d0;
  _swift_beginAccess(param_2 + _DAT_00ae91d0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  _objc_release(param_2);
  return;
}



/* Entry: 0007ed28; end: 0007ed87;  */

void FUN_0007ed28(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

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



/* Entry: 0007ed88; end: 0007edab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0007ed88(double param_1)

{
  long unaff_x20;
  
  _CACurrentMediaTime();
  return param_1 - *(double *)(unaff_x20 + _DAT_00ae91c0);
}



/* Entry: 0007edac; end: 0007ee7f; -[SCSnapTokenMetricsInfo elapsedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0007edac(double param_1,long param_2)

{
  double dVar1;
  
  _objc_retain();
  _CACurrentMediaTime();
  dVar1 = *(double *)(param_2 + _DAT_00ae91c0);
  _objc_release(param_2);
  return param_1 - dVar1;
}



/* Entry: 0007ee80; end: 0007ef8f; -[SCSnapTokenMetricsInfo networkTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0007ee80(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_00ae91d0;
  _swift_beginAccess(param_1 + _DAT_00ae91d0,auStack_48,0,0);
  lVar1 = _DAT_00ae91c8;
  dVar4 = *(double *)(param_1 + lVar2);
  dVar3 = 0.0;
  if (0.0 < dVar4) {
    _swift_beginAccess(param_1 + _DAT_00ae91c8,auStack_60,0,0);
    if ((0.0 < *(double *)(param_1 + lVar1)) &&
       (dVar3 = dVar4 - *(double *)(param_1 + lVar1), dVar3 <= 0.0)) {
      dVar3 = 0.0;
    }
  }
  return dVar3;
}



/* Entry: 0007ef90; end: 0007f027; -[SCSnapTokenMetricsInfo responseProcessingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0007ef90(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00ae91d0;
  _swift_beginAccess(param_1 + _DAT_00ae91d0,auStack_48,0,0);
  dVar2 = 0.0;
  if (0.0 < *(double *)(param_1 + lVar1)) {
    _objc_retain(0);
    _CACurrentMediaTime();
    lVar1 = _DAT_00ae91c8;
    _swift_beginAccess(param_1 + _DAT_00ae91c8,auStack_60,0,0);
    dVar3 = *(double *)(param_1 + lVar1);
    _objc_release(param_1);
    dVar2 = dVar2 - dVar3;
  }
  return dVar2;
}



/* Entry: 0007f028; end: 0007f083; -[SCSnapTokenMetricsInfo init] */

void FUN_0007f028(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenServices.SnapTokenMetricsInfo",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7f054);
  (*pcVar1)();
}



/* Entry: 0007f084; end: 0007f0e7; -[SCSnapTokenMetricsInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f084(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae91f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae91f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae9200 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae9208));
  return;
}



/* Entry: 0007f0e8; end: 0007f10b;  */

void FUN_0007f0e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_0099b9d0)();
  return;
}



/* Entry: 0007f10c; end: 0007f11b; -[_TtC17SnapTokenServices17SnapTokenServices internalManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae9238));
  return;
}



/* Entry: 0007f11c; end: 0007f12b; -[_TtC17SnapTokenServices17SnapTokenServices tokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f11c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae9240));
  return;
}



/* Entry: 0007f12c; end: 0007f13b; -[_TtC17SnapTokenServices17SnapTokenServices blizzardTokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae9248));
  return;
}



/* Entry: 0007f13c; end: 0007f1af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae9238) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9240) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9248) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007f1b0; end: 0007f23f; -[_TtC17SnapTokenServices17SnapTokenServices initWithInternalManager:tokenProvider:blizzardTokenProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae9238) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae9240) = param_4;
  *(undefined8 *)(param_1 + _DAT_00ae9248) = param_5;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 0007f240; end: 0007f29f; -[_TtC17SnapTokenServices17SnapTokenServices init] */

void FUN_0007f240(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenServices.SnapTokenServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7f26c);
  (*pcVar1)();
}



/* Entry: 0007f2a0; end: 0007f2e7; -[_TtC17SnapTokenServices17SnapTokenServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f2a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae9238));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae9240));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae9248));
  return;
}



/* Entry: 0007f2e8; end: 0007f307;  */

void FUN_0007f2e8(void)

{
  _objc_opt_self(&PTR_PTR_00ac9d10);
  return;
}



/* Entry: 0007f308; end: 0007f357;  */

undefined8 FUN_0007f308(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae9278;
  func_0x000115a8(0xae9278,&UNK_007d2660);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0007f358; end: 0007f36b;  */

bool FUN_0007f358(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0007f36c; end: 0007f417;  */

void FUN_0007f36c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0007f418; end: 0007f4d3;  */

undefined1  [16] FUN_0007f418(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  uVar3 = 0x656372756f73;
  if (bVar5 != 4) {
    uVar3 = 0x6e756f436e617073;
  }
  uVar1 = 0xe600000000000000;
  if (bVar5 != 4) {
    uVar1 = 0xe900000000000074;
  }
  uVar4 = 0xea00000000007364;
  uVar6 = 0x656546646c696863;
  if (bVar5 != 3) {
    uVar4 = uVar1;
    uVar6 = uVar3;
  }
  uVar3 = 0x656d616e;
  if (bVar5 != 1) {
    uVar3 = 0x6e6f43616964656d;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5 != 1) {
    uVar1 = 0xec000000746e6574;
  }
  uVar2 = 0x644964656566;
  if (bVar5 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 0007f4d4; end: 0007f4f7;  */

void FUN_0007f4d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_0007f958();
  *param_1 = param_2;
  return;
}



/* Entry: 0007f4f8; end: 0007f50f;  */

undefined1  [16] FUN_0007f4f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 0007f510; end: 0007f55f;  */

void FUN_0007f510(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_0007f7e8();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 0007f560; end: 0007f7e7;  */

void FUN_0007f560(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined2 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [39];
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  lVar1 = 0xae9280;
  func_0x000115a8(0xae9280,&UNK_007d2668);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar4);
  FUN_0007f7e8();
  puVar2 = &UNK_009a30a8;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_e0 + -extraout_x8,&UNK_009a30a8,&UNK_009a30a8,param_1,uVar4,uVar5);
  uStack_b0 = CONCAT62(uStack_b0._2_6_,*unaff_x20);
  auStack_d8[0] = 0;
  func_0x0007f828();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_b0,auStack_d8,lVar1,&UNK_009a31d0,puVar2);
  if (unaff_x21 == 0) {
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 8),&uStack_b0,lVar1);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0xc);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack_60 = *(undefined1 *)(unaff_x20 + 0x1c);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0xc);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack_90 = *(undefined1 *)(unaff_x20 + 0x1c);
    uStack_b1 = 2;
    puVar3 = &uStack_80;
    FUN_0007f308(puVar3,auStack_d8);
    func_0x0007f868();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_b0,&uStack_b1,lVar1,&UNK_009a3898,puVar3);
    FUN_00036608(uStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x20);
    auStack_d8[0] = 3;
    uVar4 = 0xae7130;
    func_0x000115a8(0xae7130,&UNK_007ce300);
    uVar5 = 0xae7158;
    FUN_00080908(0xae7158,FUN_0003336c,PTR___sSayxGSEsSERzlMc_0099b1d8);
    puVar3 = &uStack_b0;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (puVar3,auStack_d8,lVar1,uVar4,uVar5);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x24);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x2c);
    auStack_d8[0] = 4;
    func_0x0007f8a8();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_b0,auStack_d8,lVar1,&UNK_009a33a8,puVar3);
    uStack_b0 = CONCAT71(uStack_b0._1_7_,5);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + 0x30),&uStack_b0,lVar1);
  }
  (**(code **)(lVar6 + 8))(auStack_e0 + -extraout_x8,lVar1);
  return;
}



/* Entry: 0007f7e8; end: 0007f8e7;  */

void FUN_0007f7e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d27c8;
  _swift_getWitnessTable(&UNK_007d27c8,&UNK_009a30a8);
  puRam0000000000ae9288 = puVar1;
  return;
}



/* Entry: 0007f8e8; end: 0007f943;  */

void FUN_0007f8e8(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_28;
  
  FUN_0007fb5c(&uStack_88);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_40;
    param_1[8] = uStack_48;
    param_1[0xb] = uStack_30;
    param_1[10] = uStack_38;
    param_1[0xc] = uStack_28;
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[3] = uStack_70;
    param_1[2] = uStack_78;
    param_1[5] = uStack_60;
    param_1[4] = uStack_68;
    param_1[7] = uStack_50;
    param_1[6] = uStack_58;
  }
  return;
}



/* Entry: 0007f944; end: 0007f957;  */

void FUN_0007f944(void)

{
  FUN_0007f560();
  return;
}



/* Entry: 0007f958; end: 0007fb5b;  */

undefined4 FUN_0007f958(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x644964656566 && param_2 == -0x1a00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x644964656566,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x656d616e,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x6e6f43616964656d;
        if (((param_1 == 0x6e6f43616964656d) && (param_2 == -0x13ffffff8b919a8c)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6e6f43616964656d,0xec000000746e6574,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          return 2;
        }
        uVar2 = 0x656546646c696863;
        if (((param_1 != 0x656546646c696863) || (param_2 != -0x15ffffffffff8c9c)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x656546646c696863,0xea00000000007364,param_1,param_2,0), (uVar2 & 1) == 0))
        {
          uVar2 = 0x656372756f73;
          if (((param_1 != 0x656372756f73) || (param_2 != -0x1a00000000000000)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x656372756f73,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) == 0)) {
            uVar2 = 0x6e756f436e617073;
            if ((param_1 == 0x6e756f436e617073) && (param_2 == -0x16ffffffffffff8c)) {
              _swift_bridgeObjectRelease(0xe900000000000074);
              return 5;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6e756f436e617073,0xe900000000000074,param_1,param_2,0);
            _swift_bridgeObjectRelease(param_2);
            if ((uVar2 & 1) != 0) {
              return 5;
            }
            return 6;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 0007fb5c; end: 0007ff63;  */

/* WARNING: Removing unreachable block (ram,0x0007fe9c) */
/* WARNING: Removing unreachable block (ram,0x0007fe34) */
/* WARNING: Removing unreachable block (ram,0x0007fe38) */
/* WARNING: Removing unreachable block (ram,0x0007fda4) */
/* WARNING: Removing unreachable block (ram,0x0007fd00) */
/* WARNING: Removing unreachable block (ram,0x0007fe04) */
/* WARNING: Removing unreachable block (ram,0x0007fe18) */
/* WARNING: Removing unreachable block (ram,0x0007fe20) */
/* WARNING: Removing unreachable block (ram,0x0007fe3c) */
/* WARNING: Removing unreachable block (ram,0x0007fe58) */
/* WARNING: Removing unreachable block (ram,0x0007fc80) */

void FUN_0007fb5c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [104];
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_d9;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  
  lVar1 = 0xae92c8;
  func_0x000115a8(0xae92c8,&UNK_007d2818);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  FUN_0001393c(param_2,uVar5);
  FUN_0007f7e8();
  puVar3 = &UNK_009a30a8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_1f0 + -extraout_x8,&UNK_009a30a8,&UNK_009a30a8,lVar2,uVar5,uVar6);
  if (unaff_x21 == 0) {
    auStack_1b8[0] = 0;
    FUN_00080888();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_150,&UNK_009a31d0,auStack_1b8,lVar1,&UNK_009a31d0,puVar3);
    uStack_d8 = (undefined2)uStack_150;
    uStack_150 = CONCAT71(uStack_150._1_7_,1);
    puVar4 = &uStack_150;
    lVar2 = lVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    auStack_1b8[0] = 2;
    lStack_1c0 = lVar2;
    puStack_d0 = puVar4;
    lStack_c8 = lVar2;
    func_0x000808c8();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_150,&UNK_009a3898,auStack_1b8,lVar1,&UNK_009a3898,puVar4);
    uStack_1e0 = uStack_150;
    uStack_1d8 = puStack_148;
    uStack_c0 = uStack_150;
    uStack_b8 = puStack_148;
    uStack_1d0 = lStack_140;
    uStack_1c8 = uStack_138;
    uStack_b0 = lStack_140;
    uStack_a8 = uStack_138;
    uStack_a0 = (undefined1)uStack_130;
    uVar5 = 0xae7130;
    func_0x000115a8(0xae7130,&UNK_007ce300);
    auStack_1b8[0] = 3;
    uVar6 = 0xae7138;
    FUN_00080908(0xae7138,0x33278,PTR___sSayxGSesSeRzlMc_0099b1f8);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_150,uVar5,auStack_1b8,lVar1,uVar5,uVar6);
    uStack_1e8 = uStack_150;
    uStack_98 = uStack_150;
    auStack_1b8[0] = 4;
    FUN_00080978();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_150,&UNK_009a33a8,auStack_1b8,lVar1,&UNK_009a33a8,uVar5);
    uStack_88 = puStack_148;
    uStack_90 = uStack_150;
    uStack_80 = lStack_140;
    uStack_d9 = 5;
    puVar7 = &uStack_d9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar7,lVar1);
    (**(code **)(lVar8 + 8))(auStack_1f0 + -extraout_x8,lVar1);
    uStack_108 = uStack_90;
    uStack_110 = uStack_98;
    uStack_f8 = uStack_80;
    uStack_100 = uStack_88;
    uStack_150 = CONCAT62(uStack_d6,uStack_d8);
    puStack_148 = puStack_d0;
    uStack_138 = uStack_c0;
    lStack_140 = lStack_c8;
    uStack_118 = CONCAT71(uStack_9f,uStack_a0);
    uStack_128 = uStack_b0;
    uStack_130 = uStack_b8;
    uStack_120 = uStack_a8;
    puStack_f0 = puVar7;
    puStack_78 = puVar7;
    FUN_00036584(&uStack_150,auStack_1b8);
    FUN_00011670(param_2);
    FUN_00037174(&uStack_d8);
    param_1[9] = uStack_108;
    param_1[8] = uStack_110;
    param_1[0xb] = uStack_f8;
    param_1[10] = uStack_100;
    param_1[0xc] = puStack_f0;
    param_1[1] = puStack_148;
    *param_1 = uStack_150;
    param_1[3] = uStack_138;
    param_1[2] = lStack_140;
    param_1[5] = uStack_128;
    param_1[4] = uStack_130;
    param_1[7] = uStack_118;
    param_1[6] = uStack_120;
  }
  else {
    FUN_00011670(param_2);
  }
  return;
}



/* Entry: 0007ff64; end: 0008004b;  */

long FUN_0007ff64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0008004c; end: 0008038b;  */

undefined2 * FUN_0008004c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar6;
  cVar4 = *(char *)(param_2 + 0x1c);
  _swift_bridgeObjectRetain();
  if (cVar4 == -1) {
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x0007ff90(uVar6,uVar2,uVar1,uVar3,cVar4);
    *(undefined8 *)(param_1 + 0xc) = uVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(char *)(param_1 + 0x1c) = cVar4;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  if ((lVar5 - 1U < 2) || (lVar5 == 3)) {
    uVar6 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  else {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(long *)(param_1 + 0x28) = lVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2c) = uVar6;
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 0008038c; end: 0008055f;  */

undefined8 FUN_0008038c(undefined8 param_1)

{
  FUN_00084db8();
  return param_1;
}



/* Entry: 00080560; end: 00080777;  */

int FUN_00080560(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00080778; end: 000807b7;  */

void FUN_00080778(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d27a0;
  _swift_getWitnessTable(&UNK_007d27a0,&UNK_009a30a8);
  puRam0000000000ae92b0 = puVar1;
  return;
}



/* Entry: 000807b8; end: 000807bb;  */

void FUN_000807b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2738;
  _swift_getWitnessTable(&UNK_007d2738,&UNK_009a30a8);
  puRam0000000000ae92b8 = puVar1;
  return;
}



/* Entry: 000807bc; end: 000807fb;  */

void FUN_000807bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2738;
  _swift_getWitnessTable(&UNK_007d2738,&UNK_009a30a8);
  puRam0000000000ae92b8 = puVar1;
  return;
}



/* Entry: 000807fc; end: 000807ff;  */

void FUN_000807fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2710;
  _swift_getWitnessTable(&UNK_007d2710,&UNK_009a30a8);
  puRam0000000000ae92c0 = puVar1;
  return;
}



/* Entry: 00080800; end: 0008083f;  */

void FUN_00080800(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2710;
  _swift_getWitnessTable(&UNK_007d2710,&UNK_009a30a8);
  puRam0000000000ae92c0 = puVar1;
  return;
}



/* Entry: 00080840; end: 0008084f;  */

void FUN_00080840(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 3) {
    return;
  }
  if (param_2 - 1U < 2) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_3);
  return;
}



/* Entry: 00080850; end: 00080887;  */

void FUN_00080850(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 - 1U < 2) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_3);
  return;
}



/* Entry: 00080888; end: 00080907;  */

void FUN_00080888(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2828;
  _swift_getWitnessTable(&UNK_007d2828,&UNK_009a31d0);
  puRam0000000000ae92d0 = puVar1;
  return;
}



/* Entry: 00080908; end: 00080977;  */

void FUN_00080908(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0xae7130;
    FUN_00016c74(0xae7130,&UNK_007ce300);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 00080978; end: 000809b7;  */

void FUN_00080978(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae92e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2a50;
  _swift_getWitnessTable(&UNK_007d2a50,&UNK_009a33a8);
  puRam0000000000ae92e0 = puVar1;
  return;
}



/* Entry: 000809b8; end: 000809cb;  */

bool FUN_000809b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000809cc; end: 00080a77;  */

void FUN_000809cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00080a78; end: 00080aab;  */

undefined1  [16] FUN_00080a78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x747865746e6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x65707974;
  }
  uVar2 = 0xe700000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


