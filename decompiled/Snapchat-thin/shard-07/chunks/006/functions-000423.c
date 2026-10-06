/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057c73c8; end: 1057c74ff; -[SCCommerceCheckoutSummaryCellViewModel initWithCoder:] */

undefined1 *
FUN_1057c73c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  puStack_38 = PTR_PTR_1126ea468;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _UIEdgeInsetsFromString();
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7500; end: 1057c7623; -[SCCommerceCheckoutSummaryCellViewModel initWithLeftLabelString:rightLabelString:backgroundColor:edgeInsets:rightLabelAccessibilityIdentifier:] */

undefined1 *
FUN_1057c7500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ea468;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7624; end: 1057c7647; -[SCCommerceCheckoutSummaryCellViewModel copyWithZone:] */

undefined8 FUN_1057c7624(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7648; end: 1057c7703; -[SCCommerceCheckoutSummaryCellViewModel encodeWithCoder:] */

void FUN_1057c7648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02b98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e02bb8);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e02bd8);
  _NSStringFromUIEdgeInsets
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02bf8);
  _objc_release(uVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e02c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057c7704; end: 1057c770b; -[SCCommerceCheckoutSummaryCellViewModel leftLabelString] */

undefined8 FUN_1057c7704(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c770c; end: 1057c7713; -[SCCommerceCheckoutSummaryCellViewModel rightLabelString] */

undefined8 FUN_1057c770c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c7714; end: 1057c771b; -[SCCommerceCheckoutSummaryCellViewModel backgroundColor] */

undefined8 FUN_1057c7714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c771c; end: 1057c7727; -[SCCommerceCheckoutSummaryCellViewModel edgeInsets] */

undefined8 FUN_1057c771c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057c7728; end: 1057c772f; -[SCCommerceCheckoutSummaryCellViewModel rightLabelAccessibilityIdentifier] */

undefined8 FUN_1057c7728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057c7730; end: 1057c7777; -[SCCommerceCheckoutSummaryCellViewModel .cxx_destruct] */

void FUN_1057c7730(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c7778; end: 1057c7843; -[SCCommerceCheckoutSummaryViewModel initWithCellViewModels:backgroundColor:edgeInsets:] */

undefined1 *
FUN_1057c7778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea470;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7844; end: 1057c792b; -[SCCommerceCheckoutSummaryViewModel initWithCoder:] */

undefined1 *
FUN_1057c7844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  puStack_38 = PTR_PTR_1126ea470;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _UIEdgeInsetsFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c792c; end: 1057c794f; -[SCCommerceCheckoutSummaryViewModel copyWithZone:] */

undefined8 FUN_1057c792c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7950; end: 1057c79e3; -[SCCommerceCheckoutSummaryViewModel encodeWithCoder:] */

void FUN_1057c7950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c38);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e02bd8);
  _NSStringFromUIEdgeInsets
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02bf8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057c79e4; end: 1057c79eb; -[SCCommerceCheckoutSummaryViewModel cellViewModels] */

undefined8 FUN_1057c79e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c79ec; end: 1057c79f3; -[SCCommerceCheckoutSummaryViewModel backgroundColor] */

undefined8 FUN_1057c79ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c79f4; end: 1057c79ff; -[SCCommerceCheckoutSummaryViewModel edgeInsets] */

undefined8 FUN_1057c79f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c7a00; end: 1057c7a2f; -[SCCommerceCheckoutSummaryViewModel .cxx_destruct] */

void FUN_1057c7a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c7a30; end: 1057c7adb; -[SCCommerceProductDetailsBitmojiAvatarViewModel initWithImage:name:isCurrentUser:] */

undefined1 *
FUN_1057c7a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7adc; end: 1057c7aff; -[SCCommerceProductDetailsBitmojiAvatarViewModel copyWithZone:] */

undefined8 FUN_1057c7adc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7b00; end: 1057c7b77; -[SCCommerceProductDetailsBitmojiAvatarViewModel hash] */

undefined8 * FUN_1057c7b00(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057c7c08:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057c7c14;
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
          goto LAB_1057c7c14;
        }
        goto LAB_1057c7c08;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057c7c14:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057c7b78; end: 1057c7c2f; -[SCCommerceProductDetailsBitmojiAvatarViewModel isEqual:] */

long FUN_1057c7b78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c7c08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c7c14;
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
          goto LAB_1057c7c14;
        }
        goto LAB_1057c7c08;
      }
    }
    lVar3 = 0;
  }
