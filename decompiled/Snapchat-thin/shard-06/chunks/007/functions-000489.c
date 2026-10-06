/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d5470c; end: 104d547cb;  */

void FUN_104d5470c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d547cc; end: 104d549c3; -[SCBitmojiFlatlandUserUpdater updateSceneId:backgroundId:backgroundURL:withCompletion:] */

void FUN_104d547cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126afd08;
  _objc_alloc(PTR_PTR_1126afd08);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f80(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126afd10;
  _objc_alloc_init();
  if (param_3 != 0) {
    func_0x00010c1f66a0(puVar3);
  }
  if (param_5 == 0) {
    if (param_4 != 0) {
      func_0x00010c16e6c0(puVar3);
    }
  }
  else {
    func_0x00010c16e980(puVar3);
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c283200(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d549c4; end: 104d54aff;  */

void FUN_104d549c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104d54b00;
  puStack_88 = &UNK_11084d538;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = param_3;
  uStack_70 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a0);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d54b00; end: 104d54b73;  */

void FUN_104d54b00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  if (lVar2 == 0) {
    func_0x00010be31620(lVar1);
  }
  else {
    func_0x00010be29480(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000104d54b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x20) == 0);
  return;
}



/* Entry: 104d54b74; end: 104d54c0f; -[SCBitmojiFlatlandUserUpdater _handleSuccessForSceneId:backgroundId:backgroundURL:] */

void FUN_104d54b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289680();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logUpdateFlatlandInfoSuccess_11260a398);
  return;
}



/* Entry: 104d54c10; end: 104d54c17; -[SCBitmojiFlatlandUserUpdater _handleFailureOutcomeWithError:] */

void FUN_104d54c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logUpdateFlatlandInfoFailedWithE_11260a390);
  return;
}



/* Entry: 104d54c18; end: 104d54c33; -[SCBitmojiFlatlandUserUpdater _backgroundTypeFromFlatlandBackgroundURLType:] */

undefined4 FUN_104d54c18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfbadbeef;
  if (param_3 == 1) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 104d54c34; end: 104d54c6f; -[SCBitmojiFlatlandUserUpdater .cxx_destruct] */

void FUN_104d54c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d54c70; end: 104d54c9b; +[SCGrapheneBitmojiFlatlandUserServiceMetric updateFlatlandInfoResponse] */

void FUN_104d54c70(void)

