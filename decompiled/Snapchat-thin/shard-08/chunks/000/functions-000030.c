/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c381dc; end: 105c381ef;  */

void FUN_105c381dc(void)

{
  FUN_105c38334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c381f0; end: 105c381fb;  */

long FUN_105c381f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de5b0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105c381fc; end: 105c38237;  */

void FUN_105c381fc(void)

{
  func_0x000105c383ac();
  return;
}



/* Entry: 105c38238; end: 105c3829f;  */

void FUN_105c38238(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c1197c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f0010(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 105c382a0; end: 105c38333;  */

long FUN_105c382a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de5b0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105c38334; end: 105c38343;  */

void FUN_105c38334(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c38344; end: 105c38393;  */

long FUN_105c38344(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c38394; end: 105c383cb;  */

void FUN_105c38394(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 105c383cc; end: 105c38443; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy initWithCpp:] */

undefined1 * FUN_105c383cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105c38d50();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105c38ce8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c38444; end: 105c3854b; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy loadModuleContent:] */

void FUN_105c38444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [64];
  char cStack_28;
  
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_80,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_68,plVar2,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  puVar1 = PTR_PTR_1126b9638;
  if (cStack_28 == '\x01') {
    func_0x0001008377cc(auStack_68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8(auStack_68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000105c38d60();
  FUN_105c38b98(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c3854c; end: 105c3859f; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy context] */

void FUN_105c3854c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  FUN_105c3990c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d28();
  FUN_105c38be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c385a0; end: 105c385e3; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy urlForCurrentSession] */

void FUN_105c385a0(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c385e4; end: 105c38627; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy hashForCurrentSession] */

void FUN_105c385e4(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38628; end: 105c3866b; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy creationTimeForCurrentSession] */

void FUN_105c38628(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c3866c; end: 105c386af; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy versionForCurrentSession] */

void FUN_105c3866c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c386b0; end: 105c386f3; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy debugDisplayVersionForCurrentSession] */

void FUN_105c386b0(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c386f4; end: 105c38757; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy modulesForCurrentSession] */

void FUN_105c386f4(void)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  puVar1 = auStack_40;
  func_0x000105c38d44();
  func_0x000105c38d3c();
  if (cStack_28 == '\x01') {
    func_0x00010088f8a4(auStack_40);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  func_0x000105c38bc0(auStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c38758; end: 105c3879b; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy archiveDownloadStatusForCurrentMetadata] */

void FUN_105c38758(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c3879c; end: 105c387df; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy archiveReadyOnDiskForCurrentMetadata] */

void FUN_105c3879c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c387e0; end: 105c38823; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy archiveSizeForCurrentMetadata] */

void FUN_105c387e0(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38824; end: 105c38867; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy cachedArchiveVersionForCurrentMetadata] */

void FUN_105c38824(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38868; end: 105c388ab; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy debugDisplayVersionForCachedArchive] */

void FUN_105c38868(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c388ac; end: 105c388ef; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy archiveMatchesCurrentMetadata] */

void FUN_105c388ac(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c388f0; end: 105c38a0b; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy loadArchiveWithMetadata:sha256:directiveId:] */

void FUN_105c388f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_68,param_3);
  func_0x0001000fbca4(auStack_80,param_4);
  func_0x0001000fbca4(auStack_98,param_5);
  (**(code **)(*plVar1 + 0x80))(auStack_50,plVar1,auStack_68,auStack_80,auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x0001006a7df8(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d7c();
  _objc_release(param_5);
  func_0x000105c38d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 105c38a0c; end: 105c38a4f; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy deliverySourceForCurrentSession] */

void FUN_105c38a0c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38a50; end: 105c38a93; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy overrideDirectiveIdForCurrentSession] */

void FUN_105c38a50(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000105c38d44();
  func_0x000105c38d3c();
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38a94; end: 105c38b03;  */

void FUN_105c38a94(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108de690,&PTR_DAT_1108de6a0,0);
    if (lVar1 == 0) {
      FUN_105c38c08(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c38b04; end: 105c38b57; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy .cxx_destruct] */

void FUN_105c38b04(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108de6e8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_105c38ce8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105c38b58; end: 105c38b97; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerCppProxy .cxx_construct] */

undefined8 * FUN_105c38b58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000105c38d50();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105c38b98; end: 105c38bdf;  */

void FUN_105c38b98(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001000ff348();
  }
  else {
    func_0x0001052a03ac();
  }
  return;
}



/* Entry: 105c38be0; end: 105c38c07;  */

long FUN_105c38be0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c38c08; end: 105c38c7b;  */

void FUN_105c38c08(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1108de6e8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000105c38d50();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_105c38c7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c38d28();
  func_0x0001000df524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38c7c; end: 105c38ce7;  */

void FUN_105c38c7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c34a0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105c38d50();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_105c38ce8(&uStack_30);
  return;
}



/* Entry: 105c38ce8; end: 105c38d0f;  */

long FUN_105c38ce8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c38d10; end: 105c38d87;  */

void FUN_105c38d10(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 105c38d88; end: 105c38e07; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerFactory initWithCpp:] */

undefined1 * FUN_105c38d88(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec6e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000105c3902c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105c38e08; end: 105c38f0f; +[SCNComposerDynamicDeliveryDynamicDeliveryManagerFactory create:config:context:] */

void FUN_105c38e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_105c37f4c(auStack_50,param_3);
  func_0x0001000de430(auStack_60,param_4);
  FUN_105c39820(auStack_70,param_5);
  FUN_105c3ad98(auStack_40,auStack_50,auStack_60,auStack_70);
  FUN_105c39058();
  func_0x0001000df75c(auStack_60);
  func_0x000105c3836c(auStack_50);
  FUN_105c38a94(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c39060();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c38f10; end: 105c38f83; +[SCNComposerDynamicDeliveryDynamicDeliveryManagerFactory createWithGlobalDeps:] */

void FUN_105c38f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_105c39820(auStack_40,param_3);
  FUN_105c3ae74(auStack_30,auStack_40);
  FUN_105c39058();
  FUN_105c38a94(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c3906c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c38f84; end: 105c38fdf; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerFactory .cxx_destruct] */

void FUN_105c38f84(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108de6f8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105c3902c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105c38fe0; end: 105c39057; -[SCNComposerDynamicDeliveryDynamicDeliveryManagerFactory .cxx_construct] */

undefined8 * FUN_105c38fe0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105c39058; end: 105c39077;  */

void FUN_105c39058(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105c39078; end: 105c3921f;  */

void FUN_105c39078(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  
  _objc_retain();
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  func_0x00010c229e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_70);
  func_0x00010bf5a4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_88);
  func_0x00010c298be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c39330(&uStack_a4);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = uStack_90;
  *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack_94,uStack_98);
  param_1[10] = CONCAT44(uStack_98,uStack_9c);
  param_1[9] = uStack_a4;
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  FUN_105c39310();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  func_0x000105c39328();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  func_0x000105c39320();
  func_0x000105c39318();
  return;
}



/* Entry: 105c39220; end: 105c3930f;  */

void FUN_105c39220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c34a8;
  _objc_alloc(PTR_PTR_1126c34a8);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001001011a4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001001011a4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  FUN_105c3941c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a280(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  FUN_105c39310();
  func_0x000105c39328();
  func_0x000105c39320();
  func_0x000105c39318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c39310; end: 105c3932f;  */

void FUN_105c39310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c39330; end: 105c3941b;  */

void FUN_105c39330(undefined4 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0b6e60();
  uVar2 = param_2;
  func_0x00010c0ce800();
  uVar3 = param_2;
  func_0x00010c0f57e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001004a2160();
  uVar5 = param_2;
  func_0x00010bf22880();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001004a2160();
  uVar7 = param_2;
  func_0x00010bf8b780();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  *(ulong *)(param_1 + 2) = uVar4 & 0xffffffffff;
  *(ulong *)(param_1 + 4) = uVar6 & 0xffffffffff;
  param_1[6] = (int)uVar7;
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c3941c; end: 105c394bb;  */

void FUN_105c3941c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = PTR_PTR_1126c34b0;
  _objc_alloc(PTR_PTR_1126c34b0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = param_1 + 2;
  func_0x0001006aaca4(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1 + 4;
  func_0x0001006aaca4(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028140(puVar3,param_2,uVar1,uVar2,puVar4,puVar5,param_1[6]);
  func_0x000105c394c4();
  func_0x000105c394bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c394bc; end: 105c394cf;  */

void FUN_105c394bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c394d0; end: 105c39547; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy initWithCpp:] */

undefined1 * FUN_105c394d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec6e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105c39ffc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105c38be0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c39548; end: 105c39593; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy configIsCompatibleWithApp:] */

long * FUN_105c39548(void)

{
  long *unaff_x19;
  
  func_0x000105c3a028();
  (**(code **)(*unaff_x19 + 0x10))();
  func_0x000105c3a038();
  return unaff_x19;
}



/* Entry: 105c39594; end: 105c39643;  */

void FUN_105c39594(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  func_0x000105c3a088();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 0xd) = 0;
  }
  else {
    FUN_105c39078(&uStack_88);
    uVar1 = uStack_70;
    unaff_x20[1] = uStack_80;
    *unaff_x20 = uStack_88;
    unaff_x20[2] = uStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    unaff_x20[4] = uStack_68;
    unaff_x20[3] = uVar1;
    unaff_x20[5] = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    unaff_x20[8] = uStack_48;
    unaff_x20[7] = uStack_50;
    unaff_x20[6] = uStack_58;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    *(undefined8 *)((long)unaff_x20 + 0x5c) = uStack_2c;
    *(ulong *)((long)unaff_x20 + 0x54) = CONCAT44(uStack_30,uStack_34);
    unaff_x20[10] = CONCAT44(uStack_34,uStack_38);
    unaff_x20[9] = uStack_40;
    *(undefined1 *)(unaff_x20 + 0xd) = 1;
    FUN_105c39a30(&uStack_88);
  }
  func_0x000105c3a058();
  return;
}



/* Entry: 105c39644; end: 105c39693; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy parsedAppVersion] */

void FUN_105c39644(long param_1)

{
  undefined1 auStack_24 [16];
  char cStack_14;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_24);
  if (cStack_14 == '\x01') {
    FUN_105c3a898(auStack_24);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c39694; end: 105c396df; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy appVersion] */

void FUN_105c39694(long param_1)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_38);
  func_0x0001001011a4(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c3a0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c396e0; end: 105c39713; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy setCurrentDynamicDeliveryMetadata:] */

void FUN_105c396e0(void)

{
  long *unaff_x19;
  
  func_0x000105c3a028();
  func_0x000105c3a0b8(*(undefined8 *)(*unaff_x19 + 0x28));
  func_0x000105c3a038();
  return;
}



/* Entry: 105c39714; end: 105c39747; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy setNextExpectedDynamicDeliveryMetadata:] */

void FUN_105c39714(void)

{
  long *unaff_x19;
  
  func_0x000105c3a028();
  func_0x000105c3a0b8(*(undefined8 *)(*unaff_x19 + 0x30));
  func_0x000105c3a038();
  return;
}



/* Entry: 105c39748; end: 105c39793; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy mostRecentlyLoadedDynamicDeliveryConfig] */

void FUN_105c39748(long param_1)

{
  undefined1 auStack_90 [112];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(auStack_90);
  FUN_105c39794(auStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c39fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c39794; end: 105c397c3;  */

void FUN_105c39794(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_105c39220();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c397c4; end: 105c3980f; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy nextExpectedDynamicDeliveryConfig] */

void FUN_105c397c4(long param_1)

{
  undefined1 auStack_90 [112];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))(auStack_90);
  FUN_105c39794(auStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c39fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c39810; end: 105c3981f; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy configIsCompatibleWithCurrentAppVersion] */

void FUN_105c39810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
  return;
}



/* Entry: 105c39820; end: 105c3990b;  */

void FUN_105c39820(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000105c3a088();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126c34b8);
    uVar2 = unaff_x19;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) == 0) {
      _objc_retain();
      ppuStack_38 = &PTR_DAT_1108de760;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&stack0xffffffffffffffc0,FUN_105c39a60);
      uVar1 = uStack_28;
      uVar4 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(unaff_x19);
      unaff_x20[1] = uVar1;
      *unaff_x20 = uVar4;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105c39ed4(&uStack_50);
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
      *unaff_x20 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x000105c39ffc();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000105c3a058();
  return;
}



/* Entry: 105c3990c; end: 105c3997b;  */

void FUN_105c3990c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108de708,&PTR_DAT_1108de718,0);
    if (lVar1 == 0) {
      FUN_105c39efc(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c3997c; end: 105c399cf; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy .cxx_destruct] */

void FUN_105c3997c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108de8a0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_105c38be0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105c399d0; end: 105c39a0f; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextCppProxy .cxx_construct] */

undefined8 * FUN_105c399d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000105c39ffc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105c39a10; end: 105c39a2f;  */

void FUN_105c39a10(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_105c39a30();
  }
  return;
}



/* Entry: 105c39a30; end: 105c39a5f;  */

void FUN_105c39a30(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 105c39a60; end: 105c39b53;  */

void FUN_105c39a60(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108de7a0;
  puVar1[3] = &PTR_DAT_1108de850;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x000105c39ffc();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108de7f0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105c39ed4(&uStack_50);
  return;
}



/* Entry: 105c39b54; end: 105c39b57;  */

void FUN_105c39b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de7a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c39b58; end: 105c39b6b;  */

void FUN_105c39b58(void)

{
  FUN_105c39ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c39b6c; end: 105c39b77;  */

long FUN_105c39b6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de760;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105c39b78; end: 105c39bb3;  */

void FUN_105c39b78(void)

{
  func_0x000105c3a094();
  return;
}



/* Entry: 105c39bb4; end: 105c39c13;  */

undefined8 FUN_105c39bb4(void)

{
  undefined8 unaff_x21;
  
  func_0x000105c3a04c();
  func_0x000105c3a060();
  FUN_105c39794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45f40();
  func_0x000105c3a00c();
  _objc_autoreleasePoolPop();
  return unaff_x21;
}



/* Entry: 105c39c14; end: 105c39c83;  */

void FUN_105c39c14(long param_1,long param_2)

{
  bool bVar1;
  long *unaff_x21;
  
  func_0x000105c3a01c();
  func_0x000105c3a0d8();
  func_0x00010c0f47a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    *(undefined1 *)unaff_x21 = 0;
  }
  else {
    FUN_105c3a80c();
    *unaff_x21 = param_1;
    unaff_x21[1] = param_2;
  }
  *(bool *)(unaff_x21 + 2) = !bVar1;
  func_0x000105c3a00c();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39c84; end: 105c39ccb;  */

void FUN_105c39c84(void)

{
  func_0x000105c3a01c();
  func_0x000105c3a0d8();
  func_0x00010bf066e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39ccc; end: 105c39d17;  */

void FUN_105c39ccc(void)

{
  func_0x000105c3a04c();
  func_0x000105c3a060();
  FUN_105c39794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1872a0();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39d18; end: 105c39d63;  */

void FUN_105c39d18(void)

{
  func_0x000105c3a04c();
  func_0x000105c3a060();
  FUN_105c39794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd340();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39d64; end: 105c39dab;  */

void FUN_105c39d64(void)

{
  func_0x000105c3a01c();
  func_0x000105c3a0d8();
  func_0x00010c0d11e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105c39594();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39dac; end: 105c39df3;  */

void FUN_105c39dac(void)

{
  func_0x000105c3a01c();
  func_0x000105c3a0d8();
  func_0x00010c0d9a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_105c39594();
  func_0x000105c3a00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 105c39df4; end: 105c39e2f;  */

undefined8 FUN_105c39df4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf45f60(uVar2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 105c39e30; end: 105c39ec3;  */

long FUN_105c39e30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de760;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105c39ec4; end: 105c39ed3;  */

void FUN_105c39ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de7a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c39ed4; end: 105c39efb;  */

long FUN_105c39ed4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c39efc; end: 105c39f67;  */

void FUN_105c39efc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1108de8a0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000105c39ffc();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_105c39f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c3a0ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c39f68; end: 105c39fd7;  */

void FUN_105c39f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c34b8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105c39ffc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_105c38be0(&uStack_30);
  return;
}



/* Entry: 105c39fd8; end: 105c3a0e3;  */

void FUN_105c39fd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c3a0e4; end: 105c3a163; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextFactory initWithCpp:] */

undefined1 * FUN_105c3a0e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec6f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000105c3a2f0(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105c3a164; end: 105c3a24b; +[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextFactory createWithAppVersion:metadataStore:enableWrites:] */

void FUN_105c3a164(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  func_0x0001000fbca4(auStack_58,param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    FUN_105c3a35c(&uStack_68,param_4);
  }
  FUN_105c3a340();
  FUN_105c42f88(auStack_40,auStack_58,&uStack_68,param_5);
  func_0x000105c3a318(&uStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_105c3990c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c3a350();
  FUN_105c3a340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 105c3a24c; end: 105c3a2a7; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextFactory .cxx_destruct] */

void FUN_105c3a24c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108de8b0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105c3a2f0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105c3a2a8; end: 105c3a33f; -[SCNComposerDynamicDeliveryUtilsDynamicDeliveryContextFactory .cxx_construct] */

undefined8 * FUN_105c3a2a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105c3a340; end: 105c3a35b;  */

void FUN_105c3a340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c3a35c; end: 105c3a413;  */

void FUN_105c3a35c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1108de918;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_105c3a414);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_105c3a794(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105c3a414; end: 105c3a50f;  */

void FUN_105c3a414(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1108de958;
  puVar4[3] = &PTR_DAT_1108de9f0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_1108de9a8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105c3a794(&uStack_50);
  return;
}



/* Entry: 105c3a510; end: 105c3a513;  */

void FUN_105c3a510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108de958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3a514; end: 105c3a527;  */

void FUN_105c3a514(void)

{
  FUN_105c3a784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3a528; end: 105c3a533;  */

long FUN_105c3a528(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de918;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105c3a534; end: 105c3a573;  */

void FUN_105c3a534(void)

{
  func_0x000105c3a800();
  return;
}



/* Entry: 105c3a574; end: 105c3a5c7;  */

void FUN_105c3a574(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000105c3a7f4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_105c39794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1872a0(uVar1,param_2,unaff_x20);
  func_0x000105c3a7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105c3a5c8; end: 105c3a61b;  */

void FUN_105c3a5c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000105c3a7f4();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_105c39794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd340(uVar1,param_2,unaff_x20);
  func_0x000105c3a7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105c3a61c; end: 105c3a667;  */

void FUN_105c3a61c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000105c3a7e8();
  func_0x00010c0d11e0(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  FUN_105c39594();
  func_0x000105c3a7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105c3a668; end: 105c3a6b3;  */

void FUN_105c3a668(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000105c3a7e8();
  func_0x00010c0d9a00(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  FUN_105c39594();
  func_0x000105c3a7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105c3a6b4; end: 105c3a6ef;  */

undefined8 FUN_105c3a6b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf45f60(uVar2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 105c3a6f0; end: 105c3a783;  */

long FUN_105c3a6f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108de918;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}


