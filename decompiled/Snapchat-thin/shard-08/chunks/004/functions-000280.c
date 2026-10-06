/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060d88c0; end: 1060d8bf3; -[SCLensOperaViewingSession _logGeofilterAttachmentView:] */

void FUN_1060d88c0(float param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  byte bVar11;
  double dVar12;
  
  if (*(long *)(param_2 + 8) != 0) {
    puVar1 = PTR_PTR_1126c7cc8;
    _objc_opt_new(PTR_PTR_1126c7cc8);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c100(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010c1bcc00(puVar1,param_3,*(undefined8 *)(param_2 + 0x50));
    func_0x00010c206c40(puVar1,param_3,0x3a);
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_2 + 8);
      func_0x00010c281520();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c2a3bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c16b360(puVar1,param_3,10);
        lVar3 = lVar4;
        func_0x00010c2a3bc0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c2a4480();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b3c0(puVar1,param_3,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar3);
        dVar12 = (double)(long)(*(double *)(param_2 + 0x70) * 10.0) / 10.0;
        func_0x00010c222d20(dVar12,puVar1);
        param_1 = SUB84(dVar12,0);
      }
      lVar3 = lVar4;
      func_0x00010c0b4b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c16b360(puVar1,param_3,1);
        lVar3 = lVar4;
        func_0x00010c0b4b40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c29a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c221be0(puVar1,param_3,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar3);
        dVar12 = (double)(long)(*(double *)(param_2 + 0x80) * 10.0) / 10.0;
        func_0x00010c222d20(dVar12,puVar1);
        param_1 = SUB84(dVar12,0);
      }
      lVar3 = lVar4;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c16b360(puVar1,param_3,4);
        lVar3 = lVar4;
        func_0x00010bf054e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c06aee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aede0(puVar1,param_3,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      lVar3 = lVar4;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        func_0x00010c16b360(puVar1,param_3,0xd);
        uVar6 = *(undefined8 *)(param_2 + 8);
        func_0x00010c281520();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf67dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0720c0();
        uVar2 = 2;
        if ((int)uVar9 != 0) {
          uVar2 = 3;
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        func_0x00010c18a740(puVar1,param_3,uVar2);
      }
      _objc_release(lVar4);
    }
    if (param_4 == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)(param_2 + 0x58) ^ 1;
    }
    func_0x00010c1dd480(puVar1,param_3,bVar11 & 1);
    puVar10 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef220();
    func_0x00010c1dda00((double)param_1,puVar1);
    _objc_release(puVar10);
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060d8bf4; end: 1060d8dcb; -[SCLensOperaViewingSession _trackUnlockableAttachmentView] */

void FUN_1060d8bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar5 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b4b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar5 == 0) {
      uVar6 = 0;
      goto LAB_1060d8c84;
    }
    lVar5 = 0x80;
  }
  else {
    lVar5 = 0x70;
  }
  uVar6 = *(undefined8 *)(param_1 + lVar5);
