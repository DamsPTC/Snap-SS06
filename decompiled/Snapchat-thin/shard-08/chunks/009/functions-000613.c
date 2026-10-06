/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10679d6b0; end: 10679d7e7; -[SCPlusAIStickersGenerateCollectionViewCell _generationStateDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d6b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112750104;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10679d7cc;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10679d7e8;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10679d854;
    puStack_78 = &UNK_110842e18;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x10679d8c0;
    puStack_a0 = &UNK_110850cc8;
    lStack_98 = param_1;
    lStack_70 = param_1;
    lStack_48 = param_1;
    func_0x00010c0bf040(param_3,param_2,&puStack_68,&puStack_90,&puStack_b8);
  }
LAB_10679d7cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679d7e8; end: 10679d92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d7e8(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127500ec),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127500f4));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127500f0));
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127500f8),
             PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 10679d92c; end: 10679d9db; -[SCPlusAIStickersGenerateCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d92c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127500f8,0);
  _objc_storeStrong(param_1 + _DAT_1127500f4,0);
  _objc_storeStrong(param_1 + _DAT_1127500f0,0);
  _objc_storeStrong(param_1 + _DAT_1127500ec,0);
  _objc_storeStrong(param_1 + _DAT_1127500e4,0);
  _objc_storeStrong(param_1 + _DAT_1127500e8,0);
  _objc_storeStrong(param_1 + _DAT_112750104,0);
  _objc_storeStrong(param_1 + _DAT_112750100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127500fc,0);
  return;
}



/* Entry: 10679d9dc; end: 10679db0b; -[SCPlusAIStickersStickerCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10679d9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f3108;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_112750108;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275010c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275010c) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10679db0c; end: 10679db7b; -[SCPlusAIStickersStickerCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679db0c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3108;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112750108));
  _objc_release(lVar1);
  return;
}



/* Entry: 10679db7c; end: 10679db97; -[SCPlusAIStickersStickerCollectionViewCell _onLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679db7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112750110),PTR_s_didLongPressSticker__1125bb918,
             *(undefined8 *)(param_1 + _DAT_112750114));
  return;
}



/* Entry: 10679db98; end: 10679dd77; -[SCPlusAIStickersStickerCollectionViewCell willDisplayCellWithDataSource:itemIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679db98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cde20;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c2a6240(uVar1);
  lVar5 = (long)_DAT_112750110;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(ulong *)(param_1 + lVar5) = uVar1;
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bfc0a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10679ddfc;
  uStack_60 = 0x10679de0c;
  uStack_58 = 0;
  func_0x00010c0bf040(uVar3);
  uVar6 = puStack_78[5];
  _objc_retain(uVar6);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  lVar5 = (long)_DAT_112750114;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar6;
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + _DAT_112750118) = param_4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112750108));
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10679dd78; end: 10679dd9b; -[SCPlusAIStickersStickerCollectionViewCell didSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679dd78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112750110),PTR_s_didSelectSticker_atIndex__1125bc628,
             *(undefined8 *)(param_1 + _DAT_112750114),*(undefined8 *)(param_1 + _DAT_112750118));
  return;
}



/* Entry: 10679dd9c; end: 10679ddfb; -[SCPlusAIStickersStickerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679dd9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275010c,0);
  _objc_storeStrong(param_1 + _DAT_112750108,0);
  _objc_storeStrong(param_1 + _DAT_112750114,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750110,0);
  return;
}



/* Entry: 10679ddfc; end: 10679de13;  */

void FUN_10679ddfc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10679de14; end: 10679de87;  */

