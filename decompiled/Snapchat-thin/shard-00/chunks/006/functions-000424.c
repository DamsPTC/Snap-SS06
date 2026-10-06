/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008c4f88; end: 1008c5013; -[SCCameraViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4f88(long param_1)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8378;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  func_0x000107c4e5c8(*(undefined8 *)(param_1 + _DAT_1127624cc));
  func_0x000107c3b13c(param_1);
  if (*(char *)(param_1 + _DAT_112762594) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112762594) = 0;
    func_0x000107c3b624(param_1);
  }
  return;
}



/* Entry: 1008c5014; end: 1008c55d3; -[SCCameraViewControllerStartupWorkflow performViewDidAppear:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c5014(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  func_0x000107c52814(lVar1);
  func_0x000107c3c234(param_1);
  lVar3 = lVar2;
  func_0x000107c3f300();
  if (lVar3 == 10) {
    lVar3 = lVar1;
    func_0x000107c3f16c(lVar1);
    func_0x000107c61180();
    func_0x000107c5050c();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5bad8(param_1);
  func_0x000107c569e4(param_1);
  func_0x000107c5cb64(param_3);
  lVar3 = param_3;
  func_0x000107c4d508(param_3);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c40534();
  if (lVar3 != 1) {
    func_0x000107c6071c();
    func_0x000107c530bc(lVar1);
  }
  if ((*(byte *)(param_1 + _DAT_1127626ec) & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_1127626b4);
    func_0x000107c49a34();
    if ((uVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x000107c3f128(param_3);
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c4b14c();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c4b430();
      func_0x000107c61180();
      func_0x000107c506a0();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
    }
  }
  lVar3 = param_3;
  func_0x000107c3f284();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c519ac();
  func_0x0001005d3b6c();
  func_0x000107c61170(lVar3);
  if (lVar5 == 1) {
    lVar3 = param_3;
    func_0x000107c3f284();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c501c8();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      func_0x000107c61144(auStack_68,param_3);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      puStack_80 = &UNK_10700af70;
      puStack_78 = &UNK_1108434b0;
      func_0x000107c6111c(auStack_70,auStack_68);
      ppuVar8 = &puStack_90;
      func_0x000107c61184(ppuVar8);
      lVar3 = param_3;
      func_0x000107c3f284(param_3);
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c501c8();
      func_0x000107c61180();
      func_0x000107c40178();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(ppuVar8);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
      goto LAB_1008c53fc;
    }
  }
  func_0x000107c61144(auStack_68,param_3);
  puVar9 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae960;
  puVar10 = PTR_PTR_1126c82e8;
  func_0x000107c5e100(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar11);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c5e070(puVar9);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_68);
LAB_1008c53fc:
  lVar3 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c5b3c0();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c3d834();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  lVar3 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c405ec();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c42e38();
  func_0x000107c61180();
  lVar7 = param_3;
  func_0x000107c5aaf4(param_3);
  func_0x000107c61180();
  func_0x000107c538c0(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  lVar3 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c50898();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c5a110();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c3c380(param_1);
  lVar3 = lVar2;
  func_0x000107c5de88(lVar2);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126bd5f8;
  func_0x000107c5dea8(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(lVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c55d4; end: 1008c5727; -[SCCameraViewControllerStartupWorkflow _recoverCameraFeatures:] */

/* WARNING: Possible PIC construction at 0x0001008c5658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c5684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c56f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c565c) */
/* WARNING: Removing unreachable block (ram,0x0001008c5688) */
/* WARNING: Removing unreachable block (ram,0x0001008c5694) */
/* WARNING: Removing unreachable block (ram,0x0001008c56f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c55d4(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127626b8);
  func_0x000107c3ebd4();
  if (iVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    puStack_60 = &UNK_100c7d92c;
    puStack_58 = &UNK_110841f80;
    func_0x000107c61174(param_3);
    puStack_50 = param_3;
    lStack_48 = param_1;
    if (lRam00000001136c9f88 != -1) {
      FUN_10002a2fc(0x1136c9f88,&puStack_70);
      param_3 = puStack_50;
    }
  }
  else {
    param_3 = *(undefined **)(param_1 + _DAT_1127626b4);
    func_0x000107c3dfc4();
    func_0x000107c61180();
    puVar2 = param_3;
    func_0x000107c3dfc0();
    if ((puVar2 != (undefined *)0x2) ||
       (puVar2 = param_3, func_0x000107c4d668(), puVar2 == (undefined *)0x0)) {
      param_3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c61180();
      func_0x000107c3dfc0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c5728; end: 1008c588b; -[SCCameraViewControllerStartupWorkflow _recoverCameraFeaturesWhenApplicationBecomesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c5728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  lVar5 = (long)_DAT_1127626c8;
  if (*(long *)(param_1 + lVar5) == 0) {
    func_0x000107c61144(auStack_48,param_1);
    func_0x000107c61144(auStack_50,param_3);
    uVar1 = param_3;
    func_0x000107c3dfac();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c419f0();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_48);
    func_0x000107c6111c(auStack_58,auStack_50);
    uVar3 = uVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_58);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c588c; end: 1008c5b33; -[SCCameraViewControllerStartupWorkflow startHandlingVolumeButtonEventsIfNeeded:] */

