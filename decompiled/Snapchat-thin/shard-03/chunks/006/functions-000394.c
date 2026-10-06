/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a4bf6c; end: 102a4bfaf;  */

void FUN_102a4bf6c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4988);
  return;
}



/* Entry: 102a4bfb0; end: 102a4c027;  */

uint FUN_102a4bfb0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_40);
  if (lStack_40 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = lStack_40;
    func_0x000107c614f0(lStack_40);
    (**(code **)(lStack_38 + 0x28))(param_1,lVar1,lStack_38);
    uVar2 = (uint)param_1;
    func_0x000107c615e8(lStack_40);
  }
  return uVar2 & 1;
}



/* Entry: 102a4c028; end: 102a4c103;  */

void FUN_102a4c028(uint param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x18,auStack_68,0,0);
    lVar1 = *(long *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar2 + 8))(param_1 & 1,param_2,param_3,param_4,param_5,lVar3,lVar2);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  (*param_4)(0,0,0,0);
  return;
}



/* Entry: 102a4c104; end: 102a4c127;  */

void FUN_102a4c104(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a4c128; end: 102a4c12b;  */

void FUN_102a4c128(uint param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x18,auStack_68,0,0);
    lVar1 = *(long *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar2 + 8))(param_1 & 1,param_2,param_3,param_4,param_5,lVar3,lVar2);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  (*param_4)(0,0,0,0);
  return;
}



/* Entry: 102a4c12c; end: 102a4c397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a4c12c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(param_3 + 0x30);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    if (param_1 != 0) {
      lVar1 = *(long *)(param_1 + _DAT_11306fb70);
      func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + _DAT_113036458);
        uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + _DAT_1130813f0);
        uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x28) + _DAT_113036488);
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        func_0x000107c6157c(lVar1);
        func_0x000107c6157c(uVar9);
        func_0x000107c6157c(uVar10);
        func_0x000107c6157c(uVar11);
        func_0x000107c3dff0(uVar8);
        func_0x000107c61180();
        func_0x000107c61580(uVar9,3);
        func_0x000107c6157c(uVar10);
        func_0x000107c6157c(uVar11);
        lVar3 = lVar2;
        func_0x000107c4c18c();
        func_0x000107c61180();
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        uVar4 = uVar8;
        func_0x0001000b637c(uVar8);
        uVar5 = 0x112d5d480;
        func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
        pcVar6 = FUN_102a4bcc0;
        func_0x0001000bfde0(FUN_102a4bcc0,0,uVar5);
        func_0x000107c61574(uVar4);
        func_0x000103417d80(0);
        func_0x000107c613fc();
        func_0x000107c615f0(param_2);
        func_0x0001034162e4(lVar1,param_2,&PTR_DAT_11075cab0,FUN_102a4c398,uVar9,0x102a4c3a0,uVar9,
                            FUN_102a4c3a8,uVar9,FUN_102a4c3f4,uVar10,0x102a4c3fc,uVar11,lVar3,pcVar6
                            ,FUN_102a3f210,0);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar8);
        func_0x000107c61574(uVar11);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar9);
        ppuVar7 = &PTR_DAT_1106527e0;
        goto LAB_102a4c378;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  lVar1 = 0;
  ppuVar7 = (undefined **)0x0;
LAB_102a4c378:
  auVar12._8_8_ = ppuVar7;
  auVar12._0_8_ = lVar1;
  return auVar12;
}



/* Entry: 102a4c398; end: 102a4c3a7;  */

undefined8 FUN_102a4c398(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x000107c4a4c0(param_1);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(unaff_x20);
  }
  uVar1 = uStack_48;
  func_0x000107c49fa4();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_1);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    func_0x000107c49fa0(uStack_50);
    func_0x000107c615e8(uStack_50);
  }
  return uVar1;
}



/* Entry: 102a4c3a8; end: 102a4c3f3;  */

undefined8 FUN_102a4c3a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4233c(uStack_28,param_2,param_1);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 102a4c3f4; end: 102a4c413;  */

undefined8 FUN_102a4c3f4(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 102a4c414; end: 102a4c46f; -[_TtC23LensPlusUpsellApiPlugin32NoOpLensPlusUpsellRequestHandler handleRequest:] */

void FUN_102a4c414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_102a4c484(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102a4c470; end: 102a4c483; -[_TtC23LensPlusUpsellApiPlugin32NoOpLensPlusUpsellRequestHandler reset] */

void FUN_102a4c470(void)

{
  return;
}



/* Entry: 102a4c484; end: 102a4c58b;  */

undefined * FUN_102a4c484(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar4 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar5 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar3);
    func_0x000107c48368(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4c58c);
  (*pcVar1)();
}



/* Entry: 102a4c58c; end: 102a4c5ab;  */

void FUN_102a4c58c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4b88);
  return;
}



/* Entry: 102a4c5ac; end: 102a4c5b7; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee4be0;
  func_0x000107c61428(param_1 + _DAT_112ee4be0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c5b8; end: 102a4c5c3; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee4be0;
  func_0x000107c61428(param_1 + _DAT_112ee4be0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c5c4; end: 102a4c5cf; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee4be8;
  func_0x000107c61428(param_1 + _DAT_112ee4be8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c5d0; end: 102a4c5db; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee4be8;
  func_0x000107c61428(param_1 + _DAT_112ee4be8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c5dc; end: 102a4c5e7; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee4bf0;
  func_0x000107c61428(param_1 + _DAT_112ee4bf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c5e8; end: 102a4c5f3; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee4bf0;
  func_0x000107c61428(param_1 + _DAT_112ee4bf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c5f4; end: 102a4c5ff; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint lensPlusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c5f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee4bf8;
  func_0x000107c61428(param_1 + _DAT_112ee4bf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c600; end: 102a4c60b; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setLensPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee4bf8;
  func_0x000107c61428(param_1 + _DAT_112ee4bf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c60c; end: 102a4c617; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c60c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee4c00;
  func_0x000107c61428(param_1 + _DAT_112ee4c00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c618; end: 102a4c65b;  */

void FUN_102a4c618(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102a4c65c; end: 102a4c667; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4c65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee4c00;
  func_0x000107c61428(param_1 + _DAT_112ee4c00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c668; end: 102a4c6bb;  */

void FUN_102a4c668(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a4c6bc; end: 102a4c883;  */

/* WARNING: Possible PIC construction at 0x000102a4c7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a4c7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a4c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a4c85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a4c83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a4c82c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a4c840) */
/* WARNING: Removing unreachable block (ram,0x000102a4c860) */
/* WARNING: Removing unreachable block (ram,0x000102a4c7e0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102a4c7d0) */
/* WARNING: Removing unreachable block (ram,0x000102a4c7c0) */
/* WARNING: Removing unreachable block (ram,0x000102a4c830) */

void FUN_102a4c6bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4afbc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4b318();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4b2f4();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = 0;
          FUN_102a4bf6c();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(lVar5 + 0x30) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(unaff_x20);
          FUN_102a4b4dc();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102a4c884; end: 102a4c8ab; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint begin] */

void FUN_102a4c884(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a4c6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a4c8ac; end: 102a4c8ef; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint end] */

void FUN_102a4c8ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a4c8f0; end: 102a4cbd3;  */

void FUN_102a4c8f0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == 0x656d614779616c70) && (param_3 == -0x11ff9a8f909cac8d)) ||
         (func_0x000107c605b8(0x656d614779616c70,0xee0065706f635373,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5747c();
      }
      else {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55cbc();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10dfd70)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef20290,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000015;
              if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) &&
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "LensPlusUpsellApiPlugin/SCLensPlusUpsellPlayGamesApiPluginEntryPoint.swift"
                                    ,0x4a,2,0x3e,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4cbd4);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55df4();
              goto LAB_102a4c980;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55e00();
        }
      }
      goto LAB_102a4c980;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_102a4c980:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102a4cbd4; end: 102a4cc7f; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint setValue:forIvarName:] */

void FUN_102a4cbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102a4c8f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a4cc80; end: 102a4cd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4cc80(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ee4be0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee4be8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee4bf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee4bf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee4c00,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee4c08) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a4cd30; end: 102a4cd4f; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint init] */

void FUN_102a4cd30(void)

{
  FUN_102a4cc80();
  return;
}



/* Entry: 102a4cd50; end: 102a4cd83;  */

void FUN_102a4cd50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a4cd84; end: 102a4cdfb; -[SCLensPlusUpsellPlayGamesApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a4cd84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee4be0);
  func_0x000107c61610(param_1 + _DAT_112ee4be8);
  func_0x000107c61610(param_1 + _DAT_112ee4bf0);
  func_0x000107c61610(param_1 + _DAT_112ee4bf8);
  func_0x000107c61610(param_1 + _DAT_112ee4c00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee4c08));
  return;
}



/* Entry: 102a4cdfc; end: 102a4ce1b;  */

void FUN_102a4cdfc(void)

{
  func_0x000107c61168(&PTR_PTR_112882790);
  return;
}



/* Entry: 102a4ce1c; end: 102a4cf4f;  */

