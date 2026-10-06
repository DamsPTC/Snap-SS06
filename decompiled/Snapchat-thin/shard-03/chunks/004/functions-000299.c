/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028bb438; end: 1028bb45f;  */

void FUN_1028bb438(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 1028bb460; end: 1028bb47b;  */

void FUN_1028bb460(long param_1,long param_2)

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



/* Entry: 1028bb47c; end: 1028bb4bb;  */

void FUN_1028bb47c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028bb4bc; end: 1028bb4e7;  */

long * FUN_1028bb4bc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1028bb4e8; end: 1028bb52b;  */

long FUN_1028bb4e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1028bb52c; end: 1028bb573;  */

void FUN_1028bb52c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001028bb540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1028bb574; end: 1028bb5bb;  */

void FUN_1028bb574(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    FUN_1028bb4bc(unaff_x20 + 0x10,uVar1);
    (**(code **)(lVar2 + 0x30))(uVar1,lVar2);
  }
  return;
}



/* Entry: 1028bb5bc; end: 1028bb5db;  */

void FUN_1028bb5bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028bb5dc; end: 1028bb5f3;  */

void FUN_1028bb5dc(long param_1,long param_2)

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



/* Entry: 1028bb5f4; end: 1028bb6bb;  */

void FUN_1028bb5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110562438;
  func_0x000107c613fc(&UNK_110562438,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1028bbbd8,puVar1);
  return;
}



/* Entry: 1028bb6bc; end: 1028bbbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bb6bc(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auStack_128 [40];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000100083b20(&puStack_100);
  puVar4 = puStack_100;
  puVar2 = puStack_100;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbcc);
    (*pcVar1)();
  }
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0c6d70);
  puVar4 = puVar2;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(uVar3);
  plVar16 = (long *)0x0;
  if ((int)puVar4 != 0) {
    func_0x000100083b20(alStack_70);
    uVar3 = *(undefined8 *)(alStack_70[0] + _DAT_11301aef0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(alStack_70[0]);
    func_0x000100083b20(auStack_98);
    func_0x000100083b20(&lStack_a0);
    lVar5 = lStack_a0;
    func_0x000107c40670();
    func_0x000107c61180();
    func_0x000107c61170(lStack_a0);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd0);
      (*pcVar1)();
    }
    func_0x000100083b20(&uStack_a8);
    func_0x000100083b20(&lStack_b0);
    lVar6 = 0;
    func_0x0001028baa54();
    lVar7 = lVar6;
    func_0x000107c610f8();
    func_0x000107c61614(lVar7 + _DAT_112ec7c58,0);
    func_0x000107c61614(lVar7 + _DAT_112ec7c60,0);
    *(undefined8 *)(lVar7 + _DAT_112ec7c68) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c70) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c78) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c80) = 0;
    lVar9 = _DAT_112ec7ca8;
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar9) = puVar4;
    *(undefined8 *)(lVar7 + _DAT_112ec7cb0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7cb8) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c88) = uVar3;
    FUN_1028bb4e8(auStack_98,lVar7 + _DAT_112ec7c90);
    *(undefined8 *)(lVar7 + _DAT_112ec7c98) = uStack_a8;
    func_0x000107c615f0(uVar3);
    uVar8 = uStack_a8;
    func_0x000107c61174();
    lVar9 = lStack_b0;
    func_0x000107c5cc5c();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd4);
      (*pcVar1)();
    }
    lVar10 = lStack_b0;
    func_0x000107c5cc50();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd8);
      (*pcVar1)();
    }
    lVar11 = 0;
    FUN_1028bbf00();
    lVar12 = lVar11;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112ec7d10) = 0;
    *(long *)(lVar12 + _DAT_112ec7d00) = lVar9;
    *(long *)(lVar12 + _DAT_112ec7d08) = lVar10;
    plVar16 = &lStack_c0;
    lStack_c0 = lVar12;
    lStack_b8 = lVar11;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    *(long **)(lVar7 + _DAT_112ec7ca0) = plVar16;
    plVar16 = &lStack_d0;
    lStack_d0 = lVar7;
    lStack_c8 = lVar6;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar9 != 0) {
      FUN_1028bb4e8(auStack_98,auStack_128);
      puVar2 = &UNK_1105624d0;
      func_0x000107c613fc(&UNK_1105624d0,0x38,7);
      func_0x0001028bb54c(auStack_128,puVar2 + 0x10);
      uStack_e0 = 0x1028bbc1c;
      puStack_100 = puVar4;
      uStack_f8 = 0x42000000;
      pcStack_f0 = FUN_102448614;
      puStack_e8 = &UNK_1105624e8;
      ppuVar13 = &puStack_100;
      puStack_d8 = puVar2;
      func_0x000107c60bc4(ppuVar13);
      puVar2 = puStack_d8;
      lVar7 = lVar9;
      func_0x000107c61174(lVar9);
      func_0x000107c61574(puVar2);
      lVar6 = lVar7;
      func_0x000107c5c320(lVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61170(lVar7);
      func_0x000107c3e924(lVar6);
      func_0x000107c61170(lVar6);
    }
    func_0x0001000a8868(auStack_98,uStack_80);
    uVar15 = uStack_80;
    (**(code **)(lStack_78 + 0x28))(uStack_80,lStack_78);
    puVar2 = &UNK_110562480;
    func_0x000107c613fc(&UNK_110562480,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,plVar16);
    uStack_e0 = 0x1028bbbf8;
    puStack_100 = puVar4;
    uStack_f8 = 0x42000000;
    pcStack_f0 = (code *)&UNK_10083fefc;
    puStack_e8 = &UNK_110562498;
    ppuVar13 = &puStack_100;
    puStack_d8 = puVar2;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_d8);
    uVar14 = uVar15;
    func_0x000107c5c320(uVar15);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(uVar15);
    uVar15 = *(undefined8 *)((long)plVar16 + _DAT_112ec7ca8);
    func_0x000107c61174(uVar15);
    func_0x000107c3e924(uVar14);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(plVar16);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(uVar3);
    func_0x0001000834e4(auStack_98);
  }
  *param_1 = plVar16;
  return;
}



/* Entry: 1028bbbd8; end: 1028bbc2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bbbd8(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long *plVar16;
  undefined1 auStack_128 [40];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000100083b20(&puStack_100,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  puVar4 = puStack_100;
  puVar2 = puStack_100;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbcc);
    (*pcVar1)();
  }
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0c6d70);
  puVar4 = puVar2;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(uVar3);
  plVar16 = (long *)0x0;
  if ((int)puVar4 != 0) {
    func_0x000100083b20(alStack_70);
    uVar3 = *(undefined8 *)(alStack_70[0] + _DAT_11301aef0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(alStack_70[0]);
    func_0x000100083b20(auStack_98);
    func_0x000100083b20(&lStack_a0);
    lVar5 = lStack_a0;
    func_0x000107c40670();
    func_0x000107c61180();
    func_0x000107c61170(lStack_a0);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd0);
      (*pcVar1)();
    }
    func_0x000100083b20(&uStack_a8);
    func_0x000100083b20(&lStack_b0);
    lVar6 = 0;
    func_0x0001028baa54();
    lVar7 = lVar6;
    func_0x000107c610f8();
    func_0x000107c61614(lVar7 + _DAT_112ec7c58,0);
    func_0x000107c61614(lVar7 + _DAT_112ec7c60,0);
    *(undefined8 *)(lVar7 + _DAT_112ec7c68) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c70) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c78) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c80) = 0;
    lVar9 = _DAT_112ec7ca8;
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar9) = puVar4;
    *(undefined8 *)(lVar7 + _DAT_112ec7cb0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7cb8) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ec7c88) = uVar3;
    FUN_1028bb4e8(auStack_98,lVar7 + _DAT_112ec7c90);
    *(undefined8 *)(lVar7 + _DAT_112ec7c98) = uStack_a8;
    func_0x000107c615f0(uVar3);
    uVar8 = uStack_a8;
    func_0x000107c61174();
    lVar9 = lStack_b0;
    func_0x000107c5cc5c();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd4);
      (*pcVar1)();
    }
    lVar10 = lStack_b0;
    func_0x000107c5cc50();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbbd8);
      (*pcVar1)();
    }
    lVar11 = 0;
    FUN_1028bbf00();
    lVar12 = lVar11;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112ec7d10) = 0;
    *(long *)(lVar12 + _DAT_112ec7d00) = lVar9;
    *(long *)(lVar12 + _DAT_112ec7d08) = lVar10;
    plVar16 = &lStack_c0;
    lStack_c0 = lVar12;
    lStack_b8 = lVar11;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    *(long **)(lVar7 + _DAT_112ec7ca0) = plVar16;
    plVar16 = &lStack_d0;
    lStack_d0 = lVar7;
    lStack_c8 = lVar6;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar9 != 0) {
      FUN_1028bb4e8(auStack_98,auStack_128);
      puVar2 = &UNK_1105624d0;
      func_0x000107c613fc(&UNK_1105624d0,0x38,7);
      func_0x0001028bb54c(auStack_128,puVar2 + 0x10);
      uStack_e0 = 0x1028bbc1c;
      puStack_100 = puVar4;
      uStack_f8 = 0x42000000;
      pcStack_f0 = FUN_102448614;
      puStack_e8 = &UNK_1105624e8;
      ppuVar13 = &puStack_100;
      puStack_d8 = puVar2;
      func_0x000107c60bc4(ppuVar13);
      puVar2 = puStack_d8;
      lVar7 = lVar9;
      func_0x000107c61174(lVar9);
      func_0x000107c61574(puVar2);
      lVar6 = lVar7;
      func_0x000107c5c320(lVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61170(lVar7);
      func_0x000107c3e924(lVar6);
      func_0x000107c61170(lVar6);
    }
    func_0x0001000a8868(auStack_98,uStack_80);
    uVar15 = uStack_80;
    (**(code **)(lStack_78 + 0x28))(uStack_80,lStack_78);
    puVar2 = &UNK_110562480;
    func_0x000107c613fc(&UNK_110562480,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,plVar16);
    uStack_e0 = 0x1028bbbf8;
    puStack_100 = puVar4;
    uStack_f8 = 0x42000000;
    pcStack_f0 = (code *)&UNK_10083fefc;
    puStack_e8 = &UNK_110562498;
    ppuVar13 = &puStack_100;
    puStack_d8 = puVar2;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c61574(puStack_d8);
    uVar14 = uVar15;
    func_0x000107c5c320(uVar15);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(uVar15);
    uVar15 = *(undefined8 *)((long)plVar16 + _DAT_112ec7ca8);
    func_0x000107c61174(uVar15);
    func_0x000107c3e924(uVar14);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(plVar16);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(uVar3);
    func_0x0001000834e4(auStack_98);
  }
  *param_1 = plVar16;
  return;
}



/* Entry: 1028bbc2c; end: 1028bbdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bbc2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long alStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_68 = param_2;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = _DAT_112ec7d10;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112ec7d10);
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112ec7d10) = 0;
    func_0x000107c42838(*(undefined8 *)(unaff_x20 + _DAT_112ec7d00));
    func_0x000107c61170(lVar7);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec7d08);
  uVar6 = param_1;
  FUN_1028bbf20(param_1);
  uVar4 = uVar6;
  func_0x000107c5eec4(auStack_70 + lVar1);
  func_0x000107c5eeac();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  (**(code **)(lVar5 + 8))(auStack_70 + lVar1,lVar3);
  func_0x000107c4a274(param_1);
  *(long *)((long)alStack_80 + lVar1) = unaff_x20;
  func_0x000107c3ed6c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar8;
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  func_0x000107c4ab88(*(undefined8 *)(unaff_x20 + _DAT_112ec7d00));
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 1028bbdbc; end: 1028bbe07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bbdbc(long param_1)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112ec7d10) != 0 && param_1 == *(long *)(unaff_x20 + _DAT_112ec7d10)
     ) {
    *(undefined8 *)(unaff_x20 + _DAT_112ec7d10) = 0;
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112ec7d00),
             PTR_s_endLaunchTopicViewerMusicFeature_1125c2ca8,param_1);
  return;
}



/* Entry: 1028bbe08; end: 1028bbe57; -[_TtC34SCSoundShareMessageRenderingPlugin27SoundShareTopicPageLauncher didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x0001028bbe40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028bbe44) */

