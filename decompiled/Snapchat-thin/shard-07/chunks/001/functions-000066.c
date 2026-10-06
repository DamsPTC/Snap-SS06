/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105139398; end: 1051393cb; -[SCSendToPreviewSectionExtension sectionCreator] */

void FUN_105139398(void)

{
  _objc_alloc(PTR_PTR_1126b51d8);
  func_0x00010c039900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051393cc; end: 1051393d3; -[SCSendToPreviewSectionExtension sectionDescriptor] */

undefined8 FUN_1051393cc(void)

{
  return 0;
}



/* Entry: 1051393d4; end: 1051393db; -[SCSendToPreviewSectionExtension sectionLoggingParser] */

undefined8 FUN_1051393d4(void)

{
  return 0;
}



/* Entry: 1051393dc; end: 10513940b; -[SCSendToPreviewSectionExtension .cxx_destruct] */

void FUN_1051393dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10513940c; end: 105139757; -[SCSendToPreviewCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10513940c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126e6628;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
    _objc_alloc(PTR__OBJC_CLASS___NSTextStorage_1126b51e0);
    func_0x00010c04e820();
    puVar4 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSLayoutManager_1126b51e8);
    func_0x00010bef96a0(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSTextContainer_1126b51f0);
    func_0x00010c225740();
    func_0x00010c1bdbc0(0,puVar5);
    func_0x00010befbe20(puVar4);
    puVar6 = PTR_PTR_1126b51f8;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c014fe0();
    lVar10 = (long)_DAT_11271d0f0;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar6;
    _objc_release(uVar9);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc7198;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7198,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(ppuVar7);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c1677a0(uVar8);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bfb3a80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcaa0(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dca60(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar6);
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar10));
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar6);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010befbb60(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d0f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271d0f4) = puVar6;
    _objc_release(uVar9);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d0f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271d0f8) = puVar6;
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)PTR__CGSizeZero_110347620;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11271d0fc))[1] =
         *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271d0fc) = uVar9;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105139758; end: 10513979f; -[SCSendToPreviewCollectionViewCell prepareForReuse] */

void FUN_105139758(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c0f5b20(param_1);
  return;
}



/* Entry: 1051397a0; end: 10513981b; -[SCSendToPreviewCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051397a0(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6628;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010b8166c0();
  lVar1 = (long)_DAT_11271d0f0;
  func_0x00010c1b3b40(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10513981c; end: 105139aa3; -[SCSendToPreviewCollectionViewCell _createHorizontalContainerViewWithConfigs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513981c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  ppuVar5 = &puStack_1a0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        func_0x00010beed380(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = puVar4;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_105139aa4;
        puStack_150 = &UNK_110848678;
        lStack_148 = param_1;
        func_0x00010c0c0d60();
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11271d0f8));
  _objc_initWeak(auStack_170,param_1);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puStack_1a0 = puVar4;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105139b20;
  puStack_188 = &UNK_11086afd0;
  _objc_copyWeak(auStack_178,auStack_170);
  lVar1 = param_3;
  lStack_180 = param_1;
  func_0x000100504554(param_3,&puStack_1a0);
  func_0x00010bff3fe0();
  lVar6 = (long)_DAT_11271d104;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c207380(0x4014000000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_1);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11271d0f4);
  _objc_retain(ppuVar5);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar2);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105139aa4; end: 105139b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105139aa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d0f4);
  _objc_retain(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105139b20; end: 105139c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105139b20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b5200;
  _objc_alloc();
  func_0x00010c01a9e0();
  puVar2 = puVar1;
  func_0x00010c272c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,puVar2);
  _objc_release(puVar2);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,auStack_48);
  puVar2 = puVar1;
  func_0x00010c272c60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211ae0();
  _objc_release(puVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = (long)_DAT_11271d100;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(lVar4 + lVar5);
  *(undefined **)(lVar4 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105139c94; end: 105139cf3;  */

void FUN_105139c94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c079040();
  func_0x00010be01880(lVar1,param_2,uVar3,lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105139cf4; end: 105139e0f; -[SCSendToPreviewCollectionViewCell _didUpdateToggleForHorizontalViewConfig:isOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105139cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beed380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0d60();
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11271d0f8),param_2,
                      *(undefined8 *)(param_1 + _DAT_11271d0f4));
  return;
}



/* Entry: 105139e10; end: 10513a037; -[SCSendToPreviewCollectionViewCell _updateLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105139e10(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (*(char *)(param_1 + _DAT_11271d108) == '\x01') {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10513a038;
    puStack_60 = &UNK_1108471b0;
    lStack_58 = param_1;
    func_0x00010c0bbfe0(*(undefined8 *)(param_1 + _DAT_11271d0f0),param_2,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + _DAT_11271d10c);
    _objc_initWeak(auStack_80,param_1);
    lVar2 = param_1;
    func_0x00010c1109c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10513a0e4;
    puStack_90 = &UNK_110850cc8;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10513a440;
    puStack_c0 = &UNK_11086b090;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10513ab20;
    puStack_e8 = &UNK_11086b0c0;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10513afe8;
    puStack_110 = &UNK_11086b120;
    lStack_108 = param_1;
    lStack_e0 = param_1;
    lStack_b8 = param_1;
    uStack_b0 = uVar1;
    lStack_88 = param_1;
    _objc_copyWeak(auStack_130,auStack_80);
    func_0x00010c0be360(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 10513a038; end: 10513a0e3;  */

