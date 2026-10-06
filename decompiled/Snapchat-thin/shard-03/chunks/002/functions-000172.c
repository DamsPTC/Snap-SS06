/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10267d214; end: 10267d3e7;  */

long FUN_10267d214(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x00010267d270();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar1;
    func_0x000107c61174();
    FUN_10267de40(uVar3);
  }
  FUN_10267def8(lVar2);
  return lVar1;
}



/* Entry: 10267d3e8; end: 10267d487;  */

/* WARNING: Possible PIC construction at 0x00010267d470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267d474) */

void FUN_10267d3e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110531e70;
  func_0x000107c613fc(&UNK_110531e70,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac8310;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac8320,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10267d488; end: 10267d4f3;  */

void FUN_10267d488(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267d4f4,uVar1,uVar2);
  return;
}



/* Entry: 10267d4f4; end: 10267d5db;  */

void FUN_10267d4f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar2 = lVar1 + 0x40;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar1 + 0x20);
      func_0x000107c4d1cc();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x000107c50044(lVar4);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61604(lVar1 + 0x40,0);
      }
    }
    func_0x000107c61574(lVar1);
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010267d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10267d5dc; end: 10267d687;  */

/* WARNING: Possible PIC construction at 0x00010267d640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267d644) */
/* WARNING: Removing unreachable block (ram,0x000107c61604) */
/* WARNING: Removing unreachable block (ram,0x00010bdc05cc) */

void FUN_10267d5dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c50044(lVar3,param_2,lVar1,1);
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10267d688; end: 10267d6cb;  */

void FUN_10267d688(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010267d6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10267d6cc; end: 10267d99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267d6cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar10 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar10 != 0) {
    FUN_10267d214();
    lVar8 = _DAT_112fecfb0;
    if (lVar2 != 0) {
      lVar11 = *(long *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(lVar11 + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c3eca4();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c56564(lVar4);
        func_0x000107c615e8(lVar4);
      }
      puVar5 = PTR_PTR_1126b1f18;
      func_0x000107c610f8(PTR_PTR_1126b1f18);
      func_0x000107c46f24();
      puVar6 = PTR_PTR_1126b1f08;
      func_0x000107c61168(PTR_PTR_1126b1f08);
      func_0x000107c61174(lVar2);
      func_0x000107c4abac(puVar6);
      func_0x000107c61180();
      pcStack_80 = FUN_10267d99c;
      uStack_78 = 0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10112dc70;
      puStack_88 = &UNK_110531d00;
      ppuVar7 = &puStack_a0;
      func_0x000107c60bc4();
      func_0x000107c61174(puVar5);
      uVar9 = 0x4060400000000000;
      lVar3 = lVar10;
      func_0x000107c40bec(0x4060400000000000,0,lVar10);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61604(unaff_x20 + 0x40,lVar3);
      func_0x000107c615e8(lVar3);
      FUN_10267d9a4();
      lVar8 = *(long *)(lVar11 + lVar8);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar12 = 0;
      if (lVar8 != 0) {
        lVar3 = lVar8;
        func_0x000107c4c458();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        func_0x000107c5ea20(lVar3);
        func_0x000107c615e8(lVar3);
        uVar12 = uVar9;
      }
      func_0x000100083b20(&puStack_a0);
      pcVar1 = pcStack_80;
      puVar6 = puStack_88;
      func_0x0001000a8868(&puStack_a0,puStack_88);
      (**(code **)(pcVar1 + 8))(uVar12,puVar6,pcVar1);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar2);
      func_0x0001000834e4(&puStack_a0);
      return;
    }
    func_0x000107c615e8(lVar10);
  }
  lVar2 = _DAT_112eb7a20;
  lVar10 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar10 + _DAT_112eb7a20,&puStack_a0,0,0);
  lVar10 = lVar10 + lVar2;
  func_0x000107c61618();
  if (lVar10 != 0) {
    func_0x000107c4c378();
    func_0x000107c615e8(lVar10);
  }
  return;
}



/* Entry: 10267d99c; end: 10267d9a3;  */

undefined8 FUN_10267d99c(void)

{
  return 0;
}



/* Entry: 10267d9a4; end: 10267dae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267d9a4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar6 = unaff_x20 + 0x40;
  func_0x000107c61618();
  lVar1 = _DAT_112eb7a20;
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c61428(lVar6 + _DAT_112eb7a20,&puStack_70,0,0);
    lVar6 = lVar6 + lVar1;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c4c378();
      func_0x000107c615e8(lVar6);
    }
  }
  else {
    lVar1 = lVar6;
    func_0x000107c4c428();
    func_0x000107c61180();
    puVar2 = &UNK_110531d58;
    func_0x000107c613fc(&UNK_110531d58,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    pcStack_50 = FUN_10267dea0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011314ac;
    puStack_58 = &UNK_110531d70;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar4 = lVar1;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar4;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10267dae4; end: 10267daef; -[_TtC41MapMemoriesWorkflowServicesImplementation23MapMemoriesWorkflowImpl start] */

