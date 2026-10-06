/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10463189c; end: 1046318fb; -[SCAdWebBrowserConfig withAttributionInfo:] */

void FUN_10463189c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104631738(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046318fc; end: 104631a17; -[SCAdWebBrowserConfig withPopupBridgeURLScheme:] */

void FUN_1046318fc(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x24));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104631a18; end: 104631b07; -[SCAdWebBrowserConfig withIgnoreSafeAreaInsets:] */

void FUN_104631a18(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x28)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631b08; end: 104631bf7; -[SCAdWebBrowserConfig withIsAdWebview:] */

void FUN_104631b08(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x2c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631bf8; end: 104631ce7; -[SCAdWebBrowserConfig withSource:] */

void FUN_104631bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x30)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631ce8; end: 104631dd7; -[SCAdWebBrowserConfig withAllowSafariBrowser:] */

void FUN_104631ce8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x34)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631dd8; end: 104631ee7; -[SCAdWebBrowserConfig withInitialRedirectQueryItemsToRetain:] */

void FUN_104631dd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  if (param_3 != 0) {
    uVar4 = 0;
    __s10Foundation12URLQueryItemVMa(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar4);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar6);
  iVar1 = *(int *)(lVar3 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + iVar1));
  *(long *)(lVar6 + iVar1) = param_3;
  func_0x0001018cf8d4(lVar6,puVar5);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar5,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104631ee8; end: 104631fd7; -[SCAdWebBrowserConfig withHasServerRedirect:] */

void FUN_104631ee8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x3c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631fd8; end: 1046320db;  */

undefined1 * FUN_104631fd8(long param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar6);
  iVar3 = *(int *)(lVar4 + 0x40);
  bVar2 = param_1 == 0;
  if (bVar2) {
    param_1 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  plVar1 = (long *)(lVar6 + iVar3);
  *plVar1 = param_1;
  *(bool *)(plVar1 + 1) = bVar2;
  func_0x0001018cf8d4(lVar6,puVar5);
  _objc_allocWithZone(unaff_x20);
  FUN_1046487dc(puVar5,unaff_x20);
  func_0x0001018cf918(lVar6);
  return puVar5;
}



/* Entry: 1046320dc; end: 10463213b; -[SCAdWebBrowserConfig withExpectedServerRedirectCount:] */

void FUN_1046320dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104631fd8(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10463213c; end: 104632257; -[SCAdWebBrowserConfig withExpectedServerRedirectResolvedUrlPrefix:] */

void FUN_10463213c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x44));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632258; end: 104632373; -[SCAdWebBrowserConfig withPrefetchHintsId:] */

void FUN_104632258(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x48));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632374; end: 104632463; -[SCAdWebBrowserConfig withEnableUsePrefetchHintsLoadedWebView:] */

void FUN_104632374(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x4c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104632464; end: 104632553; -[SCAdWebBrowserConfig withEnableExternalBrowser:] */

void FUN_104632464(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x50)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104632554; end: 104632643; -[SCAdWebBrowserConfig withIsRedirectExb:] */

void FUN_104632554(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x54)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104632644; end: 10463275f; -[SCAdWebBrowserConfig withGhostWriterUrl:] */

void FUN_104632644(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x58));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632760; end: 10463287b; -[SCAdWebBrowserConfig withGhostWriterConfig:] */

void FUN_104632760(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x5c));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10463287c; end: 104632997; -[SCAdWebBrowserConfig withAdId:] */

void FUN_10463287c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x60));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632998; end: 104632ab3; -[SCAdWebBrowserConfig withPageId:] */

void FUN_104632998(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 100));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632ab4; end: 104632bcf; -[SCAdWebBrowserConfig withAdServeItemId:] */

void FUN_104632ab4(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x68));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104632bd0; end: 104632cd3;  */

undefined1 * FUN_104632bd0(long param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar6);
  iVar3 = *(int *)(lVar4 + 0x6c);
  bVar2 = param_1 == 0;
  if (bVar2) {
    param_1 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  plVar1 = (long *)(lVar6 + iVar3);
  *plVar1 = param_1;
  *(bool *)(plVar1 + 1) = bVar2;
  func_0x0001018cf8d4(lVar6,puVar5);
  _objc_allocWithZone(unaff_x20);
  FUN_1046487dc(puVar5,unaff_x20);
  func_0x0001018cf918(lVar6);
  return puVar5;
}



/* Entry: 104632cd4; end: 104632d33; -[SCAdWebBrowserConfig withInteractiveIndex:] */

void FUN_104632cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104632bd0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104632d34; end: 104632e23; -[SCAdWebBrowserConfig withTrackSeqNum:] */

void FUN_104632d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x70)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104632e24; end: 104632f13; -[SCAdWebBrowserConfig withViewSeqNum:] */

void FUN_104632e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x74)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104632f14; end: 104633003; -[SCAdWebBrowserConfig withAdType:] */

void FUN_104632f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x78)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633004; end: 1046330f3; -[SCAdWebBrowserConfig withAdProductType:] */

void FUN_104633004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x7c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046330f4; end: 10463320f; -[SCAdWebBrowserConfig withAdRequestClientId:] */

void FUN_1046330f4(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x80));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104633210; end: 1046332ff; -[SCAdWebBrowserConfig withSnapIndex:] */

void FUN_104633210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x84)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633300; end: 1046333ef; -[SCAdWebBrowserConfig withAllowPreloading:] */

void FUN_104633300(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x88)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046333f0; end: 10463360b; -[SCAdWebBrowserConfig withCidParmas:] */

void FUN_1046333f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  iVar1 = *(int *)(lVar3 + 0x8c);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + iVar1));
  *(long *)(lVar5 + iVar1) = param_3;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10463360c; end: 10463366b; -[SCAdWebBrowserConfig withCidAutoCorrectServerRedirectDistance:] */

void FUN_10463360c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104633508(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10463366c; end: 104633787; -[SCAdWebBrowserConfig withExbAfterHtmlUrlResolvePrefixMatch:] */

void FUN_10463366c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x94));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104633788; end: 104633877; -[SCAdWebBrowserConfig withExbAfterHtmlUrlResolve:] */

void FUN_104633788(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x98)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633878; end: 104633a8b; -[SCAdWebBrowserConfig withExbSubNavOnly:] */

void FUN_104633878(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x9c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633a8c; end: 104633aeb; -[SCAdWebBrowserConfig withUrlParameterUpdate:] */

void FUN_104633a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104633968(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104633aec; end: 104633bdb; -[SCAdWebBrowserConfig withAllowDeeplink:] */

void FUN_104633aec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xa4)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633bdc; end: 104633cdf;  */

undefined1 * FUN_104633bdc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar5;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar5);
  iVar2 = *(int *)(lVar3 + 0xa8);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(param_2);
  }
  puVar1 = (undefined8 *)(lVar5 + iVar2);
  *puVar1 = param_1;
  *(bool *)(puVar1 + 1) = param_2 == 0;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(unaff_x20);
  FUN_1046487dc(puVar4,unaff_x20);
  func_0x0001018cf918(lVar5);
  return puVar4;
}



/* Entry: 104633ce0; end: 104633d3f; -[SCAdWebBrowserConfig withLifecycleExtensionTtlMs:] */

void FUN_104633ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104633bdc(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104633d40; end: 104633e43;  */

undefined1 * FUN_104633d40(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar5;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar5);
  iVar2 = *(int *)(lVar3 + 0xac);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(param_2);
  }
  puVar1 = (undefined8 *)(lVar5 + iVar2);
  *puVar1 = param_1;
  *(bool *)(puVar1 + 1) = param_2 == 0;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(unaff_x20);
  FUN_1046487dc(puVar4,unaff_x20);
  func_0x0001018cf918(lVar5);
  return puVar4;
}



/* Entry: 104633e44; end: 104633ea3; -[SCAdWebBrowserConfig withLifecycleExtensionMinDwellTimeMs:] */

