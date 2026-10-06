/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e7111c; end: 107e711cb; -[SCMemoriesFtrStoriesCollectionViewFlowLayout shouldInvalidateLayoutForBoundsChange:] */

void FUN_107e7111c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar2 = param_5;
  dVar3 = param_3;
  dVar4 = param_4;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_3 == dVar3) && (bVar1 = false, !NAN(param_4) && !NAN(dVar4))) {
    bVar1 = param_4 == dVar4;
  }
  if (bVar1) {
    puStack_58 = PTR_PTR_1126fb6d0;
    uStack_60 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                        PTR_s_shouldInvalidateLayoutForBoundsC_112531590);
  }
  return;
}



/* Entry: 107e711cc; end: 107e7128f; -[SCMemoriesFtrStoriesCollectionViewFlowLayout invalidationContextForBoundsChange:] */

void FUN_107e711cc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fb6d0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar2 = param_1;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_5);
  if (param_1 != dVar2) {
    func_0x00010c1ae7e0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e71290; end: 107e714f7; -[SCMemoriesFeaturedStoriesSectionViewModel diffIdentifier] */

void FUN_107e71290(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010befa160(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar12 = *(long *)(lVar11 * 8);
      func_0x00010bfa3200();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar12);
      if (lVar8 != 0) {
        func_0x00010befa120(puVar5);
        func_0x00010c234360();
        func_0x00010befa120(puVar6);
      }
      _objc_release(lVar8);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  func_0x00010befa160(puVar2);
  func_0x00010befa160(puVar2);
  puVar9 = puVar2;
  func_0x00010bf446e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010bfa3200(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    func_0x00010c245780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107e714f8; end: 107e7153f;  */

void FUN_107e714f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfa3200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c245780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e71540; end: 107e715f7; -[SCMemoriesFeaturedStoriesSectionViewModel isEqualToDiffableObject:] */

ulong FUN_107e71540(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d2138;
    _objc_opt_class(PTR_PTR_1126d2138);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010bf7ecc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf7ecc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107e715f8; end: 107e716e3; -[SCMemoriesFeaturedStoryViewModel diffIdentifier] */

void FUN_107e715f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bfa3200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4c440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf53c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  func_0x00010c234360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInteger__112615828,
             (uVar5 + (uVar4 + ((uVar3 - uVar2) + uVar2 * 0x20) * 0x1f) * 0x1f) * 0x1f +
             (param_1 & 0xffffffff));
  return;
}



/* Entry: 107e716e4; end: 107e7175b; -[SCMemoriesFeaturedStoryViewModel isEqualToDiffableObject:] */

ulong FUN_107e716e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d21f0;
    _objc_opt_class(PTR_PTR_1126d21f0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107e7175c; end: 107e718b3; -[SCGalleryFeaturedStoryThumbnailDownloader initWithCircumstanceEngine:contentDelivery:encryptedDatabase:networker:requestManager:] */

undefined1 *
FUN_107e7175c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fb6d8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e718b4; end: 107e71a3f; -[SCGalleryFeaturedStoryThumbnailDownloader requestThumbnailForThumbnailDownloadInfo:thumbnailType:completionQueue:completion:] */

void FUN_107e718b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e71a40;
  puStack_78 = &UNK_110a10228;
  _objc_retain(param_6);
  uStack_68 = param_6;
  _objc_retain(param_5);
  ppuVar1 = &puStack_90;
  uStack_70 = param_5;
  _objc_retainBlock();
  _objc_initWeak(auStack_98,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_a8,auStack_98);
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  uStack_a0 = param_4;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e71a40; end: 107e71b03;  */

void FUN_107e71a40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_107e71b04;
      puStack_48 = &UNK_11084aaa8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_40 = param_2;
      func_0x00010007380c(lVar1,&puStack_60);
      _objc_release(uStack_40);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107e71b04; end: 107e71b13;  */

void FUN_107e71b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e71b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e71b14; end: 107e71f4b;  */

void FUN_107e71b14(long param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 uVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    goto LAB_107e71ef8;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x38) == 1) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c271540();
    _objc_retainAutoreleasedReturnValue();
    iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c271560();
    uVar2 = 0;
    if (lVar5 == 0) goto LAB_107e71ccc;
LAB_107e71b98:
    puVar6 = PTR_PTR_1126b7f60;
    _objc_retain(uVar4);
    func_0x00010bfccf20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar8 = puVar6;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfacbe0();
    _objc_release(puVar6);
    if ((int)puVar7 == 0) {
      if (iVar10 == 1) {
        _objc_initWeak(auStack_70,lVar3);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar1 = &PTR____CFConstantStringClassReference_110ec1818;
        if (*(long *)(param_1 + 0x38) != 0) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ec1838;
        }
        _objc_retain(ppuVar1);
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_107e71f4c;
        puStack_a8 = &UNK_110a10258;
        ppuVar9 = &puStack_c0;
        _objc_copyWeak(auStack_88,auStack_70);
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar11);
        uStack_90 = uVar11;
        _objc_retain(puVar8);
        puStack_a0 = puVar8;
        _objc_retain(uVar4);
        uStack_80 = *(undefined8 *)(param_1 + 0x38);
        uStack_98 = uVar4;
        uStack_78 = uVar2;
        func_0x00010be91720(lVar3);
        _objc_release(puVar6);
        _objc_release(ppuVar1);
        _objc_release(uStack_98);
        _objc_release(puStack_a0);
        uVar11 = uStack_90;
      }
      else {
        _objc_initWeak(auStack_70,lVar3);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar1 = &PTR____CFConstantStringClassReference_110ec1818;
        if (*(long *)(param_1 + 0x38) != 0) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ec1838;
        }
        _objc_retain(ppuVar1);
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        uStack_100 = 0x107e71fd4;
        puStack_f8 = &UNK_110a10258;
        ppuVar9 = &puStack_110;
        _objc_copyWeak(auStack_d8,auStack_70);
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar11);
        uStack_e0 = uVar11;
        _objc_retain(puVar8);
        puStack_f0 = puVar8;
        _objc_retain(uVar4);
        uStack_d0 = *(undefined8 *)(param_1 + 0x38);
        uStack_e8 = uVar4;
        uStack_c8 = uVar2;
        func_0x00010be91a80(lVar3);
        _objc_release(puVar6);
        _objc_release(ppuVar1);
        _objc_release(uStack_e8);
        _objc_release(puStack_f0);
        uVar11 = uStack_e0;
      }
      _objc_release(uVar11);
      _objc_destroyWeak(ppuVar9 + 7);
      _objc_destroyWeak(auStack_70);
    }
    else {
      func_0x00010be05de0(lVar3);
    }
    _objc_release(puVar8);
    _objc_release(lVar5);
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c26e500();
      _objc_retainAutoreleasedReturnValue();
      iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c26e540();
      uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c26daa0();
      if (lVar5 != 0) goto LAB_107e71b98;
    }
LAB_107e71ccc:
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  _objc_release(uVar4);
LAB_107e71ef8:
  _objc_release(lVar3);
  return;
}



/* Entry: 107e71f4c; end: 107e7205b;  */

void FUN_107e71f4c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    if (param_2 != 0) {
      func_0x00010c14e020(param_2);
    }
    func_0x00010be05de0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e7205c; end: 107e721df; -[SCGalleryFeaturedStoryThumbnailDownloader _v2requestThumbnailForThumbnailDownloadInfo:thumbnailUrlString:thumbnailType:collectionId:isRedirect:isEncrypted:completion:] */

void FUN_107e7205c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  if (param_4 == 0) {
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_9);
    uStack_78 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_4);
    uStack_70 = param_7;
    uStack_6f = param_8;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e721e0; end: 107e72533;  */

