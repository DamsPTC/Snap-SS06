/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10017d998; end: 10017d9b7; -[KSCrash setBasePath:] */

void FUN_10017d998(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10017d960();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10017d9b8; end: 10017d9bf; -[KSCrash basePath] */

undefined8 FUN_10017d9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10017d9c0; end: 10017d9d7; -[KSCrash setDeleteBehaviorAfterSendAll:] */

void FUN_10017d9c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10017d9d8; end: 10017da2f;  */

void FUN_10017d9d8(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = &UNK_10dd38160;
  puStack_28 = &UNK_10dd38178;
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = &UNK_10dd38160;
  func_0x000107c61524(param_1,0,4,&puStack_30,param_1 + 0x58);
  return;
}



/* Entry: 10017da30; end: 10017da3f; -[KSCrash setIntrospectMemory:] */

void FUN_10017da30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  uRam000000011381b430 = param_3;
  return;
}



/* Entry: 10017da40; end: 10017da47; -[KSCrash setCatchZombies:] */

void FUN_10017da40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10017da48; end: 10017da57; -[KSCrash setMaxReportCount:] */

void FUN_10017da48(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uRam0000000113170168 = param_3;
  return;
}



/* Entry: 10017da58; end: 10017dbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10017da58(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  code *pcVar10;
  
  puVar4 = &stack0xffffffffffffffb0;
  uVar7 = *unaff_x20;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488;
  *(undefined8 *)((long)unaff_x20 + _DAT_1130923f0) = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_1130923f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_1130923e8;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)((long)unaff_x20 + _DAT_113092400) = 0;
  uVar3 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  func_0x00010017d9c8(0,uVar3);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  puVar5 = &UNK_1107a3778;
  func_0x000107c613fc(&UNK_1107a3778,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  puVar6 = &UNK_1107a37a0;
  func_0x000107c613fc(&UNK_1107a37a0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcVar10 = *(code **)(*param_1 + 0x60);
  func_0x000107c61174();
  uVar3 = 0x100a46ce0;
  puVar5 = puVar6;
  (*pcVar10)();
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  puVar1 = (undefined8 *)(puVar4 + _DAT_1130923f8);
  uVar9 = *puVar1;
  *puVar1 = uVar3;
  puVar1[1] = puVar5;
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uVar9);
  return puVar4;
}



/* Entry: 10017dbc0; end: 10017dc07;  */

void FUN_10017dbc0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10017dc08; end: 10017dc17; -[KSCrash setSearchQueueNames:] */

void FUN_10017dc08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  uRam000000011381b404 = param_3;
  return;
}



/* Entry: 10017dc18; end: 10017dc4b;  */

ulong FUN_10017dc18(ulong param_1)

{
  uRam0000000113170110 = (undefined4)param_1;
  if (cRam000000011381b1f8 == '\x01') {
    FUN_1001d2650();
    param_1 = (ulong)uRam000000011381b48c;
  }
  return param_1;
}



/* Entry: 10017dc4c; end: 10017dc73; -[KSCrash setMonitoring:] */

void FUN_10017dc4c(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_10017dc18();
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10017dc74; end: 10017dc7b;  */

void FUN_10017dc74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutorelease_11034d2e0)();
  return;
}



/* Entry: 10017dc7c; end: 10017dcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10017dc7c(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x19;
  undefined1 *puVar4;
  long lVar5;
  ulong unaff_x22;
  ulong uStack_4f0;
  undefined *puStack_4e8;
  ulong uStack_4e0;
  undefined1 *puStack_4d0;
  uint uStack_48c;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_43c;
  ulong uStack_438;
  undefined1 auStack_430 [1000];
  undefined8 uStack_48;
  
  func_0x000107c613c8();
  uRam000000011381b4a8 = 0;
  uRam000000011381b4a0 = 0;
  uRam000000011381b4b8 = 0;
  uRam000000011381b4b0 = 0;
  uRam000000011381b4c8 = 0;
  uRam000000011381b4c0 = 0;
  uRam000000011381b4d8 = 0;
  uRam000000011381b4d0 = 0;
  uRam000000011381b4e8 = 0;
  uRam000000011381b4e0 = 0;
  uRam000000011381b4f0 = param_1;
  FUN_10017dcb0();
  uStack_48 = extraout_x8;
  func_0x000107c611c4();
  if (-1 < (int)param_1) {
    func_0x000107c60f10();
    FUN_10017f1e8();
    if ((unaff_x19 & 1) != 0) {
      puStack_458 = &UNK_106aea940;
      uStack_450 = 0x10018ac60;
      uStack_448 = 0x10018ac64;
      pcStack_488 = FUN_10018abb8;
      pcStack_480 = FUN_10018ab3c;
      pcStack_478 = FUN_10018aa88;
      puStack_470 = &UNK_106aea944;
      pcStack_468 = FUN_10018abf8;
      uStack_460 = 0x10018a734;
      uStack_48c = 0;
      param_3 = auStack_430;
      uVar1 = uStack_438;
      FUN_10018a69c(uStack_438,uStack_43c,param_3,1000,&pcStack_488,0x11381b4a0,&uStack_48c);
      func_0x000107c60fd0();
      in_ZR = (int)uVar1 == 0;
      puVar4 = (undefined1 *)(ulong)(byte)in_ZR;
      param_1 = uStack_438;
      if ((int)uVar1 != 0) {
        unaff_x22 = (ulong)uStack_48c;
        func_0x000106aecfa4();
        func_0x000106aeab94();
        param_3 = (undefined1 *)0xfd;
        param_1 = extraout_x8_00;
        func_0x000106aee914();
      }
      goto LAB_10017de08;
    }
    func_0x000106aeaba8();
    param_3 = (undefined1 *)0xe0;
    func_0x000106aee914();
    param_1 = unaff_x19;
  }
  puVar4 = (undefined1 *)0x0;
LAB_10017de08:
  func_0x00010018ac68(uStack_48);
  if ((bool)in_ZR) {
    return puVar4;
  }
  func_0x000107c60e78();
  puVar2 = &uStack_4f0;
  uStack_4e0 = unaff_x22;
  puStack_4d0 = puVar4;
  func_0x000107c61174(param_3);
  puStack_4e8 = PTR_PTR_112703850;
  uStack_4f0 = param_1;
  func_0x000107c61154(&uStack_4f0,PTR_s_init_1125d9248);
  if (puVar2 != (ulong *)0x0) {
    lVar5 = (long)_DAT_112787cec;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined1 **)((long)puVar2 + lVar5) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10017dcb0; end: 10017dcc3;  */

