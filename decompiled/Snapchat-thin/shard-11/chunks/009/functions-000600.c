/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ba519c; end: 108ba51cf; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider allowButtonFont] */

void FUN_108ba519c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf25520();
                    /* WARNING: Could not recover jumptable at 0x00010c266f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)PTR__UIFontWeightMedium_110345c38,puVar1,
             PTR_s_systemFontOfSize_weight__112677600);
  return;
}



/* Entry: 108ba51d0; end: 108ba51d3; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider denyButtonColorForState:] */

void FUN_108ba51d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__defaultButtonColorForState__11255be30);
  return;
}



/* Entry: 108ba51d4; end: 108ba51fb; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider denyButtonFont] */

void FUN_108ba51d4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf25520();
                    /* WARNING: Could not recover jumptable at 0x00010c266f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_systemFontOfSize__1126775f8);
  return;
}



/* Entry: 108ba51fc; end: 108ba522f; -[SCPrePromptPermissionCustomDialogViewDefaultLayoutProvider _defaultButtonColorForState:] */

void FUN_108ba51fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x86;
  if (param_3 != 1) {
    uVar1 = 0x88;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba5230; end: 108ba52a3; -[SCActivityCenterDynamicServices initWithFHPCampaignDataProvider:] */

undefined1 * FUN_108ba5230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd640;
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



/* Entry: 108ba52a4; end: 108ba52ab; -[SCActivityCenterDynamicServices fhpCampaignDataProvider] */

undefined8 FUN_108ba52a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba52ac; end: 108ba52b7; -[SCActivityCenterDynamicServices .cxx_destruct] */

void FUN_108ba52ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba52b8; end: 108ba532b; -[SCBillboardFHPUIConfigScope initWithPlugInRegistry:] */

undefined1 * FUN_108ba52b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd648;
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



/* Entry: 108ba532c; end: 108ba5333; -[SCBillboardFHPUIConfigScope plugInRegistry] */

undefined8 FUN_108ba532c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba5334; end: 108ba533f; -[SCBillboardFHPUIConfigScope .cxx_destruct] */

void FUN_108ba5334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba5340; end: 108ba556b; -[SCBillboardFHPUIConfig initWithCampaignId:title:subtitle:accessibilityLabel:extraButtonText:extraButtonOnTapAction:imageIcon:onTapAction:itemId:loggingPayload:v3LayoutVariant:] */

undefined8 *
FUN_108ba5340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fd650;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ba556c; end: 108ba558f; -[SCBillboardFHPUIConfig copyWithZone:] */

undefined8 FUN_108ba556c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ba5590; end: 108ba5667; -[SCBillboardFHPUIConfig hash] */

undefined8 * FUN_108ba5590(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ba57b8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ba57c4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                        if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                          func_0x00010c071ae0();
                          goto LAB_108ba57c4;
                        }
                        goto LAB_108ba57b8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ba57c4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ba5668; end: 108ba57df; -[SCBillboardFHPUIConfig isEqual:] */

long FUN_108ba5668(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ba57b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ba57c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if (lVar3 != *(long *)(param_3 + 0x50)) {
                          func_0x00010c071ae0();
                          goto LAB_108ba57c4;
                        }
                        goto LAB_108ba57b8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ba57c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ba57e0; end: 108ba57e7; -[SCBillboardFHPUIConfig campaignId] */

undefined8 FUN_108ba57e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba57e8; end: 108ba57ef; -[SCBillboardFHPUIConfig title] */

undefined8 FUN_108ba57e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ba57f0; end: 108ba57f7; -[SCBillboardFHPUIConfig subtitle] */

undefined8 FUN_108ba57f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ba57f8; end: 108ba57ff; -[SCBillboardFHPUIConfig accessibilityLabel] */

undefined8 FUN_108ba57f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ba5800; end: 108ba5807; -[SCBillboardFHPUIConfig extraButtonText] */

undefined8 FUN_108ba5800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ba5808; end: 108ba580f; -[SCBillboardFHPUIConfig extraButtonOnTapAction] */

undefined8 FUN_108ba5808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ba5810; end: 108ba5817; -[SCBillboardFHPUIConfig imageIcon] */

undefined8 FUN_108ba5810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ba5818; end: 108ba581f; -[SCBillboardFHPUIConfig onTapAction] */

undefined8 FUN_108ba5818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ba5820; end: 108ba5827; -[SCBillboardFHPUIConfig itemId] */

undefined8 FUN_108ba5820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108ba5828; end: 108ba582f; -[SCBillboardFHPUIConfig loggingPayload] */

undefined8 FUN_108ba5828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108ba5830; end: 108ba5837; -[SCBillboardFHPUIConfig v3LayoutVariant] */

undefined8 FUN_108ba5830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108ba5838; end: 108ba58c7; -[SCBillboardFHPUIConfig .cxx_destruct] */

void FUN_108ba5838(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba58c8; end: 108ba596f; +[SCBillboardFHPUIConfigImageIcon bitmojiSceneWithAvatarId:sceneId:renderStyle:] */

void FUN_108ba58c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aeed8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba5970; end: 108ba5a3b; +[SCBillboardFHPUIConfigImageIcon bitmojiSelfieWithAvatarId:userId:selfieId:] */

void FUN_108ba5970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aeed8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba5a3c; end: 108ba5aa7; +[SCBillboardFHPUIConfigImageIcon emojiWithEmojiString:] */

void FUN_108ba5a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeed8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba5aa8; end: 108ba5b0b; +[SCBillboardFHPUIConfigImageIcon urlWithIconUrl:] */

void FUN_108ba5aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeed8;
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



/* Entry: 108ba5b0c; end: 108ba5b2f; -[SCBillboardFHPUIConfigImageIcon copyWithZone:] */

undefined8 FUN_108ba5b0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ba5b30; end: 108ba5bef; -[SCBillboardFHPUIConfigImageIcon hash] */

void FUN_108ba5b30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126fd658;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba5bf0; end: 108ba5c33; -[SCBillboardFHPUIConfigImageIcon internalInit] */

void FUN_108ba5bf0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fd658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba5c34; end: 108ba5d73; -[SCBillboardFHPUIConfigImageIcon isEqual:] */

long FUN_108ba5c34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ba5d4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ba5d58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_108ba5d58;
                  }
                  goto LAB_108ba5d4c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ba5d58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ba5d74; end: 108ba5e6f; -[SCBillboardFHPUIConfigImageIcon matchUrl:bitmojiSelfie:bitmojiScene:emoji:] */

void FUN_108ba5d74(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      if (param_3 == 0) goto LAB_108ba5e40;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar5 = *(code **)(param_3 + 0x10);
      lVar4 = param_3;
LAB_108ba5e20:
      (*pcVar5)(lVar4,uVar1);
      goto LAB_108ba5e40;
    }
    if ((lVar4 != 1) || (param_4 == 0)) goto LAB_108ba5e40;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    pcVar5 = *(code **)(param_4 + 0x10);
    lVar4 = param_4;
  }
  else {
    if (lVar4 != 2) {
      if ((lVar4 != 3) || (param_6 == 0)) goto LAB_108ba5e40;
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      pcVar5 = *(code **)(param_6 + 0x10);
      lVar4 = param_6;
      goto LAB_108ba5e20;
    }
    if (param_5 == 0) goto LAB_108ba5e40;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    pcVar5 = *(code **)(param_5 + 0x10);
    lVar4 = param_5;
  }
  (*pcVar5)(lVar4,uVar1,uVar2,uVar3);
LAB_108ba5e40:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ba5e70; end: 108ba5f57; -[SCBillboardFHPUIConfigImageIcon .cxx_destruct] */

void FUN_108ba5e70(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108ba5f58; end: 108ba5f63;  */

bool FUN_108ba5f58(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108ba5f64; end: 108ba5fdf;  */

undefined * FUN_108ba5f64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372d9a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ee9bf8,
                        &UNK_10df94a34,&UNK_10df94a60,4,FUN_108ba5fe0,0);
    do {
      if (puRam000000011372d9a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372d9a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372d9a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372d9a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372d9a0;
}



/* Entry: 108ba5fe0; end: 108ba5feb;  */

bool FUN_108ba5fe0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba5fec; end: 108ba6087; +[SCBillboardPbAction descriptor] */

undefined * FUN_108ba5fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baef90,
                        &PTR____CFConstantStringClassReference_110dfd518,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_DAT_11328baf8,0x27,0x140,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10df94a80);
    puRam000000011372d9a8 = puVar1;
  }
  return puRam000000011372d9a8;
}



