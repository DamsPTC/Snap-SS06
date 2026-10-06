/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f5e660; end: 100f5e70b; -[SCStickerCutoutStatusSenderServiceProvider setValue:forIvarName:] */

void FUN_100f5e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f5e458(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f5e70c; end: 100f5e793; -[SCStickerCutoutStatusSenderServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e70c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4ebb0,0);
  func_0x000107c61614(param_1 + _DAT_112d4ebb8,0);
  func_0x000107c61614(param_1 + _DAT_112d4ebc0,0);
  *(undefined8 *)(param_1 + _DAT_112d4ebc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5e794; end: 100f5e7c7;  */

void FUN_100f5e794(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f5e7c8; end: 100f5e81f; -[SCStickerCutoutStatusSenderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e7c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4ebb0);
  func_0x000107c61610(param_1 + _DAT_112d4ebb8);
  func_0x000107c61610(param_1 + _DAT_112d4ebc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4ebc8));
  return;
}



/* Entry: 100f5e820; end: 100f5e83f;  */

void FUN_100f5e820(void)

{
  func_0x000107c61168(&PTR_PTR_112d4ec10);
  return;
}



/* Entry: 100f5e840; end: 100f5e91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f5e840(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4ecb0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4ecb0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100f5e91c; end: 100f5ebab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5e91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4ec80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ec88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ec90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ec98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4eca0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4eca8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ece0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ece8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecf0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ecf8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed00) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed08) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed10) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed18) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed20) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed28) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed30) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed38) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed40) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed48) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed50) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed58) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed60) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed68) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed70) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed78) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ed80) = param_23;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f5ebac; end: 100f5f9db;  */

/* WARNING: Possible PIC construction at 0x000100f5ec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ec98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ed50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ed60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ee84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5eed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ef30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ef64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ef84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5efa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5f9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5efbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5efcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f5efc0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f9d4) */
/* WARNING: Removing unreachable block (ram,0x000100f5f974) */
/* WARNING: Removing unreachable block (ram,0x000100f5f95c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f94c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f934) */
/* WARNING: Removing unreachable block (ram,0x000100f5f90c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f980) */
/* WARNING: Removing unreachable block (ram,0x000100f5f8fc) */
/* WARNING: Removing unreachable block (ram,0x000100f5f8dc) */
/* WARNING: Removing unreachable block (ram,0x000100f5f8c4) */
/* WARNING: Removing unreachable block (ram,0x000100f5f8b4) */
/* WARNING: Removing unreachable block (ram,0x000100f5f7cc) */
/* WARNING: Removing unreachable block (ram,0x000100f5f800) */
/* WARNING: Removing unreachable block (ram,0x000100f5f8ac) */
/* WARNING: Removing unreachable block (ram,0x000100f5f7b8) */
/* WARNING: Removing unreachable block (ram,0x000100f5f770) */
/* WARNING: Removing unreachable block (ram,0x000100f5f73c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f91c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f740) */
/* WARNING: Removing unreachable block (ram,0x000100f5f718) */
/* WARNING: Removing unreachable block (ram,0x000100f5f708) */
/* WARNING: Removing unreachable block (ram,0x000100f5f6f0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f6e0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f6d0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f6b8) */
/* WARNING: Removing unreachable block (ram,0x000100f5f6a8) */
/* WARNING: Removing unreachable block (ram,0x000100f5f574) */
/* WARNING: Removing unreachable block (ram,0x000100f5f59c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f57c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f5a0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f470) */
/* WARNING: Removing unreachable block (ram,0x000100f5f44c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f3ac) */
/* WARNING: Removing unreachable block (ram,0x000100f5f478) */
/* WARNING: Removing unreachable block (ram,0x000100f5f3b0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f380) */
/* WARNING: Removing unreachable block (ram,0x000100f5f338) */
/* WARNING: Removing unreachable block (ram,0x000100f5f328) */
/* WARNING: Removing unreachable block (ram,0x000100f5f310) */
/* WARNING: Removing unreachable block (ram,0x000100f5f300) */
/* WARNING: Removing unreachable block (ram,0x000100f5f2f0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f2e0) */
/* WARNING: Removing unreachable block (ram,0x000100f5f180) */
/* WARNING: Removing unreachable block (ram,0x000100f5f038) */
/* WARNING: Removing unreachable block (ram,0x000100f5f9d8) */
/* WARNING: Removing unreachable block (ram,0x000100f5f108) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef88) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef8c) */
/* WARNING: Removing unreachable block (ram,0x000100f5f9c4) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef94) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef68) */
/* WARNING: Removing unreachable block (ram,0x000100f5f9b0) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef6c) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef34) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef38) */
/* WARNING: Removing unreachable block (ram,0x000100f5efa8) */
/* WARNING: Removing unreachable block (ram,0x000100f5ef4c) */
/* WARNING: Removing unreachable block (ram,0x000100f5eedc) */
/* WARNING: Removing unreachable block (ram,0x000100f5eee4) */
/* WARNING: Removing unreachable block (ram,0x000100f5f000) */
/* WARNING: Removing unreachable block (ram,0x000100f5f008) */
/* WARNING: Removing unreachable block (ram,0x000100f5f00c) */
/* WARNING: Removing unreachable block (ram,0x000100f5eef0) */
/* WARNING: Removing unreachable block (ram,0x000100f5ee88) */
/* WARNING: Removing unreachable block (ram,0x000100f5ed64) */
/* WARNING: Removing unreachable block (ram,0x000100f5efb8) */
/* WARNING: Removing unreachable block (ram,0x000100f5edc8) */
/* WARNING: Removing unreachable block (ram,0x000100f5ed54) */
/* WARNING: Removing unreachable block (ram,0x000100f5ec9c) */
/* WARNING: Removing unreachable block (ram,0x000100f5ec60) */
/* WARNING: Removing unreachable block (ram,0x000100f5efd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ebac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4ecd0);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d55f98);
    puVar1 = PTR_PTR_1126c4588;
    func_0x000107c610f8(PTR_PTR_1126c4588);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c453e4(puVar1);
    func_0x000107c3f5f8(uVar3);
    func_0x000107c61180();
    func_0x000107c5e490(puVar1,param_2,uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100f5f9dc; end: 100f5fb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f5f9dc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar5 = _DAT_112d55f78;
  lVar1 = param_1;
  func_0x000107c42934();
  lVar4 = *(long *)(*(long *)(param_2 + lVar5) + 0x10);
  plVar3 = (long *)(*(long *)(param_2 + lVar5) + 0x20);
  do {
    if (lVar4 == 0) {
      lVar5 = param_1;
      func_0x000107c42934();
      if (lVar5 == 4) {
        func_0x000107c42924();
        func_0x000107c61180();
        if (param_1 == 0) {
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          func_0x000107c60234(&uStack_70);
          func_0x000107c615e8(param_1);
        }
        uStack_48 = uStack_68;
        uStack_50 = uStack_70;
        lStack_38 = lStack_58;
        uStack_40 = uStack_60;
        if (lStack_58 == 0) {
          func_0x00010006e7f4(&uStack_50);
        }
        else {
          uVar2 = 0;
          FUN_100f65324(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
          plVar3 = &lStack_78;
          func_0x000107c6147c(plVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
          lVar5 = _DAT_112d55f80;
          if (((ulong)plVar3 & 1) != 0) {
            lVar1 = lStack_78;
            func_0x000107c453d0();
            lVar4 = *(long *)(*(long *)(param_2 + lVar5) + 0x10);
            plVar3 = (long *)(*(long *)(param_2 + lVar5) + 0x20);
            while (lVar4 != 0) {
              lVar5 = *plVar3;
              lVar4 = lVar4 + -1;
              plVar3 = plVar3 + 1;
              if (lVar5 == lVar1) {
                func_0x000107c61170(lStack_78);
                return 0;
              }
            }
            func_0x000107c61170(lStack_78);
          }
        }
      }
      return 1;
    }
    lVar5 = *plVar3;
    lVar4 = lVar4 + -1;
    plVar3 = plVar3 + 1;
  } while (lVar5 != lVar1);
  return 0;
}



/* Entry: 100f5fb34; end: 100f5fb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f5fb34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar5 = _DAT_112d55f78;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c42934();
  lVar6 = *(long *)(lVar4 + lVar5);
  lVar5 = *(long *)(lVar6 + 0x10);
  plVar3 = (long *)(lVar6 + 0x20);
  do {
    if (lVar5 == 0) {
      lVar5 = param_1;
      func_0x000107c42934();
      if (lVar5 == 4) {
        func_0x000107c42924();
        func_0x000107c61180();
        if (param_1 == 0) {
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          func_0x000107c60234(&uStack_70);
          func_0x000107c615e8(param_1);
        }
        uStack_48 = uStack_68;
        uStack_50 = uStack_70;
        lStack_38 = lStack_58;
        uStack_40 = uStack_60;
        if (lStack_58 == 0) {
          func_0x00010006e7f4(&uStack_50);
        }
        else {
          uVar2 = 0;
          FUN_100f65324(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
          plVar3 = &lStack_78;
          func_0x000107c6147c(plVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
          lVar5 = _DAT_112d55f80;
          if (((ulong)plVar3 & 1) != 0) {
            lVar1 = lStack_78;
            func_0x000107c453d0();
            lVar4 = *(long *)(lVar4 + lVar5);
            lVar5 = *(long *)(lVar4 + 0x10);
            plVar3 = (long *)(lVar4 + 0x20);
            while (lVar5 != 0) {
              lVar4 = *plVar3;
              lVar5 = lVar5 + -1;
              plVar3 = plVar3 + 1;
              if (lVar4 == lVar1) {
                func_0x000107c61170(lStack_78);
                return 0;
              }
            }
            func_0x000107c61170(lStack_78);
          }
        }
      }
      return 1;
    }
    lVar6 = *plVar3;
    lVar5 = lVar5 + -1;
    plVar3 = plVar3 + 1;
  } while (lVar6 != lVar1);
  return 0;
}



/* Entry: 100f5fb3c; end: 100f5fc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5fb3c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4ecf8);
  func_0x000107c42f68();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42f70();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      puVar3 = &UNK_11036e000;
      func_0x000107c613fc(&UNK_11036e000,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcStack_40 = FUN_100f6537c;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      uStack_50 = 0x100f653fc;
      puStack_48 = &UNK_11036e328;
      puStack_38 = puVar3;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      lVar2 = lVar1;
      func_0x000107c5c320(lVar1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      FUN_100f5e840();
      func_0x000107c3e924(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(ppuVar4);
    }
  }
  return;
}



/* Entry: 100f5fc78; end: 100f6000f;  */

/* WARNING: Possible PIC construction at 0x000100f5fce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5fd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5fd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ff9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ffac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5ffbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f5feb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f60f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f60fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6105c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6136c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f613d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f614ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f60ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f614b0) */
/* WARNING: Removing unreachable block (ram,0x000100f6147c) */
/* WARNING: Removing unreachable block (ram,0x000100f6146c) */
/* WARNING: Removing unreachable block (ram,0x000100f61448) */
/* WARNING: Removing unreachable block (ram,0x000100f61428) */
/* WARNING: Removing unreachable block (ram,0x000100f6142c) */
/* WARNING: Removing unreachable block (ram,0x000100f613d4) */
/* WARNING: Removing unreachable block (ram,0x000100f614a0) */
/* WARNING: Removing unreachable block (ram,0x000100f613f0) */
/* WARNING: Removing unreachable block (ram,0x000100f6144c) */
/* WARNING: Removing unreachable block (ram,0x000100f61450) */
/* WARNING: Removing unreachable block (ram,0x000100f6140c) */
/* WARNING: Removing unreachable block (ram,0x000100f61370) */
/* WARNING: Removing unreachable block (ram,0x000100f61378) */
/* WARNING: Removing unreachable block (ram,0x000100f61334) */
/* WARNING: Removing unreachable block (ram,0x000100f61104) */
/* WARNING: Removing unreachable block (ram,0x000100f61060) */
/* WARNING: Removing unreachable block (ram,0x000100f61068) */
/* WARNING: Removing unreachable block (ram,0x000100f6106c) */
/* WARNING: Removing unreachable block (ram,0x000100f60fe4) */
/* WARNING: Removing unreachable block (ram,0x000100f61070) */
/* WARNING: Removing unreachable block (ram,0x000100f60fec) */
/* WARNING: Removing unreachable block (ram,0x000100f60fa8) */
/* WARNING: Removing unreachable block (ram,0x000100f61170) */
/* WARNING: Removing unreachable block (ram,0x000100f61178) */
/* WARNING: Removing unreachable block (ram,0x000100f60fb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6118c) */
/* WARNING: Removing unreachable block (ram,0x000100f60fc0) */
/* WARNING: Removing unreachable block (ram,0x000100f614dc) */
/* WARNING: Removing unreachable block (ram,0x000100f60fc8) */
/* WARNING: Removing unreachable block (ram,0x000100f60f64) */
/* WARNING: Removing unreachable block (ram,0x000100f61150) */
/* WARNING: Removing unreachable block (ram,0x000100f60f68) */
/* WARNING: Removing unreachable block (ram,0x000100f5feb8) */
/* WARNING: Removing unreachable block (ram,0x000100f5febc) */
/* WARNING: Removing unreachable block (ram,0x000100f5fed8) */
/* WARNING: Removing unreachable block (ram,0x000100f5fef0) */
/* WARNING: Removing unreachable block (ram,0x000100f5ffc0) */
/* WARNING: Removing unreachable block (ram,0x000100f5ffb0) */
/* WARNING: Removing unreachable block (ram,0x000100f5ffa0) */
/* WARNING: Removing unreachable block (ram,0x000100f5fd8c) */
/* WARNING: Removing unreachable block (ram,0x000100f5ff98) */
/* WARNING: Removing unreachable block (ram,0x000100f5fd48) */
/* WARNING: Removing unreachable block (ram,0x000100f5fcec) */
/* WARNING: Removing unreachable block (ram,0x000100f5fcf0) */
/* WARNING: Removing unreachable block (ram,0x000100f60ff4) */
/* WARNING: Removing unreachable block (ram,0x000100f60ff8) */
/* WARNING: Removing unreachable block (ram,0x000100f61140) */
/* WARNING: Removing unreachable block (ram,0x000100f611a0) */
/* WARNING: Removing unreachable block (ram,0x000100f611dc) */
/* WARNING: Removing unreachable block (ram,0x000100f611e0) */
/* WARNING: Removing unreachable block (ram,0x000100f611ac) */
/* WARNING: Removing unreachable block (ram,0x000100f611f0) */
/* WARNING: Removing unreachable block (ram,0x000100f611b4) */
/* WARNING: Removing unreachable block (ram,0x000100f614e0) */
/* WARNING: Removing unreachable block (ram,0x000100f61504) */
/* WARNING: Removing unreachable block (ram,0x000100f611bc) */
/* WARNING: Removing unreachable block (ram,0x000100f61508) */
/* WARNING: Removing unreachable block (ram,0x000100f611c8) */
/* WARNING: Removing unreachable block (ram,0x000100f611f4) */
/* WARNING: Removing unreachable block (ram,0x000100f61214) */
/* WARNING: Removing unreachable block (ram,0x000100f61218) */
/* WARNING: Removing unreachable block (ram,0x000100f6122c) */
/* WARNING: Removing unreachable block (ram,0x000100f61204) */
/* WARNING: Removing unreachable block (ram,0x000100f61234) */
/* WARNING: Removing unreachable block (ram,0x000100f614d8) */
/* WARNING: Removing unreachable block (ram,0x000100f6123c) */
/* WARNING: Removing unreachable block (ram,0x000100f61244) */
/* WARNING: Removing unreachable block (ram,0x000100f612ac) */
/* WARNING: Removing unreachable block (ram,0x000100f6124c) */
/* WARNING: Removing unreachable block (ram,0x000100f61274) */
/* WARNING: Removing unreachable block (ram,0x000100f61290) */
/* WARNING: Removing unreachable block (ram,0x000100f612b8) */
/* WARNING: Removing unreachable block (ram,0x000100f612c8) */
/* WARNING: Removing unreachable block (ram,0x000100f61294) */
/* WARNING: Removing unreachable block (ram,0x000100f612a8) */
/* WARNING: Removing unreachable block (ram,0x000100f61304) */
/* WARNING: Removing unreachable block (ram,0x000100f6133c) */
/* WARNING: Removing unreachable block (ram,0x000100f6150c) */
/* WARNING: Removing unreachable block (ram,0x000100f61350) */
/* WARNING: Removing unreachable block (ram,0x000100f61510) */
/* WARNING: Removing unreachable block (ram,0x000100f612e8) */
/* WARNING: Removing unreachable block (ram,0x000100f61380) */
/* WARNING: Removing unreachable block (ram,0x000100f61388) */
/* WARNING: Removing unreachable block (ram,0x000100f6135c) */
/* WARNING: Removing unreachable block (ram,0x000100f6132c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000100f61210) */
/* WARNING: Removing unreachable block (ram,0x000100f614d4) */
/* WARNING: Removing unreachable block (ram,0x000100f611d8) */
/* WARNING: Removing unreachable block (ram,0x000100f61004) */
/* WARNING: Removing unreachable block (ram,0x000100f61028) */
/* WARNING: Removing unreachable block (ram,0x000100f61008) */
/* WARNING: Removing unreachable block (ram,0x000100f61034) */
/* WARNING: Removing unreachable block (ram,0x000100f61094) */
/* WARNING: Removing unreachable block (ram,0x000100f610ac) */
/* WARNING: Removing unreachable block (ram,0x000100f610b0) */
/* WARNING: Removing unreachable block (ram,0x000100f610b4) */
/* WARNING: Removing unreachable block (ram,0x000100f6112c) */
/* WARNING: Removing unreachable block (ram,0x000100f61134) */
/* WARNING: Removing unreachable block (ram,0x000100f610bc) */
/* WARNING: Removing unreachable block (ram,0x000100f610c4) */
/* WARNING: Removing unreachable block (ram,0x000100f610dc) */
/* WARNING: Removing unreachable block (ram,0x000100f61108) */
/* WARNING: Removing unreachable block (ram,0x000100f610f0) */
/* WARNING: Removing unreachable block (ram,0x000100f61048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5fc78(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 == 0) {
    param_1 = *(long *)(unaff_x20 + _DAT_112d4ed00);
    func_0x000107c43a4c(param_1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c4a91c();
    if ((int)lVar2 == 7) {
      param_1 = *(long *)(unaff_x20 + _DAT_112d4ed78);
      func_0x000107c44538();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f60010);
        (*pcVar1)();
      }
      func_0x000107c5c734();
      func_0x000107c61180();
    }
    else if ((int)lVar2 == 6) {
      param_1 = *(long *)(unaff_x20 + _DAT_112d4ed80);
      func_0x000107c5b4b0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6000c);
        (*pcVar1)();
      }
      func_0x000107c5c734();
      func_0x000107c61180();
    }
    else {
      FUN_100f60f0c(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f60010; end: 100f6036b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60010(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = *(undefined **)(param_2 + _DAT_112d4ec88);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x000107c5d404();
      func_0x000107c61180();
    }
    lVar7 = _DAT_112d4ec90;
    if (*(long *)(param_2 + _DAT_112d4ec90) != 0) {
      func_0x000107c4fd8c();
    }
    lVar6 = _DAT_112d4ed00;
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d4ed00);
    func_0x000107c3e550(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ba808;
    func_0x000107c610f8();
    func_0x000107c459a4();
    func_0x000107c61170(uVar3);
    lVar5 = *(long *)(param_2 + lVar6);
    func_0x000107c43a4c();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x000107c4a9d0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          lVar5 = lVar6;
          func_0x000107c3e978();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar5 != 0) {
            func_0x000107c5d488(puVar4);
            func_0x000107c61170(lVar5);
          }
        }
      }
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d4eca8);
    *(undefined **)(param_2 + _DAT_112d4eca8) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar3);
    lVar7 = *(long *)(param_2 + lVar7);
    if (lVar7 != 0) {
      func_0x000107c4a7ac();
      func_0x000107c61180();
      func_0x000107c57730();
      func_0x000107c61170(lVar7);
    }
    puVar12 = *(undefined **)(param_2 + _DAT_112d4ecb8);
    if (puVar12 == (undefined *)0x0) {
      func_0x000107c61170(param_2);
    }
    else {
      puVar8 = &UNK_11036e000;
      func_0x000107c613fc(&UNK_11036e000,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,param_2);
      puVar9 = &UNK_11036e1a8;
      func_0x000107c613fc(&UNK_11036e1a8,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x100f65218;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_100f65220;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      uStack_98 = 0x100f6540c;
      puStack_90 = &UNK_11036e1c0;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_80;
      func_0x000107c61174(puVar12);
      func_0x000107c61174();
      func_0x000107c61574(puVar9);
      pcStack_88 = FUN_100f61d10;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      uStack_98 = 0x100e27b38;
      puStack_90 = &UNK_11036e1e8;
      ppuVar11 = &puStack_a8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_80);
      func_0x000107c4c754(puVar12);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61574(puVar8);
      puVar2 = puVar12;
      puVar4 = puVar12;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100f6036c; end: 100f6049f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6036c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112d4ecd0) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112d4ecd0) + _DAT_112d55fa0);
    lVar2 = lVar6;
    func_0x000107c615f0();
    func_0x000107c453b8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f604a0);
      (*pcVar1)();
    }
    puVar3 = &UNK_11036e000;
    func_0x000107c613fc(&UNK_11036e000,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uStack_50 = 0x100f65248;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b5fdac;
    puStack_58 = &UNK_11036e260;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar5 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    FUN_100f5e840();
    func_0x000107c3e924(lVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f604a0; end: 100f6066b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f604a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112d4ecd0);
    lVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar3 = lVar1 + _DAT_1137ff168;
      func_0x000107c61428(lVar3,auStack_60,0,0);
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c61170(lVar1);
        func_0x000107c614f0(lVar2);
        (**(code **)(lVar3 + 8))();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 100f6066c; end: 100f60683;  */

void FUN_100f6066c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f60684,0,0);
  return;
}



