/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c3d4a8; end: 100c3d503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d4a8(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113075e18));
  return;
}



/* Entry: 100c3d504; end: 100c3d5a7;  */

void FUN_100c3d504(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3d5a8; end: 100c3d5f3; -[SCCapturerStateChangeUpdate onDidChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d5a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075e18);
  pcVar2 = *(code **)(param_3 + 0x10);
  func_0x000107c61174();
  (*pcVar2)(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c3d5f4; end: 100c3d63b;  */

/* WARNING: Possible PIC construction at 0x000100c3d628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d62c) */

void FUN_100c3d5f4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c41a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3d63c; end: 100c3d73b; -[SCCameraViewController didChangeState:] */

/* WARNING: Possible PIC construction at 0x000100c3d688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3d718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d6ac) */
/* WARNING: Removing unreachable block (ram,0x000100c3d6b0) */
/* WARNING: Removing unreachable block (ram,0x000100c3d6e8) */
/* WARNING: Removing unreachable block (ram,0x000100c3d6bc) */
/* WARNING: Removing unreachable block (ram,0x000100c3d68c) */
/* WARNING: Removing unreachable block (ram,0x000100c3d71c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x000107c4c234(uVar1);
  func_0x000107c61180();
  func_0x000107c40794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3d73c; end: 100c3d76b; -[SCCameraViewControllerInternalState setManagedCapturerState:] */

void FUN_100c3d73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3d76c; end: 100c3d773; -[SCCameraViewControllerInternalState shouldRestoreStartRecordingState] */

undefined1 FUN_100c3d76c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100c3d774; end: 100c3d7af; -[SCCameraViewControllerLensDelegateHandler setFrontCameraActiveForLogging:] */

void FUN_100c3d774(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c54ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3d7b0; end: 100c3d7b7; -[SCLensLogger setFrontCameraActive:] */

void FUN_100c3d7b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a0) = param_3;
  return;
}



/* Entry: 100c3d7b8; end: 100c3d85b;  */

void FUN_100c3d7b8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3d85c; end: 100c3d8a3;  */

/* WARNING: Possible PIC construction at 0x000100c3d890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d894) */

void FUN_100c3d85c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3d8a4; end: 100c3d8e3; -[SCFeatureToggleCameraButtonImpl _didChangeState:] */

void FUN_100c3d8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aff08;
  func_0x000107c4193c(param_3);
  func_0x000107c49a88(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c16e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackFacing__1126392c8,puVar1);
  return;
}



/* Entry: 100c3d8e4; end: 100c3d90f; -[SCFeatureToggleCameraButtonImpl setBackFacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d8e4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127417cc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127417cc) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1b4290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127417c0),PTR_s_setIsSelected__11264aac8);
  return;
}



/* Entry: 100c3d910; end: 100c3d9b3;  */

