/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10299ebac; end: 10299ec0f;  */

long FUN_10299ebac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10299ec18();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 10299ec10; end: 10299ec17;  */

long FUN_10299ec10(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10299ec18();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 10299ec18; end: 10299ecc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10299ec18(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed2790) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f0d2de0);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return lVar3;
}



/* Entry: 10299ecc8; end: 10299ece7;  */

void FUN_10299ecc8(void)

{
  func_0x000107c61168(&PTR_PTR_112877280);
  return;
}



/* Entry: 10299ece8; end: 10299ed2b;  */

undefined8 FUN_10299ece8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4e26c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10299ed2c; end: 10299ed33;  */

undefined8 FUN_10299ed2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e26c(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 10299ed34; end: 10299ed77;  */

undefined8 FUN_10299ed34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4c3ac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10299ed78; end: 10299ed87;  */

undefined8 FUN_10299ed78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c3ac(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 10299ed88; end: 10299edab;  */

void FUN_10299ed88(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10299edac; end: 10299edb3;  */

undefined8 FUN_10299edac(void)

{
  return 0;
}



/* Entry: 10299edb4; end: 10299edeb;  */

void FUN_10299edb4(long param_1)

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



/* Entry: 10299edec; end: 10299ef27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299edec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + _DAT_112ed26f0);
    if (lVar5 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      lVar1 = lVar5;
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar1 != 0) {
        func_0x000107c61174();
        lVar2 = lVar1;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar5 = lVar1;
        while (lVar2 != 0) {
          func_0x000107c61170(lVar5);
          lVar3 = lVar2;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar5 = lVar2;
          lVar2 = lVar3;
        }
        func_0x000107c61170(lVar1);
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c61174(lVar5);
        func_0x000107c3e108(puVar4);
        func_0x000107c4f018(lVar5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar5);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10299ef28; end: 10299ef2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ef28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112ed26f0);
    if (lVar6 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      lVar2 = lVar6;
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar2 != 0) {
        func_0x000107c61174();
        lVar3 = lVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar6 = lVar2;
        while (lVar3 != 0) {
          func_0x000107c61170(lVar6);
          lVar4 = lVar3;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar6 = lVar3;
          lVar3 = lVar4;
        }
        func_0x000107c61170(lVar2);
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c61174(lVar6);
        func_0x000107c3e108(puVar5);
        func_0x000107c4f018(lVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar6);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10299ef30; end: 10299f0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ef30(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar7 = *(long *)(param_3 + _DAT_112ed26f0);
    if (lVar7 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      lVar2 = lVar7;
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar2 != 0) {
        func_0x000107c61174();
        lVar3 = lVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar7 = lVar2;
        while (lVar3 != 0) {
          func_0x000107c61170(lVar7);
          lVar4 = lVar3;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar7 = lVar3;
          lVar3 = lVar4;
        }
        func_0x000107c61170(lVar2);
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c61174(lVar7);
        func_0x000107c3e108(puVar5);
        ppuVar6 = (undefined **)0x0;
        if (param_1 != 0) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0x42000000;
          puStack_78 = &UNK_1000f6b44;
          puStack_70 = &UNK_110578cd8;
          ppuVar6 = &puStack_88;
          lStack_68 = param_1;
          uStack_60 = param_2;
          func_0x000107c60bc4(ppuVar6);
          uVar1 = uStack_60;
          func_0x000107c6157c(param_2);
          func_0x000107c61574(uVar1);
        }
        func_0x000107c420a8(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(param_3);
        param_3 = lVar7;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10299f0dc; end: 10299f0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f0dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar2 + _DAT_112ed26f0);
    if (lVar8 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      lVar3 = lVar8;
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar3 != 0) {
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar8 = lVar3;
        while (lVar4 != 0) {
          func_0x000107c61170(lVar8);
          lVar5 = lVar4;
          func_0x000107c4f078();
          func_0x000107c61180();
          lVar8 = lVar4;
          lVar4 = lVar5;
        }
        func_0x000107c61170(lVar3);
        puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c61174(lVar8);
        func_0x000107c3e108(puVar6);
        ppuVar7 = (undefined **)0x0;
        if (param_1 != 0) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0x42000000;
          puStack_78 = &UNK_1000f6b44;
          puStack_70 = &UNK_110578cd8;
          ppuVar7 = &puStack_88;
          lStack_68 = param_1;
          uStack_60 = param_2;
          func_0x000107c60bc4(ppuVar7);
          uVar1 = uStack_60;
          func_0x000107c6157c(param_2);
          func_0x000107c61574(uVar1);
        }
        func_0x000107c420a8(lVar8);
        func_0x000107c61170(lVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar2);
        lVar2 = lVar8;
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10299f0e4; end: 10299f23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f0e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed2708);
  puVar2 = &UNK_110578c98;
  func_0x000107c613fc(&UNK_110578c98,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar5;
  lVar4 = _DAT_112ed2948;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ed26e8);
  if (lVar6 == 0) {
    func_0x000107c61428(lVar5 + _DAT_112ed2948,&puStack_70,0,0);
    lVar4 = lVar5 + lVar4;
    func_0x000107c61618();
    func_0x000107c61174(lVar5);
    if (lVar4 != 0) {
      func_0x000107c42044(lVar4);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61574(puVar2);
  }
  else {
    pcStack_50 = FUN_10299ff4c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110578cb0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174(lVar5);
    func_0x000107c61174(lVar6);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c420a8(lVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10299f23c; end: 10299f29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f23c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2948;
  func_0x000107c61428(param_1 + _DAT_112ed2948,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42044();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10299f2a0; end: 10299f2c7; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint dismissFamilyCenter] */

void FUN_10299f2a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10299f0e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10299f2c8; end: 10299f497;  */

/* WARNING: Possible PIC construction at 0x00010299f35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299f388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299f3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299f434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299f458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299f438) */
/* WARNING: Removing unreachable block (ram,0x00010299f3b8) */
/* WARNING: Removing unreachable block (ram,0x00010299f38c) */
/* WARNING: Removing unreachable block (ram,0x00010299f360) */
/* WARNING: Removing unreachable block (ram,0x00010299f45c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed26f8);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b4a08;
    func_0x000107c610f8(PTR_PTR_1126b4a08);
    func_0x000107c615f0(lVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c49270(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10299f498; end: 10299f72f; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint reportUserWithId:username:displayName:] */

/* WARNING: Possible PIC construction at 0x00010299f524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299f528) */

void FUN_10299f498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_10299f2c8(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10299f730; end: 10299f79f;  */

void FUN_10299f730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10299f7a0,uVar1,uVar2);
  return;
}



/* Entry: 10299f7a0; end: 10299f8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f7a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112ed27d0);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c61174(uVar6);
    func_0x000107c61174();
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000104517200(lVar4,uVar5,puVar2,uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112ed27c8));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010299f8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10299f8b8; end: 10299f8f3;  */

void FUN_10299f8b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010299f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10299f8f4; end: 10299f94b; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint openFamilyMapWithChildren:] */

void FUN_10299f8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  func_0x00010299f54c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10299f94c; end: 10299f9cf; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint reportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x00010299f988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299f9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299f98c) */
/* WARNING: Removing unreachable block (ram,0x00010299f9a8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f94c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10299f9d0; end: 10299fa8f; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint mapScopeDidEnd:] */