void FUN_1028bbe08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028bbdbc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028bbe58; end: 1028bbeb7; -[_TtC34SCSoundShareMessageRenderingPlugin27SoundShareTopicPageLauncher init] */

void FUN_1028bbe58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSoundShareMessageRenderingPlugin.SoundShareTopicPageLauncher",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bbe84);
  (*pcVar1)();
}



/* Entry: 1028bbeb8; end: 1028bbeff; -[_TtC34SCSoundShareMessageRenderingPlugin27SoundShareTopicPageLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028bbee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028bbee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bbeb8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7d00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7d08));
  return;
}



/* Entry: 1028bbf00; end: 1028bbf1f;  */

void FUN_1028bbf00(void)

{
  func_0x000107c61168(&PTR_PTR_11286afa0);
  return;
}



/* Entry: 1028bbf20; end: 1028bc4bb;  */

void FUN_1028bbf20(double param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 auStack_a0 [2];
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar8 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  puVar11 = param_2;
  func_0x000107c5cda4(param_2);
  func_0x000107c61180();
  puVar2 = puVar11;
  func_0x000107c2bb50();
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c5cab0();
  func_0x000107c61180();
  puVar3 = puVar11;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  puVar5 = puVar11;
  func_0x000107c5faec();
  puStack_78 = puVar7;
  puStack_70 = puVar5;
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c5ede0();
    puVar5 = (undefined *)0x1;
    (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lVar8,1,1,puVar11);
  }
  else {
    func_0x000107c61174();
    puVar5 = puVar11;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar12 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    puVar5 = puVar7;
    func_0x000107c5edd0(lVar8,puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c6142c(puVar7);
  }
  puVar11 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  puVar7 = puVar5;
  if (puVar11 == (undefined *)0x0) {
LAB_1028bc10c:
    puVar11 = (undefined *)0x0;
    puVar5 = (undefined *)0xf000000000000000;
  }
  else {
    puVar12 = puVar11;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar7 = puVar5;
    if (puVar12 == (undefined *)0x0) goto LAB_1028bc10c;
    puVar10 = puVar12;
    func_0x000107c4a8c4(puVar12);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    puVar11 = puVar10;
    func_0x000107c5ee30(puVar10);
    puVar7 = puVar5;
    func_0x000107c61170(puVar10);
  }
  puVar12 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
LAB_1028bc184:
    puVar10 = (undefined *)0x0;
LAB_1028bc188:
    puVar7 = (undefined *)0xf000000000000000;
  }
  else {
    puVar10 = puVar12;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar10 == (undefined *)0x0) goto LAB_1028bc188;
    puVar12 = puVar10;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    if (puVar12 == (undefined *)0x0) goto LAB_1028bc184;
    puVar10 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
  }
  func_0x000107c4161c(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bc4b4);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bc4b8);
    (*pcVar1)();
  }
  if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bc4bc);
    (*pcVar1)();
  }
  uVar4 = 0;
  func_0x0001043b1a4c();
  uStack_80 = uVar4;
  func_0x000107c610f8();
  *(int *)(lVar8 + -0x10) = (int)param_1;
  *(undefined **)(lVar8 + -0x20) = puVar10;
  *(undefined **)(lVar8 + -0x18) = puVar7;
  func_0x0001043b1198(uVar4,puVar2,puVar3,puVar6,puStack_70,puStack_78,lVar8,puVar11,puVar5);
  func_0x000107c4fd3c();
  func_0x000107c61180();
  if (param_2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_1028bc470;
  }
  puVar11 = param_2;
  func_0x000107c5cda4();
  func_0x000107c61180();
  puVar6 = puVar11;
  func_0x000107c2bb50();
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c5cab0();
  func_0x000107c61180();
  puVar5 = puVar11;
  func_0x000107c5faec();
  puStack_78 = puVar3;
  puStack_70 = puVar5;
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c3e19c(param_2);
  func_0x000107c61180();
  puVar5 = puVar11;
  func_0x000107c5faec();
  puVar7 = puVar3;
  func_0x000107c61170(puVar11);
  puVar11 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c5ede0();
    puVar12 = (undefined *)0x1;
    (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lStack_68,1,1,puVar11);
  }
  else {
    func_0x000107c61174();
    puVar12 = puVar11;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar10 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170(puVar12);
    puVar12 = puVar7;
    func_0x000107c5edd0(lStack_68,puVar10);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c6142c(puVar7);
  }
  puVar11 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar11 = puVar12;
LAB_1028bc3a8:
    puVar12 = (undefined *)0xf000000000000000;
  }
  else {
    puVar7 = puVar11;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = puVar12;
    if (puVar7 == (undefined *)0x0) goto LAB_1028bc3a8;
    puVar10 = puVar7;
    func_0x000107c4a8c4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar10;
    func_0x000107c5ee30(puVar10);
    puVar11 = puVar12;
    func_0x000107c61170(puVar10);
  }
  puVar10 = param_2;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
LAB_1028bc41c:
    puVar9 = (undefined *)0x0;
LAB_1028bc420:
    puVar11 = (undefined *)0xf000000000000000;
  }
  else {
    puVar9 = puVar10;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    if (puVar9 == (undefined *)0x0) goto LAB_1028bc420;
    puVar10 = puVar9;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if (puVar10 == (undefined *)0x0) goto LAB_1028bc41c;
    puVar9 = puVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar10);
  }
  uVar4 = uStack_80;
  func_0x000107c610f8(uStack_80);
  *(undefined4 *)(lVar8 + -0x10) = 0;
  *(undefined **)(lVar8 + -0x20) = puVar9;
  *(undefined **)(lVar8 + -0x18) = puVar11;
  func_0x0001043b1198(uVar4,puVar6,puStack_70,puStack_78,puVar5,puVar3,lStack_68,puVar7,puVar12);
  func_0x000107c61170(param_2);
