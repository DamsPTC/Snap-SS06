/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008adf0c; end: 1008adf13;  */

void FUN_1008adf0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1008adf14; end: 1008adf23; -[SCScalingButton image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008adf14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e144);
}



/* Entry: 1008adf24; end: 1008adf33; -[SCScalingButton imageInsetAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008adf24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e114);
}



/* Entry: 1008adf34; end: 1008adfe3;  */

undefined8 FUN_1008adf34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4008c(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c51d48();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000107c3f300(uVar4);
    uVar5 = uVar3;
    func_0x000107c49ce0(uVar3,param_2,uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return uVar5;
}



/* Entry: 1008adfe4; end: 1008ae013;  */

void FUN_1008adfe4(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9c20);
  func_0x000107c45db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008ae014; end: 1008ae137; -[SCCameraSelfieSettingsConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined8 *
FUN_1008ae014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8980;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1008ae138;
    puStack_58 = &UNK_110841f80;
    func_0x000107c61174(param_3);
    uStack_50 = param_3;
    func_0x000107c61174(puVar1);
    uVar2 = param_3;
    puStack_48 = puVar1;
    if (lRam00000001136bc638 != -1) {
      FUN_10002a2fc(0x1136bc638,&puStack_70);
      uVar2 = uStack_50;
    }
    func_0x000107c61170(puStack_48);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008ae138; end: 1008ae23b;  */

void FUN_1008ae138(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x000107c4f558();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  puVar4 = PTR_PTR_1126b9c90;
  func_0x000107c610f4();
  func_0x000107c4636c();
  func_0x000107c61174(0);
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(puVar4);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined **)(lVar6 + 0x18) = puVar4;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(0);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1008ae23c; end: 1008ae31f; +[SelfieSettingsModeConfig descriptor] */

void FUN_1008ae23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a402d0,
                        &PTR____CFConstantStringClassReference_110de5bf8,
                        &PTR_s_snapchat_camera_1130dfdb0,&PTR_DAT_1130dfdc8,0xc,0x18,0x1c);
    puRam00000001136bc788 = puVar1;
  }
  return;
}



/* Entry: 1008ae320; end: 1008ae35b; -[SCCameraSelfieSettingsConfigurationImpl isEnabledInCameraViewType:] */

undefined8 FUN_1008ae320(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xe) {
    if ((1L << (param_3 & 0x3f) & 0x288eU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be40110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledInChatCamera_11256d9e0);
      return param_1;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEnabled_1125fa010);
      return param_1;
    }
    if (param_3 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010be40150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__isEnabledInLiveLensPreviewCamer_11256d9f0);
      return param_1;
    }
  }
  return 0;
}



/* Entry: 1008ae35c; end: 1008ae3f3; -[SCCameraSelfieSettingsConfigurationImpl isEnabled] */

undefined1 FUN_1008ae35c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1008ae3d0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc648 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc648,&puStack_38);
  }
  return uRam00000001136bc640;
}



/* Entry: 1008ae3f4; end: 1008ae793;  */

void FUN_1008ae3f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
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
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar3 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar3 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR_PTR_1126c7af8;
    func_0x000107c610f4();
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c51d48();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar3 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar3 + 0x108);
    func_0x000107c51d4c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(lVar3 + 8);
    func_0x000107c3f300();
    uVar21 = *(undefined8 *)(lVar3 + 0xd0);
    uVar24 = *(undefined8 *)(lVar3 + 0xb8);
    uVar9 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c4c168();
    func_0x000107c61180();
    uVar22 = *(undefined8 *)(lVar3 + 0x18);
    uVar11 = *(undefined8 *)(lVar3 + 0x100);
    func_0x000107c4ec80();
    func_0x000107c61180();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar23 = *(undefined8 *)(lVar3 + 0x78);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1008ae7a4;
    puStack_88 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar28);
    ppuVar12 = &puStack_a0;
    uStack_80 = uVar28;
    FUN_1008ae7a4();
    func_0x000107c61180();
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1008ae880;
    puStack_b0 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar28);
    ppuVar13 = &puStack_c8;
    uStack_a8 = uVar28;
    FUN_1008ae880();
    func_0x000107c61180();
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1008ae95c;
    puStack_d8 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar28);
    ppuVar14 = &puStack_f0;
    uStack_d0 = uVar28;
    FUN_1008ae95c();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar28 = uVar15;
    func_0x000107c41e78();
    func_0x000107c61180();
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1008aea40;
    puStack_100 = &UNK_11084e7d0;
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar25);
    ppuVar16 = &puStack_118;
    uStack_f8 = uVar25;
    FUN_1008aea40();
    func_0x000107c61180();
    uVar26 = *(undefined8 *)(lVar3 + 0x210);
    uVar30 = *(undefined8 *)(lVar3 + 0x218);
    uVar17 = *(undefined8 *)(lVar3 + 0x268);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    uVar29 = *(undefined8 *)(lVar3 + 0x70);
    uVar18 = *(undefined8 *)(lVar3 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar25 = uVar18;
    func_0x000107c5b038();
    func_0x000107c61180();
    uVar19 = uVar25;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar20 = uVar19;
    func_0x000107c509bc();
    func_0x000107c485a8(puVar27,param_2,uVar5,uVar6,uVar7,uVar8,uVar1,uVar21,uVar24,uVar9,uVar10,
                        uVar22,uVar11,uVar23,ppuVar12,ppuVar13,ppuVar14,uVar28,ppuVar16,uVar26,
                        uVar30,uVar17,uVar29,(char)uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(ppuVar16);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(ppuVar14);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(ppuVar13);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1008ae794; end: 1008ae7a3; -[SCLensProcessingLensModeServices selfieSettingsMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ae794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036168));
  return;
}