LAB_1057c7c14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c7c30; end: 1057c7c37; -[SCCommerceProductDetailsBitmojiAvatarViewModel image] */

undefined8 FUN_1057c7c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c7c38; end: 1057c7c3f; -[SCCommerceProductDetailsBitmojiAvatarViewModel name] */

undefined8 FUN_1057c7c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c7c40; end: 1057c7c47; -[SCCommerceProductDetailsBitmojiAvatarViewModel isCurrentUser] */

undefined1 FUN_1057c7c40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057c7c48; end: 1057c7c77; -[SCCommerceProductDetailsBitmojiAvatarViewModel .cxx_destruct] */

void FUN_1057c7c48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057c7c78; end: 1057c7ceb; -[SCCommerceProductDetailsBitmojiComicViewModel initWithImage:] */

undefined1 * FUN_1057c7c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea480;
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



/* Entry: 1057c7cec; end: 1057c7d0f; -[SCCommerceProductDetailsBitmojiComicViewModel copyWithZone:] */

undefined8 FUN_1057c7cec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7d10; end: 1057c7d17; -[SCCommerceProductDetailsBitmojiComicViewModel hash] */

void FUN_1057c7d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1057c7d18; end: 1057c7da7; -[SCCommerceProductDetailsBitmojiComicViewModel isEqual:] */

long FUN_1057c7d18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c7d8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1057c7d8c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1057c7d8c;
    }
  }
  lVar3 = 1;
LAB_1057c7d8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c7da8; end: 1057c7daf; -[SCCommerceProductDetailsBitmojiComicViewModel image] */

undefined8 FUN_1057c7da8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c7db0; end: 1057c7dbb; -[SCCommerceProductDetailsBitmojiComicViewModel .cxx_destruct] */

void FUN_1057c7db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c7dbc; end: 1057c7eef; -[SCCommerceProductDetailsBitmojiViewModel initWithAvatars:comic:userHasNoBitmoji:addFriendImageObservable:avatarPlusImageObservable:switchButtonImageObservable:] */

undefined1 *
FUN_1057c7dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea488;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c7ef0; end: 1057c7f13; -[SCCommerceProductDetailsBitmojiViewModel copyWithZone:] */

undefined8 FUN_1057c7ef0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c7f14; end: 1057c7f1b; -[SCCommerceProductDetailsBitmojiViewModel avatars] */

undefined8 FUN_1057c7f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c7f1c; end: 1057c7f23; -[SCCommerceProductDetailsBitmojiViewModel comic] */

undefined8 FUN_1057c7f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057c7f24; end: 1057c7f2b; -[SCCommerceProductDetailsBitmojiViewModel userHasNoBitmoji] */