LAB_1060d8c84:
  puVar2 = PTR_PTR_1126c7d90;
  _objc_opt_new(PTR_PTR_1126c7d90);
  func_0x00010c2b4e20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc980(uVar6,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b37a0(*(undefined8 *)(param_1 + 0x88),puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c07c060(uVar6);
  func_0x00010c2b12e0(puVar2,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c07c080(uVar6);
  func_0x00010c2b1300(puVar2,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1160(puVar2,param_2,*(undefined1 *)(param_1 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c078180(uVar6);
  func_0x00010c2b0f20(puVar2,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2f80(puVar2,param_2,*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c281140(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277aa0(uVar6,param_2,uVar4,puVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060d8dcc; end: 1060d8e87; -[SCLensOperaViewingSession _fireMetrics] */

void FUN_1060d8dcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf380e0();
  _objc_release(puVar1);
  func_0x00010bece2a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c281140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1799c0();
  _objc_release(uVar2);
  func_0x00010c278120(*(undefined8 *)(param_1 + 0x10),param_2,0,0,1);
  return;
}



/* Entry: 1060d8e88; end: 1060d8e93;  */

void FUN_1060d8e88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be53fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logGeofilterAttachmentView__112572988,param_2);
  return;
}



/* Entry: 1060d8e94; end: 1060d9017; -[SCLensOperaViewingSession _fetchProductPrefetchStatusIfNeeded] */

void FUN_1060d8e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1082e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  return;
}



/* Entry: 1060d9018; end: 1060d90a3;  */

void FUN_1060d9018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x40));
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4b900(param_2);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060d90a4; end: 1060d90a7; -[SCLensOperaViewingSession setPlaylistItemController:] */

void FUN_1060d90a4(void)

{
  return;
}



/* Entry: 1060d90a8; end: 1060d915b; -[SCLensOperaViewingSession .cxx_destruct] */

void FUN_1060d90a8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d915c; end: 1060d91bb; -[SCLensAttachmentLoadingAnalytics initWithLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:] */

void FUN_1060d915c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ef9d0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 1060d91bc; end: 1060d91df; -[SCLensAttachmentLoadingAnalytics copyWithZone:] */

undefined8 FUN_1060d91bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060d91e0; end: 1060d9263; -[SCLensAttachmentLoadingAnalytics hash] */

ulong * FUN_1060d91e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 1060d9264; end: 1060d932f; -[SCLensAttachmentLoadingAnalytics isEqual:] */

bool FUN_1060d9264(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 1060d9330; end: 1060d9337; -[SCLensAttachmentLoadingAnalytics loadedOnEntry] */

undefined1 FUN_1060d9330(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1060d9338; end: 1060d933f; -[SCLensAttachmentLoadingAnalytics loadedOnExit] */

undefined1 FUN_1060d9338(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1060d9340; end: 1060d9347; -[SCLensAttachmentLoadingAnalytics visiblePageLoadTimeSeconds] */

undefined8 FUN_1060d9340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060d9348; end: 1060d945b; -[SCCommerceShowcaseDeeplinkPresenter initWithFromViewController:deepLinkURL:delegate:source:commerceProductCatalogScopeExposer:] */

undefined1 *
FUN_1060d9348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef9d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d945c; end: 1060d94af; -[SCCommerceShowcaseDeeplinkPresenter present] */

void FUN_1060d945c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf423e0();
  if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentShowcaseProductPage_11257d3e0);
    return;
  }
  if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentShowcase_11257d3d0);
    return;
  }
  return;
}



/* Entry: 1060d94b0; end: 1060d95f3; -[SCCommerceShowcaseDeeplinkPresenter _presentShowcaseProductPage] */

void FUN_1060d94b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b0518;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c115e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c08f2a0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b0520;
  _objc_alloc(PTR_PTR_1126b0520);
  func_0x00010c021b80();
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar6,param_2,lVar1,1);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b0530;
  _objc_alloc(PTR_PTR_1126b0530);
  func_0x00010c001f40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1060d95f4; end: 1060d979b; -[SCCommerceShowcaseDeeplinkPresenter _presentShowcase] */

void FUN_1060d95f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126c7d98;
  _objc_alloc(PTR_PTR_1126c7d98);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf20e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cdc0(puVar2,param_2,0,0,0,0,uVar3,0,0);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0518;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c116260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08eb80(puVar4,param_2,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b0520;
  _objc_alloc(PTR_PTR_1126b0520);
  func_0x00010c021b80();
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar6,param_2,lVar1,1);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b0530;
  _objc_alloc(PTR_PTR_1126b0530);
  func_0x00010c001f40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1060d979c; end: 1060d9813; -[SCCommerceShowcaseDeeplinkPresenter commerceBrowserWillPresent] */

void FUN_1060d979c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060d9814; end: 1060d98af; -[SCCommerceShowcaseDeeplinkPresenter commerceBrowserWillDismiss] */

void FUN_1060d9814(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf42300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1060d98b0; end: 1060d98c7; -[SCCommerceShowcaseDeeplinkPresenter delegate] */

void FUN_1060d98b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060d98c8; end: 1060d98d3; -[SCCommerceShowcaseDeeplinkPresenter setDelegate:] */

void FUN_1060d98c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1060d98d4; end: 1060d991f; -[SCCommerceShowcaseDeeplinkPresenter .cxx_destruct] */

void FUN_1060d98d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060d9920; end: 1060d996b; +[SCOperaLensStoreLayer layerWithPage:] */

void FUN_1060d9920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7d50;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d996c; end: 1060d9a47; -[SCOperaLensStoreLayer initWithPage:] */

undefined1 * FUN_1060d996c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126ef9e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010c257a80(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1060d9a48; end: 1060d9a4f; -[SCOperaLensStoreLayer type] */

undefined8 FUN_1060d9a48(void)

{
  return 0x19;
}



/* Entry: 1060d9a50; end: 1060d9a5b; -[SCOperaLensStoreLayer layerViewControllerClass] */

void FUN_1060d9a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c7da0);
  return;
}



/* Entry: 1060d9a5c; end: 1060d9b3f; -[SCOperaLensStoreLayer isEqual:] */

undefined8 FUN_1060d9a5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef9e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  puVar3 = PTR_PTR_1126c7d50;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = uVar1;
    func_0x00010c257aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c071d00(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1060d9b40; end: 1060d9b47; -[SCOperaLensStoreLayer storeParams] */

undefined8 FUN_1060d9b40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060d9b48; end: 1060d9b53; -[SCOperaLensStoreLayer .cxx_destruct] */

void FUN_1060d9b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d9b54; end: 1060d9bbf; -[SCOperaLensStoreLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1060d9b54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef9e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273f428);
    *(undefined **)((long)puVar1 + (long)_DAT_11273f428) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060d9bc0; end: 1060d9c2b; -[SCOperaLensStoreLayerViewController isFullyVisible] */

undefined8 FUN_1060d9bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f13c0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060d9c2c; end: 1060d9c67; -[SCOperaLensStoreLayerViewController loadView] */

void FUN_1060d9c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060d9c68; end: 1060d9caf; -[SCOperaLensStoreLayerViewController viewDidFullyAppear] */

void FUN_1060d9c68(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef9e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010be7eb00(param_1);
  return;
}



/* Entry: 1060d9cb0; end: 1060d9dc7; -[SCOperaLensStoreLayerViewController viewDidFullyDisappear] */

void FUN_1060d9cb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef9e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidFullyDisappear_112684ca8);
  uVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfe00;
  func_0x00010bf05560(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0f0c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 1060d9dc8; end: 1060d9e1b; -[SCOperaLensStoreLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d9dc8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef9e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f42c);
  *(undefined8 *)(param_1 + _DAT_11273f42c) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 1060d9e1c; end: 1060d9ff3; -[SCOperaLensStoreLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d9e1c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = *(double *)(param_1 + _DAT_11273f430);
  dVar11 = -1.0;
  if (dVar12 == -1.0) {
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + _DAT_11273f428));
    bVar1 = false;
    dVar11 = dVar11 - *(double *)(param_1 + _DAT_11273f434);
  }
  else {
    dVar11 = dVar12 - *(double *)(param_1 + _DAT_11273f434);
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    bVar1 = dVar11 == 0.0;
  }
  puVar2 = PTR_PTR_1126c7d88;
  func_0x00010c0f2320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar2;
  func_0x00010c0df720(dVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7d88;
  puStack_80 = puVar3;
  func_0x00010c0f1720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c7d88;
  puStack_78 = puVar5;
  func_0x00010c0f1740();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar6;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,dVar12 != -1.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&puStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
  _objc_opt_new();
  lVar10 = (long)_DAT_11273f42c;
  uVar9 = *(undefined8 *)(puVar2 + lVar10);
  *(undefined **)(puVar2 + lVar10) = puVar3;
  _objc_release(uVar9);
  func_0x00010c18b5e0(*(undefined8 *)(puVar2 + lVar10),param_2,puVar2);
  uVar9 = *(undefined8 *)(puVar2 + lVar10);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1060d9ff4; end: 1060da063; -[SCOperaLensStoreLayerViewController _initStoreProductVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d9ff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
  _objc_opt_new();
  lVar3 = (long)_DAT_11273f42c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060da064; end: 1060da187; -[SCOperaLensStoreLayerViewController _loadStoreProductVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da064(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x00010beec800(*(undefined8 *)(param_2 + _DAT_11273f428));
  *(undefined8 *)(param_2 + _DAT_11273f430) = 0xbff0000000000000;
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11273f42c);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c257aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x00010c09bf80(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060da188; end: 1060da1e3;  */

void FUN_1060da188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfe840(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060da1e4; end: 1060da25b; -[SCOperaLensStoreLayerViewController _didLoadProduct:result:startTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da1e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_retain(param_4);
  if ((int)param_5 != 0) {
    func_0x00010bf5fd80(*(undefined8 *)(param_2 + _DAT_11273f428));
    *(undefined8 *)(param_2 + _DAT_11273f430) = uVar1;
  }
  func_0x00010be580e0(param_1,param_2,param_3,param_5,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060da25c; end: 1060da417; -[SCOperaLensStoreLayerViewController _logSKAdMetrics:error:startTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da25c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7d78;
  func_0x00010c13ca20(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_2 + _DAT_11273f428));
  func_0x00010c0df720(dVar5 - param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7d78;
  func_0x00010c08ad40(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126c7d78;
    func_0x00010bf987e0(PTR_PTR_1126c7d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,param_5,puVar2);
    _objc_release(puVar2);
  }
  lVar4 = param_2;
  func_0x00010bf99b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7d70;
  func_0x00010bf3c700(PTR_PTR_1126c7d70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(lVar4,param_3,puVar2,param_2,puVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1060da418; end: 1060da503; -[SCOperaLensStoreLayerViewController _presentStoreProductVCModally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da418(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = param_1;
  func_0x00010c0741c0();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11273f42c;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c06d1e0();
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + lVar2) == 0) {
        func_0x00010be3a6a0(param_1);
      }
      func_0x00010be4e8a0(param_1);
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c10eda0(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1060da504; end: 1060da52f;  */

void FUN_1060da504(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfedc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060da530; end: 1060da5b7; -[SCOperaLensStoreLayerViewController _didPresentProductViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da530(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + _DAT_11273f428));
  *(undefined8 *)(param_2 + _DAT_11273f434) = param_1;
  puVar1 = PTR_PTR_1126c7da8;
  func_0x00010c257e40(PTR_PTR_1126c7da8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf60c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_2,param_3,puVar1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060da5b8; end: 1060da6ab; -[SCOperaLensStoreLayerViewController productViewControllerDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da5b8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,5,0);
    if (iVar1 != 0) {
      if (param_3 != *(long *)(param_1 + _DAT_11273f42c)) goto LAB_1060da678;
      *(undefined8 *)(param_1 + _DAT_11273f42c) = 0;
      _objc_release();
    }
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf84b00(param_3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
LAB_1060da678:
  _objc_release(param_3);
  return;
}



/* Entry: 1060da6ac; end: 1060da6d7;  */

void FUN_1060da6ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060da6d8; end: 1060da71b; -[SCOperaLensStoreLayerViewController _handleStoreClosed] */

void FUN_1060da6d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060da71c; end: 1060da75b; -[SCOperaLensStoreLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060da71c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f42c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f428,0);
  return;
}



/* Entry: 1060da75c; end: 1060da7cf; -[SCGrapheneAiLensRemoteApiMetric2 init] */

undefined1 * FUN_1060da75c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef9f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060da7d0; end: 1060dab03;  */

/* WARNING: Removing unreachable block (ram,0x0001060db12c) */
/* WARNING: Removing unreachable block (ram,0x0001060daac4) */
/* WARNING: Removing unreachable block (ram,0x0001060dadf8) */
/* WARNING: Removing unreachable block (ram,0x0001060db460) */

char * FUN_1060da7d0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  long *plVar20;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_3b0;
  undefined *puStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined1 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  char acStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar10 = param_3;
  pcVar6 = param_4;
  pcVar15 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar20 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar10 = acStack_d8;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar19 = 0;
    pcVar6 = param_6;
    do {
      if ((&cStack_59)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1060dab04;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar11 = pcVar10;
  pcVar12 = pcVar6;
  pcVar16 = pcVar15;
  pcVar14 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  _objc_retain(pcVar6);
  _objc_retain(pcVar15);
  if (pcVar3 != (char *)0x0) {
    plVar20 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x26 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar9 = "";
    unaff_x25 = acStack_1b8;
    pcVar11 = acStack_1b8;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar19 = 0;
    pcVar12 = pcVar4;
    do {
      if ((&cStack_139)[lVar19] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar19));
      }
      lVar19 = lVar19 + -0x18;
    } while (lVar19 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar6);
  _objc_release(pcVar10);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_200 = acStack_198;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_200);
    _objc_release(pcVar15);
    _objc_release(pcVar6);
    _objc_release(pcVar10);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_1060dae38;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar3 = pcVar11;
    pcVar13 = pcVar12;
    pcVar17 = pcVar16;
    pcVar18 = pcVar14;
    pcStack_210 = unaff_x26;
    pcStack_208 = unaff_x25;
    pcStack_1f8 = pcVar4;
    pcStack_1f0 = pcVar15;
    pcStack_1e8 = pcVar6;
    pcStack_1e0 = pcVar10;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar11);
    _objc_retain(pcVar12);
    _objc_retain(pcVar16);
    if (pcVar5 != (char *)0x0) {
      plVar20 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(acStack_278,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_260,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_248,pcVar1);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        unaff_x26 = pcVar16;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x00010002b838(auStack_230,unaff_x26);
      acStack_298[0] = '\0';
      acStack_298[1] = '\0';
      acStack_298[2] = '\0';
      acStack_298[3] = '\0';
      acStack_298[4] = '\0';
      acStack_298[5] = '\0';
      acStack_298[6] = '\0';
      acStack_298[7] = '\0';
      acStack_298[8] = '\0';
      acStack_298[9] = '\0';
      acStack_298[10] = '\0';
      acStack_298[0xb] = '\0';
      acStack_298[0xc] = '\0';
      acStack_298[0xd] = '\0';
      acStack_298[0xe] = '\0';
      acStack_298[0xf] = '\0';
      acStack_298[0x10] = '\0';
      acStack_298[0x11] = '\0';
      acStack_298[0x12] = '\0';
      acStack_298[0x13] = '\0';
      acStack_298[0x14] = '\0';
      acStack_298[0x15] = '\0';
      acStack_298[0x16] = '\0';
      acStack_298[0x17] = '\0';
      func_0x00010007e1e8(acStack_298,acStack_278,&lStack_218,4);
      pcVar2 = "";
      unaff_x25 = acStack_298;
      pcVar3 = acStack_298;
      (**(code **)(*plVar20 + 0x18))(plVar20);
      pcStack_280 = unaff_x25;
      func_0x00010007e5dc(&pcStack_280);
      lVar19 = 0;
      pcVar13 = pcVar14;
      do {
        if ((&cStack_219)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar19));
        }
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != -0x60);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar12);
    _objc_release(pcVar11);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar16);
      pcStack_2e0 = acStack_278;
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != pcStack_2e0);
      _objc_release(pcVar16);
      _objc_release(pcVar12);
      _objc_release(pcVar11);
      _objc_release(pcVar9);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_2a8 = FUN_1060db16c;
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar3;
      pcStack_2f0 = unaff_x26;
      pcStack_2e8 = unaff_x25;
      pcStack_2d8 = pcVar1;
      pcStack_2d0 = pcVar16;
      pcStack_2c8 = pcVar12;
      pcStack_2c0 = pcVar11;
      pcStack_2b8 = pcVar9;
      pppuStack_2b0 = &ppuStack_1d0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar3);
      _objc_retain(pcVar13);
      _objc_retain(pcVar17);
      if (pcVar6 != (char *)0x0) {
        plVar20 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_358,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_340,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_328,pcVar1);
        _objc_retain(pcVar17);
        if (pcVar17 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar17);
          pcVar1 = pcVar17;
          func_0x00010bdc3520(pcVar17);
        }
        _objc_release(pcVar17);
        func_0x00010002b838(auStack_310,pcVar1);
        acStack_378[0] = '\0';
        acStack_378[1] = '\0';
        acStack_378[2] = '\0';
        acStack_378[3] = '\0';
        acStack_378[4] = '\0';
        acStack_378[5] = '\0';
        acStack_378[6] = '\0';
        acStack_378[7] = '\0';
        acStack_378[8] = '\0';
        acStack_378[9] = '\0';
        acStack_378[10] = '\0';
        acStack_378[0xb] = '\0';
        acStack_378[0xc] = '\0';
        acStack_378[0xd] = '\0';
        acStack_378[0xe] = '\0';
        acStack_378[0xf] = '\0';
        acStack_378[0x10] = '\0';
        acStack_378[0x11] = '\0';
        acStack_378[0x12] = '\0';
        acStack_378[0x13] = '\0';
        acStack_378[0x14] = '\0';
        acStack_378[0x15] = '\0';
        acStack_378[0x16] = '\0';
        acStack_378[0x17] = '\0';
        func_0x00010007e1e8(acStack_378,acStack_358,&lStack_2f8,4);
        unaff_x25 = acStack_378;
        pcVar10 = acStack_378;
        (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_11090dae0,pcVar10,pcVar18);
        pcStack_360 = unaff_x25;
        func_0x00010007e5dc(&pcStack_360);
        lVar19 = 0;
        do {
          if ((&cStack_2f9)[lVar19] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar19));
          }
          lVar19 = lVar19 + -0x18;
        } while (lVar19 != -0x60);
      }
      _objc_release(pcVar17);
      _objc_release(pcVar13);
      _objc_release(pcVar3);
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        _objc_release(pcVar17);
        do {
          unaff_x25 = unaff_x25 + -0x18;
        } while (unaff_x25 != acStack_358);
        _objc_release(pcVar17);
        _objc_release(pcVar13);
        _objc_release(pcVar3);
        _objc_release(pcVar2);
        __Unwind_Resume();
        ppcVar7 = &pcStack_3b0;
        pcStack_388 = FUN_1060db4a0;
        pcStack_3a0 = pcVar3;
        pcStack_398 = pcVar2;
        ppppuStack_390 = &pppuStack_2b0;
        _objc_retain(pcVar10);
        puStack_3a8 = PTR_PTR_1126ef9f8;
        pcStack_3b0 = pcVar1;
        _objc_msgSendSuper2(&pcStack_3b0,PTR_s_init_1125d9248);
        if (ppcVar7 != (char **)0x0) {
          _objc_retain(pcVar10);
          uVar8 = *(undefined8 *)((long)ppcVar7 + 8);
          *(char **)((long)ppcVar7 + 8) = pcVar10;
          _objc_release(uVar8);
        }
        _objc_release(pcVar10);
        return (char *)ppcVar7;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 1060dab04; end: 1060dae37;  */

/* WARNING: Removing unreachable block (ram,0x0001060db12c) */
/* WARNING: Removing unreachable block (ram,0x0001060dadf8) */
/* WARNING: Removing unreachable block (ram,0x0001060db460) */

char * FUN_1060dab04(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long *plVar16;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_2d0;
  undefined *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  pcVar10 = param_4;
  pcVar12 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar8 = acStack_d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar15 = 0;
    pcVar10 = param_6;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1060dae38;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar8;
  pcVar11 = pcVar10;
  pcVar13 = pcVar12;
  pcVar14 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x26 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar7 = "";
    unaff_x25 = acStack_1b8;
    pcVar9 = acStack_1b8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar15 = 0;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_139)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    pcStack_200 = acStack_198;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_200);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar3 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_1060db16c;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcStack_210 = unaff_x26;
    pcStack_208 = unaff_x25;
    pcStack_1f8 = pcVar4;
    pcStack_1f0 = pcVar12;
    pcStack_1e8 = pcVar10;
    pcStack_1e0 = pcVar8;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar9);
    _objc_retain(pcVar11);
    _objc_retain(pcVar13);
    if (pcVar3 != (char *)0x0) {
      plVar16 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_278,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_260,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_248,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_230,pcVar1);
      acStack_298[0] = '\0';
      acStack_298[1] = '\0';
      acStack_298[2] = '\0';
      acStack_298[3] = '\0';
      acStack_298[4] = '\0';
      acStack_298[5] = '\0';
      acStack_298[6] = '\0';
      acStack_298[7] = '\0';
      acStack_298[8] = '\0';
      acStack_298[9] = '\0';
      acStack_298[10] = '\0';
      acStack_298[0xb] = '\0';
      acStack_298[0xc] = '\0';
      acStack_298[0xd] = '\0';
      acStack_298[0xe] = '\0';
      acStack_298[0xf] = '\0';
      acStack_298[0x10] = '\0';
      acStack_298[0x11] = '\0';
      acStack_298[0x12] = '\0';
      acStack_298[0x13] = '\0';
      acStack_298[0x14] = '\0';
      acStack_298[0x15] = '\0';
      acStack_298[0x16] = '\0';
      acStack_298[0x17] = '\0';
      func_0x00010007e1e8(acStack_298,acStack_278,&lStack_218,4);
      unaff_x25 = acStack_298;
      pcVar2 = acStack_298;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11090dae0,pcVar2,pcVar14);
      pcStack_280 = unaff_x25;
      func_0x00010007e5dc(&pcStack_280);
      lVar15 = 0;
      do {
        if ((&cStack_219)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x60);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar11);
    _objc_release(pcVar9);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar13);
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != acStack_278);
      _objc_release(pcVar13);
      _objc_release(pcVar11);
      _objc_release(pcVar9);
      _objc_release(pcVar7);
      __Unwind_Resume();
      ppcVar5 = &pcStack_2d0;
      pcStack_2a8 = FUN_1060db4a0;
      pcStack_2c0 = pcVar9;
      pcStack_2b8 = pcVar7;
      pppuStack_2b0 = &ppuStack_1d0;
      _objc_retain(pcVar2);
      puStack_2c8 = PTR_PTR_1126ef9f8;
      pcStack_2d0 = pcVar1;
      _objc_msgSendSuper2(&pcStack_2d0,PTR_s_init_1125d9248);
      if (ppcVar5 != (char **)0x0) {
        _objc_retain(pcVar2);
        uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
        *(char **)((long)ppcVar5 + 8) = pcVar2;
        _objc_release(uVar6);
      }
      _objc_release(pcVar2);
      return (char *)ppcVar5;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 1060dae38; end: 1060db16b;  */

