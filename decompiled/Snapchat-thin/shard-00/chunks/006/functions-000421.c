/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008b8920; end: 1008b894f;  */

void FUN_1008b8920(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9bb0);
  func_0x000107c45de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008b8950; end: 1008b89f3; -[SCCameraBIPAConfigurationImpl initWithCircumstanceEngine:featureSettingsService:] */

undefined1 *
FUN_1008b8950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8898;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008b89f4; end: 1008b8a4b; -[SCCameraBIPAConfigurationImpl shouldShowBIPA] */

bool FUN_1008b89f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c50484();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c5c734(lVar2);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3e930();
  func_0x000107c61170(lVar2);
  return lVar3 < lVar1;
}



/* Entry: 1008b8a4c; end: 1008b8abf; -[SCCameraBIPAConfigurationImpl requiredPolicyVersion] */

undefined8 FUN_1008b8a4c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008b8ac0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc500 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc500,&puStack_38);
  }
  return uRam00000001136bc4f8;
}



/* Entry: 1008b8ac0; end: 1008b8aff;  */

void FUN_1008b8ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42fdc();
  uRam00000001136bc4f8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b8b00; end: 1008b8b2b; -[SCCameraCircumstanceEngineImpl fetchBIPADisclaimerRequiredVersion] */

long FUN_1008b8b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4980c(uVar1,param_2,&PTR____CFConstantStringClassReference_110de4c38,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1008b8b2c; end: 1008b8b6b; -[SCFeatureSettingsService bipaAcceptedPolicyVersion] */

undefined8 FUN_1008b8b2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5dc1c(param_1,param_2,0x388);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49820();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1008b8b6c; end: 1008b8c4f;  */

void FUN_1008b8b6c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008b8c50;
  puStack_60 = &UNK_110866a30;
  func_0x000107c6111c(auStack_40,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  func_0x000107c61174(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x000107c61174(uVar1);
  uStack_48 = uVar1;
  FUN_1000d76cc("APPSTORE",&puStack_78);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61120(auStack_40);
  return;
}



/* Entry: 1008b8c50; end: 1008b8d2b;  */

/* WARNING: Possible PIC construction at 0x0001008b8cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b8cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b8ccc) */
/* WARNING: Removing unreachable block (ram,0x0001008b8cd8) */
/* WARNING: Removing unreachable block (ram,0x0001008b8cfc) */
/* WARNING: Removing unreachable block (ram,0x0001008b8d04) */

void FUN_1008b8c50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      func_0x000107c3ba48(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30));
    }
    else {
      func_0x000107c3f07c(lVar2);
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c43048();
      lVar1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008b8d2c; end: 1008b960b; -[SCCameraViewControllerStartupWorkflow _initiateStartCamera:cameraResources:cameraStartCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b8d2c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_3;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ba04();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4f9d8();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar4 = param_3;
    func_0x000107c3f0bc();
    func_0x000107c61180();
    uVar13 = uVar4;
    func_0x000107c41e68();
    func_0x000107c61180();
    uVar5 = uVar13;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c499a0();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar6 & 1) == 0) goto LAB_1008b9008;
  }
  else {
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  uVar1 = param_3;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ba04();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4f9d8();
  func_0x000107c61180();
  uVar13 = uVar4;
  func_0x000107c3ebcc();
  if ((uVar13 & 1) == 0) {
    uVar13 = param_3;
    func_0x000107c3f0bc();
    func_0x000107c61180();
    uVar5 = uVar13;
    func_0x000107c41e68();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c499a0();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar7 & 1) != 0) goto LAB_1008b8f70;
  }
  else {
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
LAB_1008b8f70:
    FUN_1000cb554();
  }
  uVar1 = param_3;
  func_0x000107c3f1a8(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5036c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126b00d0;
  func_0x000107c59768(PTR_PTR_1126b00d0);
  func_0x000107c61180();
  func_0x000107c5c2bc(uVar3);
  func_0x000107c611b0();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
LAB_1008b9008:
  uVar1 = param_3;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ba04();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c43b48();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (uVar4 != 0) {
    uVar1 = param_3;
    func_0x000107c3f0bc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5ba04();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c43b48();
    func_0x000107c61180();
    uVar13 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((int)uVar13 != 0) {
      FUN_1000cb554();
    }
    uVar1 = param_3;
    func_0x000107c3f1a8(param_3);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5036c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126b00d0;
    func_0x000107c59768(PTR_PTR_1126b00d0);
    func_0x000107c61180();
    func_0x000107c5c2bc(uVar3);
    func_0x000107c611b0();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c5a880(param_1);
  func_0x000107c41d20(param_1);
  func_0x000107c42584(param_1);
  uVar1 = param_3;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c443b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (uVar4 == 0) {
    uVar9 = param_4;
    func_0x000107c5cb78(param_4);
    func_0x000107c61180();
    func_0x000107c59e7c(param_4);
    func_0x000107c61170(uVar9);
  }
  else {
    func_0x000107c59e7c();
  }
  uVar9 = param_4;
  func_0x000107c40534();
  func_0x000107c61144(auStack_80,param_1);
  func_0x000107c61144(auStack_88,param_3);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10700cb0c;
  puStack_b0 = &UNK_110907098;
  func_0x000107c6111c(auStack_a0,auStack_80);
  func_0x000107c6111c(auStack_98,auStack_88);
  func_0x000107c61174(param_5);
  ppuVar10 = &puStack_c8;
  uStack_a8 = param_5;
  uStack_90 = uVar9;
  func_0x000107c61184();
  uVar1 = uVar4;
  func_0x000107c4a6ac();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x000107c3f0bc(param_3);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5cb3c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c3f30c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    uVar13 = *(ulong *)(param_1 + _DAT_1127626d0);
    func_0x000107c3f0fc(uVar13);
    func_0x000107c61180();
    uVar1 = uVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c43838(PTR_PTR_1126b5a50);
    uVar2 = param_3;
    func_0x000107c3f0a0(param_3);
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c61174(ppuVar10);
    uVar3 = uVar1;
    func_0x000107c5bba4(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar13);
    func_0x000107c59e7c(param_4);
    func_0x000107c61170(ppuVar10);
  }
  else {
    uVar1 = param_3;
    func_0x000107c3f0bc(param_3);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5cb3c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c3f2ec();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61144(auStack_d0,param_1);
    uVar11 = *(undefined8 *)(param_1 + _DAT_1127626d0);
    func_0x000107c3f0f4(uVar11);
    func_0x000107c61180();
    uVar9 = uVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar12 = uVar9;
    func_0x000107c4f7e8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d8,auStack_d0);
    func_0x000107c61174(ppuVar10);
    func_0x000107c4e524(uVar12);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61120(auStack_d0);
    uVar3 = uVar4;
  }
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b960c; end: 1008b9613; -[SCMutablePublicCameraFeatureCatalog stabilizationMode] */