undefined1 FUN_1057c7f24(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057c7f2c; end: 1057c7f33; -[SCCommerceProductDetailsBitmojiViewModel addFriendImageObservable] */

undefined8 FUN_1057c7f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057c7f34; end: 1057c7f3b; -[SCCommerceProductDetailsBitmojiViewModel avatarPlusImageObservable] */

undefined8 FUN_1057c7f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057c7f3c; end: 1057c7f43; -[SCCommerceProductDetailsBitmojiViewModel switchButtonImageObservable] */

undefined8 FUN_1057c7f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057c7f44; end: 1057c7f97; -[SCCommerceProductDetailsBitmojiViewModel .cxx_destruct] */

void FUN_1057c7f44(long param_1)

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



/* Entry: 1057c7f98; end: 1057c8047; -[SCCommerceCollectionViewCellImageModel initWithCoder:] */

undefined1 * FUN_1057c7f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea490;
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



/* Entry: 1057c8048; end: 1057c80f3; -[SCCommerceCollectionViewCellImageModel initWithIdentifier:imageModel:] */

undefined1 *
FUN_1057c8048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea490;
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



/* Entry: 1057c80f4; end: 1057c8117; -[SCCommerceCollectionViewCellImageModel copyWithZone:] */

undefined8 FUN_1057c80f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057c8118; end: 1057c8177; -[SCCommerceCollectionViewCellImageModel encodeWithCoder:] */

void FUN_1057c8118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e02c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057c8178; end: 1057c81eb; -[SCCommerceCollectionViewCellImageModel hash] */

undefined8 * FUN_1057c8178(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1057c826c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1057c8278;
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
          goto LAB_1057c8278;
        }
        goto LAB_1057c826c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1057c8278:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1057c81ec; end: 1057c8293; -[SCCommerceCollectionViewCellImageModel isEqual:] */

long FUN_1057c81ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057c826c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057c8278;
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
          goto LAB_1057c8278;
        }
        goto LAB_1057c826c;
      }
    }
    lVar3 = 0;
  }
LAB_1057c8278:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057c8294; end: 1057c829b; -[SCCommerceCollectionViewCellImageModel identifier] */