/* WARNING: Removing unreachable block (ram,0x0001060db12c) */
/* WARNING: Removing unreachable block (ram,0x0001060db460) */

char * FUN_1060dae38(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar9 = param_4;
  pcVar10 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar7 = acStack_d8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar11 = 0;
    pcVar9 = param_6;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_1060db16c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_150,pcVar2);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    unaff_x25 = acStack_1b8;
    pcVar8 = acStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11090dae0,pcVar8,pcVar4);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar11 = 0;
    do {
      if ((&cStack_139)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x60);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_198);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppcVar5 = &pcStack_1f0;
    pcStack_1c8 = FUN_1060db4a0;
    pcStack_1e0 = pcVar7;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar8);
    puStack_1e8 = PTR_PTR_1126ef9f8;
    pcStack_1f0 = pcVar4;
    _objc_msgSendSuper2(&pcStack_1f0,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(pcVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(char **)((long)ppcVar5 + 8) = pcVar8;
      _objc_release(uVar6);
    }
    _objc_release(pcVar8);
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 1060db16c; end: 1060db49f;  */

/* WARNING: Removing unreachable block (ram,0x0001060db460) */

char * FUN_1060db16c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *unaff_x25;
  char *pcStack_110;
  undefined *puStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    unaff_x25 = acStack_d8;
    pcVar1 = acStack_d8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11090dae0,pcVar1,param_6);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar3 = &pcStack_110;
    pcStack_e8 = FUN_1060db4a0;
    pcStack_100 = param_3;
    pcStack_f8 = param_2;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    puStack_108 = PTR_PTR_1126ef9f8;
    pcStack_110 = pcVar2;
    _objc_msgSendSuper2(&pcStack_110,PTR_s_init_1125d9248);
    if (ppcVar3 != (char **)0x0) {
      _objc_retain(pcVar1);
      uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
      *(char **)((long)ppcVar3 + 8) = pcVar1;
      _objc_release(uVar4);
    }
    _objc_release(pcVar1);
    return (char *)ppcVar3;
  }
  return pcVar2;
}



/* Entry: 1060db4a0; end: 1060db513; -[SCRealTimeScanBlizzardLogger initWithUserTrackedLogger:] */

undefined1 * FUN_1060db4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef9f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060db514; end: 1060db593; -[SCRealTimeScanBlizzardLogger realTimeScanStateDidChange:] */