/* Entry: 100f60684; end: 100f60787;  */

void FUN_100f60684(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x40,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0x60);
    func_0x000107c5d388();
    FUN_100f60788();
    if ((uVar1 & 1) == 0) {
      func_0x000100f5e8ac();
      puVar2 = &UNK_11036e000;
      func_0x000107c613fc(&UNK_11036e000,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar4);
      *(code **)(unaff_x22 + 0x30) = FUN_100f6531c;
      *(undefined **)(unaff_x22 + 0x38) = puVar2;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_11036e2b0;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar3);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c4e524(uVar1);
      func_0x000107c60bd0(lVar3);
      func_0x000107c615e8(uVar1);
    }
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f60784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f60788; end: 100f60c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60788(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112d4ec88);
  if (uVar5 != 0) {
    func_0x000107c5c424(uVar5,param_2,3);
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar17 = uVar5;
      func_0x000107c5bd64();
      func_0x000107c61180();
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c70);
        (*pcVar3)();
      }
      uVar6 = 0;
      FUN_100f65324(0,0x112d4edd0,&PTR_PTR_1126d4eb8);
      uVar7 = uVar17;
      func_0x000107c5fc54(uVar17,uVar6);
      func_0x000107c61170(uVar17);
      if (uVar7 >> 0x3e == 0) {
        uVar17 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar17 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar17 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar17 != 0) {
        uVar21 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c6c);
              (*pcVar3)();
            }
            uVar8 = *(ulong *)(uVar7 + 0x20 + uVar21 * 8);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar21;
            FUN_100f634d4(uVar21,uVar7,&PTR_PTR_1126d4eb8,0x112d4edd0);
          }
          bVar4 = SCARRY8(uVar21,1);
          uVar21 = uVar21 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c1c);
            (*pcVar3)();
          }
          puVar9 = PTR_PTR_1126d4f78;
          func_0x000107c61168(PTR_PTR_1126d4f78);
          uVar18 = uVar8;
          func_0x000107c6148c(uVar8,puVar9);
          if (uVar18 != 0) {
            func_0x000107c4a7ec();
            func_0x000107c61180();
            uVar6 = 0;
            FUN_100f65324(0,0x112d4edd8,&PTR_PTR_1126badc0);
            uVar10 = uVar18;
            func_0x000107c5fc54(uVar18,uVar6);
            func_0x000107c61170(uVar18);
            if (uVar10 >> 0x3e == 0) {
              uVar18 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar18 = uVar10 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar10) {
                uVar18 = uVar10;
              }
              func_0x000107c60480();
            }
            if (uVar18 != 0) {
              uVar20 = 0;
              do {
                if ((uVar10 & 0xc000000000000001) == 0) {
                  if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c18);
                    (*pcVar3)();
                  }
                  uVar11 = *(ulong *)(uVar10 + 0x20 + uVar20 * 8);
                  func_0x000107c61174();
                }
                else {
                  uVar11 = uVar20;
                  FUN_100f634d4(uVar20,uVar10,&PTR_PTR_1126badc0,0x112d4edd8);
                }
                if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c14);
                  (*pcVar3)();
                }
                uVar20 = uVar20 + 1;
                uVar22 = uVar11;
                func_0x000107c4a7d4();
                func_0x000107c61180();
                uVar6 = 0;
                FUN_100f65324(0,0x112d4ede0,&PTR_PTR_1126baa60);
                uVar12 = uVar22;
                func_0x000107c5fc54(uVar22,uVar6);
                func_0x000107c61170(uVar22);
                if (uVar12 >> 0x3e == 0) {
                  uVar22 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  uVar22 = uVar12 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar12) {
                    uVar22 = uVar12;
                  }
                  func_0x000107c60480();
                }
                if (uVar22 != 0) {
                  uVar19 = 0;
                  do {
                    if ((uVar12 & 0xc000000000000001) == 0) {
                      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c10);
                        (*pcVar3)();
                      }
                      uVar13 = *(ulong *)(uVar12 + uVar19 * 8 + 0x20);
                      func_0x000107c61174();
                    }
                    else {
                      uVar13 = uVar19;
                      FUN_100f634d4(uVar19,uVar12,&PTR_PTR_1126baa60,0x112d4ede0);
                    }
                    uVar1 = uVar19 + 1;
                    if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f60c0c);
                      (*pcVar3)();
                    }
                    uVar14 = uVar13;
                    func_0x000107c42934();
                    if (uVar14 == 4) {
                      uVar14 = uVar13;
                      func_0x000107c42924();
                      func_0x000107c61180();
                      if (uVar14 == 0) {
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        lStack_98 = 0;
                        uStack_a0 = 0;
                      }
                      else {
                        func_0x000107c60234(&uStack_b0);
                        func_0x000107c615e8(uVar14);
                      }
                      uStack_88 = uStack_a8;
                      uStack_90 = uStack_b0;
                      lStack_78 = lStack_98;
                      uStack_80 = uStack_a0;
                      if (lStack_98 == 0) {
                        func_0x000107c61170(uVar13);
                        func_0x00010006e7f4(&uStack_90);
                      }
                      else {
                        uVar6 = 0;
                        FUN_100f65324(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
                        plVar15 = &lStack_b8;
                        func_0x000107c6147c(plVar15,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
                        lVar2 = lStack_b8;
                        if (((ulong)plVar15 & 1) == 0) goto LAB_100f60a3c;
                        lVar16 = lStack_b8;
                        func_0x000107c453d0();
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(uVar13);
                        if (lVar16 == param_1) {
                          func_0x000107c6142c(uVar7);
                          func_0x000107c6142c(uVar10);
                          func_0x000107c6142c(uVar12);
                          func_0x000107c61170(uVar5);
                          func_0x000107c61170(uVar8);
                          func_0x000107c61170(uVar11);
                          return;
                        }
                      }
                    }
                    else {
LAB_100f60a3c:
                      func_0x000107c61170(uVar13);
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar1 != uVar22);
                }
                func_0x000107c6142c(uVar12);
                func_0x000107c61170(uVar11);
              } while (uVar20 != uVar18);
            }
            func_0x000107c6142c(uVar10);
          }
          func_0x000107c61170(uVar8);
        } while (uVar21 != uVar17);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar7);
    }
  }
  return;
}



