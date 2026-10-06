/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b95dd8; end: 107b9613b; -[SCWebBrowserLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:webBrowsingMultiScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:adConfigProvider:userAdIdProvider:trackSeqNumProvider:circumstanceEngine:browserPrivacyConsentInfoManager:webViewRetainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107b95dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126fa140;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010be89fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar8 = (long)_DAT_11276b538;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c2a35e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a3540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b53c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276b53c) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b540;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_15;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b544;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b548;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_8;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b54c;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar4);
    func_0x00010c189400(puVar1);
    puVar6 = PTR_PTR_1126b0870;
    _objc_alloc();
    func_0x00010c033f60();
    lVar8 = (long)_DAT_11276b550;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar6;
    _objc_release(uVar4);
    func_0x00010c1fbfa0(*(undefined8 *)((long)puVar1 + lVar8));
    lVar8 = (long)_DAT_11276b554;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b558;
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_12;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b55c;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_13;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11276b560;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_14;
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b564);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b564) = puVar6;
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b568);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b568) = puVar6;
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b56c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b56c) = puVar6;
    _objc_release(uVar4);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 107b9613c; end: 107b96347; +[SCWebBrowserLayerViewController _registeredEventsForOperaSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107b9613c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_c0;
  undefined *puStack_b8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010c28f700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2330;
  puStack_c0 = puVar1;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca1d0;
  puStack_b8 = puVar14;
  func_0x00010bf73ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca320;
  puStack_b0 = puVar2;
  func_0x00010c158b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca320;
  puStack_a8 = puVar3;
  func_0x00010c274f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca1c8;
  puStack_a0 = puVar4;
  func_0x00010bf7c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5b08;
  puStack_98 = puVar5;
  func_0x00010bf4f3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ca1c8;
  puStack_90 = puVar6;
  func_0x00010bf7c820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  puStack_88 = puVar7;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2638;
  puStack_80 = puVar8;
  func_0x00010c152660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9460;
  puStack_78 = puVar9;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,0xb);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  uVar12 = *(ulong *)(puVar1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf90f80();
  _objc_release(uVar12);
  if ((uVar13 & 1) == 0) {
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf01400();
    _objc_release(puVar1);
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  return puVar14;
}



/* Entry: 107b96348; end: 107b963cb; -[SCWebBrowserLayerViewController _allowPreloading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b96348(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf01400();
    _objc_release(param_1);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 107b963cc; end: 107b964b7; -[SCWebBrowserLayerViewController _allowPrefetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107b963cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf013c0();
    if ((int)lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c107700();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + _DAT_11276b570);
        _objc_opt_respondsToSelector(uVar7,PTR_s_loadPrefetchHints_baseURL__1126049c8);
        uVar8 = (uint)uVar7;
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  else {
    uVar8 = 0;
  }
  return uVar8 & 1;
}



/* Entry: 107b964b8; end: 107b965cf; -[SCWebBrowserLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b964b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa140;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillFullyAppear_112685468);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11276b574) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b817710(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf90f80();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    if (*(long *)(param_1 + _DAT_11276b578) == 0) {
      lVar5 = param_1;
      func_0x00010bdf9840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4da20(param_1);
      _objc_release(lVar5);
    }
    func_0x00010bebc0c0(param_1);
  }
  return;
}



/* Entry: 107b965d0; end: 107b9696f; -[SCWebBrowserLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b965d0(double param_1,undefined *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa140;
  puStack_50 = param_2;
  _objc_msgSendSuper2(&puStack_50,PTR_s_viewDidFullyAppear_112684c88);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = param_2;
  func_0x00010be46f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar3);
  func_0x00010be935c0(param_2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11276b57c;
  uVar9 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = puVar3;
  _objc_release(uVar9);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276b538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf8f2c0();
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar9 != 0) {
    func_0x00010c26f320(*(undefined8 *)(param_2 + lVar10));
    func_0x00010c0df720(param_1 * 1000.0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d780(*(undefined8 *)(param_2 + _DAT_11276b570));
    _objc_release(puVar3);
  }
  bVar1 = param_2[_DAT_11276b580];
  param_2[_DAT_11276b580] = 0;
  func_0x00010bea25c0(param_2);
  puVar3 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf91840();
  if ((int)puVar5 == 0) {
LAB_107b9676c:
    _objc_release(puVar3);
  }
  else {
    puVar5 = param_2;
    func_0x00010bdd5940();
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x3) {
      puVar3 = PTR_PTR_1126b2638;
      func_0x00010bfe1c20(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_2);
      goto LAB_107b9676c;
    }
  }
  puVar3 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf92560();
  _objc_release(puVar3);
  if ((int)puVar5 != 0) {
    puVar3 = PTR_PTR_1126c9a00;
    func_0x00010c2a4400(PTR_PTR_1126c9a00);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010bf60c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  if ((*(long *)(param_2 + _DAT_11276b584) != 0) ||
     ((bVar1 != 0 && (puVar3 = param_2, func_0x00010be40500(), ((ulong)puVar3 & 1) != 0))))
  goto LAB_107b967f8;
  lVar10 = (long)_DAT_11276b570;
  uVar6 = *(ulong *)(param_2 + lVar10);
  func_0x00010c089360();
  if ((uVar6 & 1) != 0) goto LAB_107b967f8;
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf90400();
  if (((int)uVar9 == 0) || ((bVar1 & 1) == 0)) {
    _objc_release(uVar4);
LAB_107b968f0:
    func_0x00010be4d0c0(param_2);
  }
  else {
    lVar7 = *(long *)(param_2 + lVar10);
    func_0x00010bf60880();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar8 == 0) goto LAB_107b968f0;
    uVar9 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010bf60880(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4eca0(param_2);
    _objc_release(puVar3);
    _objc_release(uVar9);
  }
  puVar3 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf92560();
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = PTR_PTR_1126c9a00;
    func_0x00010c2a4400(PTR_PTR_1126c9a00);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010bf60c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
LAB_107b967f8:
  _objc_release(puVar2);
  return;
}



/* Entry: 107b96970; end: 107b969c7; -[SCWebBrowserLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

void FUN_107b96970(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be39640();
  uVar1 = param_1;
  func_0x00010bdca2a0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadPrefetchHints_1125712b0);
    return;
  }
  uVar1 = param_1;
  func_0x00010bdca2c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadDefaultURL_112570dd0);
    return;
  }
  return;
}



/* Entry: 107b969c8; end: 107b96a1f; -[SCWebBrowserLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

void FUN_107b969c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b96a20; end: 107b96a27; -[SCWebBrowserLayerViewController layerViewContainerOption] */

undefined8 FUN_107b96a20(void)

{
  return 3;
}



/* Entry: 107b96a28; end: 107b96a97; -[SCWebBrowserLayerViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96a28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillFullyDisappear_112685470);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 107b96a98; end: 107b96d77; -[SCWebBrowserLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96a98(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x00010bdcc480();
  puStack_68 = PTR_PTR_1126fa140;
  puStack_70 = param_2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_viewDidFullyDisappear_112684ca8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + _DAT_11276b588);
  *(undefined **)(param_2 + _DAT_11276b588) = puVar1;
  _objc_release(uVar7);
  func_0x00010be7e2e0(param_2);
  func_0x00010bea25c0(param_2);
  puVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf91840();
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    func_0x00010bdd5940();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x3) goto LAB_107b96b80;
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010c2368e0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_2);
  }
  _objc_release(puVar1);
LAB_107b96b80:
  lVar9 = (long)_DAT_11276b570;
  lVar3 = *(long *)(param_2 + lVar9);
  func_0x00010c085420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010c0f9820(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c067fc0();
  _objc_release(lVar8);
  _objc_release(puVar1);
  _objc_release(lVar3);
  lVar8 = (long)_DAT_11276b538;
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2060();
  dVar10 = param_1;
  _objc_release(uVar7);
  func_0x00010bdcc320(param_2);
  uVar5 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf91880();
  _objc_release(uVar5);
  if ((int)uVar7 != 0) {
    puVar1 = param_2;
    func_0x00010bf60c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + _DAT_11276b58c);
    *(undefined **)(param_2 + _DAT_11276b58c) = puVar1;
    _objc_release(uVar7);
  }
  func_0x00010bf997e0(*(undefined8 *)(param_2 + lVar9));
  if (dVar10 < (double)SUB84(param_1,0) && lVar4 < 1) {
    puVar1 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf01400();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c138000(*(undefined8 *)(param_2 + lVar9));
    }
  }
  puVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  else {
    puVar6 = param_2;
    func_0x00010be3d2e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010c138000(*(undefined8 *)(param_2 + lVar9));
    }
  }
  puVar1 = param_2;
  func_0x00010be3d2e0();
  if ((int)puVar1 != 0) {
    param_2[_DAT_11276b590] = 1;
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_11276b584);
  *(undefined8 *)(param_2 + _DAT_11276b584) = 0;
  _objc_release(uVar7);
  param_2[_DAT_11276b594] = 0;
  return;
}



/* Entry: 107b96d78; end: 107b96dbf; -[SCWebBrowserLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96d78(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b570;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_pause_11261b0e8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107b96dc0; end: 107b96e53; -[SCWebBrowserLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96dc0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa140;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  uVar1 = *(ulong *)(param_1 + _DAT_11276b570);
  func_0x00010bf90260();
  if ((uVar1 & 1) == 0) {
    func_0x00010be8b840(param_1);
  }
  func_0x00010be935c0(param_1);
  func_0x00010be93200(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b56c);
  *(undefined **)(param_1 + _DAT_11276b56c) = puVar2;
  _objc_release(uVar3);
  return;
}



/* Entry: 107b96e54; end: 107b96e5b; -[SCWebBrowserLayerViewController isRecyclable] */

undefined8 FUN_107b96e54(void)

{
  return 0;
}



/* Entry: 107b96e5c; end: 107b96ed3; -[SCWebBrowserLayerViewController _resetOperaPageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96e5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b57c);
  *(undefined8 *)(param_1 + _DAT_11276b57c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b588);
  *(undefined8 *)(param_1 + _DAT_11276b588) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b598);
  *(undefined8 *)(param_1 + _DAT_11276b598) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b58c);
  *(undefined8 *)(param_1 + _DAT_11276b58c) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276b59c;
  func_0x00010bf84200(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b96ed4; end: 107b96f7f; -[SCWebBrowserLayerViewController _resetLoadingMetricsAlsoResetCurrentInteractiveWebViewIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b96ed4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5a0);
  *(undefined8 *)(param_1 + _DAT_11276b5a0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5a4);
  *(undefined8 *)(param_1 + _DAT_11276b5a4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5a8);
  *(undefined8 *)(param_1 + _DAT_11276b5a8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5ac);
  *(undefined8 *)(param_1 + _DAT_11276b5ac) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11276b5b0) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b584);
  *(undefined8 *)(param_1 + _DAT_11276b584) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5b4);
    *(undefined8 *)(param_1 + _DAT_11276b5b4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b96f80; end: 107b9704f; -[SCWebBrowserLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b96f80(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 != 3) {
    return 1;
  }
  uVar2 = param_1;
  func_0x00010be40500();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e8b00();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      return *(byte *)(param_1 + (long)_DAT_11276b594) ^ 1;
    }
    uVar2 = *(ulong *)(param_1 + (long)_DAT_11276b570);
    func_0x00010c07d440();
    if (((uVar2 & 1) == 0) && (*(long *)(param_1 + (long)_DAT_11276b598) == 0)) {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c298f80();
      _objc_release(param_1);
      if ((int)uVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 107b97050; end: 107b97053; -[SCWebBrowserLayerViewController didReceiveUpdateProperties:] */

void FUN_107b97050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWebViewUrlWithProperties__112596a80);
  return;
}



