/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ffd7fc; end: 107ffd813; -[SCDirectorModeScope scopeDelegate] */

void FUN_107ffd7fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffd814; end: 107ffd82b; -[SCDirectorModeScope draftDelegate] */

void FUN_107ffd814(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffd82c; end: 107ffd843; -[SCDirectorModeScope sendSnapDelegate] */

void FUN_107ffd82c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffd844; end: 107ffd85b; -[SCDirectorModeScope transitionDelegate] */

void FUN_107ffd844(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffd85c; end: 107ffd863; -[SCDirectorModeScope shortcutContextAction] */

undefined8 FUN_107ffd85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107ffd864; end: 107ffd86b; -[SCDirectorModeScope mediaProvider] */

undefined8 FUN_107ffd864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ffd86c; end: 107ffd89b; -[SCDirectorModeScope setMediaProvider:] */

void FUN_107ffd86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ffd89c; end: 107ffd8a3; -[SCDirectorModeScope toolbarFeatureAllowlist] */

undefined8 FUN_107ffd89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107ffd8a4; end: 107ffd8d3; -[SCDirectorModeScope setToolbarFeatureAllowlist:] */

void FUN_107ffd8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ffd8d4; end: 107ffd8db; -[SCDirectorModeScope spotlightPostingConfiguration] */

undefined8 FUN_107ffd8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107ffd8dc; end: 107ffd967; -[SCDirectorModeScope .cxx_destruct] */

void FUN_107ffd8dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffd968; end: 107ffda73; -[SCDirectorModeImportedMediaSegment initWithImportedContentId:importedMedia:trimmedTimeRangeValue:mediaMetadata:] */

undefined1 *
FUN_107ffd968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc138;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffda74; end: 107ffda97; -[SCDirectorModeImportedMediaSegment copyWithZone:] */

undefined8 FUN_107ffda74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffda98; end: 107ffdb23; -[SCDirectorModeImportedMediaSegment hash] */

undefined8 * FUN_107ffda98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107ffdbd4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ffdbe0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_107ffdbe0;
            }
            goto LAB_107ffdbd4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107ffdbe0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107ffdb24; end: 107ffdbfb; -[SCDirectorModeImportedMediaSegment isEqual:] */

long FUN_107ffdb24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ffdbd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ffdbe0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_107ffdbe0;
            }
            goto LAB_107ffdbd4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107ffdbe0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ffdbfc; end: 107ffdc03; -[SCDirectorModeImportedMediaSegment importedContentId] */

undefined8 FUN_107ffdbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffdc04; end: 107ffdc0b; -[SCDirectorModeImportedMediaSegment importedMedia] */

undefined8 FUN_107ffdc04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ffdc0c; end: 107ffdc13; -[SCDirectorModeImportedMediaSegment trimmedTimeRangeValue] */

undefined8 FUN_107ffdc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ffdc14; end: 107ffdc1b; -[SCDirectorModeImportedMediaSegment mediaMetadata] */

undefined8 FUN_107ffdc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ffdc1c; end: 107ffdc63; -[SCDirectorModeImportedMediaSegment .cxx_destruct] */

void FUN_107ffdc1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffdc64; end: 107ffdcc7; +[SCDirectorModeImportedMediaAsset imageWithImage:] */

void FUN_107ffdc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff30;
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



/* Entry: 107ffdcc8; end: 107ffdd33; +[SCDirectorModeImportedMediaAsset snapDocEditorWithSnapDocEditor:] */

void FUN_107ffdcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff30;
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



/* Entry: 107ffdd34; end: 107ffdd9f; +[SCDirectorModeImportedMediaAsset videoWithVideoAVAsset:] */

void FUN_107ffdd34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff30;
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



/* Entry: 107ffdda0; end: 107ffdf43; -[SCDirectorModeImportedMediaAsset initWithCoder:] */

