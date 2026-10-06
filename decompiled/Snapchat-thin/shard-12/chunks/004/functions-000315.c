/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10915523c; end: 109155243; -[SCBitmojiStickerServices search] */

undefined8 FUN_10915523c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109155244; end: 10915524b; -[SCBitmojiStickerServices stickerCategoryIconProvider] */

undefined8 FUN_109155244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10915524c; end: 109155287; -[SCBitmojiStickerServices .cxx_destruct] */

void FUN_10915524c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109155288; end: 10915533f; -[SCCustomSticker initWithCTPItem:] */

undefined1 * FUN_109155288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bebde60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109155340; end: 1091553f3; -[SCCustomSticker initWithSOJUSticker:] */

undefined1 * FUN_109155340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf6580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091553f4; end: 1091554af; -[SCCustomSticker initWithItemInstance:] */

undefined1 * FUN_1091553f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be45ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bebde60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091554b0; end: 1091554ef; -[SCCustomSticker toCTPItem] */

void FUN_1091554b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    func_0x00010bdf6580();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091554f0; end: 10915553f; -[SCCustomSticker toCTItemInstance] */

void FUN_1091554f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109155540; end: 1091556eb; -[SCCustomSticker _ctpItemFromSticker] */

void FUN_109155540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ba838;
  _objc_alloc(PTR_PTR_1126ba838);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2540c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf92c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf92c60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c06c000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,param_2,uVar2,uVar3,
                      uVar4,0,0,0,lVar5 != 0);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2540c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_109161630();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf15da0(uVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  uVar4 = uVar3;
  func_0x00010c25cfc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110db9ab8,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fe20(puVar6,param_2,uVar3,3,puVar1,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091556ec; end: 10915583f; -[SCCustomSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_1091556ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  uVar5 = *(undefined8 *)(param_7 + 8);
  uVar4 = *(undefined8 *)(param_7 + 0x18);
  uVar3 = uVar5;
  func_0x00010c06c000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,0x19,0,
                      uVar5,0,uVar4,param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109155840; end: 1091558c7; -[SCCustomSticker initWithCoder:] */

undefined1 * FUN_109155840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091558c8; end: 1091558df; -[SCCustomSticker encodeWithCoder:] */

void FUN_1091558c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e81678);
  return;
}



/* Entry: 1091558e0; end: 109155903; -[SCCustomSticker copyWithZone:] */

undefined8 FUN_1091558e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109155904; end: 10915597b; -[SCCustomSticker isEqual:] */

undefined8 FUN_109155904(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ba830;
    _objc_opt_class(PTR_PTR_1126ba830);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c071ae0(uVar3);
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10915597c; end: 10915599f; -[SCCustomSticker hash] */

ulong FUN_10915597c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  return uVar1 ^ 0x9d0e53;
}



/* Entry: 1091559a0; end: 1091559a7; -[SCCustomSticker type] */

undefined8 FUN_1091559a0(void)

{
  return 5;
}



/* Entry: 1091559a8; end: 1091559d7; -[SCCustomSticker packId] */

void FUN_1091559a8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dea498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dea498);
  return;
}



/* Entry: 1091559d8; end: 109155a53; -[SCCustomSticker stickerId] */

void FUN_1091559d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba838;
  _objc_opt_class(PTR_PTR_1126ba838);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010bf61e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109155a54; end: 109155a5f; -[SCCustomSticker loggingParameters] */

undefined ** FUN_109155a54(void)

{
  return &PTR__OBJC_CLASS___NSConstantDictionary_1111754b8;
}



/* Entry: 109155a60; end: 109155a6b; -[SCCustomSticker shortLoggingName] */