void FUN_104633e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104633d40(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104633ea4; end: 104633f93; -[SCAdWebBrowserConfig withThirdPartyLoginSource:] */

void FUN_104633ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0xb0)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104633f94; end: 104634083; -[SCAdWebBrowserConfig withIsInOperaLayerView:] */

void FUN_104633f94(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xb4)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104634084; end: 10463421b; -[SCAdWebBrowserConfig withDestinationUrl:] */

void FUN_104634084(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_00;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,param_3 == 0,1);
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  func_0x00010137dd74(lVar6,lVar5 + *(int *)(lVar2 + 0xb8));
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar4,uVar1);
  _objc_release(param_1);
  FUN_104637ce8(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10463421c; end: 10463430b; -[SCAdWebBrowserConfig withEnablePromoInfo:] */

void FUN_10463421c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xbc)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10463430c; end: 104634427; -[SCAdWebBrowserConfig withSaid:] */

void FUN_10463430c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0xc0));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104634428; end: 104634543; -[SCAdWebBrowserConfig withDynamicScriptConfig:] */

void FUN_104634428(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0xc4));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104634544; end: 104634633; -[SCAdWebBrowserConfig withDisallowPrivacyPrompt:] */

void FUN_104634544(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 200)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104634634; end: 104634723; -[SCAdWebBrowserConfig withEnableAppendingClickIdForExb:] */

void FUN_104634634(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xcc)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104634724; end: 104634813; -[SCAdWebBrowserConfig withEnableSkoverlay:] */

void FUN_104634724(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xd0)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104634814; end: 104634903; -[SCAdWebBrowserConfig withDisableCustomUserAgent:] */

void FUN_104634814(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0xd4)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104634904; end: 104634a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104634904(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_70 [2];
  
  _swift_getObjectType();
  lVar2 = 0;
  auStack_70[1] = unaff_x20;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar3 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar5);
  puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar2 + 0xd8));
  func_0x0001034a6828(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6]);
  if (param_1 == 0) {
    uVar10 = 0;
    uVar7 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_113091678);
    uVar7 = ((undefined8 *)(param_1 + _DAT_113091678))[1];
    uVar11 = *(undefined8 *)(param_1 + _DAT_113091680);
    uVar8 = ((undefined8 *)(param_1 + _DAT_113091680))[1];
    uVar4 = *(undefined8 *)(param_1 + _DAT_113091688);
    uVar9 = ((undefined8 *)(param_1 + _DAT_113091688))[1];
    uVar6 = *(undefined8 *)(param_1 + _DAT_113091690);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
  }
  *puVar1 = uVar10;
  puVar1[1] = uVar7;
  puVar1[2] = uVar11;
  puVar1[3] = uVar8;
  puVar1[4] = uVar4;
  puVar1[5] = uVar9;
  puVar1[6] = uVar6;
  func_0x0001018cf8d4(lVar5,lVar3);
  _objc_allocWithZone(auStack_70[1]);
  FUN_1046487dc(lVar3,auStack_70[1]);
  func_0x0001018cf918(lVar5);
  return lVar3;
}



/* Entry: 104634aa0; end: 104634aff; -[SCAdWebBrowserConfig withRetargetPromptInfo:] */