undefined8 FUN_1057c8294(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c829c; end: 1057c82a3; -[SCCommerceCollectionViewCellImageModel imageModel] */

undefined8 FUN_1057c829c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057c82a4; end: 1057c82d3; -[SCCommerceCollectionViewCellImageModel .cxx_destruct] */

void FUN_1057c82a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c82d4; end: 1057c8513; -[SCCommerceBitmojiDataProvider initWithUserId:grapheneRegistry:unifiedGRPCClientFactory:boltDataUploader:] */

undefined1 *
FUN_1057c82d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea498;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0380;
    func_0x00010c291260(PTR_PTR_1126b0380);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21dec0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf56360(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0b00;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057c8514; end: 1057c8763; -[SCCommerceBitmojiDataProvider _bitmojiResponseHandler:request:startTimeStamp:error:completionBlock:] */

void FUN_1057c8514(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02c98,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (param_6 != 0) {
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c13ca20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfe2fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c13ca20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c115f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      (**(code **)(param_6 + 0x10))(param_6,lVar5,lVar3,0);
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    else {
      (**(code **)(param_6 + 0x10))(param_6,0,0,lVar4);
    }
  }
  _objc_release(lVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057c8764; end: 1057c884f; -[SCCommerceBitmojiDataProvider _vendCallOptions] */

void FUN_1057c8764(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined ***in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar4 = PTR_PTR_113185418;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(PTR_PTR_113185418);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x1;
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puStack_40 = puVar4;
    in_x3 = &ppuStack_48;
    in_x4 = 1;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bef9140(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuStack_48;
  _objc_retain(puVar7);
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_50);
  _objc_retain(ppuVar1);
  puVar2 = PTR_PTR_1126be550;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010beec820(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a60(puVar2);
  _objc_release(puVar3);
  pppuVar5 = in_x3;
  func_0x00010c0d3c80(in_x3);
  func_0x00010c16da80(puVar2);
  _objc_release(pppuVar5);
  uVar8 = in_x4;
  func_0x000100504554(in_x4,&PTR___NSConcreteGlobalBlock_1108b2908);
  uVar6 = uVar8;
  func_0x00010c0d3c80();
  func_0x00010c21e700(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar8);
  uVar8 = in_x5;
  func_0x00010bf64920(in_x5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171380(puVar2);
  _objc_release(uVar8);
  func_0x00010c17ece0(puVar2);
  uVar8 = in_x7;
  func_0x00010bf64920(in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(puVar2);
  _objc_release(uVar8);
  uVar8 = uStack_50;
  func_0x00010bf64920(uStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(puVar2);
  _objc_release(uVar8);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_c8,puVar4);
  uVar8 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010bee7fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_c8);
  _objc_retain(puVar2);
  uStack_d0 = param_1;
  _objc_retain(ppuVar1);
  func_0x00010bef9fa0(uVar8);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  _objc_release(puVar7);
  return;
}



/* Entry: 1057c8850; end: 1057c8b53; -[SCCommerceBitmojiDataProvider _uploadSuccessHelper:avatarIds:userIds:bitmojiAssetId:comicId:productId:variantId:completion:] */

void FUN_1057c8850(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126be550;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a60(puVar1);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0d3c80(param_5);
  func_0x00010c16da80(puVar1);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_1108b2908);
  uVar2 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c21e700(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_7;
  func_0x00010bf64920(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171380(puVar1);
  _objc_release(uVar3);
  func_0x00010c17ece0(puVar1);
  uVar3 = param_9;
  func_0x00010bf64920(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(puVar1);
  _objc_release(uVar3);
  uVar3 = param_10;
  func_0x00010bf64920(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(puVar1);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_78,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(puVar1);
  uStack_80 = param_1;
  _objc_retain(param_11);
  func_0x00010bef9fa0(uVar3);
  _objc_release(param_2);
  _objc_release(param_11);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057c8b54; end: 1057c8bb7;  */

void FUN_1057c8b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057c8bb8; end: 1057c8c27;  */

void FUN_1057c8bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd4980(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057c8c28; end: 1057c8c2b; -[SCCommerceBitmojiDataProvider _uploadFailureHelper:completion:] */

void FUN_1057c8c28(void)

{
  return;
}



/* Entry: 1057c8c2c; end: 1057c8fab; -[SCCommerceBitmojiDataProvider uploadBitmojiProductImage:avatarIds:userIds:bitmojiAssetId:comicId:productId:variantId:completion:] */

void FUN_1057c8c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_3;
  _UIImageJPEGRepresentation(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126b5980;
  func_0x00010bf1f1e0(PTR_PTR_1126b5980);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aade0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3a20(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc180(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8800(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5988;
  func_0x00010bfeb740(PTR_PTR_1126b5988);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abca0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1057c8fac;
  puStack_c8 = &UNK_1108b2958;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  _objc_retain(param_6);
  uStack_b0 = param_6;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_98 = param_9;
  _objc_retain(param_10);
  uStack_90 = param_10;
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_10);
  func_0x00010c28eb40(uVar4);
  _objc_release(puVar3);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
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



/* Entry: 1057c8fac; end: 1057c90ab;  */

void FUN_1057c8fac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee5e20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057c90ac; end: 1057c90ff; -[SCCommerceBitmojiDataProvider .cxx_destruct] */

void FUN_1057c90ac(long param_1)

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



/* Entry: 1057c9100; end: 1057c9173; -[SCCommerceOrderServices initWithCheckoutCoordinator:] */

undefined1 * FUN_1057c9100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea4a0;
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



/* Entry: 1057c9174; end: 1057c917b; -[SCCommerceOrderServices checkoutCoordinator] */

undefined8 FUN_1057c9174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057c917c; end: 1057c9187; -[SCCommerceOrderServices .cxx_destruct] */

void FUN_1057c917c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057c9188; end: 1057c9567;  */

undefined *
FUN_1057c9188(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined **param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_4;
  ppuVar5 = param_5;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == (undefined **)0x0) {
    if ((param_1 == 0) || (param_4 != 0)) {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc();
      iVar3 = 0;
      func_0x00010bf98940();
      lVar11 = (long)iVar3;
      ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      func_0x00010c00e2e0();
      _objc_release(ppuVar6);
      goto LAB_1057c9464;
    }
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_5;
    func_0x00010bf98940();
    iVar3 = (int)ppuVar7;
    ppuVar6 = ppuVar4;
    if (iVar3 < 0x30) {
      puVar10 = (undefined *)0x0;
      switch((ulong)ppuVar7 & 0xffffffff) {
      case 0:
        goto code_r0x0001057c9458;
      default:
LAB_1057c94cc:
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        _objc_alloc();
        ppuVar5 = param_5;
        func_0x00010bf98940();
        lVar11 = (long)(int)ppuVar5;
        ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar7;
        func_0x00010c00e2e0();
        _objc_release(ppuVar7);
        goto LAB_1057c9450;
      case 0xf:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02cf8;
        break;
      case 0x10:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02d18;
        break;
      case 0x12:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02d38;
        break;
      case 0x13:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02d58;
        break;
      case 0x14:
      case 0x15:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02d78;
        break;
      case 0x16:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02d98;
        break;
      case 0x17:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02db8;
        break;
      case 0x18:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02dd8;
        break;
      case 0x19:
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02df8;
      }
LAB_1057c93c4:
      func_0x00010bcbeaa8(ppuVar6,0);
      _objc_retainAutoreleasedReturnValue();
LAB_1057c93d4:
      _objc_release(ppuVar4);
    }
    else {
      if (iVar3 == 0x30) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02e18;
        goto LAB_1057c93c4;
      }
      if (iVar3 == 0x31) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e02e38;
        goto LAB_1057c93c4;
      }
      if (iVar3 != 0x34) goto LAB_1057c94cc;
      ppuVar5 = param_5;
      func_0x00010bf66320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar6 = param_5;
        func_0x00010bf66320();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1057c93d4;
      }
    }
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    ppuVar5 = param_5;
    func_0x00010bf98940();
    lVar11 = (long)(int)ppuVar5;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c00e2e0();
LAB_1057c9450:
    _objc_release(ppuVar4);
code_r0x0001057c9458:
    _objc_release(ppuVar6);
    ppuVar4 = param_5;
LAB_1057c9464:
    _objc_release(ppuVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar11);
  _objc_retain(ppuVar5);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 == (undefined **)0x0) {
    if ((param_1 == 0) || (lVar11 != 0)) {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010bf3ec40(lVar11);
      ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1057c96ec;
    }
LAB_1057c9618:
    puVar10 = (undefined *)0x0;
    goto LAB_1057c9818;
  }
  ppuVar6 = ppuVar5;
  func_0x00010bf98940();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e02cf8;
  switch((int)ppuVar6) {
  case 0xf:
    break;
  case 0x10:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02d18;
    break;
  case 0x11:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    goto code_r0x0001057c9690;
  case 0x12:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02d38;
    break;
  case 0x13:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02d58;
    break;
  case 0x14:
  case 0x15:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02d78;
    break;
  case 0x16:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02d98;
    break;
  case 0x17:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02db8;
    break;
  case 0x18:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02dd8;
    break;
  case 0x19:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02df8;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02e18;
    break;
  case 0x31:
    ppuVar7 = &PTR____CFConstantStringClassReference_110e02e38;
    break;
  default:
    if ((int)ppuVar6 == 0) goto LAB_1057c9618;
    goto code_r0x0001057c9690;
  }
  func_0x00010bcbeaa8(ppuVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010bf98940(ppuVar5);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar10);
LAB_1057c9810:
  _objc_release(ppuVar6);
  ppuVar4 = ppuVar7;
LAB_1057c9818:
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  _objc_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    if (puRam00000001136c06c0 == (undefined *)0x0) {
      puVar10 = PTR_PTR_1126ae980;
      func_0x00010bf00e20();
      do {
        if (puRam00000001136c06c0 != (undefined *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return puRam00000001136c06c0;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c06c0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          puRam00000001136c06c0 = puVar10;
        }
      } while (cVar1 != '\0');
    }
    return puRam00000001136c06c0;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
code_r0x0001057c9690:
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010bf98940(ppuVar5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
LAB_1057c96ec:
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar10);
  _objc_release(puVar8);
  ppuVar7 = ppuVar4;
  goto LAB_1057c9810;
}



/* Entry: 1057c9568; end: 1057c986b;  */

undefined *
FUN_1057c9568(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    if ((param_1 != 0) && (param_4 == 0)) {
LAB_1057c9618:
      puVar9 = (undefined *)0x0;
      goto LAB_1057c9818;
    }
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010bf3ec40(param_4);
    ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1057c96ec;
  }
  lVar4 = param_5;
  func_0x00010bf98940();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e02cf8;
  switch((int)lVar4) {
  case 0xf:
    break;
  case 0x10:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02d18;
    break;
  case 0x11:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    goto code_r0x0001057c9690;
  case 0x12:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02d38;
    break;
  case 0x13:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02d58;
    break;
  case 0x14:
  case 0x15:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02d78;
    break;
  case 0x16:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02d98;
    break;
  case 0x17:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02db8;
    break;
  case 0x18:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02dd8;
    break;
  case 0x19:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02df8;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02e18;
    break;
  case 0x31:
    ppuVar5 = &PTR____CFConstantStringClassReference_110e02e38;
    break;
  default:
    if ((int)lVar4 == 0) goto LAB_1057c9618;
    goto code_r0x0001057c9690;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010bf98940(param_5);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar9);
LAB_1057c9810:
  _objc_release(ppuVar6);
  ppuVar3 = ppuVar5;
LAB_1057c9818:
  _objc_release(ppuVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  if (puRam00000001136c06c0 == (undefined *)0x0) {
    puVar9 = PTR_PTR_1126ae980;
    func_0x00010bf00e20();
    do {
      if (puRam00000001136c06c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c06c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c06c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c06c0 = puVar9;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c06c0;
code_r0x0001057c9690:
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010bf98940(param_5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110db9c98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
  _objc_retainAutoreleasedReturnValue();
LAB_1057c96ec:
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar9);
  _objc_release(puVar7);
  ppuVar5 = ppuVar3;
  goto LAB_1057c9810;
}



/* Entry: 1057c986c; end: 1057c98fb;  */

undefined * FUN_1057c986c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c06c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e02e58,
                        &UNK_10ddbdc28,&UNK_10ddbe048,0x3a,FUN_1057c98fc,0,&UNK_10ddbe130);
    do {
      if (puRam00000001136c06c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c06c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c06c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c06c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c06c0;
}



/* Entry: 1057c98fc; end: 1057c9907;  */

bool FUN_1057c98fc(uint param_1)

{
  return param_1 < 0x3a;
}



/* Entry: 1057c9908; end: 1057c996f; +[SCPaymentsCommerceServiceError descriptor] */

void FUN_1057c9908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a3a0,
                        &PTR____CFConstantStringClassReference_110e02e78,
                        &PTR_s_snapchat_payments_commerce_commo_113100520,&PTR_DAT_113100538,2,0x10,
                        0x1c);
    puRam00000001136c06c8 = puVar1;
  }
  return;
}



/* Entry: 1057c9970; end: 1057c99e3; -[UNIOrderService initWithUnifiedGrpcService:] */

undefined1 * FUN_1057c9970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea4a8;
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



/* Entry: 1057c99e4; end: 1057c9ac7; -[UNIOrderService getSingleOrderWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c99e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be558;
  _objc_opt_class(PTR_PTR_1126be558);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02e98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9ac8; end: 1057c9bab; -[UNIOrderService getOrderHistoryWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be560;
  _objc_opt_class(PTR_PTR_1126be560);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02eb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9bac; end: 1057c9c8f; -[UNIOrderService uploadSingleOrderWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be568;
  _objc_opt_class(PTR_PTR_1126be568);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02ed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9c90; end: 1057c9d73; -[UNIOrderService createNewCheckoutWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be570;
  _objc_opt_class(PTR_PTR_1126be570);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02ef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9d74; end: 1057c9e57; -[UNIOrderService getCheckoutWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be578;
  _objc_opt_class(PTR_PTR_1126be578);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02f18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9e58; end: 1057c9f3b; -[UNIOrderService updateCheckoutWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be580;
  _objc_opt_class(PTR_PTR_1126be580);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02f38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057c9f3c; end: 1057ca01f; -[UNIOrderService payCheckoutWithRequest:callOptionsBuilder:handler:] */

void FUN_1057c9f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be588;
  _objc_opt_class(PTR_PTR_1126be588);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02f58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ca020; end: 1057ca103; -[UNIOrderService addNewBitmojiProductAssetWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ca020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be590;
  _objc_opt_class(PTR_PTR_1126be590);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02f78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ca104; end: 1057ca10f; -[UNIOrderService .cxx_destruct] */

void FUN_1057ca104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057ca110; end: 1057ca18b; +[AddNewBitmojiProductAssetRequest descriptor] */

undefined * FUN_1057ca110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a4e0,
                        &PTR____CFConstantStringClassReference_110e02f98,&PTR_DAT_113100580,
                        &PTR_s_productId_113100638,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c06d0 = puVar1;
  }
  return puRam00000001136c06d0;
}



/* Entry: 1057ca18c; end: 1057ca217; +[AddNewBitmojiProductAssetResponse descriptor] */

undefined * FUN_1057ca18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a530,
                        &PTR____CFConstantStringClassReference_110e02fb8,&PTR_DAT_113100580,
                        &PTR_s_result_1131005d8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c06d8 = puVar1;
  }
  return puRam00000001136c06d8;
}



/* Entry: 1057ca218; end: 1057ca2a3; +[AddNewBitmojiProductAssetResponse_AddNewBitmojiProductAssetResult descriptor] */

undefined * FUN_1057ca218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a580,
                        &PTR____CFConstantStringClassReference_110e02fd8,&PTR_DAT_113100580,
                        &PTR_s_productImageURL_113100598,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a6a530);
    puRam00000001136c06e0 = puVar1;
  }
  return puRam00000001136c06e0;
}



/* Entry: 1057ca2a4; end: 1057ca30b; +[CreateNewCheckoutRequest descriptor] */

void FUN_1057ca2a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a620,
                        &PTR____CFConstantStringClassReference_110e02ff8,&PTR_DAT_113100720,
                        &PTR_s_userId_113100738,2,0x18,0x1c);
    puRam00000001136c06e8 = puVar1;
  }
  return;
}



/* Entry: 1057ca30c; end: 1057ca397; +[CreateNewCheckoutResponse descriptor] */

undefined * FUN_1057ca30c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a670,
                        &PTR____CFConstantStringClassReference_110e03018,&PTR_DAT_113100720,
                        &PTR_DAT_113100778,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c06f0 = puVar1;
  }
  return puRam00000001136c06f0;
}