undefined ** FUN_109155a60(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 109155a6c; end: 109155c0f; -[SCCustomSticker _sojuStickerFromItem:] */

void FUN_109155a6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ba838;
  _objc_opt_class(PTR_PTR_1126ba838);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar6);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c4008;
    _objc_alloc_init(PTR_PTR_1126c4008);
    uVar3 = uVar2;
    func_0x00010bf61e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b0e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c1d7da0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf92c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195660(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf92c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195640(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = 0xffffffffea1fba4f;
    func_0x00010b796d4c(0xffffffffea1fba4f);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20baa0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c06c000(uVar2);
    func_0x00010c1af2c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109155c10; end: 10915600f; -[SCCustomSticker _itemFromItemInstance:] */

void FUN_109155c10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010bfd8f20();
    puVar12 = (undefined *)0x0;
    if ((int)uVar1 != 0) {
      uVar1 = uVar3;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf4be80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      puVar12 = PTR_PTR_1126d25c0;
      uVar1 = uVar3;
      func_0x00010c0c45e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      uVar6 = uVar3;
      if (uVar2 == 0) {
        func_0x00010c26e3a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c45e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010bf4db80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28fb20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c26d880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c45e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010bf4be80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f080();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
    }
    uVar1 = uVar3;
    func_0x00010c2a5040(uVar3);
    uVar2 = uVar3;
    func_0x00010bfe0640(uVar3);
    uVar5 = uVar3;
    func_0x00010bf5b440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe2ee0();
    uVar7 = uVar5;
    func_0x00010c0b5940(uVar5);
    func_0x000107c30948(uVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126ba838;
    _objc_alloc(PTR_PTR_1126ba838);
    uVar5 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    FUN_10916182c();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf92c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf92c60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ed1a0(uVar3);
    func_0x00010c06c000();
    func_0x00010c007d00((double)(uVar1 & 0xffffffff),(double)(uVar2 & 0xffffffff),puVar8);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar13 = PTR_PTR_1126baa60;
    _objc_alloc(PTR_PTR_1126baa60);
    uVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000109161b98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fe20(puVar13);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar12);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 109156010; end: 109156357; -[SCCustomSticker _itemInstanceFromCTPItem] */

void FUN_109156010(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ba838;
  _objc_opt_class(PTR_PTR_1126ba838);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar8);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar6 = PTR_PTR_1126ba828;
    _objc_opt_new(PTR_PTR_1126ba828);
    uVar3 = uVar2;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      puVar9 = PTR_PTR_1126b0ce8;
      _objc_opt_new();
      uVar3 = uVar2;
      func_0x00010c0c45e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar9);
      _objc_retain(puVar9);
      func_0x00010c0c1100(uVar3);
      _objc_release(uVar3);
      func_0x00010c1c4360(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar9);
      _objc_release(puVar9);
    }
    func_0x00010c0c4a20(uVar2);
    func_0x00010c1a7d00(puVar6);
    func_0x00010c0c4a20(uVar2);
    func_0x00010c2256c0(puVar6);
    uVar3 = uVar2;
    func_0x00010bf92c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195640(puVar6);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf92c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195660(puVar6);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x000107c3094c();
    if ((int)uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar9);
    }
    func_0x00010c185c40(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar3);
    func_0x00010c0ed1a0(uVar2);
    func_0x00010c1d64a0(puVar6);
    func_0x00010c06c000(uVar2);
    func_0x00010c1af280(puVar6);
    func_0x00010c188860(puVar5);
    func_0x00010bf61e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_109161630();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c196600(puVar4);
    func_0x00010c1b5d40(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 109156358; end: 1091563ff;  */

void FUN_109156358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c214440(uVar1);
  func_0x00010c182a60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109156400; end: 10915643b; -[SCCustomSticker .cxx_destruct] */

void FUN_109156400(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915643c; end: 10915662b;  */

void FUN_10915643c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_retain();
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109156878();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10915662c;
  puStack_88 = &UNK_11084e500;
  _objc_retain(param_1);
  lStack_80 = param_1;
  func_0x00010beff4c0(puVar2,param_2,lVar1,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000109156890();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10915663c;
  puStack_b0 = &UNK_11084e500;
  lStack_a8 = param_1;
  _objc_retain(param_1);
  func_0x00010beff4c0(puVar3,param_2,lVar1,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000109156818();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000109156830();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4,param_2,puVar5,puVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lStack_a8);
  _objc_release(puVar2);
  _objc_release(lStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000109156638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 10915662c; end: 10915664b;  */

void FUN_10915662c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109156638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 10915664c; end: 1091567c3;  */

void FUN_10915664c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_retain();
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109156878();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091567c4;
  puStack_60 = &UNK_11084e500;
  lStack_58 = param_1;
  _objc_retain(param_1);
  func_0x00010beff4c0(puVar2,param_2,lVar1,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109156848();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109156860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3,param_2,puVar4,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001091567cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1091567c4; end: 1091567cf;  */

void FUN_1091567c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001091567cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1091567d0; end: 1091567db; -[SCFeatureSettingsService getCustomStickerSharingPrivacyAccepted] */

void FUN_1091567d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f27c38);
  return;
}



/* Entry: 1091567dc; end: 1091567e7; -[SCFeatureSettingsService customStickerSharingPrivacyAcceptedServerParam] */

undefined ** FUN_1091567dc(void)

{
  return &PTR____CFConstantStringClassReference_110f27c38;
}



/* Entry: 1091567e8; end: 1091567f7; -[SCFeatureSettingsService setCustomStickerSharingPrivacyAccepted:] */

void FUN_1091567e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f27c38,param_3);
  return;
}



/* Entry: 1091567f8; end: 1091567ff; -[SCFeatureSettingsService custom_sticker_sharing_privacy_alert_accepted_client_value:] */

undefined * FUN_1091567f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 109156800; end: 109156807; -[SCFeatureSettingsService custom_sticker_sharing_privacy_alert_accepted_server_value:] */

void FUN_109156800(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 109156808; end: 1091568a7; -[SCFeatureSettingsService customStickerSharingPrivacyAccepted] */

void FUN_109156808(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f27c38,0);
  return;
}



/* Entry: 1091568a8; end: 109156a37; -[SCGfycatSticker initWithCTPItem:] */

undefined1 * FUN_1091568a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_112700910;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bae10;
    _objc_alloc(PTR_PTR_1126bae10);
    puVar5 = PTR_PTR_1126bae60;
    _objc_alloc();
    func_0x00010c029100();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0553c0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c1196a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0cc0;
    _objc_opt_new();
    func_0x00010c1b5d40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126badf0;
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 109156a38; end: 109156a53;  */

void FUN_109156a38(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109156a54; end: 109156a7b; -[SCGfycatSticker toCTPItem] */

void FUN_109156a54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109156a7c; end: 109156aa3; -[SCGfycatSticker toCTItemInstance] */

void FUN_109156a7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109156aa4; end: 109156b03; -[SCGfycatSticker _gfycatEntity] */

void FUN_109156aa4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb2d0;
  _objc_opt_class(PTR_PTR_1126bb2d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109156b04; end: 109156b8b; -[SCGfycatSticker initWithCoder:] */

undefined1 * FUN_109156b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109156b8c; end: 109156ba3; -[SCGfycatSticker encodeWithCoder:] */

void FUN_109156b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f27d18);
  return;
}



/* Entry: 109156ba4; end: 109156bc7; -[SCGfycatSticker copyWithZone:] */

undefined8 FUN_109156ba4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109156bc8; end: 109156c97; -[SCGfycatSticker isEqual:] */

undefined8 FUN_109156bc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d4fd0;
    _objc_opt_class(PTR_PTR_1126d4fd0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      func_0x00010c0844e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 8);
      _objc_release(param_3);
      func_0x00010c0844e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 109156c98; end: 109156d1f; -[SCGfycatSticker hash] */

undefined * FUN_109156c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27d38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 109156d20; end: 109156d27; -[SCGfycatSticker type] */

undefined8 FUN_109156d20(void)

{
  return 0xc;
}



/* Entry: 109156d28; end: 109156d33; -[SCGfycatSticker packId] */

undefined ** FUN_109156d28(void)

{
  return &PTR____CFConstantStringClassReference_110ef29b8;
}



/* Entry: 109156d34; end: 109156d77; -[SCGfycatSticker stickerId] */

void FUN_109156d34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be23f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcc560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109156d78; end: 109156de3; -[SCGfycatSticker shortLoggingName] */

void FUN_109156d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bac28;
  uVar1 = param_1;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_1);
  func_0x00010c113fe0(puVar2,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109156de4; end: 109156f53; -[SCGfycatSticker loggingParameters] */

void FUN_109156de4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c0f0a00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bac28;
  lVar2 = param_1;
  func_0x00010c2540c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_1);
  func_0x00010c113fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 109156f54; end: 109156f83; -[SCGfycatSticker .cxx_destruct] */