void FUN_10267dae4(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10267d6cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10267daf0; end: 10267dc63;  */

void FUN_10267daf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_110531da8;
    func_0x000107c613fc(&UNK_110531da8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x10267dea8;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_10267deb0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1011437a4;
    puStack_80 = &UNK_110531dc0;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_110531df8;
    func_0x000107c613fc(&UNK_110531df8,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10267ded0;
    *(long *)(puVar2 + 0x18) = param_2;
    pcStack_78 = FUN_10267ded8;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_110531e10;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4c7c0(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(param_2,3);
  }
  return;
}



/* Entry: 10267dc64; end: 10267dd1b;  */

/* WARNING: Possible PIC construction at 0x00010267dcd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267dcd8) */
/* WARNING: Removing unreachable block (ram,0x000107c61604) */
/* WARNING: Removing unreachable block (ram,0x00010bdc05cc) */

void FUN_10267dc64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 2) {
    lVar1 = param_2 + 0x40;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_2 + 0x20);
      func_0x000107c4d1cc();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        func_0x000107c50044(lVar3);
        lVar1 = lVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10267dd1c; end: 10267dd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267dd1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(param_1 + 0x40,0);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112eb7a20;
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x000107c61428(lVar3 + _DAT_112eb7a20,auStack_38,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4c378();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10267dd98; end: 10267dda3; -[_TtC41MapMemoriesWorkflowServicesImplementation23MapMemoriesWorkflowImpl end] */

void FUN_10267dd98(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10267d5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10267dda4; end: 10267ddcf;  */

void FUN_10267dda4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  func_0x000107c6157c();
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10267ddd0; end: 10267ddeb;  */

void FUN_10267ddd0(long param_1,long param_2)

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



/* Entry: 10267ddec; end: 10267de3f;  */

void FUN_10267ddec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10267de40(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1026679c8(unaff_x20 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10267de40; end: 10267de4f;  */

void FUN_10267de40(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10267de50; end: 10267de6f;  */

void FUN_10267de50(void)

{
  FUN_10267ddec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10267de70; end: 10267de7f;  */

undefined1  [16] FUN_10267de70(void)

{
  return ZEXT816(0x110531d38);
}



/* Entry: 10267de80; end: 10267de9f;  */

void FUN_10267de80(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3198);
  return;
}



/* Entry: 10267dea0; end: 10267deaf;  */

void FUN_10267dea0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    puVar3 = &UNK_110531da8;
    func_0x000107c613fc(&UNK_110531da8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10267dea8;
    *(long *)(puVar3 + 0x18) = lVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_10267deb0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1011437a4;
    puStack_80 = &UNK_110531dc0;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110531df8;
    func_0x000107c613fc(&UNK_110531df8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10267ded0;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcStack_78 = FUN_10267ded8;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_110531e10;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_70;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c4c7c0(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61578(lVar2,3);
  }
  return;
}



/* Entry: 10267deb0; end: 10267decf;  */

void FUN_10267deb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10267ded0; end: 10267ded7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267ded0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(unaff_x20 + 0x40,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112eb7a20;
  lVar3 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar3 + _DAT_112eb7a20,auStack_38,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4c378();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10267ded8; end: 10267def7;  */

void FUN_10267ded8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10267def8; end: 10267df0f;  */

void FUN_10267def8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10267df10; end: 10267df9b;  */

void FUN_10267df10(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10267df58;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267d4f4,lVar1,lVar2);
  return;
}



/* Entry: 10267df9c; end: 10267e00b;  */

void FUN_10267df9c(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10267e00c;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10267e00c; end: 10267e047;  */

void FUN_10267e00c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010267e044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10267e048; end: 10267e067;  */

void FUN_10267e048(long param_1,long param_2)

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



/* Entry: 10267e068; end: 10267e0fb;  */

void FUN_10267e068(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb3230,&UNK_10dac8330);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10267e0fc,param_1);
  return;
}



/* Entry: 10267e0fc; end: 10267e11b;  */

void FUN_10267e0fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1026e2f94(0);
  func_0x000107c610f8();
  func_0x0001026e2ed8(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10267e11c; end: 10267e1bb;  */

void FUN_10267e11c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10267e1bc; end: 10267e1bf;  */

void FUN_10267e1bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac8370;
  func_0x000107c61520(&UNK_10dac8370,&UNK_110531f60);
  puRam0000000112eb3238 = puVar1;
  return;
}



/* Entry: 10267e1c0; end: 10267e1ff;  */

void FUN_10267e1c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac8370;
  func_0x000107c61520(&UNK_10dac8370,&UNK_110531f60);
  puRam0000000112eb3238 = puVar1;
  return;
}



/* Entry: 10267e200; end: 10267e2eb;  */

uint FUN_10267e200(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10267e2ec; end: 10267e43f;  */

void FUN_10267e2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110532040;
  func_0x000107c613fc(&UNK_110532040,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001002acf1c(0x10267e390,puVar1);
  return;
}



/* Entry: 10267e440; end: 10267e49f;  */

long FUN_10267e440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return unaff_x20;
}



/* Entry: 10267e4a0; end: 10267e6e3;  */

/* WARNING: Possible PIC construction at 0x00010267e684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267e688) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267e4a0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fa9478);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar2;
    func_0x000107c4dc54(lVar2);
    func_0x000107c61180();
    puVar8 = &UNK_110532068;
    puVar5 = puVar8;
    func_0x000107c613fc(&UNK_110532068,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10267ed80;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100b5fdac;
    puStack_88 = &UNK_110532080;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar7 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c5cfb0(lVar4);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110532068,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    pcStack_80 = FUN_10267ee78;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100b5fdac;
    puStack_88 = &UNK_1105320a8;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar3 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10267e6e4; end: 10267e74f;  */

void FUN_10267e6e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267e750,uVar1,uVar2);
  return;
}



/* Entry: 10267e750; end: 10267e7bb;  */

void FUN_10267e750(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10267e7bc();
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010267e7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 10267e7bc; end: 10267ebfb;  */

/* WARNING: Possible PIC construction at 0x00010267e894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267e940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267ebac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267ebbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267ebb0) */
/* WARNING: Removing unreachable block (ram,0x00010267e944) */
/* WARNING: Removing unreachable block (ram,0x00010267e978) */
/* WARNING: Removing unreachable block (ram,0x00010267e958) */
/* WARNING: Removing unreachable block (ram,0x00010267e974) */
/* WARNING: Removing unreachable block (ram,0x00010267e998) */
/* WARNING: Removing unreachable block (ram,0x00010267e898) */
/* WARNING: Removing unreachable block (ram,0x00010267e9dc) */
/* WARNING: Removing unreachable block (ram,0x00010267e9e4) */
/* WARNING: Removing unreachable block (ram,0x00010267e8a0) */
/* WARNING: Removing unreachable block (ram,0x00010267e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010267ea04) */
/* WARNING: Removing unreachable block (ram,0x00010267ea5c) */
/* WARNING: Removing unreachable block (ram,0x00010267ea80) */
/* WARNING: Removing unreachable block (ram,0x00010267eb34) */
/* WARNING: Removing unreachable block (ram,0x00010267eb18) */
/* WARNING: Removing unreachable block (ram,0x00010267eb30) */
/* WARNING: Removing unreachable block (ram,0x00010267eb60) */
/* WARNING: Removing unreachable block (ram,0x00010267e8ac) */
/* WARNING: Removing unreachable block (ram,0x00010267ebf8) */
/* WARNING: Removing unreachable block (ram,0x00010267e8d4) */
/* WARNING: Removing unreachable block (ram,0x00010267e8f8) */
/* WARNING: Removing unreachable block (ram,0x00010267e90c) */
/* WARNING: Removing unreachable block (ram,0x00010267e8fc) */
/* WARNING: Removing unreachable block (ram,0x00010267e918) */
/* WARNING: Removing unreachable block (ram,0x00010267ebc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267e7bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fa9478);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ec60(lVar1);
    func_0x000107c609b0();
    func_0x000107c3ec60(lVar1);
    func_0x000107c609cc();
    func_0x000107c5dfe4();
    func_0x000107c61180();
    func_0x000107c61434(*(undefined8 *)(lVar2 + _DAT_112fa9510));
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10267ebfc; end: 10267ec3f;  */

void FUN_10267ebfc(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010267ec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10267ec40; end: 10267ecaf;  */

void FUN_10267ec40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267ecb0,uVar1,uVar2);
  return;
}



/* Entry: 10267ecb0; end: 10267ed7f;  */

void FUN_10267ecb0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61574();
  }
  lVar1 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x28,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10267e7bc();
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010267ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10267ed80; end: 10267ee5b;  */

void FUN_10267ed80(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = &UNK_110532068;
  func_0x000107c613fc(&UNK_110532068,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar2);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c61574(lVar2);
  puVar3 = &UNK_110532188;
  func_0x000107c613fc(&UNK_110532188,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dac8520;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x73,0,0x3c,4,0,0,&UNK_10dac8530,puVar3,uVar4);
  func_0x000107c61574();
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 10267ee5c; end: 10267ee77;  */

void FUN_10267ee5c(long param_1,long param_2)

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



/* Entry: 10267ee78; end: 10267ef7b;  */

void FUN_10267ee78(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c5f068();
  puVar1 = &UNK_110532068;
  func_0x000107c613fc(&UNK_110532068,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar2);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c61574(lVar2);
  puVar3 = &UNK_110532138;
  func_0x000107c613fc(&UNK_110532138,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar1 = &UNK_110532160;
  func_0x000107c613fc(&UNK_110532160,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac8500;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x0001001ca524(0x73,0,0x3c,4,0,0,&UNK_10dac8510,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 10267ef7c; end: 10267efbf;  */

void FUN_10267ef7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10267efc0; end: 10267efdf;  */

void FUN_10267efc0(void)

{
  FUN_10267e4a0();
  return;
}



/* Entry: 10267efe0; end: 10267efe3;  */

void FUN_10267efe0(void)

{
  return;
}



/* Entry: 10267efe4; end: 10267f003;  */

void FUN_10267efe4(void)

{
  FUN_10267e7bc();
  return;
}



/* Entry: 10267f004; end: 10267f01f;  */

void FUN_10267f004(void)

{
  return;
}



/* Entry: 10267f020; end: 10267f09b;  */

void FUN_10267f020(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3280);
  return;
}



/* Entry: 10267f09c; end: 10267f193;  */

void FUN_10267f09c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10267f188);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x00010267f2d4();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267f18c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267f190);
      (*pcVar1)();
    }
    func_0x000107c610b4(lVar4 + *(long *)(lVar4 + 0x10) * 0x20 + 0x20,param_1 + 0x20,uVar5 << 5);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10267f194);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10267f194; end: 10267f1af;  */

void FUN_10267f194(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10267f1b0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10267f1b0; end: 10267f3df;  */

undefined * FUN_10267f1b0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10267f2d4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x00010267f040();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10267f57c(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10267f3e0; end: 10267f57b;  */

ulong FUN_10267f3e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10267f4b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10267f4b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001038b9ff8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001038b9ff8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f0b4b90);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10267f57c);
  (*pcVar2)();
}



/* Entry: 10267f57c; end: 10267f5bf;  */

void FUN_10267f57c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3308 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d56d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb3308 = puVar1;
  return;
}