/* WARNING: Possible PIC construction at 0x00010299fa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299fa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299fa78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299fa58) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010299fa3c) */
/* WARNING: Removing unreachable block (ram,0x00010299fa7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299f9d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_1130831a0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c41864(uVar1,param_2,0);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10299fa90; end: 10299fabb; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint init] */

void FUN_10299fa90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterSwiftEntryPoint",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299fabc);
  (*pcVar1)();
}



/* Entry: 10299fabc; end: 10299fabf;  */

void FUN_10299fabc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299fac0; end: 10299fcd7; -[_TtC26FamilyCenterImplementation27FamilyCenterSwiftEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010299fc9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299fca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299fac0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2708));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2710));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2718));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2720));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2728));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2730));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2738));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2740));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2750));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2760));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2770));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2778));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2780));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2788));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2790));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2798));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed27d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed26e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed26f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed26f8));
  return;
}



/* Entry: 10299fcd8; end: 10299fcdf;  */

undefined8 FUN_10299fcd8(void)

{
  return 0;
}



/* Entry: 10299fce0; end: 10299fce7; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_10299fce0(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 10299fce8; end: 10299fcef; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_10299fce8(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 10299fcf0; end: 10299fcf3; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10299fcf0(void)

{
  return;
}



/* Entry: 10299fcf4; end: 10299fcfb; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_10299fcf4(void)

{
  undefined8 in_x3;
  
  return in_x3;
}



/* Entry: 10299fcfc; end: 10299fd03; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10299fcfc(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(in_x3);
  return;
}



/* Entry: 10299fd04; end: 10299fd47; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10299fd04(void)

{
  undefined *puVar1;
  undefined *in_x3;
  
  puVar1 = in_x3;
  if (in_x3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126af7d0;
    func_0x000107c610f8(PTR_PTR_1126af7d0);
    func_0x000107c453e4();
  }
  func_0x000107c61174(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10299fd48; end: 10299fda3; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_10299fd48(void)

{
  undefined *puVar1;
  undefined *in_x3;
  undefined *puVar2;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (in_x3 != (undefined *)0x0) {
    func_0x000107c5fc54(in_x3,PTR___sSSN_11034da80);
    puVar2 = in_x3;
  }
  puVar1 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10299fda4; end: 10299fdab; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10299fda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10299fdac; end: 10299fde7; -[_TtC26FamilyCenterImplementationP33_D338AB4F7061DC5386E995BEE9D00FE230FamilyCenterNoOpConfigProvider init] */

void FUN_10299fdac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299fde8; end: 10299fe3b;  */

void FUN_10299fde8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299fe3c; end: 10299fe9f;  */

void FUN_10299fe3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10299fea0;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = lVar4;
  plVar5[6] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10299f7a0,lVar3,lVar4);
  return;
}



/* Entry: 10299fea0; end: 10299fedb;  */

void FUN_10299fea0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010299fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10299fedc; end: 10299ff4b;  */