LAB_1028bc470:
  func_0x0001043ade18(0);
  func_0x000107c610f8();
  func_0x0001043ad274(0,puVar2,puVar6);
  return;
}



/* Entry: 1028bc4bc; end: 1028bc4cb; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7d40));
  return;
}



/* Entry: 1028bc4cc; end: 1028bc50b; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin setActiveConversationIdObservable:] */

void FUN_1028bc4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028bc50c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028bc50c; end: 1028bc62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc50c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar5 = _DAT_112ec7d40;
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7d40);
  *(long *)(unaff_x20 + _DAT_112ec7d40) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    puVar1 = &UNK_110562780;
    func_0x000107c613fc(&UNK_110562780,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    uStack_50 = 0x1028bfdec;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b6fe98;
    puStack_58 = &UNK_110562a90;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    lVar3 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar2);
    param_1 = lVar5;
    lVar5 = lVar3;
  }
  func_0x000107c61170(param_1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7dc0);
  *(long *)(unaff_x20 + _DAT_112ec7dc0) = lVar5;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1028bc630; end: 1028bc72f;  */

void FUN_1028bc630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uStack_60 = 0x1028bfdf4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b61264;
  puStack_68 = &UNK_110562ab8;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  uStack_60 = 0x1028bfdfc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10083fefc;
  puStack_68 = &UNK_110562ae0;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1028bc730; end: 1028bc7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc730(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec7dc8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_1028bc7c4,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1028bc7c4; end: 1028bc7f3;  */

void FUN_1028bc7c4(undefined8 *param_1)

{
  func_0x000107c6142c(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1028bc7f4; end: 1028bc88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc7f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec7dc8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_50 = param_1;
    func_0x000100075034(FUN_1028bfe04,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1028bc890; end: 1028bc89f; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7d48));
  return;
}



/* Entry: 1028bc8a0; end: 1028bc8d3; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7d48);
  *(undefined8 *)(param_1 + _DAT_112ec7d48) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028bc8d4; end: 1028bc8f3; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc8d4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7d50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028bc8f4; end: 1028bc907; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bc8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7d50,param_3);
  return;
}



/* Entry: 1028bc908; end: 1028bd0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028bc908(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x20;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uStack_108;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *apuStack_98 [3];
  undefined8 uStack_80;
  
  uVar24 = param_2;
  FUN_1028bd0b0();
  if (param_1 == 0) {
    return 0;
  }
  uVar7 = param_1;
  FUN_1028bf61c();
  uVar26 = uVar24;
  FUN_1028bd198();
  uVar27 = param_1;
  func_0x000107c447c8();
  uVar8 = uVar26;
  if ((int)uVar27 != 0) {
    uVar27 = param_1;
    func_0x000107c40460();
    func_0x000107c61180();
    if (uVar27 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1028bd0b0);
      (*pcVar4)();
    }
    uVar28 = uVar27;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(uVar27);
    uVar8 = uVar26;
    if (uVar28 != 0) {
      uStack_d0 = uVar28;
      func_0x000107c5faec();
      uVar8 = uVar26;
      func_0x000107c61170(uVar28);
      goto LAB_1028bc9b8;
    }
  }
  uStack_d0 = 0;
  uVar26 = 0xe000000000000000;
LAB_1028bc9b8:
  uVar27 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (uVar27 == 0) {
    uVar28 = 0;
    uVar27 = 0xe000000000000000;
    uVar25 = uVar8;
  }
  else {
    uVar28 = uVar27;
    func_0x000107c5faec();
    uVar25 = uVar8;
    func_0x000107c61170(uVar27);
    uVar27 = uVar8;
  }
  uVar8 = param_1;
  func_0x0001028bf6e4();
  uVar9 = param_1;
  func_0x000107c5d0f0();
  bVar5 = (int)uVar9 == 2;
  if (*(char *)(unaff_x20 + _DAT_112ec7d70) == '\x01') {
    uVar9 = param_2;
    func_0x0001070b1c70();
    uStack_108 = (uint)uVar9 ^ 1;
  }
  else {
    uStack_108 = 0;
  }
  bVar6 = ((uint)param_3 & 0xff) != 1;
  uVar9 = 0;
  if (bVar6) {
    uVar9 = uVar8;
  }
  uVar11 = uVar25;
  uVar1 = uVar8;
  uVar13 = 0xe000000000000000;
  if (bVar6) {
    uVar1 = 0;
    uVar11 = 0xe000000000000000;
    uVar13 = uVar25;
  }
  bVar6 = (((uint)param_3 ^ 0xffffffff) & 0xff) != 0;
  uVar14 = 0;
  if (bVar6) {
    uVar14 = uVar9;
  }
  uVar9 = 0xe000000000000000;
  if (bVar6) {
    uVar9 = uVar13;
  }
  uVar13 = 0;
  if (bVar6) {
    uVar13 = uVar1;
  }
  uVar1 = 0xe000000000000000;
  if (bVar6) {
    uVar1 = uVar11;
  }
  puVar10 = PTR_PTR_1126ab6c8;
  func_0x000107c610f8(PTR_PTR_1126ab6c8);
  FUN_1028bf884(uVar8,uVar25,param_3);
  uVar11 = uStack_d0;
  func_0x000107c5fadc(uStack_d0,uVar26);
  uVar12 = uVar28;
  func_0x000107c5fadc(uVar28,uVar27);
  func_0x000107c5fadc(uVar13,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(uVar14,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = uVar7;
  func_0x000107c5fadc(uVar7,uVar24);
  func_0x000107c460d0(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  puVar15 = PTR_PTR_1126ab6d0;
  func_0x000107c610f8();
  func_0x000107c46e68();
  func_0x000107c61170(puVar10);
  if (uStack_108 == 0) {
    func_0x0001028bf8a0(uVar8,uVar25,param_3 & 0xffffffff);
    func_0x000107c6142c(uVar24);
    func_0x000107c6142c(uVar27);
  }
  else {
    pcVar16 = "valdiContextParams(for:conversationParticipants:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
    puVar10 = &UNK_110562780;
    func_0x000107c613fc(&UNK_110562780,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,unaff_x20);
    puVar17 = &UNK_1105627a8;
    func_0x000107c613fc(&UNK_1105627a8,0x6a,7);
    *(ulong *)(puVar17 + 0x10) = uVar7;
    *(ulong *)(puVar17 + 0x18) = uVar24;
    *(ulong *)(puVar17 + 0x20) = param_2;
    *(char **)(puVar17 + 0x28) = pcVar16;
    *(undefined **)(puVar17 + 0x30) = puVar10;
    *(ulong *)(puVar17 + 0x38) = uStack_d0;
    *(ulong *)(puVar17 + 0x40) = uVar26;
    *(ulong *)(puVar17 + 0x48) = uVar28;
    *(ulong *)(puVar17 + 0x50) = uVar27;
    *(ulong *)(puVar17 + 0x58) = uVar8;
    *(ulong *)(puVar17 + 0x60) = uVar25;
    puVar17[0x68] = (char)param_3;
    puVar17[0x69] = bVar5;
    pcStack_a8 = FUN_1028bf9dc;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1105627c0;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar17;
    func_0x000107c60bc4(ppuVar18);
    puVar10 = puStack_a0;
    FUN_1028bf884(uVar8,uVar25,param_3 & 0xffffffff);
    func_0x000107c61434(uVar24);
    func_0x000107c61174(param_2);
    func_0x000107c615f0(pcVar16);
    func_0x000107c61434(uVar26);
    func_0x000107c61434(uVar27);
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar10);
    func_0x000107c56ce4(puVar15);
    func_0x000107c60bd0(ppuVar18);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a8 = FUN_1028bf9dc;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1105627e8;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar17;
    func_0x000107c60bc4(ppuVar18);
    puVar10 = puStack_a0;
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar10);
    func_0x000107c56e30(puVar15);
    func_0x000107c60bd0(ppuVar18);
    puVar10 = &UNK_110562780;
    func_0x000107c613fc(&UNK_110562780,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,unaff_x20);
    puVar19 = &UNK_110562820;
    func_0x000107c613fc(&UNK_110562820,0x62,7);
    *(ulong *)(puVar19 + 0x10) = uVar7;
    *(ulong *)(puVar19 + 0x18) = uVar24;
    *(ulong *)(puVar19 + 0x20) = uStack_d0;
    *(ulong *)(puVar19 + 0x28) = uVar26;
    *(char **)(puVar19 + 0x30) = pcVar16;
    *(undefined **)(puVar19 + 0x38) = puVar10;
    *(ulong *)(puVar19 + 0x40) = uVar28;
    *(ulong *)(puVar19 + 0x48) = uVar27;
    *(ulong *)(puVar19 + 0x50) = uVar8;
    *(ulong *)(puVar19 + 0x58) = uVar25;
    puVar19[0x60] = (char)param_3;
    puVar19[0x61] = bVar5;
    pcStack_a8 = (code *)0x1028bfa20;
    puStack_c8 = puVar3;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_110562838;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar19;
    func_0x000107c60bc4(ppuVar18);
    puVar10 = puStack_a0;
    func_0x000107c615f0(pcVar16);
    func_0x000107c61434(uVar26);
    func_0x000107c61574(puVar10);
    func_0x000107c56e64(puVar15);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c615e8(pcVar16);
    func_0x000107c61574(puVar17);
  }
  puVar10 = PTR_PTR_1126ab6d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar24 = uStack_d0 & 0xffffffffffff;
  if ((uVar26 & 0x2000000000000000) != 0) {
    uVar24 = uVar26 >> 0x38 & 0xf;
  }
  if (uVar24 == 0) {
    func_0x000107c6142c(uVar26);
  }
  else {
    uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112ec7d78);
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ec7d78))[1];
    func_0x000107c614f0(uVar22);
    (**(code **)(lVar2 + 8))();
    puVar17 = &UNK_110562758;
    func_0x000107c613fc(&UNK_110562758,0x20,7);
    *(ulong *)(puVar17 + 0x10) = uStack_d0;
    *(ulong *)(puVar17 + 0x18) = uVar26;
    func_0x000107c61434(uVar26);
    uVar21 = 0x112ec7e20;
    func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
    uVar20 = 0x1028bf8e0;
    func_0x0001000bfde0(0x1028bf8e0,puVar17,uVar21);
    func_0x000107c61574(puVar17);
    FUN_1028bf8e8();
    func_0x0001000c2068();
    func_0x000107c61574(uVar20);
    uVar21 = 0;
    FUN_1028bf99c(0,0x112ec7e38,&PTR_PTR_1126ab6e0);
    pcVar4 = FUN_1028be098;
    func_0x0001000d5158(FUN_1028be098,0,uVar21);
    func_0x000107c6142c(uVar26);
    func_0x000107c61574(uVar22);
    func_0x000107c61574(puVar17);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    puVar19 = puVar17;
    func_0x000107c5cb24(puVar17);
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    func_0x000107c57e88(puVar10);
    func_0x000107c61170(puVar19);
  }
  uVar21 = 0x112ec7e08;
  uVar22 = 0;
  FUN_1028bf99c(0,0x112ec7e08,&PTR_PTR_1126ab6c0);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar20 = uVar22;
  func_0x000107c5faec();
  func_0x000107c61170(uVar22);
  uVar22 = 0;
  FUN_1028bf99c(0,0x112ec7e10,&PTR_PTR_1126ab6d0);
  uVar23 = 0;
  puStack_c8 = puVar15;
  puStack_b0 = (undefined *)uVar22;
  FUN_1028bf99c(0,0x112ec7e18,&PTR_PTR_1126ab6d8);
  puVar15 = PTR_PTR_1126c67d8;
  apuStack_98[0] = puVar10;
  uStack_80 = uVar23;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar20,uVar21,&puStack_c8,apuStack_98,puVar15);
  func_0x000107c61170(param_1);
  return uVar20;
}



/* Entry: 1028bd0b0; end: 1028bd197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028bd0b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7d68);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c615e8(lVar2);
  }
  else {
    lVar4 = lVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bd198);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x000107c4d3cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if ((lVar3 == 0) || (lVar4 = lVar3, func_0x000107c5d0f0(), (int)lVar4 == 1)) {
      func_0x000107c615e8(lVar2);
      return lVar3;
    }
    lVar4 = lVar3;
    func_0x000107c5d0f0();
    func_0x000107c615e8(lVar2);
    if ((int)lVar4 == 2) {
      return lVar3;
    }
    func_0x000107c61170(lVar3);
  }
  return 0;
}



/* Entry: 1028bd198; end: 1028bd397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bd198(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  char cStack_41;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec7dd0);
    puStack_70 = (undefined *)param_1;
    puStack_68 = (undefined *)param_2;
    func_0x000107c6157c(uVar8);
    func_0x000100075034(&cStack_41,FUN_1028bfdd0,&puStack_80,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar8);
    if (cStack_41 == '\x01') {
      func_0x0001000d224c(&puStack_80);
      puVar2 = puStack_80;
      if (puStack_80 != (undefined *)0x0) {
        lVar3 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        lVar4 = lVar3;
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(ulong *)(lVar4 + 0x20) = param_1;
        *(ulong *)(lVar4 + 0x28) = param_2;
        func_0x000107c613fc(lVar3,0x30,7);
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(ulong *)(lVar3 + 0x20) = param_1;
        *(ulong *)(lVar3 + 0x28) = param_2;
        func_0x000103e94bdc(0);
        func_0x000107c610f8();
        func_0x000107c61438(param_2,2);
        func_0x000103e949a8(lVar4,lVar3);
        func_0x000107c4ed20(puStack_80);
        puVar5 = puStack_80;
        func_0x000107c61180();
        puVar6 = &UNK_110562a50;
        func_0x000107c613fc(&UNK_110562a50,0x20,7);
        *(ulong *)(puVar6 + 0x10) = param_1;
        *(ulong *)(puVar6 + 0x18) = param_2;
        pcStack_60 = FUN_1028bfde8;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100bcda3c;
        puStack_68 = &UNK_110562a68;
        ppuVar7 = &puStack_80;
        puStack_58 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_58;
        func_0x000107c61434(param_2);
        func_0x000107c61574(puVar6);
        func_0x000107c5dc68(puVar5);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar5);
      }
    }
  }
  return;
}



/* Entry: 1028bd398; end: 1028bdf37;  */

void FUN_1028bd398(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) && (uVar1 = param_3, func_0x0001070b1c70(), (uVar1 & 1) == 0)) {
    puVar2 = &UNK_110562960;
    func_0x000107c613fc(&UNK_110562960,0x68,7);
    *(undefined8 *)(puVar2 + 0x10) = param_5;
    *(ulong *)(puVar2 + 0x18) = param_1;
    *(ulong *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_6;
    *(undefined8 *)(puVar2 + 0x30) = param_7;
    *(undefined8 *)(puVar2 + 0x38) = param_8;
    *(undefined8 *)(puVar2 + 0x40) = param_9;
    *(undefined8 *)(puVar2 + 0x48) = param_10;
    *(undefined8 *)(puVar2 + 0x50) = param_11;
    puVar2[0x58] = (undefined1)param_12;
    puVar2[0x59] = param_12._1_1_;
    *(ulong *)(puVar2 + 0x60) = param_3;
    pcStack_70 = FUN_1028bfaf0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110562978;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_9);
    FUN_1028bf884(param_10,param_11,(undefined1)param_12);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(param_4);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 1028bdf38; end: 1028bdfaf; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028bdf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028bc908(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028bdfb0; end: 1028bdfc7; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028bdfc4) */

void FUN_1028bdfb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028bdfc8; end: 1028bdfcf; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin pluginType] */