void FUN_10017dcb0(void)

{
  return;
}



/* Entry: 10017dcc4; end: 10017de33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10017dcc4(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x19;
  undefined1 *puVar4;
  long lVar5;
  ulong unaff_x22;
  ulong uStack_4f0;
  undefined *puStack_4e8;
  ulong uStack_4e0;
  undefined1 *puStack_4d0;
  uint uStack_48c;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_43c;
  ulong uStack_438;
  undefined1 auStack_430 [1000];
  undefined8 uStack_48;
  
  FUN_10017dcb0();
  uStack_48 = extraout_x8;
  func_0x000107c611c4();
  if (-1 < (int)param_1) {
    func_0x000107c60f10();
    FUN_10017f1e8();
    if ((unaff_x19 & 1) != 0) {
      puStack_458 = &UNK_106aea940;
      uStack_450 = 0x10018ac60;
      uStack_448 = 0x10018ac64;
      pcStack_488 = FUN_10018abb8;
      pcStack_480 = FUN_10018ab3c;
      pcStack_478 = FUN_10018aa88;
      puStack_470 = &UNK_106aea944;
      pcStack_468 = FUN_10018abf8;
      uStack_460 = 0x10018a734;
      uStack_48c = 0;
      param_3 = auStack_430;
      uVar1 = uStack_438;
      FUN_10018a69c(uStack_438,uStack_43c,param_3,1000,&pcStack_488,0x11381b4a0,&uStack_48c);
      func_0x000107c60fd0();
      in_ZR = (int)uVar1 == 0;
      puVar4 = (undefined1 *)(ulong)(byte)in_ZR;
      param_1 = uStack_438;
      if ((int)uVar1 != 0) {
        unaff_x22 = (ulong)uStack_48c;
        func_0x000106aecfa4();
        func_0x000106aeab94();
        param_3 = (undefined1 *)0xfd;
        param_1 = extraout_x8_00;
        func_0x000106aee914();
      }
      goto LAB_10017de08;
    }
    func_0x000106aeaba8();
    param_3 = (undefined1 *)0xe0;
    func_0x000106aee914();
    param_1 = unaff_x19;
  }
  puVar4 = (undefined1 *)0x0;
LAB_10017de08:
  func_0x00010018ac68(uStack_48);
  if ((bool)in_ZR) {
    return puVar4;
  }
  func_0x000107c60e78();
  puVar2 = &uStack_4f0;
  uStack_4e0 = unaff_x22;
  puStack_4d0 = puVar4;
  func_0x000107c61174(param_3);
  puStack_4e8 = PTR_PTR_112703850;
  uStack_4f0 = param_1;
  func_0x000107c61154(&uStack_4f0,PTR_s_init_1125d9248);
  if (puVar2 != (ulong *)0x0) {
    lVar5 = (long)_DAT_112787cec;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined1 **)((long)puVar2 + lVar5) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10017de34; end: 10017deb7; -[SCScopeExposerProxy initWithUnderlyingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10017de34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703850;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112787cec;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10017deb8; end: 10017decf;  */