void FUN_10299fedc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10299ffac;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10299ff4c; end: 10299ffc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ff4c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2948;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112ed2948,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c42044();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10299ffc4; end: 1029a0057; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299ffc4(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112ed2828,0);
  func_0x000107c61614(param_1 + _DAT_112ed28b8,0);
  *(undefined8 *)(param_1 + _DAT_112ed2910) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FamilyCenterImplementation/FamilyCenterViewController.swift",0x3b,2,0x90,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a0058);
  (*pcVar1)();
}



/* Entry: 1029a0058; end: 1029a00cf; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a0058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c5bb50(*(undefined8 *)(param_1 + _DAT_112ed28f8));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029a00d0; end: 1029a0baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a00d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  long lVar37;
  undefined *puVar38;
  long lVar39;
  long unaff_x20;
  long lVar40;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed2838);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ed2840);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) goto LAB_1029a0370;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed2868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ed2870);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112ed2878);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_112ed2850);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c615e8(lVar4);
          lVar4 = lVar6;
        }
        else {
          lVar8 = *(long *)(unaff_x20 + _DAT_112ed2858);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar6);
            func_0x000107c615e8(lVar7);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar2);
            return (undefined *)0x0;
          }
          lVar9 = *(long *)(unaff_x20 + _DAT_112ed2898);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar9 == 0) {
            func_0x000107c615e8(lVar4);
LAB_1029a034c:
            func_0x000107c615e8(lVar6);
          }
          else {
            lVar10 = *(long *)(unaff_x20 + _DAT_112ed28a0);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar10 == 0) {
              func_0x000107c615e8(lVar4);
LAB_1029a0344:
              func_0x000107c615e8(lVar6);
              lVar6 = lVar9;
              goto LAB_1029a034c;
            }
            lVar11 = *(long *)(unaff_x20 + _DAT_112ed28a8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar11 == 0) {
              func_0x000107c615e8(lVar4);
LAB_1029a033c:
              func_0x000107c615e8(lVar6);
              lVar6 = lVar10;
              goto LAB_1029a0344;
            }
            lVar12 = unaff_x20 + _DAT_112ed2828;
            func_0x000107c61618();
            if (lVar12 == 0) {
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar6);
              lVar6 = lVar11;
              goto LAB_1029a033c;
            }
            puVar13 = PTR_PTR_1126abbc0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            lVar14 = *(long *)(unaff_x20 + _DAT_112ed28b0);
            func_0x000100c6f294();
            func_0x000107c61180();
            if (lVar14 == 0) {
              lVar40 = 0;
              param_2 = 0xe000000000000000;
            }
            else {
              lVar40 = lVar14;
              func_0x000107c5faec();
              func_0x000107c61170(lVar14);
            }
            func_0x000107c5fadc(lVar40,param_2);
            func_0x000107c6142c(param_2);
            func_0x000107c59558(puVar13);
            func_0x000107c61170(lVar40);
            lVar14 = *(long *)(unaff_x20 + _DAT_112ed2890);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar14 == 0) {
LAB_1029a0424:
              lVar40 = 0;
            }
            else {
              lVar40 = lVar14;
              func_0x000107c42504();
              func_0x000107c61180();
              func_0x000107c615e8(lVar14);
              if (lVar40 == 0) goto LAB_1029a0424;
            }
            func_0x000107c56628(puVar13);
            func_0x000107c61170(lVar40);
            if (((undefined8 *)(unaff_x20 + _DAT_112ed28c0))[1] == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ed28c0);
              func_0x000107c5fadc(uVar15);
            }
            func_0x000107c54a28(puVar13);
            func_0x000107c61170(uVar15);
            if ((ulong)((undefined8 *)(unaff_x20 + _DAT_112ed28c8))[1] >> 0x3c < 0xf) {
              uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ed28c8);
              func_0x000107c5ee20(uVar15);
            }
            else {
              uVar15 = 0;
            }
            func_0x000107c54a2c(puVar13);
            func_0x000107c61170(uVar15);
            pcVar1 = *(code **)(unaff_x20 + _DAT_112ed2848);
            puVar16 = PTR_PTR_1126b0c98;
            func_0x000107c610f8();
            func_0x000107c47f1c();
            puVar17 = puVar16;
            (*pcVar1)();
            func_0x000107c61170(puVar16);
            puVar16 = puVar17;
            func_0x000107c5c734();
            func_0x000107c61180();
            if (puVar16 != (undefined *)0x0) {
              puVar18 = PTR_PTR_1126abbc8;
              func_0x000107c610f8();
              func_0x000107c453e4();
              func_0x000106b80008();
              func_0x000107c5417c(puVar18);
              lVar39 = *(long *)(unaff_x20 + _DAT_112ed2830);
              lVar14 = lVar12;
              func_0x000107c40978();
              func_0x000107c61180();
              lVar40 = lVar4;
              func_0x000107c4c1e4();
              func_0x000107c61180();
              lVar19 = lVar6;
              func_0x000107c4c1dc();
              func_0x000107c61180();
              puVar27 = &UNK_110578d18;
              puVar20 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar20 + 0x10);
              puVar21 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar21 + 0x10);
              puVar22 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar22 + 0x10);
              puVar23 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar23 + 0x10);
              puVar24 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar24 + 0x10);
              puVar25 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar25 + 0x10);
              puVar26 = puVar27;
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar26 + 0x10);
              func_0x000107c613fc(&UNK_110578d18,0x18,7);
              func_0x000107c61614(puVar27 + 0x10);
              puVar28 = PTR_PTR_1126abbd0;
              func_0x000107c610f8();
              puVar38 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_88 = 0x1029a27c8;
              puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a0 = 0x42000000;
              pcStack_98 = FUN_1029a2808;
              puStack_90 = &UNK_110578d30;
              ppuVar29 = &puStack_a8;
              puStack_80 = puVar20;
              func_0x000107c60bc4();
              uStack_b8 = 0x1029a27d0;
              puStack_d8 = puVar38;
              uStack_d0 = 0x42000000;
              puStack_c8 = &UNK_1000f6b44;
              puStack_c0 = &UNK_110578d58;
              ppuVar30 = &puStack_d8;
              puStack_b0 = puVar21;
              func_0x000107c60bc4();
              uStack_e8 = 0x1029a27d8;
              puStack_108 = puVar38;
              uStack_100 = 0x42000000;
              puStack_f8 = &UNK_100c75f50;
              puStack_f0 = &UNK_110578d80;
              ppuVar31 = &puStack_108;
              puStack_e0 = puVar22;
              func_0x000107c60bc4();
              uStack_118 = 0x1029a27e0;
              puStack_138 = puVar38;
              uStack_130 = 0x42000000;
              pcStack_128 = FUN_1029a2898;
              puStack_120 = &UNK_110578da8;
              ppuVar32 = &puStack_138;
              puStack_110 = puVar23;
              func_0x000107c60bc4();
              uStack_148 = 0x1029a27e8;
              puStack_168 = puVar38;
              uStack_160 = 0x42000000;
              puStack_158 = &UNK_101bff540;
              puStack_150 = &UNK_110578dd0;
              ppuVar33 = &puStack_168;
              puStack_140 = puVar24;
              func_0x000107c60bc4();
              uStack_178 = 0x1029a27f0;
              puStack_198 = puVar38;
              uStack_190 = 0x42000000;
              uStack_188 = 0x1029a2b98;
              puStack_180 = &UNK_110578df8;
              ppuVar34 = &puStack_198;
              puStack_170 = puVar25;
              func_0x000107c60bc4();
              uStack_1a8 = 0x1029a27f8;
              puStack_1c8 = puVar38;
              uStack_1c0 = 0x42000000;
              uStack_1b8 = 0x1029a2950;
              puStack_1b0 = &UNK_110578e20;
              ppuVar35 = &puStack_1c8;
              puStack_1a0 = puVar26;
              func_0x000107c60bc4();
              uStack_1d8 = 0x1029a2800;
              puStack_1f8 = puVar38;
              uStack_1f0 = 0x42000000;
              uStack_1e8 = 0x1029a2b94;
              puStack_1e0 = &UNK_110578e48;
              ppuVar36 = &puStack_1f8;
              puStack_1d0 = puVar27;
              func_0x000107c60bc4();
              func_0x000107c6157c(puVar20);
              func_0x000107c6157c(puVar21);
              func_0x000107c6157c(puVar22);
              func_0x000107c6157c(puVar23);
              func_0x000107c6157c(puVar24);
              func_0x000107c6157c(puVar25);
              func_0x000107c6157c(puVar26);
              func_0x000107c6157c(puVar27);
              func_0x000107c61174();
              func_0x000107c47d10();
              func_0x000107c60bd0(ppuVar36);
              func_0x000107c60bd0(ppuVar35);
              func_0x000107c60bd0(ppuVar34);
              func_0x000107c60bd0(ppuVar33);
              func_0x000107c60bd0(ppuVar32);
              func_0x000107c60bd0(ppuVar31);
              func_0x000107c60bd0(ppuVar30);
              func_0x000107c60bd0(ppuVar29);
              func_0x000107c61170(puVar18);
              func_0x000107c61574(puStack_1d0);
              func_0x000107c61574(puStack_1a0);
              func_0x000107c61574(puStack_170);
              func_0x000107c61574(puStack_140);
              func_0x000107c61574(puStack_110);
              func_0x000107c61574(puStack_e0);
              func_0x000107c61574(puStack_b0);
              func_0x000107c61574(puStack_80);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar39 != 0) {
                lVar37 = lVar39;
                func_0x000107c509b4();
                func_0x000107c61180();
                func_0x000107c615e8(lVar39);
                if (lVar37 != 0) {
                  puVar38 = PTR_PTR_1126abbd8;
                  func_0x000107c610f8(PTR_PTR_1126abbd8);
                  func_0x000107c61174(puVar13);
                  func_0x000107c61174(puVar28);
                  func_0x000107c49520(puVar38);
                  func_0x000107c615e8(lVar12);
                  func_0x000107c615e8(lVar4);
                  func_0x000107c615e8(lVar6);
                  func_0x000107c61170(puVar17);
                  func_0x000107c61170(puVar18);
                  func_0x000107c61574(puVar27);
                  func_0x000107c61574(puVar26);
                  func_0x000107c61574(puVar25);
                  func_0x000107c61574(puVar24);
                  func_0x000107c615e8(lVar11);
                  func_0x000107c615e8(lVar10);
                  func_0x000107c615e8(lVar9);
                  func_0x000107c615e8(lVar8);
                  func_0x000107c615e8(lVar7);
                  func_0x000107c615e8(puVar16);
                  func_0x000107c61574(puVar23);
                  func_0x000107c61574(puVar22);
                  func_0x000107c61574(puVar21);
                  func_0x000107c61574(puVar20);
                  func_0x000107c615e8(lVar19);
                  func_0x000107c615e8(lVar5);
                  func_0x000107c615e8(lVar40);
                  func_0x000107c615e8(lVar3);
                  func_0x000107c615e8(lVar14);
                  func_0x000107c615e8(lVar2);
                  func_0x000107c61170(puVar13);
                  func_0x000107c61170(puVar13);
                  func_0x000107c61170(puVar28);
                  func_0x000107c61170(puVar28);
                  func_0x000107c615e8(lVar37);
                  return puVar38;
                }
              }
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010f0d2e90,
                                  "FamilyCenterImplementation/FamilyCenterViewController.swift",0x3b
                                  ,2,0x121,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a0bb0);
              (*pcVar1)();
            }
            func_0x000107c615e8(lVar12);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(puVar17);
            func_0x000107c61170(puVar13);
            func_0x000107c615e8(lVar11);
            func_0x000107c615e8(lVar10);
            func_0x000107c615e8(lVar9);
          }
          func_0x000107c615e8(lVar8);
          lVar4 = lVar7;
        }
      }
      func_0x000107c615e8(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c615e8(lVar3);
LAB_1029a0370:
  func_0x000107c615e8(lVar2);
  return (undefined *)0x0;
}



/* Entry: 1029a0bb0; end: 1029a0c03; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController loadView] */

