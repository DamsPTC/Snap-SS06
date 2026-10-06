/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008c9a14; end: 1008c9a17; -[SCFeatureToggleCameraButtonImpl _viewDidAppear] */

void FUN_1008c9a14(void)

{
  return;
}



/* Entry: 1008c9a18; end: 1008c9a43;  */

void FUN_1008c9a18(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3cdd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008c9a44; end: 1008c9ae7; -[SCFeatureNightModeImpl _viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c9a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112740f68;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740f74);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4c238();
  func_0x000107c61180();
  func_0x000107c5bb2c(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be35ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideWithDelayIfNeeded_11256b198);
  return;
}



/* Entry: 1008c9ae8; end: 1008c9faf; -[SCFeatureNightModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c9ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
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
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_80,param_1);
  lVar6 = (long)_DAT_112740fb8;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740f74);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c508a4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c508a8();
    *(undefined8 *)(param_1 + _DAT_112740fbc) = uVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5bce8();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_100c3d910;
    puStack_90 = &UNK_11090d240;
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c4b5d4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_10617ea88;
    puStack_b8 = &UNK_11090d210;
    func_0x000107c6111c(auStack_b0,auStack_80);
    uVar2 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c41948();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    puStack_e8 = &UNK_100c423bc;
    puStack_e0 = &UNK_11086e3f0;
    func_0x000107c6111c(auStack_d8,auStack_80);
    uVar2 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    puStack_110 = &UNK_100c3c450;
    puStack_108 = &UNK_110872b30;
    func_0x000107c6111c(auStack_100,auStack_80);
    uVar2 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_128,param_1);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    puStack_148 = &UNK_100c6e390;
    puStack_140 = &UNK_110841fb0;
    func_0x000107c6111c(auStack_130,auStack_128);
    func_0x000107c61174(param_4);
    uStack_138 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_158);
    func_0x000107c61170(uStack_138);
    func_0x000107c61120(auStack_130);
    func_0x000107c61120(auStack_128);
    func_0x000107c61120(auStack_100);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c9fb0; end: 1008ca06b; -[SCFeatureNightModeImpl _hideWithDelayIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008ca020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ca024) */
/* WARNING: Removing unreachable block (ram,0x0001008ca038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c9fb0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + (long)_DAT_112740f90) != 0) &&
      (*(char *)(param_1 + (long)_DAT_112740f4c) == '\x01')) &&
     (uVar1 = param_1,
     func_0x000107c3c7d4(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112740f58)),
     (uVar1 & 1) == 0)) {
    lVar2 = param_1 + (long)_DAT_112740f64;
    func_0x000107c61148(lVar2);
    func_0x000107c49cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1008ca06c; end: 1008ca09b; -[SCFeatureNightModeImpl _shouldSuggestNightMode:] */

void FUN_1008ca06c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3b954();
  if ((int)uVar1 != 0) {
    func_0x000107c3ba94(param_1);
  }
  return;
}



/* Entry: 1008ca09c; end: 1008ca14f; -[SCFeatureNightModeImpl _hasNightModeConditions:] */

bool FUN_1008ca09c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  puVar3 = PTR_PTR_1126aff08;
  puVar2 = param_3;
  func_0x000107c4193c(param_3);
  func_0x000107c49a88(puVar3,param_2,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_3;
    func_0x000107c4193c(param_3);
    uVar4 = param_1;
    func_0x000107c3bb18(param_1,param_2,puVar3);
    if ((int)uVar4 != 0) goto LAB_1008ca0f4;
  }
  else {
LAB_1008ca0f4:
    puVar3 = param_3;
    func_0x000107c3e0d8();
    if ((((ulong)puVar3 & 1) == 0) && (func_0x000107c3bb48(), (int)param_1 != 0)) {
      puVar3 = param_3;
      func_0x000107c51b1c(param_3);
      puVar2 = PTR_PTR_1126afed0;
      func_0x000107c4d73c(PTR_PTR_1126afed0);
      bVar1 = puVar3 == puVar2;
      goto LAB_1008ca134;
    }
  }
  bVar1 = false;
LAB_1008ca134:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1008ca150; end: 1008ca15b; -[SCFeatureNightModeImpl _isFrontFacing:] */

void FUN_1008ca150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aff08,PTR_s_isFrontFacing__1125fa9d0);
  return;
}



/* Entry: 1008ca15c; end: 1008ca1ef;  */

void FUN_1008ca15c(long param_1)

{
  undefined **ppuVar1;
  undefined8 *extraout_x8;
  long unaff_x20;
  undefined8 *puVar2;
  long *unaff_x21;
  
  FUN_100699898();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10065cf40(extraout_x8,(long)*(int *)(param_1 + 0x18));
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  FUN_10069cd64(*puVar2);
  for (; puVar2 != (undefined8 *)0x0; puVar2 = puVar2 + -1) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(int *)(*unaff_x21 + 0x1c) == 1) {
      ppuVar1 = *(undefined ***)(*unaff_x21 + 0x10);
    }
    func_0x0001006b78ec(ppuVar1);
    func_0x000108847df0();
    func_0x0001006b78f4();
    unaff_x21 = unaff_x21 + 1;
  }
  return;
}



/* Entry: 1008ca1f0; end: 1008ca23f;  */

void FUN_1008ca1f0(undefined8 param_1)

