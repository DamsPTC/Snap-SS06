/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c409d0; end: 100c40a07; -[SCFeatureNightModeImpl _programmaticallySetNightModeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c409d0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f94;
  uVar1 = *(undefined1 *)(param_1 + lVar2);
  func_0x000107c3c590();
  *(undefined1 *)(param_1 + lVar2) = uVar1;
  return;
}



/* Entry: 100c40a08; end: 100c40aa3; -[SCFeatureNightModeImpl _setNightModeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c40a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112740f90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b4290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112740f90),PTR_s_setIsSelected__11264aac8,param_3);
    return;
  }
  lVar1 = param_1;
  func_0x000107c3bb6c();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_112740f64;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar1);
    if ((int)param_3 != (int)lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010be63d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__nightModeButtonDidChangeSelecti_1125768f8,param_3);
      return;
    }
  }
  return;
}



/* Entry: 100c40aa4; end: 100c40b07; -[SCCameraToolbarItemImpl setIsSelected:] */

void FUN_100c40aa4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x000107c4a3b4();
  *(char *)(param_1 + 9) = (char)param_3;
  if (param_3 != (int)lVar1) {
    puVar2 = PTR_PTR_1126c87c8;
    func_0x000107c610f4(PTR_PTR_1126c87c8);
    func_0x000107c48de0();
    func_0x000107c4d664(*(undefined8 *)(param_1 + 0x60),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100c40b08; end: 100c40ba7; -[SCFeatureNightModeImpl _keepOrAutoApplyNightModeForRingFlash:respectUserOptOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_100c40b08(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x000107c3baf8();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + _DAT_112740f4c) == '\x01')) {
    lVar1 = param_1;
    func_0x000107c3bb68();
    if ((int)lVar1 != 0) {
      bVar2 = *(byte *)(param_1 + _DAT_112740fa4);
      goto LAB_100c40b98;
    }
    if (((param_4 == 0) || ((*(byte *)(param_1 + _DAT_112740f94) & 1) == 0)) &&
       (lVar1 = param_1, func_0x000107c3c710(), (int)lVar1 != 0)) {
      bVar2 = 1;
      func_0x000107c3c594(param_1,param_2,1);
      *(undefined1 *)(param_1 + _DAT_112740fa4) = 1;
      goto LAB_100c40b98;
    }
  }
  bVar2 = 0;
LAB_100c40b98:
  return bVar2 & 1;
}



/* Entry: 100c40ba8; end: 100c40c2f; -[SCFeatureNightModeImpl _isEligibleForRingFlashNightMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100c40ba8(long param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  if (((*(long *)(param_1 + _DAT_112740fbc) == 2) &&
      (puVar2 = param_3, func_0x000107c4193c(), puVar2 == (undefined *)0x0)) &&
     (puVar2 = param_3, func_0x000107c3e0d8(), ((ulong)puVar2 & 1) == 0)) {
    puVar2 = param_3;
    func_0x000107c51b1c(param_3);
    puVar3 = PTR_PTR_1126afed0;
    func_0x000107c4d73c(PTR_PTR_1126afed0);
    bVar1 = puVar2 == puVar3;
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c40c30; end: 100c40dcb;  */

/* WARNING: Possible PIC construction at 0x000100c40d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c40d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40d24) */
/* WARNING: Removing unreachable block (ram,0x000100c40d14) */
/* WARNING: Removing unreachable block (ram,0x000100c40d04) */
/* WARNING: Removing unreachable block (ram,0x000100c40d34) */