/* WARNING: Possible PIC construction at 0x0001029a0bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a0bf4) */

void FUN_1029a0bb0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = param_1;
  FUN_1029a00d0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a0c04; end: 1029a0cfb;  */

void FUN_1029a0c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createFamilyCenterEntryPointView()";
  func_0x0001000c10c0("createFamilyCenterEntryPointView()");
  func_0x000107c61180();
  puVar2 = &UNK_110579010;
  func_0x000107c613fc(&UNK_110579010,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  pcStack_50 = FUN_1029a2b20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110579028;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029a0cfc; end: 1029a0d73;  */

void FUN_1029a0cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029a0d74(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029a0d74; end: 1029a0eef;  */

/* WARNING: Possible PIC construction at 0x0001029a0ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a0e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a0ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a0e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a0e44) */
/* WARNING: Removing unreachable block (ram,0x0001029a0de0) */
/* WARNING: Removing unreachable block (ram,0x0001029a0de4) */
/* WARNING: Removing unreachable block (ram,0x0001029a0ec8) */
/* WARNING: Removing unreachable block (ram,0x0001029a0e18) */
/* WARNING: Removing unreachable block (ram,0x0001029a0ed0) */
/* WARNING: Removing unreachable block (ram,0x0001029a0ed8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a0d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ed28d0);
    func_0x000107c615f0(param_3);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4e864();
      func_0x000107c61180();
      param_3 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed2860);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  FUN_10299cb00(param_1,param_2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1029a0ef0; end: 1029a0fa7;  */

void FUN_1029a0ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "createFamilyCenterEntryPointView()";
  func_0x0001000c10c0("createFamilyCenterEntryPointView()");
  func_0x000107c61180();
  pcStack_40 = FUN_1029a2b08;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110578fd8;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e590(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1029a0fa8; end: 1029a1093;  */

void FUN_1029a0fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createFamilyCenterEntryPointView()";
  func_0x0001000c10c0("createFamilyCenterEntryPointView()");
  func_0x000107c61180();
  puVar2 = &UNK_110578f98;
  func_0x000107c613fc(&UNK_110578f98,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_1029a2afc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110578fb0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029a1094; end: 1029a1103;  */

void FUN_1029a1094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029a1104(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029a1104; end: 1029a11eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a1104(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4eb48();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed2860);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_110578d18;
    func_0x000107c613fc(&UNK_110578d18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x000107c6157c(puVar2);
    FUN_10299cb00(param_1,param_2,0,0x1029a2b9c,puVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61578(puVar2,2);
  }
  return;
}



/* Entry: 1029a11ec; end: 1029a1307;  */

void FUN_1029a11ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "createFamilyCenterEntryPointView()";
  func_0x0001000c10c0("createFamilyCenterEntryPointView()");
  func_0x000107c61180();
  puVar2 = &UNK_110578f48;
  func_0x000107c613fc(&UNK_110578f48,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  uStack_60 = 0x1029a2ab8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110578f60;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61434(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1029a1308; end: 1029a143b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a1308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = -0x2000000000000000;
    if (param_7 != 0) {
      lVar1 = param_7;
    }
    lVar2 = param_1 + _DAT_112ed28b8;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61434(param_7);
    }
    else {
      uVar3 = 0;
      if (param_7 != 0) {
        uVar3 = param_6;
      }
      func_0x000107c61434(param_7);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c5fadc(uVar3,lVar1);
      func_0x000107c502c8(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 1029a143c; end: 1029a156b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a143c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ed28b8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      func_0x000107c4de2c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1029a156c; end: 1029a1803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a156c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_98 = *(undefined8 *)(unaff_x20 + _DAT_112ed28e0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ed2900);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ed28d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c615e8(lVar3);
    return puVar2;
  }
  lVar5 = lVar4;
  func_0x0001011d1d1c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uVar6 = 0;
  func_0x000104522c9c(0);
  uStack_a0 = param_1;
  func_0x00010452281c(param_1,param_2);
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  lVar7 = lVar5;
  func_0x000107c5fc48(lVar5,uVar6);
  func_0x000107c61574(lVar5);
  if (lVar3 != 0) {
    lVar5 = lVar3;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar5 != 0) goto LAB_1029a1704;
  }
  FUN_1029a2a60(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar10 + 0x68))
            (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1
            );
  lVar5 = lVar11;
  func_0x000107c5fff0(lVar11);
  (**(code **)(lVar10 + 8))(lVar11,lVar1);
LAB_1029a1704:
  puVar8 = &UNK_110578ea8;
  func_0x000107c613fc(&UNK_110578ea8,0x38,7);
  uVar6 = uStack_98;
  *(undefined **)(puVar8 + 0x10) = puVar2;
  *(undefined8 *)(puVar8 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  *(undefined8 *)(puVar8 + 0x28) = uStack_98;
  *(long *)(puVar8 + 0x30) = lVar3;
  pcStack_70 = FUN_1029a2aa0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1011d1310;
  puStack_78 = &UNK_110578ec0;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(lVar3);
  func_0x000107c61574(puVar8);
  func_0x000107c40698(lVar4);
  func_0x000107c615e8(lVar3);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  return puVar2;
}



/* Entry: 1029a1804; end: 1029a187b;  */

void FUN_1029a1804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_48,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    FUN_1029a187c(param_3,param_4,param_5);
    func_0x000107c61170(param_6);
  }
  return;
}



/* Entry: 1029a187c; end: 1029a1a2b;  */

/* WARNING: Possible PIC construction at 0x0001029a18d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a19c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a19e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a18dc) */
/* WARNING: Removing unreachable block (ram,0x0001029a18e0) */
/* WARNING: Removing unreachable block (ram,0x0001029a18f0) */
/* WARNING: Removing unreachable block (ram,0x0001029a19c8) */
/* WARNING: Removing unreachable block (ram,0x0001029a19e4) */
/* WARNING: Removing unreachable block (ram,0x0001029a19f8) */
/* WARNING: Removing unreachable block (ram,0x0001029a19d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a187c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed28d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4e864();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1029a1a2c; end: 1029a1aff;  */

undefined * FUN_1029a1a2c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_1029a1b00(param_1,param_2);
    puVar1 = param_1;
    func_0x0001004575f0();
    func_0x000107c61574(param_1);
    puVar2 = puVar1;
    func_0x000107c5cb24(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1029a1b00; end: 1029a1c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a1b00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed28e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
    lVar2 = lVar1;
    func_0x000107c4ec88(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    func_0x00010061bc80();
    func_0x000107c61574(lVar3);
    puVar4 = &UNK_110578e80;
    func_0x000107c613fc(&UNK_110578e80,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    uVar5 = 0;
    FUN_1029a2a60(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c615f0(lVar1);
    func_0x000107c61434(param_2);
    func_0x0001000bfde0(FUN_1029a2a54,puVar4,uVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 1029a1c40; end: 1029a1cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a1c40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ed28b8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4203c();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029a1cb4; end: 1029a22a3;  */

/* WARNING: Possible PIC construction at 0x0001029a1d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a207c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a220c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a221c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a1f9c) */
/* WARNING: Removing unreachable block (ram,0x0001029a2278) */
/* WARNING: Removing unreachable block (ram,0x0001029a2248) */
/* WARNING: Removing unreachable block (ram,0x0001029a2238) */
/* WARNING: Removing unreachable block (ram,0x0001029a2220) */
/* WARNING: Removing unreachable block (ram,0x0001029a2210) */
/* WARNING: Removing unreachable block (ram,0x0001029a2080) */
/* WARNING: Removing unreachable block (ram,0x0001029a2268) */
/* WARNING: Removing unreachable block (ram,0x0001029a209c) */
/* WARNING: Removing unreachable block (ram,0x0001029a210c) */
/* WARNING: Removing unreachable block (ram,0x0001029a2120) */
/* WARNING: Removing unreachable block (ram,0x0001029a2178) */
/* WARNING: Removing unreachable block (ram,0x0001029a2034) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e8c) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e58) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fdc) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e74) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e30) */
/* WARNING: Removing unreachable block (ram,0x0001029a1dc8) */
/* WARNING: Removing unreachable block (ram,0x0001029a1d88) */
/* WARNING: Removing unreachable block (ram,0x0001029a1dd0) */
/* WARNING: Removing unreachable block (ram,0x0001029a1d9c) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fc0) */
/* WARNING: Removing unreachable block (ram,0x0001029a223c) */

void FUN_1029a1cb4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [136];
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_e8;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar7;
    *(undefined8 *)(lVar1 + 0x30) = 0xd000000000000021;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f0d2ee0;
    lVar4 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar6 = (undefined *)0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0d2ec0);
    func_0x000107c5f9dc(lVar4,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126ba668;
    func_0x000107c610f8(PTR_PTR_1126ba668);
    func_0x000107c61434(uVar3);
    func_0x000107c453e4(puVar2);
    puVar6 = PTR_PTR_1126be930;
    func_0x000107c610f8(PTR_PTR_1126be930);
    func_0x000107c453e4();
    func_0x000107c59058(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1029a22a4; end: 1029a2473;  */

/* WARNING: Possible PIC construction at 0x0001029a23cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a23f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a23f4) */
/* WARNING: Removing unreachable block (ram,0x0001029a23d0) */
/* WARNING: Removing unreachable block (ram,0x0001029a2408) */

void FUN_1029a22a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [80];
  
  puVar8 = auStack_90;
  if (param_1 == 0) {
    puVar7 = PTR_PTR_1126b15a8;
    func_0x000107c61168();
    func_0x000107c5d1f4();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029a2474);
      (*pcVar2)();
    }
    func_0x000107c43b74(param_2);
  }
  else {
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar3 + 0x28) = puVar8;
    *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(lVar3 + 0x38) = 0x800000010f0d2f10;
    lVar5 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar7 = (undefined *)0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0d2ec0);
    func_0x000107c5f9dc(lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar5);
    func_0x000107c466bc(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1029a2474; end: 1029a24e3;  */

void FUN_1029a2474(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c4b91c(param_3);
  func_0x000107c61170(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 1029a24e4; end: 1029a2543; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController initWithNibName:bundle:] */

void FUN_1029a24e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterImplementation.FamilyCenterViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a2510);
  (*pcVar1)();
}



/* Entry: 1029a2544; end: 1029a2737; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a26fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a271c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a2700) */
/* WARNING: Removing unreachable block (ram,0x0001029a2720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2544(long param_1)

{
  func_0x000100d14a3c(param_1 + _DAT_112ed2828);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2830));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2838));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2840));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed2848 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2850));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2858));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2868));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2870));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2878));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2880));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2888));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2890));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed2898));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28a8));
  func_0x000100d14a3c(param_1 + _DAT_112ed28b8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed28c0 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_112ed28c8),
                      ((undefined8 *)(param_1 + _DAT_112ed28c8))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed28f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed28f8));
  return;
}



/* Entry: 1029a2738; end: 1029a2757;  */

void FUN_1029a2738(void)

{
  func_0x000107c61168(&PTR_PTR_112877330);
  return;
}



/* Entry: 1029a2758; end: 1029a277b; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController defaultProjectNameV2] */

void FUN_1029a2758(void)

{
  func_0x000107c5fadc(0x797465666153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a277c; end: 1029a27af; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController defaultSubProjectName] */

void FUN_1029a277c(void)

{
  func_0x000107c5fadc(0x4320796c696d6146,0xed00007265746e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a27b0; end: 1029a2807; -[_TtC26FamilyCenterImplementation26FamilyCenterViewController shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a27b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed2910);
  *(undefined8 *)(param_1 + _DAT_112ed2910) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1029a2808; end: 1029a287b;  */

void FUN_1029a2808(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,uVar3,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1029a287c; end: 1029a2897;  */

void FUN_1029a287c(long param_1,long param_2)

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



/* Entry: 1029a2898; end: 1029a29f3;  */

/* WARNING: Possible PIC construction at 0x0001029a2928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a292c) */

void FUN_1029a2898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,uVar5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1029a29f4; end: 1029a2a53;  */

void FUN_1029a29f4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1029a2a54; end: 1029a2a5f;  */

void FUN_1029a2a54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4b91c(uVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar3;
  return;
}



/* Entry: 1029a2a60; end: 1029a2a9f;  */

void FUN_1029a2a60(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029a2aa0; end: 1029a2acb;  */

/* WARNING: Possible PIC construction at 0x0001029a1d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a207c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a220c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a221c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a2274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a1fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a1f9c) */
/* WARNING: Removing unreachable block (ram,0x0001029a2278) */
/* WARNING: Removing unreachable block (ram,0x0001029a2248) */
/* WARNING: Removing unreachable block (ram,0x0001029a2238) */
/* WARNING: Removing unreachable block (ram,0x0001029a2220) */
/* WARNING: Removing unreachable block (ram,0x0001029a2210) */
/* WARNING: Removing unreachable block (ram,0x0001029a2080) */
/* WARNING: Removing unreachable block (ram,0x0001029a2268) */
/* WARNING: Removing unreachable block (ram,0x0001029a209c) */
/* WARNING: Removing unreachable block (ram,0x0001029a210c) */
/* WARNING: Removing unreachable block (ram,0x0001029a2120) */
/* WARNING: Removing unreachable block (ram,0x0001029a2178) */
/* WARNING: Removing unreachable block (ram,0x0001029a2034) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e8c) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e58) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fdc) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e74) */
/* WARNING: Removing unreachable block (ram,0x0001029a1e30) */
/* WARNING: Removing unreachable block (ram,0x0001029a1dc8) */
/* WARNING: Removing unreachable block (ram,0x0001029a1d88) */
/* WARNING: Removing unreachable block (ram,0x0001029a1dd0) */
/* WARNING: Removing unreachable block (ram,0x0001029a1d9c) */
/* WARNING: Removing unreachable block (ram,0x0001029a1fc0) */
/* WARNING: Removing unreachable block (ram,0x0001029a223c) */

void FUN_1029a2aa0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_e8 [136];
  
  lVar1 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_e8;
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar7;
    *(undefined8 *)(lVar1 + 0x30) = 0xd000000000000021;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f0d2ee0;
    lVar4 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar6 = (undefined *)0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0d2ec0);
    func_0x000107c5f9dc(lVar4,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126ba668;
    func_0x000107c610f8(PTR_PTR_1126ba668);
    func_0x000107c61434(uVar3);
    func_0x000107c453e4(puVar2);
    puVar6 = PTR_PTR_1126be930;
    func_0x000107c610f8(PTR_PTR_1126be930);
    func_0x000107c453e4();
    func_0x000107c59058(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1029a2acc; end: 1029a2afb;  */

void FUN_1029a2acc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029a2afc; end: 1029a2b07;  */

void FUN_1029a2afc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1029a1104(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1029a2b08; end: 1029a2b1f;  */

void FUN_1029a2b08(void)

{
  FUN_1029a1c40();
  return;
}



/* Entry: 1029a2b20; end: 1029a2b9f;  */

void FUN_1029a2b20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1029a0d74(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1029a2ba0; end: 1029a2bbf; -[_TtC17FamilyCenterScope17FamilyCenterScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2ba0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed2940));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a2bc0; end: 1029a2c07; -[_TtC17FamilyCenterScope17FamilyCenterScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2bc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2948;
  func_0x000107c61428(param_1 + _DAT_112ed2948,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a2c08; end: 1029a2c5f; -[_TtC17FamilyCenterScope17FamilyCenterScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2948;
  func_0x000107c61428(param_1 + _DAT_112ed2948,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029a2c60; end: 1029a2c6f; -[_TtC17FamilyCenterScope17FamilyCenterScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029a2c60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ed2950);
}



/* Entry: 1029a2c70; end: 1029a2ce7; -[_TtC17FamilyCenterScope17FamilyCenterScope firstChildId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2c70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed2958);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029a2ce8; end: 1029a2d5f; -[_TtC17FamilyCenterScope17FamilyCenterScope setFirstChildId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2ce8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ed2958);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 1029a2d60; end: 1029a2deb; -[_TtC17FamilyCenterScope17FamilyCenterScope firstChildIdBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2d60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed2960);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = 0;
  uVar3 = puVar1[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = *puVar1;
    func_0x00010006c00c(uVar4,uVar3);
    uVar2 = uVar4;
    func_0x000107c5ee20(uVar4,uVar3);
    func_0x0001000b44c0(uVar4,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029a2dec; end: 1029a2e87; -[_TtC17FamilyCenterScope17FamilyCenterScope setFirstChildIdBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2dec(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = -0x1000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_112ed2960);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001000b44c0(lVar3,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029a2e88; end: 1029a2f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a2e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ed2948;
  func_0x000107c61614(unaff_x20 + _DAT_112ed2948,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2958);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2960);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2940) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed2950) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_68;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 1029a2f7c; end: 1029a2fe3; -[_TtC17FamilyCenterScope17FamilyCenterScope initWithUiContainer:delegate:source:] */

undefined8
FUN_1029a2f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_3;
  FUN_1029a3278(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 1029a2fe4; end: 1029a308f; -[_TtC17FamilyCenterScope17FamilyCenterScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a2fe4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed2940));
  FUN_1029a3350(param_1 + _DAT_112ed2948);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed2958 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112ed2960);
  uVar1 = ((ulong *)(param_1 + _DAT_112ed2960))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1029a3090; end: 1029a31b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029a3090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  func_0x000100389180();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ed2948;
  func_0x000107c61614(lVar5 + _DAT_112ed2948,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed2958);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed2960);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(long *)(lVar5 + _DAT_112ed2940) = param_1;
  func_0x000107c61428(lVar5 + lVar3,auStack_68,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_2);
  *(undefined8 *)(lVar5 + _DAT_112ed2950) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_1);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_90[0] = plVar6;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar6;
}



/* Entry: 1029a31b4; end: 1029a322f; -[_TtC17FamilyCenterScope25FamilyCenterScopeServices buildWithUiContainer:delegate:source:] */

void FUN_1029a31b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029a3090(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029a3230; end: 1029a3233;  */

void FUN_1029a3230(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a3234; end: 1029a3267;  */

void FUN_1029a3234(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a3268; end: 1029a3277; -[_TtC17FamilyCenterScope25FamilyCenterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a3268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2970));
  return;
}


