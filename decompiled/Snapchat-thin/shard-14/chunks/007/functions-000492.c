/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b60fa1c; end: 10b60fa23; -[SCDiscoverFeedStorySnapThumbnailMetadata mediaId] */

undefined8 FUN_10b60fa1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b60fa24; end: 10b60fa2b; -[SCDiscoverFeedStorySnapThumbnailMetadata snapId] */

undefined8 FUN_10b60fa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b60fa2c; end: 10b60fa33; -[SCDiscoverFeedStorySnapThumbnailMetadata thumbnailContentObject] */

undefined8 FUN_10b60fa2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b60fa34; end: 10b60fa3b; -[SCDiscoverFeedStorySnapThumbnailMetadata thumbnailCoKey] */

undefined8 FUN_10b60fa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b60fa3c; end: 10b60fa43; -[SCDiscoverFeedStorySnapThumbnailMetadata thumbnailCoIv] */

undefined8 FUN_10b60fa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b60fa44; end: 10b60fabb; -[SCDiscoverFeedStorySnapThumbnailMetadata .cxx_destruct] */

void FUN_10b60fa44(long param_1)

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



/* Entry: 10b60fabc; end: 10b60fb9f; +[SCStoriesThumbnailDataModel thumbnailBitmojiWithBitmojiTileTemplateId:userAvatarId:contexts:feature:isBitmojiSelfie:] */

void FUN_10b60fabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c21e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined4 *)(puVar2 + 0x80) = param_6;
  puVar2[0x84] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b60fba0; end: 10b60fca7; +[SCStoriesThumbnailDataModel thumbnailBoltWithMediaId:contentObject:encryptionKey:encryptionIv:contextType:] */

void FUN_10b60fba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c21e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x60) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b60fca8; end: 10b60fdaf; +[SCStoriesThumbnailDataModel thumbnailURLWithMediaId:url:encryptionKey:encryptionIv:contextType:isProfilePictureThumbnail:] */

void FUN_10b60fca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c21e0;
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
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  puVar2[0x38] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b60fdb0; end: 10b610147; -[SCStoriesThumbnailDataModel initWithCoder:] */

undefined8 * FUN_10b60fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1127068d0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) goto LAB_10b6100d4;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0xd];
        puVar1[0xd] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0xe];
        puVar1[0xe] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0xf];
        puVar1[0xf] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66ee0();
        *(int *)(puVar1 + 0x10) = (int)uVar4;
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)((long)puVar1 + 0x84) = (char)uVar4;
        uVar4 = 2;
      }
      else {
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[8];
        puVar1[8] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[9];
        puVar1[9] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[10];
        puVar1[10] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0xb];
        puVar1[0xb] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[0xc] = uVar4;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[3];
      puVar1[3] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[4];
      puVar1[4] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[5];
      puVar1[5] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf66f40();
      puVar1[6] = uVar4;
      uVar3 = param_3;
      func_0x00010bf66ce0();
      uVar4 = 0;
      *(char *)(puVar1 + 7) = (char)uVar3;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b6100d4:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b610148; end: 10b61016b; -[SCStoriesThumbnailDataModel copyWithZone:] */

undefined8 FUN_10b610148(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61016c; end: 10b61031f; -[SCStoriesThumbnailDataModel encodeWithCoder:] */

void FUN_10b61016c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                        &PTR____CFConstantStringClassReference_110f68618);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                        &PTR____CFConstantStringClassReference_110f68638);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                        &PTR____CFConstantStringClassReference_110f68658);
    func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x80),
                        &PTR____CFConstantStringClassReference_110f68678);
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x84),
                        &PTR____CFConstantStringClassReference_110f68698);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f685f8;
  }
  else if (lVar2 == 1) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110f68558);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                        &PTR____CFConstantStringClassReference_110f68578);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                        &PTR____CFConstantStringClassReference_110f68598);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                        &PTR____CFConstantStringClassReference_110f685b8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                        &PTR____CFConstantStringClassReference_110f685d8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f68538;
  }
  else {
    if (lVar2 != 0) goto LAB_10b610310;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110f684b8);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110f683f8);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f684d8);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110f684f8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_110f68418);
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110f68518);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f683d8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b610310:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b610320; end: 10b61042f; -[SCStoriesThumbnailDataModel hash] */