void FUN_102a4ce1c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x000107c4b678();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar2 = 0;
    FUN_102a4cf50(0);
    uVar3 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar2);
    func_0x000107c61170(unaff_x20);
    if (uVar3 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar6 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4cf10);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar7;
          func_0x00010101b75c(uVar7,uVar3);
        }
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4cefc);
          (*pcVar1)();
        }
        uVar8 = uVar7 + 1;
        uVar5 = 0;
        FUN_102a4cf94();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c6142c(uVar3);
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar6);
    }
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102a4cf50; end: 102a4cf93;  */

void FUN_102a4cf50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d550a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1d00;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d550a8 = puVar1;
  return;
}



/* Entry: 102a4cf94; end: 102a4d113;  */

uint FUN_102a4cf94(long *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(uVar1 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar3 = *param_1;
  lVar4 = lVar3;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170();
  func_0x000107c5edc8();
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_2 == 0) {
    uVar5 = 1;
  }
  else if (lVar4 == 0x7370747468 && param_2 == 0xe500000000000000) {
    func_0x000107c6142c(param_2);
    uVar5 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c605b8(lVar4,param_2,0x7370747468,0xe500000000000000,0);
    func_0x000107c6142c(param_2);
    uVar5 = (uint)lVar4 ^ 1;
  }
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar4 = 0;
    uVar1 = 0xf000000000000000;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    if (uVar1 >> 0x3c < 0xf) {
      func_0x0001000b44c0(lVar4,uVar1);
      func_0x0001000b44c0(0,0xf000000000000000);
      uVar2 = 0;
      goto LAB_102a4d0f4;
    }
  }
  func_0x0001000b44c0(lVar4,uVar1);
  uVar2 = 1;
LAB_102a4d0f4:
  return uVar5 & 1 | uVar2;
}



/* Entry: 102a4d114; end: 102a4d147; -[SCLensApiServiceRequest containsLocalOrUnencryptedLinkedResource] */

uint FUN_102a4d114(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a4ce1c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102a4d148; end: 102a4d32f;  */

void FUN_102a4d148(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x000107c4b678();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar3 = 0;
    FUN_102a4cf50();
    uVar4 = unaff_x20;
    func_0x000107c5fc54();
    func_0x000107c61170(unaff_x20);
    if (uVar4 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar7 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4d2f0);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar8;
          uVar3 = uVar4;
          func_0x00010101b75c();
        }
        uVar1 = uVar8 + 1;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a4d2ec);
          (*pcVar2)();
        }
        uVar9 = uVar5;
        func_0x000107c4a804();
        func_0x000107c61180();
        if (uVar9 == 0) {
          uVar6 = 0;
          uVar3 = 0xf000000000000000;
        }
        else {
          uVar6 = uVar9;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar9);
          if (uVar3 >> 0x3c < 0xf) {
            func_0x0001000b44c0(uVar6);
            uVar9 = 0xf000000000000000;
            uVar6 = 0xf000000000000000;
            func_0x0001000b44c0(0);
            uVar3 = uVar5;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            if (uVar3 == 0) {
              uVar10 = 0;
LAB_102a4d2c4:
              func_0x0001000b44c0(uVar10,uVar9);
              func_0x000107c6142c(uVar4);
              func_0x000107c61170(uVar5);
              return;
            }
            uVar10 = uVar3;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar3);
            uVar9 = uVar6;
            if (0xe < uVar6 >> 0x3c) goto LAB_102a4d2c4;
            func_0x0001000b44c0(uVar10,uVar6);
            uVar6 = 0;
            uVar3 = 0xf000000000000000;
          }
        }
        func_0x0001000b44c0(uVar6);
        func_0x000107c61170(uVar5);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar7);
    }
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 102a4d330; end: 102a4d363; -[SCLensApiServiceRequest containsInvalidLinkedResource] */

uint FUN_102a4d330(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a4d148();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102a4d364; end: 102a4d377;  */

bool FUN_102a4d364(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a4d378; end: 102a4d537;  */

void FUN_102a4d378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x6c616d726f6e;
  if (cVar4 != '\x01') {
    uVar3 = 0x656772616c;
  }
  uVar1 = 0xe600000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe500000000000000;
  }
  uVar2 = 0x6c6c616d73;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a4d538; end: 102a4d58b;  */

void FUN_102a4d538(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x6c616d726f6e;
  if (cVar4 != '\x01') {
    uVar3 = 0x656772616c;
  }
  uVar1 = 0xe600000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe500000000000000;
  }
  uVar2 = 0x6c6c616d73;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102a4d58c; end: 102a4dcbf;  */

void FUN_102a4d58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte **ppbVar14;
  uint uVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 unaff_w28;
  byte *pbVar20;
  ulong uVar21;
  ulong uStack_c8;
  ulong uStack_b8;
  byte *pbStack_b0;
  ulong uStack_a8;
  byte *pbStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar19 = *unaff_x20;
  uVar16 = unaff_x20[4];
  lVar17 = unaff_x20[5];
  func_0x000107c614f0();
  (**(code **)(lVar17 + 8))();
  if (lVar17 == 0) {
    ppbVar14 = &pbStack_b0;
    uVar16 = unaff_x20[0x10];
    FUN_102a4f380(&stack0xffffffffffffffa8,&uStack_80);
    puVar13 = &UNK_11058cc08;
    func_0x000107c613fc(&UNK_11058cc08,0x41,7);
    *(undefined8 *)(puVar13 + 0x10) = param_2;
    *(undefined8 *)(puVar13 + 0x18) = param_3;
    *(undefined8 *)(puVar13 + 0x28) = uStack_78;
    *(undefined8 *)(puVar13 + 0x20) = uStack_80;
    *(undefined8 *)(puVar13 + 0x38) = uStack_68;
    *(undefined8 *)(puVar13 + 0x30) = uStack_70;
    puVar13[0x40] = unaff_w28;
    uStack_90 = 0x102a4f674;
    pbStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pbStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_11058cc20;
    puStack_88 = puVar13;
    func_0x000107c60bc4(&pbStack_b0);
    puVar13 = puStack_88;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar13);
    func_0x000107c4e524(uVar16);
    func_0x000107c60bd0(ppbVar14);
    FUN_102a4f514(&stack0xffffffffffffffa8,0x112ee4d20,&UNK_10db0ff90);
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    lVar6 = 0x746e6169726176;
    uVar21 = 0;
    func_0x000100029284(0x746e6169726176);
    if ((uVar21 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&uStack_a8);
      func_0x000107c6142c(param_1);
      func_0x000100102924(&uStack_a8,&puStack_88);
      func_0x0001000bb420(&puStack_88,&uStack_a8);
      puVar7 = &uStack_b8;
      func_0x000107c6147c(puVar7,&uStack_a8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      pbVar20 = pbStack_b0;
      if (((ulong)puVar7 & 1) == 0) {
LAB_102a4dae4:
        func_0x000107c6142c(lVar17);
      }
      else {
        uVar21 = uStack_b8 & 0xffffffffffff;
        if (((ulong)pbStack_b0 & 0x2000000000000000) != 0) {
          uVar21 = (ulong)pbStack_b0 >> 0x38 & 0xf;
        }
        if ((uVar21 == 0) ||
           (uVar8 = uStack_b8, pbVar10 = pbStack_b0, func_0x000107c5fb5c(), 0xc < (long)uVar8)) {
          func_0x000107c6142c(pbVar20);
          goto LAB_102a4dae4;
        }
        uStack_a8 = uStack_b8;
        pbStack_a0 = pbVar20;
        puStack_98 = (undefined *)0x0;
        pbVar9 = pbVar20;
        uStack_90 = uVar21;
        func_0x000107c61434();
        do {
          func_0x000107c5fb84();
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c6142c(pbStack_a0);
            func_0x000100183ab8(&puStack_88);
            lVar6 = *(long *)(param_1 + 0x10);
            uStack_c8 = uStack_b8;
            goto joined_r0x000102a4db44;
          }
          if (((pbVar9 != (byte *)0xa0d) || (pbVar10 != (byte *)0xe200000000000000)) &&
             (pbVar11 = pbVar9, func_0x000107c605b8(pbVar9,pbVar10,0xa0d,0xe200000000000000,0),
             ((ulong)pbVar11 & 1) == 0)) {
            uVar21 = (ulong)pbVar9 & 0xffffffffffff;
            if (((ulong)pbVar10 & 0x2000000000000000) != 0) {
              uVar21 = (ulong)pbVar10 >> 0x38 & 0xf;
            }
            if (uVar21 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102a4db7c);
              (*pcVar5)();
            }
            if (((ulong)pbVar10 >> 0x3c & 1) == 0) {
              if (((ulong)pbVar10 >> 0x3d & 1) == 0) {
                if (((ulong)pbVar9 >> 0x3c & 1) == 0) {
                  pbVar11 = pbVar9;
                  func_0x000107c60358(pbVar9,pbVar10);
                  uVar15 = (uint)*pbVar11;
                }
                else {
                  uVar15 = (uint)*(byte *)(((ulong)pbVar10 & 0xfffffffffffffff) + 0x20);
                }
              }
              else {
                uVar15 = (uint)pbVar9;
              }
              uVar8 = 0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar15) {
                uVar8 = LZCOUNT(uVar15 << 0x18 ^ 0xffffffff) << 0x10;
              }
            }
            else {
              uVar8 = 0;
              func_0x000107c5fb40(0xf,pbVar9,pbVar10);
            }
            if (uVar8 >> 0xe == uVar21 * 4) {
              pbVar11 = pbVar9;
              func_0x000100ed9fa0(pbVar9,pbVar10);
              if (((ulong)pbVar11 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102a4db84);
                (*pcVar5)();
              }
              if (((ulong)pbVar11 & 0xffffff80) == 0) {
                pbVar11 = pbVar9;
                func_0x000100ed9fa0(pbVar9,pbVar10);
                if (((ulong)pbVar11 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102a4db88);
                  (*pcVar5)();
                }
                if (((ulong)pbVar11 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102a4db80);
                  (*pcVar5)();
                }
                goto LAB_102a4d6c8;
              }
            }
            func_0x000107c6142c(pbVar10);
            break;
          }
LAB_102a4d6c8:
          pbVar11 = pbVar10;
          func_0x000107c5fa70();
          func_0x000107c6142c();
          uVar21 = (ulong)pbVar9 & 1;
          pbVar9 = pbVar10;
          pbVar10 = pbVar11;
        } while (uVar21 != 0);
        pbVar10 = pbStack_a0;
        func_0x000107c6142c(pbVar20);
        func_0x000107c6142c(lVar17);
        func_0x000107c6142c(pbVar10);
      }
      FUN_102a4ed80(2,param_2,param_3);
      goto LAB_102a4db00;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_c8 = 0;
  pbVar20 = (byte *)0x0;
  lVar6 = *(long *)(param_1 + 0x10);
