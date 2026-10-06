/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d12248; end: 108d122b3; -[SCVenueFilterSwipeMetadata init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d12248(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b168);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b168) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d122b4; end: 108d122c3; -[SCVenueFilterSwipeMetadata venueFilterArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d122b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b16c);
}



/* Entry: 108d122c4; end: 108d122cf; -[SCVenueFilterSwipeMetadata setVenueFilterArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d122c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d122d0; end: 108d122df; -[SCVenueFilterSwipeMetadata venueTapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d122d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b164);
}



/* Entry: 108d122e0; end: 108d122ef; -[SCVenueFilterSwipeMetadata setVenueTapIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d122e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b164) = param_3;
  return;
}



/* Entry: 108d122f0; end: 108d122ff; -[SCVenueFilterSwipeMetadata venueID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d122f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b170);
}



/* Entry: 108d12300; end: 108d1230b; -[SCVenueFilterSwipeMetadata setVenueID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d12300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d1230c; end: 108d1231b; -[SCVenueFilterSwipeMetadata venuesSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1230c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b168);
}



/* Entry: 108d1231c; end: 108d1236b; -[SCVenueFilterSwipeMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1231c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b168,0);
  _objc_storeStrong(param_1 + _DAT_11277b170,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b16c,0);
  return;
}



/* Entry: 108d1236c; end: 108d123b7; +[SCStickerUtils imageFromSOJUGallerySticker:snapCreateDate:snapTimeZoneName:memoriesSnapId:infoFilters:userSession:completion:] */

void FUN_108d1236c(void)