void FUN_100c3d910(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3d9b4; end: 100c3d9fb;  */

/* WARNING: Possible PIC construction at 0x000100c3d9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3d9ec) */

void FUN_100c3d9b4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3d9fc; end: 100c3da33; -[SCFeatureNightModeImpl _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3d9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740f58);
  *(undefined8 *)(param_1 + _DAT_112740f58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3da34; end: 100c3dad7;  */

void FUN_100c3da34(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c3dad8; end: 100c3db1f;  */

/* WARNING: Possible PIC construction at 0x000100c3db0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3db10) */

void FUN_100c3dad8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3db20; end: 100c3db4f; -[SCFeatureSnapKitImpl _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3db20(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c4193c();
  *(undefined8 *)(param_1 + _DAT_11273f70c) = param_3;
  return;
}



/* Entry: 100c3db50; end: 100c3db5f; -[SCCapturerStateChangeUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3db50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113075e18));
  return;
}



/* Entry: 100c3db60; end: 100c3dc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c3db60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  uVar2 = uVar5;
  FUN_100c3dc68(uVar5,param_2,param_3);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 100c3dc68; end: 100c3dc6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3dc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_100c3b9b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 5;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(long *)(lVar4 + _DAT_113076140) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 100c3dc6c; end: 100c3dd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3dc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_100c3b9b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113076110) = 5;
  *(undefined8 *)(lVar4 + _DAT_113076118) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076120) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076128) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076130) = 0;
  *(undefined8 *)(lVar4 + _DAT_113076138) = 0;
  *(long *)(lVar4 + _DAT_113076140) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076148);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076150);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076158);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076160) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113076168);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113076170) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 100c3dd90; end: 100c3ddb3;  */

void FUN_100c3dd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100c3ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1,param_2,param_3);
  return;
}



/* Entry: 100c3ddb4; end: 100c3de0b;  */

void FUN_100c3ddb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x000107c4193c(param_2);
  func_0x000107c4d960(puVar1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c3de0c; end: 100c3deb3;  */

void FUN_100c3de0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_4 + *param_5);
    puVar1 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    if (param_1 == 0) {
      func_0x000107c4d73c();
    }
    else {
      func_0x000107c4e01c();
    }
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 100c3deb4; end: 100c3ded3;  */

void FUN_100c3deb4(void)

{
  FUN_100c3de0c();
  return;
}



/* Entry: 100c3ded4; end: 100c3df1b;  */

/* WARNING: Possible PIC construction at 0x000100c3df08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3df0c) */

void FUN_100c3ded4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3df1c; end: 100c3df87; -[SCLensUnlockableDataProvider forwardingTargetForSelector:] */

void FUN_100c3df1c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c4b038();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c61164();
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4b038(param_1);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c3df88; end: 100c3e053; -[SCLensDataProviderV2 setDevicePosition:] */

/* WARNING: Possible PIC construction at 0x000100c3dfd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3e014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3dfd8) */
/* WARNING: Removing unreachable block (ram,0x000100c3e018) */
/* WARNING: Removing unreachable block (ram,0x000100c3e01c) */
/* WARNING: Removing unreachable block (ram,0x000100c3e028) */
/* WARNING: Removing unreachable block (ram,0x000100c3e040) */

void FUN_100c3df88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddd68;
  func_0x000107c4ce38();
  func_0x000107c61180();
  func_0x000107c4b278(puVar1,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c3e054; end: 100c3e083; -[SCLensDataProviderV2 metadataProviderSettings] */

void FUN_100c3e054(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4290c();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c3e084; end: 100c3e153; -[SCLensDataProviderV2 ensureNonNilSettings] */

/* WARNING: Possible PIC construction at 0x000100c3e0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3e128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3e13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3e12c) */
/* WARNING: Removing unreachable block (ram,0x000100c3e0e0) */
/* WARNING: Removing unreachable block (ram,0x000100c3e140) */

void FUN_100c3e084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dcfa8;
  if (*(long *)(param_1 + 0xd0) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3df50(uVar2);
  func_0x000107c61180();
  func_0x000107c3df54(puVar1,param_2,uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c3e154; end: 100c3e1af; -[SCLensDataProviderConfiguration applicableContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3e154(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034670))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034670);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c3e1b0; end: 100c3e247; +[SCLensApplicableContextAttribute applicableContextWithApplicableContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3e1b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_113082ce0) = 0;
  plVar1 = (long *)(lVar2 + _DAT_113082cf0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar2 + _DAT_113082ce8) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c3e248; end: 100c3e31f; -[SCLensMetadataProviderSettings initWithCameraPosition:applicableContext:removedLensIds:namespaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3e248(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_5 != 0) {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5fe10(param_5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_113082dd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_113082de0) = param_4;
  *(long *)(param_1 + _DAT_113082de8) = param_5;
  plVar1 = (long *)(param_1 + _DAT_113082df0);
  *plVar1 = param_6;
  plVar1[1] = (long)param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 100c3e320; end: 100c3e393; -[SCLensDataProviderV2 applyMetadataProviderSettings:] */

uint FUN_100c3e320(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3e034(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0xd0));
  }
  func_0x000107c61170(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 100c3e394; end: 100c3e397; -[SCLensMetadataProviderSettings copyWithZone:] */

void FUN_100c3e394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100c3e398; end: 100c3e4a3; -[SCCompositeLensMetadataStore applyMetadataProviderSettings:] */

void FUN_100c3e398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          func_0x000107c61128(lVar2);
        }
        func_0x000107c3e034(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,param_3);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 100c3e4a4; end: 100c3e4a7; -[SCPredefinedLensMetadataStore applyMetadataProviderSettings:] */

void FUN_100c3e4a4(void)

{
  return;
}



/* Entry: 100c3e4a8; end: 100c3e583; -[SCScheduledLensFilteredMetadataStore applyMetadataProviderSettings:] */

/* WARNING: Possible PIC construction at 0x000100c3e4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3e560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3e4fc) */
/* WARNING: Removing unreachable block (ram,0x000100c3e534) */
/* WARNING: Removing unreachable block (ram,0x000100c3e564) */

void FUN_100c3e4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de6c0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c477c8();
  func_0x000107c3f17c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c3e584; end: 100c3e5f7; -[SCLensMetadataProviderSettingsFilterFactory initWithMetadataProviderSettings:] */

undefined1 * FUN_100c3e584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705a80;
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



/* Entry: 100c3e5f8; end: 100c3e607; -[SCLensMetadataProviderSettings cameraPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c3e5f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113082dd8);
}



/* Entry: 100c3e608; end: 100c3e68b; -[SCScheduledLensFilteredMetadataStore _filterWithValue:filterFactory:] */

void FUN_100c3e608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x000107c61174(param_4);
  func_0x000107c4ec64(puVar1,param_2,param_3);
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c4f304(param_4,param_2,param_1,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c3e68c; end: 100c3e9f3; -[SCLensMetadataProviderSettingsFilterFactory produceFilterForLensFilteredContainer:additionalFilter:] */

void FUN_100c3e68c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5c460();
  if ((int)uVar2 != 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    puStack_58 = &UNK_10b0dd6f0;
    puStack_50 = &UNK_10b0dd700;
    uStack_48 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c3df50(uVar2);
    func_0x000107c61180();
    func_0x000107c4c588();
    func_0x000107c61170(uVar2);
    if (puStack_68[5] != 0) {
      func_0x000107c3d798(puVar1);
    }
    func_0x000107c60bcc(&uStack_70,8);
    func_0x000107c61170(uStack_48);
  }
  uVar2 = param_3;
  func_0x000107c5c460();
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x000107c3f17c();
    if (lVar3 != -1) {
      lVar3 = param_1;
      func_0x000107c61158(param_1);
      func_0x000107c434b0();
      func_0x000107c61180();
      func_0x000107c3d798(puVar1);
      func_0x000107c61170(lVar3);
    }
  }
  uVar2 = param_3;
  func_0x000107c5c460();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4d420(uVar2);
    func_0x000107c61180();
    func_0x000107c4a0fc();
    func_0x000107c61170(uVar2);
    if ((int)puVar4 != 0) {
      lVar3 = param_1;
      func_0x000107c61158(param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x000107c4d420(uVar2);
      func_0x000107c61180();
      func_0x000107c434b4(lVar3);
      func_0x000107c61180();
      func_0x000107c3d79c(puVar1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar2);
    }
  }
  if (param_4 != 0) {
    puVar4 = PTR_PTR_1126df980;
    func_0x000107c610f4(PTR_PTR_1126df980);
    func_0x000107c47fd0();
    func_0x000107c3d798(puVar1);
    func_0x000107c61170(puVar4);
  }
  puVar4 = PTR_PTR_1126ddd58;
  func_0x000107c61160(PTR_PTR_1126ddd58);
  func_0x000107c3d798(puVar1);
  func_0x000107c61170(puVar4);
  lVar5 = *(long *)(param_1 + 8);
  func_0x000107c5006c();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c40808();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5006c(uVar2);
    func_0x000107c61180();
    func_0x000107c434b8(lVar3);
    func_0x000107c61180();
    func_0x000107c3d798(puVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
  }
  puVar4 = PTR_PTR_1126dfad0;
  puVar6 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c3f77c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c3e9f4; end: 100c3e9ff; -[SCScheduledLensFilteredMetadataStore supportsFilteringForAttribute:] */

bool FUN_100c3e9f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 2;
}



/* Entry: 100c3ea00; end: 100c3ea0f; -[SCLensMetadataProviderSettings applicableContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3ea00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082de0));
  return;
}



/* Entry: 100c3ea10; end: 100c3eaef; -[SCLensApplicableContextAttribute matchApplicableContext:anyApplicableContextInSet:] */

/* WARNING: Possible PIC construction at 0x000100c3ead4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3ead8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3ea10(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_113082ce0) == '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_113082ce8);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c3eaf0);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    func_0x000107c5fe08(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    pcVar1 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113082cf0))[1];
    if (lVar3 == 0) {
      func_0x000107c61174(param_1);
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + _DAT_113082cf0);
      func_0x000107c61174(param_1);
      func_0x000107c5fadc(lVar2,lVar3);
    }
    pcVar1 = *(code **)(param_3 + 0x10);
  }
  (*pcVar1)(param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c3eaf0; end: 100c3eb57;  */

/* WARNING: Possible PIC construction at 0x000100c3eb44: Changing call to branch */

void FUN_100c3eaf0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = param_2;
  func_0x000107c4adac();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61158();
    func_0x000107c434ac();
    func_0x000107c61180();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    param_2 = *(long *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c3eb58; end: 100c3ec1f; +[SCLensMetadataProviderSettingsFilterFactory filterForApplicableContext:] */

void FUN_100c3eb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df980;
  func_0x000107c610f4(PTR_PTR_1126df980);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100c3f084;
  puStack_40 = &UNK_110ae0418;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4ec5c(puVar2,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c47fd0(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c3ec20; end: 100c3ec7b; -[SCLensMetadataProviderSettings removedLensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3ec20(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113082de8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fe08();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c3ec7c; end: 100c3edaf; +[SCChainedLensFilter chainedLensFilterWithFilters:] */

undefined1 * FUN_100c3ec7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 unaff_x20;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c5086c();
  func_0x000107c61180();
  puVar5 = auStack_d8;
  lVar1 = param_3;
  func_0x000107c4080c();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = (undefined *)0x0;
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      puVar7 = puVar6;
      do {
        if (*plStack_110 != lVar8) {
          func_0x000107c61128(param_3);
        }
        puVar6 = PTR_PTR_1126dfad0;
        func_0x000107c610f4();
        func_0x000107c46938();
        func_0x000107c61170(puVar7);
        lVar9 = lVar9 + 1;
        puVar7 = puVar6;
      } while (lVar1 != lVar9);
      puVar5 = auStack_d8;
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x000107c4080c();
    } while (lVar1 != 0);
    unaff_x20 = 0;
    unaff_x22 = puVar6;
  }
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  func_0x000107c60e78();
  plVar2 = &lStack_160;
  pcStack_128 = FUN_100c3edb0;
  puStack_150 = unaff_x22;
  puStack_148 = puVar6;
  uStack_140 = unaff_x20;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  puStack_158 = PTR_PTR_112705a68;
  lStack_160 = lVar1;
  func_0x000107c61154(&lStack_160,PTR_s_init_1125d9248);
  if (plVar2 != (long *)0x0) {
    func_0x000107c61174(puVar4);
    uVar3 = *(undefined8 *)((long)plVar2 + 8);
    *(undefined8 **)((long)plVar2 + 8) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar5);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x10);
    *(undefined1 **)((long)plVar2 + 0x10) = puVar5;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  return (undefined1 *)plVar2;
}



/* Entry: 100c3edb0; end: 100c3ee53; -[SCChainedLensFilter initWithFilter:nextFilter:] */

undefined1 *
FUN_100c3edb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705a68;
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



/* Entry: 100c3ee54; end: 100c3eef3; -[SCGenericLensMetadataStore setLensFilter:] */

/* WARNING: Possible PIC construction at 0x000100c3eea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3eeac) */

void FUN_100c3ee54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
  }
  else {
    func_0x000107c611f0(param_1 + 8);
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3eef4; end: 100c3eff7; -[SCChainedLensFilter filterLenses:] */

void FUN_100c3eef4(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = param_1;
    func_0x000107c43490();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c434d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c40808();
    puVar4 = puVar3;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_1;
      func_0x000107c4d678();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c4d678();
        func_0x000107c61180();
        puVar4 = param_1;
        func_0x000107c434d4();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(param_1);
      }
    }
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    func_0x000107c61174(puVar5);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c3eff8; end: 100c3efff; -[SCChainedLensFilter filter] */

undefined8 FUN_100c3eff8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c3f000; end: 100c3f003; -[SCPredicateLensFilter filterLenses:] */

void FUN_100c3f000(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__filterLenses__1125631f8);
  return;
}



/* Entry: 100c3f004; end: 100c3f083; -[SCPredicateLensFilter _filterLenses:] */

void FUN_100c3f004(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = param_3;
  func_0x000107c40808();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x000107c4351c(param_3,param_2,*(undefined8 *)(param_1 + 8));
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    func_0x000107c61174(puVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c3f084; end: 100c3f0cb;  */

undefined8 FUN_100c3f084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3df58(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c40404();
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c3f0cc; end: 100c3f0d3; -[SCLens applicableContexts] */

undefined8 FUN_100c3f0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 100c3f0d4; end: 100c3f0db; -[SCChainedLensFilter nextFilter] */

undefined8 FUN_100c3f0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c3f0dc; end: 100c3f2d7; -[SCDuplicateByLensIdFilter filterLenses:] */

void FUN_100c3f0dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c40808();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    func_0x000107c40808(param_3);
    func_0x000107c3e170(puVar3);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_3);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar5 = lVar8;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar5 != 0) {
          lVar5 = lVar8;
          func_0x000107c4b1dc(lVar8);
          func_0x000107c61180();
          puVar6 = puVar4;
          func_0x000107c40404();
          func_0x000107c61170(lVar5);
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000107c3d798(puVar3);
            func_0x000107c4b1dc(lVar8);
            func_0x000107c61180();
            func_0x000107c3d798(puVar4);
            func_0x000107c61170(lVar8);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_3);
    puVar6 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 100c3f2d8; end: 100c3f2e3; -[SCLensMetadataProviderSettingsFilterFactory .cxx_destruct] */

void FUN_100c3f2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c3f2e4; end: 100c3f323; +[SCLensMetadataProviderSettingsBuilder lensMetadataProviderSettingsWithExistingLensMetadataProviderSettings:] */

void FUN_100c3f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_100c3f344(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100c3f324; end: 100c3f343;  */

void FUN_100c3f324(void)

{
  func_0x000107c61168(&PTR_PTR_1129c9ae0);
  return;
}



/* Entry: 100c3f344; end: 100c3f453;  */

/* WARNING: Possible PIC construction at 0x000100c3f378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3f37c) */

void FUN_100c3f344(long param_1)

{
  if (param_1 == 0) {
    FUN_100c3f324();
    func_0x000107c610f8();
  }
  else {
    FUN_100c3f324();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100c3f454; end: 100c3f4cf; -[SCLensMetadataProviderSettingsBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3f454(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_113082df8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(param_1 + _DAT_113082e00) = 0;
  *(undefined8 *)(param_1 + _DAT_113082e08) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113082e10);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c3f4d0; end: 100c3f4e7; -[SCLensMetadataProviderSettingsBuilder withCameraPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3f4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113082df8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c3f4e8; end: 100c3f52b; -[SCLensMetadataProviderSettingsBuilder build] */

void FUN_100c3f4e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c3f52c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c3f52c; end: 100c3f62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3f52c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082df8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113082e00);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113082e08);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082e10);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113082e10))[1];
  FUN_100c3f630();
  lVar5 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_113082dd8) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_113082de0) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_113082de8) = uVar7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113082df0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = param_1;
  func_0x000107c61174(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar3);
  func_0x000107c61154(&lStack_60,puVar4);
  return;
}



/* Entry: 100c3f630; end: 100c3f64f;  */

void FUN_100c3f630(void)

{
  func_0x000107c61168(&PTR_PTR_1129c9a00);
  return;
}



/* Entry: 100c3f650; end: 100c3f6df; -[SCLensMetadataProviderSettings isEqual:] */

uint FUN_100c3f650(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_100c3f6e0(&uStack_40);
  func_0x000107c61170(param_1);
  FUN_100c3facc(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 100c3f6e0; end: 100c3f8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c3f6e0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  long alStack_70 [4];
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,alStack_70);
  if (alStack_70[3] == 0) {
    FUN_100c3facc(alStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_78;
    func_0x000107c6147c(plVar1,alStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113082dd8);
      lVar9 = *(long *)(lStack_78 + _DAT_113082dd8);
      if (*(long *)(unaff_x20 + _DAT_113082de0) == 0) {
        uVar5 = (uint)(*(long *)(lStack_78 + _DAT_113082de0) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_78 + _DAT_113082de0);
        if (lVar7 == 0) {
          lVar2 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_100c3f900();
        }
        alStack_70[0] = lVar7;
        alStack_70[3] = lVar2;
        func_0x000107c61174(lVar7);
        uVar5 = 0;
        FUN_100c3f920();
        FUN_100c3facc(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113082de8);
      lVar7 = *(long *)(lStack_78 + _DAT_113082de8);
      uVar4 = (uint)(lVar2 == 0 && lVar7 == 0);
      if (lVar2 != 0 && lVar7 != 0) {
        func_0x000107c61434(lVar7);
        lVar3 = lVar2;
        func_0x000107c61434(lVar2);
        uVar4 = (uint)lVar3;
        FUN_100c3fb0c();
        func_0x000107c6142c(lVar2);
        func_0x000107c6142c(lVar7);
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_113082df0))[1];
      lVar2 = ((long *)(lStack_78 + _DAT_113082df0))[1];
      if (lVar7 == 0) {
        func_0x000107c61434(lVar2);
        func_0x000107c61170(lStack_78);
        if (lVar2 == 0) {
LAB_100c3f8a4:
          uVar6 = 1;
        }
        else {
          func_0x000107c6142c(lVar2);
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
        if (lVar2 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_113082df0);
          if ((lVar3 == *(long *)(lStack_78 + _DAT_113082df0)) && (lVar7 == lVar2)) {
            func_0x000107c61170(lStack_78);
            goto LAB_100c3f8a4;
          }
          func_0x000107c605b8();
          uVar6 = (uint)lVar3;
        }
        func_0x000107c61170(lStack_78);
      }
      if ((lVar8 == lVar9 & uVar5) != 0) {
        uVar4 = uVar4 & uVar6;
        goto LAB_100c3f8e0;
      }
    }
  }
  uVar4 = 0;
LAB_100c3f8e0:
  return uVar4 & 1;
}



/* Entry: 100c3f900; end: 100c3f91f;  */

void FUN_100c3f900(void)

{
  func_0x000107c61168(&PTR_PTR_1129c9760);
  return;
}



/* Entry: 100c3f920; end: 100c3facb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c3f920(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_113082ce0) == *(char *)(lStack_58 + _DAT_113082ce0)) {
        if (*(char *)(unaff_x20 + _DAT_113082ce0) == '\x01') {
          lVar6 = *(long *)(unaff_x20 + _DAT_113082ce8);
          lVar5 = *(long *)(lStack_58 + _DAT_113082ce8);
          if (lVar6 != 0) {
            if (lVar5 != 0) {
              func_0x000107c61434(lVar5);
              lVar3 = lVar6;
              func_0x000107c61434(lVar6);
              uVar4 = (uint)lVar3;
              FUN_100c3fb0c();
              func_0x000107c6142c(lVar6);
              func_0x000107c6142c(lVar5);
              func_0x000107c61170(lStack_58);
              goto LAB_100c3fa08;
            }
            goto LAB_100c3fa00;
          }
          func_0x000107c61434(lVar5);
          func_0x000107c61170(lStack_58);
          if (lVar5 == 0) goto LAB_100c3fac4;
          func_0x000107c6142c(lVar5);
        }
        else {
          lVar5 = ((long *)(unaff_x20 + _DAT_113082cf0))[1];
          lVar6 = ((long *)(lStack_58 + _DAT_113082cf0))[1];
          if (lVar5 != 0) {
            uVar4 = 0;
            if (lVar6 != 0) {
              lVar3 = *(long *)(unaff_x20 + _DAT_113082cf0);
              lVar2 = *(long *)(lStack_58 + _DAT_113082cf0);
              if (lVar3 == lVar2 && lVar5 == lVar6) {
                func_0x000107c61170();
                goto LAB_100c3fac4;
              }
              func_0x000107c605b8(lVar3,lVar5,lVar2,lVar6,0);
              uVar4 = (uint)lVar3;
            }
            func_0x000107c61170(lStack_58);
            goto LAB_100c3fa08;
          }
          func_0x000107c61434(lVar6);
          func_0x000107c61170(lStack_58);
          if (lVar6 == 0) {
LAB_100c3fac4:
            uVar4 = 1;
            goto LAB_100c3fa08;
          }
          func_0x000107c6142c(lVar6);
        }
      }
      else {
LAB_100c3fa00:
        func_0x000107c61170();
      }
    }
  }
  uVar4 = 0;
LAB_100c3fa08:
  return uVar4 & 1;
}



/* Entry: 100c3facc; end: 100c3fb0b;  */

undefined8 FUN_100c3facc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100c3fb0c; end: 100c3fcbb;  */

undefined8 FUN_100c3fb0c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_100c3fc94:
    uVar7 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar14 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar14 = ~(-1L << (uVar11 & 0x3f));
      }
      uVar14 = uVar14 & *(ulong *)(param_1 + 0x38);
      lVar9 = 0;
      while( true ) {
        if (uVar14 == 0) {
          do {
            lVar13 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100c3fcbc);
              (*pcVar4)();
            }
            if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_100c3fc94;
            uVar14 = ((ulong *)(param_1 + 0x38))[lVar13];
            lVar9 = lVar9 + 1;
          } while (uVar14 == 0);
          uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
        }
        else {
          uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar13 = lVar9;
        }
        puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar8) | lVar13 << 6) * 0x10);
        uVar8 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar2);
        puVar5 = auStack_a8;
        func_0x000107c5fb58(puVar5,uVar8,uVar2);
        func_0x000107c606a8();
        uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar12 = (ulong)puVar5 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) break;
        while( true ) {
          puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
          uVar6 = *puVar1;
          uVar3 = puVar1[1];
          if ((uVar6 == uVar8 && uVar3 == uVar2) ||
             (func_0x000107c605b8(uVar6,uVar3,uVar8,uVar2,0), (uVar6 & 1) != 0)) break;
          uVar12 = uVar12 + 1 & ~uVar10;
          if ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
          goto LAB_100c3fc84;
        }
        func_0x000107c6142c(uVar2);
        lVar9 = lVar13;
      }