{
  func_0x000100853300();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1008ca240; end: 1008ca28f;  */

void FUN_1008ca240(undefined8 param_1)

{
  func_0x000100853300();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1008ca290; end: 1008ca2bb;  */

void FUN_1008ca290(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c4dd90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ca2bc; end: 1008ca2bf; -[SCFeatureCameraModeBase onViewDidAppear] */

void FUN_1008ca2bc(void)

{
  return;
}



/* Entry: 1008ca2c0; end: 1008ca337;  */

void FUN_1008ca2c0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c6e604;
  puStack_30 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1008ca338; end: 1008ca33b;  */

void FUN_1008ca338(void)

{
  return;
}



/* Entry: 1008ca33c; end: 1008ca367;  */

void FUN_1008ca33c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3afd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ca368; end: 1008ca4ff; -[SCFeatureToSnappableLoggingImpl _cameraViewDidAppear] */

/* WARNING: Possible PIC construction at 0x0001008ca3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ca434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ca47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ca438) */
/* WARNING: Removing unreachable block (ram,0x0001008ca3c4) */
/* WARNING: Removing unreachable block (ram,0x0001008ca45c) */
/* WARNING: Removing unreachable block (ram,0x0001008ca3c8) */
/* WARNING: Removing unreachable block (ram,0x0001008ca480) */
/* WARNING: Removing unreachable block (ram,0x0001008ca48c) */
/* WARNING: Removing unreachable block (ram,0x0001008ca494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ca368(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c3bb1c();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112741428) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112741418);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c4a6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1008ca500; end: 1008ca593;  */

void FUN_1008ca500(long param_1,undefined1 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1008ca594;
  puStack_38 = &UNK_11084ceb8;
  func_0x000107c6111c(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  FUN_1000d76cc("APPSTORE",&puStack_50);
  func_0x000107c61120(auStack_30);
  return;
}



/* Entry: 1008ca594; end: 1008ca61b;  */

/* WARNING: Possible PIC construction at 0x0001008ca604: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ca594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (long)_DAT_112741414;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      func_0x000107c4e63c(*(undefined8 *)(lVar1 + lVar4));
    }
    uVar5 = *(undefined8 *)(lVar1 + lVar4);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11274141c);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4193c();
    func_0x000107c3f2d8(uVar5,param_2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1008ca61c; end: 1008ca67b; -[SCCameraHardwareServicesAPIImpl devicePosition] */

undefined8 FUN_1008ca61c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4193c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 1008ca67c; end: 1008ca6ab; -[SCCameraToSnappableStabilityMonitorImpl cameraViewDidAppearWithDevicePosition:] */

void FUN_1008ca67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1008ca6ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ca6ac; end: 1008ca6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ca6ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ed6820) = uVar2;
  if (*(long *)(unaff_x20 + _DAT_112ed67d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112ed67d0),PTR_s_handleEvent__1125d1dd0,3);
    return;
  }
  return;
}



/* Entry: 1008ca6e8; end: 1008ca70f; -[SCCameraToSnappableStabilityMonitorImpl uiRendered] */

void FUN_1008ca6e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1008ca710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ca710; end: 1008ca8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ca710(double param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5eea4();
  lVar9 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67f0);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar8 = *puVar1;
    FUN_1000298f0();
    param_3 = auStack_98;
    func_0x000107c61428();
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    FUN_100069b5c(uVar8);
    func_0x000107c61170(uVar5);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  pcVar2 = (code *)auStack_80;
  FUN_1008b81c8();
  lVar6 = 0;
  FUN_1005d3d88();
  puVar7 = param_3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(param_3,1,lVar6);
  if ((int)puVar7 == 0) {
    param_3[*(int *)(lVar6 + 0x5c)] = 1;
    func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar6 + 0x2c));
    (**(code **)(lVar9 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ca8cc);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ca8d0);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ca8d4);
      (*pcVar2)();
    }
    *(long *)(param_3 + *(int *)(lVar6 + 0x34)) = (long)param_1;
  }
  (*pcVar2)(auStack_80,0);
  FUN_1008ca8d4();
  return;
}



/* Entry: 1008ca8d4; end: 1008caa17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ca8d4(void)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long unaff_x20;
  byte *pbVar5;
  long lVar6;
  byte abStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar5 = abStack_60 + -extraout_x8;
  lVar2 = 0;
  FUN_1005d3d88();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112ed67c0;
  lVar4 = (long)pbVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_58,0,0);
  FUN_1008caa18(unaff_x20 + lVar1,pbVar5);
  pbVar3 = pbVar5;
  (**(code **)(lVar6 + 0x30))(pbVar5,1,lVar2);
  if ((int)pbVar3 == 1) {
    FUN_1008b7578(pbVar5);
  }
  else {
    func_0x0001008caa68(pbVar5,lVar4);
    if ((((*(char *)(lVar4 + *(int *)(lVar2 + 0x58)) == '\x01') &&
         (*(char *)(lVar4 + *(int *)(lVar2 + 0x5c)) == '\x01')) &&
        ((*(byte *)(lVar4 + *(int *)(lVar2 + 0x60)) & 1) == 0)) &&
       ((*(byte *)(lVar4 + *(int *)(lVar2 + 100)) & 1) == 0)) {
      func_0x000100c6ae04();
    }
    func_0x0001008caaac(lVar4);
  }
  return;
}



/* Entry: 1008caa18; end: 1008caae7;  */

