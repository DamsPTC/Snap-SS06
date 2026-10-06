/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e2f8c0; end: 101e2fa0f; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper fetchItemsWithPageToken:pageSize:] */

void FUN_101e2f8c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar1 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
  }
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11048c5e8;
  func_0x000107c613fc(&UNK_11048c5e8,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(long *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined **)(puVar3 + 0x30) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000100de78a0(param_3,param_2);
  func_0x000107c61174(puVar2);
  uVar4 = 4;
  func_0x0001009548b0(4,2,0x50,4,0,0,&UNK_10da1ab10,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  puVar3 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x0001000b44c0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101e2fa10; end: 101e2fa2b;  */

void FUN_101e2fa10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2fa2c,0,0);
  return;
}



/* Entry: 101e2fa2c; end: 101e2fb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2fa2c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x00010841fab4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    puVar3 = PTR_PTR_1126be9e8;
    func_0x000107c610f8(PTR_PTR_1126be9e8);
    func_0x000107c46d4c();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(lVar9 + _DAT_112e31898);
    func_0x000107c3d684(uVar4);
    func_0x000107c61180();
    puVar5 = &UNK_11048c6d8;
    func_0x000107c613fc(&UNK_11048c6d8,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x101e31430;
    *(undefined **)(unaff_x22 + 0x38) = puVar5;
    puVar6 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1011b0640;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11048c6f0;
    func_0x000107c60bc4();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c5dc64(uVar4);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e2fb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2fb80);
  (*pcVar1)();
}



/* Entry: 101e2fb80; end: 101e2fbb3; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper addTrackWithTrackId:] */

void FUN_101e2fb80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11048c5c0;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_11048c5c0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 0;
  func_0x0001009548b0(0,2,0x50,4,0,0,&UNK_10da1ab08,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e2fbb4; end: 101e2fd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2fbb4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x00010841fab4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    puVar3 = PTR_PTR_1126be9e8;
    func_0x000107c610f8(PTR_PTR_1126be9e8);
    func_0x000107c46d4c();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(lVar9 + _DAT_112e31898);
    func_0x000107c4ff0c(uVar4);
    func_0x000107c61180();
    puVar5 = &UNK_11048c688;
    func_0x000107c613fc(&UNK_11048c688,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(code **)(unaff_x22 + 0x30) = FUN_101e30d20;
    *(undefined **)(unaff_x22 + 0x38) = puVar5;
    puVar6 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1011b0640;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11048c6a0;
    func_0x000107c60bc4();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c5dc64(uVar4);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e2fd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2fd08);
  (*pcVar1)();
}



/* Entry: 101e2fd08; end: 101e2fdbf;  */

/* WARNING: Possible PIC construction at 0x000101e2fd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2fd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2fda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2fd5c) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2fd48) */
/* WARNING: Removing unreachable block (ram,0x000101e2fdac) */

void FUN_101e2fd08(undefined *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28,0,0);
      func_0x000107c453e4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  func_0x000107c614b0(param_2);
  func_0x000107c5ed2c(param_2);
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e2fdc0; end: 101e2fdf3; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper removeTrackWithTrackId:] */

void FUN_101e2fdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11048c598;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_11048c598,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 1;
  func_0x0001009548b0(1,2,0x50,4,0,0,&UNK_10da1ab00,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e2fdf4; end: 101e2ff47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2fdf4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x00010841fab4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    puVar3 = PTR_PTR_1126be9e8;
    func_0x000107c610f8(PTR_PTR_1126be9e8);
    func_0x000107c46d4c();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(lVar9 + _DAT_112e31898);
    func_0x000107c49d30(uVar4);
    func_0x000107c61180();
    puVar5 = &UNK_11048c638;
    func_0x000107c613fc(&UNK_11048c638,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(code **)(unaff_x22 + 0x30) = FUN_101e30d18;
    *(undefined **)(unaff_x22 + 0x38) = puVar5;
    puVar6 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_101286f34;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11048c650;
    func_0x000107c60bc4();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c5dc64(uVar4);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e2ff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2ff48);
  (*pcVar1)();
}



/* Entry: 101e2ff48; end: 101e30003;  */

/* WARNING: Possible PIC construction at 0x000101e2ff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2ff98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2ffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2ff9c) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2ff88) */
/* WARNING: Removing unreachable block (ram,0x000101e2fff0) */

void FUN_101e2ff48(undefined *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,0,0);
      func_0x000107c45a48();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  func_0x000107c614b0(param_2);
  func_0x000107c5ed2c(param_2);
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e30004; end: 101e3007b;  */

/* WARNING: Possible PIC construction at 0x000101e30060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e30064) */

void FUN_101e30004(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101e3007c; end: 101e30093; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper isTrackInCategoryWithTrackId:] */

void FUN_101e3007c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11048c570;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(&UNK_11048c570,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 2;
  func_0x0001009548b0(2,2,0x50,4,0,0,&UNK_10da1aaf8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e30094; end: 101e301a3;  */

void FUN_101e30094(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined **)(param_4 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  func_0x0001009548b0(param_5,2,0x50,4,0,0,param_6,param_4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e301a4; end: 101e301d7; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper updateObservable] */

void FUN_101e301a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e301d8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e301d8; end: 101e3030f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e301d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e31890);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e31898);
  func_0x000107c5d928(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11048c520;
  func_0x000107c613fc(&UNK_11048c520,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  pcStack_40 = FUN_101e30a0c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101e302b8;
  puStack_48 = &UNK_11048c538;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c43494(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 101e30310; end: 101e3036f; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper init] */

void FUN_101e30310(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicUserDataServicesImpl.MusicUserDataWrapper",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3033c);
  (*pcVar1)();
}



/* Entry: 101e30370; end: 101e303a7; -[_TtC27SCMusicUserDataServicesImpl20MusicUserDataWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e30370(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e31898));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e318a0));
  return;
}



/* Entry: 101e303a8; end: 101e30413;  */

void FUN_101e303a8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101e313dc(0,0x112d52cf8,&PTR_PTR_1126d95a8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e318d8;
  plVar5 = (long *)&UNK_10da1ab28;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101e30414; end: 101e305cf;  */

ulong FUN_101e30414(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e304f8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e304fc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e313dc(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e305d0);
  (*pcVar2)();
}



/* Entry: 101e305d0; end: 101e306f7;  */

ulong FUN_101e305d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e306f8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101e306f8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e306f4);
      (*pcVar1)();
    }
    FUN_101e30778(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101e306f8; end: 101e30777;  */

undefined * FUN_101e306f8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101e303a8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101e30778; end: 101e3088f;  */

long FUN_101e30778(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e3088c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e30890);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101e313dc(0,0x112d52cf8,&PTR_PTR_1126d95a8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101e313dc(0,0x112d52cf8,&PTR_PTR_1126d95a8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e30888);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101e30890; end: 101e30a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e30890(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112e31898) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e31890) = param_2;
  FUN_101e313dc(0,0x112d56378,&PTR_PTR_1126ae790);
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
  func_0x000107c615f0(param_1);
  puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  puVar2 = puVar4;
  func_0x000104188018(puVar4,0xd000000000000010,0x800000010f014050);
  func_0x000107c6142c(0x800000010f014050);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  *(undefined1 **)(unaff_x20 + _DAT_112e318a0) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e30a0c; end: 101e30a33;  */

bool FUN_101e30a0c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3f6f4();
  return param_1 == lVar1;
}



/* Entry: 101e30a34; end: 101e30a4f;  */

void FUN_101e30a34(long param_1,long param_2)

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



/* Entry: 101e30a50; end: 101e30a6f;  */

void FUN_101e30a50(void)

{
  func_0x000107c61168(&PTR_PTR_112805c88);
  return;
}



/* Entry: 101e30a70; end: 101e30adb;  */

void FUN_101e30a70(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e3144c;
  plVar3[9] = lVar2;
  plVar3[10] = lVar4;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2fdf4,0,0);
  return;
}



/* Entry: 101e30adc; end: 101e30b47;  */

void FUN_101e30adc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e31450;
  plVar3[9] = lVar2;
  plVar3[10] = lVar4;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2fbb4,0,0);
  return;
}



/* Entry: 101e30b48; end: 101e30bb3;  */

void FUN_101e30b48(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e31454;
  plVar3[9] = lVar2;
  plVar3[10] = lVar4;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2fa2c,0,0);
  return;
}



/* Entry: 101e30bb4; end: 101e30bf7;  */

void FUN_101e30bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(ulong *)(unaff_x20 + 0x20) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e30bf8; end: 101e30c77;  */

void FUN_101e30bf8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101e30c78;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar6;
  plVar5[9] = lVar3;
  plVar5[10] = lVar2;
  plVar5[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2f5cc,0,0);
  return;
}



/* Entry: 101e30c78; end: 101e30cb3;  */

void FUN_101e30c78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e30cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e30cb4; end: 101e30d17;  */

void FUN_101e30cb4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e31458;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e2f1fc,0,0);
  return;
}



/* Entry: 101e30d18; end: 101e30d1f;  */

/* WARNING: Possible PIC construction at 0x000101e2ff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2ff98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2ffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2ff9c) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2ff88) */
/* WARNING: Removing unreachable block (ram,0x000101e2fff0) */

void FUN_101e30d18(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570,0,0);
      func_0x000107c45a48();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  func_0x000107c614b0(param_2);
  func_0x000107c5ed2c(param_2);
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e30d20; end: 101e30d37;  */

void FUN_101e30d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101e2fd08(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e30d38; end: 101e30d3f;  */

/* WARNING: Possible PIC construction at 0x000101e2f758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2f8a4) */
/* WARNING: Removing unreachable block (ram,0x000101e2f818) */
/* WARNING: Removing unreachable block (ram,0x000101e2f7d8) */
/* WARNING: Removing unreachable block (ram,0x000101e2f860) */
/* WARNING: Removing unreachable block (ram,0x000101e2f868) */
/* WARNING: Removing unreachable block (ram,0x000101e2f800) */
/* WARNING: Removing unreachable block (ram,0x000101e2f770) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2f75c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f84c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f8a8) */

void FUN_101e30d38(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      param_1 = -0x2fffffffffffffe5;
      FUN_101e30d40(0xd00000000000001b,0x800000010f013fa0,*(undefined8 *)(unaff_x20 + 0x10),
                    *(undefined8 *)(unaff_x20 + 0x18));
      func_0x000107c5ed2c();
    }
    else {
      func_0x000107c61174();
      func_0x000107c4a7d4();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e2f8c0);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101e313dc(0,0x112d4edd8,&PTR_PTR_1126badc0);
      func_0x000107c5fc54(param_1,uVar2);
    }
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c5ed2c();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e30d40; end: 101e30e8b;  */