LAB_100c3fc84:
      func_0x000107c6142c(uVar2);
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 100c3fcbc; end: 100c3fcd7; -[SCLensMetadataProviderSettings .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c3fd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3fd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c3fcbc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113082de0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082de8));
  return;
}



/* Entry: 100c3fcd8; end: 100c3fd27;  */

/* WARNING: Possible PIC construction at 0x000100c3fd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3fd0c) */

void FUN_100c3fcd8(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + *param_3));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_4));
  return;
}



/* Entry: 100c3fd28; end: 100c3fe07; +[SCLensMetadataProviderSettingsFilterFactory filterForCameraPosition:] */

void FUN_100c3fd28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &PTR_PTR_1133c9290;
  if (param_3 != 0) {
    ppuVar1 = &PTR_PTR_1133c9298;
  }
  puVar4 = *ppuVar1;
  func_0x000107c61174(puVar4);
  puVar2 = PTR_PTR_1126df980;
  func_0x000107c610f4(PTR_PTR_1126df980);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100c40094;
  puStack_40 = &UNK_110ae0418;
  puStack_38 = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c4ec5c(puVar3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c47fd0(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puStack_38);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c3fe08; end: 100c3fed7; -[SCChainedLensFilter isEqual:] */

ulong FUN_100c3fe08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_1;
    func_0x000107c61158(param_1);
    uVar1 = param_3;
    func_0x000107c6115c(param_3,uVar2);
    if ((uVar1 & 1) != 0) {
      uVar2 = param_1;
      func_0x000107c3b1b4();
      uVar1 = param_3;
      func_0x000107c3b1b4();
      if (uVar2 == uVar1) {
        func_0x000107c3addc(param_1);
        func_0x000107c61180();
        uVar1 = param_3;
        func_0x000107c3addc(param_3);
        func_0x000107c61180();
        uVar2 = param_1;
        func_0x000107c49cf0(param_1);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(param_1);
        goto LAB_100c3febc;
      }
    }
    uVar2 = 0;
  }