undefined8 FUN_1008caa18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1008caae8; end: 1008cac43; -[SCCameraViewController _configureSnapBackDismissWindowIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008caae8(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  func_0x000107c5b154();
  if (0.0 < param_1) {
    func_0x000107c6071c();
    *(double *)(param_2 + _DAT_1127624c8) = param_1;
    dVar6 = param_1;
    func_0x000107c5b154(param_2);
    *(double *)(param_2 + _DAT_1127624c4) = param_1 + dVar6;
    uVar1 = *(undefined8 *)(param_2 + _DAT_1127624bc);
    func_0x000107c3f16c(uVar1);
    func_0x000107c61180();
    func_0x000107c5aee4();
    func_0x000107c61170(uVar1);
    lVar5 = param_2;
    func_0x000107c5b150();
    if ((int)lVar5 != 0) {
      lVar5 = param_2;
      func_0x000107c3f0bc(param_2);
      func_0x000107c61180();
      lVar2 = lVar5;
      func_0x000107c42238();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c54514();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
      *(undefined1 *)(param_2 + _DAT_1127625bc) = 1;
    }
    lVar5 = (long)_DAT_1127625c0;
    func_0x000107c498f8(*(undefined8 *)(param_2 + lVar5));
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c5b154(param_2);
    func_0x000107c51930(puVar4,param_3,param_2,PTR_s__clearSnapBackDismissWindow_112555d78,0,0);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar4;
    func_0x000107c61170(uVar1);
    *(undefined8 *)(param_2 + _DAT_1127624c0) = 0xbff0000000000000;
  }
  return;
}



/* Entry: 1008cac44; end: 1008cac53; -[SCCameraViewController snapBackQuickTapDismissTimeout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008cac44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624c0);
}



/* Entry: 1008cac54; end: 1008cacc7; -[SCMainCameraViewController viewDidFullyAppear] */

/* WARNING: Possible PIC construction at 0x0001008caca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008caca8) */

void FUN_1008cac54(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c5bcbc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8d40;
  func_0x000107c61158(PTR_PTR_1126c8d40);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008cacc8; end: 1008cb48f; -[SCMainCameraViewControllerStartupWorkflow performViewDidFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1008cacc8(double param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  ppuVar1 = param_4;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  ppuVar2 = ppuVar1;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  ppuVar4 = ppuVar3;
  func_0x000107c3ddc4();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppuVar1);
  if (((ulong)ppuVar4 & 1) == 0) {
    lVar5 = param_2;
    func_0x000107c44ca0(param_2);
    func_0x000107c61180();
    func_0x000107c55244();
    func_0x000107c61170(lVar5);
    ppuVar1 = param_4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c52814();
    func_0x000107c57c10(param_4);
    ppuVar3 = param_4;
    func_0x000107c3f0bc(param_4);
    func_0x000107c61180();
    ppuVar2 = ppuVar3;
    func_0x000107c4cb08();
    func_0x000107c61180();
    ppuVar4 = ppuVar2;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c4e510();
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(ppuVar3);
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    if ((ABS(param_1) < 2.2250738585072014e-308) ||
       (ABS(param_1) < ABS(param_1 + 0.0) * 2.220446049250313e-16)) {
      ppuVar3 = param_4;
      func_0x000107c4c000(param_4);
      func_0x000107c61180();
      func_0x000107c4ba78();
      func_0x000107c61170(ppuVar3);
      ppuVar3 = param_4;
      func_0x000107c3f0bc(param_4);
      func_0x000107c61180();
      ppuVar2 = ppuVar3;
      func_0x000107c5cb3c();
      func_0x000107c61180();
      ppuVar4 = ppuVar2;
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c3f310();
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(ppuVar2);
      func_0x000107c61170(ppuVar3);
      func_0x000107c61144(auStack_90,param_4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      puStack_b8 = puVar12;
      uStack_b0 = 0xc2000000;
      puStack_a8 = &UNK_106fea638;
      puStack_a0 = &UNK_110849200;
      func_0x000107c6111c(auStack_98,auStack_90);
      func_0x000107c5ba94(param_2);
      func_0x000107c61170(puVar6);
      func_0x000107c61120(auStack_98);
      func_0x000107c61120(auStack_90);
    }
    func_0x000107c6071c();
    func_0x000107c530bc();
    FUN_1008cc2dc();
    func_0x000107c3f224(ppuVar1);
    uVar7 = *(undefined8 *)(param_2 + _DAT_112762398);
    func_0x000107c5c734(uVar7);
    func_0x000107c61180();
    func_0x000107c4ba80();
    func_0x000107c61170(uVar7);
    puVar6 = PTR_PTR_1126b6b20;
    func_0x000107c5a9f0(PTR_PTR_1126b6b20);
    func_0x000107c61180();
    func_0x000107c5cf5c();
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126afdd8;
    func_0x000107c4e2ec(param_4);
    func_0x000107c441b4();
    func_0x000107c61180();
    uVar8 = *(ulong *)(param_2 + _DAT_1127623a8);
    FUN_1008cc9ec();
    if ((uVar8 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + _DAT_11276237c);
      func_0x000107c4e2ec(param_4);
      func_0x000107c5bb50(uVar7);
    }
    puVar9 = PTR_PTR_1126b19f8;
    func_0x000107c3f040();
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar9;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126b7f68;
    func_0x000107c5a9bc(PTR_PTR_1126b7f68);
    func_0x000107c61180();
    func_0x000107c5393c();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c5bac0(param_2);
    puVar9 = PTR_PTR_1126b6b08;
    func_0x000107c5a9bc(PTR_PTR_1126b6b08);
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c4bfac(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61144(auStack_90,param_2);
    puStack_e0 = puVar12;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_106fea704;
    puStack_c8 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_c0,auStack_90);
    ppuVar3 = &puStack_e0;
    func_0x000107c61184();
    func_0x000107c61144(auStack_e8,param_4);
    puVar10 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126c82e8;
    puVar12 = PTR_PTR_1126ae960;
    puVar11 = PTR_PTR_1126d3fc8;
    func_0x000107c5de9c(PTR_PTR_1126d3fc8);
    func_0x000107c61180();
    func_0x000107c4c198(puVar9);
    func_0x000107c61180();
    func_0x000107c3f044(puVar12);
    func_0x000107c61180();
    puVar13 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c6111c(auStack_f8,auStack_e8);
    func_0x000107c6111c(auStack_f0,auStack_90);
    func_0x000107c61174(ppuVar3);
    func_0x000107c5e070(puVar10);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c5bad8(param_2);
    func_0x000107c3c834(param_2);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c4ffac();
    func_0x000107c61170(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar12);
    ppuVar2 = param_4;
    func_0x000107c3f1ac(param_4);
    func_0x000107c61180();
    ppuVar4 = ppuVar2;
    func_0x000107c4c164();
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126d1310;
    func_0x000107c5deb0(PTR_PTR_1126d1310);
    func_0x000107c61180();
    func_0x000107c4d664(ppuVar4);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_f8);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_90);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar1);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_4;
  }
  func_0x000107c60e78();
  func_0x000107c61120(ppuVar3 + 4);
  func_0x000107c61120(auStack_90);
  func_0x000107c60bd8();
  return *(undefined ***)((long)param_4 + (long)_DAT_1127623b4);
}



/* Entry: 1008cb490; end: 1008cb49f; -[SCMainCameraViewControllerStartupWorkflow headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008cb490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127623b4);
}



/* Entry: 1008cb4a0; end: 1008cb4f3; -[SIGHeaderItem setIgnoreRTL:] */

void FUN_1008cb4a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x21) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008cb4f4;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1008cb4f4; end: 1008cb543;  */

void FUN_1008cb4f4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerItem_didChangeIgnoreRTL__1125d57b8);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44cdc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008cb544; end: 1008cb557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cb544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__addConstraintsToButtons__11254f310,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794a50));
  return;
}



/* Entry: 1008cb558; end: 1008cb5ef; -[SCMainCameraViewController setRecordingState:] */

void FUN_1008cb558(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4fac0();
  func_0x000107c61170(lVar1);
  puStack_38 = PTR_PTR_1126f8338;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_setRecordingState__112657e28,param_3);
  if ((param_3 != lVar2) && ((param_3 == 0 || (lVar2 == 0)))) {
    func_0x000107c3c5a0(param_1);
  }
  return;
}