void FUN_1060db514(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7db0;
  _objc_alloc_init(PTR_PTR_1126c7db0);
  func_0x00010c195460();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c215e40(puVar1,param_3,(long)param_1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060db594; end: 1060db657; -[SCRealTimeScanBlizzardLogger realTimeScanBannerDidDisplayWithFrameId:resultType:] */

void FUN_1060db594(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7db8;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c19f360();
    _objc_release(param_4);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    if (param_5 < 4) {
      uVar2 = *(undefined8 *)(&UNK_10ddd3d40 + param_5 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    func_0x00010c1ed520(puVar1,param_3,uVar2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060db658; end: 1060db753; -[SCRealTimeScanBlizzardLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:] */

void FUN_1060db658(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7dc0;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_alloc_init(puVar1);
    func_0x0001060dce04(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fe0(puVar1,param_3,param_4);
    _objc_release(param_4);
    func_0x00010c19f360(puVar1,param_3,param_5);
    _objc_release(param_5);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    if (param_6 < 4) {
      uVar2 = *(undefined8 *)(&UNK_10ddd3d40 + param_6 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    func_0x00010c1ed520(puVar1,param_3,uVar2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060db754; end: 1060db86b; -[SCRealTimeScanBlizzardLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:] */

void FUN_1060db754(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7dc8;
  if (((param_4 != 0) && (param_5 != 0)) && (param_6 != 0)) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c19f360();
    _objc_release(param_4);
    func_0x00010c17c6c0(puVar1,param_3,param_5);
    _objc_release(param_5);
    func_0x00010c17c6e0(param_1,puVar1);
    func_0x00010c17c700(puVar1,param_3,param_6);
    _objc_release(param_6);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060db86c; end: 1060db92f; -[SCRealTimeScanBlizzardLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:] */

void FUN_1060db86c(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7dd0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c19f360();
    _objc_release(param_4);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    if (param_5 < 3) {
      uVar2 = *(undefined8 *)(&UNK_10ddd3d60 + param_5 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    func_0x00010c17dc60(puVar1,param_3,uVar2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060db930; end: 1060dba1b; -[SCRealTimeScanBlizzardLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:] */

void FUN_1060db930(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7dd8;
  if (param_4 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c19f360();
    _objc_release(param_4);
    if (param_5 < 4) {
      uVar2 = *(undefined8 *)(&UNK_10ddd3d40 + param_5 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    func_0x00010c1ed520(puVar1,param_3,uVar2);
    func_0x00010c1c8d60(puVar1,param_3,param_6);
    _objc_release(param_6);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060dba1c; end: 1060dbaf7; -[SCRealTimeScanBlizzardLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:] */

void FUN_1060dba1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7de0;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_alloc_init(puVar1);
    func_0x00010c19f360();
    _objc_release(param_5);
    func_0x00010c20f880(puVar1,param_3,param_4);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar1,param_3,(long)param_1);
    if (param_6 < 3) {
      uVar2 = *(undefined8 *)(&UNK_10ddd3d60 + param_6 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
    func_0x00010c17dc60(puVar1,param_3,uVar2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060dbaf8; end: 1060dbb97; -[SCRealTimeScanBlizzardLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:] */

void FUN_1060dbaf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7de8;
  _objc_alloc_init(PTR_PTR_1126c7de8);
  func_0x00010c209a40();
  func_0x00010c1a18c0(puVar1,param_2,param_4);
  func_0x00010c1a18a0(puVar1,param_2,param_5);
  func_0x00010c209fa0(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060dbb98; end: 1060dbba3; -[SCRealTimeScanBlizzardLogger .cxx_destruct] */

void FUN_1060dbb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dbba4; end: 1060dbba7; -[SCRealTimeScanClientLogger realTimeScanStateDidChange:] */

void FUN_1060dbba4(void)

{
  return;
}



/* Entry: 1060dbba8; end: 1060dbbab; -[SCRealTimeScanClientLogger realTimeScanBannerDidDisplayWithFrameId:resultType:] */

void FUN_1060dbba8(void)

{
  return;
}



/* Entry: 1060dbbac; end: 1060dbbaf; -[SCRealTimeScanClientLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:] */

void FUN_1060dbbac(void)

{
  return;
}



/* Entry: 1060dbbb0; end: 1060dbbb3; -[SCRealTimeScanClientLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:] */

void FUN_1060dbbb0(void)

{
  return;
}



/* Entry: 1060dbbb4; end: 1060dbbb7; -[SCRealTimeScanClientLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:] */

void FUN_1060dbbb4(void)

{
  return;
}



/* Entry: 1060dbbb8; end: 1060dbbbb; -[SCRealTimeScanClientLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:] */

void FUN_1060dbbb8(void)

{
  return;
}



/* Entry: 1060dbbbc; end: 1060dbbbf; -[SCRealTimeScanClientLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:] */

void FUN_1060dbbbc(void)

{
  return;
}



/* Entry: 1060dbbc0; end: 1060dbbc3; -[SCRealTimeScanClientLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:] */

void FUN_1060dbbc0(void)

{
  return;
}



/* Entry: 1060dbbc4; end: 1060dbc3b; -[SCRealTimeScanCompoundLogger initWithLoggers:] */

undefined1 * FUN_1060dbbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060dbc3c; end: 1060dbd97; -[SCRealTimeScanCompoundLogger realTimeScanStateDidChange:] */

void FUN_1060dbc3c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long in_x5;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *unaff_x23;
  long lVar17;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  ulong uVar18;
  undefined **unaff_x27;
  long lVar19;
  undefined **unaff_x28;
  double dVar20;
  undefined *puStack_898;
  undefined8 uStack_890;
  long lStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined auStack_850 [128];
  long lStack_7d0;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined8 *puStack_790;
  undefined **ppuStack_788;
  undefined *puStack_780;
  undefined8 *puStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  long lStack_748;
  long *plStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined auStack_710 [128];
  long lStack_690;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined **ppuStack_650;
  undefined *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  long lStack_618;
  ulong *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined auStack_5e0 [128];
  long lStack_560;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined **ppuStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined8 *puStack_508;
  undefined1 ****ppppuStack_500;
  code *pcStack_4f8;
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined auStack_4a0 [128];
  long lStack_420;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined auStack_350 [128];
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  dVar20 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  ppuVar15 = *(undefined ***)(param_1 + 8);
  _objc_retain(ppuVar15);
  puVar1 = auStack_e8;
  ppuVar9 = (undefined **)0x10;
  ppuVar16 = ppuVar15;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_120;
    unaff_x26 = &PTR_s_readPropertyValue__112626000;
    do {
      unaff_x23 = PTR_s_realTimeScanStateDidChange__112626180;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(ppuVar15);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010c121d80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar16 != unaff_x27);
      puVar1 = auStack_e8;
      ppuVar9 = (undefined **)0x10;
      ppuVar16 = ppuVar15;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
    } while (ppuVar16 != (undefined **)0x0);
  }
  ppuVar16 = (undefined **)0x0;
  _objc_release(ppuVar15);
  param_1 = param_1 + 0x10;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3 = &uStack_260;
  pcStack_138 = FUN_1060dbd98;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar13 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    dVar20 = 0.0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    puStack_250 = (ulong *)0x0;
    ppuVar16 = *(undefined ***)(param_1 + 8);
    _objc_retain(ppuVar16);
    puVar13 = auStack_220;
    ppuVar9 = (undefined **)0x10;
    ppuVar15 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar15 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_250;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanBannerDidDisplayWith_112626118;
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_250 != unaff_x26) {
            _objc_enumerationMutation(ppuVar16);
          }
          unaff_x25 = *(undefined **)(lStack_258 + (long)unaff_x28 * 8);
          puVar13 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar13 & 1) != 0) {
            func_0x00010c121be0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar15 != unaff_x28);
        puVar13 = auStack_220;
        ppuVar9 = (undefined **)0x10;
        ppuVar15 = ppuVar16;
        puVar3 = &uStack_260;
        func_0x00010bf52a60();
      } while (ppuVar15 != (undefined **)0x0);
    }
    unaff_x23 = (undefined *)0x0;
    _objc_release(ppuVar16);
    puVar5 = puVar3;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_1060dbf10;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar13;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  ppuStack_290 = ppuVar16;
  puStack_288 = puVar1;
  puStack_280 = puVar2;
  lStack_278 = param_1;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar13);
  _os_unfair_lock_lock(puVar3 + 2);
  if (puVar13 != (undefined *)0x0) {
    dVar20 = 0.0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    unaff_x23 = (undefined *)puVar3[1];
    puStack_398 = puVar3;
    _objc_retain(unaff_x23);
    puVar5 = &uStack_390;
    puVar11 = auStack_350;
    ppuVar9 = (undefined **)0x10;
    puVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      unaff_x27 = (undefined **)*plStack_380;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanBannerDidReceiveActi_112626120;
        puVar11 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_380 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(undefined ***)(lStack_388 + (long)puVar11 * 8);
          ppuVar16 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if (((ulong)ppuVar16 & 1) != 0) {
            func_0x00010c121c00(unaff_x26);
          }
          puVar11 = puVar11 + 1;
        } while (puVar1 != puVar11);
        puVar5 = &uStack_390;
        puVar11 = auStack_350;
        ppuVar9 = (undefined **)0x10;
        puVar1 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar3 = puStack_398;
  }
  _os_unfair_lock_unlock(puVar3 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_398 + 2);
  __Unwind_Resume();
  pcStack_3a8 = FUN_1060dc09c;
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar1 = puVar11;
  ppuVar16 = ppuVar9;
  pppuStack_3b0 = &ppuStack_270;
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  _objc_retain(ppuVar9);
  puStack_4e8 = puVar13;
  _os_unfair_lock_lock(puVar13 + 0x10);
  if (((puVar5 != (undefined8 *)0x0) && (puVar11 != (undefined *)0x0)) && (dVar20 != 0.0)) {
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    lStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    plStack_4d0 = (long *)0x0;
    unaff_x23 = *(undefined **)(puStack_4e8 + 8);
    _objc_retain(unaff_x23);
    puVar2 = &uStack_4e0;
    puVar1 = auStack_4a0;
    ppuVar16 = (undefined **)0x10;
    puVar4 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x27 = (undefined **)*plStack_4d0;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveClassifier_112626148;
        puVar13 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_4d0 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(undefined ***)(lStack_4d8 + (long)puVar13 * 8);
          ppuVar16 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if (((ulong)ppuVar16 & 1) != 0) {
            func_0x00010c121ca0(dVar20,unaff_x26);
          }
          puVar13 = puVar13 + 1;
        } while (puVar4 != puVar13);
        puVar2 = &uStack_4e0;
        puVar1 = auStack_4a0;
        ppuVar16 = (undefined **)0x10;
        puVar4 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
  }
  _os_unfair_lock_unlock(puStack_4e8 + 0x10);
  _objc_release(ppuVar9);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_4e8 + 0x10);
  puVar3 = puVar5;
  __Unwind_Resume();
  puVar6 = &uStack_620;
  pcStack_4f8 = FUN_1060dc268;
  lStack_560 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar4 = puVar1;
  ppuStack_550 = unaff_x28;
  ppuStack_548 = unaff_x27;
  ppuStack_540 = unaff_x26;
  puStack_538 = unaff_x25;
  puStack_530 = unaff_x24;
  puStack_528 = unaff_x23;
  ppuStack_520 = ppuVar9;
  puStack_518 = puVar11;
  puStack_510 = puVar13;
  puStack_508 = puVar5;
  ppppuStack_500 = &pppuStack_3b0;
  _objc_retain(puVar2);
  _os_unfair_lock_lock(puVar3 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    puStack_610 = (ulong *)0x0;
    ppuVar9 = (undefined **)puVar3[1];
    _objc_retain(ppuVar9);
    puVar4 = auStack_5e0;
    ppuVar16 = (undefined **)0x10;
    ppuVar15 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar15 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_610;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanWillAttemptDecodeFor_112626190;
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_610 != unaff_x26) {
            _objc_enumerationMutation(ppuVar9);
          }
          unaff_x25 = *(undefined **)(lStack_618 + (long)unaff_x28 * 8);
          puVar13 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar13 & 1) != 0) {
            func_0x00010c121dc0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar15 != unaff_x28);
        puVar4 = auStack_5e0;
        ppuVar16 = (undefined **)0x10;
        ppuVar15 = ppuVar9;
        puVar6 = &uStack_620;
        func_0x00010bf52a60();
      } while (ppuVar15 != (undefined **)0x0);
    }
    unaff_x23 = (undefined *)0x0;
    _objc_release(ppuVar9);
    puVar8 = puVar6;
  }
  _os_unfair_lock_unlock(puVar3 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_560) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar3 + 2);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_628 = FUN_1060dc3e0;
  lStack_690 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar13 = puVar4;
  ppuVar15 = ppuVar16;
  ppuStack_680 = unaff_x28;
  ppuStack_678 = unaff_x27;
  ppuStack_670 = unaff_x26;
  puStack_668 = unaff_x25;
  puStack_660 = unaff_x24;
  puStack_658 = unaff_x23;
  ppuStack_650 = ppuVar9;
  puStack_648 = puVar1;
  puStack_640 = puVar2;
  puStack_638 = puVar3;
  ppppuStack_630 = &ppppuStack_500;
  _objc_retain(puVar4);
  _os_unfair_lock_lock(puVar6 + 2);
  if (puVar4 != (undefined *)0x0) {
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    lStack_748 = 0;
    uStack_750 = 0;
    uStack_738 = 0;
    plStack_740 = (long *)0x0;
    unaff_x23 = (undefined *)puVar6[1];
    puStack_758 = puVar6;
    _objc_retain(unaff_x23);
    puVar5 = &uStack_750;
    puVar13 = auStack_710;
    ppuVar15 = (undefined **)0x10;
    puVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      unaff_x27 = (undefined **)*plStack_740;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        puVar13 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_740 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(undefined ***)(lStack_748 + (long)puVar13 * 8);
          ppuVar9 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if (((ulong)ppuVar9 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar13);
        puVar5 = &uStack_750;
        puVar13 = auStack_710;
        ppuVar15 = (undefined **)0x10;
        puVar1 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar6 = puStack_758;
  }
  _os_unfair_lock_unlock(puVar6 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_690) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_758 + 2);
  puVar1 = puVar4;
  __Unwind_Resume();
  pcStack_768 = FUN_1060dc56c;
  lStack_7d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  ppuVar9 = ppuVar15;
  ppuStack_7c0 = unaff_x28;
  ppuStack_7b8 = unaff_x27;
  ppuStack_7b0 = unaff_x26;
  puStack_7a8 = unaff_x25;
  puStack_7a0 = unaff_x24;
  puStack_798 = unaff_x23;
  puStack_790 = puVar8;
  ppuStack_788 = ppuVar16;
  puStack_780 = puVar4;
  puStack_778 = puVar6;
  ppppuStack_770 = &ppppuStack_630;
  _objc_retain(puVar5);
  _objc_retain(ppuVar15);
  _os_unfair_lock_lock(puVar1 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    uStack_868 = 0;
    uStack_870 = 0;
    uStack_858 = 0;
    uStack_860 = 0;
    lStack_888 = 0;
    uStack_890 = 0;
    uStack_878 = 0;
    plStack_880 = (long *)0x0;
    lVar17 = *(long *)(puVar1 + 8);
    _objc_retain(lVar17);
    puVar2 = &uStack_890;
    puVar13 = auStack_850;
    ppuVar9 = (undefined **)0x10;
    lVar10 = lVar17;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar19 = *plStack_880;
      do {
        puVar13 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar12 = 0;
        do {
          if (*plStack_880 != lVar19) {
            _objc_enumerationMutation(lVar17);
          }
          uVar18 = *(ulong *)(lStack_888 + lVar12 * 8);
          uVar7 = uVar18;
          _objc_opt_respondsToSelector(uVar18,puVar13);
          if ((uVar7 & 1) != 0) {
            func_0x00010c121d40(uVar18);
          }
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        puVar2 = &uStack_890;
        puVar13 = auStack_850;
        ppuVar9 = (undefined **)0x10;
        lVar10 = lVar17;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar17);
    puStack_898 = puVar1;
  }
  _os_unfair_lock_unlock(puVar1 + 0x10);
  _objc_release(ppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_898 + 0x10);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  _objc_retain(ppuVar9);
  _os_unfair_lock_lock(puVar5 + 2);
  if (((puVar2 != (undefined8 *)0x0) && (puVar13 != (undefined *)0x0)) &&
     (ppuVar9 != (undefined **)0x0)) {
    lVar12 = puVar5[1];
    _objc_retain(lVar12);
    lVar17 = lVar12;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar1, lVar17 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar12);
        }
        uVar18 = *(ulong *)(lVar14 * 8);
        uVar7 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar1);
        if ((uVar7 & 1) != 0) {
          func_0x00010c257ac0(uVar18);
        }
        lVar14 = lVar14 + 1;
      } while (lVar17 != lVar14);
      lVar17 = lVar12;
      func_0x00010bf52a60();
      puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar12);
  }
  _os_unfair_lock_unlock(puVar5 + 2);
  _objc_release(ppuVar9);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar5 + 2);
  __Unwind_Resume();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar2 + 2);
  lVar12 = puVar2[1];
  _objc_retain(lVar12);
  lVar10 = lVar12;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar10 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar12);
      }
      uVar18 = *(ulong *)(lVar14 * 8);
      uVar7 = uVar18;
      _objc_opt_respondsToSelector(uVar18,puVar1);
      if ((uVar7 & 1) != 0) {
        func_0x00010bf8dfe0(uVar18);
      }
      lVar14 = lVar14 + 1;
    } while (lVar10 != lVar14);
    lVar10 = lVar12;
    func_0x00010bf52a60();
    puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar12);
  puVar2 = puVar2 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar2 + 2);
  if (in_x5 != 0) {
    lVar12 = puVar2[1];
    _objc_retain(lVar12);
    lVar17 = lVar12;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar17 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar12);
        }
        uVar18 = *(ulong *)(lVar14 * 8);
        uVar7 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar1);
        if ((uVar7 & 1) != 0) {
          func_0x00010c121c40(uVar18);
        }
        lVar14 = lVar14 + 1;
      } while (lVar17 != lVar14);
      lVar17 = lVar12;
      func_0x00010bf52a60();
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar12);
  }
  puVar2 = puVar2 + 2;
  _os_unfair_lock_unlock(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 1,0);
  return;
}



/* Entry: 1060dbd98; end: 1060dbf0f; -[SCRealTimeScanCompoundLogger realTimeScanBannerDidDisplayWithFrameId:resultType:] */