void FUN_104634aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104634904(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104634b00; end: 104635c8b;  */

undefined8 FUN_104634b00(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  ulong uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  undefined8 uVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_fc;
  ulong uStack_f8;
  ulong uStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  double dStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar33 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar28 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar37 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar37 + -8) + 0x40));
  uVar31 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar38 = uVar31 - extraout_x12;
  lVar37 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar37 + -8) + 0x40));
  lVar27 = uVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar36 = lVar27 - extraout_x12_00;
  uVar22 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar15 = *param_1;
    if (((uVar15 != *param_2) || (param_1[1] != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar15 & 1) == 0)) {
      return 0;
    }
  }
  lVar16 = 0;
  uStack_d8 = uVar31;
  uStack_d0 = lVar27;
  dStack_c8 = (double)lVar28;
  FUN_1046305a8();
  iVar13 = *(int *)(lVar16 + 0x14);
  lVar28 = (long)*(int *)(lVar37 + 0x30);
  uStack_e0 = lVar37;
  uStack_c0 = lVar16;
  func_0x000104630640((long)param_1 + (long)iVar13,uVar36,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)param_2 + (long)iVar13,uVar36 + lVar28,0x112d36580,&UNK_10d9016d0);
  pcVar32 = *(code **)(lVar33 + 0x30);
  lVar37 = uVar36;
  (*pcVar32)(uVar36,1,lVar14);
  if ((int)lVar37 == 1) {
    lVar28 = uVar36 + lVar28;
    (*pcVar32)(lVar28,1,lVar14);
    if ((int)lVar28 != 1) goto LAB_104634d5c;
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uVar36,uVar38,0x112d36580,&UNK_10d9016d0);
    lVar37 = uVar36 + lVar28;
    (*pcVar32)(lVar37,1,lVar14);
    dVar10 = dStack_c8;
    if ((int)lVar37 == 1) {
      (**(code **)(lVar33 + 8))(uVar38,lVar14);
      goto LAB_104634d5c;
    }
    dVar17 = dStack_c8;
    (**(code **)(lVar33 + 0x20))(dStack_c8,uVar36 + lVar28,lVar14);
    func_0x000101553b98();
    uVar22 = uVar38;
    __sSQ2eeoiySbx_xtFZTj(uVar38,dVar10,lVar14,dVar17);
    pcVar29 = *(code **)(lVar33 + 8);
    (*pcVar29)(dVar10,lVar14);
    (*pcVar29)(uVar38,lVar14);
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  uVar36 = uStack_c0;
  uVar22 = *(ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x18));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x18));
  if (uVar22 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar31 = uVar22;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x1c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x1c))) {
    return 0;
  }
  puVar18 = (undefined8 *)((long)param_1 + (long)*(int *)(uVar36 + 0x20));
  uVar19 = *puVar18;
  lVar37 = puVar18[1];
  uVar22 = puVar18[2];
  uVar35 = puVar18[3];
  uVar34 = puVar18[4];
  puVar18 = (undefined8 *)((long)param_2 + (long)*(int *)(uVar36 + 0x20));
  uVar26 = *puVar18;
  lVar28 = puVar18[1];
  uVar30 = puVar18[2];
  uVar8 = puVar18[3];
  uVar24 = puVar18[4];
  if (lVar37 == 1) {
    if (lVar28 != 1) {
LAB_104634e94:
      func_0x000104637d28(uVar26,lVar28,uVar30,uVar8);
      func_0x000104637d28(uVar19,lVar37,uVar22,uVar35,uVar34);
      FUN_104635c8c(uVar19,lVar37,uVar22,uVar35,uVar34);
      FUN_104635c8c(uVar26,lVar28,uVar30,uVar8,uVar24);
      return 0;
    }
  }
  else {
    if (lVar28 == 1) goto LAB_104634e94;
    uStack_f8 = uVar8;
    uStack_f0 = uVar19;
    dStack_e8 = (double)uVar22;
    uStack_b8 = uVar19;
    lStack_b0 = lVar37;
    uStack_a8 = uVar22;
    uStack_a0 = uVar35;
    uStack_98 = uVar34;
    uStack_90 = uVar26;
    lStack_88 = lVar28;
    uStack_80 = uVar30;
    uStack_78 = uVar8;
    uStack_70 = uVar24;
    func_0x000104637d28(uVar26,lVar28,uVar30,uVar8);
    func_0x000104637d28(uStack_f0,lVar37,dStack_e8,uVar35,uVar34);
    puVar18 = &uStack_b8;
    FUN_1046442cc(puVar18,&uStack_90);
    uStack_fc = (uint)puVar18;
    _swift_bridgeObjectRelease(lVar28);
    _swift_bridgeObjectRelease(uStack_f8);
    FUN_104635c8c(uStack_f0,lVar37,dStack_e8,uVar35,uVar34);
    if ((uStack_fc & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uVar36 + 0x24));
  uVar22 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uVar36 + 0x24));
  uVar31 = puVar2[1];
  if (uVar22 == 0) {
    if (uVar31 != 0) {
      return 0;
    }
  }
  else {
    if (uVar31 == 0) {
      return 0;
    }
    uVar38 = *puVar1;
    if (((uVar38 != *puVar2) || (uVar22 != uVar31)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar38 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x28)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x28))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x2c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x2c))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uVar36 + 0x30)) !=
      *(int *)((long)param_2 + (long)*(int *)(uVar36 + 0x30))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x34)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x34))) {
    return 0;
  }
  uVar22 = *(ulong *)((long)param_1 + (long)*(int *)(uVar36 + 0x38));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uVar36 + 0x38));
  if (uVar22 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar31 = uVar22;
    _swift_bridgeObjectRetain();
    FUN_10464eb08();
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x3c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x3c))) {
    return 0;
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(uVar36 + 0x40));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(uVar36 + 0x40));
  cVar12 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x44));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x44));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x48));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x48));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x4c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x4c))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x50)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x50))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x54)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x54))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x58));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x58));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x60));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x60));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 100));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 100));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x68));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x68));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x6c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x6c));
  cVar12 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x70)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x70))) {
    return 0;
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x74)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x78)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x78))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x7c)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x7c))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x80));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x80));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x84)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x84))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x88)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x88))) {
    return 0;
  }
  uVar36 = *(ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x8c));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x8c));
  if (uVar36 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar22 = uVar36;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar36);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x90));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x90));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x94));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x94));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x98)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x98))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x9c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x9c))) {
    return 0;
  }
  puVar18 = (undefined8 *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar37 = puVar18[1];
  puVar7 = (undefined8 *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar28 = puVar7[1];
  if (lVar37 == 0) {
    if (lVar28 != 0) {
      return 0;
    }
  }
  else {
    if (lVar28 == 0) {
      return 0;
    }
    uVar30 = *puVar18;
    uVar35 = puVar18[2];
    dStack_e8 = (double)*puVar7;
    uVar26 = puVar7[2];
    func_0x0001046305e0(dStack_e8,lVar28,uVar26);
    func_0x0001046305e0(uVar30,lVar37,uVar35);
    uVar19 = uVar30;
    FUN_1047ae93c(uVar30,lVar37,uVar35,dStack_e8,lVar28,uVar26);
    dStack_e8 = (double)CONCAT44(dStack_e8._4_4_,(int)uVar19);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(lVar28);
    func_0x000104630610(uVar30,lVar37,uVar35);
    if (((ulong)dStack_e8 & 1) == 0) {
      return 0;
    }
  }
  uVar36 = uStack_d0;
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa4))) {
    return 0;
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa8));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa8));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xac));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xac));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xb0)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xb0))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xb4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xb4))) {
    return 0;
  }
  iVar13 = *(int *)(uStack_c0 + 0xb8);
  lVar37 = (long)*(int *)(uStack_e0 + 0x30);
  func_0x000104630640((long)param_1 + (long)iVar13,uStack_d0,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)param_2 + (long)iVar13,uVar36 + lVar37,0x112d36580,&UNK_10d9016d0);
  (*pcVar32)(uVar36,1,lVar14);
  uVar22 = uStack_d0;
  if ((int)uVar36 == 1) {
    lVar37 = uStack_d0 + lVar37;
    (*pcVar32)(lVar37,1,lVar14);
    uVar36 = uStack_d0;
    if ((int)lVar37 != 1) {
LAB_104634d5c:
      FUN_104637ce8(uVar36,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    FUN_104637ce8(uStack_d0,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uStack_d0,uStack_d8,0x112d36580,&UNK_10d9016d0);
    lVar28 = uVar22 + lVar37;
    (*pcVar32)(lVar28,1,lVar14);
    dVar10 = dStack_c8;
    uVar36 = uStack_d0;
    if ((int)lVar28 == 1) {
      (**(code **)(lVar33 + 8))(uStack_d8,lVar14);
      uVar36 = uStack_d0;
      goto LAB_104634d5c;
    }
    dVar17 = dStack_c8;
    (**(code **)(lVar33 + 0x20))(dStack_c8,uStack_d0 + lVar37,lVar14);
    func_0x000101553b98();
    uVar22 = uStack_d8;
    uVar31 = uStack_d8;
    __sSQ2eeoiySbx_xtFZTj(uStack_d8,dVar10,lVar14,dVar17);
    pcVar32 = *(code **)(lVar33 + 8);
    (*pcVar32)(dVar10,lVar14);
    (*pcVar32)(uVar22,lVar14);
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xbc)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xbc))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 200)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 200))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xcc)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xcc))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd0)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd0))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd4))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd8));
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd8));
  uVar36 = *param_1;
  uVar21 = param_1[1];
  uVar22 = param_1[2];
  uVar9 = param_1[3];
  uVar25 = param_1[4];
  uVar31 = param_1[5];
  dVar10 = (double)param_1[6];
  uVar38 = *param_2;
  uVar11 = param_2[1];
  uVar15 = param_2[2];
  uStack_e0 = param_2[3];
  uStack_f8 = param_2[4];
  uStack_f0 = param_2[5];
  dStack_e8 = (double)param_2[6];
  uStack_d8 = uVar25;
  uStack_d0 = uVar31;
  dStack_c8 = dVar10;
  uStack_c0 = uVar9;
  if (uVar21 == 0) {
    if (uVar11 == 0) {
      func_0x000103bfd2e8(uVar36,0,uVar22,uVar9,uVar25,uVar31,dVar10);
      func_0x000103bfd2e8(uVar38,0,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
LAB_104635c6c:
      func_0x0001034a6828(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      return 1;
    }
  }
  else if (uVar11 != 0) {
    if ((((uVar36 == uVar38) && (uVar21 == uVar11)) ||
        (uVar31 = uVar36,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar36,uVar21,uVar38,uVar11,0), (uVar31 & 1) != 0)) &&
       (((uVar22 == uVar15 && (uStack_c0 == uStack_e0)) ||
        (uVar31 = uVar22,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,uStack_c0,uVar15,uStack_e0,0), (uVar31 & 1) != 0)))) {
      uVar23 = uStack_d0;
      uVar25 = uStack_d8;
      uVar9 = uStack_f0;
      uVar31 = uStack_f8;
      if ((uStack_d8 == uStack_f8) && (uStack_d0 == uStack_f0)) {
        func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
        uVar31 = uStack_e0;
        dVar10 = dStack_e8;
        func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uVar25,uVar23,dStack_e8);
        func_0x0001034a6828(uVar38,uVar11,uVar15,uVar31,uVar25,uVar23,dVar10);
      }
      else {
        uVar20 = uStack_d8;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uStack_d8,uStack_d0,uStack_f8,uStack_f0,0);
        uStack_fc = (uint)uVar20;
        func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uVar25,uVar23,dStack_c8);
        uVar25 = uStack_e0;
        dVar10 = dStack_e8;
        func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uVar31,uVar9,dStack_e8);
        func_0x0001034a6828(uVar38,uVar11,uVar15,uVar25,uVar31,uVar9,dVar10);
        uVar23 = uStack_c0;
        uVar31 = uStack_d8;
        uVar38 = uStack_d0;
        dVar17 = dStack_c8;
        if ((uStack_fc & 1) == 0) goto LAB_104635c34;
      }
      uVar23 = uStack_c0;
      uVar31 = uStack_d8;
      uVar38 = uStack_d0;
      dVar17 = dStack_c8;
      if (dStack_c8 == dStack_e8) goto LAB_104635c6c;
    }
    else {
      func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      uVar25 = uStack_e0;
      dVar10 = dStack_e8;
      uVar9 = uStack_f0;
      uVar31 = uStack_f8;
      func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
      func_0x0001034a6828(uVar38,uVar11,uVar15,uVar25,uVar31,uVar9,dVar10);
      uVar23 = uStack_c0;
      uVar31 = uStack_d8;
      uVar38 = uStack_d0;
      dVar17 = dStack_c8;
    }
    goto LAB_104635c34;
  }
  func_0x000103bfd2e8(uVar36,uVar21,uVar22,uVar9,uVar25,uVar31,dVar10);
  uVar23 = uStack_e0;
  dVar17 = dStack_e8;
  uStack_110 = uVar11;
  uStack_108 = uVar38;
  func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
  func_0x0001034a6828(uVar36,uVar21,uVar22,uVar9,uVar25,uVar31,dVar10);
  uVar36 = uStack_108;
  uVar21 = uStack_110;
  uVar22 = uVar15;
  uVar31 = uStack_f8;
  uVar38 = uStack_f0;