/* Entry: 107b97054; end: 107b97273; -[SCWebBrowserLayerViewController _updateWebViewUrlWithProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b97054(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c2a4460(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 == 0) goto LAB_107b9725c;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c089240(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b5b4);
  *(ulong *)(param_1 + _DAT_11276b5b4) = uVar2;
  _objc_release(uVar5);
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + _DAT_11276b590) = 0;
  lVar6 = param_1;
  func_0x00010be3d2e0();
  if ((int)lVar6 != 0) {
    func_0x00010be39640(param_1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c2a4460(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010be3d2e0();
  if ((int)lVar6 == 0) {
LAB_107b971b8:
    func_0x00010be4eca0(param_1,param_2,uVar2);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276b570);
    func_0x00010bf6eb40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0(uVar2,param_2,uVar5);
    _objc_release(uVar5);
    if ((uVar3 & 1) == 0) goto LAB_107b971b8;
    lVar6 = (long)_DAT_11276b584;
    _objc_retain(uVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar2;
    _objc_release(uVar5);
  }
  puVar1 = PTR_PTR_1126d6ce0;
  func_0x00010bfe6000(PTR_PTR_1126d6ce0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdd5940(param_1);
  puVar4 = puVar1;
  func_0x00010c2a99c0(puVar1,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2afe40(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010bdcc840(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
LAB_107b9725c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b97274; end: 107b9727b; -[SCWebBrowserLayerViewController canHandleRoundCorner] */

undefined8 FUN_107b97274(void)

{
  return 0;
}