/* Entry: 108ba6088; end: 108ba60ef; +[SCBillboardPbActionSyncContact descriptor] */

void FUN_108ba6088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baefe0,
                        &PTR____CFConstantStringClassReference_110ee9c18,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_actionType_11328b838,1,8,0x1c
                       );
    puRam000000011372d9b0 = puVar1;
  }
  return;
}



/* Entry: 108ba60f0; end: 108ba6157; +[SCBillboardPbActionOpenMini descriptor] */

void FUN_108ba60f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf030,
                        &PTR____CFConstantStringClassReference_110ee9c38,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_DAT_11328b858,1,0x10,0x1c);
    puRam000000011372d9b8 = puVar1;
  }
  return;
}



/* Entry: 108ba6158; end: 108ba61bf; +[SCBillboardPbActionBirthdaySettings descriptor] */

void FUN_108ba6158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf080,
                        &PTR____CFConstantStringClassReference_110ee9c58,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9c0 = puVar1;
  }
  return;
}



/* Entry: 108ba61c0; end: 108ba6227; +[SCBillboardPbActionEmailVerification descriptor] */

void FUN_108ba61c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf0d0,
                        &PTR____CFConstantStringClassReference_110ee9c78,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9c8 = puVar1;
  }
  return;
}



/* Entry: 108ba6228; end: 108ba628f; +[SCBillboardPbActionPhoneVerification descriptor] */

