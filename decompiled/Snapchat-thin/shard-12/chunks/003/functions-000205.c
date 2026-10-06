/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f8abb0; end: 108f8ac3f; -[SCSectionKitButtonViewModel hash] */

undefined8 * FUN_108f8abb0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f8ad08:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f8ad14;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[5] == param_3[5])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[6];
          if (puVar6 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_108f8ad14;
          }
          goto LAB_108f8ad08;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f8ad14:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f8ac40; end: 108f8ad2f; -[SCSectionKitButtonViewModel isEqual:] */

long FUN_108f8ac40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8ad08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8ad14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_108f8ad14;
          }
          goto LAB_108f8ad08;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8ad14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8ad30; end: 108f8ad37; -[SCSectionKitButtonViewModel title] */

undefined8 FUN_108f8ad30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8ad38; end: 108f8ad3f; -[SCSectionKitButtonViewModel style] */

undefined8 FUN_108f8ad38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8ad40; end: 108f8ad47; -[SCSectionKitButtonViewModel iconName] */

undefined8 FUN_108f8ad40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f8ad48; end: 108f8ad4f; -[SCSectionKitButtonViewModel sigIconType] */

undefined8 FUN_108f8ad48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f8ad50; end: 108f8ad57; -[SCSectionKitButtonViewModel isLoading] */