/* Entry: 107b9727c; end: 107b97d9f; -[SCWebBrowserLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9727c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_2 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar1;
  func_0x00010bf90f80();
  if (((ulong)puVar33 & 1) == 0) {
    lVar31 = *(long *)(param_2 + _DAT_11276b570);
    _objc_release();
    if (lVar31 == 0) {
      puVar33 = (undefined *)0x0;
      goto LAB_107b97d58;
    }
  }
  else {
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276b538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar2;
  func_0x00010bf91880();
  if ((int)uVar29 == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar31 = (long)_DAT_11276b58c;
    lVar32 = *(long *)(param_2 + lVar31);
    _objc_release(uVar2);
    if (lVar32 != 0) {
      puVar33 = *(undefined **)(param_2 + lVar31);
      puVar1 = puVar33;
      _objc_retain();
      goto LAB_107b97d58;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11276b57c;
  func_0x00010c26f380();
  lVar32 = (long)_DAT_11276b5a4;
  dVar36 = param_1;
  dVar38 = param_1;
  if (*(long *)(param_2 + lVar32) != 0) {
    func_0x00010c26f380();
    dVar38 = dVar36;
    if (dVar36 <= 0.0) {
      dVar38 = 0.0;
    }
    func_0x00010bf433a0(*(undefined8 *)(param_2 + lVar31));
    func_0x00010bf433a0(puVar1);
  }
  dVar37 = 1.0;
  if (*(ulong *)(param_2 + _DAT_11276b5b8) < 2) {
    func_0x00010bf997e0(*(undefined8 *)(param_2 + _DAT_11276b570));
    dVar37 = dVar36;
  }
  lVar35 = *(long *)(param_2 + _DAT_11276b588);
  if (lVar35 == 0) {
    lVar35 = *(long *)(param_2 + _DAT_11276b598);
  }
  _objc_retain(lVar35);
  puVar3 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1740();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2320();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9ab0;
  func_0x00010c0f15a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9ab0;
  func_0x00010c0f15c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1f20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(*(undefined8 *)(param_2 + lVar31));
  dVar38 = dVar38 * 1000.0;
  func_0x00010c0df720(dVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1f40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(lVar35);
  dVar38 = dVar38 * 1000.0;
  func_0x00010c0df720(dVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1700();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(*(undefined8 *)(param_2 + _DAT_11276b5a0));
  dVar38 = dVar38 * 1000.0;
  func_0x00010c0df720(dVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9ab0;
  func_0x00010c0f15e0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(*(undefined8 *)(param_2 + lVar32));
  func_0x00010c0df720(dVar38 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2340();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1760();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126c9ab0;
  func_0x00010c0f16c0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar26;
  func_0x00010c0d3c80();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar34);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((*(long *)(param_2 + _DAT_11276b5a8) != 0) || (*(long *)(param_2 + _DAT_11276b5ac) != 0)) {
    puVar14 = PTR_PTR_1126c9ab0;
    func_0x00010c0f14a0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
  }
  lVar32 = (long)_DAT_11276b570;
  lVar31 = *(long *)(param_2 + lVar32);
  func_0x00010c063fe0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar31 != 0) &&
     ((lVar28 = lVar31, func_0x00010c067ec0(), (int)lVar28 == 0 ||
      (lVar28 = lVar31, func_0x00010c067ec0(), 399 < (int)lVar28)))) {
    uVar29 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010c063fe0(uVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1600(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
    _objc_release(uVar29);
  }
  uVar29 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010bf6eb40(uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1be0(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar14);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_2 + lVar32);
  func_0x00010c063fe0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1620(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar14);
  _objc_release(uVar29);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfdce60(*(undefined8 *)(param_2 + lVar32));
  func_0x00010c0df6e0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b9450;
  func_0x00010c0867c0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar16);
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c063f20(*(undefined8 *)(param_2 + lVar32));
  func_0x00010c0df720(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b9450;
  func_0x00010c0865e0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar16);
  _objc_release(puVar14);
  lVar28 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar28;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar28);
  if (lVar27 != 0) {
    lVar28 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar28;
    func_0x00010c0d2720();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ca1a8;
    func_0x00010c2767c0(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
    _objc_release(lVar27);
    _objc_release(lVar28);
    lVar28 = param_2;
    func_0x00010be46f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar33);
    _objc_release(lVar28);
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar28 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01400();
  func_0x00010c0df6e0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca1e0;
  func_0x00010c0ebe60(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(lVar28);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar28 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf013c0();
  func_0x00010c0df6e0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca1e0;
  func_0x00010bf912e0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(lVar28);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bdd5940(param_2);
  func_0x00010c0df780(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca408;
  func_0x00010bf21840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar16);
  _objc_release(puVar14);
  lVar28 = *(long *)(param_2 + lVar32);
  func_0x00010c087e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 != 0) {
    uVar29 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010c087e20(uVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ca408;
    func_0x00010c15f4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
    _objc_release(uVar29);
  }
  lVar28 = *(long *)(param_2 + lVar32);
  func_0x00010c087e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 != 0) {
    uVar29 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010c087e40(uVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ca408;
    func_0x00010c15f4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
    _objc_release(uVar29);
  }
  lVar28 = *(long *)(param_2 + lVar32);
  func_0x00010c087e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 != 0) {
    uVar29 = *(undefined8 *)(param_2 + lVar32);
    func_0x00010c087e60();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ca408;
    func_0x00010c15f500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar14);
    _objc_release(uVar29);
  }
  _objc_release(lVar31);
  _objc_release(lVar35);
  _objc_release();
LAB_107b97d58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
    ___stack_chk_fail();
    lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar14 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010c0d2720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    puVar33 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar16 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126ca1a8;
      func_0x00010c089020();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = *(undefined **)(puVar1 + _DAT_11276b5b4);
      puVar18 = puVar34;
      if (puVar34 == (undefined *)0x0) {
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar1;
        func_0x00010c0d2740();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar1;
      }
      puVar33 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      if (puVar34 == (undefined *)0x0) {
        _objc_release(puVar18);
        _objc_release(puVar16);
      }
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
      ___stack_chk_fail();
      uVar2 = *(undefined8 *)(puVar14 + _DAT_11276b550);
      lVar30 = (long)_DAT_11276b5c4;
      _objc_retain(uVar2);
      uVar29 = *(undefined8 *)(puVar14 + lVar30);
      *(undefined8 *)(puVar14 + lVar30) = uVar2;
      _objc_release(uVar29);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (puVar14,PTR_s_setView__112666308,*(undefined8 *)(puVar14 + lVar30));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar33);
  return;
}



/* Entry: 107b97da0; end: 107b97ed7; -[SCWebBrowserLayerViewController _lastInteractedItemIndexEventParam] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b97da0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ca1a8;
    func_0x00010c089020();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_1 + _DAT_11276b5b4);
    puVar3 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0d2740();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
    }
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(puVar1 + _DAT_11276b550);
    lVar6 = (long)_DAT_11276b5c4;
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(puVar1 + lVar6);
    *(undefined8 *)(puVar1 + lVar6) = uVar7;
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar1,PTR_s_setView__112666308,*(undefined8 *)(puVar1 + lVar6));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b97ed8; end: 107b97f2b; -[SCWebBrowserLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b97ed8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b550);
  lVar3 = (long)_DAT_11276b5c4;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b97f2c; end: 107b98087; -[SCWebBrowserLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b97f2c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276b5c8);
    *(undefined8 *)(param_1 + _DAT_11276b5c8) = 0;
    _objc_release(uVar4);
  }
  func_0x00010be80160(param_1);
  func_0x00010be39640(param_1);
  lVar5 = param_1;
  func_0x00010bdca2a0();
  if ((int)lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010bdca2c0();
    if ((int)lVar5 != 0) {
      func_0x00010be4d0c0(param_1);
    }
  }
  else {
    func_0x00010be4e440(param_1);
  }
  puVar6 = PTR_PTR_1126c9a00;
  func_0x00010c2a4300(PTR_PTR_1126c9a00);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar6,lVar5);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107b98088; end: 107b9852b; -[SCWebBrowserLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b98088(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar7 = (long)_DAT_11276b584;
  if (*(long *)(param_2 + lVar7) == 0) {
    puVar6 = PTR_PTR_1126ca1e0;
    func_0x00010c28f700(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    if ((int)uVar5 == 0) goto LAB_107b98154;
    uVar4 = param_2;
    func_0x00010be3d2e0();
    if ((int)uVar4 != 0) {
      *(undefined1 *)(param_2 + (long)_DAT_11276b590) = 0;
      func_0x00010be39640(param_2);
    }
    uVar4 = param_2;
    func_0x00010be427c0();
    if ((int)uVar4 != 0) {
      func_0x00010be4d0c0(param_2);
    }
  }
  else {
LAB_107b98154:
    uVar2 = *(ulong *)(param_2 + (long)_DAT_11276b538);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf92520();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      puVar6 = PTR_PTR_1126ca1d0;
      func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(uVar2);
      if ((int)uVar5 != 0) {
        func_0x00010be77c60(param_2);
        goto LAB_107b9836c;
      }
    }
    puVar6 = PTR_PTR_1126b2330;
    func_0x00010bf96940(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    if ((int)uVar5 == 0) {
      puVar6 = PTR_PTR_1126ca320;
      func_0x00010c158b00(PTR_PTR_1126ca320);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      if ((int)uVar5 == 0) {
        puVar6 = PTR_PTR_1126ca320;
        func_0x00010c274f00(PTR_PTR_1126ca320);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        if (((int)uVar5 != 0) && (uVar4 = param_2, func_0x00010be427c0(), (int)uVar4 != 0)) {
          puVar6 = PTR_PTR_1126ca1a8;
          func_0x00010c084640(PTR_PTR_1126ca1a8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_2 + (long)_DAT_11276b5b4);
          *(ulong *)(param_2 + (long)_DAT_11276b5b4) = uVar4;
          _objc_release(uVar5);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126ca1a8;
          func_0x00010c2a3b80(PTR_PTR_1126ca1a8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
          _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar6);
          uVar4 = uVar2;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar2);
          func_0x00010be32340(param_2);
          _objc_release(uVar4);
        }
      }
      else {
        func_0x00010bee4360(param_2);
      }
    }
    else if (*(long *)(param_2 + lVar7) != 0) {
      *(undefined1 *)(param_2 + (long)_DAT_11276b580) = 1;
    }
  }
LAB_107b9836c:
  puVar6 = PTR_PTR_1126c9460;
  func_0x00010c2a5c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar5 != 0) {
    bVar1 = *(byte *)(param_2 + (long)_DAT_11276b5cc);
    _objc_release(puVar6);
    if ((bVar1 & 1) != 0) goto LAB_107b983cc;
    lVar7 = (long)_DAT_11276b59c;
    func_0x00010bf84200(*(undefined8 *)(param_2 + lVar7));
    puVar6 = *(undefined **)(param_2 + lVar7);
    *(undefined8 *)(param_2 + lVar7) = 0;
  }
  _objc_release(puVar6);
LAB_107b983cc:
  puVar6 = PTR_PTR_1126b2638;
  func_0x00010c2a59e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar6);
  if (((int)uVar5 != 0) && (*(long *)(param_2 + (long)_DAT_11276b57c) != 0)) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    *(undefined8 *)(param_2 + (long)_DAT_11276b5d0) = param_1;
    lVar7 = (long)_DAT_11276b570;
    uVar4 = *(ulong *)(param_2 + lVar7);
    _objc_opt_respondsToSelector(uVar4,PTR_s_updateExitMethod__11267f0d0);
    if ((uVar4 & 1) != 0) {
      func_0x00010c285aa0(*(undefined8 *)(param_2 + lVar7));
    }
  }
  uVar4 = param_2;
  func_0x00010be44d40();
  if ((int)uVar4 != 0) {
    uVar4 = param_2;
    func_0x00010bdf9840(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ca320;
    func_0x00010c158b00(PTR_PTR_1126ca320);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    uVar2 = uVar4;
    if ((int)uVar5 != 0) {
      puVar6 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar6);
    }
    func_0x00010be4da20(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b9852c; end: 107b98643; -[SCWebBrowserLayerViewController _isTriggeringAttachmentForNewScb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107b9852c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  if ((int)uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010c28f700(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    if ((uVar6 & 1) == 0) {
      puVar4 = PTR_PTR_1126ca1d0;
      func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar4);
      if ((uVar6 & 1) == 0) {
        puVar5 = PTR_PTR_1126ca320;
        func_0x00010c158b00(PTR_PTR_1126ca320);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar5);
        _objc_release(puVar5);
      }
      else {
        uVar6 = 1;
      }
      _objc_release(puVar4);
    }
    else {
      uVar6 = 1;
    }
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107b98644; end: 107b988d7; -[SCWebBrowserLayerViewController _isOperaEventForCurrentAd:page:params:assertCurrentAd:] */

bool FUN_107b98644(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca1e0;
  _objc_retain(param_3);
  func_0x00010c28f700(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
    goto LAB_107b988b0;
  }
  uVar4 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010bef5460(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar6 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010bef53a0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar2);
  uVar6 = uVar11;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar11);
  if (uVar6 == 0) {
    uVar11 = 0x7fffffffffffffff;
    if (uVar4 == 0) goto LAB_107b9886c;
LAB_107b987d4:
    uVar7 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 == 0) {
      bVar1 = false;
    }
    else {
      uVar9 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if ((int)uVar5 == 0) {
        bVar1 = false;
      }
      else {
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c2415a0();
        bVar1 = uVar11 == uVar5;
        _objc_release(param_1);
      }
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    func_0x00010c067fc0(uVar11);
    if (uVar4 != 0) goto LAB_107b987d4;
LAB_107b9886c:
    bVar1 = false;
  }
  _objc_release(uVar6);
  _objc_release(uVar4);