/* Entry: 1008ae7a4; end: 1008ae87f;  */

void FUN_1008ae7a4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008ae880; end: 1008ae95b;  */

void FUN_1008ae880(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008ae95c; end: 1008aea37;  */

void FUN_1008ae95c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008aea38; end: 1008aea3f; -[SCMutablePublicCameraFeatureCatalog directorModePresenting] */

undefined8 FUN_1008aea38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 1008aea40; end: 1008aeb1b;  */

void FUN_1008aea40(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008aeb1c; end: 1008aef13; -[SCFeatureSelfieSettingsImpl initWithSelfieSettingsConfig:cameraHardwareResource:lensMode:cameraViewType:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:userPreferences:footerItem:mainCameraScan:recipientName:ringFlashMode:directorModePresenting:cameraUserActionLogger:lensCTAHandlingServices:lensCrashFuser:cameraModeActivationController:cameraFeaturePerformanceFeatureScopedLoggerFactory:usesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008aeb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  puStack_70 = PTR_PTR_1126eff90;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithCameraModeConfig_cameraH_112526150,param_3,param_4,
                      param_5,0,param_6,param_15,param_7,param_8,param_9,param_10,param_11,param_12,
                      param_18);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127412a0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127412a4) = param_6;
    lVar6 = (long)_DAT_1127412a8;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412ac;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412b0;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412b4;
    func_0x000107c61174(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412b8;
    func_0x000107c61174(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_18;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412bc;
    func_0x000107c61174(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_19;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127412c0) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127412c4) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127412c8) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_20;
    func_0x000107c4e074(param_20);
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127412cc,uVar2);
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412d0;
    func_0x000107c61174(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_21;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_1127412d4;
    func_0x000107c61174(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_22;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127412d8) = param_24;
    uVar2 = param_23;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4095c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127412dc) = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127412e0) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127412e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127412e4) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c7a8(puVar1);
    func_0x000107c59194(puVar1);
    func_0x000107c3b7ac(puVar1);
    func_0x000107c3b294(puVar1);
    func_0x000107c3c648(puVar1);
  }
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008aef14; end: 1008af227; -[SCFeatureCameraModeBase initWithCameraModeConfig:cameraHardwareResource:lensMode:featureUpdateEventSubject:cameraViewType:mainCameraScan:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:directorModePresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008aef14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126f0200;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127416fc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741700,param_5);
    lVar4 = (long)_DAT_112741704;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741708);
    *(undefined **)((long)puVar1 + (long)_DAT_112741708) = puVar3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11274170c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741710;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    *(long *)((long)puVar1 + (long)_DAT_112741714) = param_7;
    *(bool *)((long)puVar1 + (long)_DAT_112741718) = param_7 == 9;
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274171c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274171c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741720);
    *(undefined **)((long)puVar1 + (long)_DAT_112741720) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741724);
    *(undefined **)((long)puVar1 + (long)_DAT_112741724) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741728,param_9);
    uVar2 = param_10;
    func_0x000107c40430(param_10);
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11274172c,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741730,param_11);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741734,param_15);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741738) = 0;
    func_0x000107c3c038(puVar1);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008af228; end: 1008af4df; -[SCFeatureCameraModeBase _observeViewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008af228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1008af4e0;
  puStack_90 = &UNK_11084e590;
  func_0x000107c6111c(auStack_88,auStack_80);
  uVar2 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1008bb6c8;
  puStack_b8 = &UNK_11090b470;
  func_0x000107c6111c(auStack_b0,auStack_80);
  uVar2 = param_4;
  func_0x000107c5c320(param_4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  uVar2 = param_5;
  func_0x000107c41b80(param_5);
  func_0x000107c61180();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1061a9190;
  puStack_e0 = &UNK_110846510;
  func_0x000107c6111c(auStack_d8,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_5;
  func_0x000107c5e370(param_5);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_100,auStack_80);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_100);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008af4e0; end: 1008af64b;  */

void FUN_1008af4e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008af64c;
  puStack_70 = &UNK_110849200;
  func_0x000107c6111c(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1008ca290;
  puStack_98 = &UNK_110849200;
  func_0x000107c6111c(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1061a9108;
  puStack_c0 = &UNK_110849200;
  func_0x000107c6111c(auStack_b8,param_1 + 0x20);
  func_0x000107c6111c(auStack_e0,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008af64c; end: 1008af677;  */

void FUN_1008af64c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4dd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008af678; end: 1008af67b; -[SCFeatureCameraModeBase onViewWillAppear] */

void FUN_1008af678(void)

{
  return;
}



/* Entry: 1008af67c; end: 1008af683; -[SCLensCTAHandlingServices organicLensCTAHandler] */

undefined8 FUN_1008af67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008af684; end: 1008af763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008af684(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar2 = lVar1 + _DAT_11273e3ec;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3f0c8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = lVar1 + _DAT_11273e3d8;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c519ac();
    func_0x0001005d3b6c();
    lVar8 = lVar4;
    func_0x000107c40958(lVar4,param_2,uVar7,lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1008af764; end: 1008af76b; -[SCCameraFeatureLoggingServices cameraFeaturePerformanceLoggerFactory] */

undefined8 FUN_1008af764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1008af76c; end: 1008af7f3;  */

void FUN_1008af76c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b9d00;
  func_0x000107c610f4(PTR_PTR_1126b9d00);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3f0f4(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3f598(uVar4);
  func_0x000107c61180();
  func_0x000107c45c88(puVar2,param_2,uVar1,uVar3,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008af7f4; end: 1008af91f; -[SCCameraFeaturePerformanceLoggerFactoryImpl initWithCameraUserLoggingServices:cameraHardwareResources:captureDeviceManager:] */

undefined1 *
FUN_1008af7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e89d0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008af920; end: 1008af9b3; -[SCCameraFeaturePerformanceLoggerFactoryImpl createCameraFeaturePerformanceFeatureScopedLoggerFactoryWithNavigationTypeProvider:cameraType:] */

void FUN_1008af920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9d18;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x10;
  func_0x000107c61148(lVar2);
  func_0x000107c45c90(puVar1,param_2,uVar3,param_4,param_3,lVar2,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008af9b4; end: 1008afad7; -[SCCameraFeaturePerformanceFeatureScopedLoggerFactoryImpl initWithCameraUserLoggingServices:cameraType:navigationTypeProvider:cameraHardwareResources:captureDeviceManager:performer:] */

undefined1 *
FUN_1008af9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e89c8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_5);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_6);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008afad8; end: 1008afb9b; -[SCCameraFeaturePerformanceFeatureScopedLoggerFactoryImpl createCameraFeaturePerformanceLoggerForFeature:] */

void FUN_1008afad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9d10;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1 + 0x20;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + 0x10;
  func_0x000107c61148(lVar3);
  func_0x000107c45c8c(puVar1,param_2,uVar4,uVar5,lVar2,lVar3,*(undefined8 *)(param_1 + 0x18),param_3
                      ,*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008afb9c; end: 1008afce3; -[SCCameraFeaturePerformanceLogger initWithCameraUserLoggingServices:cameraType:navigationTypeProvider:cameraHardwareResources:captureDeviceManager:loggableFeature:performer:] */

undefined1 *
FUN_1008afb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126ef720;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_5);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x48),param_8);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_6);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008afce4; end: 1008afd67; -[SCFeatureSelfieSettingsImpl _shouldRestoreMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008afce4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar1 = param_1;
  func_0x000107c3bb54();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x000107c3c7ac(), (int)lVar1 == 0)) {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + _DAT_1127412a4) == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127412a0);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5ab94();
    func_0x000107c61170(uVar2);
    uVar4 = (uint)uVar3 ^ 1;
  }
  return uVar4 & 1;
}