void FUN_109156f54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109156f84; end: 109156f8f; +[SCGiphySticker packId] */

undefined ** FUN_109156f84(void)

{
  return &PTR____CFConstantStringClassReference_110f27d58;
}



/* Entry: 109156f90; end: 10915715f; -[SCGiphySticker initWithCTPItem:] */

undefined8 * FUN_109156f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700918;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[3];
    puVar2[3] = param_3;
    _objc_release(uVar3);
    uVar4 = puVar2[3];
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba880;
    _objc_opt_class(PTR_PTR_1126ba880);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar6 = uVar1;
    func_0x00010bfccae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[7];
    puVar2[7] = uVar6;
    _objc_release(uVar3);
    uVar6 = uVar1;
    func_0x00010c0c45e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0c1100(uVar6);
    puVar7 = puVar2;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[2];
    puVar2[2] = puVar7;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126d4e60;
    puVar8 = PTR_PTR_1126ba878;
    func_0x00010c0f0a00(PTR_PTR_1126ba878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2466e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = puVar2[1];
    puVar2[1] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 109157160; end: 1091571cb;  */

void FUN_109157160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091571cc; end: 1091571cf;  */

void FUN_1091571cc(void)

{
  return;
}



/* Entry: 1091571d0; end: 10915754f; -[SCGiphySticker initWithItemInstance:] */

undefined1 * FUN_1091571d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_112700918;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(ulong *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfccae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(ulong *)((long)puVar1 + 0x38) = uVar6;
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(ulong *)((long)puVar1 + 0x28) = uVar7;
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(ulong *)((long)puVar1 + 0x30) = uVar7;
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126d25c0;
    func_0x00010c28fb20(PTR_PTR_1126d25c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2a5040();
    uVar7 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfccaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfe0640();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126ba880;
    _objc_alloc(PTR_PTR_1126ba880);
    func_0x00010c017cc0((double)(uVar6 & 0xffffffff),(double)(uVar11 & 0xffffffff));
    puVar13 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar13;
    _objc_release(uVar2);
    puVar13 = PTR_PTR_1126d4e60;
    puVar14 = PTR_PTR_1126ba878;
    func_0x00010c0f0a00(PTR_PTR_1126ba878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2466e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar13;
    _objc_release(uVar2);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar8);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109157550; end: 1091575d7; -[SCGiphySticker initWithCoder:] */

undefined1 * FUN_109157550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700918;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091575d8; end: 1091575ef; -[SCGiphySticker encodeWithCoder:] */

void FUN_1091575d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 0x18),
             &PTR____CFConstantStringClassReference_110ef29f8);
  return;
}



