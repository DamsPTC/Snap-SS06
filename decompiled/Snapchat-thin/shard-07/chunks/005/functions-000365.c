/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056a209c; end: 1056a2327; -[SCSpectaclesConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_1056a209c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0ff5a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108a7328);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010bf11600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)lVar4 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1056a236c;
      puStack_70 = &UNK_1108a70d8;
      _objc_retain(puVar1);
      puStack_68 = puVar1;
      func_0x00010c12dfe0(param_3,param_2,&puStack_88);
      puVar5 = PTR_PTR_1126bcd70;
      _objc_opt_new(PTR_PTR_1126bcd70);
      puVar6 = PTR_PTR_1126bcd78;
      _objc_opt_new(PTR_PTR_1126bcd78);
      func_0x00010c1dc120(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      func_0x00010bdc7fc0(param_1,param_2,puVar5,puVar1,param_3);
      _objc_release(puVar5);
      _objc_release(puStack_68);
    }
    lVar3 = param_4;
    func_0x00010c262b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puStack_b0 = puVar7;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x1056a2454;
      puStack_98 = &UNK_1108a70d8;
      _objc_retain(puVar1);
      puStack_90 = puVar1;
      func_0x00010c12dfe0(param_3,param_2,&puStack_b0);
      puVar7 = PTR_PTR_1126bcd70;
      _objc_opt_new(PTR_PTR_1126bcd70);
      lVar3 = param_4;
      func_0x00010c262b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      puVar5 = puVar7;
      func_0x00010c262c60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar5);
      _objc_release(lVar3);
      func_0x00010bdc7fc0(param_1,param_2,puVar7,puVar1,param_3);
      _objc_release(puVar7);
      _objc_release(puStack_90);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a2328; end: 1056a236b;  */