undefined * FUN_101e30d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_101e31394((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f013fc0);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 101e30e8c; end: 101e31393;  */

undefined * FUN_101e30e8c(undefined *param_1,undefined8 *param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar7 = param_1;
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar20 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar20 = param_1;
    }
    func_0x000107c60480();
    puVar7 = puVar20;
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar22;
  if (puVar20 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      param_3 = &PTR_PTR_1126baa60;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e3132c);
          (*pcVar4)();
        }
        puVar6 = *(undefined **)(param_1 + (long)puVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar21;
        FUN_101e30414(puVar21,param_1,&PTR_PTR_1126badc0,0x112d4edd8);
      }
      bVar5 = SCARRY8((long)puVar21,1);
      puVar21 = puVar21 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e31328);
        (*pcVar4)();
      }
      puVar8 = puVar6;
      func_0x000107c4a7d4();
      func_0x000107c61180();
      param_2 = (undefined8 *)0x0;
      FUN_101e313dc(0,0x112d4ede0,&PTR_PTR_1126baa60);
      puVar7 = puVar8;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar8);
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar8 = puVar7;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined *)0x0) {
        uVar23 = 0;
        do {
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e31324);
              (*pcVar4)();
            }
            uVar9 = *(ulong *)(puVar7 + uVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar9 = uVar23;
            FUN_101e30414(uVar23,puVar7,&PTR_PTR_1126baa60,0x112d4ede0);
          }
          puVar1 = (undefined *)(uVar23 + 1);
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101e31320);
            (*pcVar4)();
          }
          uVar10 = uVar9;
          func_0x000107c42924();
          func_0x000107c61180();
          if (uVar10 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            func_0x000107c60234(&uStack_b0);
            func_0x000107c615e8(uVar10);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x000107c61170(uVar9);
            param_2 = (undefined8 *)0x112d387f8;
            param_3 = (undefined **)&UNK_10d902650;
            FUN_101e31394(&uStack_90,0x112d387f8,&UNK_10d902650);
          }
          else {
            uVar11 = 0;
            FUN_101e313dc(0,0x112e318d0,&PTR_PTR_1126bfd00);
            pppuVar12 = &ppuStack_b8;
            param_2 = &uStack_90;
            param_3 = (undefined **)(PTR___sypN_11034f1a8 + 8);
            func_0x000107c6147c(pppuVar12,param_2,param_3,uVar11,6);
            ppuVar3 = ppuStack_b8;
            if (((ulong)pppuVar12 & 1) == 0) {
              func_0x000107c61170(uVar9);
            }
            else {
              ppuVar13 = ppuStack_b8;
              func_0x000107c4f528();
              func_0x000107c61180();
              if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101e3138c);
                (*pcVar4)();
              }
              lVar14 = 0;
              param_2 = (undefined8 *)0x112d52668;
              FUN_101e313dc(0,0x112d52668,&PTR_PTR_1126bfa50);
              func_0x000107c614e8();
              ppuVar15 = ppuVar13;
              func_0x000107c5ee30(ppuVar13);
              func_0x000107c61170(ppuVar13);
              ppuVar13 = ppuVar15;
              func_0x000107c5ee20(ppuVar15,param_2);
              func_0x00010006c090(ppuVar15);
              uStack_90 = 0;
              param_3 = ppuVar13;
              func_0x000107c4e380();
              func_0x000107c61180();
              func_0x000107c61170(ppuVar13);
              uVar11 = uStack_90;
              if (lVar14 == 0) {
                uVar17 = uStack_90;
                func_0x000107c61174();
                func_0x000107c5ed30(uVar11);
                func_0x000107c61170(uVar17);
                func_0x000107c61654();
                func_0x000107c61170(uVar9);
                func_0x000107c61170(ppuVar3);
                func_0x000107c614ac(uVar11);
              }
              else {
                func_0x000107c61174();
                lVar16 = lVar14;
                func_0x0001084203fc();
                func_0x000107c61180();
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e31390);
                  (*pcVar4)();
                }
                puVar18 = puVar22;
                func_0x000107c61550();
                if ((((int)puVar18 == 0) || ((long)puVar22 < 0)) ||
                   (((ulong)puVar22 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar22 >> 0x3e == 0) {
                    puVar18 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar18 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar22) {
                      puVar18 = puVar22;
                    }
                    func_0x000107c60480();
                  }
                  param_2 = (undefined8 *)(puVar18 + 1);
                  puVar18 = (undefined *)0x0;
                  param_3 = (undefined **)0x1;
                  FUN_101e305d0(0,param_2,1,puVar22);
                  puVar22 = puVar18;
                }
                uVar19 = (ulong)puVar22 & 0xffffffffffffff8;
                uVar10 = *(ulong *)(uVar19 + 0x10);
                puVar2 = (undefined8 *)(uVar10 + 1);
                puVar18 = puVar22;
                if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar10) {
                  puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
                  param_3 = (undefined **)0x1;
                  param_2 = puVar2;
                  FUN_101e305d0(puVar18,puVar2,1,puVar22);
                  uVar19 = (ulong)puVar18 & 0xffffffffffffff8;
                }
                *(undefined8 **)(uVar19 + 0x10) = puVar2;
                *(long *)(uVar19 + uVar10 * 8 + 0x20) = lVar16;
                func_0x000107c61170(lVar14);
                func_0x000107c61170(ppuVar3);
                func_0x000107c61170(uVar9);
                puVar22 = puVar18;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (puVar1 != puVar8);
      }
      func_0x000107c61170(puVar6);
      func_0x000107c6142c(puVar7);
    } while (puVar21 != puVar20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x0001000285a8(param_2,param_3);
    (**(code **)(param_2[-1] + 8))(puVar7,param_2);
    return puVar7;
  }
  return puVar22;
}



/* Entry: 101e31394; end: 101e313d3;  */

undefined8 FUN_101e31394(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e313d4; end: 101e313db;  */

/* WARNING: Possible PIC construction at 0x000101e2f398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2f488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2f3b0) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000101e2f39c) */
/* WARNING: Removing unreachable block (ram,0x000101e2f48c) */

void FUN_101e313d4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != 0) {
      lStack_38 = 0;
      uVar3 = 0;
      FUN_101e313dc(0,0x112d4edd8,&PTR_PTR_1126badc0,*(undefined8 *)(unaff_x20 + 0x18));
      func_0x000107c5fc50(param_1,&lStack_38,uVar3);
      lVar2 = lStack_38;
      if (lStack_38 != 0) {
        lVar4 = lStack_38;
        FUN_101e30e8c(lStack_38);
        func_0x000107c6142c(lVar2);
        uVar3 = 0;
        FUN_101e313dc(0,0x112d52cf8,&PTR_PTR_1126d95a8);
        param_2 = lVar4;
        func_0x000107c5fc48(lVar4,uVar3);
        func_0x000107c6142c(lVar4);
        func_0x000107c3fefc(uVar1);
        goto code_r0x000107c61170;
      }
    }
    param_2 = -0x2fffffffffffffdb;
    FUN_101e30d40(0xd000000000000025,0x800000010f014020);
    func_0x000107c5ed2c();
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c5ed2c();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e313dc; end: 101e3141b;  */

void FUN_101e313dc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e3141c; end: 101e3145b;  */

void FUN_101e3141c(long param_1,long param_2)

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



/* Entry: 101e3145c; end: 101e314a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e3145c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e318e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e314a8; end: 101e31567;  */

void FUN_101e314a8(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_101e30a50(0);
    func_0x000107c610f8();
    lVar3 = param_2;
    FUN_101e30890(param_2,param_3,uVar2);
    func_0x000107c615e8(param_2);
    *param_1 = lVar3;
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000027,0x800000010f014100,
                      "SCMusicUserDataServicesImpl/MusicUserDataWrapperFactoryImpl.swift",0x41,2,
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e31568);
  (*pcVar1)();
}



/* Entry: 101e31568; end: 101e3156f;  */

void FUN_101e31568(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0;
    FUN_101e30a50(0);
    func_0x000107c610f8();
    lVar5 = lVar3;
    FUN_101e30890(lVar3,uVar1,uVar4);
    func_0x000107c615e8(lVar3);
    *param_1 = lVar5;
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000027,0x800000010f014100,
                      "SCMusicUserDataServicesImpl/MusicUserDataWrapperFactoryImpl.swift",0x41,2,
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e31568);
  (*pcVar2)();
}



/* Entry: 101e31570; end: 101e315cf; -[MusicUserDataWrapperFactoryImpl init] */

void FUN_101e31570(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicUserDataServicesImpl.MusicUserDataWrapperFactoryImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3159c);
  (*pcVar1)();
}



/* Entry: 101e315d0; end: 101e315e3; -[MusicUserDataWrapperFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e315d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e318e0));
  return;
}



/* Entry: 101e315e4; end: 101e3296f;  */

