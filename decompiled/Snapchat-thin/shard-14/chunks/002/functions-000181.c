/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0852d8; end: 10b08530f; -[SCCreativeKitSnapMetadataBuilder withIdentifierForVendor:] */

long FUN_10b0852d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085310; end: 10b085347; -[SCCreativeKitSnapMetadataBuilder withIpAddress:] */

long FUN_10b085310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085348; end: 10b08537f; -[SCCreativeKitSnapMetadataBuilder withSnapAdsId:] */

long FUN_10b085348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b085380; end: 10b08541b; -[SCCreativeKitSnapMetadataBuilder .cxx_destruct] */

void FUN_10b085380(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b08541c; end: 10b0855e7; -[SCCaptionStyleLoggingParams initWithCaptionStyleListFromTap:captionStyleListFromScroll:captionStyleExploredListFromTap:captionStyleExploredListFromScroll:captionScrollCount:captionStyleIsBackgroundStyle:captionMenuOpened:captionPinUseCount:captionAnimatedCount:captionCarouselPollPromptTap:captionCarouselQuestionPromptTap:captionCarouselExitPromptTap:captionPlaceList:mentionUserIds:] */

undefined8 *
FUN_10b08541c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1127051c0;
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
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    puVar1[6] = param_7;
    puVar1[7] = param_11;
    puVar1[8] = param_12;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_13._2_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0855e8; end: 10b0857d7; -[SCCaptionStyleLoggingParams initWithCoder:] */

undefined1 * FUN_10b0855e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051c0;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0857d8; end: 10b0857fb; -[SCCaptionStyleLoggingParams copyWithZone:] */

undefined8 FUN_10b0857d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0857fc; end: 10b08594b; -[SCCaptionStyleLoggingParams encodeWithCoder:] */

void FUN_10b0857fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edba78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110edba98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110edbab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110edbad8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110edbaf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110edbb18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110edbb38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f58c98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f58cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f58cd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f58cf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f58d18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110edbb58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f58d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b08594c; end: 10b085a27; -[SCCaptionStyleLoggingParams hash] */

undefined8 * FUN_10b08594c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b085b88:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b085b94;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((puVar3[6] == param_3[6] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
           (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
          ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8])))))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))) &&
       ((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
        (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[9];
              if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[10];
                if (puVar6 != (undefined8 *)param_3[10]) {
                  func_0x00010c071ae0();
                  goto LAB_10b085b94;
                }
                goto LAB_10b085b88;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b085b94:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b085a28; end: 10b085baf; -[SCCaptionStyleLoggingParams isEqual:] */

long FUN_10b085a28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b085b88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b085b94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_10b085b94;
                }
                goto LAB_10b085b88;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b085b94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b085bb0; end: 10b085bb7; -[SCCaptionStyleLoggingParams captionStyleListFromTap] */

undefined8 FUN_10b085bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b085bb8; end: 10b085bbf; -[SCCaptionStyleLoggingParams captionStyleListFromScroll] */

undefined8 FUN_10b085bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b085bc0; end: 10b085bc7; -[SCCaptionStyleLoggingParams captionStyleExploredListFromTap] */

undefined8 FUN_10b085bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b085bc8; end: 10b085bcf; -[SCCaptionStyleLoggingParams captionStyleExploredListFromScroll] */

undefined8 FUN_10b085bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b085bd0; end: 10b085bd7; -[SCCaptionStyleLoggingParams captionScrollCount] */

undefined8 FUN_10b085bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b085bd8; end: 10b085bdf; -[SCCaptionStyleLoggingParams captionStyleIsBackgroundStyle] */

undefined1 FUN_10b085bd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b085be0; end: 10b085be7; -[SCCaptionStyleLoggingParams captionMenuOpened] */

undefined1 FUN_10b085be0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b085be8; end: 10b085bef; -[SCCaptionStyleLoggingParams captionPinUseCount] */

undefined8 FUN_10b085be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b085bf0; end: 10b085bf7; -[SCCaptionStyleLoggingParams captionAnimatedCount] */

undefined8 FUN_10b085bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b085bf8; end: 10b085bff; -[SCCaptionStyleLoggingParams captionCarouselPollPromptTap] */

undefined1 FUN_10b085bf8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b085c00; end: 10b085c07; -[SCCaptionStyleLoggingParams captionCarouselQuestionPromptTap] */

undefined1 FUN_10b085c00(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b085c08; end: 10b085c0f; -[SCCaptionStyleLoggingParams captionCarouselExitPromptTap] */

undefined1 FUN_10b085c08(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b085c10; end: 10b085c17; -[SCCaptionStyleLoggingParams captionPlaceList] */

undefined8 FUN_10b085c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b085c18; end: 10b085c1f; -[SCCaptionStyleLoggingParams mentionUserIds] */

undefined8 FUN_10b085c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b085c20; end: 10b085c7f; -[SCCaptionStyleLoggingParams .cxx_destruct] */

void FUN_10b085c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b085c80; end: 10b085d57; -[SCSnapSegmentLoggingParams initWithCoder:] */

undefined1 *
FUN_10b085c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127051c8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b085d58; end: 10b085e03; -[SCSnapSegmentLoggingParams initWithSegmentIndex:trimmedLocation:trimmedTimeSec:commonLoggingParams:mediaSource:] */

undefined1 *
FUN_10b085d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1127051c8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b085e04; end: 10b085e27; -[SCSnapSegmentLoggingParams copyWithZone:] */

undefined8 FUN_10b085e04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b085e28; end: 10b085ec3; -[SCSnapSegmentLoggingParams encodeWithCoder:] */

void FUN_10b085e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f31618);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f58d58);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f58d78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f58d98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e593d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b085ec4; end: 10b085f67; -[SCSnapSegmentLoggingParams hash] */

undefined8 * FUN_10b085ec4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b086034:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b086040;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar9 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
      dVar8 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar7 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b086040;
        }
        goto LAB_10b086034;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b086040:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b085f68; end: 10b08605b; -[SCSnapSegmentLoggingParams isEqual:] */

long FUN_10b085f68(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b086034:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b086040;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b086040;
        }
        goto LAB_10b086034;
      }
    }
    lVar4 = 0;
  }
