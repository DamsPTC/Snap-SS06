/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107de5480; end: 107de5583;  */

void FUN_107de5480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = param_2;
      func_0x00010bfb0120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar2);
      lVar3 = param_1;
      _objc_opt_class();
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf88860(*(undefined8 *)(param_1 + 0x40));
      func_0x00010be1b980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar3 != 0) {
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107de5584; end: 107de558b; -[SCOperaPlayerViewMonitor _suspendTimer] */

void FUN_107de5584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 107de558c; end: 107de55bf; -[SCOperaPlayerViewMonitor _reset] */

void FUN_107de558c(long param_1)

{
  func_0x00010bec9180();
  _objc_storeWeak(param_1 + 0x18,0);
  *(undefined1 *)(param_1 + 0x21) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 107de55c0; end: 107de5983; +[SCOperaPlayerViewMonitor _generatePlaybackLogFor:didRemovePlayerItem:playerItemVisibility:downloadBandwidth:logTimestampMs:] */

undefined *
FUN_107de55c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5,int param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
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
  _objc_retain(param_5);
  ppuVar3 = param_5;
  func_0x000107de8bec();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    puVar12 = (undefined *)0x0;
    goto LAB_107de5930;
  }
  ppuVar4 = param_5;
  func_0x00010c252d60();
  puVar12 = PTR____NSDictionary0__struct_11034ab58;
  uVar1 = 2;
  if (param_6 == 0) {
    uVar1 = param_7;
  }
  uVar2 = 3;
  if (ppuVar4 != (undefined **)0x2) {
    uVar2 = uVar1;
  }
  _objc_retain(PTR____NSDictionary0__struct_11034ab58);
  puVar5 = puVar12;
  func_0x00010c0d3c80();
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_4,puVar12,&PTR____CFConstantStringClassReference_110ebf058);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126d7e88;
  _objc_alloc();
  ppuVar4 = param_5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  ppuVar6 = param_5;
  FUN_107de8f40();
  ppuVar7 = param_5;
  if ((int)ppuVar6 == 0) {
    func_0x00010bf0af00(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    FUN_107de8e38(ppuVar7);
  }
  else {
    func_0x00010c10f620(param_5);
  }
  _objc_release(ppuVar7);
  _objc_retain(param_5);
  ppuVar6 = param_5;
  FUN_107de8f40();
  if ((int)ppuVar6 == 0) {
    ppuVar6 = param_5;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    if (ppuVar14 == (undefined **)0x0) goto LAB_107de58d8;
LAB_107de5888:
    ppuVar6 = ppuVar14;
    func_0x00010c299760(ppuVar14);
    func_0x000107de6168();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    ppuVar6 = param_5;
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf52a60();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      lVar13 = *plStack_130;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(ppuVar6);
          }
          ppuVar14 = *(undefined ***)(lStack_138 + (long)ppuVar11 * 8);
          ppuVar8 = ppuVar14;
          func_0x00010bf0b740();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010c0c6c20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar9;
          func_0x00010c0720c0();
          _objc_release(ppuVar9);
          _objc_release(ppuVar8);
          if ((int)ppuVar10 != 0) {
            func_0x00010bf0b740();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107de58c8;
          }
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar7 != ppuVar11);
        ppuVar7 = ppuVar6;
        func_0x00010bf52a60(ppuVar6,param_4,&uStack_140,auStack_100,0x10);
      } while (ppuVar7 != (undefined **)0x0);
      ppuVar14 = (undefined **)0x0;
    }
LAB_107de58c8:
    _objc_release(ppuVar6);
    if (ppuVar14 != (undefined **)0x0) goto LAB_107de5888;