/* Entry: 1091575f0; end: 109157617; -[SCGiphySticker toCTPItem] */

void FUN_1091575f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109157618; end: 10915763f; -[SCGiphySticker toCTItemInstance] */

void FUN_109157618(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109157640; end: 109157773; -[SCGiphySticker loggingParameters] */

/* WARNING: Possible PIC construction at 0x000109157694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109157698) */
/* WARNING: Removing unreachable block (ram,0x0001091576b0) */
/* WARNING: Removing unreachable block (ram,0x0001091576d8) */
/* WARNING: Removing unreachable block (ram,0x000109157770) */
/* WARNING: Removing unreachable block (ram,0x000109157758) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_109157640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_packId_112619c98);
  return;
}



/* Entry: 109157774; end: 10915777f; -[SCGiphySticker packId] */

void FUN_109157774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ba878,PTR_s_packId_112619c98);
  return;
}



/* Entry: 109157780; end: 10915780b; -[SCGiphySticker shortLoggingName] */

void FUN_109157780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0f0a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10915780c; end: 10915780f; -[SCGiphySticker stickerId] */

void FUN_10915780c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfccaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_giphyId_1125d0c60);
  return;
}



/* Entry: 109157810; end: 109157817; -[SCGiphySticker type] */

undefined8 FUN_109157810(void)

{
  return 7;
}



/* Entry: 109157818; end: 10915783b; -[SCGiphySticker copyWithZone:] */