/* Entry: 1008afd68; end: 1008afe5b; -[SCFeatureSelfieSettingsImpl _isModePersisted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008afd68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127412a0;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ac80();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
LAB_1008afde0:
    uVar3 = (ulong)(*(byte *)(param_1 + _DAT_112741324) & 1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c42598();
    if ((int)uVar2 == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      lVar6 = *(long *)(param_1 + _DAT_1127412a4);
      func_0x000107c61170(uVar1);
      if (lVar6 != 0) goto LAB_1008afde0;
    }
    uVar4 = *(ulong *)(param_1 + _DAT_1127412a8);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  return uVar3;
}



/* Entry: 1008afe5c; end: 1008afef7; -[SCCameraSelfieSettingsConfigurationImpl shouldPersistOnColdStart] */

undefined1 FUN_1008afe5c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1008afed0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc658 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc658,&puStack_38);
  }
  return uRam00000001136bc642;
}



/* Entry: 1008afef8; end: 1008aff8f; -[SCCameraSelfieSettingsConfigurationImpl enableColdStartRestorationOnMainCameraOnly] */

undefined1 FUN_1008afef8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1008aff6c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc668 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc668,&puStack_38);
  }
  return uRam00000001136bc644;
}



/* Entry: 1008aff90; end: 1008aff9f; -[SCFeatureCameraModeBase setShouldRestoreMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aff90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112741750) = param_3;
  return;
}



/* Entry: 1008affa0; end: 1008b00df; -[SCFeatureSelfieSettingsImpl _fuseRestoreIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008affa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = param_1;
  func_0x000107c5ad04();
  if (((int)lVar3 != 0) && (lVar3 = (long)_DAT_1127412d0, *(long *)(param_1 + lVar3) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a0);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c49bc4();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 != 0) {
      func_0x000107c61144(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_40,auStack_38);
      func_0x000107c515bc(uVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
    }
  }
  return;
}



/* Entry: 1008b00e0; end: 1008b00ff; -[SCFeatureCameraModeBase shouldRestoreMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008b00e0(long param_1)

{
  if (*(char *)(param_1 + _DAT_112741750) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be417f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isLensRestoreAllowed_11256df98);
    return param_1;
  }
  return 0;
}



/* Entry: 1008b0100; end: 1008b042f; -[SCFeatureSelfieSettingsImpl _createLazyObjects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b0100(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10618e2c4;
  puStack_88 = &UNK_110912358;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274132c);
  *(undefined **)(param_1 + _DAT_11274132c) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10618e304;
  puStack_b0 = &UNK_110912388;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741330);
  *(undefined **)(param_1 + _DAT_112741330) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_10618e344;
  puStack_d8 = &UNK_1109123b8;
  func_0x000107c6111c(auStack_d0,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741334);
  *(undefined **)(param_1 + _DAT_112741334) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_118 = puVar2;
  uStack_110 = 0xc2000000;
  puStack_108 = &UNK_10618e384;
  puStack_100 = &UNK_110912358;
  func_0x000107c6111c(auStack_f8,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741338);
  *(undefined **)(param_1 + _DAT_112741338) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_10618e3c4;
  puStack_128 = &UNK_1109123e8;
  func_0x000107c6111c(auStack_120,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274131c);
  *(undefined **)(param_1 + _DAT_11274131c) = puVar1;
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_148,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741318);
  *(undefined **)(param_1 + _DAT_112741318) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_148);
  func_0x000107c61120(auStack_120);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1008b0430; end: 1008b05a3; -[SCFeatureSelfieSettingsImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b0430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412d4);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43bb4();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c421ac();
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_100078e94();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c4da88(uVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1008b05a4; end: 1008b05b7; -[SCFeatureSelfieSettingsImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b05a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127412e8,param_3);
  return;
}



/* Entry: 1008b05b8; end: 1008b07c7; -[SCFeatureSelfieSettingsImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b05b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c3f268();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != param_3) {
    puStack_58 = PTR_PTR_1126eff90;
    lStack_60 = param_1;
    func_0x000107c61154(&lStack_60,PTR_s_configureWithCameraToolbar__1125af758,param_3);
    func_0x000107c3b3a8(param_1);
    lVar1 = param_1;
    func_0x000107c3f268(param_1);
    func_0x000107c61180();
    func_0x000107c3d914();
    func_0x000107c61170(lVar1);
    func_0x000107c3ccfc(param_1);
    func_0x000107c61144(auStack_68,param_1);
    puVar2 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126c82e8;
    func_0x000107c51d50(PTR_PTR_1126c82e8);
    func_0x000107c61180();
    func_0x000107c3f044(puVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c4ca90(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c5e08c(puVar2);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b07c8; end: 1008b07e7; -[SCFeatureCameraModeBase cameraToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b07c8(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112741740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008b07e8; end: 1008b087b; -[SCFeatureCameraModeBase configureWithCameraToolbar:] */