void FUN_107e721e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined **unaff_x28;
  undefined8 uVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined1 *)0x0;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar9 = (undefined1 *)0x0;
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b08b8;
      _objc_alloc();
      func_0x00010c0295e0();
      puVar5 = PTR_PTR_1126b1060;
      _objc_alloc();
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010c0c7a40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032f60();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b1378;
      func_0x00010c0c46a0(puVar4);
      func_0x00010c108220(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      FUN_107e757b4(uVar8,*(undefined1 *)(param_1 + 0x48),puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_78,lVar1);
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x4143c68000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_107e72534;
      puStack_b0 = &UNK_110a10288;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar10);
      unaff_x28 = &puStack_c8;
      puVar9 = auStack_78;
      uStack_90 = uVar10;
      _objc_copyWeak(auStack_88);
      _objc_retain(puVar4);
      puStack_a8 = puVar4;
      _objc_retain(puVar5);
      uStack_80 = *(undefined1 *)(param_1 + 0x49);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      puStack_a0 = puVar5;
      _objc_retain(uVar10);
      uStack_98 = uVar10;
      func_0x00010bf88aa0(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uStack_98);
      _objc_release(puStack_a0);
      _objc_release(puStack_a8);
      _objc_destroyWeak(auStack_88);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 8);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  if (puVar9 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107e7255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))(*(long *)(lVar1 + 0x38),0);
    return;
  }
  lVar2 = lVar1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))(*(long *)(lVar1 + 0x38),0);
  }
  else {
    func_0x00010be964c0(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107e72534; end: 107e725a7;  */

void FUN_107e72534(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e7255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
    return;
  }
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    func_0x00010be964c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e725a8; end: 107e7274f; -[SCGalleryFeaturedStoryThumbnailDownloader _retrieveContentDataAndExcuteCompletionHandlerWith:pageInfo:isEncrypted:collectionId:completion:] */

void FUN_107e725a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(param_3);
  func_0x00010c291580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010c13e4a0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e72750; end: 107e72813;  */

void FUN_107e72750(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010bdf8b60(lVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e72814; end: 107e72a77; -[SCGalleryFeaturedStoryThumbnailDownloader _decryptThumbnailData:forCollectionId:completion:] */

void FUN_107e72814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107e7294c;
  puStack_58 = &UNK_110a102e8;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c135a20(uVar3,param_2,param_4,puVar1,uVar2,&puStack_70);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e72a78; end: 107e72c23; -[SCGalleryFeaturedStoryThumbnailDownloader _downloadCompleteHandler:isEncrypted:thumbnailType:completion:] */

void FUN_107e72a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b7f60;
  func_0x00010bfccf20(PTR_PTR_1126b7f60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ce00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    if (param_4 == 0) {
      puVar1 = PTR_PTR_1126b2720;
      func_0x00010bfe9380(PTR_PTR_1126b2720);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf8b60(param_1);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e72c24; end: 107e72e4b; -[SCGalleryFeaturedStoryThumbnailDownloader _requestRedirectThumbnailUrl:requestKey:completion:] */

void FUN_107e72c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d8060;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c054fe0();
  puVar2 = PTR_PTR_1126d2c60;
  func_0x00010c2b1d40(PTR_PTR_1126d2c60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1e9340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e87e58;
  func_0x00010801b7a8(&PTR____CFConstantStringClassReference_110e87e58);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0d7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(ppuVar6);
  if (lVar7 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar7);
    _objc_retain(param_5);
    func_0x00010c25f7a0(lVar5);
    _objc_release(uVar8);
    _objc_release(param_5);
    _objc_release(lVar7);
  }
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 107e72e4c; end: 107e72f37;  */

void FUN_107e72e4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c09ea00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
      _objc_release(puVar3);
      goto LAB_107e72f10;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
LAB_107e72f10:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e72f38; end: 107e73103; -[SCGalleryFeaturedStoryThumbnailDownloader _requestThumbnailUrl:requestKey:completion:] */

void FUN_107e72f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126b4960;
  puVar1 = PTR_PTR_1126b19f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uVar6 = uVar5;
  func_0x00010c25f5e0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e73110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar3 + 0x20) + 0x10))(*(long *)(puVar3 + 0x20),uVar6);
  return;
}



/* Entry: 107e73104; end: 107e73113;  */

void FUN_107e73104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000107e73110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
  return;
}



/* Entry: 107e73114; end: 107e73173; -[SCGalleryFeaturedStoryThumbnailDownloader .cxx_destruct] */

void FUN_107e73114(long param_1)

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



/* Entry: 107e73174; end: 107e7356f; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 initWithCollectionView:carouselDataSource:featuredStoryActionHanlder:featuredDataLogging:galleryLogger:thumbnailDownloader:snapchattersDataFetcher:bitmojiAvatarProvider:bitmojiImageFetcher:memoriesEntryThumbnailGeneratorBuilder:memoriesCRFeaturedStoryThumbnailGeneratorBuilder:circumstanceEngine:memoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder:memoriesUserDefaultsManager:memoriesGraphene:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107e73174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126fb6e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127707a4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707a8,param_3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707ac,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707b0,param_5);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707b4,param_6);
    lVar5 = (long)_DAT_1127707b8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707bc,param_8);
    lVar5 = (long)_DAT_1127707c0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707c4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707c8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707cc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707d0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707d4;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707d8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127707dc;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    uVar2 = param_18;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127707e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127707e0) = uVar2;
    _objc_release(uVar4);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x3ff0000000000000,puVar1);
    func_0x00010c189840(puVar1);
    func_0x00010c18faa0(puVar1);
    func_0x00010c1f7a80(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127707e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127707e4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 107e73570; end: 107e73603;  */

void FUN_107e73570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ac0();
  if (puVar2 != (undefined *)0x1) {
    func_0x00010c290dc0(param_2);
  }
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e73604; end: 107e7363f; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 inset] */

undefined8 FUN_107e73604(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0deea0();
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    uVar1 = 0x401c000000000000;
  }
  return uVar1;
}



/* Entry: 107e73640; end: 107e736b7; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 _featuredStories] */