LAB_104635c34:
  func_0x0001034a6828(uVar36,uVar21,uVar22,uVar23,uVar31,uVar38,dVar17);
  return 0;
}



/* Entry: 104635c8c; end: 104635cbf;  */

void FUN_104635c8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 104635cc0; end: 104636247;  */

long * FUN_104635cc0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    lVar16 = (long)*(int *)(param_3 + 0x14);
    lVar11 = 0;
    __s10Foundation3URLVMa();
    lVar17 = *(long *)(lVar11 + -8);
    pcVar19 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    lVar14 = (long)param_2 + lVar16;
    (*pcVar19)(lVar14,1,lVar11);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,lVar11);
    }
    else {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    lVar14 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (lVar14 == 1) {
      uVar15 = *puVar2;
      uVar21 = puVar2[3];
      uVar20 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar15;
      puVar1[3] = uVar21;
      puVar1[2] = uVar20;
      puVar1[4] = puVar2[4];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar14;
      uVar15 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar15;
      puVar1[4] = puVar2[4];
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar15);
    }
    iVar9 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x30);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x38);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar13 = *(undefined8 *)((long)param_2 + (long)iVar9);
    *(undefined8 *)((long)param_1 + (long)iVar9) = uVar13;
    iVar9 = *(int *)(param_3 + 0x40);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar9 = *(int *)(param_3 + 0x48);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar20 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar20;
    iVar9 = *(int *)(param_3 + 0x50);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x58);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    iVar9 = *(int *)(param_3 + 0x60);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    iVar9 = *(int *)(param_3 + 0x68);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    iVar9 = *(int *)(param_3 + 0x70);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x78);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x74)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x74));
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x80);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    iVar9 = *(int *)(param_3 + 0x88);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0x90);
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) = uVar18;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar9 = *(int *)(param_3 + 0x98);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0xa0);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    lVar14 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar8);
    if (lVar14 == 0) {
      uVar15 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar15;
      puVar1[2] = puVar2[2];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar14;
      uVar15 = puVar2[2];
      puVar1[2] = uVar15;
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar15);
    }
    iVar9 = *(int *)(param_3 + 0xa8);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar9 = *(int *)(param_3 + 0xb0);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
    lVar16 = (long)*(int *)(param_3 + 0xb8);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
    lVar14 = (long)param_2 + lVar16;
    (*pcVar19)(lVar14,1,lVar11);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,lVar11);
    }
    else {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    iVar9 = *(int *)(param_3 + 0xc0);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    iVar9 = *(int *)(param_3 + 200);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0xd0);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
    *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
    iVar9 = *(int *)(param_3 + 0xd8);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    lVar14 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    if (lVar14 == 0) {
      uVar15 = *puVar2;
      uVar21 = puVar2[3];
      uVar20 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar15;
      puVar1[3] = uVar21;
      puVar1[2] = uVar20;
      uVar15 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar15;
      puVar1[6] = puVar2[6];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar14;
      uVar15 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar15;
      uVar20 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar20;
      puVar1[6] = puVar2[6];
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar20);
    }
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar12 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar14 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104636248; end: 104636437;  */

void FUN_104636248(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  lVar3 = param_1 + *(int *)(param_2 + 0x20);
  if (*(long *)(lVar3 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x44) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x48) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x58) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x5c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x60) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 100) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x68) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x80) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x8c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x94) + 8));
  lVar3 = param_1 + *(int *)(param_2 + 0xa0);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xc0) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0xc4) + 8));
  param_1 = param_1 + *(int *)(param_2 + 0xd8);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 104636438; end: 104637227;  */

undefined8 * FUN_104636438(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar13 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar13;
  lVar14 = (long)*(int *)(param_3 + 0x14);
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar10 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  _swift_bridgeObjectRetain(uVar13);
  lVar12 = (long)param_2 + lVar14;
  (*pcVar17)(lVar12,1,lVar10);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar10);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,lVar10);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar14,(long)param_2 + lVar14,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar12 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (lVar12 == 1) {
    uVar13 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    puVar1[4] = puVar2[4];
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar12;
    uVar13 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar13;
    puVar1[4] = puVar2[4];
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
  }
  iVar9 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar11 = *(undefined8 *)((long)param_2 + (long)iVar9);
  *(undefined8 *)((long)param_1 + (long)iVar9) = uVar11;
  iVar9 = *(int *)(param_3 + 0x40);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar9 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar18 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar18;
  iVar9 = *(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x58);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x54)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x54));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  iVar9 = *(int *)(param_3 + 0x60);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  iVar9 = *(int *)(param_3 + 0x68);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 100));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 100));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  iVar9 = *(int *)(param_3 + 0x70);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x6c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x6c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x78);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x74)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x74));
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x80);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x7c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  iVar9 = *(int *)(param_3 + 0x88);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x84)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x84));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0x90);
  uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x8c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x8c)) = uVar16;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar9 = *(int *)(param_3 + 0x98);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x94));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x94));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xa0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x9c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  lVar12 = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar8);
  if (lVar12 == 0) {
    uVar13 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[2] = puVar2[2];
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar12;
    uVar13 = puVar2[2];
    puVar1[2] = uVar13;
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
  }
  iVar9 = *(int *)(param_3 + 0xa8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xa4));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar9 = *(int *)(param_3 + 0xb0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xac));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xac));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar9) = *(undefined8 *)((long)param_2 + (long)iVar9);
  lVar14 = (long)*(int *)(param_3 + 0xb8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xb4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xb4));
  lVar12 = (long)param_2 + lVar14;
  (*pcVar17)(lVar12,1,lVar10);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar10);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,lVar10);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar14,(long)param_2 + lVar14,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0xc0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  iVar9 = *(int *)(param_3 + 200);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xd0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
  *(undefined1 *)((long)param_1 + (long)iVar9) = *(undefined1 *)((long)param_2 + (long)iVar9);
  iVar9 = *(int *)(param_3 + 0xd8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar9);
  lVar12 = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar13);
  if (lVar12 == 0) {
    uVar13 = *param_2;
    uVar19 = param_2[3];
    uVar18 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    uVar13 = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar13;
    puVar1[6] = param_2[6];
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = lVar12;
    uVar13 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar13;
    uVar18 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar18;
    puVar1[6] = param_2[6];
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar18);
  }
  return param_1;
}



/* Entry: 104637228; end: 104637bb7;  */

undefined8 * FUN_104637228(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  lVar8 = (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = *puVar2;
  uVar11 = puVar2[3];
  uVar10 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[4] = puVar2[4];
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x44);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 0x4c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x54);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x5c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x58));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 100);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x60));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 0x6c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x68));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar3 = *(int *)(param_3 + 0x74);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x7c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x84);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x80));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x8c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x88)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x88));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x94);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x90));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x90));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 0x9c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x98)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x98));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xa4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa0));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa0));
  uVar9 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  puVar1[2] = puVar2[2];
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xac);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xa8));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xa8));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar3 = *(int *)(param_3 + 0xb4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xb0));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  lVar8 = (long)*(int *)(param_3 + 0xb8);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0xc0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xbc));
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  iVar3 = *(int *)(param_3 + 200);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0xc4));
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0xc4));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xd0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xcc));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0xd8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0xd4));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  puVar1[6] = param_2[6];
  uVar9 = param_2[2];
  uVar11 = param_2[5];
  uVar10 = param_2[4];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar9;
  puVar1[5] = uVar11;
  puVar1[4] = uVar10;
  uVar9 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar9;
  return param_1;
}



