/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ad9bc4; end: 107ad9c43; -[SCGallerySnapMediaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad9bc4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9b60;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112769f6c));
  func_0x00010bfb68e0(param_5);
  if ((param_3 != 0.0) && (func_0x00010bfb68e0(param_5), param_4 != 0.0)) {
    func_0x00010be91a00(param_5);
  }
  return;
}



/* Entry: 107ad9c44; end: 107ad9e07; -[SCGallerySnapMediaView _requestThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad9c44(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = (long)_DAT_112769f70;
  func_0x00010bf2dba0(*(undefined8 *)(param_5 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  _objc_initWeak(auStack_78,param_5);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112769f60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec16c0(*(undefined8 *)(param_5 + _DAT_112769f68));
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c134d00(param_1 * param_3,param_1 * param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined8 *)(param_5 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 107ad9e08; end: 107ad9e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad9e08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112769f64));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ad9e60; end: 107ad9edf; -[SCGallerySnapMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad9e60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769f68,0);
  _objc_storeStrong(param_1 + _DAT_112769f6c,0);
  _objc_storeStrong(param_1 + _DAT_112769f70,0);
  _objc_storeStrong(param_1 + _DAT_112769f64,0);
  _objc_storeStrong(param_1 + _DAT_112769f60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769f5c,0);
  return;
}



/* Entry: 107ad9ee0; end: 107ada103; -[SCGalleryStoryMediaView initWithStoryEntry:memoriesEntryThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ad9ee0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f9b68;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112769f74;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar2 = param_5;
    func_0x00010bf23120(param_1 * 100.0,param_1 * 100.0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112769f78;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_112769f7c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ada104; end: 107ada1af; -[SCGalleryStoryMediaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada104(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9b68;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + _DAT_112769f7c));
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + _DAT_112769f80));
  func_0x00010bf20c00(param_4);
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_3 * 0.5);
  _objc_release(param_4);
  return;
}



/* Entry: 107ada1b0; end: 107ada1bb; -[SCGalleryStoryMediaView SCAMediaTypes] */

undefined ** FUN_107ada1b0(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111181868;
}



/* Entry: 107ada1bc; end: 107ada1cb; -[SCGalleryStoryMediaView play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112769f78),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 107ada1cc; end: 107ada1db; -[SCGalleryStoryMediaView pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112769f78),PTR_s_stopGeneratingUpdates_112673240);
  return;
}



/* Entry: 107ada1dc; end: 107ada2d7; -[SCGalleryStoryMediaView thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada1dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112769f78) == param_3) {
    lVar4 = (long)_DAT_112769f7c;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (lVar2 == 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_107ada2d8;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      _objc_retain(param_4);
      uStack_38 = param_4;
      func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,uVar3,0x500000,&puStack_60,0);
      _objc_release(uStack_38);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ada2d8; end: 107ada2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769f7c),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ada2ec; end: 107ada3e7; -[SCGalleryStoryMediaView thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada2ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112769f78) == param_3) {
    lVar4 = (long)_DAT_112769f7c;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (lVar2 == 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_107ada3e8;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      _objc_retain(param_4);
      uStack_38 = param_4;
      func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,uVar3,0x500000,&puStack_60,0);
      _objc_release(uStack_38);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ada3e8; end: 107ada3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112769f7c),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ada3fc; end: 107ada3ff; -[SCGalleryStoryMediaView thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

void FUN_107ada3fc(void)

{
  return;
}



/* Entry: 107ada400; end: 107ada45f; -[SCGalleryStoryMediaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ada400(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112769f80,0);
  _objc_storeStrong(param_1 + _DAT_112769f7c,0);
  _objc_storeStrong(param_1 + _DAT_112769f78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112769f74,0);
  return;
}



/* Entry: 107ada460; end: 107ada627; -[SCSendGallerySnapPreviewModel initWithGallerySnap:dataObjectContext:memoriesCachingMediaManager:userTrackedLogger:circumstanceEngine:removePreview:isMultiSelect:textOnly:] */

