/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f295c0; end: 104f2968b; -[SCOurChatProfileCollectionViewCell _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f295c0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2778;
  uVar4 = *(ulong *)(param_1 + _DAT_1127172d0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar3 = uVar4;
    func_0x00010c272d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127172dc);
      func_0x00010beeecc0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar5);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2968c; end: 104f2979f; -[SCOurChatProfileCollectionViewCell _toggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2968c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_1127172e0;
  lVar3 = *(long *)(param_3 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b0d78;
    func_0x00010c2658e0(PTR_PTR_1126b0d78,param_4,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    func_0x00010c19f0e0(0,0,param_1,param_2,puVar1);
    _objc_initWeak(auStack_38,param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c211ae0(puVar1);
    uVar2 = *(undefined8 *)(param_3 + lVar4);
    *(undefined **)(param_3 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    lVar3 = *(long *)(param_3 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104f297a0; end: 104f297cb;  */

void FUN_104f297a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be321a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f297cc; end: 104f297df; -[SCOurChatProfileCollectionViewCell revertToggleToViewModelState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f297cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__syncToggleWithViewModel_animate_112590110,
             *(undefined8 *)(param_1 + _DAT_1127172d0),1);
  return;
}



/* Entry: 104f297e0; end: 104f298d3; -[SCOurChatProfileCollectionViewCell _syncToggleWithViewModel:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f297e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2778;
  _objc_opt_class(PTR_PTR_1126b2778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c272d20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    lVar6 = (long)_DAT_1127172e0;
    lVar5 = *(long *)(param_1 + lVar6);
    _objc_release();
    if (lVar5 != 0) {
      uVar3 = uVar1;
      func_0x00010c2711a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      uVar3 = uVar1;
      func_0x00010c272d20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1b2f40(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f298d4; end: 104f29a13; -[SCOurChatProfileCollectionViewCell _handleToggleAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f298d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b2778;
  uVar5 = *(ulong *)(param_1 + _DAT_1127172d0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if ((uVar1 != 0) && (lVar6 = (long)_DAT_1127172e0, *(long *)(param_1 + lVar6) != 0)) {
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010beeecc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c079040(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_1127172dc));
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f29a14; end: 104f29a4b; -[SCOurChatProfileCollectionViewCell _layoutGradientIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f29a14(long param_1)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_1127172d8));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127172e4),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104f29a4c; end: 104f29ab3; -[SCOurChatProfileCollectionViewCell gradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f29a4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127172e4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104f29ab4; end: 104f29ac3; -[SCOurChatProfileCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f29ab4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127172d0);
}



/* Entry: 104f29ac4; end: 104f29ad3; -[SCOurChatProfileCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f29ac4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127172dc);
}



/* Entry: 104f29ad4; end: 104f29b13; -[SCOurChatProfileCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f29ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127172dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f29b14; end: 104f29b23; -[SCOurChatProfileCollectionViewCell downloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f29b14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127172d4);
}



/* Entry: 104f29b24; end: 104f29b63; -[SCOurChatProfileCollectionViewCell setDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f29b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127172d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f29b64; end: 104f29be3; -[SCOurChatProfileCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f29b64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127172d4,0);
  _objc_storeStrong(param_1 + _DAT_1127172dc,0);
  _objc_storeStrong(param_1 + _DAT_1127172d0,0);
  _objc_storeStrong(param_1 + _DAT_1127172e0,0);
  _objc_storeStrong(param_1 + _DAT_1127172e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127172d8,0);
  return;
}



/* Entry: 104f29be4; end: 104f29ca3;  */

void FUN_104f29be4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6798;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db6798,
                      &PTR____CFConstantStringClassReference_110dbb1f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f29ca4; end: 104f29e1f; -[SCOurChatCollectionViewCellViewModel initWithTitle:subtext:actionModel:leadingAccessory:toggleValue:traitCollectionFetcher:groupingStyle:externalEdges:] */

undefined1 *
FUN_104f29ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e50d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f29e20; end: 104f29e43; -[SCOurChatCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_104f29e20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f29e44; end: 104f29eef; -[SCOurChatCollectionViewCellViewModel hash] */

undefined8 * FUN_104f29e44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  puVar5 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_104f2a008:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f2a014;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) && ((puVar5[7] == param_3[7] && (puVar5[8] == param_3[8])))) {
      lVar4 = puVar5[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar5[2];
        if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar5[3];
          if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = puVar5[4];
            if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = puVar5[5];
              if ((lVar4 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
                puVar6 = (undefined8 *)puVar5[6];
                puVar5 = (undefined8 *)param_3[6];
                if (puVar6 != puVar5) {
                  _objc_retainBlock();
                  func_0x00010c071ae0(puVar6);
                  _objc_release(puVar5);
                  goto LAB_104f2a014;
                }
                goto LAB_104f2a008;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f2a014:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f29ef0; end: 104f2a02f; -[SCOurChatCollectionViewCellViewModel isEqual:] */

long FUN_104f29ef0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f2a008:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f2a014;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x18);
          if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x20);
            if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x28);
              if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
              {
                lVar4 = *(long *)(param_1 + 0x30);
                lVar3 = *(long *)(param_3 + 0x30);
                if (lVar4 != lVar3) {
                  _objc_retainBlock();
                  func_0x00010c071ae0(lVar4);
                  _objc_release(lVar3);
                  goto LAB_104f2a014;
                }
                goto LAB_104f2a008;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_104f2a014:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104f2a030; end: 104f2a037; -[SCOurChatCollectionViewCellViewModel title] */

undefined8 FUN_104f2a030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f2a038; end: 104f2a03f; -[SCOurChatCollectionViewCellViewModel subtext] */

undefined8 FUN_104f2a038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f2a040; end: 104f2a047; -[SCOurChatCollectionViewCellViewModel actionModel] */

undefined8 FUN_104f2a040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f2a048; end: 104f2a04f; -[SCOurChatCollectionViewCellViewModel leadingAccessory] */

undefined8 FUN_104f2a048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f2a050; end: 104f2a057; -[SCOurChatCollectionViewCellViewModel toggleValue] */

undefined8 FUN_104f2a050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f2a058; end: 104f2a05f; -[SCOurChatCollectionViewCellViewModel traitCollectionFetcher] */

undefined8 FUN_104f2a058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f2a060; end: 104f2a067; -[SCOurChatCollectionViewCellViewModel groupingStyle] */

undefined8 FUN_104f2a060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f2a068; end: 104f2a06f; -[SCOurChatCollectionViewCellViewModel externalEdges] */

undefined8 FUN_104f2a068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f2a070; end: 104f2a0cf; -[SCOurChatCollectionViewCellViewModel .cxx_destruct] */

void FUN_104f2a070(long param_1)

{
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



/* Entry: 104f2a0d0; end: 104f2a13b; +[SCOurChatCellLeadingAccessory emojiWithIcon:] */

void FUN_104f2a0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2770;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a13c; end: 104f2a1a7; +[SCOurChatCellLeadingAccessory fillWithColor:] */

void FUN_104f2a13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2770;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a1a8; end: 104f2a20b; +[SCOurChatCellLeadingAccessory onDemandResourceWithImage:] */

void FUN_104f2a1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2770;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a20c; end: 104f2a267; +[SCOurChatCellLeadingAccessory sigIconWithIconType:] */

void FUN_104f2a20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2770;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a268; end: 104f2a28b; -[SCOurChatCellLeadingAccessory copyWithZone:] */

undefined8 FUN_104f2a268(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f2a28c; end: 104f2a313; -[SCOurChatCellLeadingAccessory hash] */

void FUN_104f2a28c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e50d8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2a314; end: 104f2a357; -[SCOurChatCellLeadingAccessory internalInit] */

void FUN_104f2a314(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e50d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2a358; end: 104f2a437; -[SCOurChatCellLeadingAccessory isEqual:] */

long FUN_104f2a358(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f2a410:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f2a41c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104f2a41c;
          }
          goto LAB_104f2a410;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f2a41c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f2a438; end: 104f2a527; -[SCOurChatCellLeadingAccessory matchOnDemandResource:fill:emoji:sigIcon:] */

void FUN_104f2a438(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_104f2a4f8;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104f2a4f8;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_104f2a4f8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_104f2a4f8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_104f2a4f8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f2a528; end: 104f2a563; -[SCOurChatCellLeadingAccessory .cxx_destruct] */

void FUN_104f2a528(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f2a564; end: 104f2a5c7; +[SCOurChatParticipantInfo friendWithSnapchatter:] */

void FUN_104f2a564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2738;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a5c8; end: 104f2a633; +[SCOurChatParticipantInfo groupWithGroupId:] */

void FUN_104f2a5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2738;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2a634; end: 104f2a657; -[SCOurChatParticipantInfo copyWithZone:] */

undefined8 FUN_104f2a634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f2a658; end: 104f2a6cf; -[SCOurChatParticipantInfo hash] */

void FUN_104f2a658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e50e0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2a6d0; end: 104f2a713; -[SCOurChatParticipantInfo internalInit] */

void FUN_104f2a6d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e50e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2a714; end: 104f2a7cb; -[SCOurChatParticipantInfo isEqual:] */

long FUN_104f2a714(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f2a7a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f2a7b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104f2a7b0;
        }
        goto LAB_104f2a7a4;
      }
    }
    lVar3 = 0;
  }
LAB_104f2a7b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f2a7cc; end: 104f2a84f; -[SCOurChatParticipantInfo matchFriend:group:] */

void FUN_104f2a7cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_104f2a834;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104f2a834;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_104f2a834:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f2a850; end: 104f2a87f; -[SCOurChatParticipantInfo .cxx_destruct] */

void FUN_104f2a850(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f2a880; end: 104f2a8f3; -[SCGrapheneChatDeepLinkMetric2 init] */

undefined1 * FUN_104f2a880(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e50e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f2a8f4; end: 104f2aa77;  */

undefined8 ** FUN_104f2a8f4(long param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x21;
  char *pcVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined8 **)0x0;
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    pcVar4 = "true";
    if (param_2 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar4);
    pcVar4 = "true";
    if (param_3 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(alStack_60,pcVar4);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    unaff_x21 = &uStack_98;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11085bc18,&uStack_98,param_4);
    ppuVar1 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc(ppuVar1);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        ppuVar1 = *(undefined8 ***)((long)alStack_60 + lVar2);
        __ZdlPv(ppuVar1);
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar2 = -0x30;
  pcVar4 = &cStack_49;
  do {
    if (*pcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
    }
    lVar2 = lVar2 + 0x18;
    pcVar4 = pcVar4 + -0x18;
  } while (lVar2 != 0);
  __Unwind_Resume(ppuVar1);
  return (undefined8 **)&PTR____CFConstantStringClassReference_110dbb298;
}



/* Entry: 104f2aa78; end: 104f2aa83; +[SCCGroupInvitePermissionComponent componentPath] */

undefined ** FUN_104f2aa78(void)

{
  return &PTR____CFConstantStringClassReference_110dbb298;
}



/* Entry: 104f2aa84; end: 104f2aab7; -[SCCGroupInvitePermissionComponent initWithViewModel:componentContext:runtime:] */

void FUN_104f2aa84(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e50f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104f2aab8; end: 104f2ab07; -[SCCGroupInvitePermissionComponent setViewModel:] */

void FUN_104f2aab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2ab08; end: 104f2ab4b; -[SCCGroupInvitePermissionComponent viewModel] */

void FUN_104f2ab08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f2ab4c; end: 104f2ab6f; -[SCCGroupInvitePermissionContext init] */

void FUN_104f2ab4c(void)

{
  func_0x000104f2abcc(PTR_PTR_1126e50f8);
  return;
}



/* Entry: 104f2ab70; end: 104f2ab8f; +[SCCGroupInvitePermissionContext valdiMarshallableObjectDescriptor] */

void FUN_104f2ab70(undefined8 *param_1)

{
  *param_1 = &PTR_s_joinTapActionHandler_11085bc88;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_11085bce8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2ab90; end: 104f2abb3; -[SCCGroupInvitePermissionViewModel init] */

void FUN_104f2ab90(void)

{
  func_0x000104f2abcc(PTR_PTR_1126e5100);
  return;
}



/* Entry: 104f2abb4; end: 104f2abdf; +[SCCGroupInvitePermissionViewModel valdiMarshallableObjectDescriptor] */

void FUN_104f2abb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_groupDisplayName_11085bcf8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2abe0; end: 104f2abeb; +[SCChatCommandMenuBarView componentPath] */

undefined ** FUN_104f2abe0(void)

{
  return &PTR____CFConstantStringClassReference_110dbb2b8;
}



/* Entry: 104f2abec; end: 104f2ac1f; -[SCChatCommandMenuBarView initWithViewModel:componentContext:runtime:] */

void FUN_104f2abec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5108;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104f2ac20; end: 104f2ac6f; -[SCChatCommandMenuBarView setViewModel:] */

void FUN_104f2ac20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2ac70; end: 104f2acb3; -[SCChatCommandMenuBarView viewModel] */

void FUN_104f2ac70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f2acb4; end: 104f2ad4f; -[SCCChatCommandType__Enum init] */

undefined * FUN_104f2acb4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = PTR_PTR_1130bc520;
  puStack_30 = PTR_PTR_1130bc528;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104f2aeec(PTR_PTR_1126e5110);
  return puVar1;
}



/* Entry: 104f2ad50; end: 104f2ad6f; -[SCChatCommand initWithType:label:] */

void FUN_104f2ad50(void)

{
  func_0x000104f2aeec(PTR_PTR_1126e5110);
  return;
}



/* Entry: 104f2ad70; end: 104f2ad83; +[SCChatCommand valdiMarshallableObjectDescriptor] */

void FUN_104f2ad70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11085bd70;
  param_1[1] = &PTR_s_SCCChatCommandType_11085bdb8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2ad84; end: 104f2adb7; -[SCChatCommandMenuBarContext init] */

void FUN_104f2ad84(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5118;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104f2adb8; end: 104f2adcb; +[SCChatCommandMenuBarContext valdiMarshallableObjectDescriptor] */

void FUN_104f2adb8(undefined8 *param_1)

{
  *param_1 = &PTR_s_userInputObservable_11085bdc8;
  param_1[1] = &PTR_s_SCBridgeObservable_11085be70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2adcc; end: 104f2adff; -[SCChatCommandRange initWithStart:end:] */

void FUN_104f2adcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5120;
  uStack_20 = param_1;
  func_0x000104f2af08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104f2ae00; end: 104f2ae0f; +[SCChatCommandRange valdiMarshallableObjectDescriptor] */

void FUN_104f2ae00(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_11085bea0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2ae10; end: 104f2ae47; -[SCChatCommandSearchResult initWithVisible:commands:range:recognizedCommands:] */

void FUN_104f2ae10(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5128;
  uStack_20 = param_1;
  func_0x000104f2af08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104f2ae48; end: 104f2ae5b; +[SCChatCommandSearchResult valdiMarshallableObjectDescriptor] */

void FUN_104f2ae48(undefined8 *param_1)

{
  *param_1 = &PTR_s_visible_11085bee8;
  param_1[1] = &PTR_s_SCChatCommand_11085bf60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2ae5c; end: 104f2ae7b; -[SCChatCommandToken initWithType:range:] */

void FUN_104f2ae5c(void)

{
  func_0x000104f2aeec(PTR_PTR_1126e5130);
  return;
}



/* Entry: 104f2ae7c; end: 104f2ae8f; +[SCChatCommandToken valdiMarshallableObjectDescriptor] */

void FUN_104f2ae7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11085bf80;
  param_1[1] = &PTR_s_SCCChatCommandType_11085bfc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2ae90; end: 104f2aecb; -[SCChatCommandUserInput initWithText:start:before:count:] */

void FUN_104f2ae90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5138;
  uStack_20 = param_1;
  func_0x000104f2af08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104f2aecc; end: 104f2af2b; +[SCChatCommandUserInput valdiMarshallableObjectDescriptor] */

void FUN_104f2aecc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_11085bfe0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f2af2c; end: 104f2af73; -[SCComposerChatMediaDownloader nativeConversationManager] */

void FUN_104f2af2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f2af74; end: 104f2afdf; -[SCComposerChatMediaDownloader supportedURLSchemes] */

void FUN_104f2af74(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dbb318;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)pppuVar1;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      func_0x00010c04e820();
      puVar4 = puVar3;
      func_0x000108543f0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar1);
      _objc_release(puVar3);
    }
    puVar3 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb398);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c067fc0();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b2790;
    _objc_alloc(PTR_PTR_1126b2790);
    puVar6 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb338);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb358);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb378);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb3b8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1f3c0();
    puVar11 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1f3c0();
    puVar13 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbb3f8);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf1f3c0();
    func_0x00010c005200(puVar3,param_2,puVar6,puVar7,puVar8,puVar10,puVar12,puVar5,(char)puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2afe0; end: 104f2b1f3; -[SCComposerChatMediaDownloader requestPayloadWithURL:error:] */

void FUN_104f2afe0(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar12;
  undefined *puVar13;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010c04e820();
    puVar3 = puVar2;
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  puVar2 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb398);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c067fc0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2790;
  _objc_alloc(PTR_PTR_1126b2790);
  puVar5 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb338);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb358);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb378);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb3b8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf1f3c0();
  puVar10 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb3d8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf1f3c0();
  puVar12 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbb3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf1f3c0();
  func_0x00010c005200(puVar2,param_2,puVar5,puVar6,puVar7,puVar9,puVar11,puVar4,(char)puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f2b1f4; end: 104f2b5db; -[SCComposerChatMediaDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_104f2b1f4(undefined **param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bStack_144;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined1 uStack_88;
  byte bStack_87;
  undefined1 uStack_86;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar10 = PTR_PTR_1126b2790;
  if (param_6 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar10);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c07ba20();
    uVar7 = uVar1;
    func_0x00010c063bc0();
    uVar2 = uVar1;
    func_0x00010bf88fc0();
    if (((uint)(uVar2 == 0) & (uint)uVar7) != 0) {
      uVar2 = 1;
    }
    if ((uint)uVar7 == 0) {
      bStack_144 = 0;
    }
    else {
      bStack_144 = (byte)param_1[4];
      func_0x00010c231e40();
      bStack_144 = bStack_144 ^ 1;
    }
    uVar7 = uVar1;
    func_0x00010c2a13a0();
    puVar10 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_initWeak(auStack_80,param_1);
    puVar8 = PTR_PTR_1126b27a0;
    _objc_alloc();
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    uStack_88 = (undefined1)uVar6;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(uVar5);
    bStack_87 = bStack_144;
    uStack_86 = (undefined1)uVar7;
    uStack_90 = uVar2;
    _objc_retain(param_6);
    _objc_retain(puVar10);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(param_6);
    func_0x00010c04f4c0(puVar8);
    puVar9 = PTR_PTR_1126b0cd8;
    uVar2 = uVar1;
    func_0x00010bf50280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (puVar9 == (undefined *)0x0) {
      param_1 = &PTR____CFConstantStringClassReference_110dbb438;
      func_0x000108543ce4(&PTR____CFConstantStringClassReference_110dbb438);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,param_1);
    }
    else {
      func_0x00010c0d58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0(uVar4);
      func_0x00010bfa89c0(param_1);
    }
    _objc_release(param_1);
    _objc_retain(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(param_6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(param_6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104f2b5dc; end: 104f2b67f;  */

void FUN_104f2b5dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be968e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bef7460(*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f2b680; end: 104f2b6cb;  */

void FUN_104f2b680(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb418;
  func_0x000108543ce4(&PTR____CFConstantStringClassReference_110dbb418);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104f2b6cc; end: 104f2b973; -[SCComposerChatMediaDownloader _retrieveMediaForQuotedMessage:conversationId:messageId:mediaId:loadFromCacheOnly:waitForSavedToCache:downloadSource:isQuoted:completion:] */

void FUN_104f2b6cc(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long in_stack_00000010;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000010);
  if (in_stack_00000010 == 0) {
    param_1 = 0;
    goto LAB_104f2b928;
  }
  ppuVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010c07ea80();
  if ((((int)ppuVar5 == 0) || (ppuVar5 = param_3, func_0x00010c0791c0(), ((ulong)ppuVar5 & 1) != 0))
     || (ppuVar5 = param_3, func_0x00010c07d180(), ((ulong)ppuVar5 & 1) != 0)) {
    lVar2 = param_6;
    func_0x00010c08fa60();
    ppuVar5 = param_3;
    if (lVar2 == 0) {
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0c5020();
      _objc_retainAutoreleasedReturnValue();
    }
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dbb478;
      func_0x000108543ce4(&PTR____CFConstantStringClassReference_110dbb478);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010,0,ppuVar5);
      _objc_release(ppuVar5);
      ppuVar5 = (undefined **)0x0;
      goto LAB_104f2b914;
    }
    ppuVar3 = ppuVar5;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010bf4df40(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x000107d60b58();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be96420(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
    }
    else {
      func_0x00010be96720(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dbb458;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110dbb458);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010,0,ppuVar5);
LAB_104f2b914:
    param_1 = 0;
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
LAB_104f2b928:
  _objc_release(in_stack_00000010);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104f2b974; end: 104f2bbaf; -[SCComposerChatMediaDownloader _retrieveCachedImageForMedia:conversationId:messageId:waitForSavedToCache:messageTypeString:downloadSource:isQuoted:completion:] */

void FUN_104f2b974(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar3 = (undefined *)0x0;
  if ((param_3 != 0) && (param_11 != 0)) {
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = param_6;
    _objc_retain(param_11);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    uStack_6f = param_9;
    uStack_78 = param_8;
    _objc_retain(puVar3);
    uVar2 = uVar1;
    func_0x00010c26de20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bef7460(puVar3);
    _objc_retain(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(param_11);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f2bbb0; end: 104f2bd07;  */

void FUN_104f2bbb0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
    puVar1 = PTR_PTR_1126b27a8;
  }
  else {
    func_0x0001070a5de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126b27a8;
  }
  PTR_PTR_1126b27a8 = puVar1;
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010beea4c0();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bfe9800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
    _objc_release(puVar1);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010be57ec0();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f2bd08; end: 104f2c183; -[SCComposerChatMediaDownloader _waitForLocalMediaToSaveInCache:conversationId:messageId:messageTypeString:downloadSource:isQuoted:cancelableGroup:completion:] */

void FUN_104f2bd08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b4c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_initWeak(auStack_80,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c09dc20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f2c184;
    puStack_90 = &UNK_110856a28;
    _objc_retain(param_3);
    uVar4 = uVar3;
    uStack_88 = param_3;
    func_0x00010bfad7a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_104f2c1ec;
    puStack_f0 = &UNK_11085c0e8;
    _objc_copyWeak(auStack_c0,auStack_80);
    _objc_retain(param_3);
    uStack_e8 = param_3;
    _objc_retain(param_4);
    uStack_e0 = param_4;
    _objc_retain(param_5);
    uStack_d8 = param_5;
    _objc_retain(param_6);
    uStack_d0 = param_6;
    uStack_b8 = param_7;
    uStack_b0 = param_8;
    _objc_retain(param_10);
    uStack_c8 = param_10;
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_104f2c24c;
    puStack_118 = &UNK_110842e18;
    _objc_retain(puVar5);
    uVar7 = uVar2;
    puStack_110 = puVar5;
    func_0x00010c25ff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_initWeak(auStack_138,puVar5);
    _objc_copyWeak(auStack_150,auStack_138);
    _objc_copyWeak(auStack_148,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_140 = param_8;
    func_0x00010bef7480(param_9);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_138);
    _objc_release(puStack_110);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be96420(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f2c184; end: 104f2c1eb;  */

undefined8 FUN_104f2c184(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104f2c1ec; end: 104f2c24b;  */

void FUN_104f2c1ec(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96420();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2c24c; end: 104f2c253;  */

void FUN_104f2c24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 104f2c254; end: 104f2c2c7;  */

void FUN_104f2c254(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf86d80();
    _objc_release(lVar1);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be55740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f2c2c8; end: 104f2c4b7; -[SCComposerChatMediaDownloader _retrieveImageForMedia:conversationId:messageId:messageContents:loadFromCacheOnly:downloadSource:isQuoted:completion:] */

void FUN_104f2c2c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  uVar2 = 0;
  if ((param_3 != 0) && (param_11 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_11);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_70 = param_9;
    uVar2 = uVar1;
    func_0x00010c125c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_11);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f2c4b8; end: 104f2c60f;  */

void FUN_104f2c4b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x0001070a5de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_3);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9800(PTR_PTR_1126b27a8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1,puVar3);
  _objc_release(puVar1);
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107d60b58(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57ec0(lVar4);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f2c610; end: 104f2c69f; -[SCComposerChatMediaDownloader _logRetrieveForMedia:conversationId:messageId:messageTypeString:isQuoted:error:] */

void FUN_104f2c610(long param_1)

{
  bool bVar1;
  undefined8 in_x5;
  long in_x7;
  undefined8 uVar2;
  
  bVar1 = in_x7 == 0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(in_x5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5de0(in_x7);
  _objc_retainAutoreleasedReturnValue();
  FUN_104f2cb98(uVar2,in_x7,in_x5,bVar1,1);
  _objc_release(in_x5);
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f2c6a0; end: 104f2c6f3; -[SCComposerChatMediaDownloader _logLocalCacheMissForMedia:conversationId:messageId:messageTypeString:isQuoted:] */

void FUN_104f2c6a0(long param_1)

{
  undefined8 in_x5;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(in_x5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104f2ce0c();
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f2c6f4; end: 104f2c75f; -[SCComposerChatMediaDownloader .cxx_destruct] */

void FUN_104f2c6f4(long param_1)

{
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



/* Entry: 104f2c760; end: 104f2c77b;  */

void FUN_104f2c760(void)

{
  _objc_opt_new(PTR_PTR_1126b27b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f2c77c; end: 104f2c7e3; -[SCComposerChatMediaDownloaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2c77c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717358);
  _objc_destroyWeak(param_1 + _DAT_11271734c);
  _objc_destroyWeak(param_1 + _DAT_112717354);
  _objc_destroyWeak(param_1 + _DAT_112717350);
  _objc_destroyWeak(param_1 + _DAT_112717348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271735c);
  return;
}



/* Entry: 104f2c7e4; end: 104f2c8eb; -[SCComposerChatMediaDownloaderRequestPayload initWithConversationId:messageId:mediaId:initialAutoload:waitForSavedToCache:downloadSource:isQuoted:] */

undefined1 *
FUN_104f2c7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e5148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2c8ec; end: 104f2c90f; -[SCComposerChatMediaDownloaderRequestPayload copyWithZone:] */

undefined8 FUN_104f2c8ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f2c910; end: 104f2c9af; -[SCComposerChatMediaDownloaderRequestPayload hash] */

undefined8 * FUN_104f2c910(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104f2ca88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104f2ca94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(char *)((long)puVar3 + 10) == param_3[10])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104f2ca94;
          }
          goto LAB_104f2ca88;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104f2ca94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104f2c9b0; end: 104f2caaf; -[SCComposerChatMediaDownloaderRequestPayload isEqual:] */

long FUN_104f2c9b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f2ca88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f2ca94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104f2ca94;
          }
          goto LAB_104f2ca88;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f2ca94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f2cab0; end: 104f2cab7; -[SCComposerChatMediaDownloaderRequestPayload conversationId] */

undefined8 FUN_104f2cab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f2cab8; end: 104f2cabf; -[SCComposerChatMediaDownloaderRequestPayload messageId] */

undefined8 FUN_104f2cab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