void FUN_10679de14(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar4 < uVar1) {
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(ulong *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10679de88; end: 10679decf;  */

void FUN_10679de88(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5e6f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e5e6f8,
                      &PTR____CFConstantStringClassReference_110e5e718,0);
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



/* Entry: 10679ded0; end: 10679df4b;  */

void FUN_10679ded0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126cde68;
  _objc_opt_class(PTR_PTR_1126cde68);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e5e778,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10679df4c; end: 10679e023; -[SCPlusAISticker initWithImage:imageData:reportParams:] */

undefined1 *
FUN_10679df4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10679e024; end: 10679e047; -[SCPlusAISticker copyWithZone:] */

undefined8 FUN_10679e024(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10679e048; end: 10679e0c7; -[SCPlusAISticker hash] */

undefined8 * FUN_10679e048(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10679e160:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10679e16c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10679e16c;
          }
          goto LAB_10679e160;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10679e16c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10679e0c8; end: 10679e187; -[SCPlusAISticker isEqual:] */

long FUN_10679e0c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10679e160:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10679e16c;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10679e16c;
          }
          goto LAB_10679e160;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10679e16c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10679e188; end: 10679e18f; -[SCPlusAISticker image] */

undefined8 FUN_10679e188(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10679e190; end: 10679e197; -[SCPlusAISticker imageData] */

undefined8 FUN_10679e190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10679e198; end: 10679e19f; -[SCPlusAISticker reportParams] */

undefined8 FUN_10679e198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10679e1a0; end: 10679e1db; -[SCPlusAISticker .cxx_destruct] */

void FUN_10679e1a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10679e1dc; end: 10679e243; +[SCPlusAIStickerGenerationState generatedWithStickers:] */

void FUN_10679e1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cde00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679e244; end: 10679e28f; +[SCPlusAIStickerGenerationState generating] */

void FUN_10679e244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cde00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679e290; end: 10679e2d7; +[SCPlusAIStickerGenerationState none] */

void FUN_10679e290(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cde00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679e2d8; end: 10679e2fb; -[SCPlusAIStickerGenerationState copyWithZone:] */

undefined8 FUN_10679e2d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10679e2fc; end: 10679e35b; -[SCPlusAIStickerGenerationState hash] */

void FUN_10679e2fc(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f3118;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679e35c; end: 10679e39f; -[SCPlusAIStickerGenerationState internalInit] */

void FUN_10679e35c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f3118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679e3a0; end: 10679e43f; -[SCPlusAIStickerGenerationState isEqual:] */

long FUN_10679e3a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10679e424;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10679e424;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10679e424;
    }
  }
  lVar3 = 1;
LAB_10679e424:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10679e440; end: 10679e4eb; -[SCPlusAIStickerGenerationState matchNone:generating:generated:] */

void FUN_10679e440(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10679e4c8;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10679e4c8;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_10679e4c8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679e4ec; end: 10679e4f7; -[SCPlusAIStickerGenerationState .cxx_destruct] */

void FUN_10679e4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10679e4f8; end: 10679e573;  */

undefined * FUN_10679e4f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c42f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5e798,
                        &UNK_10dddf470,&UNK_10dddf4a0,4,FUN_10679e574,0);
    do {
      if (puRam00000001136c42f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c42f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c42f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c42f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c42f8;
}



/* Entry: 10679e574; end: 10679e57f;  */

bool FUN_10679e574(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10679e580; end: 10679e5fb;  */

undefined * FUN_10679e580(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4300 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5e7b8,
                        &UNK_10dddf4b0,&UNK_10dddf524,4,FUN_10679e5fc,0);
    do {
      if (puRam00000001136c4300 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4300;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4300,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4300 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4300;
}



/* Entry: 10679e5fc; end: 10679e607;  */

bool FUN_10679e5fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10679e608; end: 10679e697;  */

undefined * FUN_10679e608(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4308 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5e7d8,
                        &UNK_10dddf534,&UNK_10dddf648,7,FUN_10679e698,0,&UNK_10dddf664);
    do {
      if (puRam00000001136c4308 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4308;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4308,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4308 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4308;
}



/* Entry: 10679e698; end: 10679e6a3;  */

bool FUN_10679e698(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10679e6a4; end: 10679e71f;  */

undefined * FUN_10679e6a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4310 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5e7f8,
                        &UNK_10dddf66f,&UNK_10dddf6b0,3,FUN_10679e720,0);
    do {
      if (puRam00000001136c4310 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c4310;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4310,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4310 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4310;
}



/* Entry: 10679e720; end: 10679e72b;  */

bool FUN_10679e720(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10679e72c; end: 10679e793; +[SCMinervaProcessSnapfeedLensRequest descriptor] */

void FUN_10679e72c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afaae0,
                        &PTR____CFConstantStringClassReference_110e5e818,&PTR_DAT_113161470,
                        &PTR_s_userId_113161e28,4,0x20,0x1c);
    puRam00000001136c4318 = puVar1;
  }
  return;
}



/* Entry: 10679e794; end: 10679e80f; +[SCMinervaProcessSnapfeedLensResponse descriptor] */

undefined * FUN_10679e794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afab30,
                        &PTR____CFConstantStringClassReference_110e5e838,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113161828,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4320 = puVar1;
  }
  return puRam00000001136c4320;
}



/* Entry: 10679e810; end: 10679e88f; +[SCMinervaBeginAsyncRemoteLensGenerationRequest descriptor] */

undefined * FUN_10679e810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afab80,
                        &PTR____CFConstantStringClassReference_110e5e858,&PTR_DAT_113161470,
                        &PTR_s_userId_113162588,10,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4328 = puVar1;
  }
  return puRam00000001136c4328;
}



/* Entry: 10679e890; end: 10679e8f7; +[SCMinervaBeginAsyncRemoteLensGenerationResponse descriptor] */

void FUN_10679e890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afabd0,
                        &PTR____CFConstantStringClassReference_110e5e878,&PTR_DAT_113161470,
                        &PTR_DAT_113161ea8,4,0xc,0x1c);
    puRam00000001136c4330 = puVar1;
  }
  return;
}