/* WARNING: Possible PIC construction at 0x0001008b081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b0864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b0820) */
/* WARNING: Removing unreachable block (ram,0x0001008b0868) */
/* WARNING: Removing unreachable block (ram,0x0001008b0828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b07e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + _DAT_112741740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008b087c; end: 1008b08ab; -[SCFeatureSelfieSettingsImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b087c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741300);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008b08ac; end: 1008b09bb; -[SCFeatureCameraModeBase _configureToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b08ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c3f45c(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b09bc; end: 1008b0f27; -[SCFeatureSelfieSettingsImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b09bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar5 = (long)_DAT_112741300;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126c7918;
    func_0x000107c610f4();
    func_0x000107c47fa4();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    func_0x000107c61170(uVar4);
    func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c58df0(uVar4);
    FUN_1008b0f28();
    func_0x000107c61180();
    func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    func_0x0001008b0f40();
    func_0x000107c61180();
    func_0x000107c58e18(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    func_0x000107c530e8(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c520f4(uVar4);
    FUN_1008b0f28();
    func_0x000107c61180();
    func_0x000107c520fc(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    func_0x0001008b0f58();
    func_0x000107c61180();
    func_0x000107c52108(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    func_0x0001008b0f70();
    func_0x000107c61180();
    func_0x000107c5210c(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    lVar7 = (long)_DAT_1127412a0;
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c4a0d8();
    func_0x000107c591a4(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar4);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4a204();
    func_0x000107c61170(uVar2);
    if ((int)uVar4 != 0) {
      puVar1 = PTR_PTR_1126c7918;
      func_0x000107c610f4();
      func_0x000107c47fa4();
      lVar6 = (long)_DAT_11274133c;
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar1;
      func_0x000107c61170(uVar4);
      func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c58df0(*(undefined8 *)(param_1 + lVar6));
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c3fdd0(0x3fb99999a0000000);
      func_0x000107c61180();
      func_0x000107c56ad4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c3fdd0(0x3fb99999a0000000);
      func_0x000107c61180();
      func_0x000107c58de4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      func_0x000107c520f4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c53404(*(undefined8 *)(param_1 + lVar5));
    }
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112741340);
    *(undefined **)(param_1 + _DAT_112741340) = puVar1;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c41a70(uVar2);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_10618f270;
    puStack_90 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c5e3d4(uVar2);
    func_0x000107c61180();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_10618f2b8;
    puStack_b8 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_b0,auStack_80);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4a204();
    func_0x000107c61170(uVar2);
    if ((int)uVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x000107c3f440(uVar2);
      func_0x000107c61180();
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      puStack_e8 = &UNK_10618f300;
      puStack_e0 = &UNK_11090ba70;
      func_0x000107c6111c(auStack_d8,auStack_80);
      uVar4 = uVar2;
      func_0x000107c5c320(uVar2);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11274133c);
      func_0x000107c5e3d4(uVar2);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_100,auStack_80);
      uVar4 = uVar2;
      func_0x000107c5c320(uVar2);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_100);
      func_0x000107c61120(auStack_d8);
    }
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  return;
}



/* Entry: 1008b0f28; end: 1008b0f87;  */

void FUN_1008b0f28(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de56d8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110de56d8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1008b0f88; end: 1008b0f8f; -[SCCameraSelfieSettingsConfigurationImpl isNewBadgeEnabled] */

void FUN_1008b0f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf90ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_enableNewBadge_1125c1d60);
  return;
}



/* Entry: 1008b0f90; end: 1008b0f97; -[SCCameraToolbarItemImpl setShouldShowNewBadge:] */

void FUN_1008b0f90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1008b0f98; end: 1008b0fbb; -[SCCameraSelfieSettingsConfigurationImpl isPreferenceToggleEnabled] */