LAB_100c3febc:
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100c3fed8; end: 100c3ff77; -[SCChainedLensFilter _count] */

undefined8 FUN_100c3fed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100c40040;
  puStack_50 = &UNK_110cb9408;
  puStack_38 = puStack_48;
  func_0x000107c3cae0(param_1,param_2,&puStack_68);
  uVar1 = puStack_38[3];
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 100c3ff78; end: 100c4003f; -[SCChainedLensFilter _traverseWithBlock:] */

/* WARNING: Possible PIC construction at 0x000100c3ffd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3ffd8) */
/* WARNING: Removing unreachable block (ram,0x000100c40004) */
/* WARNING: Removing unreachable block (ram,0x000100c40018) */

void FUN_100c3ff78(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  if (param_1 != 0) {
    func_0x000107c43490(param_1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c40040; end: 100c40057;  */

void FUN_100c40040(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 100c40058; end: 100c40087; -[SCChainedLensFilter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c40070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40074) */

void FUN_100c40058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c40088; end: 100c40093; -[SCPredicateLensFilter .cxx_destruct] */

void FUN_100c40088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c40094; end: 100c400db;  */

undefined8 FUN_100c40094(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3f088(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c40404();
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c400dc; end: 100c400e3; -[SCLens cameraContexts] */

undefined8 FUN_100c400dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 100c400e4; end: 100c40103; -[SCLensDataFetchingMediator updating] */

bool FUN_100c400e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000107c40808(lVar1);
  return lVar1 != 0;
}



/* Entry: 100c40104; end: 100c4011f; -[SCLensMetadataProviderSettingsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c3fd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c3fd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c40104(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113082e00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082e08));
  return;
}



/* Entry: 100c40120; end: 100c40167;  */

/* WARNING: Possible PIC construction at 0x000100c40154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40158) */

void FUN_100c40120(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c40168; end: 100c4016b; -[SCMainCameraViewController _didChangeCaptureDevicePosition:] */

void FUN_100c40168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLensesActivationTooltipIfNe_11258bfd0);
  return;
}



/* Entry: 100c4016c; end: 100c4046b; -[SCMainCameraViewController _showLensesActivationTooltipIfNecessary] */

void FUN_100c4016c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3f084();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5b038();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c417c0();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar6 != 0) {
    lVar1 = param_1;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4c234();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4193c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 == 0) {
      lVar1 = param_1;
      func_0x000107c5cbd0();
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c3f0bc(param_1);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c4b5d8();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c49fc8();
      lVar5 = lVar1;
      func_0x000107c3f444();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if ((int)lVar5 == 0) {
        return;
      }
      func_0x000107c61144(auStack_58,param_1);
      uVar7 = 0x15;
      func_0x0001000819a8(0x15,0);
      func_0x000107c61180();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      puStack_70 = &UNK_106fe8e28;
      puStack_68 = &UNK_1108434b0;
      ppuVar9 = &puStack_80;
      func_0x000107c6111c(auStack_60,auStack_58);
      ppuVar8 = &puStack_80;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c3f16c();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c49fc4();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if ((int)lVar3 == 0) {
        return;
      }
      lVar1 = param_1;
      func_0x000107c5bcc0(param_1);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c3f16c();
      func_0x000107c61180();
      func_0x000107c44e1c();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61144(auStack_58,param_1);
      uVar7 = 0x15;
      func_0x0001000819a8(0x15,0);
      func_0x000107c61180();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      puStack_98 = &UNK_106fe9004;
      puStack_90 = &UNK_1108434b0;
      ppuVar9 = &puStack_a8;
      func_0x000107c6111c(auStack_88,auStack_58);
      ppuVar8 = &puStack_a8;
    }
    func_0x00010007380c(uVar7,ppuVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61120(ppuVar9 + 4);
    func_0x000107c61120(auStack_58);
  }
  return;
}



/* Entry: 100c4046c; end: 100c404ab; -[SCCameraSimpleUIFeatureGatingConfigurationImpl deprecatedCameraTooltipsEnabled] */

undefined8 FUN_100c4046c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43014();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c404ac; end: 100c404c3; -[SCCameraCircumstanceEngineImpl fetchCameraDeprecatedTooltipsEnabled] */

void FUN_100c404ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5198,0,0);
  return;
}