/* Entry: 10679e8f8; end: 10679e95f; +[SCMinervaGetAsyncRemoteLensGenerationRequest descriptor] */

void FUN_10679e8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afac20,
                        &PTR____CFConstantStringClassReference_110e5e898,&PTR_DAT_113161470,
                        &PTR_s_userId_113161888,3,0x20,0x1c);
    puRam00000001136c4338 = puVar1;
  }
  return;
}



/* Entry: 10679e960; end: 10679e9db; +[SCMinervaGetAsyncRemoteLensGenerationResponse descriptor] */

undefined * FUN_10679e960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afac70,
                        &PTR____CFConstantStringClassReference_110e5e8b8,&PTR_DAT_113161470,
                        &PTR_s_contentURL_1131621a8,5,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4340 = puVar1;
  }
  return puRam00000001136c4340;
}



/* Entry: 10679e9dc; end: 10679ea6b; +[SCMinervaProcessMediaRequest descriptor] */

undefined * FUN_10679e9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afacc0,
                        &PTR____CFConstantStringClassReference_110e5e8d8,&PTR_DAT_113161470,
                        &PTR_DAT_1131626c8,0xb,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001136c4348 = puVar1;
  }
  return puRam00000001136c4348;
}



/* Entry: 10679ea6c; end: 10679eaf7; +[SCMinervaProcessMediaResponse descriptor] */

undefined * FUN_10679ea6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afad10,
                        &PTR____CFConstantStringClassReference_110e5e8f8,&PTR_DAT_113161470,
                        &PTR_s_status_1131622e8,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c4350 = puVar1;
  }
  return puRam00000001136c4350;
}



/* Entry: 10679eaf8; end: 10679eb5f; +[SCMinervaRemoteLensResponseParameters descriptor] */

void FUN_10679eaf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afad60,
                        &PTR____CFConstantStringClassReference_110e5e918,&PTR_DAT_113161470,
                        &PTR_DAT_113161528,2,0x18,0x1c);
    puRam00000001136c4358 = puVar1;
  }
  return;
}



/* Entry: 10679eb60; end: 10679ebdf; +[SCMinervaProcessRemoteLensRequest descriptor] */

undefined * FUN_10679eb60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afadb0,
                        &PTR____CFConstantStringClassReference_110e5e938,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113162d48,0x18,0x88,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4360 = puVar1;
  }
  return puRam00000001136c4360;
}



/* Entry: 10679ebe0; end: 10679ec5b; +[SCMinervaProcessRemoteLensResponse descriptor] */