{
  _objc_alloc(PTR_PTR_1126afce8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d54c9c; end: 104d54d3b; -[SCGrapheneBitmojiFlatlandUserServiceMetric description] */

void FUN_104d54c9c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0e78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db0e78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e40c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104d54d3c; end: 104d54e7f; -[SCGrapheneRegistry bitmojiFlatlandUserServiceGraphene] */

void FUN_104d54d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104d54dc4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b8b38 != -1) {
    func_0x00010002a2fc(0x1136b8b38,&puStack_48);
  }
  uVar1 = uRam00000001136b8b30;
  _objc_retain(uRam00000001136b8b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d54e80; end: 104d54ecf; -[SCBitmojiAvatarPicker initWithFrame:] */

undefined1 * FUN_104d54e80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e40c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d54ed0; end: 104d5502b; -[SCBitmojiAvatarPicker _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d54ed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  func_0x00010c1c82c0(0,puVar1);
  func_0x00010c1f7ac0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112711dc0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_PTR_1126afd28;
  _objc_opt_class(PTR_PTR_1126afd28);
  func_0x00010c126000(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110db0eb8);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c182b00(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fe800(0x3fd3333333333333,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d5502c; end: 104d5508b; -[SCBitmojiAvatarPicker setBitmojiUsers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5502c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711dc4);
  *(undefined8 *)(param_1 + _DAT_112711dc4) = param_3;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112711dc0;
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + lVar2),
             PTR_s_setContentOffset_animated__11263e2e0,0);
  return;
}



/* Entry: 104d5508c; end: 104d5511f; -[SCBitmojiAvatarPicker collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5508c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112711dc8;
  _objc_retain(param_4);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711dc4);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ad80(lVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104d55120; end: 104d5512f; -[SCBitmojiAvatarPicker collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711dc4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104d55130; end: 104d55137; -[SCBitmojiAvatarPicker numberOfSectionsInCollectionView:] */

undefined8 FUN_104d55130(void)

{
  return 1;
}



/* Entry: 104d55138; end: 104d5520b; -[SCBitmojiAvatarPicker collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db0eb8,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711dc4);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ada0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc40(param_3,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c1717c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104d5520c; end: 104d5522f; -[SCBitmojiAvatarPicker collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_104d5520c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf20c00(param_3);
  return;
}



/* Entry: 104d55230; end: 104d5524f; -[SCBitmojiAvatarPicker delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55230(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112711dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d55250; end: 104d55263; -[SCBitmojiAvatarPicker setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112711dc8,param_3);
  return;
}



/* Entry: 104d55264; end: 104d55273; -[SCBitmojiAvatarPicker selfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d55264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711dcc);
}



/* Entry: 104d55274; end: 104d552b3; -[SCBitmojiAvatarPicker setSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711dcc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d552b4; end: 104d5530f; -[SCBitmojiAvatarPicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d552b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711dcc,0);
  _objc_destroyWeak(param_1 + _DAT_112711dc8);
  _objc_storeStrong(param_1 + _DAT_112711dc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711dc0,0);
  return;
}



/* Entry: 104d55310; end: 104d55a33; -[SCBitmojiAvatarPickerCell setBitmojiUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55310(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar8;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  ppuVar26 = (undefined **)(long)_DAT_112711dd0;
  uVar2 = *(ulong *)(param_1 + (long)ppuVar26);
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar5 = *(ulong *)(param_1 + (long)ppuVar26);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) goto LAB_104d559b4;
  }
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + (long)ppuVar26);
  *(long *)(param_1 + (long)ppuVar26) = param_3;
  _objc_release(uVar7);
  lVar27 = (long)_DAT_112711dd4;
  lVar8 = *(long *)(param_1 + lVar27);
  if (lVar8 == 0) {
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(param_1 + lVar27);
    *(undefined **)(param_1 + lVar27) = puVar9;
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar27));
    lVar8 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar8);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar27);
    uStack_90 = uVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar27);
    uStack_88 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar16;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar27);
    uStack_80 = uVar23;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar19;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar22);
    _objc_release(uVar24);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(uVar19);
    _objc_release(uVar23);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(uVar10);
    lVar8 = *(long *)(param_1 + lVar27);
  }
  func_0x00010c1a9f00(lVar8);
  lVar27 = (long)_DAT_112711dd8;
  lVar8 = *(long *)(param_1 + lVar27);
  if (lVar8 == 0) {
    puVar9 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar7 = *(undefined8 *)(param_1 + lVar27);
    *(undefined **)(param_1 + lVar27) = puVar9;
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
    func_0x00010befbb60(param_1);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar27));
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar23 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar27);
    uStack_a0 = uVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar22);
    _objc_release(uVar15);
    _objc_release(lVar11);
    _objc_release(uVar24);
    _objc_release(uVar7);
    _objc_release(lVar8);
    _objc_release(uVar23);
    lVar8 = *(long *)(param_1 + lVar27);
  }
  func_0x00010c24dbc0(lVar8);
  puVar9 = PTR_PTR_1126afd38;
  _objc_alloc_init();
  lVar8 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc360(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  func_0x00010c2a8ea0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,param_1);
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104d55a34;
  puStack_c0 = &UNK_11084d598;
  ppuVar26 = &puStack_d8;
  param_2 = auStack_a8;
  _objc_copyWeak(auStack_b0);
  _objc_retain(lVar1);
  lStack_b8 = lVar1;
  func_0x00010bfaa020(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(param_1);
  _objc_release(lStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar9);
LAB_104d559b4:
  _objc_release(lVar25);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar26 + 5);
    _objc_destroyWeak(auStack_a8);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar8 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (lVar8 != 0) {
      lVar25 = *(long *)(lVar8 + _DAT_112711dd0);
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar25;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = *(long *)(param_3 + 0x20);
      _objc_release();
      _objc_release(lVar25);
      if (lVar1 == lVar27) {
        func_0x00010c2558c0(*(undefined8 *)(lVar8 + _DAT_112711dd8));
        if (param_2 == (undefined1 *)0x0) {
          puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9f00(*(undefined8 *)(lVar8 + _DAT_112711dd4));
          _objc_release(puVar9);
        }
        else {
          func_0x00010c1a9f00(*(undefined8 *)(lVar8 + _DAT_112711dd4));
        }
      }
    }
    _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 104d55a34; end: 104d55b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55a34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112711dd0);
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == lVar5) {
      func_0x00010c2558c0(*(undefined8 *)(lVar1 + _DAT_112711dd8));
      if (param_2 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112711dd4));
        _objc_release(puVar4);
      }
      else {
        func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112711dd4));
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d55b34; end: 104d55b43; -[SCBitmojiAvatarPickerCell selfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d55b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711ddc);
}



/* Entry: 104d55b44; end: 104d55b83; -[SCBitmojiAvatarPickerCell setSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711ddc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d55b84; end: 104d55be3; -[SCBitmojiAvatarPickerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55b84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711ddc,0);
  _objc_storeStrong(param_1 + _DAT_112711dd8,0);
  _objc_storeStrong(param_1 + _DAT_112711dd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711dd0,0);
  return;
}



/* Entry: 104d55be4; end: 104d55df3; -[SCBitmojiAvatarPickerViewController initWithBitmojiUsers:selfieFetcher:targetView:boundingView:boundingInsets:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d55be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  long lStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126afd40;
  plVar3 = &lStack_80;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c18b5e0();
  uVar2 = param_7;
  func_0x00010bf529e0(param_7);
  dVar8 = (double)NEON_fminnm((double)uVar2,0x4012000000000000);
  func_0x00010c19f0e0(0,0,dVar8 * 64.0,0x4051000000000000,puVar1);
  func_0x00010c1fbc40(puVar1);
  _objc_release(param_8);
  func_0x00010c1717e0(puVar1);
  _objc_release(param_7);
  _objc_storeWeak(param_5 + _DAT_112711de0,param_11);
  _objc_release(param_11);
  puStack_78 = PTR_PTR_1126e40d0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_80,
                      PTR_s_initWithTooltipBalloon_targetVie_112525f90,puVar1,param_9,param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  if (plVar3 != (long *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_112711de4;
    uVar6 = *(undefined8 *)((long)plVar3 + lVar7);
    *(undefined **)((long)plVar3 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)((long)plVar3 + lVar7));
    puVar5 = (undefined1 *)plVar3;
    func_0x00010c29bf00(plVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar5);
    func_0x00010c189400(plVar3);
  }
  _objc_release(puVar1);
  return (undefined1 *)plVar3;
}



/* Entry: 104d55df4; end: 104d55e63; -[SCBitmojiAvatarPickerViewController viewDidLoad] */

void FUN_104d55df4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e40d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104d55e64; end: 104d55ec3; -[SCBitmojiAvatarPickerViewController dismissCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55e64(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e40d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dismissCompleted_1125be720);
  param_1 = param_1 + _DAT_112711de0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b720();
  _objc_release(param_1);
  return;
}



/* Entry: 104d55ec4; end: 104d55f3f; -[SCBitmojiAvatarPickerViewController _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55ec4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112711de0;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b780(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_dismissWithAnimated_delay_comple_1125becd0,1,0);
  return;
}



/* Entry: 104d55f40; end: 104d55f97; -[SCBitmojiAvatarPickerViewController gestureRecognizer:shouldReceiveTouch:] */

bool FUN_104d55f40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_4);
  return param_4 == param_1;
}