{
  func_0x00010be37300(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  return;
}



/* Entry: 108d123b8; end: 108d123ef; +[SCStickerUtils imageFromSOJUGallerySticker:stickerSize:infoFilters:userSession:completion:] */

void FUN_108d123b8(void)

{
  func_0x00010be37300();
  return;
}



/* Entry: 108d123f0; end: 108d12423; +[SCStickerUtils imageFromSOJUGallerySticker:stickerData:snapCreateDate:snapTimeZoneName:memoriesSnapId:infoFilters:userSession:completion:] */

void FUN_108d123f0(void)

{
  func_0x00010be37300(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  return;
}



/* Entry: 108d12424; end: 108d1245b; +[SCStickerUtils thumbnailImageFromSOJUGallerySticker:stickerData:snapCreateDate:snapTimeZoneName:memoriesSnapId:infoFilters:userSession:completion:] */

void FUN_108d12424(void)

{
  func_0x00010be37300(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  return;
}



/* Entry: 108d1245c; end: 108d12c27; +[SCStickerUtils _imageFromSOJUGallerySticker:stickerData:snapCreateDate:snapTimeZoneName:memoriesSnapId:infoFilters:userSession:resolution:stickerSize:completion:] */

void FUN_108d1245c(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000010);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c27dde0();
  puVar3 = param_3;
  if ((long)puVar1 < 0x40ae93f) {
    if (puVar1 == (undefined *)0xffffffffea1fba4f) {
      puVar1 = param_3;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c4008;
        _objc_alloc_init(PTR_PTR_1126c4008);
        puVar4 = param_3;
        func_0x00010c0f0a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7da0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20b0e0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010c20bac0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c06c000(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1af280(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        ppuVar7 = &PTR_PTR_1126ba830;
LAB_108d12a74:
        _objc_release(puVar3);
        puVar4 = *ppuVar7;
        _objc_alloc();
        puVar3 = puVar1;
        func_0x00010bf21f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c041120();
        _objc_release(puVar3);
        _objc_release(puVar1);
        if (puVar4 != (undefined *)0x0) {
          param_1 = puVar4;
          func_0x00010c2540c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0xc2000000;
          pcStack_80 = FUN_108d12c28;
          puStack_78 = &UNK_110ac2480;
          _objc_retain();
          puStack_70 = param_1;
          _objc_retain(in_stack_00000010);
          lStack_68 = in_stack_00000010;
          _objc_retainBlock(&puStack_90);
          if (in_stack_00000008 == 1) {
            puVar1 = puVar4;
            param_2 = PTR_s_thumbnailImageWithUserSession_co_1126791e8;
            _objc_opt_respondsToSelector();
            if (((ulong)puVar1 & 1) != 0) {
              func_0x00010c26df00(puVar4);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
          }
          else if (in_stack_00000008 == 0) {
            puVar1 = puVar4;
            param_2 = PTR_s_imageWithUserSession_contexts_is_1125d7fe8;
            _objc_opt_respondsToSelector();
            if (((ulong)puVar1 & 1) != 0) {
              func_0x00010bfe9880(puVar4);
            }
          }
          _objc_release(ppuVar5);
          _objc_release(lStack_68);
          _objc_release(puStack_70);
LAB_108d12bc0:
          _objc_release(param_1);
          _objc_release(puVar4);
          goto LAB_108d12bd0;
        }
      }
    }
    else if (puVar1 == (undefined *)0x1f8b58) {
      puVar1 = param_3;
      func_0x00010c0f0a00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar4 = param_3;
        func_0x00010c2540c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar4 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126c4008;
          _objc_alloc_init(PTR_PTR_1126c4008);
          puVar4 = param_3;
          func_0x00010c0f0a00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7da0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = param_3;
          func_0x00010c2540c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20b0e0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
LAB_108d12938:
          func_0x00010c20bac0(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c06c000(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1af280(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          goto LAB_108d12a6c;
        }
      }
    }
    else if (puVar1 == (undefined *)0x3f08826) {
      puVar1 = param_3;
      func_0x00010bf8e2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        if (in_stack_00000010 == 0) goto LAB_108d12bd0;
        puVar4 = param_3;
        func_0x00010bf8e2c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be37120();
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_1;
        (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010);
        goto LAB_108d12bc0;
      }
    }
  }
  else if (puVar1 == (undefined *)0x40ae93f) {
    puVar1 = param_3;
    func_0x00010bf9e600();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (puVar4 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c4008;
        _objc_alloc_init(PTR_PTR_1126c4008);
        puVar4 = param_3;
        func_0x00010c0f0a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7da0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20b0e0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010c20bac0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar4 = param_3;
        func_0x00010c06c000(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1af280(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010bf9e600(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199840(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_108d12a6c;
      }
    }
  }
  else if (puVar1 == (undefined *)0x24b0f4ce) {
    puVar1 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126c4008;
      _objc_alloc_init(PTR_PTR_1126c4008);
      puVar4 = param_3;
      func_0x00010c0f0a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7da0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20b0e0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c20bac0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c06c000(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1af280(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bf62920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188dc0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108d12a6c:
      ppuVar7 = &PTR_PTR_1126ba7a8;
      goto LAB_108d12a74;
    }
  }
  else if (puVar1 == (undefined *)0x7f6db8cc) {
    puVar1 = param_3;
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010c2540c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (puVar4 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c4008;
        _objc_alloc_init(PTR_PTR_1126c4008);
        puVar4 = param_3;
        func_0x00010c0f0a00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7da0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_3;
        func_0x00010c2540c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20b0e0(puVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        goto LAB_108d12938;
      }
    }
  }
  if (in_stack_00000010 != 0) {
    param_2 = (undefined *)0x0;
    (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010);
  }
LAB_108d12bd0:
  _objc_release(puVar2);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000000);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 != (undefined *)0x0) {
    func_0x00010c1235a0(PTR_PTR_1126dbc28);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d12c28; end: 108d12c7b;  */

void FUN_108d12c28(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010c1235a0(PTR_PTR_1126dbc28);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d12c7c; end: 108d12e03; +[SCStickerUtils _imageForEmoji:] */

undefined *
FUN_108d12c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar4 = 0x404b800000000000;
  func_0x00010c266f40(0x404b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_68 = uVar3;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_5,param_4,puVar2);
  uVar5 = uVar4;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(uVar4,param_2,uVar5,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = uVar3;
  puStack_70 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_70,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf897e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_5,param_4,puVar2);
  _objc_release(param_5);
  _objc_release(puVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  if (puVar1 < (undefined *)0xe) {
    return *(undefined **)(&UNK_10df9fb60 + (long)puVar1 * 8);
  }
  return (undefined *)0x5;
}



/* Entry: 108d12e04; end: 108d12f3b;  */

undefined8 FUN_108d12e04(ulong param_1)

{
  if (param_1 < 0xe) {
    return *(undefined8 *)(&UNK_10df9fb60 + param_1 * 8);
  }
  return 5;
}



/* Entry: 108d12f3c; end: 108d13013; -[SCPreferences temperatureScale] */

ulong FUN_108d12f3c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef2a18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    param_1 = (ulong)puVar5 & 0xffffffff;
  }
  else {
    func_0x00010c067fc0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108d13014; end: 108d1305f; -[SCPreferences setTemperatureScale:] */

void FUN_108d13014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110ef2a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d13060; end: 108d1318b; +[SCStickerPreferenceAdaptor shared] */

void FUN_108d13060(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372e4e8 != -1) {
    func_0x000107c27d9c(0x11372e4e8,&PTR___NSConcreteGlobalBlock_110ac2518);
  }
  uVar1 = uRam000000011372e4e0;
  _objc_retain(uRam000000011372e4e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d1318c; end: 108d1319b;  */

void FUN_108d1318c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tooltipsProvider_11267aa70);
  return;
}



/* Entry: 108d1319c; end: 108d131ff; -[SCStickerPreferenceAdaptor temperatureScale] */

undefined8 FUN_108d1319c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam000000011372e4f8;
  func_0x00010bfe63a0(uRam000000011372e4f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26aee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108d13200; end: 108d1325f; -[SCStickerPreferenceAdaptor updateTemperatureScale:] */

void FUN_108d13200(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam000000011372e4f8;
  func_0x00010bfe63a0(uRam000000011372e4f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212b80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d13260; end: 108d132c3; -[SCStickerPreferenceAdaptor shouldDisplaySnapAndDriveWarning] */

undefined8 FUN_108d13260(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fb80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108d132c4; end: 108d13313; -[SCStickerPreferenceAdaptor setDisplayedSnapAndDriveWarning] */

void FUN_108d132c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1906e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d13314; end: 108d13377; -[SCStickerPreferenceAdaptor shouldDisplayTrackingStickerTooltip] */

undefined8 FUN_108d13314(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fe00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108d13378; end: 108d133c7; -[SCStickerPreferenceAdaptor setDisplayedTrackingStickerTooltip] */

void FUN_108d13378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1908a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d133c8; end: 108d1342b; -[SCStickerPreferenceAdaptor shouldDisplaySnapReplyStickerAnimation] */

undefined8 FUN_108d133c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fbc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108d1342c; end: 108d1347b; -[SCStickerPreferenceAdaptor setDisplayedSnapReplyStickerAnimation] */

void FUN_108d1342c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190700();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d1347c; end: 108d134df; -[SCStickerPreferenceAdaptor shouldDisplayStickerMenuHint] */

undefined8 FUN_108d1347c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fc60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108d134e0; end: 108d1352f; -[SCStickerPreferenceAdaptor setDisplayedStickerMenuHint] */

void FUN_108d134e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam000000011372e4f0;
  func_0x00010bfe63a0(uRam000000011372e4f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190720();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d13530; end: 108d1358b; -[SCUserSession customStickerOwner] */

void FUN_108d13530(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d1358c; end: 108d136e7;  */

void FUN_108d1358c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b24d8;
  func_0x00010c22b8a0(PTR_PTR_1126b24d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dbc30;
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_2);
    func_0x00010c0f8540(puVar1);
    _objc_retain(0);
    puVar3 = PTR_PTR_1126dbc30;
    uVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa61a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(0);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d136e8; end: 108d1374b;  */

void FUN_108d136e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dbc38;
  func_0x00010bf5a920(PTR_PTR_1126dbc38,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d1374c; end: 108d139b7; -[SCCutoutImageView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1374c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_b0;
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
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277b174;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x401751eb851eb852);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar5),param_2,0x12);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(param_1,param_2,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar1 = (long)_DAT_11277b178;
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(uVar4);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
    _CGAffineTransformMakeRotation(&uStack_80,0x3fd65718eb895076);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_b0);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar1));
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar5);
  }
  func_0x00010c1a9f00(lVar1,param_2,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108d139b8; end: 108d139c7; -[SCCutoutImageView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d139b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b174),PTR_s_image_1125d7478);
  return;
}



/* Entry: 108d139c8; end: 108d13c3b; -[SCCutoutImageView shimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d139c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  double dVar8;
  
  lVar3 = (long)_DAT_11277b178;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  in_d3 = in_d3 + in_d3;
  _objc_release(uVar1);
  dVar8 = (double)(long)(in_d3 * 0.7142857142857143);
  func_0x00010c1739e0(0,0,dVar8,in_d3,*(undefined8 *)(param_1 + lVar3));
  uVar5 = 0;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  dVar7 = in_d3;
  func_0x00010bf199c0(0,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar1);
  _objc_release(puVar2);
  in_d3 = in_d3 / 17.5;
  if (in_d3 <= 4.0) {
    in_d3 = 4.0;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar6 = dVar8;
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  dVar4 = in_d3;
  _CGRectGetMinX(in_d3,uVar5,dVar8,dVar7);
  _CGRectGetMidY(in_d3,uVar5,dVar8,dVar7);
  func_0x00010c17a6a0(dVar4 - (dVar6 + 4.0) * 0.5,in_d3,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1677c0(0x3fc3333333333333,*(undefined8 *)(param_1 + lVar3));
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  func_0x00010c00e9e0(0x3fe6666666666666,0x3fe4cccccccccccd,0,0x3fe3333333333333,0x3ff0000000000000)
  ;
  func_0x00010bef78c0();
  func_0x00010c24dc40(puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 108d13c3c; end: 108d13c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d13c3c(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_1 + 0x28);
  _CGRectGetMaxX(dVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
  dVar3 = *(double *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _CGRectGetMidY(uVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1 + dVar3,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b178),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 108d13c98; end: 108d13caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d13c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b178),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d13cb0; end: 108d13d07; -[SCCutoutImageView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108d13cb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277b174);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108d13d08; end: 108d13d0f; -[SCCutoutImageView _tapRecognized:] */

void FUN_108d13d08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sendActionsForControlEvents__112634750,0x40);
  return;
}



/* Entry: 108d13d10; end: 108d13d4f; -[SCCutoutImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d13d10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b178,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b174,0);
  return;
}



/* Entry: 108d13d50; end: 108d13e7b;  */

void FUN_108d13d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_2);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dadbd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dadbd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c1eeba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  uVar4 = param_2;
  func_0x00010bf56360(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108d13e7c; end: 108d1412f; -[SCPlacePickerBroadLocationView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d13e7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fe588;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11277b17c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277b180;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    FUN_108d28b34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277b184;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010befbd60(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x000108d28b4c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010beaab60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d14130; end: 108d1457b; -[SCPlacePickerBroadLocationView _setupAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d14130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar33 = (long)_DAT_11277b17c;
  uVar2 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11277b180;
  uVar3 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar33);
  uStack_c0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar33);
  uStack_b8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_11277b184;
  uVar9 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar33);
  uStack_b0 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar31);
  uStack_a8 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar31);
  uStack_a0 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0xc048000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar32);
  uStack_98 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4066e00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar32);
  uStack_90 = uVar21;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar32);
  uStack_88 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf493c0(0x4040000000000000,uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar32);
  uStack_80 = uVar26;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bf34860(uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar29;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d1457c; end: 108d145b3; -[SCPlacePickerBroadLocationView _didTapOpenSettings] */

void FUN_108d1457c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d145b4; end: 108d145d3; -[SCPlacePickerBroadLocationView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d145b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b188);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d145d4; end: 108d145e7; -[SCPlacePickerBroadLocationView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d145d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b188,param_3);
  return;
}



/* Entry: 108d145e8; end: 108d14643; -[SCPlacePickerBroadLocationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d145e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b188);
  _objc_storeStrong(param_1 + _DAT_11277b184,0);
  _objc_storeStrong(param_1 + _DAT_11277b180,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b17c,0);
  return;
}



/* Entry: 108d14644; end: 108d148eb; -[SCPlacePickerSubscreenView initWithFrame:context:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d14644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126fe590;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dbc40;
    _objc_alloc(PTR_PTR_1126dbc40);
    func_0x00010c036980();
    puVar3 = PTR_PTR_1126dbc48;
    _objc_alloc(PTR_PTR_1126dbc48);
    func_0x00010c061d40();
    func_0x00010c1dc4e0(puVar1);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010c0fd2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126dbc50;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11277b190;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(uVar6);
    puVar4 = puVar1;
    func_0x00010c0fd2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    _objc_opt_class(uVar6);
    func_0x00010c127580(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c0fd2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126dbc58;
    _objc_alloc_init(PTR_PTR_1126dbc58);
    func_0x00010c173ce0(puVar1);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf21320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf21320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    func_0x00010beaab60(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108d148ec; end: 108d14913;  */

void FUN_108d148ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d14914; end: 108d149bf; -[SCPlacePickerSubscreenView setPlacePickerVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d14914(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_11277b18c) = (char)param_3;
  lVar2 = param_1;
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010bf21320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(lVar1);
    func_0x00010c0fd2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0fd2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(lVar1);
    func_0x00010bf21320(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c12c960();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beaab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupAutolayout_112588480);
  return;
}



/* Entry: 108d149c0; end: 108d14cd7; -[SCPlacePickerSubscreenView _setupAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108d149c0(long param_1,undefined8 param_2)

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
  undefined *puVar16;
  long lVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + _DAT_11277b18c) == '\x01') {
    lVar17 = param_1;
    func_0x00010c0fd2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar17);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar17 = param_1;
    func_0x00010c0fd2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493c0(0x4032000000000000,lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    lStack_88 = lVar4;
    func_0x00010c0fd2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0(lVar6,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    lStack_80 = lVar8;
    func_0x00010c0fd2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0(lVar10,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    lStack_78 = lVar12;
    func_0x00010c0fd2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf493a0(lVar14,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar16);
    _objc_release(puVar16);
    _objc_release(lVar15);
    _objc_release(param_1);
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
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return lVar17;
    }
  }
  else {
    func_0x00010bf21320();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c14c940();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return param_1;
    }
  }
  ___stack_chk_fail();
  return *(long *)(lVar17 + _DAT_11277b194);
}



/* Entry: 108d14cd8; end: 108d14ce7; -[SCPlacePickerSubscreenView broadLocationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d14cd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b194);
}



/* Entry: 108d14ce8; end: 108d14d27; -[SCPlacePickerSubscreenView setBroadLocationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d14ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b194;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d14d28; end: 108d14d37; -[SCPlacePickerSubscreenView placePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d14d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b198);
}



/* Entry: 108d14d38; end: 108d14d77; -[SCPlacePickerSubscreenView setPlacePicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d14d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b198;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d14d78; end: 108d14d87; -[SCPlacePickerSubscreenView composerScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d14d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b190);
}



/* Entry: 108d14d88; end: 108d14d97; -[SCPlacePickerSubscreenView placePickerVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d14d88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277b18c);
}



/* Entry: 108d14d98; end: 108d14de7; -[SCPlacePickerSubscreenView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d14d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b190,0);
  _objc_storeStrong(param_1 + _DAT_11277b198,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b194,0);
  return;
}



/* Entry: 108d14de8; end: 108d154f7; -[SCPlacePickerViewController initWithValdiRuntimeProvider:captureLocation:suggestedVenues:venueIDToDistanceStringMap:tappedVenue:venueEditorScopeExposer:unifiedGRPCClientFactory:presentationSource:circumstanceEngine:locationPermissionsProvider:checkInOptionFetcher:blizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d14de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_b0 = PTR_PTR_1126fe598;
  puVar1 = &uStack_b8;
  uStack_b8 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar11 = (long)_DAT_11277b19c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_6;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277b1a0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b1a4) = param_12;
    lVar9 = (long)_DAT_11277b1a8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11277b1ac;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_14;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11277b1b0;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_15;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11277b1b4;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_16;
    _objc_release(uVar2);
    _objc_initWeak(auStack_c0,puVar1);
    puVar3 = PTR_PTR_1126dbc60;
    _objc_alloc();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108d154f8;
    puStack_d8 = &UNK_110ac25d8;
    _objc_copyWeak(auStack_c8,auStack_c0);
    _objc_retain(param_9);
    puStack_118 = puVar4;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108d157b0;
    puStack_100 = &UNK_110843540;
    uStack_d0 = param_9;
    _objc_copyWeak(auStack_f8,auStack_c0);
    func_0x00010c050880();
    lVar12 = (long)_DAT_11277b1b8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar3;
    _objc_release(uVar2);
    puStack_140 = puVar4;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x108d15894;
    puStack_128 = &UNK_1108434b0;
    _objc_copyWeak(auStack_120,auStack_c0);
    func_0x00010c212140(*(undefined8 *)((long)puVar1 + lVar12));
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf51c80(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9120(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf51c80(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c0df720(param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0c00(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206c40(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar4);
    uVar2 = param_11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b38f8;
    _objc_alloc(PTR_PTR_1126b38f8);
    func_0x00010c019620();
    func_0x00010c1a4ce0(*(undefined8 *)((long)puVar1 + lVar12));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171b20(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(uVar5);
    if (param_7 != 0) {
      _objc_retain(param_8);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_retain(param_7);
      _objc_alloc_init();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108d16a28;
      puStack_90 = &UNK_110ac2340;
      uStack_88 = param_8;
      _objc_retain();
      puStack_80 = puVar3;
      _objc_retain(param_8);
      func_0x00010bf97e80(param_7);
      _objc_release(param_7);
      puVar6 = puStack_80;
      _objc_retain(puVar3);
      _objc_release(puVar6);
      _objc_release(uStack_88);
      _objc_release(puVar3);
      _objc_release(param_8);
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b1bc);
      *(undefined **)((long)puVar1 + (long)_DAT_11277b1bc) = puVar3;
      _objc_release(uVar5);
    }
    puVar3 = PTR_PTR_1126dbc68;
    _objc_alloc(PTR_PTR_1126dbc68);
    func_0x00010c00f860();
    func_0x00010c1809e0(*(undefined8 *)((long)puVar1 + lVar12));
    puVar6 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b1c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b1c0) = puVar6;
    _objc_release(uVar5);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_108d15954;
    puStack_150 = &UNK_1108ea4b0;
    _objc_copyWeak(auStack_148,auStack_c0);
    func_0x00010c1a3380(*(undefined8 *)((long)puVar1 + lVar12));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_c0);
    uVar5 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b1c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b1c4) = uVar5;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_148);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 108d154f8; end: 108d155b7;  */

void FUN_108d154f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d155b8;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108d155b8; end: 108d157af;  */

void FUN_108d155b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126bab10;
  if (lVar1 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar9);
    uVar7 = uVar9;
    func_0x00010befd580(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298180(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126bab18;
    _objc_alloc(PTR_PTR_1126bab18);
    uVar7 = uVar9;
    func_0x00010c297e20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c2711a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f520(uVar9);
    uVar5 = uVar9;
    func_0x00010bf86fe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010c01bb80(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(puVar2);
    lVar6 = *(long *)(param_2 + 0x20);
    func_0x00010bf86f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      param_1 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf86f40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
    lVar8 = lVar1;
    func_0x00010bde6f40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    lVar6 = *(long *)(param_2 + 0x28);
    func_0x00010bf28a20(uVar7);
    (**(code **)(lVar6 + 0x10))(param_1,lVar6,puVar3,uVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d157b0; end: 108d15857;  */

void FUN_108d157b0(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_108d15858;
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



/* Entry: 108d15858; end: 108d15937;  */

void FUN_108d15858(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7ee40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d15938; end: 108d15953;  */

void FUN_108d15938(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d15954; end: 108d159df;  */

void FUN_108d15954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _CLLocationCoordinate2DMake();
  _CLLocationCoordinate2DMake(param_3,param_4);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010be1f320(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d159e0; end: 108d15a8b;  */

void FUN_108d159e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108d15a8c; end: 108d15abf;  */

void FUN_108d15a8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d15ac0; end: 108d15cd7; -[SCPlacePickerViewController _constructSelectedPlaceTagForPlaceCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d15ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_1 + _DAT_11277b1a4);
  lVar10 = (long)_DAT_11277b1bc;
  lVar8 = *(long *)(param_1 + lVar10);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110ac2648);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126c4db8;
  _objc_alloc(PTR_PTR_1126c4db8);
  func_0x00010bffcaa0();
  uVar3 = param_3;
  func_0x00010c297e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfecde0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c4dc0;
  _objc_alloc(PTR_PTR_1126c4dc0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar6,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c297e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0367c0(puVar5,param_2,0,puVar6,puVar7,uVar3,0,puVar2,0);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c0e50;
  _objc_alloc(PTR_PTR_1126c0e50);
  uVar3 = param_3;
  func_0x00010c297e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c036540(puVar6,param_2,uVar3,uVar4,lVar9 == 0,1,puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d15cd8; end: 108d15cdf;  */

void FUN_108d15cd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_venueId_1126839b0);
  return;
}



/* Entry: 108d15ce0; end: 108d15d63; -[SCPlacePickerViewController checkInMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d15ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b1bc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110ac2668);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126c4db8;
  _objc_alloc(PTR_PTR_1126c4db8);
  func_0x00010bffcaa0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d15d64; end: 108d15d6b;  */

void FUN_108d15d64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_venueId_1126839b0);
  return;
}



/* Entry: 108d15d6c; end: 108d15db7; -[SCPlacePickerViewController viewWillAppear:] */

void FUN_108d15d6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010be4ee00(param_1);
  return;
}



/* Entry: 108d15db8; end: 108d15f23; -[SCPlacePickerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d15db8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126dbc70;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277b1a8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014200(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_11277b1c8;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c09eaa0(*(undefined8 *)(param_1 + _DAT_11277b1ac));
  func_0x00010c1dc540(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0fd2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf21320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + _DAT_11277b1bc);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010beaa160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar6));
  return;
}



/* Entry: 108d15f24; end: 108d15fd3; -[SCPlacePickerViewController _getFormattedDistanceStringToLocation:fromLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d15f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_5;
  _CLLocationCoordinate2DIsValid();
  iVar1 = (int)lVar2;
  if ((iVar1 == 0) || (_CLLocationCoordinate2DIsValid(param_3,param_4), iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_108d312a8(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)(param_5 + _DAT_11277b1c0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25d440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108d15fd4; end: 108d1617b; -[SCPlacePickerViewController _loadVenuesAsRetryAttempt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d15fd4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_70;
  lVar1 = *(long *)(param_1 + _DAT_11277b1bc);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      func_0x00010beaa160(param_1);
    }
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108d1617c;
    puStack_58 = &UNK_1108ea060;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retainBlock(&puStack_70);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277b1b0);
    if (*(long *)(param_1 + _DAT_11277b19c) == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010bfa59c0(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010bfa59e0(uVar3);
    }
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 108d1617c; end: 108d163cb;  */

/* WARNING: Possible PIC construction at 0x000108d161f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d16364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d161f4) */
/* WARNING: Removing unreachable block (ram,0x000108d16368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1617c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    _objc_release(0);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (param_2 == 0) {
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lVar4 * 8);
        func_0x00010c27dda0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar2);
        func_0x00010c0c1400(uVar5);
        _objc_release(uVar5);
        _objc_release(puVar2);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaa170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108d163cc; end: 108d163db; -[SCPlacePickerViewController _loadVenuesWithVenueResults:areResultsPostType:] */

void FUN_108d163cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setViewModelWithPlaces_isLoadin_112588200,param_3,0,0,param_4);
  return;
}



/* Entry: 108d163dc; end: 108d1642b; -[SCPlacePickerViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d163dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b1c8);
  func_0x00010bf44fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c065580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d1642c; end: 108d1651f; -[SCPlacePickerViewController _presentSuggestAPlace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1642c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_PTR_1126b20a0;
  _objc_alloc(PTR_PTR_1126b20a0);
  func_0x00010c028640();
  uVar4 = 1;
  if (*(long *)(param_3 + _DAT_11277b1a4) == 0) {
    uVar4 = 2;
  }
  puVar2 = PTR_PTR_1126b20a8;
  _objc_alloc(PTR_PTR_1126b20a8);
  func_0x00010bf51c80(*(undefined8 *)(param_3 + _DAT_11277b19c));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0393c0(param_1,param_2,puVar2,param_4,param_3,puVar1,puVar3,param_3);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_3 + _DAT_11277b1a0),param_4,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d16520; end: 108d1660b; -[SCPlacePickerViewController _presentSuggestAnEditWithPlaceID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d16520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_PTR_1126b20a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028640();
  uVar4 = 1;
  if (*(long *)(param_1 + _DAT_11277b1a4) == 0) {
    uVar4 = 2;
  }
  puVar2 = PTR_PTR_1126b20a8;
  _objc_alloc(PTR_PTR_1126b20a8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0392c0(puVar2,param_2,param_1,param_3,puVar1,puVar3,param_1);
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11277b1a0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d1660c; end: 108d166e7; -[SCPlacePickerViewController _setViewModelWithPlaces:isLoading:isErrored:showSuggestAPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1660c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dbc40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c036980();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c20fa60(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b1c8);
  func_0x00010c0fd2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d166e8; end: 108d166f3; -[SCPlacePickerViewController trayFeatureName] */

undefined ** FUN_108d166e8(void)

{
  return &PTR____CFConstantStringClassReference_110ef2a58;
}



/* Entry: 108d166f4; end: 108d1674b; -[SCPlacePickerViewController locationProviderDidUpdateLocationAccuracy:] */

void FUN_108d166f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108d1674c;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 108d1674c; end: 108d1679f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1674c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c1dc540(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b1c8),param_2,
                      lVar1 != 1);
  if (lVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be4ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__loadVenuesAsRetryAttempt__112571520,1);
    return;
  }
  return;
}



/* Entry: 108d167a0; end: 108d167d7; -[SCPlacePickerViewController broadPlacePickerViewDidTapOpenSettings:] */

void FUN_108d167a0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d167d8; end: 108d1682f; -[SCPlacePickerViewController venueEditorScreenDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d167d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1a0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 108d16830; end: 108d168ff; -[SCPlacePickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d16830(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b1b4,0);
  _objc_storeStrong(param_1 + _DAT_11277b1c4,0);
  _objc_storeStrong(param_1 + _DAT_11277b1c0,0);
  _objc_storeStrong(param_1 + _DAT_11277b1b0,0);
  _objc_storeStrong(param_1 + _DAT_11277b1ac,0);
  _objc_storeStrong(param_1 + _DAT_11277b1a0,0);
  _objc_storeStrong(param_1 + _DAT_11277b19c,0);
  _objc_storeStrong(param_1 + _DAT_11277b1bc,0);
  _objc_storeStrong(param_1 + _DAT_11277b1c8,0);
  _objc_storeStrong(param_1 + _DAT_11277b1b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b1a8,0);
  return;
}



/* Entry: 108d16900; end: 108d16a1f;  */

void FUN_108d16900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c5040;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c11f520(lVar4);
  func_0x00010c060840((double)lVar4,puVar1,param_2,uVar2,uVar3,param_4,0);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bf86fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf86fe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190b20(puVar1,param_2,uVar2);
      _objc_release(uVar2);
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d16a20; end: 108d16a27;  */

void FUN_108d16a20(void)

{
  return;
}



/* Entry: 108d16a28; end: 108d16b63;  */

void FUN_108d16a28(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c5040;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c297e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c09e300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060840((double)param_3,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c297e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar5 = lVar6;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c190b20(puVar1);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d16b64; end: 108d16bbf; -[SCUserSession stickerTagFuzzySearch] */

void FUN_108d16b64(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d16bc0; end: 108d16c47;  */

void FUN_108d16bc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000108e07010();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  FUN_108e07118();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbde8;
  _objc_alloc(PTR_PTR_1126cbde8);
  func_0x00010bff7dc0();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d16c48; end: 108d16cdb; -[SCPreferences _recentStickerHistory] */

void FUN_108d16c48(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ef2a78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbc78;
  _objc_opt_class(PTR_PTR_1126dbc78);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126dbc78;
    _objc_alloc_init(PTR_PTR_1126dbc78);
    func_0x00010c1d0560(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d16cdc; end: 108d16d47; -[SCPreferences addRecentlyUsedSearchTag:] */

void FUN_108d16cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be86ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befad60();
  _objc_release(param_3);
  func_0x00010c1d0560(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110ef2a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d16d48; end: 108d16d8f; -[SCPreferences clearRecentlyUsedSearchTags] */

void FUN_108d16d48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be86ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3be60();
  func_0x00010c1d0560(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110ef2a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d16d90; end: 108d16dd3; -[SCPreferences recentlyUsedSearchTagsList] */

void FUN_108d16d90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be86ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c122980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d16dd4; end: 108d16e3f; -[SCRecentStickerHistory init] */

undefined1 * FUN_108d16dd4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d16e40; end: 108d16ebb; -[SCRecentStickerHistory addRecentlyUsedSearchTags:] */

void FUN_108d16e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c066b00(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (10 < uVar1) {
    lVar3 = *(long *)(param_1 + 8);
    lVar2 = lVar3;
    func_0x00010bf529e0(lVar3);
    func_0x00010c12d520(lVar3,param_2,10,lVar2 + -10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