undefined8 * FUN_107ffdda0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126fc140;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_107ffded0;
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[2];
      puVar1[2] = uVar2;
      _objc_release(uVar4);
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107ffded0:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 107ffdf44; end: 107ffdf67; -[SCDirectorModeImportedMediaAsset copyWithZone:] */

undefined8 FUN_107ffdf44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffdf68; end: 107ffdfef; -[SCDirectorModeImportedMediaAsset encodeWithCoder:] */

void FUN_107ffdf68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eceeb8;
  }
  else if (lVar2 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6fd8;
  }
  else {
    if (lVar2 != 0) goto LAB_107ffdfe0;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110e892b8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6f98;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_107ffdfe0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ffdff0; end: 107ffe073; -[SCDirectorModeImportedMediaAsset hash] */

void FUN_107ffdff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fc140;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffe074; end: 107ffe0b7; -[SCDirectorModeImportedMediaAsset internalInit] */

void FUN_107ffe074(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffe0b8; end: 107ffe187; -[SCDirectorModeImportedMediaAsset isEqual:] */

long FUN_107ffe0b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ffe160:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ffe16c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107ffe16c;
          }
          goto LAB_107ffe160;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107ffe16c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ffe188; end: 107ffe233; -[SCDirectorModeImportedMediaAsset matchImage:video:snapDocEditor:] */

void FUN_107ffe188(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_107ffe210;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_107ffe210;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_107ffe210;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_107ffe210:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ffe234; end: 107ffe26f; -[SCDirectorModeImportedMediaAsset .cxx_destruct] */

void FUN_107ffe234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ffe270; end: 107ffe33b; +[SCDirectorModeImportedMediaMetadata cameraRollMediaWithSourcePHAsset:url:externalMediaSource:embeddedMetadata:] */

void FUN_107ffe270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126aff28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x20) = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffe33c; end: 107ffe3a7; +[SCDirectorModeImportedMediaMetadata memoriesMediaWithSnapId:] */

void FUN_107ffe33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffe3a8; end: 107ffe43f; +[SCDirectorModeImportedMediaMetadata remixMediaWithRemixMetadata:url:] */

void FUN_107ffe3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aff28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffe440; end: 107ffe4ab; +[SCDirectorModeImportedMediaMetadata spotlightMediaWithUrl:] */

void FUN_107ffe440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffe4ac; end: 107ffe4cf; -[SCDirectorModeImportedMediaMetadata copyWithZone:] */

undefined8 FUN_107ffe4ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffe4d0; end: 107ffe587; -[SCDirectorModeImportedMediaMetadata hash] */

void FUN_107ffe4d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lStack_58 = (long)*(int *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126fc148;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffe588; end: 107ffe5cb; -[SCDirectorModeImportedMediaMetadata internalInit] */

void FUN_107ffe588(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffe5cc; end: 107ffe70b; -[SCDirectorModeImportedMediaMetadata isEqual:] */

long FUN_107ffe5cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ffe6e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ffe6f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(int *)(param_1 + 0x20) == *(int *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_107ffe6f0;
                  }
                  goto LAB_107ffe6e4;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107ffe6f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ffe70c; end: 107ffe80b; -[SCDirectorModeImportedMediaMetadata matchCameraRollMedia:remixMedia:memoriesMedia:spotlightMedia:] */

void FUN_107ffe70c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
    }
    else if ((lVar2 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_107ffe7dc;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_107ffe7dc;
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_107ffe7dc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ffe80c; end: 107ffe877; -[SCDirectorModeImportedMediaMetadata .cxx_destruct] */

void FUN_107ffe80c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ffe878; end: 107ffe8bf; -[SCDirectorModeSpotlightPostingConfiguration initWithAutoEnabledFeature:] */

void FUN_107ffe878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107ffe8c0; end: 107ffe8e3; -[SCDirectorModeSpotlightPostingConfiguration copyWithZone:] */

undefined8 FUN_107ffe8c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffe8e4; end: 107ffe8f3; -[SCDirectorModeSpotlightPostingConfiguration hash] */

long FUN_107ffe8e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 107ffe8f4; end: 107ffe97b; -[SCDirectorModeSpotlightPostingConfiguration isEqual:] */

bool FUN_107ffe8f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ffe97c; end: 107ffe983; -[SCDirectorModeSpotlightPostingConfiguration autoEnabledFeature] */

undefined8 FUN_107ffe97c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffe984; end: 107ffea6f; -[SCPreviewAssetVideoProvider initWithVideoAsset:previewLoggingCommon:previewBlizzardLogger:circumstanceEngine:] */

undefined1 *
FUN_107ffe984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126fc158;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffea70; end: 107ffeab3; -[SCPreviewAssetVideoProvider dealloc] */

void FUN_107ffea70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12b460();
  puStack_28 = PTR_PTR_1126fc158;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107ffeab4; end: 107ffeabb; -[SCPreviewAssetVideoProvider newVideoAsset] */

void FUN_107ffeab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_copy_1125b2128);
  return;
}



/* Entry: 107ffeabc; end: 107ffebb3; -[SCPreviewAssetVideoProvider newVideoAssetForQueue:resultHandler:] */

void FUN_107ffeabc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d9500();
  ppuStack_50 = (undefined **)0x0;
  if (lVar1 == 0) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_110eceef8;
  }
  func_0x00010be572e0(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ffebb4;
  puStack_60 = &UNK_11084a9e8;
  lStack_58 = lVar1;
  uStack_48 = param_4;
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_78);
  _objc_release(param_3);
  _objc_release(ppuStack_50);
  _objc_release(lStack_58);
  _objc_release(uStack_48);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107ffebb4; end: 107ffebcf;  */

void FUN_107ffebb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ffebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 107ffebd0; end: 107ffec0b; -[SCPreviewAssetVideoProvider videoDuration] */

void FUN_107ffebd0(long param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 8) == 0) {
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_28);
  }
  _CMTimeGetSeconds(&uStack_28);
  return;
}