/* Entry: 1057ca398; end: 1057ca3ff; +[GetCheckoutRequest descriptor] */

void FUN_1057ca398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c06f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a710,
                        &PTR____CFConstantStringClassReference_110e03038,&PTR_DAT_1131007e0,
                        &PTR_DAT_1131007f8,1,0x10,0x1c);
    puRam00000001136c06f8 = puVar1;
  }
  return;
}



/* Entry: 1057ca400; end: 1057ca48b; +[GetCheckoutResponse descriptor] */

undefined * FUN_1057ca400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a760,
                        &PTR____CFConstantStringClassReference_110e03058,&PTR_DAT_1131007e0,
                        &PTR_DAT_113100818,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0700 = puVar1;
  }
  return puRam00000001136c0700;
}



/* Entry: 1057ca48c; end: 1057ca4f3; +[GetOrderHistoryRequest descriptor] */

void FUN_1057ca48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a800,
                        &PTR____CFConstantStringClassReference_110db23d8,&PTR_DAT_113100880,
                        &PTR_s_userId_113100958,4,0x18,0x1c);
    puRam00000001136c0708 = puVar1;
  }
  return;
}



/* Entry: 1057ca4f4; end: 1057ca57f; +[GetOrderHistoryResponse descriptor] */

undefined * FUN_1057ca4f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a850,
                        &PTR____CFConstantStringClassReference_110db2418,&PTR_DAT_113100880,
                        &PTR_s_orderHistory_1131008f8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0710 = puVar1;
  }
  return puRam00000001136c0710;
}