joined_r0x000102a4db44:
  if (lVar6 != 0) {
    func_0x000107c61434(param_1);
    lVar6 = 0x657a6973;
    uVar21 = 0;
    func_0x000100029284(0x657a6973);
    if ((uVar21 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&uStack_a8);
      func_0x000107c6142c(param_1);
      func_0x000100102924(&uStack_a8,&puStack_88);
      func_0x0001000bb420(&puStack_88,&uStack_a8);
      puVar7 = &uStack_b8;
      func_0x000107c6147c(puVar7,&uStack_a8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar7 & 1) != 0) {
        uVar21 = 0x112d3cde0;
        func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
        func_0x000107c61538();
        func_0x000107c604c4();
        func_0x000107c6142c(pbStack_b0);
        if (uVar21 < 3) {
          func_0x000100183ab8(&puStack_88);
          goto LAB_102a4d92c;
        }
      }
      func_0x000107c6142c(lVar17);
      FUN_102a4ed80(2,param_2,param_3);
      func_0x000107c6142c(pbVar20);
LAB_102a4db00:
      func_0x000100183ab8(&puStack_88);
      return;
    }
    func_0x000107c6142c(param_1);
  }
  uVar21 = 1;
LAB_102a4d92c:
  uVar18 = unaff_x20[0x10];
  uVar1 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar2 = unaff_x20[0xc];
  uVar4 = unaff_x20[0xd];
  puVar13 = &UNK_11058c988;
  func_0x000107c613fc(&UNK_11058c988,0x68,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar1;
  *(undefined8 *)(puVar13 + 0x18) = uVar3;
  *(undefined8 *)(puVar13 + 0x20) = uVar16;
  *(long *)(puVar13 + 0x28) = lVar17;
  puVar13[0x30] = (char)uVar21;
  *(undefined8 *)(puVar13 + 0x38) = uVar18;
  *(undefined8 *)(puVar13 + 0x40) = param_2;
  *(undefined8 *)(puVar13 + 0x48) = param_3;
  *(undefined8 *)(puVar13 + 0x50) = uVar2;
  *(undefined8 *)(puVar13 + 0x58) = uVar4;
  *(undefined8 *)(puVar13 + 0x60) = uVar19;
  if (pbVar20 == (byte *)0x0) {
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(uVar18);
    func_0x000107c615f0(uVar2);
    func_0x000107c615f0(uVar1);
    func_0x000107c61434(lVar17);
    FUN_102a4df00(uStack_c8,0,uVar1,uVar3,uVar16,lVar17,uVar21,uVar18,param_2,param_3,uVar2,uVar4,
                  uVar19);
    func_0x000107c6142c(lVar17);
    func_0x000107c61574(puVar13);
  }
  else {
    uVar16 = unaff_x20[10];
    lVar17 = unaff_x20[0xb];
    func_0x000107c614f0(uVar16);
    puVar12 = &UNK_11058c9b0;
    func_0x000107c613fc(&UNK_11058c9b0,0x50,7);
    *(ulong *)(puVar12 + 0x10) = uStack_c8;
    *(byte **)(puVar12 + 0x18) = pbVar20;
    *(undefined8 *)(puVar12 + 0x20) = uVar18;
    *(undefined8 *)(puVar12 + 0x28) = param_2;
    *(undefined8 *)(puVar12 + 0x30) = param_3;
    *(code **)(puVar12 + 0x38) = FUN_102a4f420;
    *(undefined **)(puVar12 + 0x40) = puVar13;
    *(undefined8 *)(puVar12 + 0x48) = uVar19;
    pcVar5 = *(code **)(lVar17 + 8);
    func_0x000107c61580(param_3,2);
    func_0x000107c615f4(uVar18,2);
    func_0x000107c615f0(uVar2);
    func_0x000107c615f0(uVar1);
    func_0x000107c61434(pbVar20);
    func_0x000107c6157c(puVar13);
    (*pcVar5)(0x102a4f45c,puVar12,uVar16,lVar17);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar13);
    func_0x000107c6142c(pbVar20);
  }
  return;
}



/* Entry: 102a4dcc0; end: 102a4deff;  */

void FUN_102a4dcc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_70;
  ppuVar3 = &puStack_70;
  if (param_1 == 0) {
    puVar2 = &UNK_11058c8e8;
    func_0x000107c613fc(&UNK_11058c8e8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    uStack_50 = 0x102a4f69c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11058c900;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_4);
  }
  else {
    puVar2 = &UNK_11058c938;
    func_0x000107c613fc(&UNK_11058c938,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(long *)(puVar2 + 0x20) = param_1;
    uStack_50 = 0x102a4f414;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11058c950;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_4);
    func_0x000107c61434(param_1);
    ppuVar3 = ppuVar1;
  }
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102a4df00; end: 102a4e3ab;  */