void FUN_10513a038(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513a0e4; end: 10513a19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513a0e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_48 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10513a1a0;
  puStack_50 = &UNK_1108471b0;
  func_0x00010c0bbfe0(*(undefined8 *)(lStack_48 + _DAT_11271d104),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lStack_70 = *(long *)(param_1 + 0x20);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10513a284;
  puStack_78 = &UNK_1108471b0;
  func_0x00010c0bbfe0(*(undefined8 *)(lStack_70 + _DAT_11271d0f0),param_2,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10513a1a0; end: 10513a283;  */

void FUN_10513a1a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))
            (0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513a284; end: 10513a43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513a284(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d104);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4018000000000000,0,0x4018000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4018000000000000,0,0x4018000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513a440; end: 10513a577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513a440(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  double dStack_50;
  undefined1 uStack_48;
  
  ppuVar4 = &puStack_d0;
  if ((param_1 <= 0.0) || ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
    lStack_b0 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(lStack_b0 + _DAT_11271d0f0);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10513aa74;
    puStack_b8 = &UNK_1108471b0;
  }
  else {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
    func_0x00010b8166c0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_58 = *(long *)(param_2 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10513a578;
    puStack_60 = &UNK_11086b030;
    dStack_50 = param_1;
    uStack_48 = uVar2;
    func_0x00010c0bbfe0(*(undefined8 *)(lStack_58 + _DAT_11271d110),param_3,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lStack_88 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(lStack_88 + _DAT_11271d0f0);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10513a7c8;
    puStack_90 = &UNK_11086b060;
    ppuVar4 = &puStack_a8;
    uStack_80 = uVar2;
  }
  func_0x00010c0bbfe0(uVar3,param_3,ppuVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10513a578; end: 10513aa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513a578(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  double dVar9;
  
  cVar1 = *(char *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar2 = param_2;
  if (cVar1 == '\x01') {
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 8.0;
  (**(code **)(lVar6 + 0x10))
            (0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1109c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111240();
  func_0x00010c0df720(dVar9 + -8.0 + -8.0,puVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d110);
  func_0x00010c0bbf20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10513aa74; end: 10513ab1f;  */

void FUN_10513aa74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (0x4010000000000000,0x4010000000000000,0x4010000000000000,0x4010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513ab20; end: 10513ad73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513ab20(long param_1,undefined *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_110 = *(long *)(param_1 + 0x20);
  lVar9 = (long)_DAT_11271d110;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10513ad74;
  puStack_118 = &UNK_1108471b0;
  func_0x00010c0bbfe0(*(undefined8 *)(lStack_110 + lVar9),param_2,&puStack_130);
  _objc_unsafeClaimAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010b8166c0();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar9);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    param_2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class();
    uVar2 = uVar3;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) != 0) {
      _CGAffineTransformMakeScale(&uStack_160,0xbff0000000000000,0x3ff0000000000000);
      uStack_188 = uStack_158;
      uStack_190 = uStack_160;
      uStack_178 = uStack_148;
      uStack_180 = uStack_150;
      uStack_168 = uStack_138;
      uStack_170 = uStack_140;
      func_0x00010c219960(uVar3);
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uVar2 = uVar3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf52a60();
      if (uVar4 != 0) {
        lVar9 = *plStack_1c0;
        do {
          uVar11 = 0;
          do {
            if (*plStack_1c0 != lVar9) {
              _objc_enumerationMutation(uVar2);
            }
            uVar10 = *(undefined8 *)(lStack_1c8 + uVar11 * 8);
            _CGAffineTransformMakeScale(&uStack_200,0xbff0000000000000,0x3ff0000000000000);
            uStack_188 = uStack_1f8;
            uStack_190 = uStack_200;
            uStack_178 = uStack_1e8;
            uStack_180 = uStack_1f0;
            uStack_168 = uStack_1d8;
            uStack_170 = uStack_1e0;
            func_0x00010c219960(uVar10);
            uVar11 = uVar11 + 1;
          } while (uVar4 != uVar11);
          uVar4 = uVar2;
          func_0x00010bf52a60();
        } while (uVar4 != 0);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
  }
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar5 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10513ad74; end: 10513afe7;  */

void FUN_10513ad74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513afe8; end: 10513b16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513afe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = param_1;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c0bc080();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    param_2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    param_3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    param_4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    lVar4 = (long)_DAT_11271d110;
  }
  else {
    func_0x00010c067640(param_7);
    lVar4 = (long)_DAT_11271d110;
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar4);
    func_0x00010c0bc080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_a8 = *(long *)(param_5 + 0x20);
  uVar3 = *(undefined8 *)(lStack_a8 + lVar4);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10513b170;
  puStack_b0 = &UNK_11086b0f0;
  uStack_a0 = uVar2;
  uStack_98 = uVar5;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_1;
  _objc_retain(uVar2);
  func_0x00010c0bbfe0(uVar3,param_6,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lStack_d0 = *(long *)(param_5 + 0x20);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10513b2ec;
  puStack_d8 = &UNK_1108471b0;
  func_0x00010c0bbfe0(*(undefined8 *)(lStack_d0 + _DAT_11271d0f0),param_6,&puStack_f0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_a0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10513b170; end: 10513b2eb;  */

void FUN_10513b170(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf87140();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513b2ec; end: 10513b45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513b2ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d110);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4018000000000000,0,0x4018000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513b45c; end: 10513b523;  */

void FUN_10513b45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010bdcf460(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10513b524; end: 10513b567;  */

void FUN_10513b524(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010beda7e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10513b568; end: 10513b56b;  */

void FUN_10513b568(void)

{
  return;
}



/* Entry: 10513b56c; end: 10513b5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513b56c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10513b5d4;
  puStack_20 = &UNK_1108471b0;
  func_0x00010c0bbfe0(*(undefined8 *)(lStack_18 + _DAT_11271d0f0),param_2,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10513b5d4; end: 10513b67f;  */

void FUN_10513b5d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513b680; end: 10513b7d3; -[SCSendToPreviewCollectionViewCell _aspectRatioPreviewForComposerContext:completion:] */

void FUN_10513b680(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_DAT_1126a4f08;
  if (param_4 != 0) {
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    lVar1 = param_3;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(param_3);
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(0,0,param_4);
    }
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010c2a15a0(lVar1);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10513b7d4; end: 10513b82b;  */

void FUN_10513b7d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be13f20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010513b828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(param_1,param_2);
  return;
}



/* Entry: 10513b82c; end: 10513b89b; -[SCSendToPreviewCollectionViewCell _fetchSizeFromContext:] */

undefined1  [16]
FUN_10513b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_4);
  func_0x00010c21d780(param_4,param_3,0);
  func_0x00010c2a5040(param_2);
  uVar1 = 0x7fefffffffffffff;
  func_0x00010c0c3ec0(param_4,param_3,0);
  _objc_release(param_4);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10513b89c; end: 10513b9e7; -[SCSendToPreviewCollectionViewCell _updateLayoutConstraintsForWidth:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513b89c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_3;
  func_0x00010be45680();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar2 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10513bd6c;
    puStack_c8 = &UNK_11084fc28;
    lStack_c0 = param_3;
    uStack_b8 = param_2;
    func_0x00010c0bbfe0(*(undefined8 *)(param_3 + _DAT_11271d110),param_4,&puStack_e0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + _DAT_11271d0f0);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10513bee0;
    puStack_f0 = &UNK_1108471b0;
    ppuVar4 = &puStack_108;
    lStack_e8 = param_3;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10513b9e8;
    puStack_70 = &UNK_11084fbb8;
    lStack_68 = param_3;
    uStack_60 = param_2;
    uStack_58 = param_1;
    func_0x00010c0bbfe0(*(undefined8 *)(param_3 + _DAT_11271d110),param_4,&puStack_88);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + _DAT_11271d0f0);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10513bbb0;
    puStack_98 = &UNK_1108471b0;
    ppuVar4 = &puStack_b0;
    lStack_90 = param_3;
  }
  func_0x00010c0bbfe0(uVar3,param_4,ppuVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10513b9e8; end: 10513bedf;  */

void FUN_10513b9e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))
            (0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513bee0; end: 10513c04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513bee0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d110);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4018000000000000,0,0x4018000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513c050; end: 10513c067; -[SCSendToPreviewCollectionViewCell _isVerticalPreview:height:] */

bool FUN_10513c050(double param_1,double param_2)

{
  return param_1 / param_2 <= 0.6145038167938931;
}



/* Entry: 10513c068; end: 10513c0cb; -[SCSendToPreviewCollectionViewCell _handlePlayForHorizontalConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c068(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d114);
  func_0x00010c29c040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513c0cc; end: 10513c20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c0cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar7 * 8);
      func_0x00010bf854a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c29c100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe360();
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11271d114);
  func_0x00010c29c040(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10513c20c; end: 10513c26f; -[SCSendToPreviewCollectionViewCell _handlePauseForHorizontalConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c20c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d114);
  func_0x00010c29c040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513c270; end: 10513c3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c270(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined1 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined1 uStack_1a0;
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
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  iVar10 = (int)auStack_d8;
  uVar11 = 0x10;
  lVar15 = param_2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar14 * 8);
        func_0x00010bf854a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c29c100();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f5b20();
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar4);
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      iVar10 = (int)auStack_d8;
      uVar11 = 0x10;
      lVar15 = param_2;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  lVar15 = (long)_DAT_11271d114;
  puVar12 = *(undefined1 **)(param_2 + lVar15);
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  if (puVar9 == (undefined8 *)puVar12) {
    _objc_release(puVar12);
    puVar12 = (undefined1 *)puVar9;
  }
  else {
    if (puVar12 == (undefined1 *)0x0) {
      _objc_release();
    }
    else {
      puVar5 = (undefined1 *)puVar9;
      func_0x00010c071ae0();
      _objc_release(puVar12);
      _objc_release(puVar9);
      if (((ulong)puVar5 & 1) != 0) goto LAB_10513c7d0;
    }
    uVar1 = *(undefined1 *)(param_2 + _DAT_11271d10c);
    lVar16 = (long)_DAT_11271d118;
    uVar6 = *(undefined8 *)(param_2 + lVar16);
    func_0x00010c29c100(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar7);
    _objc_release(uVar6);
    lVar13 = (long)_DAT_11271d110;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar13));
    lVar14 = (long)_DAT_11271d11c;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar14));
    uVar7 = *(undefined8 *)(param_2 + lVar14);
    *(undefined8 *)(param_2 + lVar14) = 0;
    _objc_release(uVar7);
    *(undefined1 *)(param_2 + _DAT_11271d120) = uVar11;
    _objc_retain(puVar9);
    uVar7 = *(undefined8 *)(param_2 + lVar15);
    *(undefined8 **)(param_2 + lVar15) = puVar9;
    _objc_release(uVar7);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if ((*(byte *)(param_2 + _DAT_11271d108) & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + lVar15);
      func_0x00010c29c040(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_1c8 = puVar2;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_10513c7fc;
      puStack_1b0 = &UNK_11086b090;
      puStack_1f0 = puVar2;
      uStack_1e8 = 0xc2000000;
      pcStack_1e0 = FUN_10513c858;
      puStack_1d8 = &UNK_11086b0c0;
      puStack_218 = puVar2;
      uStack_210 = 0xc2000000;
      uStack_208 = 0x10513c894;
      puStack_200 = &UNK_11086b120;
      puStack_240 = puVar2;
      uStack_238 = 0xc2000000;
      uStack_230 = 0x10513c8d0;
      puStack_228 = &UNK_11086b210;
      lStack_220 = param_2;
      lStack_1f8 = param_2;
      lStack_1d0 = param_2;
      lStack_1a8 = param_2;
      uStack_1a0 = uVar1;
      func_0x00010c0be360();
      _objc_release(uVar7);
      lVar14 = *(long *)(param_2 + lVar16);
      if (lVar14 != 0) {
        func_0x00010c29e0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_2 + lVar13);
        *(long *)(param_2 + lVar13) = lVar16;
        _objc_release(uVar7);
        _objc_release(lVar14);
        func_0x00010c12c960(*(undefined8 *)(param_2 + lVar13));
        func_0x00010c17d4c0(*(undefined8 *)(param_2 + lVar13));
      }
      uVar7 = *(undefined8 *)(param_2 + lVar15);
      func_0x00010c29c040(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_268 = puVar2;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_10513c90c;
      puStack_250 = &UNK_110850cc8;
      puStack_298 = puVar2;
      uStack_290 = 0xc2000000;
      uStack_288 = 0x10513c918;
      puStack_280 = &UNK_11086b090;
      puStack_2c0 = puVar2;
      uStack_2b8 = 0xc2000000;
      uStack_2b0 = 0x10513c938;
      puStack_2a8 = &UNK_11086b0c0;
      puStack_2e8 = puVar2;
      uStack_2e0 = 0xc2000000;
      uStack_2d8 = 0x10513c94c;
      puStack_2d0 = &UNK_11086b120;
      puStack_310 = puVar2;
      uStack_308 = 0xc2000000;
      uStack_300 = 0x10513c960;
      puStack_2f8 = &UNK_11086b210;
      lStack_2f0 = param_2;
      lStack_2c8 = param_2;
      lStack_2a0 = param_2;
      lStack_278 = param_2;
      uStack_270 = uVar1;
      lStack_248 = param_2;
      func_0x00010c0be360();
      _objc_release(uVar7);
    }
    func_0x00010beda7c0(param_2);
    puVar12 = *(undefined1 **)(param_2 + lVar15);
    func_0x00010c064560();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11271d0f0;
    uVar7 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c26b700(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_2 + lVar13));
      uVar7 = *(undefined8 *)(param_2 + lVar13);
      func_0x00010bf6b020(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cb00();
      _objc_release(uVar7);
    }
    uVar8 = *(ulong *)(param_2 + lVar15);
    func_0x00010c290d80();
    if ((uVar8 & 1) == 0) {
      iVar3 = (int)*(undefined8 *)(param_2 + lVar15);
      func_0x00010c290d80();
      if ((iVar10 != 0) && (iVar3 == 0)) goto LAB_10513c76c;
    }
    else {
LAB_10513c76c:
      puStack_338 = puVar2;
      uStack_330 = 0xc2000000;
      pcStack_328 = FUN_10513c974;
      puStack_320 = &UNK_110842e18;
      lStack_318 = param_2;
      func_0x000100162d98("APPSTORE",&puStack_338);
    }
    func_0x00010c1cbe20(param_2);
    if (*(char *)(param_2 + _DAT_11271d124) == '\x01') {
      func_0x00010c0fe360(param_2);
    }
  }
  _objc_release(puVar12);
LAB_10513c7d0:
  _objc_release(puVar9);
  return;
}



/* Entry: 10513c3b0; end: 10513c7fb; -[SCSendToPreviewCollectionViewCell setPreviewConfiguration:useUpdatedBackgroundColorForAll:useMinHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c3b0(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined1 param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11271d114;
  uVar7 = *(ulong *)(param_1 + lVar10);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  if (param_3 == uVar7) {
    _objc_release(uVar7);
    uVar7 = param_3;
  }
  else {
    if (uVar7 == 0) {
      _objc_release();
    }
    else {
      uVar6 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(param_3);
      if ((uVar6 & 1) != 0) goto LAB_10513c7d0;
    }
    uVar1 = *(undefined1 *)(param_1 + _DAT_11271d10c);
    lVar11 = (long)_DAT_11271d118;
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c29c100(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11271d110;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar8));
    lVar9 = (long)_DAT_11271d11c;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar9));
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + _DAT_11271d120) = param_5;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = param_3;
    _objc_release(uVar5);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if ((*(byte *)(param_1 + _DAT_11271d108) & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c29c040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar2;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10513c7fc;
      puStack_90 = &UNK_11086b090;
      puStack_d0 = puVar2;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10513c858;
      puStack_b8 = &UNK_11086b0c0;
      puStack_f8 = puVar2;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x10513c894;
      puStack_e0 = &UNK_11086b120;
      puStack_120 = puVar2;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x10513c8d0;
      puStack_108 = &UNK_11086b210;
      lStack_100 = param_1;
      lStack_d8 = param_1;
      lStack_b0 = param_1;
      lStack_88 = param_1;
      uStack_80 = uVar1;
      func_0x00010c0be360();
      _objc_release(uVar5);
      lVar9 = *(long *)(param_1 + lVar11);
      if (lVar9 != 0) {
        func_0x00010c29e0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        *(long *)(param_1 + lVar8) = lVar11;
        _objc_release(uVar5);
        _objc_release(lVar9);
        func_0x00010c12c960(*(undefined8 *)(param_1 + lVar8));
        func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar8));
      }
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c29c040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = puVar2;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_10513c90c;
      puStack_130 = &UNK_110850cc8;
      puStack_178 = puVar2;
      uStack_170 = 0xc2000000;
      uStack_168 = 0x10513c918;
      puStack_160 = &UNK_11086b090;
      puStack_1a0 = puVar2;
      uStack_198 = 0xc2000000;
      uStack_190 = 0x10513c938;
      puStack_188 = &UNK_11086b0c0;
      puStack_1c8 = puVar2;
      uStack_1c0 = 0xc2000000;
      uStack_1b8 = 0x10513c94c;
      puStack_1b0 = &UNK_11086b120;
      puStack_1f0 = puVar2;
      uStack_1e8 = 0xc2000000;
      uStack_1e0 = 0x10513c960;
      puStack_1d8 = &UNK_11086b210;
      lStack_1d0 = param_1;
      lStack_1a8 = param_1;
      lStack_180 = param_1;
      lStack_158 = param_1;
      uStack_150 = uVar1;
      lStack_128 = param_1;
      func_0x00010c0be360();
      _objc_release(uVar5);
    }
    func_0x00010beda7c0(param_1);
    uVar7 = *(ulong *)(param_1 + lVar10);
    func_0x00010c064560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11271d0f0;
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c26b700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf6b020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cb00();
      _objc_release(uVar5);
    }
    uVar6 = *(ulong *)(param_1 + lVar10);
    func_0x00010c290d80();
    if ((uVar6 & 1) == 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + lVar10);
      func_0x00010c290d80();
      if ((param_4 != 0) && (iVar3 == 0)) goto LAB_10513c76c;
    }
    else {
LAB_10513c76c:
      puStack_218 = puVar2;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_10513c974;
      puStack_200 = &UNK_110842e18;
      lStack_1f8 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_218);
    }
    func_0x00010c1cbe20(param_1);
    if (*(char *)(param_1 + _DAT_11271d124) == '\x01') {
      func_0x00010c0fe360(param_1);
    }
  }
  _objc_release(uVar7);
LAB_10513c7d0:
  _objc_release(param_3);
  return;
}



/* Entry: 10513c7fc; end: 10513c857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c7fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = (long)_DAT_11271d118;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + lVar3);
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513c858; end: 10513c90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513c858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d118);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d118) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513c90c; end: 10513c973;  */

void FUN_10513c90c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdee890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createHorizontalContainerViewWi_1125593c0,
             param_2);
  return;
}



/* Entry: 10513c974; end: 10513c9bb;  */

void FUN_10513c974(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10513c9bc; end: 10513cc5b; -[SCSendToPreviewCollectionViewCell contentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10513c9bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  lVar2 = param_2;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111240();
  _objc_release(lVar2);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uStack_68 = param_1;
  _objc_initWeak(auStack_a8,param_2);
  lVar2 = param_2;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c1109c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29c040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10513cc5c;
    puStack_c0 = &UNK_11086b240;
    _objc_copyWeak(auStack_b0,auStack_a8);
    puStack_110 = &uStack_80;
    puStack_100 = puVar1;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10513cd04;
    puStack_e8 = &UNK_11086b270;
    puStack_e0 = &uStack_a0;
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10513cd18;
    puStack_120 = &UNK_11086b2d0;
    lStack_118 = param_2;
    puStack_b8 = puStack_110;
    _objc_copyWeak(auStack_108,auStack_a8);
    _objc_copyWeak(auStack_140,auStack_a8);
    func_0x00010c0be360(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_b0);
  }
  if (((*(byte *)(param_2 + _DAT_11271d108) & 1) == 0) &&
     ((*(char *)(puStack_98 + 3) != '\x01' || ((*(byte *)(param_2 + _DAT_11271d10c) & 1) == 0)))) {
    uVar4 = puStack_78[3];
  }
  else {
    uVar4 = 0x4044000000000000;
  }
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  return uVar4;
}



/* Entry: 10513cc5c; end: 10513cd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513cc5c(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_11271d128) != 0) {
      func_0x00010bfb2c80();
      dVar3 = (double)param_1;
      goto LAB_10513ccd8;
    }
  }
  dVar3 = *(double *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18);
  lVar2 = param_3;
  func_0x00010bf529e0();
  dVar3 = dVar3 + (double)(lVar2 - 1) * 64.0;
LAB_10513ccd8:
  *(double *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = dVar3;
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10513cd04; end: 10513cd17;  */

void FUN_10513cd04(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10513cd18; end: 10513ce5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513cd18(long param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = (long)_DAT_11271d0fc;
  pdVar1 = (double *)(lVar5 + lVar6);
  dVar7 = pdVar1[1];
  bVar3 = false;
  if ((*pdVar1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar3 = false, !NAN(dVar7) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar3 = dVar7 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar3) {
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    func_0x00010bdcf460(lVar5);
    _objc_destroyWeak(auStack_48);
  }
  else {
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained();
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
    lVar4 = lVar5;
    func_0x00010be45680(*puVar2,puVar2[1]);
    dVar7 = *(double *)(*(long *)(param_1 + 0x20) + lVar6 + 8);
    if ((int)lVar4 == 0) {
      dVar7 = dVar7 + 40.0;
    }
    *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = dVar7;
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10513ce60; end: 10513cec7;  */

void FUN_10513ce60(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be45680(param_1,param_2);
  if ((int)lVar2 == 0) {
    param_2 = param_2 + 40.0;
  }
  *(double *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513cec8; end: 10513cf13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513cec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + _DAT_11271d120) == '\x01')) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x4044000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10513cf14; end: 10513cf43; -[SCSendToPreviewCollectionViewCell textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513cf14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d0f0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10513cf44; end: 10513d123; -[SCSendToPreviewCollectionViewCell textLabelMinContentHeight] */

/* WARNING: Possible PIC construction at 0x00010513d06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010513d098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010513d070) */
/* WARNING: Removing unreachable block (ram,0x00010513d09c) */
/* WARNING: Removing unreachable block (ram,0x00010513d0b8) */

void FUN_10513cf44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010c1109c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10513d124;
    puStack_78 = &UNK_11086b270;
    puStack_70 = &uStack_60;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0be360(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf4c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentHeight_1125b0b40);
  return;
}



/* Entry: 10513d124; end: 10513d137;  */

void FUN_10513d124(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10513d138; end: 10513d263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d138(long param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = (long)_DAT_11271d0fc;
  pdVar1 = (double *)(lVar4 + lVar5);
  dVar6 = pdVar1[1];
  bVar3 = false;
  if ((*pdVar1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar3 = false, !NAN(dVar6) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar3 = dVar6 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar3) {
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    func_0x00010bdcf460(lVar4);
    _objc_destroyWeak(auStack_48);
  }
  else {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained();
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    lVar5 = lVar4;
    func_0x00010be45680(*puVar2,puVar2[1]);
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar5;
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10513d264; end: 10513d2b7;  */

void FUN_10513d264(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be45680(param_1,param_2);
  *(char *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = (char)lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10513d2b8; end: 10513d327; -[SCSendToPreviewCollectionViewCell play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d2b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_11271d124) = 1;
  lVar2 = *(long *)(param_1 + _DAT_11271d118);
  if (lVar2 != 0) {
    func_0x00010c29c100(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePlayForHorizontalConfigs_1125691f0);
  return;
}



/* Entry: 10513d328; end: 10513d393; -[SCSendToPreviewCollectionViewCell pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d328(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_11271d124) = 0;
  lVar2 = *(long *)(param_1 + _DAT_11271d118);
  if (lVar2 != 0) {
    func_0x00010c29c100(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePauseForHorizontalConfigs_1125690c8);
  return;
}



/* Entry: 10513d394; end: 10513d3c3; -[SCSendToPreviewCollectionViewCell toggleValuesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d394(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d0f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10513d3c4; end: 10513d477; -[SCSendToPreviewCollectionViewCell updateContentHeightForContentWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10513d3c4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 1.79769313486232e+308;
  func_0x00010c267060(param_1,0x7fefffffffffffff,0x447a0000,0x42480000,
                      *(undefined8 *)(param_2 + _DAT_11271d100));
  dVar4 = dVar3;
  func_0x00010bf4d5e0(*(undefined8 *)(param_2 + _DAT_11271d0f0));
  dVar4 = dVar3 + 8.0 + 6.0 + dVar4 + 6.0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11271d128);
  *(undefined **)(param_2 + _DAT_11271d128) = puVar1;
  _objc_release(uVar2);
  return dVar4;
}



/* Entry: 10513d478; end: 10513d4cb; -[SCSendToPreviewCollectionViewCell onLayoutDirty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d478(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010be13f20();
  lVar1 = (long)_DAT_11271d0fc;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  func_0x00010bf4c660(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beda7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__updateLayoutConstraintsForWidth_1125943a0);
  return;
}



/* Entry: 10513d4cc; end: 10513d507; -[SCSendToPreviewCollectionViewCell removeTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d4cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271d0f0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c08cdc0(param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513d508; end: 10513d517; -[SCSendToPreviewCollectionViewCell previewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10513d508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d114);
}



/* Entry: 10513d518; end: 10513d557; -[SCSendToPreviewCollectionViewCell setPreviewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271d114;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10513d558; end: 10513d567; -[SCSendToPreviewCollectionViewCell disableSinglePreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10513d558(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271d10c);
}



/* Entry: 10513d568; end: 10513d577; -[SCSendToPreviewCollectionViewCell setDisableSinglePreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d568(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271d10c) = param_3;
  return;
}



/* Entry: 10513d578; end: 10513d587; -[SCSendToPreviewCollectionViewCell disablePreviewAll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10513d578(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271d108);
}



/* Entry: 10513d588; end: 10513d597; -[SCSendToPreviewCollectionViewCell setDisablePreviewAll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d588(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271d108) = param_3;
  return;
}



/* Entry: 10513d598; end: 10513d657; -[SCSendToPreviewCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513d598(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d114,0);
  _objc_storeStrong(param_1 + _DAT_11271d0f4,0);
  _objc_storeStrong(param_1 + _DAT_11271d0f8,0);
  _objc_storeStrong(param_1 + _DAT_11271d118,0);
  _objc_storeStrong(param_1 + _DAT_11271d100,0);
  _objc_storeStrong(param_1 + _DAT_11271d128,0);
  _objc_storeStrong(param_1 + _DAT_11271d104,0);
  _objc_storeStrong(param_1 + _DAT_11271d11c,0);
  _objc_storeStrong(param_1 + _DAT_11271d110,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d0f0,0);
  return;
}



/* Entry: 10513d658; end: 10513daeb; -[SCSendToPreviewHorizontalView initWithHorizontalViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10513d658(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e6630;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x4014000000000000;
    func_0x00010c1842e0();
    _objc_release(puVar3);
    func_0x00010bf0aca0(param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271d12c) = uVar8;
    lVar6 = param_3;
    func_0x00010c067680();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d130);
    *(long *)((long)puVar1 + (long)_DAT_11271d130) = lVar6;
    _objc_release(uVar8);
    lVar6 = param_3;
    func_0x00010c13b5a0();
    *(char *)((long)puVar1 + (long)_DAT_11271d134) = (char)lVar6;
    lVar6 = param_3;
    func_0x00010bf854a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c29e0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d138);
    *(long *)((long)puVar1 + (long)_DAT_11271d138) = lVar4;
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    func_0x00010befbb60(puVar1);
    lVar6 = param_3;
    func_0x00010c271460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc_init();
      lVar7 = (long)_DAT_11271d13c;
      uVar8 = *(undefined8 *)((long)puVar1 + lVar7);
      *(undefined **)((long)puVar1 + lVar7) = puVar2;
      _objc_release(uVar8);
      lVar6 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    }
    else {
      lVar4 = param_3;
      func_0x00010c271460();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11271d13c;
      lVar6 = *(long *)((long)puVar1 + lVar7);
      *(long *)((long)puVar1 + lVar7) = lVar4;
    }
    _objc_release(lVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11271d140;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar8);
    lVar6 = param_3;
    func_0x00010c260dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(lVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    lVar6 = param_3;
    func_0x00010beed380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar2 = PTR_PTR_1126b0d78;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d144);
      *(undefined **)((long)puVar1 + (long)_DAT_11271d144) = puVar2;
      _objc_release(uVar8);
      lVar6 = param_3;
      func_0x00010beed380(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      func_0x00010c0c0d60(lVar6);
      _objc_release(lVar6);
      func_0x00010befbb60(puVar1);
      _objc_release(puVar1);
    }
    func_0x00010beda7c0(puVar1);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10513daec; end: 10513db03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513daec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d144),
             PTR_s_setIsOn_animated__11264a5f8,param_3,0);
  return;
}



/* Entry: 10513db04; end: 10513e41b; -[SCSendToPreviewHorizontalView _updateLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10513db04(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_4,param_5,0);
  cVar1 = *(char *)(param_4 + _DAT_11271d134);
  lVar18 = param_4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  iVar19 = _DAT_11271d138;
  lVar3 = lVar18;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_4 + _DAT_11271d138);
    func_0x00010bfe0660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(lVar18,param_5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar18);
    uStack_128 = 0;
  }
  else {
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    iVar19 = _DAT_11271d138;
    lVar18 = (long)_DAT_11271d138;
    uVar2 = *(undefined8 *)(param_4 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_4 + lVar18);
    func_0x00010bfe0660(uVar16);
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(undefined8 *)(param_4 + _DAT_11271d12c);
    uStack_128 = uVar2;
    func_0x00010bf493e0(param_1,uVar2,param_5,uVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar2);
    puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uStack_128;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar21,param_5,puVar4);
    _objc_release(puVar4);
  }
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_a0 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&lStack_a0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_5,puVar4);
  _objc_release(puVar4);
  if (*(long *)(param_4 + _DAT_11271d130) == 0) {
    param_2 = 0x4022000000000000;
    param_3 = 6.0;
    param_1 = 0x4018000000000000;
  }
  else {
    func_0x00010c067640();
  }
  func_0x00010c219b60(*(undefined8 *)(param_4 + iVar19),param_5,0);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_4 + iVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(param_2,uVar5,param_5,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + iVar19);
  uStack_b8 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_4;
  func_0x00010c274200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493c0(param_1,uVar6,param_5,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + iVar19);
  uStack_b0 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010bf1ff80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(-param_3,uVar7,param_5,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_5,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar16);
  _objc_release(lVar20);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar18);
  _objc_release(uVar5);
  lVar20 = (long)_DAT_11271d13c;
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar20),param_5,0);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + iVar19);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0x4024000000000000,uVar5,param_5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar20);
  uStack_d0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_4;
  func_0x00010c274200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493c0(0x402c000000000000,uVar7,param_5,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_4 + lVar20);
  uStack_c8 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_5,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(lVar18);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar18 = (long)_DAT_11271d140;
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar18),param_5,0);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(param_4 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0(uVar6,param_5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_4 + lVar18);
  uStack_f0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010c2793a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bf493a0(uVar10,param_5,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar18);
  uStack_e8 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_4 + lVar20);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf493c0(0x3ff0000000000000,uVar12,param_5,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_4 + lVar18);
  uStack_e0 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_f0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_5,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = (long)_DAT_11271d144;
  if (*(long *)(param_4 + lVar18) == 0) {
    uVar16 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010bf493c0(0xc024000000000000,uVar16,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = &uStack_118;
    uStack_118 = uVar2;
  }
  else {
    func_0x00010c219b60(*(long *)(param_4 + lVar18),param_5,0);
    puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_4 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493c0(0xc042000000000000,uVar5,param_5,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_4 + lVar18);
    uStack_108 = uVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_4;
    func_0x00010bf348e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010bf493a0(uVar6,param_5,lVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + lVar18);
    uStack_100 = uVar16;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_108,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar21,param_5,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(lVar15);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(lVar8);
    _objc_release(uVar5);
    puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)(param_4 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = *(long *)(param_4 + lVar18);
    func_0x00010c08de00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010bf493c0(0xc024000000000000,uVar16,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = &uStack_110;
    uStack_110 = uVar2;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,puVar17,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_5,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar16);
  _objc_release(uStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + _DAT_11271d144);
}



/* Entry: 10513e41c; end: 10513e42b; -[SCSendToPreviewHorizontalView toggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10513e41c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d144);
}



/* Entry: 10513e42c; end: 10513e49b; -[SCSendToPreviewHorizontalView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10513e42c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d144,0);
  _objc_storeStrong(param_1 + _DAT_11271d140,0);
  _objc_storeStrong(param_1 + _DAT_11271d13c,0);
  _objc_storeStrong(param_1 + _DAT_11271d138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d130,0);
  return;
}



/* Entry: 10513e49c; end: 10513e4a7; +[SCSendToPreviewSection announcerIdentifier] */

undefined ** FUN_10513e49c(void)

{
  return &PTR____CFConstantStringClassReference_110dc71d8;
}



/* Entry: 10513e4a8; end: 10513e4af; -[SCSendToPreviewSection addListener:] */

void FUN_10513e4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10513e4b0; end: 10513e4b7; -[SCSendToPreviewSection removeListener:] */

void FUN_10513e4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10513e4b8; end: 10513e4bf; -[SCSendToPreviewSection didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10513e4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 10513e4c0; end: 10513e8d7; -[SCSendToPreviewSection initWithPreviewConfiguration:sendToTracker:sendToExperimentConfiguration:showSendToTray:] */

undefined8 *
FUN_10513e4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126e6638;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    func_0x00010c111240(param_4);
    puVar1[5] = param_1;
    puVar1[0xf] = 2;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_5;
    func_0x00010bf9a080(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e0e80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10513e8d8;
    puStack_a0 = &UNK_11086a5e0;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x65) = param_7;
    *(undefined1 *)((long)puVar1 + 0x66) = 0;
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf9bde0();
    *(char *)((long)puVar1 + 0x67) = (char)uVar5;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c29c040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10513e920;
    puStack_c8 = &UNK_110850cc8;
    _objc_retain(puVar1);
    puStack_c0 = puVar1;
    _objc_copyWeak(auStack_e8,auStack_90);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    func_0x00010c0be360(uVar2);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf805e0();
    *(char *)(puVar1 + 0xc) = (char)uVar5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf805c0();
    *(char *)((long)puVar1 + 0x61) = (char)uVar5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf8f320();
    *(char *)((long)puVar1 + 100) = (char)uVar5;
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_e8);
    _objc_release(puStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10513e8d8; end: 10513e91f;  */

void FUN_10513e8d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513e920; end: 10513e997;  */

void FUN_10513e920(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c13b5a0();
    *(char *)(*(long *)(param_1 + 0x20) + 0x50) = (char)lVar2;
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513e998; end: 10513ea2f;  */

void FUN_10513e998(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2d40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513ea30; end: 10513ea3f;  */

void FUN_10513ea30(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 99) = 1;
  return;
}



/* Entry: 10513ea40; end: 10513ea67; -[SCSendToPreviewSection tearDown] */

void FUN_10513ea40(long param_1)

{
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10513ea68; end: 10513eae7; -[SCSendToPreviewSection reuseCellClassesByIdentifiers] */

undefined * FUN_10513ea68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc71b8;
  puVar1 = PTR_PTR_1126b5208;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  if ((((puVar2[0x65] != '\x01') || ((puVar2[0x66] & 1) != 0)) || ((puVar2[0x67] & 1) == 0)) &&
     (((puVar2[0x62] & 1) == 0 && ((puVar2[99] != '\x01' || ((puVar2[100] & 1) == 0)))))) {
    return (undefined *)(ulong)(*(long *)(puVar2 + 8) != 0);
  }
  return (undefined *)0x0;
}



/* Entry: 10513eae8; end: 10513eb37; -[SCSendToPreviewSection numberOfCellsInSection] */

bool FUN_10513eae8(long param_1)

{
  if ((((*(char *)(param_1 + 0x65) != '\x01') || ((*(byte *)(param_1 + 0x66) & 1) != 0)) ||
      ((*(byte *)(param_1 + 0x67) & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x62) & 1) == 0 &&
      ((*(char *)(param_1 + 99) != '\x01' || ((*(byte *)(param_1 + 100) & 1) == 0)))))) {
    return *(long *)(param_1 + 8) != 0;
  }
  return false;
}



/* Entry: 10513eb38; end: 10513eb67; -[SCSendToPreviewSection sectionInsets] */

void FUN_10513eb38(long param_1)

{
  func_0x00010bf8d060(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0x4020000000000000,0x4030000000000000,
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 10513eb68; end: 10513edcf; -[SCSendToPreviewSection cellForItemAtIndexInSection:] */

void FUN_10513eb68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5208;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26ca80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar5);
  func_0x00010c18eb40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c18ea80(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 100) == '\x01') {
    func_0x00010c12eac0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272d60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0e0e80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar7 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar6);
  func_0x00010c1e1b00(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x30) = 0;
  func_0x00010c0fe360(*(undefined8 *)(param_1 + 0x20));
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10513edd0; end: 10513ee17;  */

void FUN_10513edd0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10513ee18; end: 10513efa3; -[SCSendToPreviewSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_10513ee18(double param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar3 = param_1 + -16.0 + -16.0;
  if (((*(byte *)(param_2 + 0x50) & 1) != 0) || (*(char *)(param_2 + 0x61) == '\x01')) {
    func_0x00010bed6000(dVar3,param_2);
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = 0x2020000000;
  uVar1 = *(undefined1 *)(param_2 + 0x60);
  _objc_initWeak(auStack_68,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c29c040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = uVar1;
  _objc_copyWeak(auStack_78,auStack_68);
  func_0x00010c0be360(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_58[3];
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 10513efa4; end: 10513f00f;  */

void FUN_10513efa4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  if ((40.0 < *(double *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18)) &&
     (*(char *)(param_1 + 0x30) == '\x01')) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed5fe0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10513f010; end: 10513f03f;  */

void FUN_10513f010(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 0x28) / param_1 + 40.0;
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  if (*(double *)(lVar1 + 0x18) < dVar2) {
    *(double *)(lVar1 + 0x18) = dVar2;
  }
  return;
}



/* Entry: 10513f040; end: 10513f04b; -[SCSendToPreviewSection startPlayback] */

void FUN_10513f040(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 10513f04c; end: 10513f077; -[SCSendToPreviewSection stopPlayback] */

void FUN_10513f04c(long param_1)

{
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10513f078; end: 10513f0bf; -[SCSendToPreviewSection textViewDidChange:] */

void FUN_10513f078(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e22c0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bed5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentHeight_1125931a0);
  return;
}



/* Entry: 10513f0c0; end: 10513f113; -[SCSendToPreviewSection textView:shouldChangeTextInRange:replacementText:] */

uint FUN_10513f0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((uint)param_6 != 0) {
    func_0x00010c13a0e0(param_3);
  }
  _objc_release(param_3);
  return (uint)param_6 ^ 1;
}



/* Entry: 10513f114; end: 10513f157; -[SCSendToPreviewSection textViewDidBeginEditing:] */

void FUN_10513f114(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010bf9be40(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10513f158; end: 10513f15f; -[SCSendToPreviewSection _updateContentHeightForContentWidth:] */

void FUN_10513f158(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bed5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateContentHeight_1125931a0);
  return;
}



/* Entry: 10513f160; end: 10513f257; -[SCSendToPreviewSection _updateContentHeight] */

void FUN_10513f160(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c26ca80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  _objc_release(uVar1);
  func_0x00010c26c2c0(*(undefined8 *)(param_5 + 0x20));
  dVar2 = param_1;
  if ((*(char *)(param_5 + 0x50) != '\x01') || (dVar2 = *(double *)(param_5 + 0x58), dVar2 <= 0.0))
  {
    func_0x00010bf4c660(*(undefined8 *)(param_5 + 0x20));
    if (param_1 <= param_2) {
      dVar2 = (param_2 - param_1) + dVar2;
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
    if (ABS(param_4 - dVar2) <= 1.1920928955078125e-07) {
      return;
    }
    *(double *)(param_5 + 0x28) = dVar2;
  }
  else {
    func_0x00010c284900(*(undefined8 *)(param_5 + 0x20));
    if (ABS(*(double *)(param_5 + 0x28) - dVar2) <= 1.1920928955078125e-07) {
      return;
    }
    *(double *)(param_5 + 0x28) = dVar2;
  }
  param_5 = param_5 + 0x70;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf40960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}