bool FUN_1056a2328(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1056a236c; end: 1056a253b;  */

bool FUN_1056a236c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar7 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = param_2;
    func_0x00010c12f940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8cf20();
    bVar1 = (int)uVar6 == 2;
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1056a253c; end: 1056a253f; -[SCSpectaclesConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_1056a253c(void)

{
  return;
}



/* Entry: 1056a2540; end: 1056a2817; -[SCSpectaclesConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

ulong FUN_1056a2540(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c071ae0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010c0ff5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_retain(puVar2);
    uVar5 = param_3;
    func_0x00010c12fa80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        uVar10 = *(undefined8 *)(uVar9 * 8);
        uVar3 = uVar10;
        func_0x00010c12f940();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf8cf20();
        _objc_release(uVar3);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar6 == 3) {
          func_0x00010c12f940(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar10;
          func_0x00010c262c60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          func_0x00010c0df760(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20fd80(param_4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(uVar3);
          _objc_release(uVar10);
        }
        else if ((int)uVar6 == 2) {
          func_0x00010c16cd40(param_4);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      uVar4 = uVar5;
      func_0x00010bf52a60();
    }
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (ulong)((int)uVar3 == 5);
}



/* Entry: 1056a2818; end: 1056a285b;  */

bool FUN_1056a2818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1056a285c; end: 1056a2937;  */

bool FUN_1056a285c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar6 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = param_2;
    func_0x00010c12f940(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1056a2938; end: 1056a299b; -[SCSpectaclesConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_1056a2938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1c17e0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16cd40(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c20fd80(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a299c; end: 1056a2b43; -[SCSpectaclesConverterImpl _addRenderEffect:layerIds:editor:] */

undefined1 *
FUN_1056a299c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 *puStack_158;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = &uStack_130;
  lVar1 = param_4;
  lStack_138 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      param_4 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lStack_138);
        }
        uVar8 = *(undefined8 *)(lStack_128 + param_4 * 8);
        puVar2 = PTR_PTR_1126bcd28;
        _objc_opt_new(PTR_PTR_1126bcd28);
        func_0x00010c1ea620();
        puVar3 = PTR_PTR_1126bcd38;
        _objc_opt_new(PTR_PTR_1126bcd38);
        func_0x00010c2827c0(uVar8);
        func_0x00010c1dd680(puVar3);
        puVar4 = puVar2;
        func_0x00010c066480(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar4);
        func_0x00010befae60(param_5);
        _objc_release(puVar3);
        _objc_release(puVar2);
        param_4 = param_4 + 1;
      } while (lVar1 != param_4);
      puVar7 = &uStack_130;
      lVar1 = lStack_138;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _objc_release(lStack_138);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_170;
  pcStack_148 = FUN_1056a2b44;
  lStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_168 = PTR_PTR_1126e99c8;
  puStack_170 = puVar5;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    _objc_retain(puVar7);
    uVar8 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined8 **)((long)ppuVar6 + 8) = puVar7;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1056a2b44; end: 1056a2bb7; -[SCStickerCTItemConverterImpl initWithStickerInjector:] */

undefined1 * FUN_1056a2b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e99c8;
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



/* Entry: 1056a2bb8; end: 1056a2bbf; -[SCStickerCTItemConverterImpl saveType] */

undefined8 FUN_1056a2bb8(void)

{
  return 2;
}



/* Entry: 1056a2bc0; end: 1056a2c03; -[SCStickerCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_1056a2bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c2553e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1056a2c04; end: 1056a2c8b; -[SCStickerCTItemConverterImpl hasCTItemsInEditor:segment:] */

bool FUN_1056a2c04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1056a2c8c;
  puStack_30 = &UNK_1108a7398;
  uStack_28 = param_1;
  func_0x00010c0ff580(param_3,param_2,param_4,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1056a2c8c; end: 1056a2d13;  */

undefined8 FUN_1056a2c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c06f700(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1056a2d14; end: 1056a2de3; -[SCStickerCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_1056a2d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfaebe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bfedce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc8660(param_1,param_2,param_3,uVar1,uVar3,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056a2de4; end: 1056a2f23; -[SCStickerCTItemConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_1056a2de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfaee40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010c23ec00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bdc8660(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1056a2f24; end: 1056a2fcb;  */

void FUN_1056a2f24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f760();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2465a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056a2fcc; end: 1056a30ab; -[SCStickerCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_1056a2fcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000108eb64ec(param_3,uVar3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bc80(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x000108eb6ed4(param_3,*(undefined8 *)(param_1 + 8),param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bea7c20(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056a30ac; end: 1056a30fb; -[SCStickerCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_1056a30ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c20bc80(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bea7c20(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a30fc; end: 1056a3367; -[SCStickerCTItemConverterImpl _addStickerPlaybackLayersWithEditor:sojuGalleryStickers:sojuGalleryInfoFilters:segment:] */

void FUN_1056a30fc(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
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
  puVar12 = param_3;
  puVar14 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 != (undefined1 *)0x0) {
    uVar16 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    puVar12 = &uStack_140;
    puVar14 = auStack_100;
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar13 = *plStack_130;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(param_4);
          }
          uVar15 = *(undefined8 *)(lStack_138 + (long)puVar14 * 8);
          uVar2 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c06f740();
          _objc_release(uVar2);
          if ((int)uVar3 != 0) {
            uVar2 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bf5cd00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            uVar2 = uVar15;
            func_0x000108eb6b88(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c128380(uVar15);
            uVar17 = uVar16;
            func_0x00010c128100(uVar15);
            func_0x00010c06c000(uVar15);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar15;
            func_0x00010bf1f3c0();
            uVar5 = uVar3;
            func_0x00010b7047b0(uVar16,uVar17,uVar3,uVar2,uVar4,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar15);
            func_0x00010befa9a0(param_3);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(uVar2);
            _objc_release(uVar3);
          }
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar12 = &uStack_140;
        puVar14 = auStack_100;
        puVar1 = param_4;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  puVar6 = puVar12;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar10 = PTR_PTR_1126bcd48;
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = puVar6;
    func_0x00010bfaebe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1c40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c1ac480(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf21f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c8e0(puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  _objc_release(puVar6);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 1056a3368; end: 1056a3493; -[SCStickerCTItemConverterImpl _setSojuGalleryFiltersWithSnapOverlayBuilder:infoFilters:] */

void FUN_1056a3368(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126bcd48;
  if (lVar4 == 0) {
    lVar2 = lVar1;
    func_0x00010bfaebe0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1c40(puVar5,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1ac480(puVar5,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c8e0(param_3,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a3494; end: 1056a349f; -[SCStickerCTItemConverterImpl .cxx_destruct] */

void FUN_1056a3494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056a34a0; end: 1056a3723; -[SCSnapDocConverterImpl initWithPreviewABProvider:stickerInjector:snapchatterDataFetcher:creativeToolsABProvider:] */

undefined8 *
FUN_1056a34a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
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
  undefined8 uVar13;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_d0 = PTR_PTR_1126e99d0;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcd80;
    _objc_opt_new();
    uVar13 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar13);
    uStack_c8 = puVar1[2];
    puVar2 = PTR_PTR_1126bcd88;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126bcd90;
    puStack_c0 = puVar2;
    _objc_alloc();
    func_0x00010c04c8c0();
    puVar4 = PTR_PTR_1126bcd98;
    puStack_b8 = puVar3;
    _objc_alloc();
    func_0x00010c04c8c0();
    puVar5 = PTR_PTR_1126bcda0;
    puStack_b0 = puVar4;
    _objc_opt_new();
    puVar6 = PTR_PTR_1126bcda8;
    puStack_a8 = puVar5;
    _objc_alloc();
    func_0x00010c049280();
    puVar7 = PTR_PTR_1126bcdb0;
    puStack_a0 = puVar6;
    _objc_opt_new();
    puVar8 = PTR_PTR_1126bcdb8;
    puStack_98 = puVar7;
    _objc_alloc();
    func_0x00010bfefac0();
    puVar9 = PTR_PTR_1126bcdc0;
    puStack_90 = puVar8;
    _objc_opt_new();
    puVar10 = PTR_PTR_1126bcdc8;
    puStack_88 = puVar9;
    _objc_opt_new();
    puVar11 = PTR_PTR_1126bcdd0;
    puStack_80 = puVar10;
    _objc_opt_new();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar1[1];
    puVar1[1] = puVar12;
    _objc_release(uVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_3;
}



/* Entry: 1056a3724; end: 1056a372b; -[SCSnapDocConverterImpl removeLegacyModelsFromEditor:migrateToLatestModel:] */

void FUN_1056a3724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeLegacyModelsFromEditor_mig_112628db0,param_3,param_4,0);
  return;
}



/* Entry: 1056a372c; end: 1056a3a2b; -[SCSnapDocConverterImpl removeLegacyModelsFromEditor:migrateToLatestModel:respectSaveType:] */

ulong FUN_1056a372c(long param_1,undefined8 param_2,ulong param_3,int param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar10 = param_3;
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar10 == 0) {
    func_0x00010c1a44c0(0x3fe2000000000000,param_3);
  }
  uVar10 = param_3;
  func_0x00010c09dea0();
  if (uVar10 != 0xffffffffffffffff) {
    uVar10 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c09dea0();
      puVar3 = PTR_PTR_1126affe8;
      if (uVar10 < uVar2) {
        func_0x00010c09e180();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfccec0();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = param_1;
      func_0x00010be6eac0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126bcd60;
        func_0x00010c2b1de0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = *(undefined **)(param_1 + 8);
        _objc_retain(puVar14);
        puVar6 = puVar14;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (puVar6 == (undefined *)0x0) {
LAB_1056a39a4:
          _objc_release(puVar14);
        }
        else {
          bVar12 = false;
          do {
            puVar13 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar14);
              }
              uVar11 = *(ulong *)((long)puVar13 * 8);
              uVar2 = uVar11;
              func_0x00010bfd6900();
              if ((int)uVar2 != 0) {
                if (((param_4 != 0) && (uVar2 = uVar11, func_0x00010c14b5c0(), uVar2 != 0)) &&
                   (uVar2 = uVar11, func_0x00010bfd4ea0(), (uVar2 & 1) == 0)) {
                  func_0x00010bef7ec0(uVar11);
                }
                uVar2 = uVar11;
                func_0x00010c14b5c0();
                if (param_5 == 0) {
                  if (uVar2 != 0) goto LAB_1056a3904;
                }
                else if (1 < uVar2) {
LAB_1056a3904:
                  func_0x00010c12ce00(uVar11);
                  bVar12 = true;
                }
              }
              puVar13 = puVar13 + 1;
            } while (puVar6 != puVar13);
            puVar6 = puVar14;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
          _objc_release(puVar14);
          if (bVar12) {
            func_0x00010bf6c5c0(param_3);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar14 = puVar5;
            func_0x00010bf21f60(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc7b40(param_1);
            goto LAB_1056a39a4;
          }
        }
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
      _objc_release(puVar3);
      uVar10 = uVar10 + 1;
      uVar2 = param_3;
      func_0x00010c09dea0();
    } while (uVar10 < uVar2 + 1);
  }
  func_0x00010bfe4e80(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0cc820();
    _objc_release(uVar7);
    _objc_release(param_2);
    return (ulong)((int)uVar8 == 6);
  }
  return param_3;
}



/* Entry: 1056a3a2c; end: 1056a3a8f;  */

bool FUN_1056a3a2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 6;
}



/* Entry: 1056a3a90; end: 1056a3e0b; -[SCSnapDocConverterImpl addSojuWithEditor:] */

ulong FUN_1056a3a90(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *puStack_150;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar14 = param_3;
  func_0x00010c09dea0();
  if (uVar14 != 0xffffffffffffffff) {
    uVar14 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c09dea0();
      puVar3 = PTR_PTR_1126affe8;
      if (uVar14 < uVar2) {
        func_0x00010c09e180();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar2 = param_3;
      func_0x00010bf6c5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf529e0();
      if (uVar4 == 1) {
        uVar4 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar4;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08eee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar16);
        _objc_release(uVar4);
        uVar4 = uVar6;
        func_0x00010c08fa60();
        if (uVar4 == 0) {
          _objc_release(uVar6);
          goto LAB_1056a3c58;
        }
        puStack_150 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        _objc_release(uVar6);
        if (puStack_150 == (undefined *)0x0) goto LAB_1056a3c5c;
        puVar7 = PTR_PTR_1126bcdd8;
        _objc_alloc(PTR_PTR_1126bcdd8);
        func_0x00010c0206e0();
        puVar8 = PTR_PTR_1126bcd60;
        func_0x00010c2b1de0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      else {
LAB_1056a3c58:
        puStack_150 = (undefined *)0x0;
LAB_1056a3c5c:
        puVar8 = PTR_PTR_1126bcd60;
        _objc_opt_new();
      }
      puVar7 = puVar8;
      func_0x00010bf21f60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = *(long *)(param_1 + 8);
      _objc_retain(lVar15);
      lVar9 = lVar15;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar15);
          }
          uVar16 = *(ulong *)(lVar17 * 8);
          uVar4 = uVar16;
          func_0x00010c14b5c0();
          if ((uVar4 != 0) && (uVar4 = uVar16, func_0x00010bfd6900(), (uVar4 & 1) == 0)) {
            func_0x00010bef7ea0(uVar16);
          }
          lVar17 = lVar17 + 1;
        } while (lVar9 != lVar17);
        lVar9 = lVar15;
        func_0x00010bf52a60();
      }
      _objc_release(lVar15);
      puVar10 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc7b40(param_1);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puStack_150);
      _objc_release(0);
      _objc_release(uVar2);
      _objc_release(puVar3);
      uVar14 = uVar14 + 1;
      uVar2 = param_3;
      func_0x00010c09dea0();
    } while (uVar14 < uVar2 + 1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c0cc820();
    _objc_release(uVar11);
    _objc_release(param_2);
    return (ulong)((int)uVar12 == 6);
  }
  return param_3;
}



/* Entry: 1056a3e0c; end: 1056a3e6f;  */

bool FUN_1056a3e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 6;
}



/* Entry: 1056a3e70; end: 1056a3f9f; -[SCSnapDocConverterImpl _addOverlay:toSegment:withEditor:] */

void FUN_1056a3e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c271c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3);
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b37e0;
      _objc_opt_new(PTR_PTR_1126b37e0);
      func_0x00010c1ba560();
      puVar3 = PTR_PTR_1126b0cc0;
      _objc_opt_new(PTR_PTR_1126b0cc0);
      func_0x00010c1c73c0();
      puVar4 = PTR_PTR_1126b25d0;
      _objc_opt_new(PTR_PTR_1126b25d0);
      func_0x00010c1863a0();
      func_0x00010befa9a0(param_5,param_2,puVar4,param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056a3fa0; end: 1056a40f3; -[SCSnapDocConverterImpl _overlayAtSegment:withEditor:] */

void FUN_1056a3fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0ff580(param_4,param_2,param_3,&PTR___NSConcreteGlobalBlock_1108a7408);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0ff640(param_4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08eee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uStack_48 = 0;
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar5,0,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126bcdd8;
      _objc_alloc(PTR_PTR_1126bcdd8);
      func_0x00010c0206e0();
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056a40f4; end: 1056a416f;  */

bool FUN_1056a40f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3 != 0;
}



/* Entry: 1056a4170; end: 1056a41d3; -[SCSnapDocConverterImpl .cxx_destruct] */

void FUN_1056a4170(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056a41d4; end: 1056a422f; -[SCSnapDocConverterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056a41d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127278e4);
  _objc_destroyWeak(param_1 + _DAT_1127278e0);
  _objc_destroyWeak(param_1 + _DAT_1127278dc);
  _objc_destroyWeak(param_1 + _DAT_1127278d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127278e8);
  return;
}



/* Entry: 1056a4230; end: 1056a4237; -[SCSnapDocEditorFactoryImpl editorWithSnapDoc:] */

void FUN_1056a4230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_editorWithSnapDoc_serialSnapDocU_1125c0c90,param_3,0);
  return;
}



/* Entry: 1056a4238; end: 1056a4247; -[SCSnapDocEditorFactoryImpl editorWithSnapDoc:serialSnapDocUpdatePerformer:] */

void FUN_1056a4238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8cb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_editorWithSnapDoc_mediaIdToAsset_1125c0c88,param_3,0,0,param_4);
  return;
}



/* Entry: 1056a4248; end: 1056a424f; -[SCSnapDocEditorFactoryImpl editorWithSnapDoc:mediaIdToAssetId:snapDocKey:] */

void FUN_1056a4248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8cb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_editorWithSnapDoc_mediaIdToAsset_1125c0c88);
  return;
}



/* Entry: 1056a4250; end: 1056a437b; -[SCSnapDocEditorFactoryImpl editorWithSnapDoc:mediaIdToAssetId:snapDocKey:serialSnapDocUpdatePerformer:] */

void FUN_1056a4250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c290920();
  puVar3 = PTR_PTR_1126bcdf0;
  uVar1 = param_6;
  if ((int)lVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_alloc(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010beec300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c243ee0();
  func_0x00010c047500(uVar6,puVar3,param_2,param_3,uVar1,uVar5,param_4,param_5,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056a437c; end: 1056a46af; -[SCSnapDocEditorFactoryImpl editorWithBaseMediaInput:] */

void FUN_1056a437c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010bf8cb40(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c179060(param_2,param_3,3);
  func_0x00010bfce280(param_2);
  if (param_1 == 0.0) {
    func_0x00010c1a44c0(0x3fe2000000000000,param_2);
  }
  puVar2 = PTR_PTR_1126b25d0;
  _objc_opt_new();
  puVar1 = puVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a960();
  _objc_release(puVar1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1056a46b0;
  puStack_80 = &UNK_1108480f8;
  _objc_retain(puVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1056a46e8;
  puStack_a8 = &UNK_110850738;
  puStack_78 = puVar2;
  _objc_retain(puVar2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1056a4720;
  puStack_d0 = &UNK_1108a7458;
  puStack_a0 = puVar2;
  _objc_retain(puVar2);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1056a4758;
  puStack_f8 = &UNK_1108a7488;
  puStack_c8 = puVar2;
  _objc_retain(puVar2);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1056a4790;
  puStack_120 = &UNK_1108a74b8;
  puStack_118 = puVar2;
  puStack_f0 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0c14a0(param_4,param_3,&puStack_98,&puStack_c0,&puStack_e8,&puStack_110,&puStack_138)
  ;
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010befa9a0(param_2,param_3,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a040(param_2,param_3,&PTR___NSConcreteGlobalBlock_1108a74e8);
  puVar5 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar6 = param_2;
  func_0x00010bef7100(param_2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1056a4898;
  puStack_160 = &UNK_1108a7538;
  puStack_158 = puVar5;
  _objc_retain(param_2);
  uStack_150 = param_2;
  uStack_148 = uVar4;
  puStack_140 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  _objc_retain(puVar5);
  func_0x00010c297260(uVar6,param_3,&puStack_178,0);
  _objc_release(uVar6);
  puVar1 = puStack_140;
  _objc_retain(param_2);
  _objc_release(puVar1);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(puStack_158);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puStack_118);
  _objc_release(puStack_f0);
  _objc_release(puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(puStack_78);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1056a46b0; end: 1056a47c7;  */

void FUN_1056a46b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056a47c8; end: 1056a4897;  */

void FUN_1056a47c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108069120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216040(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  uVar3 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010c0fef80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056a4898; end: 1056a49b3;  */

void FUN_1056a4898(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c288840(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c28b3e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(param_2);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1056a49b4; end: 1056a4ab7;  */

void FUN_1056a49b4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c1c4020(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80();
  if (iVar1 != 0) {
    func_0x00010c0c4bc0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = param_2;
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0699e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056a4ab8; end: 1056a4abf; -[SCSnapDocEditorFactoryImpl useSerialQueueInsteadOfLocks] */

undefined8 FUN_1056a4ab8(void)

{
  return 1;
}



/* Entry: 1056a4ac0; end: 1056a4b37; -[SCSnapDocEditorFactoryImpl .cxx_destruct] */

void FUN_1056a4ac0(long param_1)

{
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



/* Entry: 1056a4b38; end: 1056a52ab; -[SCSnapDocEditorImpl initWithSnapDoc:serialSnapDocUpdatePerformer:pixelWidth:defaultGridWidth:mediaIdToAssetId:snapDocKey:snapDocConverterServices:snapDocManagerServices:nsDataWriterServices:temporaryFileWriterServices:mediaVideoImportServices:composerServices:capabilitiesServices:] */

undefined8 *
FUN_1056a4b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined **param_7,undefined **param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
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
  puStack_d0 = PTR_PTR_1126e99e0;
  puVar1 = &uStack_d8;
  puVar2 = PTR_s_init_1125d9248;
  uStack_d8 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar4 = param_7;
  ppuVar16 = param_8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bad10;
    _objc_opt_new();
    uVar6 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bad10;
    _objc_opt_new();
    uVar6 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar6 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar6);
    lVar3 = param_4;
    func_0x00010bf51e00();
    lVar7 = puVar1[3];
    puVar1[3] = lVar3;
    _objc_release(lVar7);
    _objc_retain(param_5);
    uVar6 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar6);
    func_0x00010bf51e00();
    uVar6 = puVar1[6];
    puVar1[6] = ppuVar4;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bcdf8;
    _objc_alloc();
    func_0x00010c0473c0();
    puVar9 = puVar1 + 0xe;
    uVar6 = *puVar9;
    *puVar9 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce00;
    _objc_alloc();
    func_0x00010c047420();
    puVar10 = puVar1 + 0xf;
    uVar6 = *puVar10;
    *puVar10 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce08;
    _objc_alloc();
    func_0x00010c0474e0(param_1);
    puVar17 = puVar1 + 0x10;
    uVar6 = *puVar17;
    *puVar17 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce10;
    _objc_alloc();
    func_0x00010c047440();
    puVar11 = puVar1 + 0x11;
    uVar6 = *puVar11;
    *puVar11 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce18;
    _objc_alloc();
    func_0x00010c047440();
    puVar12 = puVar1 + 0x13;
    uVar6 = *puVar12;
    *puVar12 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce20;
    _objc_alloc();
    func_0x00010c047480();
    puVar13 = puVar1 + 0x14;
    uVar6 = *puVar13;
    *puVar13 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce28;
    _objc_alloc();
    func_0x00010c0473c0();
    puVar14 = puVar1 + 0x12;
    uVar6 = *puVar14;
    *puVar14 = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce30;
    _objc_alloc();
    uVar6 = param_14;
    func_0x00010c295440(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_15;
    func_0x00010bf2fa20(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0474a0();
    puVar18 = puVar1 + 0x15;
    uVar8 = *puVar18;
    *puVar18 = puVar2;
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce38;
    _objc_alloc();
    func_0x00010c047460();
    puVar15 = puVar1 + 0x16;
    uVar6 = *puVar15;
    *puVar15 = puVar2;
    _objc_release(uVar6);
    uStack_c8 = *puVar9;
    uStack_c0 = *puVar10;
    uStack_b8 = *puVar17;
    uStack_b0 = *puVar11;
    uStack_a8 = *puVar12;
    uStack_a0 = *puVar14;
    uStack_98 = *puVar13;
    uStack_90 = *puVar18;
    uStack_88 = *puVar15;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126bce40;
    _objc_opt_new();
    uVar6 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar6 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar6);
    _objc_initWeak(auStack_e0,puVar1);
    uVar5 = *puVar9;
    func_0x00010c0ff4e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1056a52ac;
    puStack_f0 = &UNK_1108a7568;
    ppuVar4 = &puStack_108;
    _objc_copyWeak(auStack_e8,auStack_e0);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = puVar1[0xe];
    func_0x00010c1581a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x1056a52f4;
    puStack_118 = &UNK_1108a7598;
    ppuVar16 = &puStack_130;
    _objc_copyWeak(auStack_110,auStack_e0);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = puVar1[0xf];
    func_0x00010c12f960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_e0;
    _objc_copyWeak(auStack_138,puVar2);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  uVar5 = puVar1[0xc];
  func_0x00010bf51700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ce20();
  _objc_release(uVar6);
  _objc_release(uVar5);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar16 + 4);
  _objc_destroyWeak(ppuVar4 + 4);
  _objc_destroyWeak(auStack_e0);
  __Unwind_Resume(param_4);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)(param_4 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdfec60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1056a52ac; end: 1056a5383;  */

void FUN_1056a52ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfec60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056a5384; end: 1056a538f; -[SCSnapDocEditorImpl resetWithSnapDoc:] */

void FUN_1056a5384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resetWithSnapDoc_snapDocKey_medi_11262c1f0,param_3,0,0);
  return;
}



/* Entry: 1056a5390; end: 1056a539f; -[SCSnapDocEditorImpl locklessMode] */

bool FUN_1056a5390(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 1056a53a0; end: 1056a53a7; -[SCSnapDocEditorImpl resetWithSnapDoc:snapDocKey:] */

void FUN_1056a53a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resetWithSnapDoc_snapDocKey_medi_11262c1f0,param_3,param_4,0);
  return;
}



/* Entry: 1056a53a8; end: 1056a53b3; -[SCSnapDocEditorImpl resetWithSnapDoc:mediaIdToAssetId:] */

void FUN_1056a53a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resetWithSnapDoc_snapDocKey_medi_11262c1f0,param_3,0,param_4);
  return;
}



/* Entry: 1056a53b4; end: 1056a562b; -[SCSnapDocEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056a53b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1056a54dc;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_80);
  func_0x00010be84440(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ce20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a562c; end: 1056a585b; -[SCSnapDocEditorImpl waitUntil:] */

void FUN_1056a562c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != puVar2) {
      puVar3 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1056a57fc;
    }
  }
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1056a585c;
  uStack_50 = 0x1056a586c;
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  puStack_48 = puVar3;
  _objc_initWeak(auStack_78,param_1);
  func_0x00010bf34f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(puVar2);
LAB_1056a57fc:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056a585c; end: 1056a5873;  */

void FUN_1056a585c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056a5874; end: 1056a5983;  */

void FUN_1056a5874(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      func_0x00010bf86d80(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010bf43ca0(uVar4);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x28);
      (**(code **)(puVar2 + 0x10))(puVar2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != puVar3) {
          func_0x00010bf86d80(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
          lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar4 = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          _objc_release(uVar4);
          func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
        }
      }
    }
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1056a5984; end: 1056a5a47; -[SCSnapDocEditorImpl snapDoc] */

void FUN_1056a5984(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056a5a48;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010beca180(param_1,param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a5a48; end: 1056a5a83;  */

void FUN_1056a5a48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a5a84; end: 1056a5a8b; -[SCSnapDocEditorImpl snapDocKey] */

void FUN_1056a5a84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa0),PTR_s_snapDocKey_11266daa8)
  ;
  return;
}



/* Entry: 1056a5a8c; end: 1056a5aa3; -[SCSnapDocEditorImpl mediaIdToAssetId] */

void FUN_1056a5a8c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056a5aa4; end: 1056a5b43; -[SCSnapDocEditorImpl localSegmentCount] */

undefined8 FUN_1056a5aa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056a5b44;
  puStack_58 = &UNK_11084b9d0;
  uStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010beca180(param_1,param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1056a5b44; end: 1056a5b77;  */

void FUN_1056a5b44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c09dea0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1056a5b78; end: 1056a5bdb; -[SCSnapDocEditorImpl setLocalSegmentCount:] */

void FUN_1056a5b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1056a5bdc;
  puStack_38 = &UNK_110848c48;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x00010beca180(param_1,param_2,&puStack_50);
  func_0x00010be84440(param_1);
  return;
}



/* Entry: 1056a5bdc; end: 1056a5be7;  */

void FUN_1056a5bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),PTR_s_setLocalSegmentCount__11264d6d0
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056a5be8; end: 1056a5cdf; -[SCSnapDocEditorImpl playbackLayerWithId:] */

void FUN_1056a5be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a5ce0; end: 1056a5d23;  */

void FUN_1056a5ce0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0ff640(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a5d24; end: 1056a5e1b; -[SCSnapDocEditorImpl playbackLayerIdsAtSegment:] */

void FUN_1056a5d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a5e1c; end: 1056a5e77;  */

void FUN_1056a5e1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056a5e78; end: 1056a5f9f; -[SCSnapDocEditorImpl playbackLayerIdsAtSegment:where:] */

void FUN_1056a5e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a5fa0; end: 1056a5fe7;  */

void FUN_1056a5fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0ff580(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a5fe8; end: 1056a60df; -[SCSnapDocEditorImpl playbackLayerIdsWhere:] */

void FUN_1056a5fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a60e0; end: 1056a6123;  */

void FUN_1056a60e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0ff5a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a6124; end: 1056a621b; -[SCSnapDocEditorImpl segmentOfPlaybackLayerWithId:] */

void FUN_1056a6124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a621c; end: 1056a625f;  */

void FUN_1056a621c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c158480(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a6260; end: 1056a62eb; -[SCSnapDocEditorImpl updateSnapDoc:] */

void FUN_1056a6260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1056a62ec;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_50);
  func_0x00010be84440(param_1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a62ec; end: 1056a62ff;  */

void FUN_1056a62ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056a62fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 1056a6300; end: 1056a63ff; -[SCSnapDocEditorImpl deletePlaybackLayerWithId:] */

void FUN_1056a6300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6400; end: 1056a64f7;  */

void FUN_1056a6400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bf6c5a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0c55e0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0c3fe0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c3a0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),
             PTR_s_removeAllRenderEffectsFromPlayba_112628630,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056a64f8; end: 1056a6627; -[SCSnapDocEditorImpl deletePlaybackLayersAtSegment:where:] */

void FUN_1056a64f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6628; end: 1056a679f;  */

void FUN_1056a6628(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bf6c5c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
        func_0x00010c0ff5c0(*(undefined8 *)(lStack_128 + lVar8 * 8));
        func_0x00010c0df820(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b040(uVar1);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar6;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  lVar5 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1056a67a0;
  lStack_150 = lVar6;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_1056a585c;
  uStack_160 = 0x1056a586c;
  uStack_158 = 0;
  _objc_retain(puVar3);
  func_0x00010beca180(lVar5);
  uVar1 = puStack_178[5];
  _objc_retain(uVar1);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a67a0; end: 1056a6897; -[SCSnapDocEditorImpl trackSegmentAtIndex:] */

void FUN_1056a67a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6898; end: 1056a68db;  */

void FUN_1056a6898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c278720(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a68dc; end: 1056a697f; -[SCSnapDocEditorImpl trackIndexOfType:] */

undefined4 FUN_1056a68dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1056a6980;
  puStack_60 = &UNK_11084a858;
  uStack_58 = param_1;
  uStack_48 = param_3;
  puStack_38 = puStack_50;
  func_0x00010beca180(param_1,param_2,&puStack_78);
  uVar1 = *(undefined4 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1056a6980; end: 1056a69b7;  */

void FUN_1056a6980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c277f40(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (int)uVar1;
  return;
}



/* Entry: 1056a69b8; end: 1056a6a1f; -[SCSnapDocEditorImpl moveLocalSegmentAtIndex:toIndex:] */

void FUN_1056a69b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056a6a20;
  puStack_40 = &UNK_110858dc0;
  uStack_38 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010beca180(param_1,param_2,&puStack_58);
  func_0x00010be84440(param_1);
  return;
}



/* Entry: 1056a6a20; end: 1056a6a33;  */

void FUN_1056a6a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),
             PTR_s_moveLocalSegmentAtIndex_toIndex__112611fa0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1056a6a34; end: 1056a6b33; -[SCSnapDocEditorImpl deleteSegment:] */

void FUN_1056a6a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6b34; end: 1056a6ca7;  */

void FUN_1056a6b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010bf6c760(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar5);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  _objc_retain(lVar7);
  puVar4 = auStack_e8;
  lVar6 = lVar7;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x22 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
        func_0x00010c0ff5c0(*(undefined8 *)(lStack_128 + lVar9 * 8));
        func_0x00010c0df820(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b040(unaff_x22);
        _objc_release(puVar2);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      puVar4 = auStack_e8;
      lVar6 = lVar7;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar6 != 0);
  }
  lVar6 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1056a6ca8;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = lVar7;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_1056a585c;
  uStack_170 = 0x1056a586c;
  uStack_168 = 0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  func_0x00010beca180(lVar6);
  func_0x00010be84440(lVar6);
  uVar1 = puStack_188[5];
  _objc_retain(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6ca8; end: 1056a6dd7; -[SCSnapDocEditorImpl addPlaybackLayer:segment:] */

void FUN_1056a6ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6dd8; end: 1056a6e1f;  */

void FUN_1056a6dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010befa9a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a6e20; end: 1056a6f1f; -[SCSnapDocEditorImpl addTimedPlaybackLayer:] */

void FUN_1056a6e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056a585c;
  uStack_30 = 0x1056a586c;
  uStack_28 = 0;
  _objc_retain(param_3);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a6f20; end: 1056a6f63;  */

void FUN_1056a6f20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010befbf60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a6f64; end: 1056a7093; -[SCSnapDocEditorImpl updatePlaybackLayerWithId:update:] */

void FUN_1056a6f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a7094; end: 1056a70db;  */

void FUN_1056a7094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c288840(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a70dc; end: 1056a720b; -[SCSnapDocEditorImpl updateTrackSegmentWithIndex:update:] */

void FUN_1056a70dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056a585c;
  uStack_40 = 0x1056a586c;
  uStack_38 = 0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beca180(param_1);
  func_0x00010be84440(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056a720c; end: 1056a7253;  */

void FUN_1056a720c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c28b3e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a7254; end: 1056a72a3; -[SCSnapDocEditorImpl dispose] */

void FUN_1056a7254(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1056a72a4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010beca180(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1056a72a4; end: 1056a72bb;  */

void FUN_1056a72a4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x59) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1056a72bc; end: 1056a738b; -[SCSnapDocEditorImpl setRenderEffect:onPlaybackLayer:forFeature:renderEffectType:] */

void FUN_1056a72bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1056a738c;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  uStack_44 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_80);
  func_0x00010be84440(param_1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a738c; end: 1056a73a3;  */

void FUN_1056a738c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),
             PTR_s_setRenderEffect_onPlaybackLayer__1126583c0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x3c));
  return;
}



/* Entry: 1056a73a4; end: 1056a7477; -[SCSnapDocEditorImpl setRenderEffect:onPlaybackLayer:forFeature:featureTagId:renderEffectType:] */

void FUN_1056a73a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1056a7478;
  puStack_70 = &UNK_110876440;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  uStack_44 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beca180(param_1,param_2,&puStack_88);
  func_0x00010be84440(param_1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a7478; end: 1056a748f;  */

void FUN_1056a7478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),
             PTR_s_setRenderEffect_onPlaybackLayer__1126583b8,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
  return;
}


