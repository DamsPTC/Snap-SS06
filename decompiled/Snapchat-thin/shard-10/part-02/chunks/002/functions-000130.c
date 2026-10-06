/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c838f8; end: 107c839d7; -[SCDiscoverFeedTileOverlayViewModel isEqual:] */

long FUN_107c838f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c839bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))))) {
      lVar3 = 0;
      goto LAB_107c839bc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107c839bc;
    }
  }
  lVar3 = 1;
LAB_107c839bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c839d8; end: 107c839df; -[SCDiscoverFeedTileOverlayViewModel subscribed] */

undefined1 FUN_107c839d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c839e0; end: 107c839e7; -[SCDiscoverFeedTileOverlayViewModel bannerText] */

undefined8 FUN_107c839e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c839e8; end: 107c839ef; -[SCDiscoverFeedTileOverlayViewModel isLive] */

undefined1 FUN_107c839e8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c839f0; end: 107c839f7; -[SCDiscoverFeedTileOverlayViewModel enableReplayOverlay] */

undefined1 FUN_107c839f0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107c839f8; end: 107c839ff; -[SCDiscoverFeedTileOverlayViewModel subscribedIconStyle] */

undefined8 FUN_107c839f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c83a00; end: 107c83a07; -[SCDiscoverFeedTileOverlayViewModel isStoryIconVisible] */

undefined1 FUN_107c83a00(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107c83a08; end: 107c83a13; -[SCDiscoverFeedTileOverlayViewModel .cxx_destruct] */

void FUN_107c83a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c83a14; end: 107c83a8b; -[SCDiscoverFeedLabelPrefixIconViewModel initWithTextPrefixIcon:] */

undefined1 * FUN_107c83a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa4f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c83a8c; end: 107c83aaf; -[SCDiscoverFeedLabelPrefixIconViewModel copyWithZone:] */

undefined8 FUN_107c83a8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c83ab0; end: 107c83ab7; -[SCDiscoverFeedLabelPrefixIconViewModel hash] */

void FUN_107c83ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107c83ab8; end: 107c83b47; -[SCDiscoverFeedLabelPrefixIconViewModel isEqual:] */

long FUN_107c83ab8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c83b2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107c83b2c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107c83b2c;
    }
  }
  lVar3 = 1;
LAB_107c83b2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c83b48; end: 107c83b4f; -[SCDiscoverFeedLabelPrefixIconViewModel textPrefixIcon] */

undefined8 FUN_107c83b48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c83b50; end: 107c83b5b; -[SCDiscoverFeedLabelPrefixIconViewModel .cxx_destruct] */

void FUN_107c83b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c83b5c; end: 107c83bd3; -[SCDiscoverFeedAvatarViewModel initWithAvatarImageURL:] */

undefined1 * FUN_107c83b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa4f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c83bd4; end: 107c83bf7; -[SCDiscoverFeedAvatarViewModel copyWithZone:] */

undefined8 FUN_107c83bd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c83bf8; end: 107c83bff; -[SCDiscoverFeedAvatarViewModel hash] */

void FUN_107c83bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107c83c00; end: 107c83c8f; -[SCDiscoverFeedAvatarViewModel isEqual:] */

long FUN_107c83c00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c83c74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107c83c74;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107c83c74;
    }
  }
  lVar3 = 1;
LAB_107c83c74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c83c90; end: 107c83c97; -[SCDiscoverFeedAvatarViewModel avatarImageURL] */

undefined8 FUN_107c83c90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c83c98; end: 107c83ca3; -[SCDiscoverFeedAvatarViewModel .cxx_destruct] */

void FUN_107c83c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c83ca4; end: 107c83d07; +[SCDiscoverTextPrefixIcon emojiWithEmoji:] */

void FUN_107c83ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7348;
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



/* Entry: 107c83d08; end: 107c83d9f; +[SCDiscoverTextPrefixIcon resourceNameWithResourceName:overrideTintColor:] */