undefined8 FUN_1008b960c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 1008b9614; end: 1008b9643;  */

bool FUN_1008b9614(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008b9644; end: 1008b97c3;  */

void FUN_1008b9644(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0158;
    func_0x000107c610f4();
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0fc(uVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    func_0x000107c5036c(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c500a0(uVar5);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar1 + 0x10);
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
    uVar9 = *(undefined8 *)(lVar1 + 0xf0);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1008b97c4;
    puStack_70 = &UNK_11084e7d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    ppuVar6 = &puStack_88;
    uStack_68 = uVar7;
    FUN_1008b97c4();
    func_0x000107c61180();
    func_0x000107c45bf4(puVar8,param_2,uVar2,uVar3,uVar4,uVar5,uVar10,uVar11,uVar9,ppuVar6,0);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1008b97c4; end: 1008b989f;  */

void FUN_1008b97c4(long param_1)

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



/* Entry: 1008b98a0; end: 1008b9c1b; -[SCFeatureToggleCameraVideoStabilizationButton initWithCameraHardwareServicesAPI:cameraHardwareResource:cameraRequestHandler:renderAgent:cameraUIScope:startupConfiguration:circumstanceEngine:cameraUserActionLogger:featureUpdateEventSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008b98a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126ef8d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ed60) = 0;
    lVar7 = (long)_DAT_11273ed64;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed68;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed6c;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed70;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_10;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed74;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed78;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ed7c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ed7c) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c5de90(param_7);
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11273ed80,uVar2);
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_11273ed84;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5de08();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c426d4();
    lVar7 = (long)_DAT_11273ed88;
    *(char *)((long)puVar1 + lVar7) = (char)uVar6;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5de08();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5cba8();
    *(char *)((long)puVar1 + (long)_DAT_11273ed8c) = (char)uVar6;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    if (*(char *)((long)puVar1 + lVar7) == '\x01') {
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ed90);
      *(undefined **)((long)puVar1 + (long)_DAT_11273ed90) = PTR____kCFBooleanTrue_11034ab68;
      func_0x000107c61170(uVar2);
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ed94) = 0;
    puVar3 = PTR_PTR_1126b0228;
    func_0x000107c4e748();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ed98);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ed98) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b9c1c; end: 1008b9c1f; -[SCCameraVideoStabilizationByDefaultConfigurationImpl toolbarButtonEnabled] */

void FUN_1008b9c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoStabilizationToolbarButton_112597d78);
  return;
}



/* Entry: 1008b9c20; end: 1008b9c37; -[SCCameraVideoStabilizationByDefaultConfigurationImpl _videoStabilizationToolbarButtonEnabled] */

void FUN_1008b9c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd1178,1,0);
  return;
}



