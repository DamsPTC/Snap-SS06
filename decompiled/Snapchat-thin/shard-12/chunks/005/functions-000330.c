/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091a3274; end: 1091a327f; -[SCLensProcessingSharedServices setRenderTarget:] */

void FUN_1091a3274(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1091a3280; end: 1091a331f; -[SCLensProcessingSharedServices .cxx_destruct] */

void FUN_1091a3280(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1091a3320; end: 1091a3393; -[SCOnDeviceMLModelsPreloadingServices initWithMLModelsPreloader:] */

undefined1 * FUN_1091a3320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700a78;
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



/* Entry: 1091a3394; end: 1091a339b; -[SCOnDeviceMLModelsPreloadingServices mlModelsPreloader] */

undefined8 FUN_1091a3394(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a339c; end: 1091a33a7; -[SCOnDeviceMLModelsPreloadingServices .cxx_destruct] */

void FUN_1091a339c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a33a8; end: 1091a33af; -[SCLensUserDataProviderServices lensUserDataProvider] */

undefined8 FUN_1091a33a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a33b0; end: 1091a33df; -[SCLensUserDataProviderServices setLensUserDataProvider:] */

void FUN_1091a33b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091a33e0; end: 1091a33eb; -[SCLensUserDataProviderServices .cxx_destruct] */

void FUN_1091a33e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a33ec; end: 1091a3457; -[SCLensGamesRPCServices initWithLensGamesRPCHandler:] */

undefined1 * FUN_1091a33ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700a88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1bbc00(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a3458; end: 1091a345f; -[SCLensGamesRPCServices lensGamesRPCHandler] */

undefined8 FUN_1091a3458(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a3460; end: 1091a348f; -[SCLensGamesRPCServices setLensGamesRPCHandler:] */

void FUN_1091a3460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091a3490; end: 1091a349b; -[SCLensGamesRPCServices .cxx_destruct] */

void FUN_1091a3490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a349c; end: 1091a34a3; -[SCInLensCreationDataServices textProvider] */

undefined8 FUN_1091a349c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a34a4; end: 1091a34ab; -[SCInLensCreationDataServices textDelegate] */

undefined8 FUN_1091a34a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a34ac; end: 1091a34b3; -[SCInLensCreationDataServices visibilityProvider] */

undefined8 FUN_1091a34ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091a34b4; end: 1091a34bb; -[SCInLensCreationDataServices visibilityDelegate] */

undefined8 FUN_1091a34b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091a34bc; end: 1091a34c3; -[SCInLensCreationDataServices clientEventsProvider] */

undefined8 FUN_1091a34bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091a34c4; end: 1091a34cb; -[SCInLensCreationDataServices clientEventsDelegate] */

undefined8 FUN_1091a34c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091a34cc; end: 1091a34d3; -[SCInLensCreationDataServices activeStateProvider] */

undefined8 FUN_1091a34cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091a34d4; end: 1091a34db; -[SCInLensCreationDataServices activeStateDelegate] */

undefined8 FUN_1091a34d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091a34dc; end: 1091a355f; -[SCInLensCreationDataServices .cxx_destruct] */

void FUN_1091a34dc(long param_1)

{
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



/* Entry: 1091a3560; end: 1091a35f7; -[SCInLensCreationActiveStateEvent initWithLensId:uiState:scaleFactor:] */

undefined1 *
FUN_1091a3560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112700a98;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a35f8; end: 1091a361b; -[SCInLensCreationActiveStateEvent copyWithZone:] */

undefined8 FUN_1091a35f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a361c; end: 1091a36b3; -[SCInLensCreationActiveStateEvent hash] */

undefined8 * FUN_1091a361c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1091a3760:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1091a376c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 8);
        if (puVar7 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_1091a376c;
        }
        goto LAB_1091a3760;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_1091a376c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 1091a36b4; end: 1091a3787; -[SCInLensCreationActiveStateEvent isEqual:] */

long FUN_1091a36b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a3760:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a376c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_1091a376c;
        }
        goto LAB_1091a3760;
      }
    }
    lVar4 = 0;
  }
LAB_1091a376c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1091a3788; end: 1091a378f; -[SCInLensCreationActiveStateEvent lensId] */

undefined8 FUN_1091a3788(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a3790; end: 1091a3797; -[SCInLensCreationActiveStateEvent uiState] */

undefined8 FUN_1091a3790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a3798; end: 1091a379f; -[SCInLensCreationActiveStateEvent scaleFactor] */

undefined8 FUN_1091a3798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a37a0; end: 1091a37ab; -[SCInLensCreationActiveStateEvent .cxx_destruct] */

void FUN_1091a37a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a37ac; end: 1091a3917; -[SCInLensCreationCustomizationAnalyticsMetadata initWithIndex:tabType:customizationType:isFavorited:lensSource:preferredLensSessionBaseId:] */

undefined1 *
FUN_1091a37ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112700aa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a3918; end: 1091a393b; -[SCInLensCreationCustomizationAnalyticsMetadata copyWithZone:] */

undefined8 FUN_1091a3918(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a393c; end: 1091a39df; -[SCInLensCreationCustomizationAnalyticsMetadata hash] */

undefined8 * FUN_1091a393c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1091a3ac0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a3acc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_1091a3acc;
                }
                goto LAB_1091a3ac0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1091a3acc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091a39e0; end: 1091a3ae7; -[SCInLensCreationCustomizationAnalyticsMetadata isEqual:] */

long FUN_1091a39e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a3ac0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a3acc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_1091a3acc;
                }
                goto LAB_1091a3ac0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1091a3acc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a3ae8; end: 1091a3aef; -[SCInLensCreationCustomizationAnalyticsMetadata index] */

undefined8 FUN_1091a3ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a3af0; end: 1091a3af7; -[SCInLensCreationCustomizationAnalyticsMetadata tabType] */

undefined8 FUN_1091a3af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a3af8; end: 1091a3aff; -[SCInLensCreationCustomizationAnalyticsMetadata customizationType] */

undefined8 FUN_1091a3af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a3b00; end: 1091a3b07; -[SCInLensCreationCustomizationAnalyticsMetadata isFavorited] */

undefined8 FUN_1091a3b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091a3b08; end: 1091a3b0f; -[SCInLensCreationCustomizationAnalyticsMetadata lensSource] */

undefined8 FUN_1091a3b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091a3b10; end: 1091a3b17; -[SCInLensCreationCustomizationAnalyticsMetadata preferredLensSessionBaseId] */

undefined8 FUN_1091a3b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091a3b18; end: 1091a3b77; -[SCInLensCreationCustomizationAnalyticsMetadata .cxx_destruct] */

void FUN_1091a3b18(long param_1)

{
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



/* Entry: 1091a3b78; end: 1091a3d1b; -[SCInLensCreationCustomizationChangedEvent initWithBody:customizationId:previewText:promptSource:tabId:promptType:mentions:analyticsMetadata:] */

undefined1 *
FUN_1091a3b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112700aa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a3d1c; end: 1091a3d3f; -[SCInLensCreationCustomizationChangedEvent copyWithZone:] */

undefined8 FUN_1091a3d1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a3d40; end: 1091a3dfb; -[SCInLensCreationCustomizationChangedEvent hash] */

undefined8 * FUN_1091a3d40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1091a3f04:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a3f10;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[6] == param_3[6])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_1091a3f10;
                  }
                  goto LAB_1091a3f04;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1091a3f10:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091a3dfc; end: 1091a3f2b; -[SCInLensCreationCustomizationChangedEvent isEqual:] */