/* Entry: 100f60c70; end: 100f60cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d4ec88);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x000107c5c424();
      func_0x000107c61180();
    }
    func_0x000107c4fd7c(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f60cfc; end: 100f60e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60cfc(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  if (*(long *)(unaff_x20 + _DAT_112d4ecd0) != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d4ecd0) + _DAT_1137ff168;
    func_0x000107c61428(lVar3,auStack_58,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x20))();
      func_0x000107c615e8(lVar2);
    }
    puVar1 = &UNK_11036e000;
    func_0x000107c613fc(&UNK_11036e000,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    func_0x000107c6157c(puVar1);
    FUN_10103d48c(param_1 & 1,FUN_100f651c0,puVar1);
    func_0x000107c61578(puVar1,2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4ed28);
  func_0x000107c410ec();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c57bb4(lVar3);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 100f60e30; end: 100f60f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60e30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112d4ecd0);
    lVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar3 = lVar1 + _DAT_1137ff168;
      func_0x000107c61428(lVar3,auStack_60,0,0);
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c61170(lVar1);
        func_0x000107c614f0(lVar2);
        (**(code **)(lVar3 + 0x28))();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 100f60f0c; end: 100f6151b;  */

/* WARNING: Possible PIC construction at 0x000100f60f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f60fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6105c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6136c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f613d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f614ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f60ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f614b0) */
/* WARNING: Removing unreachable block (ram,0x000100f6147c) */
/* WARNING: Removing unreachable block (ram,0x000100f6146c) */
/* WARNING: Removing unreachable block (ram,0x000100f61448) */
/* WARNING: Removing unreachable block (ram,0x000100f61428) */
/* WARNING: Removing unreachable block (ram,0x000100f6142c) */
/* WARNING: Removing unreachable block (ram,0x000100f613d4) */
/* WARNING: Removing unreachable block (ram,0x000100f614a0) */
/* WARNING: Removing unreachable block (ram,0x000100f613f0) */
/* WARNING: Removing unreachable block (ram,0x000100f6144c) */
/* WARNING: Removing unreachable block (ram,0x000100f61450) */
/* WARNING: Removing unreachable block (ram,0x000100f6140c) */
/* WARNING: Removing unreachable block (ram,0x000100f61370) */
/* WARNING: Removing unreachable block (ram,0x000100f61378) */
/* WARNING: Removing unreachable block (ram,0x000100f61334) */
/* WARNING: Removing unreachable block (ram,0x000100f61104) */
/* WARNING: Removing unreachable block (ram,0x000100f61060) */
/* WARNING: Removing unreachable block (ram,0x000100f61068) */
/* WARNING: Removing unreachable block (ram,0x000100f6106c) */
/* WARNING: Removing unreachable block (ram,0x000100f60fe4) */
/* WARNING: Removing unreachable block (ram,0x000100f61070) */
/* WARNING: Removing unreachable block (ram,0x000100f60fec) */
/* WARNING: Removing unreachable block (ram,0x000100f60fa8) */
/* WARNING: Removing unreachable block (ram,0x000100f61170) */
/* WARNING: Removing unreachable block (ram,0x000100f61178) */
/* WARNING: Removing unreachable block (ram,0x000100f60fb0) */
/* WARNING: Removing unreachable block (ram,0x000100f6118c) */
/* WARNING: Removing unreachable block (ram,0x000100f60fc0) */
/* WARNING: Removing unreachable block (ram,0x000100f614dc) */
/* WARNING: Removing unreachable block (ram,0x000100f60fc8) */
/* WARNING: Removing unreachable block (ram,0x000100f60f64) */
/* WARNING: Removing unreachable block (ram,0x000100f61150) */
/* WARNING: Removing unreachable block (ram,0x000100f60f68) */
/* WARNING: Removing unreachable block (ram,0x000100f60ff4) */
/* WARNING: Removing unreachable block (ram,0x000100f60ff8) */
/* WARNING: Removing unreachable block (ram,0x000100f61140) */
/* WARNING: Removing unreachable block (ram,0x000100f611a0) */
/* WARNING: Removing unreachable block (ram,0x000100f611dc) */
/* WARNING: Removing unreachable block (ram,0x000100f611e0) */
/* WARNING: Removing unreachable block (ram,0x000100f611ac) */
/* WARNING: Removing unreachable block (ram,0x000100f611f0) */
/* WARNING: Removing unreachable block (ram,0x000100f611b4) */
/* WARNING: Removing unreachable block (ram,0x000100f614e0) */
/* WARNING: Removing unreachable block (ram,0x000100f61504) */
/* WARNING: Removing unreachable block (ram,0x000100f611bc) */
/* WARNING: Removing unreachable block (ram,0x000100f61508) */
/* WARNING: Removing unreachable block (ram,0x000100f611c8) */
/* WARNING: Removing unreachable block (ram,0x000100f611f4) */
/* WARNING: Removing unreachable block (ram,0x000100f61214) */
/* WARNING: Removing unreachable block (ram,0x000100f61218) */
/* WARNING: Removing unreachable block (ram,0x000100f6122c) */
/* WARNING: Removing unreachable block (ram,0x000100f61204) */
/* WARNING: Removing unreachable block (ram,0x000100f61234) */
/* WARNING: Removing unreachable block (ram,0x000100f614d8) */
/* WARNING: Removing unreachable block (ram,0x000100f6123c) */
/* WARNING: Removing unreachable block (ram,0x000100f61244) */
/* WARNING: Removing unreachable block (ram,0x000100f612ac) */
/* WARNING: Removing unreachable block (ram,0x000100f6124c) */
/* WARNING: Removing unreachable block (ram,0x000100f61274) */
/* WARNING: Removing unreachable block (ram,0x000100f61290) */
/* WARNING: Removing unreachable block (ram,0x000100f612b8) */
/* WARNING: Removing unreachable block (ram,0x000100f612c8) */
/* WARNING: Removing unreachable block (ram,0x000100f61294) */
/* WARNING: Removing unreachable block (ram,0x000100f612a8) */
/* WARNING: Removing unreachable block (ram,0x000100f61304) */
/* WARNING: Removing unreachable block (ram,0x000100f6133c) */
/* WARNING: Removing unreachable block (ram,0x000100f6150c) */
/* WARNING: Removing unreachable block (ram,0x000100f61350) */
/* WARNING: Removing unreachable block (ram,0x000100f61510) */
/* WARNING: Removing unreachable block (ram,0x000100f612e8) */
/* WARNING: Removing unreachable block (ram,0x000100f61380) */
/* WARNING: Removing unreachable block (ram,0x000100f61388) */
/* WARNING: Removing unreachable block (ram,0x000100f6135c) */
/* WARNING: Removing unreachable block (ram,0x000100f6132c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000100f61210) */
/* WARNING: Removing unreachable block (ram,0x000100f614d4) */
/* WARNING: Removing unreachable block (ram,0x000100f611d8) */
/* WARNING: Removing unreachable block (ram,0x000100f61004) */
/* WARNING: Removing unreachable block (ram,0x000100f61028) */
/* WARNING: Removing unreachable block (ram,0x000100f61008) */
/* WARNING: Removing unreachable block (ram,0x000100f61034) */
/* WARNING: Removing unreachable block (ram,0x000100f61094) */
/* WARNING: Removing unreachable block (ram,0x000100f610ac) */
/* WARNING: Removing unreachable block (ram,0x000100f610b0) */
/* WARNING: Removing unreachable block (ram,0x000100f610b4) */
/* WARNING: Removing unreachable block (ram,0x000100f6112c) */
/* WARNING: Removing unreachable block (ram,0x000100f61134) */
/* WARNING: Removing unreachable block (ram,0x000100f610bc) */
/* WARNING: Removing unreachable block (ram,0x000100f610c4) */
/* WARNING: Removing unreachable block (ram,0x000100f610dc) */
/* WARNING: Removing unreachable block (ram,0x000100f61108) */
/* WARNING: Removing unreachable block (ram,0x000100f610f0) */
/* WARNING: Removing unreachable block (ram,0x000100f61048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f60f0c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4ed00);
  func_0x000107c43a4c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f6151c; end: 100f615af;  */