undefined8 FUN_1028bdfc8(void)

{
  return 0;
}



/* Entry: 1028bdfd0; end: 1028be097;  */

void FUN_1028bdfd0(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    func_0x000100029284(param_3);
    if ((param_4 & 1) != 0) {
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar1 = 0;
      func_0x00010391d8b8();
      lVar5 = *(long *)(lVar1 + -8);
      func_0x0001028bfd8c(lVar4 + *(long *)(lVar5 + 0x48) * param_3,param_1);
      func_0x000107c6142c(lVar3);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x38);
      uVar2 = 0;
      goto LAB_1028be084;
    }
    func_0x000107c6142c(lVar3);
  }
  lVar1 = 0;
  func_0x00010391d8b8();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  uVar2 = 1;
LAB_1028be084:
                    /* WARNING: Could not recover jumptable at 0x0001028be094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar1);
  return;
}



/* Entry: 1028be098; end: 1028be1fb;  */

void FUN_1028be098(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = 0x112ec7e20;
  func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x00010391d8b8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar3 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1028bfc7c(param_2,puVar4);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001028bfccc(puVar4,0x112ec7e20,&UNK_10daea290);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x0001028bfd0c(puVar4,lVar3);
    if ((*(char *)(lVar3 + 0x10) == '\x01') || (*(char *)(lVar3 + 0x20) == '\x01')) {
      func_0x0001028bfd50(lVar3);
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar1 = *(long *)(lVar3 + 8);
      lVar6 = *(long *)(lVar3 + 0x18);
      puVar5 = PTR_PTR_1126ab6e0;
      func_0x000107c610f8();
      func_0x000107c461f4((double)lVar1,(double)lVar6);
      func_0x0001028bfd50(lVar3);
    }
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1028be1fc; end: 1028be26b;  */

void FUN_1028be1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028be26c(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028be26c; end: 1028be3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028be26c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_af;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_4f;
  
  pcVar2 = (code *)&uStack_140;
  pcVar4 = (code *)&uStack_140;
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112ec7d88))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ec7d88));
  (**(code **)(lVar6 + 8))(&uStack_f0);
  if (lStack_e8 != 0) {
    uStack_90 = uStack_f0;
    lStack_88 = lStack_e8;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_60 = uStack_c0;
    uStack_4f = uStack_af;
    FUN_1028bfbe4(&uStack_90,&uStack_140);
    lVar6 = 0x112d69430;
    func_0x0001028bfccc(&uStack_f0,0x112d69430,&UNK_10d92ceb0);
    lVar7 = lStack_88;
    uVar3 = uStack_90;
    lStack_138 = lStack_88;
    uStack_140 = uStack_90;
    func_0x000107c61434(lStack_88);
    func_0x0001028bfc20(&uStack_90);
    if ((uVar3 == param_1) && (lVar7 == param_2)) {
      func_0x000100bcb1dc();
      pcVar4 = pcVar2;
      lVar7 = lVar6;
    }
    else {
      func_0x000107c605b8(uVar3,lVar7,param_1,param_2,0);
      func_0x000100bcb1dc();
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    FUN_1028be674();
    (*pcVar4)();
    func_0x000107c61574(lVar7);
    if (pcVar4 != (code *)0x0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec7d90);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec7d90))[1];
      func_0x000107c614f0(uVar5);
      func_0x00010391df30(pcVar4,uVar5,uVar1);
      func_0x000107c61170(pcVar4);
    }
  }
  return;
}