void FUN_102a4df00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c614f0(param_3);
  puVar1 = &UNK_11058ca28;
  func_0x000107c613fc(&UNK_11058ca28,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  *(undefined8 *)(puVar1 + 0x28) = param_11;
  *(undefined8 *)(puVar1 + 0x30) = param_12;
  *(undefined8 *)(puVar1 + 0x38) = param_13;
  pcVar2 = *(code **)(param_4 + 8);
  func_0x000107c615f0(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c615f0(param_11);
  (*pcVar2)(param_5,param_6,param_1,param_2,param_7,FUN_102a4f4e4,puVar1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102a4e3ac; end: 102a4e997;  */

void FUN_102a4e3ac(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  if ((param_1 == 0) ||
     (uVar1 = param_2, func_0x000100077018(param_2,param_3,param_1), (uVar1 & 1) == 0)) {
    puVar2 = &UNK_11058c9d8;
    func_0x000107c613fc(&UNK_11058c9d8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    pcStack_60 = FUN_102a4f48c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11058c9f0;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(param_4);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    (*param_7)(param_2,param_3);
  }
  return;
}



/* Entry: 102a4e998; end: 102a4ea93;  */

void FUN_102a4e998(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_68 [3];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0x6c7275;
  *(undefined8 *)(lVar1 + 0x28) = 0xe300000000000000;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  func_0x000107c61434(param_4);
  lVar2 = lVar1;
  func_0x0001001830b8();
  func_0x000107c61588(lVar1);
  FUN_102a4f514((undefined8 *)(lVar1 + 0x20),0x112d38308,&UNK_10d902040);
  uVar3 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  uStack_48 = 0;
  alStack_68[0] = lVar2;
  uStack_50 = uVar3;
  (*param_1)(alStack_68);
  FUN_102a4f514(alStack_68,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 102a4ea94; end: 102a4eb07;  */

void FUN_102a4ea94(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102a4eb08; end: 102a4eb33;  */

undefined1  [16] FUN_102a4eb08(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 102a4eb34; end: 102a4eb53;  */

undefined8 FUN_102a4eb34(void)

{
  return 1;
}



/* Entry: 102a4eb54; end: 102a4ebb7;  */

ulong FUN_102a4eb54(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102a4ebb8; end: 102a4ebbb;  */

void FUN_102a4ebb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0fdb0;
  func_0x000107c61520(&UNK_10db0fdb0,&UNK_11058c828);
  puRam0000000112ee4c38 = puVar1;
  return;
}



/* Entry: 102a4ebbc; end: 102a4ebfb;  */

void FUN_102a4ebbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee4c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0fdb0;
  func_0x000107c61520(&UNK_10db0fdb0,&UNK_11058c828);
  puRam0000000112ee4c38 = puVar1;
  return;
}



/* Entry: 102a4ebfc; end: 102a4ed5f;  */

int FUN_102a4ebfc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a4ec78;
        goto LAB_102a4ec5c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a4ec5c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102a4ec78:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a4ed60; end: 102a4ed7f;  */

void FUN_102a4ed60(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4c80);
  return;
}



/* Entry: 102a4ed80; end: 102a4ee77;  */

void FUN_102a4ed80(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [32];
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_b0;
  uStack_38 = 1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  auStack_58[0] = param_1;
  FUN_102a4f380(auStack_58,&uStack_80);
  puVar1 = &UNK_11058cc08;
  func_0x000107c613fc(&UNK_11058cc08,0x41,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = uStack_78;
  *(undefined8 *)(puVar1 + 0x20) = uStack_80;
  *(undefined8 *)(puVar1 + 0x38) = uStack_68;
  *(undefined8 *)(puVar1 + 0x30) = uStack_70;
  puVar1[0x40] = uStack_60;
  uStack_90 = 0x102a4f674;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_11058cc20;
  puStack_88 = puVar1;
  func_0x000107c60bc4(&puStack_b0);
  puVar1 = puStack_88;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  FUN_102a4f514(auStack_58,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 102a4ee78; end: 102a4f373;  */

void FUN_102a4ee78(undefined *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  ppuVar3 = &puStack_120;
  uVar9 = *unaff_x20;
  if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x11) = 1;
    if ((code *)unaff_x20[0xe] != (code *)0x0) {
      (*(code *)unaff_x20[0xe])();
    }
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar1 = 0x7069636974726170;
    uVar5 = 0xeb00000000746e61;
    func_0x000100029284(0x7069636974726170);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar1 * 0x20,&puStack_120);
      func_0x000107c6142c(param_3);
      FUN_102a4f514(&puStack_120,0x112d387f8,&UNK_10d902650);
      puStack_120 = (undefined *)0x0;
      lStack_118 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      lVar1 = lStack_118;
      func_0x000107c61434(param_2);
      func_0x000107c6142c(lVar1);
      puVar4 = (undefined *)0xd000000000000021;
      lVar1 = -0x7ffffffef0f1aed0;
      puStack_120 = param_1;
      lStack_118 = param_2;
      goto LAB_102a4ef88;
    }
    func_0x000107c6142c(param_3);
  }
  uVar5 = 0x6174617641746567;
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  puStack_108 = (undefined *)0x0;
  puStack_110 = (undefined *)0x0;
  FUN_102a4f514(&puStack_120,0x112d387f8,&UNK_10d902650);
  if (((param_1 == (undefined *)0x6174617641746567) && (param_2 == -0x12ffff909991b68e)) ||
     (func_0x000107c605b8(0x6174617641746567,0xed00006f666e4972,param_1,param_2,0), (uVar5 & 1) != 0
     )) {
    lVar1 = 0x112d7e658;
    func_0x0001000285a8(0x112d7e658,&UNK_10db0fbd0);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = 0x6174617641736168;
    *(undefined8 *)(lVar1 + 0x28) = 0xe900000000000072;
    lVar2 = unaff_x20[5];
    func_0x000107c614f0(unaff_x20[4]);
    (**(code **)(lVar2 + 8))();
    if (lVar2 != 0) {
      func_0x000107c6142c(lVar2);
    }
    *(bool *)(lVar1 + 0x30) = lVar2 != 0;
    lVar2 = lVar1;
    func_0x0001003d8468();
    func_0x000107c61588(lVar1);
    FUN_102a4f514((undefined8 *)(lVar1 + 0x20),0x112d7e660,&UNK_10d93c760);
    uVar9 = 0x112e17d60;
    func_0x0001000285a8(0x112e17d60,&UNK_10dbc2660);
    uStack_68 = 0;
    uVar6 = unaff_x20[0x10];
    alStack_88[0] = lVar2;
    uStack_70 = uVar9;
    FUN_102a4f380(alStack_88,&uStack_e8);
    puVar4 = &UNK_11058c898;
    func_0x000107c613fc(&UNK_11058c898,0x41,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x28) = uStack_e0;
    *(undefined8 *)(puVar4 + 0x20) = uStack_e8;
    *(undefined8 *)(puVar4 + 0x38) = uStack_d0;
    *(undefined8 *)(puVar4 + 0x30) = uStack_d8;
    puVar4[0x40] = uStack_c8;
    uStack_100 = 0x102a4f3d0;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_118 = 0x42000000;
    puStack_110 = &UNK_1000f6b44;
    puStack_108 = &UNK_11058c8b0;
    puStack_f8 = puVar4;
    func_0x000107c60bc4(&puStack_120);
    puVar4 = puStack_f8;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar3);
    FUN_102a4f514(alStack_88,0x112ee4d20,&UNK_10db0ff90);
    return;
  }
  uVar5 = 0x6169726156746567;
  if (((param_1 == (undefined *)0x6169726156746567) && (param_2 == -0x14ffffffff8c8b92)) ||
     (func_0x000107c605b8(0x6169726156746567,0xeb0000000073746e,param_1,param_2,0), (uVar5 & 1) != 0
     )) {
    uVar7 = unaff_x20[0x10];
    uVar6 = unaff_x20[10];
    lVar1 = unaff_x20[0xb];
    func_0x000107c614f0(uVar6);
    puVar4 = &UNK_11058c870;
    func_0x000107c613fc(&UNK_11058c870,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    *(undefined8 *)(puVar4 + 0x28) = uVar9;
    pcVar8 = *(code **)(lVar1 + 8);
    func_0x000107c6157c(param_5);
    func_0x000107c615f0(uVar7);
    (*pcVar8)(FUN_102a4f374,puVar4,uVar6,lVar1);
    func_0x000107c61574(puVar4);
    return;
  }
  uVar5 = 0x6176414432746567;
  if (((param_1 == (undefined *)0x6176414432746567) && (param_2 == -0x14ffffffff8d9e8c)) ||
     (func_0x000107c605b8(0x6176414432746567,0xeb00000000726174,param_1,param_2,0), (uVar5 & 1) != 0
     )) {
    FUN_102a4d58c(param_3,param_4,param_5);
    return;
  }
  uVar5 = 0x6176414433746567;
  if (((param_1 == (undefined *)0x6176414433746567) && (param_2 == -0x14ffffffff8d9e8c)) ||
     (func_0x000107c605b8(0x6176414433746567,0xeb00000000726174,param_1,param_2,0), (uVar5 & 1) != 0
     )) {
    func_0x000102a4db88(param_4,param_5);
    return;
  }
  puStack_120 = (undefined *)0x0;
  lStack_118 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(lStack_118);
  puStack_120 = (undefined *)0xd000000000000018;
  lStack_118 = -0x7ffffffef0f1aef0;
  puVar4 = param_1;
  lVar1 = param_2;
LAB_102a4ef88:
  func_0x000107c5fb78(puVar4,lVar1);
  lVar1 = lStack_118;
  FUN_102a4ed80(2,param_4,param_5);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 102a4f374; end: 102a4f37f;  */

void FUN_102a4f374(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  ppuVar6 = &puStack_70;
  if (param_1 == 0) {
    puVar5 = &UNK_11058c8e8;
    func_0x000107c613fc(&UNK_11058c8e8,0x20,7,uVar2,*(undefined8 *)(unaff_x20 + 0x28));
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    uStack_50 = 0x102a4f69c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11058c900;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(uVar2);
  }
  else {
    puVar5 = &UNK_11058c938;
    func_0x000107c613fc(&UNK_11058c938,0x28,7,uVar2,*(undefined8 *)(unaff_x20 + 0x28));
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(long *)(puVar5 + 0x20) = param_1;
    uStack_50 = 0x102a4f414;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11058c950;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(uVar2);
    func_0x000107c61434(param_1);
    ppuVar6 = ppuVar4;
  }
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 102a4f380; end: 102a4f3f7;  */

undefined8 FUN_102a4f380(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee4d20;
  func_0x0001000285a8(0x112ee4d20,&UNK_10db0ff90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a4f3f8; end: 102a4f41f;  */

void FUN_102a4f3f8(long param_1,long param_2)

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



/* Entry: 102a4f420; end: 102a4f48b;  */

void FUN_102a4f420(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102a4df00(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102a4f48c; end: 102a4f493;  */

void FUN_102a4f48c(void)

{
  long unaff_x20;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  auStack_48[0] = 2;
  uStack_28 = 1;
  (**(code **)(unaff_x20 + 0x10))(auStack_48);
  FUN_102a4f514(auStack_48,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 102a4f494; end: 102a4f4e3;  */

void FUN_102a4f494(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  uStack_28 = 1;
  auStack_48[0] = param_1;
  (**(code **)(unaff_x20 + 0x10))(auStack_48);
  FUN_102a4f514(auStack_48,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 102a4f4e4; end: 102a4f4f7;  */

void FUN_102a4f4e4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  int iVar18;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  iVar18 = (int)param_1;
  iVar15 = (int)((ulong)param_1 >> 0x20);
  uVar8 = (uint)(param_2 >> 0x20);
  if (param_2 >> 0x3c < 0xf) {
    if (uVar8 >> 0x1e < 2) {
      if (uVar8 >> 0x1e == 0) {
        if ((param_2 & 0xff000000000000) != 0) goto code_r0x000102a4e0a8;
      }
      else {
        if ((long)iVar18 == param_1 >> 0x20) goto code_r0x000102a4e224;
code_r0x000102a4e064:
        func_0x000100de78a0(param_1,param_2);
        if (param_2 >> 0x3e == 2) {
          lVar16 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102a4e08c);
            (*pcVar9)();
          }
        }
        else {
          if (SBORROW4(iVar15,iVar18)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102a4e3ac);
            (*pcVar9)();
          }
          lVar16 = (long)(iVar15 - iVar18);
        }
        if (lVar16 < 0x400001) {
code_r0x000102a4e0a8:
          uVar11 = 0;
          func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
          func_0x000107c61538();
          func_0x000102a4e4b0();
          bVar10 = (uVar11 & 1) == 0;
          uVar1 = 0x6e702f6567616d69;
          if (bVar10) {
            uVar1 = 0x65772f6567616d69;
          }
          uVar17 = 0xe900000000000067;
          if (bVar10) {
            uVar17 = 0xea00000000007062;
          }
          uVar7 = 0x676e70;
          if (bVar10) {
            uVar7 = 0x70626577;
          }
          uVar2 = 0xe300000000000000;
          if (bVar10) {
            uVar2 = 0xe400000000000000;
          }
          func_0x000107c614f0(uVar12);
          lVar16 = param_1;
          uVar11 = param_2;
          (**(code **)(lVar5 + 8))(param_1,param_2,uVar1,uVar17,uVar7,uVar2,uVar12,lVar5);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uVar17);
          puVar13 = &UNK_11058caa0;
          func_0x000107c613fc(&UNK_11058caa0,0x30,7);
          *(undefined8 *)(puVar13 + 0x10) = uVar6;
          *(undefined8 *)(puVar13 + 0x18) = uVar4;
          *(long *)(puVar13 + 0x20) = lVar16;
          *(ulong *)(puVar13 + 0x28) = uVar11;
          pcStack_78 = FUN_102a4f4f8;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_11058cab8;
          ppuVar14 = &puStack_98;
          puStack_70 = puVar13;
          func_0x000107c60bc4(ppuVar14);
          puVar13 = puStack_70;
          func_0x000107c6157c(uVar4);
          func_0x000107c61574(puVar13);
          func_0x000107c4e524(uVar3);
          func_0x000107c60bd0(ppuVar14);
          func_0x0001000b44c0(param_1,param_2);
          return;
        }
      }
    }
    else if (uVar8 >> 0x1e == 2) {
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) goto code_r0x000102a4e064;
      goto code_r0x000102a4e224;
    }
    func_0x0001000b44c0(param_1,param_2);
  }
code_r0x000102a4e224:
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(uStack_90);
  puStack_98 = (undefined *)0xd00000000000001b;
  uStack_90 = 0x800000010f0e5160;
  if (param_2 >> 0x3c < 0xf) {
    if (uVar8 >> 0x1e < 2) {
      if (uVar8 >> 0x1e == 0) {
        uStack_68 = param_2 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar15,iVar18)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102a4e3a8);
          (*pcVar9)();
        }
        uStack_68 = (ulong)(iVar15 - iVar18);
      }
      goto code_r0x000102a4e268;
    }
    if (uVar8 >> 0x1e == 2) {
      uStack_68 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102a4e390);
        (*pcVar9)();
      }
      goto code_r0x000102a4e268;
    }
  }
  uStack_68 = 0;
code_r0x000102a4e268:
  puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar13);
  func_0x000107c5fb78(0x29736574796220,0xe700000000000000);
  func_0x000107c6142c(uStack_90);
  puVar13 = &UNK_11058ca50;
  func_0x000107c613fc(&UNK_11058ca50,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar6;
  *(undefined8 *)(puVar13 + 0x18) = uVar4;
  pcStack_78 = (code *)0x102a4f4f0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_11058ca68;
  ppuVar14 = &puStack_98;
  puStack_70 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar13 = puStack_70;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar13);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar14);
  return;
}



/* Entry: 102a4f4f8; end: 102a4f513;  */

void FUN_102a4f4f8(void)

{
  long unaff_x20;
  
  FUN_102a4e998(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102a4f514; end: 102a4f553;  */

undefined8 FUN_102a4f514(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102a4f554; end: 102a4f5cb;  */

void FUN_102a4f554(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ee4dd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ee4c(0xff);
  puVar2 = PTR___s10Foundation4DataV8IteratorVStAAMc_110350ac0;
  func_0x000107c61520(PTR___s10Foundation4DataV8IteratorVStAAMc_110350ac0,uVar1);
  puRam0000000112ee4dd8 = puVar2;
  return;
}



/* Entry: 102a4f5cc; end: 102a4f5eb;  */

void FUN_102a4f5cc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long unaff_x20;
  uint uVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (0xe < param_2 >> 0x3c) goto code_r0x000102a4e6a0;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar14 = uVar5 >> 0x1e;
  iVar7 = (int)param_1;
  if (uVar5 >> 0x1e < 2) {
    if (uVar14 != 0) {
      if ((long)iVar7 == param_1 >> 0x20) goto code_r0x000102a4e6a0;
      goto code_r0x000102a4e728;
    }
    if ((param_2 & 0xff000000000000) == 0) goto code_r0x000102a4e688;
  }
  else {
    if (uVar14 != 2) {
code_r0x000102a4e688:
      func_0x0001000b44c0();
code_r0x000102a4e6a0:
      puVar9 = &UNK_11058cb18;
      func_0x000107c613fc(&UNK_11058cb18,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      uStack_60 = 0x102a4f6a0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11058cb30;
      ppuVar10 = &puStack_80;
      puStack_58 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_58;
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(uVar1);
      func_0x000107c60bd0(ppuVar10);
      return;
    }
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto code_r0x000102a4e6a0;
code_r0x000102a4e728:
    func_0x000100de78a0();
    iVar12 = (int)((ulong)param_1 >> 0x20);
    if (param_2 >> 0x3e == 2) {
      lVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102a4e990);
        (*pcVar6)();
      }
    }
    else {
      if (SBORROW4(iVar12,iVar7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102a4e994);
        (*pcVar6)();
      }
      lVar13 = (long)(iVar12 - iVar7);
    }
    if (0x800000 < lVar13) {
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x27);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined *)0xd00000000000001e;
      uStack_78 = 0x800000010f0e5180;
      if (param_2 >> 0x3e == 2) {
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102a4e878);
          (*pcVar6)();
        }
      }
      else if (SBORROW4(iVar12,iVar7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102a4e998);
        (*pcVar6)();
      }
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x29736574796220,0xe700000000000000);
      func_0x000107c6142c(uStack_78);
      puVar9 = &UNK_11058cb68;
      func_0x000107c613fc(&UNK_11058cb68,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      uStack_60 = 0x102a4f6a4;
      puStack_68 = &UNK_11058cb80;
      puStack_58 = puVar9;
      goto code_r0x000102a4e92c;
    }
  }
  func_0x000107c614f0(uVar8);
  lVar13 = param_1;
  uVar11 = param_2;
  (**(code **)(lVar3 + 8))
            (param_1,param_2,0xd000000000000011,0x800000010f0e51a0,0x626c67,0xe300000000000000,uVar8
             ,lVar3);
  puVar9 = &UNK_11058cbb8;
  func_0x000107c613fc(&UNK_11058cbb8,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar4;
  *(undefined8 *)(puVar9 + 0x18) = uVar2;
  *(long *)(puVar9 + 0x20) = lVar13;
  *(ulong *)(puVar9 + 0x28) = uVar11;
  uStack_60 = 0x102a4f670;
  puStack_68 = &UNK_11058cbd0;
  puStack_58 = puVar9;
code_r0x000102a4e92c:
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  ppuVar10 = &puStack_80;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_58;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar10);
  func_0x0001000b44c0(param_1,param_2);
  return;
}