/* Entry: 1008cb5f0; end: 1008cb5f7; -[SCCameraViewControllerInternalState recordingState] */

undefined8 FUN_1008cb5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1008cb5f8; end: 1008cb833; -[SCCameraViewController setRecordingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cb5f8(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar8 = (long)_DAT_1127624bc;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x000107c4fac0();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 != lVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x000107c4fac0();
    func_0x000106fee5a4();
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000106fee5a4();
    func_0x000107c61180();
    func_0x000107c51804(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x000107c4fac0();
    if (lVar2 == param_3) {
      bVar1 = false;
    }
    else {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x000107c4fac0();
      bVar1 = param_3 == 0 || lVar2 == 0;
    }
    uVar5 = param_1;
    func_0x000107c496a0();
    func_0x000107c57c10(*(undefined8 *)(param_1 + lVar8));
    uVar6 = param_1;
    func_0x000107c496a0();
    if (bVar1) {
      uVar7 = param_1;
      func_0x000107c4b064(param_1);
      func_0x000107c61180();
      if (param_3 == 0) {
        func_0x000107c50720();
      }
      else {
        func_0x000107c4e464();
      }
      func_0x000107c61170(uVar7);
    }
    if ((int)uVar5 != (int)uVar6) {
      func_0x000107c61144(auStack_58,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_106ff705c;
      puStack_70 = &UNK_11084ceb8;
      func_0x000107c6111c(auStack_68,auStack_58);
      uStack_60 = (undefined1)uVar6;
      FUN_1000d76cc("APPSTORE",&puStack_88);
      func_0x000107c61120(auStack_68);
      func_0x000107c61120(auStack_58);
    }
    if (((param_3 == 0) && (uVar5 = param_1, func_0x000107c49f04(), (uVar5 & 1) == 0)) &&
       (uVar5 = param_1, func_0x000107c4a220(), (uVar5 & 1) == 0)) {
      lVar2 = (long)_DAT_11276259c;
      uVar5 = param_1 + lVar2;
      func_0x000107c61148();
      uVar6 = uVar5;
      func_0x000107c61164();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) != 0) {
        lVar2 = param_1 + lVar2;
        func_0x000107c61148(lVar2);
        func_0x000107c5cb58();
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1008cb834; end: 1008cb883; -[SCFeatureMemoriesImpl percentPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008cb834(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112762a2c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4e510();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1008cb884; end: 1008cb8c7; -[SCSwipeTransitionCoordinatorImpl percentPresented] */

undefined8 FUN_1008cb884(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x000107c49aa0();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    func_0x000107c4a214(0);
    uVar2 = 0x3ff0000000000000;
    if ((int)param_1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 1008cb8c8; end: 1008cb8cb; -[SCCameraViewController loggingDelegate] */

void FUN_1008cb8c8(void)

{
  return;
}



/* Entry: 1008cb8cc; end: 1008cbaef; -[SCCameraViewController logCameraOpenStart] */

/* WARNING: Possible PIC construction at 0x0001008cb93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cb94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cb988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cb9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cb9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cba60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cbabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cbacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cbac0) */
/* WARNING: Removing unreachable block (ram,0x0001008cba74) */
/* WARNING: Removing unreachable block (ram,0x0001008cba64) */
/* WARNING: Removing unreachable block (ram,0x0001008cb9f4) */
/* WARNING: Removing unreachable block (ram,0x0001008cb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001008cb98c) */
/* WARNING: Removing unreachable block (ram,0x0001008cb950) */
/* WARNING: Removing unreachable block (ram,0x0001008cb940) */
/* WARNING: Removing unreachable block (ram,0x0001008cbad0) */

void FUN_1008cb8cc(undefined8 param_1)

{
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c3f0f8(param_1);
  func_0x000107c61180();
  func_0x000107c3f0fc();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4193c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008cbaf0; end: 1008cbb0f; -[SCCameraViewController cameraOpenLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cbaf0(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112762614);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008cbb10; end: 1008cbb3f;  */

void FUN_1008cbb10(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9cd8);
  func_0x000107c45c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008cbb40; end: 1008cbc6b; -[SCCoreCameraOpenLogger initWithCameraLoggingServices:cameraUserLoggingServices:] */

undefined1 *
FUN_1008cbb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126ef760;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar4);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    puVar2 = PTR_PTR_1126b7008;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008cbc6c; end: 1008cbc73; -[SCCameraViewControllerInternalState previewPresenter] */

undefined8 FUN_1008cbc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1008cbc74; end: 1008cbc7b; -[SCCameraViewControllerInternalState scopedCameraType] */

undefined8 FUN_1008cbc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1008cbc7c; end: 1008cbc8f; -[SCCoreCameraOpenLogger configureWithSnapSource:isBackCamera:isMainCamera:isMultiCam:cameraType:] */

void FUN_1008cbc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  *(undefined1 *)(param_1 + 0x59) = param_4;
  *(undefined1 *)(param_1 + 0x58) = param_5;
  *(undefined1 *)(param_1 + 0x5a) = param_6;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = param_7;
  return;
}



/* Entry: 1008cbc90; end: 1008cbd0b; -[SCCameraViewController frameMonitor] */

void FUN_1008cbc90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3f0f8();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43918();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008cbd0c; end: 1008cbd13; -[SCCameraHardwareResourceImpl frameStabilityMonitor] */

undefined8 FUN_1008cbd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1008cbd14; end: 1008cbd5b; -[SCCameraFrameStabilityMonitorImpl startCameraBeganWithLogger:] */

void FUN_1008cbd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1008cbd5c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008cbd5c; end: 1008cbe3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cbd5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed66a0);
  puVar1 = &UNK_110581de8;
  func_0x000107c613fc(&UNK_110581de8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110581e10;
  func_0x000107c613fc(&UNK_110581e10,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x1008cbe50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000f6b44;
  puStack_48 = &UNK_110581e28;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1008cbe3c; end: 1008cbe57;  */

void FUN_1008cbe3c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1008cbe58; end: 1008cbecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cbe58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ed6688);
    *(undefined8 *)(param_1 + _DAT_112ed6688) = param_2;
    func_0x000107c615e8(uVar1);
    func_0x000107c615f0(param_2);
    func_0x000107c4ba68();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1008cbed0; end: 1008cbee7; -[SCFeatureToSnappableLoggingImpl cameraViewWillStartCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cbed0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112741414) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112741414),PTR_s_cameraViewWillStartCamera_1125a88c8);
    return;
  }
  return;
}



/* Entry: 1008cbee8; end: 1008cbf3f; -[SCCoreCameraOpenLogger logCameraOpenEventStart] */

void FUN_1008cbee8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008cc23c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1008cbf40; end: 1008cbf67; -[SCCameraToSnappableStabilityMonitorImpl cameraViewWillStartCamera] */

void FUN_1008cbf40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1008cbf68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008cbf68; end: 1008cc1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cbf68(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  byte abStack_b0 [8];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  pbVar6 = abStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)pbVar6 - extraout_x8_00;
  lVar3 = 0;
  FUN_1005d3d88();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = _DAT_112ed67c0;
  lVar5 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_88,0,0);
  FUN_1008caa18(unaff_x20 + lVar2,lVar7);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar3);
  if ((int)lVar2 == 1) {
    FUN_1008b7578(lVar7);
  }
  else {
    func_0x0001008caa68(lVar7,lVar5);
    if ((*(byte *)(lVar5 + *(int *)(lVar3 + 0x68)) & 1) == 0) {
      lVar7 = 0x1c;
      FUN_1008b7090(&DAT_112ed67e8,0x1c,0x2d6172656d61633a,0xed00007472617473);
      pcVar4 = (code *)auStack_a8;
      FUN_1008b81c8();
      lVar2 = lVar7;
      (*pcVar10)(lVar7,1,lVar3);
      if ((int)lVar2 == 0) {
        *(undefined1 *)(lVar7 + *(int *)(lVar3 + 0x68)) = 1;
        func_0x000107c5eea0(pbVar6);
        func_0x000107c5ee68(lVar7 + *(int *)(lVar3 + 0x2c));
        (**(code **)(lVar9 + 8))(pbVar6,lVar1);
        param_1 = param_1 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1008cc1bc);
          (*pcVar10)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1008cc1c0);
          (*pcVar10)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1008cc1c4);
          (*pcVar10)();
        }
        *(long *)(lVar7 + *(int *)(lVar3 + 0x40)) = (long)param_1;
      }
      (*pcVar4)(auStack_a8,0);
    }
    func_0x0001008caaac(lVar5);
  }
  return;
}



