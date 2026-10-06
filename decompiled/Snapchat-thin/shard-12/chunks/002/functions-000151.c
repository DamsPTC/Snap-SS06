/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108eaa608; end: 108eaa60f; -[SCCaaSCameraOptionalConfig lensInjectionConfiguration] */

undefined8 FUN_108eaa608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108eaa610; end: 108eaa617; -[SCCaaSCameraOptionalConfig cameraCreativeToolsConfig] */

undefined8 FUN_108eaa610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108eaa618; end: 108eaa61f; -[SCCaaSCameraOptionalConfig shouldDisableMusicTool] */

undefined1 FUN_108eaa618(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108eaa620; end: 108eaa627; -[SCCaaSCameraOptionalConfig shouldHideLensActionBar] */

undefined1 FUN_108eaa620(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108eaa628; end: 108eaa62f; -[SCCaaSCameraOptionalConfig shouldHideLensMiniCarousel] */

undefined1 FUN_108eaa628(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 108eaa630; end: 108eaa637; -[SCCaaSCameraOptionalConfig shouldHideTopLeftLensIcon] */

undefined1 FUN_108eaa630(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 108eaa638; end: 108eaa63f; -[SCCaaSCameraOptionalConfig overrideCameraLaunchPosition] */

undefined8 FUN_108eaa638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108eaa640; end: 108eaa647; -[SCCaaSCameraOptionalConfig disablePreviewAfterCapture] */

undefined1 FUN_108eaa640(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108eaa648; end: 108eaa64f; -[SCCaaSCameraOptionalConfig dismissAfterPreviewCancel] */

undefined1 FUN_108eaa648(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 108eaa650; end: 108eaa657; -[SCCaaSCameraOptionalConfig bottomAccessoryViewProvider] */

undefined8 FUN_108eaa650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108eaa658; end: 108eaa6ab; -[SCCaaSCameraOptionalConfig .cxx_destruct] */

void FUN_108eaa658(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108eaa6ac; end: 108eaa6c7; +[SCCaaSCameraOptionalConfigBuilder caaSCameraOptionalConfig] */

void FUN_108eaa6ac(void)

{
  _objc_alloc_init(PTR_PTR_1126b20d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eaa6c8; end: 108eaaa17; +[SCCaaSCameraOptionalConfigBuilder caaSCameraOptionalConfigFromExistingCaaSCameraOptionalConfig:] */

void FUN_108eaa6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  puVar1 = PTR_PTR_1126b20d8;
  _objc_retain(param_3);
  func_0x00010bf261e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08ece0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2600(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c22f040(param_3);
  puVar5 = puVar3;
  func_0x00010c2b8880(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c22edc0(param_3);
  puVar6 = puVar5;
  func_0x00010c2b8800(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c230c20(param_3);
  puVar7 = puVar6;
  func_0x00010c2b8940(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf2bb80(param_3);
  puVar8 = puVar7;
  func_0x00010c2a9f20(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c094b60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b2980(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf293c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2a9d20(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c22eec0(param_3);
  puVar13 = puVar11;
  func_0x00010c2b8840(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c230cc0(param_3);
  puVar14 = puVar13;
  func_0x00010c2b8960(puVar13,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c230ce0(param_3);
  puVar15 = puVar14;
  func_0x00010c2b8980(puVar14,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c230e60(param_3);
  puVar16 = puVar15;
  func_0x00010c2b89e0(puVar15,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0f00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c2b5260(puVar16,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf805a0(param_3);
  puVar19 = puVar17;
  func_0x00010c2ac540(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf83080(param_3);
  puVar20 = puVar19;
  func_0x00010c2ac700(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf1ff00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar21 = puVar20;
  func_0x00010c2a9860(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar12);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 108eaaa18; end: 108eaaa87; -[SCCaaSCameraOptionalConfigBuilder build] */

void FUN_108eaaa18(void)

{
  _objc_alloc(PTR_PTR_1126dc540);
  func_0x00010c0221c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eaaa88; end: 108eaaabf; -[SCCaaSCameraOptionalConfigBuilder withLegacyCameraViewType:] */

long FUN_108eaaa88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eaaac0; end: 108eaaac7; -[SCCaaSCameraOptionalConfigBuilder withShouldDisableSnapRecovery:] */

void FUN_108eaaac0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108eaaac8; end: 108eaaacf; -[SCCaaSCameraOptionalConfigBuilder withShouldDisableDismissalGesture:] */

void FUN_108eaaac8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 108eaaad0; end: 108eaaad7; -[SCCaaSCameraOptionalConfigBuilder withShouldHideCloseButton:] */

void FUN_108eaaad0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 108eaaad8; end: 108eaaadf; -[SCCaaSCameraOptionalConfigBuilder withCameraViewShouldUseAutoLayout:] */

void FUN_108eaaad8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 108eaaae0; end: 108eaab17; -[SCCaaSCameraOptionalConfigBuilder withLensInjectionConfiguration:] */

long FUN_108eaaae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eaab18; end: 108eaab4f; -[SCCaaSCameraOptionalConfigBuilder withCameraCreativeToolsConfig:] */

long FUN_108eaab18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eaab50; end: 108eaab57; -[SCCaaSCameraOptionalConfigBuilder withShouldDisableMusicTool:] */

void FUN_108eaab50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108eaab58; end: 108eaab5f; -[SCCaaSCameraOptionalConfigBuilder withShouldHideLensActionBar:] */

void FUN_108eaab58(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 108eaab60; end: 108eaab67; -[SCCaaSCameraOptionalConfigBuilder withShouldHideLensMiniCarousel:] */

void FUN_108eaab60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 108eaab68; end: 108eaab6f; -[SCCaaSCameraOptionalConfigBuilder withShouldHideTopLeftLensIcon:] */

void FUN_108eaab68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 108eaab70; end: 108eaaba7; -[SCCaaSCameraOptionalConfigBuilder withOverrideCameraLaunchPosition:] */

long FUN_108eaab70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eaaba8; end: 108eaabaf; -[SCCaaSCameraOptionalConfigBuilder withDisablePreviewAfterCapture:] */

void FUN_108eaaba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108eaabb0; end: 108eaabb7; -[SCCaaSCameraOptionalConfigBuilder withDismissAfterPreviewCancel:] */

void FUN_108eaabb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 108eaabb8; end: 108eaabef; -[SCCaaSCameraOptionalConfigBuilder withBottomAccessoryViewProvider:] */

long FUN_108eaabb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eaabf0; end: 108eaac43; -[SCCaaSCameraOptionalConfigBuilder .cxx_destruct] */

void FUN_108eaabf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eaac44; end: 108eaad17; -[SCCaaSCCameraCreativeToolsConfig initWithQuickStickerImage:quickStickerMetadata:captionState:] */

undefined1 *
FUN_108eaac44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff020;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eaad18; end: 108eaad3b; -[SCCaaSCCameraCreativeToolsConfig copyWithZone:] */

undefined8 FUN_108eaad18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108eaad3c; end: 108eaadbb; -[SCCaaSCCameraCreativeToolsConfig hash] */

undefined8 * FUN_108eaad3c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108eaae54:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108eaae60;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108eaae60;
          }
          goto LAB_108eaae54;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108eaae60:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108eaadbc; end: 108eaae7b; -[SCCaaSCCameraCreativeToolsConfig isEqual:] */

long FUN_108eaadbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108eaae54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108eaae60;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108eaae60;
          }
          goto LAB_108eaae54;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108eaae60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108eaae7c; end: 108eaae83; -[SCCaaSCCameraCreativeToolsConfig quickStickerImage] */

undefined8 FUN_108eaae7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eaae84; end: 108eaae8b; -[SCCaaSCCameraCreativeToolsConfig quickStickerMetadata] */

undefined8 FUN_108eaae84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108eaae8c; end: 108eaae93; -[SCCaaSCCameraCreativeToolsConfig captionState] */

undefined8 FUN_108eaae8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108eaae94; end: 108eaaecf; -[SCCaaSCCameraCreativeToolsConfig .cxx_destruct] */

void FUN_108eaae94(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eaaed0; end: 108eab02f; -[SCComposerMediaBridgeServiceProvider provide] */

void FUN_108eaaed0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108eab030;
  puStack_68 = &UNK_110ac9778;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dc548;
  _objc_alloc(PTR_PTR_1126dc548);
  func_0x00010c01c8c0();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eab030; end: 108eab0af;  */

void FUN_108eab030(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108eab0b0; end: 108eab0cb; -[SCComposerMediaBridgeServiceProvider _makeImageFactory] */

void FUN_108eab0b0(void)

{
  _objc_alloc_init(PTR_PTR_1126dc550);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eab0cc; end: 108eab127; -[SCComposerMediaBridgeServiceProvider _makeVideoFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eab0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc558;
  _objc_alloc(PTR_PTR_1126dc558);
  param_1 = param_1 + _DAT_11277d1f4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c060ea0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eab128; end: 108eab15f; -[SCComposerMediaBridgeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eab128(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277d1f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277d1f8);
  return;
}



/* Entry: 108eab160; end: 108eab1d3; -[SCComposerMediaImage initWithImage:] */

undefined1 * FUN_108eab160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff028;
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



/* Entry: 108eab1d4; end: 108eab20f; -[SCComposerMediaImage getWidth] */

double FUN_108eab1d4(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_2 + 8));
  dVar1 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 8));
  return param_1 * dVar1;
}



/* Entry: 108eab210; end: 108eab24b; -[SCComposerMediaImage getHeight] */

double FUN_108eab210(double param_1,double param_2,long param_3)

{
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 8));
  func_0x00010c14e120(*(undefined8 *)(param_3 + 8));
  return param_2 * param_1;
}



/* Entry: 108eab24c; end: 108eab487; -[SCComposerMediaImage resizeWithWidth:height:callback:] */

void FUN_108eab24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x108eab314;
    puStack_68 = &UNK_1108bb538;
    uStack_60 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x000107c27d8c(uVar1,&puStack_80);
    _objc_release(uVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 108eab488; end: 108eab6e3; -[SCComposerMediaImage cropWithX:y:width:height:callback:] */

void FUN_108eab488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  if (param_7 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108eab564;
    puStack_88 = &UNK_110a19a90;
    uStack_80 = param_5;
    uStack_70 = param_1;
    uStack_68 = param_2;
    uStack_60 = param_3;
    uStack_58 = param_4;
    _objc_retain(param_7);
    lStack_78 = param_7;
    func_0x000107c27d8c(uVar1,&puStack_a0);
    _objc_release(uVar1);
    _objc_release(lStack_78);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 108eab6e4; end: 108eab7a7; -[SCComposerMediaImage rotateWithAngle:callback:] */

void FUN_108eab6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108eab7a8;
    puStack_60 = &UNK_11085b7b0;
    uStack_58 = param_2;
    uStack_48 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_78);
    _objc_release(uVar1);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108eab7a8; end: 108eab91f;  */

void FUN_108eab7a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  uVar8 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c23d0a0(uVar5);
  func_0x00010c23d0a0(uVar5);
  _CGAffineTransformMakeRotation(&puStack_b0,uVar8);
  uVar6 = 0;
  uVar7 = 0;
  _CGRectApplyAffineTransform(&puStack_b0);
  uVar1 = uVar5;
  uVar2 = uVar6;
  func_0x00010c14e120(uVar5);
  FUN_108eabb38(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108eabc40;
  puStack_98 = &UNK_110ac97d8;
  uStack_90 = uVar5;
  uStack_88 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = uVar8;
  _objc_retain(uVar5);
  uVar2 = uVar1;
  func_0x00010bfe91c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_90);
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_3 + 0x28);
  puVar3 = PTR_PTR_1126d5c98;
  _objc_alloc(PTR_PTR_1126d5c98);
  func_0x00010c01bf60();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108eab920; end: 108eab9cf; -[SCComposerMediaImage getPngDataWithCallback:] */

void FUN_108eab920(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108eab9d0;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uStack_40 = param_1;
    lStack_38 = param_3;
    func_0x000107c27d8c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108eab9d0; end: 108eaba17;  */

void FUN_108eab9d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _UIImagePNGRepresentation(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108eaba18; end: 108eabad7; -[SCComposerMediaImage getJpegDataWithCompressionQuality:callback:] */

void FUN_108eaba18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108eabad8;
    puStack_60 = &UNK_11085b7b0;
    _objc_retain(param_4);
    uStack_58 = param_2;
    lStack_50 = param_4;
    uStack_48 = param_1;
    func_0x000107c27d8c(uVar1,&puStack_78);
    _objc_release(uVar1);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108eabad8; end: 108eabb27;  */

void FUN_108eabad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _UIImageJPEGRepresentation(*(undefined8 *)(param_1 + 0x30),uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108eabb28; end: 108eabb37; -[SCComposerMediaImage dispose] */

void FUN_108eabb28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108eabb38; end: 108eabbc3;  */

void FUN_108eabb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5fe0(param_3);
  func_0x00010c1d4c20(puVar1,param_5,0);
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c046ac0(param_1,param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108eabbc4; end: 108eabbdb;  */

void FUN_108eabbc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 108eabbdc; end: 108eabc3f;  */

void FUN_108eabbdc(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = -dVar2;
  dVar5 = -dVar3;
  func_0x00010c23d0a0(uVar1);
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar4,dVar5,dVar2,dVar3,uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 108eabc40; end: 108eabcff;  */

void FUN_108eabc40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_2);
  func_0x00010bdc1000(param_2);
  dVar3 = *(double *)(param_1 + 0x40) * 0.5;
  _CGContextTranslateCTM(*(double *)(param_1 + 0x38) * 0.5,dVar3);
  uVar1 = param_2;
  func_0x00010bdc1000(param_2);
  _objc_release(param_2);
  dVar2 = *(double *)(param_1 + 0x48);
  _CGContextRotateCTM(dVar2,uVar1);
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
  dVar4 = dVar2 * -0.5;
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
  dVar5 = dVar3 * -0.5;
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,dVar5,dVar2,dVar3,*(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 108eabd00; end: 108eabd0b; -[SCComposerMediaImage pushToValdiMarshaller:] */

void FUN_108eabd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 108eabd0c; end: 108eabd13; -[SCComposerMediaImage image] */

undefined8 FUN_108eabd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108eabd14; end: 108eabd1f; -[SCComposerMediaImage .cxx_destruct] */

void FUN_108eabd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eabd20; end: 108eabd6b; -[SCComposerMediaImageFactory wrapImage:] */

void FUN_108eabd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5c98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eabd6c; end: 108eabedb; -[SCComposerMediaImageFactory getImageFromDataWithData:callback:] */

void FUN_108eabd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x108eabe40;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108eabedc; end: 108eabee7; -[SCComposerMediaImageFactory pushToValdiMarshaller:] */

void FUN_108eabedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 108eabee8; end: 108eabfb7; -[SCComposerMediaVideo initWithFileURL:videoImportServices:] */

undefined1 *
FUN_108eabee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bdc2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eabfb8; end: 108eac023; -[SCComposerMediaVideo getWidth] */

undefined8 FUN_108eabfb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c279200(uVar1,param_3,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108eac024; end: 108eac08f; -[SCComposerMediaVideo getHeight] */

undefined8 FUN_108eac024(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c279200(uVar1,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 108eac090; end: 108eac0d7; -[SCComposerMediaVideo getDurationMs] */

double FUN_108eac090(double param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_28);
  }
  _CMTimeGetSeconds(&uStack_28);
  return param_1 * 1000.0;
}



/* Entry: 108eac0d8; end: 108eac0df; -[SCComposerMediaVideo getMediaUrl] */

void FUN_108eac0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_absoluteString_112598bb0);
  return;
}



/* Entry: 108eac0e0; end: 108eac157; -[SCComposerMediaVideo getMp4DataWithCallback:] */

void FUN_108eac0e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf64ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar1,0);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108eac158; end: 108eac21f; -[SCComposerMediaVideo extractSegmentWithStartTimeMs:durationMs:callback:] */

void FUN_108eac158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108eac220;
    puStack_68 = &UNK_1108bb538;
    uStack_60 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x000107c27d8c(uVar1,&puStack_80);
    _objc_release(uVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 108eac220; end: 108eac42f;  */

void FUN_108eac220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar6 = *(double *)(param_1 + 0x30);
  dVar7 = dVar6 + *(double *)(param_1 + 0x38);
  func_0x00010bfc5040(*(undefined8 *)(param_1 + 0x20));
  if (dVar6 < dVar7) {
                    /* WARNING: Could not recover jumptable at 0x000108eac28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),0,&PTR____CFConstantStringClassReference_110e39b58);
    return;
  }
  _CMTimeMakeWithSeconds(&uStack_e0,*(double *)(param_1 + 0x30) / 1000.0,1000);
  _CMTimeMakeWithSeconds(auStack_a8,*(double *)(param_1 + 0x38) / 1000.0,1000);
  _CMTimeRangeMake(&uStack_90,&uStack_e0,auStack_a8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c29a4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf165a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uVar4 = uVar2;
  func_0x00010bf9d400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  func_0x00010c297260(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 108eac430; end: 108eac4f7;  */

void FUN_108eac430(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126dc560;
    _objc_alloc(PTR_PTR_1126dc560);
    uVar1 = param_2;
    func_0x00010bf9d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012ea0(puVar2);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x28);
    pcVar3 = *(code **)(lVar4 + 0x10);
    param_3 = (undefined *)0x0;
    puVar5 = puVar2;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar5 = param_3;
  }
  (*pcVar3)(lVar4,puVar2,param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eac4f8; end: 108eac527; -[SCComposerMediaVideo dispose] */

void FUN_108eac4f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108eac528; end: 108eac533; -[SCComposerMediaVideo pushToValdiMarshaller:] */

void FUN_108eac528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 108eac534; end: 108eac53b; -[SCComposerMediaVideo asset] */

undefined8 FUN_108eac534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108eac53c; end: 108eac577; -[SCComposerMediaVideo .cxx_destruct] */

void FUN_108eac53c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eac578; end: 108eac5eb; -[SCComposerMediaVideoFactory initWithVideoImportServices:] */

undefined1 * FUN_108eac578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff038;
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



/* Entry: 108eac5ec; end: 108eac647; -[SCComposerMediaVideoFactory wrapAssetUrl:] */

void FUN_108eac5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc560;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c012ea0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eac648; end: 108eac7bf; -[SCComposerMediaVideoFactory wrapPhAsset:callback:] */

void FUN_108eac648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c29a4c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf165a0(uVar1,param_2,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  uVar2 = uVar1;
  func_0x00010bf9d3e0(uVar1,param_2,param_3,0,uVar4,&PTR____CFConstantStringClassReference_110efdcf8
                      ,&uStack_70,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108eac7c0;
  puStack_88 = &UNK_11085ac48;
  lStack_80 = param_1;
  uStack_78 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(uVar3,param_2,&puStack_a0,0);
  _objc_release(uVar3);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108eac7c0; end: 108eac867;  */

void FUN_108eac7c0(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar1 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar4 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126dc560;
    _objc_alloc(PTR_PTR_1126dc560);
    func_0x00010c012ea0();
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar3 = *(code **)(lVar1 + 0x10);
    param_3 = (undefined *)0x0;
    puVar4 = puVar2;
  }
  (*pcVar3)(lVar1,puVar2,param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eac868; end: 108eac873; -[SCComposerMediaVideoFactory .cxx_destruct] */

void FUN_108eac868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eac874; end: 108eac96f; -[SCMediaImageImportProcessor initWithPerformer:userBlizzardLogger:grapheneRegistry:cofEngine:] */

undefined1 *
FUN_108eac874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ff040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eac970; end: 108eac97b; -[SCMediaImageImportProcessor webPDataForImportedCameraRollImage:strategy:context:] */

void FUN_108eac970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dataForImportedCameraRollImage__11255b8a0,param_3,param_4,1,param_5);
  return;
}



/* Entry: 108eac97c; end: 108eac987; -[SCMediaImageImportProcessor JPEGDataForImportedCameraRollImage:strategy:context:] */

void FUN_108eac97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dataForImportedCameraRollImage__11255b8a0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 108eac988; end: 108eacb07; -[SCMediaImageImportProcessor _dataForImportedCameraRollImage:strategy:encodeWebP:context:] */

void FUN_108eac988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_1126bf8a0;
    _objc_alloc(PTR_PTR_1126bf8a0);
    param_1 = 0x40a1400000000000;
    func_0x00010c03ffa0(0x40a1400000000000);
  }
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar2 = PTR_PTR_1126dc568;
  _objc_opt_new(PTR_PTR_1126dc568);
  puVar3 = PTR_PTR_1126dc570;
  _objc_alloc(PTR_PTR_1126dc570);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40(puVar3,param_3,puVar4,puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96740(param_1,param_2,param_3,puVar1,puVar4,puVar2,param_4,param_5,param_6,0,param_7
                      ,0);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eacb08; end: 108eacd03; -[SCMediaImageImportProcessor optionalJPEGDataForImportedCameraRollImage:strategy:context:] */

void FUN_108eacb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_1126bf8a0;
    _objc_alloc(PTR_PTR_1126bf8a0);
    param_1 = 0x40a1400000000000;
    func_0x00010c03ffa0(0x40a1400000000000);
  }
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126dc568;
  _objc_opt_new(PTR_PTR_1126dc568);
  puVar3 = PTR_PTR_1126dc570;
  _objc_alloc(PTR_PTR_1126dc570);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a40(puVar3,param_3,puVar4,puVar2);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96740(param_1,param_2,param_3,puVar4,puVar5,puVar2,param_4,param_5,0,0,param_6,0);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108eacd04;
  puStack_80 = &UNK_1108b71b0;
  puStack_78 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(puVar5,param_3,&puStack_98,0);
  _objc_release(puVar5);
  _objc_release(puStack_78);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eacd04; end: 108eacdab;  */

void FUN_108eacd04(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010bf993e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
    _objc_release(puVar1);
  }
  else {
    param_3 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eacdac; end: 108ead0f7; -[SCMediaImageImportProcessor _retrieveImageInPromise:PHImageManager:canceler:phAsset:strategy:encodeWebP:retryCount:context:startTime:lastError:] */

void FUN_108eacdac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,undefined1 param_10,ulong param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [16];
  
  uVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uVar1 = param_9;
  func_0x00010c13f760();
  if (param_11 < uVar1) {
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010bf010a0(param_9);
    func_0x00010c1cc000(puVar2);
    func_0x00010c1ec960(puVar2);
    func_0x00010bf6d200(param_9);
    func_0x00010c18ba80(puVar2);
    uVar1 = param_9;
    func_0x00010bf88f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_9;
      func_0x00010bf88f00(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e47a0(puVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_9;
    func_0x00010c136ea0();
    if ((int)uVar1 != 0) {
      func_0x00010c220e20(puVar2);
    }
    func_0x00010c0c2400(param_9);
    FUN_108eada4c(param_8);
    _objc_initWeak(auStack_90,param_3);
    _objc_copyWeak(auStack_b0,auStack_90);
    _objc_retain(param_7);
    _objc_retain(param_5);
    uStack_a0 = param_11;
    uStack_a8 = param_1;
    _objc_retain(param_12);
    uStack_98 = param_10;
    _objc_retain(param_9);
    _objc_retain(param_6);
    _objc_retain(param_8);
    func_0x00010c1357a0(uVar3,param_2,param_6);
    func_0x00010c1ebd20(param_7);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_9);
    _objc_release(param_12);
    _objc_release(param_5);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf43ca0(param_5);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108ead0f8();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108ead0f8; end: 108ead2f7;  */

void FUN_108ead0f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc578;
  func_0x00010bfe7f00(PTR_PTR_1126dc578);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010b9f9008(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_2);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd32f8;
  }
  else {
    param_2 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (param_4 != 0) {
    _objc_release(ppuVar5);
    _objc_release(puVar1);
    _objc_release(param_2);
  }
  uVar6 = param_1;
  func_0x00010bf29da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ead2f8; end: 108ead557;  */

void FUN_108ead2f8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      func_0x00010c06e0e0();
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        uVar3 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be96740(uVar4,lVar1);
      }
      else {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
        uVar3 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_108ead0f8();
        _objc_release(uVar4);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      _objc_retain(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar7);
      _objc_retain(param_2);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar9);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar4);
      func_0x00010c0f7fc0(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(param_2);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108ead558; end: 108eada03;  */

void FUN_108ead558(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 != 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_108ead0f8();
    _objc_release(lVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    goto LAB_108eada00;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    func_0x00010bf1f440(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010b69662c(0x42c80000,lVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bf45780(*(undefined8 *)(param_1 + 0x50));
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar3 == 0) {
    puVar5 = PTR_PTR_1126dc578;
    func_0x00010bfe7660(PTR_PTR_1126dc578);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar6 = puVar5;
    func_0x00010c2ac460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c2ac460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c2ac460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf29da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar2);
    _objc_release(uVar8);
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    func_0x00010bf1f440();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_108ead0f8(uVar8,1,uVar10,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(uVar8);
      goto LAB_108ead9a8;
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010be96740(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar4 = *(undefined **)(*(long *)(param_1 + 0x30) + 0x10);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108ead0f8();
LAB_108ead9a8:
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
LAB_108eada00:
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 108eada04; end: 108eada4b; -[SCMediaImageImportProcessor .cxx_destruct] */

void FUN_108eada04(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108eada4c; end: 108eadaf3;  */

undefined1  [16] FUN_108eada4c(double param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain();
  uVar3 = param_2;
  func_0x00010c0fcaa0();
  dVar6 = (double)uVar3;
  uVar3 = param_2;
  func_0x00010c0fce40();
  _objc_release(param_2);
  dVar4 = (double)uVar3;
  bVar1 = true;
  bVar2 = false;
  if (dVar4 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1) && !NAN(dVar6)) {
      bVar1 = param_1 < dVar6;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    dVar5 = (double)(float)(int)param_1;
    if (dVar6 <= dVar4) {
      dVar6 = (double)(float)(int)((dVar5 * dVar6) / dVar4);
      dVar4 = dVar5;
    }
    else {
      dVar4 = (double)(float)(int)((dVar5 * dVar4) / dVar6);
      dVar6 = dVar5;
    }
  }
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = dVar4;
  return auVar7;
}



/* Entry: 108eadaf4; end: 108eadbb7; -[SCMediaVideoImportBlizzardLogger initWithUserBlizzardLogger:] */

undefined1 * FUN_108eadaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eadbb8; end: 108eade7b; -[SCMediaVideoImportBlizzardLogger logCameraRollMediaImportWithAVAsset:outputURL:mediaImportStage:transcodingStatus:startTime:context:importedContentId:retryCount:skipTranscodingFailureReason:currentPreset:error:] */

void FUN_108eadbb8(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _CACurrentMediaTime();
  lVar5 = (long)((dVar6 - param_1) * 1000.0);
  if (param_6 == 1) {
    puVar2 = PTR_PTR_1126dc580;
    _objc_opt_new(PTR_PTR_1126dc580);
    func_0x00010c16d8e0();
    func_0x00010c16d900(puVar2,param_3,param_7);
    func_0x00010c182d40(puVar2,param_3,param_8);
    func_0x00010c1ab140(puVar2,param_3,param_9);
    func_0x00010c1b92e0(puVar2,param_3,lVar5);
    func_0x00010c1ed9a0(puVar2,param_3,param_10);
    func_0x00010c1c5440(puVar2,param_3,&PTR____CFConstantStringClassReference_110db93f8);
    func_0x00010bdcd1c0(param_2,param_3,puVar2,param_4);
    func_0x00010bdcd0a0(param_2,param_3,param_13,puVar2,1);
    if ((param_7 != 1) || (lVar3 = param_9, func_0x00010c08fa60(), lVar3 == 0)) goto LAB_108eade00;
    func_0x00010bdc6aa0(param_2,param_3,puVar2,lVar5,param_9);
  }
  else {
    if (param_6 != 2) goto LAB_108eade2c;
    puVar2 = param_2;
    func_0x00010be1cf20(param_2,param_3,param_9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126dc580;
      _objc_opt_new(PTR_PTR_1126dc580);
      func_0x00010c182d40();
      func_0x00010c1ab140(puVar2,param_3,param_9);
      func_0x00010bdcd1c0(param_2,param_3,puVar2,param_4);
    }
    func_0x00010c16d8c0(puVar2,param_3,param_7);
    func_0x00010c1ed9a0(puVar2,param_3,param_10);
    func_0x00010c1c5440(puVar2,param_3,&PTR____CFConstantStringClassReference_110db93f8);
    puVar1 = param_2;
    func_0x00010be1cf40(param_2,param_3,param_9);
    func_0x00010c16d8a0(puVar2,param_3,lVar5);
    func_0x00010c1b92e0(puVar2,param_3,puVar1 + lVar5);
    func_0x00010bdcd360(param_2,param_3,puVar2,param_5);
    func_0x00010bdcd0a0(param_2,param_3,param_13,puVar2,2);
    func_0x00010bdcd480(param_2,param_3,param_11,puVar2,param_5);
    func_0x00010c187940(puVar2,param_3,param_12);
LAB_108eade00:
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
LAB_108eade2c:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eade7c; end: 108eadf43; -[SCMediaVideoImportBlizzardLogger _addEvent:latencyMs:withContentId:] */

void FUN_108eade7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_5 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar2,param_2,puVar1,param_5);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eadf44; end: 108eadfd3; -[SCMediaVideoImportBlizzardLogger _getAndRemoveEventWithContentId:] */

void FUN_108eadf44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dff20(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eadfd4; end: 108eae08f; -[SCMediaVideoImportBlizzardLogger _getAndRemoveLatencyWithContentId:] */

ulong FUN_108eadfd4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1;
      func_0x00010c067fc0(uVar1);
    }
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
  return uVar3;
}