/* Entry: 104d55f98; end: 104d5602b; -[SCBitmojiAvatarPickerViewController bitmojiAvatarPickerUserSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d55f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711de0;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf1b780(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf84cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_dismissWithAnimated_delay_comple_1125becd0,1,0);
  return;
}



/* Entry: 104d5602c; end: 104d56067; -[SCBitmojiAvatarPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5602c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711de4,0);
  return;
}



/* Entry: 104d56068; end: 104d561d7; -[SCBitmojiFriendmojiHintEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126afd48;
  _objc_alloc(PTR_PTR_1126afd48);
  lVar9 = (long)_DAT_112711de8;
  lVar2 = param_5 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26a280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + lVar9;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf20be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + lVar9;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf20b40();
  lVar7 = param_5 + lVar9;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050d20(param_1,param_2,param_3,param_4,puVar1,param_6,lVar3,lVar5,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_5 = param_5 + lVar9;
  _objc_loadWeakRetained(param_5);
  lVar2 = param_5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d561d8; end: 104d56263; -[SCBitmojiFriendmojiHintEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d561d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112711de8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e40d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d56264; end: 104d56273; -[SCBitmojiFriendmojiHintEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711de8);
  return;
}



/* Entry: 104d56274; end: 104d5646f; -[SCBitmojiFriendmojiPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126afd50;
  _objc_alloc();
  lVar14 = (long)_DAT_112711dec;
  lVar2 = param_5 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1c600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5 + _DAT_112711df0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_5 + lVar14;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c26a280();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5 + lVar14;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf20be0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_5 + lVar14;
  _objc_loadWeakRetained(lVar11);
  func_0x00010bf20b40();
  lVar12 = param_5 + lVar14;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8440(param_1,param_2,param_3,param_4,puVar1,param_6,lVar3,lVar6,lVar8,lVar10,lVar13
                     );
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_5 = param_5 + lVar14;
  _objc_loadWeakRetained(param_5);
  lVar2 = param_5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d56470; end: 104d564fb; -[SCBitmojiFriendmojiPickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56470(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112711dec;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e40e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d564fc; end: 104d56533; -[SCBitmojiFriendmojiPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d564fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711dec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711df0);
  return;
}



/* Entry: 104d56534; end: 104d5690f; -[SCBitmojiNotificationExtensionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56534(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126afd58;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112711df4;
  _objc_loadWeakRetained(lVar2);
  lVar13 = lVar2;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cd80(puVar1,param_2,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar2);
  lVar13 = (long)_DAT_112711df8;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afd68;
  _objc_alloc_init();
  func_0x00010c187040();
  func_0x00010c1cd300(puVar4,param_2,2);
  func_0x00010c1cd320(0,puVar4);
  puVar5 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar6 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  lVar7 = lVar3;
  func_0x00010c1195e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110db0ef8,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_retain(puVar4);
    puVar6 = puVar4;
  }
  else {
    puVar8 = PTR_PTR_1126afd68;
    _objc_alloc();
    lVar9 = lVar7;
    func_0x00010c296d80(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    func_0x00010c008360(puVar8,param_2,lVar9,&lStack_68);
    lVar10 = lStack_68;
    _objc_release(lVar9);
    puVar6 = puVar8;
    if (lVar10 != 0) {
      puVar6 = puVar4;
    }
    _objc_retain(puVar6);
    _objc_release(puVar8);
  }
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf1f440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar13);
  puVar4 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  if ((int)lVar3 == 0) {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104d569bc;
    puStack_c0 = &UNK_11084d5f8;
    puStack_b8 = puVar1;
    puStack_b0 = puVar6;
    uStack_a8 = (char)lVar7;
    func_0x00010c0f7fc0(puVar4,param_2,&puStack_d8);
  }
  else {
    lVar2 = param_1 + _DAT_112711dfc;
    _objc_loadWeakRetained();
    lVar13 = lVar2;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c0e08a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar10;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d56910;
    puStack_88 = &UNK_11084d5c8;
    lVar11 = lVar9;
    puStack_80 = puVar1;
    puStack_78 = puVar6;
    uStack_70 = (char)lVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + _DAT_112711e00);
    *(long *)(param_1 + _DAT_112711e00) = lVar11;
    _objc_release(uVar12);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar13);
    _objc_release(lVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar1);
  return;
}



/* Entry: 104d56910; end: 104d569bb;  */