void FUN_108ba6228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf120,
                        &PTR____CFConstantStringClassReference_110ee9c98,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9d0 = puVar1;
  }
  return;
}



/* Entry: 108ba6290; end: 108ba62f7; +[SCBillboardPbActionSuicidePrevention descriptor] */

void FUN_108ba6290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf170,
                        &PTR____CFConstantStringClassReference_110ee9cb8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9d8 = puVar1;
  }
  return;
}



/* Entry: 108ba62f8; end: 108ba635f; +[SCBillboardPbActionEnableNotification descriptor] */

void FUN_108ba62f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf1c0,
                        &PTR____CFConstantStringClassReference_110ee9cd8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9e0 = puVar1;
  }
  return;
}



/* Entry: 108ba6360; end: 108ba63c7; +[SCBillboardPbActionPhoneReverification descriptor] */

void FUN_108ba6360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf210,
                        &PTR____CFConstantStringClassReference_110ee9cf8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9e8 = puVar1;
  }
  return;
}



/* Entry: 108ba63c8; end: 108ba642f; +[SCBillboardPbActionEnableMicrophone descriptor] */

void FUN_108ba63c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf260,
                        &PTR____CFConstantStringClassReference_110ee9d18,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9f0 = puVar1;
  }
  return;
}



/* Entry: 108ba6430; end: 108ba6497; +[SCBillboardPbActionFriendCheckup descriptor] */

void FUN_108ba6430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372d9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf2b0,
                        &PTR____CFConstantStringClassReference_110ee9d38,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372d9f8 = puVar1;
  }
  return;
}



/* Entry: 108ba6498; end: 108ba6513; +[SCBillboardPbActionOpenUrl descriptor] */

undefined * FUN_108ba6498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf300,
                        &PTR____CFConstantStringClassReference_110ee9d58,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_URL_11328b878,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372da00 = puVar1;
  }
  return puRam000000011372da00;
}



/* Entry: 108ba6514; end: 108ba657b; +[SCBillboardPbActionOpenSettings descriptor] */

void FUN_108ba6514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf350,
                        &PTR____CFConstantStringClassReference_110ee9d78,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da08 = puVar1;
  }
  return;
}



/* Entry: 108ba657c; end: 108ba65e3; +[SCBillboardPbActionCreateGroup descriptor] */

void FUN_108ba657c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf3a0,
                        &PTR____CFConstantStringClassReference_110ee9d98,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da10 = puVar1;
  }
  return;
}



/* Entry: 108ba65e4; end: 108ba664b; +[SCBillboardPbActionLockScreenWidgets descriptor] */