/* Entry: 10267f5c0; end: 10267f61b;  */

void FUN_10267f5c0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10267f61c;
  plVar1[9] = lVar3;
  plVar1[8] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267ecb0,lVar3,lVar2);
  return;
}



/* Entry: 10267f61c; end: 10267f657;  */

void FUN_10267f61c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010267f654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10267f658; end: 10267f6c7;  */

void FUN_10267f658(undefined8 param_1)

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
  plVar3[1] = 0x10267f7cc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10267f6c8; end: 10267f753;  */

void FUN_10267f6c8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10267f710;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267e750,lVar1,lVar2);
  return;
}



/* Entry: 10267f754; end: 10267f7c3;  */

void FUN_10267f754(undefined8 param_1)

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
  plVar3[1] = 0x10267f7d0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10267f7c4; end: 10267f7d3;  */

void FUN_10267f7c4(long param_1,long param_2)

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



/* Entry: 10267f7d4; end: 10267f88f;  */

void FUN_10267f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3318,&UNK_10dac8540);
  puVar1 = &UNK_110532260;
  func_0x000107c613fc(&UNK_110532260,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10267f95c,puVar1);
  return;
}



/* Entry: 10267f890; end: 10267f95b;  */

void FUN_10267f890(long *param_1,long param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10268176c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x18) = uStack_48;
  *(undefined8 *)(param_2 + 0x10) = uStack_50;
  *(undefined8 *)(param_2 + 0x30) = uStack_60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_58;
  *(undefined8 *)(param_2 + 0x50) = uStack_70;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110532278;
  return;
}



/* Entry: 10267f95c; end: 10267f96b;  */

void FUN_10267f95c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_50,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10268176c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x18) = uStack_48;
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x30) = uStack_60;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_58;
  *(undefined8 *)(lVar1 + 0x50) = uStack_70;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110532278;
  return;
}



/* Entry: 10267f96c; end: 10267f9d7;  */

void FUN_10267f96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  return;
}



/* Entry: 10267f9d8; end: 10267fbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267f9d8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_10267fbf4();
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar4 != 0) {
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      puVar1 = (ulong *)(param_2 + _DAT_112fa9a98);
      func_0x000107c61428(puVar1,auStack_c0,0,0);
      if (((uVar5 != *puVar1 || param_3 != puVar1[1]) &&
          (uVar4 = uVar5, func_0x000107c605b8(uVar5,param_3,*puVar1,puVar1[1],0), (uVar4 & 1) == 0))
         || (lVar6 = _DAT_112fa9ac0, func_0x000107c61428(param_2 + _DAT_112fa9ac0,auStack_d8,0,0),
            (*(byte *)(param_2 + lVar6) & 1) == 0)) {
        func_0x00010267fd34(uVar5,param_3);
      }
      func_0x000107c6142c(param_3);
    }
  }
  lVar6 = _DAT_112fa9ab0;
  func_0x000107c61428(param_2 + _DAT_112fa9ab0,auStack_78,0,0);
  lVar6 = *(long *)(param_2 + lVar6);
  if (lVar6 != 0) {
    func_0x000107c61174();
    FUN_10267fe38();
    func_0x000107c61170(lVar6);
  }
  lVar6 = _DAT_112fa9ac0;
  func_0x000107c61428(param_2 + _DAT_112fa9ac0,auStack_90,0,0);
  if (*(char *)(param_2 + lVar6) == '\x01') {
    FUN_102680188(param_2);
  }
  puVar2 = (undefined8 *)(param_2 + _DAT_112fa9a98);
  func_0x000107c61428(puVar2,auStack_a8,0,0);
  uVar8 = *puVar2;
  uVar3 = puVar2[1];
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c61434(uVar3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c5fadc(uVar8,uVar3);
    func_0x000107c57408(lVar7);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c6142c(uVar3);
  FUN_10268051c(param_1,param_2);
  return;
}



/* Entry: 10267fbf4; end: 10267fe37;  */

void FUN_10267fbf4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c4e7bc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c44060();
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c5cb2c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      puVar4 = &UNK_1105322d0;
      func_0x000107c613fc(&UNK_1105322d0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      pcStack_50 = FUN_1026818d8;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_10268168c;
      puStack_58 = &UNK_1105322e8;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar1 = lVar3;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar3);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
      *(long *)(unaff_x20 + 0x48) = lVar1;
      func_0x000107c61170(uVar6);
    }
  }
  return;
}