undefined * FUN_10679ebe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afae00,
                        &PTR____CFConstantStringClassReference_110e5e958,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113162248,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4368 = puVar1;
  }
  return puRam00000001136c4368;
}



/* Entry: 10679ec5c; end: 10679ecdb; +[SCMinervaProcessRemoteLensWithFriendSelectionRequest descriptor] */

undefined * FUN_10679ec5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afae50,
                        &PTR____CFConstantStringClassReference_110e5e978,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113162828,0xd,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4370 = puVar1;
  }
  return puRam00000001136c4370;
}



/* Entry: 10679ecdc; end: 10679ed43; +[SCMinervaMention descriptor] */

void FUN_10679ecdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afaea0,
                        &PTR____CFConstantStringClassReference_110dcb698,&PTR_DAT_113161470,
                        &PTR_s_userId_113161568,2,0x18,0x1c);
    puRam00000001136c4378 = puVar1;
  }
  return;
}



/* Entry: 10679ed44; end: 10679edbf; +[SCMinervaProcessRemoteLensWithFriendSelectionResponse descriptor] */

undefined * FUN_10679ed44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afaef0,
                        &PTR____CFConstantStringClassReference_110e5e998,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113161f28,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4380 = puVar1;
  }
  return puRam00000001136c4380;
}



/* Entry: 10679edc0; end: 10679ee2b; +[SCMinervaGenerateDreamsRequest descriptor] */

void FUN_10679edc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afaf40,
                        &PTR____CFConstantStringClassReference_110e5e9b8,&PTR_DAT_113161470,
                        &PTR_s_identityIdsArray_1131623a8,6,0x28,0x1c);
    puRam00000001136c4388 = puVar1;
  }
  return;
}



/* Entry: 10679ee2c; end: 10679ee93; +[SCMinervaGenerateDreamsRequestID descriptor] */

void FUN_10679ee2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afaf90,
                        &PTR____CFConstantStringClassReference_110e5e9d8,&PTR_DAT_113161470,
                        &PTR_DAT_1131615a8,2,0x18,0x1c);
    puRam00000001136c4390 = puVar1;
  }
  return;
}



/* Entry: 10679ee94; end: 10679eefb; +[SCMinervaGenerateDreamsResponse descriptor] */

void FUN_10679ee94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afafe0,
                        &PTR____CFConstantStringClassReference_110e5e9f8,&PTR_DAT_113161470,
                        &PTR_s_status_1131615e8,2,0x18,0x1c);
    puRam00000001136c4398 = puVar1;
  }
  return;
}



/* Entry: 10679eefc; end: 10679ef63; +[SCMinervaGetGenerateDreamsResultRequest descriptor] */

void FUN_10679eefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb030,
                        &PTR____CFConstantStringClassReference_110e5ea18,&PTR_DAT_113161470,
                        &PTR_s_requestId_113161628,2,0x10,0x1c);
    puRam00000001136c43a0 = puVar1;
  }
  return;
}



/* Entry: 10679ef64; end: 10679efcb; +[SCMinervaGetGenerateDreamsResultResponse descriptor] */

void FUN_10679ef64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbaa8,
                        &PTR____CFConstantStringClassReference_110e5ea38,&PTR_DAT_113161470,
                        &PTR_s_status_1131618e8,3,0x18,0x1c);
    puRam00000001136c43a8 = puVar1;
  }
  return;
}



/* Entry: 10679efcc; end: 10679f05f; +[SCMinervaGetGenerateDreamsResultResponse_ResultItem descriptor] */

undefined * FUN_10679efcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbad0,
                        &PTR____CFConstantStringClassReference_110e5ea58,&PTR_DAT_113161470,
                        &PTR_s_dreamId_113161668,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112afbaa8);
    puRam00000001136c43b0 = puVar1;
  }
  return puRam00000001136c43b0;
}



/* Entry: 10679f060; end: 10679f0cb; +[SCMinervaProcessTextToImageRequest descriptor] */

void FUN_10679f060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb0d0,
                        &PTR____CFConstantStringClassReference_110e5ea78,&PTR_DAT_113161470,
                        &PTR_DAT_113162468,9,0x48,0x1c);
    puRam00000001136c43b8 = puVar1;
  }
  return;
}



