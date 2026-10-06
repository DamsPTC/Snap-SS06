/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b08eaa0; end: 10b08eab3; -[SCDeckDefaultComposerViewController backgroundExitBehavior] */

void FUN_10b08eaa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 10b08eab4; end: 10b08ed07; -[SCDeckDefaultComposerViewController _sanitizePresentationBackgrounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08eab4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010c10f380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + _DAT_11278c3d8) == '\x01') {
      lVar3 = lVar1;
      func_0x00010c10f920(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar3);
      _objc_release(puVar4);
      func_0x00010c1d4c20(lVar3);
      lVar5 = lVar3;
      func_0x00010c08c0e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar5);
      lVar5 = lVar3;
      func_0x00010c08c0e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b08ed08;
    puStack_50 = &UNK_1108de198;
    ppuVar6 = &puStack_68;
    lStack_48 = param_1;
    _objc_retainBlock();
    (*(code *)ppuVar6[2])();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c262ca0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b08ef70();
      _objc_release(lVar3);
    }
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b08ef70();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(lVar5);
        _objc_release(puVar4);
        func_0x00010c1d4c20(lVar5);
      }
      _objc_release(lVar5);
    }
    _objc_release(param_1);
    _objc_release(ppuVar6);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b08ed08; end: 10b08ef6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08ed08(undefined *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if (param_2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      do {
        puVar4 = puVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cd60(puVar3);
        puVar5 = puVar4;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110f590d8;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f590d8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf4bb00();
        _objc_release(ppuVar6);
        if ((int)puVar7 != 0) {
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(puVar4);
          _objc_release(puVar7);
          func_0x00010c1d4c20(puVar4);
          if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278c3d8) == '\x01') {
            puVar7 = puVar4;
            func_0x00010c08c0e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16e440();
            _objc_release(puVar7);
            puVar7 = puVar4;
            func_0x00010c08c0e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fe740();
            _objc_release(puVar7);
          }
        }
        puVar8 = puVar4;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar7 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar8);
            }
            func_0x00010befa120(puVar3);
            puVar11 = puVar11 + 1;
          } while (puVar7 != puVar11);
          puVar7 = puVar8;
          func_0x00010bf52a60();
        }
        _objc_release(puVar8);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010bf529e0();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar3);
  if (puVar3 != (undefined *)0x0) {
    uVar10 = 0;
    puVar4 = puVar3;
    do {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4);
      _objc_release(puVar5);
      func_0x00010c1d4c20(puVar4);
      puVar5 = puVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) break;
      bVar2 = uVar10 < 9;
      uVar10 = uVar10 + 1;
      puVar4 = puVar5;
    } while (bVar2);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b08ef70; end: 10b08f027;  */