void FUN_10b610320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x30);
  lStack_88 = -lVar4;
  if (-1 < lVar4) {
    lStack_88 = lVar4;
  }
  uStack_80 = (ulong)*(byte *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  lStack_58 = -lVar4;
  if (-1 < lVar4) {
    lStack_58 = lVar4;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 0x80);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x84);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_d8 = PTR_PTR_1127068d0;
  puStack_e0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b610430; end: 10b610473; -[SCStoriesThumbnailDataModel internalInit] */

void FUN_10b610430(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127068d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b610474; end: 10b610653; -[SCStoriesThumbnailDataModel isEqual:] */

long FUN_10b610474(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61062c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b610638;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) &&
         ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
          (*(int *)(param_1 + 0x80) == *(int *)(param_3 + 0x80))))))) &&
       (*(char *)(param_1 + 0x84) == *(char *)(param_3 + 0x84))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if (lVar3 != *(long *)(param_3 + 0x78)) {
                            func_0x00010c071ae0();
                            goto LAB_10b610638;
                          }
                          goto LAB_10b61062c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b610638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b610654; end: 10b61072b; -[SCStoriesThumbnailDataModel matchThumbnailURL:thumbnailBolt:thumbnailBitmoji:] */

void FUN_10b610654(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80),
                 *(undefined1 *)(param_1 + 0x84));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b61072c; end: 10b6107c7; -[SCStoriesThumbnailDataModel .cxx_destruct] */

void FUN_10b61072c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6107c8; end: 10b6109a3; -[SCDiscoverFeedStorySnapInsights initWithCoder:] */

undefined1 * FUN_10b6107c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127068d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6109a4; end: 10b610a4f; -[SCDiscoverFeedStorySnapInsights initWithInsightsReady:viewersCount:uniqueViewersCount:screenshotsCount:storyRepliesCount:uniqueViewersSubscribers:uniqueViewersNonSubscribers:snapViews:swipeUps:swipeAways:tapForwards:tapBackwards:boostCount:shareCount:subscribeCount:paidViewsCount:paidReachCount:combinedViewsCount:combinedReachCount:] */

void FUN_10b6109a4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127068d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    *(undefined8 *)((long)puVar1 + 0x58) = param_13;
    *(undefined8 *)((long)puVar1 + 0x60) = param_14;
    *(undefined8 *)((long)puVar1 + 0x68) = param_15;
    *(undefined8 *)((long)puVar1 + 0x70) = param_16;
    *(undefined8 *)((long)puVar1 + 0x78) = param_17;
    *(undefined8 *)((long)puVar1 + 0x80) = param_18;
    *(undefined8 *)((long)puVar1 + 0x88) = param_19;
    *(undefined8 *)((long)puVar1 + 0x90) = param_20;
    *(undefined8 *)((long)puVar1 + 0x98) = param_21;
  }
  return;
}



/* Entry: 10b610a50; end: 10b610a73; -[SCDiscoverFeedStorySnapInsights copyWithZone:] */

undefined8 FUN_10b610a50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b610a74; end: 10b610c27; -[SCDiscoverFeedStorySnapInsights encodeWithCoder:] */

void FUN_10b610a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f686b8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f686d8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f686f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f68718);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f68738);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f68758);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f68778);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f68798);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f687b8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f687d8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f687f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f68818);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f68838);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f68858);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f68878);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f68898);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f688b8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f688d8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f688f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b610c28; end: 10b610cdb; -[SCDiscoverFeedStorySnapInsights hash] */