/* Entry: 1008cc1c4; end: 1008cc1cb;  */

void FUN_1008cc1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008cc1cc; end: 1008cc21b;  */

void FUN_1008cc1cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008cc21c; end: 1008cc23b;  */

undefined * FUN_1008cc21c(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8b288)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008cc23c; end: 1008cc2b3;  */

/* WARNING: Possible PIC construction at 0x0001008cc29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cc2a0) */

void FUN_1008cc23c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  FUN_1008cc21c(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  FUN_1008cc2b4(uVar2);
  func_0x000107c61180();
  FUN_1008e33e8(uVar3,uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1008cc2b4; end: 1008cc2d3;  */

undefined * FUN_1008cc2b4(ulong param_1)

{
  if (param_1 < 0x86) {
    return (&PTR_PTR_110d936b8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008cc2d4; end: 1008cc2db; -[SCCameraViewControllerInternalState setCameraStartTime:] */

void FUN_1008cc2d4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  return;
}



/* Entry: 1008cc2dc; end: 1008cc377;  */

long FUN_1008cc2dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uStack_28;
  uint uStack_24;
  
  if ((bRam0000000113839535 & 1) == 0) {
    func_0x000107c2ba8c();
    lVar1 = lRam0000000113839458;
    if (lRam00000001138394e8 == 0) {
      func_0x000107c6109c(&uStack_28);
      uVar2 = 0;
      if ((ulong)uStack_24 * 1000 != 0) {
        uVar2 = (lVar1 * (ulong)uStack_28) / ((ulong)uStack_24 * 1000);
      }
      lVar1 = uVar2 - param_1;
      lVar3 = -lVar1;
      if (-1 < lVar1) {
        lVar3 = lVar1;
      }
    }
    else {
      lVar3 = 0;
    }
    lVar1 = lRam00000001138394d0;
    if (lRam00000001138394d0 <= lRam00000001138394c0) {
      lVar1 = lRam00000001138394c0;
    }
    return (lVar3 - param_1) + lVar1;
  }
  return 0;
}



/* Entry: 1008cc378; end: 1008cc37f; -[SCCameraViewControllerInternalState cameraStartTime] */

undefined8 FUN_1008cc378(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1008cc380; end: 1008cc3bf;  */

void FUN_1008cc380(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b314();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008cc3c0; end: 1008cc52f; -[SCRegistrationPerformanceLoggerServiceProvider _createRegistrationPerformanceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cc3c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b8898;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112722e24;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112722e28;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_112722e2c;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c41910();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_112722e30;
  func_0x000107c61148(lVar8);
  lVar9 = lVar8;
  func_0x000107c4fd04();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112722e34;
  func_0x000107c61148(param_1);
  lVar10 = param_1;
  func_0x000107c4aa14();
  func_0x000107c61180();
  func_0x000107c49410(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
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



/* Entry: 1008cc530; end: 1008cc53f; -[_TtC32SCRegistrationDeviceInfoServices32SCRegistrationDeviceInfoServices deviceInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cc530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113052a38));
  return;
}



/* Entry: 1008cc540; end: 1008cc547; -[SCRegistrationSessionServices registrationFlowUUIDService] */

undefined8 FUN_1008cc540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008cc548; end: 1008cc66b; -[SCRegistrationPerformanceLoggerImpl initWithUserTrackedLogger:grapheneRegistry:deviceInfoProvider:registrationFlowUUIDService:loginInfoRepository:] */

undefined1 *
FUN_1008cc548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e8258;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008cc66c; end: 1008cc7f3; -[SCRegistrationPerformanceLoggerImpl logCameraStartupTimeIfFromRegistration:] */

/* WARNING: Possible PIC construction at 0x0001008cc700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cc770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cc794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cc7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cc798) */
/* WARNING: Removing unreachable block (ram,0x0001008cc774) */
/* WARNING: Removing unreachable block (ram,0x0001008cc704) */
/* WARNING: Removing unreachable block (ram,0x0001008cc7d4) */

void FUN_1008cc66c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((((0 < *(long *)(param_1 + 0x10)) && (*(long *)(param_1 + 8) != 0)) &&
      (0 < *(long *)(param_1 + 0x18))) &&
     (((*(byte *)(param_1 + 0x21) & 1) == 0 && ((*(byte *)(param_1 + 0x20) & 1) == 0)))) {
    puVar1 = PTR_PTR_1126b7308;
    func_0x000107c61160(PTR_PTR_1126b7308);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c3125c(uVar2);
    func_0x000107c61180();
    func_0x000107c54cdc(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1008cc7f4; end: 1008cc87b; +[SCContextStateHandler sharedInstance] */

void FUN_1008cc7f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1008cc87c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fdff0 != -1) {
    FUN_10002a2fc(0x1137fdff0,&puStack_48);
  }
  uVar1 = uRam00000001137fdff8;
  func_0x000107c61174(uRam00000001137fdff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008cc87c; end: 1008cc8a3;  */

void FUN_1008cc87c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137fdff8;
  uRam00000001137fdff8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008cc8a4; end: 1008cc92b; -[SCContextStateHandler init] */

undefined1 * FUN_1008cc8a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e3f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 8) = 0xffffffffffffffff;
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008cc92c; end: 1008cc9e3; -[SCContextStateHandler transitionToContextState:] */

void FUN_1008cc92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1008cc9e4; end: 1008cc9eb; -[SCCameraViewController pageViewName] */

undefined8 FUN_1008cc9e4(void)

{
  return 0x1f;
}



/* Entry: 1008cc9ec; end: 1008cca37;  */

ulong FUN_1008cc9ec(ulong param_1)

{
  ulong uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1008ccaf0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x0001008ccec8(param_1);
  }
  else {
    uVar1 = 0;
  }
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1008cca38; end: 1008ccaef;  */

void FUN_1008cca38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  lVar1 = lRam00000001137f3f00;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1008ccb2c;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    FUN_10002a2fc(0x1137f3f00,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam00000001137f3f08;
  func_0x000107c61174(uRam00000001137f3f08);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008ccaf0; end: 1008ccb2b;  */

undefined8 FUN_1008ccaf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1008cca38();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c425b4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1008ccb2c; end: 1008ccc7b;  */

void FUN_1008ccb2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x20);
  puVar3 = puVar6;
  func_0x000107c61174();
  FUN_1008ccc7c();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126af7d0;
    func_0x000107c610fc(PTR_PTR_1126af7d0);
    puVar5 = puVar3;
    func_0x000107c41214(puVar3);
    func_0x000107c61180();
    func_0x000107c5a494(puVar4,param_2,puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar5 = puVar6;
    func_0x000107c4f558(puVar6,param_2,&PTR____CFConstantStringClassReference_110f592d8,puVar4,0);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126df720;
    func_0x000107c610f4();
    puVar3 = puVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lStack_48 = 0;
    func_0x000107c4636c(puVar4,param_2,puVar3,&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c61170();
    if (lVar2 == 0) {
      func_0x000107c61174(puVar4);
      puVar3 = puVar4;
    }
    else {
      FUN_1008ccc7c();
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar6);
  uVar1 = puRam00000001137f3f08;
  puRam00000001137f3f08 = puVar3;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1008ccc7c; end: 1008ccd43;  */

void FUN_1008ccc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df720;
  func_0x000107c610fc(PTR_PTR_1126df720);
  func_0x000107c544d4();
  func_0x000107c544a4(puVar1,param_2,0);
  func_0x000107c544c8(puVar1,param_2,0);
  func_0x000107c54494(puVar1,param_2,0);
  func_0x000107c544b8(puVar1,param_2,0);
  func_0x000107c544fc(puVar1,param_2,0);
  func_0x000107c544dc(puVar1,param_2,0);
  func_0x000107c544bc(puVar1,param_2,0);
  func_0x000107c544b4(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008ccd44; end: 1008ccd8b; -[SCContextStateHandler _transitionToContextState:] */

void FUN_1008ccd44(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 8) == param_3) {
    return;
  }
  if (*(long *)(param_1 + 8) != -1) {
    func_0x000107c3c394(param_1);
  }
  *(long *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startTimer_11258e0b8);
  return;
}



/* Entry: 1008ccd8c; end: 1008cce5f; -[SCContextStateHandler _startTimer] */

void FUN_1008ccd8c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  func_0x000107c60f84(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = 0;
  func_0x000107c60f94(0,200000000);
  func_0x000107c60f8c(uVar3,uVar1,0xffffffffffffffff,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c331d4;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c60f88(*(undefined8 *)(param_1 + 0x28),&puStack_48);
  func_0x000107c60f68(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008cce60; end: 1008ccf03; +[SCDeckPageViewLoggingConfig descriptor] */

void FUN_1008cce60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3f38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c6a470,
                        &PTR____CFConstantStringClassReference_110f59498,&PTR_DAT_11336a208,
                        &PTR_DAT_11336a220,0xc,4,0x1c);
    puRam00000001137f3f38 = puVar1;
  }
  return;
}



/* Entry: 1008ccf04; end: 1008ccf07; -[SCCurrentPageTrackerImplementation startPage:] */

void FUN_1008ccf04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startPageWithoutTriggeringLegacy_112671948);
  return;
}



/* Entry: 1008ccf08; end: 1008cd0e3; -[SCCurrentPageTrackerImplementation startPageWithoutTriggeringLegacyPageView:] */

void FUN_1008ccf08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126afdd8;
  func_0x000107c441b4();
  func_0x000107c61180();
  func_0x000107c4adac();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_1085a78f4;
  puStack_70 = &UNK_1085a7904;
  uStack_68 = 0;
  func_0x000107c40fd4(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c40ef8();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar2);
  func_0x000107c4c730(uVar4);
  lVar3 = puStack_88[5];
  if (lVar3 != 0) {
    func_0x000107c61174(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1008cd0e4; end: 1008cd2a7;  */

/* WARNING: Possible PIC construction at 0x0001008cd1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cd244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cd278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cd248) */
/* WARNING: Removing unreachable block (ram,0x0001008cd1d8) */
/* WARNING: Removing unreachable block (ram,0x0001008cd27c) */

void FUN_1008cd0e4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x40) == param_3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c3b83c(uVar2);
  func_0x000107c61180();
  func_0x000107c3cf50(uRam000000011372c458);
  func_0x000107c504f4(uRam000000011372c458);
  puVar1 = PTR_PTR_1126da2a0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c40ef8(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
  func_0x000107c61180();
  func_0x000107c42854(param_1,uVar2,uVar3,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1008cd2a8; end: 1008cd513; -[SCCurrentPageTrackerImplementation _getFeatureStackFromViewControllerHierarchy] */

void FUN_1008cd2a8(void)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  puVar6 = (undefined *)0x0;
  FUN_1008cd514();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c508f0();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar9 = PTR_DAT_1126a4e58;
  do {
    PTR_DAT_1126a4e58 = puVar9;
    if (puVar7 == (undefined *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        func_0x000107c61174();
        puVar7 = puVar6;
        func_0x000107c5e3f8();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
          func_0x000107c61180();
          puVar8 = puVar9;
          func_0x000107c40210();
          func_0x000107c61180();
          puVar5 = puVar8;
          FUN_1008cd5e0();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar9);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x1137fbb58,0x10);
            if (bVar3) {
              cVar2 = ExclusiveMonitorsStatus();
              lRam00000001137fbb58 = lRam00000001137fbb58 + 1;
            }
          } while (cVar2 != '\0');
        }
        else {
          func_0x000107c61174(puVar7);
          puVar5 = puVar7;
        }
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    func_0x000107c61174(puVar7);
    puVar8 = puVar7;
    FUN_10010fab4(puVar7,puVar9);
    puVar6 = puVar7;
    if ((int)puVar8 == 0) {
      puVar6 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar6);
    func_0x000107c61170(puVar7);
    puVar9 = puVar7;
    func_0x000107c3f9e0();
    func_0x000107c61180();
    puVar8 = puVar9;
    func_0x000107c5086c();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c4080c();
    lVar4 = lRam0000000000000000;
    if (puVar9 != (undefined *)0x0) {
      func_0x000107c61170(puVar6);
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            func_0x000107c61128(puVar8);
          }
          puVar1 = PTR_DAT_1126a4e58;
          puVar6 = *(undefined **)((long)puVar12 * 8);
          func_0x000107c61174(puVar6);
          puVar10 = puVar6;
          FUN_10010fab4(puVar6,puVar1);
          puVar1 = puVar6;
          if ((int)puVar10 == 0) {
            puVar1 = (undefined *)0x0;
          }
          func_0x000107c61174(puVar1);
          func_0x000107c61170(puVar6);
          if (puVar1 != (undefined *)0x0) goto LAB_1008cd440;
          puVar12 = puVar12 + 1;
        } while (puVar9 != puVar12);
        puVar9 = puVar8;
        func_0x000107c4080c();
      } while (puVar9 != (undefined *)0x0);
      puVar6 = (undefined *)0x0;
    }
LAB_1008cd440:
    func_0x000107c61170(puVar8);
    puVar8 = puVar6;
    func_0x000107c4e2ec();
    puVar9 = PTR_PTR_1126afdd8;
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c4e2ec(puVar6);
      func_0x000107c441b4();
      func_0x000107c61180();
      puVar8 = puVar9;
      FUN_1008e9710();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c3d798(puVar5);
      }
      func_0x000107c61170(puVar8);
    }
    puVar9 = puVar7;
    func_0x000107c4f078();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170();
    puVar7 = puVar9;
    puVar9 = PTR_DAT_1126a4e58;
  } while( true );
}



/* Entry: 1008cd514; end: 1008cd5df;  */

void FUN_1008cd514(undefined *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c61174();
  puVar3 = param_1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c40210();
    func_0x000107c61180();
    puVar6 = puVar5;
    FUN_1008cd5e0();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fbb58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam00000001137fbb58 = lRam00000001137fbb58 + 1;
      }
    } while (cVar1 != '\0');
  }
  else {
    func_0x000107c61174(puVar3);
    puVar6 = puVar3;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1008cd5e0; end: 1008cd8ab;  */

double FUN_1008cd5e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  long lStack_140;
  ulong uStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  dVar14 = 0.0;
  lVar2 = param_1;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    uStack_138 = 0;
  }
  else {
    uStack_138 = 0;
    lStack_140 = 0x7fffffffffffffff;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        puVar3 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        uVar13 = *(ulong *)(lVar11 * 8);
        func_0x000107c61174(uVar13);
        func_0x000107c61158(puVar3);
        uVar4 = uVar13;
        func_0x000107c6115c(uVar13,puVar3);
        uVar9 = uVar13;
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
        }
        func_0x000107c61174(uVar9);
        func_0x000107c61170(uVar13);
        if (uVar9 != 0) {
          uVar4 = uVar13;
          func_0x000107c52030();
          func_0x000107c61180();
          uVar5 = uVar4;
          func_0x000107c508bc();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c49d0c();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar4);
          if ((int)uVar6 != 0) {
            uVar4 = uVar13;
            func_0x000107c4a8f8();
            func_0x000107c61180();
            func_0x000107c61170();
            if (uVar4 != 0) {
              uVar4 = uVar13;
              func_0x000107c3d0e4();
              if (uVar4 + 1 < 4) {
                lVar12 = *(long *)(&UNK_10e60e0d8 + (uVar4 + 1) * 8);
              }
              else {
                lVar12 = 4;
              }
              if ((uStack_138 == 0) || (lVar12 < lStack_140)) {
LAB_1008cd7f4:
                func_0x000107c61174(uVar13);
                func_0x000107c61170(uStack_138);
                lStack_140 = lVar12;
                uStack_138 = uVar13;
              }
              else if (lVar12 == lStack_140) {
                uVar4 = uVar13;
                func_0x000107c52030();
                func_0x000107c61180();
                uVar5 = uVar4;
                func_0x000107c4e668();
                func_0x000107c61180();
                uVar6 = uStack_138;
                func_0x000107c52030(uStack_138);
                func_0x000107c61180();
                uVar7 = uVar6;
                func_0x000107c4e668();
                func_0x000107c61180();
                uVar8 = uVar5;
                func_0x000107c3fec0();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uVar4);
                if (uVar8 == 0xffffffffffffffff) goto LAB_1008cd7f4;
              }
            }
          }
        }
        func_0x000107c61170(uVar9);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_1;
      func_0x000107c4080c();
    } while (lVar2 != 0);
  }
  uVar9 = uStack_138;
  func_0x000107c4a8f8(uStack_138);
  func_0x000107c61180();
  func_0x000107c61170(uStack_138);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
    if (*(char *)(param_1 + 0x18) == '\x01') {
      func_0x000107c40fd4(*(undefined8 *)(param_1 + 0x20));
      dVar14 = (dVar14 - *(double *)(param_1 + 0x10)) + *(double *)(param_1 + 8);
    }
    else {
      dVar14 = *(double *)(param_1 + 8);
    }
    return dVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return dVar14;
}