void FUN_10b08ef70(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_1);
  if (param_1 != 0) {
    uVar5 = 0;
    lVar4 = param_1;
    do {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar4,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1d4c20(lVar4,param_2,0);
      lVar3 = lVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar3 == 0) break;
      bVar1 = uVar5 < 9;
      uVar5 = uVar5 + 1;
      lVar4 = lVar3;
    } while (bVar1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b08f028; end: 10b08f047; -[SCDeckDefaultComposerViewController deckUIKitLifecycleObservingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08f028(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b08f048; end: 10b08f05b; -[SCDeckDefaultComposerViewController setDeckUIKitLifecycleObservingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08f048(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278c3e8,param_3);
  return;
}



/* Entry: 10b08f05c; end: 10b08f06b; -[SCDeckDefaultComposerViewController page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b08f05c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278c3dc);
}



/* Entry: 10b08f06c; end: 10b08f07b; -[SCDeckDefaultComposerViewController pageInstanceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b08f06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c3e4);
}



/* Entry: 10b08f07c; end: 10b08f08b; -[SCDeckDefaultComposerViewController shouldRemovePageSheetBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b08f07c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c3d8);
}



/* Entry: 10b08f08c; end: 10b08f09b; -[SCDeckDefaultComposerViewController setShouldRemovePageSheetBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08f08c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278c3d8) = param_3;
  return;
}



/* Entry: 10b08f09c; end: 10b08f0d7; -[SCDeckDefaultComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08f09c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c3e4,0);
  return;
}



/* Entry: 10b08f0d8; end: 10b08f14b; -[SCDeckComposerConverter initWithDeckHierarchyFactory:] */

undefined1 * FUN_10b08f0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127054f0;
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



/* Entry: 10b08f14c; end: 10b08f1c7; -[SCDeckComposerConverter platformFactoryFrom:] */

void FUN_10b08f14c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126df538;
  _objc_opt_class(PTR_PTR_1126df538);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c0fe240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b08f1c8; end: 10b08f297; -[SCDeckComposerConverter composerTransitionEventObservableFrom:] */

void FUN_10b08f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b08f298; end: 10b08f443;  */

void FUN_10b08f298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10b08f444;
  uStack_70 = 0x10b08f454;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10b08f45c;
  puStack_d0 = &UNK_110cb6610;
  puStack_a8 = &uStack_b0;
  puStack_88 = puStack_c8;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  puStack_c0 = &uStack_b0;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  puVar1 = PTR_PTR_1126df558;
  _objc_alloc(PTR_PTR_1126df558);
  func_0x00010c008520();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08f444; end: 10b08f45b;  */

void FUN_10b08f444(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b08f45c; end: 10b08f55f;  */

void FUN_10b08f45c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bde3cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10b08f560; end: 10b08f5bb; -[SCDeckComposerConverter createConverterWith:] */

void FUN_10b08f560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df588;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08f5bc; end: 10b08f6cb; -[SCDeckComposerConverter _composerDataFromPlatformData:] */

void FUN_10b08f5bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9a440(param_3);
  puVar2 = PTR_PTR_1126df560;
  _objc_alloc(PTR_PTR_1126df560);
  lVar3 = param_3;
  func_0x00010bf06840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf034a0();
  func_0x00010bff2e00(puVar2,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0f1360();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126df568;
  _objc_alloc(PTR_PTR_1126df568);
  lVar4 = param_3;
  func_0x00010c110220(param_3);
  lVar6 = param_3;
  func_0x00010c0d8d80(param_3);
  _objc_release(param_3);
  func_0x00010c0395e0((double)(int)lVar4,(double)(int)lVar6,puVar5,param_2,lVar1 == 1,puVar2);
  if (lVar3 != 0) {
    func_0x00010c1d82e0(puVar5,param_2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b08f6cc; end: 10b08f6d7; -[SCDeckComposerConverter .cxx_destruct] */

void FUN_10b08f6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08f6d8; end: 10b08f7a7; -[SCDeckHierarchyContainerFactory initWithNonPrimaryRootContainer:] */

undefined1 * FUN_10b08f6d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127054f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126df590;
  if (puVar2 != (undefined8 *)0x0) {
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
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(ulong *)((long)puVar2 + 0x10) = uVar1;
    _objc_retain(uVar1);
    _objc_release(uVar5);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10b08f7a8; end: 10b08f823; -[SCDeckHierarchyContainerFactory modalContainerWithConfig:] */

void FUN_10b08f7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08f824; end: 10b08f89f; -[SCDeckHierarchyContainerFactory operaDeckContainerWithConfig:] */

void FUN_10b08f824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ea300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08f8a0; end: 10b08f91b; -[SCDeckHierarchyContainerFactory navigationContainerWithConfig:] */

void FUN_10b08f8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08f91c; end: 10b08f997; -[SCDeckHierarchyContainerFactory tabBarContainerBuilderWithConfig:] */

void FUN_10b08f91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c267500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08f998; end: 10b08f9ff; -[SCDeckHierarchyContainerFactory modalUIContainerWithAnimated:] */

void FUN_10b08f998(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08fa00; end: 10b08fa67; -[SCDeckHierarchyContainerFactory multiDirectionalUIContainerWithAnimated:] */

void FUN_10b08fa00(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d1da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b08fa68; end: 10b08fa93; -[SCDeckHierarchyContainerFactory .cxx_destruct] */

void FUN_10b08fa68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b08fa94; end: 10b08fb37; -[SCDeckHierarchyFactoryImpl initWithCurrentPageTracker:circumstanceEngine:] */

undefined1 *
FUN_10b08fa94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08fb38; end: 10b08fb4b; -[SCDeckHierarchyFactoryImpl createDeckHierarchyWithParentVC:] */

void FUN_10b08fb38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0daed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df598,PTR_s_nonPrimaryDeckHierarchyWithParen_1126145c8,param_3,
             *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b08fb4c; end: 10b08fb5f; -[SCDeckHierarchyFactoryImpl createDeckHierarchyWithParentVC:initialPage:] */

void FUN_10b08fb4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0daef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df598,PTR_s_nonPrimaryDeckHierarchyWithParen_1126145d0,param_3,param_4,
             *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b08fb60; end: 10b08fb8f; -[SCDeckHierarchyFactoryImpl .cxx_destruct] */

void FUN_10b08fb60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08fb90; end: 10b08fc17; +[SCDeckHierarchyImpl nonPrimaryDeckHierarchyWithParentVC:currentPageTracker:circumstanceEngine:] */

void FUN_10b08fb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033d20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08fc18; end: 10b08fcab; +[SCDeckHierarchyImpl nonPrimaryDeckHierarchyWithParentVC:initialPage:currentPageTracker:circumstanceEngine:] */

void FUN_10b08fc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df598;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033d20();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08fcac; end: 10b08fe1f; -[SCDeckHierarchyImpl initWithParentVC:initialPage:currentPageTracker:circumstanceEngine:] */

undefined1 *
FUN_10b08fcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126df5a0;
    _objc_alloc();
    func_0x00010bff72e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),*(undefined8 *)((long)puVar1 + 0x28));
    puVar3 = PTR_PTR_1126df5a8;
    _objc_alloc();
    puVar4 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_loadWeakRetained(puVar4);
    func_0x00010c02fa80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08fe20; end: 10b08fe47; -[SCDeckHierarchyImpl deckContainerFactory] */

void FUN_10b08fe20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b08fe48; end: 10b08fe6f; -[SCDeckHierarchyImpl circumstanceEngine] */

void FUN_10b08fe48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b08fe70; end: 10b08fecb; -[SCDeckHierarchyImpl createComposerDeckHierarchyWithRuntimeProvider:] */

void FUN_10b08fe70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c036a80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08fecc; end: 10b08ff33; -[SCDeckHierarchyImpl .cxx_destruct] */

void FUN_10b08fecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08ff34; end: 10b08ff43; -[SCDeckRootContainerProvider releaseRootContainerOnLogout] */

void FUN_10b08ff34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b08ff44; end: 10b08ff73; -[SCDeckRootContainerProvider .cxx_destruct] */

void FUN_10b08ff44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08ff74; end: 10b090017; -[SCNavigatorToDeckContainerConverter initWithRuntimeProvider:deckHierarcyFactory:] */

undefined1 *
FUN_10b08ff74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705518;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b090018; end: 10b090157; -[SCNavigatorToDeckContainerConverter createDeckContainerFactoryWithNavigator:] */

void FUN_10b090018(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126afe50;
  _objc_opt_class(PTR_PTR_1126afe50);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0b8200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf55bc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c141520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_setAssociatedObject(param_3,&PTR____CFConstantStringClassReference_110f59118,uVar5,1);
    uVar4 = uVar5;
    func_0x00010bf55380(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b090158; end: 10b090253; -[SCNavigatorToDeckContainerConverter createNavigatorWithModalContainer:] */

void FUN_10b090158(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126df540;
  _objc_opt_class(PTR_PTR_1126df540);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afe50;
    _objc_alloc(PTR_PTR_1126afe50);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040b80(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c29c100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1bc0(puVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b090254; end: 10b090283; -[SCNavigatorToDeckContainerConverter .cxx_destruct] */

void FUN_10b090254(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b090284; end: 10b0902d7; -[SCDeckCurrentPageTrackerNotifier .cxx_destruct] */

void FUN_10b090284(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0902d8; end: 10b0902fb; -[SCDeckContainerBase initWithPresenter:parentContainer:appearanceStyle:disappearanceStyle:page:deckContainersSharedService:] */

void FUN_10b0902d8(void)

{
  func_0x00010c038ac0();
  return;
}



/* Entry: 10b0902fc; end: 10b090553; -[SCDeckContainerBase subtreeDebugDescription:last:startingFrom:] */

void FUN_10b0902fc(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  _objc_retain(param_5);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c25cf00(&PTR____CFConstantStringClassReference_110daafd8,param_2,param_3 << 1,
                      &PTR____CFConstantStringClassReference_110db2d98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f59138;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f59158;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2d98;
  if (param_3 != 0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e15a38);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f591b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  func_0x00010bf431c0(*(undefined8 *)(param_1 + 8));
  lVar9 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    uVar12 = 0;
    do {
      lVar9 = *(long *)(param_1 + 8);
      func_0x00010c102e00(lVar9,param_2,uVar12);
      if (lVar9 != 0) {
        lVar13 = *(long *)(param_1 + 8);
        _objc_retain();
        func_0x00010bf529e0(lVar13);
        lVar10 = lVar9;
        func_0x00010c2613c0(lVar9,param_2,param_3 + 1,uVar12 == lVar13 - 1U,param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        func_0x00010bf070e0(puVar8,param_2,lVar10);
        _objc_release(lVar10);
      }
      uVar12 = uVar12 + 1;
      uVar11 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar12 < uVar11);
  }
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b090554; end: 10b0905df; -[SCDeckContainerBase hierarchyRoot] */

void FUN_10b090554(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0f3b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0905e0; end: 10b090657; -[SCDeckContainerBase branch] */

void FUN_10b0905e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_1);
  while (param_1 != 0) {
    func_0x00010c066b00(puVar1,param_2,param_1,0);
    lVar2 = param_1;
    func_0x00010c0f3b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b090658; end: 10b0906eb; -[SCDeckContainerBase activateWithAnimation:completion:] */

void FUN_10b090658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  func_0x00010bf668e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10fa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8d00(uVar2,param_2,param_1,lVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0906ec; end: 10b090787; -[SCDeckContainerBase activateInteractivelyWithCompletion:] */

void FUN_10b0906ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010bf668e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10fa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0f8ce0(uVar3,param_2,param_1,lVar1,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b090788; end: 10b09083f; -[SCDeckContainerBase activateInteractivelyWithCompletion:customDismissalStyle:] */

void FUN_10b090788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf668e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10fa00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0f8ce0(uVar3,param_2,param_1,lVar1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b090840; end: 10b090927; -[SCDeckContainerBase activateWithViewController:animation:completion:otherwise:] */

void FUN_10b090840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf8720(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c18a2e0(lVar1,param_2,param_1);
    }
    lVar2 = param_1;
    func_0x00010c0f3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dba0(param_3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c223d20(param_1,param_2,param_3);
    func_0x00010beeff40(param_1,param_2,param_4,param_5);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090928; end: 10b090a43; -[SCDeckContainerBase activateInteractivelyWithViewController:completion:otherwise:] */

void FUN_10b090928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if (param_5 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_5;
      (**(code **)(param_5 + 0x10))(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf8720(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c18a2e0(lVar1,param_2,param_1);
    }
    lVar2 = param_1;
    func_0x00010c0f3b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dba0(param_3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c223d20(param_1,param_2,param_3);
    func_0x00010beefc80(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b090a44; end: 10b090a4b; -[SCDeckContainerBase canLoadVisibleViewController] */

undefined8 FUN_10b090a44(void)

{
  return 1;
}



/* Entry: 10b090a4c; end: 10b090aa7; -[SCDeckContainerBase createComposerDeckContainerWithRuntimeProvider:] */

void FUN_10b090a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df5c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c036a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b090aa8; end: 10b090b53; -[SCDeckContainerBase activateChildInteractively:withCompletion:style:] */

void FUN_10b090aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf668e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0f8660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b090b54; end: 10b090b57; -[SCDeckContainerBase dismissalTarget] */

void FUN_10b090b54(void)

{
  return;
}



/* Entry: 10b090b58; end: 10b090c6b; -[SCDeckContainerBase didLeaveHierarchyUntil:appearance:] */

void FUN_10b090b58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    func_0x00010bf8de40(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
    if (param_1 != param_3) {
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bf38d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 == param_1) {
        lVar2 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c17c320();
        _objc_release(lVar2);
      }
      lVar2 = param_1;
      func_0x00010c0f3b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != param_3) {
        func_0x00010c0f3b80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf77840();
        _objc_release(param_1);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090c6c; end: 10b090d73; -[SCDeckContainerBase leafAskedToActivateButAlreadyActive:completion:] */

void FUN_10b090c6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f440();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((param_4 != 0) && ((int)uVar4 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4,1);
      }
    }
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08e000();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090d74; end: 10b090e07; -[SCDeckContainerBase willPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:] */

void FUN_10b090d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a6860();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090e08; end: 10b090eb3; -[SCDeckContainerBase prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:] */

void FUN_10b090e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c109680();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090eb4; end: 10b090f57; -[SCDeckContainerBase didPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:completed:] */

void FUN_10b090eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78380();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b090f58; end: 10b090f5b; -[SCDeckContainerBase onUIDidAppear:appearance:] */

void FUN_10b090f58(void)

{
  return;
}



/* Entry: 10b090f5c; end: 10b090f5f; -[SCDeckContainerBase onUIDidExitHierarchy:appearance:] */

void FUN_10b090f5c(void)

{
  return;
}



/* Entry: 10b090f60; end: 10b090f67; -[SCDeckContainerBase onWillAppear:] */

void FUN_10b090f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onWillAppear__112617900);
  return;
}



/* Entry: 10b090f68; end: 10b090f6f; -[SCDeckContainerBase onDidAppear:] */

void FUN_10b090f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onDidAppear__112616808);
  return;
}



/* Entry: 10b090f70; end: 10b090f77; -[SCDeckContainerBase onWillDisappear:] */

void FUN_10b090f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onWillDisappear__112617920);
  return;
}



/* Entry: 10b090f78; end: 10b090f7f; -[SCDeckContainerBase onDidDisappear:] */

void FUN_10b090f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onDidDisappear__1126168b0);
  return;
}



/* Entry: 10b090f80; end: 10b0910b3; -[SCDeckContainerBase onViewWillAppearWithAnimated:] */

void FUN_10b090f80(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010be3f840();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06b700(), (uVar1 & 1) == 0)) {
    puVar2 = PTR_PTR_1126df5c0;
    _objc_alloc(PTR_PTR_1126df5c0);
    func_0x00010bff2e00();
    func_0x00010c2a58c0(param_1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf669e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126df5d0;
    puVar4 = PTR_PTR_1126df5d8;
    _objc_alloc(PTR_PTR_1126df5d8);
    uVar1 = param_1;
    func_0x00010c0f0be0(param_1);
    func_0x00010c0f1360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039600(puVar4,param_2,0,uVar1,1,puVar2,0,param_1);
    func_0x00010c2a7020(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b0910b4; end: 10b0911e7; -[SCDeckContainerBase onViewDidAppearWithAnimated:] */

void FUN_10b0910b4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010be3f840();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06b700(), (uVar1 & 1) == 0)) {
    puVar2 = PTR_PTR_1126df5c0;
    _objc_alloc(PTR_PTR_1126df5c0);
    func_0x00010bff2e00();
    func_0x00010bf724a0(param_1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf669e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126df5d0;
    puVar4 = PTR_PTR_1126df5d8;
    _objc_alloc(PTR_PTR_1126df5d8);
    uVar1 = param_1;
    func_0x00010c0f0be0(param_1);
    func_0x00010c0f1360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039600(puVar4,param_2,0,uVar1,1,puVar2,0,param_1);
    func_0x00010bf7dac0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b0911e8; end: 10b091323; -[SCDeckContainerBase onViewWillDisappearWithAnimated:] */

void FUN_10b0911e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010be3f840();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06b700(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126df5c0;
      _objc_alloc(PTR_PTR_1126df5c0);
      func_0x00010bff2e00();
      func_0x00010c2a58c0(param_1,param_2,puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf669e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126df5d0;
      puVar5 = PTR_PTR_1126df5d8;
      _objc_alloc(PTR_PTR_1126df5d8);
      func_0x00010c0f0be0(param_1);
      func_0x00010c039600(puVar5,param_2,param_1,0,0,puVar3,0,0);
      func_0x00010c2a7020(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b091324; end: 10b09145f; -[SCDeckContainerBase onViewDidDisappearWithAnimated:] */

void FUN_10b091324(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010be3f840();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06b700(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126df5c0;
      _objc_alloc(PTR_PTR_1126df5c0);
      func_0x00010bff2e00();
      func_0x00010bf724a0(param_1,param_2,puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf669e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126df5d0;
      puVar5 = PTR_PTR_1126df5d8;
      _objc_alloc(PTR_PTR_1126df5d8);
      func_0x00010c0f0be0(param_1);
      func_0x00010c039600(puVar5,param_2,param_1,0,0,puVar3,0,0);
      func_0x00010bf7dac0(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b091460; end: 10b091557; -[SCDeckContainerBase _isDeckTransitionInProgress] */

ulong FUN_10b091460(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bfe2ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08dfe0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == param_1) {
    uVar3 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf668e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0817c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    uVar1 = param_1;
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_10b0914ac;
    }
    func_0x00010c10fa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0817c0();
  }
  else {
    uVar4 = 1;
    param_1 = uVar2;
  }
  _objc_release(param_1);
LAB_10b0914ac:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10b091558; end: 10b0916bf; -[SCDeckContainerBase _deckBaseViewControllerFromPresentedVC:] */

void FUN_10b091558(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  func_0x00010c10fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c290d00();
  _objc_release(param_1);
  if ((int)uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    uVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar7 & 1) == 0) {
      puVar3 = PTR_PTR_1126df578;
      _objc_opt_class(PTR_PTR_1126df578);
      uVar7 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      puVar6 = PTR_PTR_1126df578;
      puVar3 = PTR_DAT_1126a5bf8;
      if ((uVar7 & 1) == 0) {
        _objc_retain(param_3);
        uVar7 = param_3;
        func_0x000107c318f8(param_3,puVar3);
        bVar1 = (int)uVar7 == 0;
      }
      else {
        _objc_retain(param_3);
        _objc_opt_class(puVar6);
        uVar7 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar6);
        bVar1 = (uVar7 & 1) == 0;
      }
      uVar7 = param_3;
      if (bVar1) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      uVar4 = param_3;
    }
    else {
      uVar7 = param_3;
      func_0x00010c29c580();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar3 = PTR_DAT_1126a5bf8;
      _objc_retain(uVar4);
      uVar5 = uVar4;
      func_0x000107c318f8(uVar4,puVar3);
      uVar7 = uVar4;
      if ((int)uVar5 == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar4);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10b0916c0; end: 10b091717; -[SCDeckContainerBase isUsingBaseVCUIKitLifecycle] */

bool FUN_10b0916c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf8720(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return param_1 != 0;
}



/* Entry: 10b091718; end: 10b09188b; -[SCDeckContainerBase modalContainerWithConfig:] */

void FUN_10b091718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uVar1 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c290ce0();
  uVar5 = uVar10;
  if ((int)lVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010bfb51e0();
    if ((int)uVar3 != 0) {
      lVar2 = param_1;
      func_0x00010c10fa00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c290d00();
      _objc_release(lVar2);
      if ((int)lVar4 == 0) goto LAB_10b091834;
    }
    uVar5 = uVar1;
    func_0x00010c0f0be0(uVar1);
    lVar2 = param_1;
    func_0x00010be7f980(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c27ef20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c10f3c0(uVar1);
    uVar7 = uVar1;
    func_0x00010bf800a0(uVar1);
    uVar8 = uVar1;
    func_0x00010c0cfbe0(uVar1);
    uVar5 = uVar6;
    func_0x00010c0cfc00(uVar6,param_2,lVar2,uVar3,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(lVar2);
  }
LAB_10b091834:
  puVar9 = PTR_PTR_1126df5e0;
  func_0x00010c0cfa20(PTR_PTR_1126df5e0,param_2,param_3,uVar5,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b09188c; end: 10b091933; -[SCDeckContainerBase operaDeckContainerWithConfig:] */

void FUN_10b09188c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126df5e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038e40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126df5e0;
  func_0x00010c0ea1e0(PTR_PTR_1126df5e0,param_2,param_3,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b091934; end: 10b091a6f; -[SCDeckContainerBase navigationContainerWithConfig:] */

void FUN_10b091934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x30);
  _objc_retain(puVar5);
  lVar1 = param_1;
  func_0x00010c290ce0();
  puVar4 = puVar5;
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c27ef20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2a0180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cfc00(uVar2,param_2,lVar1,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126df5f0;
    _objc_alloc(PTR_PTR_1126df5f0);
    lVar1 = param_1;
    func_0x00010c2a0180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038e60(puVar4,param_2,lVar1,uVar3,param_1);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  puVar5 = PTR_PTR_1126df5e0;
  func_0x00010c0d6660(PTR_PTR_1126df5e0,param_2,param_3,puVar4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b091a70; end: 10b091bc3; -[SCDeckContainerBase modalUIContainerWithAnimated:] */

void FUN_10b091a70(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_10b091bc4;
  uStack_68 = 0x10b091bd4;
  uStack_60 = 0;
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = param_3;
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b091bc4; end: 10b091bdb;  */

void FUN_10b091bc4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b091bdc; end: 10b091c5f;  */

void FUN_10b091bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be60ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b091c60; end: 10b091c73;  */

void FUN_10b091c60(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 10b091c74; end: 10b091cdf; -[SCDeckContainerBase _modalUIContainerWithAnimated:] */

void FUN_10b091c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b091ce0; end: 10b091e33; -[SCDeckContainerBase multiDirectionalUIContainerWithAnimated:] */

void FUN_10b091ce0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_10b091bc4;
  uStack_68 = 0x10b091bd4;
  uStack_60 = 0;
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = param_3;
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b091e34; end: 10b091eb7;  */

void FUN_10b091e34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be61680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b091eb8; end: 10b091ecb;  */

void FUN_10b091eb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 10b091ecc; end: 10b091f37; -[SCDeckContainerBase _multiDirectionalUIContainerWithAnimated:] */

void FUN_10b091ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010c2a0180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b091f38; end: 10b09207f; -[SCDeckContainerBase _presentingVCForUIKitModalPresentationForPage:] */

void FUN_10b091f38(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (param_3 == 0xd) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    func_0x00010c14c280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    param_1 = uVar1;
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    _objc_retain(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 != 0) {
      func_0x00010c2a0180(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b09206c;
    }
    uVar2 = param_1;
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      func_0x00010c2a0180(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      param_1 = uVar2;
    }
  }
  _objc_release(uVar1);
LAB_10b09206c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b092080; end: 10b092087; -[SCDeckContainerBase developerName] */

undefined8 FUN_10b092080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b092088; end: 10b09208f; -[SCDeckContainerBase setDeveloperName:] */

void FUN_10b092088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b092090; end: 10b0920a7; -[SCDeckContainerBase gestureDelegate] */

void FUN_10b092090(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0920a8; end: 10b0920b3; -[SCDeckContainerBase setGestureDelegate:] */

void FUN_10b0920a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b0920b4; end: 10b0920bb; -[SCDeckContainerBase presenter] */

undefined8 FUN_10b0920b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0920bc; end: 10b0920eb; -[SCDeckContainerBase setDeckContainersSharedService:] */

void FUN_10b0920bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0920ec; end: 10b0920f3; -[SCDeckContainerBase disappearanceStyle] */

undefined8 FUN_10b0920ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b0920f4; end: 10b09211b; -[SCDeckContainerDataSource initWithBuilder:preserveStateBlock:purgeBehavior:purgeDelay:] */

void FUN_10b0920f4(long param_1)

{
  undefined8 in_x5;
  
  func_0x00010bff9960();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = in_x5;
  }
  return;
}



/* Entry: 10b09211c; end: 10b09218f; -[SCDeckContainerDataSource initWithBuilder:preserveStateBlock:purgeBehavior:] */

long FUN_10b09211c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bff99a0(param_1,param_2,param_3,param_5);
  if (param_1 != 0) {
    uVar1 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10b092190; end: 10b0921b7; -[SCDeckContainerDataSource initWithBuilder:purgeBehavior:] */

void FUN_10b092190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bff9940();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_4;
  }
  return;
}


