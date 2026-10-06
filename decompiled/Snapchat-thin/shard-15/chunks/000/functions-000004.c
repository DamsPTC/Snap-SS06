/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b74b0dc; end: 10b74b0e7; -[SCDynamicCaptionTextShadow .cxx_destruct] */

void FUN_10b74b0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74b0e8; end: 10b74b237; -[SCDynamicUnlockablesCaptionStyle initWithCoder:] */

undefined1 * FUN_10b74b0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a728;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74b238; end: 10b74b387; -[SCDynamicUnlockablesCaptionStyle initWithStyleId:displayName:fontStyle:backgroundStyle:isColorChangeable:baseColor:styleType:] */

undefined1 *
FUN_10b74b238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270a728;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74b388; end: 10b74b3ab; -[SCDynamicUnlockablesCaptionStyle copyWithZone:] */

undefined8 FUN_10b74b388(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74b3ac; end: 10b74b46f; -[SCDynamicUnlockablesCaptionStyle encodeWithCoder:] */

void FUN_10b74b3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f79958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f79978);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f79998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f799b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f799d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74b470; end: 10b74b517; -[SCDynamicUnlockablesCaptionStyle hash] */

undefined8 * FUN_10b74b470(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b74b600:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74b60c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071c60();
                goto LAB_10b74b60c;
              }
              goto LAB_10b74b600;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b74b60c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b74b518; end: 10b74b627; -[SCDynamicUnlockablesCaptionStyle isEqual:] */

long FUN_10b74b518(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74b600:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74b60c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071c60();
                goto LAB_10b74b60c;
              }
              goto LAB_10b74b600;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b74b60c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74b628; end: 10b74b62f; -[SCDynamicUnlockablesCaptionStyle styleId] */

undefined8 FUN_10b74b628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74b630; end: 10b74b637; -[SCDynamicUnlockablesCaptionStyle displayName] */

undefined8 FUN_10b74b630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74b638; end: 10b74b63f; -[SCDynamicUnlockablesCaptionStyle fontStyle] */

undefined8 FUN_10b74b638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b74b640; end: 10b74b647; -[SCDynamicUnlockablesCaptionStyle backgroundStyle] */

undefined8 FUN_10b74b640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b74b648; end: 10b74b64f; -[SCDynamicUnlockablesCaptionStyle isColorChangeable] */

undefined1 FUN_10b74b648(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b74b650; end: 10b74b657; -[SCDynamicUnlockablesCaptionStyle baseColor] */

undefined8 FUN_10b74b650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b74b658; end: 10b74b65f; -[SCDynamicUnlockablesCaptionStyle styleType] */

undefined8 FUN_10b74b658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b74b660; end: 10b74b6b3; -[SCDynamicUnlockablesCaptionStyle .cxx_destruct] */

void FUN_10b74b660(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b74b6b4; end: 10b74b837; -[CTPCustomStickerEntity initWithCoder:] */

undefined1 *
FUN_10b74b6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a730;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
    uVar2 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74b838; end: 10b74b99b; -[CTPCustomStickerEntity initWithCustomStickerId:encKey:encIv:mediaContent:mediaDimensions:creatorId:origin:isAnimated:] */

undefined1 *
FUN_10b74b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270a730;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_10;
    *(undefined1 *)((long)puVar1 + 8) = param_11;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74b99c; end: 10b74b9bf; -[CTPCustomStickerEntity copyWithZone:] */

undefined8 FUN_10b74b99c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74b9c0; end: 10b74bab3; -[CTPCustomStickerEntity encodeWithCoder:] */

void FUN_10b74b9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f799f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f27bb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f27bd8);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f79118);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79a18);
  _objc_release(uVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f492d8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f6d338);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f54b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74bab4; end: 10b74bb9f; -[CTPCustomStickerEntity hash] */