LAB_107de58d8:
    ppuVar6 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  _objc_release(ppuVar14);
  _objc_release(param_5);
  func_0x00010c036ce0(param_1,param_2,puVar12,param_4,ppuVar3,param_9,puVar5,ppuVar4,ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(puVar5);
LAB_107de5930:
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    return (undefined *)(ulong)*(byte *)(param_5 + 9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 107de5984; end: 107de598b; -[SCOperaPlayerViewMonitor hasDetached] */

undefined1 FUN_107de5984(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 107de598c; end: 107de5993; -[SCOperaPlayerViewMonitor playbackLogObservable] */

undefined8 FUN_107de598c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107de5994; end: 107de59e3; -[SCOperaPlayerViewMonitor .cxx_destruct] */

void FUN_107de5994(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107de59e4; end: 107de5a97; -[SCOperaPlayerViewModel initWithAccessibilityID:accessibilityLabel:isHidden:] */

undefined1 *
FUN_107de59e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107de5a98; end: 107de5abb; -[SCOperaPlayerViewModel copyWithZone:] */

undefined8 FUN_107de5a98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107de5abc; end: 107de5b33; -[SCOperaPlayerViewModel hash] */

undefined8 * FUN_107de5abc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107de5bc4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107de5bd0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107de5bd0;
        }
        goto LAB_107de5bc4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107de5bd0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107de5b34; end: 107de5beb; -[SCOperaPlayerViewModel isEqual:] */

long FUN_107de5b34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107de5bc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107de5bd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107de5bd0;
        }
        goto LAB_107de5bc4;
      }
    }
    lVar3 = 0;
  }
LAB_107de5bd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107de5bec; end: 107de5bf3; -[SCOperaPlayerViewModel accessibilityID] */

undefined8 FUN_107de5bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107de5bf4; end: 107de5bfb; -[SCOperaPlayerViewModel accessibilityLabel] */

undefined8 FUN_107de5bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107de5bfc; end: 107de5c03; -[SCOperaPlayerViewModel isHidden] */

undefined1 FUN_107de5bfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107de5c04; end: 107de5c33; -[SCOperaPlayerViewModel .cxx_destruct] */

void FUN_107de5c04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107de5c34; end: 107de5d23; -[SCOperaRemoteVideoViewModel initWithHideFirstFrameImageView:showActivityIndicator:attributedCaptions:videoControlsViewModel:playerViewModel:] */

undefined1 *
FUN_107de5c34(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fb308;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107de5d24; end: 107de5d47; -[SCOperaRemoteVideoViewModel copyWithZone:] */

undefined8 FUN_107de5d24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107de5d48; end: 107de5dd3; -[SCOperaRemoteVideoViewModel hash] */

ulong * FUN_107de5d48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_107de5e8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107de5e98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107de5e98;
          }
          goto LAB_107de5e8c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107de5e98:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107de5dd4; end: 107de5eb3; -[SCOperaRemoteVideoViewModel isEqual:] */

long FUN_107de5dd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107de5e8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107de5e98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107de5e98;
          }
          goto LAB_107de5e8c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107de5e98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107de5eb4; end: 107de5ebb; -[SCOperaRemoteVideoViewModel hideFirstFrameImageView] */

undefined1 FUN_107de5eb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107de5ebc; end: 107de5ec3; -[SCOperaRemoteVideoViewModel showActivityIndicator] */

undefined1 FUN_107de5ebc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107de5ec4; end: 107de5ecb; -[SCOperaRemoteVideoViewModel attributedCaptions] */

undefined8 FUN_107de5ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107de5ecc; end: 107de5ed3; -[SCOperaRemoteVideoViewModel videoControlsViewModel] */

undefined8 FUN_107de5ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107de5ed4; end: 107de5edb; -[SCOperaRemoteVideoViewModel playerViewModel] */

undefined8 FUN_107de5ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107de5edc; end: 107de5f17; -[SCOperaRemoteVideoViewModel .cxx_destruct] */

void FUN_107de5edc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107de5f18; end: 107de5f8f; -[SCOperaStandardVideoControlsViewModel initWithShowPlayButton:showCaptionButton:showAudioButton:showRotateButton:progress:] */

void FUN_107de5f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fb310;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 107de5f90; end: 107de5fb3; -[SCOperaStandardVideoControlsViewModel copyWithZone:] */

undefined8 FUN_107de5f90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107de5fb4; end: 107de6053; -[SCOperaStandardVideoControlsViewModel hash] */

ulong * FUN_107de5fb4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  double dVar9;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar4 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar4);
  uVar8 = CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar4 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar4 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar4 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar4 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar4 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar6;
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(char *)((long)puVar2 + 8) != param_3[8] ||
            (*(char *)((long)puVar2 + 9) != param_3[9])) ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
         (*(char *)((long)puVar2 + 0xb) != param_3[0xb])) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        dVar9 = ABS(*(double *)((long)puVar2 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar9 <= 2.2250738585072014e-308) {
          dVar9 = 2.2250738585072014e-308;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10)) < dVar9
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 107de6054; end: 107de613f; -[SCOperaStandardVideoControlsViewModel isEqual:] */