ulong * FUN_10b610c28(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_b0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_b0 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  func_0x000107c3191c(&uStack_b0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((((ulong)puVar2 & 1) == 0) ||
           ((((*(char *)((long)puVar1 + 8) != param_3[8] ||
              (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
             (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            ((*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
          (((*(long *)((long)puVar1 + 0x30) != *(long *)(param_3 + 0x30) ||
            (((*(long *)((long)puVar1 + 0x38) != *(long *)(param_3 + 0x38) ||
              (*(long *)((long)puVar1 + 0x40) != *(long *)(param_3 + 0x40))) ||
             ((*(long *)((long)puVar1 + 0x48) != *(long *)(param_3 + 0x48) ||
              (((*(long *)((long)puVar1 + 0x50) != *(long *)(param_3 + 0x50) ||
                (*(long *)((long)puVar1 + 0x58) != *(long *)(param_3 + 0x58))) ||
               (*(long *)((long)puVar1 + 0x60) != *(long *)(param_3 + 0x60))))))))) ||
           (((*(long *)((long)puVar1 + 0x68) != *(long *)(param_3 + 0x68) ||
             (*(long *)((long)puVar1 + 0x70) != *(long *)(param_3 + 0x70))) ||
            (*(long *)((long)puVar1 + 0x78) != *(long *)(param_3 + 0x78))))))) ||
         (((*(long *)((long)puVar1 + 0x80) != *(long *)(param_3 + 0x80) ||
           (*(long *)((long)puVar1 + 0x88) != *(long *)(param_3 + 0x88))) ||
          (*(long *)((long)puVar1 + 0x90) != *(long *)(param_3 + 0x90))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x98) == *(long *)(param_3 + 0x98));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b610cdc; end: 10b610e83; -[SCDiscoverFeedStorySnapInsights isEqual:] */

bool FUN_10b610cdc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((((uVar3 & 1) == 0) ||
           ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
              (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
             (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
          (((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
            (((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
              (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) ||
             ((*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48) ||
              (((*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50) ||
                (*(long *)(param_1 + 0x58) != *(long *)(param_3 + 0x58))) ||
               (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))))))))) ||
           (((*(long *)(param_1 + 0x68) != *(long *)(param_3 + 0x68) ||
             (*(long *)(param_1 + 0x70) != *(long *)(param_3 + 0x70))) ||
            (*(long *)(param_1 + 0x78) != *(long *)(param_3 + 0x78))))))) ||
         (((*(long *)(param_1 + 0x80) != *(long *)(param_3 + 0x80) ||
           (*(long *)(param_1 + 0x88) != *(long *)(param_3 + 0x88))) ||
          (*(long *)(param_1 + 0x90) != *(long *)(param_3 + 0x90))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b610e84; end: 10b610e8b; -[SCDiscoverFeedStorySnapInsights insightsReady] */

undefined1 FUN_10b610e84(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b610e8c; end: 10b610e93; -[SCDiscoverFeedStorySnapInsights viewersCount] */

undefined8 FUN_10b610e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b610e94; end: 10b610e9b; -[SCDiscoverFeedStorySnapInsights uniqueViewersCount] */

undefined8 FUN_10b610e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b610e9c; end: 10b610ea3; -[SCDiscoverFeedStorySnapInsights screenshotsCount] */

undefined8 FUN_10b610e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b610ea4; end: 10b610eab; -[SCDiscoverFeedStorySnapInsights storyRepliesCount] */

undefined8 FUN_10b610ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b610eac; end: 10b610eb3; -[SCDiscoverFeedStorySnapInsights uniqueViewersSubscribers] */

undefined8 FUN_10b610eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b610eb4; end: 10b610ebb; -[SCDiscoverFeedStorySnapInsights uniqueViewersNonSubscribers] */

undefined8 FUN_10b610eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b610ebc; end: 10b610ec3; -[SCDiscoverFeedStorySnapInsights snapViews] */

undefined8 FUN_10b610ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b610ec4; end: 10b610ecb; -[SCDiscoverFeedStorySnapInsights swipeUps] */

undefined8 FUN_10b610ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b610ecc; end: 10b610ed3; -[SCDiscoverFeedStorySnapInsights swipeAways] */

undefined8 FUN_10b610ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b610ed4; end: 10b610edb; -[SCDiscoverFeedStorySnapInsights tapForwards] */

undefined8 FUN_10b610ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b610edc; end: 10b610ee3; -[SCDiscoverFeedStorySnapInsights tapBackwards] */

undefined8 FUN_10b610edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b610ee4; end: 10b610eeb; -[SCDiscoverFeedStorySnapInsights boostCount] */

undefined8 FUN_10b610ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b610eec; end: 10b610ef3; -[SCDiscoverFeedStorySnapInsights shareCount] */

undefined8 FUN_10b610eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b610ef4; end: 10b610efb; -[SCDiscoverFeedStorySnapInsights subscribeCount] */

undefined8 FUN_10b610ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b610efc; end: 10b610f03; -[SCDiscoverFeedStorySnapInsights paidViewsCount] */

undefined8 FUN_10b610efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b610f04; end: 10b610f0b; -[SCDiscoverFeedStorySnapInsights paidReachCount] */

undefined8 FUN_10b610f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b610f0c; end: 10b610f13; -[SCDiscoverFeedStorySnapInsights combinedViewsCount] */

undefined8 FUN_10b610f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b610f14; end: 10b610f1b; -[SCDiscoverFeedStorySnapInsights combinedReachCount] */

undefined8 FUN_10b610f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b610f1c; end: 10b61102f; -[SCDiscoverFeedStorySnapManagement initWithCoder:] */

undefined1 * FUN_10b610f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127068e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b611030; end: 10b611147; -[SCDiscoverFeedStorySnapManagement initWithSnapInsights:isSaveable:deleteAction:saveSnapPlaybackInfo:selectedSnapToWatch:appearWithExpandedViewersList:useLocalMediaPlayback:contentModerationStatus:] */

undefined1 *
FUN_10b611030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1127068e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b611148; end: 10b61116b; -[SCDiscoverFeedStorySnapManagement copyWithZone:] */

undefined8 FUN_10b611148(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61116c; end: 10b61122f; -[SCDiscoverFeedStorySnapManagement encodeWithCoder:] */

void FUN_10b61116c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f68918);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f68938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f68958);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f68978);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f68998);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f689b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f689d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b611230; end: 10b6112cf; -[SCDiscoverFeedStorySnapManagement hash] */

undefined8 * FUN_10b611230(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  lStack_58 = -lVar4;
  if (-1 < lVar4) {
    lStack_58 = lVar4;
  }
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  puVar2 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10b6113b8:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6113c4;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((*(char *)(puVar2 + 1) == *(char *)(param_3 + 1) && (puVar2[3] == param_3[3])) &&
         (*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9))) &&
        ((*(char *)((long)puVar2 + 10) == *(char *)((long)param_3 + 10) &&
         (*(char *)((long)puVar2 + 0xb) == *(char *)((long)param_3 + 0xb))))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[4];
        if ((lVar4 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[5];
          if (puVar5 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10b6113c4;
          }
          goto LAB_10b6113b8;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10b6113c4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b6112d0; end: 10b6113df; -[SCDiscoverFeedStorySnapManagement isEqual:] */

long FUN_10b6112d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6113b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6113c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b6113c4;
          }
          goto LAB_10b6113b8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6113c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6113e0; end: 10b6113e7; -[SCDiscoverFeedStorySnapManagement snapInsights] */

undefined8 FUN_10b6113e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6113e8; end: 10b6113ef; -[SCDiscoverFeedStorySnapManagement isSaveable] */

undefined1 FUN_10b6113e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6113f0; end: 10b6113f7; -[SCDiscoverFeedStorySnapManagement deleteAction] */

undefined8 FUN_10b6113f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6113f8; end: 10b6113ff; -[SCDiscoverFeedStorySnapManagement saveSnapPlaybackInfo] */

undefined8 FUN_10b6113f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b611400; end: 10b611407; -[SCDiscoverFeedStorySnapManagement selectedSnapToWatch] */

undefined1 FUN_10b611400(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b611408; end: 10b61140f; -[SCDiscoverFeedStorySnapManagement appearWithExpandedViewersList] */

undefined1 FUN_10b611408(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b611410; end: 10b611417; -[SCDiscoverFeedStorySnapManagement useLocalMediaPlayback] */

undefined1 FUN_10b611410(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b611418; end: 10b61141f; -[SCDiscoverFeedStorySnapManagement contentModerationStatus] */

undefined8 FUN_10b611418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b611420; end: 10b61145b; -[SCDiscoverFeedStorySnapManagement .cxx_destruct] */

void FUN_10b611420(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b61145c; end: 10b6114e7; -[SCStoriesSnapMultiSnapInfo initWithBundleId:segmentIndex:segmentCount:] */

undefined1 *
FUN_10b61145c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127068e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6114e8; end: 10b611597; -[SCStoriesSnapMultiSnapInfo initWithCoder:] */

undefined1 * FUN_10b6114e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127068e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b611598; end: 10b6115bb; -[SCStoriesSnapMultiSnapInfo copyWithZone:] */

undefined8 FUN_10b611598(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6115bc; end: 10b61162f; -[SCStoriesSnapMultiSnapInfo encodeWithCoder:] */

void FUN_10b6115bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f689f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f31618);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f68a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b611630; end: 10b6116a3; -[SCStoriesSnapMultiSnapInfo hash] */

undefined8 * FUN_10b611630(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b611738;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b611738;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b611738;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b611738:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b6116a4; end: 10b611753; -[SCStoriesSnapMultiSnapInfo isEqual:] */

long FUN_10b6116a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b611738;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b611738;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b611738;
    }
  }
  lVar3 = 1;
LAB_10b611738:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b611754; end: 10b61175b; -[SCStoriesSnapMultiSnapInfo bundleId] */

undefined8 FUN_10b611754(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61175c; end: 10b611763; -[SCStoriesSnapMultiSnapInfo segmentIndex] */

undefined8 FUN_10b61175c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b611764; end: 10b61176b; -[SCStoriesSnapMultiSnapInfo segmentCount] */

undefined8 FUN_10b611764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b61176c; end: 10b611777; -[SCStoriesSnapMultiSnapInfo .cxx_destruct] */

void FUN_10b61176c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b611778; end: 10b611853;  */

undefined * FUN_10b611778(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b5b20;
  puVar4 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain();
    _objc_alloc(puVar1);
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f9a0(param_2);
    uVar5 = param_1;
    func_0x00010bf1f740(param_2);
    uVar6 = uVar5;
    func_0x00010c123160(param_2);
    _objc_release(param_2);
    func_0x00010c04d920(param_1,uVar5,uVar6,puVar1,param_3,lVar2,0,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
  return puVar4;
}



/* Entry: 10b611854; end: 10b611a3b;  */

ulong FUN_10b611854(double param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == 0) {
    if (param_3 != 0) {
LAB_10b611910:
      func_0x00010bf1f9a0(param_3);
      uVar1 = (ulong)(0.0 < param_1);
      goto LAB_10b611920;
    }
LAB_10b6118f4:
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar1 = param_2;
      func_0x00010c0cc0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f9a0();
      dVar2 = param_1;
      func_0x00010bf1f9a0(param_3);
      dVar3 = dVar2;
      _objc_release(uVar1);
      if (param_1 < dVar2) {
        func_0x00010bf1f9a0(param_3);
        uVar1 = param_2;
        dVar2 = dVar3;
        func_0x00010c0cc0c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f9a0();
        param_1 = dVar2;
        _objc_release(uVar1);
        if (dVar2 < dVar3) goto LAB_10b611910;
        goto LAB_10b6118f4;
      }
    }
    uVar1 = param_2;
    func_0x00010c06d760(param_2);
  }
LAB_10b611920:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b611a3c; end: 10b611a8b;  */

double FUN_10b611a3c(double param_1,undefined8 param_2)

{
  double dVar1;
  
  _objc_retain();
  func_0x00010c123160(param_2);
  dVar1 = param_1;
  func_0x00010bf1f9a0(param_2);
  _objc_release(param_2);
  if (param_1 <= dVar1) {
    param_1 = dVar1;
  }
  return param_1;
}



/* Entry: 10b611a8c; end: 10b611a93; -[SCBoostServices lazyBoostCoordinator] */

undefined8 FUN_10b611a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b611a94; end: 10b611a9f; -[SCBoostServices .cxx_destruct] */

void FUN_10b611a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b611aa0; end: 10b611bf3; -[SCBoostAction initWithSubRequestId:actionTimestampMs:subItemId:compositeId:progressMs:actionType:syncState:isUserGeneratedContent:boostType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b611aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1127068f8;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f478);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f478) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f47c) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f480);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f480) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f484);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f484) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f488) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f48c) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f490) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f494) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f498) = param_11;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b611bf4; end: 10b611c17; -[SCBoostAction copyWithZone:] */

undefined8 FUN_10b611bf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b611c18; end: 10b611d33; -[SCBoostAction hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b611c18(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar4 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f478);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f47c) + *(ulong *)(param_1 + _DAT_11278f47c) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f480);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f484);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f488) + *(ulong *)(param_1 + _DAT_11278f488) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  lVar7 = *(long *)(param_1 + _DAT_11278f48c);
  lStack_58 = -lVar7;
  if (-1 < lVar7) {
    lStack_58 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f490);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_11278f494);
  lVar7 = *(long *)(param_1 + _DAT_11278f498);
  lStack_40 = -lVar7;
  if (-1 < lVar7) {
    lStack_40 = lVar7;
  }
  uStack_68 = uVar2;
  func_0x000107c3191c(&uStack_80,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b611ebc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b611ec8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + (long)_DAT_11278f48c) == *(long *)(param_3 + _DAT_11278f48c) &&
          (*(long *)((long)puVar4 + (long)_DAT_11278f490) == *(long *)(param_3 + _DAT_11278f490)))
         && (*(char *)((long)puVar4 + (long)_DAT_11278f494) == param_3[_DAT_11278f494])) &&
        (*(long *)((long)puVar4 + (long)_DAT_11278f498) == *(long *)(param_3 + _DAT_11278f498))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278f47c) -
                   *(double *)(param_3 + _DAT_11278f47c));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278f47c) +
                  *(double *)(param_3 + _DAT_11278f47c)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278f488) -
                     *(double *)(param_3 + _DAT_11278f488));
        dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278f488) +
                    *(double *)(param_3 + _DAT_11278f488)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (((bVar1) &&
            ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f478),
             lVar7 == *(long *)(param_3 + _DAT_11278f478) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f480),
            lVar7 == *(long *)(param_3 + _DAT_11278f480) || (func_0x00010c071ae0(), (int)lVar7 != 0)
            ))) {
          puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_11278f484);
          if (puVar8 != *(undefined1 **)(param_3 + _DAT_11278f484)) {
            func_0x00010c071ae0();
            goto LAB_10b611ec8;
          }
          goto LAB_10b611ebc;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b611ec8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b611d34; end: 10b611ee3; -[SCBoostAction isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b611d34(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b611ebc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b611ec8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + (long)_DAT_11278f48c) == *(long *)(param_3 + (long)_DAT_11278f48c) &&
          (*(long *)(param_1 + (long)_DAT_11278f490) == *(long *)(param_3 + (long)_DAT_11278f490)))
         && (*(char *)(param_1 + (long)_DAT_11278f494) == *(char *)(param_3 + (long)_DAT_11278f494))
         ) && (*(long *)(param_1 + (long)_DAT_11278f498) ==
               *(long *)(param_3 + (long)_DAT_11278f498))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f47c);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f47c);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11278f488);
        dVar6 = *(double *)(param_3 + (long)_DAT_11278f488);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f478),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278f478) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f480),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278f480) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11278f484);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f484)) {
            func_0x00010c071ae0();
            goto LAB_10b611ec8;
          }
          goto LAB_10b611ebc;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b611ec8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b611ee4; end: 10b611ef3; -[SCBoostAction subRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611ee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f478);
}