/* Entry: 107ffec0c; end: 107ffec67; -[SCPreviewAssetVideoProvider codecType] */

void FUN_107ffec0c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x00010c299760(*(undefined8 *)(param_1 + 8));
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 107ffec68; end: 107ffec6f; -[SCPreviewAssetVideoProvider shouldIncludeURLInActiveVideoPaths] */

undefined8 FUN_107ffec68(void)

{
  return 0;
}



/* Entry: 107ffec70; end: 107ffec77; -[SCPreviewAssetVideoProvider checkIsVideoReachable] */

undefined8 FUN_107ffec70(void)

{
  return 1;
}



/* Entry: 107ffec78; end: 107ffec7f; -[SCPreviewAssetVideoProvider writableURLRequiresSynchronousExport] */

undefined8 FUN_107ffec78(void)

{
  return 0;
}



/* Entry: 107ffec80; end: 107ffec83; -[SCPreviewAssetVideoProvider writableURL] */

void FUN_107ffec80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__nonNilBackingURL_112576988);
  return;
}



/* Entry: 107ffec84; end: 107ffecab; -[SCPreviewAssetVideoProvider cachedWritableURL] */

void FUN_107ffec84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ffecac; end: 107ffed23; -[SCPreviewAssetVideoProvider removeBackingTemporaryVideo] */