/* Entry: 104637bb8; end: 104637bcf;  */

void FUN_104637bb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104637bd0; end: 104637ce7;  */

void FUN_104637bd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
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
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_1c8 = &UNK_10dd225b8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_1c0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_1b8 = &UNK_10dd225d0;
    puStack_1b0 = &UNK_10dd225e8;
    puStack_1a8 = &UNK_10dd22600;
    puStack_1a0 = &UNK_10dd225b8;
    puStack_198 = &UNK_10dd225e8;
    puStack_188 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_190 = &UNK_10dd225e8;
    puStack_180 = &UNK_10dd225e8;
    puStack_178 = &UNK_10dd225d0;
    puStack_170 = &UNK_10dd225e8;
    puStack_168 = &UNK_10dd22618;
    puStack_160 = &UNK_10dd225b8;
    puStack_158 = &UNK_10dd225b8;
    puStack_150 = &UNK_10dd225e8;
    puStack_148 = &UNK_10dd225e8;
    puStack_140 = &UNK_10dd225e8;
    puStack_138 = &UNK_10dd225b8;
    puStack_130 = &UNK_10dd225b8;
    puStack_128 = &UNK_10dd225b8;
    puStack_120 = &UNK_10dd225b8;
    puStack_118 = &UNK_10dd225b8;
    puStack_110 = &UNK_10dd22618;
    puStack_e8 = &UNK_10dd225b8;
    puStack_d8 = &UNK_10dd225e8;
    puStack_d0 = &UNK_10dd225d0;
    puStack_c8 = &UNK_10dd22618;
    puStack_c0 = &UNK_10dd225b8;
    puStack_b8 = &UNK_10dd225e8;
    puStack_b0 = &UNK_10dd225e8;
    puStack_a8 = &UNK_10dd22630;
    puStack_a0 = &UNK_10dd225e8;
    puStack_98 = &UNK_10dd22618;
    puStack_90 = &UNK_10dd22618;
    puStack_80 = &UNK_10dd225e8;
    puStack_70 = &UNK_10dd225e8;
    puStack_68 = &UNK_10dd225b8;
    puStack_60 = &UNK_10dd225b8;
    puStack_58 = &UNK_10dd225e8;
    puStack_50 = &UNK_10dd225e8;
    puStack_48 = &UNK_10dd225e8;
    puStack_40 = &UNK_10dd225e8;
    puStack_38 = &UNK_10dd22648;
    puStack_108 = puStack_188;
    puStack_100 = puStack_188;
    puStack_f8 = puStack_188;
    puStack_f0 = puStack_188;
    puStack_e0 = puStack_188;
    puStack_88 = puStack_188;
    lStack_78 = lStack_1c0;
    _swift_initStructMetadata(param_1,0x100,0x33,&puStack_1c8,param_1 + 0x10);
  }
  return;
}



/* Entry: 104637ce8; end: 104637d5b;  */

undefined8 FUN_104637ce8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104637d5c; end: 104637d93;  */

void FUN_104637d5c(undefined8 param_1)

{
  if (lRam000000011308af88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8164fc);
  return;
}



/* Entry: 104637d94; end: 104637d97;  */