/* Entry: 1028be3d0; end: 1028be423;  */

void FUN_1028be3d0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1028be424();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1028be424; end: 1028be533;  */

/* WARNING: Possible PIC construction at 0x0001028be4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028be4f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028be424(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  lVar5 = _DAT_112ec7da8;
  if (*(long *)(unaff_x20 + _DAT_112ec7da8) != 0) {
    FUN_1028c0c84();
    lVar2 = unaff_x20 + _DAT_112ec7d50;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c41864();
      func_0x000107c615e8(lVar2);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ec7db8);
    lVar5 = puVar1[1];
    if (lVar5 == 0) {
      lVar5 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      uVar4 = *puVar1;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec7d80);
      lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ec7d80))[1];
      func_0x000107c614f0(uVar3);
      pcVar6 = *(code **)(lVar2 + 0x10);
      func_0x000107c61434(lVar5);
      (*pcVar6)(uVar4,lVar5,uVar3,lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
    return;
  }
  return;
}



/* Entry: 1028be534; end: 1028be673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028be534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec7d50;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41864(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112ec7db0);
    *(undefined8 *)(lVar1 + _DAT_112ec7db0) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112ec7d80);
    lVar1 = ((undefined8 *)(param_1 + _DAT_112ec7d80))[1];
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(param_1);
    uVar3 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(lVar1 + 0x10))(param_2,param_3,uVar3,lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1028be674; end: 1028be71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1028be674(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ec7dd8);
  lVar2 = *plVar1;
  puVar3 = (undefined *)plVar1[1];
  lVar6 = lVar2;
  puVar5 = puVar3;
  if (lVar2 == 0) {
    puVar5 = &UNK_110562780;
    func_0x000107c613fc(&UNK_110562780,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    lVar6 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = 0x1028bfc54;
    plVar1[1] = (long)puVar5;
    func_0x000107c6157c(puVar5);
    func_0x0001028bfc5c(lVar6,lVar4);
    lVar6 = 0x1028bfc54;
  }
  func_0x0001028bfc6c(lVar2,puVar3);
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 1028be720; end: 1028be7b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028be720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ec7da8);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c4f078(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1028be7b8; end: 1028be7df; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin dismissPresentedView] */

void FUN_1028be7b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028be424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028be7e0; end: 1028be86f;  */

void FUN_1028be7e0(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar2 = param_3;
  func_0x0001000f66f0(param_3,param_4,*param_2);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    func_0x000107c61434(param_4);
    func_0x000100403b00(auStack_50,param_3,param_4);
    func_0x000107c6142c(uStack_48);
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 1028be870; end: 1028be8cf; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin init] */

void FUN_1028be870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAIInteractiveMessagePlugin.MyAIInteractiveMessagePlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028be89c);
  (*pcVar1)();
}



/* Entry: 1028be8d0; end: 1028bea23; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028be930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028be9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028be9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028be9a4) */
/* WARNING: Removing unreachable block (ram,0x0001028be934) */
/* WARNING: Removing unreachable block (ram,0x0001028be9f8) */
/* WARNING: Removing unreachable block (ram,0x0001028bfc5c) */
/* WARNING: Removing unreachable block (ram,0x0001028bfc68) */
/* WARNING: Removing unreachable block (ram,0x0001028bfc60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028be8d0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7d40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7d48));
  func_0x000100e3b598(param_1 + _DAT_112ec7d50);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec7d58 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec7d60));
  return;
}



/* Entry: 1028bea24; end: 1028bea43;  */

void FUN_1028bea24(void)

{
  func_0x000107c61168(&PTR_PTR_11286b070);
  return;
}



/* Entry: 1028bea44; end: 1028bea87;  */

bool FUN_1028bea44(undefined8 param_1,ulong param_2)

{
  FUN_1028bea88();
  func_0x0001000b44c0();
  if (param_2 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  return param_2 >> 0x3c < 0xf;
}



/* Entry: 1028bea88; end: 1028bedd3;  */

void FUN_1028bea88(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  uint uVar18;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar12 = &puStack_b0;
  ppuVar14 = &puStack_b0;
  ppuVar16 = &puStack_b0;
  lVar7 = param_1;
  uVar17 = param_2;
  FUN_1028bd0b0();
  if (lVar7 == 0) {
    return;
  }
  lVar8 = lVar7;
  func_0x000107c447c8();
  if ((int)lVar8 != 0) {
    lVar8 = lVar7;
    func_0x000107c40460();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1028bedd0);
      (*pcVar6)();
    }
    lVar9 = lVar8;
    func_0x000107c44fd8();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1028bedd4);
      (*pcVar6)();
    }
    lVar8 = lVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar9);
    uVar2 = (uint)(uVar17 >> 0x20);
    uVar18 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar18 == 0) {
        func_0x00010006c090(lVar8);
        if ((uVar17 & 0xff000000000000) != 0) {
LAB_1028beb78:
          uStack_78 = 0xf000000000000000;
          uStack_80 = 0;
          puVar10 = &UNK_1105625f0;
          func_0x000107c613fc(&UNK_1105625f0,0x20,7);
          *(undefined8 **)(puVar10 + 0x10) = &uStack_80;
          *(long *)(puVar10 + 0x18) = param_1;
          puVar11 = &UNK_110562618;
          func_0x000107c613fc(&UNK_110562618,0x20,7);
          *(code **)(puVar11 + 0x10) = FUN_1028bf498;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_90 = FUN_1028bf4a0;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_10006eb60;
          puStack_98 = &UNK_110562630;
          puStack_88 = puVar11;
          func_0x000107c60bc4(&puStack_b0);
          puVar11 = puStack_88;
          func_0x000107c61174();
          func_0x000107c61574(puVar11);
          puVar11 = &UNK_110562668;
          func_0x000107c613fc(&UNK_110562668,0x20,7);
          *(undefined8 **)(puVar11 + 0x10) = &uStack_80;
          *(long *)(puVar11 + 0x18) = param_1;
          puVar13 = &UNK_110562690;
          func_0x000107c613fc(&UNK_110562690,0x20,7);
          *(code **)(puVar13 + 0x10) = FUN_1028bf55c;
          *(undefined **)(puVar13 + 0x18) = puVar11;
          pcStack_90 = FUN_1028bf564;
          puStack_b0 = puVar3;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1011a7a34;
          puStack_98 = &UNK_1105626a8;
          puStack_88 = puVar13;
          func_0x000107c60bc4(&puStack_b0);
          puVar13 = puStack_88;
          func_0x000107c61174(param_1);
          func_0x000107c61574(puVar13);
          puVar13 = &UNK_1105626e0;
          func_0x000107c613fc(&UNK_1105626e0,0x18,7);
          *(undefined8 **)(puVar13 + 0x10) = &uStack_80;
          puVar15 = &UNK_110562708;
          func_0x000107c613fc(&UNK_110562708,0x20,7);
          *(code **)(puVar15 + 0x10) = FUN_1028bf5f4;
          *(undefined **)(puVar15 + 0x18) = puVar13;
          pcStack_90 = FUN_1028bf5fc;
          puStack_b0 = puVar3;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1011a64f8;
          puStack_98 = &UNK_110562720;
          puStack_88 = puVar15;
          func_0x000107c60bc4(&puStack_b0);
          func_0x000107c61574(puStack_88);
          func_0x000107c4c640(param_2);
          func_0x000107c61170(lVar7);
          func_0x000107c60bd0(ppuVar16);
          func_0x000107c60bd0(ppuVar14);
          func_0x000107c60bd0(ppuVar12);
          uVar5 = uStack_78;
          uVar4 = uStack_80;
          func_0x000100de78a0(uStack_80,uStack_78);
          func_0x0001000b44c0(uVar4,uVar5);
          func_0x000107c61574(puVar13);
          func_0x000107c61574(puVar11);
          func_0x000107c61574(puVar10);
          return;
        }
      }
      else {
        func_0x00010006c090(lVar8);
        if ((long)(int)lVar8 != lVar8 >> 0x20) goto LAB_1028beb78;
      }
    }
    else if (uVar18 == 2) {
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar1 = *(long *)(lVar8 + 0x18);
      func_0x00010006c090(lVar8);
      if (lVar9 != lVar1) goto LAB_1028beb78;
    }
    else {
      func_0x00010006c090(lVar8);
    }
  }
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 1028bedd4; end: 1028bee4b; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_1028bedd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028bea44(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1028bee4c; end: 1028bee53; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_1028bee4c(void)

{
  return 0;
}



/* Entry: 1028bee54; end: 1028bf1a7;  */

void FUN_1028bee54(undefined8 *param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuStack_e0;
  undefined *apuStack_a8 [3];
  undefined8 uStack_90;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  ppuVar19 = (undefined **)*param_2;
  uVar14 = 0x112ec7e08;
  ppuVar16 = &PTR_PTR_1126ab6c0;
  uVar7 = 0;
  FUN_1028bf99c();
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  uStack_58 = uVar14;
  func_0x000107c61170(uVar7);
  ppuVar17 = ppuVar19;
  func_0x000107c447c8();
  if ((int)ppuVar17 == 0) {
    ppuVar17 = (undefined **)0x0;
    uVar7 = uStack_58;
  }
  else {
    ppuVar17 = ppuVar19;
    func_0x000107c40460();
    func_0x000107c61180();
    if (ppuVar17 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1028bf1a8);
      (*pcVar5)();
    }
    ppuVar9 = ppuVar17;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar17);
    uVar7 = uStack_58;
    ppuVar17 = ppuVar9;
    if (ppuVar9 != (undefined **)0x0) {
      func_0x000107c5faec();
      uVar7 = uStack_58;
      ppuVar16 = ppuVar17;
      func_0x000107c61170(ppuVar9);
      goto LAB_1028bef2c;
    }
  }
  uStack_58 = 0xe000000000000000;