void FUN_1060dbd98(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5,undefined **param_6,long param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined **unaff_x22;
  undefined1 *unaff_x23;
  long lVar18;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong unaff_x26;
  ulong uVar19;
  undefined **unaff_x27;
  long lVar20;
  undefined **unaff_x28;
  undefined1 *puStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 auStack_720 [128];
  long lStack_6a0;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  ulong uStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined1 *puStack_668;
  undefined8 *puStack_660;
  undefined **ppuStack_658;
  undefined1 *puStack_650;
  undefined8 *puStack_648;
  undefined8 ****ppppuStack_640;
  code *pcStack_638;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5e0 [128];
  long lStack_560;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  ulong uStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined1 *puStack_528;
  undefined **ppuStack_520;
  undefined1 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined1 ****ppppuStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  ulong *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [128];
  long lStack_430;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  ulong uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined1 *puStack_3f8;
  undefined **ppuStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined1 *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar2 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  puVar16 = param_5;
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 0x10);
  if (param_4 != (undefined8 *)0x0) {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (ulong *)0x0;
    unaff_x22 = *(undefined ***)(param_2 + 8);
    _objc_retain(unaff_x22);
    puVar16 = auStack_f0;
    param_6 = (undefined **)0x10;
    ppuVar10 = unaff_x22;
    func_0x00010bf52a60();
    if (ppuVar10 != (undefined **)0x0) {
      unaff_x26 = *puStack_120;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanBannerDidDisplayWith_112626118;
        unaff_x28 = (undefined **)0x0;
        do {
          if (*puStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x25 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          puVar1 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar1 & 1) != 0) {
            func_0x00010c121be0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar10 != unaff_x28);
        puVar16 = auStack_f0;
        param_6 = (undefined **)0x10;
        ppuVar10 = unaff_x22;
        puVar2 = &uStack_130;
        func_0x00010bf52a60();
      } while (ppuVar10 != (undefined **)0x0);
    }
    unaff_x23 = (undefined1 *)0x0;
    _objc_release(unaff_x22);
    puVar6 = puVar2;
  }
  _os_unfair_lock_unlock(param_2 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_2 + 0x10);
  puVar2 = param_4;
  __Unwind_Resume();
  pcStack_138 = FUN_1060dbf10;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar16;
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  ppuStack_160 = unaff_x22;
  puStack_158 = param_5;
  puStack_150 = param_4;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  _os_unfair_lock_lock(puVar2 + 2);
  if (puVar16 != (undefined1 *)0x0) {
    param_1 = 0.0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    unaff_x23 = (undefined1 *)puVar2[1];
    puStack_268 = puVar2;
    _objc_retain(unaff_x23);
    puVar6 = &uStack_260;
    puVar14 = auStack_220;
    param_6 = (undefined **)0x10;
    puVar3 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_250;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanBannerDidReceiveActi_112626120;
        puVar14 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_258 + (long)puVar14 * 8);
          uVar4 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar4 & 1) != 0) {
            func_0x00010c121c00(unaff_x26);
          }
          puVar14 = puVar14 + 1;
        } while (puVar3 != puVar14);
        puVar6 = &uStack_260;
        puVar14 = auStack_220;
        param_6 = (undefined **)0x10;
        puVar3 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar2 = puStack_268;
  }
  _os_unfair_lock_unlock(puVar2 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_268 + 2);
  __Unwind_Resume();
  pcStack_278 = FUN_1060dc09c;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar3 = puVar14;
  ppuVar10 = param_6;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  puStack_3b8 = puVar16;
  _os_unfair_lock_lock(puVar16 + 0x10);
  if (((puVar6 != (undefined8 *)0x0) && (puVar14 != (undefined1 *)0x0)) && (param_1 != 0.0)) {
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    unaff_x23 = *(undefined1 **)(puStack_3b8 + 8);
    _objc_retain(unaff_x23);
    puVar2 = &uStack_3b0;
    puVar3 = auStack_370;
    ppuVar10 = (undefined **)0x10;
    puVar5 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar5 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_3a0;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveClassifier_112626148;
        puVar16 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_3a0 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_3a8 + (long)puVar16 * 8);
          uVar4 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar4 & 1) != 0) {
            func_0x00010c121ca0(param_1,unaff_x26);
          }
          puVar16 = puVar16 + 1;
        } while (puVar5 != puVar16);
        puVar2 = &uStack_3b0;
        puVar3 = auStack_370;
        ppuVar10 = (undefined **)0x10;
        puVar5 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
  }
  _os_unfair_lock_unlock(puStack_3b8 + 0x10);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_3b8 + 0x10);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar8 = &uStack_4f0;
  pcStack_3c8 = FUN_1060dc268;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar2;
  puVar5 = puVar3;
  ppuStack_420 = unaff_x28;
  ppuStack_418 = unaff_x27;
  uStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  ppuStack_3f0 = param_6;
  puStack_3e8 = puVar14;
  puStack_3e0 = puVar16;
  puStack_3d8 = puVar6;
  pppuStack_3d0 = &ppuStack_280;
  _objc_retain(puVar2);
  _os_unfair_lock_lock(puVar7 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    puStack_4e0 = (ulong *)0x0;
    param_6 = (undefined **)puVar7[1];
    _objc_retain(param_6);
    puVar5 = auStack_4b0;
    ppuVar10 = (undefined **)0x10;
    ppuVar11 = param_6;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x26 = *puStack_4e0;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanWillAttemptDecodeFor_112626190;
        unaff_x28 = (undefined **)0x0;
        do {
          if (*puStack_4e0 != unaff_x26) {
            _objc_enumerationMutation(param_6);
          }
          unaff_x25 = *(undefined **)(lStack_4e8 + (long)unaff_x28 * 8);
          puVar1 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar1 & 1) != 0) {
            func_0x00010c121dc0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar11 != unaff_x28);
        puVar5 = auStack_4b0;
        ppuVar10 = (undefined **)0x10;
        ppuVar11 = param_6;
        puVar8 = &uStack_4f0;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    unaff_x23 = (undefined1 *)0x0;
    _objc_release(param_6);
    puVar9 = puVar8;
  }
  _os_unfair_lock_unlock(puVar7 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar7 + 2);
  puVar8 = puVar2;
  __Unwind_Resume();
  pcStack_4f8 = FUN_1060dc3e0;
  lStack_560 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar9;
  puVar16 = puVar5;
  ppuVar11 = ppuVar10;
  ppuStack_550 = unaff_x28;
  ppuStack_548 = unaff_x27;
  uStack_540 = unaff_x26;
  puStack_538 = unaff_x25;
  puStack_530 = unaff_x24;
  puStack_528 = unaff_x23;
  ppuStack_520 = param_6;
  puStack_518 = puVar3;
  puStack_510 = puVar2;
  puStack_508 = puVar7;
  ppppuStack_500 = &pppuStack_3d0;
  _objc_retain(puVar5);
  _os_unfair_lock_lock(puVar8 + 2);
  if (puVar5 != (undefined1 *)0x0) {
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    plStack_610 = (long *)0x0;
    unaff_x23 = (undefined1 *)puVar8[1];
    puStack_628 = puVar8;
    _objc_retain(unaff_x23);
    puVar6 = &uStack_620;
    puVar16 = auStack_5e0;
    ppuVar11 = (undefined **)0x10;
    puVar14 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar14 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_610;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        puVar16 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_610 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_618 + (long)puVar16 * 8);
          uVar4 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar4 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar6 = &uStack_620;
        puVar16 = auStack_5e0;
        ppuVar11 = (undefined **)0x10;
        puVar14 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar8 = puStack_628;
  }
  _os_unfair_lock_unlock(puVar8 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_560) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(puStack_628 + 2);
    puVar14 = puVar5;
    __Unwind_Resume();
    pcStack_638 = FUN_1060dc56c;
    lStack_6a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar6;
    ppuVar12 = ppuVar11;
    ppuStack_690 = unaff_x28;
    ppuStack_688 = unaff_x27;
    uStack_680 = unaff_x26;
    puStack_678 = unaff_x25;
    puStack_670 = unaff_x24;
    puStack_668 = unaff_x23;
    puStack_660 = puVar9;
    ppuStack_658 = ppuVar10;
    puStack_650 = puVar5;
    puStack_648 = puVar8;
    ppppuStack_640 = &ppppuStack_500;
    _objc_retain(puVar6);
    _objc_retain(ppuVar11);
    _os_unfair_lock_lock(puVar14 + 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      uStack_738 = 0;
      uStack_740 = 0;
      uStack_728 = 0;
      uStack_730 = 0;
      lStack_758 = 0;
      uStack_760 = 0;
      uStack_748 = 0;
      plStack_750 = (long *)0x0;
      lVar18 = *(long *)(puVar14 + 8);
      _objc_retain(lVar18);
      puVar2 = &uStack_760;
      puVar16 = auStack_720;
      ppuVar12 = (undefined **)0x10;
      lVar13 = lVar18;
      func_0x00010bf52a60();
      if (lVar13 != 0) {
        lVar20 = *plStack_750;
        do {
          puVar1 = PTR_s_realTimeScanResultDetectedforFra_112626170;
          lVar15 = 0;
          do {
            if (*plStack_750 != lVar20) {
              _objc_enumerationMutation(lVar18);
            }
            uVar19 = *(ulong *)(lStack_758 + lVar15 * 8);
            uVar4 = uVar19;
            _objc_opt_respondsToSelector(uVar19,puVar1);
            if ((uVar4 & 1) != 0) {
              func_0x00010c121d40(uVar19);
            }
            lVar15 = lVar15 + 1;
          } while (lVar13 != lVar15);
          puVar2 = &uStack_760;
          puVar16 = auStack_720;
          ppuVar12 = (undefined **)0x10;
          lVar13 = lVar18;
          func_0x00010bf52a60();
        } while (lVar13 != 0);
      }
      _objc_release(lVar18);
      puStack_768 = puVar14;
    }
    _os_unfair_lock_unlock(puVar14 + 0x10);
    _objc_release(ppuVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a0) {
      return;
    }
    ___stack_chk_fail();
    _os_unfair_lock_unlock(puStack_768 + 0x10);
    __Unwind_Resume();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    _objc_retain(puVar16);
    _objc_retain(ppuVar12);
    _os_unfair_lock_lock(puVar6 + 2);
    if (((puVar2 != (undefined8 *)0x0) && (puVar16 != (undefined1 *)0x0)) &&
       (ppuVar12 != (undefined **)0x0)) {
      lVar15 = puVar6[1];
      _objc_retain(lVar15);
      lVar18 = lVar15;
      func_0x00010bf52a60();
      lVar20 = lRam0000000000000000;
      puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
      while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar1, lVar18 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar20) {
            _objc_enumerationMutation(lVar15);
          }
          uVar19 = *(ulong *)(lVar17 * 8);
          uVar4 = uVar19;
          _objc_opt_respondsToSelector(uVar19,puVar1);
          if ((uVar4 & 1) != 0) {
            func_0x00010c257ac0(uVar19);
          }
          lVar17 = lVar17 + 1;
        } while (lVar18 != lVar17);
        lVar18 = lVar15;
        func_0x00010bf52a60();
        puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
      }
      _objc_release(lVar15);
    }
    _os_unfair_lock_unlock(puVar6 + 2);
    _objc_release(ppuVar12);
    _objc_release(puVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      _os_unfair_lock_unlock(puVar6 + 2);
      __Unwind_Resume();
      lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _os_unfair_lock_lock(puVar2 + 2);
      lVar15 = puVar2[1];
      _objc_retain(lVar15);
      lVar13 = lVar15;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
      while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar13 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(lVar15);
          }
          uVar19 = *(ulong *)(lVar17 * 8);
          uVar4 = uVar19;
          _objc_opt_respondsToSelector(uVar19,puVar1);
          if ((uVar4 & 1) != 0) {
            func_0x00010bf8dfe0(uVar19);
          }
          lVar17 = lVar17 + 1;
        } while (lVar13 != lVar17);
        lVar13 = lVar15;
        func_0x00010bf52a60();
        puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
      }
      _objc_release(lVar15);
      puVar2 = puVar2 + 2;
      _os_unfair_lock_unlock();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
        ___stack_chk_fail();
        __Unwind_Resume();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _os_unfair_lock_lock(puVar2 + 2);
        if (param_7 != 0) {
          lVar15 = puVar2[1];
          _objc_retain(lVar15);
          lVar18 = lVar15;
          func_0x00010bf52a60();
          lVar20 = lRam0000000000000000;
          puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
          while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar18 != 0) {
            lVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar20) {
                _objc_enumerationMutation(lVar15);
              }
              uVar19 = *(ulong *)(lVar17 * 8);
              uVar4 = uVar19;
              _objc_opt_respondsToSelector(uVar19,puVar1);
              if ((uVar4 & 1) != 0) {
                func_0x00010c121c40(uVar19);
              }
              lVar17 = lVar17 + 1;
            } while (lVar18 != lVar17);
            lVar18 = lVar15;
            func_0x00010bf52a60();
            puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
          }
          _objc_release(lVar15);
        }
        puVar2 = puVar2 + 2;
        _os_unfair_lock_unlock(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          return;
        }
        ___stack_chk_fail();
        __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 1,0);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1060dbf10; end: 1060dc09b; -[SCRealTimeScanCompoundLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:] */