undefined *
FUN_101e315e4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
             ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x20;
  undefined *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_160 + -extraout_x8;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4242c();
  func_0x000107c61180();
  uVar3 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (uVar3 == 0) {
    uVar15 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar21 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f014130);
    puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
  }
  else {
    puStack_b8 = (undefined *)0x0;
    uVar21 = uVar3;
    uStack_d8 = uVar2;
    func_0x000107c50050();
    func_0x000107c61180();
    puVar19 = puStack_b8;
    if (uVar21 == 0) {
      puVar11 = puStack_b8;
      func_0x000107c61174();
      func_0x000107c5ed30(puVar19);
      func_0x000107c61170(puVar11);
      func_0x000107c61654();
      func_0x000107c615e8(uVar3);
      goto LAB_101e3254c;
    }
    func_0x000107c61174();
    uVar2 = uVar21;
    func_0x000107c44a2c();
    if ((int)uVar2 == 0) {
      uVar15 = 0x6574616c706d6574;
      func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
      uVar12 = 0xd00000000000002f;
      func_0x000107c5fadc(0xd00000000000002f,0x800000010f014170);
      puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar12);
    }
    else {
      uStack_110 = param_3;
      func_0x000107c42d48();
      func_0x000107c61180();
      uVar2 = param_6;
      func_0x000107c42428();
      func_0x000107c61180();
      func_0x000107c615e8(param_6);
      uVar18 = uVar2;
      func_0x000107c4b82c();
      if (uVar18 < 2) {
        puVar19 = PTR_PTR_1126affe8;
        func_0x000107c61168();
        puStack_148 = puVar19;
        func_0x000107c4b838();
        func_0x000107c61180();
        uVar18 = uVar2;
        func_0x000107c4e914();
        func_0x000107c61180();
        func_0x000107c61170(puVar19);
        if (uVar18 != 0) {
          uVar4 = 0;
          FUN_101e32b64(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar14 = uVar18;
          uStack_150 = uVar4;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar18);
          lStack_128 = param_4;
          uStack_118 = uVar2;
          if (uVar14 >> 0x3e == 0) {
            uStack_108 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
            if (uStack_108 == 0) {
LAB_101e324b4:
              func_0x000107c6142c(uVar14);
              goto LAB_101e324bc;
            }
LAB_101e3180c:
            uVar18 = 0;
            uStack_f8 = uVar14 & 0xc000000000000001;
            uStack_100 = uVar14 & 0xffffffffffffff8;
            uStack_140 = param_2;
            uStack_130 = uVar14;
            do {
              if (uStack_f8 == 0) {
                if (*(ulong *)(uStack_100 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e323f0);
                  (*pcVar1)();
                }
                uVar5 = *(ulong *)(uVar14 + uVar18 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar5 = uVar18;
                uVar4 = uVar14;
                func_0x0001002ec9a0(uVar18,uVar14);
              }
              if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101e323ec);
                (*pcVar1)();
              }
              uVar6 = uVar2;
              uStack_e8 = uVar18 + 1;
              uStack_e0 = uVar5;
              func_0x000107c4e924();
              func_0x000107c61180();
              if (uVar6 == 0) {
                puStack_b8 = (undefined *)0x0;
                uStack_b0 = 0xe000000000000000;
                func_0x000107c602fc(0x43);
                uVar15 = 0x800000010f014240;
                func_0x000107c5fb78(0xd000000000000041,0x800000010f014240);
                uVar18 = uStack_e0;
                uVar4 = uStack_e0;
                func_0x000107c417f0(uStack_e0);
                func_0x000107c61180();
                uVar5 = uVar4;
                func_0x000107c5faec();
                func_0x000107c61170(uVar4);
                func_0x000107c5fb78(uVar5,uVar15);
                func_0x000107c6142c(uVar15);
                uVar15 = uStack_b0;
                puVar11 = puStack_b8;
                uVar12 = 0x6574616c706d6574;
                func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                func_0x000107c5fadc(puVar11,uVar15);
                puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                func_0x000107c42a5c();
                func_0x000107c61180();
                func_0x000107c61170(uVar12);
                func_0x000107c61170(puVar11);
                func_0x000107c615e8(uVar3);
                func_0x000107c615e8(uVar2);
                func_0x000107c6142c(uVar15);
                func_0x000107c61170(uVar21);
                func_0x000107c61170(uVar18);
                func_0x000107c6142c(uVar14);
                goto LAB_101e3254c;
              }
              uVar5 = uVar6;
              func_0x000107c4abb4();
              if ((int)uVar5 == 1) {
                uVar14 = uVar6;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (uVar14 == 0) goto LAB_101e32948;
                uVar5 = uVar14;
                func_0x000107c44984();
                func_0x000107c61170(uVar14);
                if ((int)uVar5 == 0) {
LAB_101e31efc:
                  puStack_b8 = (undefined *)0x0;
                  uStack_b0 = 0xe000000000000000;
                  func_0x000107c602fc(0x4b);
                  uVar15 = 0x800000010f014290;
                  func_0x000107c5fb78(0xd000000000000049,0x800000010f014290);
                  uVar18 = uStack_e0;
                  uVar14 = uStack_e0;
                  func_0x000107c417f0(uStack_e0);
                  func_0x000107c61180();
                  uVar4 = uVar14;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar14);
                  func_0x000107c5fb78(uVar4,uVar15);
                  func_0x000107c6142c(uVar15);
                  uVar15 = uStack_b0;
                  puVar11 = puStack_b8;
                  uVar12 = 0x6574616c706d6574;
                  func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                  func_0x000107c5fadc(puVar11,uVar15);
                  puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                  func_0x000107c42a5c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar12);
                  func_0x000107c61170(puVar11);
                  func_0x000107c615e8(uVar3);
                  func_0x000107c615e8(uVar2);
                  func_0x000107c6142c(uVar15);
LAB_101e32110:
                  func_0x000107c61170(uVar21);
LAB_101e32118:
                  func_0x000107c61170(uVar18);
                }
                else {
                  uVar14 = uVar6;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (uVar14 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32950);
                    (*pcVar1)();
                  }
                  uVar5 = uVar14;
                  func_0x000107c4c99c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar14);
                  if (uVar5 == 0) goto LAB_101e31efc;
                  uVar14 = uVar2;
                  func_0x000107c4ca08();
                  func_0x000107c61180();
                  if (uVar14 == 0) {
                    puStack_b8 = (undefined *)0x0;
                    uStack_b0 = 0xe000000000000000;
                    func_0x000107c602fc(0x57);
                    uVar15 = 0x800000010f0142e0;
                    func_0x000107c5fb78(0xd000000000000055,0x800000010f0142e0);
                    uVar18 = uVar5;
                    func_0x000107c417f0(uVar5);
                    func_0x000107c61180();
                    uVar14 = uVar18;
                    func_0x000107c5faec();
                    func_0x000107c61170(uVar18);
                    func_0x000107c5fb78(uVar14,uVar15);
                    func_0x000107c6142c(uVar15);
                    uVar15 = uStack_b0;
                    puVar11 = puStack_b8;
                    uVar12 = 0x6574616c706d6574;
                    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                    func_0x000107c5fadc(puVar11,uVar15);
                    puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                    func_0x000107c42a5c();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170(puVar11);
                    func_0x000107c615e8(uVar3);
                    func_0x000107c615e8(uVar2);
                    func_0x000107c6142c(uVar15);
                    func_0x000107c61170(uVar21);
                    uVar21 = uStack_e0;
                    uVar18 = uVar6;
                    uVar6 = uVar5;
                    goto LAB_101e32110;
                  }
                  uVar7 = uVar14;
                  func_0x000107c4ca5c();
                  if ((int)uVar7 != 3) {
                    uVar7 = uVar14;
                    func_0x000107c4ca5c();
                    if ((int)uVar7 == 2) {
                      uVar7 = uVar6;
                      func_0x000107c4c930();
                      func_0x000107c61180();
                      if (uVar7 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3295c);
                        (*pcVar1)();
                      }
                      if (uStack_110 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e328fc);
                        (*pcVar1)();
                      }
                      func_0x000107c56408();
                      func_0x000107c61170(uVar7);
                    }
LAB_101e31a54:
                    uVar7 = uVar14;
                    func_0x000107c3abfc();
                    func_0x000107c61180();
                    uStack_120 = uVar5;
                    uStack_f0 = uVar14;
                    if (uVar7 != 0) {
                      uVar2 = uVar7;
                      func_0x000107c5faec();
                      func_0x000107c61170(uVar7);
                      func_0x000107c5edd0(puVar20,uVar2,uVar4);
                      func_0x000107c6142c(uVar4);
                      uVar2 = uStack_d8;
                      uVar4 = 1;
                      puVar9 = puVar20;
                      (**(code **)(lVar16 + 0x30))(puVar20,1,uStack_d8);
                      if ((int)puVar9 == 1) {
                        func_0x0001000293e4(puVar20);
                        uVar2 = uStack_118;
                        goto LAB_101e31adc;
                      }
                      (**(code **)(lVar16 + 0x20))(lVar17,puVar20,uVar2);
                      puVar11 = PTR_PTR_1126b3080;
                      func_0x000107c61168(PTR_PTR_1126b3080);
                      puVar19 = puVar11;
                      func_0x000107c5ed90();
                      func_0x000107c42c94(puVar11);
                      func_0x000107c61180();
                      func_0x000107c61170(puVar19);
                      (**(code **)(lVar16 + 8))(lVar17);
                      uVar4 = uVar2;
LAB_101e31bdc:
                      func_0x000107c61174(puVar11);
                      func_0x000107c4ca5c(uStack_f0);
                      param_4 = lStack_128;
                      lVar10 = lStack_128;
                      func_0x000107c5c52c();
                      func_0x000107c61180();
                      func_0x000107c61170(puVar11);
                      if (lVar10 != 0) {
                        uVar2 = uVar6;
                        func_0x000107c4c930();
                        func_0x000107c61180();
                        if (uVar2 == 0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32954);
                          (*pcVar1)();
                        }
                        func_0x000107c61174(lVar10);
                        func_0x000107c56420(uVar2);
                        func_0x000107c61170(uVar2);
                        func_0x000107c61170(uStack_f0);
                        func_0x000107c61170(lVar10);
                        func_0x000107c61170(lVar10);
                        func_0x000107c61170(uStack_120);
                        func_0x000107c61170(puVar11);
                        uVar14 = uStack_130;
                        uVar2 = uStack_118;
                        goto LAB_101e318a4;
                      }
                      uVar12 = 0x6574616c706d6574;
                      func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                      uVar15 = 0xd00000000000004c;
                      func_0x000107c5fadc(0xd00000000000004c,0x800000010f0143a0);
                      puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                      func_0x000107c42a5c();
                      func_0x000107c61180();
                      func_0x000107c61170(uVar12);
                      func_0x000107c61170(uVar15);
                      func_0x000107c615e8(uVar3);
                      func_0x000107c615e8(uStack_118);
                      func_0x000107c61170(uStack_f0);
                      func_0x000107c61170(puVar11);
                      func_0x000107c61170(uVar21);
                      func_0x000107c61170(uStack_e0);
                      func_0x000107c61170(uVar6);
                      uVar6 = uStack_120;
                      goto LAB_101e32120;
                    }
