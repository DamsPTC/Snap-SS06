/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e4bac0; end: 108e4bac7; -[SCVenueFilterInfo locality] */

undefined8 FUN_108e4bac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e4bac8; end: 108e4bacf; -[SCVenueFilterInfo yOffset] */

undefined8 FUN_108e4bac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e4bad0; end: 108e4bb0b; -[SCVenueFilterInfo .cxx_destruct] */

void FUN_108e4bad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e4bb0c; end: 108e4bc8b;  */

void FUN_108e4bb0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c241860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR_PTR_1126dc2a0;
  lVar2 = param_1;
  lVar3 = param_1;
  lVar4 = param_1;
  lVar5 = param_1;
  if (lVar1 == 0) {
    func_0x00010c257800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee760(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c257520(puVar6,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c241860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c257800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee760(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c115ca0(puVar6,param_2,lVar1,lVar3,lVar4,lVar5,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e4bc8c; end: 108e4bd87; -[SCCommerceStickerView initWithFrame:title:iconImageData:attachmentDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e4bc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126feb88;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277c524;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    func_0x00010be3a6c0(puVar1);
    func_0x00010be285a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4bd88; end: 108e4bf6f; -[SCCommerceStickerView initWithFrame:title:iconImage:iconDownloader:attachmentDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e4bd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126feb88;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277c524;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    func_0x00010be3a6c0(puVar1);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    puVar4 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar3);
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf88c20(param_9);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e4bf70; end: 108e4c02b;  */

void FUN_108e4bf70(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e4c02c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e4c02c; end: 108e4c05f;  */

void FUN_108e4c02c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be285a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e4c060; end: 108e4c367; -[SCCommerceStickerView initWithItemInstance:iconDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e4c060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126feb88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11277c528;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar9 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c52c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c52c) = puVar9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c530) = 1;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf426e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar2 = uVar5;
    func_0x00010bf85d80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3a6c0(puVar1);
    _objc_release(uVar2);
    puVar9 = PTR_PTR_1126bab40;
    func_0x00010c25dfa0(uVar5);
    func_0x00010bdc2300(puVar9);
    func_0x00010bee1240(puVar1);
    uVar2 = uVar5;
    func_0x00010bf0d640();
    if (((int)uVar2 == 6) || (puVar9 = (undefined *)0x0, (int)uVar2 == 5)) {
      puVar9 = PTR_PTR_1126aebd8;
      func_0x00010c14e3a0(PTR_PTR_1126aebd8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_78,puVar1);
    puVar6 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    puVar7 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar6);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf88c20(param_4);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e4c368; end: 108e4c423;  */

void FUN_108e4c368(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e4c424;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e4c424; end: 108e4c457;  */

void FUN_108e4c424(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be285a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e4c458; end: 108e4c66b; -[SCCommerceStickerView _initSubViewsWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4c458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c17d4c0(param_1);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar4 = (long)_DAT_11277c534;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c538);
  *(undefined **)(param_1 + _DAT_11277c538) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c53c);
  *(undefined **)(param_1 + _DAT_11277c53c) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStyle__112595e38,0);
  return;
}



/* Entry: 108e4c66c; end: 108e4c707; -[SCCommerceStickerView _handleDidLoadIconImageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4c66c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11277c540;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bee1240(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c544));
    func_0x00010c23d620(param_1);
    func_0x00010c1cbe20(param_1);
    func_0x00010c23d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111e40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e4c708; end: 108e4c963; -[SCCommerceStickerView _updateStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4c708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277c544;
  *(undefined8 *)(param_1 + lVar4) = param_3;
  lVar3 = param_1;
  func_0x00010be45ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c528);
  *(long *)(param_1 + _DAT_11277c528) = lVar3;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 1) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277c538));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11277c534;
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + _DAT_11277c540);
    if (lVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d100(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c53c));
      _objc_release(lVar3);
      _objc_release(puVar1);
    }
  }
  else {
    if (lVar3 != 0) goto LAB_108e4c94c;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277c538));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_11277c534;
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(uVar2);
    if (*(long *)(param_1 + _DAT_11277c540) != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c53c));
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf415a0(0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
LAB_108e4c94c:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108e4c964; end: 108e4cb13; -[SCCommerceStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4c964(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double in_d3;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126feb88;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  dVar6 = in_d3;
  func_0x00010bf20c00(param_1);
  dVar9 = in_d3 * 0.5 + -16.0;
  dVar4 = dVar6;
  func_0x00010bf20c00(param_1);
  dVar10 = dVar4 * 0.5 + -16.0;
  dVar7 = 32.0;
  dVar4 = dVar9;
  _CGRectGetMaxX(dVar9,dVar10,0x4040000000000000,0x4040000000000000);
  puVar1 = PTR_PTR_1126af270;
  lVar3 = (long)_DAT_11277c534;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf0e540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 135.0;
  func_0x00010c23d600(0x4060e00000000000,0x4044000000000000,puVar1);
  _objc_release(uVar2);
  dVar8 = 135.0;
  if (dVar5 <= 135.0) {
    dVar8 = dVar5;
  }
  func_0x00010bf20c00(param_1);
  func_0x00010b8166f8(dVar9,dVar10,0x4040000000000000,0x4040000000000000,param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277c53c));
  func_0x00010b8166f8(dVar4 + dVar9 + 10.0,dVar7 * 0.5 + -20.0,dVar8,0x4044000000000000,param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010b8166f8(0,0,in_d3,dVar6,param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277c538));
  return;
}



/* Entry: 108e4cb14; end: 108e4cbef; -[SCCommerceStickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e4cb14(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af270;
  uVar2 = *(undefined8 *)(param_4 + _DAT_11277c534);
  func_0x00010bf0e540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 135.0;
  func_0x00010c23d600(0x4060e00000000000,0x4044000000000000,puVar1,param_5,uVar2,2);
  _objc_release(uVar2);
  dVar3 = 135.0;
  if (dVar4 <= 135.0) {
    dVar3 = dVar4;
  }
  dVar4 = dVar3 + 66.0 + 11.0;
  if (param_3 * 0.7 <= dVar4) {
    dVar4 = param_3 * 0.7;
  }
  auVar5._8_8_ = 0x404c000000000000;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 108e4cbf0; end: 108e4cbf7; -[SCCommerceStickerView scaleLimit] */

undefined8 FUN_108e4cbf0(void)

{
  return 0;
}



/* Entry: 108e4cbf8; end: 108e4cc8b; -[SCCommerceStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4cbf8(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc();
  func_0x00010c005f20(0);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bee1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e4cc8c; end: 108e4cca3; -[SCCommerceStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4cc8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateStyle__112595e38,*(long *)(param_1 + _DAT_11277c544) == 0);
  return;
}



/* Entry: 108e4cca4; end: 108e4cca7; -[SCCommerceStickerView willDisplay] */

void FUN_108e4cca4(void)

{
  return;
}



/* Entry: 108e4cca8; end: 108e4ccab; -[SCCommerceStickerView didEndDisplay] */

void FUN_108e4cca8(void)

{
  return;
}



/* Entry: 108e4ccac; end: 108e4ccdb; -[SCCommerceStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4ccac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c528);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e4ccdc; end: 108e4cd53; -[SCCommerceStickerView loggingParameters] */

undefined ** FUN_108e4ccdc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110db4518;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110db4518;
}



/* Entry: 108e4cd54; end: 108e4cd5f; -[SCCommerceStickerView packId] */

undefined ** FUN_108e4cd54(void)

{
  return &PTR____CFConstantStringClassReference_110db4518;
}



/* Entry: 108e4cd60; end: 108e4cd6b; -[SCCommerceStickerView shortLoggingName] */

undefined ** FUN_108e4cd60(void)

{
  return &PTR____CFConstantStringClassReference_110efb998;
}



/* Entry: 108e4cd6c; end: 108e4cd77; -[SCCommerceStickerView stickerId] */

undefined ** FUN_108e4cd6c(void)

{
  return &PTR____CFConstantStringClassReference_110db4518;
}



/* Entry: 108e4cd78; end: 108e4cd7f; -[SCCommerceStickerView toCTPItem] */

undefined8 FUN_108e4cd78(void)

{
  return 0;
}



/* Entry: 108e4cd80; end: 108e4cd87; -[SCCommerceStickerView type] */

undefined8 FUN_108e4cd80(void)

{
  return 6;
}



/* Entry: 108e4cd88; end: 108e4cd8f; -[SCCommerceStickerView infoType] */

undefined8 FUN_108e4cd88(void)

{
  return 0xd;
}



/* Entry: 108e4cd90; end: 108e4cd93; -[SCCommerceStickerView encodeWithCoder:] */

void FUN_108e4cd90(void)

{
  return;
}



/* Entry: 108e4cd94; end: 108e4cdb7; -[SCCommerceStickerView copyWithZone:] */

undefined8 FUN_108e4cd94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e4cdb8; end: 108e4cdd3; -[SCCommerceStickerView intrinsicSize] */

undefined1  [16]
FUN_108e4cdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e4cdd4; end: 108e4cf9f; -[SCCommerceStickerView _itemInstanceWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4cdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
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
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126dc2a8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  puVar6 = PTR_PTR_1126bab40;
  func_0x00010bdc1280(PTR_PTR_1126bab40,param_2,param_3);
  func_0x00010c20eaa0(puVar2,param_2,puVar6);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uVar8 = *(undefined8 *)(param_1 + _DAT_11277c524);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108e4cfa0;
  puStack_70 = &UNK_1108e8860;
  _objc_retain(puVar2);
  puStack_b0 = puVar6;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108e4d05c;
  puStack_98 = &UNK_1108503f8;
  puStack_90 = puVar2;
  puStack_68 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0bf620(uVar8,param_2,&puStack_88,&puStack_b0);
  func_0x00010c1ac500(puVar4,param_2,puVar5);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar1,param_2,puVar3);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f3c0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puStack_90);
  _objc_release(puStack_68);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e4cfa0; end: 108e4d127;  */

void FUN_108e4cfa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc2b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c204900();
  func_0x00010c1e3a60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c20c240(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c18fca0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  func_0x00010c1619e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e4d128; end: 108e4d137; -[SCCommerceStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4d128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c52c);
}



/* Entry: 108e4d138; end: 108e4d147; -[SCCommerceStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4d138(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c528);
}



/* Entry: 108e4d148; end: 108e4d157; -[SCCommerceStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e4d148(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c530);
}



/* Entry: 108e4d158; end: 108e4d167; -[SCCommerceStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4d158(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c530) = param_3;
  return;
}



/* Entry: 108e4d168; end: 108e4d177; -[SCCommerceStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4d168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c548);
}



/* Entry: 108e4d178; end: 108e4d217; -[SCCommerceStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4d178(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c548,0);
  _objc_storeStrong(param_1 + _DAT_11277c52c,0);
  _objc_storeStrong(param_1 + _DAT_11277c528,0);
  _objc_storeStrong(param_1 + _DAT_11277c524,0);
  _objc_storeStrong(param_1 + _DAT_11277c538,0);
  _objc_storeStrong(param_1 + _DAT_11277c53c,0);
  _objc_storeStrong(param_1 + _DAT_11277c540,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c534,0);
  return;
}



/* Entry: 108e4d218; end: 108e4d3bb; -[SCDiscoverDeeplinkStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e4d218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126feb90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11277c54c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c550) = 1;
    uVar2 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf815a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar2 = uVar4;
    func_0x00010bf68960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = puVar5;
    FUN_108e73198(puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffec0(puVar1);
    _objc_release(puVar6);
    func_0x00010c160fc0(puVar1);
    func_0x00010bead1c0(puVar1);
    func_0x00010c23d620(puVar1);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4d3bc; end: 108e4d49f; -[SCDiscoverDeeplinkStickerView _setupImageView:] */

void FUN_108e4d3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e4d4a0;
  puStack_48 = &UNK_110a10688;
  _objc_copyWeak(auStack_40,auStack_38);
  FUN_108e72b4c(param_3,puVar1,&puStack_60,0);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e4d4a0; end: 108e4d50f;  */

void FUN_108e4d4a0(long param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2865e0();
    _objc_release(param_3);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e4d510; end: 108e4d5a7; -[SCDiscoverDeeplinkStickerView imageView] */

void FUN_108e4d510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e4d5a8; end: 108e4d5ab; -[SCDiscoverDeeplinkStickerView didEndDisplay] */

void FUN_108e4d5a8(void)

{
  return;
}



/* Entry: 108e4d5ac; end: 108e4d5af; -[SCDiscoverDeeplinkStickerView willDisplay] */

void FUN_108e4d5ac(void)

{
  return;
}



/* Entry: 108e4d5b0; end: 108e4d5bf; -[SCDiscoverDeeplinkStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e4d5b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c550);
}



/* Entry: 108e4d5c0; end: 108e4d5cf; -[SCDiscoverDeeplinkStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4d5c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c550) = param_3;
  return;
}



/* Entry: 108e4d5d0; end: 108e4d5df; -[SCDiscoverDeeplinkStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4d5d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c554);
}



/* Entry: 108e4d5e0; end: 108e4d5ef; -[SCDiscoverDeeplinkStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4d5e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c54c);
}



/* Entry: 108e4d5f0; end: 108e4d62f; -[SCDiscoverDeeplinkStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4d5f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c54c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c554,0);
  return;
}



/* Entry: 108e4d630; end: 108e4d7ff; -[SCGenericImageStickerView initWithItemInstance:contentDelivery:downloader:completeRenderingSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e4d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126feb98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11277c558;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277c55c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277c560;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277c564;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_6;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfc0fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c568);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c568) = uVar4;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar6 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c56c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c56c) = puVar6;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4d800; end: 108e4dd3f; -[SCGenericImageStickerView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4d800(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined1 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar42 = (long)_DAT_11277c570;
  uVar39 = *(undefined8 *)(param_1 + lVar42);
  *(undefined **)(param_1 + lVar42) = puVar2;
  _objc_release(uVar39);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar39 = *(undefined8 *)(param_1 + _DAT_11277c568);
  func_0x00010c26b700(uVar39);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(uVar39);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bdd6da0(param_1);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar42));
  }
  func_0x00010bdd6cc0(param_1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar43 = (long)_DAT_11277c578;
  uVar39 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar2;
  _objc_release(uVar39);
  lVar41 = (long)_DAT_11277c57c;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar43));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c08de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar17);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar40);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar39);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c066580(*(undefined8 *)(param_1 + lVar42));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar42));
  func_0x00010c207380(0x4024000000000000,*(undefined8 *)(param_1 + lVar42));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar42));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)(param_1 + lVar42);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar40);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar39);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(lVar43);
  _objc_release(lVar41);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) {
    return;
  }
  ___stack_chk_fail();
  lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126bb2a0;
  _objc_opt_new();
  lVar38 = (long)_DAT_11277c57c;
  uVar39 = *(undefined8 *)(lVar14 + lVar38);
  *(undefined **)(lVar14 + lVar38) = puVar2;
  _objc_release(uVar39);
  func_0x00010c219b60(*(undefined8 *)(lVar14 + lVar38));
  uVar19 = *(undefined8 *)(lVar14 + lVar38);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar19;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(lVar14 + _DAT_11277c580);
  *(undefined8 *)(lVar14 + _DAT_11277c580) = uVar39;
  _objc_release(uVar40);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(lVar14 + lVar38);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar19;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(lVar14 + _DAT_11277c584);
  *(undefined8 *)(lVar14 + _DAT_11277c584) = uVar39;
  _objc_release(uVar40);
  _objc_release(uVar19);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  lVar41 = (long)_DAT_11277c568;
  lVar38 = *(long *)(lVar14 + lVar41);
  func_0x00010c2541e0();
  iVar1 = (int)lVar38;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x00010bea4800();
      lVar38 = lVar14;
      goto LAB_108e4df28;
    }
    if (iVar1 != 1) goto LAB_108e4df28;
    lVar38 = *(long *)(lVar14 + lVar41);
    func_0x00010bf9de40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e580(lVar14);
  }
  else if (iVar1 == 2) {
    lVar38 = *(long *)(lVar14 + lVar41);
    func_0x00010c09d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4dd40(lVar14);
  }
  else {
    if (iVar1 != 3) goto LAB_108e4df28;
    lVar38 = *(long *)(lVar14 + lVar41);
    func_0x00010bf1ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4cae0(lVar14);
  }
  _objc_release();
LAB_108e4df28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
    return;
  }
  ___stack_chk_fail();
  lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar21 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034800000000000);
  _objc_release(puVar2);
  puVar20 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar20);
  _objc_release(puVar2);
  func_0x00010c182220(puVar20);
  func_0x00010c219b60(puVar20);
  func_0x00010befbb60(puVar13);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar21 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar13;
  func_0x00010bf348e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar27;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar20;
  func_0x00010c2a5060(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  uVar39 = *(undefined8 *)(lVar38 + _DAT_11277c588);
  *(undefined **)(lVar38 + _DAT_11277c588) = puVar20;
  _objc_retain(puVar20);
  _objc_release(uVar39);
  puVar21 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar21);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar21);
  puVar2 = puVar21;
  func_0x00010c08c0e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  dVar45 = 0.5;
  func_0x00010c1fe7a0(0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar21;
  func_0x00010c08c0e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar22 = puVar21;
  func_0x00010c08c0e0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar22);
  _objc_release(puVar2);
  uVar39 = *(undefined8 *)(lVar38 + _DAT_11277c568);
  func_0x00010c26b700(uVar39);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar21);
  _objc_release(uVar39);
  func_0x00010befbb60(puVar13);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar28 = puVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar28;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar13;
  func_0x00010bf1ff80(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar30);
  _objc_release(puVar31);
  _objc_release(puVar29);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar28);
  puVar33 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c182220();
  func_0x00010c219b60(puVar33);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar33);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar13);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar26 = puVar33;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar26;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar23;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar33;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar13;
  func_0x00010bf348e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar33;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar33;
  func_0x00010bfe6ac0(puVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar46 = dVar45;
  _objc_release(puVar32);
  dVar44 = 24.0;
  if (dVar45 <= 24.0) {
    dVar44 = dVar45;
  }
  puVar32 = puVar31;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010bfe6ac0(puVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar35);
  dVar45 = 24.0;
  if (dVar44 <= 24.0) {
    dVar45 = dVar44;
  }
  puVar35 = puVar34;
  func_0x00010bf49420(dVar45);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar22);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release(puVar25);
  _objc_release(puVar26);
  func_0x00010c1cbe20(puVar13);
  func_0x00010c08cdc0(puVar13);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar41 = (long)_DAT_11277c574;
  uVar39 = *(undefined8 *)(lVar38 + lVar41);
  *(undefined **)(lVar38 + lVar41) = puVar2;
  _objc_release(uVar39);
  func_0x00010befbb60(*(undefined8 *)(lVar38 + lVar41));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar22 = puVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4044800000000000;
  puVar23 = puVar22;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(lVar38 + lVar41);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar38 + lVar41);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(lVar38 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar38 + lVar41);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar38 + lVar41);
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar32;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = 6;
  puVar35 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar35;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(uVar17);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(uVar15);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(uVar40);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(uVar19);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(uVar39);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  uVar39 = *(undefined8 *)(lVar38 + _DAT_11277c58c);
  *(undefined **)(lVar38 + _DAT_11277c58c) = puVar13;
  _objc_release(uVar39);
  _objc_release(puVar20);
  _objc_release(puVar33);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
    return;
  }
  ___stack_chk_fail();
  uVar39 = *(undefined8 *)(puVar21 + _DAT_11277c57c);
  _objc_retain(puVar36);
  func_0x00010c1a9f00(uVar39);
  FUN_108eb75f4(*(undefined8 *)(puVar21 + _DAT_11277c568),puVar36);
  _objc_release(puVar36);
  func_0x00010c181140(uVar3,*(undefined8 *)(puVar21 + _DAT_11277c580));
  func_0x00010c181140(dVar46,*(undefined8 *)(puVar21 + _DAT_11277c584));
  func_0x00010bf20c00();
  func_0x00010c1739e0(0,0,puVar21);
  puVar21[_DAT_11277c590] = uVar37;
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar21 + _DAT_11277c564),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e4dd40; end: 108e4df5f; -[SCGenericImageStickerView _buildStickerImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4dd40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126bb2a0;
  _objc_opt_new();
  lVar29 = (long)_DAT_11277c57c;
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar2;
  _objc_release(uVar26);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29));
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar3;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + _DAT_11277c580);
  *(undefined8 *)(param_1 + _DAT_11277c580) = uVar26;
  _objc_release(uVar27);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar3;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + _DAT_11277c584);
  *(undefined8 *)(param_1 + _DAT_11277c584) = uVar26;
  _objc_release(uVar27);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar4);
  lVar28 = (long)_DAT_11277c568;
  lVar29 = *(long *)(param_1 + lVar28);
  func_0x00010c2541e0();
  iVar1 = (int)lVar29;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x00010bea4800();
      lVar29 = param_1;
      goto LAB_108e4df28;
    }
    if (iVar1 != 1) goto LAB_108e4df28;
    lVar29 = *(long *)(param_1 + lVar28);
    func_0x00010bf9de40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e580(param_1);
  }
  else if (iVar1 == 2) {
    lVar29 = *(long *)(param_1 + lVar28);
    func_0x00010c09d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4dd40(param_1);
  }
  else {
    if (iVar1 != 3) goto LAB_108e4df28;
    lVar29 = *(long *)(param_1 + lVar28);
    func_0x00010bf1ee20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4cae0(param_1);
  }
  _objc_release();
LAB_108e4df28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034800000000000);
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar5);
  _objc_release(puVar2);
  func_0x00010c182220(puVar5);
  func_0x00010c219b60(puVar5);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf348e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010c2a5060(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar26 = *(undefined8 *)(lVar29 + _DAT_11277c588);
  *(undefined **)(lVar29 + _DAT_11277c588) = puVar5;
  _objc_retain(puVar5);
  _objc_release(uVar26);
  puVar6 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar6);
  puVar2 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  dVar32 = 0.5;
  func_0x00010c1fe7a0(0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar7);
  _objc_release(puVar2);
  uVar26 = *(undefined8 *)(lVar29 + _DAT_11277c568);
  func_0x00010c26b700(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(uVar26);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar12;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf1ff80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar18 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c182220();
  func_0x00010c219b60(puVar18);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar18);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar11;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf348e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar18;
  func_0x00010bfe6ac0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar33 = dVar32;
  _objc_release(puVar17);
  dVar30 = 24.0;
  if (dVar32 <= 24.0) {
    dVar30 = dVar32;
  }
  puVar17 = puVar16;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bfe6ac0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar20);
  dVar32 = 24.0;
  if (dVar30 <= 24.0) {
    dVar32 = dVar30;
  }
  puVar20 = puVar19;
  func_0x00010bf49420(dVar32);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  func_0x00010c1cbe20(puVar4);
  func_0x00010c08cdc0(puVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar28 = (long)_DAT_11277c574;
  uVar26 = *(undefined8 *)(lVar29 + lVar28);
  *(undefined **)(lVar29 + lVar28) = puVar2;
  _objc_release(uVar26);
  func_0x00010befbb60(*(undefined8 *)(lVar29 + lVar28));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = 0x4044800000000000;
  puVar8 = puVar7;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar29 + lVar28);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar29 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar29 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar29 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar29 + lVar28);
  func_0x00010c2793a0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 6;
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar23);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar22);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar27);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar26);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar26 = *(undefined8 *)(lVar29 + _DAT_11277c58c);
  *(undefined **)(lVar29 + _DAT_11277c58c) = puVar4;
  _objc_release(uVar26);
  _objc_release(puVar5);
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  uVar26 = *(undefined8 *)(puVar6 + _DAT_11277c57c);
  _objc_retain(puVar21);
  func_0x00010c1a9f00(uVar26);
  FUN_108eb75f4(*(undefined8 *)(puVar6 + _DAT_11277c568),puVar21);
  _objc_release(puVar21);
  func_0x00010c181140(uVar31,*(undefined8 *)(puVar6 + _DAT_11277c580));
  func_0x00010c181140(dVar33,*(undefined8 *)(puVar6 + _DAT_11277c584));
  func_0x00010bf20c00();
  func_0x00010c1739e0(0,0,puVar6);
  puVar6[_DAT_11277c590] = uVar24;
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar6 + _DAT_11277c564),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e4df60; end: 108e4eb33; -[SCGenericImageStickerView _buildTextPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4df60(long param_1)

{
  undefined *puVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034800000000000);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar3);
  _objc_release(puVar2);
  func_0x00010c182220(puVar3);
  func_0x00010c219b60(puVar3);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar26 = *(undefined8 *)(param_1 + _DAT_11277c588);
  *(undefined **)(param_1 + _DAT_11277c588) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar26);
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4);
  puVar2 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 0.5;
  func_0x00010c1fe7a0(0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar5);
  _objc_release(puVar2);
  uVar26 = *(undefined8 *)(param_1 + _DAT_11277c568);
  func_0x00010c26b700(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(uVar26);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c182220();
  func_0x00010c219b60(puVar9);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar9);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar31 = dVar30;
  _objc_release(puVar10);
  dVar28 = 24.0;
  if (dVar30 <= 24.0) {
    dVar28 = dVar30;
  }
  puVar10 = puVar11;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar9;
  func_0x00010bfe6ac0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar18);
  dVar30 = 24.0;
  if (dVar28 <= 24.0) {
    dVar30 = dVar28;
  }
  puVar18 = puVar17;
  func_0x00010bf49420(dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  func_0x00010c1cbe20(puVar1);
  func_0x00010c08cdc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar27 = (long)_DAT_11277c574;
  uVar26 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar2;
  _objc_release(uVar26);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar27));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = 0x4044800000000000;
  puVar6 = puVar5;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf49460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c2793a0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 6;
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar23);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar22);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar21);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar20);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar26);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar26 = *(undefined8 *)(param_1 + _DAT_11277c58c);
  *(undefined **)(param_1 + _DAT_11277c58c) = puVar1;
  _objc_release(uVar26);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  uVar26 = *(undefined8 *)(puVar4 + _DAT_11277c57c);
  _objc_retain(puVar19);
  func_0x00010c1a9f00(uVar26);
  FUN_108eb75f4(*(undefined8 *)(puVar4 + _DAT_11277c568),puVar19);
  _objc_release(puVar19);
  func_0x00010c181140(uVar29,*(undefined8 *)(puVar4 + _DAT_11277c580));
  func_0x00010c181140(dVar31,*(undefined8 *)(puVar4 + _DAT_11277c584));
  func_0x00010bf20c00();
  func_0x00010c1739e0(0,0,puVar4);
  puVar4[_DAT_11277c590] = uVar24;
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + _DAT_11277c564),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e4eb34; end: 108e4ec27; -[SCGenericImageStickerView _setImage:fromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4eb34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277c57c);
  _objc_retain(param_5);
  func_0x00010c1a9f00(uVar1);
  FUN_108eb75f4(*(undefined8 *)(param_3 + _DAT_11277c568),param_5);
  _objc_release(param_5);
  func_0x00010c181140(param_1,*(undefined8 *)(param_3 + _DAT_11277c580));
  func_0x00010c181140(param_2,*(undefined8 *)(param_3 + _DAT_11277c584));
  func_0x00010bf20c00();
  func_0x00010c1739e0(0,0,param_3);
  *(undefined1 *)(param_3 + _DAT_11277c590) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11277c564),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e4ec28; end: 108e4ec8f; -[SCGenericImageStickerView _loadLocalImageURLString:] */

void FUN_108e4ec28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2720;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c004020();
  _objc_release(param_3);
  func_0x00010bea4800(param_1,param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e4ec90; end: 108e4eef7; -[SCGenericImageStickerView _loadRemoteImageURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4ec90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar3 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  puVar5 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c189d40();
  puVar6 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar8 = puVar6;
  func_0x00010bf64e20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11277c55c);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1267e0(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e4eef8; end: 108e4efbb;  */

void FUN_108e4eef8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e4efbc;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_48 = param_2;
  uStack_38 = param_4;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 108e4efbc; end: 108e4f027;  */

void FUN_108e4efbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea4800(lVar1,param_2,puVar2,*(undefined1 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e4f028; end: 108e4f193; -[SCGenericImageStickerView _loadBoltImageURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c560);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e4f194; end: 108e4f23b;  */

void FUN_108e4f194(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e4f23c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e4f23c; end: 108e4f27b;  */

void FUN_108e4f23c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea4800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e4f27c; end: 108e4f2f3; -[SCGenericImageStickerView loggingParameters] */

undefined ** FUN_108e4f27c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e3d998;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e3d998;
}



/* Entry: 108e4f2f4; end: 108e4f2ff; -[SCGenericImageStickerView packId] */

undefined ** FUN_108e4f2f4(void)

{
  return &PTR____CFConstantStringClassReference_110e3d998;
}



/* Entry: 108e4f300; end: 108e4f363; -[SCGenericImageStickerView shortLoggingName] */

void FUN_108e4f300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110efba18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e4f364; end: 108e4f36f; -[SCGenericImageStickerView stickerId] */

undefined ** FUN_108e4f364(void)

{
  return &PTR____CFConstantStringClassReference_110e3d998;
}



/* Entry: 108e4f370; end: 108e4f377; -[SCGenericImageStickerView type] */

undefined8 FUN_108e4f370(void)

{
  return 6;
}



/* Entry: 108e4f378; end: 108e4f3a7; -[SCGenericImageStickerView toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c56c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e4f3a8; end: 108e4f3d7; -[SCGenericImageStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f3a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c558);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e4f3d8; end: 108e4f3df; -[SCGenericImageStickerView infoType] */

undefined8 FUN_108e4f3d8(void)

{
  return 0x13;
}



/* Entry: 108e4f3e0; end: 108e4f3fb; -[SCGenericImageStickerView intrinsicSize] */

undefined1  [16]
FUN_108e4f3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e4f3fc; end: 108e4f3ff; -[SCGenericImageStickerView encodeWithCoder:] */

void FUN_108e4f3fc(void)

{
  return;
}



/* Entry: 108e4f400; end: 108e4f423; -[SCGenericImageStickerView copyWithZone:] */

undefined8 FUN_108e4f400(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e4f424; end: 108e4f42b; -[SCGenericImageStickerView scaleLimit] */

undefined8 FUN_108e4f424(void)

{
  return 0;
}



/* Entry: 108e4f42c; end: 108e4f4cb; -[SCGenericImageStickerView tappableElementBounds] */

void FUN_108e4f42c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010beca940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010beca920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010befa120(puVar1,param_2,param_1);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e4f4cc; end: 108e4f5a3; -[SCGenericImageStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f4cc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + _DAT_11277c574) == 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_11277c57c);
    _objc_retain(puVar2);
  }
  else {
    puVar1 = param_1;
    func_0x00010be1aa00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
    }
    puVar2 = PTR_PTR_1126bb2a0;
    _objc_alloc(PTR_PTR_1126bb2a0);
    func_0x00010c01bf60();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e4f5a4; end: 108e4f5b3; -[SCGenericImageStickerView didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c57c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108e4f5b4; end: 108e4f5c3; -[SCGenericImageStickerView willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f5b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c57c),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108e4f5c4; end: 108e4f5cb; -[SCGenericImageStickerView animatedStickerImageFuture] */

undefined8 FUN_108e4f5c4(void)

{
  return 0;
}



/* Entry: 108e4f5cc; end: 108e4f69b; -[SCGenericImageStickerView animatedStickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f5cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11277c57c);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2720;
  _objc_opt_class(PTR_PTR_1126b2720);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010bf03580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108e4f69c; end: 108e4f6ab; -[SCGenericImageStickerView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c57c),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108e4f6ac; end: 108e4f6bb; -[SCGenericImageStickerView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c57c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108e4f6bc; end: 108e4fa0f; -[SCGenericImageStickerView _generateAnimatedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4f6bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_11277c57c;
  uVar10 = *(ulong *)(param_1 + lVar13);
  _objc_retain(uVar10);
  uVar2 = uVar10;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2720;
  _objc_opt_class(PTR_PTR_1126b2720);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar12);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c3d50;
  puVar12 = (undefined *)0x0;
  if (uVar10 != 0 && uVar1 != 0) {
    func_0x00010bf03580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bf67520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b9658;
    _objc_alloc(PTR_PTR_1126b9658);
    func_0x00010c055880();
    func_0x00010c08cdc0(param_1);
    puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010bf20c00(param_1);
    func_0x00010c0469e0(puVar6);
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    lVar11 = (long)_DAT_11277c574;
    puVar12 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar11));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar13));
    puVar12 = puVar4;
    func_0x00010bfb6b20();
    if (puVar12 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        puVar8 = puVar4;
        func_0x00010bfb6920();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar7);
        _objc_retain(puVar8);
        puVar9 = puVar6;
        func_0x00010bfe91c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160(puVar8);
        func_0x00010bef9200(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar8);
        puVar12 = puVar12 + 1;
        puVar8 = puVar4;
        func_0x00010bfb6b20();
      } while (puVar12 < puVar8);
    }
    puVar12 = PTR_PTR_1126b2720;
    puVar8 = puVar5;
    func_0x00010bf92d00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108e4fa10; end: 108e4fa5f;  */

void FUN_108e4fa10(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e4fa60; end: 108e4fb07; -[SCGenericImageStickerView _tappableElementBoundsForStickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4fa60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = (long)_DAT_11277c57c;
  func_0x00010beca980(param_3,param_4,*(undefined8 *)(param_3 + lVar1));
  uVar2 = *(undefined8 *)(param_3 + lVar1);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11277c578);
  uVar4 = param_1;
  uVar5 = param_2;
  func_0x00010bf345e0(uVar2);
  func_0x00010bf512a0(uVar3,param_4,param_3);
  func_0x00010beca960(param_3,param_4,uVar2);
  _objc_alloc(PTR_PTR_1126d91a8);
  func_0x00010c005f40(0,param_1,param_2,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4fb08; end: 108e4fbf3; -[SCGenericImageStickerView _tappableElementBoundsForPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4fb08(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  lVar3 = (long)_DAT_11277c58c;
  if (*(long *)(param_5 + lVar3) != 0) {
    func_0x00010beca980();
    uVar1 = *(undefined8 *)(param_5 + lVar3);
    uVar2 = *(undefined8 *)(param_5 + _DAT_11277c574);
    dVar4 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(uVar1);
    func_0x00010bf512a0(uVar2,param_6,param_5);
    func_0x00010beca960(param_5,param_6,uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar3);
    dVar5 = dVar4;
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    _objc_release(uVar1);
    _objc_alloc(PTR_PTR_1126d91a8);
    func_0x00010c005f40(dVar5 / param_4,param_1,param_2,dVar4,uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4fbf4; end: 108e4fc4b; -[SCGenericImageStickerView _tappableElementSizeForView:] */

undefined1  [16]
FUN_108e4fbf4(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(param_7);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  param_3 = param_3 / param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  auVar1._8_8_ = param_4 / param_1;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e4fc4c; end: 108e4fc97; -[SCGenericImageStickerView _tappableElementCenterForView:viewCenter:] */

undefined1  [16] FUN_108e4fc4c(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 / dVar1;
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  auVar2._8_8_ = param_2 / dVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108e4fc98; end: 108e4fca7; -[SCGenericImageStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e4fc98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c590);
}



/* Entry: 108e4fca8; end: 108e4fcb7; -[SCGenericImageStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4fca8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c590) = param_3;
  return;
}



/* Entry: 108e4fcb8; end: 108e4fcc7; -[SCGenericImageStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4fcb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c56c);
}



/* Entry: 108e4fcc8; end: 108e4fcd7; -[SCGenericImageStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4fcc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c558);
}



/* Entry: 108e4fcd8; end: 108e4fdd7; -[SCGenericImageStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4fcd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c558,0);
  _objc_storeStrong(param_1 + _DAT_11277c56c,0);
  _objc_storeStrong(param_1 + _DAT_11277c588,0);
  _objc_storeStrong(param_1 + _DAT_11277c58c,0);
  _objc_storeStrong(param_1 + _DAT_11277c574,0);
  _objc_storeStrong(param_1 + _DAT_11277c584,0);
  _objc_storeStrong(param_1 + _DAT_11277c580,0);
  _objc_storeStrong(param_1 + _DAT_11277c57c,0);
  _objc_storeStrong(param_1 + _DAT_11277c578,0);
  _objc_storeStrong(param_1 + _DAT_11277c570,0);
  _objc_storeStrong(param_1 + _DAT_11277c564,0);
  _objc_storeStrong(param_1 + _DAT_11277c568,0);
  _objc_storeStrong(param_1 + _DAT_11277c560,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c55c,0);
  return;
}



/* Entry: 108e4fdd8; end: 108e4ff07; +[SCMetaSticker giphyMetaStickerWithInteractiveStickerPillType:] */

void FUN_108e4fdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110efba58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  puVar3 = puVar2;
  func_0x000109201970();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar2,param_2,puVar4,0,puVar1,param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d4fb0;
  _objc_alloc(PTR_PTR_1126d4fb0);
  func_0x00010c061ce0();
  func_0x00010c23d620();
  puVar4 = PTR_PTR_1126dc2c0;
  _objc_alloc(PTR_PTR_1126dc2c0);
  puVar5 = PTR_PTR_1126ba878;
  func_0x00010c0f0a00(PTR_PTR_1126ba878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0560e0(puVar4,param_2,7,&PTR____CFConstantStringClassReference_110efba38,puVar5,
                      puVar3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e4ff08; end: 108e50043;  */

void FUN_108e4ff08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126dc2c8;
  _objc_opt_new(PTR_PTR_1126dc2c8);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  func_0x00010c1deae0(puVar2);
  _objc_release(param_1);
  func_0x00010c1b0980(puVar2);
  func_0x00010c1ac500(puVar4);
  func_0x00010c196600(puVar3);
  func_0x00010c1b5d40(puVar1);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1debc0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e50044; end: 108e50113; -[SCPollsStickerView initWithPoll:isDynamicSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e50044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126feba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277c594;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + (long)_DAT_11277c598) = (char)param_4;
    uVar2 = param_3;
    FUN_108e4ff08(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c59c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c59c) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb1240(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e50114; end: 108e50163; -[SCPollsStickerView initForStickerPicker] */

undefined1 * FUN_108e50114(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126feba0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb12e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e50164; end: 108e50247; -[SCPollsStickerView initWithPoll:results:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e50164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126feba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277c594;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c598) = 1;
    uVar2 = param_3;
    FUN_108e4ff08(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c59c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c59c) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb1240(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e50248; end: 108e503c7; -[SCPollsStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e50248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126feba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c103540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c5a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c5a0) = puVar4;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_11277c59c;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c5a4) = 1;
    uVar5 = uVar2;
    func_0x00010c1032c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c594);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c594) = uVar5;
    _objc_release(uVar6);
    uVar5 = uVar2;
    func_0x00010c071080();
    *(char *)((long)puVar1 + (long)_DAT_11277c598) = (char)uVar5;
    func_0x00010beb1240(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