undefined1 FUN_1008b0f98(long param_1)

{
  func_0x000107c5a884();
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 1008b0fbc; end: 1008b1047; -[SCCameraSelfieSettingsConfigurationImpl setupCofValuesIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008b100c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b1010) */
/* WARNING: Removing unreachable block (ram,0x0001008b102c) */
/* WARNING: Removing unreachable block (ram,0x0001008b1034) */

void FUN_1008b0fbc(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43290();
  uVar1 = 0;
  if ((int)uVar3 != 0) {
    lVar4 = param_1;
    func_0x000107c49cd8();
    uVar1 = (undefined1)lVar4;
  }
  *(undefined1 *)(param_1 + 0x22) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1008b1048; end: 1008b105f; -[SCCameraCircumstanceEngineImpl fetchSSNewPreferenceToggleEnabled] */

void FUN_1008b1048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de4fb8,0,0);
  return;
}



/* Entry: 1008b1060; end: 1008b1077; -[SCCameraCircumstanceEngineImpl fetchSSApplyAutoEnabled] */

void FUN_1008b1060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de4fd8,0,0);
  return;
}



/* Entry: 1008b1078; end: 1008b10c7; -[SCCameraToolbarItemImpl willTapEvent] */

void FUN_1008b1078(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0xe8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008b10c8; end: 1008b122b; -[SCFeatureSelfieSettingsImpl _updateToolbarItemAppearanceWithCurrentCameraPosition:] */

/* WARNING: Possible PIC construction at 0x0001008b110c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b1144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b11f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b1110) */
/* WARNING: Removing unreachable block (ram,0x0001008b1114) */
/* WARNING: Removing unreachable block (ram,0x0001008b1148) */
/* WARNING: Removing unreachable block (ram,0x0001008b1178) */
/* WARNING: Removing unreachable block (ram,0x0001008b1184) */
/* WARNING: Removing unreachable block (ram,0x0001008b11bc) */
/* WARNING: Removing unreachable block (ram,0x0001008b11f4) */
/* WARNING: Removing unreachable block (ram,0x0001008b11d0) */
/* WARNING: Removing unreachable block (ram,0x0001008b118c) */
/* WARNING: Removing unreachable block (ram,0x0001008b1190) */
/* WARNING: Removing unreachable block (ram,0x0001008b1214) */
/* WARNING: Removing unreachable block (ram,0x0001008b1164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b10c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c49ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b122c; end: 1008b12c7; -[SCCameraSelfieSettingsConfigurationImpl isEnabledOnRearCamera] */

undefined1 FUN_1008b122c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1008b12a0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc650 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc650,&puStack_38);
  }
  return uRam00000001136bc641;
}