/* Entry: 1008b9c38; end: 1008b9c73; +[SCCameraFourThreePinchExperiment pinchModeWithDeferredExposureWithCircumstanceEngine:] */

void FUN_1008b9c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_1008b9c74(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008b9c74; end: 1008b9d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b9c74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar5 = 0;
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c49804();
    func_0x000107c61170(lVar3);
    lVar3 = (long)(int)lVar2;
  }
  FUN_1008b9d60();
  lVar2 = 0;
  if ((uVar5 & 0xff) != 1) {
    lVar2 = lVar3;
  }
  FUN_1008b9d70();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112eeffb0) = lVar2;
  *(long *)(lVar4 + _DAT_112eeffb8) = param_1;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008b9d60; end: 1008b9d6f;  */

undefined1  [16] FUN_1008b9d60(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1008b9d70; end: 1008b9d8f;  */

void FUN_1008b9d70(void)

{
  func_0x000107c61168(&PTR_PTR_112889588);
  return;
}



/* Entry: 1008b9d90; end: 1008b9dc7; -[SCFeatureToggleCameraVideoStabilizationButton configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b9d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273edb8);
  *(undefined8 *)(param_1 + _DAT_11273edb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b9dc8; end: 1008b9dd7; -[SCFeatureToggleCameraVideoStabilizationButton rearCameraStabilizationOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b9dc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273eda0);
}



/* Entry: 1008b9dd8; end: 1008b9de7; -[SCFeatureToggleCameraVideoStabilizationButton frontCameraStabilizationOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b9dd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ed9c);
}



/* Entry: 1008b9de8; end: 1008b9e67; -[SCMainCameraViewControllerStartupWorkflow didSetupVideoPreviewAfterStartingCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b9de8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c3f300();
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127623a4);
    func_0x000107c4db98(uVar2,param_2,0x36);
    if ((bRam0000000113839532 & 1) == 0) {
      func_0x000107c6106c();
      bRam0000000113839532 = 1;
      uRam00000001138394c8 = uVar2;
    }
  }
  return;
}



/* Entry: 1008b9e68; end: 1008b9e6f; -[SCCameraHardwareServicesAPIImpl getWarmupTokenAndInvalidate] */

void FUN_1008b9e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_getTokenAndInvalidate_1125d06b0);
  return;
}



/* Entry: 1008b9e70; end: 1008b9e77; -[SCLegacyCameraResourcesImpl token] */

undefined8 FUN_1008b9e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1008b9e78; end: 1008b9eeb; -[SCLegacyCameraResourcesImpl setToken:] */

void FUN_1008b9e78(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1008b9eec; end: 1008b9efb; -[SCFeatureToSnappableLoggingImpl cameraViewWillRequestCaptureToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b9eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),
             PTR_s_cameraViewWillRequestCaptureToke_1125a88c0);
  return;
}



/* Entry: 1008b9efc; end: 1008b9f23; -[SCCameraToSnappableStabilityMonitorImpl cameraViewWillRequestCaptureToken] */