/* Entry: 102a4f5ec; end: 102a4f64b;  */

void FUN_102a4f5ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a4f64c; end: 102a4f6a7;  */

void FUN_102a4f64c(long param_1,long param_2)

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



/* Entry: 102a4f6a8; end: 102a4fbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a4f6a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  code *pcVar22;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  func_0x000107c613fc();
  uVar1 = *(ulong *)(param_6 + _DAT_113070400);
  uVar2 = ((ulong *)(param_6 + _DAT_113070400))[1];
  uVar4 = uVar1;
  func_0x000107c614f0();
  pcVar22 = *(code **)(uVar2 + 0x10);
  func_0x000107c615f0(uVar1);
  uVar5 = uVar4;
  (*pcVar22)(uVar4,uVar2);
  if (((uVar5 & 1) != 0) && ((**(code **)(uVar2 + 0x58))(uVar4,uVar2), (uVar4 & 1) != 0)) {
    lVar21 = *(long *)(param_6 + _DAT_113070418);
    if (lVar21 != 0) {
      lVar20 = ((long *)(param_6 + _DAT_113070418))[1];
      func_0x000107c615f0(lVar21);
      uVar6 = 0x19;
      uVar19 = 0;
      func_0x0001000819a8(0x19,0);
      func_0x000107c61180();
      uVar7 = param_5;
      func_0x000107c51d00();
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_2 + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170();
      FUN_102a4fbec();
      func_0x000107c613fc();
      func_0x000107c61174();
      FUN_102a50ec8(uVar7,uVar9,uVar19);
      lVar10 = param_4;
      func_0x000107c3e9cc();
      func_0x000107c61180();
      lVar11 = lVar10;
      FUN_102a50fbc();
      func_0x000107c613fc();
      lVar12 = 0x112ee4de0;
      func_0x0001000285a8(0x112ee4de0,&UNK_10db0ffb0);
      func_0x000107c613fc();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102a52ed0(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ee5280,&UNK_10db10248,0x112ee5268,
                    &UNK_10db10230);
      auStack_70[0] = 0;
      puStack_68 = puVar13;
      func_0x0001000285a8(0x112ee4de8,&UNK_10db0ffb8);
      func_0x000107c613fc();
      puVar14 = auStack_70;
      func_0x00010006c248();
      *(undefined1 **)(lVar12 + 0x10) = puVar14;
      *(undefined1 *)(lVar12 + 0x18) = 1;
      *(undefined8 *)(lVar12 + 0x20) = 0x102a51b90;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(long *)(lVar11 + 0x10) = lVar10;
      *(long *)(lVar11 + 0x18) = lVar12;
      lVar10 = *(long *)(param_6 + _DAT_113070408);
      lVar3 = ((long *)(param_6 + _DAT_113070408))[1];
      *(long *)(unaff_x20 + 0x10) = lVar10;
      *(long *)(unaff_x20 + 0x18) = lVar3;
      lVar12 = 0x112ee4df0;
      func_0x0001000285a8(0x112ee4df0,&UNK_10db0ffc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      lVar15 = 0;
      FUN_102a53048();
      func_0x000107c613fc();
      *(undefined8 *)(lVar15 + 0x10) = param_3;
      func_0x000107c615f0(lVar10);
      func_0x000107c61174();
      func_0x000107c6157c(uVar8);
      func_0x000107c6157c(lVar11);
      uVar7 = param_5;
      func_0x000107c51d38();
      func_0x000107c61180();
      lVar16 = 0;
      func_0x000102a53068();
      func_0x000107c613fc();
      *(undefined8 *)(lVar16 + 0x10) = uVar7;
      puVar13 = &UNK_11058ccb8;
      func_0x000107c613fc(&UNK_11058ccb8,0x20,7);
      *(ulong *)(puVar13 + 0x10) = uVar1;
      *(ulong *)(puVar13 + 0x18) = uVar2;
      lVar17 = 0;
      FUN_102a4ed60();
      func_0x000107c613fc();
      *(undefined8 *)(lVar17 + 0x10) = 0x696a6f6d746962;
      *(undefined8 *)(lVar17 + 0x18) = 0xe700000000000000;
      func_0x000107c615f0(uVar1);
      func_0x000107c615f0(lVar21);
      pcVar18 = "WebLensBitmojiCapabilityHandler";
      func_0x0001000c10c0();
      func_0x000107c61180();
      *(char **)(lVar17 + 0x80) = pcVar18;
      *(undefined1 *)(lVar17 + 0x88) = 0;
      *(long *)(lVar17 + 0x20) = lVar15;
      *(undefined ***)(lVar17 + 0x28) = &PTR_DAT_11058ce70;
      *(undefined8 *)(lVar17 + 0x30) = uVar8;
      *(undefined ***)(lVar17 + 0x38) = &PTR_DAT_11058ce60;
      *(long *)(lVar17 + 0x40) = lVar11;
      *(undefined ***)(lVar17 + 0x48) = &PTR_DAT_11058ce50;
      *(long *)(lVar17 + 0x50) = lVar16;
      *(undefined ***)(lVar17 + 0x58) = &PTR_DAT_11058ce40;
      *(long *)(lVar17 + 0x60) = lVar21;
      *(long *)(lVar17 + 0x68) = lVar20;
      *(code **)(lVar17 + 0x70) = FUN_102a53088;
      *(undefined **)(lVar17 + 0x78) = puVar13;
      *(long *)(lVar12 + 0x20) = lVar17;
      *(undefined ***)(lVar12 + 0x28) = &PTR_DAT_11058c838;
      *(long *)(unaff_x20 + 0x20) = lVar12;
      lVar12 = 0x112ee4df8;
      func_0x0001000285a8(0x112ee4df8,&UNK_10db0ffc8);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 2;
      *(undefined8 *)(lVar12 + 0x20) = uVar8;
      *(undefined ***)(lVar12 + 0x28) = &PTR_DAT_11058ce30;
      *(long *)(lVar12 + 0x30) = lVar11;
      *(undefined ***)(lVar12 + 0x38) = &PTR_DAT_11058ce20;
      *(long *)(unaff_x20 + 0x28) = lVar12;
      func_0x000107c6157c(uVar8);
      func_0x000107c6157c(lVar11);
      if (lVar10 != 0) {
        func_0x000107c614f0(lVar10);
        pcVar22 = *(code **)(lVar3 + 0x18);
        func_0x000107c615f0(lVar17);
        (*pcVar22)();
        func_0x000107c615e8(lVar17);
      }
      func_0x000107c61170(uVar6);
      func_0x000107c61170(param_3);
      func_0x000107c61574(uVar8);
      func_0x000107c61574(lVar11);
      func_0x000107c615e8(lVar21);
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      return unaff_x20;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar13;
  return unaff_x20;
}



/* Entry: 102a4fbec; end: 102a4fc0b;  */