/* Entry: 100c404c4; end: 100c405bf; -[SCSnapchatterChangeRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c404dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c404f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4050c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4053c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4056c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c4059c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40588) */
/* WARNING: Removing unreachable block (ram,0x000100c40570) */
/* WARNING: Removing unreachable block (ram,0x000100c40558) */
/* WARNING: Removing unreachable block (ram,0x000100c40540) */
/* WARNING: Removing unreachable block (ram,0x000100c40528) */
/* WARNING: Removing unreachable block (ram,0x000100c40510) */
/* WARNING: Removing unreachable block (ram,0x000100c404f8) */
/* WARNING: Removing unreachable block (ram,0x000100c404e0) */
/* WARNING: Removing unreachable block (ram,0x000100c405a0) */

void FUN_100c404c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb0,0);
  return;
}



/* Entry: 100c405c0; end: 100c40673;  */

/* WARNING: Possible PIC construction at 0x000100c40644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40648) */

void FUN_100c405c0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  FUN_100c40674();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5d0f4();
    if (param_2 + 1U < 8) {
      if ((1L << (param_2 + 1U & 0x3f) & 0x71U) == 0) {
        func_0x000107c2bbc0(param_1,lVar1);
        goto LAB_100c40640;
      }
    }
    else if (param_2 != -9999) goto LAB_100c40640;
    func_0x000107c2bbc4(param_1,lVar1);
  }