/* Entry: 10267fe38; end: 102680187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267fe38(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102680180);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000109021ee0();
  func_0x000107c615e8(lVar3);
  if ((int)lVar4 != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c51a88();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      uVar14 = 1;
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      puVar6 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar3 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar3 + 0x40) = puVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar14;
      (**(code **)(lVar13 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      uVar5 = 0x66302e25;
      uVar10 = 0xe400000000000000;
      func_0x000107c5fb00(0x66302e25,0xe400000000000000,lVar3);
      puVar6 = PTR_PTR_1126b2050;
      uVar11 = uVar10;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar2 = param_1;
      func_0x000107c44fdc();
      func_0x000107c61180();
      uVar12 = uVar11;
      if (lVar2 == 0) {
        func_0x000107c5faec();
        uVar12 = uVar11;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar11);
      }
      func_0x000107c55218(puVar6);
      func_0x000107c61170(lVar2);
      func_0x000107c4077c(param_1);
      func_0x000107c4077c(param_1);
      func_0x00010676af10(uVar14,puVar6);
      puVar7 = puVar6;
      func_0x000107c4f4f0();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102680184);
        (*pcVar1)();
      }
      ppuVar8 = &PTR____CFConstantStringClassReference_110e32618;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110e32618);
      func_0x000107c44fdc();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar12);
      }
      ppuVar9 = ppuVar8;
      func_0x00010676b02c(ppuVar8,param_1);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar8);
      func_0x000107c61170(param_1);
      func_0x000107c3d798(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar9);
      puVar7 = puVar6;
      func_0x000107c4f4f0();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102680188);
        (*pcVar1)();
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110e5bcb8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110e5bcb8);
      func_0x000107c5fadc(uVar5,uVar10);
      func_0x000107c6142c(uVar10);
      ppuVar8 = ppuVar9;
      func_0x00010676b02c(ppuVar9,uVar5);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar9);
      func_0x000107c61170(uVar5);
      func_0x000107c3d798(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar8);
      ppuVar8 = &PTR____CFConstantStringClassReference_110e5bfb8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110e5bfb8);
      func_0x000107c3d68c(lVar4);
      func_0x000107c61170(ppuVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar6);
    }
  }
  return;
}



/* Entry: 102680188; end: 10268051b;  */

/* WARNING: Possible PIC construction at 0x0001026801e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026804b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102680470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026804b4) */
/* WARNING: Removing unreachable block (ram,0x000102680450) */
/* WARNING: Removing unreachable block (ram,0x0001026801ec) */
/* WARNING: Removing unreachable block (ram,0x0001026802d4) */
/* WARNING: Removing unreachable block (ram,0x000102680204) */
/* WARNING: Removing unreachable block (ram,0x000102680228) */
/* WARNING: Removing unreachable block (ram,0x000102680254) */
/* WARNING: Removing unreachable block (ram,0x000102680238) */
/* WARNING: Removing unreachable block (ram,0x00010268025c) */
/* WARNING: Removing unreachable block (ram,0x0001026802e0) */
/* WARNING: Removing unreachable block (ram,0x000102680288) */
/* WARNING: Removing unreachable block (ram,0x00010268028c) */
/* WARNING: Removing unreachable block (ram,0x000102680290) */
/* WARNING: Removing unreachable block (ram,0x0001026803c0) */
/* WARNING: Removing unreachable block (ram,0x000102680294) */
/* WARNING: Removing unreachable block (ram,0x0001026802e8) */
/* WARNING: Removing unreachable block (ram,0x000102680400) */
/* WARNING: Removing unreachable block (ram,0x000102680378) */
/* WARNING: Removing unreachable block (ram,0x000102680408) */
/* WARNING: Removing unreachable block (ram,0x00010268046c) */
/* WARNING: Removing unreachable block (ram,0x000102680440) */
/* WARNING: Removing unreachable block (ram,0x0001026802c4) */
/* WARNING: Removing unreachable block (ram,0x0001026802d8) */
/* WARNING: Removing unreachable block (ram,0x000102680474) */
/* WARNING: Removing unreachable block (ram,0x000102680478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102680188(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112fa9ab0;
  func_0x000107c61428(param_1 + _DAT_112fa9ab0,auStack_78,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 10268051c; end: 102680733;  */

/* WARNING: Possible PIC construction at 0x000102680578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026805c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268057c) */
/* WARNING: Removing unreachable block (ram,0x000102680600) */
/* WARNING: Removing unreachable block (ram,0x0001026805a8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001026805cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268051c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4c458();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102680734; end: 1026807cf;  */

void FUN_102680734(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = param_2;
  if (param_2 != 0) {
LAB_102680754:
    func_0x000107c61434(param_2);
    func_0x00010267fd34(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      param_1 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_102680754;
    }
  }
  return;
}



