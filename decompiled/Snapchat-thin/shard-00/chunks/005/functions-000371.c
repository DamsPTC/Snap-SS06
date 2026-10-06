/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007bec5c; end: 1007bed4f; -[SCCameraFeatureScopeWorkflow _createNonCriticalLegacyDelegateProvidingFeatureActivator] */

void FUN_1007bec5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c8db0;
  func_0x000107c610f4(PTR_PTR_1126c8db0);
  lVar2 = param_1 + 0x18;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3f290();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = param_1 + 0x40;
  func_0x000107c61148(lVar5);
  lVar6 = param_1 + 0x70;
  func_0x000107c61148(lVar6);
  param_1 = param_1 + 0x10;
  func_0x000107c61148(param_1);
  lVar7 = param_1;
  func_0x000107c519ac();
  func_0x000107c45c70(puVar1,param_2,lVar4,uVar8,0,lVar5,lVar6,lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007bed50; end: 1007bee07; -[SCCameraLegacyDelegateProvidingActivatorImpl initWithCameraUIScopeViewContainer:cameraFeatureLayout:isCritical:lifecycleDelegate:appLifeCycleManager:scopedCameraType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1007bed50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  puStack_58 = PTR_PTR_1126f3778;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_initWithCameraUIScopeViewContain_1125dc930,param_3,param_4,
                      param_5,param_6,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112751bf4),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007bee08; end: 1007bef37; -[SCCameraLegacyDelegateProvidingActivatorImpl registerFeature:] */

void FUN_1007bee08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c61144(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1008073a0;
    puStack_50 = &UNK_110944078;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    lStack_48 = param_3;
    func_0x000107c3e4fc(puVar1);
    func_0x000107c61180();
    puStack_70 = PTR_PTR_1126f3778;
    puVar2 = &uStack_78;
    uStack_78 = param_1;
    func_0x000107c61154(puVar2,PTR_s_registerFeature__112627340,puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lStack_48);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007bef38; end: 1007bef67; -[SCMutablePublicCameraFeatureCatalog setDoubleTapToToggleCamera:] */

void FUN_1007bef38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bef68; end: 1007bf0d3;  */

void FUN_1007bef68(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a45b4;
  puStack_68 = &UNK_11090bbc0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bf0d4; end: 1007bf103; -[SCMutablePublicCameraFeatureCatalog setToggleCamera:] */

void FUN_1007bf0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bf104; end: 1007bf12f; +[SCCameraContinuousCaptureExperiment continuousCaptureEnabled] */

bool FUN_1007bf104(void)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  return iVar1 != 0;
}



/* Entry: 1007bf130; end: 1007bf2c3;  */

void FUN_1007bf130(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_1060a4744;
  puStack_80 = &UNK_11090bbf0;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_78 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a8,auStack_68);
  uStack_a0 = *(undefined1 *)(param_1 + 0x38);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bf2c4; end: 1007bf2f3; -[SCMutablePublicCameraFeatureCatalog setContinuousCapture:] */

void FUN_1007bf2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bf2f4; end: 1007bf373; -[SCCameraCaptureFeatureProviderPluginWorkflow _shouldEnableSpotlightImportSideButton] */

undefined * FUN_1007bf2f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c519ac();
  if (lVar1 == 0xd) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x000107c4d534();
    if (lVar1 == 0xb) {
      puVar2 = PTR_PTR_1126b9b20;
                    /* WARNING: Could not recover jumptable at 0x00010c0e9ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126b9b20,PTR_s_openToCameraSpotlightFromProfile_1126180c0,
                 *(undefined8 *)(param_1 + 200));
      return puVar2;
    }
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x000107c4d534();
    if (lVar1 == 0x13) {
      puVar2 = PTR_PTR_1126b9b20;
                    /* WARNING: Could not recover jumptable at 0x00010c0e9a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126b9b20,PTR_s_openToCameraSpotlightCreateWithC_1126180b8,
                 *(undefined8 *)(param_1 + 200));
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1007bf374; end: 1007bf4f7;  */

void FUN_1007bf374(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c2b040;
  puStack_70 = &UNK_11090bc20;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bf4f8; end: 1007bf527; -[SCMutablePublicCameraFeatureCatalog setZooming:] */

void FUN_1007bf4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bf528; end: 1007bf6ab;  */

void FUN_1007bf528(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c5dfc4;
  puStack_70 = &UNK_11090bc50;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bf6ac; end: 1007bf6b3; -[SCCameraFeatureActivationServices criticalFeatureActivator] */

undefined8 FUN_1007bf6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007bf6b4; end: 1007bf6f3;  */

void FUN_1007bf6b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b20c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007bf6f4; end: 1007bf7e7; -[SCCameraFeatureScopeWorkflow _createCriticalFeatureActivator] */

void FUN_1007bf6f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c8da8;
  func_0x000107c610f4(PTR_PTR_1126c8da8);
  lVar2 = param_1 + 0x18;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3f290();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = param_1 + 0x40;
  func_0x000107c61148(lVar5);
  lVar6 = param_1 + 0x70;
  func_0x000107c61148(lVar6);
  param_1 = param_1 + 0x10;
  func_0x000107c61148(param_1);
  lVar7 = param_1;
  func_0x000107c519ac();
  func_0x000107c45c70(puVar1,param_2,lVar4,uVar8,1,lVar5,lVar6,lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007bf7e8; end: 1007bf817; -[SCMutablePublicCameraFeatureCatalog setZoomFactors:] */

void FUN_1007bf7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bf818; end: 1007bf99b;  */

void FUN_1007bf818(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008b35d4;
  puStack_70 = &UNK_11090bc80;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bf99c; end: 1007bf9cb; -[SCMutablePublicCameraFeatureCatalog setCaptureComponent:] */

void FUN_1007bf99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bf9cc; end: 1007bfb37;  */

void FUN_1007bf9cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10087fc68;
  puStack_68 = &UNK_11090bcb0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bfb38; end: 1007bfb67; -[SCMutablePublicCameraFeatureCatalog setAfterCaptureActionTracker:] */

void FUN_1007bfb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007bfb68; end: 1007bfcd3;  */

void FUN_1007bfb68(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c65ee4;
  puStack_68 = &UNK_11090bce0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bfcd4; end: 1007bfe07; -[SCCameraLazyFeatureReference configure] */

void FUN_1007bfcd4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1007bfd5c;
  puStack_38 = &UNK_110c90b70;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c61184(&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1007bfe08; end: 1007bff73;  */

void FUN_1007bfe08(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a56c4;
  puStack_68 = &UNK_11090bd10;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007bff74; end: 1007bffbb;  */

/* WARNING: Possible PIC construction at 0x0001007bffa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007bffac) */

void FUN_1007bff74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007bffbc; end: 1007c0127;  */

void FUN_1007bffbc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a57cc;
  puStack_68 = &UNK_11090bd40;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0128; end: 1007c016f;  */

/* WARNING: Possible PIC construction at 0x0001007c015c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c0160) */

void FUN_1007c0128(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c0170; end: 1007c02db;  */

void FUN_1007c0170(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a5884;
  puStack_68 = &UNK_11090bd70;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c02dc; end: 1007c0323;  */

/* WARNING: Possible PIC construction at 0x0001007c0310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c0314) */

void FUN_1007c02dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c0324; end: 1007c04a7;  */

void FUN_1007c0324(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a5994;
  puStack_70 = &UNK_11090bda0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c04a8; end: 1007c04ef;  */

/* WARNING: Possible PIC construction at 0x0001007c04dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c04e0) */

void FUN_1007c04a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c04f0; end: 1007c0673;  */

void FUN_1007c04f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a5ca0;
  puStack_70 = &UNK_11090bdd0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0674; end: 1007c06bb;  */

/* WARNING: Possible PIC construction at 0x0001007c06a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c06ac) */

void FUN_1007c0674(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c06bc; end: 1007c0827;  */

void FUN_1007c06bc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a5f14;
  puStack_68 = &UNK_11090be00;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0828; end: 1007c0857; -[SCMutablePublicCameraFeatureCatalog setToSnappableLogger:] */

void FUN_1007c0828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c0858; end: 1007c09c3;  */

void FUN_1007c0858(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a6074;
  puStack_68 = &UNK_11090be30;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c09c4; end: 1007c09f3; -[SCMutablePublicCameraFeatureCatalog setVideoCaptureFailureMessage:] */

void FUN_1007c09c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c09f4; end: 1007c0b5f;  */

void FUN_1007c09f4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c2988c;
  puStack_68 = &UNK_11090be60;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0b60; end: 1007c0b8f; -[SCMutablePublicCameraFeatureCatalog setFeatureContainerViewRemote:] */

void FUN_1007c0b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c0b90; end: 1007c0cfb;  */

void FUN_1007c0b90(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a60f0;
  puStack_68 = &UNK_11090be90;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0cfc; end: 1007c0d2b; -[SCMutablePublicCameraFeatureCatalog setSnapRecovery:] */

void FUN_1007c0cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c0d2c; end: 1007c0eaf;  */

void FUN_1007c0d2c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c636ac;
  puStack_70 = &UNK_11090bec0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c0eb0; end: 1007c0ef7;  */

/* WARNING: Possible PIC construction at 0x0001007c0ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c0ee8) */

void FUN_1007c0eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c0ef8; end: 1007c1063;  */

void FUN_1007c0ef8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a61e8;
  puStack_68 = &UNK_11090bef0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c1064; end: 1007c1093; -[SCMutablePublicCameraFeatureCatalog setMicNotification:] */

void FUN_1007c1064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c1094; end: 1007c11ff;  */

void FUN_1007c1094(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10087e104;
  puStack_68 = &UNK_11090bf20;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c1200; end: 1007c122f; -[SCMutablePublicCameraFeatureCatalog setVolumeButtonCapture:] */

void FUN_1007c1200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c1230; end: 1007c139b;  */

void FUN_1007c1230(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a635c;
  puStack_68 = &UNK_11090bf50;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c139c; end: 1007c13cb; -[SCMutablePublicCameraFeatureCatalog setAudioSessionEarlyActivator:] */

void FUN_1007c139c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c13cc; end: 1007c13fb; -[SCMutablePublicCameraFeatureCatalog setPreviewEventDelegate:] */

void FUN_1007c13cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c13fc; end: 1007c1567;  */

void FUN_1007c13fc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a63e0;
  puStack_68 = &UNK_11090bf80;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c1568; end: 1007c15af;  */

/* WARNING: Possible PIC construction at 0x0001007c159c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c15a0) */

void FUN_1007c1568(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c15b0; end: 1007c171b;  */

void FUN_1007c15b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40d8c(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c5dc74;
  puStack_68 = &UNK_11090bfe0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c171c; end: 1007c1763;  */

/* WARNING: Possible PIC construction at 0x0001007c1750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c1754) */

void FUN_1007c171c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c1764; end: 1007c18cf;  */

void FUN_1007c1764(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a6578;
  puStack_68 = &UNK_11090c010;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c18d0; end: 1007c1917;  */

/* WARNING: Possible PIC construction at 0x0001007c1904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c1908) */

void FUN_1007c18d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c1918; end: 1007c1a83;  */

void FUN_1007c1918(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a66b8;
  puStack_68 = &UNK_11090c040;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c1a84; end: 1007c1acb;  */

/* WARNING: Possible PIC construction at 0x0001007c1ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c1abc) */

void FUN_1007c1a84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c1acc; end: 1007c1c37;  */

void FUN_1007c1acc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a6854;
  puStack_68 = &UNK_11090c070;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c1c38; end: 1007c1c7f;  */

/* WARNING: Possible PIC construction at 0x0001007c1c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c1c70) */

void FUN_1007c1c38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x1f8);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c1c80; end: 1007c3013; -[SCCameraCoreFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1007c1c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined *puStack_a08;
  undefined8 uStack_a00;
  code *pcStack_9f8;
  undefined *puStack_9f0;
  long lStack_9e8;
  undefined8 uStack_9e0;
  undefined *puStack_9d8;
  undefined8 uStack_9d0;
  code *pcStack_9c8;
  undefined *puStack_9c0;
  long lStack_9b8;
  undefined *puStack_9b0;
  undefined8 uStack_9a8;
  code *pcStack_9a0;
  undefined *puStack_998;
  long lStack_990;
  undefined8 uStack_988;
  undefined *puStack_980;
  undefined8 uStack_978;
  code *pcStack_970;
  undefined *puStack_968;
  long lStack_960;
  undefined *puStack_958;
  undefined8 uStack_950;
  code *pcStack_948;
  undefined *puStack_940;
  long lStack_938;
  undefined8 uStack_930;
  undefined *puStack_928;
  undefined8 uStack_920;
  code *pcStack_918;
  undefined *puStack_910;
  long lStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  code *pcStack_8f0;
  undefined *puStack_8e8;
  long lStack_8e0;
  undefined8 uStack_8d8;
  undefined *puStack_8d0;
  undefined8 uStack_8c8;
  code *pcStack_8c0;
  undefined *puStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  code *pcStack_890;
  undefined *puStack_888;
  long lStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined *puStack_868;
  undefined8 uStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  long lStack_848;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined8 uStack_830;
  code *pcStack_828;
  undefined *puStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined *puStack_800;
  undefined8 uStack_7f8;
  code *pcStack_7f0;
  undefined *puStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  code *pcStack_7b8;
  undefined *puStack_7b0;
  long lStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined *puStack_790;
  undefined8 uStack_788;
  code *pcStack_780;
  undefined *puStack_778;
  long lStack_770;
  undefined *puStack_768;
  undefined8 uStack_760;
  code *pcStack_758;
  undefined *puStack_750;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined *puStack_730;
  undefined8 uStack_728;
  code *pcStack_720;
  undefined *puStack_718;
  long lStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  code *pcStack_6e8;
  undefined *puStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  code *pcStack_6b0;
  undefined *puStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined *puStack_688;
  undefined8 uStack_680;
  code *pcStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  code *pcStack_650;
  undefined *puStack_648;
  long lStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  code *pcStack_620;
  undefined *puStack_618;
  long lStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined *puStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  code *pcStack_578;
  undefined *puStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined *puStack_540;
  long lStack_538;
  undefined8 uStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined *puStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  code *pcStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined *puStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1007c3014;
  puStack_90 = &UNK_11084ea10;
  lStack_88 = param_1;
  func_0x000107c61174(param_4);
  uStack_80 = param_4;
  func_0x000107c61174(param_3);
  ppuVar2 = &puStack_a8;
  FUN_1007c3014(ppuVar2);
  func_0x000107c61180();
  func_0x000107c53108(param_3);
  func_0x000107c61170(ppuVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1007c31b0;
  puStack_c8 = &UNK_11084e830;
  lStack_c0 = param_1;
  func_0x000107c61174(param_4);
  uStack_b8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar2 = &puStack_e0;
  uStack_b0 = param_5;
  FUN_1007c31b0(ppuVar2);
  func_0x000107c61180();
  func_0x000107c531c4(param_3);
  func_0x000107c61170(ppuVar2);
  uVar17 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61174(uVar17);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1007c3458;
  puStack_108 = &UNK_11090c160;
  lStack_100 = param_1;
  func_0x000107c61174(param_4);
  uStack_f8 = param_4;
  func_0x000107c61174(param_5);
  uStack_f0 = param_5;
  uStack_e8 = uVar17;
  func_0x000107c61174(uVar17);
  ppuVar2 = &puStack_120;
  FUN_1007c3458();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 600,ppuVar2);
  func_0x000107c54fdc(param_3);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1007c362c;
  puStack_140 = &UNK_11084e830;
  lStack_138 = param_1;
  func_0x000107c61174(param_4);
  uStack_130 = param_4;
  func_0x000107c61174(param_5);
  ppuVar3 = &puStack_158;
  uStack_128 = param_5;
  FUN_1007c362c(ppuVar3);
  func_0x000107c61180();
  func_0x000107c59bec(param_3);
  func_0x000107c61170(ppuVar3);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1007c37e0;
  puStack_178 = &UNK_11084e830;
  lStack_170 = param_1;
  func_0x000107c61174(param_4);
  uStack_168 = param_4;
  func_0x000107c61174(param_5);
  ppuVar3 = &puStack_190;
  uStack_160 = param_5;
  FUN_1007c37e0(ppuVar3);
  func_0x000107c61180();
  func_0x000107c55bc8(param_3);
  func_0x000107c61170(ppuVar3);
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_1007c3994;
  puStack_1b0 = &UNK_11084e830;
  lStack_1a8 = param_1;
  func_0x000107c61174(param_4);
  uStack_1a0 = param_4;
  func_0x000107c61174(param_5);
  ppuVar3 = &puStack_1c8;
  uStack_198 = param_5;
  FUN_1007c3994();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x230,ppuVar3);
  func_0x000107c59e6c(param_3);
  puStack_200 = puVar1;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1007c3b48;
  puStack_1e8 = &UNK_11084e830;
  lStack_1e0 = param_1;
  func_0x000107c61174(param_4);
  uStack_1d8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar4 = &puStack_200;
  uStack_1d0 = param_5;
  FUN_1007c3b48();
  func_0x000107c61180();
  ppuVar5 = ppuVar4;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_228 = puVar1;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_1007c3ccc;
  puStack_210 = &UNK_11084ed60;
  ppuVar6 = ppuVar5;
  lStack_208 = param_1;
  (*(code *)ppuVar5[2])();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x228,ppuVar6);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar4);
  puStack_258 = puVar1;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1007c3d14;
  puStack_240 = &UNK_11084ea10;
  lStack_238 = param_1;
  func_0x000107c61174(param_4);
  ppuVar4 = &puStack_258;
  uStack_230 = param_4;
  FUN_1007c3d14();
  func_0x000107c61180();
  ppuVar6 = ppuVar4;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_280 = puVar1;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_1007c3e80;
  puStack_268 = &UNK_11084ed60;
  ppuVar5 = ppuVar6;
  lStack_260 = param_1;
  (*(code *)ppuVar6[2])();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x2a8,ppuVar5);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(ppuVar4);
  puStack_2b8 = puVar1;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_1007c3ec8;
  puStack_2a0 = &UNK_11084e830;
  lStack_298 = param_1;
  func_0x000107c61174(param_4);
  uStack_290 = param_4;
  func_0x000107c61174(param_5);
  ppuVar4 = &puStack_2b8;
  uStack_288 = param_5;
  FUN_1007c3ec8();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x248,ppuVar4);
  func_0x000107c56ab0(param_3);
  puStack_2f0 = puVar1;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_1007c407c;
  puStack_2d8 = &UNK_11084e830;
  lStack_2d0 = param_1;
  func_0x000107c61174(param_4);
  uStack_2c8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar5 = &puStack_2f0;
  uStack_2c0 = param_5;
  FUN_1007c407c();
  func_0x000107c61180();
  func_0x000107c534c8(param_3);
  func_0x000107c61170(ppuVar5);
  puStack_328 = puVar1;
  uStack_320 = 0xc2000000;
  pcStack_318 = FUN_1007c4230;
  puStack_310 = &UNK_11084e830;
  lStack_308 = param_1;
  func_0x000107c61174(param_4);
  uStack_300 = param_4;
  func_0x000107c61174(param_5);
  ppuVar5 = &puStack_328;
  uStack_2f8 = param_5;
  FUN_1007c4230();
  func_0x000107c61180();
  func_0x000107c567f0(param_3);
  func_0x000107c61170(ppuVar5);
  puStack_358 = puVar1;
  uStack_350 = 0xc2000000;
  pcStack_348 = FUN_1007c43e4;
  puStack_340 = &UNK_11084ea10;
  lStack_338 = param_1;
  func_0x000107c61174(param_4);
  ppuVar5 = &puStack_358;
  uStack_330 = param_4;
  FUN_1007c43e4();
  func_0x000107c61180();
  func_0x000107c57860(param_3);
  func_0x000107c61170(ppuVar5);
  puStack_388 = puVar1;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_1007c4580;
  puStack_370 = &UNK_11084ea10;
  lStack_368 = param_1;
  func_0x000107c61174(param_4);
  ppuVar5 = &puStack_388;
  uStack_360 = param_4;
  FUN_1007c4580();
  func_0x000107c61180();
  func_0x000107c528b0(param_3);
  func_0x000107c61170(ppuVar5);
  puStack_3b8 = puVar1;
  uStack_3b0 = 0xc2000000;
  pcStack_3a8 = FUN_1007c471c;
  puStack_3a0 = &UNK_11084ea10;
  lStack_398 = param_1;
  func_0x000107c61174(param_4);
  ppuVar5 = &puStack_3b8;
  uStack_390 = param_4;
  FUN_1007c471c();
  func_0x000107c61180();
  func_0x000107c57bd8(param_3);
  func_0x000107c61170(ppuVar5);
  puStack_3f0 = puVar1;
  uStack_3e8 = 0xc2000000;
  pcStack_3e0 = FUN_1007c48b8;
  puStack_3d8 = &UNK_11084e830;
  lStack_3d0 = param_1;
  func_0x000107c61174(param_4);
  uStack_3c8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar5 = &puStack_3f0;
  uStack_3c0 = param_5;
  FUN_1007c48b8();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x278,ppuVar5);
  func_0x000107c55f5c(param_3);
  puStack_428 = puVar1;
  uStack_420 = 0xc2000000;
  pcStack_418 = FUN_1007c4a6c;
  puStack_410 = &UNK_11084e830;
  lStack_408 = param_1;
  func_0x000107c61174(param_4);
  uStack_400 = param_4;
  func_0x000107c61174(param_5);
  ppuVar6 = &puStack_428;
  uStack_3f8 = param_5;
  FUN_1007c4a6c();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x260,ppuVar6);
  func_0x000107c5962c(param_3);
  puStack_460 = puVar1;
  uStack_458 = 0xc2000000;
  pcStack_450 = FUN_1007c4c20;
  puStack_448 = &UNK_11084e830;
  lStack_440 = param_1;
  func_0x000107c61174(param_4);
  uStack_438 = param_4;
  func_0x000107c61174(param_5);
  ppuVar7 = &puStack_460;
  uStack_430 = param_5;
  FUN_1007c4c20();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x268,ppuVar7);
  func_0x000107c59dbc(param_3);
  puStack_490 = puVar1;
  uStack_488 = 0xc2000000;
  pcStack_480 = FUN_1007c4dd4;
  puStack_478 = &UNK_11084ea10;
  lStack_470 = param_1;
  func_0x000107c61174(param_4);
  ppuVar8 = &puStack_490;
  uStack_468 = param_4;
  FUN_1007c4dd4();
  func_0x000107c61180();
  ppuVar9 = ppuVar8;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_4b8 = puVar1;
  uStack_4b0 = 0xc2000000;
  pcStack_4a8 = FUN_1007c4f40;
  puStack_4a0 = &UNK_11084ed60;
  ppuVar10 = ppuVar9;
  lStack_498 = param_1;
  (*(code *)ppuVar9[2])();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x270,ppuVar10);
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(ppuVar8);
  puStack_4f0 = puVar1;
  uStack_4e8 = 0xc2000000;
  pcStack_4e0 = FUN_1007c4f88;
  puStack_4d8 = &UNK_11084e830;
  lStack_4d0 = param_1;
  func_0x000107c61174(param_4);
  uStack_4c8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar8 = &puStack_4f0;
  uStack_4c0 = param_5;
  FUN_1007c4f88(ppuVar8);
  func_0x000107c61180();
  func_0x000107c53048(param_3);
  func_0x000107c61170(ppuVar8);
  puStack_528 = puVar1;
  uStack_520 = 0xc2000000;
  pcStack_518 = FUN_1007c513c;
  puStack_510 = &UNK_11084e830;
  lStack_508 = param_1;
  func_0x000107c61174(param_4);
  uStack_500 = param_4;
  func_0x000107c61174(param_5);
  ppuVar8 = &puStack_528;
  uStack_4f8 = param_5;
  FUN_1007c513c();
  func_0x000107c61180();
  lVar11 = param_1 + 0x290;
  func_0x000107c611a0(lVar11,ppuVar8);
  func_0x000107c61174();
  func_0x000107c61170(ppuVar8);
  func_0x000107c530d4(param_3);
  func_0x000107c61170(lVar11);
  puStack_558 = puVar1;
  uStack_550 = 0xc2000000;
  pcStack_548 = FUN_1007c542c;
  puStack_540 = &UNK_11084ea10;
  lStack_538 = param_1;
  func_0x000107c61174(param_4);
  ppuVar8 = &puStack_558;
  uStack_530 = param_4;
  FUN_1007c542c();
  func_0x000107c61180();
  func_0x000107c59c38(param_3);
  func_0x000107c61170(ppuVar8);
  puStack_588 = puVar1;
  uStack_580 = 0xc2000000;
  pcStack_578 = FUN_1007c55c8;
  puStack_570 = &UNK_11084ea10;
  lStack_568 = param_1;
  func_0x000107c61174(param_4);
  ppuVar8 = &puStack_588;
  uStack_560 = param_4;
  FUN_1007c55c8(ppuVar8);
  func_0x000107c61180();
  func_0x000107c53b84(param_3);
  func_0x000107c61170(ppuVar8);
  puStack_5c0 = puVar1;
  uStack_5b8 = 0xc2000000;
  pcStack_5b0 = FUN_1007c5764;
  puStack_5a8 = &UNK_11084e830;
  lStack_5a0 = param_1;
  func_0x000107c61174(param_4);
  uStack_598 = param_4;
  func_0x000107c61174(param_5);
  ppuVar8 = &puStack_5c0;
  uStack_590 = param_5;
  FUN_1007c5764();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x250,ppuVar8);
  func_0x000107c56808(param_3);
  puStack_5f8 = puVar1;
  uStack_5f0 = 0xc2000000;
  pcStack_5e8 = FUN_1007c5918;
  puStack_5e0 = &UNK_11084e830;
  lStack_5d8 = param_1;
  func_0x000107c61174(param_4);
  uStack_5d0 = param_4;
  func_0x000107c61174(param_5);
  ppuVar9 = &puStack_5f8;
  uStack_5c8 = param_5;
  FUN_1007c5918();
  func_0x000107c61180();
  func_0x000107c53914(param_3);
  func_0x000107c61170(ppuVar9);
  puStack_630 = puVar1;
  uStack_628 = 0xc2000000;
  pcStack_620 = FUN_1007c5acc;
  puStack_618 = &UNK_11084e830;
  lStack_610 = param_1;
  func_0x000107c61174(param_4);
  uStack_608 = param_4;
  func_0x000107c61174(param_5);
  ppuVar9 = &puStack_630;
  uStack_600 = param_5;
  FUN_1007c5acc();
  func_0x000107c61180();
  func_0x000107c539b0(param_3);
  func_0x000107c61170(ppuVar9);
  puStack_660 = puVar1;
  uStack_658 = 0xc2000000;
  pcStack_650 = FUN_1007c5c80;
  puStack_648 = &UNK_11084ea10;
  lStack_640 = param_1;
  func_0x000107c61174(param_4);
  ppuVar9 = &puStack_660;
  uStack_638 = param_4;
  FUN_1007c5c80();
  func_0x000107c61180();
  ppuVar10 = ppuVar9;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_688 = puVar1;
  uStack_680 = 0xc2000000;
  pcStack_678 = FUN_1007c5dec;
  puStack_670 = &UNK_11084ed60;
  lStack_668 = param_1;
  (*(code *)ppuVar10[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(ppuVar9);
  puStack_6c0 = puVar1;
  uStack_6b8 = 0xc2000000;
  pcStack_6b0 = FUN_1007c5e34;
  puStack_6a8 = &UNK_11084e830;
  lStack_6a0 = param_1;
  func_0x000107c61174(param_4);
  uStack_698 = param_4;
  func_0x000107c61174(param_5);
  ppuVar9 = &puStack_6c0;
  uStack_690 = param_5;
  FUN_1007c5e34();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x280,ppuVar9);
  func_0x000107c59764(param_3);
  puStack_6f8 = puVar1;
  uStack_6f0 = 0xc2000000;
  pcStack_6e8 = FUN_1007c5fe8;
  puStack_6e0 = &UNK_11084e830;
  lStack_6d8 = param_1;
  func_0x000107c61174(param_4);
  uStack_6d0 = param_4;
  func_0x000107c61174(param_5);
  ppuVar10 = &puStack_6f8;
  uStack_6c8 = param_5;
  FUN_1007c5fe8();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x238,ppuVar10);
  func_0x000107c57ef4(param_3);
  puStack_730 = puVar1;
  uStack_728 = 0xc2000000;
  pcStack_720 = FUN_1007c619c;
  puStack_718 = &UNK_11084e830;
  lStack_710 = param_1;
  func_0x000107c61174(param_4);
  uStack_708 = param_4;
  func_0x000107c61174(param_5);
  ppuVar12 = &puStack_730;
  uStack_700 = param_5;
  FUN_1007c619c();
  func_0x000107c61180();
  func_0x000107c58ca8(param_3);
  func_0x000107c61170(ppuVar12);
  puStack_768 = puVar1;
  uStack_760 = 0xc2000000;
  pcStack_758 = FUN_1007c6350;
  puStack_750 = &UNK_11084e830;
  lStack_748 = param_1;
  func_0x000107c61174(param_4);
  uStack_740 = param_4;
  func_0x000107c61174(param_5);
  ppuVar12 = &puStack_768;
  uStack_738 = param_5;
  FUN_1007c6350();
  func_0x000107c61180();
  ppuVar13 = ppuVar12;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_790 = puVar1;
  uStack_788 = 0xc2000000;
  pcStack_780 = FUN_1007c64f4;
  puStack_778 = &UNK_11084ed60;
  lStack_770 = param_1;
  (*(code *)ppuVar13[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar13);
  func_0x000107c61170(ppuVar12);
  puStack_7c8 = puVar1;
  uStack_7c0 = 0xc2000000;
  pcStack_7b8 = FUN_1007c653c;
  puStack_7b0 = &UNK_11084e830;
  lStack_7a8 = param_1;
  func_0x000107c61174(param_4);
  uStack_7a0 = param_4;
  func_0x000107c61174(param_5);
  ppuVar12 = &puStack_7c8;
  uStack_798 = param_5;
  FUN_1007c653c();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x288,ppuVar12);
  func_0x000107c567dc(param_3);
  puStack_800 = puVar1;
  uStack_7f8 = 0xc2000000;
  pcStack_7f0 = FUN_1007c66f0;
  puStack_7e8 = &UNK_11084e830;
  lStack_7e0 = param_1;
  func_0x000107c61174(param_4);
  uStack_7d8 = param_4;
  func_0x000107c61174(param_5);
  ppuVar13 = &puStack_800;
  uStack_7d0 = param_5;
  FUN_1007c66f0();
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x2a0,ppuVar13);
  func_0x000107c54f44(param_3);
  puStack_838 = puVar1;
  uStack_830 = 0xc2000000;
  pcStack_828 = FUN_1007c68a4;
  puStack_820 = &UNK_11084e830;
  lStack_818 = param_1;
  func_0x000107c61174(param_4);
  uStack_810 = param_4;
  func_0x000107c61174(param_5);
  ppuVar14 = &puStack_838;
  uStack_808 = param_5;
  FUN_1007c68a4(ppuVar14);
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x240,ppuVar14);
  func_0x000107c58e68(param_3);
  puStack_868 = puVar1;
  uStack_860 = 0xc2000000;
  pcStack_858 = FUN_1007c6a58;
  puStack_850 = &UNK_11084ea10;
  lStack_848 = param_1;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_868;
  uStack_840 = param_4;
  FUN_1007c6a58();
  func_0x000107c61180();
  func_0x000107c552c0(param_3);
  func_0x000107c61170(ppuVar16);
  puStack_8a0 = puVar1;
  uStack_898 = 0xc2000000;
  pcStack_890 = FUN_1007c6bf4;
  puStack_888 = &UNK_11084e830;
  lStack_880 = param_1;
  func_0x000107c61174(param_4);
  uStack_878 = param_4;
  uStack_870 = param_5;
  func_0x000107c61174(param_5);
  ppuVar16 = &puStack_8a0;
  FUN_1007c6bf4(ppuVar16);
  func_0x000107c61180();
  func_0x000107c54b98(param_3);
  func_0x000107c61170(ppuVar16);
  puStack_8d0 = puVar1;
  uStack_8c8 = 0xc2000000;
  pcStack_8c0 = FUN_1007c6da8;
  puStack_8b8 = &UNK_11084ea10;
  lStack_8b0 = param_1;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_8d0;
  uStack_8a8 = param_4;
  FUN_1007c6da8();
  func_0x000107c61180();
  func_0x000107c54a14(param_3);
  func_0x000107c61170(ppuVar16);
  puStack_900 = puVar1;
  uStack_8f8 = 0xc2000000;
  pcStack_8f0 = FUN_1007c6f44;
  puStack_8e8 = &UNK_11084ea10;
  lStack_8e0 = param_1;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_900;
  uStack_8d8 = param_4;
  FUN_1007c6f44();
  func_0x000107c61180();
  ppuVar15 = ppuVar16;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_928 = puVar1;
  uStack_920 = 0xc2000000;
  pcStack_918 = FUN_1007c70b0;
  puStack_910 = &UNK_11084ed60;
  lStack_908 = param_1;
  (*(code *)ppuVar15[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar15);
  func_0x000107c61170(ppuVar16);
  puStack_958 = puVar1;
  uStack_950 = 0xc2000000;
  pcStack_948 = FUN_1007c70f8;
  puStack_940 = &UNK_11084ea10;
  lStack_938 = param_1;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_958;
  uStack_930 = param_4;
  FUN_1007c70f8();
  func_0x000107c61180();
  ppuVar15 = ppuVar16;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_980 = puVar1;
  uStack_978 = 0xc2000000;
  pcStack_970 = FUN_1007c7264;
  puStack_968 = &UNK_11084ed60;
  lStack_960 = param_1;
  (*(code *)ppuVar15[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar15);
  func_0x000107c61170(ppuVar16);
  puStack_9b0 = puVar1;
  uStack_9a8 = 0xc2000000;
  pcStack_9a0 = FUN_1007c72ac;
  puStack_998 = &UNK_11084ea10;
  lStack_990 = param_1;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_9b0;
  uStack_988 = param_4;
  FUN_1007c72ac();
  func_0x000107c61180();
  ppuVar15 = ppuVar16;
  func_0x000107c40138();
  func_0x000107c61180();
  puStack_9d8 = puVar1;
  uStack_9d0 = 0xc2000000;
  pcStack_9c8 = FUN_1007c7418;
  puStack_9c0 = &UNK_11084ed60;
  lStack_9b8 = param_1;
  (*(code *)ppuVar15[2])();
  func_0x000107c611b0();
  func_0x000107c61170(ppuVar15);
  func_0x000107c61170(ppuVar16);
  puStack_a08 = puVar1;
  uStack_a00 = 0xc2000000;
  pcStack_9f8 = FUN_1007c7460;
  puStack_9f0 = &UNK_11084ea10;
  lStack_9e8 = param_1;
  uStack_9e0 = param_4;
  func_0x000107c61174(param_4);
  ppuVar16 = &puStack_a08;
  FUN_1007c7460();
  func_0x000107c61180();
  func_0x000107c5945c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(ppuVar16);
  func_0x000107c61170(uStack_9e0);
  func_0x000107c61170(uStack_988);
  func_0x000107c61170(uStack_930);
  func_0x000107c61170(uStack_8d8);
  func_0x000107c61170(uStack_8a8);
  func_0x000107c61170(uStack_870);
  func_0x000107c61170(uStack_878);
  func_0x000107c61170(uStack_840);
  func_0x000107c61170(ppuVar14);
  func_0x000107c61170(uStack_808);
  func_0x000107c61170(uStack_810);
  func_0x000107c61170(ppuVar13);
  func_0x000107c61170(uStack_7d0);
  func_0x000107c61170(uStack_7d8);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(uStack_798);
  func_0x000107c61170(uStack_7a0);
  func_0x000107c61170(uStack_738);
  func_0x000107c61170(uStack_740);
  func_0x000107c61170(uStack_700);
  func_0x000107c61170(uStack_708);
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(uStack_6c8);
  func_0x000107c61170(uStack_6d0);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(uStack_690);
  func_0x000107c61170(uStack_698);
  func_0x000107c61170(uStack_638);
  func_0x000107c61170(uStack_600);
  func_0x000107c61170(uStack_608);
  func_0x000107c61170(uStack_5c8);
  func_0x000107c61170(uStack_5d0);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(uStack_590);
  func_0x000107c61170(uStack_598);
  func_0x000107c61170(uStack_560);
  func_0x000107c61170(uStack_530);
  func_0x000107c61170(uStack_4f8);
  func_0x000107c61170(uStack_500);
  func_0x000107c61170(uStack_4c0);
  func_0x000107c61170(uStack_4c8);
  func_0x000107c61170(uStack_468);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(uStack_430);
  func_0x000107c61170(uStack_438);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(uStack_3f8);
  func_0x000107c61170(uStack_400);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(uStack_3c0);
  func_0x000107c61170(uStack_3c8);
  func_0x000107c61170(uStack_390);
  func_0x000107c61170(uStack_360);
  func_0x000107c61170(uStack_330);
  func_0x000107c61170(uStack_2f8);
  func_0x000107c61170(uStack_300);
  func_0x000107c61170(uStack_2c0);
  func_0x000107c61170(uStack_2c8);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(uStack_288);
  func_0x000107c61170(uStack_290);
  func_0x000107c61170(uStack_230);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(uStack_1d8);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(uStack_198);
  func_0x000107c61170(uStack_1a0);
  func_0x000107c61170(uStack_160);
  func_0x000107c61170(uStack_168);
  func_0x000107c61170(uStack_128);
  func_0x000107c61170(uStack_130);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 1007c3014; end: 1007c317f;  */

void FUN_1007c3014(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a6c18;
  puStack_68 = &UNK_11090c0a0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c3180; end: 1007c31af; -[SCMutablePublicCameraFeatureCatalog setCameraUserActionLogger:] */

void FUN_1007c3180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c31b0; end: 1007c336b;  */

void FUN_1007c31b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  puVar1 = PTR_PTR_1126b7010;
  func_0x000107c426f8();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if ((int)puVar1 == 0) {
    func_0x000107c4d6fc(uVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c40d8c();
    func_0x000107c61180();
  }
  puVar1 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_1060a6cc8;
  puStack_80 = &UNK_11090c0d0;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_78 = uVar4;
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c336c; end: 1007c3427; +[SCCameraCaptureControlsExperiment enabledOnStartupWithAppStartExperimentReader:] */

undefined8 FUN_1007c336c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x113035638,auStack_48,0,0);
  if (cRam0000000113035638 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000113035638 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f1d1790);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 1007c3428; end: 1007c3457; -[SCMutablePublicCameraFeatureCatalog setCaptureControls:] */

void FUN_1007c3428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c3458; end: 1007c35fb;  */

void FUN_1007c3458(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1008e9308;
  puStack_88 = &UNK_11090c130;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar5;
  func_0x000107c61174(uVar4);
  uStack_78 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a8,auStack_68);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c35fc; end: 1007c362b; -[SCMutablePublicCameraFeatureCatalog setHandsFreeRecording:] */

void FUN_1007c35fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c362c; end: 1007c37af;  */

void FUN_1007c362c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a71f4;
  puStack_70 = &UNK_11090c190;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c37b0; end: 1007c37df; -[SCMutablePublicCameraFeatureCatalog setTapToFocusAndExposure:] */

void FUN_1007c37b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c37e0; end: 1007c3963;  */

void FUN_1007c37e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a7740;
  puStack_70 = &UNK_11090c1c0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c3964; end: 1007c3993; -[SCMutablePublicCameraFeatureCatalog setLens3DModeActivator:] */

void FUN_1007c3964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c3994; end: 1007c3b17;  */

void FUN_1007c3994(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10088e070;
  puStack_70 = &UNK_11090c1f0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c3b18; end: 1007c3b47; -[SCMutablePublicCameraFeatureCatalog setToggleCameraButton:] */

void FUN_1007c3b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c3b48; end: 1007c3ccb;  */

void FUN_1007c3b48(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10088dc00;
  puStack_70 = &UNK_11090c220;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c3ccc; end: 1007c3d13;  */

/* WARNING: Possible PIC construction at 0x0001007c3d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c3d04) */

void FUN_1007c3ccc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x220);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c3d14; end: 1007c3e7f;  */

void FUN_1007c3d14(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a7a94;
  puStack_68 = &UNK_11090c250;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c3e80; end: 1007c3ec7;  */

/* WARNING: Possible PIC construction at 0x0001007c3eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c3eb8) */

void FUN_1007c3e80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x220);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c3ec8; end: 1007c404b;  */

void FUN_1007c3ec8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008a77d8;
  puStack_70 = &UNK_11090c280;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c404c; end: 1007c407b; -[SCMutablePublicCameraFeatureCatalog setNightMode:] */

void FUN_1007c404c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c407c; end: 1007c41ff;  */

void FUN_1007c407c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a7bb8;
  puStack_70 = &UNK_11090c2b0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4200; end: 1007c422f; -[SCMutablePublicCameraFeatureCatalog setCloseupCaptureMode:] */

void FUN_1007c4200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c4230; end: 1007c43b3;  */

void FUN_1007c4230(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c2b6c4;
  puStack_70 = &UNK_11090c2e0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c43b4; end: 1007c43e3; -[SCMutablePublicCameraFeatureCatalog setMultiSnap:] */

void FUN_1007c43b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c43e4; end: 1007c454f;  */

void FUN_1007c43e4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a7f04;
  puStack_68 = &UNK_11090c310;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4550; end: 1007c457f; -[SCMutablePublicCameraFeatureCatalog setPrivacyView:] */

void FUN_1007c4550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c4580; end: 1007c46eb;  */

void FUN_1007c4580(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a7fd0;
  puStack_68 = &UNK_11090c340;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c46ec; end: 1007c471b; -[SCMutablePublicCameraFeatureCatalog setArSessionBlurLoadingView:] */

void FUN_1007c46ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c471c; end: 1007c4887;  */

void FUN_1007c471c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1008d38f8;
  puStack_68 = &UNK_11090c370;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4888; end: 1007c48b7; -[SCMutablePublicCameraFeatureCatalog setRecipientName:] */

void FUN_1007c4888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c48b8; end: 1007c4a3b;  */

void FUN_1007c48b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a80cc;
  puStack_70 = &UNK_11090c3a0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4a3c; end: 1007c4a6b; -[SCMutablePublicCameraFeatureCatalog setLevelerMode:] */

void FUN_1007c4a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c4a6c; end: 1007c4bef;  */

void FUN_1007c4a6c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a83c0;
  puStack_70 = &UNK_11084e950;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4bf0; end: 1007c4c1f; -[SCMutablePublicCameraFeatureCatalog setSpeedMode:] */

void FUN_1007c4bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c4c20; end: 1007c4da3;  */

void FUN_1007c4c20(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d700(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_100c62304;
  puStack_70 = &UNK_11090c3d0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4da4; end: 1007c4dd3; -[SCMutablePublicCameraFeatureCatalog setTimerMode:] */

void FUN_1007c4da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007c4dd4; end: 1007c4f3f;  */

void FUN_1007c4dd4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1060a8828;
  puStack_68 = &UNK_11090c400;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c4f40; end: 1007c4f87;  */

/* WARNING: Possible PIC construction at 0x0001007c4f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007c4f78) */

void FUN_1007c4f40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x220);
  func_0x000107c4972c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1007c4f88; end: 1007c510b;  */

void FUN_1007c4f88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d6fc(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1060a8918;
  puStack_70 = &UNK_11090c430;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar4);
  uStack_68 = uVar4;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c4fb50(puVar3);
  func_0x000107c61180();
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007c510c; end: 1007c513b; -[SCMutablePublicCameraFeatureCatalog setCameraModeSelectionManager:] */

void FUN_1007c510c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