void FUN_102a4fbec(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5010);
  return;
}



/* Entry: 102a4fc0c; end: 102a4fd1b;  */

void FUN_102a4fc0c(code *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_58;
  
  if (param_3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar4 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4fce0);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_3 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar5;
        FUN_102a52360(uVar5,param_3,&PTR_PTR_1126b0418,0x112e05948);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4fcdc);
        (*pcVar1)();
      }
      uVar3 = uVar5 + 1;
      uStack_58 = uVar2;
      (*param_1)(&uStack_58);
      func_0x000107c61170(uVar2);
    } while ((unaff_x21 == 0) && (uVar5 = uVar5 + 1, uVar3 != uVar4));
  }
  return;
}



/* Entry: 102a4fd1c; end: 102a4fe27;  */

void FUN_102a4fd1c(code *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long unaff_x21;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_58;
  
  if (param_3 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar3 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4fde8);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(param_3 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x0001028b4908(uVar4,param_3);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a4fde4);
        (*pcVar1)();
      }
      uVar2 = uVar4 + 1;
      uStack_58 = uVar5;
      (*param_1)(&uStack_58);
      func_0x000107c615e8(uVar5);
    } while ((unaff_x21 == 0) && (uVar4 = uVar4 + 1, uVar2 != uVar3));
  }
  return;
}



/* Entry: 102a4fe28; end: 102a4ff53;  */

undefined8 FUN_102a4fe28(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar7 = *(ulong *)(lVar5 + 0x10);
  if (uVar7 != 0) {
    uVar8 = 0;
    lVar1 = *(long *)(unaff_x20 + 0x10);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    lVar9 = lVar5 + 0x28;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a4ff50);
        (*pcVar4)();
      }
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar9 + -8);
        func_0x000107c614f0(lVar1);
        pcVar4 = *(code **)(lVar3 + 0x20);
        func_0x000107c615f0(uVar2);
        (*pcVar4)();
        func_0x000107c615e8(uVar2);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar7 != uVar8);
  }
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar7 = *(ulong *)(lVar5 + 0x10);
  if (uVar7 != 0) {
    uVar8 = 0;
    plVar6 = (long *)(lVar5 + 0x28);
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a4ff54);
        (*pcVar4)();
      }
      uVar8 = uVar8 + 1;
      lVar9 = plVar6[-1];
      lVar1 = *plVar6;
      lVar3 = lVar9;
      func_0x000107c614f0(lVar9);
      pcVar4 = *(code **)(lVar1 + 8);
      func_0x000107c615f0(lVar9);
      (*pcVar4)(lVar3,lVar1);
      func_0x000107c615e8(lVar9);
      plVar6 = plVar6 + 2;
    } while (uVar7 != uVar8);
  }
  return 0;
}



/* Entry: 102a4ff54; end: 102a4ff87;  */