/* Entry: 1026807d0; end: 102680f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026807d0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined ***pppuVar18;
  long unaff_x20;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_e8;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  puVar17 = *(undefined **)(unaff_x20 + 0x40);
  if (puVar17 == (undefined *)0x0) {
    return;
  }
  puVar1 = (ulong *)(puVar17 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  uVar4 = *puVar1;
  if ((uVar4 != param_3 || puVar1[1] != param_4) &&
     (func_0x000107c605b8(uVar4,puVar1[1],param_3,param_4,0), (uVar4 & 1) == 0)) {
    return;
  }
  puVar19 = *(undefined **)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) goto LAB_102680f40;
  puVar20 = puVar19;
  func_0x000107c51a88();
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  lVar2 = _DAT_112fa9ab0;
  puVar14 = auStack_a8;
  func_0x000107c61428(puVar17 + _DAT_112fa9ab0,puVar14,1,0);
  puVar19 = *(undefined **)(puVar17 + lVar2);
  if (puVar19 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar5 = puVar19;
    func_0x000107c3dd20();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar20);
      puVar17 = puVar19;
      goto LAB_102680f40;
    }
    puVar6 = puVar5;
    func_0x000107c5faec();
    puVar15 = puVar14;
    func_0x000107c61170(puVar5);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db3ed8;
    puStack_b8 = puVar6;
    puStack_b0 = puVar14;
    func_0x000107c5faec();
    ppuStack_c8 = ppuVar7;
    puStack_c0 = puVar15;
    func_0x000100e8b654();
    pppuVar8 = &ppuStack_c8;
    ppuVar13 = (undefined **)PTR___sSSN_11034da80;
    func_0x000107c601dc(pppuVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,ppuVar7,ppuVar7);
    func_0x000107c6142c(puVar14);
    func_0x000107c6142c(puVar15);
    ppuVar7 = pppuVar8[2];
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
      puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102680988:
      pppuVar18 = pppuVar8 + (long)ppuVar16 * 2 + 5;
      ppuVar22 = ppuVar13;
      ppuVar9 = ppuVar16;
      do {
        if (pppuVar8[2] <= ppuVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102680f70);
          (*pcVar3)();
        }
        ppuVar24 = pppuVar18[-1];
        ppuVar23 = *pppuVar18;
        ppuVar16 = &PTR____CFConstantStringClassReference_110e5bf58;
        func_0x000107c5faec();
        if (ppuVar24 != ppuVar16 || ppuVar23 != ppuVar22) {
          ppuVar21 = ppuVar24;
          ppuVar13 = ppuVar23;
          func_0x000107c605b8(ppuVar24,ppuVar23,ppuVar16,ppuVar22,0);
          func_0x000107c61434(ppuVar23);
          func_0x000107c6142c(ppuVar22);
          ppuVar22 = ppuVar23;
          if (((ulong)ppuVar21 & 1) == 0) goto LAB_102680a0c;
        }
        ppuVar13 = ppuVar22;
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        func_0x000107c6142c(ppuVar13);
        pppuVar18 = pppuVar18 + 2;
        ppuVar22 = ppuVar13;
        if (ppuVar7 == ppuVar9) goto LAB_102680acc;
      } while( true );
    }
    puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102680acc:
    func_0x000107c6142c(pppuVar8);
    puStack_b8 = puStack_e8;
    ppuVar9 = &PTR____CFConstantStringClassReference_110db3ed8;
    func_0x000107c5faec();
    uVar12 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar10 = uVar12;
    func_0x00010011d734();
    ppuVar7 = ppuVar13;
    func_0x000107c5fa80(ppuVar9,ppuVar13,uVar12,uVar10);
    ppuVar16 = ppuVar7;
    func_0x000107c61574(puStack_e8);
    func_0x000107c6142c(ppuVar13);
    puVar5 = puVar19;
    func_0x000107c44fdc();
    func_0x000107c61180();
    ppuVar13 = ppuVar16;
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c5faec();
      ppuVar13 = ppuVar16;
      func_0x000107c5fadc();
      func_0x000107c6142c(ppuVar16);
    }
    puVar6 = puVar19;
    func_0x000107c3f6f4();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      puStack_108 = (undefined *)0x0;
      ppuVar22 = (undefined **)0x0;
      ppuVar16 = ppuVar13;
    }
    else {
      puStack_108 = puVar6;
      func_0x000107c5faec();
      ppuVar16 = ppuVar13;
      func_0x000107c61170(puVar6);
      ppuVar22 = ppuVar13;
    }
    func_0x000107c4077c(puVar19);
    puVar6 = puVar19;
    func_0x000107c49d58();
    func_0x000107c61180();
    puVar11 = puVar19;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puStack_110 = (undefined *)0x0;
      ppuVar24 = (undefined **)0x0;
      ppuVar13 = ppuVar16;
    }
    else {
      puStack_110 = puVar11;
      func_0x000107c5faec();
      ppuVar13 = ppuVar16;
      func_0x000107c61170(puVar11);
      ppuVar24 = ppuVar16;
    }
    puVar11 = puVar19;
    func_0x000107c5c910();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puStack_118 = (undefined *)0x0;
      ppuVar23 = (undefined **)0x0;
      ppuVar16 = ppuVar13;
    }
    else {
      puStack_118 = puVar11;
      func_0x000107c5faec();
      ppuVar16 = ppuVar13;
      func_0x000107c61170(puVar11);
      ppuVar23 = ppuVar13;
    }
    puVar11 = puVar19;
    func_0x000107c4abb0();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puStack_120 = (undefined *)0x0;
      ppuVar21 = (undefined **)0x0;
      ppuVar13 = ppuVar16;
    }
    else {
      puStack_120 = puVar11;
      func_0x000107c5faec();
      ppuVar13 = ppuVar16;
      func_0x000107c61170(puVar11);
      ppuVar21 = ppuVar16;
    }
    puVar11 = puVar19;
    func_0x000107c4c110();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puStack_128 = (undefined *)0x0;
      ppuVar13 = (undefined **)0x0;
      if (ppuVar22 != (undefined **)0x0) goto LAB_102680ca0;
LAB_102680ce8:
      puStack_108 = (undefined *)0x0;
      if (ppuVar24 != (undefined **)0x0) goto LAB_102680cbc;
LAB_102680cf0:
      puStack_110 = (undefined *)0x0;
    }
    else {
      puStack_128 = puVar11;
      func_0x000107c5faec();
      func_0x000107c61170(puVar11);
      if (ppuVar22 == (undefined **)0x0) goto LAB_102680ce8;
LAB_102680ca0:
      func_0x000107c5fadc(puStack_108,ppuVar22);
      func_0x000107c6142c(ppuVar22);
      if (ppuVar24 == (undefined **)0x0) goto LAB_102680cf0;
LAB_102680cbc:
      func_0x000107c5fadc(puStack_110,ppuVar24);
      func_0x000107c6142c(ppuVar24);
    }
    ppuVar16 = ppuVar9;
    func_0x000107c5fadc(ppuVar9,ppuVar7);
    if (ppuVar23 == (undefined **)0x0) {
      puStack_118 = (undefined *)0x0;
      if (ppuVar21 != (undefined **)0x0) goto LAB_102680d20;
LAB_102680d60:
      puStack_120 = (undefined *)0x0;
      if (ppuVar13 != (undefined **)0x0) goto LAB_102680d3c;
LAB_102680d68:
      puStack_128 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puStack_118,ppuVar23);
      func_0x000107c6142c(ppuVar23);
      if (ppuVar21 == (undefined **)0x0) goto LAB_102680d60;
LAB_102680d20:
      func_0x000107c5fadc(puStack_120,ppuVar21);
      func_0x000107c6142c(ppuVar21);
      if (ppuVar13 == (undefined **)0x0) goto LAB_102680d68;
LAB_102680d3c:
      func_0x000107c5fadc(puStack_128,ppuVar13);
      func_0x000107c6142c(ppuVar13);
    }
    puVar11 = PTR_PTR_1126b1ff0;
    func_0x000107c610f8();
    func_0x000107c46d58(param_1,param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puStack_108);
    func_0x000107c61170(puStack_110);
    func_0x000107c61170(ppuVar16);
    func_0x000107c61170(puStack_118);
    func_0x000107c61170(puStack_120);
    func_0x000107c61170(puStack_128);
    puVar5 = puVar11;
    func_0x0001067694ec(puVar11,&PTR____CFConstantStringClassReference_110dba0d8,
                        &PTR____CFConstantStringClassReference_110e5bff8);
    func_0x000107c61180();
    func_0x000107c6142c(ppuVar7);
    uVar4 = (ulong)ppuVar9 & 0xffffffffffff;
    if (((ulong)ppuVar7 & 0x2000000000000000) != 0) {
      uVar4 = (ulong)ppuVar7 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      puVar6 = puVar5;
      func_0x000107c4f4f0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102680f74);
        (*pcVar3)();
      }
      ppuVar7 = &PTR____CFConstantStringClassReference_110e5bbf8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110e5bbf8);
      uVar12 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      ppuVar13 = ppuVar7;
      func_0x00010676b02c(ppuVar7,uVar12);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar7);
      func_0x000107c61170(uVar12);
      func_0x000107c3d798(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(ppuVar13);
    }
    func_0x000107c3d68c(puVar20);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e30138;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e30138);
    func_0x000107c3d68c(puVar20);
    func_0x000107c61170(ppuVar13);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puVar5;
    func_0x000107c61170(uVar12);
    puVar20 = *(undefined **)(puVar17 + lVar2);
    *(undefined **)(puVar17 + lVar2) = puVar11;
  }
  func_0x000107c61170(puVar17);
  puVar17 = puVar20;
LAB_102680f40:
  func_0x000107c61170(puVar17);
  return;
LAB_102680a0c:
  puVar5 = puStack_e8;
  func_0x000107c61558();
  puStack_b8 = puStack_e8;
  if (((ulong)puVar5 & 1) == 0) {
    ppuVar13 = (undefined **)(*(long *)(puStack_e8 + 0x10) + 1);
    func_0x000100403514(0,ppuVar13,1);
  }
  uVar4 = *(ulong *)(puStack_b8 + 0x10);
  ppuVar22 = (undefined **)(uVar4 + 1);
  if (*(ulong *)(puStack_b8 + 0x18) >> 1 <= uVar4) {
    ppuVar13 = ppuVar22;
    func_0x000100403514(1 < *(ulong *)(puStack_b8 + 0x18),ppuVar22,1);
  }
  ppuVar16 = (undefined **)((long)ppuVar9 + 1);
  *(undefined ***)(puStack_b8 + 0x10) = ppuVar22;
  *(undefined ***)(puStack_b8 + uVar4 * 0x10 + 0x20) = ppuVar24;
  *(undefined ***)(puStack_b8 + uVar4 * 0x10 + 0x28) = ppuVar23;
  puStack_e8 = puStack_b8;
  if ((undefined **)((long)ppuVar7 + -1) == ppuVar9) goto LAB_102680acc;
  goto LAB_102680988;
}



/* Entry: 102680f74; end: 102680fab;  */