void FUN_104d56910(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    func_0x00010c067fc0();
  }
  puVar1 = PTR_PTR_1126afd60;
  _objc_alloc(PTR_PTR_1126afd60);
  func_0x00010bf5e2e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0d98e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0d9900(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bff8240(puVar1);
  func_0x00010c1809e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d569bc; end: 104d56a3b;  */

void FUN_104d569bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126afd60;
  _objc_alloc(PTR_PTR_1126afd60);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf5e2e0(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0d98e0(uVar3);
  func_0x00010c0d9900(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bff8240(puVar1,param_2,uVar2 & 0xffffffff,uVar3 & 0xffffffff,
                      *(undefined1 *)(param_1 + 0x30),0);
  func_0x00010c1809e0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d56a3c; end: 104d56a9f; -[SCBitmojiNotificationExtensionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56a3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112711e00;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e40e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d56aa0; end: 104d56aff; -[SCBitmojiNotificationExtensionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d56aa0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711dfc);
  _objc_destroyWeak(param_1 + _DAT_112711df8);
  _objc_destroyWeak(param_1 + _DAT_112711df4);
  _objc_destroyWeak(param_1 + _DAT_112711e04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711e00,0);
  return;
}



/* Entry: 104d56b00; end: 104d56bdb; -[SCBitmojiNotificationExtensionUserDefaults configs] */

void FUN_104d56b00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afd60;
  _objc_opt_class(PTR_PTR_1126afd60);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d56bdc; end: 104d56c6b; -[SCBitmojiNotificationExtensionUserDefaults setConfigs:] */

void FUN_104d56bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110db0f78);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d56c6c; end: 104d56cdf; -[SCBitmojiNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_104d56c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e40f0;
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



/* Entry: 104d56ce0; end: 104d56ceb; -[SCBitmojiNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_104d56ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d56cec; end: 104d56d5f; -[SCBitmojiNotificationServiceExtensionConfigs initWithBitmojiSelfieCurrentCacheVersion:bitmojiSelfieNextCacheVersion:bitmojiSelfieNextCacheVersionThreshold:bitmojiUseStagingImages:bitmojiRenderStyle:] */

void FUN_104d56cec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e40f8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  return;
}



/* Entry: 104d56d60; end: 104d56e23; -[SCBitmojiNotificationServiceExtensionConfigs initWithCoder:] */

undefined1 *
FUN_104d56d60(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126e40f8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104d56e24; end: 104d56e47; -[SCBitmojiNotificationServiceExtensionConfigs copyWithZone:] */

undefined8 FUN_104d56e24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d56e48; end: 104d56ee3; -[SCBitmojiNotificationServiceExtensionConfigs encodeWithCoder:] */

void FUN_104d56e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db0f98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110db0fb8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0xc),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110db0fd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110db0ff8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110db1018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d56ee4; end: 104d56f7f; -[SCBitmojiNotificationServiceExtensionConfigs hash] */

undefined8 * FUN_104d56ee4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lStack_30 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_20 = -lVar4;
  if (-1 < lVar4) {
    lStack_20 = lVar4;
  }
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)((long)puVar1 + 8) != param_3[8])))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        fVar6 = ABS(*(float *)((long)puVar1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar6 <= 1.1754944e-38) {
          fVar6 = 1.1754944e-38;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(float *)((long)puVar1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar6);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 104d56f80; end: 104d57067; -[SCBitmojiNotificationServiceExtensionConfigs isEqual:] */

bool FUN_104d56f80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((((uVar2 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar3 = false;
      }
      else {
        fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        bVar3 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 104d57068; end: 104d5706f; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieCurrentCacheVersion] */

undefined8 FUN_104d57068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d57070; end: 104d57077; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieNextCacheVersion] */

undefined8 FUN_104d57070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d57078; end: 104d5707f; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiSelfieNextCacheVersionThreshold] */

undefined4 FUN_104d57078(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104d57080; end: 104d57087; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiUseStagingImages] */

undefined1 FUN_104d57080(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d57088; end: 104d5708f; -[SCBitmojiNotificationServiceExtensionConfigs bitmojiRenderStyle] */

undefined8 FUN_104d57088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d57090; end: 104d57097; -[SCBitmoji3DPreviewParams optionIds] */

undefined8 FUN_104d57090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d57098; end: 104d570c7; -[SCBitmoji3DPreviewParams setOptionIds:] */

void FUN_104d57098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d570c8; end: 104d570cf; -[SCBitmoji3DPreviewParams scale] */

undefined8 FUN_104d570c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d570d0; end: 104d570d7; -[SCBitmoji3DPreviewParams setScale:] */

void FUN_104d570d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104d570d8; end: 104d570df; -[SCBitmoji3DPreviewParams previewType] */

undefined4 FUN_104d570d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104d570e0; end: 104d570e7; -[SCBitmoji3DPreviewParams setPreviewType:] */

void FUN_104d570e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 104d570e8; end: 104d570ef; -[SCBitmoji3DPreviewParams isUA] */

undefined1 FUN_104d570e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d570f0; end: 104d570f7; -[SCBitmoji3DPreviewParams setIsUA:] */

void FUN_104d570f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104d570f8; end: 104d570ff; -[SCBitmoji3DPreviewParams sceneId] */

undefined8 FUN_104d570f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d57100; end: 104d5712f; -[SCBitmoji3DPreviewParams setSceneId:] */

void FUN_104d57100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d57130; end: 104d57137; -[SCBitmoji3DPreviewParams previewPath] */

undefined8 FUN_104d57130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d57138; end: 104d57167; -[SCBitmoji3DPreviewParams setPreviewPath:] */

void FUN_104d57138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d57168; end: 104d571a3; -[SCBitmoji3DPreviewParams .cxx_destruct] */

void FUN_104d57168(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d571a4; end: 104d5720f; -[SCComposerBitmoji3DPreviewDownloader supportedURLSchemes] */

void FUN_104d571a4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_x5;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar4 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110db1038;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afd70;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar7 = (undefined1 *)pppuVar4;
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar8 == (undefined1 *)0x0) {
      uVar20 = 1;
    }
    else {
      uVar20 = 1;
      do {
        puVar21 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          iVar22 = (int)*(undefined8 *)((long)puVar21 * 8);
          puVar9 = (undefined1 *)pppuVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          iVar3 = iVar22;
          func_0x00010c0720c0();
          if (iVar3 == 0) {
            iVar3 = iVar22;
            func_0x00010c0720c0();
            if (iVar3 == 0) {
              iVar3 = iVar22;
              func_0x00010c0720c0();
              if (iVar3 == 0) {
                iVar3 = iVar22;
                func_0x00010c0720c0();
                if (iVar3 == 0) {
                  func_0x00010c0720c0();
                  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  if (iVar22 == 0) {
                    func_0x00010c067fc0(puVar9);
                    func_0x00010c0df780(puVar11);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar6);
                    _objc_release(puVar11);
                  }
                  else {
                    func_0x00010c067fc0(puVar9);
                    func_0x00010c1e2320(puVar5);
                  }
                }
                else {
                  func_0x00010c067fc0(puVar9);
                  func_0x00010c1b53a0(puVar5);
                }
              }
              else {
                puVar10 = puVar9;
                func_0x00010c067fc0();
                if (puVar10 == (undefined1 *)0x2) {
                  uVar20 = 2;
                }
                else if (puVar10 == (undefined1 *)0x0) {
                  uVar20 = 3;
                }
              }
            }
            else {
              puVar10 = puVar9;
              func_0x00010c08fa60();
              if (puVar10 != (undefined1 *)0x0) {
                func_0x00010c1e1fc0(puVar5);
              }
            }
          }
          else {
            func_0x00010c1f6680(puVar5);
          }
          _objc_release(puVar9);
          puVar21 = puVar21 + 1;
        } while (puVar8 != puVar21);
        puVar8 = puVar7;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
    func_0x00010c1d5e40(puVar5);
    func_0x00010c1f5fe0(puVar5);
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      ___stack_chk_fail();
      _objc_retain(uVar20);
      _objc_retain(in_x5);
      puVar5 = PTR_PTR_1126afd70;
      _objc_opt_class(PTR_PTR_1126afd70);
      uVar12 = uVar20;
      _objc_opt_isKindOfClass(uVar20,puVar5);
      uVar1 = uVar20;
      if ((uVar12 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      uVar13 = *(undefined8 *)((long)pppuVar4 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar1;
      func_0x00010c0ec460(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120(uVar1);
      func_0x00010c112120(uVar1);
      uVar14 = uVar1;
      func_0x00010c14fa80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar1;
      func_0x00010c1118e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar16 = uVar13;
      func_0x00010bfa4880();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010c0e0e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_x5);
      uVar18 = uVar17;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(puVar5);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar13);
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
      _objc_release(uVar18);
      _objc_release(in_x5);
      _objc_release(in_x5);
      _objc_release(uVar20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d57210; end: 104d574d3; -[SCComposerBitmoji3DPreviewDownloader requestPayloadWithURL:error:] */

void FUN_104d57210(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afd70;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar6 = param_3;
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar7 == 0) {
    uVar19 = 1;
  }
  else {
    uVar19 = 1;
    do {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        iVar21 = (int)*(undefined8 *)(lVar20 * 8);
        lVar8 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        iVar3 = iVar21;
        func_0x00010c0720c0();
        if (iVar3 == 0) {
          iVar3 = iVar21;
          func_0x00010c0720c0();
          if (iVar3 == 0) {
            iVar3 = iVar21;
            func_0x00010c0720c0();
            if (iVar3 == 0) {
              iVar3 = iVar21;
              func_0x00010c0720c0();
              if (iVar3 == 0) {
                func_0x00010c0720c0();
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if (iVar21 == 0) {
                  func_0x00010c067fc0(lVar8);
                  func_0x00010c0df780(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar5);
                  _objc_release(puVar10);
                }
                else {
                  func_0x00010c067fc0(lVar8);
                  func_0x00010c1e2320(puVar4);
                }
              }
              else {
                func_0x00010c067fc0(lVar8);
                func_0x00010c1b53a0(puVar4);
              }
            }
            else {
              lVar9 = lVar8;
              func_0x00010c067fc0();
              if (lVar9 == 2) {
                uVar19 = 2;
              }
              else if (lVar9 == 0) {
                uVar19 = 3;
              }
            }
          }
          else {
            lVar9 = lVar8;
            func_0x00010c08fa60();
            if (lVar9 != 0) {
              func_0x00010c1e1fc0(puVar4);
            }
          }
        }
        else {
          func_0x00010c1f6680(puVar4);
        }
        _objc_release(lVar8);
        lVar20 = lVar20 + 1;
      } while (lVar7 != lVar20);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  func_0x00010c1d5e40(puVar4);
  func_0x00010c1f5fe0(puVar4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    _objc_retain(uVar19);
    _objc_retain(param_6);
    puVar4 = PTR_PTR_1126afd70;
    _objc_opt_class(PTR_PTR_1126afd70);
    uVar11 = uVar19;
    _objc_opt_isKindOfClass(uVar19,puVar4);
    uVar1 = uVar19;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar12 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c0ec460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120(uVar1);
    func_0x00010c112120(uVar1);
    uVar13 = uVar1;
    func_0x00010c14fa80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c1118e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar15 = uVar12;
    func_0x00010bfa4880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    uVar17 = uVar16;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar12);
    puVar4 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(uVar17);
    _objc_release(param_6);
    _objc_release(param_6);
    _objc_release(uVar19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d574d4; end: 104d57713; -[SCComposerBitmoji3DPreviewDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_104d574d4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126afd70;
  _objc_opt_class(PTR_PTR_1126afd70);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ec460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(uVar1);
  func_0x00010c112120(uVar1);
  uVar5 = uVar1;
  func_0x00010c14fa80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c1118e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar7 = uVar4;
  func_0x00010bfa4880();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  uVar9 = uVar8;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uVar9);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d57714; end: 104d57723;  */

void FUN_104d57714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d57724; end: 104d5772f; -[SCComposerBitmoji3DPreviewDownloader .cxx_destruct] */

void FUN_104d57724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d57730; end: 104d5779b; -[SCComposerBitmojiFlatlandBackgroundDownloader supportedURLSchemes] */

void FUN_104d57730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110db10f8;
  puVar3 = (undefined8 *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010be91100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1178;
      FUN_104d57b14();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar3 = ppuVar2;
    }
    else {
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5779c; end: 104d577ff; -[SCComposerBitmojiFlatlandBackgroundDownloader requestPayloadWithURL:error:] */

void FUN_104d5779c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  
  func_0x00010be91100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1178;
    FUN_104d57b14();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = ppuVar1;
  }
  else {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d57800; end: 104d57983; -[SCComposerBitmojiFlatlandBackgroundDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_104d57800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfa5260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d57984;
  puStack_70 = &UNK_11084d628;
  uStack_68 = param_6;
  _objc_retain(param_6);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d57984; end: 104d57993;  */

void FUN_104d57984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d57994; end: 104d57ac3; -[SCComposerBitmojiFlatlandBackgroundDownloader _requestFromImageURL:] */

void FUN_104d57994(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c067fc0(lVar2);
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1058);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126afd80;
      func_0x00010bfe5e80(PTR_PTR_1126afd80,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126afd88;
      _objc_alloc(PTR_PTR_1126afd88);
      func_0x00010bff6380();
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d57ac4; end: 104d57acf; -[SCComposerBitmojiFlatlandBackgroundDownloader .cxx_destruct] */

void FUN_104d57ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d57ad0; end: 104d57b13; -[SCComposerBitmojiFlatlandImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d57ad0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711e44);
  _objc_destroyWeak(param_1 + _DAT_112711e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711e48);
  return;
}



/* Entry: 104d57b14; end: 104d57b2f;  */

void FUN_104d57b14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110db1198,param_1,200);
  return;
}



/* Entry: 104d57b30; end: 104d57b9b; -[SCComposerBitmojiFlatlandSceneDownloader supportedURLSchemes] */

void FUN_104d57b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110db11b8;
  puVar3 = (undefined8 *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010be91100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1178;
      FUN_104d57b14();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar3 = ppuVar2;
    }
    else {
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d57b9c; end: 104d57bff; -[SCComposerBitmojiFlatlandSceneDownloader requestPayloadWithURL:error:] */

void FUN_104d57b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  
  func_0x00010be91100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1178;
    FUN_104d57b14();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = ppuVar1;
  }
  else {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d57c00; end: 104d57d83; -[SCComposerBitmojiFlatlandSceneDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_104d57c00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfa9f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d57d84;
  puStack_70 = &UNK_11084d628;
  uStack_68 = param_6;
  _objc_retain(param_6);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d57d84; end: 104d57d93;  */

void FUN_104d57d84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d57d94; end: 104d58003; -[SCComposerBitmojiFlatlandSceneDownloader _requestFromImageURL:] */

void FUN_104d57d94(undefined8 param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db10d8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db11f8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1218);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b0e5124();
      _objc_release(lVar5);
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        dVar11 = *(double *)PTR__CGSizeZero_110347620;
        dVar12 = *(double *)(PTR__CGSizeZero_110347620 + 8);
        lVar6 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1058);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1238);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c067fc0();
        _objc_release(lVar7);
        lVar7 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1258);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c067fc0();
        _objc_release(lVar7);
        dVar13 = (double)lVar9;
        dVar1 = (double)lVar8;
        if (lVar8 == 0 || lVar9 == 0) {
          dVar13 = dVar12;
          dVar1 = dVar11;
        }
        func_0x00010c067fc0(lVar5);
        if (lVar6 != 0) {
          func_0x00010c067fc0();
        }
        puVar10 = PTR_PTR_1126af5d8;
        _objc_alloc(PTR_PTR_1126af5d8);
        func_0x00010bff6020(dVar1,dVar13);
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104d58004; end: 104d5800f; -[SCComposerBitmojiFlatlandSceneDownloader .cxx_destruct] */

void FUN_104d58004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d58010; end: 104d581eb; -[SCComposerBitmojiPostRegistrationScopeImageLoaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d58010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126afd90;
  _objc_alloc(PTR_PTR_1126afd90);
  lVar5 = (long)_DAT_112711e50;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8000(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126afd98;
  _objc_alloc(PTR_PTR_1126afd98);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8000(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126afda0;
  _objc_alloc(PTR_PTR_1126afda0);
  lVar2 = param_1 + _DAT_112711e54;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bf1a9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa20(puVar4,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar6 = (long)_DAT_112711e58;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d581ec; end: 104d5822f; -[SCComposerBitmojiPostRegistrationScopeImageLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d581ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711e54);
  _objc_destroyWeak(param_1 + _DAT_112711e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711e58);
  return;
}



/* Entry: 104d58230; end: 104d5823b; -[SCBitmoji3DPreviewServices .cxx_destruct] */

void FUN_104d58230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d5823c; end: 104d58373; -[SCFriendProfileBitmojiSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5823c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112711e60;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d58374; end: 104d583b3;  */

void FUN_104d58374(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d583b4; end: 104d58677; -[SCFriendProfileBitmojiSectionEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d583b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar1 = PTR_PTR_1126afdb0;
  _objc_alloc();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112711e64);
  uVar24 = *(undefined8 *)(param_1 + _DAT_112711e68);
  lVar2 = param_1 + _DAT_112711e6c;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112711e70;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112711e74;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112711e60;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + _DAT_112711e78);
  lVar9 = param_1 + _DAT_112711e7c;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112711e80;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112711e84;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112711e88;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_112711e8c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112711e90;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112711e94;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112711e98;
  _objc_loadWeakRetained();
  lVar20 = param_1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf5e220();
  func_0x00010bff7ac0(puVar1,param_2,uVar23,uVar24,lVar2,lVar4,lVar6,lVar8,uVar25,lVar9,lVar11,
                      lVar12,lVar13,lVar16,lVar18,lVar19,lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


