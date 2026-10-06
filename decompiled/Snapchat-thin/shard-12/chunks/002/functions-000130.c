/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e58998; end: 108e589bb; -[SCGroupInviteSticker copyWithZone:] */

undefined8 FUN_108e58998(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e589bc; end: 108e58a2b; -[SCGroupInviteSticker toProtoBase64] */

void FUN_108e589bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e58a2c; end: 108e58adf; +[SCGroupInviteSticker withProtoBase64:] */

void FUN_108e58a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff6b20();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126dc2e8;
    _objc_alloc();
    func_0x00010c008360();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126dc2f0;
      _objc_alloc(PTR_PTR_1126dc2f0);
      func_0x00010c03b860();
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e58ae0; end: 108e58aeb; -[SCGroupInviteSticker .cxx_destruct] */

void FUN_108e58ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e58aec; end: 108e58c67; -[SCGroupInviteStickerView setSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277c688);
  *(undefined8 *)(param_1 + _DAT_11277c688) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110efbc98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  uVar4 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar2,param_2,uVar4,0,puVar1,0);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  func_0x00010c20eaa0();
  func_0x00010c23d620(puVar3);
  lVar5 = (long)_DAT_11277c68c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar4);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c19f0e0(param_1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(param_3);
  func_0x00010c069fa0(param_1);
  func_0x00010c23d100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e40();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e58c68; end: 108e58c6f; -[SCGroupInviteStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_108e58c68(void)

{
  return 0;
}



/* Entry: 108e58c70; end: 108e58c77; -[SCGroupInviteStickerView scaleLimit] */

undefined8 FUN_108e58c70(void)

{
  return 0;
}



/* Entry: 108e58c78; end: 108e58d0b; -[SCGroupInviteStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108e58c78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_11277c688);
}



/* Entry: 108e58d0c; end: 108e58d1b; -[SCGroupInviteStickerView sticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58d0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c688);
}



/* Entry: 108e58d1c; end: 108e58d5b; -[SCGroupInviteStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58d1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c688,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c68c,0);
  return;
}



/* Entry: 108e58d5c; end: 108e58f1b; -[SCInfoStickerDataProvider initWithWeather:altitude:timestamp:batteryStatus:stickerPreferenceAdaptor:] */

undefined1 *
FUN_108e58d5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126febe0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    if (param_5 != 0) {
      lVar3 = param_5;
      func_0x00010bf64de0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be522c0(puVar1);
      _objc_release(lVar3);
      func_0x00010bea7f40(puVar1);
    }
    if (param_3 != 0) {
      func_0x00010bea7f40(puVar1);
    }
    if (param_4 != 0) {
      lVar3 = param_4;
      func_0x00010bf51e00(param_4);
      func_0x00010bea7f40(puVar1);
      _objc_release(lVar3);
    }
    if (param_6 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea7f40(puVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e58f1c; end: 108e58fd7; -[SCInfoStickerDataProvider initWithDataSource:includeBatterySticker:stickerPreferenceAdaptor:] */

undefined1 *
FUN_108e58f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126febe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    func_0x00010c2868c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e58fd8; end: 108e58ffb; -[SCInfoStickerDataProvider getWeather] */

void FUN_108e58fd8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e58ffc; end: 108e5903f; -[SCInfoStickerDataProvider getUVIndex] */

undefined8 FUN_108e58ffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c294d80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e59040; end: 108e59063; -[SCInfoStickerDataProvider getAltitude] */

void FUN_108e59040(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4a78);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e59064; end: 108e590b7; -[SCInfoStickerDataProvider getBatteryStatus] */

ulong FUN_108e59064(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110efbcb8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c282760(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e590b8; end: 108e590c3; -[SCInfoStickerDataProvider getTimeStamp] */

void FUN_108e590b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be22f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStoredDictionaryValueFromKey_112566580,
             &PTR____CFConstantStringClassReference_110dc1558);
  return;
}



/* Entry: 108e590c4; end: 108e590cf; -[SCInfoStickerDataProvider getVenuesInfo] */

void FUN_108e590c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be22f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStoredDictionaryValueFromKey_112566580,
             &PTR____CFConstantStringClassReference_110efbcd8);
  return;
}



/* Entry: 108e590d0; end: 108e592ff; -[SCInfoStickerDataProvider infoFiltersState] */

undefined * FUN_108e590d0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfcc320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfc2420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfc2f40();
  func_0x00010bfcb380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f27438;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = lVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&ppuStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar5;
    func_0x00010befa120(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  if (lVar4 != 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f27498;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010befa120(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  if (param_1 != 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f27418;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_80 = param_1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_80,&ppuStack_88,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar5;
    func_0x00010befa120(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  if (lVar3 != 0) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f274b8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_90 = lVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_90,&ppuStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar5;
    func_0x00010befa120(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar3 = lVar2;
  func_0x00010be22f80(lVar2,param_2,&PTR____CFConstantStringClassReference_110ef5758);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bea7f40(lVar2,param_2,&PTR____CFConstantStringClassReference_110ef5758,param_3);
    uVar7 = *(undefined8 *)(lVar2 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar7,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return (undefined *)(ulong)(lVar3 == 0);
}



/* Entry: 108e59300; end: 108e593af; -[SCInfoStickerDataProvider updateWeatherSticker:] */

bool FUN_108e59300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return lVar1 == 0;
}



/* Entry: 108e593b0; end: 108e59473; -[SCInfoStickerDataProvider updateAltitudeSticker:] */

bool FUN_108e593b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4a78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4a78,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return lVar1 == 0;
}



/* Entry: 108e59474; end: 108e594eb; -[SCInfoStickerDataProvider updateTimestampSticker:] */

void FUN_108e59474(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf64de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be522c0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1558,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 108e594ec; end: 108e5958f; -[SCInfoStickerDataProvider updateVenueSticker:] */

long FUN_108e594ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_108e59590();
  if ((int)lVar1 != 0) {
    func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110efbcd8,param_3);
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 == 3) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 108e59590; end: 108e595ff;  */

bool FUN_108e59590(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c252440();
    if ((lVar2 == 3) || (lVar2 = param_1, func_0x00010c252440(), lVar2 == 2)) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010c252440(param_1);
      bVar1 = lVar2 == 1;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108e59600; end: 108e59847; -[SCInfoStickerDataProvider updateInfoStickerDataFromSnapDocEditor:] */

ulong FUN_108e59600(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
      _objc_release(uVar3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x00010bf5cc00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0cc820();
      _objc_release(uVar9);
      _objc_release(param_2);
      return (ulong)((int)uVar10 == 3);
    }
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar3);
      }
      uVar5 = param_3;
      func_0x00010c0ff640();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = uVar8;
      func_0x00010bfedf40();
      iVar2 = (int)uVar6;
      uVar6 = uVar8;
      if (iVar2 < 5) {
        if (iVar2 == 3) {
          func_0x00010c2a2e20(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde8f20(param_1);
          goto LAB_108e597bc;
        }
        if (iVar2 == 4) {
          func_0x00010bf654e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde8f00(param_1);
          goto LAB_108e597bc;
        }
      }
      else {
        if (iVar2 == 5) {
          func_0x00010bf01fa0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde8ec0(param_1);
        }
        else {
          if (iVar2 != 10) goto LAB_108e597c4;
          func_0x00010bf17860(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bde8ee0(param_1);
        }
LAB_108e597bc:
        _objc_release(uVar6);
      }
LAB_108e597c4:
      _objc_release(uVar8);
      _objc_release(uVar5);
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
    uVar4 = uVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108e59848; end: 108e598ab;  */

bool FUN_108e59848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 3;
}



/* Entry: 108e598ac; end: 108e59acb; -[SCInfoStickerDataProvider updateInfoStickerDataFromDataSource:includeBatterySticker:] */

void FUN_108e598ac(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c2868a0(param_3);
    lVar1 = param_1;
    func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010c2a2c20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_3;
      func_0x00010bf17720();
    }
    lVar3 = param_3;
    func_0x00010bf01f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c297e80();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar5;
    _objc_release(uVar7);
    _os_unfair_lock_unlock(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar6 = lVar1;
      func_0x00010bf64de0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be522c0(param_1,param_2,lVar6);
      _objc_release(lVar6);
      func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1558,lVar1);
    }
    if (lVar2 != 0) {
      func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef5758,lVar2);
    }
    if (lVar3 != 0) {
      lVar6 = lVar3;
      func_0x00010bf51e00(lVar3);
      func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4a78,lVar6);
      _objc_release(lVar6);
    }
    if (lVar8 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110efbcb8,puVar5);
      _objc_release(puVar5);
    }
    lVar8 = lVar4;
    FUN_108e59590();
    if ((int)lVar8 != 0) {
      func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110efbcd8,lVar4);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e59acc; end: 108e59af3; -[SCInfoStickerDataProvider infoStickerFinishedLoadingObservable] */

void FUN_108e59acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e59af4; end: 108e59b6b; -[SCInfoStickerDataProvider _getStoredDictionaryValueFromKey:] */

void FUN_108e59af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e59b6c; end: 108e59be7; -[SCInfoStickerDataProvider _setStoredDictionaryKey:value:] */

void FUN_108e59b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_4,param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e59be8; end: 108e59c53; -[SCInfoStickerDataProvider _convertAndSetBatterySticker:] */

void FUN_108e59be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bab40;
  func_0x00010c098a00(param_3);
  func_0x00010bdc21e0(puVar1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110efbcb8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e59c54; end: 108e59d1b; -[SCInfoStickerDataProvider _convertAndSetAltitudeSticker:] */

void FUN_108e59c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126bab40;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c3fc0(param_3);
  func_0x00010bdc2080(puVar2,param_2,uVar1);
  puVar3 = PTR_PTR_1126bab40;
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010bdc20c0(puVar3,param_2,uVar1);
  puVar4 = PTR_PTR_1126d2768;
  _objc_alloc(PTR_PTR_1126d2768);
  uVar1 = param_3;
  func_0x00010bf01f00(param_3);
  _objc_release(param_3);
  func_0x00010bff2c20((double)(int)uVar1,puVar4,param_2,puVar2,puVar3);
  func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4a78,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108e59d1c; end: 108e59eeb; -[SCInfoStickerDataProvider _convertAndSetDateTimeSticker:] */

void FUN_108e59d1c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar2 = param_3;
  func_0x00010c26f000(param_3);
  func_0x00010c052380((double)lVar2 / 1000.0,puVar1);
  lVar2 = param_3;
  func_0x00010c270d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c270d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fda0(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (puVar4 != (undefined *)0x0) goto LAB_108e59e2c;
  }
  puVar5 = param_1;
  func_0x00010be22f80(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c26fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108e59e2c:
  puVar6 = PTR_PTR_1126d2760;
  _objc_alloc(PTR_PTR_1126d2760);
  puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009540(puVar6,param_2,puVar1,puVar5,puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126bab40;
  lVar2 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010bdc28c0(puVar5,param_2,lVar2);
  func_0x00010c21acc0(puVar6,param_2,puVar5);
  func_0x00010be522c0(param_1,param_2,puVar1);
  func_0x00010bea7f40(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1558,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e59eec; end: 108e5a0af; -[SCInfoStickerDataProvider _convertAndSetWeatherSticker:] */

void FUN_108e59eec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be22f80(param_2,param_3,&PTR____CFConstantStringClassReference_110ef5758);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = -1;
  }
  else {
    lVar7 = lVar1;
    func_0x00010c294d80(lVar1);
  }
  puVar3 = PTR_PTR_1126bab40;
  func_0x00010bf34540(param_4);
  func_0x00010bf9faa0(puVar3);
  puVar3 = PTR_PTR_1126bab40;
  uVar2 = param_4;
  uVar8 = param_1;
  func_0x00010bfe47e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246800(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bab40;
  uVar2 = param_4;
  func_0x00010bf632a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2464c0(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bab40;
  uVar2 = param_4;
  func_0x00010c27dd80(param_4);
  func_0x00010c2467e0(puVar5,param_3,uVar2);
  puVar6 = PTR_PTR_1126d2758;
  _objc_alloc(PTR_PTR_1126d2758);
  func_0x00010bf34540(param_4);
  uVar2 = param_4;
  func_0x00010c09f000(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bffd3e0(uVar8,param_1,puVar6,param_3,lVar7,uVar2,puVar3,puVar4,puVar5);
  _objc_release(uVar2);
  func_0x00010bea7f40(param_2,param_3,&PTR____CFConstantStringClassReference_110ef5758,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e5a0b0; end: 108e5a127; -[SCInfoStickerDataProvider _logDateTimeWithDate:] */

void FUN_108e5a0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c189b60();
  puVar2 = puVar1;
  func_0x00010c25d400(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e5a128; end: 108e5a15f; -[SCInfoStickerDataProvider .cxx_destruct] */

void FUN_108e5a128(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e5a160; end: 108e5a28b;  */

void FUN_108e5a160(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfcc320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfc2420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfc2f40();
  lVar5 = param_1;
  func_0x00010bfcb380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27438);
  }
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27498);
  }
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27418);
  }
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f274b8);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e5a28c; end: 108e5a4cb;  */

undefined1 *
FUN_108e5a28c(long param_1,undefined8 param_2,undefined *param_3,undefined ***param_4,
             undefined8 param_5)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  float fVar20;
  double dVar21;
  long lStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined ***pppuStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_120;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfcc320();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bfc2420();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bfc2f40();
  lVar4 = param_1;
  func_0x00010bfcb380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar3 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f27438;
    param_4 = &ppuStack_68;
    param_5 = 1;
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = lVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010befa120(puVar2);
    _objc_release(puVar18);
  }
  if (lVar16 != 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f27498;
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    param_4 = &ppuStack_78;
    param_5 = 1;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar18;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar5;
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar18);
  }
  if (lVar4 != 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f27418;
    param_4 = &ppuStack_88;
    param_5 = 1;
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_80 = lVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010befa120(puVar2);
    _objc_release(puVar18);
  }
  if (lVar19 != 0) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f274b8;
    param_4 = &ppuStack_98;
    param_5 = 1;
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_90 = lVar19;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010befa120(puVar2);
    _objc_release(puVar18);
  }
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_108e5a4cc;
    lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain();
    uStack_218 = param_2;
    _objc_retain(param_2);
    puStack_220 = param_3;
    _objc_retain(param_3);
    pppuStack_240 = param_4;
    _objc_retain(param_4);
    uStack_248 = param_5;
    _objc_retain(param_5);
    dVar21 = 0.0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_238 = lVar3;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    lStack_200 = lVar3;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      puStack_230 = (undefined *)0x0;
      puStack_228 = (undefined *)0x0;
      puStack_208 = (undefined *)0x0;
      puVar18 = (undefined *)0x0;
    }
    else {
      puStack_230 = (undefined *)0x0;
      puStack_228 = (undefined *)0x0;
      puVar18 = (undefined *)0x0;
      lVar19 = *plStack_1d0;
      puStack_208 = (undefined *)0x0;
      lStack_210 = lVar19;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1d0 != lVar19) {
            _objc_enumerationMutation(lStack_200);
          }
          lVar17 = *(long *)(lStack_1d8 + lVar16 * 8);
          lVar4 = lVar17;
          func_0x00010c27dde0();
          if (lVar4 == 0x73b7c3d4) {
            puVar2 = PTR_PTR_1126d2758;
            _objc_alloc();
            lVar19 = lVar17;
            func_0x00010c2a2c20();
            _objc_retainAutoreleasedReturnValue();
            lStack_1e8 = lVar19;
            func_0x00010bf345a0();
            dVar21 = (double)(ulong)(uint)(float)(int)lVar19;
            lVar19 = lVar17;
            func_0x00010c2a2c20();
            _objc_retainAutoreleasedReturnValue();
            lStack_1f0 = lVar19;
            func_0x00010bf9fa80();
            lVar4 = lVar17;
            func_0x00010c2a2c20(lVar17);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar4;
            puStack_1f8 = puVar18;
            func_0x00010c09f000();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar17;
            func_0x00010c2a2c20(lVar17);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bfe4800();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar17;
            func_0x00010c2a2c20(lVar17);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010bf632c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a2c20(lVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29e680();
            func_0x00010bffd3e0(dVar21,(float)(int)lVar19);
            _objc_release(puStack_1f8);
            _objc_release(lVar17);
            _objc_release(lVar9);
            _objc_release(lVar8);
            lVar19 = lStack_210;
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar11);
            _objc_release(lVar4);
            _objc_release(lStack_1f0);
            lVar17 = lStack_1e8;
            puVar18 = puVar2;
LAB_108e5a82c:
            _objc_release(lVar17);
          }
          else {
            lVar4 = lVar17;
            func_0x00010c27dde0();
            if (lVar4 == 0x1fe7ae) {
              puVar2 = PTR_PTR_1126d2760;
              _objc_alloc();
              puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
              func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
              func_0x00010c26fda0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c009540();
              _objc_release(puStack_208);
              _objc_release(puVar10);
              _objc_release(puVar5);
              func_0x00010bf64de0(lVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c27dde0();
              func_0x00010c21acc0(puVar2);
              puStack_208 = puVar2;
              goto LAB_108e5a82c;
            }
            lVar4 = lVar17;
            func_0x00010c27dde0();
            puVar2 = PTR_PTR_1126bab40;
            if (lVar4 == 0x170d39ed) {
              func_0x00010bf17400(lVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c098a20();
              func_0x00010bdc2200();
              puStack_230 = puVar2;
              goto LAB_108e5a82c;
            }
            lVar4 = lVar17;
            func_0x00010c27dde0();
            fVar20 = SUB84(dVar21,0);
            if (lVar4 == -0x57f6c55e) {
              puVar5 = PTR_PTR_1126d2768;
              _objc_alloc();
              lVar4 = lVar17;
              func_0x00010bf01f00();
              _objc_retainAutoreleasedReturnValue();
              lStack_1e8 = lVar4;
              func_0x00010bf01f00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              puVar2 = PTR_PTR_1126bab40;
              dVar21 = (double)fVar20;
              lVar11 = lVar17;
              func_0x00010bf01f00(lVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c280800();
              func_0x00010bdc20a0(puVar2);
              puVar2 = PTR_PTR_1126bab40;
              func_0x00010bf01f00(lVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c27dde0();
              func_0x00010bdc20e0(puVar2);
              func_0x00010bff2c20(dVar21);
              _objc_release(puStack_228);
              _objc_release(lVar17);
              _objc_release(lVar11);
              _objc_release(lVar4);
              lVar17 = lStack_1e8;
              puStack_228 = puVar5;
              goto LAB_108e5a82c;
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar3 != lVar16);
        lVar3 = lStack_200;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lStack_200);
    puVar2 = PTR_PTR_1126d4de0;
    _objc_alloc();
    puVar10 = puStack_208;
    puVar5 = puStack_228;
    pppuVar1 = pppuStack_240;
    puVar13 = puVar18;
    puVar14 = puStack_228;
    func_0x00010c062ac0();
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar18);
    _objc_release(uStack_248);
    _objc_release(pppuVar1);
    _objc_release(puStack_220);
    _objc_release(uStack_218);
    lVar3 = lStack_238;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
      ___stack_chk_fail();
      plVar12 = &lStack_290;
      puStack_280 = puVar10;
      puStack_278 = puVar5;
      pppuStack_270 = pppuVar1;
      pcStack_258 = FUN_108e5aa18;
      puStack_268 = puVar2;
      ppuStack_260 = &puStack_b0;
      _objc_retain(puVar13);
      _objc_retain(puVar14);
      puStack_288 = PTR_PTR_1126febe8;
      lStack_290 = lVar3;
      _objc_msgSendSuper2(&lStack_290,PTR_s_init_1125d9248);
      if (plVar12 != (long *)0x0) {
        puVar2 = PTR_PTR_1126dc2f8;
        _objc_alloc();
        func_0x00010c03e680();
        uVar15 = *(undefined8 *)((long)plVar12 + 0x10);
        *(undefined **)((long)plVar12 + 0x10) = puVar2;
        _objc_release(uVar15);
        _objc_storeWeak((undefined1 *)((long)plVar12 + 8),puVar13);
      }
      _objc_release(puVar14);
      _objc_release(puVar13);
      return (undefined1 *)plVar12;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 108e5a4cc; end: 108e5aa17;  */

undefined1 *
FUN_108e5a4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_178 = param_2;
  _objc_retain(param_2);
  uStack_180 = param_3;
  _objc_retain(param_3);
  uStack_1a0 = param_4;
  _objc_retain(param_4);
  uStack_1a8 = param_5;
  _objc_retain(param_5);
  dVar19 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_198 = param_1;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_160 = param_1;
  func_0x00010bf52a60();
  if (param_1 == 0) {
    puStack_190 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
  }
  else {
    puStack_190 = (undefined *)0x0;
    puStack_188 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    lVar17 = *plStack_130;
    puStack_168 = (undefined *)0x0;
    lStack_170 = lVar17;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar17) {
          _objc_enumerationMutation(lStack_160);
        }
        lVar15 = *(long *)(lStack_138 + lVar14 * 8);
        lVar1 = lVar15;
        func_0x00010c27dde0();
        if (lVar1 == 0x73b7c3d4) {
          puVar7 = PTR_PTR_1126d2758;
          _objc_alloc();
          lVar17 = lVar15;
          func_0x00010c2a2c20();
          _objc_retainAutoreleasedReturnValue();
          lStack_148 = lVar17;
          func_0x00010bf345a0();
          dVar19 = (double)(ulong)(uint)(float)(int)lVar17;
          lVar17 = lVar15;
          func_0x00010c2a2c20();
          _objc_retainAutoreleasedReturnValue();
          lStack_150 = lVar17;
          func_0x00010bf9fa80();
          lVar1 = lVar15;
          func_0x00010c2a2c20(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar1;
          puStack_158 = puVar16;
          func_0x00010c09f000();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar15;
          func_0x00010c2a2c20(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfe4800();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar15;
          func_0x00010c2a2c20(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf632c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a2c20(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29e680();
          func_0x00010bffd3e0(dVar19,(float)(int)lVar17);
          _objc_release(puStack_158);
          _objc_release(lVar15);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar17 = lStack_170;
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar9);
          _objc_release(lVar1);
          _objc_release(lStack_150);
          lVar15 = lStack_148;
          puVar16 = puVar7;
LAB_108e5a82c:
          _objc_release(lVar15);
        }
        else {
          lVar1 = lVar15;
          func_0x00010c27dde0();
          if (lVar1 == 0x1fe7ae) {
            puVar7 = PTR_PTR_1126d2760;
            _objc_alloc();
            puVar8 = PTR__OBJC_CLASS___NSLocale_1126af788;
            func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
            func_0x00010c26fda0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c009540();
            _objc_release(puStack_168);
            _objc_release(puVar6);
            _objc_release(puVar8);
            func_0x00010bf64de0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dde0();
            func_0x00010c21acc0(puVar7);
            puStack_168 = puVar7;
            goto LAB_108e5a82c;
          }
          lVar1 = lVar15;
          func_0x00010c27dde0();
          puVar7 = PTR_PTR_1126bab40;
          if (lVar1 == 0x170d39ed) {
            func_0x00010bf17400(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c098a20();
            func_0x00010bdc2200();
            puStack_190 = puVar7;
            goto LAB_108e5a82c;
          }
          lVar1 = lVar15;
          func_0x00010c27dde0();
          fVar18 = SUB84(dVar19,0);
          if (lVar1 == -0x57f6c55e) {
            puVar8 = PTR_PTR_1126d2768;
            _objc_alloc();
            lVar1 = lVar15;
            func_0x00010bf01f00();
            _objc_retainAutoreleasedReturnValue();
            lStack_148 = lVar1;
            func_0x00010bf01f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            puVar7 = PTR_PTR_1126bab40;
            dVar19 = (double)fVar18;
            lVar9 = lVar15;
            func_0x00010bf01f00(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280800();
            func_0x00010bdc20a0(puVar7);
            puVar7 = PTR_PTR_1126bab40;
            func_0x00010bf01f00(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dde0();
            func_0x00010bdc20e0(puVar7);
            func_0x00010bff2c20(dVar19);
            _objc_release(puStack_188);
            _objc_release(lVar15);
            _objc_release(lVar9);
            _objc_release(lVar1);
            lVar15 = lStack_148;
            puStack_188 = puVar8;
            goto LAB_108e5a82c;
          }
        }
        lVar14 = lVar14 + 1;
      } while (param_1 != lVar14);
      param_1 = lStack_160;
      func_0x00010bf52a60();
    } while (param_1 != 0);
  }
  _objc_release(lStack_160);
  puVar6 = PTR_PTR_1126d4de0;
  _objc_alloc();
  puVar8 = puStack_168;
  puVar7 = puStack_188;
  uVar13 = uStack_1a0;
  puVar11 = puVar16;
  puVar12 = puStack_188;
  func_0x00010c062ac0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar16);
  _objc_release(uStack_1a8);
  _objc_release(uVar13);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  lVar17 = lStack_198;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    plVar10 = &lStack_1f0;
    puStack_1e0 = puVar8;
    puStack_1d8 = puVar7;
    uStack_1d0 = uVar13;
    pcStack_1b8 = FUN_108e5aa18;
    puStack_1c8 = puVar6;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puStack_1e8 = PTR_PTR_1126febe8;
    lStack_1f0 = lVar17;
    _objc_msgSendSuper2(&lStack_1f0,PTR_s_init_1125d9248);
    if (plVar10 != (long *)0x0) {
      puVar16 = PTR_PTR_1126dc2f8;
      _objc_alloc();
      func_0x00010c03e680();
      uVar13 = *(undefined8 *)((long)plVar10 + 0x10);
      *(undefined **)((long)plVar10 + 0x10) = puVar16;
      _objc_release(uVar13);
      _objc_storeWeak((undefined1 *)((long)plVar10 + 8),puVar11);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    return (undefined1 *)plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 108e5aa18; end: 108e5aac3; -[SCInfoStickerQuotingActionHandler initWithViewController:replyQuotingCameraScopeLauncher:] */

undefined1 *
FUN_108e5aa18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126febe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dc2f8;
    _objc_alloc();
    func_0x00010c03e680();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e5aac4; end: 108e5ac73; -[SCInfoStickerQuotingActionHandler getStickerImageWithItemInstance:lensQuestionText:messageText:callback:] */

void FUN_108e5aac4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c08fa60();
    lVar4 = param_4;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c11dd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_3;
        func_0x00010c0cc0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c11dd60();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c11ddc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108e5ac74;
    puStack_60 = &UNK_11085b810;
    _objc_retain(param_6);
    lStack_58 = param_6;
    FUN_108e5e6fc(lVar4,param_5,&puStack_78);
    _objc_release(lStack_58);
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e5ac74; end: 108e5acdb;  */

void FUN_108e5ac74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5c98;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e5acdc; end: 108e5aea3; -[SCInfoStickerQuotingActionHandler presentCameraWithProfileId:userId:conversationId:stickerImage:isFanPassStoryReply:pageType:pageTypeSpecific:] */

void FUN_108e5acdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d5c98;
  _objc_opt_class(PTR_PTR_1126d5c98);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108e5aea4;
  puStack_b0 = &UNK_110ac7370;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_80 = param_9;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = uVar1;
  uStack_88 = param_8;
  uStack_70 = param_7;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_c8);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  return;
}



/* Entry: 108e5aea4; end: 108e5af5b;  */

void FUN_108e5aea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4 + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c10f1e0(uVar7,param_2,uVar1,uVar3,uVar2,uVar5,lVar6,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),2,*(undefined1 *)(param_1 + 0x58));
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108e5af5c; end: 108e5af87; -[SCInfoStickerQuotingActionHandler .cxx_destruct] */

void FUN_108e5af5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108e5af88; end: 108e5affb; -[SCInfoStickerQuotingCameraPresenter initWithReplyQuotingCameraScopeLauncher:] */

undefined1 * FUN_108e5af88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126febf0;
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



/* Entry: 108e5affc; end: 108e5b193; -[SCInfoStickerQuotingCameraPresenter presentWithProfileId:userId:conversationId:stickerImage:presentingViewController:pageType:pageTypeSpecific:quotedStickerReplyType:isFanPassStoryReply:] */

void FUN_108e5affc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108e5b194;
  puStack_b8 = &UNK_110864468;
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_68 = param_11;
  uStack_b0 = param_6;
  uStack_a8 = param_4;
  uStack_a0 = param_3;
  uStack_98 = param_7;
  uStack_90 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x000107c312cc("APPSTORE",&puStack_d0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 108e5b194; end: 108e5b33f;  */

void FUN_108e5b194(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126b5b40;
  func_0x00010c11ee00(PTR_PTR_1126b5b40,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b47d0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0750;
  if (*(char *)(param_1 + 0x68) == '\0') {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_alloc(puVar3);
  func_0x00010c03ca00();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  func_0x00010c03e6c0();
  puVar5 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar7 = PTR_PTR_1126b1bb0;
  func_0x00010bfea1a0(PTR_PTR_1126b1bb0,param_2,puVar6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d5c70;
  _objc_alloc(PTR_PTR_1126d5c70);
  func_0x00010c039320();
  func_0x00010c08b7c0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 8),param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e5b340; end: 108e5b343; -[SCInfoStickerQuotingCameraPresenter captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_108e5b340(void)

{
  return;
}



/* Entry: 108e5b344; end: 108e5b38b; -[SCInfoStickerQuotingCameraPresenter dismissCameraScope:] */

void FUN_108e5b344(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 108e5b38c; end: 108e5b397; -[SCInfoStickerQuotingCameraPresenter .cxx_destruct] */

void FUN_108e5b38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e5b398; end: 108e5b41b; +[SCInfoStickerUtils infoTypeForSticker:] */

long FUN_108e5b398(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5210);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  lVar2 = param_3;
  func_0x00010c27dd80();
  lVar3 = 0x19;
  if ((lVar2 == 6) && (lVar1 != 0)) {
    lVar3 = param_3;
    func_0x00010bfee0e0(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e5b41c; end: 108e5b43f; +[SCInfoStickerUtils SOJUGalleryAltitudeInfoFilterTypeFromSCAltitudeViewType:] */

undefined4 FUN_108e5b41c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x273d2d;
  if (param_3 != 1) {
    uVar2 = 0x40758d9;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b440; end: 108e5b463; +[SCInfoStickerUtils SOJUGalleryAltitudeInfoFilterStyleTypeFromSCAltitudeViewType:] */

undefined8 FUN_108e5b440(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x273d2d;
  if (param_3 != 1) {
    uVar2 = 0;
  }
  uVar1 = 0x40758d9;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b464; end: 108e5b487; +[SCInfoStickerUtils SOJUGalleryAltitudeInfoFilterStyleUnitsFromSCAltitudeUnit:] */

undefined8 FUN_108e5b464(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff8758ba0a;
  if (param_3 != 1) {
    uVar2 = 0;
  }
  uVar1 = 0x20ddae;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b488; end: 108e5b4a3; +[SCInfoStickerUtils SOJUGalleryAltitudeInfoFilterUnitsFromSCAltitudeUnit:] */

undefined8 FUN_108e5b488(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x20ddae;
  if ((param_3 & 0xfffffffffffffffd) != 0) {
    uVar1 = 0xffffffff8758ba0a;
  }
  return uVar1;
}



/* Entry: 108e5b4a4; end: 108e5b4c7; +[SCInfoStickerUtils SCAltitudeViewTypeFromSOJUGalleryAltitudeInfoFilterStyleType:] */

undefined8 FUN_108e5b4a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 != 0x273d2d) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_3 != 0x40758d9) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b4c8; end: 108e5b4eb; +[SCInfoStickerUtils SCAltitudeUnitFromSOJUGalleryAltitudeInfoFilterStyleUnits:] */

undefined8 FUN_108e5b4c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 != -0x78a745f6) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_3 != 0x20ddae) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b4ec; end: 108e5b4fb; +[SCInfoStickerUtils SCAltitudeUnitFromSOJUGalleryAltitudeInfoFilterUnits:] */

bool FUN_108e5b4ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0x20ddae;
}



/* Entry: 108e5b4fc; end: 108e5b51f; +[SCInfoStickerUtils SCAltitudeViewTypeFromSOJUGalleryAltitudeInfoFilterType:] */

undefined8 FUN_108e5b4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0x40758d9) {
    uVar1 = 2;
  }
  if (param_3 == 0x273d2d) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108e5b520; end: 108e5b53f; +[SCInfoStickerUtils SCBatteryStatusFromSOJUGalleryBatteryInfoFilterLevel:] */

undefined8 FUN_108e5b520(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 != 0x3f08d2d) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b540; end: 108e5b567; +[SCInfoStickerUtils SCBatteryStatusFromCTPBatteryStickerMetadataLevel:] */

undefined8 FUN_108e5b540(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 2;
  if (param_3 == 1) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b568; end: 108e5b58b; +[SCInfoStickerUtils SOJUGalleryBatteryInfoFilterLevelFromSCBatteryStatus:] */

undefined4 FUN_108e5b568(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f08d2d;
  if (param_3 != 1) {
    uVar2 = 0x211a8f;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b58c; end: 108e5b5db; +[SCInfoStickerUtils SOJUGalleryVenueInfoFilterStyleTypeFromCTPPlaceStickerMetadataType:] */

undefined8 FUN_108e5b58c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x348139;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 2) {
    uVar2 = 0xffffffff882202bc;
  }
  uVar1 = 0xffffffffd1f778b0;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b5dc; end: 108e5b63f; +[SCInfoStickerUtils CTPPlaceStickerMetadataTypeFromSOJUGalleryVenueInfoFilterStyleType:] */

undefined8 FUN_108e5b5dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < -0x2e088750) {
    if (param_3 == -0x77ddfd44) {
      return 2;
    }
    if (param_3 == -0x52738bd4) {
      return 0;
    }
  }
  else {
    if (param_3 == -0x2e088750) {
      return 3;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108e5b640; end: 108e5b65f; +[SCInfoStickerUtils SOJUTypeForTimestampFilterStyle:] */

undefined8 FUN_108e5b640(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return *(undefined8 *)(&UNK_10dfa3b00 + param_3 * 8);
  }
  return 0;
}



/* Entry: 108e5b660; end: 108e5b6af; +[SCInfoStickerUtils SOJUDateInfoFilterTypeForCTPDateTimeStickerType:] */

undefined8 FUN_108e5b660(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x274acd;
  if (param_3 < 1) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 1) {
    uVar2 = 0xffffffffb38fa6ed;
  }
  uVar1 = 0x45eeabef;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b6b0; end: 108e5b6cf; +[SCInfoStickerUtils CTPStoryInviteStickerTypeFromSCStoryInviteStoryType:] */

undefined4 FUN_108e5b6b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return *(undefined4 *)(&UNK_10dfa3b18 + param_3 * 4);
  }
  return 1;
}



/* Entry: 108e5b6d0; end: 108e5b6f7; +[SCInfoStickerUtils SCStoryInviteStoryTypeFromCTPStoryInviteStickerType:] */

undefined8 FUN_108e5b6d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 3;
  if (param_3 == 2) {
    uVar1 = 0;
  }
  uVar2 = 2;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b6f8; end: 108e5b72b; +[SCInfoStickerUtils CTPMentionStickerTypeFromSOJUMentionStickerStyleType:] */

undefined4 FUN_108e5b6f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x2eef76) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 0x3a0799b6) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b72c; end: 108e5b77b; +[SCInfoStickerUtils SOJUMentionStickerStyleTypeFromCTPMentionStickerType:] */

undefined8 FUN_108e5b72c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x6233516;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 2) {
    uVar2 = 0x2eef76;
  }
  uVar1 = 0x3a0799b6;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b77c; end: 108e5b7b3; +[SCInfoStickerUtils weatherStickerMetadataTypeForSOJUWeatherFilterViewType:] */

undefined4 FUN_108e5b77c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0x10212c09) {
    uVar2 = 3;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (param_3 != -0xd50e65f) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108e5b7b4; end: 108e5b803; +[SCInfoStickerUtils sojuWeatherFilterViewTypeForWeatherStickerMetadataType:] */

undefined8 FUN_108e5b7b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x7fbe62ee;
  if (param_3 < 2) {
    if ((param_3 == -0x4524111) || (param_3 == 0)) {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (param_3 == 3) {
    uVar2 = 0x10212c09;
  }
  uVar1 = 0xfffffffff2af19a1;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5b804; end: 108e5b843; +[SCInfoStickerUtils weatherMetadataHourlyForecastForSOJUWeatherHourlyForecasts:] */

void FUN_108e5b804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ac73a0);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5b844; end: 108e5b907;  */

void FUN_108e5b844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bab60;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf34540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c17a640(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224b60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c18ffa0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5b908; end: 108e5b947; +[SCInfoStickerUtils weatherMetadataDailyForecastForSOJUWeatherDailyForecasts:] */

void FUN_108e5b908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ac73c0);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5b948; end: 108e5ba33;  */

void FUN_108e5b948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bab68;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf34580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c1c7e80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf34560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c1c3820(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224b60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c18ffa0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5ba34; end: 108e5baa7; +[SCInfoStickerUtils sojuWeatherHourlyForecastForWeatherMetadataHourlyForecasts:] */

void FUN_108e5ba34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108e5baa8;
  puStack_30 = &UNK_110ac73e0;
  uStack_28 = param_1;
  func_0x000107c31908(param_3,&puStack_48);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5baa8; end: 108e5bbb3;  */

void FUN_108e5baa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d8c70;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf34540(param_2);
  func_0x00010bf9faa0(uVar5);
  func_0x00010c0df740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf34540(param_2);
  func_0x00010c0df740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c011660(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5bbb4; end: 108e5bc27; +[SCInfoStickerUtils sojuDailyForecastForWeatherMetadataDailyForecasts:] */

void FUN_108e5bbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108e5bc28;
  puStack_30 = &UNK_110ac7400;
  uStack_28 = param_1;
  func_0x000107c31908(param_3,&puStack_48);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5bc28; end: 108e5bd9f;  */

void FUN_108e5bc28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d8c68;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cdc00(param_2);
  func_0x00010bf9faa0(uVar7);
  func_0x00010c0df740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c2fc0(param_2);
  func_0x00010bf9faa0(uVar7);
  func_0x00010c0df740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cdc00(param_2);
  func_0x00010c0df740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c2fc0(param_2);
  func_0x00010c0df740(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c2a2c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf86680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c011680(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5bda0; end: 108e5bdb7; +[SCInfoStickerUtils CTPAltitudeStickerTypeFromSCAltitudeViewType:] */

undefined4 FUN_108e5bda0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 0) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5bdb8; end: 108e5bddf; +[SCInfoStickerUtils SCAltitudeViewTypeFromCTPAltitudeStickerType:] */

undefined1 FUN_108e5bdb8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = param_3 != 2;
  }
  return uVar1;
}



/* Entry: 108e5bde0; end: 108e5bdf7; +[SCInfoStickerUtils CTPAltitudeStickerMetadataMeasurementUnitFromSCAltitudeUnit:] */

undefined4 FUN_108e5bde0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e5bdf8; end: 108e5be1f; +[SCInfoStickerUtils SCAltitudeUnitFromCTPAltitudeStickerMetadataMeasurementUnit:] */

undefined1 FUN_108e5bdf8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != -0x4524111 && param_3 != 0) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 108e5be20; end: 108e5bee3; +[SCInfoStickerUtils fahrenheitValueForCelsius:] */

float FUN_108e5be20(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
  _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
  dVar4 = (double)param_1;
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e380(dVar4,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0c3f80(puVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (float)dVar4;
}



/* Entry: 108e5bee4; end: 108e5beef; +[SCInfoStickerUtils CTPCommerceStickerStyleFromCommerceStickerViewStyle:] */

bool FUN_108e5bee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 108e5bef0; end: 108e5befb; +[SCInfoStickerUtils SCCommerceStickerViewStyleFromCTPCommerceStickerStyle:] */

bool FUN_108e5bef0(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 108e5befc; end: 108e5bf6f; -[SCInfoStickerViewProperties initWithProperties:] */

undefined1 * FUN_108e5befc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126febf8;
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



/* Entry: 108e5bf70; end: 108e5bf77; -[SCInfoStickerViewProperties properties] */

undefined8 FUN_108e5bf70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e5bf78; end: 108e5bf83; -[SCInfoStickerViewProperties .cxx_destruct] */

void FUN_108e5bf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e5bf84; end: 108e5bf8b; -[SCMentionStickerView initWithText:] */

void FUN_108e5bf84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c051570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithText_pillType__1125f1f60,param_3,0);
  return;
}



/* Entry: 108e5bf8c; end: 108e5c043; -[SCMentionStickerView initWithText:pillType:] */

undefined8
FUN_108e5bf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc300;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = 0x2eef76;
  func_0x00010b778904(0x2eef76);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c260(puVar1,param_2,param_3,0,uVar2,param_3,0);
  _objc_release(param_3);
  func_0x00010c04ec60(param_1,param_2,puVar1,param_4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 108e5c044; end: 108e5c04b; -[SCMentionStickerView initWithStyle:] */

void FUN_108e5c044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStyle_pillType__1125f1520,param_3,0);
  return;
}



/* Entry: 108e5c04c; end: 108e5c18f; -[SCMentionStickerView initWithItemInstance:] */

undefined8 FUN_108e5c04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe2ee0();
  uVar6 = uVar4;
  func_0x00010c0b5940(uVar4);
  func_0x000107c30948(uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c27dd80(uVar2);
  func_0x00010c05f640(param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 108e5c190; end: 108e5c263; -[SCMentionStickerView initWithStyle:pillType:] */

undefined8 FUN_108e5c190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126bab40;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dde0(param_3);
  func_0x00010bdc12c0(puVar2,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05f640(param_1,param_2,uVar1,uVar3,uVar4,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e5c264; end: 108e5c46b; -[SCMentionStickerView initWithUsername:displayName:userId:viewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e5c264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fec00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStickerPillViewType__1125f0c50,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar3 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c6b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c6b0) = puVar3;
    _objc_release(uVar5);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c6b4);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277c6b4) = puVar4;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c6b8) = 1;
    lVar6 = (long)_DAT_11277c6bc;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11277c6c0;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9680(puVar1);
    _objc_release(puVar3);
    func_0x0001092019d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcb60(puVar1);
    _objc_release(puVar3);
    func_0x00010c222da0(puVar1);
    func_0x00010c078d80();
    func_0x00010c212f20(puVar1);
    func_0x00010c21e620(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e5c46c; end: 108e5c4cf; +[SCMentionStickerView stickerViewWithPillType:] */

void FUN_108e5c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb310;
  _objc_alloc(PTR_PTR_1126bb310);
  puVar2 = puVar1;
  func_0x0001092019d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051560(puVar1,param_2,puVar2,param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5c4d0; end: 108e5c5fb; -[SCMentionStickerView layoutSubviews] */

void FUN_108e5c4d0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec00;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  uVar1 = param_2;
  dVar2 = param_1;
  func_0x00010c255280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar1);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_70,param_1 / dVar2,param_1 / dVar2,&uStack_a0);
  uVar1 = param_2;
  func_0x00010c255280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  dStack_80 = dStack_50;
  func_0x00010c219960();
  _objc_release(uVar1);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = dStack_50 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c255280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar2,dStack_50 * 0.5);
  _objc_release(param_2);
  return;
}



/* Entry: 108e5c5fc; end: 108e5c697; -[SCMentionStickerView willMoveToWindow:] */

void FUN_108e5c5fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec00;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToWindow__112687408);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c23d100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 != 0) && (lVar1 != 0)) {
      func_0x00010bf20c00(lVar1);
      func_0x00010c19f0e0(param_1);
    }
  }
  _objc_release(lVar1);
  return;
}