void FUN_1008b9efc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1008b9f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b9f24; end: 1008ba077;  */

void FUN_1008b9f24(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  pcVar1 = (code *)auStack_80;
  FUN_1008b81c8();
  lVar3 = 0;
  FUN_1005d3d88();
  lVar4 = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(param_3,1,lVar3);
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_3 + *(int *)(lVar3 + 0x7c)) = 1;
    func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar3 + 0x2c));
    (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ba070);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ba074);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ba078);
      (*pcVar1)();
    }
    *(long *)(param_3 + *(int *)(lVar3 + 0x50)) = (long)param_1;
  }
  (*pcVar1)(auStack_80,0);
  return;
}



/* Entry: 1008ba078; end: 1008ba087; -[SCCameraViewController cameraDeviceSettingsResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008ba078(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624fc);
}



/* Entry: 1008ba088; end: 1008ba273; -[SCCameraHardwareServicesAPIImpl startRunningWithAvailabilityOptions:cameraDeviceSettingsResolver:context:completionHandler:] */

void FUN_1008ba088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126b7038;
  func_0x000107c610f4();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4f7e8();
  func_0x000107c61180();
  func_0x000107c46d74();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4f7e8();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_68,auStack_58);
  func_0x000107c61174(param_6);
  uStack_60 = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008ba274; end: 1008ba343; -[SCCapturerTokenImpl initWithIdentifier:performer:delegate:] */

undefined1 *
FUN_1008ba274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e75e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008ba344; end: 1008ba3af; -[SCCameraViewControllerStartupWorkflow startDeviceMotionUpdates:] */

/* WARNING: Possible PIC construction at 0x0001008ba390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ba394) */

void FUN_1008ba344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  func_0x000107c5cb60();
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c5babc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008ba3b0; end: 1008ba44f; -[SCFeatureToggleCameraButtonImpl startDeviceMotionUpdates] */

/* WARNING: Possible PIC construction at 0x0001008ba414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ba418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ba3b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  lVar3 = (long)_DAT_1127417d4;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274179c);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5bab8();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    param_1 = lVar2;
  }
  else {
    func_0x000107c611a8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ba450; end: 1008ba47f;  */

void FUN_1008ba450(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7558;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1008ba480; end: 1008ba4eb; -[SCDeviceMotionServicesImpl init] */

undefined1 * FUN_1008ba480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7970;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7898;
    func_0x000107c610f4();
    func_0x000107c47860();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008ba4ec; end: 1008ba637; -[SCDeviceOrientationAndMotionManager initWithMotionManager:] */

undefined8 * FUN_1008ba4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e7980;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610fc();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c56330(puVar1[3]);
    func_0x000107c57a7c(puVar1[3]);
    puVar2 = PTR_PTR_1126b78a0;
    func_0x000107c610f4();
    func_0x000107c4846c(0x4024000000000000,0x4014000000000000);
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = puVar1[3];
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_3);
    func_0x000107c3d7d8(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008ba638; end: 1008ba69f; -[SCLowpassFilter initWithSampleRate:cutoffFrequency:] */

undefined1 * FUN_1008ba638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7978;
  uStack_40 = param_3;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c5d5e4(param_1,param_2,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008ba6a0; end: 1008ba6bb; -[SCLowpassFilter updateSampleRate:cutoffFrequency:] */

void FUN_1008ba6a0(double param_1,double param_2,long param_3)

{
  *(double *)(param_3 + 8) = (1.0 / param_1) / (1.0 / param_1 + 1.0 / param_2);
  return;
}



/* Entry: 1008ba6bc; end: 1008ba6c3; -[SCDeviceMotionServicesImpl startDeviceAccelerometerUpdates] */

void FUN_1008ba6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startMonitoring_112671728);
  return;
}



/* Entry: 1008ba6c4; end: 1008ba79b; -[SCDeviceOrientationAndMotionManager startMonitoring] */