void FUN_107e73640(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2138;
  _objc_opt_class(PTR_PTR_1126d2138);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bfa3240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e736b8; end: 107e73953; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 sectionController:cellForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e736b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d21f0;
  _objc_opt_class(PTR_PTR_1126d21f0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_2;
  func_0x00010bf3fd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d8048);
  lVar5 = lVar4;
  func_0x00010bf6e020(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126d2848;
  _objc_alloc();
  func_0x00010bff7fc0();
  func_0x00010c170e80(lVar5);
  lVar4 = param_2 + _DAT_1127707bc;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c213fe0(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + _DAT_1127707b4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c19ad80(lVar5);
  _objc_release(lVar4);
  func_0x00010c1c5f00(lVar5);
  func_0x00010c1c5cc0(lVar5);
  func_0x00010c1c5d20(lVar5);
  lVar4 = param_2;
  func_0x00010be0eac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bde7880(param_2);
  uVar6 = *(undefined8 *)(param_2 + _DAT_1127707e0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c222820(param_1,0,0x3ff0000000000000,lVar5);
  _objc_release(uVar6);
  _objc_release(lVar4);
  lVar4 = param_2 + _DAT_1127707b0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c19adc0(lVar5);
  _objc_release(lVar4);
  func_0x00010c1a2f20(lVar5);
  func_0x00010c284aa0(lVar5);
  func_0x00010be732e0(param_2);
  _objc_release(uVar1);
  param_2 = param_2 + _DAT_1127707ac;
  _objc_loadWeakRetained();
  lVar4 = param_2;
  func_0x00010c0808a0();
  _objc_release(param_2);
  if ((int)lVar4 != 0) {
    func_0x00010c24eda0(lVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107e73954; end: 107e739eb; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 _containerWidth] */

double FUN_107e73954(double param_1,double param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4afe0();
  uVar2 = param_5;
  func_0x00010bf3fd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ae60();
  func_0x00010bf3fd40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ae60();
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (param_1 - param_2) - param_4;
}



/* Entry: 107e739ec; end: 107e73ab7; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 sectionController:sizeForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107e739ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_PTR_1126d8048;
  func_0x00010bde7880();
  lVar2 = param_2;
  func_0x00010be0eac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  uVar6 = *(undefined8 *)(param_2 + _DAT_1127707a4);
  uVar4 = *(undefined8 *)(param_2 + _DAT_1127707e0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  uVar7 = 0;
  func_0x00010bf340a0(param_1,0,0x3ff0000000000000,puVar1,param_3,lVar3,uVar6,uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 107e73ab8; end: 107e73abb; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 sectionController:viewModelsForObject:] */

void FUN_107e73ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__featuredStories_112561450);
  return;
}



/* Entry: 107e73abc; end: 107e73bbf; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 featuredStoryCell:scrollToItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107e73abc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(param_1 + _DAT_1127707e8) = 1;
    lVar6 = (long)_DAT_1127707a8;
    _objc_retain(param_3);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfecfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf345e0(param_3);
    _objc_release(param_3);
    uVar3 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + lVar6;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1525a0();
      _objc_release(param_1);
    }
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(lVar2);
  }
  return uVar5;
}



/* Entry: 107e73bc0; end: 107e73c2f; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 featuredStoryCell:gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107e73bc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127707a8;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c070ea0();
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c070400();
    uVar3 = (uint)lVar4 ^ 1;
    _objc_release(param_1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107e73c30; end: 107e73c33; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:willDisplaySectionController:] */

void FUN_107e73c30(void)

{
  return;
}



/* Entry: 107e73c34; end: 107e73c37; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:didEndDisplayingSectionController:] */

void FUN_107e73c34(void)

{
  return;
}



/* Entry: 107e73c38; end: 107e73cf7; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:willDisplaySectionController:cell:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e73c38(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong in_x4;
  
  _objc_retain(in_x4);
  lVar2 = param_1 + _DAT_1127707ac;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c080860();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d8048;
  if ((int)lVar3 != 0) {
    _objc_retain(in_x4);
    _objc_opt_class(puVar4);
    uVar5 = in_x4;
    _objc_opt_isKindOfClass(in_x4,puVar4);
    uVar1 = in_x4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(in_x4);
    func_0x00010c24eda0(uVar1);
    _objc_release(uVar1);
    func_0x00010be17820(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107e73cf8; end: 107e73d57; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:didEndDisplayingSectionController:cell:atIndex:] */

void FUN_107e73cf8(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x4;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126d8048;
  _objc_opt_class(PTR_PTR_1126d8048);
  uVar3 = in_x4;
  _objc_opt_isKindOfClass(in_x4,puVar2);
  uVar1 = in_x4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c256060(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107e73d58; end: 107e73d5b; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:didScrollSectionController:] */

void FUN_107e73d58(void)

{
  return;
}



/* Entry: 107e73d5c; end: 107e73d6f; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:willBeginDraggingSectionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e73d5c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127707e8) = 1;
  return;
}



/* Entry: 107e73d70; end: 107e73d73; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:didEndDraggingSectionController:willDecelerate:] */

void FUN_107e73d70(void)

{
  return;
}



/* Entry: 107e73d74; end: 107e73d77; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 listAdapter:didEndDeceleratingSectionController:] */

void FUN_107e73d74(void)

{
  return;
}



/* Entry: 107e73d78; end: 107e74077; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 _fireGalleryCellViewWithCellIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e73d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = param_1;
  func_0x00010be0eac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (param_3 < uVar3) {
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa3200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127707b8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar8 = param_1 + (long)_DAT_1127707b4;
    _objc_loadWeakRetained();
    uVar1 = *(undefined1 *)(param_1 + (long)_DAT_1127707e8);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127707e4);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x107e73f4c;
    puStack_90 = &UNK_1108c9dc0;
    uStack_88 = uVar4;
    uStack_80 = uVar5;
    lStack_78 = lVar8;
    uStack_70 = uVar7;
    uStack_60 = param_3;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    uStack_58 = uVar1;
    _objc_retain(uVar7);
    _objc_retain(lVar8);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_a8);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar7);
    _objc_release(lVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 107e74078; end: 107e74163; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 _persistLoadingFirstSeenTimeWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c234360();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127707e4);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e74164; end: 107e743c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74164(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar13 = (long)_DAT_1127707d8;
    lVar2 = *(long *)(lVar1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d1d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4c440(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0dff20(lVar3,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar4);
    if (lVar2 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x00010c0720c0();
      _objc_release(uVar12);
      _objc_release(uVar10);
      lVar8 = lVar9;
      if ((int)uVar4 != 0) {
        lVar11 = *(long *)(param_1 + 0x20);
        func_0x00010bf4c440();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar11;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar11);
      }
      if (lVar8 != 0) {
        func_0x00010c220220(puVar5,param_2,puVar7,lVar8);
      }
      uVar12 = *(undefined8 *)(lVar1 + lVar13);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c1c9500(uVar12,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar12);
      _objc_release(lVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e743c8; end: 107e744e3; -[SCMemoriesFeaturedStoryCarouselSectionControllerV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e743c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127707e0,0);
  _objc_storeStrong(param_1 + _DAT_1127707e4,0);
  _objc_storeStrong(param_1 + _DAT_1127707d8,0);
  _objc_storeStrong(param_1 + _DAT_1127707a4,0);
  _objc_storeStrong(param_1 + _DAT_1127707d4,0);
  _objc_storeStrong(param_1 + _DAT_1127707d0,0);
  _objc_storeStrong(param_1 + _DAT_1127707cc,0);
  _objc_storeStrong(param_1 + _DAT_1127707b8,0);
  _objc_storeStrong(param_1 + _DAT_1127707c8,0);
  _objc_storeStrong(param_1 + _DAT_1127707c4,0);
  _objc_storeStrong(param_1 + _DAT_1127707c0,0);
  _objc_storeStrong(param_1 + _DAT_1127707dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127707bc);
  _objc_destroyWeak(param_1 + _DAT_1127707b4);
  _objc_destroyWeak(param_1 + _DAT_1127707b0);
  _objc_destroyWeak(param_1 + _DAT_1127707ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127707a8);
  return;
}



/* Entry: 107e744e4; end: 107e74867; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 initWithSelectMode:carouselDataSource:memoriesExperimentService:featuredStoryActionHanlder:featuredDataLogging:galleryLogger:thumbnailDownloader:snapchattersDataFetcher:bitmojiAvatarProvider:bitmojiImageFetcher:memoriesEntryThumbnailGeneratorBuilder:memoriesCRFeaturedStoryThumbnailGeneratorBuilder:circumstanceEngine:memoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder:memoriesUserDefaultsManager:memoriesGraphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107e744e4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126fb6e8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127707ec) = param_3;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707f0,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707f4,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707f8,param_7);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127707fc,param_9);
    lVar4 = (long)_DAT_112770800;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770804;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770808;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277080c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770810;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770814;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770818;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277081c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770820;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770824;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112770828;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277082c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277082c) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0,puVar1);
    func_0x00010c18faa0(puVar1);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  return puVar1;
}



/* Entry: 107e74868; end: 107e748fb;  */

void FUN_107e74868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ac0();
  if (puVar2 != (undefined *)0x1) {
    func_0x00010c290dc0(param_2);
  }
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e748fc; end: 107e74967; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 inset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e748fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112770830);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    uVar3 = 0x4010000000000000;
  }
  return uVar3;
}



/* Entry: 107e74968; end: 107e7496f; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 numberOfItems] */

undefined8 FUN_107e74968(void)

{
  return 1;
}



/* Entry: 107e74970; end: 107e74b1b; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 cellForItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74970(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d8068);
  lVar1 = lVar6;
  func_0x00010bf6e020(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_1127707f0;
  _objc_loadWeakRetained(lVar6);
  lVar2 = param_1 + _DAT_1127707f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127707f8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_1127707fc;
  _objc_loadWeakRetained();
  func_0x00010c222700(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  FUN_107e8846c(lVar1,*(undefined1 *)(param_1 + _DAT_1127707ec));
  lVar6 = (long)_DAT_112770834;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010bf687a0(param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107e74b1c; end: 107e74c57; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 sizeForItemAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107e74b1c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar2 = *(long *)(param_5 + _DAT_112770830);
  if (lVar2 != 0) {
    func_0x00010bfa3240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_5;
      func_0x00010bf3fd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4afe0();
      lVar3 = param_5;
      func_0x00010bf3fd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4ae60();
      param_1 = param_1 - param_2;
      lVar4 = param_5;
      func_0x00010bf3fd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4ae60();
      param_1 = param_1 - param_4;
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar1 = PTR_PTR_1126d8068;
      uVar7 = *(undefined8 *)(param_5 + _DAT_112770818);
      uVar5 = *(undefined8 *)(param_5 + _DAT_11277082c);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      func_0x00010bf340c0(param_1,puVar1,param_6,uVar7,uVar6);
      _objc_release(uVar5);
      goto LAB_107e74c44;
    }
  }
  param_1 = *(double *)PTR__CGSizeZero_110347620;
  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_107e74c44:
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 107e74c58; end: 107e74d47; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 didUpdateToObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74c58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d2138;
  _objc_opt_class(PTR_PTR_1126d2138);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar7 = (long)_DAT_112770830;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(ulong *)(param_1 + lVar7) = uVar1;
  _objc_release(uVar4);
  lVar6 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf33b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar5 != 0) {
    func_0x00010bf1a480(lVar5);
  }
  lVar6 = (long)_DAT_112770834;
  if ((*(long *)(param_1 + lVar6) != 0) && (*(long *)(param_1 + lVar7) != 0)) {
    func_0x00010bf687a0(param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar4);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e74d48; end: 107e74e73; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74d48(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_1127707ec;
  *(undefined1 *)(param_1 + lVar4) = param_3;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c29fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        FUN_107e8846c(*(undefined8 *)(lStack_118 + lVar7 * 8),*(undefined1 *)(param_1 + lVar4));
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = lVar1;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(long *)(lVar1 + _DAT_112770830) == 0) {
      lVar5 = (long)_DAT_112770834;
      _objc_retain(puVar2);
      puVar3 = *(undefined **)(lVar1 + lVar5);
      *(undefined8 **)(lVar1 + lVar5) = puVar2;
    }
    else {
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      lVar1 = lVar1 + _DAT_1127707f4;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bfd0140();
      _objc_release(lVar1);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e74e74; end: 107e74f2f; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 deeplinkRequestForFeaturedStoryInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e74e74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (*(long *)(param_1 + _DAT_112770830) == 0) {
      lVar2 = (long)_DAT_112770834;
      _objc_retain(param_3);
      puVar1 = *(undefined **)(param_1 + lVar2);
      *(long *)(param_1 + lVar2) = param_3;
    }
    else {
      puVar1 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      param_1 = param_1 + _DAT_1127707f4;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfd0140();
      _objc_release(param_1);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e74f30; end: 107e74f33; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 listAdapter:willDisplaySectionController:] */

void FUN_107e74f30(void)

{
  return;
}



/* Entry: 107e74f34; end: 107e74f37; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 listAdapter:didEndDisplayingSectionController:] */

void FUN_107e74f34(void)

{
  return;
}



/* Entry: 107e74f38; end: 107e74f9b; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 listAdapter:willDisplaySectionController:cell:atIndex:] */

void FUN_107e74f38(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x4;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126d8068;
  _objc_opt_class(PTR_PTR_1126d8068);
  uVar3 = in_x4;
  _objc_opt_isKindOfClass(in_x4,puVar2);
  uVar1 = in_x4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c24eda0(in_x4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107e74f9c; end: 107e74fff; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 listAdapter:didEndDisplayingSectionController:cell:atIndex:] */

void FUN_107e74f9c(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x4;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126d8068;
  _objc_opt_class(PTR_PTR_1126d8068);
  uVar3 = in_x4;
  _objc_opt_isKindOfClass(in_x4,puVar2);
  uVar1 = in_x4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c256060(in_x4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107e75000; end: 107e7500f; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e75000(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127707ec);
}



/* Entry: 107e75010; end: 107e75193; -[SCMemoriesSnapsTabFeaturedStorySectionControllerV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e75010(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277082c,0);
  _objc_storeStrong(param_1 + _DAT_112770828,0);
  _objc_storeStrong(param_1 + _DAT_112770820,0);
  _objc_storeStrong(param_1 + _DAT_112770818,0);
  _objc_storeStrong(param_1 + _DAT_11277081c,0);
  _objc_storeStrong(param_1 + _DAT_112770814,0);
  _objc_storeStrong(param_1 + _DAT_112770810,0);
  _objc_storeStrong(param_1 + _DAT_112770824,0);
  _objc_storeStrong(param_1 + _DAT_112770808,0);
  _objc_storeStrong(param_1 + _DAT_11277080c,0);
  _objc_storeStrong(param_1 + _DAT_112770804,0);
  _objc_storeStrong(param_1 + _DAT_112770800,0);
  _objc_destroyWeak(param_1 + _DAT_1127707fc);
  _objc_destroyWeak(param_1 + _DAT_1127707f8);
  _objc_destroyWeak(param_1 + _DAT_1127707f4);
  _objc_storeStrong(param_1 + _DAT_112770834,0);
  _objc_storeStrong(param_1 + _DAT_112770830,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127707f0);
  return;
}



/* Entry: 107e75194; end: 107e75377;  */

/* WARNING: Possible PIC construction at 0x000107e75288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e7528c) */
/* WARNING: Removing unreachable block (ram,0x000107e752a0) */
/* WARNING: Removing unreachable block (ram,0x000107e752b0) */
/* WARNING: Removing unreachable block (ram,0x000107e752d0) */
/* WARNING: Removing unreachable block (ram,0x000107e752e0) */

void FUN_107e75194(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0b8620(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar5 = lVar8;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00010b5f6ab0();
        if ((int)lVar4 != 0) goto code_r0x00010bf9e140;
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(lVar3);
    lVar8 = lVar5;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf9e140:
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 107e75378; end: 107e7537f;  */

void FUN_107e75378(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 107e75380; end: 107e754b7;  */

bool FUN_107e75380(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfa3220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107e75420(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf433a0(lVar2,param_2,puVar3);
    bVar1 = lVar4 == -1;
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107e754b8; end: 107e755ab;  */

double FUN_107e754b8(double param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfa3220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0.0;
  }
  else {
    lVar1 = param_2;
    func_0x000107e75420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    param_1 = param_1 / 86400.0;
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107e755ac; end: 107e756d7;  */

void FUN_107e755ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110e0a798,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_68 = puVar1;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e9f8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_60 = puVar2;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6e2d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_58 = puVar3;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110e09cd8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_107e755ac();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c246cc0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e756d8; end: 107e7574b;  */

void FUN_107e756d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c14cca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a103a8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107e755ac();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c246cc0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e7574c; end: 107e757b3;  */

uint FUN_107e7574c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07b240();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_2, func_0x00010c080ca0(), (int)uVar1 != 0)) {
    uVar1 = param_2;
    FUN_107e75380(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107e757b4; end: 107e75a87;  */

void FUN_107e757b4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126d2c60;
  puVar5 = PTR_PTR_1126b4960;
  puVar9 = PTR_PTR_1126b19f8;
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar6 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_1);
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58680();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_1);
    func_0x00010c2b1d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c1e9340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar9 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar5 = PTR_PTR_1126b4960;
    ppuVar2 = &PTR____CFConstantStringClassReference_110e87e58;
    func_0x00010801b7a8();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar9;
    func_0x000108016a44();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(puVar9);
  func_0x00010c2193a0(puVar5);
  _objc_release(param_3);
  puVar9 = PTR_PTR_1126b9f60;
  _objc_alloc();
  func_0x00010c040f00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    puVar9 = puVar5;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar5;
      func_0x00010c0dfd40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar1;
      if ((0 < (long)CONCAT44(uVar7,iVar6)) &&
         (puVar3 = puVar5, func_0x00010bf529e0(), (undefined *)CONCAT44(uVar7,iVar6) < puVar3)) {
        puVar3 = puVar5;
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107e75a88; end: 107e75c2f;  */

void FUN_107e75a88(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    if ((0 < (long)param_2) && (uVar2 = param_1, func_0x00010bf529e0(), param_2 < uVar2)) {
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e75c30; end: 107e75dc7;  */

void FUN_107e75c30(undefined **param_1,ulong param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  ppuVar1 = param_1;
  func_0x00010bfa34e0();
  ppuVar3 = param_1;
  if (ppuVar1 == (undefined **)0x1) {
    func_0x00010bf53c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_107e75ce4;
    }
    uVar2 = param_2;
    func_0x000108ec197c();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf4c440(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfa3200(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar1 = ppuVar3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
LAB_107e75ce4:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107e75dc8; end: 107e763af;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107e75e44 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107e75dc8(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_1);
      }
      puVar2 = *(undefined **)(lVar14 * 8);
      puVar3 = puVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar3);
          }
          uVar15 = *(ulong *)((long)puVar12 * 8);
          uVar5 = uVar15;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) {
LAB_107e75f9c:
            _objc_retain(puVar2);
            _objc_release(puVar3);
            goto LAB_107e75fb4;
          }
          if (param_3 != 0) {
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010c0720c0();
            _objc_release(uVar15);
            if ((uVar5 & 1) != 0) goto LAB_107e75f9c;
          }
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar1);
    lVar1 = param_1;
    func_0x00010bf52a60();
  }
  puVar2 = (undefined *)0x0;
LAB_107e75fb4:
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = lVar9;
    _objc_retain();
    _objc_retain(lVar9);
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = *(undefined **)(lVar13 * 8);
        puVar4 = puVar2;
        func_0x00010bfa34e0();
        if (puVar4 == (undefined *)((long)&lRam0000000000000000 + 1)) {
          puVar4 = puVar2;
          func_0x00010bf53c00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (((lVar9 != 0) && (puVar3 != (undefined *)0x0)) &&
             (puVar4 = puVar3, func_0x00010bf32ee0(), puVar4 == (undefined *)0x0)) {
            _objc_retain(puVar2);
            _objc_release(puVar3);
            goto LAB_107e761f4;
          }
          _objc_release(puVar3);
        }
        else if (puVar4 == (undefined *)0x0) {
          puVar4 = puVar2;
          func_0x00010bfa3200();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010c0720c0();
          if ((int)puVar12 == 0) {
            puVar12 = puVar2;
            func_0x00010bf4c440();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar12;
            func_0x00010bf9e140();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0720c0();
            _objc_release(puVar7);
            _objc_release(puVar12);
            _objc_release(puVar3);
            _objc_release(puVar4);
            if ((int)puVar8 == 0) goto LAB_107e76198;
          }
          else {
            _objc_release(puVar3);
            _objc_release(puVar4);
          }
          _objc_retain(puVar2);
          goto LAB_107e761f4;
        }
LAB_107e76198:
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = param_1;
      func_0x00010bf52a60();
    }
    puVar2 = (undefined *)0x0;
LAB_107e761f4:
    _objc_release(param_1);
    _objc_release(lVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = lVar10;
      _objc_retain(lVar10);
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      puVar2 = (undefined *)0x0;
      if (lVar9 != 0) {
        do {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_1);
            }
            puVar2 = *(undefined **)(lVar13 * 8);
            puVar4 = puVar2;
            func_0x00010bf8b0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            if (((ulong)puVar3 & 1) != 0) {
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_107e76360;
            }
            lVar13 = lVar13 + 1;
          } while (lVar9 != lVar13);
          lVar9 = param_1;
          func_0x00010bf52a60();
        } while (lVar9 != 0);
        puVar2 = (undefined *)0x0;
      }
LAB_107e76360:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        ___stack_chk_fail();
        _objc_retain(lVar11);
        _objc_retain(lVar11);
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d2138;
        _objc_alloc(PTR_PTR_1126d2138);
        func_0x00010c0122c0();
        _objc_release(lVar10);
        _objc_release(lVar11);
        _objc_release(lVar11);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e763b0; end: 107e76477;  */

void FUN_107e763b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d2138;
  _objc_alloc(PTR_PTR_1126d2138);
  func_0x00010c0122c0();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e76478; end: 107e76df7;  */

void FUN_107e76478(long param_1,undefined *param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  undefined *puStack_1c8;
  undefined *puStack_1b8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bfa34e0();
  puVar5 = param_2;
  if (puVar3 == (undefined *)0x2) {
    func_0x00010bf36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c29eb60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    puVar7 = puVar5;
    func_0x00010c0c58c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar9 == (undefined *)0x0) {
      dVar23 = 0.0;
    }
    else {
      lVar22 = 0;
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          lVar10 = *(long *)((long)puVar19 * 8);
          func_0x00010bf4df40(lVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf529e0();
          lVar22 = lVar11 + (int)lVar22;
          _objc_release(lVar10);
          puVar19 = puVar19 + 1;
        } while (puVar9 != puVar19);
        puVar9 = puVar7;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
      dVar23 = (double)(int)lVar22;
    }
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d21f0;
    _objc_alloc(PTR_PTR_1126d21f0);
    func_0x00010c04a140((double)puVar8 / dVar23,0);
    _objc_release(puVar6);
LAB_107e76914:
    _objc_release(puVar3);
  }
  else {
    if (puVar3 == (undefined *)0x1) {
      func_0x00010bf53c00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fadbc();
      func_0x00010c1577e0();
      puVar7 = puVar5;
      func_0x00010c29eac0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      puVar7 = puVar5;
      func_0x00010c0fa980(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126d21f0;
      _objc_alloc(PTR_PTR_1126d21f0);
      func_0x00010c04a140((double)puVar8 / (double)puVar9,0);
      _objc_release(puVar6);
      goto LAB_107e76914;
    }
    puVar7 = unaff_x25;
    if (puVar3 != (undefined *)0x0) goto LAB_107e76d9c;
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    _objc_retain(uVar20);
    puVar3 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf4c440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c26ad40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c080ca0();
    func_0x00010c245cc0();
    func_0x00010bf977c0();
    func_0x00010c234360();
    puVar3 = puVar8;
    func_0x00010c245cc0();
    if ((int)puVar3 != 0) {
      func_0x000108ec197c();
    }
    func_0x00010c245cc0();
    puVar7 = PTR_PTR_1126d21f0;
    _objc_alloc();
    puVar3 = puVar6;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar8;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf977c0();
    if ((int)puVar4 == 0xf) {
      bVar1 = false;
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar8;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar21 == (undefined *)0x0) {
        puVar21 = puVar6;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1c8 = (undefined *)0x0;
        bVar1 = true;
      }
      else {
        bVar1 = false;
        puStack_1c8 = puVar21;
      }
    }
    puVar12 = puVar8;
    func_0x00010bf977c0();
    if ((int)puVar12 == 0xf) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = puVar8;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(puVar8);
    puVar13 = puVar8;
    func_0x00010bf1b100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined *)0x0) {
      unaff_x24 = puVar8;
      func_0x00010bf3fcc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010bfb9120();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x25 != (undefined *)0x0) goto LAB_107e769c0;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
LAB_107e76a58:
      puVar13 = puVar15;
      puVar17 = puVar14;
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
    }
    else {
LAB_107e769c0:
      puVar14 = puVar8;
      func_0x00010bf977c0();
      if (((uint)puVar14 < 0x10) && ((1 << (ulong)((uint)puVar14 & 0x1f) & 0x8120U) != 0)) {
        if (puVar13 == (undefined *)0x0) {
          _objc_release(unaff_x25);
          puVar13 = unaff_x24;
        }
        _objc_release(puVar13);
        puVar14 = PTR_PTR_1126d8078;
        _objc_alloc();
        puVar15 = puVar8;
        func_0x00010bf1b100(puVar8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar8;
        func_0x00010bf3fcc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010bfb9120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff7ec0();
        goto LAB_107e76a58;
      }
      puVar17 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      if (puVar13 == (undefined *)0x0) goto LAB_107e76a58;
    }
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_retain(puVar8);
    puVar13 = puVar8;
    func_0x00010bf977c0();
    if (((int)puVar13 - 0x12U < 0x15) || ((int)puVar13 == 5)) {
      puStack_1b8 = PTR_PTR_1126d8070;
      _objc_alloc();
      puVar13 = puVar8;
      func_0x00010bf9e140(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar8;
      func_0x00010c26e500(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar8;
      func_0x00010c271540(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e540(puVar8);
      func_0x00010c271560(puVar8);
      func_0x00010c26daa0(puVar8);
      func_0x00010bfff7c0();
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
    }
    else {
      puStack_1b8 = (undefined *)0x0;
    }
    _objc_release(puVar8);
    func_0x00010bf977c0();
    func_0x00010c1577e0();
    func_0x00010c07d240();
    func_0x00010bf977c0();
    puVar13 = puVar8;
    func_0x00010bf977c0();
    if (0x13 < (int)puVar13 - 0x13U) {
      func_0x00010bf3d240();
    }
    puVar13 = puVar8;
    func_0x00010bf977c0();
    if (0x13 < (int)puVar13 - 0x13U) {
      func_0x00010bf3d240();
    }
    puVar13 = puVar6;
    func_0x00010c245cc0(puVar6);
    puVar14 = puVar9;
    func_0x00010bf529e0(puVar9);
    dVar23 = (double)puVar14;
    dVar24 = (double)(int)puVar13 / dVar23;
    func_0x00010c276520();
    func_0x00010bf3cea0(param_2);
    func_0x00010c04a140(dVar24,dVar23,puVar7);
    _objc_release(puStack_1b8);
    _objc_release(puVar17);
    if ((int)puVar12 != 0xf) {
      _objc_release(puVar18);
    }
    if (bVar1) {
      _objc_release(puVar21);
    }
    if ((int)puVar4 != 0xf) {
      _objc_release(puStack_1c8);
    }
    _objc_release(puVar19);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar20);
  }
  _objc_release(puVar5);
LAB_107e76d9c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_retain();
    puVar3 = param_2;
    func_0x00010bf529e0();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar7 = param_2;
      func_0x00010c0b8620(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107e76df8; end: 107e76e5b;  */

void FUN_107e76df8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c0b8620(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a103f8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e76e5c; end: 107e76e63;  */

void FUN_107e76e5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_duplicatedFromSnapId_1125c05d8);
  return;
}



/* Entry: 107e76e64; end: 107e76f13;  */

void FUN_107e76e64(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bfb2660(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a10438);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e76f14; end: 107e76faf;  */

void FUN_107e76f14(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    FUN_107e76df8(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    FUN_107e76e64(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf09f80(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e76fb0; end: 107e771d7;  */

void FUN_107e76fb0(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar9 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar10 = *(long *)((long)puVar11 * 8);
      lVar3 = lVar10;
      func_0x00010bfa34e0();
      if (lVar3 == 1) {
        func_0x00010bf53c00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        func_0x00010c0fa980();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar5 != 0) {
          func_0x00010befa120(puVar2);
        }
LAB_107e7713c:
        _objc_release(lVar10);
      }
      else if (lVar3 == 0) {
        puVar4 = param_2;
        func_0x000108ec197c();
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010bf4c440();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfa3200();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar4 = PTR_DAT_1126a4ec0;
        _objc_retain();
        lVar5 = lVar10;
        func_0x00010010fab4(lVar10,puVar4);
        lVar3 = lVar10;
        if ((int)lVar5 == 0) {
          lVar3 = 0;
        }
        _objc_retain(lVar3);
        _objc_release(lVar10);
        func_0x00010befa120(puVar2);
        _objc_release(lVar3);
        goto LAB_107e7713c;
      }
      puVar11 = puVar11 + 1;
    } while (puVar9 != puVar11);
    puVar9 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar9 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_107e77284:
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = param_1;
    func_0x00010bfa34e0();
    puVar2 = param_1;
    if (puVar9 == (undefined *)0x1) {
      func_0x00010bf53c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x000107e77338();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar9 != (undefined *)0x0) goto LAB_107e77284;
      func_0x00010bf4c440(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c245680(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c245cc0(param_1);
      puVar9 = puVar11;
      FUN_107e772dc(puVar11,puVar6,puVar7,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar11);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107e771d8; end: 107e772db;  */

void FUN_107e771d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  if (param_1 == 0) {
LAB_107e77284:
    lVar5 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x00010bfa34e0();
    lVar4 = param_1;
    if (lVar5 == 1) {
      func_0x00010bf53c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000107e77338();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar5 != 0) goto LAB_107e77284;
      func_0x00010bf4c440(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c245680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c245cc0(param_1);
      lVar5 = lVar1;
      FUN_107e772dc(lVar1,lVar2,lVar3,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107e772dc; end: 107e773cb;  */

void FUN_107e772dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010b5fca54();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107e75a88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e773cc; end: 107e77507;  */

void FUN_107e773cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  if (param_1 == 0) {
LAB_107e774ac:
    lVar7 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x00010bfa34e0();
    lVar6 = param_1;
    if (lVar7 == 1) {
      func_0x00010bf53c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x000107e77338();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar7 != 0) goto LAB_107e774ac;
      func_0x00010c127ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010bf4c440();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c127ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0deee0(param_1);
      lVar7 = lVar2;
      FUN_107e772dc(lVar2,lVar4,lVar5,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar6);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107e77508; end: 107e77617;  */

void FUN_107e77508(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_1, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x00010bf529e0(param_1);
  }
  else {
    func_0x00010c1d0640(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e77618; end: 107e7774b;  */

bool FUN_107e77618(double param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0d1d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_2;
  func_0x00010c0b5ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf885a0(lVar4);
    dVar7 = param_1;
    func_0x00010bf885a0(puVar6);
    bVar1 = param_1 + (double)param_4 < dVar7;
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107e7774c; end: 107e77883;  */

void FUN_107e7774c(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf977c0();
  puVar5 = param_1;
  if ((int)puVar1 == 0x4a) {
    uVar2 = param_2;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b4fe0();
    _objc_release(uVar3);
    if ((long)uVar4 < 1) {
      func_0x00010bfa32e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126d8080;
      _objc_opt_new(PTR_PTR_1126d8080);
      FUN_107e7da64();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)(uVar4 / 1000),PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010bfa32e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e77884; end: 107e789a3; -[SCMemoriesFeaturedStoryCellV2OverlayButtonView initWithFrame:buttonState:actionSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107e77884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_190;
  undefined *puStack_188;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_7;
  _objc_retain(param_8);
  puStack_188 = PTR_PTR_1126fb6f0;
  puVar14 = &uStack_190;
  uStack_190 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar14,PTR_s_initWithFrame__1125e2948);
  if (puVar14 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar14 + (long)_DAT_112770838,param_8);
    if (param_7 == (undefined8 *)0x2) {
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      lVar17 = (long)_DAT_112770848;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar17);
      *(undefined **)((long)puVar14 + lVar17) = puVar7;
      _objc_release(uVar15);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      lVar18 = (long)_DAT_11277083c;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar18);
      *(undefined **)((long)puVar14 + lVar18) = puVar7;
      _objc_release(uVar15);
      puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_opt_new();
      lVar19 = (long)_DAT_11277084c;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar19);
      *(undefined **)((long)puVar14 + lVar19) = puVar7;
      _objc_release(uVar15);
      puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_opt_new();
      puVar16 = (undefined8 *)((long)puVar14 + (long)_DAT_112770840);
      uVar15 = *puVar16;
      *puVar16 = puVar7;
      _objc_release(uVar15);
      puVar7 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      lVar20 = (long)_DAT_112770850;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar20);
      *(undefined **)((long)puVar14 + lVar20) = puVar7;
      _objc_release(uVar15);
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar18));
      func_0x00010befbb60(puVar14);
      func_0x00010befbb60(puVar14);
      func_0x00010befbb60(*(undefined8 *)((long)puVar14 + lVar17));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar22 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010bf34860(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar22;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = uVar15;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010bf348e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d8 = uVar21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar21);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar15);
      _objc_release(uVar8);
      _objc_release(uVar22);
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar14 + lVar20));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_100 = uVar15;
      uVar2 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010c08de00(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uVar21;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar14;
      func_0x00010bf1ff80(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f0 = uVar22;
      uVar4 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar14;
      func_0x00010bf34860(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_e8 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(uVar4);
      _objc_release(uVar22);
      _objc_release(puVar12);
      _objc_release(uVar3);
      _objc_release(uVar21);
      _objc_release(puVar11);
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(puVar10);
      _objc_release(uVar1);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = uVar15;
      uVar2 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = uVar22;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = uVar8;
      uVar4 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_108 = uVar21;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar21);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar8);
      _objc_release(puVar12);
      _objc_release(uVar3);
      _objc_release(uVar22);
      _objc_release(puVar11);
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(puVar10);
      _objc_release(uVar1);
      puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar20 = (long)_DAT_112770854;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar20);
      *(undefined **)((long)puVar14 + lVar20) = puVar9;
      _objc_release(uVar15);
      _objc_release(puVar7);
      func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010befbb60(*(undefined8 *)((long)puVar14 + lVar17));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = uVar8;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uVar21;
      uVar5 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_130 = uVar15;
      uVar6 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar6;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_128 = uVar22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar22);
      _objc_release(uVar6);
      _objc_release(uVar15);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar20 = (long)_DAT_112770858;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar20);
      *(undefined **)((long)puVar14 + lVar20) = puVar7;
      _objc_release(uVar15);
      _objc_release(puVar9);
      func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010befbb60(*(undefined8 *)((long)puVar14 + lVar17));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_160 = uVar15;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar14 + lVar17);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uVar21;
      uVar5 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar5;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_150 = uVar22;
      uVar6 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_148 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar22);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar15);
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar20 = (long)_DAT_112770844;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar20);
      *(undefined **)((long)puVar14 + lVar20) = puVar9;
      _objc_release(uVar15);
      _objc_release(puVar7);
      func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar20));
      func_0x00010befbb60(*(undefined8 *)((long)puVar14 + lVar18));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_180 = uVar15;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c274200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_178 = uVar21;
      uVar5 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uVar8;
      uVar6 = *(undefined8 *)((long)puVar14 + lVar20);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar6;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_168 = uVar22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar22);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar15);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010bef9040(*(undefined8 *)((long)puVar14 + lVar17));
      func_0x00010bef9040(*(undefined8 *)((long)puVar14 + lVar18));
      func_0x00010befbd40(*(undefined8 *)((long)puVar14 + lVar19));
    }
    else {
      if (param_7 != (undefined8 *)0x1) goto LAB_107e78954;
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      lVar19 = (long)_DAT_11277083c;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar19);
      *(undefined **)((long)puVar14 + lVar19) = puVar7;
      _objc_release(uVar15);
      puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_opt_new();
      puVar16 = (undefined8 *)((long)puVar14 + (long)_DAT_112770840);
      uVar15 = *puVar16;
      *puVar16 = puVar7;
      _objc_release(uVar15);
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar19));
      func_0x00010befbb60(puVar14);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uVar15;
      uVar2 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uVar21;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar14;
      func_0x00010bf1ff80(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uVar22;
      uVar4 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar14;
      func_0x00010c08de00(puVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_98 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(uVar4);
      _objc_release(uVar22);
      _objc_release(puVar12);
      _objc_release(uVar3);
      _objc_release(uVar21);
      _objc_release(puVar11);
      _objc_release(uVar2);
      _objc_release(uVar15);
      _objc_release(puVar10);
      _objc_release(uVar1);
      puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar18 = (long)_DAT_112770844;
      uVar15 = *(undefined8 *)((long)puVar14 + lVar18);
      *(undefined **)((long)puVar14 + lVar18) = puVar7;
      _objc_release(uVar15);
      _objc_release(puVar9);
      func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar18));
      func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar18));
      func_0x00010befbb60(*(undefined8 *)((long)puVar14 + lVar19));
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar1 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar15;
      uVar3 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar14 + lVar19);
      func_0x00010c274200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uVar21;
      uVar5 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar5;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = uVar22;
      uVar6 = *(undefined8 *)((long)puVar14 + lVar18);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b8 = uVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar22);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar15);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010bef9040(*(undefined8 *)((long)puVar14 + lVar19));
    }
    puVar10 = puVar14;
    func_0x00010befbd40(*puVar16);
  }