/* Entry: 1057ca580; end: 1057ca5fb; +[GetOrderHistoryResponse_OrderHistory descriptor] */

undefined * FUN_1057ca580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a8a0,
                        &PTR____CFConstantStringClassReference_110db23f8,&PTR_DAT_113100880,
                        &PTR_s_ordersArray_1131008b8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0718 = puVar1;
  }
  return puRam00000001136c0718;
}



/* Entry: 1057ca5fc; end: 1057ca6f3; +[GetOrderHistoryResponse_OrderHistoryInternalPaginationCursor descriptor] */

undefined * FUN_1057ca5fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a8f0,
                        &PTR____CFConstantStringClassReference_110e03078,&PTR_DAT_113100880,
                        &PTR_DAT_113100898,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c0720 = puVar1;
  }
  return puRam00000001136c0720;
}



/* Entry: 1057ca6f4; end: 1057ca6ff;  */

bool FUN_1057ca6f4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1057ca700; end: 1057ca767; +[GetSingleOrderRequest descriptor] */

void FUN_1057ca700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6a9e0,
                        &PTR____CFConstantStringClassReference_110db2438,&PTR_DAT_1131009e0,
                        &PTR_s_orderId_1131009f8,2,0x18,0x1c);
    puRam00000001136c0730 = puVar1;
  }
  return;
}