/* Entry: 10b611ef4; end: 10b611f03; -[SCBoostAction actionTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611ef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f47c);
}



/* Entry: 10b611f04; end: 10b611f13; -[SCBoostAction subItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f480);
}



/* Entry: 10b611f14; end: 10b611f23; -[SCBoostAction compositeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f484);
}



/* Entry: 10b611f24; end: 10b611f33; -[SCBoostAction progressMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f488);
}



/* Entry: 10b611f34; end: 10b611f43; -[SCBoostAction actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f48c);
}



/* Entry: 10b611f44; end: 10b611f53; -[SCBoostAction syncState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f490);
}



/* Entry: 10b611f54; end: 10b611f63; -[SCBoostAction isUserGeneratedContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b611f54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f494);
}



/* Entry: 10b611f64; end: 10b611f73; -[SCBoostAction boostType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b611f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f498);
}



/* Entry: 10b611f74; end: 10b611fc3; -[SCBoostAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b611f74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f484,0);
  _objc_storeStrong(param_1 + _DAT_11278f480,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f478,0);
  return;
}



/* Entry: 10b611fc4; end: 10b6120c7; -[SCBoostMetadata initWithStoryId:isAd:snapId:boostTimestampMs:boostProgressMs:recommendTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b611fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112706900;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f49c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f49c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f4a0) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4a4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4a8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4ac) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4b0) = param_3;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6120c8; end: 10b6120eb; -[SCBoostMetadata copyWithZone:] */