LAB_101e31adc:
                    uVar14 = uStack_f0;
                    uVar5 = uStack_f0;
                    uStack_138 = uVar6;
                    func_0x000107c41214();
                    func_0x000107c61180();
                    if (uVar5 != 0) {
                      uVar2 = uVar5;
                      func_0x000107c5ee30();
                      func_0x000107c61170(uVar5);
                      puVar11 = PTR_PTR_1126b3080;
                      func_0x000107c61168(PTR_PTR_1126b3080);
                      uVar14 = uVar2;
                      func_0x000107c5ee20(uVar2,uVar4);
                      func_0x000107c412fc(puVar11);
                      func_0x000107c61180();
                      func_0x00010006c090(uVar2);
                      func_0x000107c61170(uVar14);
                      uVar6 = uStack_138;
                      goto LAB_101e31bdc;
                    }
                    puStack_b8 = (undefined *)0x0;
                    uStack_b0 = 0xe000000000000000;
                    func_0x000107c602fc(0x50);
                    uVar15 = 0x800000010f014340;
                    func_0x000107c5fb78(0xd000000000000031,0x800000010f014340);
                    uVar6 = uStack_120;
                    uVar18 = uStack_120;
                    func_0x000107c417f0(uStack_120);
                    func_0x000107c61180();
                    uVar4 = uVar18;
                    func_0x000107c5faec();
                    func_0x000107c61170(uVar18);
                    func_0x000107c5fb78(uVar4,uVar15);
                    func_0x000107c6142c(uVar15);
                    func_0x000107c5fb78(0xd00000000000001d,0x800000010f014380);
                    uVar15 = uStack_b0;
                    puVar11 = puStack_b8;
                    uVar12 = 0x6574616c706d6574;
                    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                    func_0x000107c5fadc(puVar11,uVar15);
                    puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                    func_0x000107c42a5c();
                    func_0x000107c61180();
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170(puVar11);
                    func_0x000107c615e8(uVar3);
                    func_0x000107c615e8(uVar2);
                    func_0x000107c61170(uVar14);
                    func_0x000107c6142c(uVar15);
                    func_0x000107c61170(uVar21);
                    func_0x000107c61170(uStack_e0);
                    uVar18 = uStack_138;
                    goto LAB_101e32118;
                  }
                  uVar7 = uVar6;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (uVar7 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32958);
                    (*pcVar1)();
                  }
                  uVar8 = uVar7;
                  func_0x000107c4c978();
                  func_0x000107c61170(uVar7);
                  if (uStack_110 <= (uVar8 & 0xffffffff)) goto LAB_101e31a54;
                  uVar12 = 0x6574616c706d6574;
                  func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                  uVar15 = 0xd000000000000058;
                  func_0x000107c5fadc(0xd000000000000058,0x800000010f0143f0);
                  puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                  func_0x000107c42a5c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar12);
                  func_0x000107c61170(uVar15);
                  func_0x000107c615e8(uVar3);
                  func_0x000107c615e8(uVar2);
                  func_0x000107c61170(uVar14);
                  func_0x000107c61170(uVar21);
                  func_0x000107c61170(uStack_e0);
                  func_0x000107c61170(uVar6);
                  uVar6 = uVar5;
                }
LAB_101e32120:
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uStack_130);
                goto LAB_101e3254c;
              }
LAB_101e318a4:
              func_0x000107c574d4(uVar6);
              lVar10 = param_4;
              func_0x000107c3d7f4(param_4);
              func_0x000107c61180();
              func_0x000107c61170(uStack_e0);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(lVar10);
              uVar18 = uVar18 + 1;
            } while (uStack_e8 != uStack_108);
          }
          else {
            uVar18 = uVar14 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar14) {
              uVar18 = uVar14;
            }
            uVar5 = uVar18;
            func_0x000107c60480();
            if ((long)uVar5 < 1) goto LAB_101e324b4;
            func_0x000107c60480();
            uStack_108 = uVar18;
            if (uVar18 != 0) goto LAB_101e3180c;
          }
          func_0x000107c6142c(uVar14);
          puVar19 = puStack_148;
          func_0x000107c44410(puStack_148);
          func_0x000107c61180();
          uVar18 = uVar2;
          func_0x000107c4e914();
          func_0x000107c61180();
          func_0x000107c61170(puVar19);
          if (uVar18 != 0) {
            uVar2 = uVar18;
            func_0x000107c5fc54(uVar18,uStack_150);
            func_0x000107c61170(uVar18);
            uStack_158 = uVar21;
            if (uVar2 >> 0x3e == 0) {
              uVar21 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar21 = uVar2 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar2) {
                uVar21 = uVar2;
              }
              func_0x000107c60480();
            }
            if (uVar21 != 0) {
              uVar18 = 0;
              do {
                if ((uVar2 & 0xc000000000000001) == 0) {
                  if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e328f8);
                    (*pcVar1)();
                  }
                  uVar14 = *(ulong *)(uVar2 + uVar18 * 8 + 0x20);
                  func_0x000107c61174(uVar14);
                }
                else {
                  uVar14 = uVar18;
                  func_0x0001002ec9a0(uVar18,uVar2);
                }
                uVar4 = uVar18 + 1;
                if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e328f4);
                  (*pcVar1)();
                }
                uVar5 = uStack_118;
                func_0x000107c4e924();
                func_0x000107c61180();
                if (uVar5 == 0) {
                  puStack_b8 = (undefined *)0x0;
                  uStack_b0 = 0xe000000000000000;
                  func_0x000107c602fc(0x4a);
                  uVar15 = 0x800000010f014450;
                  func_0x000107c5fb78(0xd000000000000048,0x800000010f014450);
                  uVar21 = uVar14;
                  func_0x000107c417f0(uVar14);
                  func_0x000107c61180();
                  uVar18 = uVar21;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar21);
                  func_0x000107c5fb78(uVar18,uVar15);
                  func_0x000107c6142c(uVar15);
                  uVar15 = uStack_b0;
                  puVar11 = puStack_b8;
                  uVar12 = 0x6574616c706d6574;
                  func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                  func_0x000107c5fadc(puVar11,uVar15);
                  puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                  func_0x000107c42a5c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar12);
                  func_0x000107c61170(puVar11);
                  func_0x000107c615e8(uVar3);
                  func_0x000107c615e8(uStack_118);
                  func_0x000107c6142c(uVar15);
                  func_0x000107c61170(uVar14);
                  func_0x000107c61170(uStack_158);
                  func_0x000107c6142c(uVar2);
                  goto LAB_101e3254c;
                }
                uVar6 = uVar5;
                func_0x000107c4abb4();
                if ((int)uVar6 != 1) {
                  uVar6 = uVar5;
                  func_0x000107c4abb4();
                  if ((int)uVar6 == 4) {
                    uVar6 = uVar5;
                    func_0x000107c40dc8();
                    func_0x000107c61180();
                    if (uVar6 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32960);
                      (*pcVar1)();
                    }
                    uVar7 = uVar6;
                    func_0x000107c44990();
                    func_0x000107c61170(uVar6);
                    if ((int)uVar7 != 0) {
                      uVar6 = uVar5;
                      func_0x000107c40dc8();
                      func_0x000107c61180();
                      if (uVar6 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32968);
                        (*pcVar1)();
                      }
                      uVar7 = uVar6;
                      func_0x000107c4ce20();
                      func_0x000107c61180();
                      func_0x000107c61170(uVar6);
                      if (uVar7 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32964);
                        (*pcVar1)();
                      }
                      uVar6 = uVar7;
                      func_0x000107c4ce50();
                      func_0x000107c61170(uVar7);
                      if ((int)uVar6 != 6) {
                        uVar6 = uVar5;
                        func_0x000107c40dc8();
                        func_0x000107c61180();
                        if (uVar6 == 0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32970);
                          (*pcVar1)();
                        }
                        uVar7 = uVar6;
                        func_0x000107c4ce20();
                        func_0x000107c61180();
                        func_0x000107c61170(uVar6);
                        if (uVar7 == 0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3296c);
                          (*pcVar1)();
                        }
                        uVar6 = uVar7;
                        func_0x000107c4ce50();
                        func_0x000107c61170(uVar7);
                        if ((int)uVar6 != 5) goto LAB_101e3261c;
                      }
                      puVar19 = &UNK_11048c8c8;
                      func_0x000107c613fc(&UNK_11048c8c8,0x18,7);
                      *(undefined8 *)(puVar19 + 0x10) = unaff_x20;
                      uStack_98 = 0x101e32b24;
                      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_b0 = 0x42000000;
                      puStack_a8 = &UNK_100ff0b04;
                      puStack_a0 = &UNK_11048c8e0;
                      ppuVar13 = &puStack_b8;
                      puStack_90 = puVar19;
                      func_0x000107c60bc4(ppuVar13);
                      func_0x000107c61574(puStack_90);
                      lVar16 = lStack_128;
                      func_0x000107c4171c(lStack_128);
                      func_0x000107c61180();
                      func_0x000107c60bd0(ppuVar13);
                      func_0x000107c61170(lVar16);
                    }
                  }
LAB_101e3261c:
                  func_0x000107c574d4(uVar5);
                  func_0x000107c3d7f4(lStack_128);
                  func_0x000107c61180();
                  func_0x000107c61170();
                }
                func_0x000107c61170(uVar14);
                func_0x000107c61170(uVar5);
                uVar18 = uVar18 + 1;
              } while (uVar4 != uVar21);
            }
            func_0x000107c615e8(uVar3);
            func_0x000107c615e8(uStack_118);
            func_0x000107c61170(uStack_158);
            func_0x000107c6142c(uVar2);
            puVar19 = (undefined *)0x0;
            goto LAB_101e3254c;
          }
          func_0x000107c615e8(uVar2);
          puVar19 = (undefined *)0x0;
          goto LAB_101e32540;
        }
LAB_101e324bc:
        uVar12 = 0x6574616c706d6574;
        func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
        uVar15 = 0xd000000000000048;
        func_0x000107c5fadc(0xd000000000000048,0x800000010f0141f0);
        puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
      }
      else {
        uVar12 = 0x6574616c706d6574;
        func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
        uVar15 = 0xd00000000000004c;
        func_0x000107c5fadc(0xd00000000000004c,0x800000010f0141a0);
        puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c42a5c();
      }
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar15);
      func_0x000107c615e8(uVar3);
      uVar3 = uVar2;
    }
LAB_101e32540:
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61170(uVar21);
LAB_101e3254c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar19;
  }
  func_0x000107c60e78();
LAB_101e32948:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3294c);
  (*pcVar1)();
}



/* Entry: 101e32970; end: 101e32a6f; +[SCUSnapDocMergeHelper mergeSnapDoc:segment:segmentTrimDurationMs:snapDocEditor:importEditorResolverServices:snapDocEditorServices:] */