void FUN_10017deb8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10017ded0; end: 10017dfbb; -[SCOptionalScopeExposerProxy initWithUnderlyingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10017ded0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703840;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112787ce4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10017dfbc; end: 10017ee87;  */

/* WARNING: Possible PIC construction at 0x00010017e930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017e9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ea90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ead0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ebb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ebc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ebd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ebe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ebf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ec90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ecb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ecc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ece0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ecf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ed90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017eda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017edb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017edc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017edd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017edf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ee60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010017ee54) */
/* WARNING: Removing unreachable block (ram,0x00010017ee44) */
/* WARNING: Removing unreachable block (ram,0x00010017ee34) */
/* WARNING: Removing unreachable block (ram,0x00010017ee24) */
/* WARNING: Removing unreachable block (ram,0x00010017ee14) */
/* WARNING: Removing unreachable block (ram,0x00010017ee04) */
/* WARNING: Removing unreachable block (ram,0x00010017edf4) */
/* WARNING: Removing unreachable block (ram,0x00010017ede4) */
/* WARNING: Removing unreachable block (ram,0x00010017edd4) */
/* WARNING: Removing unreachable block (ram,0x00010017edc4) */
/* WARNING: Removing unreachable block (ram,0x00010017edb4) */
/* WARNING: Removing unreachable block (ram,0x00010017eda4) */
/* WARNING: Removing unreachable block (ram,0x00010017ed94) */
/* WARNING: Removing unreachable block (ram,0x00010017ed84) */
/* WARNING: Removing unreachable block (ram,0x00010017ed74) */
/* WARNING: Removing unreachable block (ram,0x00010017ed64) */
/* WARNING: Removing unreachable block (ram,0x00010017ed54) */
/* WARNING: Removing unreachable block (ram,0x00010017ed44) */
/* WARNING: Removing unreachable block (ram,0x00010017ed34) */
/* WARNING: Removing unreachable block (ram,0x00010017ed24) */
/* WARNING: Removing unreachable block (ram,0x00010017ed14) */
/* WARNING: Removing unreachable block (ram,0x00010017ed04) */
/* WARNING: Removing unreachable block (ram,0x00010017ecf4) */
/* WARNING: Removing unreachable block (ram,0x00010017ece4) */
/* WARNING: Removing unreachable block (ram,0x00010017ecd4) */
/* WARNING: Removing unreachable block (ram,0x00010017ecc4) */
/* WARNING: Removing unreachable block (ram,0x00010017ecb4) */
/* WARNING: Removing unreachable block (ram,0x00010017eca4) */
/* WARNING: Removing unreachable block (ram,0x00010017ec94) */
/* WARNING: Removing unreachable block (ram,0x00010017ec84) */
/* WARNING: Removing unreachable block (ram,0x00010017ec74) */
/* WARNING: Removing unreachable block (ram,0x00010017ec64) */
/* WARNING: Removing unreachable block (ram,0x00010017ec54) */
/* WARNING: Removing unreachable block (ram,0x00010017ec44) */
/* WARNING: Removing unreachable block (ram,0x00010017ec34) */
/* WARNING: Removing unreachable block (ram,0x00010017ec24) */
/* WARNING: Removing unreachable block (ram,0x00010017ec14) */
/* WARNING: Removing unreachable block (ram,0x00010017ec04) */
/* WARNING: Removing unreachable block (ram,0x00010017ebf4) */
/* WARNING: Removing unreachable block (ram,0x00010017ebe4) */
/* WARNING: Removing unreachable block (ram,0x00010017ebd4) */
/* WARNING: Removing unreachable block (ram,0x00010017ebc4) */
/* WARNING: Removing unreachable block (ram,0x00010017ebb4) */
/* WARNING: Removing unreachable block (ram,0x00010017eba4) */
/* WARNING: Removing unreachable block (ram,0x00010017eb94) */
/* WARNING: Removing unreachable block (ram,0x00010017eb84) */
/* WARNING: Removing unreachable block (ram,0x00010017eb74) */
/* WARNING: Removing unreachable block (ram,0x00010017eb64) */
/* WARNING: Removing unreachable block (ram,0x00010017eb54) */
/* WARNING: Removing unreachable block (ram,0x00010017eb44) */
/* WARNING: Removing unreachable block (ram,0x00010017eb34) */
/* WARNING: Removing unreachable block (ram,0x00010017eb24) */
/* WARNING: Removing unreachable block (ram,0x00010017eb14) */
/* WARNING: Removing unreachable block (ram,0x00010017eb04) */
/* WARNING: Removing unreachable block (ram,0x00010017eaf4) */
/* WARNING: Removing unreachable block (ram,0x00010017eae4) */
/* WARNING: Removing unreachable block (ram,0x00010017ead4) */
/* WARNING: Removing unreachable block (ram,0x00010017eac4) */
/* WARNING: Removing unreachable block (ram,0x00010017eab4) */
/* WARNING: Removing unreachable block (ram,0x00010017eaa4) */
/* WARNING: Removing unreachable block (ram,0x00010017ea94) */
/* WARNING: Removing unreachable block (ram,0x00010017ea84) */
/* WARNING: Removing unreachable block (ram,0x00010017ea74) */
/* WARNING: Removing unreachable block (ram,0x00010017ea64) */
/* WARNING: Removing unreachable block (ram,0x00010017ea54) */
/* WARNING: Removing unreachable block (ram,0x00010017ea44) */
/* WARNING: Removing unreachable block (ram,0x00010017ea34) */
/* WARNING: Removing unreachable block (ram,0x00010017ea24) */
/* WARNING: Removing unreachable block (ram,0x00010017ea14) */
/* WARNING: Removing unreachable block (ram,0x00010017ea04) */
/* WARNING: Removing unreachable block (ram,0x00010017e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010017e9e4) */
/* WARNING: Removing unreachable block (ram,0x00010017e9d4) */
/* WARNING: Removing unreachable block (ram,0x00010017e9c4) */
/* WARNING: Removing unreachable block (ram,0x00010017e9b4) */
/* WARNING: Removing unreachable block (ram,0x00010017e9a4) */
/* WARNING: Removing unreachable block (ram,0x00010017e994) */
/* WARNING: Removing unreachable block (ram,0x00010017e984) */
/* WARNING: Removing unreachable block (ram,0x00010017e974) */
/* WARNING: Removing unreachable block (ram,0x00010017e964) */
/* WARNING: Removing unreachable block (ram,0x00010017e954) */
/* WARNING: Removing unreachable block (ram,0x00010017e944) */
/* WARNING: Removing unreachable block (ram,0x00010017e934) */
/* WARNING: Removing unreachable block (ram,0x00010017ee64) */

void FUN_10017dfbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  
  puVar1 = &UNK_1103d76b8;
  func_0x000107c613fc(&UNK_1103d76b8,0x550,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  uVar2 = 0x112dafa98;
  FUN_1000285a8(0x112dafa98,&UNK_10d958bd0);
  func_0x000107c613fc();
  pcVar3 = FUN_1001a275c;
  FUN_1000841f8(FUN_1001a275c,puVar1,uVar2);
  FUN_100084214(&UNK_10d958ba0,0x29,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10017ee88; end: 10017ee8b;  */

void FUN_10017ee88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10017ee8c; end: 10017f1e7;  */

void FUN_10017ee8c(void)

{
  long unaff_x20;
  
  FUN_10017dfbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10017f1e8; end: 10017f39f;  */

int FUN_10017f1e8(long param_1,ulong *param_2,undefined4 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_e0 [96];
  uint uStack_80;
  
  lVar1 = param_1;
  func_0x000107c613b8(param_1,auStack_e0);
  if ((int)lVar1 < 0) {
    func_0x000107c60e5c();
    func_0x000106aece74();
    func_0x000106aece60();
    func_0x000106aecec4();
    uVar2 = extraout_x8_00;
LAB_10017f2f0:
    func_0x000106aee914(uVar2);
    uVar4 = 0;
  }
  else {
    func_0x000107c611c4(param_1,0);
    if ((int)param_1 < 0) {
      func_0x000107c60e5c();
      func_0x000106aece74();
      func_0x000106aece60();
      func_0x000106aecec4();
      uVar2 = extraout_x8_01;
      goto LAB_10017f2f0;
    }
    iVar6 = (int)param_4;
    uVar5 = (ulong)uStack_80;
    if ((((iVar6 == 0) || ((int)uStack_80 <= iVar6)) || (uVar5 = param_4, iVar6 < 1)) ||
       (lVar1 = param_1, func_0x000107c61068(param_1,(long)-iVar6,2), -1 < lVar1)) {
      uVar3 = (ulong)((int)uVar5 + 1);
      func_0x000107c610a0();
      if (uVar3 == 0) {
        func_0x000106aece7c();
        func_0x000106aecec4();
        func_0x000106aee914();
      }
      else {
        lVar1 = param_1;
        FUN_1001809e8(param_1,uVar3,uVar5);
        if ((int)lVar1 != 0) {
          *(undefined1 *)(uVar3 + (long)(int)uVar5) = 0;
          iVar6 = 1;
          goto LAB_10017f354;
        }
      }
      iVar6 = 0;
      uVar5 = 0;
    }
    else {
      func_0x000107c60e5c();
      func_0x000106aece74();
      func_0x000106aece60();
      func_0x000106aecec4();
      func_0x000106aee914(extraout_x8);
      iVar6 = 0;
      uVar5 = 0;
      uVar3 = 0;
    }
LAB_10017f354:
    uVar4 = (undefined4)uVar5;
    func_0x000107c60f10(param_1);
    if ((iVar6 != 0) || (uVar3 == 0)) goto LAB_10017f374;
    func_0x000107c60fd0(uVar3);
  }
  iVar6 = 0;
  uVar3 = 0;
LAB_10017f374:
  *param_2 = uVar3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar4;
  }
  return iVar6;
}



/* Entry: 10017f3a0; end: 10017f3a3;  */

void FUN_10017f3a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10017f3a4; end: 10017f8ff;  */

void FUN_10017f3a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10017f900; end: 10017f9cf;  */

long FUN_10017f900(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x21;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while (lVar3 = lVar4, (lVar2 - lVar1) / 0x138 != 0) {
    func_0x00010018cef4();
    func_0x00010017c4b0();
    func_0x00010018cf08(unaff_x21 + 0x138);
    lVar4 = extraout_x8;
    if ((bool)in_ZR) {
      lVar4 = lVar3;
    }
  }
  return lVar3;
}



/* Entry: 10017f9d0; end: 10017f9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017f9d0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1000a2ebc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11306d560) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10017f9d8; end: 10017fa43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017f9d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1000a2ebc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11306d560) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10017fa44; end: 10017fd23;  */

void FUN_10017fa44(void)

{
  return;
}



/* Entry: 10017fd24; end: 100180047;  */

/* WARNING: Possible PIC construction at 0x00010017ff08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ff98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ffa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ffb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ffc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ffd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017ffe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010017fff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100180008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100180018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010018000c) */
/* WARNING: Removing unreachable block (ram,0x00010017fffc) */
/* WARNING: Removing unreachable block (ram,0x00010017ffec) */
/* WARNING: Removing unreachable block (ram,0x00010017ffdc) */
/* WARNING: Removing unreachable block (ram,0x00010017ffcc) */
/* WARNING: Removing unreachable block (ram,0x00010017ffbc) */
/* WARNING: Removing unreachable block (ram,0x00010017ffac) */
/* WARNING: Removing unreachable block (ram,0x00010017ff9c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff8c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff7c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff6c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff5c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff4c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff2c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff1c) */
/* WARNING: Removing unreachable block (ram,0x00010017ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010018001c) */

void FUN_10017fd24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1103d3fb8;
  func_0x000107c613fc(&UNK_1103d3fb8,0x138,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  uVar2 = 0x112dabc08;
  FUN_1000285a8(0x112dabc08,&UNK_10d953e00);
  func_0x000107c613fc();
  puVar3 = &UNK_1015004a0;
  FUN_1000841f8(&UNK_1015004a0,puVar1,uVar2);
  FUN_100084214(&UNK_10d953dd0,0x2d,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100180048; end: 10018004b;  */

void FUN_100180048(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10018004c; end: 1001800bf;  */

void FUN_10018004c(void)

{
  long unaff_x20;
  
  FUN_10017fd24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 1001800c0; end: 1001800c3;  */

void FUN_1001800c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001800c4; end: 100180207;  */

void FUN_1001800c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100180208; end: 10018035b; -[SCAuthenticationSubScopesRouter initWithUserSessionScopeExposer:unauthenticatedScopeExposer:dataUnavailableScopeExposer:emergencyModeScopeExposer:userSessionScopeServices:unauthenticatedScopeServices:] */

undefined1 *
FUN_100180208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e9ce8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10018035c; end: 1001803a7;  */

void FUN_10018035c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001803a8; end: 100180403;  */

void FUN_1001803a8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7020;
  func_0x000107c610f8();
  func_0x000107c493f4();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 100180404; end: 10018058f;  */

void FUN_100180404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_c0;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  lVar4 = 0x112da01a0;
  FUN_1000285a8(0x112da01a0,&UNK_10d9427f8);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_101453fac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101453f18;
  puStack_78 = &UNK_1103bcde0;
  ppuVar5 = &puStack_90;
  uStack_68 = uVar8;
  func_0x000107c60bc4();
  *(undefined ***)(lVar4 + 0x20) = ppuVar5;
  puStack_a0 = &UNK_101454040;
  puStack_c0 = puVar7;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_101453f18;
  puStack_a8 = &UNK_1103bce08;
  uStack_98 = uVar1;
  func_0x000107c60bc4();
  uVar2 = uStack_98;
  *(undefined ***)(lVar4 + 0x28) = ppuVar6;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uStack_68);
  puVar7 = PTR_PTR_1126a7028;
  func_0x000107c610f8();
  uVar8 = 0x112da01a8;
  FUN_1000285a8(0x112da01a8,&UNK_10d942800);
  lVar9 = lVar4;
  func_0x000107c5fc48(lVar4,uVar8);
  func_0x000107c61574(lVar4);
  func_0x000107c47ae8();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar3);
  *param_1 = puVar7;
  return;
}



/* Entry: 100180590; end: 1001805a7;  */

void FUN_100180590(long param_1,long param_2)

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



/* Entry: 1001805a8; end: 100180653; -[SCMatchaUserTraceLogger initWithNotificationCenter:listeners:] */

undefined1 *
FUN_1001805a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ef700;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c040(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100180654; end: 100180677; -[SCMatchaUserTraceLogger _observerBackgrounding] */

void FUN_100180654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addObserver_selector_name_object_11259c238,
             param_1,PTR_s__didEnterBackground__11252ea28,
             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_110345a10,0);
  return;
}



/* Entry: 100180678; end: 1001806a3;  */

void FUN_100180678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001806a4; end: 100180717; -[SCUserTraceLoggerServices initWithUserTraceLogger:] */

undefined1 * FUN_1001806a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b90;
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



/* Entry: 100180718; end: 100180723; -[SCUserTraceLoggerServices userTraceLogger] */

void FUN_100180718(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 100180724; end: 1001807b3;  */

void FUN_100180724(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_10009c698(0);
  func_0x000107c610f8();
  func_0x000100180768(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1001807b4; end: 1001807bb;  */

void FUN_1001807b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1001807bc; end: 10018080f;  */

void FUN_1001807bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100180810; end: 100180817;  */

void FUN_100180810(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100099938();
  func_0x000107c613fc();
  FUN_10018088c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100180818; end: 10018088b;  */

void FUN_100180818(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100099938();
  func_0x000107c613fc();
  FUN_10018088c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10018088c; end: 1001809e7;  */

void FUN_10018088c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a71e0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1001809e8; end: 100180a63;  */

bool FUN_1001809e8(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  do {
    if (param_3 < 1) {
LAB_100180a54:
      return param_3 < 1;
    }
    uVar2 = param_1;
    func_0x000107c612bc(param_1,param_2,param_3);
    iVar1 = (int)uVar2;
    if (iVar1 == -1) {
      func_0x000107c60e5c();
      func_0x000106aece74();
      func_0x000106aece60();
      func_0x000106aeceb0();
      func_0x000106aee914();
      goto LAB_100180a54;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  } while( true );
}



/* Entry: 100180a64; end: 100180b47; -[SCAuthenticationWatchdogFactoryServiceProvider provide] */

void FUN_100180a64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c5580;
  func_0x000107c610f4(PTR_PTR_1126c5580);
  func_0x000107c45890();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100180b48; end: 10018163f;  */

undefined8 FUN_100180b48(void)

{
  int iVar1;
  
  if ((bRam000000011383d120 & 1) == 0) {
    iVar1 = 0x1383d120;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x00010016fe0c(0x11383d0a8);
      func_0x000107c60e4c(0x11383d120);
    }
  }
  return 0x11383d0a8;
}



/* Entry: 100181640; end: 100181673;  */

undefined8 FUN_100181640(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0xa54ff53a3c6ef372;
  *param_1 = 0xbb67ae856a09e667;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[2] = 0x9b05688c510e527f;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x20;
  return 1;
}



/* Entry: 100181674; end: 10018167b;  */

undefined8 FUN_100181674(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x28) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x2c) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x2c) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (int)param_3;
        return 1;
      }
      lVar5 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,lVar5);
      }
      func_0x000100181940(param_1 + 8,puVar2,1);
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (0x3f < param_3) {
      func_0x000100181940(param_1 + 8,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x70) = (int)param_3;
      func_0x000107c610b4(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 10018167c; end: 10018178f;  */

undefined8 FUN_10018167c(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x20) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x24) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(param_1 + 0x68);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      lVar5 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,lVar5);
      }
      func_0x000100181940(param_1,puVar2,1);
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (0x3f < param_3) {
      func_0x000100181940(param_1,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      func_0x000107c610b4(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 100181790; end: 100181887;  */

undefined8 FUN_100181790(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + 10;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0x1a];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (uVar2 < 0x38) {
    if (lVar3 == 0x38) goto LAB_100181814;
  }
  else {
    if (uVar2 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar3,0x3f - uVar4);
    }
    func_0x000100181940(param_2,puVar1,1);
    lVar3 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar3,0x38 - lVar3);
LAB_100181814:
  uVar5 = NEON_rev32(uVar5,1);
  uVar5 = NEON_rev64(uVar5,4);
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  func_0x000100181940(param_2,puVar1,1);
  uVar5 = 0;
  param_2[0x1a] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  uVar2 = param_2[0x1b];
  if (uVar2 < 0x21) {
    if (3 < uVar2) {
      uVar4 = (ulong)(uVar2 >> 2);
      do {
        uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar4 = uVar4 - 1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 100181888; end: 10018296f;  */

void FUN_100181888(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  puVar1 = &uStack_48;
  if (0x1f < param_3) {
    puVar1 = param_2;
  }
  FUN_100181790(puVar1,param_1 + 8);
  if (param_3 < 0x20) {
    func_0x000107c610b4(param_2,&uStack_48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x100181918);
  (*pcVar2)();
}



/* Entry: 100182970; end: 100182977; -[SCConfigRepository setNeedsASERSync:] */

void FUN_100182970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 100182978; end: 1001829a3;  */

void FUN_100182978(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001829a4; end: 100182a4b; -[SCConfigManagerImpl _readEtagFromDB] */

void FUN_1001829a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4f994(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100182a4c; end: 100182a4f; -[SCConfigRepository readEtagFromDB:] */

void FUN_100182a4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be864d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__readEtagFromFileSystemOnly__11257f2d0);
  return;
}



/* Entry: 100182a50; end: 100182aef; -[SCConfigRepository _readEtagFromFileSystemOnly:] */

void FUN_100182a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10018367c;
  puStack_38 = &UNK_11087bb30;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4f990(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100182af0; end: 100182d87; -[SCConfigRepository readEtagAndTimestampFromFileSystemDB:] */

void FUN_100182af0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  long lStack_40;
  char cStack_31;
  
  func_0x000107c61174(param_3);
  if (*(long **)(param_1 + 0x38) == (long *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c3fcec();
    func_0x000107c61170(uVar3);
    (**(code **)(param_3 + 0x10))(param_3,0,0);
    goto LAB_100182ce8;
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(&uStack_48);
  if (cStack_31 < '\0') {
    if (lStack_40 != 0) goto LAB_100182b94;
LAB_100182bf0:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c3fcec();
    func_0x000107c61170(uVar3);
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    if (cStack_31 == '\0') goto LAB_100182bf0;
LAB_100182b94:
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      func_0x000107c3fcec();
      func_0x000107c61170(uVar3);
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      plVar2 = *(long **)(param_1 + 0x38);
      (**(code **)(*plVar2 + 0x70))();
      if ((long)plVar2 < 1) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x000107c41360((double)plVar2,PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x000107c61180();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      func_0x000107c3fcec();
      func_0x000107c61170(uVar3);
      (**(code **)(param_3 + 0x10))(param_3,puVar1,puVar4);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar1);
  }
  if (cStack_31 < '\0') {
    func_0x000107c60e14(uStack_48);
  }
LAB_100182ce8:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100182d88; end: 100182d93;  */

void FUN_100182d88(void)

{
  return;
}



/* Entry: 100182d94; end: 100182df3;  */

void FUN_100182d94(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  int extraout_w11;
  
  FUN_100182d88();
  FUN_100182df4();
  func_0x000100182e00();
  lVar1 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      FUN_1001078e4();
      lVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    func_0x00010533bc5c();
  }
  else {
    func_0x000100182e0c(*(undefined8 *)(lVar1 + 0x28));
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return;
}



/* Entry: 100182df4; end: 100182e17;  */

void FUN_100182df4(long param_1)

{
  long lStack0000000000000018;
  
  lStack0000000000000018 = param_1 + 0x68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_rdlock_11034c960)();
  return;
}



/* Entry: 100182e18; end: 100182e73;  */

undefined8 FUN_100182e18(long param_1)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  undefined8 uVar2;
  
  FUN_100182df4();
  lVar1 = *(long *)(param_1 + 0x140);
  if (*(long *)(param_1 + 0x148) != 0) {
    do {
      FUN_1001078e4();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x10);
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return uVar2;
}



/* Entry: 100182e74; end: 100182e87; -[SCConfigMetricGraphene2 cofEtagReadResult:source:] */

char * FUN_100182e74(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar8 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (lVar8 != 0) {
    plVar14 = *(long **)(lVar8 + 8);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_78,pcVar9);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar9 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar9 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_60,pcVar9);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087a3a8,&uStack_98,1);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  func_0x000107c61170(param_4);
  pcVar9 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar9;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  pcVar13 = *(char **)(pcVar9 + 0x10);
  pcVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (pcVar13 != (char *)0x0) {
    FUN_1000285a8(0x112d38330,&UNK_10d91d920);
    pcVar10 = pcVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    pcVar9 = pcVar9 + 0x38;
    do {
      uVar3 = *(ulong *)(pcVar9 + -0x18);
      uVar5 = *(ulong *)(pcVar9 + -0x10);
      uVar4 = *(undefined8 *)(pcVar9 + -8);
      uVar6 = *(undefined8 *)pcVar9;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar11 = uVar3;
      uVar12 = uVar5;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar7)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(pcVar10 + uVar12 + 0x40) =
           *(ulong *)(pcVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(pcVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(pcVar10 + 0x38) + uVar11 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(pcVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar7)();
      }
      pcVar9 = pcVar9 + 0x20;
      *(long *)(pcVar10 + 0x10) = *(long *)(pcVar10 + 0x10) + 1;
      pcVar13 = pcVar13 + -1;
    } while (pcVar13 != (char *)0x0);
    func_0x000107c61574(pcVar10);
  }
  return pcVar10;
}



/* Entry: 100182e88; end: 1001830b7;  */

char * FUN_100182e88(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,pcVar8);
    func_0x000107c61174(param_3);
    if (param_3 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      func_0x000107c61178(param_3);
      pcVar8 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,pcVar8);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087a3a8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar13 = 0;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  func_0x000107c61170(param_3);
  pcVar8 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar8;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  pcVar12 = *(char **)(pcVar8 + 0x10);
  pcVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (pcVar12 != (char *)0x0) {
    FUN_1000285a8(0x112d38330,&UNK_10d91d920);
    pcVar9 = pcVar12;
    func_0x000107c60498();
    func_0x000107c6157c();
    pcVar8 = pcVar8 + 0x38;
    do {
      uVar3 = *(ulong *)(pcVar8 + -0x18);
      uVar5 = *(ulong *)(pcVar8 + -0x10);
      uVar4 = *(undefined8 *)(pcVar8 + -8);
      uVar6 = *(undefined8 *)pcVar8;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar10 = uVar3;
      uVar11 = uVar5;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar7)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(pcVar9 + uVar11 + 0x40) =
           *(ulong *)(pcVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(pcVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(pcVar9 + 0x38) + uVar10 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(pcVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar7)();
      }
      pcVar8 = pcVar8 + 0x20;
      *(long *)(pcVar9 + 0x10) = *(long *)(pcVar9 + 0x10) + 1;
      pcVar12 = pcVar12 + -1;
    } while (pcVar12 != (char *)0x0);
    func_0x000107c61574(pcVar9);
  }
  return pcVar9;
}



/* Entry: 1001830b8; end: 1001831c7;  */

undefined * FUN_1001830b8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    FUN_1000285a8(0x112d38330,&UNK_10d91d920);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001831c8);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 1001831c8; end: 1001833c7;  */

void FUN_1001831c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce0510;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1001833c8; end: 10018367b;  */

void FUN_1001833c8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112d38330;
  FUN_1000285a8(0x112d38330,&UNK_10d91d920);
  lVar9 = lVar19;
  func_0x000107c60490(lVar19,lVar1,param_2,uVar8);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_100183648:
    func_0x000107c61574(lVar19);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100183678);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
            if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
          }
          goto LAB_100183648;
        }
        uVar17 = puVar18[lVar20];
        lVar12 = lVar12 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar12;
    }
    lVar12 = (LZCOUNT(uVar11) | lVar20 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + lVar12);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar12);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar8,uVar4);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10018367c);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Entry: 10018367c; end: 1001837f3;  */