void FUN_100c40c30(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar1 = param_3;
  func_0x000107c4adac();
  if (puVar1 != (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412e0();
    func_0x000107c61180();
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    puVar1 = param_3;
    func_0x000107c4adac();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126db3e8;
      func_0x000107c610f4(PTR_PTR_1126db3e8);
      func_0x000107c4924c();
      param_3 = PTR_PTR_1126db3f0;
      func_0x000107c2a964(PTR_PTR_1126db3f0,puVar1);
      func_0x000107c61180();
      func_0x000107c5c28c(param_1);
      func_0x000107c611b0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c40dcc; end: 100c40e67;  */

void FUN_100c40dcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar2 = auStack_40;
  func_0x000107c61174();
  FUN_100c40e68(auStack_40,0);
  uStack_3c = 0;
  func_0x000107c61174(param_1);
  uVar1 = uStack_38;
  auStack_40[0] = 0;
  uStack_38 = param_1;
  func_0x000107c61170(uVar1);
  FUN_100c40f0c(auStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c40e68; end: 100c40f0b;  */

long FUN_100c40e68(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x000107c5d0f0();
  *(int *)(param_2 + 4) = (int)lVar1;
  lVar1 = param_3;
  func_0x000107c5cb78();
  func_0x000107c61180();
  *(long *)(param_2 + 8) = lVar1;
  lVar1 = param_3;
  func_0x000107c5dd14();
  *(long *)(param_2 + 0x10) = lVar1;
  func_0x000107c42bd4(param_3);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 100c40f0c; end: 100c40f53;  */

void FUN_100c40f0c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    func_0x000107c610f4(PTR_PTR_1126db130);
    func_0x000107c48ef8(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c40f54; end: 100c40fdb;  */

/* WARNING: Possible PIC construction at 0x000100c40fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c40fa4) */

void FUN_100c40f54(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_100c40fdc(param_2,0);
  func_0x000107c61180();
  func_0x000107c5c28c(param_1);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c40fdc; end: 100c411db;  */

void FUN_100c40fdc(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126db290;
  func_0x000107c61174(param_2);
  func_0x000107c61168(puVar1);
  puVar1 = param_2;
  FUN_100c411dc();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61170(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar5 = PTR_PTR_1126db290;
    func_0x000107c61174(param_2);
    func_0x000107c61168(puVar5);
    puVar5 = PTR_PTR_1126db290;
    if (param_2 == (undefined *)0x0) {
      func_0x000107c61160();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      func_0x000107c610f4();
      puVar2 = param_2;
      func_0x000107c5d0f0(param_2);
      puVar3 = param_2;
      func_0x000107c5cb78(param_2);
      func_0x000107c61180();
      puVar4 = param_2;
      func_0x000107c5dd14(param_2);
      func_0x000107c42bd4(param_2);
      FUN_100c41510(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      func_0x000107c61170(puVar3);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    func_0x000107c61170(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    func_0x000107c61170(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar5 = param_2;
    func_0x000107c5d0f0();
    *(int *)(puVar1 + 0x14) = (int)puVar5;
    puVar5 = param_2;
    func_0x000107c5cb78(param_2);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(puVar5);
    puVar5 = param_2;
    func_0x000107c5dd14();
    *(undefined **)(puVar1 + 0x20) = puVar5;
    func_0x000107c42bd4(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    func_0x000107c61174(puVar1);
    puVar5 = puVar1;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c411dc; end: 100c414df;  */

void FUN_100c411dc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c61174();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000107c50940();
    if ((long)puVar1 < 0) {
      puVar1 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c41220();
      func_0x000107c61170(puVar1);
      func_0x0001001b9e08(puVar6,&UNK_10f50cf3d);
      if (puVar6 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x000107c5d0f0(param_1);
        func_0x000107c6132c(puVar6,1,(ulong)puVar1 & 0xffffffff);
        puVar1 = puVar6;
        func_0x000107c613a8();
        if ((int)puVar1 == 100) {
          puVar1 = puVar6;
          func_0x000107c61358(puVar6,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126db130);
          func_0x000107c6134c(puVar6,1);
          func_0x000107c61350(puVar6,1);
          puVar3 = puVar2;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar2);
          func_0x000107c613a4(puVar6);
          if (puVar3 == (undefined *)0x0) goto LAB_100c41454;
          puVar6 = PTR_PTR_1126db290;
          func_0x000107c610f4(PTR_PTR_1126db290);
          puVar2 = puVar3;
          func_0x000107c5d0f0(puVar3);
          puVar4 = puVar3;
          func_0x000107c5cb78(puVar3);
          func_0x000107c61180();
          puVar5 = puVar3;
          func_0x000107c5dd14(puVar3);
          func_0x000107c42bd4(puVar3);
          FUN_100c41510(puVar6,puVar1,puVar2,puVar4,puVar5);
          param_1 = puVar3;
          goto LAB_100c412d8;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x000107c50940(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126db130);
      puVar2 = puVar6;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar6);
      if (puVar2 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126db290;
        func_0x000107c610f4(PTR_PTR_1126db290);
        puVar3 = puVar2;
        func_0x000107c5d0f0(puVar2);
        puVar4 = puVar2;
        func_0x000107c5cb78(puVar2);
        func_0x000107c61180();
        puVar5 = puVar2;
        func_0x000107c5dd14(puVar2);
        func_0x000107c42bd4(puVar2);
        FUN_100c41510(puVar6,puVar1,puVar3,puVar4,puVar5);
        param_1 = puVar2;
LAB_100c412d8:
        func_0x000107c61170(puVar4);
        goto LAB_100c4145c;
      }
LAB_100c41454:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_100c4145c:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c414e0; end: 100c414ef; -[SCSnapchattersDeltaSyncMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c414e0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911e4);
}



/* Entry: 100c414f0; end: 100c414ff; -[SCSnapchattersDeltaSyncMetadata version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c414f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911ec);
}



/* Entry: 100c41500; end: 100c4150f; -[SCSnapchattersDeltaSyncMetadata expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c41500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911f0);
}



/* Entry: 100c41510; end: 100c415d3;  */

undefined1 *
FUN_100c41510(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  func_0x000107c61174(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126fde30;
    lStack_60 = param_2;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      *(undefined4 *)((long)plVar1 + 0x14) = param_4;
      func_0x000107c61174(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_5;
      func_0x000107c61170(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
    }
  }
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 100c415d4; end: 100c415df; -[SCSnapchattersDeltaSyncMetadataChangeRequest table] */

undefined * FUN_100c415d4(void)

{
  return &UNK_10f50cf1d;
}



/* Entry: 100c415e0; end: 100c41627; -[SCSnapchattersDeltaSyncMetadataChangeRequest createTableWithSQLite:] */

void FUN_100c415e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  func_0x000107c613a0(param_3,&UNK_10df973dc,0x8a,&uStack_18,0);
  if ((int)param_3 == 0) {
    func_0x000107c613a8(uStack_18);
    func_0x000107c61388(uStack_18);
  }
  return;
}



/* Entry: 100c41628; end: 100c419bf; -[SCSnapchattersDeltaSyncMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100c41628(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_100c419c0(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100c41a28(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50cfc3);
    if (lVar5 == 0) goto LAB_100c4195c;
    func_0x000107c61324(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    func_0x000107c6132c(lVar5,2,uVar6);
    func_0x000107c613a8();
    if ((int)lVar5 != 0x65) goto LAB_100c4195c;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x000107c57f38(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126db130);
    func_0x000107c5a210(puVar8);
LAB_100c41944:
    func_0x000107c61170(puVar8);
    func_0x000107c61174(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f50cf88);
        if (param_3 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126db130);
            func_0x000107c5a210(puVar4);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100c41968;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_100c41968;
    }
    FUN_100c419c0(param_1);
    func_0x000107c61180();
    lVar5 = param_4;
    FUN_100c41a28(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f50d009);
    if (param_3 != 0) {
      func_0x000107c61324(param_3,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      func_0x000107c6132c(param_3,3,uVar6);
      func_0x000107c613a8();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x000107c421f0(PTR_PTR_1126b04a8);
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126db130);
        func_0x000107c5a210(puVar8);
        goto LAB_100c41944;
      }
    }
LAB_100c4195c:
    puVar8 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar4);
LAB_100c41968:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c419c0; end: 100c41a27;  */

void FUN_100c419c0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db130;
    func_0x000107c610f4(PTR_PTR_1126db130);
    func_0x000107c48ef8(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c41a28; end: 100c41c47;  */

ulong FUN_100c41a28(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  
  func_0x000107c61174(param_3);
  pcVar4 = param_3;
  func_0x000107c5d0f0(param_3);
  pcVar5 = param_3;
  func_0x000107c5cb78();
  func_0x000107c61180();
  func_0x000107c61174();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
    goto LAB_100c41b38;
  }
  pcVar6 = pcVar5;
  func_0x000107c60858(pcVar5,0x8000100);
  uVar10 = param_2;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    func_0x000107c613d0(pcVar6);
    func_0x0001001cde08(param_2,pcVar6,pcVar7);
    goto LAB_100c41b38;
  }
  pcVar6 = pcVar5;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar5;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar6 != (char *)0x0) goto LAB_100c41af8;
    uVar10 = 0;
  }
  else {
LAB_100c41af8:
    pcVar8 = pcVar6;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar9 = pcVar6;
    func_0x000107c4adac(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x0001001cde08(param_2,pcVar7,pcVar9);
  }
  func_0x000107c61170(pcVar6);
LAB_100c41b38:
  func_0x000107c61170(pcVar5);
  pcVar6 = param_3;
  func_0x000107c5dd14(param_3);
  func_0x000107c42bd4(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce1c8(param_2,8,pcVar6,0);
  func_0x0001001ce2e4(param_2,6,uVar10 & 0xffffffff);
  func_0x0001001ce354(param_2,4,pcVar4,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  func_0x000107c61170(pcVar5);
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 100c41c48; end: 100c41c4b;  */

void FUN_100c41c48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c41c4c; end: 100c41c6f;  */

void FUN_100c41c4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c41c70; end: 100c41c7f;  */

void FUN_100c41c70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c41c80; end: 100c41ca3;  */

undefined8 FUN_100c41c80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100c41ca4; end: 100c41d6b; -[SCCameraHardwareInitOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c41d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c41d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c41ca4(long param_1)

{
  FUN_100c41c80(param_1 + _DAT_112dd8710);
  FUN_100c41c80(param_1 + _DAT_112dd8718);
  func_0x000107c61610(param_1 + _DAT_112dd8720);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd8768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd8780));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd8788));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd8790));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd8770));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dd8738));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dd8740));
  return;
}



/* Entry: 100c41d6c; end: 100c41d7b; -[SCCameraHardwareOperationBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c41d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127246a0);
  return;
}



/* Entry: 100c41d7c; end: 100c41d8f; -[SCCameraSynchronousOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c41d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127246c0,0);
  return;
}



/* Entry: 100c41d90; end: 100c41dcb;  */

void FUN_100c41d90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(lVar1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c41dcc; end: 100c41ddf;  */

void FUN_100c41dcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c41de0; end: 100c41f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c41de0(long param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(param_1 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    uVar2 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61574(uVar4);
    FUN_100c3d384();
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170();
    (*param_2)();
    if (((uVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      FUN_100c3baf4();
      func_0x000107c61170(param_1);
      FUN_100c3c730(uVar5);
    }
  }
  return;
}



/* Entry: 100c41f30; end: 100c41f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c41f30(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_112da0780);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
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
  FUN_100c42040(0);
  uVar2 = uVar5;
  FUN_100c42060(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 100c41f44; end: 100c4203f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c41f44(long param_1,code *param_2)

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
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
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
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*param_2)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 100c42040; end: 100c4205f;  */

void FUN_100c42040(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac4b8);
  return;
}



/* Entry: 100c42060; end: 100c42063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42060(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_100c42040();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 9;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(long *)(lVar4 + _DAT_113075eb0) = param_1;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 100c42064; end: 100c421ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42064(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_100c42040();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 9;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(long *)(lVar4 + _DAT_113075eb0) = param_1;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 100c421ac; end: 100c421af;  */

void FUN_100c421ac(long param_1,undefined8 param_2)

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



/* Entry: 100c421b0; end: 100c4221f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c421b0(code *param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113075e58) == '\x03') {
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113075e78));
  }
  return;
}



/* Entry: 100c42220; end: 100c422c3;  */

void FUN_100c42220(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc4(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c422c4; end: 100c42317; -[SCCapturerStateDevicePropertiesUpdate onDidChangeRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c422c4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  func_0x000107c61174();
  if (cVar1 == '\x03') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e78));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c42318; end: 100c423bb;  */

void FUN_100c42318(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4dbc4(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c423bc; end: 100c424b7;  */

void FUN_100c423bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10617eb74;
  puStack_60 = &UNK_110872b00;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c4dbc0(param_2);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4dbc4(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c424b8; end: 100c4250b; -[SCCapturerStateDevicePropertiesUpdate onDidChangeLowLightCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c424b8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  func_0x000107c61174();
  if (cVar1 == '\x06') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e98));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c4250c; end: 100c425d3; -[SCCapturerStateDevicePropertiesUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c4250c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075e98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075ea0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075ea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075eb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113075ed0));
  return;
}



/* Entry: 100c425d4; end: 100c425df;  */

void FUN_100c425d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c425e0; end: 100c42603;  */

void FUN_100c425e0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c42604; end: 100c42723; -[SCCameraHardwareUpdateDeviceFormatOperation publishState:] */

/* WARNING: Possible PIC construction at 0x000100c4263c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c42640) */

void FUN_100c42604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100c42654(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c42724; end: 100c4273f; -[SCManagedCapturerDevicePropertiesStateManagerImpl didChangeFrameRate:] */

/* WARNING: Possible PIC construction at 0x000100382974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100382978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103be458;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112da0780);
  func_0x000107c613fc(&UNK_1103be458,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1103be100;
  func_0x000107c613fc(&UNK_1103be100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61174(param_1);
  FUN_100c42740(0x100c42c2c,puVar1,uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100c42740; end: 100c42c1f;  */

/* WARNING: Possible PIC construction at 0x000100c427b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c427e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c42b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c42b58) */
/* WARNING: Removing unreachable block (ram,0x000100c42bb8) */
/* WARNING: Removing unreachable block (ram,0x000100c42a1c) */
/* WARNING: Removing unreachable block (ram,0x000100c42b98) */
/* WARNING: Removing unreachable block (ram,0x000100c42bd0) */
/* WARNING: Removing unreachable block (ram,0x000100c42ad0) */
/* WARNING: Removing unreachable block (ram,0x000100c42aa8) */
/* WARNING: Removing unreachable block (ram,0x000100c42a30) */
/* WARNING: Removing unreachable block (ram,0x000100c4292c) */
/* WARNING: Removing unreachable block (ram,0x000100c4290c) */
/* WARNING: Removing unreachable block (ram,0x000100c42874) */
/* WARNING: Removing unreachable block (ram,0x000100c42a28) */
/* WARNING: Removing unreachable block (ram,0x000100c428e8) */
/* WARNING: Removing unreachable block (ram,0x000100c42838) */
/* WARNING: Removing unreachable block (ram,0x000100c427e8) */
/* WARNING: Removing unreachable block (ram,0x000100c42bf4) */
/* WARNING: Removing unreachable block (ram,0x000100c4281c) */
/* WARNING: Removing unreachable block (ram,0x000100c427b8) */
/* WARNING: Removing unreachable block (ram,0x000100c42b6c) */
/* WARNING: Removing unreachable block (ram,0x000100c42b70) */
/* WARNING: Removing unreachable block (ram,0x000100c42bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42740(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar1 = &UNK_1103c1350;
    func_0x000107c613fc(&UNK_1103c1350,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = 0x101464fc8;
    *(ulong *)(puVar1 + 0x20) = param_4;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,3);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103c1378;
      func_0x000107c613fc(&UNK_1103c1378,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1014654e0;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101465398;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103c1390;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c61578(param_4,2);
      }
      else {
        uVar4 = param_4;
        FUN_100c42da8();
        if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61578(param_4,2);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar2);
          puVar3 = puVar1;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100c42c20; end: 100c42c2f;  */

void FUN_100c42c20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c42c30; end: 100c42c57;  */

void FUN_100c42c30(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e9544(param_1,*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c42c58; end: 100c42da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42c58(long param_1,ulong param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61574(uVar3);
    FUN_100c3d384(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    (*param_3)();
    if (((param_2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      FUN_100c3baf4();
      func_0x000107c61170(param_1);
      FUN_100c3c730(param_2);
    }
  }
  return;
}



/* Entry: 100c42da8; end: 100c42db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c42da8(long param_1)

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
    lVar3 = *(long *)(param_1 + _DAT_112da0780);
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
  FUN_100c42040(0);
  uVar2 = uVar5;
  (*(code *)0x100c42db4)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x2000000000000000;
}



/* Entry: 100c42db8; end: 100c42efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42db8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_100c42040();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 0;
  *(long *)(lVar4 + _DAT_113075e60) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 100c42efc; end: 100c42f03;  */

void FUN_100c42efc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c42f04; end: 100c42fb3; -[SCCameraHardwareUpdateDeviceFormatOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c42f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c42f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42f04(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dd88e8));
  func_0x000100c42f90(param_1 + _DAT_112dd88d0);
  func_0x000100c42f90(param_1 + _DAT_112dd88d8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd88f0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd8910));
  return;
}



/* Entry: 100c42fb4; end: 100c42fd7;  */

void FUN_100c42fb4(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c42fd8; end: 100c42fdb;  */

void FUN_100c42fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c42fdc; end: 100c42fe7; -[SCSnapchattersDeltaSyncMetadataChangeRequest .cxx_destruct] */

void FUN_100c42fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c42fe8; end: 100c42ffb; -[SCSnapchattersDeltaSyncMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c42fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127911e8,0);
  return;
}



/* Entry: 100c42ffc; end: 100c43337;  */

undefined8 * FUN_100c42ffc(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uStack_238;
  undefined1 uStack_231;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 uStack_189;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined2 uStack_170;
  byte bStack_16e;
  byte bStack_16d;
  undefined1 *puStack_150;
  undefined ***pppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_a0,param_1);
  }
  puVar3 = &uStack_111;
  FUN_100c43338();
  puVar4 = &uStack_189;
  func_0x0001008a97dc();
  uStack_1f8 = 0xf;
  uStack_1e8 = 0x100;
  uStack_1d0 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  bStack_16e = puVar4[0x1a];
  bStack_16d = puVar4[0x1b];
  uStack_180 = 10;
  uStack_170 = 0x100;
  ppuStack_188 = &PTR_SUB_1108629c8;
  pppuStack_148 = &ppuStack_200;
  uStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  bStack_f6 = puVar3[0x1a] | bStack_16e;
  bStack_f5 = puVar3[0x1b] & bStack_16d;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d0 = &ppuStack_188;
  uStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puVar5 = &uStack_231;
  puStack_150 = puVar4;
  puStack_d8 = puVar3;
  func_0x000100c434a4();
  uStack_68 = *(undefined8 *)(puVar5 + 0x10);
  uStack_60 = puVar5[0x19];
  uStack_5f = puVar5[0x18];
  uStack_50 = *(undefined8 *)(puVar5 + 0x28);
  uStack_5c = 1;
  pcStack_58 = FUN_100c43d7c;
  lStack_228 = 0;
  uStack_220 = 0;
  lStack_230 = 0;
  FUN_100c435d0(&lStack_230,&uStack_68,&lStack_48,1);
  FUN_100c436b8(&lStack_218,&lStack_230);
  uStack_238 = 0;
  puVar6 = &uStack_a0;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_238);
  func_0x000107c61180();
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    func_0x000107c60e14();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    func_0x000107c60e14();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_1108629c8;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    func_0x000107c60e14();
  }
  func_0x0001000e76e0(&uStack_78);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  lVar7 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  func_0x000107c60e78();
  func_0x000105007830(&ppuStack_110);
  func_0x000105007830(&ppuStack_188);
  func_0x000105007830(&ppuStack_200);
  func_0x000104d96620(&uStack_a0);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(lVar7);
  if ((bRam0000000113828fc0 & 1) == 0) {
    iVar2 = 0x13828fc0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      func_0x000100c433f0();
      uRam0000000113828f58 = 2;
      uRam0000000113828f68 = 0;
      uRam0000000113828f69 = uRam0000000113829499;
      uRam0000000113828f6b = uRam000000011382949b;
      ppuRam0000000113828f50 = &PTR_SUB_1108629c8;
      uRam0000000113828f88 = 0x113829480;
      uRam0000000113828f98 = 0;
      uRam0000000113828f90 = 0;
      uRam0000000113828fa8 = 0;
      uRam0000000113828fa0 = 0;
      uRam0000000113828fb8 = 0;
      uRam0000000113828fb0 = 0;
      func_0x000107c60e34(&SUB_105007830,0x113828f50,0x100000000);
      func_0x000107c60e4c(0x113828fc0);
    }
  }
  return (undefined8 *)0x113828f50;
}



/* Entry: 100c43338; end: 100c433ef;  */

undefined8 FUN_100c43338(void)

{
  int iVar1;
  
  if ((bRam0000000113828fc0 & 1) == 0) {
    iVar1 = 0x13828fc0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100c433f0();
      uRam0000000113828f58 = 2;
      uRam0000000113828f68 = 0;
      uRam0000000113828f69 = uRam0000000113829499;
      uRam0000000113828f6b = uRam000000011382949b;
      ppuRam0000000113828f50 = &PTR_SUB_1108629c8;
      uRam0000000113828f88 = 0x113829480;
      uRam0000000113828f98 = 0;
      uRam0000000113828f90 = 0;
      uRam0000000113828fa8 = 0;
      uRam0000000113828fa0 = 0;
      uRam0000000113828fb8 = 0;
      uRam0000000113828fb0 = 0;
      func_0x000107c60e34(&SUB_105007830,0x113828f50,0x100000000);
      func_0x000107c60e4c(0x113828fc0);
    }
  }
  return 0x113828f50;
}



/* Entry: 100c433f0; end: 100c4355f;  */

void FUN_100c433f0(void)

{
  int iVar1;
  
  if ((bRam00000001138294f0 & 1) == 0) {
    iVar1 = 0x138294f0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113829488 = 0xe;
      puRam0000000113829490 = &UNK_10f50c14b;
      uRam0000000113829498 = 0x1010000;
      pcRam00000001138294a0 = FUN_100c436f8;
      puRam00000001138294a8 = &UNK_108c2fb30;
      ppuRam0000000113829480 = &PTR_SUB_1108629c8;
      uRam00000001138294c0 = 0;
      uRam00000001138294b8 = 0;
      uRam00000001138294d0 = 0;
      uRam00000001138294c8 = 0;
      uRam00000001138294e0 = 0;
      uRam00000001138294d8 = 0;
      uRam00000001138294e8 = 0;
      func_0x000107c60e34(&SUB_105007830,0x113829480,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138294f0);
      return;
    }
  }
  return;
}



/* Entry: 100c43560; end: 100c435cf;  */

/* WARNING: Possible PIC construction at 0x000100c435f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c435f8) */
/* WARNING: Removing unreachable block (ram,0x000100c435fc) */
/* WARNING: Removing unreachable block (ram,0x000100c43610) */
/* WARNING: Removing unreachable block (ram,0x000100c43604) */

void FUN_100c43560(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar4 = &stack0xfffffffffffffff0;
  if (param_2 >> 0x3b == 0) {
    func_0x000107c60e20(param_2 << 5);
    return;
  }
  uVar5 = 0x100c43594;
  func_0x000104bd35f4();
  puVar1 = &stack0xffffffffffffffe0;
  while( true ) {
    uVar3 = param_2;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    if (uVar3 >> 0x3b == 0) {
      plVar2 = param_1 + 2;
      FUN_100c43560();
      *param_1 = (long)plVar2;
      param_1[1] = (long)plVar2;
      param_1[2] = (long)(plVar2 + uVar3 * 4);
      return;
    }
    func_0x0001053b832c();
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(ulong *)(puVar1 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x20;
    *(long **)(puVar1 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_100c435d0;
    puVar4 = puVar1 + -0x30;
    if (param_4 == 0) break;
    uVar5 = 0x100c435f8;
    puVar1 = puVar1 + -0x50;
    param_2 = param_4;
    unaff_x19 = param_1;
    unaff_x20 = param_3;
    unaff_x21 = uVar3;
  }
  return;
}



/* Entry: 100c435d0; end: 100c4363f;  */

void FUN_100c435d0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    func_0x000100c43594(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 4) {
      uVar2 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
      puVar1 = puVar1 + 4;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 100c43640; end: 100c436b7;  */

void FUN_100c43640(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000100c43594(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      func_0x000107c610b8(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 100c436b8; end: 100c436f7;  */

undefined8 * FUN_100c436b8(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100c43640(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  return param_1;
}



/* Entry: 100c436f8; end: 100c4372f;  */

void FUN_100c436f8(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if (*puVar2 < 0x17) {
    bVar1 = true;
  }
  else {
    bVar1 = puVar2[0xb] == 0;
  }
  *(bool *)param_2 = bVar1;
  return;
}



/* Entry: 100c43730; end: 100c4383b;  */

void FUN_100c43730(long *param_1,undefined8 param_2,long *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  func_0x000107c61174(param_2);
  uStack_58 = 0;
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_50 = param_2;
  FUN_100c43640(&lStack_68,*param_3,param_3[1],param_3[1] - *param_3 >> 5);
  FUN_100c4383c(lVar2,lVar1,&uStack_50,&lStack_68,&uStack_41);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x000107c60e14();
  }
  if (0 < param_4) {
    lVar1 = param_1[1];
    if (param_4 <= (int)((ulong)(lVar1 - *param_1) >> 3)) {
      if (lVar1 == lVar2) goto LAB_100c437ec;
      func_0x000107c61170(*(undefined8 *)(lVar1 + -8));
      param_1[1] = lVar1 + -8;
    }
  }
  FUN_100c438c0(param_1,lVar2,&uStack_50);
LAB_100c437ec:
  func_0x000107c61170(uStack_50);
  return;
}



/* Entry: 100c4383c; end: 100c438bf;  */

undefined8 *
FUN_100c4383c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((long)param_2 - (long)param_1 != 0) {
    uVar3 = (long)param_2 - (long)param_1 >> 3;
    param_2 = param_1;
    do {
      uVar4 = uVar3 >> 1;
      uVar2 = param_4;
      FUN_100c43c5c(param_4,*param_3,param_2[uVar4]);
      uVar1 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
      uVar3 = uVar4;
      if ((int)uVar2 == 0) {
        uVar3 = uVar1;
        param_2 = param_2 + uVar4 + 1;
      }
    } while (uVar3 != 0);
  }
  return param_2;
}



/* Entry: 100c438c0; end: 100c43a0b;  */

long * FUN_100c438c0(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar14 = (long *)param_1[1];
  plVar3 = param_1 + 2;
  if (plVar14 < (long *)*plVar3) {
    if (param_2 == plVar14) {
      lVar2 = *param_3;
      func_0x000107c61174(lVar2);
      *plVar14 = lVar2;
      param_1[1] = (long)(plVar14 + 1);
      param_1 = param_2;
    }
    else {
      FUN_100c43ed8(param_1,param_2,plVar14,param_2 + 1);
      lVar2 = 8;
      if ((long *)param_1[1] <= param_3 || param_3 < param_2) {
        lVar2 = 0;
      }
      lVar12 = *(long *)((long)param_3 + lVar2);
      func_0x000107c61174(lVar12);
      lVar2 = *param_2;
      *param_2 = lVar12;
      func_0x000107c61170(lVar2);
      param_1 = param_2;
    }
  }
  else {
    lVar2 = *param_1;
    uVar7 = ((long)plVar14 - lVar2 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
      func_0x000107c306a0();
      func_0x000100104120(&plStack_58);
      func_0x000107c60bd8();
      plVar14 = (long *)plVar3[2];
      if (plVar14 == (long *)plVar3[3]) {
        plVar4 = (long *)*plVar3;
        plVar16 = (long *)plVar3[1];
        if (plVar16 < plVar4 || (long)plVar16 - (long)plVar4 == 0) {
          uVar7 = (long)plVar14 - (long)plVar4 >> 2;
          if ((long)plVar14 - (long)plVar4 == 0) {
            uVar7 = 1;
          }
          lVar12 = plVar3[4];
          uVar8 = uVar7;
          lStack_a8 = lVar12;
          func_0x000100104040();
          puVar1 = (undefined8 *)(lVar12 + (uVar7 >> 2) * 8);
          lStack_b8 = plVar3[2];
          puStack_c0 = (undefined8 *)plVar3[1];
          lVar2 = lStack_b8 - (long)puStack_c0;
          puVar9 = puVar1;
          if (lVar2 != 0) {
            puVar9 = (undefined8 *)((long)puVar1 + lVar2);
            puVar10 = puVar1;
            do {
              uVar11 = *puStack_c0;
              *puStack_c0 = 0;
              *puVar10 = uVar11;
              lVar2 = lVar2 + -8;
              puStack_c0 = puStack_c0 + 1;
              puVar10 = puVar10 + 1;
            } while (lVar2 != 0);
            lStack_b8 = plVar3[2];
            puStack_c0 = (undefined8 *)plVar3[1];
          }
          lStack_c8 = *plVar3;
          *plVar3 = lVar12;
          plVar3[1] = (long)puVar1;
          lStack_b0 = plVar3[3];
          plVar3[2] = (long)puVar9;
          plVar3[3] = lVar12 + uVar8 * 8;
          func_0x000100104120(&lStack_c8);
          plVar14 = (long *)plVar3[2];
        }
        else {
          lVar2 = (((long)plVar16 - (long)plVar4 >> 3) + 1) / 2;
          plVar4 = plVar16 + -lVar2;
          plVar13 = plVar16 + -lVar2;
          if (plVar16 != plVar14) {
            do {
              lVar6 = *plVar16;
              plVar15 = plVar16 + 1;
              *plVar16 = 0;
              lVar12 = *plVar4;
              plVar13 = plVar4 + 1;
              *plVar4 = lVar6;
              func_0x000107c61170(lVar12);
              plVar4 = plVar13;
              plVar16 = plVar15;
            } while (plVar15 != plVar14);
            plVar16 = (long *)plVar3[1];
          }
          plVar14 = plVar13;
          plVar3[1] = (long)(plVar16 + -lVar2);
          plVar3[2] = (long)plVar14;
        }
      }
      param_2 = (long *)*param_2;
      plVar4 = param_2;
      func_0x000107c61174(param_2);
      *plVar14 = (long)param_2;
      plVar3[2] = plVar3[2] + 8;
      return plVar4;
    }
    uVar5 = *plVar3 - lVar2;
    uVar8 = (long)uVar5 >> 2;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar3;
    if (uVar8 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      func_0x000100104040();
      plStack_58 = plVar3;
    }
    lStack_50 = (long)plStack_58 + ((long)param_2 - lVar2);
    plStack_40 = plStack_58 + uVar8;
    lStack_48 = lStack_50;
    FUN_100c43a0c(&plStack_58,param_3);
    func_0x000100c43b50(param_1,&plStack_58,param_2);
    func_0x000100104120(&plStack_58);
  }
  return param_1;
}



/* Entry: 100c43a0c; end: 100c43c5b;  */

void FUN_100c43a0c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 == (undefined8 *)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if (puVar11 < puVar6 || (long)puVar11 - (long)puVar6 == 0) {
      uVar5 = (long)puVar9 - (long)puVar6 >> 2;
      if ((long)puVar9 - (long)puVar6 == 0) {
        uVar5 = 1;
      }
      lVar2 = param_1[4];
      uVar3 = uVar5;
      lStack_48 = lVar2;
      func_0x000100104040();
      puVar9 = (undefined8 *)(lVar2 + (uVar5 >> 2) * 8);
      lStack_58 = param_1[2];
      puStack_60 = (undefined8 *)param_1[1];
      lVar7 = lStack_58 - (long)puStack_60;
      puVar6 = puVar9;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)((long)puVar9 + lVar7);
        puVar11 = puVar9;
        do {
          uVar1 = *puStack_60;
          *puStack_60 = 0;
          *puVar11 = uVar1;
          lVar7 = lVar7 + -8;
          puStack_60 = puStack_60 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar7 != 0);
        lStack_58 = param_1[2];
        puStack_60 = (undefined8 *)param_1[1];
      }
      lStack_68 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar9;
      lStack_50 = param_1[3];
      param_1[2] = (long)puVar6;
      param_1[3] = lVar2 + uVar3 * 8;
      func_0x000100104120(&lStack_68);
      puVar9 = (undefined8 *)param_1[2];
    }
    else {
      lVar7 = (((long)puVar11 - (long)puVar6 >> 3) + 1) / 2;
      puVar6 = puVar11 + -lVar7;
      puVar8 = puVar11 + -lVar7;
      if (puVar11 != puVar9) {
        do {
          uVar4 = *puVar11;
          puVar10 = puVar11 + 1;
          *puVar11 = 0;
          uVar1 = *puVar6;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar4;
          func_0x000107c61170(uVar1);
          puVar6 = puVar8;
          puVar11 = puVar10;
        } while (puVar10 != puVar9);
        puVar11 = (undefined8 *)param_1[1];
      }
      puVar9 = puVar8;
      param_1[1] = (long)(puVar11 + -lVar7);
      param_1[2] = (long)puVar9;
    }
  }
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  *puVar9 = uVar1;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 100c43c5c; end: 100c43d13;  */

bool FUN_100c43c5c(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar4 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
    lVar2 = lVar3;
    FUN_100c43d14(lVar3,param_2,param_3);
    bVar1 = (int)lVar2 == *(int *)(lVar3 + 0xc);
    if (((int)lVar2 != 2) || (*(int *)(lVar3 + 0xc) == 2)) goto LAB_100c43ce8;
  }
  lVar3 = param_2;
  func_0x000107c50940(param_2);
  lVar4 = param_3;
  func_0x000107c50940(param_3);
  bVar1 = lVar3 < lVar4;
LAB_100c43ce8:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return bVar1;
}



/* Entry: 100c43d14; end: 100c43d7b;  */

undefined8 FUN_100c43d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_2;
  (**(code **)(param_1 + 0x10))(param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c43d7c; end: 100c43e2f;  */

undefined4 FUN_100c43d7c(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c43e30; end: 100c43ed7;  */

undefined8 FUN_100c43e30(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c439a8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    *param_3 = 1;
    param_1 = 0;
  }
  else {
    *param_3 = 0;
    lVar1 = param_2;
    func_0x000107c439a8(param_2);
    func_0x000107c61180();
    func_0x000107c4aa00();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100c43ed8; end: 100c43f4f;  */

void FUN_100c43ed8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar6 = (long)puVar1 - (long)param_4;
  puVar4 = puVar1;
  for (puVar3 = (undefined8 *)(param_2 + lVar6); puVar3 < param_3; puVar3 = puVar3 + 1) {
    uVar5 = *puVar3;
    *puVar3 = 0;
    *puVar4 = uVar5;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar4;
  if (puVar1 != param_4) {
    do {
      puVar1 = puVar1 + -1;
      uVar2 = *(undefined8 *)(param_2 + -8 + lVar6);
      *(undefined8 *)(param_2 + -8 + lVar6) = 0;
      uVar5 = *puVar1;
      *puVar1 = uVar2;
      func_0x000107c61170(uVar5);
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 100c43f50; end: 100c43fe3;  */

undefined8 * FUN_100c43f50(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_SUB_1108629c8;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 100c43fe4; end: 100c44077;  */

bool FUN_100c43fe4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8(param_2);
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return lVar2 != 0;
}



/* Entry: 100c44078; end: 100c440ff;  */

/* WARNING: Possible PIC construction at 0x000100c440c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c440c8) */

void FUN_100c44078(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_100c44100(param_2,0);
  func_0x000107c61180();
  func_0x000107c5c28c(param_1);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c44100; end: 100c442a7;  */

void FUN_100c44100(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  func_0x000107c61174();
  puVar1 = PTR_PTR_1126db288;
  func_0x000107c61174(param_1);
  func_0x000107c61168(puVar1);
  puVar1 = param_1;
  FUN_100c442a8();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126db288;
    func_0x000107c61174(param_1);
    func_0x000107c61168(puVar6);
    if (param_1 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126db288;
      func_0x000107c61160();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      puVar2 = PTR_PTR_1126db288;
      func_0x000107c610f4();
      puVar3 = param_1;
      func_0x000107c5d0f0();
      puVar4 = param_1;
      func_0x000107c5dc0c();
      puVar6 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        puStack_48 = PTR_PTR_1126fde38;
        puStack_50 = puVar2;
        func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
        puVar6 = (undefined *)ppuVar5;
        if (ppuVar5 != (undefined **)0x0) {
          *(undefined8 *)((long)ppuVar5 + 8) = 0xffffffffffffffff;
          *(int *)((long)ppuVar5 + 0x14) = (int)puVar3;
          *(int *)((long)ppuVar5 + 0x18) = (int)puVar4;
        }
      }
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    func_0x000107c61170(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    func_0x000107c61170(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x000107c5d0f0();
    *(int *)(puVar1 + 0x14) = (int)puVar6;
    puVar6 = param_1;
    func_0x000107c5dc0c();
    *(int *)(puVar1 + 0x18) = (int)puVar6;
    func_0x000107c61174(puVar1);
    puVar6 = puVar1;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c442a8; end: 100c44587;  */

void FUN_100c442a8(undefined *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  ppuVar7 = &puStack_50;
  func_0x000107c61174();
  if (param_1 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = param_1;
    func_0x000107c50940();
    if ((long)puVar8 < 0) {
      puVar8 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      puVar4 = puVar8;
      func_0x000107c41220();
      func_0x000107c61170(puVar8);
      func_0x0001001b9e08(puVar4,&UNK_10f50d07f);
      if (puVar4 != (undefined *)0x0) {
        puVar8 = param_1;
        func_0x000107c5d0f0(param_1);
        func_0x000107c6132c(puVar4,1,(ulong)puVar8 & 0xffffffff);
        puVar8 = puVar4;
        func_0x000107c613a8();
        if ((int)puVar8 == 100) {
          puVar5 = puVar4;
          func_0x000107c61358(puVar4,0);
          puVar6 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126db128);
          func_0x000107c6134c(puVar4,1);
          func_0x000107c61350(puVar4,1);
          puVar8 = puVar6;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar6);
          func_0x000107c613a4(puVar4);
          if (puVar8 != (undefined *)0x0) {
            puVar4 = PTR_PTR_1126db288;
            func_0x000107c610f4();
            puVar6 = puVar8;
            func_0x000107c5d0f0();
            uVar1 = SUB84(puVar6,0);
            puVar6 = puVar8;
            func_0x000107c5dc0c();
            puVar9 = (undefined1 *)0x0;
            param_1 = puVar8;
            if (puVar4 == (undefined *)0x0) goto LAB_100c44518;
            uVar2 = SUB84(puVar6,0);
            puStack_48 = PTR_PTR_1126fde38;
            puStack_50 = puVar4;
            func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
            goto LAB_100c44398;
          }
          goto LAB_100c443b0;
        }
      }
      puVar9 = (undefined1 *)0x0;
      goto LAB_100c44518;
    }
    puVar5 = param_1;
    func_0x000107c50940();
    puVar4 = PTR_PTR_1126b04a8;
    func_0x000107c421f0();
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126db128);
    puVar8 = puVar4;
    func_0x000107c4d9b8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    if (puVar8 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126db288;
      func_0x000107c610f4();
      puVar6 = puVar8;
      func_0x000107c5d0f0();
      uVar1 = SUB84(puVar6,0);
      puVar6 = puVar8;
      func_0x000107c5dc0c();
      uVar2 = SUB84(puVar6,0);
      param_1 = puVar8;
      puVar9 = (undefined1 *)0x0;
      if (puVar4 == (undefined *)0x0) goto LAB_100c44518;
      puStack_48 = PTR_PTR_1126fde38;
      puStack_50 = puVar4;
      func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
      ppuVar7 = ppuVar3;
LAB_100c44398:
      param_1 = puVar8;
      puVar9 = (undefined1 *)ppuVar7;
      if (ppuVar7 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar7 + 8) = puVar5;
        *(undefined4 *)((long)ppuVar7 + 0x14) = uVar1;
        *(undefined4 *)((long)ppuVar7 + 0x18) = uVar2;
      }
      goto LAB_100c44518;
    }
  }
LAB_100c443b0:
  puVar9 = (undefined1 *)0x0;
  param_1 = puVar8;
LAB_100c44518:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100c44588; end: 100c44597; -[SCSnapchattersCountSummary type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c44588(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911dc);
}



/* Entry: 100c44598; end: 100c445a3; -[SCSnapchattersCountSummaryChangeRequest table] */

undefined * FUN_100c44598(void)

{
  return &UNK_10f50d05e;
}



/* Entry: 100c445a4; end: 100c445eb; -[SCSnapchattersCountSummaryChangeRequest createTableWithSQLite:] */

void FUN_100c445a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  func_0x000107c613a0(param_3,&UNK_10df97466,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    func_0x000107c613a8(uStack_18);
    func_0x000107c61388(uStack_18);
  }
  return;
}



/* Entry: 100c445ec; end: 100c44a5b; -[SCSnapchattersCountSummaryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100c445ec(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar2 == 1) {
    FUN_100c44a5c(param_1);
    func_0x000107c61180();
    func_0x000107c61174();
    puVar11 = puVar6;
    func_0x000107c5d0f0(puVar6);
    puVar7 = puVar6;
    func_0x000107c5dc0c(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    FUN_100c3b024(param_4,6,puVar7,0);
    func_0x0001001ce354(param_4,4,puVar11,0);
    lVar8 = param_4;
    func_0x0001001ce548(param_4,(iVar2 - iVar3) + iVar4);
    func_0x000107c61170(puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f50d107);
    if (lVar8 == 0) goto LAB_100c449e8;
    func_0x000107c61324(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
    }
    func_0x000107c6132c(lVar8,2,uVar9);
    func_0x000107c613a8();
    if ((int)lVar8 != 0x65) goto LAB_100c449e8;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x000107c57f38(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126db128);
    func_0x000107c5a210(puVar11);
LAB_100c449d0:
    func_0x000107c61170(puVar11);
    func_0x000107c61174(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f50d0cb);
        if (param_3 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)param_3 == 0x65) {
            puVar6 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126db128);
            func_0x000107c5a210(puVar6);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100c449f4;
          }
        }
      }
      puVar11 = (undefined *)0x0;
      goto LAB_100c449f4;
    }
    FUN_100c44a5c(param_1);
    func_0x000107c61180();
    func_0x000107c61174();
    puVar11 = puVar6;
    func_0x000107c5d0f0(puVar6);
    puVar7 = puVar6;
    func_0x000107c5dc0c(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    FUN_100c3b024(param_4,6,puVar7,0);
    func_0x0001001ce354(param_4,4,puVar11,0);
    lVar8 = param_4;
    func_0x0001001ce548(param_4,(iVar2 - iVar3) + iVar4);
    func_0x000107c61170(puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f50d14e);
    if (param_3 != 0) {
      func_0x000107c61324(param_3,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(param_3,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
      }
      func_0x000107c6132c(param_3,3,uVar9);
      func_0x000107c613a8();
      if ((int)param_3 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x000107c421f0(PTR_PTR_1126b04a8);
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126db128);
        func_0x000107c5a210(puVar11);
        goto LAB_100c449d0;
      }
    }
LAB_100c449e8:
    puVar11 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar6);
LAB_100c449f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100c44a5c; end: 100c44abb;  */

void FUN_100c44a5c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db128;
    func_0x000107c610f4(PTR_PTR_1126db128);
    func_0x000107c48f04();
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c44abc; end: 100c44b4f;  */

/* WARNING: Possible PIC construction at 0x000100c44ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c44ae4) */

void FUN_100c44abc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c409f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c44b50; end: 100c44b67; -[SCUnlockLensController delegate] */

void FUN_100c44b50(long param_1)

{
  func_0x000107c61148(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c44b68; end: 100c44bf7; -[SCUnlockableDataStore unlockLensController:didUpdateScanUnlockedLensesData:] */

void FUN_100c44b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100c44cfc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c44bf8; end: 100c44c33;  */

void FUN_100c44bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c3ebd4(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100c44c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  return;
}



/* Entry: 100c44c34; end: 100c44c7b;  */

void FUN_100c44c34(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x10) = param_2;
  }
  func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c44c7c; end: 100c44cb3;  */

void FUN_100c44c7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c436e4(*(undefined4 *)(param_1 + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100c44cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 100c44cb4; end: 100c44cfb;  */

void FUN_100c44cb4(undefined4 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = param_1;
  }
  func_0x000107c60f3c(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c44cfc; end: 100c44d07;  */

void FUN_100c44cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setUnlockedLenses__112587cc8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c44d08; end: 100c44d4f;  */

void FUN_100c44d08(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x11) = param_2;
  }
  func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c44d50; end: 100c44e7b; -[SCUnlockableDataStore _setUnlockedLenses:] */

/* WARNING: Possible PIC construction at 0x000100c44d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c44de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c44e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c44dec) */
/* WARNING: Removing unreachable block (ram,0x000100c44d9c) */
/* WARNING: Removing unreachable block (ram,0x000100c44e04) */
/* WARNING: Removing unreachable block (ram,0x000100c44e30) */
/* WARNING: Removing unreachable block (ram,0x000100c44e5c) */
/* WARNING: Removing unreachable block (ram,0x000100c44e60) */
/* WARNING: Removing unreachable block (ram,0x000100c44e1c) */

void FUN_100c44d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c44e7c; end: 100c44f4b; -[SCUnlockableDataStore _postOnGlobalQueueNotificationName:userInfo:] */

void FUN_100c44e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3bfc8(param_1);
  func_0x000107c61180();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100c45294;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c44f4c; end: 100c44fa7; -[SCUnlockableDataStore _notificationPerformer] */

void FUN_100c44f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61158();
  func_0x000107c60b14();
  func_0x000107c61180();
  func_0x000107c44428(puVar1,param_2,0x19,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c44fa8; end: 100c450c7;  */

void FUN_100c44fa8(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x13) = param_2;
  }
  func_0x000107c60f3c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