long FUN_1091a3dfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a3f04:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a3f10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
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
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_1091a3f10;
                  }
                  goto LAB_1091a3f04;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1091a3f10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a3f2c; end: 1091a3f33; -[SCInLensCreationCustomizationChangedEvent body] */

undefined8 FUN_1091a3f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a3f34; end: 1091a3f3b; -[SCInLensCreationCustomizationChangedEvent customizationId] */

undefined8 FUN_1091a3f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a3f3c; end: 1091a3f43; -[SCInLensCreationCustomizationChangedEvent previewText] */

undefined8 FUN_1091a3f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a3f44; end: 1091a3f4b; -[SCInLensCreationCustomizationChangedEvent promptSource] */

undefined8 FUN_1091a3f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091a3f4c; end: 1091a3f53; -[SCInLensCreationCustomizationChangedEvent tabId] */

undefined8 FUN_1091a3f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091a3f54; end: 1091a3f5b; -[SCInLensCreationCustomizationChangedEvent promptType] */

undefined8 FUN_1091a3f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091a3f5c; end: 1091a3f63; -[SCInLensCreationCustomizationChangedEvent mentions] */

undefined8 FUN_1091a3f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091a3f64; end: 1091a3f6b; -[SCInLensCreationCustomizationChangedEvent analyticsMetadata] */

undefined8 FUN_1091a3f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091a3f6c; end: 1091a3fd7; -[SCInLensCreationCustomizationChangedEvent .cxx_destruct] */

void FUN_1091a3f6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a3fd8; end: 1091a404f; -[SCInLensCreationShowKeyboardEvent initWithLensId:] */