void FUN_101e32970(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c614ec();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  lVar1 = param_3;
  FUN_101e315e4(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5ed2c(lVar1);
    func_0x000107c614ac(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101e32a70; end: 101e32aa7; +[SCUSnapDocMergeHelper isLegacyEditWithPlaybackLayer:] */

uint FUN_101e32a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_101e32ba4();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 101e32aa8; end: 101e32ae3; -[SCUSnapDocMergeHelper init] */

void FUN_101e32aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101e32b44();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e32ae4; end: 101e32b13;  */

void FUN_101e32ae4(void)

{
  FUN_101e32b44();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e32b14; end: 101e32b43;  */

void FUN_101e32b14(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101e32b44; end: 101e32b63;  */

void FUN_101e32b44(void)

{
  func_0x000107c61168(&PTR_PTR_112805e18);
  return;
}



/* Entry: 101e32b64; end: 101e32ba3;  */

void FUN_101e32b64(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e32ba4; end: 101e32cc3;  */

bool FUN_101e32ba4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar2 == 4) {
    lVar2 = param_1;
    func_0x000107c40dc8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32cb4);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c44990();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_1;
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32cb8);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32cbc);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c4ce50();
      func_0x000107c61170(lVar3);
      if ((int)lVar2 == 6) {
        return true;
      }
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c4ce20();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c4ce50(lVar2);
          func_0x000107c61170(lVar2);
          return (int)lVar3 == 5;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32cc4);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32cc0);
      (*pcVar1)();
    }
  }
  return false;
}



/* Entry: 101e32cc4; end: 101e32ccb;  */

bool FUN_101e32cc4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e32ccc; end: 101e32d63; -[_TtC20TemplateServicesImpl23TemplateExperimentsImpl isTemplateCreationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e32ccc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + _DAT_113092298);
  func_0x000107c6157c();
  func_0x000107c615f0(uVar3);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0144d0);
  uVar2 = uVar3;
  func_0x000107c3ebd4(uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101e32d64; end: 101e32dff; -[_TtC20TemplateServicesImpl23TemplateExperimentsImpl isTemplateSlotRequirementRemovalEnabled] */

long FUN_101e32d64(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f0144a0);
    lVar3 = lVar4;
    func_0x000107c3ebd4(lVar4);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e32e00);
  (*pcVar1)();
}



/* Entry: 101e32e00; end: 101e32e2b;  */

void FUN_101e32e00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e32e2c; end: 101e32e73; -[_TtC20TemplateServicesImpl18TemplateHelperImpl isTemplateWithSnapDoc:] */

bool FUN_101e32e2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_3;
  FUN_101e32fc4();
  func_0x000107c61170(param_3);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 101e32e74; end: 101e32f7f; -[_TtC20TemplateServicesImpl18TemplateHelperImpl templateIdForSnapDoc:] */

void FUN_101e32e74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = param_3;
  FUN_101e32fc4();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61574(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5c7d8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      uVar4 = 0;
      lVar2 = lVar3;
      func_0x000107c5ee24(0,lVar3,param_2);
      func_0x00010006c090(lVar3,param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_101e32f68;
    }
    func_0x000107c61170(param_3);
    func_0x000107c61574(param_1);
    func_0x000107c61170(lVar1);
  }
  uVar4 = 0;
LAB_101e32f68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 101e32f80; end: 101e32fc3;  */

void FUN_101e32f80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e32fc4; end: 101e332b3;  */

ulong FUN_101e32fc4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  ulong auStack_b0 [4];
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_1;
  func_0x000107c44738();
  if ((int)lVar4 == 0) {
    return 0;
  }
  func_0x000107c3e324();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e332a8);
    (*pcVar2)();
  }
  lVar4 = param_1;
  func_0x000107c3e328();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e332ac);
    (*pcVar2)();
  }
  func_0x000107c600f4(puVar11);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_90,lVar3,param_1);
  puVar1 = PTR___sypN_11034f1a8;
  while (lStack_78 != 0) {
    func_0x000100102924(auStack_90,auStack_b0);
    func_0x0001000bb420(auStack_b0,&uStack_70);
    uVar7 = 0;
    FUN_101e332b4(0);
    puVar5 = &uStack_b8;
    func_0x000107c6147c(puVar5,&uStack_70,puVar1 + 8,uVar7,6);
    uVar7 = uStack_b8;
    if ((int)puVar5 != 0) {
      uVar6 = uStack_b8;
      func_0x000107c3e2f4();
      func_0x000107c61170(uVar7);
      if ((int)uVar6 == 1) {
        func_0x000107c61170(lVar4);
        (**(code **)(lVar12 + 8))(puVar11,lVar3);
        func_0x000100102924(auStack_b0,&uStack_70);
        goto LAB_101e33164;
      }
    }
    func_0x000100183ab8(auStack_b0);
    func_0x000107c601c0(auStack_90,lVar3,param_1);
  }
  func_0x000107c61170(lVar4);
  (**(code **)(lVar12 + 8))(puVar11,lVar3);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
LAB_101e33164:
  func_0x000100672b50(&uStack_70,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar4 = -0x80;
LAB_101e33258:
    func_0x00010006e7f4(&stack0xfffffffffffffff0 + lVar4);
    return 0;
  }
  uVar7 = 0;
  FUN_101e332b4(0);
  puVar8 = auStack_b0;
  func_0x000107c6147c(puVar8,auStack_90,puVar1 + 8,uVar7,6);
  if (((ulong)puVar8 & 1) == 0) {
    lVar4 = -0x60;
    goto LAB_101e33258;
  }
  uVar9 = auStack_b0[0];
  func_0x000107c3e2f4();
  if ((int)uVar9 == 1) {
    uVar9 = auStack_b0[0];
    func_0x000107c40534();
    func_0x000107c61180();
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e332b0);
      (*pcVar2)();
    }
    uVar10 = uVar9;
    func_0x000107c4058c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e332b4);
      (*pcVar2)();
    }
    uVar9 = uVar10;
    func_0x000107c5d20c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar9 != 0) {
      uVar10 = uVar9;
      func_0x000107c44ba0();
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar9;
        func_0x000107c5c7dc(uVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(auStack_b0[0]);
        func_0x00010006e7f4(&uStack_70);
        return uVar10;
      }
      func_0x00010006e7f4(&uStack_70);
      func_0x000107c61170(uVar9);
      goto LAB_101e33268;
    }
  }
  func_0x00010006e7f4(&uStack_70);
LAB_101e33268:
  func_0x000107c61170(auStack_b0[0]);
  return 0;
}



/* Entry: 101e332b4; end: 101e332f7;  */

void FUN_101e332b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d538a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b25f0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d538a0 = puVar1;
  return;
}



/* Entry: 101e332f8; end: 101e3334b;  */

void FUN_101e332f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 101e3334c; end: 101e3339f;  */

/* WARNING: Possible PIC construction at 0x000101e33388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e3338c) */

void FUN_101e3334c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100795efc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101e333a0; end: 101e333a7;  */

/* WARNING: Possible PIC construction at 0x000101e33388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e3338c) */

void FUN_101e333a0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000100795efc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101e333a8; end: 101e3341b;  */

void FUN_101e333a8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101e3341c; end: 101e33423;  */

void FUN_101e3341c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000101e32fa4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101e33424; end: 101e334c7;  */

