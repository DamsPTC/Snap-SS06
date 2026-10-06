/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a1f99c; end: 104a1f9bb;  */

void FUN_104a1f99c(void)

{
  _objc_opt_self(&PTR_PTR_1130a4ce0);
  return;
}



/* Entry: 104a1f9bc; end: 104a1faeb;  */

void FUN_104a1f9bc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 104a1faec; end: 104a1fb63;  */

undefined8 FUN_104a1faec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 104a1fb64; end: 104a1fbd3;  */

undefined1 * FUN_104a1fb64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 104a1fbd4; end: 104a1fbf7;  */

void FUN_104a1fbd4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 104a1fbf8; end: 104a1fc7b;  */

uint FUN_104a1fbf8(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  plVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(plVar3);
  return uVar1 & 1;
}



/* Entry: 104a1fc7c; end: 104a1fc8b;  */

void FUN_104a1fc7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ_110350fb0)
            (*(undefined8 *)PTR__ASWebAuthenticationSessionErrorDomain_110346c30);
  return;
}



/* Entry: 104a1fc8c; end: 104a1fd0b;  */

void FUN_104a1fc8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4da8;
  FUN_104a200a0(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
                    /* WARNING: Could not recover jumptable at 0x00010bdb4d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE9errorCodeSivg_110350840)(param_1,uVar1);
  return;
}



/* Entry: 104a1fd0c; end: 104a1fd73;  */

void FUN_104a1fd0c(undefined8 param_1,undefined8 param_2)

{
  FUN_104a200a0(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb4d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE08_bridgedD0xSgSo0D0C_tcfC_110350818)
            (param_1);
  return;
}



/* Entry: 104a1fd74; end: 104a1fd93;  */

void FUN_104a1fd74(void)

{
  __sSo8NSObjectC10ObjectiveCE9hashValueSivg();
  return;
}



/* Entry: 104a1fd94; end: 104a1fe83;  */

void FUN_104a1fd94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4da8;
  FUN_104a200a0(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
                    /* WARNING: Could not recover jumptable at 0x00010bdb4d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE4hash4intoys6HasherVz_tF_110350838)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 104a1fe84; end: 104a1feab;  */

void FUN_104a1fe84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 104a1feac; end: 104a1fed3;  */

void FUN_104a1feac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107be8c0;
  if (lRam00000001130a4d38 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001130a4d38 = param_1;
  }
  return;
}



/* Entry: 104a1fed4; end: 104a1ff57;  */

void FUN_104a1fed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1130a4db0;
  FUN_104a200a0(0x1130a4db0,FUN_104a1feac,&UNK_10dd4cb30);
  uVar2 = 0x1130a4db8;
  FUN_104a200a0(0x1130a4db8,FUN_104a1feac,&UNK_10dd4ca84);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 104a1ff58; end: 104a1ffd7;  */

void FUN_104a1ff58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4d70;
  FUN_104a200a0(0x1130a4d70,0x104a1fec0,&UNK_10dd4c9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 104a1ffd8; end: 104a1ffdb;  */

void FUN_104a1ffd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 104a1ffdc; end: 104a2001b;  */

void FUN_104a1ffdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4da8;
  FUN_104a200a0(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
                    /* WARNING: Could not recover jumptable at 0x00010bdb4d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE012_getEmbeddedD0yXlSgyF_110350810)
            (param_1,uVar1);
  return;
}



/* Entry: 104a2001c; end: 104a20073;  */

void FUN_104a2001c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4da8;
  FUN_104a200a0(0x1130a4da8,0x104a1fec0,&UNK_10dd4cb74);
                    /* WARNING: Could not recover jumptable at 0x00010bdb4d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE2eeoiySbx_xtFZ_110350828)
            (param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 104a20074; end: 104a2009f;  */

void FUN_104a20074(void)

{
  FUN_104a200a0(0x1130a4d48,0x104a1fec0,&UNK_10dd4c8e8);
  return;
}



/* Entry: 104a200a0; end: 104a200df;  */

void FUN_104a200a0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104a200e0; end: 104a20213;  */

void FUN_104a200e0(void)

{
  FUN_104a200a0(0x1130a4d58,FUN_104a1feac,&UNK_10dd4ca48);
  return;
}



/* Entry: 104a20214; end: 104a20227;  */

void FUN_104a20214(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107be910;
  if (lRam00000001130a4dc0 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001130a4dc0 = param_1;
  }
  return;
}



/* Entry: 104a20228; end: 104a2026b;  */

void FUN_104a20228(long param_1,long *param_2,long param_3)

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



/* Entry: 104a2026c; end: 104a20297;  */

void FUN_104a2026c(void)

{
  FUN_104a200a0(0x1130a4d90,FUN_104a20214,&UNK_10dd4cbe0);
  return;
}



/* Entry: 104a20298; end: 104a2029b;  */

void FUN_104a20298(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_11034def8;
  _swift_getWitnessTable(PTR___sSis17FixedWidthIntegersMc_11034def8,PTR___sSiN_11034deb0);
  puRam00000001130a4d98 = puVar1;
  return;
}



/* Entry: 104a2029c; end: 104a20333;  */

void FUN_104a2029c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_11034def8;
  _swift_getWitnessTable(PTR___sSis17FixedWidthIntegersMc_11034def8,PTR___sSiN_11034deb0);
  puRam00000001130a4d98 = puVar1;
  return;
}



/* Entry: 104a20334; end: 104a20357;  */

bool FUN_104a20334(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104a20358; end: 104a20393;  */

void FUN_104a20358(void)

{
  FUN_104a204cc();
  return;
}



/* Entry: 104a20394; end: 104a203ab;  */

void FUN_104a20394(void)

{
  return;
}



/* Entry: 104a203ac; end: 104a20487;  */

void FUN_104a203ac(void)

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



/* Entry: 104a20488; end: 104a20493;  */

void FUN_104a20488(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104a20494; end: 104a204cb;  */

void FUN_104a20494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130a4dc8;
  FUN_104a204dc();
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104a204cc; end: 104a204db;  */

undefined1  [16] FUN_104a204cc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104a204dc; end: 104a2051f;  */

void FUN_104a204dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (-1 < lVar1) {
    return;
  }
  lVar2 = (long)param_1 + (long)(int)lVar1;
  _swift_getTypeByMangledNameInContext(lVar2,-(lVar1 >> 0x20),0,0);
  *param_1 = lVar2;
  return;
}



/* Entry: 104a20520; end: 104a20523;  */

void FUN_104a20520(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4ccc0;
  _swift_getWitnessTable(&UNK_10dd4ccc0,&UNK_1107beab8);
  puRam00000001130a4dd0 = puVar1;
  return;
}



/* Entry: 104a20524; end: 104a20563;  */

void FUN_104a20524(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4ccc0;
  _swift_getWitnessTable(&UNK_10dd4ccc0,&UNK_1107beab8);
  puRam00000001130a4dd0 = puVar1;
  return;
}



/* Entry: 104a20564; end: 104a20567;  */

void FUN_104a20564(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a4dd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104a205ac(0xff);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130a4dd8 = puVar2;
  return;
}



/* Entry: 104a20568; end: 104a205fb;  */

void FUN_104a20568(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a4dd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104a205ac(0xff);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130a4dd8 = puVar2;
  return;
}



/* Entry: 104a205fc; end: 104a2060b;  */

undefined1  [16] FUN_104a205fc(void)

{
  return ZEXT816(0x1107beab8);
}



/* Entry: 104a2060c; end: 104a2068f; -[SPTConfiguration clientID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2060c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4de8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a4de8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a20690; end: 104a2076f; -[SPTConfiguration redirectURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20690(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113815b60,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a20770; end: 104a20787; -[SPTConfiguration tokenSwapURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20770(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_113815b68;
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_113815b68,auStack_48,0,0);
  FUN_104a20788(param_1 + lVar1,puVar4);
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



/* Entry: 104a20788; end: 104a207cf;  */

undefined8 FUN_104a20788(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104a207d0; end: 104a207e7; -[SPTConfiguration setTokenSwapURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a207d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
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
  lVar1 = _DAT_113815b68;
  _swift_beginAccess(param_1 + _DAT_113815b68,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  FUN_104a207e8(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104a207e8; end: 104a2086f;  */

undefined8 FUN_104a207e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104a20870; end: 104a20873;  */

void FUN_104a20870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104a20874; end: 104a2087f; -[SPTConfiguration tokenRefreshURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20874(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_113815b70;
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_113815b70,auStack_48,0,0);
  FUN_104a20788(param_1 + lVar1,puVar4);
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



/* Entry: 104a20880; end: 104a2095b;  */

void FUN_104a20880(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar3 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0,0);
  FUN_104a20788(param_1 + lVar3,puVar4);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  puVar1 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar3);
  uVar2 = 0;
  if ((int)puVar1 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a2095c; end: 104a20967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2095c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815b70;
  _swift_beginAccess(unaff_x20 + _DAT_113815b70,auStack_48,0,0);
  FUN_104a20788(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 104a20968; end: 104a209b7;  */

void FUN_104a20968(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  FUN_104a20788(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 104a209b8; end: 104a209c3; -[SPTConfiguration setTokenRefreshURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a209b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
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
  lVar1 = _DAT_113815b70;
  _swift_beginAccess(param_1 + _DAT_113815b70,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  FUN_104a207e8(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104a209c4; end: 104a20ab7;  */

void FUN_104a209c4(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x1130a4df0;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar2,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0x21,0);
  lVar1 = param_1;
  _objc_retain(param_1);
  FUN_104a207e8(puVar2,param_1 + lVar3);
  _swift_endAccess(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 104a20ab8; end: 104a20ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20ab8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815b70;
  _swift_beginAccess(unaff_x20 + _DAT_113815b70,auStack_48,0x21,0);
  FUN_104a207e8(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 104a20ac4; end: 104a20b1b;  */

void FUN_104a20ac4(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0x21,0);
  FUN_104a207e8(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 104a20b1c; end: 104a20b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a20b1c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815b70;
  _swift_beginAccess(unaff_x20 + _DAT_113815b70,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104a21b6c;
  return auVar2;
}



/* Entry: 104a20b5c; end: 104a20c27; -[SPTConfiguration playURI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20b5c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113815b78);
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



/* Entry: 104a20c28; end: 104a20cfb; -[SPTConfiguration setPlayURI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a20c28(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_113815b78);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104a20cfc; end: 104a20d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104a20cfc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815b78;
  _swift_beginAccess(unaff_x20 + _DAT_113815b78,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104a21b70;
  return auVar2;
}



/* Entry: 104a20d3c; end: 104a20f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a20d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  _objc_allocWithZone();
  lVar2 = _DAT_113815b68;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar5 + 0x38);
  (*pcVar6)(unaff_x20 + lVar2,1,1,lVar3);
  (*pcVar6)(unaff_x20 + _DAT_113815b70,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  lRam000000011340b070 = lRam000000011340b070 + 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4de8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (**(code **)(lVar5 + 0x10))(unaff_x20 + _DAT_113815b60,param_3,lVar3);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_3,lVar3);
  return puVar4;
}



/* Entry: 104a20f74; end: 104a210c7; -[SPTConfiguration initWithClientID:redirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104a20f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_4);
  pcVar6 = *(code **)(lVar7 + 0x38);
  (*pcVar6)(param_1 + _DAT_113815b68,1,1,lVar3);
  (*pcVar6)(param_1 + _DAT_113815b70,1,1,lVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113815b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  lRam000000011340b070 = lRam000000011340b070 + 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4de8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  (**(code **)(lVar7 + 0x10))(param_1 + _DAT_113815b60,lVar5,lVar3);
  plVar4 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar7 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 104a210c8; end: 104a211f7; +[SPTConfiguration isValidWithClientID:] */

uint FUN_104a210c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  long lVar5;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0x1130a4df8;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_60 + lVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lRam000000011340b078 = lRam000000011340b078 + 1;
  uStack_60 = 0x7a2d61392d305b5e;
  uStack_58 = 0xee00247d32337b5d;
  lVar2 = 0;
  uStack_50 = param_3;
  uStack_48 = param_2;
  __s10Foundation6LocaleVMa();
  lVar3 = lVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,1,1,lVar2);
  FUN_104a219a8();
  *(long *)((long)alStack_70 + lVar1) = lVar3;
  *(long *)((long)alStack_70 + lVar1 + 8) = lVar3;
  uVar4 = 0;
  __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
            (&uStack_60,0x400,0,0,1,lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  func_0x000104a21b30(lVar5,0x1130a4df8);
  _swift_bridgeObjectRelease(param_2);
  return (uVar4 ^ 0xffffffff) & 1;
}



/* Entry: 104a211f8; end: 104a2129f; +[SPTConfiguration isValidWithRedirectURL:] */

bool FUN_104a211f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  lRam000000011340b080 = lRam000000011340b080 + 1;
  __s10Foundation3URLV6schemeSSSgvg();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  return param_2 != 0;
}



/* Entry: 104a212a0; end: 104a212eb;  */

void FUN_104a212a0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104a212ec; end: 104a2134b; -[SPTConfiguration init] */

void FUN_104a212ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SpotifyLogin.Configuration",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a21318);
  (*pcVar1)();
}



/* Entry: 104a2134c; end: 104a213df; -[SPTConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a2134c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a4de8 + 8));
  lVar1 = _DAT_113815b60;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  func_0x000104a21b30(param_1 + _DAT_113815b68,0x1130a4df0);
  func_0x000104a21b30(param_1 + _DAT_113815b70,0x1130a4df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815b78 + 8))
  ;
  return;
}



/* Entry: 104a213e0; end: 104a2140f; +[SPTConfiguration supportsSecureCoding] */

undefined8 FUN_104a213e0(void)

{
  lRam000000011340b088 = lRam000000011340b088 + 1;
  return 1;
}



/* Entry: 104a21410; end: 104a21453;  */

undefined8 FUN_104a21410(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104a21454; end: 104a217fb;  */

undefined8 FUN_104a21454(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar7;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x1130a4df8;
  FUN_104a204dc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  lRam000000011340b090 = lRam000000011340b090 + 1;
  lVar2 = 0;
  FUN_104a217fc(0,0x1130a4e00,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = 0xd00000000000001b;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar2 == 0) {
    _objc_release(param_1);
    plVar7 = (long *)0x11340b098;
  }
  else {
    lVar3 = lVar2;
    lStack_88 = lVar10;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar10 = 0;
    FUN_104a217fc(0,0x1130a4e08,&PTR__OBJC_CLASS___NSURL_1126ae598);
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
    if (lVar10 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar5);
      _objc_release(lVar2);
      plVar7 = (long *)0x11340b0a0;
    }
    else {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar11);
      _objc_release(lVar10);
      (**(code **)(lStack_88 + 0x20))(lVar8,lVar11,lVar1);
      lRam000000011340b078 = lRam000000011340b078 + 1;
      uStack_80 = 0x7a2d61392d305b5e;
      uStack_78 = 0xee00247d32337b5d;
      lVar10 = 0;
      lStack_70 = lVar3;
      uStack_68 = uVar5;
      __s10Foundation6LocaleVMa();
      puVar4 = puVar9;
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar9,1,1,lVar10);
      FUN_104a219a8();
      *(undefined1 **)(lVar8 + -0x10) = puVar4;
      *(undefined1 **)(lVar8 + -8) = puVar4;
      uVar6 = 0;
      __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
                (&uStack_80,0x400,0,0,1,puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      lVar10 = 0x1130a4df8;
      func_0x000104a21b30(puVar9);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar6 & 1) == 0) {
        lRam000000011340b080 = lRam000000011340b080 + 1;
        __s10Foundation3URLV6schemeSSSgvg();
        if (lVar10 != 0) {
          _swift_bridgeObjectRelease(lVar10);
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          _objc_msgSend();
          _objc_release(param_1);
          _objc_release(lVar2);
          _objc_release(lVar10);
          (**(code **)(lStack_88 + 8))(lVar8,lVar1);
          return unaff_x20;
        }
        _objc_release(param_1);
        _objc_release(lVar2);
        (**(code **)(lStack_88 + 8))(lVar8,lVar1);
      }
      else {
        (**(code **)(lStack_88 + 8))(lVar8,lVar1);
        _objc_release(param_1);
        _objc_release(lVar2);
      }
      plVar7 = (long *)0x11340b0a8;
    }
  }
  *plVar7 = *plVar7 + 1;
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104a217fc; end: 104a2183b;  */

void FUN_104a217fc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104a2183c; end: 104a21863; -[SPTConfiguration initWithCoder:] */

void FUN_104a2183c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104a21454();
  return;
}



/* Entry: 104a21864; end: 104a21957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a21864(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lRam000000011340b0b0 = lRam000000011340b0b0 + 1;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a4de8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130a4de8))[1]);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f22b700);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar1,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113815b60);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f22b720);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a21958; end: 104a219a7; -[SPTConfiguration encodeWithCoder:] */

void FUN_104a21958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104a21864(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a219a8; end: 104a219e7;  */

void FUN_104a219a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a4e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_11034dab8;
  _swift_getWitnessTable(PTR___sSSSysMc_11034dab8,PTR___sSSN_11034da80);
  puRam00000001130a4e10 = puVar1;
  return;
}



/* Entry: 104a219e8; end: 104a219ef;  */

void FUN_104a219e8(void)

{
  if (lRam00000001130a4e40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e827704);
  return;
}



/* Entry: 104a219f0; end: 104a21a27;  */

void FUN_104a219f0(undefined8 param_1)

{
  if (lRam00000001130a4e40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e827704);
  return;
}



/* Entry: 104a21a28; end: 104a21ac7;  */

void FUN_104a21a28(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dd4cde8;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_104a21adc();
    if (param_2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10dd4ce00;
      lStack_30 = lStack_38;
      _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 104a21ac8; end: 104a21adb;  */

void FUN_104a21ac8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e827704);
  return;
}



/* Entry: 104a21adc; end: 104a21b6b;  */

void FUN_104a21adc(long param_1)

{
  long lVar1;
  
  if (lRam00000001130a4e50 == 0) {
    lVar1 = 0xff;
    __s10Foundation3URLVMa();
    __sSqMa();
    if (lVar1 == 0) {
      lRam00000001130a4e50 = param_1;
    }
  }
  return;
}



/* Entry: 104a21b6c; end: 104a21b73;  */

void FUN_104a21b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104a21b74; end: 104a21c03;  */

long FUN_104a21b74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104a21c04; end: 104a21c6f;  */

undefined8 * FUN_104a21c04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104a21c70; end: 104a21c7b;  */

void FUN_104a21c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 104a21c7c; end: 104a21cbf;  */

undefined8 * FUN_104a21c7c(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 104a21cc0; end: 104a21d5f;  */

int FUN_104a21cc0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104a21d60; end: 104a21dff;  */

void FUN_104a21d60(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104a21e00; end: 104a21e0f;  */

void FUN_104a21e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104a21e10; end: 104a222fb;  */

undefined1  [16] FUN_104a21e10(undefined6 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined6 uVar2;
  code *pcVar3;
  undefined6 **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  code cVar17;
  undefined6 *puVar18;
  undefined1 *unaff_x22;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined6 *apuStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  ulong uStack_148;
  undefined6 *puStack_140;
  ulong uStack_138;
  undefined6 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [8];
  undefined6 *puStack_118;
  ulong uStack_110;
  code *pcStack_108;
  ulong uStack_100;
  undefined6 *puStack_f0;
  ulong uStack_e8;
  undefined6 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b0;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined6 uStack_a8;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 auStack_8a [5];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar19 = auStack_120;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = SUB86(param_1,0);
  uVar2 = uStack_b0;
  uStack_aa = (undefined1)((ulong)param_1 >> 0x30);
  uStack_a9 = (undefined1)((ulong)param_1 >> 0x38);
  uStack_a8 = (undefined6)param_2;
  uStack_a2 = (undefined1)(param_2 >> 0x30);
  uStack_a1 = (undefined1)(param_2 >> 0x38);
  puStack_f0 = param_1;
  uStack_e8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar15 = 0x1130a4e70;
  FUN_104a204dc();
  ppuVar4 = &puStack_e0;
  puVar6 = PTR___sSS8UTF8ViewVN_11034da18;
  _swift_dynamicCast(ppuVar4,&uStack_b0,PTR___sSS8UTF8ViewVN_11034da18,uVar15,6);
  if ((int)ppuVar4 != 0) {
    func_0x000104a236d8(&puStack_e0,&uStack_98);
    FUN_104a235e8(&uStack_98,puStack_80);
    __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (&uStack_b0,FUN_104a227b4,0,PTR___s10Foundation4DataV15_RepresentationON_110350a40,
               puStack_80,uStack_78);
    uStack_d8 = CONCAT17(uStack_a1,CONCAT16(uStack_a2,uStack_a8));
    puStack_e0 = (undefined6 *)CONCAT17(uStack_a9,CONCAT16(uStack_aa,uStack_b0));
    func_0x000104a2360c(&uStack_98);
    unaff_x22 = puStack_80;
    puVar18 = puStack_e0;
    uVar16 = uStack_d8;
    goto LAB_104a2224c;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  puStack_e0 = (undefined6 *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_104a2362c(&puStack_e0);
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        puVar18 = param_1;
        uVar11 = param_2;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        puVar18 = (undefined6 *)((param_2 & 0xfffffffffffffff) + 0x20);
        uVar11 = (ulong)param_1 & 0xffffffffffff;
      }
      uVar16 = 0;
      if (puVar18 != (undefined6 *)0x0) {
        uVar16 = uVar11 + (long)puVar18;
      }
    }
    else {
      uStack_92 = (undefined2)((ulong)param_1 >> 0x30);
      uStack_90 = (undefined6)(param_2 & 0xffffffffffffff);
      auStack_8a[0] = (undefined2)((param_2 & 0xffffffffffffff) >> 0x30);
      puVar18 = &uStack_98;
      uVar16 = (long)&uStack_98 + (param_2 >> 0x38 & 0xf);
      uStack_98 = uVar2;
    }
    FUN_104a22e2c();
    if (uVar16 >> 0x3c < 0xf) goto LAB_104a2224c;
    param_1 = (undefined6 *)((ulong)param_1 & 0xffffffffffff);
    puStack_118 = puVar18;
    uStack_110 = uVar16;
    if ((param_2 & 0x2000000000000000) != 0) {
      param_1 = (undefined6 *)(param_2 >> 0x38 & 0xf);
    }
  }
  else {
    uVar16 = param_2;
    __sSS8UTF8ViewV13_foreignCountSiyF();
    puStack_118 = (undefined6 *)0x0;
    uStack_110 = 0xf000000000000000;
  }
  FUN_104a22e90();
  puStack_e0 = param_1;
  uStack_d8 = uVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar4 = &puStack_140;
  ppuStack_130 = &puStack_f0;
  pcVar3 = FUN_104a2366c;
  FUN_104a2241c();
  uVar12 = (uint)(uStack_d8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uVar16 = uStack_d8 >> 0x30 & 0xff;
    }
    else {
      iVar14 = (int)((ulong)puStack_e0 >> 0x20);
      if (SBORROW4(iVar14,(int)puStack_e0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222f8);
        (*pcVar3)();
      }
      uVar16 = (ulong)(iVar14 - (int)puStack_e0);
    }
    if (uVar15 == uVar16) goto LAB_104a2203c;
LAB_104a22018:
    if (uVar13 == 2) {
      uVar16 = *(ulong *)(puStack_e0 + 3);
    }
    else if (uVar13 == 1) {
      uVar16 = (long)puStack_e0 >> 0x20;
    }
    else {
      uVar16 = uStack_d8 >> 0x30 & 0xff;
    }
LAB_104a2222c:
    if ((long)uVar16 < (long)uVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222f0);
      (*pcVar3)();
    }
    __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
              (uVar15,uVar16,0,0);
LAB_104a22244:
    _swift_bridgeObjectRelease(ppuVar4);
    unaff_x22 = puVar19;
    puVar18 = puStack_e0;
    uVar16 = uStack_d8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(puStack_e0 + 3),*(long *)(puStack_e0 + 2))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222f4);
        (*pcVar3)();
      }
      if (uVar15 != *(long *)(puStack_e0 + 3) - *(long *)(puStack_e0 + 2)) goto LAB_104a22018;
    }
    else if (uVar15 != 0) {
      uVar16 = 0;
      goto LAB_104a2222c;
    }
LAB_104a2203c:
    uVar15 = (ulong)pcVar3 & 0xffffffffffff;
    if (((ulong)ppuVar4 & 0x2000000000000000) != 0) {
      uVar15 = (ulong)ppuVar4 >> 0x38 & 0xf;
    }
    uStack_a8 = 0;
    uStack_a2 = 0;
    uStack_b0 = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    puVar19 = auStack_120;
    if (uVar15 * 4 - ((ulong)puVar6 >> 0xe) != 0) {
      uVar16 = 0;
      uVar12 = (uint)((ulong)pcVar3 >> 0x3b) & 1;
      if (((ulong)ppuVar4 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      puVar19 = (undefined1 *)(4L << uVar12);
      uStack_100 = (ulong)ppuVar4 & 0xffffffffffffff;
      pcStack_108 = (code *)(((ulong)ppuVar4 & 0xfffffffffffffff) + 0x20);
      do {
        puVar20 = (undefined1 *)((ulong)puVar6 & 0xc);
        puVar5 = puVar6;
        if (puVar20 == puVar19) {
          FUN_104a22bbc(puVar6,pcVar3,ppuVar4);
        }
        uVar11 = (ulong)puVar5 >> 0x10;
        if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222b4);
          (*pcVar3)();
        }
        if (((ulong)ppuVar4 >> 0x3c & 1) == 0) {
          if (((ulong)ppuVar4 >> 0x3d & 1) != 0) {
            uStack_98 = SUB86(pcVar3,0);
            uStack_92 = (undefined2)((ulong)pcVar3 >> 0x30);
            uStack_90 = (undefined6)uStack_100;
            auStack_8a[0] = (undefined2)(uStack_100 >> 0x30);
            cVar17 = *(code *)((long)&uStack_98 + uVar11);
            goto joined_r0x000104a22128;
          }
          pcVar7 = pcStack_108;
          if (((ulong)pcVar3 >> 0x3c & 1) == 0) {
            pcVar7 = pcVar3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pcVar3,ppuVar4);
          }
          cVar17 = pcVar7[uVar11];
          if (puVar20 == puVar19) goto LAB_104a2212c;
LAB_104a220e8:
          if (((ulong)ppuVar4 >> 0x3c & 1) != 0) goto LAB_104a22144;
LAB_104a220ec:
          puVar6 = (undefined *)(((ulong)puVar6 & 0xffffffffffff0000) + 0x10004);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          cVar17 = SUB81(puVar5,0);
joined_r0x000104a22128:
          if (puVar20 != puVar19) goto LAB_104a220e8;
LAB_104a2212c:
          FUN_104a22bbc(puVar6,pcVar3,ppuVar4);
          if (((ulong)ppuVar4 >> 0x3c & 1) == 0) goto LAB_104a220ec;
LAB_104a22144:
          if (uVar15 <= (ulong)puVar6 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222bc);
            (*pcVar3)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(puVar6,pcVar3,ppuVar4);
        }
        *(code *)((long)&uStack_b0 + (uVar16 & 0xff)) = cVar17;
        uVar12 = ((uint)uVar16 & 0xff) + 1;
        uVar16 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a222b8);
          (*pcVar3)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          uStack_98 = uStack_b0;
          uStack_92 = CONCAT11(uStack_a9,uStack_aa);
          uStack_90 = uStack_a8;
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&uStack_98,auStack_8a);
          uVar16 = 0;
        }
      } while (uVar15 * 4 - ((ulong)puVar6 >> 0xe) != 0);
      if ((uVar16 & 0xff) != 0) {
        uStack_98 = uStack_b0;
        uStack_92 = CONCAT11(uStack_a9,uStack_aa);
        uStack_90 = uStack_a8;
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                  (&uStack_98,(long)&uStack_98 + (uVar16 & 0xff));
        func_0x000104a236c4(puStack_118,uStack_110);
        goto LAB_104a22244;
      }
    }
    _swift_bridgeObjectRelease(ppuVar4);
    func_0x000104a236c4(puStack_118,uStack_110);
    unaff_x22 = puVar19;
    puVar18 = puStack_e0;
    uVar16 = uStack_d8;
  }
LAB_104a2224c:
  uStack_d8 = uVar16;
  puStack_e0 = puVar18;
  uVar15 = uStack_d8;
  puVar18 = puStack_e0;
  auVar1._8_8_ = uStack_d8;
  auVar1._0_8_ = puStack_e0;
  func_0x000104a2356c(puStack_e0,uStack_d8);
  _swift_bridgeObjectRelease(param_2);
  puVar10 = puVar18;
  func_0x000104a2352c(puVar18,uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_148 = uVar15;
    puStack_140 = puVar18;
    pcStack_128 = FUN_104a222fc;
    uVar9 = 0x1130a4e80;
    puStack_150 = unaff_x22;
    uStack_138 = param_2;
    ppuStack_130 = (undefined6 **)&stack0xfffffffffffffff0;
    FUN_104a204dc();
    uVar8 = 0x1130a4e88;
    uStack_160 = uVar9;
    FUN_104a2370c(0x1130a4e88,FUN_104a2374c,
                  PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_110351038);
    ppuVar4 = apuStack_178;
    apuStack_178[0] = puVar10;
    uStack_158 = uVar8;
    FUN_104a235e8(ppuVar4,uVar9);
    uVar15 = *(ulong *)(*ppuVar4 + 2);
    if (uVar15 == 0) {
      puVar18 = (undefined6 *)0x0;
      uVar16 = 0xc000000000000000;
    }
    else {
      puVar18 = *ppuVar4 + 4;
      if (uVar15 < 0xf) {
        uVar15 = (long)puVar18 + uVar15;
        FUN_104a22c80(puVar18,uVar15);
        uVar16 = uVar15 & 0xffffffffffffff;
      }
      else {
        uVar9 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(puVar18,uVar15,uVar9);
        if (uVar15 < 0x7fffffff) {
          uVar16 = (ulong)puVar18 | 0x4000000000000000;
          puVar18 = (undefined6 *)(uVar15 << 0x20);
        }
        else {
          puVar10 = (undefined6 *)0x0;
          __s10Foundation4DataV14RangeReferenceCMa();
          _swift_allocObject();
          *(undefined8 *)(puVar10 + 2) = 0;
          *(ulong *)(puVar10 + 3) = uVar15;
          uVar16 = (ulong)puVar18 | 0x8000000000000000;
          puVar18 = puVar10;
        }
      }
    }
    func_0x000104a2360c(apuStack_178);
    auVar21._8_8_ = uVar16;
    auVar21._0_8_ = puVar18;
    return auVar21;
  }
  return auVar1;
}



/* Entry: 104a222fc; end: 104a2241b;  */

undefined1  [16] FUN_104a222fc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0x1130a4e80;
  FUN_104a204dc();
  uVar1 = 0x1130a4e88;
  uStack_40 = uVar3;
  FUN_104a2370c(0x1130a4e88,FUN_104a2374c,
                PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_110351038);
  plVar2 = alStack_58;
  alStack_58[0] = param_1;
  uStack_38 = uVar1;
  FUN_104a235e8(plVar2,uVar3);
  uVar5 = *(ulong *)(*plVar2 + 0x10);
  if (uVar5 == 0) {
    uVar7 = 0;
    uVar6 = 0xc000000000000000;
  }
  else {
    uVar7 = *plVar2 + 0x20;
    if (uVar5 < 0xf) {
      uVar5 = uVar7 + uVar5;
      FUN_104a22c80(uVar7,uVar5);
      uVar6 = uVar5 & 0xffffffffffffff;
    }
    else {
      uVar3 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(uVar7,uVar5,uVar3);
      if (uVar5 < 0x7fffffff) {
        uVar6 = uVar7 | 0x4000000000000000;
        uVar7 = uVar5 << 0x20;
      }
      else {
        uVar4 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar4 + 0x10) = 0;
        *(ulong *)(uVar4 + 0x18) = uVar5;
        uVar6 = uVar7 | 0x8000000000000000;
        uVar7 = uVar4;
      }
    }
  }
  func_0x000104a2360c(alStack_58);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 104a2241c; end: 104a227b3;  */

void FUN_104a2241c(code *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  long *unaff_x20;
  byte *pbVar8;
  long unaff_x21;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbStack_98;
  byte *pbStack_90;
  byte abStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar1 = (byte *)*unaff_x20;
  uVar7 = unaff_x20[1];
  uVar2 = (uint)(uVar7 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      FUN_104a2352c(pbVar1,uVar7);
      abStack_78[0] = (byte)pbVar1;
      abStack_78[1] = (byte)((ulong)pbVar1 >> 8);
      abStack_78[2] = (byte)((ulong)pbVar1 >> 0x10);
      abStack_78[3] = (byte)((ulong)pbVar1 >> 0x18);
      abStack_78[4] = (byte)((ulong)pbVar1 >> 0x20);
      abStack_78[5] = (byte)((ulong)pbVar1 >> 0x28);
      abStack_78[6] = (byte)((ulong)pbVar1 >> 0x30);
      abStack_78[7] = (byte)((ulong)pbVar1 >> 0x38);
      abStack_78[8] = (byte)uVar7;
      abStack_78[9] = (byte)(uVar7 >> 8);
      abStack_78[10] = (byte)(uVar7 >> 0x10);
      abStack_78[0xb] = (byte)(uVar7 >> 0x18);
      abStack_78[0xc] = (byte)(uVar7 >> 0x20);
      abStack_78[0xd] = (byte)(uVar7 >> 0x28);
      abStack_78[0xe] = (byte)(uVar7 >> 0x30);
      pbVar4 = abStack_78 + abStack_78[0xe];
      pbVar9 = abStack_78;
      (*param_1)(&pbStack_98);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(abStack_78[7],
                              CONCAT16(abStack_78[6],
                                       CONCAT15(abStack_78[5],
                                                CONCAT14(abStack_78[4],
                                                         CONCAT13(abStack_78[3],
                                                                  CONCAT12(abStack_78[2],
                                                                           CONCAT11(abStack_78[1],
                                                                                    abStack_78[0])))
                                                        ))));
        unaff_x20[1] = (ulong)CONCAT16(abStack_78[0xe],
                                       CONCAT15(abStack_78[0xd],
                                                CONCAT14(abStack_78[0xc],
                                                         CONCAT13(abStack_78[0xb],
                                                                  CONCAT12(abStack_78[10],
                                                                           CONCAT11(abStack_78[9],
                                                                                    abStack_78[8])))
                                                        )));
        pbVar9 = pbStack_98;
        pbVar4 = pbStack_90;
      }
      else {
        *unaff_x20 = CONCAT17(abStack_78[7],
                              CONCAT16(abStack_78[6],
                                       CONCAT15(abStack_78[5],
                                                CONCAT14(abStack_78[4],
                                                         CONCAT13(abStack_78[3],
                                                                  CONCAT12(abStack_78[2],
                                                                           CONCAT11(abStack_78[1],
                                                                                    abStack_78[0])))
                                                        ))));
        unaff_x20[1] = (ulong)CONCAT16(abStack_78[0xe],
                                       CONCAT15(abStack_78[0xd],
                                                CONCAT14(abStack_78[0xc],
                                                         CONCAT13(abStack_78[0xb],
                                                                  CONCAT12(abStack_78[10],
                                                                           CONCAT11(abStack_78[9],
                                                                                    abStack_78[8])))
                                                        )));
      }
      goto LAB_104a22754;
    }
    pbVar9 = (byte *)(uVar7 & 0x3fffffffffffffff);
    _swift_retain(pbVar9);
    FUN_104a2352c(pbVar1,uVar7);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    FUN_104a2352c(0,0xc000000000000000);
    pbVar4 = pbVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    pbVar10 = (byte *)(long)(int)pbVar1;
    pbVar11 = (byte *)((long)pbVar1 >> 0x20);
    pbVar8 = pbVar9;
    if (((ulong)pbVar4 & 1) == 0) {
      if ((long)pbVar11 < (long)pbVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a227ac);
        (*pcVar3)();
      }
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = (byte *)0x0;
      }
      else {
        pbVar4 = pbVar8;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8((long)pbVar10,(long)pbVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a227b0);
          (*pcVar3)();
        }
        pbVar8 = pbVar8 + ((long)pbVar10 - (long)pbVar4);
      }
      uVar5 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                (pbVar8,(long)pbVar11 - (long)pbVar10,1,0,0,pbVar10,uVar5);
      _swift_release_n(pbVar9,2);
    }
    if ((long)pbVar11 < (long)pbVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a227a8);
      (*pcVar3)();
    }
    _swift_retain(pbVar8);
    FUN_104a228a0(pbVar10,pbVar11,param_1,param_2);
    pbVar9 = pbVar8;
    pbVar4 = pbVar11;
    _swift_release();
    uVar7 = (ulong)pbVar8 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = (long)pbVar1;
      unaff_x20[1] = uVar7;
      pbVar9 = pbVar10;
      pbVar4 = pbVar11;
      goto LAB_104a22754;
    }
    *unaff_x20 = (long)pbVar1;
  }
  else {
    if (uVar6 != 2) {
      abStack_78[8] = 0;
      abStack_78[9] = 0;
      abStack_78[10] = 0;
      abStack_78[0xb] = 0;
      abStack_78[0xc] = 0;
      abStack_78[0xd] = 0;
      abStack_78[0xe] = 0;
      abStack_78[0] = 0;
      abStack_78[1] = 0;
      abStack_78[2] = 0;
      abStack_78[3] = 0;
      abStack_78[4] = 0;
      abStack_78[5] = 0;
      abStack_78[6] = 0;
      abStack_78[7] = 0;
      pbVar9 = abStack_78;
      pbVar4 = abStack_78;
      (*param_1)(&pbStack_98);
      if (unaff_x21 == 0) {
        pbVar9 = pbStack_98;
        pbVar4 = pbStack_90;
      }
      goto LAB_104a22754;
    }
    _swift_retain(pbVar1);
    _swift_retain((byte *)(uVar7 & 0x3fffffffffffffff));
    FUN_104a2352c(pbVar1,uVar7);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    pbStack_98 = pbVar1;
    pbStack_90 = (byte *)(uVar7 & 0x3fffffffffffffff);
    FUN_104a2352c(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    pbVar8 = pbStack_90;
    pbVar1 = pbStack_98;
    pbVar9 = *(byte **)(pbStack_98 + 0x10);
    pbVar4 = *(byte **)(pbStack_98 + 0x18);
    FUN_104a228a0(pbVar9,pbVar4,param_1,param_2);
    uVar7 = (ulong)pbVar8 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = (long)pbVar1;
      unaff_x20[1] = uVar7;
      goto LAB_104a22754;
    }
    *unaff_x20 = (long)pbVar1;
  }
  unaff_x20[1] = uVar7;