void FUN_100f6151c(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100f615b0; end: 100f61633;  */

void FUN_100f615b0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    func_0x000107c61434(param_1);
    FUN_100f60f0c(puVar1);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 100f61634; end: 100f617c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f61634(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_112d4ecb8);
    *(undefined8 *)(param_2 + _DAT_112d4ecb8) = param_1;
    func_0x000107c61170(uVar6);
    puVar2 = &UNK_11036e000;
    func_0x000107c613fc(&UNK_11036e000,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_11036e360;
    func_0x000107c613fc(&UNK_11036e360,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x100f65404;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = (code *)0x100f653f8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    uStack_88 = 0x100f6540c;
    puStack_80 = &UNK_11036e378;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    pcStack_78 = FUN_100f61d10;
    puStack_70 = (undefined *)0x0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    uStack_88 = 0x100e27b38;
    puStack_80 = &UNK_11036e3a0;
    ppuVar5 = &puStack_98;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_70);
    func_0x000107c4c754(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f617c8; end: 100f61813;  */

void FUN_100f617c8(long param_1,undefined8 param_2)

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



/* Entry: 100f61814; end: 100f61d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f61814(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (param_1 != 0) {
    uVar4 = param_1;
    func_0x000107c42f24();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61d08);
      (*pcVar2)();
    }
    uVar15 = uVar4;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar4);
    if (uVar15 == 10) {
      func_0x000107c3f9cc();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61d0c);
        (*pcVar2)();
      }
      FUN_100f65324(0,0x112d4edc8,&PTR_PTR_1126be988);
      uVar4 = param_1;
      func_0x000107c5fc54();
      func_0x000107c61170(param_1);
      if (uVar4 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar15 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61c74);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + uVar16 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar16;
            FUN_100f634d4(uVar16,uVar4,&PTR_PTR_1126be988,0x112d4edc8);
          }
          uVar8 = uVar16 + 1;
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61c70);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c42f24();
          func_0x000107c61180();
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61cfc);
            (*pcVar2)();
          }
          uVar7 = uVar6;
          func_0x000107c5d0f0();
          func_0x000107c61170(uVar6);
          if (uVar7 == 0xb) {
            func_0x000107c6142c(uVar4);
            uVar15 = uVar5;
            func_0x000107c3f9cc();
            func_0x000107c61180();
            if (uVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61d10);
              (*pcVar2)();
            }
            uVar4 = uVar15;
            func_0x000107c5fc54();
            func_0x000107c61170(uVar15);
            if (uVar4 >> 0x3e == 0) {
              uVar15 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
              lVar1 = _DAT_112d4ecd0;
            }
            else {
              uVar15 = uVar4 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar4) {
                uVar15 = uVar4;
              }
              func_0x000107c60480();
              lVar1 = _DAT_112d4ecd0;
            }
            _DAT_112d4ecd0 = lVar1;
            if (uVar15 == 0) goto LAB_100f61cbc;
            uVar16 = 0;
            goto LAB_100f61a28;
          }
          func_0x000107c61170(uVar5);
          uVar16 = uVar16 + 1;
        } while (uVar8 != uVar15);
      }
      func_0x000107c61170(param_2);
      goto LAB_100f61cd0;
    }
  }
  func_0x000107c61170(param_2);
  return;
LAB_100f61a28:
  do {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61c7c);
        (*pcVar2)();
      }
      uVar8 = *(ulong *)(uVar4 + 0x20 + uVar16 * 8);
      func_0x000107c61174();
    }
    else {
      uVar8 = uVar16;
      FUN_100f634d4(uVar16,uVar4,&PTR_PTR_1126be988,0x112d4edc8);
    }
    bVar3 = SCARRY8(uVar16,1);
    uVar16 = uVar16 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61c78);
      (*pcVar2)();
    }
    uVar6 = uVar8;
    func_0x000107c42f24();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61d00);
      (*pcVar2)();
    }
    uVar7 = uVar6;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar6);
    if ((long)uVar7 < 5) {
      if (1 < uVar7 - 2) {
        if ((uVar7 != 4) || (*(long *)(param_2 + lVar1) == 0)) goto LAB_100f61a18;
        lVar13 = *(long *)(*(long *)(param_2 + lVar1) + _DAT_112d55f78);
        lVar12 = *(long *)(lVar13 + 0x10);
        plVar14 = (long *)(lVar13 + 0x20);
        do {
          if (lVar12 == 0) goto LAB_100f61a18;
          lVar13 = *plVar14;
          lVar12 = lVar12 + -1;
          plVar14 = plVar14 + 1;
        } while (lVar13 != 3);
      }
    }
    else {
      if (uVar7 != 5) {
        if (uVar7 == 7) {
          if (*(long *)(param_2 + lVar1) != 0) {
            lVar13 = *(long *)(*(long *)(param_2 + lVar1) + _DAT_112d55f78);
            lVar12 = *(long *)(lVar13 + 0x10);
            plVar14 = (long *)(lVar13 + 0x20);
            do {
              if (lVar12 == 0) goto LAB_100f61a18;
              lVar13 = *plVar14;
              lVar12 = lVar12 + -1;
              plVar14 = plVar14 + 1;
            } while (lVar13 != 5);
            goto LAB_100f61b60;
          }
        }
        else if (uVar7 == 0xd) goto LAB_100f61b60;
LAB_100f61a18:
        func_0x000107c61170(uVar8);
        if (uVar16 == uVar15) break;
        goto LAB_100f61a28;
      }
      if (*(long *)(param_2 + lVar1) == 0) goto LAB_100f61a18;
      lVar13 = *(long *)(*(long *)(param_2 + lVar1) + _DAT_112d55f78);
      lVar12 = *(long *)(lVar13 + 0x10);
      plVar14 = (long *)(lVar13 + 0x20);
      do {
        if (lVar12 == 0) goto LAB_100f61a18;
        lVar13 = *plVar14;
        lVar12 = lVar12 + -1;
        plVar14 = plVar14 + 1;
      } while (lVar13 != 2);
    }
LAB_100f61b60:
    uVar6 = uVar8;
    func_0x000107c42f24();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61d04);
      (*pcVar2)();
    }
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar6);
    func_0x000100f5e8ac();
    puVar9 = &UNK_11036e000;
    func_0x000107c613fc(&UNK_11036e000,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_2);
    puVar10 = &UNK_11036e220;
    func_0x000107c613fc(&UNK_11036e220,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(ulong *)(puVar10 + 0x18) = uVar8;
    pcStack_98 = FUN_100f65240;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_11036e238;
    ppuVar11 = &puStack_b8;
    puStack_90 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_90;
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar6);
  } while (uVar16 != uVar15);
LAB_100f61cbc:
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_2);
LAB_100f61cd0:
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 100f61d10; end: 100f61d13;  */

void FUN_100f61d10(void)

{
  return;
}



/* Entry: 100f61d14; end: 100f61e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f61d14(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d4ec88);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000107c5d64c();
      func_0x000107c61180();
    }
    lVar4 = _DAT_112d4ec90;
    if (*(long *)(param_1 + _DAT_112d4ec90) != 0) {
      func_0x000107c4fd88();
    }
    func_0x000107c42f24();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f61e24);
      (*pcVar1)();
    }
    lVar3 = param_2;
    func_0x000107c5d0f0();
    func_0x000107c61170(param_2);
    if ((lVar3 == 3) && (lVar4 = *(long *)(param_1 + lVar4), lVar4 != 0)) {
      func_0x000107c4e724();
      func_0x000107c61180();
      func_0x000107c4de4c();
      func_0x000107c61170(param_1);
      param_1 = lVar4;
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f61e24; end: 100f61e83; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint init] */

void FUN_100f61e24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewStickerPickerImpl.PreviewStickerPickerEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f61e50);
  (*pcVar1)();
}



/* Entry: 100f61e84; end: 100f620cb; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f61ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f61fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f62064) */
/* WARNING: Removing unreachable block (ram,0x000100f62044) */
/* WARNING: Removing unreachable block (ram,0x000100f62024) */
/* WARNING: Removing unreachable block (ram,0x000100f62004) */
/* WARNING: Removing unreachable block (ram,0x000100f61fe4) */
/* WARNING: Removing unreachable block (ram,0x000100f61fc4) */
/* WARNING: Removing unreachable block (ram,0x000100f61fa4) */
/* WARNING: Removing unreachable block (ram,0x000100f61f84) */
/* WARNING: Removing unreachable block (ram,0x000100f61f64) */
/* WARNING: Removing unreachable block (ram,0x000100f61f44) */
/* WARNING: Removing unreachable block (ram,0x000100f61f24) */
/* WARNING: Removing unreachable block (ram,0x000100f61f04) */
/* WARNING: Removing unreachable block (ram,0x000100f61ee4) */
/* WARNING: Removing unreachable block (ram,0x000100f61ec4) */
/* WARNING: Removing unreachable block (ram,0x000100f61ea4) */
/* WARNING: Removing unreachable block (ram,0x000100f62084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f61e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4ecd0));
  return;
}



/* Entry: 100f620cc; end: 100f620d3;  */

undefined8 FUN_100f620cc(void)

{
  return 0;
}



/* Entry: 100f620d4; end: 100f6214f; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint openedStickerPickerMenuAtCategory:] */

void FUN_100f620d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100f62150; end: 100f62153; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint launchCreateBitmojiFlowWithPageType] */