undefined8 * FUN_10b74bab4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b74bcac:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74bcb8;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      puVar7 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar3 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)((long)puVar3 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_10b74bcb8;
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if (((((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
           ((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
          ((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x30);
        if (puVar7 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b74bcb8;
        }
        goto LAB_10b74bcac;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b74bcb8:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b74bba0; end: 10b74bcd3; -[CTPCustomStickerEntity isEqual:] */

long FUN_10b74bba0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74bcac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74bcb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_10b74bcb8;
      lVar3 = *(long *)(param_1 + 0x10);
      if (((((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b74bcb8;
        }
        goto LAB_10b74bcac;
      }
    }
    lVar3 = 0;
  }
LAB_10b74bcb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74bcd4; end: 10b74bcdb; -[CTPCustomStickerEntity customStickerId] */

undefined8 FUN_10b74bcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74bcdc; end: 10b74bce3; -[CTPCustomStickerEntity encKey] */

undefined8 FUN_10b74bcdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74bce4; end: 10b74bceb; -[CTPCustomStickerEntity encIv] */

undefined8 FUN_10b74bce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b74bcec; end: 10b74bcf3; -[CTPCustomStickerEntity mediaContent] */

undefined8 FUN_10b74bcec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b74bcf4; end: 10b74bcfb; -[CTPCustomStickerEntity mediaDimensions] */

undefined1  [16] FUN_10b74bcf4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 10b74bcfc; end: 10b74bd03; -[CTPCustomStickerEntity creatorId] */

undefined8 FUN_10b74bcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b74bd04; end: 10b74bd0b; -[CTPCustomStickerEntity origin] */

undefined4 FUN_10b74bd04(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b74bd0c; end: 10b74bd13; -[CTPCustomStickerEntity isAnimated] */

undefined1 FUN_10b74bd0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b74bd14; end: 10b74bd67; -[CTPCustomStickerEntity .cxx_destruct] */

void FUN_10b74bd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b74bd68; end: 10b74be17; -[CTPEmojiEntity initWithCoder:] */

undefined1 * FUN_10b74bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a738;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74be18; end: 10b74bec3; -[CTPEmojiEntity initWithUnicode:hex:] */

undefined1 *
FUN_10b74be18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74bec4; end: 10b74bee7; -[CTPEmojiEntity copyWithZone:] */

undefined8 FUN_10b74bec4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74bee8; end: 10b74bf47; -[CTPEmojiEntity encodeWithCoder:] */

void FUN_10b74bee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74bf48; end: 10b74bfbb; -[CTPEmojiEntity hash] */

undefined8 * FUN_10b74bf48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b74c03c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74c048;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b74c048;
        }
        goto LAB_10b74c03c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b74c048:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b74bfbc; end: 10b74c063; -[CTPEmojiEntity isEqual:] */

long FUN_10b74bfbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74c03c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74c048;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b74c048;
        }
        goto LAB_10b74c03c;
      }
    }
    lVar3 = 0;
  }
LAB_10b74c048:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74c064; end: 10b74c06b; -[CTPEmojiEntity unicode] */

undefined8 FUN_10b74c064(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74c06c; end: 10b74c073; -[CTPEmojiEntity hex] */

undefined8 FUN_10b74c06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74c074; end: 10b74c0a3; -[CTPEmojiEntity .cxx_destruct] */

void FUN_10b74c074(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74c0a4; end: 10b74c12b; -[CTPFilterEntity initWithCoder:] */

undefined1 * FUN_10b74c0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a740;
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



/* Entry: 10b74c12c; end: 10b74c1a3; -[CTPFilterEntity initWithFilter:] */

undefined1 * FUN_10b74c12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a740;
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



/* Entry: 10b74c1a4; end: 10b74c1c7; -[CTPFilterEntity copyWithZone:] */

undefined8 FUN_10b74c1a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74c1c8; end: 10b74c1df; -[CTPFilterEntity encodeWithCoder:] */

void FUN_10b74c1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e550f8);
  return;
}



/* Entry: 10b74c1e0; end: 10b74c1e7; -[CTPFilterEntity hash] */

void FUN_10b74c1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b74c1e8; end: 10b74c277; -[CTPFilterEntity isEqual:] */

long FUN_10b74c1e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74c25c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b74c25c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b74c25c;
    }
  }
  lVar3 = 1;
LAB_10b74c25c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74c278; end: 10b74c27f; -[CTPFilterEntity filter] */

undefined8 FUN_10b74c278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74c280; end: 10b74c28b; -[CTPFilterEntity .cxx_destruct] */

void FUN_10b74c280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74c28c; end: 10b74c313; -[CTPProxyEntity initWithCoder:] */

undefined1 * FUN_10b74c28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a748;
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



/* Entry: 10b74c314; end: 10b74c38b; -[CTPProxyEntity initWithProxyItem:] */

undefined1 * FUN_10b74c314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a748;
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



/* Entry: 10b74c38c; end: 10b74c3af; -[CTPProxyEntity copyWithZone:] */

undefined8 FUN_10b74c38c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74c3b0; end: 10b74c3c7; -[CTPProxyEntity encodeWithCoder:] */

void FUN_10b74c3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f79a78);
  return;
}



/* Entry: 10b74c3c8; end: 10b74c3cf; -[CTPProxyEntity hash] */

void FUN_10b74c3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b74c3d0; end: 10b74c45f; -[CTPProxyEntity isEqual:] */

long FUN_10b74c3d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74c444;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b74c444;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b74c444;
    }
  }
  lVar3 = 1;