void FUN_1060dbf10(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5,undefined **param_6,long param_7)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 *unaff_x23;
  long lVar17;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong unaff_x26;
  ulong uVar18;
  undefined **unaff_x27;
  long lVar19;
  undefined **unaff_x28;
  undefined1 *puStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [128];
  long lStack_570;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  ulong uStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined1 *puStack_538;
  undefined8 *puStack_530;
  undefined **ppuStack_528;
  undefined1 *puStack_520;
  undefined8 *puStack_518;
  undefined1 ****ppppuStack_510;
  code *pcStack_508;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [128];
  long lStack_430;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  ulong uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined1 *puStack_3f8;
  undefined **ppuStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  ulong *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [128];
  long lStack_300;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  ulong uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined1 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  puVar14 = param_5;
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_2 + 0x10);
  if (param_5 != (undefined1 *)0x0) {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x23 = *(undefined1 **)(param_2 + 8);
    lStack_138 = param_2;
    _objc_retain(unaff_x23);
    param_4 = &uStack_130;
    puVar14 = auStack_f0;
    param_6 = (undefined **)0x10;
    puVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_120;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanBannerDidReceiveActi_112626120;
        puVar14 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_128 + (long)puVar14 * 8);
          uVar2 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121c00(unaff_x26);
          }
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        param_4 = &uStack_130;
        puVar14 = auStack_f0;
        param_6 = (undefined **)0x10;
        puVar1 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    param_2 = lStack_138;
  }
  _os_unfair_lock_unlock(param_2 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_138 + 0x10);
  __Unwind_Resume();
  pcStack_148 = FUN_1060dc09c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  puVar1 = puVar14;
  ppuVar10 = param_6;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  puStack_288 = param_5;
  _os_unfair_lock_lock(param_5 + 0x10);
  if (((param_4 != (undefined8 *)0x0) && (puVar14 != (undefined1 *)0x0)) && (param_1 != 0.0)) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    unaff_x23 = *(undefined1 **)(puStack_288 + 8);
    _objc_retain(unaff_x23);
    puVar6 = &uStack_280;
    puVar1 = auStack_240;
    ppuVar10 = (undefined **)0x10;
    puVar3 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_270;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveClassifier_112626148;
        param_5 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_270 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_278 + (long)param_5 * 8);
          uVar2 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121ca0(param_1,unaff_x26);
          }
          param_5 = param_5 + 1;
        } while (puVar3 != param_5);
        puVar6 = &uStack_280;
        puVar1 = auStack_240;
        ppuVar10 = (undefined **)0x10;
        puVar3 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
  }
  _os_unfair_lock_unlock(puStack_288 + 0x10);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_288 + 0x10);
  puVar4 = param_4;
  __Unwind_Resume();
  puVar8 = &uStack_3c0;
  pcStack_298 = FUN_1060dc268;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar6;
  puVar3 = puVar1;
  ppuStack_2f0 = unaff_x28;
  ppuStack_2e8 = unaff_x27;
  uStack_2e0 = unaff_x26;
  puStack_2d8 = unaff_x25;
  puStack_2d0 = unaff_x24;
  puStack_2c8 = unaff_x23;
  ppuStack_2c0 = param_6;
  puStack_2b8 = puVar14;
  puStack_2b0 = param_5;
  puStack_2a8 = param_4;
  ppuStack_2a0 = &puStack_150;
  _objc_retain(puVar6);
  _os_unfair_lock_lock(puVar4 + 2);
  if (puVar6 != (undefined8 *)0x0) {
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    puStack_3b0 = (ulong *)0x0;
    param_6 = (undefined **)puVar4[1];
    _objc_retain(param_6);
    puVar3 = auStack_380;
    ppuVar10 = (undefined **)0x10;
    ppuVar11 = param_6;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x26 = *puStack_3b0;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanWillAttemptDecodeFor_112626190;
        unaff_x28 = (undefined **)0x0;
        do {
          if (*puStack_3b0 != unaff_x26) {
            _objc_enumerationMutation(param_6);
          }
          unaff_x25 = *(undefined **)(lStack_3b8 + (long)unaff_x28 * 8);
          puVar5 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x00010c121dc0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar11 != unaff_x28);
        puVar3 = auStack_380;
        ppuVar10 = (undefined **)0x10;
        ppuVar11 = param_6;
        puVar8 = &uStack_3c0;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    unaff_x23 = (undefined1 *)0x0;
    _objc_release(param_6);
    puVar9 = puVar8;
  }
  _os_unfair_lock_unlock(puVar4 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar4 + 2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1060dc3e0;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar14 = puVar3;
  ppuVar11 = ppuVar10;
  ppuStack_420 = unaff_x28;
  ppuStack_418 = unaff_x27;
  uStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  ppuStack_3f0 = param_6;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar6;
  puStack_3d8 = puVar4;
  pppuStack_3d0 = &ppuStack_2a0;
  _objc_retain(puVar3);
  _os_unfair_lock_lock(puVar7 + 2);
  if (puVar3 != (undefined1 *)0x0) {
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    unaff_x23 = (undefined1 *)puVar7[1];
    puStack_4f8 = puVar7;
    _objc_retain(unaff_x23);
    puVar8 = &uStack_4f0;
    puVar14 = auStack_4b0;
    ppuVar11 = (undefined **)0x10;
    puVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      unaff_x27 = (undefined **)*plStack_4e0;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        puVar14 = (undefined1 *)0x0;
        do {
          if ((undefined **)*plStack_4e0 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_4e8 + (long)puVar14 * 8);
          uVar2 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar8 = &uStack_4f0;
        puVar14 = auStack_4b0;
        ppuVar11 = (undefined **)0x10;
        puVar1 = unaff_x23;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar7 = puStack_4f8;
  }
  _os_unfair_lock_unlock(puVar7 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_4f8 + 2);
  puVar1 = puVar3;
  __Unwind_Resume();
  pcStack_508 = FUN_1060dc56c;
  lStack_570 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar8;
  ppuVar12 = ppuVar11;
  ppuStack_560 = unaff_x28;
  ppuStack_558 = unaff_x27;
  uStack_550 = unaff_x26;
  puStack_548 = unaff_x25;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar9;
  ppuStack_528 = ppuVar10;
  puStack_520 = puVar3;
  puStack_518 = puVar7;
  ppppuStack_510 = &pppuStack_3d0;
  _objc_retain(puVar8);
  _objc_retain(ppuVar11);
  _os_unfair_lock_lock(puVar1 + 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    lStack_628 = 0;
    uStack_630 = 0;
    uStack_618 = 0;
    plStack_620 = (long *)0x0;
    lVar17 = *(long *)(puVar1 + 8);
    _objc_retain(lVar17);
    puVar6 = &uStack_630;
    puVar14 = auStack_5f0;
    ppuVar12 = (undefined **)0x10;
    lVar13 = lVar17;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar19 = *plStack_620;
      do {
        puVar5 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar15 = 0;
        do {
          if (*plStack_620 != lVar19) {
            _objc_enumerationMutation(lVar17);
          }
          uVar18 = *(ulong *)(lStack_628 + lVar15 * 8);
          uVar2 = uVar18;
          _objc_opt_respondsToSelector(uVar18,puVar5);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121d40(uVar18);
          }
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar15);
        puVar6 = &uStack_630;
        puVar14 = auStack_5f0;
        ppuVar12 = (undefined **)0x10;
        lVar13 = lVar17;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar17);
    puStack_638 = puVar1;
  }
  _os_unfair_lock_unlock(puVar1 + 0x10);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_570) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_638 + 0x10);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  _objc_retain(ppuVar12);
  _os_unfair_lock_lock(puVar8 + 2);
  if (((puVar6 != (undefined8 *)0x0) && (puVar14 != (undefined1 *)0x0)) &&
     (ppuVar12 != (undefined **)0x0)) {
    lVar15 = puVar8[1];
    _objc_retain(lVar15);
    lVar17 = lVar15;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar5 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar5, lVar17 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar15);
        }
        uVar18 = *(ulong *)(lVar16 * 8);
        uVar2 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar5);
        if ((uVar2 & 1) != 0) {
          func_0x00010c257ac0(uVar18);
        }
        lVar16 = lVar16 + 1;
      } while (lVar17 != lVar16);
      lVar17 = lVar15;
      func_0x00010bf52a60();
      puVar5 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar15);
  }
  _os_unfair_lock_unlock(puVar8 + 2);
  _objc_release(ppuVar12);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar8 + 2);
  __Unwind_Resume();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar6 + 2);
  lVar15 = puVar6[1];
  _objc_retain(lVar15);
  lVar13 = lVar15;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  puVar5 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar5, lVar13 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar15);
      }
      uVar18 = *(ulong *)(lVar16 * 8);
      uVar2 = uVar18;
      _objc_opt_respondsToSelector(uVar18,puVar5);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf8dfe0(uVar18);
      }
      lVar16 = lVar16 + 1;
    } while (lVar13 != lVar16);
    lVar13 = lVar15;
    func_0x00010bf52a60();
    puVar5 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar15);
  puVar6 = puVar6 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar6 + 2);
  if (param_7 != 0) {
    lVar15 = puVar6[1];
    _objc_retain(lVar15);
    lVar17 = lVar15;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar5 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar5, lVar17 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar15);
        }
        uVar18 = *(ulong *)(lVar16 * 8);
        uVar2 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar5);
        if ((uVar2 & 1) != 0) {
          func_0x00010c121c40(uVar18);
        }
        lVar16 = lVar16 + 1;
      } while (lVar17 != lVar16);
      lVar17 = lVar15;
      func_0x00010bf52a60();
      puVar5 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar15);
  }
  puVar6 = puVar6 + 2;
  _os_unfair_lock_unlock(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 1,0);
  return;
}



/* Entry: 1060dc09c; end: 1060dc267; -[SCRealTimeScanCompoundLogger realTimeScanDidReceiveClassifierResponseForFrameId:className:score:classifierVersion:] */