void FUN_100f62150(void)

{
  return;
}



/* Entry: 100f62154; end: 100f62207; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint closedStickerPickerMenuAtCategory:sticker:enterSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f62154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  pcVar4 = *(code **)(lVar3 + 8);
  func_0x000107c61174();
  (*pcVar4)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d4ec98);
  *(undefined8 *)(param_1 + _DAT_112d4ec98) = 0;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f62208; end: 100f624eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f62208(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,uint param_6,
                  undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c5caec();
      func_0x000107c61180();
      if (param_3 != 0) {
        uVar3 = param_3;
        func_0x000107c42934();
        if ((uVar3 < 0xe) && ((1L << (uVar3 & 0x3f) & 0x256fU) != 0)) {
          lVar4 = *(long *)(lVar2 + _DAT_112d4ed30);
          func_0x000107c5d91c();
          func_0x000107c61180();
          lVar5 = lVar4;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar5 != 0) {
            func_0x000107c5d418(lVar5);
            func_0x000107c61170(param_3);
            func_0x000107c615e8(lVar5);
            goto joined_r0x000100f62304;
          }
        }
        func_0x000107c61170(param_3);
      }
joined_r0x000100f62304:
      uVar9 = 0;
      if (param_5 != 0) {
        uVar3 = param_4 & 0xffffffffffff;
        if ((param_5 & 0x2000000000000000) != 0) {
          uVar3 = param_5 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          uVar9 = 0;
        }
        else {
          lVar4 = *(long *)(lVar2 + _DAT_112d4ed48);
          func_0x000107c4ec80();
          func_0x000107c61180();
          lVar5 = lVar4;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar5 != 0) {
            func_0x000107c5fadc(param_4,param_5);
            func_0x000107c3d814(lVar5);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(param_4);
          }
          uVar9 = 1;
        }
      }
      if (*(long *)(lVar2 + _DAT_112d4ecd0) != 0) {
        lVar5 = *(long *)(lVar2 + _DAT_112d4ecd0) + _DAT_1137ff168;
        func_0x000107c61428(lVar5,auStack_90,0,0);
        lVar4 = lVar5;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar10 = *(long *)(lVar5 + 8);
          lVar5 = param_1;
          func_0x000107c5cae8();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f624ec);
            (*pcVar1)();
          }
          lVar6 = lVar4;
          func_0x000107c614f0(lVar4);
          uVar7 = param_7;
          func_0x000107c42920(param_7);
          uVar8 = param_7;
          func_0x000107c4f0a0(param_7);
          func_0x000107c4ed6c(param_7);
          (**(code **)(lVar10 + 0x18))(lVar5,param_6 & 1,uVar9,uVar7,uVar8,param_7,lVar6,lVar10);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar5);
        }
      }
      FUN_100f60cfc(0);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100f60cfc(0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f624ec; end: 100f62533;  */

void FUN_100f624ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100f62534; end: 100f62603; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint stickerPickerMenu:didSelectSticker:center:thumbnail:stickerIndex:categoryIndex:isFromRecents:searchTag:searchSource:] */

void FUN_100f62534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  if (param_9 == 0) {
    param_9 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_100f63910(param_3,param_4,param_8,param_9,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100f62604; end: 100f6260b; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint avatarPickerRequestedWithBitmojiUsers:targetView:friendmojiPickerScopeDelegate:] */

undefined8 FUN_100f62604(void)

{
  return 1;
}



/* Entry: 100f6260c; end: 100f62613; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint friendmojiHintRequestedWithTargetView:friendmojiHintScopeDelegate:] */

undefined8 FUN_100f6260c(void)

{
  return 0;
}



/* Entry: 100f62614; end: 100f62617; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint friendmojiAvatarPickerClosedWithFriendmojiType:selectedStickerId:] */

void FUN_100f62614(void)

{
  return;
}



/* Entry: 100f62618; end: 100f6266b; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint recentCustomStickerImage:] */

void FUN_100f62618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_100f63dc8();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f6266c; end: 100f6272f; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint closeStickerPickerMenuOpenSnapCutFromSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6266c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  if (*(long *)(param_1 + _DAT_112d4ecd0) != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d4ecd0) + _DAT_1137ff168;
    func_0x000107c61428(lVar2,auStack_58,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      pcVar4 = *(code **)(lVar3 + 0x30);
      func_0x000107c61174(param_1);
      (*pcVar4)(lVar2,lVar3);
      func_0x000107c615e8(lVar1);
      goto LAB_100f62704;
    }
  }
  func_0x000107c61174(param_1);