void FUN_107c83d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7348;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c83da0; end: 107c83f67; -[SCDiscoverTextPrefixIcon initWithCoder:] */

undefined8 * FUN_107c83da0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126fa500;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) goto LAB_107c83ef4;
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[3];
      puVar1[3] = uVar2;
      _objc_release(uVar5);
      uVar5 = 1;
      lVar6 = 0x20;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107c83ef4:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
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



/* Entry: 107c83f68; end: 107c83f8b; -[SCDiscoverTextPrefixIcon copyWithZone:] */

undefined8 FUN_107c83f68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c83f8c; end: 107c8402f; -[SCDiscoverTextPrefixIcon encodeWithCoder:] */

void FUN_107c83f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb4538;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb4558;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_107c8401c;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110eb4598);
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb4578;
    lVar2 = 0x20;
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb45b8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_107c8401c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c84030; end: 107c840b3; -[SCDiscoverTextPrefixIcon hash] */

void FUN_107c84030(long param_1)

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
  puStack_78 = PTR_PTR_1126fa500;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c840b4; end: 107c840f7; -[SCDiscoverTextPrefixIcon internalInit] */

void FUN_107c840b4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c840f8; end: 107c841c7; -[SCDiscoverTextPrefixIcon isEqual:] */

long FUN_107c840f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c841a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c841ac;
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
            func_0x00010c071c60();
            goto LAB_107c841ac;
          }
          goto LAB_107c841a0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c841ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c841c8; end: 107c8424f; -[SCDiscoverTextPrefixIcon matchEmoji:resourceName:] */

void FUN_107c841c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c84250; end: 107c8428b; -[SCDiscoverTextPrefixIcon .cxx_destruct] */