/* Entry: 1008cd8ac; end: 1008cd8ef; -[SCStopwatch accumulatedTime] */

double FUN_1008cd8ac(double param_1,long param_2)

{
  double dVar1;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c40fd4(*(undefined8 *)(param_2 + 0x20));
    dVar1 = (param_1 - *(double *)(param_2 + 0x10)) + *(double *)(param_2 + 8);
  }
  else {
    dVar1 = *(double *)(param_2 + 8);
  }
  return dVar1;
}



/* Entry: 1008cd8f0; end: 1008cd913; -[SCStopwatch resetAndStart] */

void FUN_1008cd8f0(undefined8 param_1)

{
  func_0x000107c504e8();
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_start_112671080);
  return;
}



/* Entry: 1008cd914; end: 1008cd927; -[SCStopwatch reset] */

void FUN_1008cd914(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1008cd928; end: 1008cd94f; -[SCStopwatch start] */

void FUN_1008cd928(long param_1)

{
  func_0x000107c40fd4(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c251c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startWithTime__112672138);
  return;
}



/* Entry: 1008cd950; end: 1008cd967; -[SCStopwatch startWithTime:] */

void FUN_1008cd950(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  return;
}



/* Entry: 1008cd968; end: 1008cdf23; +[SCCurrentPageEvent endPageViewWithNextPageName:finishedPageName:prevPageName:startTimestamp:endTimestamp:featureStack:startDate:elapsedTimeInSec:endDate:finishedPageIsForeground:] */

void FUN_1008cd968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,byte param_12)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  uStack_84 = (uint)param_12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  if (param_9 != 0) {
    func_0x000107c5fc54(param_9,PTR___sSSN_11034da80);
  }
  if (param_10 != 0) {
    func_0x000107c5ee94(lVar4,param_10);
  }
  (**(code **)(lVar2 + 0x38))(lVar4,param_10 == 0,1,lVar1);
  func_0x000107c5ee94(puVar3,param_11);
  func_0x0001008cdb10(param_1,param_2,param_3,param_6,param_7,param_8,param_9,lVar4,puVar3,uStack_84
                     );
  func_0x000107c6142c(param_9);
  (**(code **)(lVar2 + 8))(puVar3,lVar1);
  func_0x0001000bc2e0(lVar4,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 1008cdf24; end: 1008cdf2b;  */

void FUN_1008cdf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001000bc2e0(puVar6,0x1130978f0,&UNK_10dd3d828);
  lVar5 = 0x11305f560;
  FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
  iVar1 = *(int *)(lVar5 + 0x80);
  iVar2 = *(int *)(lVar5 + 0x90);
  iVar3 = *(int *)(lVar5 + 0xa0);
  iVar4 = *(int *)(lVar5 + 0xb0);
  *puVar6 = param_4;
  puVar6[1] = param_5;
  puVar6[2] = param_6;
  puVar6[3] = param_1;
  puVar6[4] = param_2;
  puVar6[5] = param_7;
  func_0x0001000bc298(param_8,(long)puVar6 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)((long)puVar6 + (long)iVar2) = param_3;
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)puVar6 + (long)iVar3,param_9,lVar5);
  *(undefined1 *)((long)puVar6 + (long)iVar4) = param_10;
  lVar5 = 0;
  FUN_1000d0cdc();
  func_0x000107c6159c(puVar6,lVar5,1);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,0,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_7);
  return;
}