/* Entry: 10679f0cc; end: 10679f133; +[SCMinervaProcessTextToImageResponse descriptor] */

void FUN_10679f0cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb120,
                        &PTR____CFConstantStringClassReference_110e5ea98,&PTR_DAT_113161470,
                        &PTR_DAT_1131616a8,2,0x18,0x1c);
    puRam00000001136c43c0 = puVar1;
  }
  return;
}



/* Entry: 10679f134; end: 10679f19f; +[SCMinervaGenerateCaptionRequest descriptor] */

void FUN_10679f134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb170,
                        &PTR____CFConstantStringClassReference_110e5eab8,&PTR_DAT_113161470,
                        &PTR_DAT_1131629c8,0xe,0x68,0x1c);
    puRam00000001136c43c8 = puVar1;
  }
  return;
}



/* Entry: 10679f1a0; end: 10679f207; +[SCMinervaGenerateCaptionResponse descriptor] */

void FUN_10679f1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb1c0,
                        &PTR____CFConstantStringClassReference_110e5ead8,&PTR_DAT_113161470,
                        &PTR_s_status_113161948,3,0x20,0x1c);
    puRam00000001136c43d0 = puVar1;
  }
  return;
}



/* Entry: 10679f208; end: 10679f26f; +[SCMinervaGenerateAICameraMediaParameters descriptor] */

void FUN_10679f208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb210,
                        &PTR____CFConstantStringClassReference_110e5eaf8,&PTR_DAT_113161470,
                        &PTR_DAT_1131616e8,2,0x18,0x1c);
    puRam00000001136c43d8 = puVar1;
  }
  return;
}



/* Entry: 10679f270; end: 10679f2d7; +[SCMinervaGenerateEnhancedMediaFromPromptRequest descriptor] */

void FUN_10679f270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb260,
                        &PTR____CFConstantStringClassReference_110e5eb18,&PTR_DAT_113161470,
                        &PTR_DAT_1131619a8,3,0x18,0x1c);
    puRam00000001136c43e0 = puVar1;
  }
  return;
}



/* Entry: 10679f2d8; end: 10679f33f; +[SCMinervaGenAiStickerParameters descriptor] */

void FUN_10679f2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb2b0,
                        &PTR____CFConstantStringClassReference_110e5eb38,&PTR_DAT_113161470,
                        &PTR_DAT_113161488,1,8,0x1c);
    puRam00000001136c43e8 = puVar1;
  }
  return;
}



/* Entry: 10679f340; end: 10679f3a7; +[SCMinervaGenerateEnhancedMediaFromPromptResponse descriptor] */

void FUN_10679f340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb300,
                        &PTR____CFConstantStringClassReference_110e5eb58,&PTR_DAT_113161470,
                        &PTR_s_status_113161a08,3,0x20,0x1c);
    puRam00000001136c43f0 = puVar1;
  }
  return;
}



/* Entry: 10679f3a8; end: 10679f40f; +[SCMinervaProcessSpectaclesMediaRequest descriptor] */

void FUN_10679f3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c43f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb350,
                        &PTR____CFConstantStringClassReference_110e5eb78,&PTR_DAT_113161470,
                        &PTR_DAT_113161fa8,4,0x28,0x1c);
    puRam00000001136c43f8 = puVar1;
  }
  return;
}



/* Entry: 10679f410; end: 10679f48b; +[SCMinervaProcessSpectaclesMediaResponse descriptor] */

undefined * FUN_10679f410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb3a0,
                        &PTR____CFConstantStringClassReference_110e5eb98,&PTR_DAT_113161470,
                        &PTR_s_contentURL_113161a68,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4400 = puVar1;
  }
  return puRam00000001136c4400;
}



/* Entry: 10679f48c; end: 10679f4f3; +[SCMinervaProcessSpectaclesMediaV2Request descriptor] */

void FUN_10679f48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb3f0,
                        &PTR____CFConstantStringClassReference_110e5ebb8,&PTR_DAT_113161470,
                        &PTR_DAT_113161ac8,3,0x20,0x1c);
    puRam00000001136c4408 = puVar1;
  }
  return;
}



