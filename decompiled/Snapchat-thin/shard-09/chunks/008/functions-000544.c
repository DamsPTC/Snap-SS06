/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107214ae4; end: 107214c13; -[SCGalleryStorySaver storeStoryWithClientID:storyData:completion:] */

void FUN_107214ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107214c14; end: 107214d2b;  */

void FUN_107214c14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44740(uVar1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107214d2c;
    puStack_50 = &UNK_110890070;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x00010c1d0500(uVar5,param_2,uVar6,0,uVar2,puVar4,&puStack_68);
    _objc_release(puVar4);
    _objc_release(uStack_48);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107214d2c; end: 107214d43;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107214d2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x000107c61174(lVar2);
    func_0x000107c4a02c();
    if ((int)puVar1 == 0) {
      func_0x0001000d77b8();
      func_0x000107c61180();
    }
    else {
      func_0x0001005855a8();
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107214d44; end: 107215153; -[SCGalleryStorySaver storeStoryWithClientID:originalVideo:overlayFormat:sojuOverlay:assetMedias:sojuMediaType:servletMediaFormat:completion:] */

void FUN_107214d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x107214ed4;
  puStack_b0 = &UNK_110976e28;
  uStack_88 = param_9;
  uStack_70 = param_10;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_80 = param_7;
  lStack_78 = param_1;
  uStack_68 = param_8;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107215154; end: 10721516b;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_107215154(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x000107c61174(lVar2);
    func_0x000107c4a02c();
    if ((int)puVar1 == 0) {
      func_0x0001000d77b8();
      func_0x000107c61180();
    }
    else {
      func_0x0001005855a8();
      func_0x000107c61180();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10721516c; end: 1072153f7; -[SCGalleryStorySaver _flattenVideoFromMedia:requestContexts:isSpectaclesVideo:isCircular:completionBlock:] */

void FUN_10721516c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10721527c;
  puStack_78 = &UNK_110993300;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_7;
  uStack_58 = param_5;
  uStack_57 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010c11d620(uVar1,param_2,param_3,param_4,&puStack_90);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_7);
  return;
}



/* Entry: 1072153f8; end: 10721540b;  */

void FUN_1072153f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107215408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 10721540c; end: 1072156fb; -[SCGalleryStorySaver _flattenVideoData:overlayImage:isSpectaclesVideo:isCircular:isOverlayPreblended:completionBlock:] */

void FUN_10721540c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,int param_7,undefined8 param_8,ulong param_9
                  ,undefined *param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  if (param_6 == (undefined *)0x0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1072156fc;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_10);
    puStack_68 = param_10;
    _objc_retain(param_5);
    uStack_70 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_70);
    param_6 = puStack_68;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c0082a0();
    puVar2 = PTR_PTR_1126b0010;
    func_0x00010c29b200(PTR_PTR_1126b0010);
    if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x10721587c;
      puStack_c8 = &UNK_110849530;
      _objc_retain(param_10);
      puStack_c0 = param_10;
      func_0x0001000d76cc("APPSTORE",&puStack_e0);
      puVar4 = puStack_c0;
    }
    else {
      puVar3 = param_6;
      if (((param_9 & 1) == 0) && (param_7 != 0)) {
        func_0x00010854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,param_6,0,0,
                            param_8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_6);
        puVar2 = param_6;
      }
      func_0x00010853f31c();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf58fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x0001080009e8();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c1104a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c29aec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221d20(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      func_0x00010c1d75e0(puVar4);
      func_0x00010c1a8660(puVar4);
      func_0x00010c16bc20(puVar4);
      func_0x00010c222080(param_1 / param_2,puVar4);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107215710;
      puStack_a0 = &UNK_1109908b8;
      _objc_retain(param_10);
      puStack_98 = param_10;
      func_0x00010bfae700(puVar4);
      _objc_release(puStack_98);
      param_6 = puVar3;
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_release(param_5);
  return;
}



/* Entry: 1072156fc; end: 10721570f;  */

void FUN_1072156fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107215710; end: 107215853;  */