undefined1 * FUN_1091a3fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700ab0;
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



/* Entry: 1091a4050; end: 1091a4073; -[SCInLensCreationShowKeyboardEvent copyWithZone:] */

undefined8 FUN_1091a4050(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4074; end: 1091a407b; -[SCInLensCreationShowKeyboardEvent hash] */

void FUN_1091a4074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1091a407c; end: 1091a410b; -[SCInLensCreationShowKeyboardEvent isEqual:] */

long FUN_1091a407c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a40f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1091a40f0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1091a40f0;
    }
  }
  lVar3 = 1;
LAB_1091a40f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a410c; end: 1091a4113; -[SCInLensCreationShowKeyboardEvent lensId] */

undefined8 FUN_1091a410c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a4114; end: 1091a411f; -[SCInLensCreationShowKeyboardEvent .cxx_destruct] */

void FUN_1091a4114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4120; end: 1091a41a7; -[SCInLensCreationCTAButtonVisibilityEvent initWithLensId:shouldHide:] */

undefined1 *
FUN_1091a4120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700ab8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a41a8; end: 1091a41cb; -[SCInLensCreationCTAButtonVisibilityEvent copyWithZone:] */

undefined8 FUN_1091a41a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a41cc; end: 1091a4237; -[SCInLensCreationCTAButtonVisibilityEvent hash] */

undefined8 * FUN_1091a41cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a42bc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1091a42bc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1091a42bc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1091a42bc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1091a4238; end: 1091a42d7; -[SCInLensCreationCTAButtonVisibilityEvent isEqual:] */

long FUN_1091a4238(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a42bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1091a42bc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1091a42bc;
    }
  }
  lVar3 = 1;
LAB_1091a42bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a42d8; end: 1091a42df; -[SCInLensCreationCTAButtonVisibilityEvent lensId] */

undefined8 FUN_1091a42d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a42e0; end: 1091a42e7; -[SCInLensCreationCTAButtonVisibilityEvent shouldHide] */

undefined1 FUN_1091a42e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091a42e8; end: 1091a42f3; -[SCInLensCreationCTAButtonVisibilityEvent .cxx_destruct] */

void FUN_1091a42e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091a42f4; end: 1091a436b; -[SCInLensCreationTriggerRandomizationEvent initWithLensId:] */

undefined1 * FUN_1091a42f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700ac0;
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



/* Entry: 1091a436c; end: 1091a438f; -[SCInLensCreationTriggerRandomizationEvent copyWithZone:] */

undefined8 FUN_1091a436c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4390; end: 1091a4397; -[SCInLensCreationTriggerRandomizationEvent hash] */

void FUN_1091a4390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1091a4398; end: 1091a4427; -[SCInLensCreationTriggerRandomizationEvent isEqual:] */

long FUN_1091a4398(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a440c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1091a440c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1091a440c;
    }
  }
  lVar3 = 1;
LAB_1091a440c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a4428; end: 1091a442f; -[SCInLensCreationTriggerRandomizationEvent lensId] */

undefined8 FUN_1091a4428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a4430; end: 1091a443b; -[SCInLensCreationTriggerRandomizationEvent .cxx_destruct] */

void FUN_1091a4430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a443c; end: 1091a4483; +[SCInLensCreationClientEventType generate] */

void FUN_1091a443c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4310;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091a4484; end: 1091a44a7; -[SCInLensCreationClientEventType copyWithZone:] */

undefined8 FUN_1091a4484(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a44a8; end: 1091a44af; -[SCInLensCreationClientEventType hash] */

undefined8 FUN_1091a44a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a44b0; end: 1091a44f3; -[SCInLensCreationClientEventType internalInit] */

void FUN_1091a44b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112700ac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a44f4; end: 1091a457b; -[SCInLensCreationClientEventType isEqual:] */

bool FUN_1091a44f4(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 1091a457c; end: 1091a4597; -[SCInLensCreationClientEventType matchGenerate:] */

void FUN_1091a457c(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001091a4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 1091a4598; end: 1091a4643; -[SCInLensCreationClientEvent initWithLensId:eventType:] */

undefined1 *
FUN_1091a4598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700ad0;
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



/* Entry: 1091a4644; end: 1091a4667; -[SCInLensCreationClientEvent copyWithZone:] */

undefined8 FUN_1091a4644(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4668; end: 1091a46db; -[SCInLensCreationClientEvent hash] */

undefined8 * FUN_1091a4668(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1091a475c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a4768;
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
          goto LAB_1091a4768;
        }
        goto LAB_1091a475c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1091a4768:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091a46dc; end: 1091a4783; -[SCInLensCreationClientEvent isEqual:] */

long FUN_1091a46dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a475c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a4768;
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
          goto LAB_1091a4768;
        }
        goto LAB_1091a475c;
      }
    }
    lVar3 = 0;
  }