undefined8 FUN_109157818(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10915783c; end: 10915795b; -[SCGiphySticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_10915783c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,0x19,0,
                      *(undefined8 *)(param_7 + 8),0,*(undefined8 *)(param_7 + 0x10),param_9,
                      param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915795c; end: 109157a2b; -[SCGiphySticker isEqual:] */

undefined8 FUN_10915795c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ba878;
    _objc_opt_class(PTR_PTR_1126ba878);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(param_3);
      func_0x00010c0844e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      _objc_release(param_3);
      func_0x00010c0844e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 109157a2c; end: 109157ab3; -[SCGiphySticker hash] */

undefined * FUN_109157a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27d38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 109157ab4; end: 109157d3b; -[SCGiphySticker _itemInstanceFromCTPItem] */

void FUN_109157ab4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ba880;
  _objc_opt_class(PTR_PTR_1126ba880);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar11);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar6 = PTR_PTR_1126ba870;
    _objc_opt_new(PTR_PTR_1126ba870);
    puVar7 = PTR_PTR_1126b0ce8;
    _objc_alloc_init();
    uVar3 = uVar2;
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010c0c1100(uVar3);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bfccae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3ba0(puVar6);
    _objc_release(uVar3);
    func_0x00010c1c4360(puVar6);
    func_0x00010c0c4a20(uVar2);
    func_0x00010c2256c0(puVar6);
    func_0x00010c0c4a20(uVar2);
    func_0x00010c1a7d00(puVar6);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0844e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar8);
    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (((ulong)puVar9 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0844e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar4);
      _objc_release(puVar10);
      _objc_release(uVar8);
    }
    func_0x00010c1a3b80(puVar5);
    func_0x00010c196600(puVar4);
    func_0x00010c1b5d40(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 109157d3c; end: 109157d8f;  */

void FUN_109157d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c214440(uVar1);
  func_0x00010c182a60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109157d90; end: 109157d93;  */

void FUN_109157d90(void)

{
  return;
}



/* Entry: 109157d94; end: 109157d9b; -[SCGiphySticker giphyType] */

undefined8 FUN_109157d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109157d9c; end: 109157da3; -[SCGiphySticker resourceUrl] */

undefined8 FUN_109157d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109157da4; end: 109157dab; -[SCGiphySticker lowResResourceUrl] */

undefined8 FUN_109157da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109157dac; end: 109157db3; -[SCGiphySticker giphyId] */

undefined8 FUN_109157dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109157db4; end: 109157e1f; -[SCGiphySticker .cxx_destruct] */

void FUN_109157db4(long param_1)

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



/* Entry: 109157e20; end: 109157f07; -[SCSnapchatSticker initWithSOJUSticker:] */

undefined1 * FUN_109157e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdd4940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdf6560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109157f08; end: 10915818b; -[SCSnapchatSticker initWithCTPItem:presentationModelProvider:] */

undefined8 *
FUN_109157f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112700920;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    lVar3 = puVar1[2];
    func_0x00010bf96f00();
    uVar4 = puVar1[2];
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 2) {
      puVar6 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar7 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar9 = uVar4;
      if ((uVar7 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar4);
      _objc_initWeak(auStack_68,puVar1);
      uVar2 = param_4;
      func_0x00010c10f520(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(uVar9);
      uVar5 = uVar2;
      func_0x00010c25ff60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126ae810;
      _objc_alloc_init();
      uVar2 = puVar1[3];
      puVar1[3] = puVar6;
      _objc_release(uVar2);
      func_0x00010bef7e00(puVar1[3]);
      _objc_release(uVar5);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      puVar6 = PTR_PTR_1126babc8;
      _objc_opt_class(PTR_PTR_1126babc8);
      uVar7 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar9 = uVar4;
      if ((uVar7 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126d4e60;
      func_0x00010c246720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      uVar2 = puVar1[1];
      puVar1[1] = puVar6;
      _objc_release(uVar2);
      puVar8 = puVar1;
      func_0x00010be45de0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar1[4];
      puVar1[4] = puVar8;
    }
    _objc_release(uVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10915818c; end: 109158373;  */

void FUN_10915818c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126bb278;
  if (lVar2 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar9 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    uVar1 = param_2;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf1c500();
    uVar9 = 0;
    if (lVar4 == 2) {
      uVar9 = uVar1;
      func_0x00010bfb7be0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = uVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4e60;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf62ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    uVar6 = uVar1;
    func_0x00010bf63000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130220(uVar1);
    func_0x00010c2466a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + 8);
    *(undefined **)(lVar2 + 8) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar10);
    lVar4 = lVar2;
    func_0x00010be45de0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = lVar4;
    _objc_release(uVar8);
    func_0x00010bf86d80(*(undefined8 *)(lVar2 + 0x18));
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109158374; end: 109158653; -[SCSnapchatSticker initWithItemInstance:] */

undefined8 * FUN_109158374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_112700920;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[4];
    puVar2[4] = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bb1d0;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar3 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c084460();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puVar2[2];
    puVar2[2] = puVar5;
    _objc_release(uVar12);
    _objc_release(uVar3);
    lVar6 = puVar2[2];
    func_0x00010bf96f00();
    uVar7 = puVar2[2];
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 2) {
      puVar5 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar11 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar1 = uVar7;
      if ((uVar11 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      uVar12 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar12;
      func_0x00010bf1c360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      puVar5 = PTR_PTR_1126d4e60;
      uVar12 = uVar3;
      func_0x00010bf12ea0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bfb7be0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      uVar9 = uVar3;
      func_0x00010bf62920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar10 = puVar2[1];
      puVar2[1] = puVar5;
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar12);
    }
    else {
      puVar5 = PTR_PTR_1126babc8;
      _objc_opt_class(PTR_PTR_1126babc8);
      uVar11 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar1 = uVar7;
      if ((uVar11 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126d4e60;
      func_0x00010c246720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar3 = puVar2[1];
      puVar2[1] = puVar5;
    }
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 109158654; end: 10915888f; -[SCSnapchatSticker _ctpItemFromSojuSticker:] */

void FUN_109158654(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c255200();
  if (lVar1 == 0x24b0f4ce) {
    func_0x00010bdf6520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_109158890;
    uStack_50 = 0x1091588a0;
    lVar1 = param_3;
    func_0x00010bf9e600();
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = lVar1;
    if (puStack_68[5] == 0) {
      func_0x00010c2554c0(PTR_PTR_1126dbfc0);
    }
    puVar2 = PTR_PTR_1126d25c0;
    func_0x00010c28fb20(PTR_PTR_1126d25c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126babc8;
    _objc_alloc(PTR_PTR_1126babc8);
    lVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c06c000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c048880(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    param_1 = PTR_PTR_1126baa60;
    _objc_alloc(PTR_PTR_1126baa60);
    lVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fe20(param_1);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109158890; end: 1091588a7;  */

void FUN_109158890(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091588a8; end: 10915897f;  */

void FUN_1091588a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2540c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25ce00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109158980; end: 1091589c7; -[SCSnapchatSticker dealloc] */

void FUN_109158980(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_112700920;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091589c8; end: 1091589ef; -[SCSnapchatSticker toCTPItem] */

void FUN_1091589c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091589f0; end: 109158a17; -[SCSnapchatSticker toCTItemInstance] */

void FUN_1091589f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109158a18; end: 109158b6f; -[SCSnapchatSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_109158a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar3);
  lVar4 = param_7;
  func_0x00010c27dd80(param_7);
  uVar1 = *(undefined8 *)(param_7 + 8);
  uVar2 = *(undefined8 *)(param_7 + 0x10);
  uVar6 = *(undefined8 *)(param_7 + 0x20);
  uVar5 = uVar1;
  func_0x00010c06c000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar3,param_8,lVar4,0x19,0,
                      uVar1,uVar2,uVar6,param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109158b70; end: 109158c1b; -[SCSnapchatSticker initWithCoder:] */

undefined1 * FUN_109158b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700920;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdf6560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109158c1c; end: 109158c33; -[SCSnapchatSticker encodeWithCoder:] */

void FUN_109158c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f27d98);
  return;
}



/* Entry: 109158c34; end: 109158c57; -[SCSnapchatSticker copyWithZone:] */

undefined8 FUN_109158c34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109158c58; end: 109158f17; -[SCSnapchatSticker isEqual:] */

ulong FUN_109158c58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar9 = 1;
    goto LAB_109158ef0;
  }
  puVar2 = PTR_PTR_1126ba7a8;
  _objc_opt_class(PTR_PTR_1126ba7a8);
  uVar9 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    goto LAB_109158ef0;
  }
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c27dd80();
  if (uVar9 == 3) {
    uVar9 = param_1;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    uVar9 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar9 = param_3;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    uVar9 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar9 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar9 = uVar1;
    func_0x00010bf62ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    if (uVar9 == 0) {
LAB_109158e88:
      func_0x00010c2540c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010c071ae0(param_1);
    }
    else {
      uVar5 = uVar3;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar9);
      if (uVar5 == 0) goto LAB_109158e88;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010c071ae0();
      if ((int)uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar5 = uVar1;
        func_0x00010bf62ee0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bf62ee0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c071ae0(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
    }
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010c071ae0(uVar9);
  }
  _objc_release(param_3);
LAB_109158ef0:
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 109158f18; end: 109158f3b; -[SCSnapchatSticker hash] */

ulong FUN_109158f18(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  return uVar1 ^ 0x3e58818;
}



/* Entry: 109158f3c; end: 109158f6b; -[SCSnapchatSticker type] */

undefined8 FUN_109158f3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf96f00();
  uVar1 = 3;
  if (lVar3 != 2) {
    uVar1 = 0;
  }
  uVar2 = 2;
  if (lVar3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 109158f6c; end: 109158f73; -[SCSnapchatSticker packId] */

void FUN_109158f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_packId_112619c98);
  return;
}



/* Entry: 109158f74; end: 109158f7b; -[SCSnapchatSticker stickerId] */

void FUN_109158f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2540d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stickerId_112672a58);
  return;
}



/* Entry: 109158f7c; end: 10915906f; -[SCSnapchatSticker shortLoggingName] */

void FUN_109158f7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126bac28;
  lVar1 = param_1;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c27dd80(param_1);
  func_0x00010c113fe0(puVar3,param_2,lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c27dd80();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 3) {
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f27db8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109159070; end: 109159243; -[SCSnapchatSticker loggingParameters] */

void FUN_109159070(undefined **param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1[1];
  func_0x00010c255200();
  uVar1 = 0;
  ppuVar5 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (puVar3 == (undefined *)0x7f6db8cc) {
    uVar1 = 4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dea458;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110dea458;
  uVar2 = 2;
  if (puVar3 != (undefined *)0x3f997e22) {
    ppuVar4 = ppuVar5;
    uVar2 = uVar1;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dd6e38;
  if (puVar3 != (undefined *)0x24b0f4ce) {
    ppuStack_58 = ppuVar4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dbf1f8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110efe458;
  uVar1 = 3;
  if (puVar3 != (undefined *)0x24b0f4ce) {
    uVar1 = uVar2;
  }
  ppuVar4 = param_1;
  func_0x00010c0f0a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR_PTR_1126bac28;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_78 = ppuVar4;
  }
  ppuStack_80 = &PTR____CFConstantStringClassReference_110efdc78;
  puVar3 = param_1[1];
  func_0x00010c2540c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113fe0(ppuVar5,param_2,puVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_70 = ppuVar5;
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&ppuStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  pppuVar10 = &ppuStack_58;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(pppuVar10);
    pppuVar8 = pppuVar10;
    func_0x00010bf62920();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar8;
    func_0x00010c08fa60();
    puVar3 = PTR_PTR_1126ba7f0;
    if (pppuVar9 == (undefined ***)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      pppuVar9 = pppuVar10;
      func_0x00010bf62920(pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cd80(puVar3,param_2,pppuVar9,&PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar9);
    }
    _objc_release(pppuVar8);
    puVar7 = PTR_PTR_1126b5938;
    pppuVar8 = pppuVar10;
    func_0x00010c2540c0(pppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbab60(puVar7,param_2,pppuVar8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar8);
    _objc_release(puVar3);
    _objc_release(pppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 109159244; end: 109159333; -[SCSnapchatSticker _bitmojiImageParamsFromSOJUSticker:] */

void FUN_109159244(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf62920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126ba7f0;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf62920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cd80(puVar4,param_2,lVar2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b5938;
  lVar1 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbab60(puVar3,param_2,lVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109159334; end: 109159503; -[SCSnapchatSticker _bitmojiPresentationModelFromSOJUSticker:] */

void FUN_109159334(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c255200();
  if (lVar1 == 0x24b0f4ce) {
    func_0x00010bdd4800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_109158890;
    uStack_50 = 0x1091588a0;
    uStack_48 = 0;
    uVar2 = param_1;
    func_0x00010bf62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0c40();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    uVar2 = param_1;
    func_0x00010bf12ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfb7be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6080(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(param_1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