void FUN_107215710(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107215854;
    puStack_48 = &UNK_11084aaa8;
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    lVar1 = lStack_38;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107215868;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_70 = param_3;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
    lVar1 = lStack_70;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107215854; end: 10721588f;  */

void FUN_107215854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107215864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107215890; end: 107215963; -[SCGalleryStorySaver _galleryTempAssetURLForClientIdSnapComponent:] */

void FUN_107215890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ea2e18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfad300(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107215964; end: 107215a37; -[SCGalleryStorySaver _galleryTempOverlayURLForClientId:] */

void FUN_107215964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ea2e38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfad300(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107215a38; end: 107215b2b; -[SCGalleryStorySaver _galleryTempURLForClientId:type:] */

void FUN_107215a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = param_3;
  _objc_retain();
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa1c4();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea2e58;
  if ((int)param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea2e78;
  }
  func_0x00010c14de00(puVar4,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfad300(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107215b2c; end: 107215c77; -[SCGalleryStorySaver generateLegacyStorySnap:completion:] */

void FUN_107215b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0dff40(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107215c78; end: 107215d93;  */

void FUN_107215c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107215d94;
  puStack_68 = &UNK_110857fd0;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = param_4;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107215d94; end: 107215dcb;  */

void FUN_107215d94(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107215dcc; end: 10721677f; -[SCGalleryStorySaver _handleFetchedStoryData:story:completion:] */

void FUN_107215dcc(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d5348;
  _objc_alloc_init();
  uVar2 = param_4;
  FUN_107216780(param_4,0);
  func_0x00010c2b3b00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_1072168e0(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b84e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = param_1;
  func_0x00010bdf5e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab360(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26f000(param_4);
  func_0x00010c2acb40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ed100(param_4);
  func_0x00010c2b5080(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c073a00();
  func_0x00010c2b9b80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c1048c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3020(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bfed740(param_4);
  func_0x00010c2afc60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar5 = uVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba680(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    func_0x00010c2ba680(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c074980();
  if ((int)uVar3 != 0) {
    uVar3 = param_4;
    func_0x00010bf0e960(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010b5f7060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8b60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  uVar3 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010be1a500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010be1a4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if ((int)uVar2 - 1U < 2) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0899c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar8);
    _objc_release(puVar9);
    _objc_release(uVar8);
  }
  func_0x00010c2b5140(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = param_4;
    func_0x00010c074fe0();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(&puStack_a8,param_1);
      uVar2 = param_4;
      FUN_1071ea420();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010bf3cfc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010b26c050(uVar3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07f180();
      func_0x00010c06e920(param_4);
      _objc_retain(puVar6);
      _objc_retain(puVar1);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_copyWeak(auStack_128,&puStack_a8);
      _objc_retain(puVar7);
      func_0x00010be17fe0(param_1);
      _objc_release(uVar14);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_128);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_destroyWeak(&puStack_a8);
      goto LAB_1072166e8;
    }
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_107216b84;
    puStack_108 = &UNK_11097ded0;
    _objc_retain(puVar6);
    puStack_100 = puVar6;
    _objc_retain(puVar1);
    puStack_f8 = puVar1;
    _objc_retain(param_4);
    uStack_f0 = param_4;
    _objc_retain(param_5);
    lStack_e8 = param_5;
    _objc_retain(&puStack_120);
    puStack_a8 = puVar9;
    ppuStack_a0 = (undefined **)0xc2000000;
    uStack_98 = 0x10721d06c;
    pcStack_90 = (code *)&UNK_1109935e0;
    ppuStack_88 = &puStack_120;
    FUN_1071dc40c(param_4,&puStack_a8);
    _objc_release(ppuStack_88);
    _objc_release(lStack_e8);
    _objc_release(uStack_f0);
    _objc_release(puStack_f8);
    puVar9 = puStack_100;
LAB_1072166e4:
    _objc_release(puVar9);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar10 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0ed680();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c14e060();
    _objc_release(puVar11);
    if (((ulong)puVar13 & 1) == 0) {
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 == (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c0899c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar8);
        _objc_release(puVar11);
        _objc_release(uVar8);
        (**(code **)(param_5 + 0x10))(param_5,0,1);
        _objc_release(puVar10);
        goto LAB_1072166e4;
      }
    }
    puVar11 = puVar10;
    func_0x00010c0c6c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 != (undefined *)0x0) {
      FUN_107216780(param_4,puVar10);
      func_0x00010c2b3b00(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = puVar10;
    func_0x00010c15fa20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 != (undefined *)0x0) {
      uVar2 = param_4;
      FUN_1072168e0(param_4,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b84e0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    puVar11 = puVar10;
    func_0x00010c130540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar10;
      func_0x00010c130540(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060();
      _objc_release(puVar11);
      func_0x00010c2b6da0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = param_1;
    func_0x00010be86980();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      puStack_a8 = (undefined *)0x0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_1072169e4;
      ppuStack_88 = (undefined **)0x1072169f4;
      puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      ppuStack_a0 = &puStack_a8;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      puStack_80 = puVar13;
      func_0x00010bf00d20(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1072169fc;
      puStack_c8 = &UNK_1109933b0;
      puStack_c0 = param_1;
      _objc_retain(param_4);
      uStack_b8 = param_4;
      ppuStack_b0 = &puStack_a8;
      func_0x00010bf97e80(puVar12);
      _objc_release(puVar12);
      puVar13 = ppuStack_a0[5];
      func_0x00010bf51e00(puVar13);
      func_0x00010c2a8820(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(uStack_b8);
      __Block_object_dispose(&puStack_a8,8);
      _objc_release(puStack_80);
    }
    puVar13 = puVar10;
    func_0x00010c246660();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined *)0x0) {
      uVar2 = param_4;
      func_0x00010bf0d6a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9ae0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c2b9ae0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar13);
    puVar13 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar13,1);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
LAB_1072166e8:
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107216780; end: 1072168df;  */

ulong FUN_107216780(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar4 = param_1;
  func_0x00010c074fe0();
  if (((uVar4 & 1) == 0) &&
     ((param_2 == 0 || (uVar4 = param_1, func_0x00010bf03740(), uVar4 != 0xffffffffae0560f8)))) {
    uVar4 = param_1;
    func_0x00010c06e840();
    if ((int)uVar4 == 0) {
      uVar4 = param_1;
      func_0x00010c07f180();
      uVar3 = 5;
      if ((int)uVar4 == 0) {
        uVar3 = 1;
      }
      uVar4 = param_2;
      func_0x00010c0c6c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = param_2;
        func_0x00010c0c6c20();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c067ec0();
        uVar3 = (uint)uVar2;
        _objc_release(uVar4);
      }
      uVar1 = 0xe;
      if (uVar3 != 5) {
        uVar1 = uVar3;
      }
      uVar4 = (ulong)uVar1;
    }
    else {
      uVar4 = param_1;
      func_0x00010c083400();
      uVar3 = 0x19;
      if ((int)uVar4 == 0) {
        uVar3 = 0x1a;
      }
      uVar4 = (ulong)uVar3;
    }
  }
  else {
    uVar4 = param_1;
    func_0x00010c06e800();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010c07f0e0();
      uVar3 = 10;
      if ((int)uVar4 == 0) {
        uVar3 = 0;
      }
      uVar4 = (ulong)uVar3;
      uVar2 = param_2;
      func_0x00010c0c6c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 != 0) {
        uVar2 = param_2;
        func_0x00010c0c6c20(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c067ec0();
        _objc_release(uVar2);
      }
    }
    else {
      uVar4 = 0x18;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1072168e0; end: 1072169e3;  */

void FUN_1072168e0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar4 = param_2;
    func_0x00010c15fa20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar1 = param_2;
      func_0x00010c15fa20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      func_0x00010b77c6b4(0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar4);
      if ((uVar3 & 1) == 0) {
        uVar4 = param_2;
        func_0x00010c15fa20(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1072169a4;
      }
    }
  }
  uVar4 = param_1;
  func_0x00010c074fe0();
  if ((uVar4 & 1) == 0) {
    uVar4 = 0xffffffff9f128b37;
  }
  else {
    uVar4 = 0xffffffffa9fc90cc;
  }
  func_0x00010b77c6b4(uVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_1072169a4:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1072169e4; end: 1072169fb;  */

void FUN_1072169e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1072169fc; end: 107216a8b;  */

void FUN_1072169fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0bc920(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107216a8c; end: 107216b7f;  */

void FUN_107216a8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf3cfc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bf0b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf0b760(param_2);
  _objc_release(param_2);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107216b80; end: 107216b83;  */

void FUN_107216b80(void)

{
  return;
}



/* Entry: 107216b84; end: 107216d13;  */

void FUN_107216b84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x107216d28;
    puStack_80 = &UNK_110849530;
    lVar3 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar3);
    lStack_78 = lVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    param_2 = lStack_78;
  }
  else {
    _UIImagePNGRepresentation(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060();
    func_0x00010c2b6da0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf0d6a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9ae0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107216d14;
    puStack_58 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uStack_50 = uVar2;
    uStack_48 = uVar4;
    _objc_retain(uVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107216d14; end: 107216d3b;  */

void FUN_107216d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107216d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107216d3c; end: 10721709b;  */

void FUN_107216d3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_107217140;
    puStack_110 = &UNK_1109933e0;
    lVar7 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lStack_108 = lVar7;
    _objc_retain(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_100 = uVar6;
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uStack_f8 = uVar8;
    _objc_retain(uVar6);
    uStack_e8 = uVar6;
    _objc_copyWeak(auStack_e0,param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    ppuVar3 = &puStack_128;
    uStack_f0 = uVar6;
    _objc_retainBlock(ppuVar3);
    FUN_1071dc1c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    lVar7 = lStack_108;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    func_0x00010c0d1580();
    lVar7 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar2);
    if (lVar7 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf0d6a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9ae0(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar8);
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10721709c;
      puStack_80 = &UNK_11084aaa8;
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar6);
      lStack_78 = lVar5;
      uStack_70 = uVar6;
      _objc_retain(lVar5);
      func_0x0001000d76cc("APPSTORE",&puStack_98);
      _objc_release(lStack_78);
      _objc_release(uStack_70);
    }
    else {
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1072170b0;
      puStack_c0 = &UNK_110857fd0;
      _objc_retain(lVar7);
      lStack_b8 = lVar7;
      _objc_copyWeak(auStack_a0,param_1 + 0x48);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uStack_b0 = uVar8;
      _objc_retain(uVar6);
      uStack_a8 = uVar6;
      func_0x0001000d76cc("APPSTORE",&puStack_d8);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_destroyWeak(auStack_a0);
      lVar5 = lStack_b8;
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10721709c; end: 1072170af;  */

void FUN_10721709c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072170ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1072170b0; end: 10721713f;  */

void FUN_1072170b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0899c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107217140; end: 10721733f;  */

void FUN_107217140(long param_1,int param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_4 != 0)) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107217354;
    puStack_98 = &UNK_110857fd0;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_copyWeak(auStack_78,param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uStack_88 = uVar4;
    _objc_retain(uVar3);
    uStack_80 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_b0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
    lVar2 = lStack_90;
  }
  else {
    if (param_3 != 0) {
      func_0x00010c14e060(param_3);
      func_0x00010c2b6da0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf0d6a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9ae0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107217340;
    puStack_58 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    lStack_50 = lVar2;
    uStack_48 = uVar3;
    _objc_retain(lVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
    _objc_release(uStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107217340; end: 107217353;  */

void FUN_107217340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107217350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107217354; end: 1072173e3;  */

void FUN_107217354(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0899c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1072173e4; end: 10721755f; -[SCGalleryStorySaver generateStorySnap:storyId:completion:] */

void FUN_1072173e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0dff40(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107217560; end: 1072175b7;  */

void FUN_107217560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1c020();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072175b8; end: 1072178c3; -[SCGalleryStorySaver _generateStorySnapWithData:storySnap:storyId:completion:] */

void FUN_1072175b8(long param_1,undefined1 *param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d5348;
  _objc_opt_new();
  lVar2 = param_4;
  func_0x0001084d261c();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_90,param_1);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1072178c4;
      puStack_c8 = &UNK_110993470;
      _objc_retain(param_4);
      lStack_c0 = param_4;
      _objc_retain(puVar1);
      param_2 = auStack_90;
      puStack_b8 = puVar1;
      _objc_copyWeak(auStack_98);
      _objc_retain(param_3);
      lStack_b0 = param_3;
      _objc_retain(param_5);
      uStack_a8 = param_5;
      _objc_retain(param_6);
      ppuVar3 = &puStack_e0;
      uStack_a0 = param_6;
      _objc_retainBlock();
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar3);
      _objc_retain(param_4);
      func_0x00010bfaa4c0(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar3);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(lStack_b0);
      _objc_destroyWeak(auStack_98);
      _objc_release(puStack_b8);
      _objc_release(lStack_c0);
      _objc_destroyWeak(auStack_90);
      goto LAB_107217834;
    }
  }
  func_0x00010be1c000(param_1);
LAB_107217834:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126cf0e0;
  if (param_2 != (undefined1 *)0x0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf5bbc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c045c20(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    puVar5 = puVar1;
    func_0x00010b5f7060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8b60(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  param_3 = param_3 + 0x48;
  _objc_loadWeakRetained(param_3);
  func_0x00010be1c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072178c4; end: 1072179c7;  */

void FUN_1072178c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126cf0e0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5bbc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c045c20(puVar1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = puVar1;
    func_0x00010b5f7060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8b60(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072179c8; end: 107217a47;  */

void FUN_1072179c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf5bbc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107217a48; end: 1072180d7; -[SCGalleryStorySaver _generateStorySnapWithData:storySnap:storyId:builder:completion:] */

void FUN_107217a48(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_4;
  FUN_1072180d8(param_4,0);
  func_0x00010c2b3b00(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x0001072183c4(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b84e0(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab360(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c2acb40(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  FUN_1072184f0(param_4);
  func_0x00010c2b5080(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_107218530();
  func_0x00010c2b9b80(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bf30da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x0001084d2a14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3020(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071060();
  func_0x00010c2afc60(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba680(param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010c2ba680(param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be1a500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be1a4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if ((int)puVar1 - 1U < 2) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c0899c0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar7);
    _objc_release(lVar8);
    _objc_release(uVar7);
  }
  func_0x00010c2b5140(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar1 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c27dd80();
    if (((undefined *)0x19 < puVar2 + 1) || ((1L << ((ulong)(puVar2 + 1) & 0x3f) & 0x36de5fdU) == 0)
       ) {
      _objc_release(puVar1);
      func_0x00010be1bfa0(param_1);
      goto LAB_107218018;
    }
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x000107d22a6c(param_4,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010b26c050(param_5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    FUN_1072185ec();
    _objc_initWeak(auStack_68,param_1);
    puVar2 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(lVar5);
    _objc_retain(lVar6);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010be17fe0(param_1);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar1;
    func_0x00010bf67000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c040(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_107218018:
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1072180d8; end: 1072184ef;  */

int FUN_1072180d8(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  if (lVar5 == 0x16) {
    bVar2 = false;
  }
  else {
    lVar5 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27dd80();
    bVar2 = lVar6 - 0x19U < 0xfffffffffffffffe;
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  if ((0x19 < lVar5 + 1U) || ((1L << (lVar5 + 1U & 0x3f) & 0x36de5fdU) == 0)) {
    _objc_release(lVar4);
LAB_1072181d0:
    lVar4 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    if (lVar5 + 1U < 0x1a) {
      iVar3 = *(int *)(&UNK_10de205f8 + (lVar5 + 1U) * 4);
    }
    else {
      iVar3 = 10;
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c0c6c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_2;
      func_0x00010c0c6c20(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c067ec0();
      iVar3 = (int)lVar5;
      _objc_release(lVar4);
    }
    if (!bVar2) {
      iVar3 = 0x18;
    }
    goto LAB_107218378;
  }
  if (param_2 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar5 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf03740();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 == 1) goto LAB_1072181d0;
  }
  lVar4 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  iVar7 = 0xe;
  uVar1 = lVar5 + 1;
  if (uVar1 < 0x1a) {
    if ((1L << (uVar1 & 0x3f) & 0x2db59bbU) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0x404U) != 0) goto LAB_107218268;
    }
    else {
      uVar1 = lVar5 + 1;
      if ((uVar1 < 0x19) && ((0x1b6bd77U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
LAB_107218268:
        iVar7 = 1;
      }
      else if (uVar1 < 0xb) {
        iVar7 = *(int *)(&UNK_10de20660 + uVar1 * 4);
      }
    }
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010c0c6c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067ec0();
    iVar7 = (int)lVar5;
    _objc_release(lVar4);
  }
  iVar3 = 0xe;
  if (iVar7 != 5) {
    iVar3 = iVar7;
  }
  if (!bVar2) {
    lVar4 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    if (lVar5 + 1U < 0x1a) {
      iVar3 = *(int *)(&UNK_10de2068c + (lVar5 + 1U) * 4);
    }
    else {
      iVar3 = 0x19;
    }
    _objc_release(lVar4);
  }
LAB_107218378:
  _objc_release(param_2);
  _objc_release(param_1);
  return iVar3;
}



/* Entry: 1072184f0; end: 10721852f;  */

long FUN_1072184f0(long param_1)

{
  long lVar1;
  
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0ed100();
  _objc_release(param_1);
  if (lVar1 != 2) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 107218530; end: 1072185eb;  */

bool FUN_107218530(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = param_1;
    func_0x00010c12fc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c247520();
    bVar1 = lVar6 == 1;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1072185ec; end: 107218657;  */

uint FUN_1072185ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c27dd80(lVar1);
  _objc_release(lVar1);
  return (uint)(0x19 < lVar2 + 1U) | 0xffac0U >> (ulong)((uint)(lVar2 + 1U) & 0x1f) & 1;
}



/* Entry: 107218658; end: 1072186ff;  */

void FUN_107218658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be1bfc0(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107218700; end: 107218bdb; -[SCGalleryStorySaver _generateStorySnapWithGalleryStoryData:storySnap:mediaUrl:overlayUrl:builder:completion:] */

void FUN_107218700(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c0ed680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14e060();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010c0899c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f0c0(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar8);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107218bdc;
      puStack_78 = &UNK_110849530;
      lStack_70 = param_8;
      _objc_retain(param_8);
      func_0x0001000d76cc("APPSTORE",&puStack_90);
      lVar5 = lStack_70;
      goto LAB_107218ad8;
    }
  }
  uVar1 = param_3;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    FUN_1072180d8(param_4,param_3);
    func_0x00010c2b3b00(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  func_0x00010c15fa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar6 = param_4;
    func_0x0001072183c4(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b84e0(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  uVar1 = param_3;
  func_0x00010c130540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c130540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060();
    _objc_release(uVar1);
    func_0x00010c2b6da0(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar4 = param_1;
  func_0x00010be86980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1072169e4;
    uStack_a0 = 0x1072169f4;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_b8 = &uStack_c0;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    puStack_98 = puVar3;
    func_0x00010bf00d20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_107218bf0;
    puStack_e0 = &UNK_1109933b0;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    lStack_d0 = param_1;
    puStack_c8 = &uStack_c0;
    func_0x00010bf97e80(lVar5);
    _objc_release(lVar5);
    uVar6 = puStack_b8[5];
    func_0x00010bf51e00(uVar6);
    func_0x00010c2a8820(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(puStack_98);
  }
  uVar1 = param_3;
  func_0x00010c246660();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar6 = param_4;
    func_0x00010c12fc80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9ae0(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
  }
  else {
    func_0x00010c2b9ae0(param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107218d8c;
  puStack_110 = &UNK_11084aaa8;
  lStack_100 = param_8;
  _objc_retain(param_7);
  uStack_108 = param_7;
  _objc_retain(param_8);
  func_0x0001000d76cc("APPSTORE",&puStack_128);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  lVar5 = param_8;
  param_8 = lVar4;
LAB_107218ad8:
  _objc_release(lVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107218bdc; end: 107218bef;  */

void FUN_107218bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107218bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,1);
  return;
}



/* Entry: 107218bf0; end: 107218c7b;  */

void FUN_107218bf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bc920(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107218c7c; end: 107218d87;  */

void FUN_107218c7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf3cf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be1a4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf0b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060();
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf0b760(param_2);
  _objc_release(param_2);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107218d88; end: 107218d8b;  */

void FUN_107218d88(void)

{
  return;
}



/* Entry: 107218d8c; end: 107218dcf;  */

void FUN_107218d8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107218dd0; end: 107219073; -[SCGalleryStorySaver _generateStorySnapFromImageSnap:storyId:mediaUrl:builder:completion:] */

void FUN_107218dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x107218ee0;
  puStack_68 = &UNK_11097ded0;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_3;
  uStack_48 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010be85380(param_1,param_2,param_3,param_4,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107219074; end: 1072190b7;  */

void FUN_107219074(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1072190b8; end: 1072190cb;  */

void FUN_1072190b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072190c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1072190cc; end: 1072193f3; -[SCGalleryStorySaver _generateStorySnapFromVideoData:url:storySnap:storyId:mediaUrl:overlayUrl:builder:completion:] */

void FUN_1072190cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_4 == 0) {
    func_0x00010be1bfe0(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    func_0x00010c0d1580();
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar2);
    if (lVar1 == 0) {
      uVar3 = param_5;
      func_0x00010c12fc80(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9ae0(param_9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1072193f4;
      puStack_80 = &UNK_11084aaa8;
      _objc_retain(param_10);
      uStack_70 = param_10;
      uStack_78 = uVar3;
      _objc_retain(uVar3);
      func_0x0001000d76cc("APPSTORE",&puStack_98);
      _objc_release(uStack_78);
      _objc_release(uStack_70);
      _objc_release(uVar3);
    }
    else {
      _objc_initWeak(auStack_a0,param_1);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_107219408;
      puStack_c8 = &UNK_110857fd0;
      _objc_retain(lVar1);
      lStack_c0 = lVar1;
      _objc_copyWeak(auStack_a8,auStack_a0);
      _objc_retain(param_7);
      uStack_b8 = param_7;
      _objc_retain(param_10);
      uStack_b0 = param_10;
      func_0x0001000d76cc("APPSTORE",&puStack_e0);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_destroyWeak(auStack_a8);
      _objc_release(lStack_c0);
      _objc_destroyWeak(auStack_a0);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1072193f4; end: 107219407;  */

void FUN_1072193f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107219404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107219408; end: 107219497;  */

void FUN_107219408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0899c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107219498; end: 1072196f3; -[SCGalleryStorySaver _generateStorySnapFromVideoSnap:storyId:mediaUrl:overlayUrl:builder:completion:] */

void FUN_107219498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1072196f4;
  puStack_b0 = &UNK_110853a30;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_98 = param_3;
  lStack_90 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_8;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  ppuVar2 = &puStack_c8;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_5;
  func_0x00010845c614(param_5,1,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1072199d8;
  puStack_d8 = &UNK_1108539d0;
  uStack_d0 = uVar3;
  _objc_retain();
  ppuVar4 = &puStack_f0;
  _objc_retainBlock(ppuVar4);
  uVar5 = param_3;
  func_0x000107d22a6c(param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010b26c050(param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d620();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_d0);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 1072196f4; end: 107219933;  */

void FUN_1072196f4(long param_1,int param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_4 != 0)) {
    _objc_initWeak(auStack_88,*(undefined8 *)(param_1 + 0x38));
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107219948;
    puStack_b0 = &UNK_110857fd0;
    _objc_retain(param_4);
    lStack_a8 = param_4;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = uVar4;
    _objc_retain(uVar3);
    uStack_98 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_c8);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_88);
  }
  else {
    if (param_3 != 0) {
      func_0x00010c14e060(param_3);
      func_0x00010c2b6da0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c12fc80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9ae0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107219934;
    puStack_68 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    uStack_60 = uVar3;
    uStack_58 = uVar4;
    _objc_retain(uVar3);
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_60);
    _objc_release(uStack_58);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107219934; end: 107219947;  */

void FUN_107219934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107219944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107219948; end: 1072199d7;  */

void FUN_107219948(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0899c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1072199d8; end: 107219a7f;  */

void FUN_1072199d8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27f2a0(param_3);
  _objc_release(param_3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,param_2 == 2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107219a80; end: 107219b13; -[SCGalleryStorySaver cleanupStorySnap:] */

void FUN_107219a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ed6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0899c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107219b14; end: 107219c43; -[SCGalleryStorySaver _creationDateForSavedCopyOfStory:] */

void FUN_107219b14(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf59920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c293200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = param_3;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2709c0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c293200();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010bfb73c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf59980();
    func_0x00010bf655e0((double)(long)puVar3 / 1000.0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107219c44; end: 107219d4b; -[SCGalleryStorySaver _reassembleAssetDataPackageWithAssetMedias:] */

void FUN_107219c44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c23f420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107219d4c;
    puStack_40 = &UNK_1109934f0;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010bf97e80(lVar2,param_2,&puStack_58);
    _objc_release(lVar2);
    _objc_release(puStack_38);
  }
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107219d4c; end: 107219df7;  */

void FUN_107219d4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4ba8;
  _objc_retain(param_2);
  func_0x00010bf0b0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0b760(param_2);
  _objc_release(param_2);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107219df8; end: 107219e93; -[SCGalleryStorySaver saveStorySnapToMemoriesWithStorySnap:storyId:completion:] */

void FUN_107219df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107219e94;
  puStack_40 = &UNK_110993520;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010be99f00(param_1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 107219e94; end: 107219eaf;  */

void FUN_107219e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000107219eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 107219eb0; end: 107219f4b; -[SCGalleryStorySaver saveStorySnapToMemTwoWithStorySnap:storyId:completion:] */

void FUN_107219eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107219f4c;
  puStack_40 = &UNK_110993520;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010be99f00(param_1,param_2,param_3,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 107219f4c; end: 10721a08f;  */

void FUN_107219f4c(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 0) {
LAB_107219ff4:
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_6 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_6);
      goto LAB_10721a05c;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    puVar1 = (undefined *)0x0;
    puVar5 = puVar2;
  }
  else {
    puVar2 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) goto LAB_107219ff4;
    lVar4 = *(long *)(param_1 + 0x20);
    puVar1 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar5 = puVar1;
  }
  (*pcVar3)(lVar4,puVar1,puVar2);
  _objc_release(puVar5);
LAB_10721a05c:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10721a090; end: 10721a0cf; -[SCGalleryStorySaver isMemTwoStorySaveEnabled] */

undefined8 FUN_10721a090(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0c7640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7600();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10721a0d0; end: 10721a1cf; -[SCGalleryStorySaver saveStoryToMemTwoWithTitle:snapIds:completion:] */

void FUN_10721a0d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c14b3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10721a1d0;
  puStack_50 = &UNK_1108a9f90;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c297260(uVar1,param_2,&puStack_68,0);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 10721a1d0; end: 10721a29b;  */

void FUN_10721a1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10721a29c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar1;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10721a29c; end: 10721a2af;  */

void FUN_10721a29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721a2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10721a2b0; end: 10721a437; -[SCGalleryStorySaver _saveStorySnap:storyId:completion:] */

void FUN_10721a2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x00010c0dff40(uVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721a438; end: 10721a4e3;  */

void FUN_10721a438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  if ((lVar1 + 1U < 0x1a) && ((0x921a02U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1) == 0)) {
    func_0x00010be69340(lVar2,param_2,param_4);
  }
  else {
    func_0x00010be69320(lVar2,param_2,param_4,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10721a4e4; end: 10721a68b; -[SCGalleryStorySaver saveStorySnapToMemoriesWithStorySnap:prefetchedMediaData:completion:] */

void FUN_10721a4e4(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10721a68c;
  puStack_60 = &UNK_110993520;
  _objc_retain(param_5);
  ppuVar3 = &puStack_78;
  uStack_58 = param_5;
  _objc_retainBlock(ppuVar3);
  lVar1 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c27dd80();
  if ((lVar4 + 1U < 0x1a) && ((1L << (lVar4 + 1U & 0x3f) & 0x36de5fdU) != 0)) {
    _objc_release(lVar1);
    func_0x00010be6c580(param_1,param_2,param_3,param_4,0,ppuVar3);
    puVar5 = param_4;
  }
  else {
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010be698a0(param_1,param_2,param_3,puVar5,lVar2,ppuVar3);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10721a68c; end: 10721a6a7;  */

void FUN_10721a68c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010721a6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10721a6a8; end: 10721a9db; -[SCGalleryStorySaver _onFetchedSavedStoryImage:storySnap:storyId:snapComponentId:completionHandler:] */

void FUN_10721a6a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010be85380(param_1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = puVar3;
    func_0x00010c0ed680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c130540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0ef880(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c246660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be86980(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &PTR____CFConstantStringClassReference_110ea00d8;
    FUN_10721a9dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be992c0(param_1);
    _objc_release(ppuVar11);
    _objc_release(lVar1);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721a9dc; end: 10721aad7;  */

void FUN_10721a9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2220;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec3558,param_1,puVar2
                      ,0,0,0,0);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10721aad8; end: 10721ac03; -[SCGalleryStorySaver _queryImageForStorySnap:storyId:completion:] */

void FUN_10721aad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000107d22a6c(param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010b26c050(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c11d620(uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10721ac04; end: 10721ad1b;  */

void FUN_10721ac04(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_2 == 2) {
    lVar1 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = (undefined *)0x0;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c23fc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = puVar2;
    }
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10721ad1c;
  puStack_48 = &UNK_11084aaa8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_40 = puVar4;
  uStack_38 = uVar3;
  _objc_retain(puVar4);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_40);
  _objc_release(uStack_38);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721ad1c; end: 10721ad2b;  */

void FUN_10721ad1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10721ad2c; end: 10721ae8b; -[SCGalleryStorySaver _onImageQueriedForStorySnap:image:snapComponentId:completionHandler:] */

void FUN_10721ad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10721ae8c;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    uVar1 = uStack_58;
  }
  else {
    uVar1 = param_3;
    func_0x00010c12fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110ea00b8;
    FUN_10721a9dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be992c0(param_1);
    _objc_release(ppuVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721ae8c; end: 10721aef7;  */

void FUN_10721ae8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ea2d98,
                      &PTR____CFConstantStringClassReference_110ea2ed8,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10721aef8; end: 10721b447; -[SCGalleryStorySaver _saveImageStorySnap:galleryData:image:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:] */

void FUN_10721aef8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  long param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_d8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_7);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0c7600();
  _objc_release(uVar3);
  if ((int)uVar7 == 0) {
    FUN_107218530();
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    FUN_1072180d8(param_4,param_5);
    puVar1 = param_4;
    func_0x0001072183c4(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1072184f0();
    puVar5 = param_4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    puVar8 = param_4;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c1048c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x0001084d2a14();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    puVar11 = param_4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071060();
    _objc_retain(param_13);
    func_0x00010c14b200(param_1,uVar7);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar11);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar7);
    lVar4 = param_13;
  }
  else {
    FUN_1072185ec(param_4);
    lVar4 = param_2;
    func_0x00010be18000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(param_6);
    if (lVar4 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_13 + 0x10))(param_13,0,0,0,0,puVar1);
    }
    else {
      puVar5 = *(undefined **)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puStack_d8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = param_4;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      puVar9 = param_4;
      func_0x00010c26f2a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071060();
      puVar10 = param_4;
      func_0x00010bf30da0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c1048c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar11;
      func_0x0001084d2a14();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbd540();
      FUN_107218530(param_4);
      puVar1 = puVar5;
      func_0x00010c14b1e0(param_1,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      if (puVar2 == (undefined *)0x0) {
        _objc_release(puStack_d8);
      }
      _objc_release(puVar5);
      func_0x00010bdd57e0(param_2);
    }
    _objc_release(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10721b448; end: 10721b467;  */

void FUN_10721b448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010721b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10721b468; end: 10721b9bf; -[SCGalleryStorySaver _onFetchedSavedStoryVideo:storySnap:storyId:snapComponentId:completionHandler:] */

void FUN_10721b468(undefined **param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_b8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    lVar5 = param_4;
    func_0x000107d22a6c(param_4,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010b26c050(param_5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    FUN_1072185ec(param_4);
    _objc_initWeak(auStack_70,param_1);
    lVar6 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_4);
    _objc_retain(param_7);
    func_0x00010be17fe0(param_1);
    _objc_release(lVar6);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar7);
    _objc_release(lVar5);
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    ppuVar2 = ppuVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf03740();
    _objc_release(lVar5);
    ppuStack_b8 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    ppuVar8 = ppuVar2;
    if (lVar6 == 1) {
      func_0x00010c0ed680(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = (undefined **)param_1[7];
      func_0x00010c0ef840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = ppuVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_e0 = ppuVar2;
      func_0x00010c130540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuStack_d8;
      func_0x00010c0ef880(ppuStack_d8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar2;
      func_0x00010c246660(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_1;
      func_0x00010be86980(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea00d8;
      FUN_10721a9dc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be992c0(param_1);
      _objc_release(ppuVar4);
    }
    else {
      func_0x00010c0ed680(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b8 = (undefined **)param_1[7];
      func_0x00010c0ef840();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuStack_b8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = ppuVar2;
      func_0x00010c130540();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_e0 = ppuVar3;
      func_0x00010c0ef880();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar2;
      func_0x00010c246660();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_1;
      func_0x00010be86980();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110ea2f18;
      FUN_10721a9dc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9a420(param_1);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuStack_e0);
    _objc_release(ppuStack_d8);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_b8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721b9c0; end: 10721ba2b;  */

void FUN_10721b9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c580();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10721ba2c; end: 10721bd1f; -[SCGalleryStorySaver _onVideoFlattenedForStorySnap:data:videoURL:completionHandler:] */

void FUN_10721ba2c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_6;
  _objc_retain(param_6);
  if (param_4 == 0) {
    if (param_5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,0,0,0,puVar6);
    }
    else {
      func_0x0001080009e8();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c112160();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c29af20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = param_3;
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea2f58;
      FUN_10721a9dc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9a420(param_1);
      _objc_release(ppuVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar1 == (undefined *)0x0) {
        _objc_release(puStack_68);
      }
      _objc_release(puVar1);
    }
  }
  else {
    puVar6 = param_3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = param_3;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea2f38;
    FUN_10721a9dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9a420(param_1);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar1);
    }
  }
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10721bd20; end: 10721c1cb; -[SCGalleryStorySaver _saveVideoStorySnap:galleryData:data:videoProvider:storySnapId:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:] */

void FUN_10721bd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  long param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7600();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be9a440(param_1);
    goto LAB_10721c120;
  }
  lVar3 = param_1;
  func_0x00010bee8960();
  _objc_retainAutoreleasedReturnValue();
  FUN_1072185ec(param_3);
  if (lVar3 == 0) {
    lVar6 = 0;
LAB_10721bf30:
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_14 + 0x10))(param_14,0,0,0,0,puVar4);
    _objc_release(puVar4);
  }
  else {
    lVar6 = param_1;
    func_0x00010bee8cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10721c1cc;
      puStack_80 = &UNK_1109935b0;
      _objc_retain(param_6);
      lStack_78 = param_6;
      _objc_retain(param_14);
      lStack_70 = param_14;
      ppuVar5 = &puStack_98;
      _objc_retainBlock(ppuVar5);
      lVar6 = param_1;
      func_0x00010be5ef20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd57e0(param_1);
      _objc_release(lVar6);
      _objc_release(ppuVar5);
      _objc_release(lStack_70);
      lVar6 = lStack_78;
    }
    else {
      if (param_5 == 0) goto LAB_10721bf30;
      _objc_initWeak(auStack_a0,param_1);
      uVar2 = param_3;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_copyWeak(auStack_a8,auStack_a0);
      _objc_retain(param_14);
      _objc_retain(param_3);
      func_0x00010be17fc0(param_1);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_release(param_14);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
    }
  }
  _objc_release(lVar6);
  _objc_release(lVar3);
LAB_10721c120:
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10721c1cc; end: 10721c1d7;  */

void FUN_10721c1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721c1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10721c1d8; end: 10721c46b;  */

void FUN_10721c1d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  puVar1 = auStack_58;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    lVar8 = *(long *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,0,0,0,0,puVar4);
    goto LAB_10721c410;
  }
  puVar4 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = auStack_58;
    _objc_loadWeakRetained();
    puVar6 = puVar5;
    func_0x00010bee8960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) goto LAB_10721c3b0;
LAB_10721c26c:
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10721c46c;
    puStack_70 = &UNK_1109935b0;
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = param_3;
    _objc_retain(uVar7);
    ppuVar2 = &puStack_88;
    uStack_60 = uVar7;
    _objc_retainBlock(ppuVar2);
    puVar1 = auStack_58;
    _objc_loadWeakRetained(puVar1);
    _objc_retain();
    puVar3 = puVar1;
    func_0x00010be5ef20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd57e0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_60);
    puVar5 = puStack_68;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bdc2c00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) goto LAB_10721c26c;
LAB_10721c3b0:
    lVar8 = *(long *)(param_1 + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,0,0,0,0,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_10721c410:
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10721c46c; end: 10721c477;  */

void FUN_10721c46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721c474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10721c478; end: 10721c797; -[SCGalleryStorySaver _saveVideoStorySnapViaLegacyMutator:galleryData:data:videoProvider:storySnapId:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:] */

void FUN_10721c478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain();
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_107218530();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1072180d8(param_3,param_4);
  uVar1 = param_3;
  func_0x0001072183c4(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  FUN_1072184f0();
  uVar4 = param_3;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001084d2a14();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbd540();
  uVar8 = param_3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c071060();
  _objc_retain();
  func_0x00010c14b320(uVar3);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_14);
  _objc_release(param_14);
  _objc_release(uVar2);
  return;
}



/* Entry: 10721c798; end: 10721c7b7;  */

void FUN_10721c798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010721c7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10721c7b8; end: 10721c973; -[SCGalleryStorySaver _memTwoSaveFutureForVideoAsset:storySnap:] */

void FUN_10721c7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uStack_70 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c071060();
  puVar5 = param_4;
  func_0x00010bf30da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x0001084d2a14();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfbd540();
  puVar10 = param_4;
  FUN_107218530(param_4);
  _objc_release(param_4);
  uVar11 = uVar3;
  func_0x00010c14b300(uVar3,param_2,param_3,uStack_70,puVar4,puVar7,uVar9,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(uStack_70);
  }
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10721c974; end: 10721caa3; -[SCGalleryStorySaver _videoOverlayImageFromOverlayFormat:videoAsset:isCircular:] */

void FUN_10721c974(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_6);
  if (param_5 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain(param_5);
    lVar1 = param_5;
    func_0x00010c1511c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    if (lVar1 == 0 && lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x00010c29b200(PTR_PTR_1126b0010);
      lVar4 = lVar1;
      if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
        if (lVar1 == 0) {
          lVar4 = lVar2;
        }
        _objc_retain(lVar4);
      }
      else {
        lVar3 = lVar1;
        func_0x00010854478c(lVar1,lVar2,0,param_7);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          lVar4 = lVar2;
        }
        if (lVar3 != 0) {
          lVar4 = lVar3;
        }
        _objc_retain(lVar4);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10721caa4; end: 10721cb2b; -[SCGalleryStorySaver _bridgeMemTwoSaveFuture:toCompletionHandler:] */

void FUN_10721caa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10721cb2c;
  puStack_30 = &UNK_1108dd148;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(param_3,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10721cb2c; end: 10721cce3;  */

void FUN_10721cb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10721cbf8;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  uStack_40 = param_3;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10721cce4; end: 10721cd6f; -[SCGalleryStorySaver _videoAssetFromData:videoProvider:] */

void FUN_10721cce4(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 == (undefined *)0x0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = param_4;
      func_0x00010c0d9500(param_4);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c0082a0();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10721cd70; end: 10721cfb7; -[SCGalleryStorySaver _flattenedImageForImage:overlayFormat:isCircular:] */

void FUN_10721cd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,int param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_10721cf0c;
  }
  puVar5 = param_5;
  if (param_6 == (undefined *)0x0) {
    _objc_retain(param_5);
    goto LAB_10721cf0c;
  }
  puVar2 = param_6;
  func_0x00010c1511c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_6;
  func_0x00010c0c5d00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_6;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      _objc_retain();
      _objc_release(puVar3);
      goto LAB_10721ce28;
    }
    puVar4 = param_6;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar3 = param_6;
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      puVar3 = puVar4;
    }
    _objc_release(puVar4);
    _objc_release(0);
    bVar1 = puVar3 != (undefined *)0x0;
    if (puVar2 != (undefined *)0x0 || puVar3 != (undefined *)0x0) goto LAB_10721ce34;
    _objc_retain(param_5);
  }
  else {
LAB_10721ce28:
    bVar1 = true;
LAB_10721ce34:
    if (param_7 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      if (bVar1) {
        func_0x00010befa120(puVar4);
      }
      if (puVar2 != (undefined *)0x0) {
        func_0x00010befa120(puVar4);
      }
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c23d0a0(param_5);
      func_0x00010bfe6d00(param_1,param_2,0x3ff0000000000000,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      func_0x00010c23d0a0(param_5);
      puVar5 = puVar2;
      func_0x00010854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,puVar2,puVar3,
                          param_5,1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_10721cf0c:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