void FUN_101e33424(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000101e3507c(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  uVar1 = param_2;
  FUN_101e354d8(param_2,param_3,param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e334c8; end: 101e334d3;  */

void FUN_101e334c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000101e3507c(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar4);
  uVar3 = uVar1;
  FUN_101e354d8(uVar1,uVar2,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 101e334d4; end: 101e334ff;  */

/* WARNING: Possible PIC construction at 0x000101e334e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e334f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e334e4) */
/* WARNING: Removing unreachable block (ram,0x000101e334f4) */

void FUN_101e334d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e33500; end: 101e3357f;  */

void FUN_101e33500(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e33580; end: 101e33c0b;  */

undefined * FUN_101e33580(undefined8 param_1,undefined8 param_2,byte param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *unaff_x20;
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar5 = unaff_x20[5];
    func_0x000107c615f0(lVar5);
  }
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c615f0(param_4);
  func_0x000107c453e4();
  lVar2 = lVar5;
  func_0x000107c614f0(lVar5);
  puVar3 = &UNK_11048cbe0;
  func_0x000107c613fc(&UNK_11048cbe0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_11048cc08;
  func_0x000107c613fc(&UNK_11048cc08,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  puVar4[0x30] = param_3 & 1;
  *(undefined8 *)(puVar4 + 0x38) = uVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x101e35154,puVar4,lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  puVar3 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 101e33c0c; end: 101e33cb7;  */

/* WARNING: Possible PIC construction at 0x000101e33c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e33c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e33c64) */
/* WARNING: Removing unreachable block (ram,0x000101e33c94) */

void FUN_101e33c0c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8(PTR_PTR_1126d9598);
  func_0x000107c453e4();
  func_0x000107c5c7d8(param_2);
  func_0x000107c61180();
  func_0x000107c5ee30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e33cb8; end: 101e33d77; -[_TtC20TemplateServicesImpl22TemplateSnapDocFactory createSnapDocFromTemplate:importedMediaSegments:slotRequirementDisabled:performer:] */

void FUN_101e33cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101e36608(0,0x112d62390,&PTR_PTR_1126aff40);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101e33580(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e33d78; end: 101e33def; -[_TtC20TemplateServicesImpl22TemplateSnapDocFactory createTemplateFromSnapDoc:type:performer:] */

void FUN_101e33d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101e35870(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e33df0; end: 101e34213;  */

undefined8
FUN_101e33df0(long param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar11;
  long lStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_e0 - extraout_x8;
  uStack_78 = 0;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar11,1,1,lVar3);
  uStack_7c = 0;
  lVar3 = param_1;
  func_0x000107c4c9d4();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    pcStack_c8 = (code *)0x0;
    puStack_c0 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11048cb18;
    func_0x000107c613fc(&UNK_11048cb18,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar11;
    *(undefined4 **)(puVar4 + 0x18) = &uStack_7c;
    puVar5 = &UNK_11048cb40;
    func_0x000107c613fc(&UNK_11048cb40,0x20,7);
    pcStack_c8 = FUN_101e35124;
    *(code **)(puVar5 + 0x10) = FUN_101e35124;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_90 = FUN_101e3512c;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_101351610;
    puStack_98 = &UNK_11048cb58;
    ppuVar6 = &puStack_b0;
    puStack_c0 = puVar4;
    puStack_88 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_88);
    func_0x000107c4c5a0(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  lVar3 = param_1;
  lStack_e0 = lVar11;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar4 = &UNK_11048c9b0;
  lStack_d0 = lVar3;
  func_0x000107c613fc(&UNK_11048c9b0,0x48,7);
  *(long *)(puVar4 + 0x10) = lVar11;
  *(undefined8 **)(puVar4 + 0x18) = &uStack_78;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(undefined4 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  puVar4[0x38] = param_4;
  *(undefined4 **)(puVar4 + 0x40) = &uStack_7c;
  puVar5 = &UNK_11048c9d8;
  func_0x000107c613fc(&UNK_11048c9d8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101e3509c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_90 = (code *)0x101e366c0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1019fdb4c;
  puStack_98 = &UNK_11048c9f0;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar5 = puStack_88;
  ppuStack_d8 = ppuVar6;
  func_0x000107c615f0(param_5);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11048ca28;
  func_0x000107c613fc(&UNK_11048ca28,0x48,7);
  *(undefined4 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  puVar5[0x20] = param_4;
  *(undefined8 **)(puVar5 + 0x28) = &uStack_78;
  *(long *)(puVar5 + 0x30) = param_1;
  *(long *)(puVar5 + 0x38) = lVar11;
  *(undefined8 *)(puVar5 + 0x40) = param_5;
  puVar7 = &UNK_11048ca50;
  func_0x000107c613fc(&UNK_11048ca50,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101e350d4;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  pcStack_90 = (code *)0x101e366c4;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x101a36974;
  puStack_98 = &UNK_11048ca68;
  ppuVar8 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_88;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11048caa0;
  func_0x000107c613fc(&UNK_11048caa0,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_78;
  *(undefined4 *)(puVar7 + 0x18) = param_2;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  puVar7[0x28] = param_4;
  *(undefined8 *)(puVar7 + 0x30) = param_5;
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20;
  puVar9 = &UNK_11048cac8;
  func_0x000107c613fc(&UNK_11048cac8,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x101e350ec;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  pcStack_90 = FUN_101e35104;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101382510;
  puStack_98 = &UNK_11048cae0;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar1 = puStack_88;
  func_0x000107c615f0(param_5);
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61574(puVar1);
  lVar3 = lStack_d0;
  ppuVar6 = ppuStack_d8;
  func_0x000107c4c668(lStack_d0);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  uVar2 = uStack_78;
  func_0x000107c614b0(uStack_78);
  func_0x0001000293e4(lStack_e0);
  func_0x000107c614ac(uStack_78);
  func_0x0001013855f4(pcStack_c8,puStack_c0);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return uVar2;
}



/* Entry: 101e34214; end: 101e34293;  */

void FUN_101e34214(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  long lVar1;
  long lVar2;
  
  func_0x0001000293e4(param_5);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_5,param_2,lVar1);
  (**(code **)(lVar2 + 0x38))(param_5,0,1,lVar1);
  *param_6 = param_3;
  return;
}



/* Entry: 101e34294; end: 101e346ef;  */

void FUN_101e34294(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,int *param_8)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_78 + (-8 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_2,puVar14);
  puVar3 = puVar14;
  (**(code **)(lVar12 + 0x30))(puVar14,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar14);
    uVar4 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar5 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f0145d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uVar4 = *param_3;
    *param_3 = puVar6;
  }
  else {
    lStack_80 = lVar2;
    (**(code **)(lVar12 + 0x20))(lVar13,puVar14,lVar2);
    puVar6 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    puVar7 = puVar6;
    func_0x000107c5ed90();
    func_0x000107c43480(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    lVar2 = param_4;
    func_0x000107c5c52c();
    func_0x000107c61180();
    lVar8 = lVar2;
    func_0x000107c5ed90();
    if (param_6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e346e4);
      (*pcVar1)();
    }
    func_0x000107c60a40(auStack_78,param_6,1000);
    lVar9 = lVar8;
    func_0x0001080691fc(lVar8,auStack_78);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar9 != 0) {
      func_0x000107c56420(lVar9);
      if (*param_8 != 0) {
        puVar7 = PTR_PTR_1126affc8;
        func_0x000107c610f8(PTR_PTR_1126affc8);
        func_0x000107c453e4();
        puVar10 = PTR_PTR_1126affd0;
        func_0x000107c610f8(PTR_PTR_1126affd0);
        func_0x000107c453e4();
        func_0x000107c5648c();
        func_0x000107c5645c(puVar7);
        lVar8 = lVar9;
        func_0x000107c3d988();
        func_0x000107c61180();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e346f0);
          (*pcVar1)();
        }
        func_0x000107c3d798();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar8);
      }
      puVar7 = PTR_PTR_1126b25d0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c563e8();
      puVar10 = puVar7;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (puVar10 != (undefined *)0x0) {
        puVar11 = puVar10;
        func_0x000107c498f0();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar11 != (undefined *)0x0) {
          func_0x000107c5a494(puVar11);
          func_0x000107c61170(puVar11);
          puVar10 = PTR_PTR_1126affe8;
          func_0x000107c61168(PTR_PTR_1126affe8);
          func_0x000107c4b838();
          func_0x000107c61180();
          func_0x000107c3d7f4(param_4);
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(param_4);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(lVar2);
          (**(code **)(lVar12 + 8))(lVar13,lStack_80);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e346ec);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e346e8);
      (*pcVar1)();
    }
    uVar4 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar5 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f014630);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    (**(code **)(lVar12 + 8))(lVar13,lStack_80);
    uVar4 = *param_3;
    *param_3 = puVar7;
  }
  func_0x000107c614ac(uVar4);
  return;
}



/* Entry: 101e346f0; end: 101e34ddb;  */

/* WARNING: Possible PIC construction at 0x000101e34d88: Changing call to branch */

void FUN_101e346f0(double param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  double dVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0x112d36580;
  uStack_a4 = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_c0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c42378(&puStack_a0,param_2);
  func_0x000107c600d4(puStack_a0,uStack_98,uStack_90);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34db4);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34db8);
    (*pcVar1)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dbc);
    (*pcVar1)();
  }
  if ((ulong)(long)param_1 < param_4) {
    uVar3 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar4 = 0xd000000000000049;
    func_0x000107c5fadc(0xd000000000000049,0x800000010f014530);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
  }
  else {
    uVar4 = param_7;
    lStack_c0 = param_9;
    lStack_b8 = lVar2;
    lStack_b0 = lVar14;
    func_0x000107c5d060(param_7);
    func_0x000107c61180();
    func_0x000107c3ab44(&puStack_a0);
    func_0x000107c61170(uVar4);
    func_0x000107c600d4(puStack_88,pcStack_80,puStack_78);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dc0);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dc4);
      (*pcVar1)();
    }
    dVar15 = 1.8446744073709552e+19;
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dc8);
      (*pcVar1)();
    }
    func_0x000107c5d060(param_7);
    func_0x000107c61180();
    func_0x000107c3ab44(&puStack_a0);
    func_0x000107c61170(param_7);
    func_0x000107c600d4(puStack_a0,uStack_98,uStack_90);
    dVar15 = dVar15 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dcc);
      (*pcVar1)();
    }
    if (dVar15 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dd0);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dd4);
      (*pcVar1)();
    }
    if (param_4 <= (ulong)(long)param_1) {
      func_0x000100029394(param_8,lVar8);
      lVar14 = lStack_b0;
      lVar2 = lStack_b8;
      lVar5 = lVar8;
      (**(code **)(lStack_b0 + 0x30))(lVar8,1,lStack_b8);
      if ((int)lVar5 == 1) {
        func_0x0001000293e4(lVar8);
        uVar4 = 0x6574616c706d6574;
        func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
        uVar3 = 0xd000000000000020;
        func_0x000107c5fadc(0xd000000000000020,0x800000010f0145d0);
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168();
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        uVar4 = *param_6;
        *param_6 = puVar6;
      }
      else {
        (**(code **)(lVar14 + 0x20))(lVar13,lVar8,lVar2);
        puVar6 = PTR_PTR_1126b3080;
        func_0x000107c61168(PTR_PTR_1126b3080);
        puVar7 = puVar6;
        func_0x000107c5ed90();
        func_0x000107c43480(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        lVar8 = lStack_c0;
        func_0x000107c5c52c();
        func_0x000107c61180();
        lVar5 = lVar8;
        func_0x000107c5ed90();
        lVar9 = lVar5;
        func_0x0001080694d8();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar9 != 0) {
          func_0x000107c56420(lVar9);
          puVar7 = PTR_PTR_1126b25d0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c563e8();
          puVar10 = puVar7;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34dd8);
            (*pcVar1)();
          }
          puVar11 = puVar10;
          func_0x000107c498f0();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          lVar2 = lStack_b0;
          if (puVar11 != (undefined *)0x0) {
            func_0x000107c4c978(lVar9);
            func_0x000107c5a494(puVar11);
            func_0x000107c61170(puVar11);
            puVar11 = PTR_PTR_1126affe8;
            func_0x000107c61168(PTR_PTR_1126affe8);
            func_0x000107c4b838();
            func_0x000107c61180();
            lVar14 = lStack_c0;
            func_0x000107c3d7f4(lStack_c0);
            func_0x000107c61180();
            func_0x000107c61170();
            puVar10 = &UNK_11048cb90;
            func_0x000107c613fc(&UNK_11048cb90,0x18,7);
            *(long *)(puVar10 + 0x10) = (long)dVar15;
            pcStack_80 = FUN_101e3514c;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101e34e58;
            puStack_88 = &UNK_11048cba8;
            ppuVar12 = &puStack_a0;
            puStack_78 = puVar10;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_78);
            func_0x000107c5d684(lVar14);
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(lVar8);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61170(lVar9);
            (**(code **)(lVar2 + 8))(lVar13,lStack_b8);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34ddc);
          (*pcVar1)();
        }
        uVar4 = 0x6574616c706d6574;
        func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
        uVar3 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010f014600);
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c61168();
        func_0x000107c42a5c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        (**(code **)(lVar14 + 8))(lVar13,lVar2);
        uVar4 = *param_6;
        *param_6 = puVar7;
      }
      goto code_r0x000107c614ac;
    }
    uVar3 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar4 = 0xd00000000000004e;
    func_0x000107c5fadc(0xd00000000000004e,0x800000010f014580);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *param_6;
  *param_6 = puVar6;
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar4);
  return;
}



/* Entry: 101e34ddc; end: 101e34ea7;  */

/* WARNING: Possible PIC construction at 0x000101e34e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e34e2c) */

void FUN_101e34ddc(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c44be0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c5d040();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34e58);
      (*pcVar1)();
    }
    func_0x000107c597e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e34ea8; end: 101e34f67;  */

void FUN_101e34ea8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_101e32b44(0);
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  func_0x000107c4b838();
  func_0x000107c61180();
  uVar2 = param_1;
  FUN_101e315e4(param_1,puVar1,param_4,param_6,*(undefined8 *)(param_7 + 0x18),
                *(undefined8 *)(param_7 + 0x10));
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  uVar3 = *param_2;
  *param_2 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar3);
  return;
}