undefined1  [16] FUN_102680f74(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (param_1 < 5) {
    uVar1 = *(undefined8 *)(&PTR_PTR_110532330)[param_1];
    func_0x000107c5faec(uVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 102680fac; end: 102681007;  */

void FUN_102680fac(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102681008(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102681008; end: 10268168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102681008(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined1 *puVar22;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar15 = *(long *)(unaff_x20 + 0x40);
  if (lVar15 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar15 + _DAT_112fa9a98);
  puVar12 = auStack_90;
  func_0x000107c61428(puVar1,puVar12,0,0);
  uVar4 = *puVar1;
  puVar19 = (undefined1 *)puVar1[1];
  func_0x000107c61174();
  func_0x000107c61434(puVar19);
  uVar2 = param_3;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (uVar4 == uVar3 && puVar19 == puVar12) {
    func_0x000107c6142c(puVar19);
    func_0x000107c6142c(puVar12);
  }
  else {
    func_0x000107c605b8(uVar4,puVar19,uVar3,puVar12,0);
    func_0x000107c6142c(puVar19);
    func_0x000107c6142c(puVar12);
    if ((uVar4 & 1) == 0) goto LAB_102681660;
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) goto LAB_102681660;
  lVar14 = lVar5;
  func_0x000107c51a88();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = _DAT_112fa9ab0;
  puVar19 = auStack_a8;
  func_0x000107c61428(lVar15 + _DAT_112fa9ab0,puVar19,1,0);
  lVar6 = *(long *)(lVar15 + lVar5);
  if (lVar6 != 0) {
    func_0x000107c61174();
    lVar7 = lVar6;
    func_0x000107c44fdc();
    func_0x000107c61180();
    puVar12 = puVar19;
    if (lVar7 == 0) {
      func_0x000107c5faec();
      puVar12 = puVar19;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar19);
    }
    lVar17 = lVar6;
    func_0x000107c3f6f4();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_d8 = 0;
      puStack_b8 = (undefined1 *)0x0;
      puVar19 = puVar12;
    }
    else {
      lStack_d8 = lVar17;
      func_0x000107c5faec();
      puVar19 = puVar12;
      func_0x000107c61170(lVar17);
      puStack_b8 = puVar12;
    }
    func_0x000107c4077c(lVar6);
    func_0x000107c49d60(param_3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    lVar17 = lVar6;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_f0 = 0;
      puVar18 = (undefined1 *)0x0;
      puVar12 = puVar19;
    }
    else {
      lStack_f0 = lVar17;
      func_0x000107c5faec();
      puVar12 = puVar19;
      func_0x000107c61170(lVar17);
      puVar18 = puVar19;
    }
    lVar17 = lVar6;
    func_0x000107c3dd20();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_100 = 0;
      puVar22 = (undefined1 *)0x0;
      puVar19 = puVar12;
    }
    else {
      lStack_100 = lVar17;
      func_0x000107c5faec();
      puVar19 = puVar12;
      func_0x000107c61170(lVar17);
      puVar22 = puVar12;
    }
    lVar17 = lVar6;
    func_0x000107c5c910();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_110 = 0;
      puVar16 = (undefined1 *)0x0;
      puVar12 = puVar19;
    }
    else {
      lStack_110 = lVar17;
      func_0x000107c5faec();
      puVar12 = puVar19;
      func_0x000107c61170(lVar17);
      puVar16 = puVar19;
    }
    lVar17 = lVar6;
    func_0x000107c4abb0();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_118 = 0;
      puVar20 = (undefined1 *)0x0;
      puVar19 = puVar12;
    }
    else {
      lStack_118 = lVar17;
      func_0x000107c5faec();
      puVar19 = puVar12;
      func_0x000107c61170(lVar17);
      puVar20 = puVar12;
    }
    lVar17 = lVar6;
    func_0x000107c4c110();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_120 = 0;
      puVar19 = (undefined1 *)0x0;
    }
    else {
      lStack_120 = lVar17;
      func_0x000107c5faec();
      func_0x000107c61170(lVar17);
    }
    lVar17 = lVar6;
    func_0x000107c4e0b4();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lStack_e0 = 0;
    }
    else {
      uVar9 = 0;
      func_0x0001011434e4(0);
      lStack_e0 = lVar17;
      func_0x000107c5fc54(lVar17,uVar9);
      func_0x000107c61170(lVar17);
    }
    lVar17 = lVar6;
    func_0x000107c4455c();
    func_0x000107c61180();
    if (lVar17 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = lVar17;
      func_0x000107c5fe10();
      func_0x000107c61170(lVar17);
    }
    func_0x000107c4a284();
    if (puStack_b8 == (undefined1 *)0x0) {
      lStack_d8 = 0;
    }
    else {
      func_0x000107c5fadc(lStack_d8,puStack_b8);
      func_0x000107c6142c(puStack_b8);
    }
    if (puVar18 == (undefined1 *)0x0) {
      lStack_f0 = 0;
      if (puVar22 != (undefined1 *)0x0) goto LAB_102681408;
LAB_102681488:
      lStack_d0 = 0;
      if (puVar16 != (undefined1 *)0x0) goto LAB_102681428;
LAB_102681494:
      lStack_100 = 0;
      if (puVar20 != (undefined1 *)0x0) goto LAB_102681448;
LAB_1026814a0:
      lStack_118 = 0;
      if (puVar19 != (undefined1 *)0x0) goto LAB_102681464;
LAB_1026814a8:
      lStack_120 = 0;
    }
    else {
      func_0x000107c5fadc(lStack_f0,puVar18);
      func_0x000107c6142c(puVar18);
      if (puVar22 == (undefined1 *)0x0) goto LAB_102681488;
LAB_102681408:
      func_0x000107c5fadc(lStack_100,puVar22);
      func_0x000107c6142c(puVar22);
      lStack_d0 = lStack_100;
      if (puVar16 == (undefined1 *)0x0) goto LAB_102681494;
LAB_102681428:
      func_0x000107c5fadc(lStack_110,puVar16);
      func_0x000107c6142c(puVar16);
      lStack_100 = lStack_110;
      if (puVar20 == (undefined1 *)0x0) goto LAB_1026814a0;
LAB_102681448:
      func_0x000107c5fadc(lStack_118,puVar20);
      func_0x000107c6142c(puVar20);
      if (puVar19 == (undefined1 *)0x0) goto LAB_1026814a8;
LAB_102681464:
      func_0x000107c5fadc(lStack_120,puVar19);
      func_0x000107c6142c(puVar19);
    }
    if (lStack_e0 == 0) {
      lVar17 = 0;
      if (lVar21 != 0) goto LAB_1026814e0;
LAB_102681514:
      lVar13 = 0;
    }
    else {
      uVar9 = 0;
      func_0x0001011434e4(0);
      lVar17 = lStack_e0;
      func_0x000107c5fc48(lStack_e0,uVar9);
      func_0x000107c6142c(lStack_e0);
      if (lVar21 == 0) goto LAB_102681514;
LAB_1026814e0:
      lVar13 = lVar21;
      func_0x000107c5fe08(lVar21,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar21);
    }
    puVar10 = PTR_PTR_1126b1ff0;
    func_0x000107c610f8();
    func_0x000107c46d58(param_1,param_2);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lStack_d8);
    func_0x000107c61170(lStack_f0);
    func_0x000107c61170(lStack_d0);
    func_0x000107c61170(lStack_100);
    func_0x000107c61170(lStack_118);
    func_0x000107c61170(lStack_120);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar13);
    puVar8 = puVar10;
    func_0x0001067694ec(puVar10,&PTR____CFConstantStringClassReference_110dba0d8,
                        &PTR____CFConstantStringClassReference_110e5bfd8);
    func_0x000107c61180();
    ppuVar11 = &PTR____CFConstantStringClassReference_110e30138;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e30138);
    func_0x000107c3d68c(lVar14);
    func_0x000107c61170(ppuVar11);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar14);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puVar8;
    func_0x000107c61170(uVar9);
    lVar14 = *(long *)(lVar15 + lVar5);
    *(undefined **)(lVar15 + lVar5) = puVar10;
  }
  func_0x000107c61170(lVar15);
  lVar15 = lVar14;