undefined8 FUN_104637d94(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  uVar6 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = *param_1;
    if (((uVar7 != *param_2) || (param_1[1] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (param_1[3] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[4];
    if (((uVar7 != param_2[4]) || (param_1[5] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[6];
    if (((uVar7 != param_2[6]) || (param_1[7] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar3 = 0;
  FUN_104637d5c();
  iVar1 = *(int *)(lVar3 + 0x20);
  lVar11 = (long)*(int *)(lVar11 + 0x30);
  func_0x0001009f0578((long)param_1 + (long)iVar1,lVar8);
  func_0x0001009f0578((long)param_2 + (long)iVar1,lVar8 + lVar11);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar4 = lVar8;
  (*pcVar13)(lVar8,1,lVar2);
  if ((int)lVar4 == 1) {
    lVar11 = lVar8 + lVar11;
    (*pcVar13)(lVar11,1,lVar2);
    if ((int)lVar11 != 1) {
LAB_1046381dc:
      func_0x000104638ab4(lVar8,0x112d373d0,&UNK_10d90f8f0);
      return 0;
    }
    func_0x000104638ab4(lVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar8,uVar10);
    lVar4 = lVar8 + lVar11;
    (*pcVar13)(lVar4,1,lVar2);
    if ((int)lVar4 == 1) {
      (**(code **)(lVar12 + 8))(uVar10,lVar2);
      goto LAB_1046381dc;
    }
    puVar5 = puVar9;
    (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar2);
    func_0x000100df4c40();
    uVar6 = uVar10;
    __sSQ2eeoiySbx_xtFZTj(uVar10,puVar9,lVar2,puVar5);
    pcVar13 = *(code **)(lVar12 + 8);
    (*pcVar13)(puVar9,lVar2);
    (*pcVar13)(uVar10,lVar2);
    func_0x000104638ab4(lVar8,0x112d373d8,&UNK_10d9014c0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar6 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar3 + 0x24));
  uVar10 = param_2[1];
  if (uVar6 == 0) {
    if (uVar10 == 0) {
      return 1;
    }
  }
  else if ((uVar10 != 0) &&
          (((uVar7 = *param_1, uVar7 == *param_2 && (uVar6 == uVar10)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 104637d98; end: 104637eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104637d98(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long alStack_40 [2];
  
  lVar3 = 0;
  FUN_104637d5c();
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_40 + lVar5);
  iVar2 = *(int *)(lVar4 + 0x20);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)puVar7 + (long)iVar2,1,1,lVar4);
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar5) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = 0;
  *(undefined8 *)((long)alStack_40 + lVar5 + 8) = 0;
  *puVar7 = 0;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar3 + 0x24));
  lVar4 = 0;
  FUN_104650b00();
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar5 = lVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308b350);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308b358);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308b360);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308b368);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001009f0578((long)puVar7 + (long)iVar2,lVar5 + _DAT_113815108);
  puVar1 = (undefined8 *)(lVar5 + _DAT_113815110);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar6 = alStack_40;
  alStack_40[0] = lVar5;
  alStack_40[1] = lVar4;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  func_0x000104638a78(puVar7);
  plRam0000000113814f58 = plVar6;
  return;
}



/* Entry: 104637ef0; end: 104637f2f; +[SCAutofillUserInfo identity] */

void FUN_104637ef0(void)

{
  if (lRam000000011308af28 != -1) {
    _swift_once(0x11308af28,FUN_104637d98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113814f58);
  return;
}



/* Entry: 104637f30; end: 10463842f;  */

undefined8 FUN_104637f30(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)puVar9 - extraout_x8_00;
  lVar11 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = uVar10 - extraout_x8_01;
  uVar6 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = *param_1;
    if (((uVar7 != *param_2) || (param_1[1] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (param_1[3] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[4];
    if (((uVar7 != param_2[4]) || (param_1[5] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = param_1[6];
    if (((uVar7 != param_2[6]) || (param_1[7] != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar3 = 0;
  FUN_104637d5c();
  iVar1 = *(int *)(lVar3 + 0x20);
  lVar11 = (long)*(int *)(lVar11 + 0x30);
  func_0x0001009f0578((long)param_1 + (long)iVar1,lVar8);
  func_0x0001009f0578((long)param_2 + (long)iVar1,lVar8 + lVar11);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar4 = lVar8;
  (*pcVar13)(lVar8,1,lVar2);
  if ((int)lVar4 == 1) {
    lVar11 = lVar8 + lVar11;
    (*pcVar13)(lVar11,1,lVar2);
    if ((int)lVar11 != 1) {
LAB_1046381dc:
      func_0x000104638ab4(lVar8,0x112d373d0,&UNK_10d90f8f0);
      return 0;
    }
    func_0x000104638ab4(lVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar8,uVar10);
    lVar4 = lVar8 + lVar11;
    (*pcVar13)(lVar4,1,lVar2);
    if ((int)lVar4 == 1) {
      (**(code **)(lVar12 + 8))(uVar10,lVar2);
      goto LAB_1046381dc;
    }
    puVar5 = puVar9;
    (**(code **)(lVar12 + 0x20))(puVar9,lVar8 + lVar11,lVar2);
    func_0x000100df4c40();
    uVar6 = uVar10;
    __sSQ2eeoiySbx_xtFZTj(uVar10,puVar9,lVar2,puVar5);
    pcVar13 = *(code **)(lVar12 + 8);
    (*pcVar13)(puVar9,lVar2);
    (*pcVar13)(uVar10,lVar2);
    func_0x000104638ab4(lVar8,0x112d373d8,&UNK_10d9014c0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  uVar6 = param_1[1];
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar3 + 0x24));
  uVar10 = param_2[1];
  if (uVar6 == 0) {
    if (uVar10 == 0) {
      return 1;
    }
  }
  else if ((uVar10 != 0) &&
          (((uVar7 = *param_1, uVar7 == *param_2 && (uVar6 == uVar10)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 104638430; end: 1046384c7;  */

void FUN_104638430(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}



/* Entry: 1046384c8; end: 1046385f7;  */

undefined8 * FUN_1046384c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  lVar9 = (long)*(int *)(param_3 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  lVar7 = (long)param_2 + lVar9;
  (*pcVar8)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046385f8; end: 1046387ab;  */

undefined8 * FUN_1046385f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[4] = param_2[4];
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[6] = param_2[6];
  uVar5 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = (long)param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      goto LAB_10463874c;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    goto LAB_10463874c;
  }
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40))
  ;
LAB_10463874c:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *param_2;
  uVar5 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Entry: 1046387ac; end: 104638883;  */

undefined8 * FUN_1046387ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  lVar4 = (long)*(int *)(param_3 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar6 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar1[1] = param_2[1];
  *puVar1 = uVar6;
  return param_1;
}



/* Entry: 104638884; end: 1046389e7;  */

undefined8 * FUN_104638884(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  lVar7 = (long)*(int *)(param_3 + 0x20);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      goto LAB_104638998;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    goto LAB_104638998;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_104638998:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar2 = param_2[1];
  uVar3 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 1046389e8; end: 1046389ff;  */

void FUN_1046389e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104638a00; end: 104638af3;  */

void FUN_104638a00(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10dd226a8;
  puStack_48 = &UNK_10dd226a8;
  puStack_40 = &UNK_10dd226a8;
  puStack_38 = &UNK_10dd226a8;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd226a8;
    _swift_initStructMetadata(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 104638af4; end: 104638b07;  */

bool FUN_104638af4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104638b08; end: 104638bb3;  */

void FUN_104638b08(void)

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



/* Entry: 104638bb4; end: 104638bb7;  */

void FUN_104638bb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308afd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd226c0;
  _swift_getWitnessTable(&UNK_10dd226c0,&UNK_110792700);
  puRam000000011308afd0 = puVar1;
  return;
}



/* Entry: 104638bb8; end: 104638bf7;  */

void FUN_104638bb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308afd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd226c0;
  _swift_getWitnessTable(&UNK_10dd226c0,&UNK_110792700);
  puRam000000011308afd0 = puVar1;
  return;
}



/* Entry: 104638bf8; end: 104638d5b;  */

int FUN_104638bf8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104638c74;
        goto LAB_104638c58;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104638c58:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104638c74:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104638d5c; end: 104638d93;  */

void FUN_104638d5c(undefined8 param_1)

{
  if (lRam000000011308b038 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e816540);
  return;
}



/* Entry: 104638d94; end: 104638e23;  */

undefined8 FUN_104638d94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104638e24; end: 104638feb;  */

void FUN_104638e24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = 0;
  FUN_104638d5c();
  iVar5 = *(int *)(lVar7 + 0x14);
  lVar8 = 0;
  __s10Foundation3URLVMa();
  pcVar9 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar9)((long)param_1 + (long)iVar5,1,1,lVar8);
  iVar3 = *(int *)(lVar7 + 0x18);
  iVar4 = *(int *)(lVar7 + 0x1c);
  (*pcVar9)((long)param_1 + (long)iVar4,1,1,lVar8);
  iVar6 = *(int *)(lVar7 + 0x30);
  lVar8 = 0;
  FUN_1046305a8();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)param_1 + (long)iVar6,1,1,lVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38));
  *param_1 = param_2;
  func_0x000104638ddc(param_3,(long)param_1 + (long)iVar5,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)((long)param_1 + (long)iVar3) = param_4;
  func_0x000104638ddc(param_5,(long)param_1 + (long)iVar4,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) = param_6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) = param_7;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28)) = param_8;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c)) = param_9;
  func_0x000104638ddc(param_10,(long)param_1 + (long)iVar6,0x112d3ae80,&UNK_10d912fe0);
  puVar1[1] = param_12;
  *puVar1 = param_11;
  puVar1[2] = param_13;
  puVar1[3] = param_14;
  *puVar2 = param_15;
  puVar2[1] = param_16;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c)) = param_17;
  return;
}



/* Entry: 104638fec; end: 104638fef;  */

byte FUN_104638fec(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  code *pcVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  int *piStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  int *piStack_68;
  
  lVar9 = 0;
  FUN_1046305a8();
  lStack_80 = *(long *)(lVar9 + -8);
  lStack_78 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar9 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar21 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar9 = 0x11308b098;
  uStack_90 = uVar21;
  func_0x0001000285a8(0x11308b098,&UNK_10dd22808);
  lStack_88 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = uVar21 - extraout_x8_01;
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar21 = lVar27 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = uVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = uVar21 - extraout_x12;
  lVar9 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = (uVar21 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  if (*param_1 == *param_2) {
    lVar11 = 0;
    puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_b0 = lVar23;
    lStack_a8 = extraout_x13;
    FUN_104638d5c();
    iVar5 = *(int *)(lVar11 + 0x14);
    lVar23 = (long)*(int *)(lVar9 + 0x30);
    lStack_a0 = lVar11;
    piStack_98 = param_1;
    piStack_68 = param_2;
    FUN_104638d94((long)param_1 + (long)iVar5,lVar24,0x112d36580,&UNK_10d9016d0);
    piVar7 = piStack_68;
    FUN_104638d94((long)piStack_68 + (long)iVar5,lVar24 + lVar23,0x112d36580,&UNK_10d9016d0);
    pcVar25 = *(code **)(lVar26 + 0x30);
    lVar11 = lVar24;
    (*pcVar25)(lVar24,1,lVar10);
    if ((int)lVar11 == 1) {
      lVar23 = lVar24 + lVar23;
      (*pcVar25)(lVar23,1,lVar10);
      if ((int)lVar23 == 1) {
        func_0x00010463e514(lVar24,0x112d36580,&UNK_10d9016d0);
LAB_10463a6d8:
        lVar24 = lStack_a0;
        uVar21 = *(ulong *)((long)piStack_98 + (long)*(int *)(lStack_a0 + 0x18));
        lVar23 = *(long *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x18));
        if (uVar21 == 0) {
          if (lVar23 == 0) {
LAB_10463a728:
            piVar7 = piStack_98;
            iVar5 = *(int *)(lVar24 + 0x1c);
            lVar9 = (long)*(int *)(lVar9 + 0x30);
            FUN_104638d94((long)piStack_98 + (long)iVar5,lStack_a8,0x112d36580,&UNK_10d9016d0);
            piVar8 = piStack_68;
            FUN_104638d94((long)piStack_68 + (long)iVar5,lStack_a8 + lVar9,0x112d36580,
                          &UNK_10d9016d0);
            lVar24 = lStack_a8;
            (*pcVar25)(lStack_a8,1,lVar10);
            uVar21 = uStack_70;
            if ((int)lVar24 == 1) {
              lVar9 = lStack_a8 + lVar9;
              (*pcVar25)(lVar9,1,lVar10);
              if ((int)lVar9 != 1) {
LAB_10463a80c:
                uVar14 = 0x112d7e680;
                puVar16 = &UNK_10d95e350;
                lVar24 = lStack_a8;
                goto LAB_10463a644;
              }
              func_0x00010463e514(lStack_a8,0x112d36580,&UNK_10d9016d0);
LAB_10463a88c:
              lVar24 = lStack_b0;
              if ((((*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x20)) ==
                     *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x20))) &&
                   (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x24)) ==
                    *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x24)))) &&
                  (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x28)) ==
                   *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x28)))) &&
                 (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x2c)) ==
                  *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x2c)))) {
                iVar5 = *(int *)(lStack_a0 + 0x30);
                lVar9 = (long)*(int *)(lStack_88 + 0x30);
                FUN_104638d94((long)piVar7 + (long)iVar5,lStack_b0,0x112d3ae80,&UNK_10d912fe0);
                piVar8 = piStack_68;
                FUN_104638d94((long)piStack_68 + (long)iVar5,lVar24 + lVar9,0x112d3ae80,
                              &UNK_10d912fe0);
                lVar10 = lStack_78;
                pcVar25 = *(code **)(lStack_80 + 0x30);
                lVar23 = lVar24;
                (*pcVar25)(lVar24,1,lStack_78);
                uVar21 = uStack_90;
                if ((int)lVar23 == 1) {
                  lVar9 = lVar24 + lVar9;
                  (*pcVar25)(lVar9,1,lVar10);
                  if ((int)lVar9 != 1) {
LAB_10463a9cc:
                    uVar14 = 0x11308b098;
                    puVar16 = &UNK_10dd22808;
                    goto LAB_10463a644;
                  }
                  func_0x00010463e514(lVar24,0x112d3ae80,&UNK_10d912fe0);
LAB_10463aa40:
                  puVar1 = (ulong *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x34));
                  uVar21 = *puVar1;
                  uVar3 = puVar1[1];
                  uVar19 = puVar1[2];
                  uVar4 = puVar1[3];
                  puVar1 = (ulong *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x34));
                  uVar13 = *puVar1;
                  uVar15 = puVar1[1];
                  uVar17 = puVar1[2];
                  uVar18 = puVar1[3];
                  if (uVar3 == 0) {
                    if (uVar15 == 0) {
LAB_10463abbc:
                      piVar8 = piStack_68;
                      piVar7 = piStack_98;
                      puVar1 = (ulong *)((long)piStack_98 + (long)*(int *)(lStack_a0 + 0x38));
                      uVar21 = puVar1[1];
                      puVar2 = (ulong *)((long)piStack_68 + (long)*(int *)(lStack_a0 + 0x38));
                      uVar19 = puVar2[1];
                      if (uVar21 == 0) {
                        if (uVar19 == 0) goto LAB_10463ac0c;
                      }
                      else if ((uVar19 != 0) &&
                              (((uVar13 = *puVar1, uVar13 == *puVar2 && (uVar21 == uVar19)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (), (uVar13 & 1) != 0)))) {
LAB_10463ac0c:
                        bVar20 = *(byte *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x3c)) ^
                                 *(byte *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x3c)) ^ 1;
                        goto LAB_10463a64c;
                      }
                      goto LAB_10463a648;
                    }