/* Entry: 101e34f68; end: 101e3503f;  */

/* WARNING: Possible PIC construction at 0x000101e34f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e34f9c) */
/* WARNING: Removing unreachable block (ram,0x000101e34fd0) */
/* WARNING: Removing unreachable block (ram,0x000101e34fb0) */

void FUN_101e34f68(long param_1)

{
  code *pcVar1;
  
  func_0x000107c423f4();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c53190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34fd0);
  (*pcVar1)();
}



/* Entry: 101e35040; end: 101e3509b;  */

void FUN_101e35040(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e3509c; end: 101e35103;  */

void FUN_101e3509c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined1 *puVar17;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar13 = *(long *)(unaff_x20 + 0x30);
  piVar14 = *(int **)(unaff_x20 + 0x40);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_78 + (-8 - extraout_x8);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(uVar5,puVar17);
  puVar4 = puVar17;
  (**(code **)(lVar15 + 0x30))(puVar17,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001000293e4(puVar17);
    uVar5 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar6 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f0145d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    uVar5 = *puVar1;
    *puVar1 = puVar7;
  }
  else {
    lStack_80 = lVar3;
    (**(code **)(lVar15 + 0x20))(lVar16,puVar17,lVar3);
    puVar7 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    func_0x000107c43480(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    lVar3 = lVar12;
    func_0x000107c5c52c();
    func_0x000107c61180();
    lVar9 = lVar3;
    func_0x000107c5ed90();
    if (lVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e346e4);
      (*pcVar2)();
    }
    func_0x000107c60a40(auStack_78,lVar13,1000);
    lVar13 = lVar9;
    func_0x0001080691fc(lVar9,auStack_78);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar13 != 0) {
      func_0x000107c56420(lVar13);
      if (*piVar14 != 0) {
        puVar8 = PTR_PTR_1126affc8;
        func_0x000107c610f8(PTR_PTR_1126affc8);
        func_0x000107c453e4();
        puVar10 = PTR_PTR_1126affd0;
        func_0x000107c610f8(PTR_PTR_1126affd0);
        func_0x000107c453e4();
        func_0x000107c5648c();
        func_0x000107c5645c(puVar8);
        lVar9 = lVar13;
        func_0x000107c3d988();
        func_0x000107c61180();
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e346f0);
          (*pcVar2)();
        }
        func_0x000107c3d798();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar9);
      }
      puVar8 = PTR_PTR_1126b25d0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c563e8();
      puVar10 = puVar8;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (puVar10 != (undefined *)0x0) {
        puVar11 = puVar10;
        func_0x000107c498f0();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar11 != (undefined *)0x0) {
          func_0x000107c5a494(puVar11);
          func_0x000107c61170(puVar11);
          puVar10 = PTR_PTR_1126affe8;
          func_0x000107c61168(PTR_PTR_1126affe8);
          func_0x000107c4b838();
          func_0x000107c61180();
          func_0x000107c3d7f4(lVar12);
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(lVar12);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(lVar3);
          (**(code **)(lVar15 + 8))(lVar16,lStack_80);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e346ec);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e346e8);
      (*pcVar2)();
    }
    uVar5 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar6 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f014630);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    (**(code **)(lVar15 + 8))(lVar16,lStack_80);
    uVar5 = *puVar1;
    *puVar1 = puVar8;
  }
  func_0x000107c614ac(uVar5);
  return;
}



/* Entry: 101e35104; end: 101e35123;  */

void FUN_101e35104(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e35124; end: 101e3512b;  */

void FUN_101e35124(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = *(undefined4 **)(unaff_x20 + 0x18);
  func_0x0001000293e4(uVar1);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(uVar1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(uVar1,0,1,lVar3);
  *puVar2 = param_3;
  return;
}



/* Entry: 101e3512c; end: 101e3514b;  */

void FUN_101e3512c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e3514c; end: 101e35167;  */

/* WARNING: Possible PIC construction at 0x000101e34e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e34e2c) */

void FUN_101e3514c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c44be0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c5d040();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e34e58);
      (*pcVar1)();
    }
    func_0x000107c597e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e35168; end: 101e35183;  */

void FUN_101e35168(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101e35184();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101e35184; end: 101e3528f;  */

undefined * FUN_101e35184(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e35290);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e31c90;
    func_0x0001000285a8(0x112e31c90,&UNK_10da1ad00);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar2 != param_4 || param_4 + uVar5 * 0x18 + 0x20 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 101e35290; end: 101e352df;  */

/* WARNING: Removing unreachable block (ram,0x000101d18060) */
/* WARNING: Removing unreachable block (ram,0x000101d18084) */
/* WARNING: Removing unreachable block (ram,0x000101d18068) */
/* WARNING: Removing unreachable block (ram,0x000101d18150) */
/* WARNING: Removing unreachable block (ram,0x000101d18074) */
/* WARNING: Removing unreachable block (ram,0x000101d1807c) */
/* WARNING: Removing unreachable block (ram,0x000101d180c0) */
/* WARNING: Removing unreachable block (ram,0x000101d180d4) */
/* WARNING: Removing unreachable block (ram,0x000101d180e0) */
/* WARNING: Removing unreachable block (ram,0x000101d180e8) */

ulong FUN_101e35290(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_101d18154(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_101d181d4(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d18150);
  (*pcVar1)();
}



/* Entry: 101e352e0; end: 101e354d7;  */

bool FUN_101e352e0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar2 == 4) {
    lVar2 = param_1;
    func_0x000107c40dc8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e35398);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c44990();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 != 0) {
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3539c);
        (*pcVar1)();
      }
      lVar2 = param_1;
      func_0x000107c4ce20();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c4ce50(lVar2);
        func_0x000107c61170(lVar2);
        return (int)lVar3 == 1;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e353a0);
      (*pcVar1)();
    }
  }
  return false;
}



/* Entry: 101e354d8; end: 101e3571f;  */

void FUN_101e354d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f014760);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  return;
}



/* Entry: 101e35720; end: 101e35727;  */

/* WARNING: Possible PIC construction at 0x000101e33c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e33c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e33c64) */
/* WARNING: Removing unreachable block (ram,0x000101e33c94) */

void FUN_101e35720(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c610f8(PTR_PTR_1126d9598);
  func_0x000107c453e4();
  func_0x000107c5c7d8(uVar1);
  func_0x000107c61180();
  func_0x000107c5ee30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101e35728; end: 101e3586f;  */

/* WARNING: Possible PIC construction at 0x000101e35748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e3574c) */
/* WARNING: Removing unreachable block (ram,0x000101e3586c) */
/* WARNING: Removing unreachable block (ram,0x000101e3575c) */
/* WARNING: Removing unreachable block (ram,0x000101e35784) */
/* WARNING: Removing unreachable block (ram,0x000101e35790) */
/* WARNING: Removing unreachable block (ram,0x000101e3584c) */
/* WARNING: Removing unreachable block (ram,0x000101e35794) */
/* WARNING: Removing unreachable block (ram,0x000101e35788) */
/* WARNING: Removing unreachable block (ram,0x000101e3579c) */
/* WARNING: Removing unreachable block (ram,0x000101e357d0) */
/* WARNING: Removing unreachable block (ram,0x000101e35834) */
/* WARNING: Removing unreachable block (ram,0x000101e3583c) */
/* WARNING: Removing unreachable block (ram,0x000101e35804) */
/* WARNING: Removing unreachable block (ram,0x000101e3580c) */
/* WARNING: Removing unreachable block (ram,0x000101e35818) */
/* WARNING: Removing unreachable block (ram,0x000101e35778) */

void FUN_101e35728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09deb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_localSegmentCount_1126051b8);
  return;
}



/* Entry: 101e35870; end: 101e363db;  */