/* Entry: 1008cdf2c; end: 1008ce077;  */

void FUN_1008cdf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  func_0x0001000bc2e0(param_11,0x1130978f0,&UNK_10dd3d828);
  lVar5 = 0x11305f560;
  FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
  iVar1 = *(int *)(lVar5 + 0x80);
  iVar2 = *(int *)(lVar5 + 0x90);
  iVar3 = *(int *)(lVar5 + 0xa0);
  iVar4 = *(int *)(lVar5 + 0xb0);
  *param_11 = param_4;
  param_11[1] = param_5;
  param_11[2] = param_6;
  param_11[3] = param_1;
  param_11[4] = param_2;
  param_11[5] = param_7;
  func_0x0001000bc298(param_8,(long)param_11 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)((long)param_11 + (long)iVar2) = param_3;
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_11 + (long)iVar3,param_9,lVar5);
  *(undefined1 *)((long)param_11 + (long)iVar4) = param_10;
  lVar5 = 0;
  FUN_1000d0cdc();
  func_0x000107c6159c(param_11,lVar5,1);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_11,0,1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_7);
  return;
}



/* Entry: 1008ce078; end: 1008ce07f;  */

void FUN_1008ce078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d373d8;
  uStack_84 = param_10;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  if (param_7 != 0) {
    func_0x000107c5fc48(param_7,PTR___sSSN_11034da80);
  }
  FUN_1000bc298(param_8,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  puVar4 = puVar2;
  puVar7 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))(puVar3,lVar1);
    puVar4 = puVar3;
    puVar7 = puVar2;
  }
  func_0x000107c5ee70();
  (**(code **)(lVar5 + 0x10))
            (param_1,param_2,param_3,lVar5,param_4,param_5,param_6,param_7,puVar7,puVar4,
             uStack_84 & 1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1008ce080; end: 1008ce20f;  */

void FUN_1008ce080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10,long param_11)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  lVar1 = 0x112d373d8;
  uStack_84 = param_10;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  if (param_7 != 0) {
    func_0x000107c5fc48(param_7,PTR___sSSN_11034da80);
  }
  FUN_1000bc298(param_8,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = puVar2;
  puVar6 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar3;
    puVar6 = puVar2;
  }
  func_0x000107c5ee70();
  (**(code **)(param_11 + 0x10))
            (param_1,param_2,param_3,param_11,param_4,param_5,param_6,param_7,puVar6,puVar4,
             uStack_84 & 1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return;
}