LAB_10b086040:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b08605c; end: 10b086063; -[SCSnapSegmentLoggingParams segmentIndex] */

undefined8 FUN_10b08605c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b086064; end: 10b08606b; -[SCSnapSegmentLoggingParams trimmedLocation] */

undefined8 FUN_10b086064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b08606c; end: 10b086073; -[SCSnapSegmentLoggingParams trimmedTimeSec] */

undefined8 FUN_10b08606c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b086074; end: 10b08607b; -[SCSnapSegmentLoggingParams commonLoggingParams] */

undefined8 FUN_10b086074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b08607c; end: 10b086083; -[SCSnapSegmentLoggingParams mediaSource] */

undefined8 FUN_10b08607c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b086084; end: 10b08608f; -[SCSnapSegmentLoggingParams .cxx_destruct] */

void FUN_10b086084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b086090; end: 10b086167; -[SCStickerLoggingParams initWithCameraRollCount:cameraRollList:lyricsStickerType:stickerMenuOpen:stickerPinUseCount:stickerFromCaptionCount:] */

undefined1 *
FUN_10b086090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1127051d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b086168; end: 10b086267; -[SCStickerLoggingParams initWithCoder:] */

undefined1 * FUN_10b086168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b086268; end: 10b08628b; -[SCStickerLoggingParams copyWithZone:] */

undefined8 FUN_10b086268(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b08628c; end: 10b08633b; -[SCStickerLoggingParams encodeWithCoder:] */

void FUN_10b08628c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edbb78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110edbb98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f58db8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f58dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f58df8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f58e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b08633c; end: 10b0863cb; -[SCStickerLoggingParams hash] */

long * FUN_10b08633c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  plVar3 = &lStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b08648c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b086498;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if (((((ulong)plVar4 & 1) != 0) &&
        (((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])) &&
         (plVar3[5] == param_3[5])))) && (plVar3[6] == param_3[6])) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        plVar6 = (long *)plVar3[4];
        if (plVar6 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b086498;
        }
        goto LAB_10b08648c;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b086498:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b0863cc; end: 10b0864b3; -[SCStickerLoggingParams isEqual:] */

long FUN_10b0863cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b08648c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b086498;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b086498;
        }
        goto LAB_10b08648c;
      }
    }
    lVar3 = 0;
  }
LAB_10b086498:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0864b4; end: 10b0864bb; -[SCStickerLoggingParams cameraRollCount] */

undefined8 FUN_10b0864b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0864bc; end: 10b0864c3; -[SCStickerLoggingParams cameraRollList] */

undefined8 FUN_10b0864bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0864c4; end: 10b0864cb; -[SCStickerLoggingParams lyricsStickerType] */

undefined8 FUN_10b0864c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0864cc; end: 10b0864d3; -[SCStickerLoggingParams stickerMenuOpen] */

undefined1 FUN_10b0864cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0864d4; end: 10b0864db; -[SCStickerLoggingParams stickerPinUseCount] */