LAB_100f62704:
  FUN_100f60cfc(1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f62730; end: 100f6275b; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint closeStickerPickerMenu] */

void FUN_100f62730(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f60cfc(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f6275c; end: 100f62883; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint stickerPickerMenu:presentStickerMenuForItem:presentationModelProvider:itemViewService:indexPath:superCategoryType:] */

void FUN_100f6275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_7);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_100f63e74(param_4,param_5,param_6,puVar2,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 100f62884; end: 100f6298f; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint showPlacePickerTrayWithOnVenueTapped:sticker:presentationSource:suggestedVenues:venueIDToDistanceStringMap:] */

void FUN_100f62884(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_11036e090;
    func_0x000107c613fc(&UNK_11036e090,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    uVar1 = 0x100f65180;
  }
  if (param_6 != 0) {
    uVar2 = 0;
    FUN_100f65324(0,0x112d4edb8,&PTR_PTR_1126baaf0);
    func_0x000107c5fc54(param_6,uVar2);
  }
  if (param_7 != 0) {
    func_0x000107c5f9e8(param_7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000100f64120(param_4);
  func_0x000107c6142c(param_6);
  func_0x000107c6142c(param_7);
  FUN_100f65170(uVar1,puVar3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f62990; end: 100f629ab; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint indexOfDefaultCategoryForStickerPicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f62990(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d4ec88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d4ec88),PTR_s_findStickerSuperCategory__1125c96e0,3);
    return;
  }
  return;
}



/* Entry: 100f629ac; end: 100f62a5b; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint userInteractedWithStickerPickerMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f629ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  if (*(long *)(param_1 + _DAT_112d4ecd0) != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d4ecd0) + _DAT_1137ff168;
    func_0x000107c61428(lVar2,auStack_58,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      pcVar4 = *(code **)(lVar3 + 0x10);
      func_0x000107c61174(param_1);
      (*pcVar4)(lVar2,lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 100f62a5c; end: 100f62a67; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint didFavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_100f62a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  (*(code *)0x100f645d8)(param_3,puVar3,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 100f62a68; end: 100f62a73; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint didUnfavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_100f62a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  (*(code *)0x100f647e8)(param_3,puVar3,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 100f62a74; end: 100f62b5b;  */

void FUN_100f62a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  (*param_7)(param_3,puVar3,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 100f62b5c; end: 100f62b5f; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint didDeleteSticker:] */

void FUN_100f62b5c(void)

{
  return;
}



/* Entry: 100f62b60; end: 100f62b63; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint didRemoveFromRecents:error:] */

void FUN_100f62b60(void)

{
  return;
}



/* Entry: 100f62b64; end: 100f62fbf;  */

/* WARNING: Possible PIC construction at 0x000100f62ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f62ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f62c74) */
/* WARNING: Removing unreachable block (ram,0x000100f62f48) */
/* WARNING: Removing unreachable block (ram,0x000100f62f50) */
/* WARNING: Removing unreachable block (ram,0x000100f62f00) */
/* WARNING: Removing unreachable block (ram,0x000100f62e60) */
/* WARNING: Removing unreachable block (ram,0x000100f62e7c) */
/* WARNING: Removing unreachable block (ram,0x000100f62ec4) */
/* WARNING: Removing unreachable block (ram,0x000100f62ca8) */
/* WARNING: Removing unreachable block (ram,0x000100f62f0c) */
/* WARNING: Removing unreachable block (ram,0x000100f62f14) */
/* WARNING: Removing unreachable block (ram,0x000100f62f98) */
/* WARNING: Removing unreachable block (ram,0x000100f62f20) */
/* WARNING: Removing unreachable block (ram,0x000100f62cf8) */
/* WARNING: Removing unreachable block (ram,0x000100f62cfc) */
/* WARNING: Removing unreachable block (ram,0x000100f62f54) */
/* WARNING: Removing unreachable block (ram,0x000100f62f5c) */
/* WARNING: Removing unreachable block (ram,0x000100f62d34) */
/* WARNING: Removing unreachable block (ram,0x000100f62f70) */
/* WARNING: Removing unreachable block (ram,0x000100f62d44) */
/* WARNING: Removing unreachable block (ram,0x000100f62d6c) */
/* WARNING: Removing unreachable block (ram,0x000100f62d80) */
/* WARNING: Removing unreachable block (ram,0x000100f62d84) */
/* WARNING: Removing unreachable block (ram,0x000100f62d88) */
/* WARNING: Removing unreachable block (ram,0x000100f62fac) */
/* WARNING: Removing unreachable block (ram,0x000100f62fb4) */
/* WARNING: Removing unreachable block (ram,0x000100f62d90) */
/* WARNING: Removing unreachable block (ram,0x000100f62d98) */
/* WARNING: Removing unreachable block (ram,0x000100f62db0) */
/* WARNING: Removing unreachable block (ram,0x000100f62f74) */
/* WARNING: Removing unreachable block (ram,0x000100f62dc4) */
/* WARNING: Removing unreachable block (ram,0x000100f62dd8) */
/* WARNING: Removing unreachable block (ram,0x000100f62e18) */
/* WARNING: Removing unreachable block (ram,0x000100f62e74) */
/* WARNING: Removing unreachable block (ram,0x000100f62e38) */
/* WARNING: Removing unreachable block (ram,0x000100f62ef0) */
/* WARNING: Removing unreachable block (ram,0x000100f62e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f62b64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4ed00);
  func_0x000107c43a4c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0;
    lVar4 = 0;
    lVar1 = param_2;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5faec();
    lVar1 = param_2;
    func_0x000107c61170(param_1);
    lVar4 = param_2;
  }
  lVar6 = lVar2;
  func_0x000107c4a9d0();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_100f62c4c:
    lVar6 = 0;
    lVar1 = 0;
  }
  else {
    lVar3 = lVar6;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar3 == 0) goto LAB_100f62c4c;
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  if (lVar4 == 0) {
    lVar4 = lVar1;
    if (lVar1 == 0) {
_swift_unknownObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  else if (lVar1 != 0) {
    if ((lVar5 == lVar6) && (lVar4 == lVar1)) goto _swift_unknownObjectRelease;
    func_0x000107c605b8(lVar5,lVar4,lVar6,lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 100f62fc0; end: 100f6300f; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint didUpdateFriendmojiToBitmojiUser:] */

/* WARNING: Possible PIC construction at 0x000100f62ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f62ffc) */

void FUN_100f62fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f62b64(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f63010; end: 100f63027; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint actionMenuDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f63010(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4eca0);
  *(undefined8 *)(param_1 + _DAT_112d4eca0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f63028; end: 100f63037; -[_TtC24PreviewStickerPickerImpl30PreviewStickerPickerEntryPoint stickerDataProviderPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f63028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d4ec90));
  return;
}



/* Entry: 100f63038; end: 100f6308f;  */

uint FUN_100f63038(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 100f63090; end: 100f630bb;  */

void FUN_100f63090(long param_1,long param_2)

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



/* Entry: 100f630bc; end: 100f63127;  */

void FUN_100f630bc(void)

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
    FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d4edc0;
  plVar5 = (long *)&UNK_10d914cd0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100f63128; end: 100f6324f;  */

ulong FUN_100f63128(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f63250);
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
  FUN_100f63250(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6324c);
      (*pcVar1)();
    }
    FUN_100f632d0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100f63250; end: 100f632cf;  */

undefined * FUN_100f63250(undefined *param_1,undefined *param_2)

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
    FUN_100f630bc();
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



/* Entry: 100f632d0; end: 100f634d3;  */

long FUN_100f632d0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f633e4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f633e8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
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
      FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f633e0);
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



/* Entry: 100f634d4; end: 100f6368f;  */

ulong FUN_100f634d4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f635b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f635bc);
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
  FUN_100f65324(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f63690);
  (*pcVar2)();
}



/* Entry: 100f63690; end: 100f6380f;  */

ulong FUN_100f63690(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f63810);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f63804);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f63808);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6380c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_100f634d4(uVar7,param_3,&PTR_PTR_1126b15c8,0x112d4ed88);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100f63810; end: 100f638bf;  */