void FUN_1008c588c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f084();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5e030();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c3f59c();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if ((int)uVar6 == 0) {
    func_0x000107c61144(auStack_88,param_1);
    func_0x000107c61144(auStack_90,param_3);
    puVar7 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126ae960;
    puVar8 = PTR_PTR_1126c82e8;
    func_0x000107c44674(PTR_PTR_1126c82e8);
    func_0x000107c61180();
    func_0x000107c3f044(puVar9);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c6111c(auStack_a0,auStack_90);
    func_0x000107c6111c(auStack_98,auStack_88);
    func_0x000107c5e08c(puVar7);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_10700b820;
    puStack_68 = &UNK_110841f80;
    uStack_60 = param_1;
    func_0x000107c61174(param_3);
    uStack_58 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_80);
    func_0x000107c61170(uStack_58);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c5b34; end: 1008c5b63;  */

void FUN_1008c5b34(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9c78);
  func_0x000107c45db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008c5b64; end: 1008c5c07; -[SCCameraVolumeButtonCaptureConfigurationImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1008c5b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e89c0;
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



/* Entry: 1008c5c08; end: 1008c5c7b; -[SCCameraVolumeButtonCaptureConfigurationImpl captureEventHandlerEnabledOnStartup] */

undefined1 FUN_1008c5c08(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008c5c7c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc6c8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc6c8,&puStack_38);
  }
  return uRam00000001136bc6c0;
}



/* Entry: 1008c5c7c; end: 1008c5cbb;  */

void FUN_1008c5c7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4301c();
  uRam00000001136bc6c0 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c5cbc; end: 1008c5cd3; -[SCCameraCircumstanceEngineImpl fetchCaptureEventHandlerEnabledOnStartup] */

void FUN_1008c5cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5298,0,0);
  return;
}



/* Entry: 1008c5cd4; end: 1008c5cdb; +[SCAttributedCameraTask handleVolumeButtonEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c5cd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 9;
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



/* Entry: 1008c5cdc; end: 1008c5dbf; -[SCCameraViewControllerStartupWorkflow setNavigationItemsHidden:hidden:includingAlwaysShowItems:withOffset:] */

/* WARNING: Possible PIC construction at 0x0001008c5d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c5d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c5d60) */
/* WARNING: Removing unreachable block (ram,0x0001008c5d9c) */

void FUN_1008c5cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c569e0((double)(param_4 ^ 1),param_1,param_2,param_3);
  uVar1 = 0x4039000000000000;
  if ((param_4 & param_6) == 0) {
    uVar1 = 0;
  }
  func_0x000107c3c584(uVar1,param_1,param_2,param_3);
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c5dc0; end: 1008c5e57; -[SCCameraViewControllerStartupWorkflow setNavigationItemsAlpha:alpha:] */

/* WARNING: Possible PIC construction at 0x0001008c5e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c5e38) */