void FUN_108ba65e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf3f0,
                        &PTR____CFConstantStringClassReference_110ee9db8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da18 = puVar1;
  }
  return;
}



/* Entry: 108ba664c; end: 108ba66b3; +[SCBillboardPbActionOpenDeeplink descriptor] */

void FUN_108ba664c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf440,
                        &PTR____CFConstantStringClassReference_110ee9dd8,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_deeplink_11328b898,1,0x10,
                        0x1c);
    puRam000000011372da20 = puVar1;
  }
  return;
}



/* Entry: 108ba66b4; end: 108ba671b; +[SCBillboardPbActionOpenDwebTray descriptor] */

void FUN_108ba66b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf490,
                        &PTR____CFConstantStringClassReference_110ee9df8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da28 = puVar1;
  }
  return;
}



/* Entry: 108ba671c; end: 108ba6783; +[SCBillboardPbActionOpenOTLOptInDialog descriptor] */

void FUN_108ba671c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf4e0,
                        &PTR____CFConstantStringClassReference_110ee9e18,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da30 = puVar1;
  }
  return;
}



/* Entry: 108ba6784; end: 108ba67eb; +[SCBillboardPbActionAfterDarkCamera descriptor] */

void FUN_108ba6784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf530,
                        &PTR____CFConstantStringClassReference_110ee9e38,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da38 = puVar1;
  }
  return;
}



/* Entry: 108ba67ec; end: 108ba6853; +[SCBillboardPbActionAfterDarkPostAdd descriptor] */

void FUN_108ba67ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf580,
                        &PTR____CFConstantStringClassReference_110ee9e58,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da40 = puVar1;
  }
  return;
}



/* Entry: 108ba6854; end: 108ba68bb; +[SCBillboardPbActionDoNothing descriptor] */

void FUN_108ba6854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf5d0,
                        &PTR____CFConstantStringClassReference_110ee9e78,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da48 = puVar1;
  }
  return;
}



/* Entry: 108ba68bc; end: 108ba6923; +[SCBillboardPbActionPlusDynamic descriptor] */

void FUN_108ba68bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf620,
                        &PTR____CFConstantStringClassReference_110ee9e98,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da50 = puVar1;
  }
  return;
}



/* Entry: 108ba6924; end: 108ba698b; +[SCBillboardPbActionOpenOSSettings descriptor] */

void FUN_108ba6924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf670,
                        &PTR____CFConstantStringClassReference_110ee9eb8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da58 = puVar1;
  }
  return;
}



/* Entry: 108ba698c; end: 108ba69f3; +[SCBillboardPbActionIOSActionButton descriptor] */

void FUN_108ba698c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf6c0,
                        &PTR____CFConstantStringClassReference_110ee9ed8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da60 = puVar1;
  }
  return;
}



/* Entry: 108ba69f4; end: 108ba6a5b; +[SCBillboardPbActionOpenIncentiveCampaignDetailsPage descriptor] */

void FUN_108ba69f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf710,
                        &PTR____CFConstantStringClassReference_110ee9ef8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da68 = puVar1;
  }
  return;
}



/* Entry: 108ba6a5c; end: 108ba6ac3; +[SCBillboardPbActionGrantRewardIncentiveCampaignInvite descriptor] */

void FUN_108ba6a5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf760,
                        &PTR____CFConstantStringClassReference_110ee9f18,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372da70 = puVar1;
  }
  return;
}



/* Entry: 108ba6ac4; end: 108ba6b2b; +[SCBillboardPbActionReplyCamera descriptor] */

void FUN_108ba6ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf7b0,
                        &PTR____CFConstantStringClassReference_110ee9f38,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_username_11328b8f8,2,0x18,
                        0x1c);
    puRam000000011372da78 = puVar1;
  }
  return;
}



/* Entry: 108ba6b2c; end: 108ba6bb7; +[SCBillboardPbActionLensReplyCamera descriptor] */

undefined * FUN_108ba6b2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf800,
                        &PTR____CFConstantStringClassReference_110ee9f58,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_DAT_11328ba38,6,0x40,0x1c);
    func_0x00010c229040();
    puRam000000011372da80 = puVar1;
  }
  return puRam000000011372da80;
}



/* Entry: 108ba6bb8; end: 108ba6c33; +[SCBillboardPbReplyCameraLens descriptor] */

