/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d54604; end: 107d5460b; -[SCUnifiedProfileOpenFriendActionConfiguration nonFriendAddSourceType] */

undefined8 FUN_107d54604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5460c; end: 107d54613; -[SCUnifiedProfileOpenFriendActionConfiguration nonFriendAddPlacementType] */

undefined8 FUN_107d5460c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d54614; end: 107d5461b; -[SCUnifiedProfileOpenFriendActionConfiguration hideRecursiveOptions] */

undefined1 FUN_107d54614(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d5461c; end: 107d54623; -[SCUnifiedProfileOpenFriendActionConfiguration hideSendTo] */

undefined1 FUN_107d5461c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d54624; end: 107d5462b; -[SCUnifiedProfileOpenFriendActionConfiguration suppressSnapProProfileOpen] */

undefined1 FUN_107d54624(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d5462c; end: 107d54633; -[SCUnifiedProfileOpenFriendActionConfiguration showHideStorySuggestions] */

undefined1 FUN_107d5462c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d54634; end: 107d5463b; -[SCUnifiedProfileOpenFriendActionConfiguration hideUserDetails] */

undefined1 FUN_107d54634(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d5463c; end: 107d5469f; +[SCUnifiedProfileShowCameraActionModel friendWithSnapchatter:] */

void FUN_107d5463c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b40c8;
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



/* Entry: 107d546a0; end: 107d5470b; +[SCUnifiedProfileShowCameraActionModel groupWithGroupId:] */

void FUN_107d546a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b40c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d5470c; end: 107d54893; -[SCUnifiedProfileShowCameraActionModel initWithCoder:] */

undefined8 * FUN_107d5470c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126fad58;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
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
      if ((int)uVar2 == 0) goto LAB_107d54820;
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[3];
      puVar1[3] = uVar2;
      _objc_release(uVar4);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107d54820:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
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



/* Entry: 107d54894; end: 107d548b7; -[SCUnifiedProfileShowCameraActionModel copyWithZone:] */

undefined8 FUN_107d54894(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d548b8; end: 107d5492b; -[SCUnifiedProfileShowCameraActionModel encodeWithCoder:] */

void FUN_107d548b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eba278;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_107d5491c;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110eba298);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e51658;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_107d5491c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d5492c; end: 107d549a3; -[SCUnifiedProfileShowCameraActionModel hash] */

void FUN_107d5492c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126fad58;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d549a4; end: 107d549e7; -[SCUnifiedProfileShowCameraActionModel internalInit] */

void FUN_107d549a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fad58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d549e8; end: 107d54a9f; -[SCUnifiedProfileShowCameraActionModel isEqual:] */

long FUN_107d549e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d54a78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d54a84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d54a84;
        }
        goto LAB_107d54a78;
      }
    }
    lVar3 = 0;
  }
LAB_107d54a84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d54aa0; end: 107d54b23; -[SCUnifiedProfileShowCameraActionModel matchFriend:group:] */

void FUN_107d54aa0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_107d54b08;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_107d54b08;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_107d54b08:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d54b24; end: 107d54b53; -[SCUnifiedProfileShowCameraActionModel .cxx_destruct] */

void FUN_107d54b24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d54b54; end: 107d54b5b; -[SCShareNotificationServices shareNotificationService] */

undefined8 FUN_107d54b54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d54b5c; end: 107d54b67; -[SCShareNotificationServices .cxx_destruct] */

void FUN_107d54b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d54b68; end: 107d54bdb; -[SCScreenshotSharingServices initWithScreenshotSharingService:] */

undefined1 * FUN_107d54b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fad68;
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



/* Entry: 107d54bdc; end: 107d54be3; -[SCScreenshotSharingServices screenshotSharingService] */

undefined8 FUN_107d54bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d54be4; end: 107d54bef; -[SCScreenshotSharingServices .cxx_destruct] */

void FUN_107d54be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d54bf0; end: 107d54d9b; -[SCScreenshotSharingConfiguration initWithTitle:subtitle:url:shareSheetConfiguration:thumbnailConfiguration:userId:ctaStyle:ctaImageTintColor:shareSource:deeplinkSourceType:shareUIType:upsellType:] */

undefined8 *
FUN_107d54bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fad70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    puVar1[0xc] = param_13;
    *(undefined4 *)(puVar1 + 1) = param_14;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d54d9c; end: 107d54dbf; -[SCScreenshotSharingConfiguration copyWithZone:] */

undefined8 FUN_107d54d9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d54dc0; end: 107d54e8b; -[SCScreenshotSharingConfiguration hash] */