LAB_10463aafc:
                    func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                    func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                    func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                  }
                  else {
                    if (uVar15 == 0) goto LAB_10463aafc;
                    if (((uVar21 == uVar13) && (uVar3 == uVar15)) ||
                       (uVar12 = uVar21,
                       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                 (uVar21,uVar3,uVar13,uVar15,0), (uVar12 & 1) != 0)) {
                      if ((uVar19 == uVar17) && (uVar4 == uVar18)) {
                        func_0x000100e3ecdc(uVar13,uVar15,uVar19,uVar4);
                        func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                        _swift_bridgeObjectRelease(uVar18);
                        _swift_bridgeObjectRelease(uVar15);
                        func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                      }
                      else {
                        uVar12 = uVar19;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar19,uVar4,uVar17,uVar18,0);
                        func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                        func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                        _swift_bridgeObjectRelease(uVar18);
                        _swift_bridgeObjectRelease(uVar15);
                        func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                        if ((uVar12 & 1) == 0) goto LAB_10463a648;
                      }
                      goto LAB_10463abbc;
                    }
                    func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                    func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                    _swift_bridgeObjectRelease(uVar18);
                    _swift_bridgeObjectRelease(uVar15);
                    uVar13 = uVar21;
                    uVar15 = uVar3;
                    uVar17 = uVar19;
                    uVar18 = uVar4;
                  }
                  func_0x0001030bb6f8(uVar13,uVar15,uVar17,uVar18);
                }
                else {
                  FUN_104638d94(lVar24,uStack_90,0x112d3ae80,&UNK_10d912fe0);
                  lVar23 = lVar24 + lVar9;
                  (*pcVar25)(lVar23,1,lVar10);
                  puVar6 = puStack_b8;
                  if ((int)lVar23 == 1) {
                    FUN_10463d0d0(uVar21,FUN_1046305a8);
                    goto LAB_10463a9cc;
                  }
                  func_0x000103e04070(lVar24 + lVar9,puStack_b8);
                  uVar19 = uVar21;
                  FUN_104630cd4(uVar21,puVar6);
                  FUN_10463d0d0(puVar6,FUN_1046305a8);
                  FUN_10463d0d0(uVar21,FUN_1046305a8);
                  func_0x00010463e514(lVar24,0x112d3ae80,&UNK_10d912fe0);
                  if ((uVar19 & 1) != 0) goto LAB_10463aa40;
                }
              }
            }
            else {
              FUN_104638d94(lStack_a8,uStack_70,0x112d36580,&UNK_10d9016d0);
              lVar24 = lStack_a8 + lVar9;
              (*pcVar25)(lVar24,1,lVar10);
              if ((int)lVar24 == 1) {
                (**(code **)(lVar26 + 8))(uVar21,lVar10);
                goto LAB_10463a80c;
              }
              lVar24 = lVar27;
              (**(code **)(lVar26 + 0x20))(lVar27,lStack_a8 + lVar9,lVar10);
              func_0x000101553b98();
              uVar19 = uVar21;
              __sSQ2eeoiySbx_xtFZTj(uVar21,lVar27,lVar10,lVar24);
              pcVar25 = *(code **)(lVar26 + 8);
              (*pcVar25)(lVar27,lVar10);
              (*pcVar25)(uVar21,lVar10);
              func_0x00010463e514(lStack_a8,0x112d36580,&UNK_10d9016d0);
              if ((uVar19 & 1) != 0) goto LAB_10463a88c;
            }
          }
        }
        else if (lVar23 != 0) {
          _swift_bridgeObjectRetain(lVar23);
          uVar19 = uVar21;
          _swift_bridgeObjectRetain();
          func_0x000101058cd4();
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(lVar23);
          if ((uVar19 & 1) != 0) goto LAB_10463a728;
        }
      }
      else {
LAB_10463a630:
        uVar14 = 0x112d7e680;
        puVar16 = &UNK_10d95e350;
LAB_10463a644:
        func_0x00010463e514(lVar24,uVar14,puVar16);
      }
    }
    else {
      FUN_104638d94(lVar24,uVar21,0x112d36580,&UNK_10d9016d0);
      lVar11 = lVar24 + lVar23;
      (*pcVar25)(lVar11,1,lVar10);
      if ((int)lVar11 == 1) {
        (**(code **)(lVar26 + 8))(uVar21,lVar10);
        goto LAB_10463a630;
      }
      lVar11 = lVar27;
      (**(code **)(lVar26 + 0x20))(lVar27,lVar24 + lVar23,lVar10);
      func_0x000101553b98();
      uVar19 = uVar21;
      __sSQ2eeoiySbx_xtFZTj(uVar21,lVar27,lVar10,lVar11);
      pcVar22 = *(code **)(lVar26 + 8);
      (*pcVar22)(lVar27,lVar10);
      (*pcVar22)(uVar21,lVar10);
      func_0x00010463e514(lVar24,0x112d36580,&UNK_10d9016d0);
      if ((uVar19 & 1) != 0) goto LAB_10463a6d8;
    }
  }
