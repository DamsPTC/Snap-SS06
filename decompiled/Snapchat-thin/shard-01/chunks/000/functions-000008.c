/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c04274; end: 100c0427f; -[SCAddFriendQRCodeServiceProvider setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e540;
  func_0x000107c61428(param_1 + _DAT_112d6e540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04280; end: 100c0428b; -[SCAddFriendQRCodeServiceProvider setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e548;
  func_0x000107c61428(param_1 + _DAT_112d6e548,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0428c; end: 100c042bf; -[SCAddFriendQRCodeServiceProvider __safeProvide] */

void FUN_100c0428c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c042c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c042c0; end: 100c04677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c042c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = unaff_x20;
  func_0x000107c5bec4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c41790();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5da74();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c444a8();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          FUN_100c04740();
          func_0x000107c613fc();
          puVar6 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          puVar7 = &UNK_11039baa8;
          func_0x000107c613fc(&UNK_11039baa8,0x18,7);
          *(long *)(puVar7 + 0x10) = lVar4;
          pcStack_80 = FUN_1012989bc;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101298000;
          puStack_88 = &UNK_11039bac0;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          puVar7 = puStack_78;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61574(puVar7);
          func_0x000107c3e4fc();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar8);
          puVar9 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          puVar7 = &UNK_11039baf8;
          func_0x000107c613fc(&UNK_11039baf8,0x20,7);
          *(long *)(puVar7 + 0x10) = lVar1;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcStack_80 = (code *)0x1012989cc;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101297ffc;
          puStack_88 = &UNK_11039bb10;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          puVar7 = puStack_78;
          func_0x000107c61174(lVar1);
          func_0x000107c61174();
          func_0x000107c61574(puVar7);
          func_0x000107c3e4fc();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar8);
          *(undefined **)(lVar5 + 0x10) = puVar9;
          puVar9 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          puVar7 = &UNK_11039bb48;
          func_0x000107c613fc(&UNK_11039bb48,0x20,7);
          *(long *)(puVar7 + 0x10) = lVar2;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcStack_80 = (code *)0x1012989d4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101298004;
          puStack_88 = &UNK_11039bb60;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          puVar7 = puStack_78;
          func_0x000107c61174(lVar2);
          func_0x000107c61174(puVar6);
          func_0x000107c61574(puVar7);
          func_0x000107c3e4fc();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(puVar6);
          func_0x000107c60bd0(ppuVar8);
          *(undefined **)(lVar5 + 0x18) = puVar9;
          uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d6e550);
          *(long *)(unaff_x20 + _DAT_112d6e550) = lVar5;
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar10);
          func_0x000107c610f8(PTR_PTR_1126a6878);
          func_0x000107c45624();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100c04678; end: 100c046c7;  */