LAB_1028bef2c:
  ppuVar9 = ppuVar19;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (ppuVar9 == (undefined **)0x0) {
    ppuStack_e0 = (undefined **)0x0;
    uVar18 = 0xe000000000000000;
    uVar15 = uVar7;
  }
  else {
    ppuStack_e0 = ppuVar9;
    func_0x000107c5faec();
    uVar15 = uVar7;
    func_0x000107c61170(ppuVar9);
    uVar18 = uVar7;
  }
  ppuVar10 = ppuVar19;
  FUN_1028bf61c();
  uVar7 = uVar15;
  func_0x0001028bf6e4();
  func_0x000107c5d0f0();
  bVar6 = ((uint)ppuVar16 & 0xff) != 1;
  ppuVar9 = (undefined **)0x0;
  if (bVar6) {
    ppuVar9 = ppuVar19;
  }
  uVar2 = uVar7;
  ppuVar1 = ppuVar19;
  uVar4 = 0xe000000000000000;
  if (bVar6) {
    ppuVar1 = (undefined **)0x0;
    uVar2 = 0xe000000000000000;
    uVar4 = uVar7;
  }
  bVar6 = (((uint)ppuVar16 ^ 0xffffffff) & 0xff) != 0;
  ppuVar12 = (undefined **)0x0;
  if (bVar6) {
    ppuVar12 = ppuVar9;
  }
  uVar3 = 0xe000000000000000;
  if (bVar6) {
    uVar3 = uVar4;
  }
  ppuVar9 = (undefined **)0x0;
  if (bVar6) {
    ppuVar9 = ppuVar1;
  }
  uVar4 = 0xe000000000000000;
  if (bVar6) {
    uVar4 = uVar2;
  }
  puVar11 = PTR_PTR_1126ab6c8;
  func_0x000107c610f8();
  FUN_1028bf884(ppuVar19,uVar7,ppuVar16);
  func_0x000107c5fadc(ppuVar17,uStack_58);
  func_0x000107c5fadc(ppuStack_e0,uVar18);
  func_0x000107c5fadc(ppuVar9,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(ppuVar12,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(ppuVar10,uVar15);
  func_0x000107c460d0(puVar11);
  func_0x000107c61170(ppuVar17);
  func_0x000107c61170(ppuStack_e0);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(ppuVar10);
  func_0x0001028bf8a0(ppuVar19,uVar7,ppuVar16);
  func_0x000107c6142c(uStack_58);
  func_0x000107c6142c(uVar18);
  func_0x000107c6142c(uVar15);
  puVar13 = PTR_PTR_1126ab6d0;
  func_0x000107c610f8();
  func_0x000107c46e68();
  func_0x000107c61170(puVar11);
  uVar7 = 0;
  FUN_1028bf99c(0,0x112ec7e10,&PTR_PTR_1126ab6d0);
  puVar11 = PTR_PTR_1126ab6d8;
  apuStack_88[0] = puVar13;
  uStack_70 = uVar7;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar7 = 0;
  FUN_1028bf99c(0,0x112ec7e18,&PTR_PTR_1126ab6d8);
  apuStack_a8[0] = puVar11;
  uStack_90 = uVar7;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar8,uVar14,apuStack_88,apuStack_a8);
  *param_1 = uVar8;
  return;
}



/* Entry: 1028bf1a8; end: 1028bf23b; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_1028bf1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001028bf788(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028bf23c; end: 1028bf403; -[_TtC28MyAIInteractiveMessagePlugin28MyAIInteractiveMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x0001028bf318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028bf3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028bf3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028bf3c8) */
/* WARNING: Removing unreachable block (ram,0x0001028bf31c) */
/* WARNING: Removing unreachable block (ram,0x000107c60bd0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbc9f0) */
/* WARNING: Removing unreachable block (ram,0x0001028bf3d8) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bf23c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_1105625c8;
  func_0x000107c613fc(&UNK_1105625c8,0x18,7);
  *(long *)(puVar4 + 0x10) = param_7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c60bc4(param_7);
  uVar5 = param_3;
  uVar6 = param_4;
  FUN_1028bea88();
  if (uVar6 >> 0x3c < 0xf) {
    param_1 = param_1 + _DAT_112ec7d98;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x0001028bf8bc(param_1,uVar1);
    if (param_6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028bf404);
      (*pcVar3)();
    }
    (**(code **)(lVar2 + 8))(uVar5,uVar6,param_5,param_6,FUN_1028bf404,puVar4,uVar1,lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 1028bf404; end: 1028bf417;  */