undefined * FUN_108ba6bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf850,
                        &PTR____CFConstantStringClassReference_110ee9f78,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_lensId_11328b978,3,0x20,0x1c)
    ;
    func_0x00010c2289e0();
    puRam000000011372da88 = puVar1;
  }
  return puRam000000011372da88;
}



/* Entry: 108ba6c34; end: 108ba6c9b; +[SCBillboardPbReplyCameraNamespace descriptor] */

void FUN_108ba6c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf8a0,
                        &PTR____CFConstantStringClassReference_110ee9f98,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_DAT_11328b8b8,1,0x10,0x1c);
    puRam000000011372da90 = puVar1;
  }
  return;
}



/* Entry: 108ba6c9c; end: 108ba6d03; +[SCBillboardPbCameraReplyUser descriptor] */

void FUN_108ba6c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372da98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf8f0,
                        &PTR____CFConstantStringClassReference_110ee9fb8,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_userId_11328b938,2,0x18,0x1c)
    ;
    puRam000000011372da98 = puVar1;
  }
  return;
}



/* Entry: 108ba6d04; end: 108ba6d6b; +[SCBillboardPbCameraReplyStory descriptor] */

void FUN_108ba6d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372daa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf940,
                        &PTR____CFConstantStringClassReference_110ee9fd8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372daa0 = puVar1;
  }
  return;
}



/* Entry: 108ba6d6c; end: 108ba6dd3; +[SCBillboardPbCameraReplySendTo descriptor] */

void FUN_108ba6d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372daa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf990,
                        &PTR____CFConstantStringClassReference_110ee9ff8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372daa8 = puVar1;
  }
  return;
}



/* Entry: 108ba6dd4; end: 108ba6e3b; +[SCBillboardPbActionAddFriend descriptor] */

void FUN_108ba6dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112baf9e0,
                        &PTR____CFConstantStringClassReference_110eea018,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_s_userId_11328b9d8,3,0x18,0x1c)
    ;
    puRam000000011372dab0 = puVar1;
  }
  return;
}



/* Entry: 108ba6e3c; end: 108ba6ea3; +[SCBillboardPbActionDirectOTLOptIn descriptor] */

void FUN_108ba6e3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafa30,
                        &PTR____CFConstantStringClassReference_110eea038,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dab8 = puVar1;
  }
  return;
}



/* Entry: 108ba6ea4; end: 108ba6f0b; +[SCBillboardPbActionSyncGoogleContact descriptor] */

void FUN_108ba6ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafa80,
                        &PTR____CFConstantStringClassReference_110eea058,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dac0 = puVar1;
  }
  return;
}



/* Entry: 108ba6f0c; end: 108ba6f73; +[SCBillboardPbActionStartAgeVerification descriptor] */

void FUN_108ba6f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafad0,
                        &PTR____CFConstantStringClassReference_110eea078,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dac8 = puVar1;
  }
  return;
}



/* Entry: 108ba6f74; end: 108ba6fdb; +[SCBillboardPbActionResurrectedRestoreStreak descriptor] */

void FUN_108ba6f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafb20,
                        &PTR____CFConstantStringClassReference_110eea098,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dad0 = puVar1;
  }
  return;
}



/* Entry: 108ba6fdc; end: 108ba7043; +[SCBillboardPbActionSyncMicrosoftContact descriptor] */

void FUN_108ba6fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafb70,
                        &PTR____CFConstantStringClassReference_110eea0b8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dad8 = puVar1;
  }
  return;
}



/* Entry: 108ba7044; end: 108ba70ab; +[SCBillboardPbActionOpenStreakRestoreFriendshipDayPromo descriptor] */

void FUN_108ba7044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafbc0,
                        &PTR____CFConstantStringClassReference_110eea0d8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dae0 = puVar1;
  }
  return;
}



/* Entry: 108ba70ac; end: 108ba7113; +[SCBillboardPbActionDeclaredAgeRange descriptor] */

void FUN_108ba70ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafc10,
                        &PTR____CFConstantStringClassReference_110eea0f8,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372dae8 = puVar1;
  }
  return;
}



/* Entry: 108ba7114; end: 108ba717b; +[SCBillboardPbActionLogout descriptor] */