void FUN_107c84250(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c8428c; end: 107c842d7; -[SCDiscoverCardContainerViewConfiguration initWithBottomGradientType:topGradientType:] */

void FUN_107c8428c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107c842d8; end: 107c842fb; -[SCDiscoverCardContainerViewConfiguration copyWithZone:] */

undefined8 FUN_107c842d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c842fc; end: 107c84353; -[SCDiscoverCardContainerViewConfiguration hash] */

undefined8 * FUN_107c842fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107c84354; end: 107c843eb; -[SCDiscoverCardContainerViewConfiguration isEqual:] */

bool FUN_107c84354(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c843ec; end: 107c843f3; -[SCDiscoverCardContainerViewConfiguration bottomGradientType] */

undefined8 FUN_107c843ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c843f4; end: 107c843fb; -[SCDiscoverCardContainerViewConfiguration topGradientType] */

undefined8 FUN_107c843f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c843fc; end: 107c8446b; -[SCDiscoverFeedPrefetchDebuggerItem initWithFrame:isLoaded:] */

void FUN_107c843fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa510;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  return;
}



/* Entry: 107c8446c; end: 107c8448f; -[SCDiscoverFeedPrefetchDebuggerItem copyWithZone:] */

undefined8 FUN_107c8446c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c84490; end: 107c8456b; -[SCDiscoverFeedPrefetchDebuggerItem hash] */

ulong * FUN_107c84490(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_40 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar4 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
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
      puVar3 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar5 & 1) == 0) || (*(char *)((long)puVar2 + 8) != param_3[8])) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        _CGRectEqualToRect(*(undefined8 *)((long)puVar2 + 0x10),*(undefined8 *)((long)puVar2 + 0x18)
                           ,*(undefined8 *)((long)puVar2 + 0x20),
                           *(undefined8 *)((long)puVar2 + 0x28),*(undefined8 *)(param_3 + 0x10),
                           *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                           *(undefined8 *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 107c8456c; end: 107c8460b; -[SCDiscoverFeedPrefetchDebuggerItem isEqual:] */

ulong FUN_107c8456c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        uVar2 = 0;
      }
      else {
        _CGRectEqualToRect(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107c8460c; end: 107c84617; -[SCDiscoverFeedPrefetchDebuggerItem frame] */

undefined8 FUN_107c8460c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c84618; end: 107c8461f; -[SCDiscoverFeedPrefetchDebuggerItem isLoaded] */

undefined1 FUN_107c84618(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c84620; end: 107c84753; -[SCAddFriendsEmptyStateView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c84620(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa518;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8bc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8c0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8c4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276c8c8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c84754; end: 107c8481f;  */

void FUN_107c84754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c213040();
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c84820; end: 107c84bdb; -[SCAddFriendsEmptyStateView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c84820(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_e0;
  double dStack_d8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa518;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d7400;
  uVar6 = *(ulong *)(param_5 + _DAT_11276c8cc);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010bf20c00(param_5);
  dVar13 = param_1;
  dVar12 = param_2;
  dVar9 = param_3;
  dVar11 = param_4;
  func_0x00010bf4c7e0(uVar1);
  param_1 = param_1 + dVar12;
  param_2 = param_2 + dVar13;
  param_3 = param_3 - (dVar12 + dVar11);
  param_4 = param_4 - (dVar13 + dVar9);
  dVar13 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dStack_a0 = *(double *)PTR__CGRectZero_110347608;
  dStack_98 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dStack_e0 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dStack_d8 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  lVar7 = (long)_DAT_11276c8bc;
  lVar4 = *(long *)(param_5 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dStack_c0 = dStack_d8;
  dStack_b8 = dStack_e0;
  dStack_b0 = dStack_98;
  dStack_a8 = dStack_a0;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d5a0(param_3,param_4);
    dStack_a8 = param_1;
    dStack_b0 = param_2;
    dStack_b8 = param_3;
    dStack_c0 = param_4;
    FUN_107c84bdc();
    _objc_release(uVar5);
    dVar13 = dStack_a8;
    _CGRectGetMaxY(dStack_a8,dStack_b0,dStack_b8,dStack_c0);
    dVar12 = dVar13;
    func_0x00010bf6e680(uVar1);
    dVar13 = dVar13 + dVar12;
  }
  lVar4 = (long)_DAT_11276c8d0;
  if (*(long *)(param_5 + lVar4) != 0) {
    uVar3 = uVar1;
    func_0x00010bfce060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfce040();
    dStack_a0 = param_1;
    dStack_98 = param_2;
    dStack_e0 = param_3;
    dStack_d8 = param_4;
    FUN_107c84bdc();
    _objc_release(uVar3);
    dVar13 = dStack_a0;
    _CGRectGetMaxY(dStack_a0,dStack_98,dStack_e0,dStack_d8);
    dVar12 = dVar13;
    func_0x00010bfce080(uVar1);
    dVar13 = dVar13 + dVar12;
  }
  lVar8 = (long)_DAT_11276c8c8;
  dVar12 = param_3;
  dVar11 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar8));
  dVar9 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  if (dVar12 <= dVar9) {
    dVar9 = dVar12;
  }
  dVar12 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar10 = (param_1 - dVar9) * 0.5;
  dVar12 = dVar12 + dVar10;
  func_0x00010bf6e680(uVar1);
  dVar13 = dVar13 + dVar10;
  func_0x00010b8162e0(dVar12,dVar13,dVar9,dVar11);
  func_0x00010b8166f8(dStack_a0,dStack_98,dStack_e0,dStack_d8,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010b8166f8(dStack_a8,dStack_b0,dStack_b8,dStack_c0,param_5);
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dStack_a8,dStack_b0,dStack_b8,dStack_c0);
  _objc_release(uVar5);
  func_0x00010b8166f8(dVar12,dVar13,dVar9,dVar11,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
  _objc_release(uVar1);
  return;
}



/* Entry: 107c84bdc; end: 107c84c83;  */

double FUN_107c84bdc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,double param_6)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  _CGRectGetWidth();
  if (param_6 <= dVar1) {
    dVar1 = param_6;
  }
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar2 = dVar2 + (param_1 - dVar1) * 0.5;
  dVar1 = dVar2;
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  func_0x00010b816218();
  return (double)(long)(dVar2 * dVar1) / dVar1;
}



/* Entry: 107c84c84; end: 107c85103; -[SCAddFriendsEmptyStateView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c84c84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11276c8cc;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  uVar7 = param_3;
  if (param_3 == uVar6) {
    _objc_release(uVar6);
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c850e8;
    }
    puVar2 = PTR_PTR_1126d7400;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_3);
    uVar6 = uVar7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar6;
    _objc_release(uVar4);
    uVar6 = uVar7;
    func_0x00010bef8be0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276c8c8));
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010bf6e5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != 0) {
      lVar9 = (long)_DAT_11276c8bc;
      lVar8 = *(long *)(param_1 + lVar9);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar4);
      }
    }
    uVar6 = uVar7;
    func_0x00010bf6e5e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276c8bc);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar4);
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010bfce060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != 0) {
      uVar6 = uVar7;
      func_0x00010bfce060();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0d7b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar6);
      uVar6 = uVar7;
      if (uVar1 == 0) {
        uVar1 = uVar7;
        func_0x00010bfce060();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c252bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (uVar3 == 0) goto LAB_107c850d8;
        lVar9 = (long)_DAT_11276c8c4;
        lVar8 = *(long *)(param_1 + lVar9);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 == 0) {
          func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(param_1);
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_11276c8d0);
          *(undefined8 *)(param_1 + _DAT_11276c8d0) = uVar4;
          _objc_release(uVar5);
        }
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfce060(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010c252bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe8220(puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(uVar4);
      }
      else {
        lVar9 = (long)_DAT_11276c8c0;
        lVar8 = *(long *)(param_1 + lVar9);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 == 0) {
          lVar8 = (long)_DAT_11276c8d0;
          func_0x00010c12c960(*(undefined8 *)(param_1 + lVar8));
          func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1aa200();
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(param_1);
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(param_1 + lVar9);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          *(undefined8 *)(param_1 + lVar8) = uVar4;
          _objc_release(uVar5);
        }
        func_0x00010bfce060(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010c0d7b40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = *(undefined **)(param_1 + lVar9);
        func_0x00010c269d40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cc200();
      }
      _objc_release(puVar2);
      _objc_release(uVar1);
      _objc_release(uVar6);
    }
LAB_107c850d8:
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar7);
LAB_107c850e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c85104; end: 107c851a3; +[SCAddFriendsEmptyStateView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c85104(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar4 = param_1;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d7400;
  _objc_opt_class(PTR_PTR_1126d7400);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106980(uVar1);
  dVar5 = dVar4;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  auVar6._8_8_ = dVar4 + dVar5 + param_3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 107c851a4; end: 107c851ef; -[SCAddFriendsEmptyStateView _didTapAddFriendsButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c851a4(long param_1)

{
  param_1 = param_1 + _DAT_11276c8d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef8ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c851f0; end: 107c851ff; -[SCAddFriendsEmptyStateView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c851f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c8cc);
}



/* Entry: 107c85200; end: 107c8521f; -[SCAddFriendsEmptyStateView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85200(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c85220; end: 107c85233; -[SCAddFriendsEmptyStateView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85220(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c8d8,param_3);
  return;
}



/* Entry: 107c85234; end: 107c85243; -[SCAddFriendsEmptyStateView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c85234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c8d4);
}



/* Entry: 107c85244; end: 107c85283; -[SCAddFriendsEmptyStateView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c8d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c85284; end: 107c8531f; -[SCAddFriendsEmptyStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85284(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c8d4,0);
  _objc_destroyWeak(param_1 + _DAT_11276c8d8);
  _objc_storeStrong(param_1 + _DAT_11276c8cc,0);
  _objc_storeStrong(param_1 + _DAT_11276c8c8,0);
  _objc_storeStrong(param_1 + _DAT_11276c8d0,0);
  _objc_storeStrong(param_1 + _DAT_11276c8c4,0);
  _objc_storeStrong(param_1 + _DAT_11276c8c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c8bc,0);
  return;
}



/* Entry: 107c85320; end: 107c855ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107c85320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc78d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc78d8,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar2;
    func_0x00010c14c620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126d7400;
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb46f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb46f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  if (param_5 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e2ba78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2ba78,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  puVar3 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010900fd90();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d3df1c();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = param_8;
  func_0x00010c053140(0,0x403e000000000000,0,0x403e000000000000,puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar5);
  uVar8 = 0x4044000000000000;
  if (puVar9 != (undefined *)0x0) {
    uVar8 = 0x4057c00000000000;
  }
  func_0x00010c00b9a0(0x4018000000000000,0,param_1,param_2,param_3,param_4,uVar8);
  _objc_release(puVar3);
  _objc_release(puVar9);
  uVar8 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_120;
  pcStack_e8 = FUN_107c85600;
  puStack_118 = PTR_PTR_1126fa520;
  uStack_120 = uVar8;
  uStack_110 = param_7;
  puStack_108 = puVar2;
  puStack_100 = puVar9;
  uStack_f8 = param_6;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_120,PTR_s_initWithFrame__1125e2948);
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar10 = (long)_DAT_11276c8dc;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar10);
    *(undefined **)((long)puVar6 + lVar10) = puVar9;
    _objc_release(uVar8);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar6 + lVar10));
    func_0x00010c213040(*(undefined8 *)((long)puVar6 + lVar10));
    puVar7 = (undefined1 *)puVar6;
    func_0x00010bf4dce0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar9 = PTR_PTR_1126d7408;
    _objc_opt_new();
    lVar10 = (long)_DAT_11276c8e0;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar10);
    *(undefined **)((long)puVar6 + lVar10) = puVar9;
    _objc_release(uVar8);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar6 + lVar10));
    puVar7 = (undefined1 *)puVar6;
    func_0x00010bf4dce0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
  }
  return (undefined1 *)puVar6;
}



/* Entry: 107c85600; end: 107c85703; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c85600(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c8dc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d7408;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c8e0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c85704; end: 107c85927; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85704(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fa520;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar8 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar10 = dVar3 * 0.9;
  lVar2 = (long)_DAT_11276c8dc;
  dVar6 = dVar8;
  func_0x00010c23d5a0(dVar10,*(undefined8 *)(param_5 + lVar2));
  dVar9 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar9 = (dVar3 - dVar10) * 0.5 + dVar9;
  dVar7 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar4 = dVar7;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(puVar1);
  dVar7 = dVar7 + dVar4 * 0.0115;
  func_0x00010b8162e0(dVar9,dVar7,dVar10);
  dVar4 = dVar9;
  _CGRectGetMaxY();
  dVar5 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar8 = (dVar8 + param_1) - dVar4;
  func_0x00010b8162e0(dVar5,dVar4,dVar3,dVar8);
  func_0x00010b8166f8(dVar9,dVar7,dVar10,dVar6,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010b8166f8(dVar5,dVar4,dVar3,dVar8,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276c8e0));
  return;
}



/* Entry: 107c85928; end: 107c85a8f; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85928(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276c8e4;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c85a78;
    }
    puVar2 = PTR_PTR_1126c21b8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bf6e5e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276c8dc));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bef8cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276c8e0));
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c85a78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c85a90; end: 107c85c13; +[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c85a90(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126c21b8;
  _objc_opt_class(PTR_PTR_1126c21b8);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf6e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20bc0(param_1,param_2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d7408;
  uVar3 = uVar1;
  func_0x00010bef8cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = param_1;
  func_0x00010c23d6e0(param_1,param_2,puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar5 = dVar4;
  _objc_release(puVar2);
  uVar3 = uVar1;
  func_0x00010bef8cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (uVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_2 = dVar5 * 0.037000000000000005;
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  auVar6._8_8_ = param_4 + dVar4 * 0.0115 + param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 107c85c14; end: 107c85c77; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell addFriendsEmptyStateViewDidTapAddFriendsButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c8e8);
  func_0x00010beeecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar1,param_2,param_1,param_3,*(undefined8 *)(param_1 + _DAT_11276c8e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c85c78; end: 107c85c87; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c85c78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c8e4);
}



/* Entry: 107c85c88; end: 107c85c97; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c85c88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c8e8);
}



/* Entry: 107c85c98; end: 107c85cd7; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c8e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c85cd8; end: 107c85d37; -[SCDiscoverFeedFriendStoriesSectionEmptyStateCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c85cd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c8e8,0);
  _objc_storeStrong(param_1 + _DAT_11276c8e4,0);
  _objc_storeStrong(param_1 + _DAT_11276c8e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c8dc,0);
  return;
}



/* Entry: 107c85d38; end: 107c85f87; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c85d38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8ec) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8f0) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8f4) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8f8) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c8fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c8fc) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c900);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c900) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0x3fd0000000000000);
    func_0x00010c178280(puVar2);
    func_0x00010c18b5e0(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11276c904;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c908);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c908) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c85f88; end: 107c8602f;  */

void FUN_107c85f88(void)

{
  _objc_opt_new(PTR_PTR_1126d7410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c86030; end: 107c864d7; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86030(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa528;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar8 = (long)_DAT_11276c90c;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar8));
  dVar10 = param_3 * (1.0 - param_1);
  dVar16 = dVar10 * 0.5;
  func_0x00010bfe5ae0(*(undefined8 *)(param_5 + lVar8));
  dVar17 = param_4 * dVar10;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar8));
  dVar18 = param_3 * dVar10;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar8));
  dVar10 = param_3 * dVar10;
  func_0x00010b816528(dVar16,dVar17,dVar18,dVar10);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276c8ec);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar17,dVar18,dVar10);
  _objc_release(uVar2);
  lVar6 = (long)_DAT_11276c8f0;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar16,dVar17,dVar18,dVar10);
  _objc_release(uVar2);
  dVar11 = dVar16;
  dVar13 = dVar17;
  dVar19 = dVar18;
  dVar14 = dVar10;
  _CGRectInset(dVar16,dVar17,dVar18,dVar10,-*(double *)(param_5 + _DAT_11276c910),
               -*(double *)(param_5 + _DAT_11276c910));
  func_0x00010b816528();
  lVar9 = (long)_DAT_11276c8f4;
  uVar2 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(dVar11,dVar13,dVar19,dVar14);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar3 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar11,dVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  dVar13 = (param_3 + -48.0) * 0.5;
  dVar11 = dVar16;
  _CGRectGetMaxY(dVar16,dVar17,dVar18,dVar10);
  dVar11 = dVar11 + -11.0;
  uVar3 = 0x4048000000000000;
  uVar12 = 0x4036000000000000;
  func_0x00010b816528(dVar13,dVar11,0x4048000000000000,0x4036000000000000);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276c8f8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar13,dVar11,uVar3,uVar12);
  _objc_release(uVar2);
  func_0x00010bf85a80(*(undefined8 *)(param_5 + lVar8));
  dVar19 = param_3 * dVar13;
  func_0x00010bf85a40(*(undefined8 *)(param_5 + lVar8));
  dVar14 = 1.0 - dVar13;
  func_0x00010bf859a0(*(undefined8 *)(param_5 + lVar8));
  dVar11 = dVar16;
  _CGRectGetMaxY(dVar16,dVar17,dVar18,dVar10);
  dVar11 = param_4 * (dVar14 - dVar13) - dVar11;
  lVar6 = (long)_DAT_11276c8fc;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d5a0(dVar19,dVar11);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bed90;
  uVar7 = *(ulong *)(param_5 + _DAT_11276c914);
  _objc_retain(uVar7);
  _objc_opt_class(puVar4);
  uVar5 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar1 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  dVar15 = (param_3 - dVar19) * 0.5;
  _CGRectGetMaxY(dVar16,dVar17,dVar18,dVar10);
  dVar14 = dVar16;
  func_0x00010bf85a40(*(undefined8 *)(param_5 + lVar8));
  dVar13 = dVar14 * param_4;
  func_0x00010bf859e0(uVar1);
  dVar14 = (dVar16 + dVar13) - dVar14;
  dVar13 = dVar15;
  dVar10 = dVar19;
  func_0x00010b8162e0(dVar15,dVar14,dVar19,dVar11);
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar13,dVar14,dVar10,dVar11);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  param_4 = param_4 - dVar13;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  func_0x00010b8162e0(dVar15,dVar13,dVar19,param_4);
  uVar3 = *(undefined8 *)(param_5 + _DAT_11276c900);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c19f0e0(dVar15,dVar13,dVar19,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107c864d8; end: 107c86557; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c864d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c918);
  *(undefined8 *)(param_1 + _DAT_11276c918) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c8ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c86558; end: 107c8658f; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c91c);
  *(undefined8 *)(param_1 + _DAT_11276c91c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c86590; end: 107c8659f; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setshouldMatchStoriesEverywhereCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86590(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c920) = param_3;
  return;
}