undefined8 FUN_10b0864d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0864dc; end: 10b0864e3; -[SCStickerLoggingParams stickerFromCaptionCount] */

undefined8 FUN_10b0864dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0864e4; end: 10b086513; -[SCStickerLoggingParams .cxx_destruct] */

void FUN_10b0864e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b086514; end: 10b08652f; +[SCStickerLoggingParamsBuilder stickerLoggingParams] */

void FUN_10b086514(void)

{
  _objc_alloc_init(PTR_PTR_1126c4a08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b086530; end: 10b0866b7; +[SCStickerLoggingParamsBuilder stickerLoggingParamsFromExistingStickerLoggingParams:] */

void FUN_10b086530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126c4a08;
  _objc_retain(param_3);
  func_0x00010c2543a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf2a7c0(param_3);
  puVar3 = puVar1;
  func_0x00010c2a9e60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf2a960(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2a9e80(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0b5c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2b3420(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c2543e0(param_3);
  puVar8 = puVar6;
  func_0x00010c2ba1c0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c254c00(param_3);
  puVar9 = puVar8;
  func_0x00010c2ba220(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c253f80(param_3);
  _objc_release(param_3);
  puVar10 = puVar9;
  func_0x00010c2ba140(puVar9,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b0866b8; end: 10b0866f3; -[SCStickerLoggingParamsBuilder build] */

void FUN_10b0866b8(void)

{
  _objc_alloc(PTR_PTR_1126d9650);
  func_0x00010bffba80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0866f4; end: 10b0866fb; -[SCStickerLoggingParamsBuilder withCameraRollCount:] */

void FUN_10b0866f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b0866fc; end: 10b086733; -[SCStickerLoggingParamsBuilder withCameraRollList:] */

long FUN_10b0866fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b086734; end: 10b08676b; -[SCStickerLoggingParamsBuilder withLyricsStickerType:] */

long FUN_10b086734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b08676c; end: 10b086773; -[SCStickerLoggingParamsBuilder withStickerMenuOpen:] */

void FUN_10b08676c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b086774; end: 10b08677b; -[SCStickerLoggingParamsBuilder withStickerPinUseCount:] */

void FUN_10b086774(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b08677c; end: 10b086783; -[SCStickerLoggingParamsBuilder withStickerFromCaptionCount:] */

void FUN_10b08677c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b086784; end: 10b0867b3; -[SCStickerLoggingParamsBuilder .cxx_destruct] */

void FUN_10b086784(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0867b4; end: 10b086863; -[SCPreviewToolLens initWithCoder:] */

undefined1 * FUN_10b0867b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051d8;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b086864; end: 10b0868ef; -[SCPreviewToolLens initWithLensId:lensSource:lensType:] */

undefined1 *
FUN_10b086864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127051d8;
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



/* Entry: 10b0868f0; end: 10b086913; -[SCPreviewToolLens copyWithZone:] */

undefined8 FUN_10b0868f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b086914; end: 10b086987; -[SCPreviewToolLens encodeWithCoder:] */

void FUN_10b086914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eeabf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f02a38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b086988; end: 10b0869ff; -[SCPreviewToolLens hash] */

undefined8 * FUN_10b086988(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b086a94;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar4 & 1) == 0) ||
       ((*(long *)((long)puVar3 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar3 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b086a94;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 8);
    if (puVar5 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b086a94;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b086a94:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b086a00; end: 10b086aaf; -[SCPreviewToolLens isEqual:] */

long FUN_10b086a00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b086a94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b086a94;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b086a94;
    }
  }
  lVar3 = 1;
LAB_10b086a94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b086ab0; end: 10b086ab7; -[SCPreviewToolLens lensId] */

undefined8 FUN_10b086ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b086ab8; end: 10b086abf; -[SCPreviewToolLens lensSource] */

undefined8 FUN_10b086ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b086ac0; end: 10b086ac7; -[SCPreviewToolLens lensType] */

undefined8 FUN_10b086ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b086ac8; end: 10b086ad3; -[SCPreviewToolLens .cxx_destruct] */

void FUN_10b086ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b086ad4; end: 10b086aef; +[SCPreviewToolLensBuilder previewToolLens] */

void FUN_10b086ad4(void)

{
  _objc_alloc_init(PTR_PTR_1126d8958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b086af0; end: 10b086bdb; +[SCPreviewToolLensBuilder previewToolLensFromExistingPreviewToolLens:] */

void FUN_10b086af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d8958;
  _objc_retain(param_3);
  func_0x00010c111fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c096ca0(param_3);
  puVar5 = puVar3;
  func_0x00010c2b2ca0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c097820(param_3);
  _objc_release(param_3);
  puVar6 = puVar5;
  func_0x00010c2b2d60(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b086bdc; end: 10b086c0f; -[SCPreviewToolLensBuilder build] */

void FUN_10b086bdc(void)

{
  _objc_alloc(PTR_PTR_1126c4320);
  func_0x00010c0246c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b086c10; end: 10b086c47; -[SCPreviewToolLensBuilder withLensId:] */

long FUN_10b086c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b086c48; end: 10b086c4f; -[SCPreviewToolLensBuilder withLensSource:] */

void FUN_10b086c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b086c50; end: 10b086c57; -[SCPreviewToolLensBuilder withLensType:] */

void FUN_10b086c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b086c58; end: 10b086c63; -[SCPreviewToolLensBuilder .cxx_destruct] */

void FUN_10b086c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b086c64; end: 10b086cdb; -[SCAICropToolLoggingParams initWithAppliedAICropTools:] */

undefined1 * FUN_10b086c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b086cdc; end: 10b086d63; -[SCAICropToolLoggingParams initWithCoder:] */

undefined1 * FUN_10b086cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051e0;
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



/* Entry: 10b086d64; end: 10b086d87; -[SCAICropToolLoggingParams copyWithZone:] */

undefined8 FUN_10b086d64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b086d88; end: 10b086d9f; -[SCAICropToolLoggingParams encodeWithCoder:] */

void FUN_10b086d88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f58e38);
  return;
}



/* Entry: 10b086da0; end: 10b086da7; -[SCAICropToolLoggingParams hash] */

void FUN_10b086da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b086da8; end: 10b086e37; -[SCAICropToolLoggingParams isEqual:] */

long FUN_10b086da8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b086e1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b086e1c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b086e1c;
    }
  }
  lVar3 = 1;
LAB_10b086e1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b086e38; end: 10b086e3f; -[SCAICropToolLoggingParams appliedAICropTools] */

undefined8 FUN_10b086e38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b086e40; end: 10b086e4b; -[SCAICropToolLoggingParams .cxx_destruct] */

void FUN_10b086e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b086e4c; end: 10b086ed7; -[SCMagicCaptionLoggingParams initWithCaptionAddCount:captionUseCount:interactionsMetadata:] */

undefined1 *
FUN_10b086e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127051e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b086ed8; end: 10b086f87; -[SCMagicCaptionLoggingParams initWithCoder:] */

undefined1 * FUN_10b086ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
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



/* Entry: 10b086f88; end: 10b086fab; -[SCMagicCaptionLoggingParams copyWithZone:] */

undefined8 FUN_10b086f88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b086fac; end: 10b08701f; -[SCMagicCaptionLoggingParams encodeWithCoder:] */

void FUN_10b086fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f56a98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f56ab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f58e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b087020; end: 10b087087; -[SCMagicCaptionLoggingParams hash] */

undefined8 * FUN_10b087020(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b08711c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b08711c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b08711c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b08711c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b087088; end: 10b087137; -[SCMagicCaptionLoggingParams isEqual:] */

long FUN_10b087088(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b08711c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10b08711c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b08711c;
    }
  }
  lVar3 = 1;
LAB_10b08711c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b087138; end: 10b08713f; -[SCMagicCaptionLoggingParams captionAddCount] */

undefined8 FUN_10b087138(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b087140; end: 10b087147; -[SCMagicCaptionLoggingParams captionUseCount] */

undefined8 FUN_10b087140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b087148; end: 10b08714f; -[SCMagicCaptionLoggingParams interactionsMetadata] */

undefined8 FUN_10b087148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b087150; end: 10b08715b; -[SCMagicCaptionLoggingParams .cxx_destruct] */

void FUN_10b087150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b08715c; end: 10b08721f; -[SCMagicCaptionInteractionMetadata initWithCoder:] */

undefined1 * FUN_10b08715c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127051f0;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b087220; end: 10b0872d3; -[SCMagicCaptionInteractionMetadata initWithGenerationRequestId:selectedCaptionId:isCaptionRemoved:] */

undefined1 *
FUN_10b087220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127051f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0872d4; end: 10b0872f7; -[SCMagicCaptionInteractionMetadata copyWithZone:] */

undefined8 FUN_10b0872d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0872f8; end: 10b08736b; -[SCMagicCaptionInteractionMetadata encodeWithCoder:] */

void FUN_10b0872f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f58e78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f58e98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f58eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b08736c; end: 10b0873e3; -[SCMagicCaptionInteractionMetadata hash] */

undefined8 * FUN_10b08736c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b087474:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b087480;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b087480;
        }
        goto LAB_10b087474;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b087480:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