void FUN_107ffecac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar2 = *(undefined **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107ffed24; end: 107ffede3; -[SCPreviewAssetVideoProvider exportVideoForURL:] */

void FUN_107ffed24(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be63fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52020();
    uVar4 = 0;
    func_0x00010bf6e340(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be572e0(param_1,param_2,uVar4,1);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ffede4; end: 107ffee8b; -[SCPreviewAssetVideoProvider _videoExportDataFromURL:] */

void FUN_107ffede4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110eceed8,0,0);
  if ((int)uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 1;
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3,3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ffee8c; end: 107ffeeff; -[SCPreviewAssetVideoProvider exportVideoData] */

void FUN_107ffee8c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010be63fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee8c20(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)0x0;
  if (lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecef18;
  }
  func_0x00010be572e0(param_1,param_2,ppuVar1,lVar3 != 0);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107ffef00; end: 107ffef97; -[SCPreviewAssetVideoProvider _logPreviewExportEventWithError:success:] */

void FUN_107ffef00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ffef98;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107ffef98; end: 107fff04b;  */

void FUN_107ffef98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acba0(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x30));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fff04c; end: 107fff0e3; -[SCPreviewAssetVideoProvider hasAudioTrack] */

bool FUN_107fff04c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_111182d50,
                      *(undefined8 *)(param_1 + 8),&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c279200(lVar2,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  return lVar3 != 0;
}



/* Entry: 107fff0e4; end: 107fff177; -[SCPreviewAssetVideoProvider _nonNilBackingURL] */

void FUN_107fff0e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110dbab38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010be0c6a0(param_1,param_2,puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107fff178; end: 107fff26f; -[SCPreviewAssetVideoProvider _exportAssetSynchronouslyToURL:] */

void FUN_107fff178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4280();
  func_0x00010c1d6fc0();
  func_0x00010c1d7200(puVar1);
  _objc_release(param_3);
  uVar2 = 0;
  _dispatch_semaphore_create();
  _objc_retain();
  func_0x00010bf9cee0(puVar1);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107fff270; end: 107fff277;  */

void FUN_107fff270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107fff278; end: 107fff30b; -[SCPreviewAssetVideoProvider copyWithZone:] */

undefined * FUN_107fff278(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c0d9500();
  puVar2 = PTR_PTR_1126d8d88;
  _objc_alloc(PTR_PTR_1126d8d88);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c060c40(puVar2,param_2,lVar1,lVar3,lVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return puVar2;
}



/* Entry: 107fff30c; end: 107fff323; -[SCPreviewAssetVideoProvider previewLoggingCommon] */

void FUN_107fff30c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fff324; end: 107fff32f; -[SCPreviewAssetVideoProvider setPreviewLoggingCommon:] */

void FUN_107fff324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107fff330; end: 107fff347; -[SCPreviewAssetVideoProvider previewBlizzardLogger] */

void FUN_107fff330(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fff348; end: 107fff353; -[SCPreviewAssetVideoProvider setPreviewBlizzardLogger:] */

void FUN_107fff348(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107fff354; end: 107fff3ab; -[SCPreviewAssetVideoProvider .cxx_destruct] */

void FUN_107fff354(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fff3ac; end: 107fff4f7; -[SCPreviewSnapDocVideoProvider initWithMediaMetadata:snapDoc:snapDocKey:snapDocManager:previewLoggingCommon:previewBlizzardLogger:] */

undefined1 *
FUN_107fff3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fc160;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    func_0x00010bfbf060(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fff4f8; end: 107fff6df; -[SCPreviewSnapDocVideoProvider generateBackingVideoProvider] */

void FUN_107fff4f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c13e340(lVar2,param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80(puVar5,param_2,lVar4,&PTR____CFConstantStringClassReference_110dbab38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    puVar8 = puVar6;
    func_0x00010c099760(puVar6,param_2,puVar7,puVar5,&lStack_68);
    lVar4 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if ((lVar4 == 0) && ((int)puVar8 != 0)) {
      puVar6 = PTR_PTR_1126d8d90;
      _objc_alloc();
      lVar9 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar9);
      lVar10 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c057ba0(puVar6,param_2,puVar5,0,0,lVar9,lVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar6;
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
    }
    _objc_release(lVar4);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107fff6e0; end: 107fff6e7; -[SCPreviewSnapDocVideoProvider newVideoAsset] */

void FUN_107fff6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_newVideoAsset_112613f58);
  return;
}



/* Entry: 107fff6e8; end: 107fff853; -[SCPreviewSnapDocVideoProvider newVideoAssetForQueue:resultHandler:] */

void FUN_107fff6e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    _objc_retain(param_3);
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acba0(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar4);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107fff854;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_4);
    ppuStack_60 = &PTR____CFConstantStringClassReference_110ecef38;
    uStack_58 = param_4;
    func_0x00010007380c(param_3,&puStack_80);
    _objc_release(param_3);
    _objc_release(ppuStack_60);
    param_3 = uStack_58;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0d9520(lVar4);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107fff854; end: 107fff86f;  */

void FUN_107fff854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fff86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107fff870; end: 107fff877; -[SCPreviewSnapDocVideoProvider videoDuration] */

void FUN_107fff870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c299d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_videoDuration_112684188);
  return;
}



/* Entry: 107fff878; end: 107fff87f; -[SCPreviewSnapDocVideoProvider codecType] */

void FUN_107fff878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_codecType_1125ad5b8);
  return;
}



/* Entry: 107fff880; end: 107fff887; -[SCPreviewSnapDocVideoProvider shouldIncludeURLInActiveVideoPaths] */

undefined8 FUN_107fff880(void)

{
  return 1;
}



/* Entry: 107fff888; end: 107fff88f; -[SCPreviewSnapDocVideoProvider checkIsVideoReachable] */

void FUN_107fff888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_checkIsVideoReachable_1125ab9e8);
  return;
}



/* Entry: 107fff890; end: 107fff897; -[SCPreviewSnapDocVideoProvider writableURLRequiresSynchronousExport] */

undefined8 FUN_107fff890(void)

{
  return 1;
}



/* Entry: 107fff898; end: 107fff89f; -[SCPreviewSnapDocVideoProvider writableURL] */

void FUN_107fff898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_writableURL_11268d020);
  return;
}