LAB_1091a4768:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a4784; end: 1091a478b; -[SCInLensCreationClientEvent lensId] */

undefined8 FUN_1091a4784(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a478c; end: 1091a4793; -[SCInLensCreationClientEvent eventType] */

undefined8 FUN_1091a478c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a4794; end: 1091a47c3; -[SCInLensCreationClientEvent .cxx_destruct] */

void FUN_1091a4794(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a47c4; end: 1091a486f; -[SCInLensCreationDataMention initWithUserId:username:] */

undefined1 *
FUN_1091a47c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700ad8;
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



/* Entry: 1091a4870; end: 1091a4893; -[SCInLensCreationDataMention copyWithZone:] */

undefined8 FUN_1091a4870(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4894; end: 1091a4907; -[SCInLensCreationDataMention hash] */

undefined8 * FUN_1091a4894(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1091a4988:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a4994;
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
          goto LAB_1091a4994;
        }
        goto LAB_1091a4988;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1091a4994:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1091a4908; end: 1091a49af; -[SCInLensCreationDataMention isEqual:] */

long FUN_1091a4908(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a4988:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a4994;
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
          goto LAB_1091a4994;
        }
        goto LAB_1091a4988;
      }
    }
    lVar3 = 0;
  }
LAB_1091a4994:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a49b0; end: 1091a49b7; -[SCInLensCreationDataMention userId] */

undefined8 FUN_1091a49b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a49b8; end: 1091a49bf; -[SCInLensCreationDataMention username] */

undefined8 FUN_1091a49b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a49c0; end: 1091a49ef; -[SCInLensCreationDataMention .cxx_destruct] */

void FUN_1091a49c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a49f0; end: 1091a4a8b; -[SCInLensCreationImaginePageControlsConfiguration initWithShowRandomizationButton:ctaButtonType:placeholderType:startWithEmptyTextInput:forbidGenerationWithEmptyTextInput:usesFloatingInputBar:visualTrayUnderPreview:startWithTrendingListOpen:disableViewportTapToGenerate:generateOnTapOnVisualPrompt:] */

void FUN_1091a49f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112700ae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._3_1_;
  }
  return;
}



/* Entry: 1091a4a8c; end: 1091a4aaf; -[SCInLensCreationImaginePageControlsConfiguration copyWithZone:] */

undefined8 FUN_1091a4a8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4ab0; end: 1091a4b4f; -[SCInLensCreationImaginePageControlsConfiguration hash] */

ulong * FUN_1091a4ab0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar6 = *(undefined4 *)(param_1 + 9);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar7 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar5;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_28 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_20 = (ulong)*(byte *)(param_1 + 0xf);
  puVar2 = &uStack_68;
  func_0x000107c3191c(puVar2,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((((char)puVar2[1] != (char)param_3[1] || (puVar2[2] != param_3[2])) ||
            (puVar2[3] != param_3[3])) ||
           ((*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9) ||
            (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))))) ||
         ((*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb) ||
          (((*(char *)((long)puVar2 + 0xc) != *(char *)((long)param_3 + 0xc) ||
            (*(char *)((long)puVar2 + 0xd) != *(char *)((long)param_3 + 0xd))) ||
           (*(char *)((long)puVar2 + 0xe) != *(char *)((long)param_3 + 0xe))))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xf) == *(char *)((long)param_3 + 0xf));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1091a4b50; end: 1091a4c67; -[SCInLensCreationImaginePageControlsConfiguration isEqual:] */

bool FUN_1091a4b50(ulong param_1,undefined8 param_2,ulong param_3)

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
          ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           ((*(char *)(param_1 + 9) != *(char *)(param_3 + 9) ||
            (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))))) ||
         ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
          (((*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc) ||
            (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))) ||
           (*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1091a4c68; end: 1091a4c6f; -[SCInLensCreationImaginePageControlsConfiguration showRandomizationButton] */

undefined1 FUN_1091a4c68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091a4c70; end: 1091a4c77; -[SCInLensCreationImaginePageControlsConfiguration ctaButtonType] */

undefined8 FUN_1091a4c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a4c78; end: 1091a4c7f; -[SCInLensCreationImaginePageControlsConfiguration placeholderType] */

undefined8 FUN_1091a4c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a4c80; end: 1091a4c87; -[SCInLensCreationImaginePageControlsConfiguration startWithEmptyTextInput] */

undefined1 FUN_1091a4c80(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