undefined8 * FUN_107d54dc0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
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
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_30 = (ulong)uVar1;
  puVar5 = &uStack_88;
  uStack_60 = uVar4;
  func_0x000100505190(puVar5,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107d54fcc:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d54fd8;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar6 & 1) != 0) &&
        ((((puVar5[8] == param_3[8] && (puVar5[9] == param_3[9])) && (puVar5[10] == param_3[10])) &&
         ((puVar5[0xb] == param_3[0xb] && (puVar5[0xc] == param_3[0xc])))))) &&
       (*(int *)(puVar5 + 1) == *(int *)(param_3 + 1))) {
      lVar7 = puVar5[2];
      if ((lVar7 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        lVar7 = puVar5[3];
        if ((lVar7 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
          lVar7 = puVar5[4];
          if ((lVar7 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
            lVar7 = puVar5[5];
            if ((lVar7 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
              lVar7 = puVar5[6];
              if ((lVar7 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
                puVar8 = (undefined8 *)puVar5[7];
                if (puVar8 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_107d54fd8;
                }
                goto LAB_107d54fcc;
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107d54fd8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107d54e8c; end: 107d54ff3; -[SCScreenshotSharingConfiguration isEqual:] */

long FUN_107d54e8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d54fcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d54fd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
       (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_107d54fd8;
                }
                goto LAB_107d54fcc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d54fd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d54ff4; end: 107d54ffb; -[SCScreenshotSharingConfiguration title] */

undefined8 FUN_107d54ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d54ffc; end: 107d55003; -[SCScreenshotSharingConfiguration subtitle] */

undefined8 FUN_107d54ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d55004; end: 107d5500b; -[SCScreenshotSharingConfiguration url] */

undefined8 FUN_107d55004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d5500c; end: 107d55013; -[SCScreenshotSharingConfiguration shareSheetConfiguration] */

undefined8 FUN_107d5500c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d55014; end: 107d5501b; -[SCScreenshotSharingConfiguration thumbnailConfiguration] */

undefined8 FUN_107d55014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d5501c; end: 107d55023; -[SCScreenshotSharingConfiguration userId] */

undefined8 FUN_107d5501c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d55024; end: 107d5502b; -[SCScreenshotSharingConfiguration ctaStyle] */

undefined8 FUN_107d55024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d5502c; end: 107d55033; -[SCScreenshotSharingConfiguration ctaImageTintColor] */

undefined8 FUN_107d5502c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d55034; end: 107d5503b; -[SCScreenshotSharingConfiguration shareSource] */

undefined8 FUN_107d55034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d5503c; end: 107d55043; -[SCScreenshotSharingConfiguration deeplinkSourceType] */

undefined8 FUN_107d5503c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d55044; end: 107d5504b; -[SCScreenshotSharingConfiguration shareUIType] */

undefined8 FUN_107d55044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d5504c; end: 107d55053; -[SCScreenshotSharingConfiguration upsellType] */

undefined4 FUN_107d5504c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107d55054; end: 107d550b3; -[SCScreenshotSharingConfiguration .cxx_destruct] */

void FUN_107d55054(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d550b4; end: 107d5519b; -[SCScreenshotSharingThumbnailConfiguration initWithProfilePhotoURLString:bitmojiAvatarId:bitmojiSelfieId:sigIconType:] */

undefined1 *
FUN_107d550b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fad78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d5519c; end: 107d551bf; -[SCScreenshotSharingThumbnailConfiguration copyWithZone:] */

undefined8 FUN_107d5519c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d551c0; end: 107d55243; -[SCScreenshotSharingThumbnailConfiguration hash] */

undefined8 * FUN_107d551c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d552ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d552f8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_107d552f8;
          }
          goto LAB_107d552ec;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d552f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d55244; end: 107d55313; -[SCScreenshotSharingThumbnailConfiguration isEqual:] */

long FUN_107d55244(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d552ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d552f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107d552f8;
          }
          goto LAB_107d552ec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d552f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d55314; end: 107d5531b; -[SCScreenshotSharingThumbnailConfiguration profilePhotoURLString] */

undefined8 FUN_107d55314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5531c; end: 107d55323; -[SCScreenshotSharingThumbnailConfiguration bitmojiAvatarId] */

undefined8 FUN_107d5531c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d55324; end: 107d5532b; -[SCScreenshotSharingThumbnailConfiguration bitmojiSelfieId] */

undefined8 FUN_107d55324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5532c; end: 107d55333; -[SCScreenshotSharingThumbnailConfiguration sigIconType] */

undefined8 FUN_107d5532c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d55334; end: 107d5536f; -[SCScreenshotSharingThumbnailConfiguration .cxx_destruct] */

void FUN_107d55334(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d55370; end: 107d5537b; +[SCCShareUpsellShareUpsellComponent componentPath] */

undefined ** FUN_107d55370(void)

{
  return &PTR____CFConstantStringClassReference_110ebb1f8;
}



/* Entry: 107d5537c; end: 107d553af; -[SCCShareUpsellShareUpsellComponent initWithViewModel:componentContext:runtime:] */

void FUN_107d5537c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fad80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 107d553b0; end: 107d553ff; -[SCCShareUpsellShareUpsellComponent setViewModel:] */

void FUN_107d553b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d55400; end: 107d55443; -[SCCShareUpsellShareUpsellComponent viewModel] */

void FUN_107d55400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d55444; end: 107d5544b; -[SCCUpsellType__Enum init] */

void FUN_107d55444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xb);
  return;
}



/* Entry: 107d5544c; end: 107d5551f; -[SCCShareUpsellShareUpsellContext initWithDestinationClicked:dismiss:getAvailableDestinationsObservable:] */

undefined8 *
FUN_107d5544c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126fad88;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107d55520; end: 107d55547; +[SCCShareUpsellShareUpsellContext valdiMarshallableObjectDescriptor] */

void FUN_107d55520(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_110a0adb0;
  param_1[1] = &PTR_s_SCCFriendStoring_110a0ae70;
  param_1[2] = &PTR_s_oi_v_110a0ad80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107d55548; end: 107d5556b;  */

undefined8 FUN_107d55548(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 107d5556c; end: 107d555eb;  */

void FUN_107d5556c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107d5564c;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107d555ec; end: 107d5562b; -[SCCShareUpsellShareUpsellViewModel initWithUpsellType:] */

void FUN_107d555ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fad90;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 107d5562c; end: 107d5564b; +[SCCShareUpsellShareUpsellViewModel valdiMarshallableObjectDescriptor] */

void FUN_107d5562c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a0ae90;
  param_1[1] = &PTR_DAT_110a0aef0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107d5564c; end: 107d5567b;  */

void FUN_107d5564c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107d5567c; end: 107d557c3; -[SCMemoriesPickerV2Scope initWithUiContainer:config:actionHandling:] */

undefined8 *
FUN_107d5567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fad98;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bd2c0(param_5);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d557c4; end: 107d557f7;  */

void FUN_107d557c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d557f8; end: 107d55803;  */

void FUN_107d557f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(*(long *)(param_1 + 0x20) + 0x20);
  return;
}



/* Entry: 107d55804; end: 107d5580b; -[SCMemoriesPickerV2Scope uiContainer] */

undefined8 FUN_107d55804(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5580c; end: 107d55813; -[SCMemoriesPickerV2Scope config] */

undefined8 FUN_107d5580c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d55814; end: 107d5581b; -[SCMemoriesPickerV2Scope customActionHandler] */

undefined8 FUN_107d55814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d5581c; end: 107d55833; -[SCMemoriesPickerV2Scope defaultActionHandlerDelegate] */

void FUN_107d5581c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d55834; end: 107d55877; -[SCMemoriesPickerV2Scope .cxx_destruct] */

void FUN_107d55834(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d55878; end: 107d55bfb; -[SCMemoriesPickerV2Config initWithTitle:subtitle:allowMultiSelect:limitMultiSnapCameraRollItemLength:showSnapsTab:showCameraRollTab:showPostArchiveTabWithBusinessProfileId:allowVideoEntries:allowPhotoEntries:showFeaturedStories:showSelectionOrder:videoDurationConfig:actionBarConfig:preselectedItems:preselectionStyle:shouldHideScrollBar:shouldDisableClusterer:showAlbumPicker:showAlbumShortcuts:thumbnailsConfig:maxSelectionLimit:source:multiSlotConfig:cameraRollConfig:shouldDismissOnCancel:shouldShowCameraButton:shouldShowNativePhotoLibrary:showLoadingOnComplete:supplementaryHeaderComponent:preserveAllEdits:] */

undefined8 *
FUN_107d55878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
             undefined1 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126fada0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_10._3_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x1c) = param_15;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 0x11) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_16._2_1_;
    *(undefined1 *)((long)puVar1 + 0x13) = param_16._3_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x14) = (undefined1)param_22;
    *(undefined1 *)((long)puVar1 + 0x15) = param_22._1_1_;
    *(undefined1 *)((long)puVar1 + 0x16) = param_22._2_1_;
    *(undefined1 *)((long)puVar1 + 0x17) = param_22._3_1_;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 3) = param_25;
  }
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d55bfc; end: 107d55c1f; -[SCMemoriesPickerV2Config copyWithZone:] */

undefined8 FUN_107d55bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d55c20; end: 107d55c27; -[SCMemoriesPickerV2Config title] */

undefined8 FUN_107d55c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d55c28; end: 107d55c2f; -[SCMemoriesPickerV2Config subtitle] */

undefined8 FUN_107d55c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d55c30; end: 107d55c37; -[SCMemoriesPickerV2Config allowMultiSelect] */

undefined1 FUN_107d55c30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d55c38; end: 107d55c3f; -[SCMemoriesPickerV2Config limitMultiSnapCameraRollItemLength] */

undefined1 FUN_107d55c38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d55c40; end: 107d55c47; -[SCMemoriesPickerV2Config showSnapsTab] */

undefined1 FUN_107d55c40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d55c48; end: 107d55c4f; -[SCMemoriesPickerV2Config showCameraRollTab] */

undefined1 FUN_107d55c48(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d55c50; end: 107d55c57; -[SCMemoriesPickerV2Config showPostArchiveTabWithBusinessProfileId] */

undefined8 FUN_107d55c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d55c58; end: 107d55c5f; -[SCMemoriesPickerV2Config allowVideoEntries] */

undefined1 FUN_107d55c58(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d55c60; end: 107d55c67; -[SCMemoriesPickerV2Config allowPhotoEntries] */

undefined1 FUN_107d55c60(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d55c68; end: 107d55c6f; -[SCMemoriesPickerV2Config showFeaturedStories] */

undefined1 FUN_107d55c68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107d55c70; end: 107d55c77; -[SCMemoriesPickerV2Config showSelectionOrder] */

undefined1 FUN_107d55c70(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107d55c78; end: 107d55c7f; -[SCMemoriesPickerV2Config videoDurationConfig] */

undefined8 FUN_107d55c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d55c80; end: 107d55c87; -[SCMemoriesPickerV2Config actionBarConfig] */

undefined8 FUN_107d55c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d55c88; end: 107d55c8f; -[SCMemoriesPickerV2Config preselectedItems] */

undefined8 FUN_107d55c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d55c90; end: 107d55c97; -[SCMemoriesPickerV2Config preselectionStyle] */

undefined4 FUN_107d55c90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 107d55c98; end: 107d55c9f; -[SCMemoriesPickerV2Config shouldHideScrollBar] */

undefined1 FUN_107d55c98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107d55ca0; end: 107d55ca7; -[SCMemoriesPickerV2Config shouldDisableClusterer] */

undefined1 FUN_107d55ca0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107d55ca8; end: 107d55caf; -[SCMemoriesPickerV2Config showAlbumPicker] */

undefined1 FUN_107d55ca8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107d55cb0; end: 107d55cb7; -[SCMemoriesPickerV2Config showAlbumShortcuts] */

undefined1 FUN_107d55cb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107d55cb8; end: 107d55cbf; -[SCMemoriesPickerV2Config thumbnailsConfig] */

undefined8 FUN_107d55cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d55cc0; end: 107d55cc7; -[SCMemoriesPickerV2Config maxSelectionLimit] */

undefined8 FUN_107d55cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d55cc8; end: 107d55ccf; -[SCMemoriesPickerV2Config source] */

undefined8 FUN_107d55cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d55cd0; end: 107d55cd7; -[SCMemoriesPickerV2Config multiSlotConfig] */

undefined8 FUN_107d55cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d55cd8; end: 107d55cdf; -[SCMemoriesPickerV2Config cameraRollConfig] */

undefined8 FUN_107d55cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d55ce0; end: 107d55ce7; -[SCMemoriesPickerV2Config shouldDismissOnCancel] */

undefined1 FUN_107d55ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107d55ce8; end: 107d55cef; -[SCMemoriesPickerV2Config shouldShowCameraButton] */

undefined1 FUN_107d55ce8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107d55cf0; end: 107d55cf7; -[SCMemoriesPickerV2Config shouldShowNativePhotoLibrary] */

undefined1 FUN_107d55cf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107d55cf8; end: 107d55cff; -[SCMemoriesPickerV2Config showLoadingOnComplete] */

undefined1 FUN_107d55cf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 107d55d00; end: 107d55d07; -[SCMemoriesPickerV2Config supplementaryHeaderComponent] */

undefined8 FUN_107d55d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d55d08; end: 107d55d0f; -[SCMemoriesPickerV2Config preserveAllEdits] */

undefined1 FUN_107d55d08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}