void FUN_1028bf404(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001028bf414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1028bf418; end: 1028bf497;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1028bf418(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (param_2 == 0) {
    uVar4 = 0;
    uVar5 = 0xf000000000000000;
  }
  else {
    uVar2 = param_2;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    uVar4 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (uVar1 >> 0x3c < 0xf) {
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
  return;
}



/* Entry: 1028bf498; end: 1028bf49f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1028bf498(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  uVar6 = uVar5;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar5 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    uVar3 = uVar5;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar3);
  }
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = (uint)(uVar2 >> 0x3e);
    if (uVar4 == 1) {
      uVar3 = uVar2 & 0x3fffffffffffffff;
    }
    else if (uVar4 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1028bf4a0; end: 1028bf4bf;  */

void FUN_1028bf4a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028bf4c0; end: 1028bf4db;  */

void FUN_1028bf4c0(long param_1,long param_2)

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



/* Entry: 1028bf4dc; end: 1028bf55b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1028bf4dc(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = param_2;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (param_3 == 0) {
    uVar4 = 0;
    puVar5 = (ulong *)0xf000000000000000;
  }
  else {
    uVar2 = param_3;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    uVar4 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
  }
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *param_2 = uVar4;
  param_2[1] = (ulong)puVar5;
  if (uVar1 >> 0x3c < 0xf) {
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
  return;
}



/* Entry: 1028bf55c; end: 1028bf563;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1028bf55c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong *puVar6;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  puVar6 = puVar1;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar5 = 0;
    puVar6 = (ulong *)0xf000000000000000;
  }
  else {
    uVar3 = uVar5;
    func_0x000107c40414();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar3);
  }
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = (ulong)puVar6;
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = (uint)(uVar2 >> 0x3e);
    if (uVar4 == 1) {
      uVar3 = uVar2 & 0x3fffffffffffffff;
    }
    else if (uVar4 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1028bf564; end: 1028bf5f3;  */

void FUN_1028bf564(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028bf5f4; end: 1028bf5fb;  */

void FUN_1028bf5f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  iVar3 = (int)&uStack_50;
  func_0x0001000bb420(param_1,auStack_40);
  func_0x000107c6147c(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,
                      PTR___s10Foundation4DataVN_110350ae0,6);
  if (iVar3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0xf000000000000000;
  }
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = uStack_50;
  puVar4[1] = uStack_48;
  func_0x0001000b44c0(uVar1,uVar2);
  return;
}



/* Entry: 1028bf5fc; end: 1028bf61b;  */

void FUN_1028bf5fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028bf61c; end: 1028bf883;  */

undefined1  [16] FUN_1028bf61c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
  }
  uVar1 = uVar2 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c5d0f0();
    uVar2 = 0x3936373235373432;
    param_2 = 0xef32353439343931;
    if ((int)param_1 == 2) {
      uVar2 = 0xd000000000000010;
      param_2 = 0x800000010f0c6dd0;
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1028bf884; end: 1028bf8e7;  */

void FUN_1028bf884(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1028bf8e8; end: 1028bf957;  */

void FUN_1028bf8e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec7e28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec7e20;
  func_0x00010002969c(0x112ec7e20,&UNK_10daea290);
  uVar2 = uVar1;
  FUN_1028bf958();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112ec7e28 = puVar3;
  return;
}



/* Entry: 1028bf958; end: 1028bf99b;  */

void FUN_1028bf958(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec7e30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010391d8b8(0xff);
  puVar2 = &UNK_10dc23680;
  func_0x000107c61520(&UNK_10dc23680,uVar1);
  puRam0000000112ec7e30 = puVar2;
  return;
}



/* Entry: 1028bf99c; end: 1028bf9db;  */

void FUN_1028bf99c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028bf9dc; end: 1028bfa9b;  */

void FUN_1028bf9dc(void)

{
  long unaff_x20;
  
  FUN_1028bd398(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined2 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028bfa9c; end: 1028bfacf;  */

undefined8 FUN_1028bfa9c(undefined8 param_1)

{
  (*(code *)&DAT_10391e1a0)();
  return param_1;
}



/* Entry: 1028bfad0; end: 1028bfaef;  */

void FUN_1028bfad0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,
               *(undefined8 *)(unaff_x20 + 0x18));
    return;
  }
  return;
}



/* Entry: 1028bfaf0; end: 1028bfb33;  */

void FUN_1028bfaf0(void)

{
  long unaff_x20;
  
  func_0x0001028bd508(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined2 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1028bfb34; end: 1028bfb77;  */

void FUN_1028bfb34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar3 = puVar2[1];
  uVar1 = param_1[1];
  uVar4 = *param_1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar4;
  func_0x000107c61434(uVar1);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1028bfb78; end: 1028bfbcf;  */

void FUN_1028bfb78(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028bfbd0; end: 1028bfbe3;  */

void FUN_1028bfbd0(void)

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
    FUN_1028be26c(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028bfbe4; end: 1028bfc53;  */

undefined8 FUN_1028bfbe4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10391ebcc)(param_2,param_1);
  return param_2;
}



/* Entry: 1028bfc54; end: 1028bfc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bfc54(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ec7da8);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c4f078(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1028bfc7c; end: 1028bfdcf;  */

undefined8 FUN_1028bfc7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ec7e20;
  func_0x0001000285a8(0x112ec7e20,&UNK_10daea290);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1028bfdd0; end: 1028bfde7;  */

void FUN_1028bfdd0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028be7e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028bfde8; end: 1028bfe03;  */

void FUN_1028bfde8(void)

{
  return;
}



/* Entry: 1028bfe04; end: 1028bfe47;  */

void FUN_1028bfe04(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(param_1[1]);
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 1028bfe48; end: 1028bfedb;  */

void FUN_1028bfe48(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001028bfe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1028bfedc; end: 1028c0523;  */

void FUN_1028bfedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110562b18;
  func_0x000107c613fc(&UNK_110562b18,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1028c0524,puVar1);
  return;
}



/* Entry: 1028c0524; end: 1028c0547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c0524(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long *plVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [5];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(alStack_c8,*(undefined8 *)(unaff_x20 + 0x10),uVar14,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = alStack_c8[0];
  uVar4 = *(ulong *)(alStack_c8[0] + _DAT_1130404b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c61170(uVar4);
    plVar15 = (long *)0x0;
  }
  else {
    uVar6 = uVar5;
    func_0x000107c4a0c8();
    if ((uVar6 & 1) == 0) {
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar4);
      plVar15 = (long *)0x0;
    }
    else {
      uVar6 = uVar5;
      func_0x000107c4a0cc();
      func_0x0001000285a8(0x112ec3da8,&UNK_10dae4000);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar14);
      pcVar7 = FUN_1028c05ec;
      func_0x0001000bdd8c();
      func_0x000100083b20(alStack_70);
      uVar8 = *(undefined8 *)(alStack_70[0] + _DAT_113083f78);
      func_0x000107c61174();
      func_0x000107c61170(alStack_70[0]);
      uVar9 = uVar8;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar8 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      func_0x000100083b20(alStack_c8);
      uVar9 = 0;
      FUN_1028c0f88(0);
      func_0x000107c613fc();
      lVar10 = alStack_c8[0];
      FUN_1028c0668(alStack_c8[0],uVar9);
      func_0x000100083b20(&lStack_78);
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
      func_0x000107c615f0();
      func_0x000107c61170(lStack_78);
      func_0x000100083b20(&lStack_80);
      uVar20 = ((undefined8 *)(lStack_80 + _DAT_112faec00))[1];
      uVar16 = *(undefined8 *)(lStack_80 + _DAT_112faec00);
      func_0x000107c615f0();
      func_0x000107c61170(lStack_80);
      func_0x000100083b20(&lStack_88);
      uVar21 = ((undefined8 *)(lStack_88 + _DAT_112faecc8))[1];
      uVar17 = *(undefined8 *)(lStack_88 + _DAT_112faecc8);
      func_0x000107c615f0();
      func_0x000107c61170(lStack_88);
      func_0x000100083b20(&lStack_90);
      uVar22 = ((undefined8 *)(lStack_90 + _DAT_112faecc0))[1];
      uVar18 = *(undefined8 *)(lStack_90 + _DAT_112faecc0);
      func_0x000107c615f0();
      func_0x000107c61170(lStack_90);
      func_0x000100083b20(&lStack_98);
      uVar23 = ((undefined8 *)(lStack_98 + _DAT_112faecd0))[1];
      uVar19 = *(undefined8 *)(lStack_98 + _DAT_112faecd0);
      func_0x000107c615f0();
      func_0x000107c61170(lStack_98);
      func_0x000100083b20(&lStack_a0);
      FUN_1028c05f4(lStack_a0 + _DAT_112faecd8,alStack_c8);
      func_0x000107c61170(lStack_a0);
      lVar11 = 0;
      FUN_1028bea24();
      lVar12 = lVar11;
      func_0x000107c610f8();
      *(undefined8 *)(lVar12 + _DAT_112ec7d40) = 0;
      *(undefined8 *)(lVar12 + _DAT_112ec7d48) = 0;
      func_0x000107c61614(lVar12 + _DAT_112ec7d50,0);
      *(undefined8 *)(lVar12 + _DAT_112ec7da8) = 0;
      *(undefined8 *)(lVar12 + _DAT_112ec7db0) = 0;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7db8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar12 + _DAT_112ec7dc0) = 0;
      lVar3 = _DAT_112ec7dc8;
      puStack_d8 = (undefined *)0x0;
      uStack_d0 = 0;
      func_0x0001000285a8(0x112d38320,&UNK_10d9021d0);
      func_0x000107c613fc();
      ppuVar13 = &puStack_d8;
      func_0x00010006c248();
      *(undefined ***)(lVar12 + lVar3) = ppuVar13;
      lVar3 = _DAT_112ec7dd0;
      puStack_d8 = PTR___swiftEmptySetSingleton_11034f1d8;
      func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
      func_0x000107c613fc();
      ppuVar13 = &puStack_d8;
      func_0x00010006c248();
      *(undefined ***)(lVar12 + lVar3) = ppuVar13;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7dd8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7d58);
      *puVar1 = uVar8;
      puVar1[1] = uVar14;
      *(long *)(lVar12 + _DAT_112ec7d60) = lVar10;
      *(undefined8 *)(lVar12 + _DAT_112ec7d68) = uVar9;
      *(char *)(lVar12 + _DAT_112ec7d70) = (char)uVar6;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7d78);
      puVar1[1] = uVar20;
      *puVar1 = uVar16;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7d80);
      puVar1[1] = uVar21;
      *puVar1 = uVar17;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7d88);
      puVar1[1] = uVar22;
      *puVar1 = uVar18;
      puVar1 = (undefined8 *)(lVar12 + _DAT_112ec7d90);
      puVar1[1] = uVar23;
      *puVar1 = uVar19;
      FUN_1028c05f4(alStack_c8,lVar12 + _DAT_112ec7d98);
      *(code **)(lVar12 + _DAT_112ec7da0) = pcVar7;
      puVar2 = PTR_s_init_1125d9248;
      lStack_e8 = lVar12;
      lStack_e0 = lVar11;
      func_0x000107c615f0(uVar9);
      func_0x000107c615f0(uVar16);
      func_0x000107c615f0(uVar17);
      func_0x000107c615f0(uVar18);
      func_0x000107c615f0(uVar19);
      func_0x000107c6157c(lVar10);
      func_0x000107c6157c(pcVar7);
      plVar15 = &lStack_e8;
      func_0x000107c61154(plVar15,puVar2);
      func_0x000107c61574(lVar10);
      func_0x000107c615e8(uVar9);
      func_0x000107c615e8(uVar16);
      func_0x000107c615e8(uVar17);
      func_0x000107c615e8(uVar18);
      func_0x000107c615e8(uVar19);
      func_0x000107c61574(pcVar7);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar4);
      func_0x0001000834e4(alStack_c8);
    }
  }
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 1028c0548; end: 1028c05eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c0548(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_11302a318);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40a64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1028c05ec; end: 1028c05f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c05ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_11302a318);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40a64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1028c05f4; end: 1028c0667;  */

long FUN_1028c05f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1028c0668; end: 1028c0673;  */

void FUN_1028c0668(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1028c0674; end: 1028c0c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c0674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_2a8 [24];
  long alStack_290 [5];
  undefined1 auStack_268 [8];
  long alStack_260 [2];
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  long lStack_158;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 uStack_80;
  long lStack_78;
  
  uStack_250 = param_9;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  puStack_248 = (undefined1 *)param_8;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8();
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(param_4);
  func_0x000107c48320();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_4);
  puVar6 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8();
  func_0x000107c4831c();
  puVar7 = PTR_PTR_1126ae6d8;
  func_0x000107c610f8();
  func_0x000107c486a0();
  puVar8 = PTR_PTR_1126b1bb0;
  func_0x000107c61168();
  *(undefined8 *)((long)alStack_260 + lVar2) = 0;
  func_0x000107c4b3c4();
  func_0x000107c61180();
  puVar13 = puVar8;
  func_0x000107c5eec4((long)&uStack_250 + lVar2);
  func_0x000107c5eeac();
  (**(code **)(lVar15 + 8))((long)&uStack_250 + lVar2,lVar3);
  uVar5 = param_5;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_5);
  uVar1 = param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar1 = param_7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(uVar5);
    puVar13 = (undefined *)0x0;
    puVar14 = (undefined *)0xf000000000000000;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    lVar3 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0x5f746e65746e6f63;
    *(undefined8 *)(lVar3 + 0x28) = 0xea00000000006469;
    *(ulong *)(lVar3 + 0x30) = param_6;
    *(ulong *)(lVar3 + 0x38) = param_7;
    *(undefined8 *)(lVar3 + 0x40) = 0x5f6e6f6973736573;
    *(undefined8 *)(lVar3 + 0x48) = 0xea00000000006469;
    *(undefined **)(lVar3 + 0x50) = puVar13;
    *(undefined8 *)(lVar3 + 0x58) = uVar5;
    func_0x000107c61434(param_7);
    lVar15 = lVar3;
    func_0x0001001830b8(lVar3);
    func_0x000107c61588(lVar3);
    uVar5 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar5);
    lVar3 = lVar15;
    puVar14 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(lVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar15);
    puStack_f0 = (undefined *)0x0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar13 = puStack_f0;
    func_0x000107c61174(puStack_f0);
    if (puVar9 == (undefined *)0x0) {
      puVar14 = puVar13;
      func_0x000107c5ed30();
      func_0x000107c61170(puVar13);
      func_0x000107c61654();
      func_0x000107c614ac(puVar14);
      puVar13 = (undefined *)0x0;
      puVar14 = (undefined *)0xf000000000000000;
    }
    else {
      puVar13 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
    }
  }
  uVar5 = 0x112ec7e70;
  func_0x0001000285a8(0x112ec7e70,&UNK_10daea2d0);
  func_0x000107c61538();
  func_0x000100de78a0(puVar13,puVar14);
  func_0x0001000b44c0(0,0xf000000000000000);
  func_0x000107c61434(uVar5);
  func_0x000100de78a0(puVar13,puVar14);
  func_0x000107c6142c(uVar5);
  func_0x0001000b44c0(puVar13,puVar14);
  lVar10 = 0;
  func_0x0001028c1184();
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined1 **)(lVar10 + 0x10) = puStack_248;
  *(undefined8 *)(lVar10 + 0x18) = uStack_250;
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fa38);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar12);
  func_0x0001000d224c(auStack_1b8);
  func_0x000107c61574(uVar12);
  puVar11 = auStack_1b8;
  func_0x0001000a8868(puVar11,uStack_1a0);
  lVar3 = 0x112ec7e78;
  puStack_248 = puVar11;
  func_0x0001000285a8(0x112ec7e78,&UNK_10daea2d8);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined1 *)(lVar3 + 0x20) = 6;
  *(long *)(lVar3 + 0x28) = lVar10;
  *(undefined ***)(lVar3 + 0x30) = &PTR_DAT_110562c20;
  func_0x000107c61434(uVar5);
  func_0x000100de78a0(puVar13,puVar14);
  func_0x000107c61174();
  func_0x000107c6157c(lVar10);
  lVar15 = lVar3;
  func_0x00010076e8cc();
  func_0x000107c61588(lVar3);
  func_0x0001028c0f48((undefined1 *)(lVar3 + 0x20),0x112ec7e80,&UNK_10daea2e0);
  uStack_188 = 0x101;
  uStack_178 = 1;
  uStack_160 = 1;
  uStack_e8 = CONCAT62(uStack_186,0x101);
  uStack_d8 = CONCAT71(uStack_177,1);
  uStack_c0 = CONCAT71(uStack_15f,1);
  uStack_80 = 5;
  puVar9 = &UNK_110562c08;
  puStack_190 = puVar8;
  uStack_180 = uVar5;
  puStack_170 = puVar13;
  puStack_168 = puVar14;
  lStack_158 = lVar15;
  puStack_f0 = puVar8;
  uStack_e0 = uVar5;
  puStack_d0 = puVar13;
  puStack_c8 = puVar14;
  lStack_b8 = lVar15;
  func_0x000107c613fc(&UNK_110562c08,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = param_10;
  *(undefined8 *)(puVar9 + 0x18) = param_11;
  func_0x000107c6157c();
  puVar11 = puStack_248;
  func_0x00010433d118(param_1,param_2,param_3,&puStack_f0,0x1028c0f24,puVar9,uStack_1a0,uStack_198);
  func_0x000107c61170(puVar4);
  func_0x0001000b44c0(puVar13,puVar14);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(puVar8);
  func_0x0001000b44c0(puVar13,puVar14);
  func_0x000107c61574(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(lVar10);
  func_0x0001028c0f48(&puStack_190,0x112ec7e88,&UNK_10daea2e8);
  func_0x0001000834e4(auStack_1b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    *(long *)((long)alStack_290 + lVar2 + 0x10) = lVar10;
    *(undefined **)((long)alStack_290 + lVar2 + 0x18) = puVar13;
    *(undefined1 **)((long)alStack_290 + lVar2 + 0x20) = puVar11;
    *(undefined8 **)(auStack_268 + lVar2) = &uStack_250;
    *(undefined1 **)((long)alStack_260 + lVar2) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_260 + lVar2 + 8) = FUN_1028c0c84;
    uVar5 = *(undefined8 *)(*(long *)(puVar11 + 0x10) + _DAT_11306fa38);
    func_0x000107c6157c(uVar5);
    func_0x0001000d224c(auStack_2a8 + lVar2);
    func_0x000107c61574(uVar5);
    uVar5 = *(undefined8 *)((long)alStack_290 + lVar2);
    lVar3 = *(long *)((long)alStack_290 + lVar2 + 8);
    func_0x0001000a8868(auStack_2a8 + lVar2,uVar5);
    (**(code **)(lVar3 + 0x10))(uVar5,lVar3);
    func_0x0001000834e4(auStack_2a8 + lVar2);
    return;
  }
  return;
}