void FUN_1060dc09c(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5,undefined **param_6,long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong unaff_x26;
  ulong uVar18;
  undefined **unaff_x27;
  long lVar19;
  undefined **unaff_x28;
  undefined1 *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [128];
  long lStack_430;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  ulong uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined1 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  ulong uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined **ppuStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  ulong *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  puVar7 = param_5;
  ppuVar11 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_148 = param_2;
  _os_unfair_lock_lock(param_2 + 0x10);
  if (((param_4 != (undefined8 *)0x0) && (param_5 != (undefined1 *)0x0)) && (param_1 != 0.0)) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    unaff_x23 = *(long *)(lStack_148 + 8);
    _objc_retain(unaff_x23);
    puVar4 = &uStack_140;
    puVar7 = auStack_100;
    ppuVar11 = (undefined **)0x10;
    lVar14 = unaff_x23;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      unaff_x27 = (undefined **)*plStack_130;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveClassifier_112626148;
        param_2 = 0;
        do {
          if ((undefined **)*plStack_130 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_138 + param_2 * 8);
          uVar1 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar1 & 1) != 0) {
            func_0x00010c121ca0(param_1,unaff_x26);
          }
          param_2 = param_2 + 1;
        } while (lVar14 != param_2);
        puVar4 = &uStack_140;
        puVar7 = auStack_100;
        ppuVar11 = (undefined **)0x10;
        lVar14 = unaff_x23;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
  }
  _os_unfair_lock_unlock(lStack_148 + 0x10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_148 + 0x10);
  puVar2 = param_4;
  __Unwind_Resume();
  puVar8 = &uStack_280;
  pcStack_158 = FUN_1060dc268;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar4;
  puVar6 = puVar7;
  ppuStack_1b0 = unaff_x28;
  ppuStack_1a8 = unaff_x27;
  uStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  lStack_188 = unaff_x23;
  ppuStack_180 = param_6;
  puStack_178 = param_5;
  lStack_170 = param_2;
  puStack_168 = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _os_unfair_lock_lock(puVar2 + 2);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    puStack_270 = (ulong *)0x0;
    param_6 = (undefined **)puVar2[1];
    _objc_retain(param_6);
    puVar6 = auStack_240;
    ppuVar11 = (undefined **)0x10;
    ppuVar12 = param_6;
    func_0x00010bf52a60();
    if (ppuVar12 != (undefined **)0x0) {
      unaff_x26 = *puStack_270;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanWillAttemptDecodeFor_112626190;
        unaff_x28 = (undefined **)0x0;
        do {
          if (*puStack_270 != unaff_x26) {
            _objc_enumerationMutation(param_6);
          }
          unaff_x25 = *(undefined **)(lStack_278 + (long)unaff_x28 * 8);
          puVar3 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar3 & 1) != 0) {
            func_0x00010c121dc0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar12 != unaff_x28);
        puVar6 = auStack_240;
        ppuVar11 = (undefined **)0x10;
        ppuVar12 = param_6;
        puVar8 = &uStack_280;
        func_0x00010bf52a60();
      } while (ppuVar12 != (undefined **)0x0);
    }
    unaff_x23 = 0;
    _objc_release(param_6);
    puVar9 = puVar8;
  }
  _os_unfair_lock_unlock(puVar2 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar2 + 2);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_288 = FUN_1060dc3e0;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar10 = puVar6;
  ppuVar12 = ppuVar11;
  ppuStack_2e0 = unaff_x28;
  ppuStack_2d8 = unaff_x27;
  uStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = unaff_x24;
  lStack_2b8 = unaff_x23;
  ppuStack_2b0 = param_6;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar4;
  puStack_298 = puVar2;
  ppuStack_290 = &puStack_160;
  _objc_retain(puVar6);
  _os_unfair_lock_lock(puVar5 + 2);
  if (puVar6 != (undefined1 *)0x0) {
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    unaff_x23 = puVar5[1];
    puStack_3b8 = puVar5;
    _objc_retain(unaff_x23);
    puVar8 = &uStack_3b0;
    puVar10 = auStack_370;
    ppuVar12 = (undefined **)0x10;
    lVar14 = unaff_x23;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      unaff_x27 = (undefined **)*plStack_3a0;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        lVar15 = 0;
        do {
          if ((undefined **)*plStack_3a0 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_3a8 + lVar15 * 8);
          uVar1 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar1 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          lVar15 = lVar15 + 1;
        } while (lVar14 != lVar15);
        puVar8 = &uStack_3b0;
        puVar10 = auStack_370;
        ppuVar12 = (undefined **)0x10;
        lVar14 = unaff_x23;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar5 = puStack_3b8;
  }
  _os_unfair_lock_unlock(puVar5 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_3b8 + 2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1060dc56c;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar8;
  ppuVar13 = ppuVar12;
  ppuStack_420 = unaff_x28;
  ppuStack_418 = unaff_x27;
  uStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  lStack_3f8 = unaff_x23;
  puStack_3f0 = puVar9;
  ppuStack_3e8 = ppuVar11;
  puStack_3e0 = puVar6;
  puStack_3d8 = puVar5;
  pppuStack_3d0 = &ppuStack_290;
  _objc_retain(puVar8);
  _objc_retain(ppuVar12);
  _os_unfair_lock_lock(puVar7 + 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    lVar15 = *(long *)(puVar7 + 8);
    _objc_retain(lVar15);
    puVar4 = &uStack_4f0;
    puVar10 = auStack_4b0;
    ppuVar13 = (undefined **)0x10;
    lVar14 = lVar15;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar19 = *plStack_4e0;
      do {
        puVar3 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar16 = 0;
        do {
          if (*plStack_4e0 != lVar19) {
            _objc_enumerationMutation(lVar15);
          }
          uVar18 = *(ulong *)(lStack_4e8 + lVar16 * 8);
          uVar1 = uVar18;
          _objc_opt_respondsToSelector(uVar18,puVar3);
          if ((uVar1 & 1) != 0) {
            func_0x00010c121d40(uVar18);
          }
          lVar16 = lVar16 + 1;
        } while (lVar14 != lVar16);
        puVar4 = &uStack_4f0;
        puVar10 = auStack_4b0;
        ppuVar13 = (undefined **)0x10;
        lVar14 = lVar15;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar15);
    puStack_4f8 = puVar7;
  }
  _os_unfair_lock_unlock(puVar7 + 0x10);
  _objc_release(ppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_4f8 + 0x10);
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  _objc_retain(ppuVar13);
  _os_unfair_lock_lock(puVar8 + 2);
  if (((puVar4 != (undefined8 *)0x0) && (puVar10 != (undefined1 *)0x0)) &&
     (ppuVar13 != (undefined **)0x0)) {
    lVar16 = puVar8[1];
    _objc_retain(lVar16);
    lVar15 = lVar16;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar3 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar3, lVar15 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        uVar18 = *(ulong *)(lVar17 * 8);
        uVar1 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar3);
        if ((uVar1 & 1) != 0) {
          func_0x00010c257ac0(uVar18);
        }
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = lVar16;
      func_0x00010bf52a60();
      puVar3 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar16);
  }
  _os_unfair_lock_unlock(puVar8 + 2);
  _objc_release(ppuVar13);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar8 + 2);
  __Unwind_Resume();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar4 + 2);
  lVar16 = puVar4[1];
  _objc_retain(lVar16);
  lVar14 = lVar16;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  puVar3 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar3, lVar14 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar16);
      }
      uVar18 = *(ulong *)(lVar17 * 8);
      uVar1 = uVar18;
      _objc_opt_respondsToSelector(uVar18,puVar3);
      if ((uVar1 & 1) != 0) {
        func_0x00010bf8dfe0(uVar18);
      }
      lVar17 = lVar17 + 1;
    } while (lVar14 != lVar17);
    lVar14 = lVar16;
    func_0x00010bf52a60();
    puVar3 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar16);
  puVar4 = puVar4 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar4 + 2);
  if (param_7 != 0) {
    lVar16 = puVar4[1];
    _objc_retain(lVar16);
    lVar15 = lVar16;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    puVar3 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar3, lVar15 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        uVar18 = *(ulong *)(lVar17 * 8);
        uVar1 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar3);
        if ((uVar1 & 1) != 0) {
          func_0x00010c121c40(uVar18);
        }
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = lVar16;
      func_0x00010bf52a60();
      puVar3 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar16);
  }
  puVar4 = puVar4 + 2;
  _os_unfair_lock_unlock(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 1,0);
  return;
}



/* Entry: 1060dc268; end: 1060dc3df; -[SCRealTimeScanCompoundLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:] */

void FUN_1060dc268(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **unaff_x22;
  long unaff_x23;
  long lVar15;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong unaff_x26;
  ulong uVar16;
  undefined **unaff_x27;
  long lVar17;
  undefined **unaff_x28;
  undefined1 *puStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [128];
  long lStack_2e0;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  ulong uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 != (undefined8 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (ulong *)0x0;
    unaff_x22 = *(undefined ***)(param_1 + 8);
    _objc_retain(unaff_x22);
    puVar5 = auStack_f0;
    param_5 = 0x10;
    ppuVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x26 = *puStack_120;
      unaff_x27 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x24 = PTR_s_realTimeScanWillAttemptDecodeFor_112626190;
        unaff_x28 = (undefined **)0x0;
        do {
          if (*puStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x25 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          puVar2 = unaff_x25;
          _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x00010c121dc0(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar1 != unaff_x28);
        puVar5 = auStack_f0;
        param_5 = 0x10;
        ppuVar1 = unaff_x22;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    unaff_x23 = 0;
    _objc_release(unaff_x22);
    puVar9 = puVar7;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  puVar3 = param_3;
  __Unwind_Resume();
  pcStack_138 = FUN_1060dc3e0;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9;
  puVar10 = puVar5;
  lVar11 = param_5;
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  ppuStack_160 = unaff_x22;
  puStack_158 = param_4;
  puStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _os_unfair_lock_lock(puVar3 + 2);
  if (puVar5 != (undefined1 *)0x0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    unaff_x23 = puVar3[1];
    puStack_268 = puVar3;
    _objc_retain(unaff_x23);
    puVar7 = &uStack_260;
    puVar10 = auStack_220;
    lVar11 = 0x10;
    lVar12 = unaff_x23;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      unaff_x27 = (undefined **)*plStack_250;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        lVar11 = 0;
        do {
          if ((undefined **)*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_258 + lVar11 * 8);
          uVar4 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar4 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          lVar11 = lVar11 + 1;
        } while (lVar12 != lVar11);
        puVar7 = &uStack_260;
        puVar10 = auStack_220;
        lVar11 = 0x10;
        lVar12 = unaff_x23;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
    unaff_x24 = (undefined *)0x0;
    _objc_release(unaff_x23);
    puVar3 = puStack_268;
  }
  _os_unfair_lock_unlock(puVar3 + 2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_268 + 2);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_278 = FUN_1060dc56c;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  lVar12 = lVar11;
  ppuStack_2d0 = unaff_x28;
  ppuStack_2c8 = unaff_x27;
  uStack_2c0 = unaff_x26;
  puStack_2b8 = unaff_x25;
  puStack_2b0 = unaff_x24;
  lStack_2a8 = unaff_x23;
  puStack_2a0 = puVar9;
  lStack_298 = param_5;
  puStack_290 = puVar5;
  puStack_288 = puVar3;
  ppuStack_280 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(lVar11);
  _os_unfair_lock_lock(puVar6 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    lVar15 = *(long *)(puVar6 + 8);
    _objc_retain(lVar15);
    puVar8 = &uStack_3a0;
    puVar10 = auStack_360;
    lVar12 = 0x10;
    lVar13 = lVar15;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar17 = *plStack_390;
      do {
        puVar2 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar12 = 0;
        do {
          if (*plStack_390 != lVar17) {
            _objc_enumerationMutation(lVar15);
          }
          uVar16 = *(ulong *)(lStack_398 + lVar12 * 8);
          uVar4 = uVar16;
          _objc_opt_respondsToSelector(uVar16,puVar2);
          if ((uVar4 & 1) != 0) {
            func_0x00010c121d40(uVar16);
          }
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        puVar8 = &uStack_3a0;
        puVar10 = auStack_360;
        lVar12 = 0x10;
        lVar13 = lVar15;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar15);
    puStack_3a8 = puVar6;
  }
  _os_unfair_lock_unlock(puVar6 + 0x10);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_3a8 + 0x10);
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(lVar12);
  _os_unfair_lock_lock(puVar7 + 2);
  if (((puVar8 != (undefined8 *)0x0) && (puVar10 != (undefined1 *)0x0)) && (lVar12 != 0)) {
    lVar17 = puVar7[1];
    _objc_retain(lVar17);
    lVar13 = lVar17;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    puVar2 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar2, lVar13 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar17);
        }
        uVar16 = *(ulong *)(lVar14 * 8);
        uVar4 = uVar16;
        _objc_opt_respondsToSelector(uVar16,puVar2);
        if ((uVar4 & 1) != 0) {
          func_0x00010c257ac0(uVar16);
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = lVar17;
      func_0x00010bf52a60();
      puVar2 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar17);
  }
  _os_unfair_lock_unlock(puVar7 + 2);
  _objc_release(lVar12);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar7 + 2);
  __Unwind_Resume();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar8 + 2);
  lVar15 = puVar8[1];
  _objc_retain(lVar15);
  lVar11 = lVar15;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  puVar2 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar2, lVar11 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar15);
      }
      uVar16 = *(ulong *)(lVar17 * 8);
      uVar4 = uVar16;
      _objc_opt_respondsToSelector(uVar16,puVar2);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf8dfe0(uVar16);
      }
      lVar17 = lVar17 + 1;
    } while (lVar11 != lVar17);
    lVar11 = lVar15;
    func_0x00010bf52a60();
    puVar2 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar15);
  puVar8 = puVar8 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar8 + 2);
  if (param_6 != 0) {
    lVar15 = puVar8[1];
    _objc_retain(lVar15);
    lVar12 = lVar15;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    puVar2 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar2, lVar12 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar15);
        }
        uVar16 = *(ulong *)(lVar17 * 8);
        uVar4 = uVar16;
        _objc_opt_respondsToSelector(uVar16,puVar2);
        if ((uVar4 & 1) != 0) {
          func_0x00010c121c40(uVar16);
        }
        lVar17 = lVar17 + 1;
      } while (lVar12 != lVar17);
      lVar12 = lVar15;
      func_0x00010bf52a60();
      puVar2 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar15);
  }
  puVar8 = puVar8 + 2;
  _os_unfair_lock_unlock(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar8 + 1,0);
  return;
}



/* Entry: 1060dc3e0; end: 1060dc56b; -[SCRealTimeScanCompoundLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:] */