LAB_107b988b0:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107b988d8; end: 107b98997; -[SCWebBrowserLayerViewController _profileIcon] */

void FUN_107b988d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010bfe8840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfe78e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b98998; end: 107b989f7; -[SCWebBrowserLayerViewController _defaultURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b98998(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276b5c8);
  if (lVar1 == 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107b989f8; end: 107b98d03; -[SCWebBrowserLayerViewController _announceRetargetPromptRenderedIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b989f8(double param_1,undefined **param_2,undefined8 param_3)

{
  double dVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  double dVar14;
  
  ppuVar12 = *(undefined ***)((long)param_2 + (long)_DAT_11276b5b4);
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar2 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0d2740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9b0;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar12 = ppuVar3;
    }
    _objc_retain(ppuVar12);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    _objc_retain(ppuVar12);
  }
  uVar4 = *(ulong *)((long)param_2 + (long)_DAT_11276b56c);
  func_0x00010c0e00e0(uVar4,param_3,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    ppuVar2 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c2a3080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c13dee0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar7 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c13dee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
    }
    else {
      _objc_retain(ppuVar6);
      ppuVar9 = ppuVar6;
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((ppuVar9 != (undefined **)0x0) &&
       (lVar13 = (long)_DAT_11276b57c, *(long *)((long)param_2 + lVar13) != 0)) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      dVar14 = param_1;
      func_0x00010c26f320(*(undefined8 *)((long)param_2 + lVar13));
      dVar1 = dVar14 * -1000.0;
      func_0x00010c13e000(ppuVar9);
      if (dVar14 <= param_1 + dVar1) {
        lVar13 = *(long *)((long)param_2 + (long)_DAT_11276b570);
        func_0x00010bf60060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar13 != 0) {
          ppuVar2 = param_2;
          func_0x00010c0ea360();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c0dc640();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar2 = param_2;
            func_0x00010be46f40(param_2);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar2;
            func_0x00010c0d3c80();
            _objc_release(ppuVar2);
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf604c0(PTR_PTR_1126afec0);
            func_0x00010c0df720(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126ca408;
            func_0x00010c13df40(PTR_PTR_1126ca408);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar3,param_3,puVar10,puVar11);
            _objc_release(puVar11);
            _objc_release(puVar10);
            puVar10 = PTR_PTR_1126ca1e0;
            func_0x00010c13df20(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar3;
            func_0x00010bf51e00(ppuVar3);
            func_0x00010bf04440(param_2,param_3,puVar10,ppuVar2);
            _objc_release(ppuVar2);
            _objc_release(puVar10);
            _objc_release(ppuVar3);
          }
        }
      }
    }
    _objc_release(ppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 107b98d04; end: 107b99293; -[SCWebBrowserLayerViewController _presentRetargetPromptIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b98d04(double param_1,undefined **param_2)

{
  double dVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  double dVar16;
  undefined *puStack_108;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  ppuVar14 = *(undefined ***)((long)param_2 + (long)_DAT_11276b5b4);
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar2 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0d2740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9b0;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar14 = ppuVar3;
    }
    _objc_retain(ppuVar14);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    _objc_retain(ppuVar14);
  }
  uVar4 = *(ulong *)((long)param_2 + (long)_DAT_11276b56c);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    ppuVar2 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c2a3080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c13dee0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar7 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c13dee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
    }
    else {
      _objc_retain(ppuVar6);
      ppuVar9 = ppuVar6;
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((ppuVar9 != (undefined **)0x0) &&
       (lVar15 = (long)_DAT_11276b57c, *(long *)((long)param_2 + lVar15) != 0)) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      dVar16 = param_1;
      func_0x00010c26f320(*(undefined8 *)((long)param_2 + lVar15));
      dVar1 = dVar16 * -1000.0;
      func_0x00010c13e000(ppuVar9);
      if (dVar16 <= param_1 + dVar1) {
        lVar15 = *(long *)((long)param_2 + (long)_DAT_11276b570);
        func_0x00010bf60060();
        _objc_retainAutoreleasedReturnValue();
        if (lVar15 != 0) {
          ppuVar2 = param_2;
          func_0x00010c0ea360();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c0dc640();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar3);
          _objc_release(ppuVar2);
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar2 = param_2;
            func_0x00010be82d20();
            _objc_retainAutoreleasedReturnValue();
            puStack_108 = PTR_PTR_1126c3378;
            if (ppuVar2 == (undefined **)0x0) {
              puStack_108 = (undefined *)0x0;
            }
            else {
              puVar10 = PTR_PTR_1126ae558;
              func_0x00010bfe9ca0(PTR_PTR_1126ae558);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c088060();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
            }
            ppuVar3 = param_2;
            func_0x00010c0f0be0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar3;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            _objc_release(ppuVar3);
            puVar11 = PTR_PTR_1126b15a0;
            ppuVar3 = ppuVar9;
            func_0x00010bf259e0(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf25a60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            _objc_initWeak(auStack_80,param_2);
            puVar12 = PTR_PTR_1126b0ae0;
            ppuVar3 = ppuVar9;
            func_0x00010c2711a0(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar9;
            func_0x00010c260dc0(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0xc2000000;
            pcStack_98 = FUN_107b99294;
            puStack_90 = &UNK_1108434b0;
            _objc_copyWeak(auStack_88,auStack_80);
            puStack_d8 = puVar10;
            uStack_d0 = 0xc2000000;
            uStack_c8 = 0x107b992c0;
            puStack_c0 = &UNK_110841fb0;
            _objc_copyWeak(auStack_b0,auStack_80);
            _objc_retain(lVar15);
            lStack_b8 = lVar15;
            _objc_copyWeak(auStack_e0,auStack_80);
            func_0x00010bf57e20(0x4059000000000000);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)((long)param_2 + (long)_DAT_11276b59c);
            *(undefined **)((long)param_2 + (long)_DAT_11276b59c) = puVar12;
            _objc_release(uVar13);
            _objc_release(ppuVar6);
            _objc_release(ppuVar3);
            func_0x00010c0ea360(param_2);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = param_2;
            func_0x00010c0dc640();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25f340();
            _objc_release(ppuVar6);
            _objc_release(ppuVar3);
            _objc_release(param_2);
            _objc_destroyWeak(auStack_e0);
            _objc_release(lStack_b8);
            _objc_destroyWeak(auStack_b0);
            _objc_destroyWeak(auStack_88);
            _objc_destroyWeak(auStack_80);
            _objc_release(puVar11);
            _objc_release(ppuVar7);
            _objc_release(puStack_108);
            _objc_release(ppuVar2);
          }
        }
        _objc_release(lVar15);
      }
    }
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar14);
  return;
}



/* Entry: 107b99294; end: 107b99327;  */