void FUN_108ba7114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372daf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafc60,
                        &PTR____CFConstantStringClassReference_110eea118,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372daf0 = puVar1;
  }
  return;
}



/* Entry: 108ba717c; end: 108ba71e3; +[SCBillboardPbActionReviewTermsOfUse descriptor] */

void FUN_108ba717c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372daf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafcb0,
                        &PTR____CFConstantStringClassReference_110eea138,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372daf8 = puVar1;
  }
  return;
}



/* Entry: 108ba71e4; end: 108ba724b; +[SCBillboardPbActionAcceptTermsOfUse descriptor] */

void FUN_108ba71e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafd00,
                        &PTR____CFConstantStringClassReference_110eea158,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372db00 = puVar1;
  }
  return;
}



/* Entry: 108ba724c; end: 108ba72b3; +[SCBillboardPbActionSetSaturnPrivacySettings descriptor] */

void FUN_108ba724c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafd50,
                        &PTR____CFConstantStringClassReference_110eea178,
                        &PTR_s_com_snapchat_billboard_11328b820,&PTR_DAT_11328b8d8,1,8,0x1c);
    puRam000000011372db08 = puVar1;
  }
  return;
}



/* Entry: 108ba72b4; end: 108ba731b; +[SCBillboardPbSaturnPrivacy descriptor] */

void FUN_108ba72b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bafda0,
                        &PTR____CFConstantStringClassReference_110dd9878,
                        &PTR_s_com_snapchat_billboard_11328b820,0,0,4,0x1c);
    puRam000000011372db10 = puVar1;
  }
  return;
}



/* Entry: 108ba731c; end: 108ba738f; -[SCOneTapLoginRegistryServices initWithLazyOneTapLoginRegistry:] */

undefined1 * FUN_108ba731c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd660;
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



/* Entry: 108ba7390; end: 108ba7397; -[SCOneTapLoginRegistryServices lazyOneTapLoginRegistry] */

undefined8 FUN_108ba7390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba7398; end: 108ba73a3; -[SCOneTapLoginRegistryServices .cxx_destruct] */

void FUN_108ba7398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba73a4; end: 108ba73fb; -[SCPostRegistrationLoggerServices initWithPostRegistrationLogger:] */

long FUN_108ba73a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108ba73fc; end: 108ba7403; -[SCPostRegistrationLoggerServices postRegistrationLogger] */

undefined8 FUN_108ba73fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba7404; end: 108ba740f; -[SCPostRegistrationLoggerServices .cxx_destruct] */

void FUN_108ba7404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba7410; end: 108ba741b; -[SCRegistrationPerformanceLoggerServices .cxx_destruct] */

void FUN_108ba7410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba741c; end: 108ba743f; -[SCTermsOfUseServices .cxx_destruct] */

void FUN_108ba741c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba7440; end: 108ba744b; -[SCUserSegmentsServices .cxx_destruct] */

void FUN_108ba7440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba744c; end: 108ba750f; -[SCUserSegments initWithCoder:] */

undefined1 * FUN_108ba744c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd678;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba7510; end: 108ba7587; -[SCUserSegments initWithIsNewUser:is14DaysNewUser:isResurrectedUser:isNewOrHighRiskUser:isInAppRatingPromptTargetUser:] */

void FUN_108ba7510(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fd678;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
  }
  return;
}



/* Entry: 108ba7588; end: 108ba75ab; -[SCUserSegments copyWithZone:] */

undefined8 FUN_108ba7588(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ba75ac; end: 108ba7647; -[SCUserSegments encodeWithCoder:] */

void FUN_108ba75ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eea218);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110eea238);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110de8738);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110eea258);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110eea278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ba7648; end: 108ba76c7; -[SCUserSegments hash] */

ulong * FUN_108ba7648(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar7 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar5;
  uStack_20 = (ulong)*(byte *)(param_1 + 0xc);
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(char *)((long)puVar2 + 8) != param_3[8] ||
            (*(char *)((long)puVar2 + 9) != param_3[9])) ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
         (*(char *)((long)puVar2 + 0xb) != param_3[0xb])) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(char *)((long)puVar2 + 0xc) == param_3[0xc]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 108ba76c8; end: 108ba778f; -[SCUserSegments isEqual:] */

bool FUN_108ba76c8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}