void FUN_1008ba6c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  FUN_10011df08();
  func_0x000107c61180();
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(lVar1);
  func_0x000107c3d7d8(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008ba79c; end: 1008ba90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ba79c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11272acb0;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3de48();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar3 = lVar2;
    func_0x000107c3ebd4(lVar2,param_2,&PTR____CFConstantStringClassReference_110e08b38,0,0);
    lVar4 = lVar2;
    func_0x000107c3ebd4(lVar2,param_2,&PTR____CFConstantStringClassReference_110e08b58,0,0);
    lVar5 = lVar2;
    func_0x000107c3ebd4(lVar2,param_2,&PTR____CFConstantStringClassReference_110e08b78,0,0);
    puVar8 = PTR_PTR_1126bf418;
    func_0x000107c610f4(PTR_PTR_1126bf418);
    lVar9 = (long)_DAT_11272acb4;
    lVar1 = param_1 + lVar9;
    func_0x000107c61148(lVar1);
    lVar6 = lVar1;
    func_0x000107c52030();
    func_0x000107c61180();
    lVar9 = param_1 + lVar9;
    func_0x000107c61148(lVar9);
    lVar7 = lVar9;
    func_0x000107c4d2e4();
    func_0x000107c61180();
    func_0x000107c45850(puVar8,param_2,lVar6,lVar7,lVar3,lVar4,lVar5);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1008ba910; end: 1008ba9df;  */

void FUN_1008ba910(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar1;
  func_0x000107c61170(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar1;
  func_0x000107c61170(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar1;
  func_0x000107c61170(uVar2);
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CMMotionManager_1126b78a8;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c160c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb999999999999a,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setAccelerometerUpdateInterval__112635d20);
  return;
}



/* Entry: 1008ba9e0; end: 1008baaef; -[SCCustomVolumeController initWithAudioSession:mutableAudioSession:pauseMusicOnVolumePress:pauseMusicOnOverride:disableIgnoreMuteOverride:] */

undefined1 *
FUN_1008ba9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126ea9e0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = param_5;
    *(undefined1 *)((long)puVar1 + 0x2a) = param_6;
    *(undefined1 *)((long)puVar1 + 0x2b) = param_7;
    *(undefined2 *)((long)puVar1 + 0x2c) = 0;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008baaf0; end: 1008bab5b; -[SCCustomVolumeController isOverridingMuteSwitch] */

bool FUN_1008baaf0(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  lVar1 = param_1;
  func_0x000107c3e3b0(param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  return lVar1 != 0;
}



/* Entry: 1008bab5c; end: 1008bab63; -[SCCustomVolumeController audioConfiguration] */

undefined8 FUN_1008bab5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008bab64; end: 1008bab8b; -[SCLegacyCameraResourcesImpl mainCameraViewControllerLifecycleBehaviorSubject] */

void FUN_1008bab64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008bab8c; end: 1008bab93; +[SCMainCameraViewControllerLifecycleEvent viewDidPartiallyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bab8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_1130825e8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008bab94; end: 1008babe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bab94(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_1130825e8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008babe4; end: 1008bacf7;  */

void FUN_1008babe4(long param_1,undefined8 param_2)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_10608de1c;
  puStack_58 = &UNK_110850308;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_48,param_1 + 0x38);
  func_0x000107c6111c(auStack_78,param_1 + 0x38);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bacf8; end: 1008bad33; -[SCMainCameraViewControllerLifecycleEvent matchViewDidFullyAppear:viewDidFullyDisappear:viewDidPartiallyAppear:viewDidPartiallyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bacf8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_1130825e8);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008bad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1008bad34; end: 1008bad93;  */

void FUN_1008bad34(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0)) {
    param_1 = param_1 + 0x38;
    func_0x000107c61148(param_1);
    func_0x000107c3c32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1008bad94; end: 1008baf03; -[SCStateOrchestratorBlockReducer reduce:otherObject:] */

void FUN_1008bad94(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = param_3;
  if (lVar5 != 0) {
    lVar1 = param_3;
    func_0x000107c50468(param_3);
    func_0x000107c61180();
    lVar2 = param_4;
    func_0x000107c50468(param_4);
    func_0x000107c61180();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar1,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar5 < 0) {
      func_0x000107c61174(param_4);
      lVar4 = param_4;
      goto LAB_1008baed8;
    }
    if (lVar5 != 0) {
      func_0x000107c61174(param_3);
      goto LAB_1008baed8;
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = param_3;
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  lVar1 = param_4;
  func_0x000107c5bcc0(param_4);
  func_0x000107c61180();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar5,lVar1);
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  if (lVar3 != lVar2) {
    lVar4 = param_4;
  }
  func_0x000107c61174(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
LAB_1008baed8:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1008baf04; end: 1008baf73;  */

void FUN_1008baf04(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  uVar3 = param_2;
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008baf74; end: 1008baf8f;  */

void FUN_1008baf74(long param_1,long param_2)

{
  if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1008baf90; end: 1008bafdb;  */

void FUN_1008baf90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008bafdc; end: 1008bb08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bafdc(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130825e8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (*param_1)();
    }
    else {
      (*param_3)();
    }
  }
  else if (bVar1 == 2) {
    (*param_5)();
  }
  else {
    (*param_7)();
  }
  return;
}



/* Entry: 1008bb090; end: 1008bb093;  */

void FUN_1008bb090(void)

{
  return;
}



/* Entry: 1008bb094; end: 1008bb18f;  */

void FUN_1008bb094(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1008d0ac4;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb190; end: 1008bb193;  */

void FUN_1008bb190(void)

{
  return;
}



/* Entry: 1008bb194; end: 1008bb243;  */

/* WARNING: Possible PIC construction at 0x0001008bb22c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008bb230) */

void FUN_1008bb194(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c4c7a8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008bb244; end: 1008bb24b;  */

void FUN_1008bb244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd97d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cameraWillAppear_112553f90);
  return;
}



/* Entry: 1008bb24c; end: 1008bb2b7;  */

void FUN_1008bb24c(undefined1 *param_1)

{
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 2;
  puStack_70 = param_1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  FUN_1008bafdc(0x1008d0b18,auStack_40,&UNK_102ac2600,auStack_60,FUN_1008bb2b8,auStack_80,
                &UNK_102ac24e8,0);
  return;
}



/* Entry: 1008bb2b8; end: 1008bb2cf;  */

void FUN_1008bb2b8(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1008bb2d0; end: 1008bb333;  */

void FUN_1008bb2d0(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x31) = uVar1;
    FUN_1007d649c();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1008bb334; end: 1008bb467;  */

void FUN_1008bb334(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(unaff_x20 + 0x32) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      *(undefined1 *)(unaff_x20 + 0x32) = 0;
      puStack_78 = param_1;
      uStack_70 = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c5fb78(0x2f,0xe100000000000000);
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      uStack_48 = param_3;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar1 = uStack_70;
      puVar3 = puStack_78;
      func_0x000107c5fadc(puStack_78,uStack_70);
      func_0x000107c6142c(uVar1);
      puStack_58 = &UNK_102ac27d4;
      uStack_50 = 0;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      pcStack_68 = FUN_1000f3aa0;
      puStack_60 = &UNK_110595418;
      ppuVar4 = &puStack_78;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c5ba8c(lVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 1008bb468; end: 1008bb593;  */

void FUN_1008bb468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008d0b1c;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_106183bf8;
  puStack_88 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c6111c(auStack_a8,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb594; end: 1008bb597;  */

void FUN_1008bb594(void)

{
  return;
}



/* Entry: 1008bb598; end: 1008bb6c3;  */

void FUN_1008bb598(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008d0e28;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1061e4b48;
  puStack_88 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c6111c(auStack_a8,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb6c4; end: 1008bb6c7;  */

void FUN_1008bb6c4(void)

{
  return;
}



/* Entry: 1008bb6c8; end: 1008bb783;  */

void FUN_1008bb6c8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb784; end: 1008bb787;  */

void FUN_1008bb784(void)

{
  return;
}



/* Entry: 1008bb788; end: 1008bb883;  */

void FUN_1008bb788(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1008d1600;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb884; end: 1008bb887;  */

void FUN_1008bb884(void)

{
  return;
}



/* Entry: 1008bb888; end: 1008bb983;  */

void FUN_1008bb888(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1008d1678;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008bb984; end: 1008bb9b3;  */

void FUN_1008bb984(void)

{
  return;
}



/* Entry: 1008bb9b4; end: 1008bba7f;  */

/* WARNING: Possible PIC construction at 0x0001008bba5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008bba60) */

void FUN_1008bb9b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c4c7a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008bba80; end: 1008bba83;  */

void FUN_1008bba80(void)

{
  return;
}



/* Entry: 1008bba84; end: 1008bbaa3; -[SCCameraViewController renderAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bba84(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112762504);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008bbaa4; end: 1008bbaab; -[SCCameraViewfinderRenderAgentImpl attachRenderLayerIfNeeded] */

void FUN_1008bbaa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setupRenderModule_112667ee8);
  return;
}



/* Entry: 1008bbaac; end: 1008bbadf; -[SCCameraViewfinderMetalRenderer setupRenderModule] */

void FUN_1008bbaac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c4a080();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf55e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createDisplayLayer_1125b3138);
    return;
  }
  return;
}



/* Entry: 1008bbae0; end: 1008bbaeb; -[SCCameraViewfinderMetalRenderer isMetalLibLoaded] */

byte FUN_1008bbae0(long param_1)

{
  return *(byte *)(param_1 + 0x80) & 1;
}



/* Entry: 1008bbaec; end: 1008bbb57; -[SCCameraViewfinderMetalRenderer createDisplayLayer] */

void FUN_1008bbaec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d4250;
  func_0x000107c4ce54();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c573d4(*(undefined8 *)(param_1 + 0x88));
  func_0x000107c54ba4(*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1008bbb58; end: 1008bbb73; +[SCMetal metalLayer] */

void FUN_1008bbb58(void)

{
  func_0x000107c61160(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008bbb74; end: 1008bbb7f;  */

void FUN_1008bbb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008bbb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1008bbb80; end: 1008bbbdb;  */

/* WARNING: Possible PIC construction at 0x0001008bbbc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008bbbcc) */

void FUN_1008bbb80(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3ae0c(param_1);
    func_0x000107c4db98(*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008bbbdc; end: 1008bbbe3; -[SCCameraViewfinderRenderAgentImpl _attachRenderTargetToLayer:] */

void FUN_1008bbbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setRenderLayer__112658430);
  return;
}



/* Entry: 1008bbbe4; end: 1008bbc97; -[SCCameraViewfinderRenderTargetImpl setRenderLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bbbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar2 = (long)_DAT_112720b9c;
  lVar3 = *(long *)(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720b90);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c49770(uVar1);
  }
  else {
    func_0x000107c50170(uVar1);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c53fcc(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beda770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayout_112594380);
  return;
}



/* Entry: 1008bbc98; end: 1008bbd1b; -[SCCameraViewfinderLayerActionsForwarder actionForLayer:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bbc98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112720b8c;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  param_1 = param_1 + lVar1;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cfb8();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008bbd1c; end: 1008bbd33;  */

void FUN_1008bbd1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008bbd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1008bbd34; end: 1008bbdc7;  */

/* WARNING: Possible PIC construction at 0x0001008bbd8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008bbd90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bbd34(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743940);
    func_0x000107c61174(param_2);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3d818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1008bbdc8; end: 1008bbe5b; -[_TtC38SCCameraHardwareOwnershipRequesterImpl37CameraHardwareOwnershipRequesterToken dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bbdc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_112da0658;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c61174();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112da0698);
    func_0x000107c61174(param_1);
    func_0x000107c50404(uVar2);
    func_0x000107c615e8();
  }
  FUN_10087d008();
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1008bbe5c; end: 1008bbe83; +[SCStateOrchestrator mapResolvedState:whenRemovingState:] */

void FUN_1008bbe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1008bbe84; end: 1008bbe93; -[_TtC38SCCameraHardwareOwnershipRequesterImpl37CameraHardwareOwnershipRequesterToken .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008bbe84(long param_1)

{
  param_1 = param_1 + _DAT_112da0658;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1008bbe94; end: 1008bbeb7;  */

undefined8 FUN_1008bbe94(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1008bbeb8; end: 1008bbee3; -[SCStateRequesterPair .cxx_destruct] */

void FUN_1008bbeb8(long param_1)

{
  func_0x000107c61120(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008bbee4; end: 1008bbef3;  */

void FUN_1008bbee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1008bbef4; end: 1008bbf03; -[SCContainerViewControllerView presentationContextForPresenting:usingStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bbef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c7d8),
             PTR_s_presentationContextForPresenting_1126216f8);
  return;
}