LAB_100c40640:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c40674; end: 100c407a3;  */

void FUN_100c40674(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c43394();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4adac();
  puVar5 = (undefined *)0x0;
  if ((lVar3 != 0) && (lVar2 != 0)) {
    lVar3 = lVar2;
    func_0x000107c4197c(lVar2);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000100504554();
    func_0x000107c61170(lVar3);
    puVar5 = PTR_PTR_1126c04c0;
    func_0x000107c610f4(PTR_PTR_1126c04c0);
    func_0x000107c491f8();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c407a4; end: 100c40807;  */

/* WARNING: Possible PIC construction at 0x000100c407f0: Changing call to branch */

void FUN_100c407a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c4193c();
  if (lVar1 != param_3) {
    param_2 = param_1 + 0x20;
    func_0x000107c61148(param_2);
    func_0x000107c3b498();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c40808; end: 100c40963; -[SCFeatureNightModeImpl _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c40808(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  puVar3 = PTR_PTR_1126aff08;
  uVar2 = param_3;
  func_0x000107c4193c(param_3);
  func_0x000107c49a88(puVar3,param_2,uVar2);
  lVar5 = param_1;
  func_0x000107c3bb68();
  if ((int)puVar3 == 0) {
    lVar4 = (long)_DAT_112740fa4;
    if (((int)lVar5 != 0) && ((*(byte *)(param_1 + lVar4) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_112740fb0) = 1;
    }
    if (((*(char *)(param_1 + lVar4) == '\x01') &&
        (lVar5 = param_1, func_0x000107c3bb68(), (int)lVar5 != 0)) &&
       (lVar5 = param_1, func_0x000107c3baf8(param_1,param_2,param_3), (int)lVar5 != 0)) {
      lVar5 = (long)_DAT_112740fb4;
    }
    else {
      lVar5 = (long)_DAT_112740fb4;
      if (*(char *)(param_1 + lVar5) == '\x01') {
        func_0x000107c3c1bc(param_1,param_2,1);
      }
      else {
        func_0x000107c3bb68(param_1);
        func_0x000107c3c1bc(param_1,param_2,0);
        func_0x000107c3bbe0(param_1,param_2,param_3,1);
      }
    }
    *(undefined1 *)(param_1 + lVar5) = 0;
  }
  else {
    if (((int)lVar5 != 0) && ((*(byte *)(param_1 + _DAT_112740fa4) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_112740fb4) = 1;
    }
    lVar5 = (long)_DAT_112740fb0;
    bVar1 = *(byte *)(param_1 + lVar5);
    if ((bVar1 & 1) == 0) {
      func_0x000107c3bb68(param_1);
    }
    func_0x000107c3c1bc(param_1,param_2,bVar1);
    *(undefined1 *)(param_1 + lVar5) = 0;
  }
  func_0x000107c3cc44(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c40964; end: 100c409cf; -[SCFeatureNightModeImpl _isNightModeSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c40964(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112740f90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112740f90),PTR_s_isSelected_1125fcfa8);
    return;
  }
  lVar1 = param_1;
  func_0x000107c3bb6c();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_112740f64;
    func_0x000107c61148(param_1);
    func_0x000107c49cd8();
    func_0x000107c61170(param_1);
  }
  return;
}