/* Entry: 1057ca768; end: 1057ca7f3; +[GetSingleOrderResponse descriptor] */

undefined * FUN_1057ca768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6aa30,
                        &PTR____CFConstantStringClassReference_110db2458,&PTR_DAT_1131009e0,
                        &PTR_s_order_113100a38,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0738 = puVar1;
  }
  return puRam00000001136c0738;
}



/* Entry: 1057ca7f4; end: 1057ca85b; +[PayCheckoutRequest descriptor] */

void FUN_1057ca7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6aad0,
                        &PTR____CFConstantStringClassReference_110e030b8,&PTR_DAT_113100aa0,
                        &PTR_s_userId_113100b18,5,0x30,0x1c);
    puRam00000001136c0740 = puVar1;
  }
  return;
}



/* Entry: 1057ca85c; end: 1057ca8e7; +[PayCheckoutResponse descriptor] */

undefined * FUN_1057ca85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ab20,
                        &PTR____CFConstantStringClassReference_110e030d8,&PTR_DAT_113100aa0,
                        &PTR_s_order_113100ab8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0748 = puVar1;
  }
  return puRam00000001136c0748;
}



/* Entry: 1057ca8e8; end: 1057ca94f; +[UpdateCheckoutRequest descriptor] */

void FUN_1057ca8e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6abc0,
                        &PTR____CFConstantStringClassReference_110e030f8,&PTR_DAT_113100bc0,
                        &PTR_s_userId_113100bd8,2,0x18,0x1c);
    puRam00000001136c0750 = puVar1;
  }
  return;
}