undefined1 FUN_108f8ad50(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f8ad58; end: 108f8ad5f; -[SCSectionKitButtonViewModel actionModel] */

undefined8 FUN_108f8ad58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f8ad60; end: 108f8ad9b; -[SCSectionKitButtonViewModel .cxx_destruct] */

void FUN_108f8ad60(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8ad9c; end: 108f8ae67; +[SCSectionKitDropdownButtonViewModel customTTLWithTitle:iconName:actionModel:isSnapchatPlusSubscriber:] */

void FUN_108f8ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dc9a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x28] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8ae68; end: 108f8aeff; +[SCSectionKitDropdownButtonViewModel myStoryAudienceWithTitle:actionModel:] */

void FUN_108f8ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc9a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8af00; end: 108f8af23; -[SCSectionKitDropdownButtonViewModel copyWithZone:] */

undefined8 FUN_108f8af00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8af24; end: 108f8afc3; -[SCSectionKitDropdownButtonViewModel hash] */

void FUN_108f8af24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ff890;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8afc4; end: 108f8b007; -[SCSectionKitDropdownButtonViewModel internalInit] */

void FUN_108f8afc4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff890;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8b008; end: 108f8b117; -[SCSectionKitDropdownButtonViewModel isEqual:] */

long FUN_108f8b008(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8b0f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8b0fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_108f8b0fc;
              }
              goto LAB_108f8b0f0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8b0fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8b118; end: 108f8b1a7; -[SCSectionKitDropdownButtonViewModel matchCustomTTL:myStoryAudience:] */

void FUN_108f8b118(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8b1a8; end: 108f8b1fb; -[SCSectionKitDropdownButtonViewModel .cxx_destruct] */

void FUN_108f8b1a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8b1fc; end: 108f8b473; -[SCSectionKitRecipientCellViewModel initWithGroupingStyle:externalEdges:cellStyle:cellAccessibilityIdentifier:actionIndicatorViewModel:leadingAccessoryViewModel:middleAccessoryViewModel:trailingAccessoryViewModel:longPressActionModel:singleTapActionModel:indexModel:preferredWidth:alpha:isCondensed:backgroundColor:shadowDisabled:bottomSpacing:showPlusGoldenBorder:longPressMinDuration:cornerRadiusOverride:titleTextStyle:] */

undefined8 *
FUN_108f8b1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puStack_90 = PTR_PTR_1126ff898;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_7;
    puVar1[3] = param_8;
    puVar1[4] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    *(undefined1 *)(puVar1 + 1) = param_18;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_21;
    *(undefined1 *)((long)puVar1 + 10) = param_21._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_21._2_1_;
    puVar1[0x10] = param_3;
    puVar1[0x11] = param_4;
    puVar1[0x12] = param_23;
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 108f8b474; end: 108f8b497; -[SCSectionKitRecipientCellViewModel copyWithZone:] */

undefined8 FUN_108f8b474(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8b498; end: 108f8b60b; -[SCSectionKitRecipientCellViewModel hash] */

undefined8 * FUN_108f8b498(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = uVar3;
  func_0x000107c3191c(&uStack_d0,0x15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108f8b894:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8b8a0;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9])
           ))))) && (*(char *)((long)puVar4 + 10) == param_3[10])) &&
       ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
        (*(long *)((long)puVar4 + 0x90) == *(long *)(param_3 + 0x90))))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x68) - *(double *)(param_3 + 0x68));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 0x68) + *(double *)(param_3 + 0x68)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x70) - *(double *)(param_3 + 0x70));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar4 + 0x70) + *(double *)(param_3 + 0x70)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar4 + 0x80) - *(double *)(param_3 + 0x80));
          if ((dVar9 < 2.2250738585072014e-308) ||
             (dVar9 < ABS(*(double *)((long)puVar4 + 0x80) + *(double *)(param_3 + 0x80)) *
                      2.220446049250313e-16)) {
            dVar9 = ABS(*(double *)((long)puVar4 + 0x88) - *(double *)(param_3 + 0x88));
            if (((((((dVar9 < 2.2250738585072014e-308) ||
                    (dVar9 < ABS(*(double *)((long)puVar4 + 0x88) + *(double *)(param_3 + 0x88)) *
                             2.220446049250313e-16)) &&
                   ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                  ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                ((((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((lVar6 = *(long *)((long)puVar4 + 0x48), lVar6 == *(long *)(param_3 + 0x48) ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = *(long *)((long)puVar4 + 0x50), lVar6 == *(long *)(param_3 + 0x50) ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
               (((lVar6 = *(long *)((long)puVar4 + 0x58), lVar6 == *(long *)(param_3 + 0x58) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                ((lVar6 = *(long *)((long)puVar4 + 0x60), lVar6 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
              puVar8 = *(undefined1 **)((long)puVar4 + 0x78);
              if (puVar8 != *(undefined1 **)(param_3 + 0x78)) {
                func_0x00010c071c60();
                goto LAB_108f8b8a0;
              }
              goto LAB_108f8b894;
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_108f8b8a0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 108f8b60c; end: 108f8b8bb; -[SCSectionKitRecipientCellViewModel isEqual:] */

long FUN_108f8b60c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8b894:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8b8a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
            if (((((((dVar4 < 2.2250738585072014e-308) ||
                    (dVar4 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                             2.220446049250313e-16)) &&
                   ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
               (((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
              lVar3 = *(long *)(param_1 + 0x78);
              if (lVar3 != *(long *)(param_3 + 0x78)) {
                func_0x00010c071c60();
                goto LAB_108f8b8a0;
              }
              goto LAB_108f8b894;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8b8a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8b8bc; end: 108f8b8c3; -[SCSectionKitRecipientCellViewModel groupingStyle] */

undefined8 FUN_108f8b8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8b8c4; end: 108f8b8cb; -[SCSectionKitRecipientCellViewModel externalEdges] */

undefined8 FUN_108f8b8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8b8cc; end: 108f8b8d3; -[SCSectionKitRecipientCellViewModel cellStyle] */

undefined8 FUN_108f8b8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f8b8d4; end: 108f8b8db; -[SCSectionKitRecipientCellViewModel cellAccessibilityIdentifier] */

undefined8 FUN_108f8b8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f8b8dc; end: 108f8b8e3; -[SCSectionKitRecipientCellViewModel actionIndicatorViewModel] */

undefined8 FUN_108f8b8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f8b8e4; end: 108f8b8eb; -[SCSectionKitRecipientCellViewModel leadingAccessoryViewModel] */

undefined8 FUN_108f8b8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f8b8ec; end: 108f8b8f3; -[SCSectionKitRecipientCellViewModel middleAccessoryViewModel] */

undefined8 FUN_108f8b8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f8b8f4; end: 108f8b8fb; -[SCSectionKitRecipientCellViewModel trailingAccessoryViewModel] */

undefined8 FUN_108f8b8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f8b8fc; end: 108f8b903; -[SCSectionKitRecipientCellViewModel longPressActionModel] */

undefined8 FUN_108f8b8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f8b904; end: 108f8b90b; -[SCSectionKitRecipientCellViewModel singleTapActionModel] */

undefined8 FUN_108f8b904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f8b90c; end: 108f8b913; -[SCSectionKitRecipientCellViewModel indexModel] */

undefined8 FUN_108f8b90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f8b914; end: 108f8b91b; -[SCSectionKitRecipientCellViewModel preferredWidth] */

undefined8 FUN_108f8b914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f8b91c; end: 108f8b923; -[SCSectionKitRecipientCellViewModel alpha] */

undefined8 FUN_108f8b91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108f8b924; end: 108f8b92b; -[SCSectionKitRecipientCellViewModel isCondensed] */

undefined1 FUN_108f8b924(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f8b92c; end: 108f8b933; -[SCSectionKitRecipientCellViewModel backgroundColor] */

undefined8 FUN_108f8b92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108f8b934; end: 108f8b93b; -[SCSectionKitRecipientCellViewModel shadowDisabled] */

undefined1 FUN_108f8b934(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f8b93c; end: 108f8b943; -[SCSectionKitRecipientCellViewModel bottomSpacing] */

undefined1 FUN_108f8b93c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f8b944; end: 108f8b94b; -[SCSectionKitRecipientCellViewModel showPlusGoldenBorder] */

undefined1 FUN_108f8b944(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108f8b94c; end: 108f8b953; -[SCSectionKitRecipientCellViewModel longPressMinDuration] */

undefined8 FUN_108f8b94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108f8b954; end: 108f8b95b; -[SCSectionKitRecipientCellViewModel cornerRadiusOverride] */

undefined8 FUN_108f8b954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f8b95c; end: 108f8b963; -[SCSectionKitRecipientCellViewModel titleTextStyle] */

undefined8 FUN_108f8b95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108f8b964; end: 108f8b9e7; -[SCSectionKitRecipientCellViewModel .cxx_destruct] */

void FUN_108f8b964(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108f8b9e8; end: 108f8ba5f; -[SCSectionKitEmojiViewModel initWithTitle:] */

undefined1 * FUN_108f8b9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff8a0;
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



/* Entry: 108f8ba60; end: 108f8ba83; -[SCSectionKitEmojiViewModel copyWithZone:] */

undefined8 FUN_108f8ba60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8ba84; end: 108f8ba8b; -[SCSectionKitEmojiViewModel hash] */

void FUN_108f8ba84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f8ba8c; end: 108f8bb1b; -[SCSectionKitEmojiViewModel isEqual:] */

long FUN_108f8ba8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8bb00;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f8bb00;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f8bb00;
    }
  }
  lVar3 = 1;
LAB_108f8bb00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8bb1c; end: 108f8bb23; -[SCSectionKitEmojiViewModel title] */

undefined8 FUN_108f8bb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8bb24; end: 108f8bb2f; -[SCSectionKitEmojiViewModel .cxx_destruct] */

void FUN_108f8bb24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8bb30; end: 108f8bbe3; -[SCSectionKitIndexModel initWithSelectionItem:indexKey:row:] */

undefined1 *
FUN_108f8bb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff8a8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8bbe4; end: 108f8bc07; -[SCSectionKitIndexModel copyWithZone:] */

undefined8 FUN_108f8bbe4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8bc08; end: 108f8bc87; -[SCSectionKitIndexModel hash] */

undefined8 * FUN_108f8bc08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f8bd18:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8bd24;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f8bd24;
        }
        goto LAB_108f8bd18;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f8bd24:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f8bc88; end: 108f8bd3f; -[SCSectionKitIndexModel isEqual:] */

long FUN_108f8bc88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8bd18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8bd24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f8bd24;
        }
        goto LAB_108f8bd18;
      }
    }
    lVar3 = 0;
  }
LAB_108f8bd24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8bd40; end: 108f8bd47; -[SCSectionKitIndexModel selectionItem] */

undefined8 FUN_108f8bd40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8bd48; end: 108f8bd4f; -[SCSectionKitIndexModel indexKey] */

undefined8 FUN_108f8bd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8bd50; end: 108f8bd57; -[SCSectionKitIndexModel row] */

undefined8 FUN_108f8bd50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8bd58; end: 108f8bd87; -[SCSectionKitIndexModel .cxx_destruct] */

void FUN_108f8bd58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8bd88; end: 108f8bdff; -[SCSectionKitBadgeViewModel initWithTitle:] */

undefined1 * FUN_108f8bd88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff8b0;
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



/* Entry: 108f8be00; end: 108f8be23; -[SCSectionKitBadgeViewModel copyWithZone:] */

undefined8 FUN_108f8be00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8be24; end: 108f8be2b; -[SCSectionKitBadgeViewModel hash] */

void FUN_108f8be24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f8be2c; end: 108f8bebb; -[SCSectionKitBadgeViewModel isEqual:] */

long FUN_108f8be2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8bea0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f8bea0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f8bea0;
    }
  }
  lVar3 = 1;
LAB_108f8bea0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8bebc; end: 108f8bec3; -[SCSectionKitBadgeViewModel title] */

undefined8 FUN_108f8bebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8bec4; end: 108f8becf; -[SCSectionKitBadgeViewModel .cxx_destruct] */

void FUN_108f8bec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8bed0; end: 108f8bfa7; -[SCSectionKitInitialsWithinCircleViewModel initWithTitle:strokeColor:backgroundColor:] */

undefined1 *
FUN_108f8bed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ff8b8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8bfa8; end: 108f8bfcb; -[SCSectionKitInitialsWithinCircleViewModel copyWithZone:] */

undefined8 FUN_108f8bfa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8bfcc; end: 108f8c04b; -[SCSectionKitInitialsWithinCircleViewModel hash] */

undefined8 * FUN_108f8bfcc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f8c0e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8c0f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071c60();
            goto LAB_108f8c0f0;
          }
          goto LAB_108f8c0e4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f8c0f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f8c04c; end: 108f8c10b; -[SCSectionKitInitialsWithinCircleViewModel isEqual:] */

long FUN_108f8c04c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8c0e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8c0f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071c60();
            goto LAB_108f8c0f0;
          }
          goto LAB_108f8c0e4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8c0f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8c10c; end: 108f8c113; -[SCSectionKitInitialsWithinCircleViewModel title] */

undefined8 FUN_108f8c10c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8c114; end: 108f8c11b; -[SCSectionKitInitialsWithinCircleViewModel strokeColor] */

undefined8 FUN_108f8c114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8c11c; end: 108f8c123; -[SCSectionKitInitialsWithinCircleViewModel backgroundColor] */

undefined8 FUN_108f8c11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8c124; end: 108f8c15f; -[SCSectionKitInitialsWithinCircleViewModel .cxx_destruct] */

void FUN_108f8c124(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8c160; end: 108f8c1ef; +[SCSectionKitSectionHeaderAccessoryViewModel actionWithActionAccessoryText:actionModel:] */

void FUN_108f8c160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1ee0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8c1f0; end: 108f8c2bb; +[SCSectionKitSectionHeaderAccessoryViewModel buttonWithButtonText:buttonIcon:actionModel:] */

void FUN_108f8c1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d1ee0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8c2bc; end: 108f8c2df; -[SCSectionKitSectionHeaderAccessoryViewModel copyWithZone:] */

undefined8 FUN_108f8c2bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8c2e0; end: 108f8c37b; -[SCSectionKitSectionHeaderAccessoryViewModel hash] */

void FUN_108f8c2e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ff8c0;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8c37c; end: 108f8c3bf; -[SCSectionKitSectionHeaderAccessoryViewModel internalInit] */

void FUN_108f8c37c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff8c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8c3c0; end: 108f8c4bf; -[SCSectionKitSectionHeaderAccessoryViewModel isEqual:] */

long FUN_108f8c3c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8c498:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8c4a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
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
                func_0x00010c071ae0();
                goto LAB_108f8c4a4;
              }
              goto LAB_108f8c498;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8c4a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8c4c0; end: 108f8c54b; -[SCSectionKitSectionHeaderAccessoryViewModel matchAction:button:] */

void FUN_108f8c4c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8c54c; end: 108f8c59f; -[SCSectionKitSectionHeaderAccessoryViewModel .cxx_destruct] */

void FUN_108f8c54c(long param_1)

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



/* Entry: 108f8c5a0; end: 108f8c68f; -[SCSectionKitSectionHeaderViewModel initWithGroupingStyle:title:subtitle:accessoryViewModel:isCondensed:] */

undefined1 *
FUN_108f8c5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ff8c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8c690; end: 108f8c6b3; -[SCSectionKitSectionHeaderViewModel copyWithZone:] */

undefined8 FUN_108f8c690(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8c6b4; end: 108f8c73b; -[SCSectionKitSectionHeaderViewModel hash] */

undefined8 * FUN_108f8c6b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f8c7f4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8c800;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108f8c800;
          }
          goto LAB_108f8c7f4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f8c800:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f8c73c; end: 108f8c81b; -[SCSectionKitSectionHeaderViewModel isEqual:] */

long FUN_108f8c73c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8c7f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8c800;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108f8c800;
          }
          goto LAB_108f8c7f4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8c800:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8c81c; end: 108f8c823; -[SCSectionKitSectionHeaderViewModel groupingStyle] */

undefined8 FUN_108f8c81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8c824; end: 108f8c82b; -[SCSectionKitSectionHeaderViewModel title] */

undefined8 FUN_108f8c824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8c82c; end: 108f8c833; -[SCSectionKitSectionHeaderViewModel subtitle] */

undefined8 FUN_108f8c82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f8c834; end: 108f8c83b; -[SCSectionKitSectionHeaderViewModel accessoryViewModel] */

undefined8 FUN_108f8c834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f8c83c; end: 108f8c843; -[SCSectionKitSectionHeaderViewModel isCondensed] */

undefined1 FUN_108f8c83c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f8c844; end: 108f8c87f; -[SCSectionKitSectionHeaderViewModel .cxx_destruct] */

void FUN_108f8c844(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108f8c880; end: 108f8c8eb; +[SCSectionKitLeadingAccessoryViewModel initialsWithinCircleWithInitialsWithinCircleViewModel:] */

void FUN_108f8c880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b53d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8c8ec; end: 108f8c94f; +[SCSectionKitLeadingAccessoryViewModel avatarWithAvatarViewModel:] */

void FUN_108f8c8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b53d0;
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



/* Entry: 108f8c950; end: 108f8c9bb; +[SCSectionKitLeadingAccessoryViewModel emojiWithEmoji:] */

void FUN_108f8c950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b53d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8c9bc; end: 108f8ca27; +[SCSectionKitLeadingAccessoryViewModel imageWithViewModel:] */

void FUN_108f8c9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b53d0;
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



/* Entry: 108f8ca28; end: 108f8ca4b; -[SCSectionKitLeadingAccessoryViewModel copyWithZone:] */

undefined8 FUN_108f8ca28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8ca4c; end: 108f8cadb; -[SCSectionKitLeadingAccessoryViewModel hash] */

void FUN_108f8ca4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126ff8d0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8cadc; end: 108f8cb1f; -[SCSectionKitLeadingAccessoryViewModel internalInit] */

void FUN_108f8cadc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff8d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8cb20; end: 108f8cc07; -[SCSectionKitLeadingAccessoryViewModel isEqual:] */

long FUN_108f8cb20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8cbe0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8cbec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108f8cbec;
            }
            goto LAB_108f8cbe0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8cbec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8cc08; end: 108f8ccef; -[SCSectionKitLeadingAccessoryViewModel matchAvatar:image:initialsWithinCircle:emoji:] */

void FUN_108f8cc08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_108f8ccc0;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_108f8ccc0;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108f8ccc0;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_108f8ccc0;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108f8ccc0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8ccf0; end: 108f8cd37; -[SCSectionKitLeadingAccessoryViewModel .cxx_destruct] */

void FUN_108f8ccf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8cd38; end: 108f8cdc7; -[SCSectionKitListViewMoreCellViewModel initWithTitleText:isCondensed:groupingStyle:] */

undefined1 *
FUN_108f8cd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff8d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