undefined8 FUN_10b6120c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6120ec; end: 10b6121e3; -[SCBoostMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b6120ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f49c);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_11278f4a0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f4a4);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278f4a8) + *(ulong *)(param_1 + _DAT_11278f4a8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278f4ac) + *(ulong *)(param_1 + _DAT_11278f4ac) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278f4b0) + *(ulong *)(param_1 + _DAT_11278f4b0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_48 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b612340:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61234c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (*(char *)((long)puVar4 + (long)_DAT_11278f4a0) ==
        *(char *)((long)param_3 + (long)_DAT_11278f4a0))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f4a8);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f4a8);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f4ac);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f4ac);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if (bVar1) {
          dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f4b0);
          dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f4b0);
          dVar11 = ABS(dVar9 - dVar10);
          dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
            bVar1 = dVar11 < dVar9;
          }
          if ((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278f49c),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_11278f49c) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278f4a4);
            if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278f4a4)) {
              func_0x00010c071ae0();
              goto LAB_10b61234c;
            }
            goto LAB_10b612340;
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b61234c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b6121e4; end: 10b612367; -[SCBoostMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b6121e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b612340:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61234c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(char *)(param_1 + (long)_DAT_11278f4a0) == *(char *)(param_3 + (long)_DAT_11278f4a0))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f4a8);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f4a8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11278f4ac);
        dVar6 = *(double *)(param_3 + (long)_DAT_11278f4ac);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (bVar1) {
          dVar5 = *(double *)(param_1 + (long)_DAT_11278f4b0);
          dVar6 = *(double *)(param_3 + (long)_DAT_11278f4b0);
          dVar7 = ABS(dVar5 - dVar6);
          dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
            bVar1 = dVar7 < dVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f49c),
              lVar4 == *(long *)(param_3 + (long)_DAT_11278f49c) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + (long)_DAT_11278f4a4);
            if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f4a4)) {
              func_0x00010c071ae0();
              goto LAB_10b61234c;
            }
            goto LAB_10b612340;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b61234c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b612368; end: 10b612377; -[SCBoostMetadata storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b612368(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f49c);
}