LAB_107e78954:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar14;
  }
  ___stack_chk_fail();
  if (puVar10 == (undefined8 *)0x2) {
    lVar18 = (long)_DAT_112770850;
    uVar22 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)((long)param_8 + lVar18));
    func_0x00010c2558c0(*(undefined8 *)((long)param_8 + lVar18));
    uVar15 = 0;
    uVar21 = 0x3ff0000000000000;
  }
  else if (puVar10 == (undefined8 *)0x1) {
    lVar18 = (long)_DAT_112770850;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)param_8 + lVar18));
    func_0x00010c24dbc0(*(undefined8 *)((long)param_8 + lVar18));
    uVar15 = 0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (puVar10 != (undefined8 *)0x0) {
      return param_8;
    }
    lVar18 = (long)_DAT_112770850;
    uVar21 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)((long)param_8 + lVar18));
    func_0x00010c2558c0(*(undefined8 *)((long)param_8 + lVar18));
    uVar15 = 1;
    uVar22 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar22,*(undefined8 *)((long)param_8 + (long)_DAT_112770858));
  func_0x00010c1677c0(uVar21,*(undefined8 *)((long)param_8 + (long)_DAT_112770854));
  puVar14 = *(undefined8 **)((long)param_8 + (long)_DAT_11277084c);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_setEnabled__112642f38,uVar15);
  return puVar14;
}