void FUN_107b99294(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b99328; end: 107b993b3; -[SCWebBrowserLayerViewController _didTapOnNotification] */

void FUN_107b99328(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010c13dfa0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  func_0x00010bf04440(param_1,param_2,puVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b993b4; end: 107b9946b; -[SCWebBrowserLayerViewController _didTapOnExbButtonWithUrl:] */

void FUN_107b993b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b9946c;
  puStack_48 = &UNK_110848bd8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0e9b80(puVar1,param_2,param_3,PTR____NSDictionary0__struct_11034ab58,&puStack_60);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b9946c; end: 107b995c7;  */

void FUN_107b9946c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be46f40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca408;
    func_0x00010c13dea0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca408;
    func_0x00010c13dfe0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010c13de80(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010bf04440(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107b995c8; end: 107b99757; -[SCWebBrowserLayerViewController _didSwipeToDismissWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b995c8(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  if (param_3 == 2) {
    ppuVar5 = *(undefined ***)((long)param_1 + (long)_DAT_11276b5b4);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar1 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c0d2740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9b0;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar5 = ppuVar2;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
    }
    else {
      _objc_retain(ppuVar5);
    }
    func_0x00010c1d0640(*(undefined8 *)((long)param_1 + (long)_DAT_11276b56c),param_2,
                        PTR____kCFBooleanTrue_11034ab68,ppuVar5);
    ppuVar1 = param_1;
    func_0x00010be46f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0d3c80();
    _objc_release(ppuVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca408;
    func_0x00010c13de20(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar2,param_2,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010c13de40(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bf51e00(ppuVar2);
    func_0x00010bf04440(param_1,param_2,puVar3,ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 107b99758; end: 107b997bf; -[SCWebBrowserLayerViewController _removeBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99758(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachScopeBasedBrowserVC_11255c738);
  return;
}



/* Entry: 107b997c0; end: 107b998f3; -[SCWebBrowserLayerViewController _removeWebBrowsingScopes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b997c0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_11276b564);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar7 = (long)_DAT_11276b544;
      iVar2 = (int)*(undefined8 *)(param_1 + lVar7);
      func_0x00010c072560();
      if (iVar2 != 0) {
        func_0x00010c12e1e0(*(undefined8 *)(param_1 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c138000(*(undefined8 *)(lVar5 + _DAT_11276b570));
                    /* WARNING: Could not recover jumptable at 0x00010bec36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s__stopPresentingScopeBasedBrowser_11258e758);
  return;
}



/* Entry: 107b998f4; end: 107b99927; -[SCWebBrowserLayerViewController _detachScopeBasedBrowserVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b998f4(long param_1,undefined8 param_2)

{
  func_0x00010c138000(*(undefined8 *)(param_1 + _DAT_11276b570),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bec36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopPresentingScopeBasedBrowser_11258e758);
  return;
}



/* Entry: 107b99928; end: 107b99967; -[SCWebBrowserLayerViewController _stopPresentingScopeBasedBrowserVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11276b550),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b570);
  *(undefined8 *)(param_1 + _DAT_11276b570) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b99968; end: 107b99a9b; -[SCWebBrowserLayerViewController _prewarmWebViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99968(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276b540;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_11276b53c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf90f80();
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      uVar2 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        uVar2 = uVar3;
        func_0x00010bf7fd40();
        puVar5 = PTR_PTR_1126d6ce8;
        if ((uVar2 & 1) == 0) {
          uVar2 = param_1;
          func_0x00010bdf9840(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf62b00(puVar5,param_2,1,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
        }
        else {
          puVar5 = (undefined *)0x0;
        }
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c112a60();
        _objc_release(uVar4);
        _objc_release(puVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 107b99a9c; end: 107b99b6f; -[SCWebBrowserLayerViewController _initBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99a9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010be3d2e0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b570);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(uVar2);
  }
  lVar1 = param_1;
  func_0x00010beeaa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a5a0(param_1,param_2,lVar1);
  lVar3 = param_1;
  func_0x00010be3d2e0();
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126ca1e0;
    func_0x00010bf216e0(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be46f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar4,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b99b70; end: 107b99bf7; -[SCWebBrowserLayerViewController _presentBrowserWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_11276b5c4),param_2,
                        &PTR____CFConstantStringClassReference_110eb0d18);
    func_0x00010be7e4c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b99bf8; end: 107b99ec7; -[SCWebBrowserLayerViewController _presentScopeBasedBrowserWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11276b5cc;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11276b550);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bec36c0(param_1);
    }
    *(undefined1 *)(param_1 + lVar7) = 1;
    lVar7 = param_1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c1490c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c28f620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar3 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a77a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    _objc_initWeak(auStack_68,param_1);
    puVar5 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c297260(puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b5a68;
    _objc_alloc(PTR_PTR_1126b5a68);
    lVar7 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010befd3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000e00(puVar5);
    _objc_release(lVar6);
    _objc_release(lVar7);
    func_0x00010c06b9e0(param_3);
    func_0x00010c18eb00(puVar5);
    if (*(long *)(param_1 + _DAT_11276b544) != 0) {
      func_0x00010bf9d620();
      func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11276b564));
    }
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b99ec8; end: 107b99f2f;  */

void FUN_107b99ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68100();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b99f30; end: 107b99f8f; -[SCWebBrowserLayerViewController _setBrowserOffScreenForOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b570;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setIsOffScreenForOpera__11264a5d8);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b2ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setIsOffScreenForOpera__11264a5d8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setIsOffScreen__11264a5d0,param_3);
  return;
}



/* Entry: 107b99f90; end: 107b9a047; -[SCWebBrowserLayerViewController _onBrowserCompletion:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b99f90(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_4 == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    lVar5 = (long)_DAT_11276b570;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010c1b2ea0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_11276b5cc) = 0;
    func_0x00010bdcbf00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9a048; end: 107b9a217; -[SCWebBrowserLayerViewController _announceInitBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a048(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ca408;
  func_0x00010bf21840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar3 = param_1;
  puStack_78 = puVar2;
  func_0x00010bdd5940(param_1);
  func_0x00010c0df780(puVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca408;
  puStack_68 = puVar4;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  puStack_70 = puVar5;
  func_0x00010bdf9840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_60 = ppuVar6;
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  ppuVar3 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,ppuVar3);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126ca1e0;
  func_0x00010bf21700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf04440(param_1,param_2,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + _DAT_11276b598);
  *(undefined **)(puVar1 + _DAT_11276b598) = puVar4;
  _objc_release(uVar8);
  puVar1[_DAT_11276b594] = 1;
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar2);
  }
  puVar4 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010be80160(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b9a218; end: 107b9a2ff; -[SCWebBrowserLayerViewController webBrowserDidTapDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a218(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b598);
  *(undefined **)(param_1 + _DAT_11276b598) = puVar1;
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + _DAT_11276b594) = 1;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010be80160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9a300; end: 107b9a30f; -[SCWebBrowserLayerViewController didOpenExternalBrowser:] */

void FUN_107b9a300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_webBrowserDidTapDismissWithCompl_1126866e8,
             &PTR___NSConcreteGlobalBlock_1109fed40);
  return;
}



/* Entry: 107b9a310; end: 107b9a383; -[SCWebBrowserLayerViewController webBrowserDidOpenDeepLinkWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b568);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b578);
  _objc_retain(param_3);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b9a384; end: 107b9a387; -[SCWebBrowserLayerViewController webBrowserDidReceiveContext:] */

void FUN_107b9a384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceWebViewContext__112550bb0);
  return;
}



/* Entry: 107b9a388; end: 107b9a4fb; -[SCWebBrowserLayerViewController _announceWebViewContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a388(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bdcbe40(param_2,param_3,param_4);
    func_0x00010bdcc100(param_2,param_3,param_4);
    lVar9 = param_2;
    func_0x00010be46f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c0d3c80();
    _objc_release(lVar9);
    puVar4 = PTR_PTR_1126ca408;
    func_0x00010c2a3e00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = puVar4;
    puStack_50 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&puStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar3,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126ca1e0;
    func_0x00010bf79620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf04440(param_2,param_3,puVar5,lVar3);
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar9 = (long)_DAT_11276b5d4;
  if ((param_4[lVar9] & 1) == 0) {
    puVar5 = puVar4;
    func_0x00010bfbca00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c08fa60();
    if (puVar5 != (undefined *)0x0) {
      *(ulong *)(param_4 + lVar9) = *(ulong *)(param_4 + lVar9) | 1;
      puVar5 = puVar4;
      func_0x00010bfbc940(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      puVar7 = puVar4;
      func_0x00010bfd75c0(puVar4);
      puVar8 = puVar4;
      func_0x00010bfd75e0(puVar4);
      func_0x00010c2a3280(param_1,param_4,param_3,puVar6,puVar7,puVar8);
      _objc_release(puVar5);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b9a4fc; end: 107b9a5eb; -[SCWebBrowserLayerViewController _announceGAHitFromContextIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a4fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11276b5d4;
  if ((*(byte *)(param_2 + lVar4) & 1) == 0) {
    lVar1 = param_4;
    func_0x00010bfbca00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      *(ulong *)(param_2 + lVar4) = *(ulong *)(param_2 + lVar4) | 1;
      lVar4 = param_4;
      func_0x00010bfbc940(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      lVar1 = param_4;
      func_0x00010bfd75c0(param_4);
      lVar3 = param_4;
      func_0x00010bfd75e0(param_4);
      func_0x00010c2a3280(param_1,param_2,param_3,lVar2,lVar1,lVar3);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b9a5ec; end: 107b9a75f; -[SCWebBrowserLayerViewController _announceLoadMilestonesFromContextIfNeeded:] */

void FUN_107b9a5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca1e0;
  _objc_retain(param_3);
  func_0x00010bfe4980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c13b880(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc0e0(param_1,param_2,2,puVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf87b40(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf87c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc0e0(param_1,param_2,4,puVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bfb0fe0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb1060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc0e0(param_1,param_2,8,puVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bfbbe60(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfbb940(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdcc0e0(param_1,param_2,0x10,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9a760; end: 107b9a7f3; -[SCWebBrowserLayerViewController _announceLoadMilestone:event:reachedAt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a760(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_5);
  func_0x00010bf885a0(param_6);
  if (0.0 < param_1) {
    uVar2 = *(ulong *)(param_2 + _DAT_11276b5d4);
    if ((uVar2 & param_4) == 0) {
      *(ulong *)(param_2 + _DAT_11276b5d4) = uVar2 | param_4;
      lVar1 = param_2;
      func_0x00010be46f40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_2,param_3,param_5,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b9a7f4; end: 107b9a86b; -[SCWebBrowserLayerViewController _browserType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b9a7f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b570);
  _objc_opt_class(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf21850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return uVar3;
}



/* Entry: 107b9a86c; end: 107b9a887; -[SCWebBrowserLayerViewController _isExternalBrowser] */

bool FUN_107b9a86c(long param_1)

{
  func_0x00010bdd5940();
  return param_1 == 4;
}



/* Entry: 107b9a888; end: 107b9a8d3; -[SCWebBrowserLayerViewController _interactiveIndexWebViewExtendedLifecycleEnabled] */

bool FUN_107b9a888(long param_1)

{
  long lVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107b9a8d4; end: 107b9b31f; -[SCWebBrowserLayerViewController _webBrowserConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9a8d4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  ppuVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c2a3080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c06b7e0();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c2b0c00(ppuVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010beb4260(param_1);
  ppuVar4 = ppuVar1;
  func_0x00010c2af9e0(ppuVar1,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010bdf9840(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  func_0x00010c2ad780(ppuVar4,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c2b0160(ppuVar2,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c064260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010c2afde0(ppuVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf902a0();
  ppuVar4 = ppuVar5;
  func_0x00010c2acf20(ppuVar5,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf01400();
  ppuVar5 = ppuVar4;
  func_0x00010c2a8120(ppuVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf80ee0();
  ppuVar4 = ppuVar5;
  func_0x00010c2ac5e0(ppuVar5,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c07c020();
  ppuVar5 = ppuVar4;
  func_0x00010c2b12c0(ppuVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  ppuVar2 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9a78;
  func_0x00010bef5380(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00010c0e00e0(ppuVar4,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  ppuVar8 = ppuVar5;
  func_0x00010c2a7840(ppuVar5,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar1 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar8;
  func_0x00010c2b53a0(ppuVar8,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar4 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9a78;
  func_0x00010bef5480(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  if (ppuVar7 == (undefined **)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar7);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c2a7ca0(ppuVar2,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar5);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar4;
  func_0x00010c2a7bc0(ppuVar4,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  ppuVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bef60a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar5;
  func_0x00010c067fc0();
  ppuVar10 = ppuVar2;
  func_0x00010c2a7e20(ppuVar2,param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bef4240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c067fc0();
  ppuVar9 = ppuVar10;
  func_0x00010c2a7b00(ppuVar10,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c2415a0();
  ppuVar5 = ppuVar9;
  func_0x00010c2b93e0(ppuVar9,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bf21600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar10 = ppuVar5;
  func_0x00010c2a99a0(ppuVar5,param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  uVar11 = *(undefined8 *)((long)param_1 + (long)_DAT_11276b554);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010c2b76e0(ppuVar10,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_release(uVar12);
  _objc_release(uVar11);
  if ((int)ppuVar3 != 0) {
    ppuVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if (ppuVar5 != (undefined **)0x0) {
      lVar13 = (long)_DAT_11276b558;
      uVar11 = *(undefined8 *)((long)param_1 + lVar13);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c278840(uVar11,param_2,ppuVar4);
      ppuVar5 = ppuVar2;
      func_0x00010c2bba60(ppuVar2,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)((long)param_1 + lVar13);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bef47c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c29e180(uVar11,param_2,ppuVar4);
      ppuVar2 = ppuVar5;
      func_0x00010c2bc920(ppuVar5,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(uVar11);
    }
  }
  ppuVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfdbe80();
  _objc_release(ppuVar3);
  if ((int)ppuVar4 != 0) {
    ppuVar3 = ppuVar2;
    func_0x00010c2af4c0(ppuVar2,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf9c360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c2ad7a0(ppuVar3,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    ppuVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf9c380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c2ad7c0(ppuVar5,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c107740();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar5;
    func_0x00010bf92360();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if ((int)ppuVar9 == 0) goto LAB_107b9b224;
    ppuVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf92360();
    ppuVar5 = ppuVar2;
    func_0x00010c2ad120(ppuVar2,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    ppuVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c107740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c2b5b00(ppuVar5,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
LAB_107b9b224:
  ppuVar3 = param_1;
  func_0x00010be3d2e0();
  ppuVar4 = ppuVar2;
  if ((int)ppuVar3 != 0) {
    if ((*(byte *)((long)param_1 + (long)_DAT_11276b590) & 1) == 0) {
      func_0x00010be46f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c0e00e0(param_1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    else {
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c0d2740();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
    func_0x00010c2affc0(ppuVar2,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 107b9b320; end: 107b9b3cf; -[SCWebBrowserLayerViewController _preloadWebviewAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b320(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06b7e0();
  _objc_release(lVar1);
  if (((int)lVar2 != 0) && (*(long *)(param_1 + _DAT_11276b584) == 0)) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6ae80();
    if ((int)lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = param_1;
      func_0x00010bdd5940();
      _objc_release(lVar1);
      if (lVar2 != 1) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010be4d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadDefaultURL_112570dd0);
    return;
  }
  return;
}



/* Entry: 107b9b3d0; end: 107b9b4c3; -[SCWebBrowserLayerViewController _shouldIgnoreSafeAreaInsets] */

uint FUN_107b9b3d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f0bf38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  if ((int)lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f0cf78);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f0cf78);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf1f3c0();
      uVar6 = (uint)lVar5 ^ 1;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar6;
}



/* Entry: 107b9b4c4; end: 107b9b56f; -[SCWebBrowserLayerViewController _loadDefaultURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b4c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa23e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0ec0a0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b5b4);
    *(undefined8 *)(param_1 + _DAT_11276b5b4) = 0;
    _objc_release(uVar3);
  }
  lVar4 = param_1;
  func_0x00010bdf9840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4eca0(param_1,param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107b9b570; end: 107b9b66f; -[SCWebBrowserLayerViewController _loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b570(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = (long)_DAT_11276b570;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c089360();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf6eb40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_107b9b65c;
      func_0x00010be93200(param_1,param_2,0);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276b5a0);
      *(undefined **)(param_1 + _DAT_11276b5a0) = puVar4;
      _objc_release(uVar3);
      lVar5 = (long)_DAT_11276b584;
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = param_3;
      _objc_release(uVar3);
    }
    func_0x00010be4ecc0(param_1,param_2,param_3);
  }
LAB_107b9b65c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9b670; end: 107b9b7db; -[SCWebBrowserLayerViewController _loadURLInBrowser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c0d3c80();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126ca408;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar2;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca1e0;
  func_0x00010c2a66c0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar2,lVar1);
  _objc_release(puVar2);
  func_0x00010c09c520(*(undefined8 *)(param_1 + _DAT_11276b570),param_2,param_3);
  puVar2 = PTR_PTR_1126ca1e0;
  func_0x00010bf77c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf04440(param_1,param_2,puVar2,lVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar1 + _DAT_11276b5d4) = 0;
  lVar7 = (long)_DAT_11276b578;
  if (*(long *)(lVar1 + lVar7) != 0) {
    func_0x00010bf6f440(*(undefined8 *)(lVar1 + _DAT_11276b550),param_2,0);
    lVar5 = (long)_DAT_11276b548;
    uVar4 = *(undefined8 *)(lVar1 + lVar5);
    func_0x00010c072560(uVar4,param_2,*(undefined8 *)(lVar1 + lVar7));
    if ((int)uVar4 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(lVar1 + lVar5),param_2,*(undefined8 *)(lVar1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar1 + _DAT_11276b568);
      uVar4 = *(undefined8 *)(lVar1 + lVar7);
      func_0x00010c28f340(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,0,uVar4);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(lVar1 + lVar7);
      *(undefined8 *)(lVar1 + lVar7) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 107b9b7dc; end: 107b9b8ab; -[SCWebBrowserLayerViewController _removeNewSCB] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b7dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + _DAT_11276b5d4) = 0;
  lVar4 = (long)_DAT_11276b578;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11276b550),param_2,0);
    lVar2 = (long)_DAT_11276b548;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c072560(uVar1,param_2,*(undefined8 *)(param_1 + lVar4));
    if ((int)uVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + lVar2),param_2,*(undefined8 *)(param_1 + lVar4))
      ;
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276b568);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c28f340(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,0,uVar1);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107b9b8ac; end: 107b9bbe3; -[SCWebBrowserLayerViewController _loadInNewSCB:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9b8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_11276b578;
  uVar1 = *(ulong *)(param_1 + lVar11);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar9);
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    lVar10 = *(long *)(param_1 + _DAT_11276b568);
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c28f340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar10,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar10 == 0) goto LAB_107b9bbc4;
  }
  func_0x00010be8ca20(param_1);
  puVar6 = PTR_PTR_1126d6ce8;
  lVar10 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar10;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4000(puVar6,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar10;
  func_0x00010c0d2720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  puVar8 = puVar6;
  if (lVar5 != 0) {
    lVar10 = param_1;
    func_0x00010be46f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010c0e00e0(lVar10,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar10);
    func_0x00010c25cde0(puVar6,param_2,&PTR____CFConstantStringClassReference_110de0eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b54c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b550);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107b9bbe4;
  puStack_68 = &UNK_1109fed60;
  lStack_60 = param_1;
  _objc_retain(puVar8);
  puStack_58 = puVar8;
  func_0x00010bf24620(uVar9,param_2,param_3,uVar4,1,0,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar9;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf91900();
  _objc_release(uVar4);
  if ((int)uVar9 != 0) {
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar10 = (long)_DAT_11276b5d8;
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar6;
    _objc_release(uVar9);
    func_0x00010c18b4e0(*(undefined8 *)(param_1 + lVar11),param_2,*(undefined8 *)(param_1 + lVar10))
    ;
  }
  if (*(long *)(param_1 + _DAT_11276b548) != 0) {
    func_0x00010bf9d620(*(long *)(param_1 + _DAT_11276b548),param_2,
                        *(undefined8 *)(param_1 + lVar11));
  }
  _objc_release(puStack_58);
  _objc_release(puVar8);
LAB_107b9bbc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9bbe4; end: 107b9bc73;  */

void FUN_107b9bbe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163320(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c224fc0(param_2);
  func_0x00010c173e00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b9bc74; end: 107b9bcd7; -[SCWebBrowserLayerViewController _signalDelayLoadPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9bc74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b5d8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b9bcd8; end: 107b9bdb7; -[SCWebBrowserLayerViewController _announcePerformanceMetricsIfReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9bcd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + _DAT_11276b5a8) == 0) {
    uVar3 = (uint)*(undefined8 *)(param_1 + _DAT_11276b570);
    _objc_opt_class();
    func_0x00010c075de0();
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 1;
  }
  if (((*(byte *)(param_1 + _DAT_11276b5b0) & 1) == 0) &&
     ((*(long *)(param_1 + _DAT_11276b588) != 0 & uVar3) == 1)) {
    *(undefined1 *)(param_1 + _DAT_11276b5b0) = 1;
    puVar1 = PTR_PTR_1126ca1e0;
    func_0x00010bf76600(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf60c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar1,lVar2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107b9bdb8; end: 107b9bf1b; -[SCWebBrowserLayerViewController _loadPrefetchHints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9bdb8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91580();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf92360();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c107360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010bdf9840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c107360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11276b570);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c107700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bee0(uVar4,param_2,uVar3,uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bdcc400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9bf1c; end: 107b9c047; -[SCWebBrowserLayerViewController _announcePrefetchHintsLoad] */

void FUN_107b9bf1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c107ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c107ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca408;
    func_0x00010c107ac0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,lVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126ca1e0;
  func_0x00010bf77a60(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf51e00(lVar2);
  func_0x00010bf04440(param_1,param_2,puVar4,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b9c048; end: 107b9c07f; -[SCWebBrowserLayerViewController _handleTopSnapWebURLChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5c8);
  *(undefined8 *)(param_1 + _DAT_11276b5c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b9c080; end: 107b9c083; -[SCWebBrowserLayerViewController webBrowserDidLoadPrefetchHints] */

void FUN_107b9c080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcc410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announcePrefetchHintsLoad_112550aa0);
  return;
}



/* Entry: 107b9c084; end: 107b9c103; -[SCWebBrowserLayerViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b598);
  *(undefined **)(param_1 + _DAT_11276b598) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_11276b594) = 1;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9c104; end: 107b9c2d7; -[SCWebBrowserLayerViewController webBrowser:didFinishLoadWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c0d3c80();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126ca408;
  func_0x00010c0d6c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca1e0;
  func_0x00010bf768e0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf04440(param_1,param_2,puVar2,lVar1);
  _objc_release(puVar2);
  uVar5 = *(ulong *)(param_1 + _DAT_11276b538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf919e0();
  _objc_release(uVar5);
  if ((int)param_4 == 0) {
    *(long *)(param_1 + _DAT_11276b5bc) = *(long *)(param_1 + _DAT_11276b5bc) + 1;
    if ((uVar6 & 1) != 0) goto LAB_107b9c29c;
  }
  else {
    *(long *)(param_1 + _DAT_11276b5b8) = *(long *)(param_1 + _DAT_11276b5b8) + 1;
  }
  lVar8 = (long)_DAT_11276b5a4;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar7);
  }
LAB_107b9c29c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if (*(long *)(lVar1 + _DAT_11276b5a4) == 0) {
    lVar9 = (long)_DAT_11276b5c0;
    lVar8 = *(long *)(lVar1 + lVar9);
    if (lVar8 == 0) {
      puVar2 = PTR_PTR_1126ca1e0;
      func_0x00010bf775a0(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010be46f40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(lVar1,param_2,puVar2,lVar8);
      _objc_release(lVar8);
      _objc_release(puVar2);
      lVar8 = *(long *)(lVar1 + lVar9);
    }
    *(long *)(lVar1 + lVar9) = lVar8 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b9c2d8; end: 107b9c38b; -[SCWebBrowserLayerViewController webBrowserDidRedirect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11276b5a4) == 0) {
    lVar3 = (long)_DAT_11276b5c0;
    lVar2 = *(long *)(param_1 + lVar3);
    if (lVar2 == 0) {
      puVar1 = PTR_PTR_1126ca1e0;
      func_0x00010bf775a0(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be46f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_1,param_2,puVar1,lVar2);
      _objc_release(lVar2);
      _objc_release(puVar1);
      lVar2 = *(long *)(param_1 + lVar3);
    }
    *(long *)(param_1 + lVar3) = lVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9c38c; end: 107b9c51b; -[SCWebBrowserLayerViewController webBrowser:didReceivePerfEntries:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ca408;
  func_0x00010c0f9700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca408;
  puStack_78 = puVar6;
  uStack_68 = param_4;
  func_0x00010c066140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  puStack_70 = puVar3;
  func_0x00010bdf9840();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ca1e0;
  func_0x00010bf79320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar6;
  lVar1 = lVar2;
  func_0x00010bf04440(param_1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(lVar1);
    puVar6 = (undefined *)0x0;
    if ((long)puVar3 < 2) {
      if (puVar3 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126ca1e0;
        func_0x00010bfe4980(PTR_PTR_1126ca1e0);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar3 == (undefined *)0x1) {
        puVar6 = PTR_PTR_1126ca1e0;
        func_0x00010bf87b40(PTR_PTR_1126ca1e0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (puVar3 == (undefined *)0x2) {
      puVar6 = PTR_PTR_1126ca1e0;
      func_0x00010bfb0fe0(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar3 == (undefined *)0x3) {
      puVar6 = PTR_PTR_1126ca1e0;
      func_0x00010bfbbe60(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar7 = lVar2;
    func_0x00010be46f40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(lVar2,param_2,puVar6,lVar7);
    _objc_release(lVar7);
    if (*(long *)(lVar2 + _DAT_11276b5a8) == 0) {
      lVar7 = (long)_DAT_11276b5ac;
      _objc_retain(lVar1);
      uVar5 = *(undefined8 *)(lVar2 + lVar7);
      *(long *)(lVar2 + lVar7) = lVar1;
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126ca1e0;
      func_0x00010c069100(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bf60c40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(lVar2,param_2,puVar3,lVar7);
      _objc_release(lVar7);
      _objc_release(puVar3);
    }
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107b9c51c; end: 107b9c68f; -[SCWebBrowserLayerViewController webBrowserInterimUpdate:performanceMetrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c51c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar3 = (undefined *)0x0;
  if (param_3 < 2) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126ca1e0;
      func_0x00010bfe4980(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      puVar3 = PTR_PTR_1126ca1e0;
      func_0x00010bf87b40(PTR_PTR_1126ca1e0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 2) {
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010bfb0fe0(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010bfbbe60(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar3,lVar4);
  _objc_release(lVar4);
  if (*(long *)(param_1 + _DAT_11276b5a8) == 0) {
    lVar4 = (long)_DAT_11276b5ac;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ca1e0;
    func_0x00010c069100(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf60c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b9c690; end: 107b9c6d7; -[SCWebBrowserLayerViewController webBrowserDidFinalizeJavaScriptMetrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c085420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b5a8);
  *(undefined8 *)(param_1 + _DAT_11276b5a8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announcePerformanceMetricsIfRea_112550a68);
  return;
}



/* Entry: 107b9c6d8; end: 107b9c98b; -[SCWebBrowserLayerViewController webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9c6d8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_4 != 0) {
    dVar7 = param_1;
    _objc_retain(param_4);
    _objc_opt_new(puVar1);
    puVar2 = PTR_PTR_1126ca408;
    func_0x00010bfbc9c0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,param_4,puVar2);
    _objc_release(param_4);
    _objc_release(puVar2);
    lVar6 = (long)_DAT_11276b57c;
    if (*(long *)(param_2 + lVar6) != 0) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_11276b538);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf8f2c0();
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c26f320(*(undefined8 *)(param_2 + lVar6));
      dVar8 = param_1 - dVar7 * 1000.0;
      if ((int)uVar4 == 0) {
        dVar8 = (param_1 - dVar7) * 1000.0;
      }
      func_0x00010c0df720(dVar8,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ca408;
      func_0x00010bfbc980(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_3,puVar2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ca408;
    func_0x00010bfbc9a0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ca408;
    func_0x00010bfbc9e0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ca408;
    func_0x00010c076000(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    lVar6 = param_2;
    func_0x00010be46f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1,param_3,lVar6);
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126ca1e0;
    func_0x00010bf79160(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010bf04440(param_2,param_3,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107b9c98c; end: 107b9ca2f; -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveStart] */

void FUN_107b9c98c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a820(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9ca30; end: 107b9cbff; -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9ca30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar3 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ca408;
  func_0x00010bf9a900(PTR_PTR_1126ca408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  lVar8 = (long)_DAT_11276b570;
  lVar3 = *(long *)(param_1 + lVar8);
  func_0x00010c087e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c087e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca408;
    func_0x00010bf9a8e0(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,uVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a840(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  uVar6 = *(ulong *)(param_1 + _DAT_11276b538);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf90220();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    puVar2 = PTR_PTR_1126ca1e0;
    func_0x00010bf9a9c0(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010bf04440(param_1,param_2,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9cc00; end: 107b9cca3; -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveNetworkError] */

void FUN_107b9cc00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a7c0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9cca4; end: 107b9cd47; -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveRedirectHintsMismatch] */

void FUN_107b9cca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a800(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9cd48; end: 107b9ce33; -[SCWebBrowserLayerViewController exbOnSubNav] */

void FUN_107b9cd48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a980(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a9c0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9ce34; end: 107b9ced7; -[SCWebBrowserLayerViewController exbUrlLoad] */

void FUN_107b9ce34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a9c0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9ced8; end: 107b9cfd3; -[SCWebBrowserLayerViewController detectCidParamsDrop:] */

void FUN_107b9ced8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca408;
  func_0x00010bf39740(PTR_PTR_1126ca408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf6f940(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9cfd4; end: 107b9d077; -[SCWebBrowserLayerViewController webBrowserDidAttemptDeeplink] */

void FUN_107b9cfd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf0d8e0(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d078; end: 107b9d133; -[SCWebBrowserLayerViewController webBrowserDidDeeplinkWithSucceeded:] */

void FUN_107b9d078(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca1e0;
  if (param_3 == 0) {
    func_0x00010bf685a0(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf688e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf04440(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d134; end: 107b9d2a3; -[SCWebBrowserLayerViewController webBrowserDidInterceptPixelRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9d134(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11276b57c;
  lVar1 = param_2;
  if (*(long *)(param_2 + lVar7) != 0) {
    lVar6 = param_2;
    dVar8 = param_1;
    func_0x00010be46f40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c0d3c80();
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126ca408;
    func_0x00010c0fcc60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26f320(*(undefined8 *)(param_2 + lVar7));
    param_1 = (param_1 - dVar8) * 1000.0;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126ca1e0;
    func_0x00010bf776c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar1;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0d3c80();
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126c9ab0;
  func_0x00010c2a3f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c9a00;
  func_0x00010c2a3f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf7d060(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010be46f40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(lVar7);
  _objc_release(lVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf9a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s_exbUrlLoad_1125c4420);
  return;
}



/* Entry: 107b9d2a4; end: 107b9d3eb; -[SCWebBrowserLayerViewController webBrowser:didUpdateProgress:] */

void FUN_107b9d2a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010be46f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c9ab0;
  func_0x00010c2a3f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c9a00;
  func_0x00010c2a3f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010bf7d060(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010be46f40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf9a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_exbUrlLoad_1125c4420);
  return;
}



/* Entry: 107b9d3ec; end: 107b9d45f; -[SCWebBrowserLayerViewController webBrowserDidTapOpenInBrowser:] */

void FUN_107b9d3ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf7d060(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf9a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exbUrlLoad_1125c4420);
  return;
}



/* Entry: 107b9d460; end: 107b9d5eb; -[SCWebBrowserLayerViewController webBrowser:didReceiveResponse:url:] */

void FUN_107b9d460(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ca408;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0;
  ppuVar5 = param_1;
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca408;
    puStack_78 = puVar1;
    lStack_68 = param_5;
    func_0x00010bfe4dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar2;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 2;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_68,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0d3c80();
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    ppuVar4 = param_1;
    func_0x00010be46f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar5,param_2,ppuVar4);
    _objc_release(ppuVar4);
    puVar1 = PTR_PTR_1126ca1e0;
    func_0x00010bf791a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    param_4 = ppuVar5;
    func_0x00010bf04440(param_1,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ca408;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf98aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined **)0x0) {
    ppuStack_108 = param_4;
  }
  puVar2 = PTR_PTR_1126ca408;
  puStack_128 = puVar1;
  func_0x00010c066140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
  puStack_120 = puVar2;
  func_0x00010bdf9840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_100 = ppuVar6;
  }
  puVar3 = PTR_PTR_1126ca408;
  func_0x00010c09bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ca408;
  puStack_f8 = puVar7;
  func_0x00010c085cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar8;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_108,&puStack_128,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0d3c80();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar4 = ppuVar5;
  func_0x00010be46f40(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar11,param_2,ppuVar4);
  _objc_release(ppuVar4);
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf796e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf04440(ppuVar5,param_2,puVar1,puVar11);
  _objc_release(puVar1);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf7bc80(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010be46f40(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(puVar11,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d5ec; end: 107b9d83f; -[SCWebBrowserLayerViewController webBrowser:didDetectErrors:loadPrefetchedHtml:jsErrorCount:] */

void FUN_107b9d5ec(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126ca408;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf98aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined *)0x0) {
    puStack_88 = param_4;
  }
  puVar2 = PTR_PTR_1126ca408;
  puStack_a8 = puVar1;
  func_0x00010c066140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  puStack_a0 = puVar2;
  func_0x00010bdf9840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_80 = ppuVar4;
  }
  puVar5 = PTR_PTR_1126ca408;
  func_0x00010c09bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ca408;
  puStack_78 = puVar6;
  func_0x00010c085cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&puStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar3 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar10,param_2,ppuVar3);
  _objc_release(ppuVar3);
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf796e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf04440(param_1,param_2,puVar1,puVar10);
  _objc_release(puVar1);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf7bc80(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010be46f40(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(puVar10,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d840; end: 107b9d8ab; -[SCWebBrowserLayerViewController webBrowserDidStartNavigation:] */

void FUN_107b9d840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf7bc80(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d8ac; end: 107b9d917; -[SCWebBrowserLayerViewController webBrowserDidCommitNavigation:] */

void FUN_107b9d8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca1e0;
  func_0x00010bf73c60(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be46f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b9d918; end: 107b9da4b; -[SCWebBrowserLayerViewController webBrowser:onEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9d918(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126ca408;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puVar6 = param_4;
  if (param_4 != (undefined *)0x0) {
    _objc_retain(param_4);
    func_0x00010bf216a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = puVar1;
    puStack_50 = param_4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    func_0x00010c0d3c80();
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010be46f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(puVar1);
    unaff_x21 = PTR_PTR_1126ca1e0;
    func_0x00010c0e3f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar6 = puVar2;
    func_0x00010bf04440(param_1);
    _objc_release(unaff_x21);
    _objc_release();
    unaff_x19 = param_1;
    unaff_x20 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107b9da4c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  if (puVar6 != (undefined *)0x0) {
    _objc_retain(puVar6);
    func_0x00010be46f40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ca408;
    func_0x00010c292a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b8 = puVar1;
    puStack_b0 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(unaff_x21);
    _objc_release(puVar3);
    _objc_release(puVar1);
    unaff_x22 = PTR_PTR_1126ca1e0;
    func_0x00010c292a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf04440(puVar2);
    _objc_release(unaff_x22);
    puVar1 = unaff_x21;
    _objc_release();
    unaff_x19 = puVar2;
    unaff_x20 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_107b9db7c;
  uVar4 = *(undefined8 *)(puVar1 + _DAT_11276b53c);
  puStack_f0 = unaff_x22;
  puStack_e8 = unaff_x21;
  puStack_e0 = unaff_x20;
  puStack_d8 = unaff_x19;
  ppuStack_d0 = &puStack_70;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf90f80();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    func_0x00010be8dfa0(puVar1);
  }
  else {
    func_0x00010be8ca20();
  }
  puStack_f8 = PTR_PTR_1126fa140;
  puStack_100 = puVar1;
  _objc_msgSendSuper2(&puStack_100,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b9da4c; end: 107b9db7b; -[SCWebBrowserLayerViewController webBrowser:onUserInteractionEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9da4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  lStack_78 = unaff_x19;
  lStack_80 = unaff_x20;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010be46f40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126ca408;
    func_0x00010c292a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = puVar2;
    lStack_50 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(unaff_x21);
    _objc_release(puVar3);
    _objc_release(puVar2);
    unaff_x22 = PTR_PTR_1126ca1e0;
    func_0x00010c292a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bf04440(param_1);
    _objc_release(unaff_x22);
    lVar1 = unaff_x21;
    _objc_release();
    lStack_78 = param_1;
    lStack_80 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107b9db7c;
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11276b53c);
  puStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf90f80();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    func_0x00010be8dfa0(lVar1);
  }
  else {
    func_0x00010be8ca20();
  }
  puStack_98 = PTR_PTR_1126fa140;
  lStack_a0 = lVar1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b9db7c; end: 107b9dc03; -[SCWebBrowserLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b9db7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b53c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be8dfa0(param_1);
  }
  else {
    func_0x00010be8ca20();
  }
  puStack_38 = PTR_PTR_1126fa140;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}