/* Entry: 10679f4f4; end: 10679f55b; +[SCMinervaProcessSpectaclesMediaV2Response descriptor] */

void FUN_10679f4f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb440,
                        &PTR____CFConstantStringClassReference_110e5ebd8,&PTR_DAT_113161470,
                        &PTR_s_result_1131614a8,1,0x10,0x1c);
    puRam00000001136c4410 = puVar1;
  }
  return;
}



/* Entry: 10679f55c; end: 10679f5db; +[SCMinervaBeginAsyncRemoteLensGenerationWithMySelfieRequest descriptor] */

undefined * FUN_10679f55c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb490,
                        &PTR____CFConstantStringClassReference_110e5ebf8,&PTR_DAT_113161470,
                        &PTR_s_userId_113162b88,0xe,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4418 = puVar1;
  }
  return puRam00000001136c4418;
}



/* Entry: 10679f5dc; end: 10679f643; +[SCMinervaBeginAsyncRemoteLensGenerationWithMySelfieResponse descriptor] */

void FUN_10679f5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb4e0,
                        &PTR____CFConstantStringClassReference_110e5ec18,&PTR_DAT_113161470,
                        &PTR_DAT_113161728,2,0xc,0x1c);
    puRam00000001136c4420 = puVar1;
  }
  return;
}



/* Entry: 10679f644; end: 10679f6ab; +[SCMinervaGetLensGenerationStatusesRequest descriptor] */

void FUN_10679f644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb530,
                        &PTR____CFConstantStringClassReference_110e5ec38,&PTR_DAT_113161470,
                        &PTR_DAT_1131614c8,1,0x10,0x1c);
    puRam00000001136c4428 = puVar1;
  }
  return;
}



/* Entry: 10679f6ac; end: 10679f713; +[SCMinervaGetLensGenerationStatusesResponse descriptor] */

void FUN_10679f6ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb580,
                        &PTR____CFConstantStringClassReference_110e5ec58,&PTR_DAT_113161470,
                        &PTR_DAT_113161768,2,0x18,0x1c);
    puRam00000001136c4430 = puVar1;
  }
  return;
}



/* Entry: 10679f714; end: 10679f77b; +[SCMinervaLensStatus descriptor] */

void FUN_10679f714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb5d0,
                        &PTR____CFConstantStringClassReference_110e5ec78,&PTR_DAT_113161470,
                        &PTR_s_lensId_113161b28,3,0x18,0x1c);
    puRam00000001136c4438 = puVar1;
  }
  return;
}



/* Entry: 10679f77c; end: 10679f7e3; +[SCMinervaGetLensInfoRequest descriptor] */

void FUN_10679f77c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb620,
                        &PTR____CFConstantStringClassReference_110e5ec98,&PTR_DAT_113161470,
                        &PTR_s_dreamPackId_113161b88,3,0x20,0x1c);
    puRam00000001136c4440 = puVar1;
  }
  return;
}



/* Entry: 10679f7e4; end: 10679f84b; +[SCMinervaGetLensInfoResponse descriptor] */

void FUN_10679f7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb670,
                        &PTR____CFConstantStringClassReference_110e5ecb8,&PTR_DAT_113161470,
                        &PTR_DAT_1131614e8,1,0x10,0x1c);
    puRam00000001136c4448 = puVar1;
  }
  return;
}



/* Entry: 10679f84c; end: 10679f8b3; +[SCMinervaGetPreGenAssetsRequest descriptor] */

void FUN_10679f84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb6c0,
                        &PTR____CFConstantStringClassReference_110e5ecd8,&PTR_DAT_113161470,
                        &PTR_s_dreamPackId_113162028,4,0x28,0x1c);
    puRam00000001136c4450 = puVar1;
  }
  return;
}



/* Entry: 10679f8b4; end: 10679f92f; +[SCMinervaGetPreGenAssetsResponse descriptor] */

undefined * FUN_10679f8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb710,
                        &PTR____CFConstantStringClassReference_110e5ecf8,&PTR_DAT_113161470,
                        &PTR_DAT_113161508,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4458 = puVar1;
  }
  return puRam00000001136c4458;
}