void FUN_100f63810(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_100f63128();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100f638c0; end: 100f6390f;  */

/* WARNING: Removing unreachable block (ram,0x000100f6315c) */
/* WARNING: Removing unreachable block (ram,0x000100f63180) */
/* WARNING: Removing unreachable block (ram,0x000100f63164) */
/* WARNING: Removing unreachable block (ram,0x000100f6324c) */
/* WARNING: Removing unreachable block (ram,0x000100f63170) */
/* WARNING: Removing unreachable block (ram,0x000100f63178) */
/* WARNING: Removing unreachable block (ram,0x000100f631bc) */
/* WARNING: Removing unreachable block (ram,0x000100f631d0) */
/* WARNING: Removing unreachable block (ram,0x000100f631dc) */
/* WARNING: Removing unreachable block (ram,0x000100f631e4) */

ulong FUN_100f638c0(ulong param_1)

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
  FUN_100f63250(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_100f632d0(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6324c);
  (*pcVar1)();
}



/* Entry: 100f63910; end: 100f63dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f63910(undefined8 param_1,ulong param_2,byte param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined4 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &UNK_11036e000;
  func_0x000107c613fc(&UNK_11036e000,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11036e130;
  func_0x000107c613fc(&UNK_11036e130,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  *(ulong *)(puVar3 + 0x20) = param_4;
  *(ulong *)(puVar3 + 0x28) = param_5;
  puVar3[0x30] = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_1;
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174();
  uVar4 = param_2;
  func_0x000107c615f0();
  func_0x000107c5caec();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112d4ed20);
    func_0x000107c5bd94();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 == 0) {
      func_0x000107c61170(uVar4);
    }
    else {
      uVar5 = uVar6;
      func_0x000107c4a524();
      if ((((uVar5 & 1) != 0) && (uVar5 = uVar6, func_0x000107c5ac94(), (int)uVar5 != 0)) &&
         (lVar7 = *(long *)(unaff_x20 + _DAT_112d4ec90), lVar7 != 0)) {
        func_0x000107c61174();
        func_0x000107c61574(puVar2);
        puVar2 = &UNK_11036e158;
        func_0x000107c613fc(&UNK_11036e158,0x20,7);
        *(undefined8 *)(puVar2 + 0x10) = 0x100f65400;
        *(undefined **)(puVar2 + 0x18) = puVar3;
        uStack_88 = 0x100f653f4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_100f624ec;
        puStack_90 = &UNK_11036e170;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar2;
        func_0x000107c60bc4(ppuVar8);
        puVar2 = puStack_80;
        func_0x000107c6157c(puVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c4edc0(uVar6);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar6);
        func_0x000107c61170(lVar7);
        return;
      }
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar6);
    }
  }
  func_0x000107c61428(puVar2 + 0x10,&puStack_a8,0,0);
  puVar9 = puVar2 + 0x10;
  func_0x000107c61618();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61574(puVar2);
    }
    else {
      FUN_100f60cfc(0);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(puVar9);
    }
    goto LAB_100f63d90;
  }
  uVar4 = param_2;
  func_0x000107c615f0();
  func_0x000107c5caec();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_100f63bd8:
    if (param_5 != 0) goto LAB_100f63c18;
LAB_100f63c98:
    uVar14 = 0;
  }
  else {
    uVar6 = uVar4;
    func_0x000107c42934();
    if ((uVar6 < 0xe) && ((1L << (uVar6 & 0x3f) & 0x256fU) != 0)) {
      lVar10 = *(long *)(puVar9 + _DAT_112d4ed30);
      func_0x000107c5d91c();
      func_0x000107c61180();
      lVar7 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar7 != 0) {
        func_0x000107c5d418(lVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(lVar7);
        goto LAB_100f63bd8;
      }
    }
    func_0x000107c61170(uVar4);
    if (param_5 == 0) goto LAB_100f63c98;
LAB_100f63c18:
    uVar4 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar4 = param_5 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) goto LAB_100f63c98;
    lVar10 = *(long *)(puVar9 + _DAT_112d4ed48);
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar7 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar7 != 0) {
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c3d814(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(param_4);
    }
    uVar14 = 1;
  }
  if (*(long *)(puVar9 + _DAT_112d4ecd0) != 0) {
    lVar7 = *(long *)(puVar9 + _DAT_112d4ecd0) + _DAT_1137ff168;
    func_0x000107c61428(lVar7,auStack_78,0,0);
    lVar10 = lVar7;
    func_0x000107c61618();
    if (lVar10 != 0) {
      lVar7 = *(long *)(lVar7 + 8);
      uVar4 = param_2;
      func_0x000107c5cae8();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f63dc8);
        (*pcVar1)();
      }
      lVar11 = lVar10;
      func_0x000107c614f0();
      uVar12 = param_1;
      func_0x000107c42920(param_1);
      uVar13 = param_1;
      func_0x000107c4f0a0(param_1);
      func_0x000107c4ed6c(param_1);
      (**(code **)(lVar7 + 0x18))(uVar4,param_3 & 1,uVar14,uVar12,uVar13,param_1,lVar11,lVar7);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar4);
    }
  }
  FUN_100f60cfc(0);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(param_2);
LAB_100f63d90:
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 100f63dc8; end: 100f63e73;  */

/* WARNING: Possible PIC construction at 0x000100f63e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f63e10) */
/* WARNING: Removing unreachable block (ram,0x000100f63e14) */
/* WARNING: Removing unreachable block (ram,0x000100f63e58) */
/* WARNING: Removing unreachable block (ram,0x000100f63e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f63dc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4ed28);
  func_0x000107c410ec(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f63e74; end: 100f649f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f63e74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4ec90);
  if (lVar1 == 0) {
    return;
  }
  puVar8 = *(undefined **)(unaff_x20 + _DAT_112d4ed00);
  func_0x000107c61174();
  func_0x000107c43a4c();
  func_0x000107c61180();
  puVar2 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112d4ecd8) + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x000107c4a9d4(puVar2);
    func_0x000107c61180();
    uVar5 = 0;
    FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    puVar8 = puVar4;
    func_0x000107c5fc54(puVar4,uVar5);
    func_0x000107c61170(puVar4);
  }
  uVar5 = 0;
  FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  puVar4 = puVar8;
  func_0x000107c5fc48(puVar8,uVar5);
  func_0x000107c6142c(puVar8);
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar2;
    func_0x000107c4a9d0(puVar2);
    func_0x000107c61180();
  }
  puVar6 = PTR_PTR_1126d4cf8;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c5efd4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4ed28);
  func_0x000107c410ec();
  func_0x000107c61180();
  func_0x000107c46fc0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  lVar3 = _DAT_112d4eca0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4eca0);
  *(undefined **)(unaff_x20 + _DAT_112d4eca0) = puVar6;
  func_0x000107c61170(uVar5);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c4ef04();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 100f649f8; end: 100f64bfb;  */

undefined1  [16] FUN_100f649f8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uStack_70;
  ulong uStack_58;
  
  uVar8 = param_2;
  if (param_1 >> 0x3e == 0) {
    uStack_58 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_58 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uStack_58 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_70 = param_1 & 0xffffffffffffff8;
  uVar9 = 0;
  do {
    if (uStack_58 == uVar9) {
      uVar9 = 0;
      uVar7 = 1;
      goto LAB_100f64bb0;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_70 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f64bdc);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar9;
      uVar8 = param_1;
      FUN_100f634d4(uVar9,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar10 = uVar3;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar10 == 0) {
      uVar11 = 0;
      uVar10 = 0;
      uVar6 = uVar8;
    }
    else {
      uVar11 = uVar10;
      func_0x000107c5faec();
      uVar6 = uVar8;
      func_0x000107c61170(uVar10);
      uVar10 = uVar8;
    }
    uVar4 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar4 == 0) {
      uVar8 = uVar6;
      if (uVar10 == 0) {
LAB_100f64b88:
        func_0x000107c61170(uVar3);
        goto LAB_100f64bac;
      }
LAB_100f64a48:
      func_0x000107c61170(uVar3);
      uVar6 = uVar10;
LAB_100f64a54:
      func_0x000107c6142c(uVar6);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar8 = uVar6;
      func_0x000107c61170(uVar4);
      if (uVar10 == 0) {
        if (uVar6 == 0) goto LAB_100f64b88;
        func_0x000107c61170(uVar3);
        goto LAB_100f64a54;
      }
      if (uVar6 == 0) goto LAB_100f64a48;
      if ((uVar11 == uVar5) && (uVar10 == uVar6)) {
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(uVar6);
LAB_100f64bac:
        uVar7 = 0;
LAB_100f64bb0:
        auVar12._8_8_ = uVar7;
        auVar12._0_8_ = uVar9;
        return auVar12;
      }
      uVar8 = uVar10;
      func_0x000107c605b8(uVar11,uVar10,uVar5,uVar6,0);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar6);
      if ((uVar11 & 1) != 0) goto LAB_100f64bac;
    }
    bVar2 = SCARRY8(uVar9,1);
    uVar9 = uVar9 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f64be0);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 100f64bfc; end: 100f64f7f;  */

void FUN_100f64bfc(ulong *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x21;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar12 = *param_1;
  uVar4 = uVar12;
  uVar9 = param_2;
  FUN_100f649f8();
  if (unaff_x21 == 0) {
    if (((uint)uVar9 & 0xff) == 1) {
      if (uVar12 >> 0x3e != 0) {
        uVar4 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar4 = uVar12;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar15 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64c6c);
        (*pcVar2)();
      }
      while( true ) {
        uVar15 = uVar15 + 1;
        if (uVar12 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar12 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar12) {
            uVar5 = uVar12;
          }
          func_0x000107c60480();
        }
        if (uVar15 == uVar5) break;
        if ((uVar12 & 0xc000000000000001) == 0) {
          if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f48);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f4c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar12 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar15;
          uVar9 = uVar12;
          FUN_100f634d4(uVar15,uVar12,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        uVar11 = uVar5;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar11 == 0) {
          uVar13 = 0;
          uVar11 = 0;
          uVar10 = uVar9;
        }
        else {
          uVar13 = uVar11;
          func_0x000107c5faec();
          uVar10 = uVar9;
          func_0x000107c61170(uVar11);
          uVar11 = uVar9;
        }
        uVar6 = param_2;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar6 == 0) {
          uVar9 = uVar10;
          if (uVar11 == 0) {
LAB_100f64dd0:
            func_0x000107c61170(uVar5);
            goto LAB_100f64c74;
          }
LAB_100f64d5c:
          func_0x000107c61170(uVar5);
          uVar10 = uVar11;
LAB_100f64d78:
          func_0x000107c6142c(uVar10);
LAB_100f64d80:
          if (uVar4 != uVar15) {
            if ((uVar12 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f5c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f60);
                (*pcVar2)();
              }
              if (uVar5 <= uVar15) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f64);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar12 + 0x20 + uVar4 * 8);
              uVar11 = *(ulong *)(uVar12 + 0x20 + uVar15 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar4;
              FUN_100f634d4(uVar4,uVar12,&PTR_PTR_1126b15c8,0x112d4ed88);
              uVar11 = uVar15;
              uVar9 = uVar12;
              FUN_100f634d4(uVar15,uVar12,&PTR_PTR_1126b15c8,0x112d4ed88);
            }
            uVar13 = uVar12;
            func_0x000107c61550();
            if ((((int)uVar13 == 0) || ((long)uVar12 < 0)) || ((uVar12 >> 0x3e & 1) != 0)) {
              FUN_100f638c0();
              uVar14 = (uint)(uVar12 >> 0x3e) & 1;
            }
            else {
              uVar14 = 0;
            }
            uVar13 = uVar12 & 0xffffffffffffff8;
            lVar1 = uVar13 + uVar4 * 8;
            uVar8 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar11;
            func_0x000107c61170(uVar8);
            if (((long)uVar12 < 0) || (uVar14 != 0)) {
              FUN_100f638c0();
              uVar13 = uVar12 & 0xffffffffffffff8;
            }
            if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f1c);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f58);
              (*pcVar2)();
            }
            lVar1 = uVar13 + uVar15 * 8;
            uVar8 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            func_0x000107c61170(uVar8);
            *param_1 = uVar12;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f54);
            (*pcVar2)();
          }
        }
        else {
          uVar7 = uVar6;
          func_0x000107c5faec();
          uVar9 = uVar10;
          func_0x000107c61170(uVar6);
          if (uVar11 == 0) {
            if (uVar10 == 0) goto LAB_100f64dd0;
            func_0x000107c61170(uVar5);
            goto LAB_100f64d78;
          }
          if (uVar10 == 0) goto LAB_100f64d5c;
          if ((uVar13 != uVar7) || (uVar11 != uVar10)) {
            uVar9 = uVar11;
            func_0x000107c605b8(uVar13,uVar11,uVar7,uVar10,0);
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(uVar11);
            func_0x000107c6142c(uVar10);
            if ((uVar13 & 1) != 0) goto LAB_100f64c74;
            goto LAB_100f64d80;
          }
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar10);
        }