undefined1 *
FUN_107ada460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,uint param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f9b70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126af4c0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    if (((param_9 & 1) == 0) && (param_8 != 0)) {
      puVar5 = (undefined1 *)puVar1;
      func_0x00010bf36ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
        goto LAB_107ada5cc;
      }
    }
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    *(char *)((long)puVar1 + 0x30) = (char)param_8;
    *(undefined1 *)((long)puVar1 + 0x31) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x32) = param_9._1_1_;
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_107ada5cc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 107ada628; end: 107ada65f; -[SCSendGallerySnapPreviewModel viewStyle] */

undefined8 FUN_107ada628(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
      return 4;
    }
  }
  else if (((*(byte *)(param_1 + 0x31) & 1) == 0) && ((*(byte *)(param_1 + 0x32) & 1) != 0)) {
    return 5;
  }
  return 0;
}



/* Entry: 107ada660; end: 107ada8a3; -[SCSendGallerySnapPreviewModel mediaViewAspectRatio] */

double FUN_107ada660(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c2a5040();
  dVar11 = (double)iVar1;
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfe0640();
  dVar10 = (double)iVar2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 != 0 && iVar2 != 0) {
    dVar12 = dVar11 / dVar10;
    if (NAN(dVar12)) goto LAB_107ada7f8;
    while (_objc_release(uVar3), *(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
LAB_107ada7f8:
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      ppuVar7 = &PTR____CFConstantStringClassReference_110eac4f8;
LAB_107ada77c:
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110eac4b8,ppuVar7,puVar6,uVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      dVar12 = 1.0;
    }
    return dVar12;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  ppuVar7 = &PTR____CFConstantStringClassReference_110eac4d8;
  goto LAB_107ada77c;
}



/* Entry: 107ada8a4; end: 107ada903; -[SCSendGallerySnapPreviewModel mediaView] */

void FUN_107ada8a4(long param_1)

{
  if ((((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(char *)(param_1 + 0x32) != '\x01')) ||
     (*(char *)(param_1 + 0x31) == '\x01')) {
    _objc_alloc(PTR_PTR_1126d6480);
    func_0x00010c017140();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ada904; end: 107ada90f; -[SCSendGallerySnapPreviewModel chatMessage] */

void FUN_107ada904(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = *(undefined **)(param_1 + 8);
  puVar2 = *(undefined **)(param_1 + 0x10);
  _objc_retain();
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bf977c0();
  if (((uint)puVar3 == 7) && (puVar4 = puVar2, func_0x00010b5f6b3c(), (int)puVar4 != 0)) {
    puVar7 = puVar1;
    func_0x00010b5f7a24(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x000108dfd174();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar2;
    func_0x00010bf977c0();
    if ((((int)puVar4 == 9) || (puVar4 = puVar2, func_0x00010bf977c0(), (int)puVar4 == 0xf)) ||
       (((uint)puVar3 < 0x3f && ((1L << ((ulong)puVar3 & 0x3f) & 0x4008180000000000U) != 0)))) {
      puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      _objc_retain(puVar1);
      func_0x00010c0c7400();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010b5f7a24(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar7 = puVar3;
      func_0x00010c25d400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110eac578;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eac578,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf977c0();
      if ((int)puVar3 == 8) {
        puVar3 = puVar2;
        func_0x00010c2711a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107ade3c8;
      }
      puVar4 = puVar2;
      func_0x00010bf977c0();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar7 = puVar2;
      if ((int)puVar4 == 0x27) {
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010b5f7a24();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x000108dfd174();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      else {
        puVar3 = puVar2;
        func_0x00010bf977c0();
        if ((int)puVar3 == 0x12) {
          func_0x000108dfd7f4();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107ade3c8;
        }
        func_0x00010bf3fcc0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010c1083e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar7);
LAB_107ade3c8:
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ada910; end: 107ada917; -[SCSendGallerySnapPreviewModel shareType] */

undefined8 FUN_107ada910(void)

{
  return 1;
}



/* Entry: 107ada918; end: 107ada96b; -[SCSendGallerySnapPreviewModel .cxx_destruct] */

void FUN_107ada918(long param_1)

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



/* Entry: 107ada96c; end: 107adaa57; -[SCSendGalleryStoryPreviewModel initWithGalleryMediaGroup:memoriesEntryThumbnailGeneratorBuilder:] */

undefined1 * FUN_107ada96c(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfcf460(), lVar1 != 0)) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c259a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined1 *)0x0;
    if (lVar1 != 0) {
      puStack_38 = PTR_PTR_1126f9b78;
      puStack_40 = param_1;
      _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
      if (ppuVar2 != (undefined1 **)0x0) {
        _objc_retain(param_3);
        uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
        *(long *)((long)ppuVar2 + 8) = param_3;
        _objc_release(uVar3);
        _objc_retain(param_4);
        uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
        *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
        _objc_release(uVar3);
      }
      _objc_retain(ppuVar2);
      param_1 = (undefined1 *)ppuVar2;
      puVar4 = (undefined1 *)ppuVar2;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 107adaa58; end: 107adaa5f; -[SCSendGalleryStoryPreviewModel viewStyle] */

undefined8 FUN_107adaa58(void)

{
  return 1;
}



/* Entry: 107adaa60; end: 107adaa67; -[SCSendGalleryStoryPreviewModel mediaViewAspectRatio] */

undefined8 FUN_107adaa60(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 107adaa68; end: 107adaa7b; -[SCSendGalleryStoryPreviewModel mediaViewInsets] */

undefined8 FUN_107adaa68(void)

{
  return 0x4000000000000000;
}



/* Entry: 107adaa7c; end: 107adaae3; -[SCSendGalleryStoryPreviewModel mediaView] */

void FUN_107adaa7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6488;
  _objc_alloc(PTR_PTR_1126d6488);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c259a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d700(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107adaae4; end: 107adaaeb; -[SCSendGalleryStoryPreviewModel shareType] */

undefined8 FUN_107adaae4(void)

{
  return 1;
}



/* Entry: 107adaaec; end: 107adaaf3; -[SCSendGalleryStoryPreviewModel title] */

undefined1 * FUN_107adaaec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_70;
  
  puVar1 = *(undefined **)(param_1 + 8);
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010bfcf460();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c259a20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    _objc_release(puVar2);
    if (puVar7 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010c259a20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107add648;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = puVar1;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar6);
        }
        puVar4 = PTR_DAT_1126a5228;
        uVar12 = *(ulong *)(lStack_128 + (long)puVar14 * 8);
        _objc_retain(uVar12);
        uVar3 = uVar12;
        func_0x00010010fab4(uVar12,puVar4);
        _objc_release(uVar12);
        if ((int)uVar3 == 0 || uVar12 == 0) {
          puVar4 = PTR_PTR_1126c4650;
          _objc_opt_class(PTR_PTR_1126c4650);
          uVar3 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar4);
          puVar4 = PTR_PTR_1126c4650;
          if ((uVar3 & 1) != 0) {
            _objc_retain(uVar12);
            _objc_opt_class(puVar4);
            uVar5 = uVar12;
            _objc_opt_isKindOfClass(uVar12,puVar4);
            uVar3 = uVar12;
            if ((uVar5 & 1) == 0) {
              uVar3 = 0;
            }
            _objc_retain(uVar3);
            _objc_release(uVar12);
            uVar12 = uVar3;
            func_0x00010bf0af00(uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            uVar3 = uVar12;
            func_0x00010bf5a700(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar2);
            _objc_release(uVar3);
            goto LAB_107add59c;
          }
        }
        else {
          func_0x00010b5f7a24(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar2);
LAB_107add59c:
          _objc_release(uVar12);
        }
        puVar14 = puVar14 + 1;
      } while (puVar7 != puVar14);
      puVar7 = puVar6;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010b5f9ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  param_3 = (undefined1 *)puVar10;
LAB_107add648:
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_160;
  pcStack_138 = FUN_107add69c;
  puStack_150 = puVar2;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_158 = PTR_PTR_1126f9b98;
  puStack_160 = puVar7;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined **)0x0) {
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)((long)ppuVar8 + 0x20);
    *(undefined1 **)((long)ppuVar8 + 0x20) = param_3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar8 + 0x18);
    *(undefined8 *)((long)ppuVar8 + 0x18) = uVar9;
    _objc_release(uVar11);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar8;
}



/* Entry: 107adaaf4; end: 107adab5b; -[SCSendGalleryStoryPreviewModel subtitle] */

void FUN_107adaaf4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c259a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e87a38;
  if (lVar3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eac518;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107adab5c; end: 107adaba3; -[SCSendGalleryStoryPreviewModel chatMessage] */

void FUN_107adab5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c259a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107ade15c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107adaba4; end: 107adabd3; -[SCSendGalleryStoryPreviewModel .cxx_destruct] */

void FUN_107adaba4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107adabd4; end: 107adad97; -[SCMemoriesSendItemsCounter initWithMediaGroups:] */

undefined8 * FUN_107adabd4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puStack_e0 = PTR_PTR_1126f9b80;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    param_4 = (int)auStack_d8;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar4 = *plStack_120;
      do {
        puVar5 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(lStack_128 + (long)puVar5 * 8);
          func_0x00010bfe72c0(uVar3);
          func_0x00010bfe72c0(puVar1);
          func_0x00010c1aa160(puVar1);
          func_0x00010c0db360(uVar3);
          func_0x00010c0db360(puVar1);
          func_0x00010c1cdbc0(puVar1);
          func_0x00010c2483c0(uVar3);
          func_0x00010c2483c0(puVar1);
          func_0x00010c2075e0(puVar1);
          func_0x00010c248420(uVar3);
          func_0x00010c248420(puVar1);
          func_0x00010c207620(puVar1);
          func_0x00010c0ca9c0(uVar3);
          func_0x00010c1c6bc0(puVar1);
          puVar5 = (undefined8 *)((long)puVar5 + 1);
        } while (puVar2 != puVar5);
        param_4 = (int)auStack_d8;
        puVar2 = param_3;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = puVar5;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (param_4 == 0) {
    func_0x00010bf36f40(param_3);
    func_0x00010c17b900(param_3);
  }
  else {
    func_0x00010bf36fc0();
    func_0x00010c17b960(param_3);
    func_0x00010bfe72c0(puVar2);
    func_0x00010bf36880(param_3);
    func_0x00010c17b640(param_3);
    func_0x00010c0db360(puVar2);
    func_0x00010bf37080(param_3);
    func_0x00010c17b9a0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 107adad98; end: 107adae3b; -[SCMemoriesSendItemsCounter countAfterChatMessageWithGalleryMediaGroup:didSucceed:] */

void FUN_107adad98(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010bf36f40(param_1);
    func_0x00010c17b900(param_1,param_2,lVar2 + 1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bf36fc0();
    func_0x00010c17b960(param_1,param_2,lVar2 + 1);
    lVar2 = param_3;
    func_0x00010bfe72c0(param_3);
    lVar1 = param_1;
    func_0x00010bf36880(param_1);
    func_0x00010c17b640(param_1,param_2,lVar1 + lVar2);
    lVar2 = param_3;
    func_0x00010c0db360(param_3);
    lVar1 = param_1;
    func_0x00010bf37080(param_1);
    func_0x00010c17b9a0(param_1,param_2,lVar1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adae3c; end: 107adb037; -[SCMemoriesSendItemsCounter countAfterSnapSendWithGalleryMedia:didSucceed:] */

void FUN_107adae3c(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c243040(param_1);
    func_0x00010c2054e0(param_1);
  }
  else {
    func_0x00010c2431a0();
    func_0x00010c205560(param_1);
    uVar1 = param_3;
    FUN_107ade96c();
    puVar2 = PTR_PTR_1126c4650;
    if (uVar1 - 3 < 2) {
      func_0x00010c2422c0(param_1);
      func_0x00010c204f20(param_1);
    }
    else {
      if (uVar1 == 2) {
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
        uVar3 = uVar1;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar3;
        func_0x00010c0c6c20();
        if (uVar1 == 1) {
          func_0x00010c241540(param_1);
          func_0x00010c2047a0(param_1);
        }
        else {
          uVar1 = uVar3;
          func_0x00010c0c6c20();
          if (uVar1 == 2) {
            func_0x00010c2422c0(param_1);
            func_0x00010c204f20(param_1);
          }
        }
      }
      else {
        if (uVar1 != 1) goto LAB_107adb024;
        _objc_retain(param_3);
        uVar1 = param_3;
        func_0x00010b5fa088();
        uVar3 = param_3;
        if (uVar1 < 0xd) {
          if ((1L << (uVar1 & 0x3f) & 0xa99U) == 0) {
            if ((1L << (uVar1 & 0x3f) & 0x1564U) == 0) {
              func_0x00010c2422c0(param_1);
              func_0x00010c204f20(param_1);
            }
            else {
              uVar1 = param_3;
              func_0x00010b5fa7b4();
              if ((int)uVar1 == 0) {
                func_0x00010c241cc0(param_1);
                func_0x00010c204ca0(param_1);
              }
              else {
                func_0x00010c241ca0(param_1);
                func_0x00010c204c80(param_1);
              }
            }
          }
          else {
            func_0x00010c241540(param_1);
            func_0x00010c2047a0(param_1);
          }
        }
      }
      _objc_release(uVar3);
    }
  }
LAB_107adb024:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adb038; end: 107adb233; -[SCMemoriesSendItemsCounter countAfterStoryPostWithGalleryMedia:didSucceed:] */

void FUN_107adb038(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c25a900(param_1);
    func_0x00010c20d660(param_1);
  }
  else {
    func_0x00010c25a940();
    func_0x00010c20d6e0(param_1);
    uVar1 = param_3;
    FUN_107ade96c();
    puVar2 = PTR_PTR_1126c4650;
    if (uVar1 - 3 < 2) {
      func_0x00010c2422c0(param_1);
      func_0x00010c204f20(param_1);
    }
    else {
      if (uVar1 == 2) {
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
        uVar3 = uVar1;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar3;
        func_0x00010c0c6c20();
        if (uVar1 == 1) {
          func_0x00010c259d80(param_1);
          func_0x00010c20d200(param_1);
        }
        else {
          uVar1 = uVar3;
          func_0x00010c0c6c20();
          if (uVar1 == 2) {
            func_0x00010c25a5e0(param_1);
            func_0x00010c20d560(param_1);
          }
        }
      }
      else {
        if (uVar1 != 1) goto LAB_107adb220;
        _objc_retain(param_3);
        uVar1 = param_3;
        func_0x00010b5fa088();
        uVar3 = param_3;
        if (uVar1 < 0xd) {
          if ((1L << (uVar1 & 0x3f) & 0xa99U) == 0) {
            if ((1L << (uVar1 & 0x3f) & 0x1564U) == 0) {
              func_0x00010c25a5e0(param_1);
              func_0x00010c20d560(param_1);
            }
            else {
              uVar1 = param_3;
              func_0x00010b5fa7b4();
              if ((int)uVar1 == 0) {
                func_0x00010c25a0a0(param_1);
                func_0x00010c20d3e0(param_1);
              }
              else {
                func_0x00010c25a080(param_1);
                func_0x00010c20d3c0(param_1);
              }
            }
          }
          else {
            func_0x00010c259d80(param_1);
            func_0x00010c20d200(param_1);
          }
        }
      }
      _objc_release(uVar3);
    }
  }
LAB_107adb220:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adb234; end: 107adb317; -[SCMemoriesSendItemsCounter updateSmartShareCountWithSnap:success:] */

void FUN_107adb234(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b5fa088(param_3);
  func_0x00010bedff80(param_1,param_2,uVar1);
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010c23ed20(param_1);
    func_0x00010c203520(param_1,param_2,lVar2 + 1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c23ee20();
    func_0x00010c203680(param_1,param_2,lVar2 + 1);
    uVar1 = param_3;
    func_0x00010b5fa088();
    switch(uVar1) {
    case 0:
    case 3:
    case 4:
    case 7:
    case 9:
    case 0xb:
      lVar2 = param_1;
      func_0x00010c23ed60(param_1);
      func_0x00010c203580(param_1,param_2,lVar2 + 1);
      break;
    case 1:
      lVar2 = param_1;
      func_0x00010c23ee00(param_1);
      func_0x00010c203620(param_1,param_2,lVar2 + 1);
      break;
    case 2:
    case 5:
    case 6:
    case 8:
    case 10:
    case 0xc:
      lVar2 = param_1;
      func_0x00010c23eda0(param_1);
      func_0x00010c2035c0(param_1,param_2,lVar2 + 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adb318; end: 107adb353; -[SCMemoriesSendItemsCounter totalCount] */

long FUN_107adb318(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfe72c0();
  lVar2 = param_1;
  func_0x00010c0db360(param_1);
  func_0x00010c248420(param_1);
  return lVar2 + lVar1 + param_1;
}



/* Entry: 107adb354; end: 107adb3f7; -[SCMemoriesSendItemsCounter _updateSmartShareTotalCountWithMediaType:] */

void FUN_107adb354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c23ed00();
  func_0x00010c2034e0(param_1);
  switch(param_3) {
  case 0:
  case 3:
  case 4:
  case 7:
  case 9:
  case 0xb:
    lVar1 = param_1;
    func_0x00010c23ed40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c203550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setSmartShareImageCount__11265e778,lVar1 + 1);
    return;
  case 1:
    lVar1 = param_1;
    func_0x00010c23ede0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c203610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setSmartShareNormalVideoCount__11265e7a8,lVar1 + 1);
    return;
  case 2:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xc:
    lVar1 = param_1;
    func_0x00010c23ed80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2035b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setSmartShareLagunaVideoCount__11265e790,lVar1 + 1);
    return;
  default:
    return;
  }
}



/* Entry: 107adb3f8; end: 107adb3ff; -[SCMemoriesSendItemsCounter prepareLatencyMs] */

undefined8 FUN_107adb3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107adb400; end: 107adb407; -[SCMemoriesSendItemsCounter setPrepareLatencyMs:] */

void FUN_107adb400(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107adb408; end: 107adb40f; -[SCMemoriesSendItemsCounter downloadLatencyMs] */

undefined8 FUN_107adb408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107adb410; end: 107adb417; -[SCMemoriesSendItemsCounter setDownloadLatencyMs:] */

void FUN_107adb410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107adb418; end: 107adb41f; -[SCMemoriesSendItemsCounter smartShareLatencyMs] */

undefined8 FUN_107adb418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107adb420; end: 107adb427; -[SCMemoriesSendItemsCounter setSmartShareLatencyMs:] */

void FUN_107adb420(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107adb428; end: 107adb42f; -[SCMemoriesSendItemsCounter transcodeLatencyMs] */

undefined8 FUN_107adb428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107adb430; end: 107adb437; -[SCMemoriesSendItemsCounter setTranscodeLatencyMs:] */

void FUN_107adb430(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107adb438; end: 107adb43f; -[SCMemoriesSendItemsCounter imageCount] */

undefined8 FUN_107adb438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107adb440; end: 107adb447; -[SCMemoriesSendItemsCounter setImageCount:] */

void FUN_107adb440(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107adb448; end: 107adb44f; -[SCMemoriesSendItemsCounter specsImageCount] */

undefined8 FUN_107adb448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107adb450; end: 107adb457; -[SCMemoriesSendItemsCounter setSpecsImageCount:] */

void FUN_107adb450(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107adb458; end: 107adb45f; -[SCMemoriesSendItemsCounter normalVideoCount] */

undefined8 FUN_107adb458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107adb460; end: 107adb467; -[SCMemoriesSendItemsCounter setNormalVideoCount:] */

void FUN_107adb460(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107adb468; end: 107adb46f; -[SCMemoriesSendItemsCounter specsVideoCount] */

undefined8 FUN_107adb468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107adb470; end: 107adb477; -[SCMemoriesSendItemsCounter setSpecsVideoCount:] */

void FUN_107adb470(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107adb478; end: 107adb47f; -[SCMemoriesSendItemsCounter chatMessageCount] */

undefined8 FUN_107adb478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107adb480; end: 107adb487; -[SCMemoriesSendItemsCounter setChatMessageCount:] */

void FUN_107adb480(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107adb488; end: 107adb48f; -[SCMemoriesSendItemsCounter chatMessageSuccessCount] */

undefined8 FUN_107adb488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107adb490; end: 107adb497; -[SCMemoriesSendItemsCounter setChatMessageSuccessCount:] */

void FUN_107adb490(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107adb498; end: 107adb49f; -[SCMemoriesSendItemsCounter chatImageSuccessCount] */

undefined8 FUN_107adb498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107adb4a0; end: 107adb4a7; -[SCMemoriesSendItemsCounter setChatImageSuccessCount:] */

void FUN_107adb4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107adb4a8; end: 107adb4af; -[SCMemoriesSendItemsCounter chatNormalVideoSuccessCount] */

undefined8 FUN_107adb4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107adb4b0; end: 107adb4b7; -[SCMemoriesSendItemsCounter setChatNormalVideoSuccessCount:] */

void FUN_107adb4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107adb4b8; end: 107adb4bf; -[SCMemoriesSendItemsCounter chatMessageFailureCount] */

undefined8 FUN_107adb4b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107adb4c0; end: 107adb4c7; -[SCMemoriesSendItemsCounter setChatMessageFailureCount:] */

void FUN_107adb4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107adb4c8; end: 107adb4cf; -[SCMemoriesSendItemsCounter snapSendCount] */

undefined8 FUN_107adb4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107adb4d0; end: 107adb4d7; -[SCMemoriesSendItemsCounter setSnapSendCount:] */

void FUN_107adb4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 107adb4d8; end: 107adb4df; -[SCMemoriesSendItemsCounter snapSendSuccessCount] */

undefined8 FUN_107adb4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107adb4e0; end: 107adb4e7; -[SCMemoriesSendItemsCounter setSnapSendSuccessCount:] */

void FUN_107adb4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107adb4e8; end: 107adb4ef; -[SCMemoriesSendItemsCounter snapImageSendSuccessCount] */

undefined8 FUN_107adb4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107adb4f0; end: 107adb4f7; -[SCMemoriesSendItemsCounter setSnapImageSendSuccessCount:] */

void FUN_107adb4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107adb4f8; end: 107adb4ff; -[SCMemoriesSendItemsCounter snapNormalVideoSendSuccessCount] */

undefined8 FUN_107adb4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107adb500; end: 107adb507; -[SCMemoriesSendItemsCounter setSnapNormalVideoSendSuccessCount:] */

void FUN_107adb500(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107adb508; end: 107adb50f; -[SCMemoriesSendItemsCounter snapLagunaSdVideoSendSuccessCount] */

undefined8 FUN_107adb508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107adb510; end: 107adb517; -[SCMemoriesSendItemsCounter setSnapLagunaSdVideoSendSuccessCount:] */

void FUN_107adb510(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 107adb518; end: 107adb51f; -[SCMemoriesSendItemsCounter snapLagunaHdVideoSendSuccessCount] */

undefined8 FUN_107adb518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107adb520; end: 107adb527; -[SCMemoriesSendItemsCounter setSnapLagunaHdVideoSendSuccessCount:] */

void FUN_107adb520(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107adb528; end: 107adb52f; -[SCMemoriesSendItemsCounter snapSendFailureCount] */

undefined8 FUN_107adb528(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107adb530; end: 107adb537; -[SCMemoriesSendItemsCounter setSnapSendFailureCount:] */

void FUN_107adb530(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107adb538; end: 107adb53f; -[SCMemoriesSendItemsCounter storyPostCount] */

undefined8 FUN_107adb538(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107adb540; end: 107adb547; -[SCMemoriesSendItemsCounter setStoryPostCount:] */

void FUN_107adb540(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 107adb548; end: 107adb54f; -[SCMemoriesSendItemsCounter storyPostSuccessCount] */

undefined8 FUN_107adb548(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107adb550; end: 107adb557; -[SCMemoriesSendItemsCounter setStoryPostSuccessCount:] */

void FUN_107adb550(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 107adb558; end: 107adb55f; -[SCMemoriesSendItemsCounter storyImagePostSuccessCount] */

undefined8 FUN_107adb558(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107adb560; end: 107adb567; -[SCMemoriesSendItemsCounter setStoryImagePostSuccessCount:] */

void FUN_107adb560(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 107adb568; end: 107adb56f; -[SCMemoriesSendItemsCounter storyNormalVideoPostSuccessCount] */

undefined8 FUN_107adb568(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107adb570; end: 107adb577; -[SCMemoriesSendItemsCounter setStoryNormalVideoPostSuccessCount:] */

void FUN_107adb570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 107adb578; end: 107adb57f; -[SCMemoriesSendItemsCounter storyLagunaSdVideoPostSuccessCount] */

undefined8 FUN_107adb578(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107adb580; end: 107adb587; -[SCMemoriesSendItemsCounter setStoryLagunaSdVideoPostSuccessCount:] */

void FUN_107adb580(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 107adb588; end: 107adb58f; -[SCMemoriesSendItemsCounter storyLagunaHdVideoPostSuccessCount] */

undefined8 FUN_107adb588(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107adb590; end: 107adb597; -[SCMemoriesSendItemsCounter setStoryLagunaHdVideoPostSuccessCount:] */

void FUN_107adb590(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 107adb598; end: 107adb59f; -[SCMemoriesSendItemsCounter storyPostFailureCount] */

undefined8 FUN_107adb598(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107adb5a0; end: 107adb5a7; -[SCMemoriesSendItemsCounter setStoryPostFailureCount:] */

void FUN_107adb5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 107adb5a8; end: 107adb5af; -[SCMemoriesSendItemsCounter smartShareCount] */

undefined8 FUN_107adb5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107adb5b0; end: 107adb5b7; -[SCMemoriesSendItemsCounter setSmartShareCount:] */

void FUN_107adb5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 107adb5b8; end: 107adb5bf; -[SCMemoriesSendItemsCounter smartShareImageCount] */

undefined8 FUN_107adb5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107adb5c0; end: 107adb5c7; -[SCMemoriesSendItemsCounter setSmartShareImageCount:] */

void FUN_107adb5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 107adb5c8; end: 107adb5cf; -[SCMemoriesSendItemsCounter smartShareNormalVideoCount] */

undefined8 FUN_107adb5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107adb5d0; end: 107adb5d7; -[SCMemoriesSendItemsCounter setSmartShareNormalVideoCount:] */

void FUN_107adb5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 107adb5d8; end: 107adb5df; -[SCMemoriesSendItemsCounter smartShareLagunaVideoCount] */

undefined8 FUN_107adb5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}