LAB_10b74c444:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74c460; end: 10b74c467; -[CTPProxyEntity proxyItem] */

undefined8 FUN_10b74c460(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74c468; end: 10b74c473; -[CTPProxyEntity .cxx_destruct] */

void FUN_10b74c468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74c474; end: 10b74c557; -[CTPGiphyEntity initWithCoder:] */

undefined1 *
FUN_10b74c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a750;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74c558; end: 10b74c617; -[CTPGiphyEntity initWithGiphyId:mediaContent:mediaDimensions:] */

undefined1 *
FUN_10b74c558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a750;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74c618; end: 10b74c63b; -[CTPGiphyEntity copyWithZone:] */

undefined8 FUN_10b74c618(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74c63c; end: 10b74c6cb; -[CTPGiphyEntity encodeWithCoder:] */

void FUN_10b74c63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79a98);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79118);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79a18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b74c6cc; end: 10b74c783; -[CTPGiphyEntity hash] */

undefined8 * FUN_10b74c6cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b74c818:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74c824;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b74c824;
        }
        goto LAB_10b74c818;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b74c824:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b74c784; end: 10b74c83f; -[CTPGiphyEntity isEqual:] */

long FUN_10b74c784(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74c818:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74c824;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b74c824;
        }
        goto LAB_10b74c818;
      }
    }
    lVar4 = 0;
  }
LAB_10b74c824:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b74c840; end: 10b74c847; -[CTPGiphyEntity giphyId] */

undefined8 FUN_10b74c840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74c848; end: 10b74c84f; -[CTPGiphyEntity mediaContent] */

undefined8 FUN_10b74c848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74c850; end: 10b74c857; -[CTPGiphyEntity mediaDimensions] */

undefined1  [16] FUN_10b74c850(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10b74c858; end: 10b74c887; -[CTPGiphyEntity .cxx_destruct] */

void FUN_10b74c858(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74c888; end: 10b74c96b; -[CTPGfycatEntity initWithCoder:] */

undefined1 *
FUN_10b74c888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a758;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74c96c; end: 10b74ca2b; -[CTPGfycatEntity initWithGfycatId:mediaContent:mediaDimensions:] */

undefined1 *
FUN_10b74c96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a758;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74ca2c; end: 10b74ca4f; -[CTPGfycatEntity copyWithZone:] */

undefined8 FUN_10b74ca2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74ca50; end: 10b74cadf; -[CTPGfycatEntity encodeWithCoder:] */

void FUN_10b74ca50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79ab8);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79118);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79a18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b74cae0; end: 10b74cb97; -[CTPGfycatEntity hash] */

undefined8 * FUN_10b74cae0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b74cc2c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74cc38;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b74cc38;
        }
        goto LAB_10b74cc2c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b74cc38:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b74cb98; end: 10b74cc53; -[CTPGfycatEntity isEqual:] */

long FUN_10b74cb98(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74cc2c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74cc38;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b74cc38;
        }
        goto LAB_10b74cc2c;
      }
    }
    lVar4 = 0;
  }
LAB_10b74cc38:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b74cc54; end: 10b74cc5b; -[CTPGfycatEntity gfycatId] */

undefined8 FUN_10b74cc54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74cc5c; end: 10b74cc63; -[CTPGfycatEntity mediaContent] */

undefined8 FUN_10b74cc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74cc64; end: 10b74cc6b; -[CTPGfycatEntity mediaDimensions] */