LAB_102681660:
  func_0x000107c61170(lVar15);
  return;
}



/* Entry: 10268168c; end: 1026816d7;  */

void FUN_10268168c(long param_1,undefined8 param_2)

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



/* Entry: 1026816d8; end: 10268174b;  */

void FUN_1026816d8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10268174c; end: 10268176b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268174c(undefined8 param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_10267fbf4();
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar4 != 0) {
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      puVar1 = (ulong *)(param_2 + _DAT_112fa9a98);
      func_0x000107c61428(puVar1,auStack_c0,0,0);
      if (((uVar5 != *puVar1 || param_3 != puVar1[1]) &&
          (uVar4 = uVar5, func_0x000107c605b8(uVar5,param_3,*puVar1,puVar1[1],0), (uVar4 & 1) == 0))
         || (lVar6 = _DAT_112fa9ac0, func_0x000107c61428(param_2 + _DAT_112fa9ac0,auStack_d8,0,0),
            (*(byte *)(param_2 + lVar6) & 1) == 0)) {
        func_0x00010267fd34(uVar5,param_3);
      }
      func_0x000107c6142c(param_3);
    }
  }
  lVar6 = _DAT_112fa9ab0;
  func_0x000107c61428(param_2 + _DAT_112fa9ab0,auStack_78,0,0);
  lVar6 = *(long *)(param_2 + lVar6);
  if (lVar6 != 0) {
    func_0x000107c61174();
    FUN_10267fe38();
    func_0x000107c61170(lVar6);
  }
  lVar6 = _DAT_112fa9ac0;
  func_0x000107c61428(param_2 + _DAT_112fa9ac0,auStack_90,0,0);
  if (*(char *)(param_2 + lVar6) == '\x01') {
    FUN_102680188(param_2);
  }
  puVar2 = (undefined8 *)(param_2 + _DAT_112fa9a98);
  func_0x000107c61428(puVar2,auStack_a8,0,0);
  uVar8 = *puVar2;
  uVar3 = puVar2[1];
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c61434(uVar3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c5fadc(uVar8,uVar3);
    func_0x000107c57408(lVar7);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c6142c(uVar3);
  FUN_10268051c(param_1,param_2);
  return;
}



/* Entry: 10268176c; end: 1026817a7;  */

void FUN_10268176c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3360);
  return;
}



/* Entry: 1026817a8; end: 1026818d7;  */

undefined * FUN_1026817a8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026818d8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1026865b8();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112eb33f8;
    func_0x0001000285a8(0x112eb33f8,&UNK_10dac8690);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026818d8; end: 10268190f;  */

void FUN_1026818d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102681008(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102681910; end: 102681953;  */

void FUN_102681910(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102681954; end: 10268195f;  */

void FUN_102681954(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102681960; end: 102681a87;  */

void FUN_102681960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3408,&UNK_10dac86c0);
  puVar1 = &UNK_1105323a0;
  func_0x000107c613fc(&UNK_1105323a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102681a88,puVar1);
  return;
}



/* Entry: 102681a88; end: 102681a93;  */

void FUN_102681a88(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10268209c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x18) = uStack_48;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1105323b8;
  return;
}



/* Entry: 102681a94; end: 102681ad7;  */

void FUN_102681a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102681ad8; end: 102681bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102681ad8(double param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
  dVar4 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    dVar4 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    param_1 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  else {
    func_0x000107c515a0();
    func_0x000107c61170(lVar2);
    param_1 = param_1 + -80.0;
    uVar5 = 0;
    uVar6 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_112fa9aa8);
  puVar3 = puVar1;
  func_0x000107c61428(puVar1,auStack_68,0,0);
  FUN_102681bf8(*puVar1,puVar1[1],puVar1[2],puVar1[3],dVar4,uVar5,param_1,uVar6);
  if (puVar3 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112fa9aa0);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    FUN_102681e98(*puVar1,puVar1[1],dVar4,uVar5,param_1,uVar6);
  }
  return;
}