/* WARNING: Possible PIC construction at 0x00010018376c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100183784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001836f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100183770) */
/* WARNING: Removing unreachable block (ram,0x0001001836fc) */
/* WARNING: Removing unreachable block (ram,0x000100183788) */

void FUN_10018367c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3fcec();
  }
  else {
    if (param_4 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5c9e4(param_4);
    }
    func_0x000107c610f4(PTR_PTR_1126b7878);
    func_0x000107c467c8(param_1);
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3fcec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001837f4; end: 100183ab7;  */

long FUN_1001837f4(long param_1)

{
  func_0x000100174d04(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 100183ab8; end: 100183ad7;  */

void FUN_100183ab8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100183ad8; end: 100183b9b; -[SCCircumstanceEngineEtag initWithEtagId:etag:lastUpdateTimestampInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100183ad8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_2;
  func_0x000107c614f0();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_2 + _DAT_113092350);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_2 + _DAT_113092358);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_113092360) = param_1;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100183b9c; end: 1001841e7;  */

void FUN_100183b9c(long param_1)

{
  func_0x0001001838fc();
  if (param_1 != 0) {
    func_0x000107c37618();
  }
  return;
}



/* Entry: 1001841e8; end: 100184297;  */

/* WARNING: Possible PIC construction at 0x000100184240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100184278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100184244) */

void FUN_1001841e8(long param_1,long param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((param_2 == 0) || (param_1 == 0)) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c42a7c(param_2);
    func_0x000107c61180();
    func_0x000107c54684(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100184298; end: 1001842a3; -[SCCircumstanceEngineEtag etag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100184298(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113092358))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113092358);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001842a4; end: 1001842fb;  */

void FUN_1001842a4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001842fc; end: 10018433b;  */

void FUN_1001842fc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (*param_1 != 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *param_1 = lVar1;
  func_0x000107c61434(lVar1);
  return;
}



/* Entry: 10018433c; end: 10018460f;  */

void FUN_10018433c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100184418);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_1001833c8(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001843e0);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000100184498();
    lVar8 = *unaff_x20;
    goto joined_r0x00010018442c;
  }
  lVar8 = *unaff_x20;