/* Entry: 1057ca950; end: 1057ca9db; +[UpdateCheckoutResponse descriptor] */

undefined * FUN_1057ca950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ac10,
                        &PTR____CFConstantStringClassReference_110e03118,&PTR_DAT_113100bc0,
                        &PTR_DAT_113100c18,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0758 = puVar1;
  }
  return puRam00000001136c0758;
}



/* Entry: 1057ca9dc; end: 1057caa43; +[UploadSingleOrderRequest descriptor] */

void FUN_1057ca9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6acb0,
                        &PTR____CFConstantStringClassReference_110e03138,&PTR_DAT_113100c80,
                        &PTR_s_order_113100c98,1,0x10,0x1c);
    puRam00000001136c0760 = puVar1;
  }
  return;
}



/* Entry: 1057caa44; end: 1057caacf; +[UploadSingleOrderResponse descriptor] */

undefined * FUN_1057caa44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ad00,
                        &PTR____CFConstantStringClassReference_110e03158,&PTR_DAT_113100c80,
                        &PTR_s_error_113100cb8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0768 = puVar1;
  }
  return puRam00000001136c0768;
}



/* Entry: 1057caad0; end: 1057cab5f;  */

undefined * FUN_1057caad0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0770 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e03178,
                        &UNK_10ddbe1c0,&UNK_10ddbe5bc,0x38,FUN_1057cab60,0,&UNK_10ddbe69c);
    do {
      if (puRam00000001136c0770 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0770;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0770,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0770 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0770;
}



/* Entry: 1057cab60; end: 1057cab6b;  */

bool FUN_1057cab60(uint param_1)

{
  return param_1 < 0x38;
}