undefined * FUN_101e35870(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar10 = *unaff_x20;
  puVar2 = (undefined *)unaff_x20[2];
  func_0x000107c42d48();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = puVar3;
  func_0x000107c4b82c();
  if (puVar2 != (undefined *)0x0) {
    puVar9 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    puVar12 = (undefined *)0x0;
    do {
      puVar6 = puVar9;
      func_0x000107c4b838(puVar9);
      func_0x000107c61180();
      puVar13 = &UNK_11048cc80;
      func_0x000107c613fc(&UNK_11048cc80,0x20,7);
      *(undefined8 **)(puVar13 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar13 + 0x18) = uVar10;
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x101e366c8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100ff0b04;
      puStack_90 = &UNK_11048cc98;
      ppuVar4 = &puStack_a8;
      puStack_80 = puVar13;
      func_0x000107c60bc4(ppuVar4);
      puVar13 = puStack_80;
      func_0x000107c6157c(unaff_x20);
      func_0x000107c61574(puVar13);
      puVar13 = puVar3;
      func_0x000107c4171c(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar13);
      pcStack_88 = (code *)0x101e366d0;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = puVar11;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100ff0b04;
      puStack_90 = &UNK_11048ccc0;
      ppuVar4 = &puStack_a8;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_80);
      puVar13 = puVar3;
      func_0x000107c4e918();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      if (puVar13 != (undefined *)0x0) {
        uVar5 = 0;
        FUN_101e36608(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar11 = puVar13;
        func_0x000107c5fc54(puVar13,uVar5);
        func_0x000107c61170(puVar13);
        FUN_101d17e90(puVar11);
      }
      puVar12 = puVar12 + 1;
      func_0x000107c61170(puVar6);
    } while (puVar2 != puVar12);
  }
  puVar13 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  puVar11 = puVar13;
  func_0x000107c44410();
  func_0x000107c61180();
  puVar12 = &UNK_11048ccf8;
  func_0x000107c613fc(&UNK_11048ccf8,0x20,7);
  *(undefined8 **)(puVar12 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar12 + 0x18) = uVar10;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101e363dc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100ff0b04;
  puStack_90 = &UNK_11048cd10;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar12;
  func_0x000107c60bc4(ppuVar4);
  puVar12 = puStack_80;
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61574(puVar12);
  puVar12 = puVar3;
  func_0x000107c4171c(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  puVar12 = puVar13;
  func_0x000107c44410(puVar13);
  func_0x000107c61180();
  pcStack_88 = (code *)0x101e366cc;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar9;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100ff0b04;
  puStack_90 = &UNK_11048cd38;
  ppuVar4 = &puStack_a8;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_80);
  puVar9 = puVar3;
  func_0x000107c4e918();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar12);
  if (puVar9 != (undefined *)0x0) {
    uVar10 = 0;
    FUN_101e36608(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar12 = puVar9;
    func_0x000107c5fc54(puVar9,uVar10);
    func_0x000107c61170(puVar9);
    FUN_101d17e90(puVar12);
  }
  puVar12 = puStack_78;
  if ((ulong)puStack_78 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puStack_78 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_78) {
      puVar9 = puStack_78;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36368);
      (*pcVar1)();
    }
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar12 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174(puVar6);
      }
      else {
        puVar6 = puVar11;
        func_0x0001002ec9a0(puVar11);
      }
      puVar11 = puVar11 + 1;
      pcStack_88 = (code *)0x101e353a0;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_101a283e8;
      puStack_90 = &UNK_11048cd60;
      ppuVar4 = &puStack_a8;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_80);
      func_0x000107c5d5a8(puVar3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar6);
    } while (puVar9 != puVar11);
  }
  puVar9 = puVar13;
  func_0x000107c44410(puVar13);
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c4e914();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar11 != (undefined *)0x0) {
    uVar10 = 0;
    FUN_101e36608(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = puVar11;
    func_0x000107c5fc54(puVar11,uVar10);
    func_0x000107c61170(puVar11);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar11 = puVar9;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(puVar9);
    if (puVar11 == (undefined *)0x0) {
      puVar9 = puVar13;
      func_0x000107c44410(puVar13);
      func_0x000107c61180();
      func_0x000107c4172c(puVar3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(puVar9);
    }
  }
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 1) {
    if (param_2 != 0) {
      puVar2 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      uVar10 = 0x6574616c706d6574;
      func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
      uVar5 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010f0146f0);
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar5);
      puVar13 = puVar9;
      func_0x000107c5ed2c(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c451ac(puVar2);
      func_0x000107c61180();
      func_0x000107c6142c(puVar12);
      func_0x000107c615e8(puVar3);
      goto LAB_101e36268;
    }
    func_0x0001044e03bc(0);
    puVar9 = puVar3;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x0001044de570();
    func_0x000107c61170(puVar9);
    if (puVar11 != (undefined *)0x0) {
      pcStack_88 = FUN_101e34f68;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_101a283e8;
      puStack_90 = &UNK_11048ce00;
      ppuVar4 = &puStack_a8;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c5d5a8(puVar3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar11);
    }
    puVar9 = puVar3;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x0001044de40c();
    func_0x000107c61170(puVar9);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar11 != (undefined *)0x0) {
      pcStack_88 = (code *)0x101e34fd4;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_101a283e8;
      puStack_90 = &UNK_11048cdd8;
      ppuVar4 = &puStack_a8;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c5d5a8(puVar3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar11);
    }
  }
  if (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      puVar11 = puVar11 + 1;
      puVar6 = puVar13;
      func_0x000107c4b838(puVar13);
      func_0x000107c61180();
      pcStack_88 = (code *)0x101e36684;
      puStack_80 = (undefined *)0x0;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100ff0b04;
      puStack_90 = &UNK_11048cd88;
      ppuVar4 = &puStack_a8;
      puStack_a8 = puVar9;
      func_0x000107c60bc4(ppuVar4);
      puVar7 = puVar3;
      func_0x000107c4171c(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar7);
    } while (puVar2 != puVar11);
  }
  func_0x000107c44410(puVar13);
  func_0x000107c61180();
  pcStack_88 = (code *)0x101e36680;
  puStack_80 = (undefined *)0x0;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100ff0b04;
  puStack_90 = &UNK_11048cdb0;
  ppuVar4 = &puStack_a8;
  puStack_a8 = puVar9;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puVar3;
  func_0x000107c4e918();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar13);
  if (puVar2 != (undefined *)0x0) {
    uVar10 = 0;
    FUN_101e36608(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = puVar2;
    func_0x000107c5fc54(puVar2,uVar10);
    func_0x000107c61170(puVar2);
    if ((ulong)puVar9 >> 0x3e == 0) {
      if (1 < *(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10)) {
        puVar2 = puVar9;
        func_0x000107c61550();
        if (((ulong)puVar2 & 1) == 0) goto LAB_101e3606c;
LAB_101e36078:
        puVar2 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if (*(long *)(puVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e363b0);
          (*pcVar1)();
        }
        lVar8 = *(long *)(puVar2 + 0x10) + -1;
        uVar10 = *(undefined8 *)(puVar2 + lVar8 * 8 + 0x20);
        *(long *)(puVar2 + 0x10) = lVar8;
        func_0x000107c61170(uVar10);
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar2 = *(undefined **)(puVar2 + 0x10);
        }
        else {
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar2 = puVar9;
          }
          func_0x000107c60480();
        }
        if (puVar2 != (undefined *)0x0) {
          if ((long)puVar2 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e363cc);
            (*pcVar1)();
          }
          puVar13 = (undefined *)0x0;
          do {
            if (((ulong)puVar9 & 0xc000000000000001) == 0) {
              puVar11 = *(undefined **)(puVar9 + (long)puVar13 * 8 + 0x20);
              func_0x000107c61174(puVar11);
            }
            else {
              puVar11 = puVar13;
              func_0x0001002ec9a0(puVar13,puVar9);
            }
            puVar13 = puVar13 + 1;
            puVar6 = puVar3;
            func_0x000107c41718(puVar3);
            func_0x000107c61180();
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar6);
          } while (puVar2 != puVar13);
        }
      }
    }
    else {
      puVar2 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar2 = puVar9;
      }
      puVar13 = puVar2;
      func_0x000107c60480();
      if (1 < (long)puVar13) {
        func_0x000107c60480();
        if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e363ac);
          (*pcVar1)();
        }
        func_0x000107c61550(puVar9);
LAB_101e3606c:
        FUN_101e35290();
        goto LAB_101e36078;
      }
    }
    func_0x000107c6142c(puVar9);
  }
  puVar2 = puVar3;
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar10 = unaff_x20[4];
  puVar9 = puVar2;
  FUN_101e366d4();
  func_0x000107c61170(puVar2);
  if (puVar9 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bfa60;
    func_0x000107c610f8(PTR_PTR_1126bfa60);
    func_0x000107c453e4();
    func_0x000107c5a0f8();
    puVar9 = puVar3;
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar13 = puVar9;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if (puVar13 != (undefined *)0x0) {
      puVar9 = puVar13;
      func_0x000107c5ee30(puVar13);
      func_0x000107c61170(puVar13);
      puVar13 = puVar9;
      func_0x000107c5ee20(puVar9,uVar10);
      func_0x00010006c090(puVar9,uVar10);
    }
    func_0x000107c58f80(puVar2);
    func_0x000107c61170(puVar13);
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c6142c(puVar12);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar3);
    return puVar9;
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar13 = puVar9;
  func_0x000107c5ed2c(puVar9);
  func_0x000107c451ac(puVar2);
  func_0x000107c61180();
  func_0x000107c614ac(puVar9);
  func_0x000107c6142c(puVar12);
  func_0x000107c615e8(puVar3);
LAB_101e36268:
  func_0x000107c61170(puVar13);
  return puVar2;
}



/* Entry: 101e363dc; end: 101e363e7;  */

bool FUN_101e363dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c4abb4(param_1,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x20));
  if ((int)lVar2 == 4) {
    func_0x0001000d224c(&lStack_48);
    uVar3 = *(ulong *)(lStack_48 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f0);
      (*pcVar1)();
    }
    uVar4 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f014730);
    uVar5 = uVar3;
    func_0x000107c3ebd4();
    func_0x000107c61574(lStack_48);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) == 0) {
      lVar2 = param_1;
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f8);
        (*pcVar1)();
      }
      lVar6 = lVar2;
      func_0x000107c44990();
      func_0x000107c61170(lVar2);
      if ((int)lVar6 != 0) {
        lVar2 = param_1;
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365fc);
          (*pcVar1)();
        }
        lVar6 = lVar2;
        func_0x000107c4ce20();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36600);
          (*pcVar1)();
        }
        lVar2 = lVar6;
        func_0x000107c4ce50();
        func_0x000107c61170(lVar6);
        if ((int)lVar2 == 6) {
          return true;
        }
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (param_1 != 0) {
          lVar2 = param_1;
          func_0x000107c4ce20();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36608);
            (*pcVar1)();
          }
          lVar6 = lVar2;
          func_0x000107c4ce50(lVar2);
          func_0x000107c61170(lVar2);
          return (int)lVar6 == 5;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36604);
        (*pcVar1)();
      }
    }
  }
  else if ((int)lVar2 == 1) {
    lVar2 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365ec);
      (*pcVar1)();
    }
    lVar6 = lVar2;
    func_0x000107c3e240();
    func_0x000107c61170(lVar2);
    if ((int)lVar6 == 5) {
      return true;
    }
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f4);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
    return (int)lVar2 == 6;
  }
  return false;
}



/* Entry: 101e363e8; end: 101e36607;  */

bool FUN_101e363e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar2 == 4) {
    func_0x0001000d224c(&lStack_48);
    uVar3 = *(ulong *)(lStack_48 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f0);
      (*pcVar1)();
    }
    uVar4 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f014730);
    uVar5 = uVar3;
    func_0x000107c3ebd4();
    func_0x000107c61574(lStack_48);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) == 0) {
      lVar2 = param_1;
      func_0x000107c40dc8();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f8);
        (*pcVar1)();
      }
      lVar6 = lVar2;
      func_0x000107c44990();
      func_0x000107c61170(lVar2);
      if ((int)lVar6 != 0) {
        lVar2 = param_1;
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365fc);
          (*pcVar1)();
        }
        lVar6 = lVar2;
        func_0x000107c4ce20();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36600);
          (*pcVar1)();
        }
        lVar2 = lVar6;
        func_0x000107c4ce50();
        func_0x000107c61170(lVar6);
        if ((int)lVar2 == 6) {
          return true;
        }
        func_0x000107c40dc8();
        func_0x000107c61180();
        if (param_1 != 0) {
          lVar2 = param_1;
          func_0x000107c4ce20();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36608);
            (*pcVar1)();
          }
          lVar6 = lVar2;
          func_0x000107c4ce50(lVar2);
          func_0x000107c61170(lVar2);
          return (int)lVar6 == 5;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36604);
        (*pcVar1)();
      }
    }
  }
  else if ((int)lVar2 == 1) {
    lVar2 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365ec);
      (*pcVar1)();
    }
    lVar6 = lVar2;
    func_0x000107c3e240();
    func_0x000107c61170(lVar2);
    if ((int)lVar6 == 5) {
      return true;
    }
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e365f4);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
    return (int)lVar2 == 6;
  }
  return false;
}