LAB_104a22754:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((pbVar9 != (byte *)0x0) && (pbVar4 != pbVar9)) {
    if ((long)pbVar4 - (long)pbVar9 < 0xf) {
      FUN_104a22c80();
      uVar7 = (ulong)pbVar4 & 0xffffffffffffff;
    }
    else if ((ulong)((long)pbVar4 - (long)pbVar9) < 0x7fffffff) {
      func_0x000104a22dac();
      uVar7 = (ulong)pbVar4 | 0x4000000000000000;
    }
    else {
      func_0x000104a22d34();
      uVar7 = (ulong)pbVar4 | 0x8000000000000000;
    }
    *extraout_x8 = pbVar9;
    extraout_x8[1] = uVar7;
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0xc000000000000000;
  return;
}



/* Entry: 104a227b4; end: 104a2283f;  */

void FUN_104a227b4(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if ((long)(param_3 - param_2) < 0xf) {
      FUN_104a22c80();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      func_0x000104a22dac();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      func_0x000104a22d34();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}



/* Entry: 104a22840; end: 104a2289f;  */

undefined8 FUN_104a22840(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long unaff_x21;
  undefined8 auStack_40 [4];
  
  if (param_3 == 0) {
    (*param_1)(auStack_40,0,0);
  }
  else {
    (*param_1)(auStack_40,param_3,param_4 - param_3);
  }
  if (unaff_x21 == 0) {
    return auStack_40[0];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a228a0);
  (*pcVar1)();
}



/* Entry: 104a228a0; end: 104a2294b;  */

void FUN_104a228a0(long param_1,long param_2,code *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [32];
  
  lVar3 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104a2294c);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  __s10Foundation13__DataStorageC7_offsetSivg();
  lVar1 = param_1 - lVar4;
  if (!SBORROW8(param_1,lVar4)) {
    if (!SBORROW8(param_2,param_1)) {
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (param_2 - param_1 <= lVar4) {
        lVar4 = param_2 - param_1;
      }
      lVar3 = lVar3 + lVar1;
      (*param_3)(auStack_70,lVar3,lVar3 + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22948);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22944);
  (*pcVar2)();
}



/* Entry: 104a2294c; end: 104a22af7;  */

void FUN_104a2294c(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      auStack_48[0] = (undefined1)param_1;
      auStack_48[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_48[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_48[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_48[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_48[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_48[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_48[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_48[8] = (undefined1)param_2;
      auStack_48[9] = (undefined1)(param_2 >> 8);
      auStack_48[10] = (undefined1)(param_2 >> 0x10);
      auStack_48[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_48[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_48[0xd] = (undefined1)(param_2 >> 0x28);
      puVar9 = auStack_48 + (param_2 >> 0x30 & 0xff);
      uVar3 = 0;
      __s9CryptoKit6SHA256VMa();
      uVar4 = 0x1130a4e60;
      FUN_104a2370c(0x1130a4e60,PTR___s9CryptoKit6SHA256VMa_11034b128,
                    PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
      puVar8 = auStack_48;
      __s9CryptoKit12HashFunctionP6update13bufferPointerySW_tFTj(puVar8,puVar9,uVar3,uVar4);
      goto LAB_104a22ac4;
    }
    puVar8 = (undefined1 *)(long)(int)param_1;
    puVar9 = (undefined1 *)(param_1 >> 0x20);
    if ((long)puVar9 < (long)puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22af4);
      (*pcVar2)();
    }
  }
  else {
    if (uVar7 != 2) {
      uVar3 = 0;
      __s9CryptoKit6SHA256VMa();
      uVar4 = 0x1130a4e60;
      FUN_104a2370c(0x1130a4e60,PTR___s9CryptoKit6SHA256VMa_11034b128,
                    PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      auStack_48[2] = 0;
      auStack_48[3] = 0;
      auStack_48[4] = 0;
      auStack_48[5] = 0;
      auStack_48[6] = 0;
      auStack_48[7] = 0;
      auStack_48[8] = 0;
      auStack_48[9] = 0;
      auStack_48[10] = 0;
      auStack_48[0xb] = 0;
      auStack_48[0xc] = 0;
      auStack_48[0xd] = 0;
      puVar8 = auStack_48;
      puVar9 = auStack_48;
      __s9CryptoKit12HashFunctionP6update13bufferPointerySW_tFTj(puVar8,puVar9,uVar3,uVar4);
      goto LAB_104a22ac4;
    }
    puVar8 = *(undefined1 **)(param_1 + 0x10);
    puVar9 = *(undefined1 **)(param_1 + 0x18);
  }
  FUN_104a22af8(puVar8,puVar9,param_2 & 0x3fffffffffffffff,param_3);
LAB_104a22ac4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar8;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  puVar6 = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8((long)puVar8,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22bbc);
      (*pcVar2)();
    }
    puVar5 = puVar5 + ((long)puVar8 - (long)puVar6);
  }
  if (!SBORROW8((long)puVar9,(long)puVar8)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)(puVar9 + -(long)puVar8) <= (long)puVar6) {
      puVar6 = puVar9 + -(long)puVar8;
    }
    puVar9 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      puVar9 = puVar6 + (long)puVar5;
    }
    uVar3 = 0;
    __s9CryptoKit6SHA256VMa(0);
    uVar4 = 0x1130a4e60;
    FUN_104a2370c(0x1130a4e60,PTR___s9CryptoKit6SHA256VMa_11034b128,
                  PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
    __s9CryptoKit12HashFunctionP6update13bufferPointerySW_tFTj(puVar5,puVar9,uVar3,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22bb8);
  (*pcVar2)();
}



/* Entry: 104a22af8; end: 104a22bbb;  */

void FUN_104a22af8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_1,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22bbc);
      (*pcVar2)();
    }
    lVar3 = (param_1 - lVar4) + lVar3;
  }
  if (!SBORROW8(param_2,param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_2 - param_1 <= lVar4) {
      lVar4 = param_2 - param_1;
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 + lVar3;
    }
    uVar5 = 0;
    __s9CryptoKit6SHA256VMa(0);
    uVar6 = 0x1130a4e60;
    FUN_104a2370c(0x1130a4e60,PTR___s9CryptoKit6SHA256VMa_11034b128,
                  PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
    __s9CryptoKit12HashFunctionP6update13bufferPointerySW_tFTj(lVar3,lVar1,uVar5,uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22bb8);
  (*pcVar2)();
}



/* Entry: 104a22bbc; end: 104a22c7f;  */

ulong FUN_104a22bbc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    if (uVar3 != 0) {
      uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    if (uVar3 != 0) {
      uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 104a22c80; end: 104a22d33;  */

void FUN_104a22c80(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a22d2c);
    (*pcVar3)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a22d30);
    (*pcVar3)();
  }
  lStack_28 = 0;
  uStack_1a = (undefined1)uVar1;
  uStack_1c = 0;
  uStack_20 = 0;
  if ((param_1 != 0) && (param_2 != param_1)) {
    _memcpy(&lStack_28);
    param_2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  lVar5 = lStack_28;
  ___stack_chk_fail();
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = param_2 - lVar5;
  }
  uVar4 = 0;
  __s10Foundation13__DataStorageCMa();
  _swift_allocObject();
  __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(lVar5,lVar2,uVar4);
  if (-1 < lVar2) {
    lVar5 = 0;
    __s10Foundation4DataV14RangeReferenceCMa();
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(long *)(lVar5 + 0x18) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104a22dac);
  (*pcVar3)();
}



/* Entry: 104a22d34; end: 104a22e2b;  */

void FUN_104a22d34(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  uVar3 = 0;
  __s10Foundation13__DataStorageCMa();
  _swift_allocObject();
  __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,lVar1,uVar3);
  if (-1 < lVar1) {
    lVar4 = 0;
    __s10Foundation4DataV14RangeReferenceCMa();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(long *)(lVar4 + 0x18) = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104a22dac);
  (*pcVar2)();
}



/* Entry: 104a22e2c; end: 104a22e8f;  */

undefined1  [16] FUN_104a22e2c(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if ((long)(param_2 - param_1) < 0xf) {
    FUN_104a22c80();
    auVar2._8_8_ = param_2 & 0xffffffffffffff;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  if (0x7ffffffe < param_2 - param_1) {
    func_0x000104a22d34();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  func_0x000104a22dac();
  auVar1._8_8_ = param_2 | 0x4000000000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 104a22e90; end: 104a22f2b;  */

void FUN_104a22e90(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104a22f2c);
        (*pcVar1)();
      }
    }
    else {
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC6lengthACSi_tcfc(param_1);
      if (0x7ffffffe < param_1) {
        lVar2 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(ulong *)(lVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Entry: 104a22f2c; end: 104a2329f;  */

undefined1  [16] FUN_104a22f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  __s9CryptoKit6SHA256VMa();
  puVar1 = PTR___s9CryptoKit6SHA256VMa_11034b128;
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s9CryptoKit12SHA256DigestVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar4 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lRam000000011340b0b8 = lRam000000011340b0b8 + 1;
  _swift_bridgeObjectRetain(param_2);
  FUN_104a21e10(param_1,param_2);
  uVar5 = 0x1130a4e60;
  FUN_104a2370c(0x1130a4e60,puVar1,PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
  __s9CryptoKit12HashFunctionPxycfCTj(lVar13,lVar3,uVar5);
  func_0x000104a2356c(param_1,param_2);
  FUN_104a2294c(param_1,param_2,lVar13);
  func_0x000104a2352c(param_1,param_2);
  __s9CryptoKit12HashFunctionP8finalize6DigestQzyFTj(lVar4,lVar3,uVar5);
  func_0x000104a2352c(param_1,param_2);
  (**(code **)(lVar12 + 8))(lVar13,lVar3);
  lVar3 = lStack_c0;
  lStack_78 = lStack_c0;
  uVar5 = 0x1130a4e68;
  FUN_104a2370c(0x1130a4e68,PTR___s9CryptoKit12SHA256DigestVMa_11034b0f8,
                PTR___s9CryptoKit12SHA256DigestV10Foundation15ContiguousBytesAAMc_11034b0f0);
  uStack_70 = uVar5;
  func_0x000104a235ac(&puStack_90);
  (**(code **)(lVar11 + 0x10))();
  FUN_104a235e8(&puStack_90,lStack_78);
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (&uStack_a0,FUN_104a227b4,0,PTR___s10Foundation4DataV15_RepresentationON_110350a40,lVar3
             ,uVar5);
  uVar2 = uStack_98;
  uVar5 = uStack_a0;
  func_0x000104a2360c(&puStack_90);
  lRam000000011340b0d0 = lRam000000011340b0d0 + 1;
  puVar6 = (undefined8 *)0x0;
  uVar8 = uStack_a0;
  __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
            (0,uStack_a0,uStack_98);
  uStack_a0 = 0x2b;
  uStack_98 = 0xe100000000000000;
  uStack_b0 = 0x2d;
  uStack_a8 = 0xe100000000000000;
  puStack_90 = puVar6;
  FUN_104a219a8();
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 **)(lVar4 + -0x10) = puVar6;
  *(undefined8 **)(lVar4 + -8) = puVar6;
  *(undefined **)(lVar4 + -0x20) = PTR___sSSN_11034da80;
  *(undefined8 **)(lVar4 + -0x18) = puVar6;
  puVar7 = &uStack_a0;
  puVar9 = &uStack_b0;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar7,puVar9,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(uVar8);
  uStack_a0 = 0x2f;
  uStack_98 = 0xe100000000000000;
  uStack_b0 = 0x5f;
  uStack_a8 = 0xe100000000000000;
  puStack_90 = puVar7;
  puStack_88 = puVar9;
  *(undefined8 **)(lVar4 + -0x10) = puVar6;
  *(undefined8 **)(lVar4 + -8) = puVar6;
  puVar7 = &uStack_a0;
  puVar10 = &uStack_b0;
  *(undefined **)(lVar4 + -0x20) = puVar1;
  *(undefined8 **)(lVar4 + -0x18) = puVar6;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar7,puVar10,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(puVar9);
  uStack_a0 = 0x3d;
  uStack_98 = 0xe100000000000000;
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  puStack_90 = puVar7;
  puStack_88 = puVar10;
  *(undefined8 **)(lVar4 + -0x10) = puVar6;
  *(undefined8 **)(lVar4 + -8) = puVar6;
  puVar7 = &uStack_a0;
  puVar9 = &uStack_b0;
  *(undefined **)(lVar4 + -0x20) = puVar1;
  *(undefined8 **)(lVar4 + -0x18) = puVar6;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar7,puVar9,0,0,0,1,puVar1,puVar1);
  func_0x000104a2352c(uVar5,uVar2);
  (**(code **)(lStack_b8 + 8))(lVar4,lVar3);
  _swift_bridgeObjectRelease(puVar10);
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = puVar7;
  return auVar14;
}