LAB_10463a648:
  bVar20 = 0;
LAB_10463a64c:
  return bVar20 & 1;
}



/* Entry: 104638ff0; end: 104639053;  */

void FUN_104638ff0(long param_1)

{
  long extraout_x8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  func_0x000100e39298();
  __sSS10describingSSx_tclufC
            (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  return;
}



/* Entry: 104639054; end: 1046392d3;  */

void FUN_104639054(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long alStack_70 [2];
  
  lVar7 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)alStack_70 - extraout_x8;
  lVar7 = 0x112d36580;
  alStack_70[1] = lVar11;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar9 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12;
  lVar7 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0;
  __s10Foundation3URLVMa();
  pcVar10 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar10)(lVar14,1,1,lVar8);
  (*pcVar10)(lVar9,1,1,lVar8);
  lVar9 = 0;
  FUN_1046305a8();
  pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar12)(lVar11,1,1,lVar9);
  iVar5 = *(int *)(lVar7 + 0x14);
  (*pcVar10)((long)puVar13 + (long)iVar5,1,1,lVar8);
  iVar3 = *(int *)(lVar7 + 0x18);
  iVar4 = *(int *)(lVar7 + 0x1c);
  (*pcVar10)((long)puVar13 + (long)iVar4,1,1,lVar8);
  iVar6 = *(int *)(lVar7 + 0x30);
  (*pcVar12)((long)puVar13 + (long)iVar6,1,1,lVar9);
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x34));
  puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x38));
  *puVar13 = 0;
  func_0x000104638ddc(lVar14,(long)puVar13 + (long)iVar5,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)((long)puVar13 + (long)iVar3) = 0;
  func_0x000104638ddc(alStack_70[0],(long)puVar13 + (long)iVar4,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x20)) = 0;
  *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x24)) = 0;
  *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x28)) = 0;
  *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x2c)) = 0;
  func_0x000104638ddc(alStack_70[1],(long)puVar13 + (long)iVar6,0x112d3ae80,&UNK_10d912fe0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x3c)) = 0;
  FUN_104652fec(0);
  _objc_allocWithZone();
  func_0x000104651d90();
  puRam0000000113814f60 = puVar13;
  return;
}



/* Entry: 1046392d4; end: 104639313;  */

undefined8 FUN_1046392d4(void)

{
  if (lRam000000011308afd8 != -1) {
    _swift_once(0x11308afd8,FUN_104639054);
  }
  return 0x113814f60;
}



/* Entry: 104639314; end: 104639353; +[SCWebBrowserConfig identity] */

void FUN_104639314(void)

{
  if (lRam000000011308afd8 != -1) {
    _swift_once(0x11308afd8,FUN_104639054);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113814f60);
  return;
}



/* Entry: 104639354; end: 104639447; -[SCWebBrowserConfig generatedDescription] */

void FUN_104639354(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar3);
  func_0x000100e39298(lVar3,puVar2);
  __sSS10describingSSx_tclufC(puVar2,lVar1);
  _objc_release(param_1);
  FUN_10463d0d0(lVar3,FUN_104638d5c);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104639448; end: 10463953b; -[SCWebBrowserConfig withSource:] */

void FUN_104639448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(puVar3 + -extraout_x12);
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(puVar4);
  *puVar4 = param_3;
  func_0x000100e39298(puVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(puVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10463953c; end: 1046396db; -[SCWebBrowserConfig withExpectedInitialURL:] */

void FUN_10463953c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_00;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,param_3 == 0,1);
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar5);
  func_0x00010137dd74(lVar6,lVar5 + *(int *)(lVar2 + 0x14));
  func_0x000100e39298(lVar5,puVar4);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar4,uVar1);
  _objc_release(param_1);
  func_0x00010463e514(lVar6,0x112d36580,&UNK_10d9016d0);
  FUN_10463d0d0(lVar5,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1046396dc; end: 1046397fb; -[SCWebBrowserConfig withInitialRequestHeaders:] */

void FUN_1046396dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar5);
  iVar1 = *(int *)(lVar3 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + iVar1));
  *(long *)(lVar5 + iVar1) = param_3;
  func_0x000100e39298(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  func_0x000104651d90(puVar4,uVar2);
  _objc_release(param_1);
  FUN_10463d0d0(lVar5,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1046397fc; end: 10463999b; -[SCWebBrowserConfig withDestinationUrl:] */

void FUN_1046397fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_00;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,param_3 == 0,1);
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar5);
  func_0x00010137dd74(lVar6,lVar5 + *(int *)(lVar2 + 0x1c));
  func_0x000100e39298(lVar5,puVar4);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar4,uVar1);
  _objc_release(param_1);
  func_0x00010463e514(lVar6,0x112d36580,&UNK_10d9016d0);
  FUN_10463d0d0(lVar5,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10463999c; end: 104639a97; -[SCWebBrowserConfig withEnableSpotlightCta:] */

void FUN_10463999c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x20)) = param_3;
  func_0x000100e39298(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(lVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104639a98; end: 104639b93; -[SCWebBrowserConfig withDismissButtonHidden:] */

void FUN_104639a98(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x24)) = param_3;
  func_0x000100e39298(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(lVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104639b94; end: 104639c8f; -[SCWebBrowserConfig withActionMenuButtonHidden:] */

void FUN_104639b94(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x28)) = param_3;
  func_0x000100e39298(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(lVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104639c90; end: 104639f0f; -[SCWebBrowserConfig withDisableFullScreen:] */

void FUN_104639c90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x2c)) = param_3;
  func_0x000100e39298(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(lVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104639f10; end: 104639f6f; -[SCWebBrowserConfig withAdConfig:] */

void FUN_104639f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104639d8c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104639f70; end: 10463a0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104639f70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  _objc_retain();
  FUN_104651350(lVar5);
  puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar3 + 0x34));
  func_0x0001030bb6f8(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  if (param_1 == 0) {
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + _DAT_1130914b8) + _DAT_1130914e8);
    uVar8 = *puVar2;
    uVar6 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(param_1 + _DAT_1130914b8) + _DAT_1130914f0);
    uVar9 = *puVar2;
    uVar7 = puVar2[1];
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
  }
  *puVar1 = uVar8;
  puVar1[1] = uVar6;
  puVar1[2] = uVar9;
  puVar1[3] = uVar7;
  func_0x000100e39298(lVar5,puVar4);
  _objc_allocWithZone(unaff_x20);
  func_0x000104651d90(puVar4,unaff_x20);
  FUN_10463d0d0(lVar5,FUN_104638d5c);
  return puVar4;
}



/* Entry: 10463a0d0; end: 10463a12f; -[SCWebBrowserConfig withEngagementStreamMetadata:] */

void FUN_10463a0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104639f70(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10463a130; end: 10463a253; -[SCWebBrowserConfig withDynamicScriptConfig:] */

void FUN_10463a130(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar5);
  plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x38));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000100e39298(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  func_0x000104651d90(puVar4,uVar2);
  _objc_release(param_1);
  FUN_10463d0d0(lVar5,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10463a254; end: 10463a34f; -[SCWebBrowserConfig withAlwaysCheckSafeBrowsing:] */

void FUN_10463a254(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_104651350(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x3c)) = param_3;
  func_0x000100e39298(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  func_0x000104651d90(puVar3);
  _objc_release(param_1);
  FUN_10463d0d0(lVar4,FUN_104638d5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