/* Entry: 1008b12c8; end: 1008b12d7; -[SCFeatureCameraModeBase cameraHardwareResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b12c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741704),PTR_s_target_112678178);
  return;
}



/* Entry: 1008b12d8; end: 1008b12df; +[SCAttributedCameraTask selfieSettingsToolbarLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b12d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0xf;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008b12e0; end: 1008b1737; -[SCFeatureRingFlashImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b12e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  lVar11 = (long)_DAT_1127411e0;
  lVar1 = param_1 + lVar11;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar1 != param_3) {
    func_0x000107c611a0(param_1 + lVar11,param_3);
    lVar1 = param_1;
    func_0x000107c3b3ac(param_1);
    func_0x000107c61180();
    func_0x000107c3d914(param_3);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127411e4);
    *(undefined **)(param_1 + _DAT_1127411e4) = puVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c61144(auStack_80,param_1);
    lVar1 = param_1 + lVar11;
    func_0x000107c61148(lVar1);
    lVar3 = lVar1;
    func_0x000107c3f26c();
    func_0x000107c61180();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_106184600;
    puStack_90 = &UNK_110842a38;
    func_0x000107c6111c(auStack_88,auStack_80);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + lVar11;
    func_0x000107c61148(lVar1);
    lVar3 = lVar1;
    func_0x000107c3f270();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b0,auStack_80);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126c8698;
    func_0x000107c610f4();
    lVar1 = param_1 + _DAT_1127411d4;
    func_0x000107c61148(lVar1);
    lVar11 = param_1 + lVar11;
    func_0x000107c61148(lVar11);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127411a4);
    func_0x000107c5c734(uVar8);
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_1127411a0;
    func_0x000107c61148();
    lVar4 = param_1 + _DAT_112741138;
    func_0x000107c61148();
    lVar9 = (long)_DAT_11274113c;
    lVar5 = param_1 + lVar9;
    func_0x000107c61148();
    lVar6 = param_1 + _DAT_1127411ac;
    func_0x000107c61148();
    lVar7 = param_1 + _DAT_1127411b0;
    func_0x000107c61148();
    func_0x000107c46064();
    uVar10 = *(undefined8 *)(param_1 + _DAT_1127411d8);
    *(undefined **)(param_1 + _DAT_1127411d8) = puVar2;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126c86a0;
    func_0x000107c610f4();
    lVar9 = param_1 + lVar9;
    func_0x000107c61148(lVar9);
    func_0x000107c45dc4();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127411ec);
    *(undefined **)(param_1 + _DAT_1127411ec) = puVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar9);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b1738; end: 1008b1d5f; -[SCFeatureRingFlashImpl _createToolbarItemWithToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b1738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  lVar7 = (long)_DAT_1127411e8;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126c86a8;
    func_0x000107c610f4();
    func_0x000107c47fa4();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    func_0x000107c61170(uVar5);
    func_0x000107c530e8(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar7));
    lVar8 = (long)_DAT_112741168;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c42bac();
    if (lVar6 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170(lVar2);
    }
    func_0x000107c58df0(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c520f4(*(undefined8 *)(param_1 + lVar7));
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c42bac();
    func_0x000107c61170(lVar2);
    if (lVar6 == 0) {
      FUN_1008b1d60();
      func_0x000107c61180();
      func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar7));
      func_0x000107c61170(lVar2);
      lVar2 = *(long *)(param_1 + lVar7);
      func_0x000107c4d754(lVar2);
      func_0x000107c61180();
    }
    else {
      func_0x00010619f8a4();
      func_0x000107c61180();
      func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar7));
      func_0x000107c61170(lVar2);
      if ((*(ulong *)(param_1 + _DAT_11274115c) & 0xfffffffffffffffd) == 1) {
        func_0x00010619f8bc();
        func_0x000107c61180();
      }
      else {
        func_0x00010619f8d4();
        func_0x000107c61180();
      }
    }
    func_0x000107c58e18(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(lVar2);
    func_0x0001008b0f58();
    func_0x000107c61180();
    func_0x000107c52108(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(lVar2);
    func_0x0001008b0f70();
    func_0x000107c61180();
    func_0x000107c5210c(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(lVar2);
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c42bac();
    func_0x000107c61170(lVar2);
    if (lVar6 == 0) {
      func_0x000107c3bb14(param_1);
    }
    func_0x000107c591ac(*(undefined8 *)(param_1 + lVar7));
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c42bac();
    func_0x000107c61170(lVar2);
    if (lVar6 == 0) {
      puVar1 = PTR_PTR_1126c7918;
      func_0x000107c610f4();
      func_0x000107c47fa4();
      lVar6 = (long)_DAT_1127411f8;
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar1;
      func_0x000107c61170(uVar5);
      func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c58df0(*(undefined8 *)(param_1 + lVar6));
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c3fdd0(0x3fb99999a0000000);
      func_0x000107c61180();
      func_0x000107c56ad4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c3fdd0(0x3fd99999a0000000);
      func_0x000107c61180();
      func_0x000107c58de4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      func_0x000107c520f4(*(undefined8 *)(param_1 + lVar6));
      func_0x000107c53404(*(undefined8 *)(param_1 + lVar7));
    }
    func_0x000107c5a5cc(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61144(auStack_78,param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c41d8c(uVar4);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_106184854;
    puStack_88 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c41a70(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c3f440(uVar4);
    func_0x000107c61180();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_1061848d0;
    puStack_b0 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_a8,auStack_78);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c42bac();
    func_0x000107c61170(lVar2);
    if (lVar6 == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127411f8);
      func_0x000107c41a70(uVar4);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_d0,auStack_78);
      uVar5 = uVar4;
      func_0x000107c5c320(uVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61120(auStack_d0);
    }
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x000107c61174(lVar6);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  else {
    func_0x000107c61174(lVar6);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1008b1d60; end: 1008b1d77;  */

void FUN_1008b1d60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e42df8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110e42df8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1008b1d78; end: 1008b1de3; -[SCFeatureRingFlashImpl _isFrontCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1008b1d78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11274114c);
  func_0x000107c5c734(lVar1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4193c();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return lVar3 == 0;
}



/* Entry: 1008b1de4; end: 1008b1e13; -[SCCameraToolbarItemImpl setNormalBackgroundColor:] */

void FUN_1008b1de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b1e14; end: 1008b1e43; -[SCCameraToolbarItemImpl setSelectedBackgroundColor:] */

void FUN_1008b1e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b1e44; end: 1008b1ea7; -[SCCameraToolbarItemImpl setChildToolbarItem:] */

/* WARNING: Possible PIC construction at 0x0001008b1e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b1e74) */
/* WARNING: Removing unreachable block (ram,0x0001008b1e78) */
/* WARNING: Removing unreachable block (ram,0x0001008b1e98) */

void FUN_1008b1e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b1ea8; end: 1008b1ef7; -[SCCameraToolbarItemImpl canShowChildItemEvent] */

void FUN_1008b1ea8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008b1ef8; end: 1008b1f07; -[SCCameraVerticalToolbar cameraToolbarExpandCollapse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b1ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742b74);
}



/* Entry: 1008b1f08; end: 1008b1f17; -[SCCameraVerticalToolbar cameraToolbarItemTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b1f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742b78);
}



/* Entry: 1008b1f18; end: 1008b248f; -[SCFeatureAutoEnableRingFlashHandler initWithContainerView:cameraToolbar:toolbarItem:cameraTooltipsService:cameraViewType:cameraHardwareResource:deviceCapacityAnalyzer:delegate:lensCarouselManager:viewControllerLifeCycleEvents:mainCameraViewControllerLifecycleEvents:cameraUserBlizzardLogger:userPreferences:] */