/* Entry: 10679f930; end: 10679f9ab; +[SCMinervaLensInfoDreamPack descriptor] */

undefined * FUN_10679f930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb760,
                        &PTR____CFConstantStringClassReference_110e5ed18,&PTR_DAT_113161470,
                        &PTR_DAT_113161be8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4460 = puVar1;
  }
  return puRam00000001136c4460;
}



/* Entry: 10679f9ac; end: 10679fa27; +[SCMinervaLensInfoDreamPackTemplate descriptor] */

undefined * FUN_10679f9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb7b0,
                        &PTR____CFConstantStringClassReference_110e5ed38,&PTR_DAT_113161470,
                        &PTR_s_id_p_1131620a8,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c4468 = puVar1;
  }
  return puRam00000001136c4468;
}



/* Entry: 10679fa28; end: 10679fa8f; +[SCMinervaProxyInternalInferenceRequest descriptor] */

void FUN_10679fa28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb800,
                        &PTR____CFConstantStringClassReference_110e5ed58,&PTR_DAT_113161470,
                        &PTR_s_data_p_113161c48,3,0x18,0x1c);
    puRam00000001136c4470 = puVar1;
  }
  return;
}



/* Entry: 10679fa90; end: 10679faf7; +[SCMinervaProxyInternalInferenceResponse descriptor] */

void FUN_10679fa90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb850,
                        &PTR____CFConstantStringClassReference_110e5ed78,&PTR_DAT_113161470,
                        &PTR_DAT_1131617a8,2,0x18,0x1c);
    puRam00000001136c4478 = puVar1;
  }
  return;
}



/* Entry: 10679faf8; end: 10679fb5f; +[SCMinervaGenerateAISongRequest descriptor] */

void FUN_10679faf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb8a0,
                        &PTR____CFConstantStringClassReference_110e5ed98,&PTR_DAT_113161470,
                        &PTR_DAT_113161ca8,3,0x20,0x1c);
    puRam00000001136c4480 = puVar1;
  }
  return;
}



/* Entry: 10679fb60; end: 10679fbc7; +[SCMinervaGenerateAISongResponse descriptor] */

void FUN_10679fb60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb8f0,
                        &PTR____CFConstantStringClassReference_110e5edb8,&PTR_DAT_113161470,
                        &PTR_s_status_113161d08,3,0x20,0x1c);
    puRam00000001136c4488 = puVar1;
  }
  return;
}



/* Entry: 10679fbc8; end: 10679fc2f; +[SCMinervaGenerateAIFontRequest descriptor] */

void FUN_10679fbc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb940,
                        &PTR____CFConstantStringClassReference_110e5edd8,&PTR_DAT_113161470,
                        &PTR_DAT_113162128,4,0x28,0x1c);
    puRam00000001136c4490 = puVar1;
  }
  return;
}



/* Entry: 10679fc30; end: 10679fc97; +[SCMinervaGenerateAIFontResponse descriptor] */

void FUN_10679fc30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb990,
                        &PTR____CFConstantStringClassReference_110e5edf8,&PTR_DAT_113161470,
                        &PTR_s_status_113161d68,3,0x20,0x1c);
    puRam00000001136c4498 = puVar1;
  }
  return;
}



/* Entry: 10679fc98; end: 10679fcff; +[SCMinervaGetSuggestedAIFontsRequest descriptor] */

void FUN_10679fc98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afb9e0,
                        &PTR____CFConstantStringClassReference_110e5ee18,&PTR_DAT_113161470,0,0,4,
                        0x1c);
    puRam00000001136c44a0 = puVar1;
  }
  return;
}



/* Entry: 10679fd00; end: 10679fd67; +[SCMinervaSuggestedAIFont descriptor] */

void FUN_10679fd00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afba30,
                        &PTR____CFConstantStringClassReference_110e5ee38,&PTR_DAT_113161470,
                        &PTR_s_dreamPackId_113161dc8,3,0x20,0x1c);
    puRam00000001136c44a8 = puVar1;
  }
  return;
}