/* Entry: 1028c0c84; end: 1028c0d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c0c84(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fa38);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1028c0d04; end: 1028c0d27;  */

void FUN_1028c0d04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028c0d28; end: 1028c0d57;  */

void FUN_1028c0d28(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  FUN_1028c0dc0(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((uint)*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == ((uint)param_1 & 0xff)) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1028c0d58; end: 1028c0dbf;  */

void FUN_1028c0d58(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1028c0dc0; end: 1028c0f87;  */

void FUN_1028c0dc0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar5 = 0x736e654c4941796d;
  uVar2 = 0xed00006572616853;
  if (param_2 != 6) {
    uVar5 = 0xd000000000000011;
    uVar2 = 0x800000010f0c6e30;
  }
  uVar1 = 0xeb00000000647261;
  uVar3 = 0x6f6272656461656c;
  if (param_2 != 4) {
    uVar1 = 0xec000000656c6767;
    uVar3 = 0x6f546172656d6163;
  }
  if (param_2 < 6) {
    uVar2 = uVar1;
    uVar5 = uVar3;
  }
  uVar1 = 0x75706e4974616863;
  if (param_2 != 2) {
    uVar1 = 0x7265726f6c707865;
  }
  uVar3 = 0xe800000000000000;
  if (param_2 == 2) {
    uVar3 = 0xe900000000000074;
  }
  uVar6 = 0xe900000000000073;
  uVar4 = 0x657469726f766166;
  if (param_2 != 0) {
    uVar6 = 0xe500000000000000;
    uVar4 = 0x6572616873;
  }
  if (param_2 < 2) {
    uVar3 = uVar6;
    uVar1 = uVar4;
  }
  if (param_2 < 4) {
    uVar2 = uVar3;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1028c0f88; end: 1028c0fa7;  */

void FUN_1028c0f88(void)

{
  func_0x000107c61168(&PTR_PTR_112ec7ed0);
  return;
}