void FUN_1008c5dc0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x000107c5bcc0(param_4);
  func_0x000107c61180();
  func_0x000107c4e190();
  if (dVar1 != param_1) {
    func_0x000107c57154(param_1,param_4);
    func_0x000107c3f16c(param_4);
    func_0x000107c61180();
    func_0x000107c4b2c8();
    func_0x000107c61180();
    func_0x000107c526c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008c5e58; end: 1008c5e5f; -[SCCameraViewControllerInternalState overlayItemsAlpha] */

undefined8 FUN_1008c5e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1008c5e60; end: 1008c5f1b; -[SCCameraViewControllerStartupWorkflow _setNavigationItemsYOffset:offset:] */

void FUN_1008c5e60(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x000107c5bcc0(param_4);
  func_0x000107c61180();
  func_0x000107c4e194();
  if (dVar3 != param_1) {
    func_0x000107c57158(param_1,param_4);
    uVar1 = param_4;
    func_0x000107c3f16c(param_4);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4b2c8();
    func_0x000107c61180();
    func_0x000107c5a03c();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1008c5f1c; end: 1008c5f23; -[SCCameraViewControllerInternalState overlayItemsYOffset] */

undefined8 FUN_1008c5f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1008c5f24; end: 1008c5fa3; -[SCCameraVerticalToolbar setAllItemsHidden:includingAlwaysShowItems:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c5f24(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c7808;
    func_0x000107c610f4(PTR_PTR_1126c7808);
    func_0x000107c4954c();
  }
  func_0x000107c3c33c(param_1,param_2,puVar1,param_5,0,*(undefined8 *)(param_1 + _DAT_112742b30),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008c5fa4; end: 1008c60c7; -[SCCameraVerticalToolbar _requestOrchestratorStateChangeWithState:animated:didSelectionChange:requester:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c5fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126c7938;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46580();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742b38);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1008c62d8;
  puStack_60 = &UNK_110842508;
  uStack_58 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c5040c(uVar2,param_2,param_3,puVar1,param_6,&puStack_78);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1008c60c8; end: 1008c612b; -[SCCameraToolbarUIVisibilityTransitionInfo initWithDidSelectionChange:isAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c60c8(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_113038690) = param_3;
  *(undefined1 *)(param_1 + _DAT_113038698) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008c612c; end: 1008c61df; -[SCTransitionableStateOrchestrator requestStateChange:transitionInfo:requester:completion:] */

/* WARNING: Possible PIC construction at 0x0001008c6198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c61bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c619c) */
/* WARNING: Removing unreachable block (ram,0x0001008c61c0) */

void FUN_1008c612c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7810;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c489bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008c61e0; end: 1008c6217; +[SCTransitionableStateOrchestrator shouldRemoveState:] */

bool FUN_1008c61e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  func_0x000107c61170();
  return param_3 == 0;
}



/* Entry: 1008c6218; end: 1008c62c3; +[SCTransitionableStateOrchestrator mapResolvedState:whenRemovingState:] */

void FUN_1008c6218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7810;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = param_4;
  func_0x000107c5cf4c(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c489bc(puVar1,param_2,uVar2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008c62c4; end: 1008c62eb;  */

void FUN_1008c62c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008c62d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008c62ec; end: 1008c631f; -[SCMainCameraViewController toggleCameraButtonsVisibility:animated:] */

void FUN_1008c62ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8338;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_toggleCameraButtonsVisibility_an_11267a3e0);
  return;
}



/* Entry: 1008c6320; end: 1008c645f; -[SCCameraViewController toggleCameraButtonsVisibility:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008c6320(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127624bc;
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x000107c4c234();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4b570();
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x000107c4b064();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c3e110();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3f16c(uVar4);
  func_0x000107c61180();
  func_0x000107c52614(0x3fd3333333333333);
  func_0x000107c61170(uVar4);
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c5cb60();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c550dc(0x3fd3333333333333);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 1008c6460; end: 1008c6467; -[SCCameraViewControllerInternalState managedCapturerState] */

undefined8 FUN_1008c6460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1008c6468; end: 1008c6477; -[SCCameraOverlayView setAllButtonsHidden:animated:duration:] */

void FUN_1008c6468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllButtonsHidden_cameraButton_112637550,param_3,param_3,param_3,
             param_4);
  return;
}



/* Entry: 1008c6478; end: 1008c64e3; -[SCCameraOverlayView setAllButtonsHidden:cameraButtonHidden:backButtonHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c6478(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if ((*(byte *)(param_2 + _DAT_1127628ac) & 1) != 0) {
    return;
  }
  func_0x000107c52118();
                    /* WARNING: Could not recover jumptable at 0x00010c1762f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s_setCameraButtonHidden_backButton_11263b2d8,param_5,param_6,
             param_7);
  return;
}



/* Entry: 1008c64e4; end: 1008c6727; -[SCCameraOverlayView setAccessoryButtonsHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c64e4(undefined8 param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_2 + _DAT_1127628ac) & 1) == 0) {
    if (param_5 == 0) {
      uVar7 = 0;
      if (param_4 == 0) {
        uVar7 = 0x3ff0000000000000;
      }
      lVar4 = (long)_DAT_112762830;
      func_0x000107c526c0(uVar7,*(undefined8 *)(param_2 + lVar4));
      uVar7 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      lVar2 = *(long *)(param_2 + _DAT_1127627fc);
      func_0x000107c61174(lVar2);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_3,&uStack_190,auStack_f8,0x10);
      if (lVar1 != 0) {
        lVar5 = *plStack_180;
        do {
          lVar6 = 0;
          do {
            if (*plStack_180 != lVar5) {
              func_0x000107c61128(lVar2);
            }
            uVar3 = *(undefined8 *)(lStack_188 + lVar6 * 8);
            func_0x000107c3dc40(*(undefined8 *)(param_2 + lVar4));
            func_0x000107c526c0(uVar3);
            func_0x000107c526c0(uVar7,uVar3);
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
          lVar1 = lVar2;
          func_0x000107c4080c(lVar2,param_3,&uStack_190,auStack_f8,0x10);
        } while (lVar1 != 0);
      }
      func_0x000107c61170(lVar2);
    }
    else {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      puStack_118 = &UNK_107014648;
      puStack_110 = &UNK_110845ce0;
      uStack_100 = (undefined1)param_4;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      puStack_140 = &UNK_107014788;
      puStack_138 = &UNK_110841f20;
      lStack_130 = param_2;
      lStack_108 = param_2;
      func_0x000107c3dcd4(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,&puStack_128,
                          &puStack_150);
    }
    lVar2 = (long)_DAT_11276283c;
    lVar1 = param_2 + lVar2;
    func_0x000107c61148(lVar1);
    func_0x000107c4dd28(param_1);
    func_0x000107c61170(lVar1);
    param_2 = param_2 + lVar2;
    func_0x000107c61148(param_2);
    lVar1 = param_2;
    func_0x000107c4b064();
    func_0x000107c61180();
    func_0x000107c55f28();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1008c6728; end: 1008c672b; -[SCCameraViewController onSetHideableViewContainerHidden:animated:duration:] */

void FUN_1008c6728(void)

{
  return;
}



/* Entry: 1008c672c; end: 1008c6767; -[SCCameraViewControllerLensDelegateHandler setLensesCollectionViewScrollEnabled:] */

void FUN_1008c672c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c55f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c6768; end: 1008c677b;  */

void FUN_1008c6768(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008c677c; end: 1008c67d7; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController setLensesCollectionViewScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c677c(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  byte bStack_21;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f705c0);
  bStack_21 = param_3 ^ 1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  FUN_1007d6d78(&bStack_21);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1008c67d8; end: 1008c6973; -[SCCameraOverlayView setCameraButtonHidden:backButtonHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c67d8(undefined8 param_1,long param_2,undefined8 param_3,byte param_4,byte param_5,
                  int param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  byte bStack_88;
  byte bStack_87;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  byte bStack_58;
  byte bStack_57;
  
  if ((*(byte *)(param_2 + _DAT_1127628ac) & 1) == 0) {
    ppuVar5 = &puStack_b0;
    *(byte *)(param_2 + _DAT_112762854) = param_4;
    if ((param_4 & 1) == 0) {
      lVar2 = param_2;
      func_0x000107c3f250(param_2);
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(lVar2);
    }
    if ((param_5 & 1) == 0) {
      lVar2 = param_2;
      func_0x000107c501b4(param_2);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c4500c();
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1008c6aac;
    puStack_68 = &UNK_110854380;
    ppuVar4 = &puStack_80;
    lStack_60 = param_2;
    bStack_58 = param_4;
    bStack_57 = param_5;
    func_0x000107c61184();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1008c6e14;
    puStack_98 = &UNK_110988a28;
    lStack_90 = param_2;
    bStack_88 = param_4;
    bStack_87 = param_5;
    func_0x000107c61184();
    if (param_6 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
      (**(code **)((long)ppuVar5 + 0x10))(ppuVar5,0);
    }
    else {
      func_0x000107c3dcd4(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar4);
  }
  return;
}



/* Entry: 1008c6974; end: 1008c69a7; -[SCCameraTimerImpl setHidden:] */

void FUN_1008c6974(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f83e8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 1008c69a8; end: 1008c6aab; -[SCCameraOverlayView replyCameraBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c69a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + _DAT_1127627ec) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = (long)_DAT_112762890;
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      func_0x000107c61144(auStack_38,param_1);
      puVar1 = PTR_PTR_1126ae720;
      func_0x000107c6111c(auStack_40,auStack_38);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
      lVar3 = *(long *)(param_1 + lVar4);
    }
    func_0x000107c61174(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008c6aac; end: 1008c6b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c6aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762838));
  uVar2 = 0;
  if (*(char *)(param_1 + 0x29) == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762890);
  func_0x000107c4500c(uVar1);
  func_0x000107c61180();
  func_0x000107c526c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c6b30; end: 1008c6bb3; -[SCCameraTimerImpl setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c6b30(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112762974;
  func_0x000107c59ad4(*(undefined8 *)(param_2 + lVar2),param_3,param_1 < 1.0);
  uVar1 = param_2;
  func_0x000107c5abd0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c44e48(*(undefined8 *)(param_2 + lVar2));
  }
  puStack_38 = PTR_PTR_1126f83e8;
  uStack_40 = param_2;
  func_0x000107c61154(param_1,&uStack_40,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1008c6bb4; end: 1008c6d5f; -[SCCameraTimerTooltipManager setSuppressTooltips:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1008c6bb4(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if ((byte)param_1[0x18] != param_3) {
    param_1[0x18] = (char)param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,2);
    func_0x000107c61180();
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c3d798(puVar2);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x000107c61174(puVar2);
    puVar3 = puVar2;
    func_0x000107c4080c(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    if (puVar3 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            func_0x000107c61128(puVar2);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          func_0x000107c526c0((double)(param_3 ^ 1),uVar4);
          if (param_3 == 0) {
            uStack_158 = *(undefined8 *)(puVar1 + 8);
            uStack_160 = *(undefined8 *)puVar1;
            uStack_148 = *(undefined8 *)(puVar1 + 0x18);
            uStack_150 = *(undefined8 *)(puVar1 + 0x10);
            uStack_138 = *(undefined8 *)(puVar1 + 0x28);
            uStack_140 = *(undefined8 *)(puVar1 + 0x20);
          }
          else {
            func_0x000107c6088c(&uStack_160,0x3f847ae147ae147b,0x3f847ae147ae147b);
          }
          uStack_188 = uStack_158;
          uStack_190 = uStack_160;
          uStack_178 = uStack_148;
          uStack_180 = uStack_150;
          uStack_168 = uStack_138;
          uStack_170 = uStack_140;
          func_0x000107c5a03c(uVar4,param_2,&uStack_190);
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar6);
        puVar3 = puVar2;
        func_0x000107c4080c(puVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  func_0x000107c60e78();
  return (undefined *)(ulong)(byte)puVar2[_DAT_112762964];
}



/* Entry: 1008c6d60; end: 1008c6d6f; -[SCCameraTimerImpl shouldDisplayVideoHelp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008c6d60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762964);
}



/* Entry: 1008c6d70; end: 1008c6e13; -[SCCameraTimerTooltipManager hideTakeASnapTooltipAnimated:] */

void FUN_1008c6d70(long param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    puStack_28 = &UNK_10704259c;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_107042604;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x000107c3dcd8(0x3fd999999999999a,0,0x3feccccccccccccd,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,4,&puStack_38,&puStack_60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1008c6e14; end: 1008c6f77;  */

/* WARNING: Possible PIC construction at 0x0001008c6e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c6e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c6f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c6f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c6f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c6f34) */
/* WARNING: Removing unreachable block (ram,0x0001008c6f40) */
/* WARNING: Removing unreachable block (ram,0x000107c506a4) */
/* WARNING: Removing unreachable block (ram,0x00010c13c4c0) */
/* WARNING: Removing unreachable block (ram,0x0001008c6f24) */
/* WARNING: Removing unreachable block (ram,0x0001008c6ea0) */
/* WARNING: Removing unreachable block (ram,0x0001008c6ec4) */
/* WARNING: Removing unreachable block (ram,0x0001008c6f58) */
/* WARNING: Removing unreachable block (ram,0x0001008c6ef4) */
/* WARNING: Removing unreachable block (ram,0x0001008c6e68) */
/* WARNING: Removing unreachable block (ram,0x0001008c6f60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c6e14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + _DAT_112762854) == *(char *)(param_1 + 0x28)) {
    func_0x000107c3f250();
    func_0x000107c61180();
    func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1008c6f78; end: 1008c706f; -[SCCameraViewControllerLensDelegateHandler areLensesActive] */

undefined1 FUN_1008c6f78(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  param_1 = param_1 + 200;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3d1a0();
  func_0x000107c61180();
  func_0x000107c5c320();
  func_0x000107c611b0();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  func_0x000107c60bcc(&uStack_50,8);
  return uVar1;
}



/* Entry: 1008c7070; end: 1008c7087; -[SCFeatureToggleCameraButtonImpl setHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c7070(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127417c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setToggleButtonHidden_animated__112587bc0)
    ;
    return;
  }
  return;
}



/* Entry: 1008c7088; end: 1008c72af; -[SCFeatureToggleCameraButtonImpl _setToggleButtonHidden:animated:] */

/* WARNING: Possible PIC construction at 0x0001008c721c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c71b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c7220) */
/* WARNING: Removing unreachable block (ram,0x0001008c723c) */
/* WARNING: Removing unreachable block (ram,0x0001008c7240) */
/* WARNING: Removing unreachable block (ram,0x0001008c71bc) */
/* WARNING: Removing unreachable block (ram,0x0001008c71c0) */
/* WARNING: Removing unreachable block (ram,0x0001008c728c) */
/* WARNING: Removing unreachable block (ram,0x0001008c71e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c7290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c7088(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1;
  func_0x000107c3bae8();
  if ((int)lVar3 == 0) {
    lVar3 = param_1;
    func_0x000107c3b958();
    if ((int)lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112741794);
      func_0x000107c42e38(uVar4);
      func_0x000107c61180();
      func_0x000107c49ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
    lVar3 = (long)_DAT_1127417c4;
    func_0x000107c526c0(0,*(undefined8 *)(param_1 + lVar3));
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    uVar2 = 1;
code_r0x000107c550d8:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setHidden__1126479f8,uVar2);
    return;
  }
  lVar3 = (long)_DAT_1127417c4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x000107c49eac();
  if (param_3 != iVar1) {
    if (param_3 == 0) {
      if (*(char *)(param_1 + _DAT_1127417c8) == '\x01') {
        func_0x000107c526c0(0,*(undefined8 *)(param_1 + lVar3));
        uVar4 = *(undefined8 *)(param_1 + lVar3);
        uVar2 = 0;
        goto code_r0x000107c550d8;
      }
    }
    else {
      uVar4 = 0x3fd3333333333333;
      if (param_4 == 0) {
        uVar4 = 0;
      }
      func_0x000107c3dcd0(uVar4,PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
  return;
}



/* Entry: 1008c72b0; end: 1008c72db; -[SCFeatureToggleCameraButtonImpl _hasSingleLensCameraContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1008c72b0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127417d8);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x000107c40808();
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 1008c72dc; end: 1008c734b;  */

void FUN_1008c72dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c51d44(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008c734c; end: 1008c735b; -[SCFeatureSelfieSettingsImpl isEditingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008c734c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741308);
}



/* Entry: 1008c735c; end: 1008c7363; +[SCAttributedCameraTask warmupPreviewStartupWorkflowOnIdle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c735c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 7;
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



/* Entry: 1008c7364; end: 1008c736b; -[SCMutablePublicCameraFeatureCatalog snapReply] */

undefined8 FUN_1008c7364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 1008c736c; end: 1008c73b3;  */

long FUN_1008c736c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3c724(param_1);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1008c73b4; end: 1008c750b; -[SCCameraCoreFeatureProviderPluginWorkflow _shouldConfigureSnapMeQuickSticker] */

undefined8 FUN_1008c73b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c519ac();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4f848();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      func_0x000107c4c5d0(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x2c0);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      uVar2 = uVar3;
      func_0x000107c40c94();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar2;
      if (*(char *)(puStack_48 + 3) == '\x01') {
        func_0x000107c4a4a0(uVar2);
      }
      else {
        func_0x000107c4a49c(uVar2);
      }
      func_0x000107c61170(uVar2);
      func_0x000107c60bcc(&uStack_50,8);
    }
    func_0x000107c61170(lVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1008c750c; end: 1008c75a7; -[SCLazyLoadingProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c750c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112796a2c);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (lRam00000001137fe2d8 != -1) {
      FUN_10002a2fc(0x1137fe2d8,&PTR___NSConcreteGlobalBlock_110d9ed10);
    }
    lVar2 = lRam00000001137fe2e0;
    func_0x000107c61174(lRam00000001137fe2e0);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4ce68(lVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008c75a8; end: 1008c75e3;  */

void FUN_1008c75a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMethodSignature_1126ddd48;
  func_0x000107c5b014(PTR__OBJC_CLASS___NSMethodSignature_1126ddd48,param_2,&DAT_10f7412b2);
  func_0x000107c61180();
  uVar1 = puRam00000001137fe2e0;
  puRam00000001137fe2e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c75e4; end: 1008c7643; -[SCLazyLoadingProxy forwardInvocation:] */

/* WARNING: Possible PIC construction at 0x0001008c7630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c7634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c75e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112796a2c);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c49954(param_3,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008c7644; end: 1008c7653; -[SCCameraViewController shortcutContextAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008c7644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762640);
}



/* Entry: 1008c7654; end: 1008c769b;  */

long FUN_1008c7654(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3b178(param_1);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1008c769c; end: 1008c7737; -[SCCameraCoreFeatureProviderPluginWorkflow _contextShortcutEnabled] */

bool FUN_1008c769c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b5b68;
  func_0x000107c42708(PTR_PTR_1126b5b68,param_2,*(undefined8 *)(param_1 + 0x1f0));
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c41e70();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c426e0();
    if ((int)uVar5 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(param_1 + 0x108) != 0;
    }
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    bVar1 = *(long *)(param_1 + 0x108) != 0;
  }
  return bVar1;
}



/* Entry: 1008c7738; end: 1008c77af; +[SCCameraContextShortcutConfigurationExperiment enabledWithAppStartExperimentReader:] */

undefined8 FUN_1008c7738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0eeb50);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1008c77b0; end: 1008c77b7; -[SCCameraConfigurationImpl directorModeConfig] */

undefined8 FUN_1008c77b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1008c77b8; end: 1008c77e7;  */

void FUN_1008c77b8(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9bd0);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008c77e8; end: 1008c785f; -[SCCameraDirectorModeCOFConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1008c77e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e88e8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008c7860; end: 1008c7867; -[SCCameraDirectorModeCOFConfigurationImpl enabled] */

undefined8 FUN_1008c7860(void)

{
  return 1;
}



/* Entry: 1008c7868; end: 1008c7aaf;  */

void FUN_1008c7868(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c7ab8;
    func_0x000107c610f4();
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3f300();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4c168(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4(uVar6);
    func_0x000107c61180();
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    uVar11 = *(undefined8 *)(lVar1 + 0x108);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1008c7ab0;
    puStack_88 = &UNK_11084e7d0;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar13);
    ppuVar7 = &puStack_a0;
    uStack_80 = uVar13;
    FUN_1008c7ab0();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar1 + 400);
    func_0x000107c4ac68();
    func_0x000107c61180();
    puStack_c8 = puVar12;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1008c7b8c;
    puStack_b0 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar14);
    ppuVar8 = &puStack_c8;
    uStack_a8 = uVar14;
    FUN_1008c7b8c();
    func_0x000107c61180();
    puStack_f0 = puVar12;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1008c7c68;
    puStack_d8 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar14);
    ppuVar9 = &puStack_f0;
    uStack_d0 = uVar14;
    FUN_1008c7c68();
    func_0x000107c61180();
    func_0x000107c45ba4(puVar2,param_2,uVar10,uVar3,uVar4,uVar5,uVar6,uVar11,ppuVar7,uVar13,ppuVar8,
                        ppuVar9,*(undefined8 *)(lVar1 + 0xc0),*(undefined8 *)(lVar1 + 0x38),
                        *(undefined8 *)(lVar1 + 0x1f0));
    puVar12 = puVar2;
    func_0x000107c4b6f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1008c7ab0; end: 1008c7b8b;  */

void FUN_1008c7ab0(long param_1)

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



/* Entry: 1008c7b8c; end: 1008c7c67;  */

void FUN_1008c7b8c(long param_1)

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



/* Entry: 1008c7c68; end: 1008c7d43;  */

void FUN_1008c7c68(long param_1)

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



/* Entry: 1008c7d44; end: 1008c801f; -[SCCameraContextShortcutFeatureInitializer initWithCameraConfiguration:cameraViewType:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:cameraHardwareResource:lensUnlockServices:musicFeature:lensCarouselManager:directorModeFeature:batchCaptureFeature:valdiRuntimeProvider:cameraFeatureLoggingServices:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008c7d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126eff10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740e4c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740e50) = param_4;
    lVar3 = (long)_DAT_112740e54;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e58;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e5c;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e60;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e64;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e68;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e6c;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e70;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e74;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740e78;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740e7c,param_15);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008c8020; end: 1008c80c7; -[SCCameraContextShortcutFeatureInitializer enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008c8020(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b5b68;
  lVar1 = param_1 + _DAT_112740e7c;
  func_0x000107c61148(lVar1);
  func_0x000107c42708(puVar2,param_2,lVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740e4c);
    func_0x000107c41e70(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c426e0();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    uVar5 = 1;
  }
  func_0x000107c61170(lVar1);
  return uVar5;
}



/* Entry: 1008c80c8; end: 1008c81b7; -[SCCameraContextShortcutFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c80c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c8650;
  func_0x000107c610f4(PTR_PTR_1126c8650);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740e4c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112740e50);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740e54);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112740e58);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112740e5c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740e60);
  func_0x000107c5ce38(uVar2);
  func_0x000107c61180();
  func_0x000107c45ba8(puVar1,param_2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar2,
                      *(undefined8 *)(param_1 + _DAT_112740e64),
                      *(undefined8 *)(param_1 + _DAT_112740e68),
                      *(undefined8 *)(param_1 + _DAT_112740e6c),
                      *(undefined8 *)(param_1 + _DAT_112740e70),
                      *(undefined8 *)(param_1 + _DAT_112740e74),
                      *(undefined8 *)(param_1 + _DAT_112740e78));
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008c81b8; end: 1008c8443; -[SCFeatureContextShortcutImpl initWithCameraConfiguration:cameraViewType:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleObservable:cameraHardwareResource:lensUnlocker:musicFeature:lensCarouselManager:directorModeFeature:batchCaptureFeature:valdiRuntimeProvider:cameraFeatureLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008c81b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126efe10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740608;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274060c) = param_4;
    lVar3 = (long)_DAT_112740610;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740614;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740618;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11274061c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740620;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740624;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740628;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11274062c,param_13);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740630,param_14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740634) = 0x51;
    func_0x000107c3c9fc(puVar1);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008c8444; end: 1008c868b; -[SCFeatureContextShortcutImpl _subscribeToObservablesWithBatchCaptureFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c8444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  lVar6 = (long)_DAT_112740684;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_58,param_1);
    if (*(long *)(param_1 + _DAT_11274060c) == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112740614);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1008c868c;
      puStack_68 = &UNK_11090b470;
      puVar5 = auStack_60;
      func_0x000107c6111c(puVar5,auStack_58);
      func_0x000107c5c320(uVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112740610);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      puStack_98 = &UNK_10614f468;
      puStack_90 = &UNK_11084e590;
      puVar5 = auStack_88;
      func_0x000107c6111c(puVar5,auStack_58);
      func_0x000107c5c320(uVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
    }
    func_0x000107c61170(uVar4);
    func_0x000107c61120(puVar5);
    uVar4 = param_3;
    func_0x000107c42e38(param_3);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c499a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b0,auStack_58);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c868c; end: 1008c8787;  */

void FUN_1008c868c(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1008d177c;
  puStack_60 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7a8(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008c8788; end: 1008c878b;  */

void FUN_1008c8788(void)

{
  return;
}



/* Entry: 1008c878c; end: 1008c87fb;  */

void FUN_1008c878c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3e6cc(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008c87fc; end: 1008c8937; -[SCCameraContextShortcutFeatureInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008c882c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c884c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c886c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c888c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c88ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c8890) */
/* WARNING: Removing unreachable block (ram,0x0001008c8870) */
/* WARNING: Removing unreachable block (ram,0x0001008c8850) */
/* WARNING: Removing unreachable block (ram,0x0001008c8830) */
/* WARNING: Removing unreachable block (ram,0x0001008c88b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c87fc(long param_1)

{
  func_0x000107c61120(param_1 + _DAT_112740e7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740e78,0);
  return;
}



/* Entry: 1008c8938; end: 1008c894b; -[SCFeatureContextShortcutImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c8938(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740640,param_3);
  return;
}



/* Entry: 1008c894c; end: 1008c8a33; -[SCFeatureContextShortcutImpl configureWithView:] */

/* WARNING: Possible PIC construction at 0x0001008c89dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c8a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c89e0) */
/* WARNING: Removing unreachable block (ram,0x0001008c89e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c89f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c894c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112740650);
  func_0x000107c61174(lVar2);
  func_0x000107c3ba7c(param_1);
  func_0x000107c611a0(param_1 + _DAT_112740654,param_3);
  lVar1 = param_1;
  func_0x000107c3c808();
  *(char *)(param_1 + _DAT_112740658) = (char)lVar1;
  if (lVar2 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c44dd8(param_3);
    func_0x000107c61180();
    func_0x000107c5c42c(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c8a34; end: 1008c8a93; -[SCFeatureContextShortcutImpl _invalidateToastLayout] */

/* WARNING: Possible PIC construction at 0x0001008c8a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c8a68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c8a34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740648;
  func_0x000107c498f8(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c8a94; end: 1008c8afb; -[SCFeatureContextShortcutImpl _shouldUseRuntimeViewfinderGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008c8a94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740608);
  func_0x000107c5b038(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c509bc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 1008c8afc; end: 1008c8beb; -[SCFeatureContextShortcutImpl setContextAction:] */

/* WARNING: Possible PIC construction at 0x0001008c8b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c8b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c8bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c8b64) */
/* WARNING: Removing unreachable block (ram,0x0001008c8b94) */
/* WARNING: Removing unreachable block (ram,0x0001008c8b68) */
/* WARNING: Removing unreachable block (ram,0x0001008c8bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c8afc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if ((*(byte *)(param_1 + _DAT_112740638) & 1) == 0) {
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274063c);
      *(undefined8 *)(param_1 + _DAT_11274063c) = 0;
      func_0x000107c61170(uVar1);
    }
    else {
      func_0x000107c3f20c(PTR_PTR_1126c8530,param_2,param_3);
      func_0x000107c61180();
      func_0x000107c5aaf8(param_3);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c8bec; end: 1008c8c8f; -[SCCameraViewControllerStartupWorkflow _resetScreenshotObserver:] */

/* WARNING: Possible PIC construction at 0x0001008c8c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c8c78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c8c48) */
/* WARNING: Removing unreachable block (ram,0x0001008c8c7c) */

void FUN_1008c8bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61174(param_3);
  func_0x000107c41570(puVar1);
  func_0x000107c61180();
  func_0x000107c4ffac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008c8c90; end: 1008c8cc7;  */

void FUN_1008c8c90(void)

{
  return;
}



/* Entry: 1008c8cc8; end: 1008c8cf3;  */

void FUN_1008c8cc8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b3c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008c8cf4; end: 1008c9037; -[SCLensProcessingCameraEventsEntryPoint _createViewportWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c8cf4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126c8f00;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_1127436fc;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3f290();
  func_0x000107c61180();
  lVar16 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar16;
  func_0x000107c403cc();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3f250();
  func_0x000107c61180();
  func_0x000107c4962c();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61144(auStack_68,param_1);
  lVar16 = (long)_DAT_1127436d8;
  lVar2 = param_1 + lVar16;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4b364();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4b398();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x000107c61174(lVar4);
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c408f0();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126c8f08;
  func_0x000107c610f4();
  lVar2 = param_1 + lVar16;
  func_0x000107c61148();
  lVar5 = lVar2;
  func_0x000107c4b364();
  func_0x000107c61180();
  lVar8 = lVar5;
  func_0x000107c4afac(lVar5);
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5dfa0();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112743700;
  func_0x000107c61148(lVar3);
  lVar10 = lVar3;
  func_0x000107c5df74();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c500f8();
  func_0x000107c61180();
  lVar16 = param_1 + lVar16;
  func_0x000107c61148(lVar16);
  lVar12 = lVar16;
  func_0x000107c4b364();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c4e600();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4953c();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112743704);
  *(undefined **)(param_1 + _DAT_112743704) = puVar7;
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1008c9038; end: 1008c9103; -[SCCameraUIScopeViewContainerImpl containerViewImmediateValue] */

void FUN_1008c9038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1008094dc;
  pcStack_30 = FUN_100809520;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1008c9104;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008c9104; end: 1008c9137;  */

void FUN_1008c9104(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c9138; end: 1008c91ab; -[SCLensProcessingCaptureButtonRectProvider initWithСaptureButton:] */

undefined1 * FUN_1008c9138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f07d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008c91ac; end: 1008c91b3; -[SCLensProcessingComponentsFacade viewportProvider] */

undefined8 FUN_1008c91ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008c91b4; end: 1008c91c3; -[_TtC39ConditionalCameraServicesImplementation39CameraUIViewfinderServiceImplementation viewfinderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c91b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ef40c8));
  return;
}



/* Entry: 1008c91c4; end: 1008c9577; -[SCLensProcessingCameraViewportWorkflow initWithViewportProvider:renderTarget:captureButtonRectProvider:performer:cameraRendereRegionObservable:] */

undefined8 *
FUN_1008c91c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_a8 = PTR_PTR_1126f07d0;
  puVar1 = &uStack_b0;
  uStack_b0 = param_5;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3bbf8(puVar1);
    uVar4 = param_1;
    uVar5 = param_2;
    func_0x000107c3c088(puVar1);
    func_0x000107c61144(auStack_b8,puVar1);
    uVar2 = param_7;
    func_0x000107c49bc8();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar2 == 0) {
      func_0x000107c61174(param_10);
      uStack_178 = param_1;
      uStack_170 = param_2;
      uStack_168 = param_3;
      uStack_160 = param_4;
      uStack_158 = uVar4;
      uStack_150 = uVar5;
      func_0x000107c6111c(auStack_180,auStack_b8);
      func_0x000107c61174(param_8);
      func_0x000107c61174(param_9);
      func_0x000107c4db94(param_7);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_8);
      func_0x000107c61120(auStack_180);
      uVar2 = param_10;
    }
    else {
      uVar2 = puVar1[2];
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      puStack_100 = &UNK_106214fd0;
      puStack_f8 = &UNK_1108700e8;
      func_0x000107c61174(param_7);
      uStack_f0 = param_7;
      uStack_e8 = param_1;
      uStack_e0 = param_2;
      uStack_d8 = param_3;
      uStack_d0 = param_4;
      uStack_c8 = uVar4;
      uStack_c0 = uVar5;
      func_0x000107c4e524(uVar2);
      FUN_100078e94();
      func_0x000107c61180();
      puStack_148 = puVar3;
      uStack_140 = 0xc2000000;
      puStack_138 = &UNK_106215070;
      puStack_130 = &UNK_110848218;
      func_0x000107c6111c(auStack_118,auStack_b8);
      func_0x000107c61174(param_8);
      uStack_128 = param_8;
      func_0x000107c61174(param_9);
      uStack_120 = param_9;
      func_0x000107c4e524(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uStack_120);
      func_0x000107c61170(uStack_128);
      func_0x000107c61120(auStack_118);
      uVar2 = uStack_f0;
    }
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    func_0x000107c61120(auStack_b8);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  return puVar1;
}



/* Entry: 1008c9578; end: 1008c964f; -[SCLensProcessingCameraViewportWorkflow _layerBoundsForRenderTarget:] */

undefined8
FUN_1008c9578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_7);
  func_0x000107c4abfc(param_7);
  func_0x000107c3ec60(param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51754();
  func_0x000107c61180();
  func_0x000107c4073c(param_1,param_2,param_3,param_4,param_7,param_6,puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1008c9650; end: 1008c96b7;  */

void FUN_1008c9650(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_100456ca0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar2 = puVar1;
  if (param_1 == 0) {
    func_0x000107c43668();
    func_0x000107c61180();
  }
  else {
    func_0x000107c40784();
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008c96b8; end: 1008c9753; -[SCLensProcessingCameraViewportWorkflow _outputResolutionForRenderTargetBounds:] */

undefined1  [16]
FUN_1008c96b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  dVar3 = param_1;
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  auVar4._8_8_ = dVar2 * param_1;
  auVar4._0_8_ = dVar2 * dVar3;
  return auVar4;
}



/* Entry: 1008c9754; end: 1008c9767;  */

void FUN_1008c9754(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1008c9768; end: 1008c9793;  */

void FUN_1008c9768(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3cdd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008c9794; end: 1008c97a7; -[SCFeatureRingFlashImpl _viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c9794(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127411bc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__turnUpScreenBrightnessIfNeeded_112591bb0);
  return;
}



/* Entry: 1008c97a8; end: 1008c9907; -[SCFeatureRingFlashImpl _turnUpScreenBrightnessIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008c97e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c98b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c9860) */
/* WARNING: Removing unreachable block (ram,0x0001008c9878) */
/* WARNING: Removing unreachable block (ram,0x0001008c97ec) */
/* WARNING: Removing unreachable block (ram,0x0001008c97f0) */
/* WARNING: Removing unreachable block (ram,0x0001008c9804) */
/* WARNING: Removing unreachable block (ram,0x0001008c9814) */
/* WARNING: Removing unreachable block (ram,0x0001008c9824) */
/* WARNING: Removing unreachable block (ram,0x0001008c9864) */
/* WARNING: Removing unreachable block (ram,0x0001008c9838) */
/* WARNING: Removing unreachable block (ram,0x0001008c98bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c97a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127411b8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c42670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c9908; end: 1008c9997; -[SCCameraLensNightModeConfigurationImpl enableScreenBrightnessAdjustment] */

uint FUN_1008c9908(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = param_1;
  func_0x000107c3cb04();
  if (lVar1 - 1U < 3) {
    uVar5 = (uint)(lVar1 - 1U) ^ 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c426f4();
    if ((int)uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c42670();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(uVar2);
  }
  return uVar5 & 1;
}



/* Entry: 1008c9998; end: 1008c9a13;  */

void FUN_1008c9998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8), *(char *)(lVar2 + 0x18) == '\x01')) {
    *(undefined1 *)(lVar2 + 0x18) = 0;
    func_0x000107c3c82c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