/* Entry: 107c865a0; end: 107c8660f; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setViewModel:] */

void FUN_107c865a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bed90;
  _objc_opt_class(PTR_PTR_1126bed90);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde26c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c86610; end: 107c868db; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86610(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276c914;
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
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_107c868a0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c08cb00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c90c);
    *(ulong *)(param_1 + _DAT_11276c90c) = uVar3;
    _objc_release(uVar2);
    func_0x00010beb8be0(param_1);
    if (*(char *)(param_1 + _DAT_11276c920) == '\x01') {
      func_0x00010beb8de0(param_1);
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11276c924));
      func_0x00010bebab40(param_1);
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276c908);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      uVar3 = param_3;
      func_0x00010bf12da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebafc0(param_1);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c260f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebbb80(param_1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010bef73a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb76a0(param_1);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c928);
    *(ulong *)(param_1 + _DAT_11276c928) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c92c);
    *(ulong *)(param_1 + _DAT_11276c92c) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bef8740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c930);
    *(ulong *)(param_1 + _DAT_11276c930) = uVar3;
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c868a0:
  _objc_release(param_3);
  return;
}



/* Entry: 107c868dc; end: 107c86917;  */

void FUN_107c868dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be062c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c86918; end: 107c86b77; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _downloadThumbnailWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4bc0;
  _objc_alloc(PTR_PTR_1126b4bc0);
  uVar9 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ace0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_initWeak(auStack_68,param_1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276c91c);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010bfaa020(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107c86b78; end: 107c86bf3;  */

void FUN_107c86b78(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c141300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb07e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c86bf4; end: 107c86c97; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _setupThumbnailImageViewWithImage:ringViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86bf4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c8f0;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ec0(param_1 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c86c98; end: 107c86dd3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showRingViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86c98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010c141300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = (long)_DAT_11276c8f4;
    uVar2 = *(ulong *)(param_2 + lVar5);
    func_0x00010c06f880();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar3,param_3,uVar4);
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c141300(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar4);
    _objc_release(lVar3);
    puVar1 = PTR_PTR_1126c2eb0;
    lVar5 = param_4;
    func_0x00010c141300(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067620(puVar1,param_3,lVar5);
    *(undefined8 *)(param_2 + _DAT_11276c910) = param_1;
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c86dd4; end: 107c86fef; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showDisplayNameLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276c8fc;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar2);
    if (*(char *)(param_1 + _DAT_11276c920) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21ad00();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdb00();
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar2);
    }
    else {
      uVar2 = param_3;
      func_0x00010c290980();
      if ((int)uVar2 != 0) {
        func_0x00010c23b920();
      }
      puVar3 = *(undefined **)(param_1 + lVar6);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21ad00();
    }
    _objc_release(puVar3);
    lVar4 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  uVar2 = param_3;
  func_0x00010bf85a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c86ff0; end: 107c871db; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showEmptyThumbnailImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c86ff0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276c8f0;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x84);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c18b5e0(puVar4,param_2,param_1);
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar5,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107c871dc; end: 107c872f7; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showSnapchatterAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c871dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276c8ec;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161940();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c872f8; end: 107c874ab; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showUsernameLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c872f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276c900;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  func_0x00010c08fa60();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c874ac; end: 107c875a3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _showActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c874ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276c8f8;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c875a4; end: 107c87633; +[SCDiscoverFeedFriendSuggestionsCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c875a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bed90;
  _objc_opt_class(PTR_PTR_1126bed90);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  _objc_release(uVar1);
  func_0x00010b81662c(param_1,param_2);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107c87634; end: 107c8769f; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell handleTapActionOnAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c87634(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c934);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c928);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c8ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c876a0; end: 107c876a3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell bitmojiDidLoad:] */