void FUN_1060dc3e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x23;
  long lVar11;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  ulong unaff_x26;
  ulong uVar12;
  long unaff_x27;
  long lVar13;
  undefined **unaff_x28;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  puVar4 = param_3;
  puVar6 = param_4;
  lVar7 = param_5;
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_4 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x23 = *(long *)(param_1 + 8);
    lStack_138 = param_1;
    _objc_retain(unaff_x23);
    puVar4 = &uStack_130;
    puVar6 = auStack_f0;
    lVar7 = 0x10;
    lVar8 = unaff_x23;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      unaff_x27 = *plStack_120;
      unaff_x28 = &PTR_s_readPropertyValue__112626000;
      do {
        unaff_x25 = PTR_s_realTimeScanDidReceiveDecodeResp_112626150;
        lVar7 = 0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = *(ulong *)(lStack_128 + lVar7 * 8);
          uVar2 = unaff_x26;
          _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121cc0(unaff_x26);
          }
          lVar7 = lVar7 + 1;
        } while (lVar8 != lVar7);
        puVar4 = &uStack_130;
        puVar6 = auStack_f0;
        lVar7 = 0x10;
        lVar8 = unaff_x23;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    unaff_x24 = 0;
    _objc_release(unaff_x23);
    param_1 = lStack_138;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_138 + 0x10);
  puVar3 = param_4;
  __Unwind_Resume();
  pcStack_148 = FUN_1060dc56c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  lVar8 = lVar7;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  puStack_170 = param_3;
  lStack_168 = param_5;
  puStack_160 = param_4;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(lVar7);
  _os_unfair_lock_lock(puVar3 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar11 = *(long *)(puVar3 + 8);
    _objc_retain(lVar11);
    puVar5 = &uStack_270;
    puVar6 = auStack_230;
    lVar8 = 0x10;
    lVar9 = lVar11;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar13 = *plStack_260;
      do {
        puVar1 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar8 = 0;
        do {
          if (*plStack_260 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar12 = *(ulong *)(lStack_268 + lVar8 * 8);
          uVar2 = uVar12;
          _objc_opt_respondsToSelector(uVar12,puVar1);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121d40(uVar12);
          }
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
        puVar5 = &uStack_270;
        puVar6 = auStack_230;
        lVar8 = 0x10;
        lVar9 = lVar11;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar11);
    puStack_278 = puVar3;
  }
  _os_unfair_lock_unlock(puVar3 + 0x10);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puStack_278 + 0x10);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(lVar8);
  _os_unfair_lock_lock(puVar4 + 2);
  if (((puVar5 != (undefined8 *)0x0) && (puVar6 != (undefined1 *)0x0)) && (lVar8 != 0)) {
    lVar13 = puVar4[1];
    _objc_retain(lVar13);
    lVar9 = lVar13;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar1, lVar9 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar13);
        }
        uVar12 = *(ulong *)(lVar10 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar1);
        if ((uVar2 & 1) != 0) {
          func_0x00010c257ac0(uVar12);
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar13;
      func_0x00010bf52a60();
      puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar13);
  }
  _os_unfair_lock_unlock(puVar4 + 2);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar4 + 2);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar5 + 2);
  lVar11 = puVar5[1];
  _objc_retain(lVar11);
  lVar7 = lVar11;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar7 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar11);
      }
      uVar12 = *(ulong *)(lVar13 * 8);
      uVar2 = uVar12;
      _objc_opt_respondsToSelector(uVar12,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf8dfe0(uVar12);
      }
      lVar13 = lVar13 + 1;
    } while (lVar7 != lVar13);
    lVar7 = lVar11;
    func_0x00010bf52a60();
    puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar11);
  puVar5 = puVar5 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    __Unwind_Resume();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _os_unfair_lock_lock(puVar5 + 2);
    if (param_6 != 0) {
      lVar11 = puVar5[1];
      _objc_retain(lVar11);
      lVar8 = lVar11;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
      while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar8 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar11);
          }
          uVar12 = *(ulong *)(lVar13 * 8);
          uVar2 = uVar12;
          _objc_opt_respondsToSelector(uVar12,puVar1);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121c40(uVar12);
          }
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        lVar8 = lVar11;
        func_0x00010bf52a60();
        puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
      }
      _objc_release(lVar11);
    }
    puVar5 = puVar5 + 2;
    _os_unfair_lock_unlock(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar5 + 1,0);
    return;
  }
  return;
}



/* Entry: 1060dc56c; end: 1060dc707; -[SCRealTimeScanCompoundLogger realTimeScanResultDetectedforFrameId:withResultType:withModelKey:] */

void FUN_1060dc56c(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_138;
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
  puVar3 = param_3;
  lVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 != (undefined8 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 8);
    _objc_retain(lVar7);
    puVar3 = &uStack_130;
    param_4 = auStack_f0;
    lVar4 = 0x10;
    lVar5 = lVar7;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar10 = *plStack_120;
      do {
        puVar1 = PTR_s_realTimeScanResultDetectedforFra_112626170;
        lVar4 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(ulong *)(lStack_128 + lVar4 * 8);
          uVar2 = uVar9;
          _objc_opt_respondsToSelector(uVar9,puVar1);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121d40(uVar9);
          }
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
        puVar3 = &uStack_130;
        param_4 = auStack_f0;
        lVar4 = 0x10;
        lVar5 = lVar7;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar7);
    lStack_138 = param_1;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_138 + 0x10);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(lVar4);
  _os_unfair_lock_lock(param_3 + 2);
  if (((puVar3 != (undefined8 *)0x0) && (param_4 != (undefined1 *)0x0)) && (lVar4 != 0)) {
    lVar8 = param_3[1];
    _objc_retain(lVar8);
    lVar7 = lVar8;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar1, lVar7 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(ulong *)(lVar6 * 8);
        uVar2 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar1);
        if ((uVar2 & 1) != 0) {
          func_0x00010c257ac0(uVar9);
        }
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar8);
  }
  _os_unfair_lock_unlock(param_3 + 2);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 2);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(puVar3 + 2);
  lVar10 = puVar3[1];
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar10);
      }
      uVar9 = *(ulong *)(lVar8 * 8);
      uVar2 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf8dfe0(uVar9);
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar10;
    func_0x00010bf52a60();
    puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar10);
  puVar3 = puVar3 + 2;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    __Unwind_Resume();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _os_unfair_lock_lock(puVar3 + 2);
    if (param_6 != 0) {
      lVar10 = puVar3[1];
      _objc_retain(lVar10);
      lVar5 = lVar10;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
      while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar5 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar10);
          }
          uVar9 = *(ulong *)(lVar8 * 8);
          uVar2 = uVar9;
          _objc_opt_respondsToSelector(uVar9,puVar1);
          if ((uVar2 & 1) != 0) {
            func_0x00010c121c40(uVar9);
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar10;
        func_0x00010bf52a60();
        puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
      }
      _objc_release(lVar10);
    }
    puVar3 = puVar3 + 2;
    _os_unfair_lock_unlock(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 1,0);
    return;
  }
  return;
}



/* Entry: 1060dc708; end: 1060dc8bf; -[SCRealTimeScanCompoundLogger storePerfMetric:value:params:] */

void FUN_1060dc708(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar7 = *(long *)(param_1 + 8);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    while (PTR_s_storePerfMetric_value_params__1126738d8 = puVar1, lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lVar6 * 8);
        uVar3 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c257ac0(uVar8);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar7;
      func_0x00010bf52a60();
      puVar1 = PTR_s_storePerfMetric_value_params__1126738d8;
    }
    _objc_release(lVar7);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 8);
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar6 * 8);
      uVar3 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf8dfe0(uVar8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar7);
  param_3 = param_3 + 0x10;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_3 + 0x10);
  if (param_6 != 0) {
    lVar7 = *(long *)(param_3 + 8);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lVar6 * 8);
        uVar3 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c121c40(uVar8);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar7;
      func_0x00010bf52a60();
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar7);
  }
  param_3 = param_3 + 0x10;
  _os_unfair_lock_unlock(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1060dc8c0; end: 1060dca13; -[SCRealTimeScanCompoundLogger emitPerfMetrics] */

void FUN_1060dc8c0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x5;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  while (PTR_s_emitPerfMetrics_1125c11a0 = puVar1, lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar2 = uVar7;
      _objc_opt_respondsToSelector(uVar7,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf8dfe0(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    puVar1 = PTR_s_emitPerfMetrics_1125c11a0;
  }
  _objc_release(lVar6);
  param_1 = param_1 + 0x10;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  if (in_x5 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar2 = uVar7;
        _objc_opt_respondsToSelector(uVar7,puVar1);
        if ((uVar2 & 1) != 0) {
          func_0x00010c121c40(uVar7);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar6;
      func_0x00010bf52a60();
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar6);
  }
  param_1 = param_1 + 0x10;
  _os_unfair_lock_unlock(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dca14; end: 1060dcb97; -[SCRealTimeScanCompoundLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:] */

void FUN_1060dca14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_x5;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  if (in_x5 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    _objc_retain(lVar7);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    while (PTR_s_realTimeScanDidBeginWithStartTim_112626130 = puVar1, lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lVar6 * 8);
        uVar4 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar1);
        if ((uVar4 & 1) != 0) {
          func_0x00010c121c40(uVar8);
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar7;
      func_0x00010bf52a60();
      puVar1 = PTR_s_realTimeScanDidBeginWithStartTim_112626130;
    }
    _objc_release(lVar7);
  }
  param_1 = param_1 + 0x10;
  _os_unfair_lock_unlock(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dcb98; end: 1060dcba3; -[SCRealTimeScanCompoundLogger .cxx_destruct] */

void FUN_1060dcb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dcba4; end: 1060dcc4f; -[SCRealTimeScanGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1060dcba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7df0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7df8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060dcc50; end: 1060dcc93; -[SCRealTimeScanGrapheneLogger realTimeScanWillAttemptDecodeForFrameId:withCodeType:] */

void FUN_1060dcc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1060dcdbc(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_1060dd748(*(undefined8 *)(param_1 + 0x10),param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060dcc94; end: 1060dccdf; -[SCRealTimeScanGrapheneLogger realTimeScanDidReceiveDecodeResponseDidSucceed:forFrameId:withCodeType:] */

void FUN_1060dcc94(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  if (param_3 != 0) {
    FUN_1060dcdbc(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1060dd8bc(*(undefined8 *)(param_1 + 0x10),param_5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 1060dcce0; end: 1060dcd27; -[SCRealTimeScanGrapheneLogger realTimeScanBannerDidDisplayWithFrameId:resultType:] */

void FUN_1060dcce0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001060dcde0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    FUN_1060ddaa4(*(undefined8 *)(param_1 + 0x18),param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060dcd28; end: 1060dcd7f; -[SCRealTimeScanGrapheneLogger realTimeScanBannerDidReceiveAction:forFrameId:resultType:] */

void FUN_1060dcd28(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  if (param_3 == 0) {
    func_0x0001060dcde0();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      FUN_1060ddc18(*(undefined8 *)(param_1 + 0x18),param_5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_5);
      return;
    }
  }
  return;
}



/* Entry: 1060dcd80; end: 1060dcdbb; -[SCRealTimeScanGrapheneLogger .cxx_destruct] */

void FUN_1060dcd80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dcdbc; end: 1060dce2b;  */

undefined ** FUN_1060dcdbc(ulong param_1)

{
  if (param_1 < 3) {
    return (undefined **)(&PTR_PTR_11090dc30)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1060dce2c; end: 1060dce97; -[SCRealTimeScanPerfLogger init] */

undefined1 * FUN_1060dce2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efa10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060dce98; end: 1060dcf3b; -[SCRealTimeScanPerfLogger storePerfMetric:value:params:] */

void FUN_1060dce98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c010c80();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060dcf3c; end: 1060dd07f; -[SCRealTimeScanPerfLogger emitPerfMetrics] */

void FUN_1060dcf3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b1600;
        func_0x00010c22bdc0(PTR_PTR_1126b1600);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aa440();
        _objc_release(puVar3);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1060dd080; end: 1060dd083; -[SCRealTimeScanPerfLogger realTimeScanDidBeginWithStartTimeMs:g2sStartTimeMs:g2sEndTimeMs:startupType:] */

void FUN_1060dd080(void)

{
  return;
}



/* Entry: 1060dd084; end: 1060dd08f; -[SCRealTimeScanPerfLogger .cxx_destruct] */

void FUN_1060dd084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dd090; end: 1060dd103; -[SCRealTimeScanVerticalToolbarLogger initWithBlizzardLogger:] */

undefined1 * FUN_1060dd090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efa18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060dd104; end: 1060dd1ab; -[SCRealTimeScanVerticalToolbarLogger didSelectToolbarItemWithAnnotationType:] */

void FUN_1060dd104(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7e00;
    _objc_alloc_init(PTR_PTR_1126c7e00);
    func_0x00010c168460();
    func_0x00010c161fe0(puVar2,param_3,0);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar2,param_3,(long)param_1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060dd1ac; end: 1060dd253; -[SCRealTimeScanVerticalToolbarLogger didUnSelectToolbarItemWithAnnotationType:] */

void FUN_1060dd1ac(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c7e00;
    _objc_alloc_init(PTR_PTR_1126c7e00);
    func_0x00010c168460();
    func_0x00010c161fe0(puVar2,param_3,1);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar2,param_3,(long)param_1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