/* Entry: 10b612378; end: 10b612387; -[SCBoostMetadata isAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b612378(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f4a0);
}



/* Entry: 10b612388; end: 10b612397; -[SCBoostMetadata snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b612388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4a4);
}



/* Entry: 10b612398; end: 10b6123a7; -[SCBoostMetadata boostTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b612398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4a8);
}



/* Entry: 10b6123a8; end: 10b6123b7; -[SCBoostMetadata boostProgressMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6123a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4ac);
}



/* Entry: 10b6123b8; end: 10b6123c7; -[SCBoostMetadata recommendTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6123b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4b0);
}



/* Entry: 10b6123c8; end: 10b612407; -[SCBoostMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6123c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f4a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f49c,0);
  return;
}



/* Entry: 10b612408; end: 10b61251b; -[SCBoostState initWithStateId:compositeId:metadata:isBoosted:isRecommended:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b612408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

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
  puStack_58 = PTR_PTR_112706908;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4b4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f4bc) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f4c0) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f4c4) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61251c; end: 10b61253f; -[SCBoostState copyWithZone:] */

undefined8 FUN_10b61251c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b612540; end: 10b6125e3; -[SCBoostState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b612540(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278f4b4);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f4b8);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278f4bc);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_11278f4c0);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_11278f4c4);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6126c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6126d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + (long)_DAT_11278f4c0) == param_3[_DAT_11278f4c0] &&
        (*(char *)((long)puVar3 + (long)_DAT_11278f4c4) == param_3[_DAT_11278f4c4])))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278f4b4);
      if ((lVar5 == *(long *)(param_3 + _DAT_11278f4b4)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278f4b8);
        if ((lVar5 == *(long *)(param_3 + _DAT_11278f4b8)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11278f4bc);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_11278f4bc)) {
            func_0x00010c071ae0();
            goto LAB_10b6126d0;
          }
          goto LAB_10b6126c4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6126d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