undefined1  [16] FUN_10b74cc64(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10b74cc6c; end: 10b74cc9b; -[CTPGfycatEntity .cxx_destruct] */

void FUN_10b74cc6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74cc9c; end: 10b74cd5f; -[CTPSnapStickerEntity initWithCoder:] */

undefined1 * FUN_10b74cc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a760;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74cd60; end: 10b74ce13; -[CTPSnapStickerEntity initWithSnapStickerId:isAnimated:mediaContent:] */

undefined1 *
FUN_10b74cd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a760;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74ce14; end: 10b74ce37; -[CTPSnapStickerEntity copyWithZone:] */

undefined8 FUN_10b74ce14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74ce38; end: 10b74ceab; -[CTPSnapStickerEntity encodeWithCoder:] */

void FUN_10b74ce38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79ad8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f54b58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f79118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74ceac; end: 10b74cf23; -[CTPSnapStickerEntity hash] */

undefined8 * FUN_10b74ceac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b74cfb4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74cfc0;
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
          goto LAB_10b74cfc0;
        }
        goto LAB_10b74cfb4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b74cfc0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b74cf24; end: 10b74cfdb; -[CTPSnapStickerEntity isEqual:] */

long FUN_10b74cf24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74cfb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74cfc0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b74cfc0;
        }
        goto LAB_10b74cfb4;
      }
    }
    lVar3 = 0;
  }
LAB_10b74cfc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74cfdc; end: 10b74cfe3; -[CTPSnapStickerEntity snapStickerId] */

undefined8 FUN_10b74cfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74cfe4; end: 10b74cfeb; -[CTPSnapStickerEntity isAnimated] */

undefined1 FUN_10b74cfe4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b74cfec; end: 10b74cff3; -[CTPSnapStickerEntity mediaContent] */

undefined8 FUN_10b74cfec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74cff4; end: 10b74d023; -[CTPSnapStickerEntity .cxx_destruct] */

void FUN_10b74cff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b74d024; end: 10b74d0bf; -[CTPMusicEntity initWithCoder:] */

undefined1 * FUN_10b74d024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a768;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74d0c0; end: 10b74d147; -[CTPMusicEntity initWithTrackId:protoData:] */

undefined1 *
FUN_10b74d0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a768;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74d148; end: 10b74d16b; -[CTPMusicEntity copyWithZone:] */

undefined8 FUN_10b74d148(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74d16c; end: 10b74d1cb; -[CTPMusicEntity encodeWithCoder:] */

void FUN_10b74d16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79af8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74d1cc; end: 10b74d22b; -[CTPMusicEntity hash] */

undefined8 * FUN_10b74d1cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74d2b0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b74d2b0;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b74d2b0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b74d2b0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b74d22c; end: 10b74d2cb; -[CTPMusicEntity isEqual:] */

long FUN_10b74d22c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74d2b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b74d2b0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b74d2b0;
    }
  }
  lVar3 = 1;
LAB_10b74d2b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74d2cc; end: 10b74d2d3; -[CTPMusicEntity trackId] */

undefined8 FUN_10b74d2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74d2d4; end: 10b74d2db; -[CTPMusicEntity protoData] */

undefined8 FUN_10b74d2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74d2dc; end: 10b74d2e7; -[CTPMusicEntity .cxx_destruct] */

void FUN_10b74d2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b74d2e8; end: 10b74d35b; -[CTPInfoStickerEntity initWithCoder:] */

undefined1 * FUN_10b74d2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a770;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74d35c; end: 10b74d3a3; -[CTPInfoStickerEntity initWithInfoStickerType:] */

void FUN_10b74d35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a770;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b74d3a4; end: 10b74d3c7; -[CTPInfoStickerEntity copyWithZone:] */

undefined8 FUN_10b74d3a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74d3c8; end: 10b74d3df; -[CTPInfoStickerEntity encodeWithCoder:] */

void FUN_10b74d3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInteger_forKey__1125c2598,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f79b38);
  return;
}



/* Entry: 10b74d3e0; end: 10b74d3e7; -[CTPInfoStickerEntity hash] */

undefined8 FUN_10b74d3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74d3e8; end: 10b74d46f; -[CTPInfoStickerEntity isEqual:] */

bool FUN_10b74d3e8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}