/* Entry: 107e789a4; end: 107e78aab; -[SCMemoriesFeaturedStoryCellV2OverlayButtonView setSaveButtonLoadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e789a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 2) {
    lVar1 = (long)_DAT_112770850;
    uVar4 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
    uVar2 = 0;
    uVar3 = 0x3ff0000000000000;
  }
  else if (param_3 == 1) {
    lVar1 = (long)_DAT_112770850;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    lVar1 = (long)_DAT_112770850;
    uVar3 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
    uVar2 = 1;
    uVar4 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar4,*(undefined8 *)(param_1 + _DAT_112770858));
  func_0x00010c1677c0(uVar3,*(undefined8 *)(param_1 + _DAT_112770854));
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277084c),PTR_s_setEnabled__112642f38,uVar2);
  return;
}



/* Entry: 107e78aac; end: 107e78aef; -[SCMemoriesFeaturedStoryCellV2OverlayButtonView _tapOnSave] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e78aac(long param_1)

{
  param_1 = param_1 + _DAT_112770838;
  _objc_loadWeakRetained();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e78af0; end: 107e78b33; -[SCMemoriesFeaturedStoryCellV2OverlayButtonView _tapOnSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e78af0(long param_1)

{
  param_1 = param_1 + _DAT_112770838;
  _objc_loadWeakRetained();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e78b34; end: 107e78bdf; -[SCMemoriesFeaturedStoryCellV2OverlayButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e78b34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770850,0);
  _objc_destroyWeak(param_1 + _DAT_112770838);
  _objc_storeStrong(param_1 + _DAT_112770840,0);
  _objc_storeStrong(param_1 + _DAT_11277084c,0);
  _objc_storeStrong(param_1 + _DAT_112770854,0);
  _objc_storeStrong(param_1 + _DAT_112770844,0);
  _objc_storeStrong(param_1 + _DAT_112770858,0);
  _objc_storeStrong(param_1 + _DAT_11277083c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770848,0);
  return;
}



/* Entry: 107e78be0; end: 107e78f23; -[SCMemoriesFeaturedStoryProgressBarV2 initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e78be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1126fb6f8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  lVar7 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar9 = (long)_DAT_11277085c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112770860;
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010bf495a0(*(undefined8 *)((long)puVar1 + lVar8),0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112770864;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_50 = *(undefined8 *)((long)puVar1 + lVar7);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    lVar7 = *(long *)((long)puVar1 + lVar9);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c2a5060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(undefined8 *)((long)puVar1 + lVar8);
    lVar8 = lVar7;
    func_0x00010bf493e0(param_1,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar8);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puStack_98 = PTR_PTR_1126fb6f8;
  lStack_a0 = lVar7;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar7);
  _CGRectGetMidY();
  lVar8 = lVar7;
  func_0x00010c08c0e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(lVar8);
  puVar5 = *(undefined1 **)(lVar7 + _DAT_11277085c);
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(puVar5);
  return puVar5;
}



/* Entry: 107e78f24; end: 107e78fcb; -[SCMemoriesFeaturedStoryProgressBarV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e78f24(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fb6f8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277085c);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 107e78fcc; end: 107e79127; -[SCMemoriesFeaturedStoryProgressBarV2 setProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107e78fcc(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (!NAN(param_1)) {
    dVar6 = 1.0;
    if (param_1 <= 1.0) {
      dVar6 = param_1;
    }
    dVar7 = 0.0;
    if (0.0 <= dVar6) {
      dVar7 = dVar6;
    }
    lVar4 = (long)_DAT_112770860;
    *(double *)(param_2 + lVar4) = dVar7;
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar5 = (long)_DAT_112770864;
    uStack_60 = *(undefined8 *)(param_2 + lVar5);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65be0(puVar2,param_3,puVar1);
    _objc_release(puVar1);
    param_1 = *(double *)(param_2 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010bf495a0(param_1,0,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                        *(undefined8 *)(param_2 + _DAT_11277085c),7,0,param_2,7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_68 = *(undefined8 *)(param_2 + lVar5);
    param_2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_3,param_2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return *(double *)(param_2 + _DAT_112770860);
  }
  return param_1;
}



/* Entry: 107e79128; end: 107e79137; -[SCMemoriesFeaturedStoryProgressBarV2 progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e79128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770860);
}



/* Entry: 107e79138; end: 107e79177; -[SCMemoriesFeaturedStoryProgressBarV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e79138(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770864,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277085c,0);
  return;
}



/* Entry: 107e79178; end: 107e7984b; -[SCMemoriesFeturedStoryCellV2OverlayStackView initWithFrame:actionSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107e79178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_d0 = PTR_PTR_1126fb700;
  puVar14 = &uStack_d8;
  uStack_d8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar14,PTR_s_initWithFrame__1125e2948);
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar17 = (long)_DAT_11277086c;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar17);
    *(undefined **)((long)puVar14 + lVar17) = puVar1;
    _objc_release(uVar15);
    func_0x00010c16e060(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c190b80(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c166c00(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c207380(0x4008000000000000,*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar16 = (long)_DAT_112770870;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar14 + lVar16));
    _objc_release(puVar1);
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf493c0(0x40133d70a3d70a3d);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf1ff80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493c0(0xc019c28f5c28f5c3);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c2793a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493c0(0xc0133d70a3d70a3d);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar15);
    _objc_release(puVar13);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar15;
    uVar10 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010c08de00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar5;
    uVar11 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf1ff80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    uVar12 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c2793a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(puVar13);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar16 = (long)_DAT_112770874;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c165e20(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c1c83a0(0x3fe38e38e38e38e4,*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar14 + lVar16));
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar16 = (long)_DAT_112770878;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c165e20(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c1c83a0(0x3fe6db6db6db6db7,*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar14 + lVar16));
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c1677c0(0x3fe6666666666666,*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR_PTR_1126d8088;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar16 = (long)_DAT_11277087c;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + (long)_DAT_112770880));
    lVar16 = param_7;
    _objc_retainBlock();
    uVar15 = *(undefined8 *)((long)puVar14 + (long)_DAT_112770884);
    *(long *)((long)puVar14 + (long)_DAT_112770884) = lVar16;
    _objc_release(uVar15);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_112770878;
  puVar13 = *(undefined8 **)(param_7 + lVar16);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  _objc_release();
  if (puVar13 == (undefined8 *)0x0) {
    lVar17 = (long)_DAT_11277086c;
    puVar14 = *(undefined8 **)(param_7 + lVar17);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010bf529e0();
    _objc_release(puVar14);
    if (puVar13 != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_7 + lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010c066590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (puVar14,PTR_s_insertArrangedSubview_atIndex__1125f7370,
                 *(undefined8 *)(param_7 + lVar16),1);
      return puVar14;
    }
  }
  return puVar14;
}



/* Entry: 107e7984c; end: 107e798eb; -[SCMemoriesFeturedStoryCellV2OverlayStackView displaySubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7984c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112770878;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar4 = (long)_DAT_11277086c;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c066590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar4),PTR_s_insertArrangedSubview_atIndex__1125f7370,
                 *(undefined8 *)(param_1 + lVar3),1);
      return;
    }
  }
  return;
}



/* Entry: 107e798ec; end: 107e79947; -[SCMemoriesFeturedStoryCellV2OverlayStackView removeSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e798ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770878;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 107e79948; end: 107e79abf; -[SCMemoriesFeturedStoryCellV2OverlayStackView displayProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e79948(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277087c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (long)_DAT_11277086c;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar1),param_2,*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4013333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