undefined8 *
FUN_1008b1f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_80,param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_88 = PTR_PTR_1126eff68;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = auStack_80;
    func_0x000107c61148(puVar3);
    func_0x000107c611a0(puVar1 + 2,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c611a0(puVar1 + 8,param_10);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    puVar1[5] = param_7;
    func_0x000107c611a0(puVar1 + 0x12,param_11);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xd,param_12);
    func_0x000107c611a0(puVar1 + 0xe,param_13);
    func_0x000107c611a0(puVar1 + 0x10,param_14);
    func_0x000107c611a0(puVar1 + 0x11,param_15);
    func_0x000107c3c28c(puVar1);
    uVar2 = puVar1[7];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    uVar5 = puVar1[6];
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar6 = puVar1[6];
    func_0x000107c5c734(uVar6);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c40794();
    uVar9 = puVar1[6];
    func_0x000107c5c734(uVar9);
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(puVar1);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_98,puVar1);
    puVar11 = puVar1 + 0xd;
    func_0x000107c61148(puVar11);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1008b286c;
    puStack_a8 = &UNK_11084e590;
    func_0x000107c6111c(auStack_a0,auStack_98);
    puVar12 = puVar11;
    func_0x000107c5c320(puVar11);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    puVar11 = puVar1 + 0xe;
    func_0x000107c61148(puVar11);
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1008bb788;
    puStack_d0 = &UNK_11090b470;
    func_0x000107c6111c(auStack_c8,auStack_98);
    puVar12 = puVar11;
    func_0x000107c5c320(puVar11);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    puVar11 = puVar1 + 2;
    func_0x000107c61148(puVar11);
    puVar12 = puVar11;
    func_0x000107c3f150();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_f0,auStack_98);
    puVar13 = puVar12;
    func_0x000107c5c320(puVar12);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61120(auStack_98);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b2490; end: 1008b256f; -[SCFeatureAutoEnableRingFlashHandler _registerObserversIfNeeded] */

void FUN_1008b2490(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  param_1 = param_1 + 0x90;
  func_0x000107c61148(param_1);
  puVar1 = auStack_40;
  func_0x000107c6111c(puVar1,auStack_38);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c5dc68(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1008b2570; end: 1008b264f; -[SCFeatureAutoEnableRingFlashHandler startObservingManagedDeviceCapacityAnalyzerEvent:] */

void FUN_1008b2570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b2650; end: 1008b286b; -[SCFeatureAutoEnableRingFlashHandler startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_1008b2650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_78,param_1);
  if (*(long *)(param_1 + 0xd0) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c41948();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_100c42318;
    puStack_88 = &UNK_11086e3f0;
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_a8,auStack_78);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b286c; end: 1008b296f;  */

void FUN_1008b286c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008ca2c0;
  puStack_60 = &UNK_110849200;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008b2970; end: 1008b2973;  */

void FUN_1008b2970(void)

{
  return;
}



/* Entry: 1008b2974; end: 1008b2983; -[SCCameraVerticalToolbar cameraModeLabelsWillShowObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b2974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742b7c);
}



/* Entry: 1008b2984; end: 1008b2a47;  */

void FUN_1008b2984(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x000107c3ebcc();
    *(char *)(lVar1 + 0xb1) = (char)uVar2;
    uVar2 = param_2;
    func_0x000107c3ebcc();
    if ((uVar2 & 1) == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      puStack_48 = &UNK_100c6a7dc;
      puStack_40 = &UNK_1108434b0;
      func_0x000107c6111c(auStack_38,param_1 + 0x20);
      func_0x000100162d98("APPSTORE",&puStack_58);
      func_0x000107c61120(auStack_38);
    }
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008b2a48; end: 1008b2c3b; -[SCFeatureAutoEnableFlashInLowLightHandler initWithCircumstanceEngine:cameraHardwareResource:deviceCapacityAnalyzer:delegate:mainCameraViewControllerLifecycleEvents:ringFlashState:] */

undefined8 *
FUN_1008b2a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126eff60;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_6);
    puVar1[8] = param_8;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[3];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_68,puVar1);
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar2 = param_7;
    func_0x000107c5c320(param_7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b2c3c; end: 1008b2d1b; -[SCFeatureAutoEnableFlashInLowLightHandler startObservingManagedDeviceCapacityAnalyzerEvent:] */

void FUN_1008b2c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b2d1c; end: 1008b2d4b;  */

bool FUN_1008b2d1c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008b2d4c; end: 1008b2f93;  */

void FUN_1008b2d4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126c8488;
    func_0x000107c610f4();
    uVar17 = *(undefined8 *)(lVar2 + 400);
    uVar3 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar2 + 0xa8);
    func_0x000107c5036c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar2 + 8);
    func_0x000107c3f2a8();
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c4c168();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1008b2f94;
    puStack_88 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar8 = &puStack_a0;
    uStack_80 = uVar12;
    FUN_1008b2f94();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1008b3070;
    puStack_b0 = &UNK_11084e7d0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar16);
    ppuVar9 = &puStack_c8;
    uStack_a8 = uVar16;
    FUN_1008b3070();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(lVar2 + 0x260);
    uVar11 = *(undefined8 *)(lVar2 + 0xa0);
    uVar16 = *(undefined8 *)(lVar2 + 0x50);
    func_0x000107c42eac();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar2 + 0x268);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    func_0x000107c45bb0(puVar14,param_2,uVar17,uVar3,uVar4,uVar5,uVar6,uVar7,ppuVar8,uVar12,uVar13,
                        ppuVar9,uVar15,uVar11,uVar16,uVar10);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1008b2f94; end: 1008b306f;  */