bool FUN_107de6054(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar2 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
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



/* Entry: 107de6140; end: 107de6147; -[SCOperaStandardVideoControlsViewModel showPlayButton] */

undefined1 FUN_107de6140(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107de6148; end: 107de614f; -[SCOperaStandardVideoControlsViewModel showCaptionButton] */

undefined1 FUN_107de6148(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107de6150; end: 107de6157; -[SCOperaStandardVideoControlsViewModel showAudioButton] */

undefined1 FUN_107de6150(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107de6158; end: 107de615f; -[SCOperaStandardVideoControlsViewModel showRotateButton] */

undefined1 FUN_107de6158(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107de6160; end: 107de618f; -[SCOperaStandardVideoControlsViewModel progress] */

undefined8 FUN_107de6160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107de6190; end: 107de61db; +[SCOperaPlayerDebuggerLayer layerWithPage:] */

void FUN_107de6190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7e08;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107de61dc; end: 107de620f; -[SCOperaPlayerDebuggerLayer initWithPage:] */

void FUN_107de61dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb318;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107de6210; end: 107de6217; -[SCOperaPlayerDebuggerLayer type] */

undefined8 FUN_107de6210(void)

{
  return 0x1f;
}



/* Entry: 107de6218; end: 107de6357;  */

void FUN_107de6218(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(lVar2);
      puVar3 = puVar1;
      func_0x00010bfb1800();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = 0;
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c11f2c0(puVar3);
        lVar4 = lVar2;
        func_0x00010c260c80(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107de6358; end: 107de664b; +[SCANetworkRequestSnapshot withNetworkSnapshot:threshold:] */

void FUN_107de6358(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9a70;
  _objc_opt_new();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c209220(puVar2,param_2,param_4);
    uVar3 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf4c700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f40(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c11f4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010c11f4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b4fe0();
      func_0x00010c1e6fe0(puVar2,param_2,uVar4);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c11f300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010c11f300(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b4fe0();
      func_0x00010c1e6f80(puVar2,param_2,uVar4);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010bf4c940(param_3);
    func_0x00010c182140(puVar2,param_2,uVar3);
    uVar3 = param_3;
    func_0x00010c252440();
    uVar5 = 1;
    if (uVar3 != 1) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar5;
    }
    func_0x00010c1ec160(puVar2,param_2,uVar1);
    uVar3 = param_3;
    func_0x00010c136d60();
    if (uVar3 < 10) {
      uVar5 = *(undefined8 *)(&UNK_10dee7620 + uVar3 * 8);
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
    func_0x00010c1ec220(puVar2,param_2,uVar5);
    uVar3 = param_3;
    func_0x00010c0c46e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c43a0(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c11fca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f12c0();
    func_0x00010c1cc5a0(puVar2,param_2,(long)(int)uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa96c0();
    _objc_release(uVar3);
    lVar6 = 4 - uVar4;
    if (4 < uVar4) {
      lVar6 = -1;
    }
    func_0x00010c1e3380(puVar2,param_2,lVar6);
    uVar3 = param_3;
    func_0x00010c11fca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfea580();
    func_0x00010c1ab100(puVar2,param_2,uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c11fca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27bc40();
    func_0x00010c1ec1e0(puVar2,param_2,(long)(int)uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c11e160(param_3);
    func_0x00010c1e6820(puVar2,param_2,uVar3);
    uVar3 = param_3;
    func_0x00010c27d0e0();
    if (-1 < (long)uVar3) {
      uVar3 = param_3;
      func_0x00010c27d0e0(param_3);
      func_0x00010c21a8c0(puVar2,param_2,uVar3);
    }
    uVar3 = param_3;
    func_0x00010bf9b1e0(param_3);
    func_0x00010c1980e0(puVar2,param_2,uVar3);
    uVar3 = param_3;
    func_0x00010bf25f40(param_3);
    func_0x00010c174d00(puVar2,param_2,uVar3);
    uVar3 = param_3;
    func_0x00010c13f540(param_3);
    func_0x00010c1ed9a0(puVar2,param_2,uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107de664c; end: 107de667b;  */

void FUN_107de664c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_11034c160)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107de667c; end: 107de677b; -[SCOperaNetworkSnapshotTracker initWithBandwidthEstimator:threshold:videoIdentifier:] */

undefined1 *
FUN_107de667c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb320;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f45d908;
    _dispatch_queue_create(&UNK_10f45d908,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107de677c; end: 107de6783; -[SCOperaNetworkSnapshotTracker startTracking] */

void FUN_107de677c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2513f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startTrackingForStall__112671f20,0);
  return;
}



/* Entry: 107de6784; end: 107de6957; -[SCOperaNetworkSnapshotTracker startTrackingForStall:] */

void FUN_107de6784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bd55f40();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107de6958;
  puStack_a0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_90,auStack_88);
  uStack_98 = param_3;
  _objc_retain(param_3);
  _objc_retain(&puStack_b8);
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar3);
  uVar3 = 0;
  _dispatch_time(0,lVar4 * 1000000);
  _dispatch_source_set_timer(puVar2,uVar3,0x7a11ffff0bdc0,0);
  puStack_80 = puVar1;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107de664c;
  puStack_68 = &UNK_11084aaa8;
  ppuStack_58 = &puStack_b8;
  _objc_retain(puVar2);
  puStack_60 = puVar2;
  _objc_retain(&puStack_b8);
  _dispatch_source_set_event_handler(puVar2,&puStack_80);
  _dispatch_resume(puVar2);
  puVar1 = puStack_60;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(ppuStack_58);
  _objc_release(puVar2);
  _objc_release(&puStack_b8);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(uStack_98);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 107de6958; end: 107de6993;  */

void FUN_107de6958(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bddb6e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de6994; end: 107de699b; -[SCOperaNetworkSnapshotTracker stopTracking] */

void FUN_107de6994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopTrackingForStall__112673568,0);
  return;
}



/* Entry: 107de699c; end: 107de69ff; -[SCOperaNetworkSnapshotTracker stopTrackingForStall:] */

void FUN_107de699c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 107de6a00; end: 107de6ac3; -[SCOperaNetworkSnapshotTracker _captureNetworkSnapshot:] */

void FUN_107de6a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107de6ac4; end: 107de6b9f;  */

void FUN_107de6ac4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _os_unfair_lock_lock(param_2 + 0x28);
    if (*(long *)(param_2 + 0x10) != 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = param_3;
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bd55f40();
      dVar3 = param_1;
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x48));
      func_0x00010c0df720(param_1 - dVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(undefined **)(param_2 + 0x50) = puVar2;
      _objc_release(uVar1);
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
    }
    _os_unfair_lock_unlock(param_2 + 0x28);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de6ba0; end: 107de6ba7; -[SCOperaNetworkSnapshotTracker networkSnapshotThresholdMs] */

undefined8 FUN_107de6ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107de6ba8; end: 107de6baf; -[SCOperaNetworkSnapshotTracker snapshotCounter] */

undefined8 FUN_107de6ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107de6bb0; end: 107de6bb7; -[SCOperaNetworkSnapshotTracker lastNetworkSnapshot] */

undefined8 FUN_107de6bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107de6bb8; end: 107de6bbf; -[SCOperaNetworkSnapshotTracker requestedTimestampMs] */

undefined8 FUN_107de6bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107de6bc0; end: 107de6bc7; -[SCOperaNetworkSnapshotTracker capturedDurationMs] */

undefined8 FUN_107de6bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107de6bc8; end: 107de6c33; -[SCOperaNetworkSnapshotTracker .cxx_destruct] */

void FUN_107de6bc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107de6c34; end: 107de6d2f; -[SCOperaPlayerLegacyObserver initWithKvoController:notificationCenter:listener:grapheneRegistry:skipLoadedTimeRangesObservationInProd:] */

undefined1 *
FUN_107de6c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126fb328;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107de6d30; end: 107de6d7f; -[SCOperaPlayerLegacyObserver observePlayer:] */

void FUN_107de6d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be66a20(param_1,param_2,param_3);
  func_0x00010be66a40(param_1,param_2,param_3);
  func_0x00010be66a00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de6d80; end: 107de6dc3; -[SCOperaPlayerLegacyObserver observePlayerItem:] */

void FUN_107de6d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be669e0(param_1,param_2,param_3);
  func_0x00010be669a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de6dc4; end: 107de6e4b; -[SCOperaPlayerLegacyObserver unobservePlayer:] */

void FUN_107de6dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5f0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80(uVar2);
  _objc_release(uVar1);
  func_0x00010c281a80(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c12d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObserver_name_object__112628f90,param_1,
             *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0,0);
  return;
}



/* Entry: 107de6e4c; end: 107de7013; -[SCOperaPlayerLegacyObserver _observePlayerItemStatus:] */

void FUN_107de6e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_opt_class(param_3);
  func_0x00010c14cfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(undefined1 *)(param_1 + 0x20) = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107de7014;
  puStack_68 = &UNK_110a0d350;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010befa280(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107de7014; end: 107de713f;  */

void FUN_107de7014(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_107de7120;
    }
    uVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(uVar1);
    func_0x00010be6abe0();
  }
  _objc_release(uVar1);
LAB_107de7120:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de7140; end: 107de71c3;  */

void FUN_107de7140(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be6abc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de71c4; end: 107de74b7; -[SCOperaPlayerLegacyObserver _observePlayerItemLoadControlProperties:] */

void FUN_107de71c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [128];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class(param_3);
  func_0x00010c14cfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_98 = puVar2;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_90 = puVar11;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar2);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010c066b00(puVar5);
  }
  _objc_initWeak(auStack_120,param_1);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(puVar5);
  puVar9 = &uStack_160;
  puVar10 = auStack_118;
  puVar2 = puVar5;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar13 = *plStack_150;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_150 != lVar13) {
          _objc_enumerationMutation(puVar5);
        }
        uVar12 = *(undefined8 *)(param_1 + 8);
        _objc_retain(puVar1);
        _objc_copyWeak(auStack_168,auStack_120);
        func_0x00010c0e0780(uVar12);
        _objc_destroyWeak(auStack_168);
        _objc_release(puVar1);
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar9 = &uStack_160;
      puVar10 = auStack_118;
      puVar2 = puVar5;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_120);
  __Unwind_Resume(param_3);
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar6 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar6 == puVar7) {
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  else {
    if (puVar7 == (undefined1 *)0x0) {
      _objc_release();
      _objc_release(puVar6);
    }
    else {
      puVar8 = puVar6;
      func_0x00010c071ae0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (((ulong)puVar8 & 1) != 0) goto LAB_107de75dc;
    }
    _objc_opt_class(puVar9);
    func_0x00010c14cfa0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = (undefined1 *)(param_3 + 0x30);
    _objc_loadWeakRetained(puVar6);
    func_0x00010be6aba0();
  }
  _objc_release(puVar6);
LAB_107de75dc:
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107de74b8; end: 107de75fb;  */

void FUN_107de74b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_107de75dc;
    }
    _objc_opt_class(param_3);
    func_0x00010c14cfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(uVar1);
    func_0x00010be6aba0();
  }
  _objc_release(uVar1);
LAB_107de75dc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de75fc; end: 107de7703; -[SCOperaPlayerLegacyObserver _observePlayerStatus:] */

void FUN_107de75fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107de7704; end: 107de7787;  */

void FUN_107de7704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c252d60(param_3);
  uVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ac20(param_1,param_2,param_3,uVar1,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de7788; end: 107de78c7; -[SCOperaPlayerLegacyObserver _observePlayerTimeControlStatus:] */

void FUN_107de7788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107de78c8; end: 107de79d7;  */

void FUN_107de78c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c067ec0(uVar1);
  _objc_release(uVar1);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be90060();
  _objc_release(param_3);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ac40(lVar3,param_2,param_1,(long)(int)uVar4,(long)(int)uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107de79d8; end: 107de7b17; -[SCOperaPlayerLegacyObserver _observePlayerRate:] */

void FUN_107de79d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107de7b18; end: 107de7bf7;  */

void FUN_107de7b18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  uVar3 = param_1;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfb2c80(uVar1);
  _objc_release(uVar1);
  lVar2 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010be6ac00(param_1,uVar3,lVar2,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107de7bf8; end: 107de7cdb; -[SCOperaPlayerLegacyObserver _onPlayerRateChanged:oldRate:newRate:] */

void FUN_107de7bf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_5);
  _objc_opt_class(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df740(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  puVar2 = auStack_48;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c100e60(param_1,param_2,param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107de7cdc; end: 107de7d7b; -[SCOperaPlayerLegacyObserver _onPlayerTimeControlStatusChanged:oldStatus:newStatus:] */

void FUN_107de7cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_opt_class(param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puVar1 = auStack_38;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c100f60(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107de7d7c; end: 107de7e47; -[SCOperaPlayerLegacyObserver _onPlayerStatusChanged:status:error:] */

void FUN_107de7d7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_5);
  if (param_4 == 2) {
    func_0x00010be6abc0(param_1);
  }
  else if (param_4 == 1) {
    _objc_opt_class(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    puVar1 = auStack_38;
    _objc_loadWeakRetained(puVar1);
    func_0x00010c1008c0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107de7e48; end: 107de8043; -[SCOperaPlayerLegacyObserver _onPlayerItemStatusChanged:change:] */

void FUN_107de7e48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x23;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_3);
  func_0x00010c14cfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  func_0x00010c252d60();
  if (lVar1 == 1) {
    _objc_opt_class(param_3);
    func_0x00010c14cfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010befa240(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    lVar1 = param_3;
    func_0x00010c252d60();
    if (lVar1 == 2) {
      _objc_opt_class(param_3);
      lVar1 = param_3;
      func_0x00010bf98d20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        unaff_x23 = param_3;
        func_0x00010bf987e0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c14cfa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        _objc_release(unaff_x23);
      }
      _objc_release(lVar1);
    }
  }
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar2);
  _objc_opt_class(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107de8044;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  lStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107de8044; end: 107de807b;  */

void FUN_107de8044(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c100b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de807c; end: 107de80cb; -[SCOperaPlayerLegacyObserver _onPlayerBufferStatusChanged:] */

void FUN_107de807c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de80cc; end: 107de810f; -[SCOperaPlayerLegacyObserver _onPlayerItemDidReachEnd] */

void FUN_107de80cc(long param_1)

{
  _objc_opt_class();
  *(undefined1 *)(param_1 + 0x20) = 1;
  func_0x00010be90040(param_1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de8110; end: 107de82c3; -[SCOperaPlayerLegacyObserver _onPlayerItemLoadedTimeRangesChanged:] */

void FUN_107de8110(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class(param_3);
  lVar1 = param_3;
  func_0x00010c09ca60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c14cfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010c09ca60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &uStack_120;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        if (*(long *)(lStack_118 + lVar5 * 8) == 0) {
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_150);
        }
        _objc_opt_class(param_3);
        uStack_168 = uStack_148;
        uStack_170 = uStack_150;
        uStack_160 = uStack_140;
        _CMTimeGetSeconds(&uStack_170);
        uStack_168 = uStack_130;
        uStack_170 = uStack_138;
        uStack_160 = uStack_128;
        _CMTimeGetSeconds(&uStack_170);
        func_0x00010c14cfa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      puVar3 = &uStack_120;
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,puVar3,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_opt_class(param_3);
  func_0x00010c09e4e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  func_0x00010c100900();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de82c4; end: 107de8337; -[SCOperaPlayerLegacyObserver _onPlayerError:failureType:] */

void FUN_107de82c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100900();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107de8338; end: 107de8413; -[SCOperaPlayerLegacyObserver _reportPlayerItemDidReachEndWithoutNotificationIfNeededFrom:] */

void FUN_107de8338(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26f180();
  if (((lVar1 == 1) && (lVar1 = param_3, func_0x00010c14d3a0(), (int)lVar1 != 0)) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    puVar2 = PTR_PTR_1126bcb98;
    func_0x00010c0cea40(PTR_PTR_1126bcb98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0ff420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de8414; end: 107de84b7; -[SCOperaPlayerLegacyObserver _reportPlayerItemDidReachEnd] */

void FUN_107de8414(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bcb98;
  func_0x00010c0cea40(PTR_PTR_1126bcb98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ff420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107de84b8; end: 107de84fb; -[SCOperaPlayerLegacyObserver .cxx_destruct] */

void FUN_107de84b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107de84fc; end: 107de85d7; +[SCOperaVideoCodecChecker playerItemShouldBlockDecode:configProvider:] */

bool FUN_107de84fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126ba150;
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = lVar3;
    func_0x00010c15a360(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1d640(puVar5,param_2,lVar2,lVar4,param_4);
    _objc_release(param_4);
    bVar1 = puVar5 != (undefined *)0x0;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 107de85d8; end: 107de8633; +[SCOperaVideoCodecChecker decodeKillSwitchEngaged:] */

uint FUN_107de85d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010bf66c00(PTR_PTR_1126ba150,param_2,param_3);
  if ((int)puVar1 == 0) {
    uVar2 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ba150;
    func_0x00010bf12420(PTR_PTR_1126ba150,param_2,param_3);
    uVar2 = (uint)puVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107de8634; end: 107de87b3; +[SCOperaVideoCodecChecker ngsmeSnapShouldBlockDecode:configProvider:] */

undefined8
FUN_107de8634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba150;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf66c00(puVar1);
  puVar2 = PTR_PTR_1126ba150;
  func_0x00010bf12420(PTR_PTR_1126ba150);
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x000109128244(param_3,puVar1,puVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107de87b4; end: 107de8b23;  */

void FUN_107de87b4(undefined8 param_1,undefined **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_180;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_3;
  _objc_retain();
  iVar12 = (int)uVar13;
  _objc_retain(param_3);
  ppuVar4 = param_2;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c297640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  ppuVar4 = param_2;
  func_0x00010beecca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf529e0();
  _objc_release(ppuVar6);
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar5 != (undefined **)0x0)) {
    ppuVar16 = (undefined **)PTR_PTR_1126d7e90;
    _objc_alloc();
    if (param_2 == (undefined **)0x0) {
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_130,param_2);
    }
    _CMTimeGetSeconds(&uStack_130);
    func_0x00010c02a180(0,param_1);
    puStack_180 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_98 = ppuVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_180 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar18 = 0.0;
    ppuVar6 = ppuVar4;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      ppuVar16 = (undefined **)0x0;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e81bf8;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar1 = ppuVar5;
      }
      dVar19 = 0.0;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          dVar17 = dVar18;
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(ppuVar6);
            dVar17 = dVar18;
          }
          ppuVar14 = *(undefined ***)((long)ppuVar15 * 8);
          ppuVar8 = ppuVar14;
          func_0x00010bdc2b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          uVar13 = param_3;
          FUN_107de6218();
          iVar12 = (int)uVar13;
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar1;
          if (ppuVar9 != (undefined **)0x0) {
            ppuVar2 = ppuVar9;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar9);
          func_0x00010bf8b4a0(ppuVar14);
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          dVar19 = dVar19 + dVar17;
          ppuVar9 = ppuVar16;
          func_0x00010c0720c0();
          dVar18 = dVar17;
          if (((ulong)ppuVar9 & 1) == 0) {
            _objc_retain(ppuVar2);
            _objc_release(ppuVar16);
            puVar10 = PTR_PTR_1126d7e90;
            _objc_alloc(PTR_PTR_1126d7e90);
            dVar18 = dVar19 * 1000.0;
            func_0x00010c1002e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f3c0();
            func_0x00010c02a180(dVar18,dVar17 * 1000.0,puVar10);
            _objc_release(ppuVar14);
            func_0x00010befa120(puStack_180);
            _objc_release(puVar10);
            ppuVar16 = ppuVar2;
          }
          _objc_release(ppuVar2);
          _objc_release(ppuVar8);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar7 != ppuVar15);
        ppuVar7 = ppuVar6;
        func_0x00010bf52a60();
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar16);
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain();
    puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_new();
    if (param_2 != (undefined **)0x0) {
      ppuVar4 = param_2;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      if (iVar12 != 0) {
        func_0x00010bf3ec40();
      }
      func_0x00010bf06ba0(puVar10);
      _objc_release(ppuVar4);
    }
    puVar11 = puVar10;
    func_0x00010c08fa60();
    if (puVar11 == (undefined *)0x0) {
      puStack_180 = (undefined *)0x0;
    }
    else {
      puStack_180 = puVar10;
      func_0x00010bf51e00(puVar10);
    }
    _objc_release(puVar10);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_180);
  return;
}



/* Entry: 107de8b24; end: 107de8c67;  */

void FUN_107de8b24(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      func_0x00010bf3ec40();
    }
    func_0x00010bf06ba0(puVar1);
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107de8c68; end: 107de8e37;  */

void FUN_107de8c68(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
    _objc_opt_class(PTR__OBJC_CLASS___AVComposition_1126cfa20);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar6 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar6 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      uVar6 = uVar2;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x00010c1585e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c247d80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        goto LAB_107de8df8;
      }
    }
    uVar6 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar6 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    if (uVar2 == 0) {
      uVar6 = 0;
      uVar2 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010bdc2b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
LAB_107de8df8:
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107de8e38; end: 107de8f3f;  */

undefined1  [16] FUN_107de8e38(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  long lStack_48;
  
  _objc_retain();
  lStack_48 = 0;
  lVar1 = param_3;
  func_0x00010c2533c0(param_3,param_4,&PTR____CFConstantStringClassReference_110e3c5d8,&lStack_48);
  if (lStack_48 == 0 && lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c279200(param_3,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c0d5d20(lVar2);
    if (lVar2 == 0) {
      dStack_80 = 0.0;
      dStack_78 = 0.0;
      dStack_70 = 0.0;
      dStack_68 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_80,lVar2);
    }
    dStack_90 = dStack_70 * param_2 + dStack_80 * param_1;
    dStack_88 = dStack_68 * param_2 + dStack_78 * param_1;
    _objc_release(lVar2);
  }
  else {
    dStack_88 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dStack_90 = *(double *)PTR__CGSizeZero_110347620;
  }
  _objc_release(dStack_90,param_3);
  auVar3._8_8_ = dStack_88;
  auVar3._0_8_ = dStack_90;
  return auVar3;
}



/* Entry: 107de8f40; end: 107de900f;  */

undefined ** FUN_107de8f40(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x000107de8bec();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f616b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebf378);
      if ((int)uVar1 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ebf1b8;
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110f616f8;
        _objc_retain(&PTR____CFConstantStringClassReference_110f616f8);
      }
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ebf198;
    }
  }
  _objc_release(param_1);
  ppuVar2 = ppuVar3;
  func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f616f8);
  _objc_release(ppuVar3);
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 107de9010; end: 107de90f7; -[SCOperaVideoStall initWithType:mediaTime:timeProvider:downloadBandwidth:bandwidthBps:hasVideoStartedPlaying:] */

undefined1 *
FUN_107de9010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  uVar3 = param_1;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fb330;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    func_0x00010b88c480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    func_0x00010bf5fd80(*(undefined8 *)((long)puVar1 + 0x20));
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    func_0x00010bd55f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    *(undefined1 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107de90f8; end: 107de911f; -[SCOperaVideoStall finish] */

void FUN_107de90f8(undefined8 param_1,long param_2)

{
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 107de9120; end: 107de912b; -[SCOperaVideoStall terminate] */

void FUN_107de9120(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}



/* Entry: 107de912c; end: 107de9163; -[SCOperaVideoStall reopen] */

void FUN_107de912c(double param_1,long param_2)

{
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  *(double *)(param_2 + 0x18) =
       *(double *)(param_2 + 0x18) + (param_1 - *(double *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 107de9164; end: 107de919b; -[SCOperaVideoStall isActive] */

bool FUN_107de9164(long param_1)

{
  double dVar1;
  
  dVar1 = ABS(*(double *)(param_1 + 0x10) + 0.0) * 2.220446049250313e-16;
  if (dVar1 <= 2.2250738585072014e-308) {
    dVar1 = 2.2250738585072014e-308;
  }
  return ABS(*(double *)(param_1 + 0x10)) < dVar1;
}



/* Entry: 107de919c; end: 107de9203; -[SCOperaVideoStall duration] */

double FUN_107de919c(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = ABS(dVar2);
  dVar4 = ABS(dVar2 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
    bVar1 = dVar3 < dVar4;
  }
  if (bVar1) {
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x20));
  }
  return (dVar2 - *(double *)(param_1 + 8)) - *(double *)(param_1 + 0x18);
}



/* Entry: 107de9204; end: 107de920b; -[SCOperaVideoStall type] */

undefined8 FUN_107de9204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107de920c; end: 107de9213; -[SCOperaVideoStall stallMediaTime] */

undefined8 FUN_107de920c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107de9214; end: 107de921b; -[SCOperaVideoStall downloadBandwidthClass] */

undefined8 FUN_107de9214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107de921c; end: 107de9223; -[SCOperaVideoStall absoluteTimestamp] */

undefined8 FUN_107de921c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107de9224; end: 107de922b; -[SCOperaVideoStall bandwidthBps] */

undefined8 FUN_107de9224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