void FUN_107c876a0(void)

{
  return;
}



/* Entry: 107c876a4; end: 107c8773f; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c876a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010c14c8a0(param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c934);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276c92c);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c87740; end: 107c877a7; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _handleTapAddFriendAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c87740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c934);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c930);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c8f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c877a8; end: 107c8780b; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c877a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c934);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c928);
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c8780c; end: 107c87823; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107c8780c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  return param_4 == *(long *)(param_1 + _DAT_11276c904);
}



/* Entry: 107c87824; end: 107c87833; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c87824(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c934);
}



/* Entry: 107c87834; end: 107c87873; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c87834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c934;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c87874; end: 107c87883; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c87874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c914);
}



/* Entry: 107c87884; end: 107c87893; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c87884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c91c);
}



/* Entry: 107c87894; end: 107c878a3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell shouldMatchStoriesEverywhereCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c87894(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276c920);
}



/* Entry: 107c878a4; end: 107c878b3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell setShouldMatchStoriesEverywhereCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c878a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c920) = param_3;
  return;
}



/* Entry: 107c878b4; end: 107c879e3; -[SCDiscoverFeedFriendSuggestionsCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c878b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c91c,0);
  _objc_storeStrong(param_1 + _DAT_11276c914,0);
  _objc_storeStrong(param_1 + _DAT_11276c934,0);
  _objc_storeStrong(param_1 + _DAT_11276c918,0);
  _objc_storeStrong(param_1 + _DAT_11276c908,0);
  _objc_storeStrong(param_1 + _DAT_11276c930,0);
  _objc_storeStrong(param_1 + _DAT_11276c92c,0);
  _objc_storeStrong(param_1 + _DAT_11276c928,0);
  _objc_storeStrong(param_1 + _DAT_11276c904,0);
  _objc_storeStrong(param_1 + _DAT_11276c8f8,0);
  _objc_storeStrong(param_1 + _DAT_11276c900,0);
  _objc_storeStrong(param_1 + _DAT_11276c8fc,0);
  _objc_storeStrong(param_1 + _DAT_11276c90c,0);
  _objc_storeStrong(param_1 + _DAT_11276c924,0);
  _objc_storeStrong(param_1 + _DAT_11276c8f4,0);
  _objc_storeStrong(param_1 + _DAT_11276c8f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c8ec,0);
  return;
}



/* Entry: 107c879e4; end: 107c879ef; +[SCDiscoverFeedMyStoriesCircleCell announcerIdentifier] */

undefined ** FUN_107c879e4(void)

{
  return &PTR____CFConstantStringClassReference_110eb4718;
}



/* Entry: 107c879f0; end: 107c879ff; -[SCDiscoverFeedMyStoriesCircleCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c879f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c93c),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107c87a00; end: 107c87a0f; -[SCDiscoverFeedMyStoriesCircleCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c87a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c93c),PTR_s_removeListener__112628e00);
  return;
}