void FUN_100c04678(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c046c8; end: 100c046cb;  */

void FUN_100c046c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c046cc; end: 100c046d7; -[SCAddFriendQRCodeServiceProvider storageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c046cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e530;
  func_0x000107c61428(param_1 + _DAT_112d6e530,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c046d8; end: 100c0471b;  */

void FUN_100c046d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0471c; end: 100c04727; -[SCAddFriendQRCodeServiceProvider deltaSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0471c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e538;
  func_0x000107c61428(param_1 + _DAT_112d6e538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04728; end: 100c04733; -[SCAddFriendQRCodeServiceProvider userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04728(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e540;
  func_0x000107c61428(param_1 + _DAT_112d6e540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04734; end: 100c0473f; -[SCAddFriendQRCodeServiceProvider grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e548;
  func_0x000107c61428(param_1 + _DAT_112d6e548,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04740; end: 100c047bb;  */

void FUN_100c04740(undefined8 param_1)

{
  if (lRam0000000112d6e2e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62bab0);
  return;
}



/* Entry: 100c047bc; end: 100c047d7;  */

void FUN_100c047bc(long param_1,long param_2)

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



/* Entry: 100c047d8; end: 100c0487b; -[SCAddFriendQRCodeServices initWithAddFriendQRCodeRepository:client:] */

undefined1 *
FUN_100c047d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e5b08;
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



/* Entry: 100c0487c; end: 100c04887; -[SCAddFriendQRCodeSyncProcessorEntryPoint setAddFriendQRCodeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0487c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e618;
  func_0x000107c61428(param_1 + _DAT_112d6e618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04888; end: 100c04893; -[SCAddFriendQRCodeSyncProcessorEntryPoint setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e620;
  func_0x000107c61428(param_1 + _DAT_112d6e620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c04894; end: 100c048bb; -[SCAddFriendQRCodeSyncProcessorEntryPoint begin] */

void FUN_100c04894(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c048bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c048bc; end: 100c04a83;  */

/* WARNING: Possible PIC construction at 0x000100c04988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c04a24) */
/* WARNING: Removing unreachable block (ram,0x000100c04a14) */
/* WARNING: Removing unreachable block (ram,0x000100c04a04) */
/* WARNING: Removing unreachable block (ram,0x000100c0498c) */
/* WARNING: Removing unreachable block (ram,0x000100c04a64) */

void FUN_100c048bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3d6b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3de4c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_100c04aec(0);
      func_0x000107c613fc();
      func_0x000107c4fd24(lVar1);
      func_0x000107c61180();
      func_0x0001000285a8(0x112d6e3f8,&UNK_10d930340);
      func_0x000107c502e0(lVar2);
      func_0x000107c61180();
      func_0x0001000bda74();
      lVar1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c04a84; end: 100c04a8f; -[SCAddFriendQRCodeSyncProcessorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04a84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e610;
  func_0x000107c61428(param_1 + _DAT_112d6e610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04a90; end: 100c04ad3;  */

void FUN_100c04a90(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04ad4; end: 100c04adf; -[SCAddFriendQRCodeSyncProcessorEntryPoint addFriendQRCodeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04ad4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e618;
  func_0x000107c61428(param_1 + _DAT_112d6e618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04ae0; end: 100c04aeb; -[SCAddFriendQRCodeSyncProcessorEntryPoint appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04ae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e620;
  func_0x000107c61428(param_1 + _DAT_112d6e620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c04aec; end: 100c04b0b;  */

void FUN_100c04aec(void)

{
  func_0x000107c61168(&PTR_PTR_112d6e440);
  return;
}



/* Entry: 100c04b0c; end: 100c04b13; -[SCAddFriendQRCodeServices repository] */

undefined8 FUN_100c04b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c04b14; end: 100c04b33;  */

void FUN_100c04b14(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1640);
  return;
}



/* Entry: 100c04b34; end: 100c04c8b; -[SCCommerceFavoritesDeltaSyncProcessorEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c04bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c04c14) */
/* WARNING: Removing unreachable block (ram,0x000100c04c20) */
/* WARNING: Removing unreachable block (ram,0x000100c04c34) */
/* WARNING: Removing unreachable block (ram,0x000100c04c04) */
/* WARNING: Removing unreachable block (ram,0x000100c04bf4) */
/* WARNING: Removing unreachable block (ram,0x000100c04c58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04b34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b03e8;
  func_0x000107c610f4(PTR_PTR_1126b03e8);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_112712b24;
    func_0x000107c61148(lVar2);
  }
  func_0x000107c444a4(lVar2);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112712b28;
    func_0x000107c61148(param_1);
  }
  func_0x000107c421c8(param_1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c46bc0(puVar1,param_2,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c04c8c; end: 100c04d87; -[SCCommerceDeltaSyncProcessor initWithGrapheneRegistry:docObjectContext:] */

undefined1 *
FUN_100c04c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e4248;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0490;
    func_0x000107c610f4();
    func_0x000107c46bb4();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126b0420;
    func_0x000107c610f4();
    func_0x000107c4660c();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c04d88; end: 100c04df3; -[SCCommerceGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_100c04d88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9cb0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d66d8;
    func_0x000107c610fc(PTR_PTR_1126d66d8);
    func_0x000107c54f38(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c04df4; end: 100c04e67; -[SCGrapheneCommerceMetric2 init] */

undefined1 * FUN_100c04df4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9cc0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100c04e68; end: 100c04e97; -[SCCommerceGrapheneLogger setGraphene:] */

void FUN_100c04e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c04e98; end: 100c04f1f; -[SCFavoritesDataModelsDocStore initWithDocObjectContext:] */

undefined1 * FUN_100c04e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4250;
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



/* Entry: 100c04f20; end: 100c0503f; -[SCUserInfoDeltaSyncProcessorEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c04fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c04fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c05018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c04fe0) */
/* WARNING: Removing unreachable block (ram,0x000100c04fe4) */
/* WARNING: Removing unreachable block (ram,0x000100c04ff8) */
/* WARNING: Removing unreachable block (ram,0x000100c04fd0) */
/* WARNING: Removing unreachable block (ram,0x000100c04fc0) */
/* WARNING: Removing unreachable block (ram,0x000100c0501c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c04f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b88c0;
  func_0x000107c610f4(PTR_PTR_1126b88c0);
  lVar2 = param_1 + _DAT_112722ea8;
  func_0x000107c61148(lVar2);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c5d984();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112722eac;
  func_0x000107c61148(param_1);
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c4920c(puVar1,param_2,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c05040; end: 100c050ff; -[SCUserInfoDeltaSyncProcessor initWithUserId:grapheneRegistry:] */

undefined1 *
FUN_100c05040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8300;
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



/* Entry: 100c05100; end: 100c0510f; -[SCLensScheduleNamespaceDataModel preCachedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c05100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852f4);
}



/* Entry: 100c05110; end: 100c0512b; -[SCLensScheduleNamespaceDataModel noFillLensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c05110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852e0);
}



/* Entry: 100c0512c; end: 100c051df; -[SCLensScheduleNamespaceDataModelTransformer _lensNoFillMetadataForLensNoFillMetadataDataModel:] */

void FUN_100c0512c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de610;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    lVar2 = param_3;
    func_0x000107c3f698(param_3);
    lVar3 = param_3;
    func_0x000107c51f70(param_3);
    func_0x000107c61180();
    lVar4 = param_3;
    func_0x000107c42788(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c45d34(puVar1,param_2,lVar2,lVar3,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c051e0; end: 100c051e7; -[SCLensNoFillMetadataDataModel carouselIndex] */

undefined8 FUN_100c051e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c051e8; end: 100c051ef; -[SCLensNoFillMetadataDataModel serveItemId] */

undefined8 FUN_100c051e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c051f0; end: 100c051f7; -[SCLensNoFillMetadataDataModel encryptedAdData] */

undefined8 FUN_100c051f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c051f8; end: 100c052ab; -[SCLensNoFillMetadata initWithCarouselIndex:serveItemId:encryptedAdData:] */

undefined1 *
FUN_100c051f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270adf8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c052ac; end: 100c052bb; -[SCLensScheduleNamespaceDataModel fetchLocationMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c052ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852ec);
}



/* Entry: 100c052bc; end: 100c05427; -[SCLensScheduleNamespaceDataModelTransformer _locationMetadataWithLocationMetadataModel:] */

void FUN_100c052bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    func_0x000107c51ab8(param_3);
    func_0x000107c61180();
    func_0x000107c3b7dc(param_1,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_3;
    func_0x000107c4d544(param_3);
    func_0x000107c61180();
    uVar5 = 0xc2000000;
    lVar2 = lVar1;
    func_0x000107c4c284();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = PTR_PTR_1126de5f0;
    func_0x000107c610f4(PTR_PTR_1126de5f0);
    lVar1 = param_3;
    func_0x000107c5d0a0(param_3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c4aa9c(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c41360(uVar5,puVar4);
    func_0x000107c61180();
    func_0x000107c48514(puVar3,param_2,param_1,lVar2,lVar1,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c05428; end: 100c0542f; -[SCLensFetchLocationMetadataDataModel searchCircle] */

undefined8 FUN_100c05428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c05430; end: 100c054e3; -[SCLensScheduleNamespaceDataModelTransformer _geoCircleWithGeoCircleModel:] */

void FUN_100c05430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_4 != 0) {
    func_0x000107c61174(param_4);
    lVar1 = param_4;
    func_0x000107c3f74c(param_4);
    func_0x000107c61180();
    func_0x000107c3b7e0(param_2,param_3,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126de600;
    func_0x000107c610f4(PTR_PTR_1126de600);
    func_0x000107c4f874(param_4);
    func_0x000107c61170(param_4);
    func_0x000107c45d6c(param_1,puVar2,param_3,param_2);
    func_0x000107c61170(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c054e4; end: 100c054eb; -[SCLensFetchLocationMetadataGeoCircle center] */

undefined8 FUN_100c054e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c054ec; end: 100c05567; -[SCLensScheduleNamespaceDataModelTransformer _geoCoordinateFromGeoCoordinateModel:] */

void FUN_100c054ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de608;
  if (param_4 != 0) {
    func_0x000107c61174(param_4);
    func_0x000107c610f4(puVar1);
    func_0x000107c4ab14(param_4);
    uVar2 = param_1;
    func_0x000107c4c0e4(param_4);
    func_0x000107c61170(param_4);
    func_0x000107c470f8(param_1,uVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c05568; end: 100c0556f; -[SCLensFetchLocationMetadataGeoCoordinate latitude] */

undefined8 FUN_100c05568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c05570; end: 100c05577; -[SCLensFetchLocationMetadataGeoCoordinate longitude] */

undefined8 FUN_100c05570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c05578; end: 100c055c3; -[SCGeoCoordinate initWithLatitude:longitude:] */

void FUN_100c05578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a3d8;
  uStack_30 = param_3;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 100c055c4; end: 100c055cb; -[SCLensFetchLocationMetadataGeoCircle radius] */

undefined8 FUN_100c055c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c055cc; end: 100c05653; -[SCGeoCircle initWithCenter:radius:] */

undefined1 *
FUN_100c055cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a3d0;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c05654; end: 100c05677; -[SCGeoCoordinate copyWithZone:] */

undefined8 FUN_100c05654(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c05678; end: 100c0567f; -[SCLensFetchLocationMetadataDataModel nearbyFetchLocations] */

undefined8 FUN_100c05678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c05680; end: 100c05687; -[SCLensFetchLocationMetadataDataModel ttlMs] */

undefined8 FUN_100c05680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c05688; end: 100c0568f; -[SCLensFetchLocationMetadataDataModel lastUpdateTimestampSec] */

undefined8 FUN_100c05688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c05690; end: 100c05777; -[SCFetchLocationMetadata initWithSearchCircle:nearbyFetchLocations:ttlMs:lastUpdateDate:] */

undefined1 *
FUN_100c05690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270a3c8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c05778; end: 100c0579b; -[SCGeoCircle copyWithZone:] */

undefined8 FUN_100c05778(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c0579c; end: 100c058c7; +[SCLensScheduleNamespaceDataModelTransformer _requestMetadataWithNamespaceDataModel:] */

void FUN_100c0579c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4cfcc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3fbc4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x000107c3fbc4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_100c05890;
    }
  }
  lVar3 = lVar1;
  func_0x000107c4062c(lVar1);
  func_0x000107c61180();
  func_0x000107c3b180(param_1,param_2,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  puVar5 = PTR_PTR_1126de5a8;
  func_0x000107c610f4(PTR_PTR_1126de5a8);
  lVar3 = lVar1;
  func_0x000107c4e304(lVar1);
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c4d688(lVar1);
  func_0x000107c45e6c(puVar5,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
LAB_100c05890:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c058c8; end: 100c058d7; -[SCLensScheduleNamespaceDataModel mixerRequestMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c058c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852f8);
}



/* Entry: 100c058d8; end: 100c058df; -[SCMixerRequestMetadataDataModel clientRequestId] */

undefined8 FUN_100c058d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c058e0; end: 100c058e7; -[SCMixerRequestMetadataDataModel contextualInfo] */

undefined8 FUN_100c058e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c058e8; end: 100c059b7; +[SCLensScheduleNamespaceDataModelTransformer _contextualInfoFromContextualInfoModel:] */

void FUN_100c058e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    func_0x000107c5b41c(param_3);
    func_0x000107c3c860(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x000107c3f27c(param_3);
    func_0x000107c3afcc(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x000107c5b3f0(param_3);
    func_0x000107c3c85c(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x000107c4ec30(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    puVar2 = PTR_PTR_1126d8860;
    func_0x000107c610f4(PTR_PTR_1126d8860);
    func_0x000107c487fc();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c059b8; end: 100c059bf; -[SCMixerRequestMetadataDataModel paginationToken] */

undefined8 FUN_100c059b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c059c0; end: 100c059c7; -[SCMixerRequestMetadataDataModel nextPageTriggerDistance] */

undefined8 FUN_100c059c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c059c8; end: 100c05aaf; -[SCMixerRequestMetadata initWithClientRequestId:paginationToken:nextPageTriggerDistance:contextualInfo:] */

undefined1 *
FUN_100c059c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270a3e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c05ab0; end: 100c05b43; +[SCLensScheduleNamespaceDataModelTransformer _mixerRequestIdWithNamespaceDataModel:] */

void FUN_100c05ab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4cfcc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4cfc8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x000107c4cfc8(param_3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(lVar2);
    lVar3 = lVar2;
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100c05b44; end: 100c05b4b; -[SCMixerRequestMetadataDataModel mixerRequestId] */

undefined8 FUN_100c05b44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c05b4c; end: 100c05b5b; -[SCLensScheduleNamespaceDataModel ttl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c05b4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852d4);
}



/* Entry: 100c05b5c; end: 100c05d77; -[SCMixerInternalNamespaceData initWithScheduleNamespace:activeItems:preCachedItems:ttl:lastUpdateDate:noFillLensMetadata:encryptedUserTrackData:lastMixerRequestId:fetchLocationMetadata:mixerRequestMetadata:] */

undefined8 *
FUN_100c05b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1127019f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_12);
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



/* Entry: 100c05d78; end: 100c05dfb; -[SCLensScheduleNamespace copyWithZone:] */

undefined * FUN_100c05d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6868;
  func_0x000107c610f4(PTR_PTR_1126b6868);
  uVar2 = param_1;
  func_0x000107c4d420(param_1);
  func_0x000107c61180();
  func_0x000107c3ef0c(param_1);
  func_0x000107c61180();
  func_0x000107c4791c(puVar1,param_2,uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 100c05dfc; end: 100c05e1f; -[SCFetchLocationMetadata copyWithZone:] */

undefined8 FUN_100c05dfc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c05e20; end: 100c05e43; -[SCMixerRequestMetadata copyWithZone:] */

undefined8 FUN_100c05e20(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c05e44; end: 100c05e73; -[SCLensScheduleNamespace .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c05e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c05e60) */

void FUN_100c05e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c05e74; end: 100c05f1f; -[SCMixerNamespaceDocObjectStore _emitData:] */

void FUN_100c05e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100c0f704;
  puStack_48 = &UNK_110883780;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c05f20; end: 100c05f57;  */

/* WARNING: Possible PIC construction at 0x000100c05f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c05f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c05f38) */
/* WARNING: Removing unreachable block (ram,0x000100c05f48) */

void FUN_100c05f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100c05f58; end: 100c05f7b;  */

void FUN_100c05f58(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x180);
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x180) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b45d5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 100c05f7c; end: 100c05f83; -[SCLensMetadataConnectedLensInfo appId] */

undefined8 FUN_100c05f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c05f84; end: 100c05ffb; -[SCConnectedLensInfo initWithAppId:] */

undefined1 * FUN_100c05f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270ad78;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c05ffc; end: 100c060eb;  */

void FUN_100c05ffc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = param_1;
  func_0x000100083b20(&uStack_38);
  FUN_100c06258();
  func_0x000107c61574(uStack_38);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x000107c5fe08(param_1,PTR___ss11AnyHashableVN_11034e448,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c48648(puVar3);
  func_0x000107c61170(param_1);
  uVar4 = uVar2;
  FUN_100c07800(uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = uVar4;
  func_0x000107c5fc48(uVar4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar4);
  func_0x000107c3d7a0(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c3fefc(uVar1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100c060ec; end: 100c060f3;  */

void FUN_100c060ec(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001001f3a0c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100c060f4; end: 100c0613f;  */

void FUN_100c060f4(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001001f3a0c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 100c06140; end: 100c0614b;  */

void FUN_100c06140(void)

{
  long unaff_x20;
  
  FUN_100c0614c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 100c0614c; end: 100c06253;  */

/* WARNING: Possible PIC construction at 0x000100c06208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c06218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c06228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0621c) */
/* WARNING: Removing unreachable block (ram,0x000100c0620c) */
/* WARNING: Removing unreachable block (ram,0x000100c0622c) */

void FUN_100c0614c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1103d80e0;
  func_0x000107c613fc(&UNK_1103d80e0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112db0610;
  func_0x0001000285a8(0x112db0610,&UNK_10d959f48);
  func_0x000107c613fc();
  pcVar3 = FUN_100c06390;
  func_0x0001000841fc(FUN_100c06390,puVar1,uVar2);
  func_0x000100084214("SCDeltaSyncProcessorPluginRegistryServiceProvider",0x31,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c06254; end: 100c06257;  */

void FUN_100c06254(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c06258; end: 100c0638f;  */

undefined * FUN_100c06258(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112f93660);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_100c06970(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_100c06970(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return puVar5;
}



/* Entry: 100c06390; end: 100c063a3;  */

void FUN_100c06390(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  pbVar2 = *(byte **)(unaff_x20 + 0x10);
  pbVar4 = *(byte **)(unaff_x20 + 0x18);
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_100c063a4(pbVar2,pbVar4,*(undefined8 *)(unaff_x20 + 0x20),
                    *(undefined8 *)(unaff_x20 + 0x28));
      pcVar3 = "UserPropertiesDeltaSyncProcessorPluginProvider";
      uVar5 = 0x2e;
      param_2 = pbVar2;
    }
    else {
      FUN_100c06c50();
      pcVar3 = "TraceTokenDeltaSyncProcessorPluginProvider";
      uVar5 = 0x2a;
      param_2 = pbVar4;
    }
  }
  else if (bVar1 == 2) {
    FUN_100c06e90(pbVar2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                  *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x20));
    pcVar3 = "SCRdcDeltaSyncProcessorPluginProvider";
    uVar5 = 0x25;
    param_2 = pbVar2;
  }
  else {
    FUN_100c0750c();
    pcVar3 = "LensExplorerDynamicLayoutDeltaSyncProcessorPluginProvider";
    uVar5 = 0x39;
  }
  func_0x000100082720(pcVar3,uVar5,2);
  *param_1 = param_2;
  return;
}



/* Entry: 100c063a4; end: 100c06447;  */

void FUN_100c063a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db0c28,&UNK_10d95ac70);
  puVar1 = &UNK_1103daf08;
  func_0x000107c613fc(&UNK_1103daf08,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_100c0650c,puVar1);
  return;
}



/* Entry: 100c06448; end: 100c0650b;  */

void FUN_100c06448(undefined8 *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_100c063a4(param_3,param_4,param_5,param_6);
      pcVar2 = "UserPropertiesDeltaSyncProcessorPluginProvider";
      uVar3 = 0x2e;
      param_2 = param_3;
    }
    else {
      FUN_100c06c50();
      pcVar2 = "TraceTokenDeltaSyncProcessorPluginProvider";
      uVar3 = 0x2a;
      param_2 = param_4;
    }
  }
  else if (bVar1 == 2) {
    FUN_100c06e90(param_3,param_7,param_8,param_9,param_5);
    pcVar2 = "SCRdcDeltaSyncProcessorPluginProvider";
    uVar3 = 0x25;
    param_2 = param_3;
  }
  else {
    FUN_100c0750c();
    pcVar2 = "LensExplorerDynamicLayoutDeltaSyncProcessorPluginProvider";
    uVar3 = 0x39;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_2;
  return;
}



/* Entry: 100c0650c; end: 100c067ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0650c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_a0);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_1103daf50;
  func_0x000107c613fc(&UNK_1103daf50,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10152d4d4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10152d574;
  puStack_88 = &UNK_1103daf68;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  puVar7 = puStack_a0;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_a0);
  puVar2 = puStack_a0;
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_1103dafa0;
  uVar12 = 0x20;
  func_0x000107c613fc(&UNK_1103dafa0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  pcStack_80 = FUN_10152d508;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10152d578;
  puStack_88 = &UNK_1103dafb8;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c615f0(puVar2);
  func_0x000107c615f0(puVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar8);
  func_0x000100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  uVar10 = *(undefined8 *)(puStack_a0 + _DAT_113091ad8);
  func_0x000107c61174(uVar10);
  func_0x000107c61170(puVar5);
  uVar11 = uVar10;
  func_0x000107c5d984(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  uVar10 = uVar11;
  func_0x000107c5faec(uVar11);
  func_0x000107c61170(uVar11);
  puVar5 = PTR_PTR_1126a7758;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar10,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c4833c();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(puVar7);
  func_0x000107c615e8(puVar2);
  *param_1 = puVar5;
  return;
}



/* Entry: 100c06800; end: 100c0684f;  */

void FUN_100c06800(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c06850; end: 100c06867;  */

void FUN_100c06850(long param_1,long param_2)

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



/* Entry: 100c06868; end: 100c06933; -[SCUserPropertiesDeltaSyncProcessor initWithRepository:supConfig:userId:] */

undefined1 *
FUN_100c06868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eca88;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c06934; end: 100c0696f;  */

void FUN_100c06934(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c06970; end: 100c06a97;  */

ulong FUN_100c06970(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c06a98);
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
  FUN_100c06aac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c06a94);
      (*pcVar1)();
    }
    FUN_100c06b2c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100c06a98; end: 100c06aab;  */

void FUN_100c06a98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93708 == (undefined *)0x0 || ((ulong)puRam0000000112f93708 & 1) != 0) {
    puVar1 = &UNK_10e99caba;
    func_0x000107c61518(&UNK_10e99caba,0x21,0,0);
    puRam0000000112f93708 = puVar1;
  }
  return;
}



/* Entry: 100c06aac; end: 100c06b2b;  */

undefined * FUN_100c06aac(undefined *param_1,undefined *param_2)

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
    FUN_100c06a98();
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



/* Entry: 100c06b2c; end: 100c06c4f;  */

long FUN_100c06b2c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c06c4c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c06c50);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112db0e98;
        func_0x0001000285a8(0x112db0e98,&UNK_10d95b2b8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112db0e98;
      func_0x0001000285a8(0x112db0e98,&UNK_10d95b2b8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100c06c48);
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



/* Entry: 100c06c50; end: 100c06c9b;  */

void FUN_100c06c50(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c28,&UNK_10d95ac70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_100c06c9c,param_1);
  return;
}



/* Entry: 100c06c9c; end: 100c06ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c06c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  FUN_100c06d54(0);
  func_0x000107c610f8();
  FUN_100c06d74(uVar1,param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c06ca4; end: 100c06d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c06ca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  FUN_100c06d54(0);
  func_0x000107c610f8();
  FUN_100c06d74(uVar1,param_3);
  *param_1 = uVar1;
  return;
}