LAB_100f64c74:
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f64f50);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 100f64f80; end: 100f6508b;  */

void FUN_100f64f80(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f65068);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f6506c);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f65084);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100f65088);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100f6508c);
    (*pcVar5)();
  }
  return;
}



/* Entry: 100f6508c; end: 100f6514f;  */

/* WARNING: Removing unreachable block (ram,0x000100f65088) */

void FUN_100f6508c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f6512c);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65144);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65148);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65150);
      (*pcVar3)();
    }
    FUN_100f63810(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65068);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_100f65324(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f6506c);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65084);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f65088);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f6514c);
  (*pcVar3)();
}



/* Entry: 100f65150; end: 100f6516f;  */

void FUN_100f65150(void)

{
  func_0x000107c61168(&PTR_PTR_1127a52a0);
  return;
}



/* Entry: 100f65170; end: 100f6519f;  */

void FUN_100f65170(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100f651a0; end: 100f651bf;  */

void FUN_100f651a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f651c0; end: 100f651c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f651c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + _DAT_112d4ecd0);
    lVar1 = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar1 + _DAT_1137ff168;
      func_0x000107c61428(lVar3,auStack_60,0,0);
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c61170(lVar1);
        func_0x000107c614f0(lVar2);
        (**(code **)(lVar3 + 0x28))();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 100f651c8; end: 100f65203;  */

void FUN_100f651c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f65204; end: 100f6521f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65204(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  uVar9 = *(ulong *)(unaff_x20 + 0x20);
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar4 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c5caec();
      func_0x000107c61180();
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c42934();
        if ((uVar6 < 0xe) && ((1L << (uVar6 & 0x3f) & 0x256fU) != 0)) {
          lVar7 = *(long *)(lVar4 + _DAT_112d4ed30);
          func_0x000107c5d91c();
          func_0x000107c61180();
          lVar8 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar8 != 0) {
            func_0x000107c5d418(lVar8);
            func_0x000107c61170(uVar5);
            func_0x000107c615e8(lVar8);
            goto joined_r0x000100f62304;
          }
        }
        func_0x000107c61170(uVar5);
      }
joined_r0x000100f62304:
      uVar14 = 0;
      if (uVar1 != 0) {
        uVar5 = uVar9 & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar5 = uVar1 >> 0x38 & 0xf;
        }
        if (uVar5 == 0) {
          uVar14 = 0;
        }
        else {
          lVar7 = *(long *)(lVar4 + _DAT_112d4ed48);
          func_0x000107c4ec80();
          func_0x000107c61180();
          lVar8 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar8 != 0) {
            func_0x000107c5fadc(uVar9,uVar1);
            func_0x000107c3d814(lVar8);
            func_0x000107c61170(lVar8);
            func_0x000107c61170(uVar9);
          }
          uVar14 = 1;
        }
      }
      if (*(long *)(lVar4 + _DAT_112d4ecd0) != 0) {
        lVar8 = *(long *)(lVar4 + _DAT_112d4ecd0) + _DAT_1137ff168;
        func_0x000107c61428(lVar8,auStack_90,0,0);
        lVar7 = lVar8;
        func_0x000107c61618();
        if (lVar7 != 0) {
          lVar15 = *(long *)(lVar8 + 8);
          lVar8 = param_1;
          func_0x000107c5cae8();
          func_0x000107c61180();
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f624ec);
            (*pcVar3)();
          }
          lVar10 = lVar7;
          func_0x000107c614f0(lVar7);
          uVar11 = uVar13;
          func_0x000107c42920(uVar13);
          uVar12 = uVar13;
          func_0x000107c4f0a0(uVar13);
          func_0x000107c4ed6c(uVar13);
          (**(code **)(lVar15 + 0x18))(lVar8,bVar2 & 1,uVar14,uVar11,uVar12,uVar13,lVar10,lVar15);
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(lVar8);
        }
      }
      FUN_100f60cfc(0);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_90,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    FUN_100f60cfc(0);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 100f65220; end: 100f6523f;  */

void FUN_100f65220(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f65240; end: 100f6524f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65240(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112d4ec88);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x000107c5d64c();
      func_0x000107c61180();
    }
    lVar1 = _DAT_112d4ec90;
    if (*(long *)(lVar3 + _DAT_112d4ec90) != 0) {
      func_0x000107c4fd88();
    }
    func_0x000107c42f24();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f61e24);
      (*pcVar2)();
    }
    lVar5 = lVar6;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar6);
    if ((lVar5 == 3) && (lVar6 = *(long *)(lVar3 + lVar1), lVar6 != 0)) {
      func_0x000107c4e724();
      func_0x000107c61180();
      func_0x000107c4de4c();
      func_0x000107c61170(lVar3);
      lVar3 = lVar6;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100f65250; end: 100f6527b;  */

void FUN_100f65250(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f6527c; end: 100f652df;  */

void FUN_100f6527c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f652e0;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f60684,0,0);
  return;
}



/* Entry: 100f652e0; end: 100f6531b;  */

void FUN_100f652e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f65318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f6531c; end: 100f65323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6531c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d4ec88);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000107c5c424();
      func_0x000107c61180();
    }
    func_0x000107c4fd7c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f65324; end: 100f65363;  */

void FUN_100f65324(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f65364; end: 100f6537b;  */

void FUN_100f65364(void)

{
  FUN_100f615b0();
  return;
}



/* Entry: 100f6537c; end: 100f6540f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6537c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar2 + _DAT_112d4ecb8);
    *(undefined8 *)(lVar2 + _DAT_112d4ecb8) = param_1;
    func_0x000107c61170(uVar7);
    puVar3 = &UNK_11036e000;
    func_0x000107c613fc(&UNK_11036e000,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    puVar4 = &UNK_11036e360;
    func_0x000107c613fc(&UNK_11036e360,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x100f65404;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = (code *)0x100f653f8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    uStack_88 = 0x100f6540c;
    puStack_80 = &UNK_11036e378;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    pcStack_78 = FUN_100f61d10;
    puStack_70 = (undefined *)0x0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    uStack_88 = 0x100e27b38;
    puStack_80 = &UNK_11036e3a0;
    ppuVar6 = &puStack_98;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_70);
    func_0x000107c4c754(param_1);
    func_0x000107c61170(lVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f65410; end: 100f6541b; -[SCPreviewStickerPickerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65410(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4edf0;
  func_0x000107c61428(param_1 + _DAT_112d4edf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6541c; end: 100f65427; -[SCPreviewStickerPickerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6541c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4edf0;
  func_0x000107c61428(param_1 + _DAT_112d4edf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f65428; end: 100f65433; -[SCPreviewStickerPickerEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4edf8;
  func_0x000107c61428(param_1 + _DAT_112d4edf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f65434; end: 100f6543f; -[SCPreviewStickerPickerEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4edf8;
  func_0x000107c61428(param_1 + _DAT_112d4edf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f65440; end: 100f6544b; -[SCPreviewStickerPickerEntryPoint snapEditorFilterDataProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ee00;
  func_0x000107c61428(param_1 + _DAT_112d4ee00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6544c; end: 100f65457; -[SCPreviewStickerPickerEntryPoint setSnapEditorFilterDataProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6544c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ee00;
  func_0x000107c61428(param_1 + _DAT_112d4ee00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f65458; end: 100f65463; -[SCPreviewStickerPickerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ee08;
  func_0x000107c61428(param_1 + _DAT_112d4ee08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f65464; end: 100f6546f; -[SCPreviewStickerPickerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ee08;
  func_0x000107c61428(param_1 + _DAT_112d4ee08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f65470; end: 100f6547b; -[SCPreviewStickerPickerEntryPoint bloopsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65470(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ee10;
  func_0x000107c61428(param_1 + _DAT_112d4ee10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f6547c; end: 100f65487; -[SCPreviewStickerPickerEntryPoint setBloopsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6547c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ee10;
  func_0x000107c61428(param_1 + _DAT_112d4ee10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f65488; end: 100f65493; -[SCPreviewStickerPickerEntryPoint ctpRepositoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f65488(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ee18;
  func_0x000107c61428(param_1 + _DAT_112d4ee18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


