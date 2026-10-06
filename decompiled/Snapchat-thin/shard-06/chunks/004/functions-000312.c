/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049120b4; end: 1049120bf; -[FBSDKLoginCompletionParameters setAuthenticationToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049120b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf60;
  _swift_beginAccess(param_1 + _DAT_11309cf60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1049120c0; end: 104912153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049120c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf60;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 104912154; end: 10491219b; -[FBSDKLoginCompletionParameters profile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912154(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf68;
  _swift_beginAccess(param_1 + _DAT_11309cf68,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10491219c; end: 1049121e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10491219c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf68;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf68,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 1049121e8; end: 1049121f3; -[FBSDKLoginCompletionParameters setProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049121e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf68;
  _swift_beginAccess(param_1 + _DAT_11309cf68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1049121f4; end: 104912253;  */

void FUN_1049121f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 104912254; end: 1049122e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912254(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf68;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1049122e8; end: 1049122f3; -[FBSDKLoginCompletionParameters accessTokenString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049122e8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cf70);
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



/* Entry: 1049122f4; end: 1049122ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049122f4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cf70);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912300; end: 10491230b; -[FBSDKLoginCompletionParameters setAccessTokenString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912300(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cf70);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10491230c; end: 104912357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491230c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf70);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104912358; end: 104912363; -[FBSDKLoginCompletionParameters nonceString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912358(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cf78);
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



/* Entry: 104912364; end: 10491236f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912364(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cf78);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912370; end: 10491237b; -[FBSDKLoginCompletionParameters setNonceString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912370(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cf78);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10491237c; end: 1049123c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491237c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf78);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049123c8; end: 1049123d3; -[FBSDKLoginCompletionParameters authenticationTokenString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049123c8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cf80);
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



/* Entry: 1049123d4; end: 1049123df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049123d4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cf80);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049123e0; end: 1049123eb; -[FBSDKLoginCompletionParameters setAuthenticationTokenString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049123e0(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cf80);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049123ec; end: 104912437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049123ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf80);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104912438; end: 104912443; -[FBSDKLoginCompletionParameters code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912438(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cf88);
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



/* Entry: 104912444; end: 10491244f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912444(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cf88);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912450; end: 10491245b; -[FBSDKLoginCompletionParameters setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912450(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cf88);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10491245c; end: 1049124a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491245c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf88);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049124a8; end: 1049124b3; -[FBSDKLoginCompletionParameters permissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049124a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf90;
  _swift_beginAccess(param_1 + _DAT_11309cf90,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1048f07b4(0);
    FUN_1048f07e8();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049124b4; end: 1049124bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049124b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf90;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf90,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049124c0; end: 1049124cb; -[FBSDKLoginCompletionParameters setPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049124c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_1048f07b4(0);
    uVar3 = uVar2;
    FUN_1048f07e8();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar2,uVar3)
    ;
  }
  lVar1 = _DAT_11309cf90;
  _swift_beginAccess(param_1 + _DAT_11309cf90,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1049124cc; end: 10491251f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049124cc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309cf90;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf90,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 104912520; end: 10491252b; -[FBSDKLoginCompletionParameters declinedPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912520(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cf98;
  _swift_beginAccess(param_1 + _DAT_11309cf98,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1048f07b4(0);
    FUN_1048f07e8();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10491252c; end: 104912537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491252c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf98;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf98,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104912538; end: 104912543; -[FBSDKLoginCompletionParameters setDeclinedPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912538(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_1048f07b4(0);
    uVar3 = uVar2;
    FUN_1048f07e8();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar2,uVar3)
    ;
  }
  lVar1 = _DAT_11309cf98;
  _swift_beginAccess(param_1 + _DAT_11309cf98,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104912544; end: 104912597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912544(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309cf98;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf98,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 104912598; end: 1049125a3; -[FBSDKLoginCompletionParameters expiredPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912598(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfa0;
  _swift_beginAccess(param_1 + _DAT_11309cfa0,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1048f07b4(0);
    FUN_1048f07e8();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049125a4; end: 10491262f;  */

void FUN_1049125a4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1048f07b4(0);
    FUN_1048f07e8();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104912630; end: 10491267b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912630(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cfa0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfa0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 10491267c; end: 104912687; -[FBSDKLoginCompletionParameters setExpiredPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491267c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_1048f07b4(0);
    uVar3 = uVar2;
    FUN_1048f07e8();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar2,uVar3)
    ;
  }
  lVar1 = _DAT_11309cfa0;
  _swift_beginAccess(param_1 + _DAT_11309cfa0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104912688; end: 104912707;  */

void FUN_104912688(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1048f07b4(0);
    uVar2 = uVar1;
    FUN_1048f07e8();
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2)
    ;
  }
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104912708; end: 10491275b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912708(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309cfa0;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfa0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 10491275c; end: 104912767; -[FBSDKLoginCompletionParameters appID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491275c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cfa8);
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



/* Entry: 104912768; end: 104912773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912768(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cfa8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912774; end: 10491277f; -[FBSDKLoginCompletionParameters setAppID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912774(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cfa8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104912780; end: 1049127cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912780(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfa8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049127cc; end: 1049127d7; -[FBSDKLoginCompletionParameters userID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049127cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cfb0);
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



/* Entry: 1049127d8; end: 1049127e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049127d8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cfb0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049127e4; end: 1049127ef; -[FBSDKLoginCompletionParameters setUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049127e4(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cfb0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1049127f0; end: 10491283b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049127f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfb0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10491283c; end: 1049128ab; -[FBSDKLoginCompletionParameters error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491283c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cfb8;
  _swift_beginAccess(param_1 + _DAT_11309cfb8,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_errorRetain(lVar1);
    lVar2 = lVar1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar1);
    _swift_errorRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049128ac; end: 1049128f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049128ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cfb8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfb8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_errorRetain(uVar2);
  return uVar2;
}



/* Entry: 1049128f8; end: 10491296f; -[FBSDKLoginCompletionParameters setError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049128f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfb8;
  _swift_beginAccess(param_1 + _DAT_11309cfb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  _objc_retain(param_3);
  _swift_errorRelease(uVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 104912970; end: 104912a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912970(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309cfb8;
  puVar1 = PTR__swift_errorRelease_11034f318;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfb8,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 104912a18; end: 104912a23; -[FBSDKLoginCompletionParameters expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912a18(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  lVar5 = _DAT_11309cfc0;
  puVar4 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_11309cfc0,auStack_48,0,0);
  func_0x0001009f0578(param_1 + lVar5,puVar4);
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



/* Entry: 104912a24; end: 104912a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912a24(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfc0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfc0,auStack_48,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 104912a30; end: 104912a3b; -[FBSDKLoginCompletionParameters setExpirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912a30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
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
  lVar1 = _DAT_11309cfc0;
  _swift_beginAccess(param_1 + _DAT_11309cfc0,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104912a3c; end: 104912a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912a3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfc0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfc0,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 104912a88; end: 104912a93; -[FBSDKLoginCompletionParameters dataAccessExpirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912a88(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  lVar5 = _DAT_11309cfc8;
  puVar4 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_11309cfc8,auStack_48,0,0);
  func_0x0001009f0578(param_1 + lVar5,puVar4);
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



/* Entry: 104912a94; end: 104912b5f;  */

void FUN_104912a94(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar3 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = auStack_50 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0,0);
  func_0x0001009f0578(param_1 + lVar3,puVar4);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar3 + -8);
  puVar1 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar3);
  uVar2 = 0;
  if ((int)puVar1 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104912b60; end: 104912bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912b60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfc8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfc8,auStack_48,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 104912bbc; end: 104912bc7; -[FBSDKLoginCompletionParameters setDataAccessExpirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912bbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
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
  lVar1 = _DAT_11309cfc8;
  _swift_beginAccess(param_1 + _DAT_11309cfc8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104912bc8; end: 104912cab;  */

void FUN_104912bc8(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar2 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar2,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0x21,0);
  lVar1 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar2,param_1 + lVar3);
  _swift_endAccess(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 104912cac; end: 104912d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912cac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cfc8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cfc8,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 104912d50; end: 104912d5b; -[FBSDKLoginCompletionParameters challenge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912d50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cfd0);
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



/* Entry: 104912d5c; end: 104912d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912d5c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cfd0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912d68; end: 104912d73; -[FBSDKLoginCompletionParameters setChallenge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912d68(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cfd0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104912d74; end: 104912dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912d74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfd0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104912dc0; end: 104912dcb; -[FBSDKLoginCompletionParameters graphDomain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912dc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cfd8);
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



/* Entry: 104912dcc; end: 104912dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912dcc(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cfd8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912dd8; end: 104912de3; -[FBSDKLoginCompletionParameters setGraphDomain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912dd8(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cfd8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104912de4; end: 104912e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912de4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfd8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104912e34; end: 104912e3f; -[FBSDKLoginCompletionParameters userTokenNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912e34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309cfe0);
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



/* Entry: 104912e40; end: 104912eb3;  */

void FUN_104912e40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104912eb4; end: 104912f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104912eb4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309cfe0);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 104912f10; end: 104912f1b; -[FBSDKLoginCompletionParameters setUserTokenNonce:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912f10(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_11309cfe0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104912f1c; end: 104912f93;  */

void FUN_104912f1c(long param_1,long param_2,long param_3,long *param_4)

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



/* Entry: 104912f94; end: 104913037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912f94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfe0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104913038; end: 1049131ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104913038(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11309cf60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cf68) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf70);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf78);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cf88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cf90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cf98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cfa0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfa8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cfb8) = 0;
  lVar2 = _DAT_11309cfc0;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(unaff_x20 + lVar2,1,1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_11309cfc8,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309cfe0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049131ac; end: 1049131cb; -[FBSDKLoginCompletionParameters init] */

void FUN_1049131ac(void)

{
  FUN_104913038();
  return;
}



/* Entry: 1049131cc; end: 1049131ff;  */

void FUN_1049131cc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104913200; end: 10491334b; -[FBSDKLoginCompletionParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104913200(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309cf60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309cf68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cf98));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cfa0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cfa8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cfb0 + 8));
  _swift_errorRelease(*(undefined8 *)(param_1 + _DAT_11309cfb8));
  func_0x0001000d1dcc(param_1 + _DAT_11309cfc0);
  func_0x0001000d1dcc(param_1 + _DAT_11309cfc8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cfd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cfd8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309cfe0 + 8))
  ;
  return;
}



/* Entry: 10491334c; end: 104913353;  */

void FUN_10491334c(void)

{
  if (lRam000000011309d010 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e825b2c);
  return;
}



/* Entry: 104913354; end: 104913463;  */

void FUN_104913354(undefined8 param_1)

{
  if (lRam000000011309d010 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e825b2c);
  return;
}



/* Entry: 104913464; end: 10491355b;  */

undefined4 FUN_104913464(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar2 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar3 = lVar2;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(lVar2);
  _swift_bridgeObjectRelease(param_2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Entry: 10491355c; end: 1049135a3;  */

undefined8 FUN_10491355c(void)

{
  return 2;
}



/* Entry: 1049135a4; end: 104913643;  */

uint FUN_1049135a4(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0x73656c7572;
  if (*param_1 == '\0') {
    lVar5 = 0x726f74617265706f;
  }
  lVar1 = -0x1b00000000000000;
  if (*param_1 == '\0') {
    lVar1 = -0x1800000000000000;
  }
  lVar2 = 0x73656c7572;
  if (*param_2 == '\0') {
    lVar2 = 0x726f74617265706f;
  }
  lVar3 = -0x1b00000000000000;
  if (*param_2 == '\0') {
    lVar3 = -0x1800000000000000;
  }
  if (lVar5 == lVar2 && lVar1 == lVar3) {
    uVar4 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar1,lVar2,lVar3,0);
    uVar4 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar3);
  return uVar4 & 1;
}



/* Entry: 104913644; end: 10491378f;  */

void FUN_104913644(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x73656c7572;
  if (cVar3 == '\0') {
    uVar1 = 0x726f74617265706f;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 == '\0') {
    uVar2 = 0xe800000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104913790; end: 10491380f;  */

void FUN_104913790(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar4 = lVar3;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(lVar3);
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = 1;
  if (lVar4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104913810; end: 104913883;  */

void FUN_104913810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x73656c7572;
  if (*unaff_x20 == '\0') {
    uVar1 = 0x726f74617265706f;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 == '\0') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 104913884; end: 104913907;  */

void FUN_104913884(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar2 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar3 = lVar2;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(lVar2);
  _swift_bridgeObjectRelease(param_3);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104913908; end: 10491391f;  */

undefined1  [16] FUN_104913908(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104913920; end: 10491396f;  */

void FUN_104913920(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010491453c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104913970; end: 10491398f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104913970(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_11309d4f8);
}



/* Entry: 104913990; end: 104913a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104913990(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309d4f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309d500) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104913a58; end: 104913b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104913a58(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  cVar2 = *(char *)(unaff_x20 + _DAT_11309d4f8);
  uVar8 = (uint)(cVar2 != '\x02');
  lVar9 = *(long *)(*(long *)(unaff_x20 + _DAT_11309d500) + 0x10);
  if (lVar9 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_11309d500) + 0x20;
    do {
      FUN_104913b38(lVar7,auStack_78);
      lVar4 = lStack_58;
      uVar3 = uStack_60;
      func_0x0001000a8868(auStack_78,uStack_60);
      uVar5 = param_1;
      (**(code **)(lVar4 + 8))(param_1,uVar3,lVar4);
      func_0x0001000834e4(auStack_78);
      uVar6 = (uint)uVar5;
      uVar1 = uVar8 & uVar6;
      if (cVar2 != '\x01') {
        uVar1 = uVar8;
      }
      if (cVar2 == '\x02') {
        uVar1 = uVar1 | uVar6;
      }
      uVar6 = uVar8 & (uVar6 ^ 1);
      uVar8 = uVar1;
      if (cVar2 == '\x03') {
        uVar8 = uVar6;
      }
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return uVar8 & 1;
}



/* Entry: 104913b38; end: 104913b7b;  */

long FUN_104913b38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104913b7c; end: 104913b83; +[_TtC8FBAEMKit27AEMAdvertiserMultiEntryRule supportsSecureCoding] */

undefined8 FUN_104913b7c(void)

{
  return 1;
}



/* Entry: 104913b84; end: 104913b8b;  */

undefined8 FUN_104913b84(void)

{
  return 1;
}



/* Entry: 104913b8c; end: 104913bbb;  */

void FUN_104913b8c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104913bbc(param_1);
  return;
}



/* Entry: 104913bbc; end: 104913dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104913bbc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  iVar1 = (int)&lStack_b0;
  _swift_getObjectType();
  uVar2 = 0x726f74617265706f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f74617265706f,0xe800000000000000);
  lVar3 = param_1;
  _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar2);
  _objc_release(uVar2);
  func_0x000104916000();
  lVar6 = lVar3;
  func_0x000104914100();
  _swift_initStackObject();
  *(undefined8 *)(lVar6 + 0x18) = 6;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  uVar2 = 0;
  func_0x0001011eb06c();
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(long *)(lVar6 + 0x28) = unaff_x20;
  uVar2 = 0;
  func_0x000104918630();
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  lVar4 = lVar6;
  FUN_104913dbc(lVar6);
  _swift_bridgeObjectRelease(lVar6);
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (auStack_98,lVar4,0x73656c7572,0xe500000000000000);
  _swift_bridgeObjectRelease(lVar4);
  if (lStack_80 == 0) {
    func_0x00010006e7f4(auStack_98);
    if (((uint)lVar3 & 0xff) != 0x15) goto LAB_104913d7c;
    lVar6 = 0;
  }
  else {
    uVar2 = 0x11309d508;
    func_0x0001048db364(0x11309d508);
    _swift_dynamicCast(&lStack_b0,auStack_98,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar6 = lStack_b0;
    if (iVar1 == 0) {
      lVar6 = 0;
    }
    if (((uint)lVar3 & 0xff) != 0x15) {
      if (lVar6 != 0) {
        _objc_allocWithZone();
        *(char *)(unaff_x20 + _DAT_11309d4f8) = (char)lVar3;
        *(long *)(unaff_x20 + _DAT_11309d500) = lVar6;
        puVar5 = auStack_a8;
        _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
        _objc_release(param_1);
        _swift_getObjectType();
        _swift_deallocPartialClassInstance();
        return puVar5;
      }
LAB_104913d7c:
      _objc_release(param_1);
      goto LAB_104913d84;
    }
  }
  _objc_release(param_1);
  _swift_bridgeObjectRelease(lVar6);
LAB_104913d84:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 104913dbc; end: 104913ed7;  */

undefined * FUN_104913dbc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    puStack_58 = puVar2;
  }
  else {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    FUN_1049142b8(0,lVar5,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar2 = puStack_58;
      uStack_68 = *puVar6;
      uVar3 = 0x11309d580;
      func_0x0001048db364(0x11309d580);
      uVar4 = 0x11309d588;
      func_0x0001048db364(0x11309d588);
      _swift_dynamicCast(&uStack_60,&uStack_68,uVar3,uVar4,7);
      uVar3 = uStack_60;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_58 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_1049142b8(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_58 + uVar1 * 8 + 0x20) = uVar3;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_58;
}



/* Entry: 104913ed8; end: 104913eff; -[_TtC8FBAEMKit27AEMAdvertiserMultiEntryRule initWithCoder:] */

void FUN_104913ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104913bbc();
  return;
}



/* Entry: 104913f00; end: 104913fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104913f00(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_11309d4f8);
  uVar2 = 0x726f74617265706f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f74617265706f,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar1,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11309d500);
  uVar2 = 0x11309d510;
  func_0x0001048db364(0x11309d510);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar2);
  uVar2 = 0x73656c7572;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73656c7572,0xe500000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104913fd0; end: 10491401f; -[_TtC8FBAEMKit27AEMAdvertiserMultiEntryRule encodeWithCoder:] */

void FUN_104913fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104913f00(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