void FUN_1008b2f94(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008b3070; end: 1008b314b;  */

void FUN_1008b3070(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008b314c; end: 1008b34d7; -[SCFeatureHighDefinitionModeImpl initWithCameraDeviceSettingsResolver:cameraHardwareResource:cameraRequestHandler:cameraConfig:cameraUsageTier:mainCameraViewControllerLifecycleEvents:cameraUserActionLogger:cameraHardwareServicesAPI:circumstanceEngine:captureComponent:cameraPreviewPresenterServices:cameraViewfinderServices:featureSettingsService:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008b314c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_70 = PTR_PTR_1126efec8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112740c38;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740c3c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740c40;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740c44;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740c48) = param_7;
    lVar4 = (long)_DAT_112740c4c;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740c50,param_13);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740c54) = 0;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740c58);
    *(undefined **)((long)puVar1 + (long)_DAT_112740c58) = puVar3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740c5c;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740c60,param_11);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740c64) = 0xffffffffffffffff;
    lVar4 = (long)_DAT_112740c68;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740c6c);
    *(undefined **)((long)puVar1 + (long)_DAT_112740c6c) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740c70,param_14);
    lVar4 = (long)_DAT_112740c74;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740c78;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740c7c) = 0;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740c80);
    *(undefined **)((long)puVar1 + (long)_DAT_112740c80) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c9e8(puVar1);
    uVar2 = param_12;
    func_0x000107c42e38(param_12);
    func_0x000107c61180();
    func_0x000107c531c0();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b34d8; end: 1008b35a3; -[SCFeatureHighDefinitionModeImpl _subscribeToMainCameraViewControllerLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b34d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740c68);
  func_0x000107c5c320(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1109118b0);
  func_0x000107c61180();
  func_0x000107c3e924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b35a4; end: 1008b35d3;  */

bool FUN_1008b35a4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008b35d4; end: 1008b36f3;  */

void FUN_1008b35d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c7968;
    func_0x000107c610f4(PTR_PTR_1126c7968);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1008b36f4;
    puStack_50 = &UNK_11084e7d0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar5);
    ppuVar2 = &puStack_68;
    uStack_48 = uVar5;
    FUN_1008b36f4(ppuVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c3b00c(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c3f0fc(uVar5);
    func_0x000107c61180();
    func_0x000107c487c4(puVar4,param_2,ppuVar2,lVar3,uVar5,*(undefined8 *)(lVar1 + 0x1f0));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(uStack_48);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1008b36f4; end: 1008b37cf;  */

void FUN_1008b36f4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008b37d0; end: 1008b3da7; -[SCCameraCaptureFeatureProviderPluginWorkflow _captureEventsObservingFeatures:] */

void FUN_1008b37d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c7a10;
  func_0x000107c61174(param_3);
  func_0x000107c61160(puVar1);
  lVar2 = param_1 + 0x128;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x130;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x138;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x140;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x170;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x168;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x180;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c42e4c();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c446a8();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4d1a8();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5b3a0();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5ca54();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5dd74();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c718();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5ea24();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4d168();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40770();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4fdc4();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5b790();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4d6b8();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  lVar2 = param_1 + 0x1c8;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  uVar3 = param_3;
  func_0x000107c4f5c0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4510c();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  lVar2 = param_1 + 0x148;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x150;
  func_0x000107c61148(lVar2);
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x158;
  func_0x000107c61148();
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x160;
  func_0x000107c61148();
  func_0x000107c4972c(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  uVar4 = param_3;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar4;
  func_0x000107c43570();
  func_0x000107c61180();
  func_0x000107c4972c(puVar1,param_2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  param_1 = param_1 + 0x1b0;
  func_0x000107c61148();
  func_0x000107c4972c(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  puVar5 = puVar1;
  func_0x000107c4ac58(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1008b3da8; end: 1008b3e0b; -[SCCameraLazyFeatureReferenceSet init] */

undefined1 * FUN_1008b3da8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701c18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008b3e0c; end: 1008b3e1b; -[SCCameraLazyFeatureReferenceSet insertFeature:] */

void FUN_1008b3e0c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 1008b3e1c; end: 1008b3e23; -[SCMutablePublicCameraFeatureCatalog featureContainerViewRemote] */

undefined8 FUN_1008b3e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1008b3e24; end: 1008b3e2b; -[SCMutablePublicCameraFeatureCatalog snapRecovery] */

undefined8 FUN_1008b3e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 1008b3e2c; end: 1008b3e33; -[SCMutablePublicCameraFeatureCatalog timerMode] */

undefined8 FUN_1008b3e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 1008b3e34; end: 1008b3e3b; -[SCMutablePublicCameraFeatureCatalog videoCaptureFailureMessage] */

undefined8 FUN_1008b3e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 1008b3e3c; end: 1008b3e43; -[SCMutablePublicCameraFeatureCatalog coolRecording] */

undefined8 FUN_1008b3e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 1008b3e44; end: 1008b3f87; -[SCCameraLazyFeatureReferenceSet lazyFeatureReferences] */

void FUN_1008b3e44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar7 = *(long *)(param_1 + 8);
  func_0x000107c61174(lVar7);
  lVar3 = lVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar7);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x000107c4ac54(uVar4);
      func_0x000107c61180();
      func_0x000107c3d798(puVar2);
      func_0x000107c61170(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar7);
  puVar5 = puVar2;
  func_0x000107c40794(puVar2);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1008b3f88; end: 1008b3f93; -[SCCameraLazyFeatureReferenceSet .cxx_destruct] */

void FUN_1008b3f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008b3f94; end: 1008b4233; -[SCFeatureCaptureComponentImpl initWithSnapRecovery:captureEventsObservers:cameraHardwareServicesAPI:captureServiceScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008b3f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_1126efdf0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740534;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740538;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11274053c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740540;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    lVar6 = (long)_DAT_112740544;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    lVar5 = (long)_DAT_112740548;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274054c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274054c) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10614718c;
    puStack_98 = &UNK_11090d050;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740550);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740550) = uVar2;
    func_0x000107c61170(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c6111c(auStack_b8,auStack_88);
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740554);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740554) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}