void FUN_102a4ff54(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a4ff88; end: 102a4ff8b;  */

void FUN_102a4ff88(void)

{
  return;
}



/* Entry: 102a4ff8c; end: 102a4ffaf;  */

undefined8 FUN_102a4ff8c(void)

{
  FUN_102a4fe28();
  return 0;
}



/* Entry: 102a4ffb0; end: 102a50067;  */

undefined1  [16] FUN_102a4ffb0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3e550();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar2 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar2 = param_2 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_102a50058;
      func_0x000107c6142c(param_2);
    }
  }
  uVar3 = 0;
  param_2 = 0;
LAB_102a50058:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 102a50068; end: 102a5006b;  */

undefined1  [16] FUN_102a50068(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3e550();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar2 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar2 = param_2 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_102a50058;
      func_0x000107c6142c(param_2);
    }
  }
  uVar3 = 0;
  param_2 = 0;
LAB_102a50058:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 102a5006c; end: 102a50093;  */

void FUN_102a5006c(void)

{
  long unaff_x20;
  
  FUN_102a50094();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102a50094; end: 102a5014b;  */

void FUN_102a50094(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = unaff_x20[2];
  uStack_50 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0;
  func_0x000107c5fc80(0);
  func_0x000107c6157c(lVar4);
  func_0x000100075034(&uStack_48,FUN_102a5359c,auStack_60,uVar2);
  func_0x000107c61574(lVar4);
  auStack_60[0] = uStack_48;
  lVar4 = unaff_x20[4];
  lVar1 = unaff_x20[5];
  puVar3 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar2);
  func_0x000107c5fc14(lVar4,lVar1,uVar2,puVar3);
  func_0x000107c6142c(uStack_48);
  return;
}



/* Entry: 102a5014c; end: 102a5016b;  */

void FUN_102a5014c(void)

{
  FUN_102a5006c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a5016c; end: 102a5020b;  */

void FUN_102a5016c(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61558(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_102a5251c(0,param_2,uVar1,param_3,param_4,param_5,param_6);
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  return;
}



/* Entry: 102a5020c; end: 102a50393;  */

ulong FUN_102a5020c(byte *param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((*param_1 & 1) != 0) {
    func_0x000107c615f0(param_2);
    return param_2;
  }
  param_1 = param_1 + 8;
  lVar4 = *(long *)param_1;
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar2 = param_2;
    func_0x000107c61434(lVar4);
    lVar5 = param_3;
    func_0x0001000c8928();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + lVar5 * 8);
      func_0x000102a53384(lVar5);
      func_0x000107c6142c(lVar4);
      if (lVar5 == 0) {
        if (param_2 == 0) {
          FUN_102a50510(param_3,0x112ee5258,&UNK_10db10220,0x102a53384);
          func_0x000102a53364();
          return 0;
        }
        func_0x000107c615f0(param_2);
        uVar1 = *(undefined8 *)param_1;
        func_0x000107c61558(uVar1);
        uVar3 = *(undefined8 *)param_1;
        FUN_102a5251c(param_2,param_3,uVar1,0x112ee5258,&UNK_10db10220,0x102a53384,0x102a53374);
        *(undefined8 *)param_1 = uVar3;
        return 0;
      }
      if (lVar5 != 1) {
        func_0x000102a53374(lVar5);
        return 0;
      }
    }
  }
  FUN_102a50510(param_3,0x112ee5258,&UNK_10db10220,0x102a53384);
  func_0x000102a53364();
  if (*(char *)(param_4 + 0x18) != '\x01') {
    return 0;
  }
  func_0x000107c615f0(param_2);
  return param_2;
}



/* Entry: 102a50394; end: 102a5050f;  */

ulong FUN_102a50394(byte *param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 8;
    lVar4 = *(long *)param_1;
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_102a50420:
      FUN_102a50510(param_3,0x112ee5268,&UNK_10db10230,0x102a534e0);
      func_0x000102a534c0();
      if (*(char *)(param_4 + 0x18) == '\x01') goto LAB_102a50454;
    }
    else {
      uVar2 = param_2;
      func_0x000107c61434(lVar4);
      lVar5 = param_3;
      func_0x0001000c8928();
      if ((uVar2 & 1) == 0) {
        func_0x000107c6142c(lVar4);
        goto LAB_102a50420;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + lVar5 * 8);
      func_0x000102a534e0(lVar5);
      func_0x000107c6142c(lVar4);
      if (lVar5 == 0) {
        if (param_2 != 0) {
          func_0x000107c61174(param_2);
          uVar1 = *(undefined8 *)param_1;
          func_0x000107c61558(uVar1);
          uVar3 = *(undefined8 *)param_1;
          FUN_102a5251c(param_2,param_3,uVar1,0x112ee5268,&UNK_10db10230,0x102a534e0,0x102a534d0);
          *(undefined8 *)param_1 = uVar3;
          return 0;
        }
        FUN_102a50510(param_3,0x112ee5268,&UNK_10db10230,0x102a534e0);
        func_0x000102a534c0();
        return 0;
      }
      if (lVar5 == 1) goto LAB_102a50420;
      func_0x000102a534d0(lVar5);
    }
    param_2 = 0;
  }
  else {
LAB_102a50454:
    func_0x000107c61174(param_2);
  }
  return param_2;
}



/* Entry: 102a50510; end: 102a505ff;  */

undefined8 FUN_102a50510(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar3 = param_2;
  func_0x000107c61434(lVar6);
  func_0x0001000c8928();
  func_0x000107c6142c(lVar6);
  if ((uVar3 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar6 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102a526b0(param_2,param_3,param_4);
    }
    lVar4 = *(long *)(lVar6 + 0x30);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))
              (lVar4 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,lVar2);
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + param_1 * 8);
    func_0x000102a52c28(param_1,lVar6);
    *unaff_x20 = lVar6;
  }
  return uVar5;
}



/* Entry: 102a50600; end: 102a50737;  */

long FUN_102a50600(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 8);
  lVar4 = *plVar3;
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar2 = param_2;
    func_0x000107c61434(lVar4);
    uVar1 = param_2;
    func_0x0001000c8928();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + uVar1 * 8);
      func_0x000102a53384(lVar5);
      func_0x000107c6142c(lVar4);
      if (lVar5 == 0) {
        lVar4 = *plVar3;
        func_0x000107c61558(lVar4);
        lVar5 = *plVar3;
        FUN_102a5251c(1,param_2,lVar4,0x112ee5258,&UNK_10db10220,0x102a53384,0x102a53374);
        *plVar3 = lVar5;
      }
      else if (lVar5 != 1) {
        FUN_102a50510(param_2,0x112ee5258,&UNK_10db10220,0x102a53384);
        func_0x000102a53364();
        if ((*(byte *)(param_3 + 0x18) & 1) != 0) {
          return lVar5;
        }
        func_0x000102a53374(lVar5);
      }
    }
  }
  return 0;
}



/* Entry: 102a50738; end: 102a5086f;  */

long FUN_102a50738(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 8);
  lVar4 = *plVar3;
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar2 = param_2;
    func_0x000107c61434(lVar4);
    uVar1 = param_2;
    func_0x0001000c8928();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + uVar1 * 8);
      func_0x000102a534e0(lVar5);
      func_0x000107c6142c(lVar4);
      if (lVar5 == 0) {
        lVar4 = *plVar3;
        func_0x000107c61558(lVar4);
        lVar5 = *plVar3;
        FUN_102a5251c(1,param_2,lVar4,0x112ee5268,&UNK_10db10230,0x102a534e0,0x102a534d0);
        *plVar3 = lVar5;
      }
      else if (lVar5 != 1) {
        FUN_102a50510(param_2,0x112ee5268,&UNK_10db10230,0x102a534e0);
        func_0x000102a534c0();
        if ((*(byte *)(param_3 + 0x18) & 1) != 0) {
          return lVar5;
        }
        func_0x000102a534d0(lVar5);
      }
    }
  }
  return 0;
}



/* Entry: 102a50870; end: 102a50a5b;  */

undefined * FUN_102a50870(undefined1 *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  *param_1 = 1;
  lVar10 = *(long *)(param_1 + 8);
  puVar11 = (ulong *)(lVar10 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar9 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar9 = uVar9 & *puVar11;
  func_0x000107c61438(lVar10,2);
  lVar12 = 0;
  lVar2 = lVar12;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar9 != 0) {
      uVar13 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x38) + LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) * 8 +
                         lVar12 * 0x200);
      lVar2 = lVar12;
      if (1 < uVar13) {
        func_0x000102a534e0(uVar13);
        puVar6 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
           (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar5 = puVar7;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          func_0x000101b6a038(0,puVar5 + 1,1,puVar7);
        }
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          func_0x000101b6a038(puVar7,uVar1 + 1,1,puVar6);
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(ulong *)(uVar8 + uVar1 * 8 + 0x20) = uVar13;
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar14 >> 6) <= lVar12) {
      func_0x000107c6142c(lVar10);
      func_0x000102a53594(lVar10,puVar11,~uVar14,lVar2,0);
      func_0x000107c6142c(lVar10);
      *(undefined **)(param_1 + 8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      return puVar7;
    }
    uVar9 = puVar11[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a50a5c);
  (*pcVar3)();
}