/* Entry: 107fff8a0; end: 107fff8a7; -[SCPreviewSnapDocVideoProvider cachedWritableURL] */

void FUN_107fff8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf276d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_cachedWritableURL_1125a7758);
  return;
}



/* Entry: 107fff8a8; end: 107fff8af; -[SCPreviewSnapDocVideoProvider removeBackingTemporaryVideo] */

void FUN_107fff8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeBackingTemporaryVideo_112628738);
  return;
}



/* Entry: 107fff8b0; end: 107fff8b7; -[SCPreviewSnapDocVideoProvider exportVideoForURL:] */

void FUN_107fff8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_exportVideoForURL__1125c4e60);
  return;
}



/* Entry: 107fff8b8; end: 107fff8bf; -[SCPreviewSnapDocVideoProvider exportVideoData] */

void FUN_107fff8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_exportVideoData_1125c4e58);
  return;
}



/* Entry: 107fff8c0; end: 107fff8c7; -[SCPreviewSnapDocVideoProvider hasAudioTrack] */

void FUN_107fff8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd4510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_hasAudioTrack_1125d2ae8);
  return;
}



/* Entry: 107fff8c8; end: 107fff8eb; -[SCPreviewSnapDocVideoProvider copyWithZone:] */

undefined8 FUN_107fff8c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fff8ec; end: 107fff903; -[SCPreviewSnapDocVideoProvider previewLoggingCommon] */

void FUN_107fff8ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fff904; end: 107fff90f; -[SCPreviewSnapDocVideoProvider setPreviewLoggingCommon:] */

void FUN_107fff904(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107fff910; end: 107fff927; -[SCPreviewSnapDocVideoProvider previewBlizzardLogger] */

void FUN_107fff910(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fff928; end: 107fff933; -[SCPreviewSnapDocVideoProvider setPreviewBlizzardLogger:] */

void FUN_107fff928(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107fff934; end: 107fff997; -[SCPreviewSnapDocVideoProvider .cxx_destruct] */

void FUN_107fff934(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fff998; end: 107fff9ef; -[SCPreviewURLVideoProvider videoURL] */

void FUN_107fff998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