/* Entry: 102681bf8; end: 102681e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102681bf8(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined8 param_10)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dStack_98;
  
  lVar8 = _DAT_112fecfb0;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(lVar10 + _DAT_112fecfb0);
  dStack_98 = param_3;
  dVar14 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    bVar3 = false;
    bVar4 = true;
    if (param_1 <= param_3) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_2) && !NAN(param_4)) {
        bVar3 = param_2 == param_4;
        bVar4 = param_4 <= param_2;
      }
    }
    if (!bVar4 || bVar3) {
      dVar11 = ABS(param_2 - param_4);
      bVar3 = false;
      bVar4 = true;
      if (ABS(param_1 - param_3) <= 2.220446049250313e-16) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar11)) {
          bVar3 = dVar11 == 2.220446049250313e-16;
          bVar4 = 2.220446049250313e-16 <= dVar11;
        }
      }
      if (bVar4 && !bVar3) {
        lVar7 = lVar6;
        func_0x000107c4c458();
        func_0x000107c61180();
        lVar8 = *(long *)(lVar10 + lVar8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 == 0) {
          dStack_98 = 0.0;
          dVar14 = 0.0;
        }
        else {
          func_0x000107c3ec60();
          func_0x000107c61170(lVar8);
          dStack_98 = dStack_98 - (param_6 + param_8);
          dVar14 = dVar14 - (param_5 + param_7);
        }
        lVar8 = lVar7;
        func_0x000107c3f24c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        func_0x000107c61180();
        uVar12 = *(undefined8 *)(lVar8 + _DAT_112fed000);
        pdVar1 = (double *)(lVar8 + _DAT_112fecfe8);
        func_0x000108d316c0(uVar12,*(undefined8 *)(lVar8 + _DAT_112fecff8),*pdVar1,dStack_98,dVar14)
        ;
        dVar14 = *pdVar1;
        dVar11 = pdVar1[1];
        bVar3 = false;
        bVar4 = true;
        if (param_1 <= dVar14) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar14) && !NAN(param_3)) {
            bVar3 = dVar14 == param_3;
            bVar4 = param_3 <= dVar14;
          }
        }
        bVar2 = true;
        bVar5 = false;
        if (!bVar4 || bVar3) {
          bVar2 = false;
          bVar5 = true;
          if (!NAN(dVar11) && !NAN(param_2)) {
            bVar2 = dVar11 < param_2;
            bVar5 = false;
          }
        }
        bVar3 = false;
        bVar4 = true;
        if (bVar2 == bVar5) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar11) && !NAN(param_4)) {
            bVar3 = dVar11 == param_4;
            bVar4 = param_4 <= dVar11;
          }
        }
        if (!bVar4 || bVar3) {
          uVar15 = NEON_fminnm(uVar12,0x4030000000000000);
          puVar9 = PTR_PTR_1126b1e08;
          func_0x000107c61168(PTR_PTR_1126b1e08);
          func_0x000107c4e788(lVar7);
          uVar13 = uVar12;
          func_0x000107c41e58(lVar7);
          func_0x000107c61174(lVar6);
          func_0x000107c3f0e4(dVar14,dVar11,uVar15,uVar12,uVar13,puVar9,param_10,lVar6);
          func_0x000107c61180();
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar6);
        }
        else {
          func_0x000107c60a04((param_1 + param_3) * 0.5,(param_2 + param_4) * 0.5);
          FUN_102681e98();
          func_0x000107c61170(lVar6);
          func_0x000107c615e8(lVar7);
        }
        func_0x000107c61170(lVar8);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102681e98; end: 102682053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102681e98(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c43e84();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      dVar7 = param_1;
      func_0x000103b3e210(param_1,param_2);
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar3;
        func_0x000107c4c458();
        func_0x000107c61180();
        uVar5 = uVar4;
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x20)) +
                    0x80))();
        func_0x000107c5ea20(uVar4);
        if ((int)uVar5 != 1) {
          dVar8 = (double)NEON_fminnm(dVar7,0x4032000000000000);
          dVar7 = 14.0;
          if (14.0 <= dVar8) {
            dVar7 = dVar8;
          }
        }
        dVar8 = dVar7;
        func_0x000107c3e50c(dVar7,lVar2);
        puVar6 = PTR_PTR_1126b1e08;
        dVar9 = dVar8;
        func_0x000107c61168(PTR_PTR_1126b1e08);
        func_0x000107c41e58(uVar4);
        func_0x000107c3f0e4(param_1,param_2,dVar7,dVar8,dVar9,puVar6,param_4,uVar3);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(uVar4);
        return puVar6;
      }
      func_0x000107c61170(uVar3);
    }
    func_0x000107c615e8(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 102682054; end: 102682087;  */

void FUN_102682054(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102682088; end: 10268209b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102682088(double param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
  dVar4 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    dVar4 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    param_1 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  else {
    func_0x000107c515a0();
    func_0x000107c61170(lVar2);
    param_1 = param_1 + -80.0;
    uVar5 = 0;
    uVar6 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_112fa9aa8);
  puVar3 = puVar1;
  func_0x000107c61428(puVar1,auStack_68,0,0);
  FUN_102681bf8(*puVar1,puVar1[1],puVar1[2],puVar1[3],dVar4,uVar5,param_1,uVar6);
  if (puVar3 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112fa9aa0);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    FUN_102681e98(*puVar1,puVar1[1],dVar4,uVar5,param_1,uVar6);
  }
  return;
}



/* Entry: 10268209c; end: 1026820bb;  */

void FUN_10268209c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3450);
  return;
}



/* Entry: 1026820bc; end: 1026821cb;  */

void FUN_1026820bc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  code *pcVar6;
  
  func_0x0001000285a8(0x112eb3580,&UNK_10dac8798);
  plVar1 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c4c428();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x0001000b637c();
  func_0x000107c61170(plVar1);
  puVar3 = &UNK_110532400;
  func_0x000107c613fc(&UNK_110532400,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110532428;
  func_0x000107c613fc(&UNK_110532428,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(*plVar2 + 0x60);
  func_0x000107c6157c(param_2);
  pcVar5 = FUN_102682690;
  puVar3 = puVar4;
  (*pcVar6)(FUN_102682690);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar3 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar6,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 1026821cc; end: 102682453;  */

void FUN_1026821cc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar9 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_110532450;
    func_0x000107c613fc(&UNK_110532450,0x28,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    puVar3 = &UNK_110532478;
    func_0x000107c613fc(&UNK_110532478,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10268269c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102682708;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10114375c;
    puStack_a0 = &UNK_110532490;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1105324c8;
    func_0x000107c613fc(&UNK_1105324c8,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(long *)(puVar3 + 0x20) = param_2;
    puVar5 = &UNK_1105324f0;
    func_0x000107c613fc(&UNK_1105324f0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x102682744;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_98 = FUN_102682750;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1011437a4;
    puStack_a0 = &UNK_110532508;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110532540;
    func_0x000107c613fc(&UNK_110532540,0x28,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    puVar7 = &UNK_110532568;
    func_0x000107c613fc(&UNK_110532568,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_10268279c;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = FUN_1026827a8;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110532580;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c4c7c0(uVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102682454; end: 1026824db;  */

void FUN_102682454(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puStack_48;
  
  if (param_2 == 2) {
    (*param_3)();
  }
  func_0x000107c5cfac(*(undefined8 *)(param_5 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  puStack_48 = puVar1;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1026824dc; end: 102682633;  */

void FUN_1026824dc(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x38);
  uVar1 = 0x585f504154;
  if (lVar7 != 4) {
    uVar1 = 0x504154;
  }
  uVar2 = 0xe500000000000000;
  if (lVar7 != 4) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0xea00000000004e57;
  uVar5 = 0x4f445f4550495753;
  if (1 < lVar7 - 1U) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar4 + 0x30))(uVar5,uVar3,uVar6,lVar4);
  func_0x000107c6142c(uVar3);
  (*param_2)(3);
  return;
}