joined_r0x00010018442c:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100184498);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 100184610; end: 1001849e7;  */

void FUN_100184610(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000100184630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(byte *)(param_1 + 0x38) & 1);
  return;
}



/* Entry: 1001849e8; end: 100184a17;  */

/* WARNING: Possible PIC construction at 0x0001001849fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100184a00) */

void FUN_1001849e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x78);
  return;
}



/* Entry: 100184a18; end: 100184a27;  */

void FUN_100184a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100184a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100184a28; end: 100184a53;  */

void FUN_100184a28(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1000ff150();
  *param_1 = extraout_x8;
  func_0x000107c607f0(param_1[1]);
  return;
}



/* Entry: 100184a54; end: 100184a5f;  */

void FUN_100184a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100184a60; end: 100184acf; -[SCConfigManagerImpl setEtag:] */

/* WARNING: Possible PIC construction at 0x000100184a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100184ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100184a98) */
/* WARNING: Removing unreachable block (ram,0x000100184abc) */

void FUN_100184a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100184ad0; end: 100184b3f;  */

void FUN_100184ad0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100184b40; end: 100184bb7; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setCofEtag:] */

void FUN_100184b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1000d1fec(param_3,param_2,0x74456769666e6f43,0xea00000000006761,0);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100184bb8; end: 100184bef; -[SCCDNSelectionManager _updateToLatestCOFConfigs:] */