/* Entry: 10679fd68; end: 10679fe4b; +[SCMinervaGetSuggestedAIFontsResponse descriptor] */

void FUN_10679fd68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afba80,
                        &PTR____CFConstantStringClassReference_110e5ee58,&PTR_DAT_113161470,
                        &PTR_s_status_1131617e8,2,0x18,0x1c);
    puRam00000001136c44b0 = puVar1;
  }
  return;
}



/* Entry: 10679fe4c; end: 10679fe57;  */

bool FUN_10679fe4c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10679fe58; end: 10679febf; +[SCMinervaImageEnhanceParameters descriptor] */

void FUN_10679fe58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbb70,
                        &PTR____CFConstantStringClassReference_110e5ee98,&PTR_DAT_113163048,
                        &PTR_DAT_113163080,2,0x10,0x1c);
    puRam00000001136c44c0 = puVar1;
  }
  return;
}



/* Entry: 10679fec0; end: 10679ff27; +[SCMinervaImageExtendParameters descriptor] */

void FUN_10679fec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbbc0,
                        &PTR____CFConstantStringClassReference_110e5eeb8,&PTR_DAT_113163048,
                        &PTR_DAT_1131630c0,5,0x30,0x1c);
    puRam00000001136c44c8 = puVar1;
  }
  return;
}



/* Entry: 10679ff28; end: 10679ff8f; +[SCMinervaImageRetouchParameters descriptor] */

void FUN_10679ff28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbc10,
                        &PTR____CFConstantStringClassReference_110e5eed8,&PTR_DAT_113163048,
                        &PTR_DAT_113163060,1,0x10,0x1c);
    puRam00000001136c44d0 = puVar1;
  }
  return;
}



/* Entry: 10679ff90; end: 10679fff7; +[SCMinervaRemoteLensParameters descriptor] */

void FUN_10679ff90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbcb0,
                        &PTR____CFConstantStringClassReference_110e5eef8,&PTR_DAT_113163160,
                        &PTR_s_modelId_113163178,0xd,0x50,0x1c);
    puRam00000001136c44d8 = puVar1;
  }
  return;
}



/* Entry: 10679fff8; end: 1067a005f; +[SCMinervaGenerateAICameraMediaRequest descriptor] */

void FUN_10679fff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbd50,
                        &PTR____CFConstantStringClassReference_110e5ef18,&PTR_DAT_113163318,
                        &PTR_DAT_113163330,2,0x10,0x1c);
    puRam00000001136c44e0 = puVar1;
  }
  return;
}



/* Entry: 1067a0060; end: 1067a00c7; +[SCMinervaGenerateAICameraMediaResponse descriptor] */

void FUN_1067a0060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbda0,
                        &PTR____CFConstantStringClassReference_110e5ef38,&PTR_DAT_113163318,
                        &PTR_s_status_1131633b0,4,0x28,0x1c);
    puRam00000001136c44e8 = puVar1;
  }
  return;
}



/* Entry: 1067a00c8; end: 1067a012f; +[SCMinervaMinervaAiCameraModeClientConfig descriptor] */

void FUN_1067a00c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c44f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afbdf0,
                        &PTR____CFConstantStringClassReference_110e5ef58,&PTR_DAT_113163318,
                        &PTR_DAT_113163370,2,0x10,0x1c);
    puRam00000001136c44f0 = puVar1;
  }
  return;
}



/* Entry: 1067a0130; end: 1067a0447; -[SCPlusMerlinInitializerImpl initWithPlusServices:conversationServices:conversationIdServices:nativeMessagingServices:friendsFeedServices:pinnedConversationsServices:snapchatterServices:userUnifiedGrpcServices:grapheneRegistry:circumstanceEngine:performerProvider:] */

undefined8 *
FUN_1067a0130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_70 = PTR_PTR_1126f3120;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = puVar1[10];
    puVar1[10] = uVar3;
    _objc_retain(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    _objc_release(param_10);
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067a0448; end: 1067a057f;  */

void FUN_1067a0448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126ae728;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  func_0x00010bf24820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd9618);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfcfa00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}