/* Entry: 102a50a5c; end: 102a50c47;  */

undefined * FUN_102a50a5c(undefined1 *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  *param_1 = 1;
  lVar10 = *(long *)(param_1 + 8);
  puVar11 = (ulong *)(lVar10 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar9 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar9 = uVar9 & *puVar11;
  func_0x000107c61438(lVar10,2);
  lVar12 = 0;
  lVar2 = lVar12;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar9 != 0) {
      uVar13 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x38) + LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) * 8 +
                         lVar12 * 0x200);
      lVar2 = lVar12;
      if (1 < uVar13) {
        func_0x000102a53384(uVar13);
        puVar6 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
           (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar5 = puVar7;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          FUN_1028b464c(0,puVar5 + 1,1,puVar7);
        }
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1028b464c(puVar7,uVar1 + 1,1,puVar6);
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(ulong *)(uVar8 + uVar1 * 8 + 0x20) = uVar13;
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar14 >> 6) <= lVar12) {
      func_0x000107c6142c(lVar10);
      func_0x000102a53594(lVar10,puVar11,~uVar14,lVar2,0);
      func_0x000107c6142c(lVar10);
      *(undefined **)(param_1 + 8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      return puVar7;
    }
    uVar9 = puVar11[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a50c48);
  (*pcVar3)();
}



/* Entry: 102a50c48; end: 102a50d8f;  */

void FUN_102a50c48(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  *param_2 = 1;
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar1 = 0;
  func_0x000107c5eec8(0);
  puVar5 = PTR___s10Foundation4UUIDVMa_110350c38;
  uVar2 = 0;
  FUN_102a535b4(0,param_3);
  uVar3 = 0x112d6c668;
  FUN_102a53394(0x112d6c668,puVar5,PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  func_0x000107c5fa14(uVar7,uVar1,uVar2,uVar3);
  uVar4 = 0;
  uStack_70 = param_3;
  func_0x000107c5fa0c(0,uVar1,uVar2,uVar3);
  puVar5 = PTR___sSD6ValuesVyxq__GSTsMc_11034d700;
  func_0x000107c61520(PTR___sSD6ValuesVyxq__GSTsMc_11034d700,uVar4);
  pcVar6 = FUN_102a535c0;
  func_0x000107c5fbf0(FUN_102a535c0,auStack_80,uVar4,param_3,puVar5);
  func_0x000107c6142c(uVar7);
  uVar7 = 0;
  func_0x000107c5fa34(0,uVar1,uVar2,uVar3);
  func_0x000107c5fa30(0,uVar7);
  *param_1 = pcVar6;
  return;
}



/* Entry: 102a50d90; end: 102a50ebf;  */

void FUN_102a50d90(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_102a535b4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar7 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar5,param_2,lVar2);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,2,param_3);
  bVar1 = (int)puVar3 == 0;
  if (bVar1) {
    pcVar4 = *(code **)(lVar7 + 0x20);
    (*pcVar4)(lVar6,puVar5,param_3);
    (*pcVar4)(param_1,lVar6,param_3);
  }
  else {
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
  }
  (**(code **)(lVar7 + 0x38))(param_1,!bVar1,1,param_3);
  return;
}



/* Entry: 102a50ec0; end: 102a50ec7;  */

void FUN_102a50ec0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_1,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 102a50ec8; end: 102a50fbb;  */

void FUN_102a50ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  
  puVar3 = auStack_60;
  lVar1 = 0x112ee5288;
  func_0x0001000285a8(0x112ee5288,&UNK_10db10250);
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102a52ed0(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ee5298,&UNK_10db10260,0x112ee5258,
                &UNK_10db10220);
  auStack_60[0] = 0;
  puStack_58 = puVar2;
  func_0x0001000285a8(0x112ee5290,&UNK_10db10258);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined1 **)(lVar1 + 0x10) = puVar3;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(code **)(lVar1 + 0x20) = FUN_102a50ec0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102a50fbc; end: 102a50fdb;  */

void FUN_102a50fbc(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5168);
  return;
}



/* Entry: 102a50fdc; end: 102a51503;  */

void FUN_102a50fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *apuStack_b8 [2];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_5;
  puStack_e0 = (undefined *)param_1;
  uStack_d8 = param_2;
  func_0x000107c5f7fc();
  lStack_f8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  puVar16 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar12 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_c8 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lStack_c8 + 0x40);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar12 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar17 - extraout_x12;
  puVar4 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_d0 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &UNK_11058ce90;
    func_0x000107c613fc(&UNK_11058ce90,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_7;
    pcStack_80 = FUN_102a5324c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuStack_90 = (undefined **)&UNK_1000b0c7c;
    puStack_88 = &UNK_11058cea8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_7);
    func_0x000107c5f808(lVar12);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar10 = 0x112d4af88;
    FUN_102a53394(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar11 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar11;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar16,&puStack_a8,uVar11,uVar8,lVar2,uVar10);
    func_0x000107c5ffe8(0,lVar12,puVar16,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    (**(code **)(lStack_f8 + 8))(puVar16,lVar2);
    (**(code **)(lStack_108 + 8))(lVar12,lStack_100);
    func_0x000107c61574(puStack_78);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    lStack_100 = param_6;
    lStack_f8 = param_7;
    func_0x000107c5fadc(uVar10,*(undefined8 *)(unaff_x20 + 0x20));
    puVar4 = puStack_e0;
    func_0x000107c5fadc(puStack_e0,uStack_d8);
    uVar11 = 0;
    if (param_4 != 0) {
      uVar11 = uStack_f0;
      func_0x000107c5fadc(uStack_f0,param_4);
    }
    puVar5 = PTR_PTR_1126b4bc0;
    func_0x000107c610f8();
    *(undefined1 *)(lVar3 + -0x10) = 1;
    func_0x000107c491d0();
    puStack_e0 = puVar5;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar11);
    lVar18 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5eec4(lVar3);
    uVar10 = *(undefined8 *)(lVar18 + 0x10);
    ppuStack_90 = (undefined **)lVar3;
    func_0x000107c6157c(uVar10);
    func_0x000100075034(FUN_102a53290,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    uStack_d8 = 0;
    func_0x000107c61574(uVar10);
    puVar4 = &UNK_11058cee0;
    func_0x000107c613fc(&UNK_11058cee0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar18);
    lVar12 = lStack_c0;
    lVar2 = lStack_c8;
    (**(code **)(lStack_c8 + 0x10))(lVar17,lVar3,lStack_c0);
    uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
    uVar13 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_11058cf08;
    func_0x000107c613fc(&UNK_11058cf08,uVar15 + 0x10,uVar9 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    (**(code **)(lVar2 + 0x20))(puVar5 + uVar13,lVar17,lVar12);
    puVar4 = puStack_e0;
    lVar2 = lStack_f8;
    *(long *)(puVar5 + uVar15) = lStack_100;
    *(long *)((long)(puVar5 + uVar15) + 8) = lStack_f8;
    pcStack_80 = FUN_102a532c8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuStack_90 = (undefined **)FUN_102880cb8;
    puStack_88 = &UNK_11058cf20;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_78;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar5);
    puVar5 = puStack_d0;
    puVar6 = puStack_d0;
    func_0x000107c43070();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    uVar11 = *(undefined8 *)(lVar18 + 0x10);
    ppuStack_90 = &puStack_a8;
    puStack_a8 = puVar6;
    puStack_88 = (undefined *)lVar3;
    pcStack_80 = (code *)lVar18;
    func_0x000107c6157c(uVar11);
    uVar10 = 0x112ee5250;
    func_0x0001000285a8(0x112ee5250,&UNK_10db10218);
    func_0x000100075034(apuStack_b8,FUN_102a53348,&puStack_a0,uVar10);
    func_0x000107c61574(uVar11);
    if (apuStack_b8[0] == (undefined *)0x0) {
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar6);
    }
    else {
      pcVar1 = *(code **)(lVar18 + 0x20);
      puStack_a0 = apuStack_b8[0];
      func_0x000107c615f0(apuStack_b8[0]);
      (*pcVar1)(&puStack_a0);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar6);
      func_0x000107c615ec(apuStack_b8[0],2);
    }
    (**(code **)(lStack_c8 + 8))(lVar3,lStack_c0);
  }
  return;
}



/* Entry: 102a51504; end: 102a51613;  */

void FUN_102a51504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    uStack_80 = param_6;
    lStack_78 = param_5;
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112ee5250;
    func_0x0001000285a8(0x112ee5250,&UNK_10db10218);
    func_0x000100075034(&lStack_70,FUN_102a533d4,alStack_90,uVar2);
    func_0x000107c61574(uVar3);
    if (lStack_70 == 0) {
      func_0x000107c61574(param_5);
    }
    else {
      pcVar1 = *(code **)(param_5 + 0x20);
      alStack_90[0] = lStack_70;
      func_0x000107c615f0(lStack_70);
      (*pcVar1)(alStack_90);
      func_0x000107c61574(param_5);
      func_0x000107c615ec(lStack_70,2);
    }
  }
  (*param_7)(param_1,param_2);
  return;
}