void FUN_100184bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_100188098();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100184bf0; end: 100184bff; -[SCCircumstanceEngineEtag lastUpdateTimestampInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100184bf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113092360);
}



/* Entry: 100184c00; end: 100184c3f; -[SCCircumstanceEngineEtag .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100184c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100184c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100184c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113092350 + 8))
  ;
  return;
}



/* Entry: 100184c40; end: 100184db7;  */

bool FUN_100184c40(long param_1)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0')) {
    return *(long *)(param_1 + 0x38) != 0;
  }
  return false;
}



/* Entry: 100184db8; end: 100184dcb;  */

void FUN_100184db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),
             PTR_s_setConfigRules_forConfigKey__11263dc78,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100184dcc; end: 100185033;  */

void FUN_100184dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100184dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x20))();
  return;
}



/* Entry: 100185034; end: 1001850bf; -[SCConfigLRUCache setConfigRules:forConfigKey:] */

/* WARNING: Possible PIC construction at 0x00010018508c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100185090) */

void FUN_100185034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c56bcc(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001850c0; end: 100185437; -[SCDocPreferences setObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001850c0(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *unaff_x21;
  undefined *unaff_x23;
  undefined8 uVar4;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (param_1 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11278e9ec);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      puStack_98 = &UNK_100bfb1e8;
      puStack_90 = &UNK_110883780;
      puStack_88 = param_1;
      func_0x000107c61174(param_4);
      puStack_80 = param_4;
      FUN_10006eaa4(uVar4,&puStack_a8);
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      puStack_c0 = &UNK_100bfb304;
      puStack_b8 = &UNK_11084f688;
      func_0x000107c61174(param_4);
      unaff_x21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      puStack_b0 = param_4;
      puStack_78 = param_4;
      func_0x000107c4d8b8();
      func_0x000107c61180();
      unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = unaff_x21;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      FUN_1001a4f14(param_1,&puStack_d0,unaff_x23);
      func_0x000107c61170(unaff_x23);
      func_0x000107c61170(unaff_x21);
      func_0x000107c61170(puStack_b0);
      func_0x000107c61170(puStack_80);
    }
    func_0x000107c61170(param_4);
  }
  else {
    unaff_x21 = param_4;
    FUN_100185438(param_4);
    func_0x000107c61180();
    unaff_x23 = param_1;
    FUN_100189294(param_1,param_3,param_4,unaff_x21);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (unaff_x23 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11278e9ec);
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1001a4ecc;
      puStack_f0 = &UNK_110896e48;
      puStack_e8 = param_1;
      func_0x000107c61174(param_4);
      puStack_e0 = param_4;
      func_0x000107c61174(param_3);
      lStack_d8 = param_3;
      FUN_10006eaa4(uVar4,&puStack_108);
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_1001c7460;
      puStack_118 = &UNK_11084f688;
      func_0x000107c61174(unaff_x23);
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_110 = unaff_x23;
      func_0x000107c419a4(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x000107c61180();
      FUN_1001a4f14(param_1,&puStack_130,puVar1);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puStack_110);
      func_0x000107c61170(lStack_d8);
      func_0x000107c61170(puStack_e0);
    }
    func_0x000107c61170(unaff_x23);
    func_0x000107c61170(unaff_x21);
  }
  func_0x000107c61170(param_4);
  lVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x23);
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  func_0x000107c61174();
  lVar3 = lVar2;
  func_0x000107c4f890();
  if (lVar3 == 0x7fffffffffffffff) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5c37c(lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100185438; end: 1001854b3;  */

void FUN_100185438(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4f890(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
  if (lVar1 == 0x7fffffffffffffff) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5c37c(param_1,param_2,lVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


