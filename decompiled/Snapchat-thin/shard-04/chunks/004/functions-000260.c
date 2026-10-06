/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033fef38; end: 1033fefb3;  */

void FUN_1033fef38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 1033fefb4; end: 1033fefcf;  */

void FUN_1033fefb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 1033fefd0; end: 1033ff527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fefd0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar9 = _DAT_113070f98;
  lVar16 = _DAT_11306fb70;
  lVar17 = unaff_x20[2];
  lVar12 = *(long *)(lVar17 + _DAT_11306fb70);
  lVar5 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  uVar11 = *unaff_x20;
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + _DAT_113070f98) + _DAT_113070f60);
  func_0x000107c61428(lVar12 + 0x10,auStack_90,1,0);
  uVar10 = *(undefined8 *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x10) = uVar8;
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(uVar10);
  uVar13 = unaff_x20[9];
  FUN_103414440(0);
  func_0x000107c613fc();
  uVar8 = uVar13;
  FUN_103413f70();
  lVar12 = *(long *)(lVar17 + lVar16);
  func_0x000107c61428(lVar12 + 0x18,auStack_a8,1,0);
  uVar10 = *(undefined8 *)(lVar12 + 0x18);
  *(undefined8 *)(lVar12 + 0x18) = uVar8;
  *(undefined ***)(lVar12 + 0x20) = &PTR_DAT_110652230;
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar8);
  func_0x000107c615e8(uVar10);
  lVar2 = unaff_x20[5];
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar12 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar12 == 0) {
    func_0x0001007d6c6c(3,0x100000000000005c,0x800000010f14ac40,uVar11,&PTR_DAT_1106506e0);
  }
  else {
    uVar18 = *(undefined8 *)(unaff_x20[4] + _DAT_113036458);
    uVar15 = *(undefined8 *)(unaff_x20[4] + _DAT_113036488);
    puVar3 = &UNK_110650688;
    func_0x000107c613fc(&UNK_110650688,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar17);
    uVar10 = 0;
    func_0x000104343354(0);
    func_0x000107c613fc();
    pcVar4 = FUN_1033ff5a0;
    func_0x000104341f08(FUN_1033ff5a0,puVar3,0,0,uVar8,&PTR_DAT_110652230,uVar10);
    puVar1 = (undefined8 *)(lVar17 + _DAT_11306fb28);
    uVar11 = *puVar1;
    lVar2 = puVar1[1];
    func_0x000107c614f0(uVar11);
    pcVar14 = *(code **)(lVar2 + 8);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar18);
    func_0x000107c6157c(uVar15);
    (*pcVar14)(uVar11,lVar2);
    uVar10 = 0x112d5d480;
    func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
    pcVar14 = FUN_1033ff5a8;
    func_0x0001000bfde0(FUN_1033ff5a8,0,uVar10);
    func_0x000107c61574(uVar11);
    lVar9 = *(long *)(*(long *)(lVar5 + lVar9) + _DAT_113070f60);
    func_0x000107c61580(uVar18,2);
    func_0x000107c6157c(uVar15);
    func_0x000107c6157c(lVar9);
    func_0x000107c6157c(pcVar4);
    lVar5 = lVar12;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000103417d80(0);
    func_0x000107c613fc();
    func_0x000107c6157c(pcVar14);
    func_0x0001034162e4(lVar9,pcVar4,&PTR_DAT_11075cab0,FUN_1033ff71c,uVar18,FUN_1033ff7c0,uVar18,
                        0x1033ff7c8,0,0x1033ff7d0,0,FUN_1033ff828,uVar15,lVar5,pcVar14,
                        &UNK_102a3f210,0);
    lVar16 = *(long *)(lVar17 + lVar16);
    lVar5 = 0;
    FUN_1033ffa10();
    func_0x000107c613fc();
    *(long *)(lVar5 + 0x10) = lVar9;
    *(undefined ***)(lVar5 + 0x18) = &PTR_DAT_1106527e0;
    func_0x000107c61428(lVar16 + 0x38,auStack_c0,1,0);
    uVar10 = *(undefined8 *)(lVar16 + 0x38);
    *(long *)(lVar16 + 0x38) = lVar5;
    *(undefined ***)(lVar16 + 0x40) = &PTR_DAT_110650700;
    func_0x000107c6157c(lVar9);
    func_0x000107c615e8(uVar10);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar13 = *(undefined8 *)(unaff_x20[3] + _DAT_1130813f0);
    puVar3 = &UNK_1106506b0;
    func_0x000107c613fc(&UNK_1106506b0,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    func_0x0001000285a8(0x112ef0710,&UNK_10db20580);
    func_0x000107c61534();
    func_0x000107c6157c(uVar18);
    func_0x000107c615f0(uVar10);
    func_0x000107c6157c(uVar13);
    func_0x000107c61174(uVar7);
    pcVar6 = FUN_1033ffa30;
    func_0x0001000bdd8c(FUN_1033ffa30,puVar3);
    uVar7 = uVar18;
    FUN_103406f2c(uVar18,uVar13,pcVar6);
    uVar19 = *(undefined8 *)(unaff_x20[8] + _DAT_113091b70);
    func_0x000107c6157c(lVar9);
    func_0x000107c615f0(uVar19);
    FUN_1033ffa70(param_1,uVar10,uVar11,uVar7,(uint)uVar13 & 1,pcVar6,lVar9,uVar19);
    func_0x000107c61428(lVar9 + 200,auStack_f0,1,0);
    *(undefined ***)(lVar9 + 0xd0) = &PTR_DAT_1106511a8;
    func_0x000107c61604(lVar9 + 200,uVar10);
    FUN_10340794c();
    func_0x000107c615e8(lVar12);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(pcVar14);
    func_0x000107c61574(uVar15);
    func_0x000107c61574(uVar18);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(uVar8);
    uVar8 = unaff_x20[10];
    unaff_x20[10] = uVar10;
  }
  func_0x000107c61574(uVar8);
  return;
}



/* Entry: 1033ff528; end: 1033ff59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033ff528(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11306fb08);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 1033ff5a0; end: 1033ff5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033ff5a0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11306fb08);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1033ff5a8; end: 1033ff71b;  */

void FUN_1033ff5a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar18 = param_2[2];
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((uint)((ulong)uVar18 >> 0x3d) - 1 < 3) {
    uVar1 = param_2[0xb];
    uVar7 = param_2[0xc];
    uVar2 = param_2[9];
    uVar8 = param_2[10];
    uVar3 = param_2[7];
    uVar9 = param_2[8];
    uVar4 = param_2[5];
    uVar10 = param_2[6];
    uVar5 = param_2[3];
    uVar11 = param_2[4];
    uVar6 = *param_2;
    uVar12 = param_2[1];
    puVar13 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar13 + 0x18) = 2;
    *(undefined8 *)(puVar13 + 0x10) = 1;
    uVar17 = uVar12;
    func_0x000102e1264c(uVar6,uVar12,uVar18,uVar5,uVar11,uVar4,uVar10,uVar3,uVar9,uVar2,uVar8,uVar1,
                        uVar7);
    uVar14 = uVar6;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar15 = uVar14;
    func_0x000107c5faec();
    func_0x000102e17c90(uVar6,uVar12,uVar18,uVar5,uVar11,uVar4,uVar10,uVar3,uVar9,uVar2,uVar8,uVar1,
                        uVar7);
    func_0x000107c61170(uVar14);
    *(undefined8 *)(puVar13 + 0x20) = uVar15;
    *(undefined8 *)(puVar13 + 0x28) = uVar17;
  }
  puVar16 = puVar13;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar13);
  *param_1 = puVar16;
  return;
}



/* Entry: 1033ff71c; end: 1033ff7bf;  */

undefined8 FUN_1033ff71c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49f94(uStack_28,param_2,param_1,0);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033ff7c0; end: 1033ff7d7;  */

uint FUN_1033ff7c0(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1033ff7d8; end: 1033ff827;  */

undefined8 FUN_1033ff7d8(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033ff828; end: 1033ff82f;  */

undefined8 FUN_1033ff828(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1033ff830; end: 1033ff8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033ff830(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x50);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_103407c0c();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61574(uVar1);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fb70);
  func_0x000107c61428(lVar2 + 0x38,auStack_38,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  func_0x000107c615e8(uVar1);
  return 0;
}



/* Entry: 1033ff8bc; end: 1033ff937;  */

void FUN_1033ff8bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1033ff938; end: 1033ff97b;  */

void FUN_1033ff938(void)

{
  FUN_1033fefd0();
  return;
}



/* Entry: 1033ff97c; end: 1033ff99f;  */

void FUN_1033ff97c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033ff98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033ff9a0; end: 1033ff9c3;  */

void FUN_1033ff9a0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ff9c4; end: 1033ffa0f;  */

uint FUN_1033ff9c4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x28))(param_1,uVar2,lVar1);
  return (uint)param_1 & 1;
}



/* Entry: 1033ffa10; end: 1033ffa2f;  */

void FUN_1033ffa10(void)

{
  func_0x000107c61168(&PTR_PTR_112f64fd8);
  return;
}



/* Entry: 1033ffa30; end: 1033ffa6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ffa30(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033ffa70; end: 1033ffcc3;  */

long FUN_1033ffa70(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  char *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puVar10;
  undefined8 uStack_100;
  long lStack_f8;
  undefined **appuStack_f0 [5];
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined **appuStack_a0 [3];
  undefined *puStack_88;
  undefined **ppuStack_80;
  
  puStack_88 = &UNK_110651000;
  ppuStack_80 = &PTR_DAT_110651020;
  ppuVar5 = (undefined **)&UNK_110650720;
  ppuVar2 = ppuVar5;
  uStack_100 = param_6;
  lStack_f8 = param_7;
  func_0x000107c613fc(&UNK_110650720,0x30,7);
  ppuVar2[2] = param_3;
  *(undefined1 *)(ppuVar2 + 3) = param_4;
  ppuVar2[4] = (undefined *)
               CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
  ppuVar2[5] = param_5;
  appuStack_a0[0] = ppuVar2;
  FUN_1033ffce4(appuStack_a0,auStack_c8);
  pcVar3 = "PlayGamesLensPlusUpsellController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  func_0x0001000c6518(auStack_c8,lStack_b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_b0 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&uStack_100 + lVar4);
  (**(code **)(extraout_x12 + 0x10))(puVar9);
  puVar7 = (undefined *)*puVar9;
  uVar1 = *(undefined1 *)((long)&lStack_f8 + lVar4);
  puVar10 = *(undefined **)((long)appuStack_f0 + lVar4);
  puVar8 = *(undefined **)((long)appuStack_f0 + lVar4 + 8);
  appuStack_f0[3] = (undefined **)&UNK_110651000;
  appuStack_f0[4] = &PTR_DAT_110651020;
  ppuVar2 = ppuVar5;
  func_0x000107c613fc(&UNK_110650720,0x30,7);
  ppuVar2[2] = puVar7;
  *(undefined1 *)(ppuVar2 + 3) = uVar1;
  ppuVar2[4] = puVar10;
  ppuVar2[5] = puVar8;
  lVar4 = 0;
  appuStack_f0[0] = ppuVar2;
  func_0x000103407d68();
  func_0x000107c613fc();
  func_0x0001000c6518(appuStack_f0,&UNK_110651000);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x20);
  puVar9 = (undefined8 *)((long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar9);
  puVar7 = (undefined *)*puVar9;
  uVar1 = *(undefined1 *)(puVar9 + 1);
  puVar10 = (undefined *)puVar9[2];
  puVar8 = (undefined *)puVar9[3];
  *(undefined **)(lVar4 + 0x38) = &UNK_110651000;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_110651020;
  func_0x000107c613fc(&UNK_110650720,0x30,7);
  *(undefined ***)(lVar4 + 0x20) = ppuVar5;
  ppuVar5[2] = puVar7;
  *(undefined1 *)(ppuVar5 + 3) = uVar1;
  ppuVar5[4] = puVar10;
  ppuVar5[5] = puVar8;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x0001000834e4(appuStack_a0);
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  *(undefined8 *)(lVar4 + 0x48) = uStack_100;
  *(undefined ***)(lVar4 + 0x50) = &PTR_DAT_1106527e0;
  *(long *)(lVar4 + 0x58) = lStack_f8;
  *(char **)(lVar4 + 0x60) = pcVar3;
  func_0x0001000834e4(appuStack_f0);
  func_0x0001000834e4(auStack_c8);
  return lVar4;
}



/* Entry: 1033ffcc4; end: 1033ffce3;  */

void FUN_1033ffcc4(void)

{
  func_0x000107c61168(&PTR_PTR_112f64ef8);
  return;
}



/* Entry: 1033ffce4; end: 1033ffd27;  */

long FUN_1033ffce4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1033ffd28; end: 1033ffd2f;  */

undefined8 FUN_1033ffd28(void)

{
  return 0x1b;
}



/* Entry: 1033ffd30; end: 1033ffdd3;  */

void FUN_1033ffd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110650760;
  func_0x000107c613fc(&UNK_110650760,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1033fff88,puVar1);
  return;
}



/* Entry: 1033ffdd4; end: 1033fff87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ffdd4(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&lStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&lStack_80);
  FUN_1034001cc();
  func_0x000107c613fc();
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_11306f9c8);
  uVar4 = *(undefined8 *)(lStack_78 + _DAT_113034408);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_11306fae0);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = lStack_80;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar2 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    lVar3 = 0;
    func_0x00010340ffe4();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x28) = lVar2;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined1 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    *(long *)(param_2 + 0x10) = lVar3;
    func_0x000107c6157c();
    FUN_10340ebf4();
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(lStack_80);
    func_0x000107c61574(lVar3);
    *param_1 = param_2;
    param_1[1] = (long)&PTR_DAT_110650788;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033fff88);
  (*pcVar1)();
}



/* Entry: 1033fff88; end: 1033fff93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fff88(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&lStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&lStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&lStack_80);
  FUN_1034001cc();
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11306f9c8);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_113034408);
  uVar6 = *(undefined8 *)(lStack_70 + _DAT_11306fae0);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar4 = lStack_80;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar3 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    lVar4 = 0;
    func_0x00010340ffe4();
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x28) = lVar3;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined1 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(long *)(lVar2 + 0x10) = lVar4;
    func_0x000107c6157c();
    FUN_10340ebf4();
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(lStack_80);
    func_0x000107c61574(lVar4);
    *param_1 = lVar2;
    param_1[1] = (long)&PTR_DAT_110650788;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033fff88);
  (*pcVar1)();
}



/* Entry: 1033fff94; end: 1034000f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033fff94(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11306f9c8);
  uVar4 = *(undefined8 *)(param_3 + _DAT_113034408);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306fae0);
  func_0x000107c6157c(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = param_4;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar2 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    lVar3 = 0;
    func_0x00010340ffe4();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x28) = lVar2;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined1 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    *(long *)(unaff_x20 + 0x10) = lVar3;
    func_0x000107c6157c();
    FUN_10340ebf4();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61574(lVar3);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034000f4);
  (*pcVar1)();
}



/* Entry: 1034000f4; end: 10340013f;  */

undefined1  [16] FUN_1034000f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(lVar2 + 0x38) = 0;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  func_0x000107c6142c(uVar1);
  return ZEXT816(0);
}



/* Entry: 103400140; end: 10340017f;  */

void FUN_103400140(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103400180; end: 1034001cb;  */

undefined ** FUN_103400180(void)

{
  return &PTR_DAT_113066700;
}



/* Entry: 1034001cc; end: 1034001eb;  */

void FUN_1034001cc(void)

{
  func_0x000107c61168(&PTR_PTR_112f650b8);
  return;
}



/* Entry: 1034001ec; end: 10340023f;  */

void FUN_1034001ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103400240();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103400240; end: 1034003ff;  */

void FUN_103400240(double param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = unaff_x20 + 5;
  uVar7 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_103400570();
    dVar8 = param_1;
    func_0x000107c3ec60(puVar1);
    func_0x000107c609b0();
    func_0x000107c6088c(&puStack_80,param_1,param_1);
    func_0x000107c60890(&puStack_80,0,(1.0 - param_1) * dVar8 * 0.5);
    uStack_a8 = uStack_78;
    puStack_b0 = puStack_80;
    uStack_98 = puStack_68;
    uStack_a0 = puStack_70;
    uStack_88 = puStack_58;
    uStack_90 = pcStack_60;
    func_0x000107c60884(&puStack_e0,&puStack_80,&puStack_b0);
    uStack_78 = uStack_d8;
    puStack_80 = puStack_e0;
    puStack_68 = (undefined *)uStack_c8;
    puStack_70 = (undefined *)uStack_d0;
    puStack_58 = (undefined *)uStack_b8;
    pcStack_60 = (code *)uStack_c0;
    func_0x000107c5a03c(puVar1);
    uVar6 = unaff_x20[4];
    puVar2 = &UNK_110650828;
    func_0x000107c613fc(&UNK_110650828,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_110650850;
    func_0x000107c613fc(&UNK_110650850,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,puVar1);
    puVar4 = &UNK_110650878;
    func_0x000107c613fc(&UNK_110650878,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    pcStack_60 = FUN_1034007c0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110650890;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 103400400; end: 10340052f;  */

void FUN_103400400(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_1106508c8;
  func_0x000107c613fc(&UNK_1106508c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  uStack_50 = 0x1034007e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106508e0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61610(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 103400530; end: 10340056f;  */

void FUN_103400530(void)

{
  FUN_103400400();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103400570; end: 103400633;  */

double FUN_103400570(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3ec60(lVar2);
  func_0x000107c609cc();
  dVar4 = 1.0;
  if (0.0 < param_1) {
    dVar3 = param_1;
    func_0x000107c5c42c();
    func_0x000107c61180();
    dVar1 = param_1;
    if (lVar2 != 0) {
      func_0x000107c3ec60();
      func_0x000107c61170(lVar2);
      func_0x000107c609cc(dVar3,param_2,param_3,param_4);
      dVar1 = dVar3;
    }
    if (0.0 < dVar1) {
      dVar4 = 1.0;
      if (param_1 / dVar1 <= 1.0) {
        dVar4 = param_1 / dVar1;
      }
    }
  }
  return dVar4;
}



/* Entry: 103400634; end: 10340076f;  */

void FUN_103400634(double param_1,long param_2,long param_3)

{
  double dVar1;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      FUN_103400570();
      dVar1 = param_1;
      func_0x000107c3ec60(param_3);
      func_0x000107c609b0();
      func_0x000107c6088c(&uStack_a0,param_1,param_1);
      func_0x000107c60890(&uStack_a0,0,(1.0 - param_1) * dVar1 * 0.5);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      func_0x000107c60884(&uStack_100,&uStack_a0,&uStack_d0);
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
      func_0x000107c5a03c(param_3);
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 103400770; end: 103400783;  */

void FUN_103400770(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 103400784; end: 1034007bf;  */

void FUN_103400784(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  func_0x000107c61604(lVar1 + 0x28,param_1);
  func_0x000107c3d89c(*(undefined8 *)(lVar1 + 0x10));
  FUN_103400240();
  return;
}



/* Entry: 1034007c0; end: 1034007ef;  */

void FUN_1034007c0(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      FUN_103400570();
      dVar3 = param_1;
      func_0x000107c3ec60(lVar2);
      func_0x000107c609b0();
      func_0x000107c6088c(&uStack_a0,param_1,param_1);
      func_0x000107c60890(&uStack_a0,0,(1.0 - param_1) * dVar3 * 0.5);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      func_0x000107c60884(&uStack_100,&uStack_a0,&uStack_d0);
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
      func_0x000107c5a03c(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1034007f0; end: 103400b1f;  */

void FUN_1034007f0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  code *pcVar9;
  
  puVar1 = &UNK_10dbc1600;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  func_0x000107c61614(unaff_x20 + 0x28,0);
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  func_0x000107c3d72c(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar5 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c515ac(param_1);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(puVar4 + 0x20) = puVar7;
  puVar5 = puVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  *(undefined **)(puVar4 + 0x28) = puVar7;
  puVar5 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x30) = puVar7;
  puVar5 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x38) = puVar7;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar5 = puVar4;
  func_0x000107c5fc48(puVar4,uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e5e610,&UNK_10da659e0);
  func_0x000107c61174(puVar3);
  func_0x0001000b637c();
  puVar1 = &UNK_110650828;
  func_0x000107c613fc(&UNK_110650828,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar8 = FUN_103400b20;
  puVar4 = puVar1;
  (**(code **)(*param_2 + 0x60))(FUN_103400b20);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(pcVar8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar9 = *(code **)(puVar4 + 0x18);
  func_0x000107c6157c(uVar2);
  (*pcVar9)();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(pcVar8);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 103400b20; end: 103400b2f;  */

void FUN_103400b20(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103400240();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103400b30; end: 103400c27;  */

void FUN_103400b30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  lVar1 = param_1;
  FUN_103400c28();
  if (lVar1 != 0) {
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f14ad60,uVar2,&PTR_DAT_110650930);
    func_0x000107c6142c(0x800000010f14ad60);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c43ba4(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103400c28; end: 103400cfb;  */

void FUN_103400c28(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_38;
  
  uVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    puStack_38 = PTR_DAT_1126a1c68;
    lVar2 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_38);
    if (lVar2 != 0) {
      return;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x0001007d6c6c(3,0xd00000000000004d,0x800000010f14acf0,uVar3,&PTR_DAT_110650930);
  return;
}



/* Entry: 103400cfc; end: 103400df3;  */

void FUN_103400cfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  lVar1 = param_1;
  FUN_103400c28();
  if (lVar1 != 0) {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    func_0x0001007d6c6c(1,0xd000000000000019,0x800000010f14acd0,uVar2,&PTR_DAT_110650930);
    func_0x000107c6142c(0x800000010f14acd0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c43ba8(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103400df4; end: 103400e37;  */

void FUN_103400df4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103400e38; end: 103400fbb;  */

void FUN_103400e38(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = unaff_x20[5];
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = unaff_x20[4];
    if (uVar3 == param_1 && lVar2 == param_2) {
      return;
    }
    uVar4 = *unaff_x20;
    uVar1 = uVar3;
    func_0x000107c605b8(uVar3,lVar2,param_1,param_2,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    func_0x000107c61434(lVar2);
    func_0x000107c602fc(0x32);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar3,lVar2);
    func_0x000107c5fb78(0xd00000000000001f,0x800000010f14ad40);
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x7461766974636120,0xea00000000006465);
    func_0x0001007d6c6c(3,0x20736e656c,0xe500000000000000,uVar4,&PTR_DAT_110650910);
    func_0x000107c6142c(0xe500000000000000);
    FUN_103400cfc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
    uVar4 = unaff_x20[5];
  }
  unaff_x20[4] = param_1;
  unaff_x20[5] = param_2;
  func_0x000107c6142c(uVar4);
  func_0x000107c61434(param_2);
  FUN_103400b30(param_1,param_2);
  return;
}



/* Entry: 103400fbc; end: 103401007;  */

void FUN_103400fbc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103401008; end: 10340101f;  */

void FUN_103401008(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100d47b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 103401020; end: 10340124f;  */

/* WARNING: Possible PIC construction at 0x000103401108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340119c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340110c) */
/* WARNING: Removing unreachable block (ram,0x0001034011a0) */

void FUN_103401020(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  plVar6 = (long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(plVar6,*(undefined8 *)(unaff_x20 + 0x58));
  plVar6 = *(long **)(*plVar6 + 0x10);
  puVar2 = &UNK_110650980;
  func_0x000107c613fc(&UNK_110650980,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar7 = *(code **)(*plVar6 + 0x60);
  func_0x000107c6157c(plVar6);
  pcVar3 = FUN_103401e94;
  puVar4 = puVar2;
  (*pcVar7)(FUN_103401e94);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar2);
  pcVar7 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar4 + 0x10))(uVar1,pcVar7,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 103401250; end: 1034016a3;  */

/* WARNING: Possible PIC construction at 0x0001034015b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034015c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034015f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340146c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103401454) */
/* WARNING: Removing unreachable block (ram,0x0001034015fc) */
/* WARNING: Removing unreachable block (ram,0x000103401494) */
/* WARNING: Removing unreachable block (ram,0x000103401614) */
/* WARNING: Removing unreachable block (ram,0x00010340163c) */
/* WARNING: Removing unreachable block (ram,0x0001034015c8) */
/* WARNING: Removing unreachable block (ram,0x00010340162c) */
/* WARNING: Removing unreachable block (ram,0x0001034015b8) */
/* WARNING: Removing unreachable block (ram,0x000103401470) */

void FUN_103401250(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined auStack_88 [24];
  
  puVar2 = (undefined *)*param_1;
  func_0x000107c42454();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000100c70ba8(0);
  puVar12 = puVar2;
  func_0x000107c5fc54(puVar2,uVar3);
  func_0x000107c61170(puVar2);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar2 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar2 = puVar12;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined *)0x0) {
    if ((long)puVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034016a4);
      (*pcVar1)();
    }
    puVar6 = auStack_88;
    func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(puVar12 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar11;
        puVar6 = puVar12;
        func_0x000100ff3f88();
      }
      lVar5 = param_2 + 0x10;
      func_0x000107c61648();
      if (lVar5 != 0) {
        puVar12 = puVar4;
        func_0x000107c44ea0();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          puVar2 = (undefined *)0x0;
          puVar13 = (undefined *)0x0;
          puVar11 = puVar6;
        }
        else {
          puVar2 = puVar12;
          func_0x000107c5faec();
          puVar11 = puVar6;
          func_0x000107c61170(puVar12);
          puVar13 = puVar6;
        }
        puVar6 = puVar4;
        func_0x000107c44ea8();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar6;
          puVar11 = PTR___sSSN_11034da80;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar6);
        }
        puVar6 = puVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar12 = puVar11;
          func_0x000107c5faec();
          func_0x000107c5fadc();
          break;
        }
        if (puVar13 == (undefined *)0x0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61574(lVar5);
          func_0x000107c61170(puVar4);
          break;
        }
        uVar7 = (ulong)puVar2 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) {
          uVar7 = *(ulong *)(lVar5 + 0x10);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar7 != 0) {
            puVar11 = puVar13;
            func_0x000107c5fadc(puVar2);
            if (puVar12 == (undefined *)0x0) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = puVar12;
              puVar11 = PTR___sSSN_11034da80;
              func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                                  PTR___sSSSHsWP_11034da90);
            }
            uVar8 = uVar7;
            func_0x000107c4b864();
            func_0x000107c61180();
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar6);
            if (uVar8 == 0) {
              func_0x000107c6142c(puVar13);
              func_0x000107c61574(lVar5);
              func_0x000107c61170(puVar4);
            }
            else {
              uVar9 = uVar8;
              func_0x000107c5faec();
              func_0x000107c61170(uVar8);
              uVar7 = uVar9 & 0xffffffffffff;
              if (((ulong)puVar11 & 0x2000000000000000) != 0) {
                uVar7 = (ulong)puVar11 >> 0x38 & 0xf;
              }
              if (uVar7 == 0) {
                func_0x000107c6142c(puVar11);
                puVar12 = puVar13;
              }
              else {
                uVar3 = *(undefined8 *)(lVar5 + 0x68);
                puVar12 = &UNK_110650980;
                func_0x000107c613fc(&UNK_110650980,0x18,7);
                func_0x000107c61644(puVar12 + 0x10,lVar5);
                puVar2 = &UNK_110650ae8;
                func_0x000107c613fc(&UNK_110650ae8,0x31,7);
                *(undefined **)(puVar2 + 0x10) = puVar12;
                *(ulong *)(puVar2 + 0x18) = uVar9;
                *(undefined **)(puVar2 + 0x20) = puVar11;
                *(undefined8 *)(puVar2 + 0x28) = 0x3ff0000000000000;
                puVar2[0x30] = 0;
                uStack_98 = 0x103401f74;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                puStack_a8 = &UNK_1000f6b44;
                puStack_a0 = &UNK_110650b00;
                puStack_90 = puVar2;
                func_0x000107c60bc4(&puStack_b8);
                func_0x000107c61574(puStack_90);
                func_0x000107c4e524(uVar3);
                puVar12 = puVar13;
              }
            }
            break;
          }
        }
        func_0x000107c61170(puVar6);
        puVar12 = puVar13;
        break;
      }
      func_0x000107c61170(puVar4);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
  return;
}



/* Entry: 1034016a4; end: 1034017ef;  */

void FUN_1034016a4(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c42454();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100c70ba8(0);
  uVar3 = uVar1;
  func_0x000107c5fc54(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  if (uVar3 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  if (uVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x68);
      puVar4 = &UNK_110650980;
      func_0x000107c613fc(&UNK_110650980,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_2);
      uStack_58 = 0x103401f70;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_110650ab0;
      ppuVar5 = &puStack_78;
      puStack_50 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(uVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 1034017f0; end: 1034019c7;  */

void FUN_1034017f0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_1106509a8;
  func_0x000107c613fc(&UNK_1106509a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x103401eac;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103401eb4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1010ae2d8;
  puStack_78 = &UNK_1106509c0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1106509f8;
  func_0x000107c613fc(&UNK_1106509f8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x103401ef0;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = (code *)0x103401ef8;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_110650a10;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c708(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x66,0x3f,0x29,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034019c4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x66,0x41,0x21,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034019c8);
  (*pcVar1)();
}



/* Entry: 1034019c8; end: 103401bdb;  */

void FUN_1034019c8(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_68,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = *(ulong *)(param_6 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar1 != 0) {
        func_0x000107c5fadc(param_3,param_4);
        if (param_5 != 0) {
          func_0x000107c5f9dc(param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                              PTR___sSSSHsWP_11034da90);
        }
        func_0x000107c5fadc(param_1);
        uVar2 = uVar1;
        func_0x000107c4b864();
        func_0x000107c61180();
        func_0x000107c615e8(uVar1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_1);
        if (uVar2 != 0) {
          uVar3 = uVar2;
          func_0x000107c5faec();
          func_0x000107c61170(uVar2);
          uVar1 = uVar3 & 0xffffffffffff;
          if ((param_2 & 0x2000000000000000) != 0) {
            uVar1 = param_2 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            func_0x000107c6142c(param_2);
          }
          else {
            uVar7 = *(undefined8 *)(param_6 + 0x68);
            puVar4 = &UNK_110650980;
            func_0x000107c613fc(&UNK_110650980,0x18,7);
            func_0x000107c61644(puVar4 + 0x10,param_6);
            puVar5 = &UNK_110650a70;
            func_0x000107c613fc(&UNK_110650a70,0x31,7);
            *(undefined **)(puVar5 + 0x10) = puVar4;
            *(ulong *)(puVar5 + 0x18) = uVar3;
            *(ulong *)(puVar5 + 0x20) = param_2;
            *(undefined8 *)(puVar5 + 0x28) = 0;
            puVar5[0x30] = 1;
            uStack_78 = 0x103401f08;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0x42000000;
            puStack_88 = &UNK_1000f6b44;
            puStack_80 = &UNK_110650a88;
            ppuVar6 = &puStack_98;
            puStack_70 = puVar5;
            func_0x000107c60bc4(ppuVar6);
            func_0x000107c61574(puStack_70);
            func_0x000107c4e524(uVar7);
            func_0x000107c60bd0(ppuVar6);
          }
        }
      }
    }
    func_0x000107c61574(param_6);
  }
  return;
}



/* Entry: 103401bdc; end: 103401cbf;  */

void FUN_103401bdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x68);
    puVar1 = &UNK_110650980;
    func_0x000107c613fc(&UNK_110650980,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_3);
    uStack_58 = 0x103401f00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110650a38;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 103401cc0; end: 103401d8b;  */

void FUN_103401cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001033fc9b0(param_1 + 0x18,auStack_80);
    func_0x000107c61574(param_1);
    puVar1 = auStack_80;
    func_0x0001000a8868(puVar1,uStack_68);
    (**(code **)(lStack_60 + 8))
              (puVar1,param_2,param_3,0x3fd3333333333333,0,param_4,param_5,0,0,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103401d8c; end: 103401e2f;  */

void FUN_103401d8c(long param_1)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x0001033fc9b0(param_1 + 0x18,auStack_70);
    func_0x000107c61574(param_1);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))(0x3fd3333333333333,0,0,0,uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 103401e30; end: 103401e93;  */

void FUN_103401e30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103401e94; end: 103401eb3;  */

/* WARNING: Possible PIC construction at 0x0001034015b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034015c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034015f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103401490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340146c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103401454) */
/* WARNING: Removing unreachable block (ram,0x0001034015fc) */
/* WARNING: Removing unreachable block (ram,0x000103401494) */
/* WARNING: Removing unreachable block (ram,0x000103401614) */
/* WARNING: Removing unreachable block (ram,0x00010340163c) */
/* WARNING: Removing unreachable block (ram,0x0001034015c8) */
/* WARNING: Removing unreachable block (ram,0x00010340162c) */
/* WARNING: Removing unreachable block (ram,0x0001034015b8) */
/* WARNING: Removing unreachable block (ram,0x000103401470) */

void FUN_103401e94(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined auStack_88 [24];
  
  puVar2 = (undefined *)*param_1;
  func_0x000107c42454();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000100c70ba8(0);
  puVar12 = puVar2;
  func_0x000107c5fc54(puVar2,uVar3);
  func_0x000107c61170(puVar2);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar2 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar2 = puVar12;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined *)0x0) {
    if ((long)puVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034016a4);
      (*pcVar1)();
    }
    puVar6 = auStack_88;
    func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(puVar12 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar11;
        puVar6 = puVar12;
        func_0x000100ff3f88();
      }
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar5 != 0) {
        puVar12 = puVar4;
        func_0x000107c44ea0();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          puVar2 = (undefined *)0x0;
          puVar13 = (undefined *)0x0;
          puVar11 = puVar6;
        }
        else {
          puVar2 = puVar12;
          func_0x000107c5faec();
          puVar11 = puVar6;
          func_0x000107c61170(puVar12);
          puVar13 = puVar6;
        }
        puVar6 = puVar4;
        func_0x000107c44ea8();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar6;
          puVar11 = PTR___sSSN_11034da80;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar6);
        }
        puVar6 = puVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar12 = puVar11;
          func_0x000107c5faec();
          func_0x000107c5fadc();
          break;
        }
        if (puVar13 == (undefined *)0x0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61574(lVar5);
          func_0x000107c61170(puVar4);
          break;
        }
        uVar7 = (ulong)puVar2 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) {
          uVar7 = *(ulong *)(lVar5 + 0x10);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar7 != 0) {
            puVar11 = puVar13;
            func_0x000107c5fadc(puVar2);
            if (puVar12 == (undefined *)0x0) {
              puVar10 = (undefined *)0x0;
            }
            else {
              puVar10 = puVar12;
              puVar11 = PTR___sSSN_11034da80;
              func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                                  PTR___sSSSHsWP_11034da90);
            }
            uVar8 = uVar7;
            func_0x000107c4b864();
            func_0x000107c61180();
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar6);
            if (uVar8 == 0) {
              func_0x000107c6142c(puVar13);
              func_0x000107c61574(lVar5);
              func_0x000107c61170(puVar4);
            }
            else {
              uVar9 = uVar8;
              func_0x000107c5faec();
              func_0x000107c61170(uVar8);
              uVar7 = uVar9 & 0xffffffffffff;
              if (((ulong)puVar11 & 0x2000000000000000) != 0) {
                uVar7 = (ulong)puVar11 >> 0x38 & 0xf;
              }
              if (uVar7 == 0) {
                func_0x000107c6142c(puVar11);
                puVar12 = puVar13;
              }
              else {
                uVar3 = *(undefined8 *)(lVar5 + 0x68);
                puVar12 = &UNK_110650980;
                func_0x000107c613fc(&UNK_110650980,0x18,7);
                func_0x000107c61644(puVar12 + 0x10,lVar5);
                puVar2 = &UNK_110650ae8;
                func_0x000107c613fc(&UNK_110650ae8,0x31,7);
                *(undefined **)(puVar2 + 0x10) = puVar12;
                *(ulong *)(puVar2 + 0x18) = uVar9;
                *(undefined **)(puVar2 + 0x20) = puVar11;
                *(undefined8 *)(puVar2 + 0x28) = 0x3ff0000000000000;
                puVar2[0x30] = 0;
                uStack_98 = 0x103401f74;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                puStack_a8 = &UNK_1000f6b44;
                puStack_a0 = &UNK_110650b00;
                puStack_90 = puVar2;
                func_0x000107c60bc4(&puStack_b8);
                func_0x000107c61574(puStack_90);
                func_0x000107c4e524(uVar3);
                puVar12 = puVar13;
              }
            }
            break;
          }
        }
        func_0x000107c61170(puVar6);
        puVar12 = puVar13;
        break;
      }
      func_0x000107c61170(puVar4);
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
  return;
}



/* Entry: 103401eb4; end: 103401ed3;  */

void FUN_103401eb4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103401ed4; end: 103401f0b;  */

void FUN_103401ed4(long param_1,long param_2)

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



/* Entry: 103401f0c; end: 103401f37;  */

void FUN_103401f0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103401f38; end: 103401f77;  */

void FUN_103401f38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    func_0x0001033fc9b0(lVar5 + 0x18,auStack_80);
    func_0x000107c61574(lVar5);
    puVar6 = auStack_80;
    func_0x0001000a8868(puVar6,uStack_68);
    (**(code **)(lStack_60 + 8))
              (puVar6,uVar2,uVar1,0x3fd3333333333333,0,uVar3,uVar4,0,0,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103401f78; end: 1034021af;  */

void FUN_103401f78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  lVar1 = param_1;
  func_0x000107c4afac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4ade8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000040,0x800000010f14ad80,uVar5,&PTR_DAT_110650b28);
    lVar2 = 0x112d59e78;
    func_0x0001000285a8(0x112d59e78,&UNK_10d920c20);
    func_0x000104886440();
    unaff_x20[2] = lVar2;
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d59e78,&UNK_10d920c20);
    lVar2 = lVar3;
    func_0x000107c41dd4();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    unaff_x20[2] = lVar4;
    lVar4 = lVar3;
    func_0x000107c5e3e0();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x0001000b637c();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar4);
  }
  unaff_x20[3] = lVar2;
  lVar2 = lVar1;
  func_0x000107c4b094();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000044,0x800000010f14add0,uVar5,&PTR_DAT_110650b28);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    lVar2 = 0x112f65490;
    func_0x0001000285a8(0x112f65490,&UNK_10dbc17d8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112f65490,&UNK_10dbc17d8);
    lVar4 = lVar3;
    func_0x000107c44e98();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x0001000b637c();
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
  }
  unaff_x20[4] = lVar2;
  return;
}



/* Entry: 1034021b0; end: 103402203;  */

void FUN_1034021b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103402204; end: 103402227;  */

void FUN_103402204(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000103402214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 103402228; end: 10340226b;  */

void FUN_103402228(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10340226c; end: 103402297;  */

void FUN_10340226c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 103402298; end: 1034022b7;  */

void FUN_103402298(void)

{
  long *unaff_x20;
  
  func_0x000107c3f764(*(undefined8 *)(*unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1034022b8; end: 1034022cb;  */

bool FUN_1034022b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1034022cc; end: 103402377;  */

void FUN_1034022cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103402378; end: 10340249b;  */

void FUN_103402378(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plStack_48;
  
  uVar8 = *unaff_x20;
  uVar6 = unaff_x20[8];
  lVar7 = unaff_x20[9];
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar7 + 8))();
  func_0x0001000d224c(&plStack_48);
  plVar1 = plStack_48;
  func_0x000100471e0c(plStack_48,1);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(plStack_48);
  puVar2 = &UNK_110650c38;
  func_0x000107c613fc(&UNK_110650c38,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110650d28;
  func_0x000107c613fc(&UNK_110650d28,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  pcVar4 = FUN_103404338;
  puVar2 = puVar3;
  (**(code **)(*plVar1 + 0x60))(FUN_103404338);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar2 + 0x10))(unaff_x20[6],pcVar5,puVar2);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 10340249c; end: 1034025af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340249c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar5 = *unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20[3] + _DAT_113074ea8);
  puVar1 = &UNK_110650c38;
  func_0x000107c613fc(&UNK_110650c38,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110650c60;
  func_0x000107c613fc(&UNK_110650c60,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  uStack_40 = 0x1034042b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10169aca4;
  puStack_48 = &UNK_110650c78;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar1);
  uVar5 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1034025b0; end: 10340268f;  */

void FUN_1034025b0(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  plVar1 = plStack_48;
  func_0x000100471e0c(plStack_48,0);
  func_0x000107c615e8(plStack_48);
  puVar2 = &UNK_110650c38;
  func_0x000107c613fc(&UNK_110650c38,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_1034042a8;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_1034042a8);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 103402690; end: 1034026bf;  */

void FUN_103402690(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x108) != 0) {
    func_0x000107c4139c();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
  }
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1034026c0; end: 103402bb3;  */

void FUN_1034026c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar12 = *unaff_x20;
  uVar9 = unaff_x20[0x16];
  unaff_x20[0x15] = param_1;
  unaff_x20[0x16] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar9);
  uStack_b8 = unaff_x20[0x1a];
  uStack_c0 = unaff_x20[0x19];
  uStack_a8 = unaff_x20[0x1c];
  uStack_b0 = unaff_x20[0x1b];
  uStack_98 = unaff_x20[0x1e];
  uStack_a0 = unaff_x20[0x1d];
  uStack_88 = unaff_x20[0x20];
  uStack_90 = unaff_x20[0x1f];
  uStack_c8 = unaff_x20[0x18];
  uStack_d0 = unaff_x20[0x17];
  uVar13 = param_3[1];
  uVar11 = *param_3;
  uVar9 = param_3[2];
  unaff_x20[0x1a] = param_3[3];
  unaff_x20[0x19] = uVar9;
  uVar9 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  unaff_x20[0x1c] = param_3[5];
  unaff_x20[0x1b] = uVar9;
  unaff_x20[0x1e] = uVar15;
  unaff_x20[0x1d] = uVar14;
  uVar9 = param_3[8];
  unaff_x20[0x20] = param_3[9];
  unaff_x20[0x1f] = uVar9;
  unaff_x20[0x18] = uVar13;
  unaff_x20[0x17] = uVar11;
  func_0x000102e17b28(param_3,&uStack_138);
  func_0x000102e04190(&uStack_d0);
  *(undefined1 *)(unaff_x20 + 0x23) = 0;
  FUN_103402690();
  puVar1 = unaff_x20 + 0x13;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    lVar10 = puVar1[0x12];
    if (lVar10 == 0) {
      func_0x000107c615e8();
    }
    else {
      func_0x000107c6157c(lVar10);
      func_0x000103405ad0();
      func_0x000107c61574(lVar10);
      uVar11 = puVar1[0x12];
      puVar1[0x12] = 0;
      func_0x000107c615e8(puVar1);
      func_0x000107c61574(uVar11);
    }
  }
  lVar10 = unaff_x20[2];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    puVar1 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = puVar1;
    func_0x000103f6c8c8();
    uVar11 = *puVar2;
    uVar13 = puVar2[1];
    func_0x000107c61434(uVar13);
    func_0x000107c5fadc(uVar11,uVar13);
    func_0x000107c6142c(uVar13);
    lVar3 = lVar10;
    func_0x000107c4b2b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar11);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      uVar11 = unaff_x20[0x21];
      unaff_x20[0x21] = lVar4;
      func_0x000107c615f0(lVar4);
      func_0x000107c615e8(uVar11);
      uStack_138 = 0;
      uStack_130 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_130);
      uStack_138 = 0xd000000000000011;
      uStack_130 = 0x800000010f14b060;
      func_0x000107c5fb78(param_1,param_2);
      uVar11 = uStack_130;
      func_0x0001007d6c6c(1,uStack_138,uStack_130,uVar12,&PTR_DAT_110651af8);
      func_0x000107c6142c(uVar11);
      func_0x0001000285a8(0x112f4beb8,&UNK_10db9bc80);
      lVar3 = lVar4;
      func_0x000107c3d080(lVar4);
      func_0x000107c61180();
      func_0x0001000d224c(&uStack_138);
      uVar11 = uStack_138;
      lVar5 = lVar3;
      func_0x000100759c94(lVar3,uStack_138);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(uVar11);
      func_0x0001000d224c(&uStack_138);
      uVar11 = uStack_138;
      func_0x0001000d224c(&uStack_140);
      func_0x000107c4b24c(uStack_140);
      func_0x000107c615e8(uStack_140);
      uVar13 = uVar11;
      func_0x00010488a484(uVar9,uVar11,1);
      func_0x000107c61574(lVar5);
      func_0x000107c615e8(uVar11);
      puVar6 = &UNK_110650c38;
      func_0x000107c613fc(&UNK_110650c38,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      puVar7 = &UNK_110650d50;
      func_0x000107c613fc(&UNK_110650d50,0x88,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(long *)(puVar7 + 0x18) = lVar4;
      *(undefined8 **)(puVar7 + 0x20) = param_1;
      *(undefined8 *)(puVar7 + 0x28) = param_2;
      uVar9 = param_3[4];
      uVar14 = param_3[7];
      uVar11 = param_3[6];
      *(undefined8 *)(puVar7 + 0x58) = param_3[5];
      *(undefined8 *)(puVar7 + 0x50) = uVar9;
      *(undefined8 *)(puVar7 + 0x68) = uVar14;
      *(undefined8 *)(puVar7 + 0x60) = uVar11;
      uVar9 = param_3[8];
      *(undefined8 *)(puVar7 + 0x78) = param_3[9];
      *(undefined8 *)(puVar7 + 0x70) = uVar9;
      uVar14 = *param_3;
      uVar11 = param_3[3];
      uVar9 = param_3[2];
      *(undefined8 *)(puVar7 + 0x38) = param_3[1];
      *(undefined8 *)(puVar7 + 0x30) = uVar14;
      *(undefined8 *)(puVar7 + 0x48) = uVar11;
      *(undefined8 *)(puVar7 + 0x40) = uVar9;
      *(undefined8 *)(puVar7 + 0x80) = uVar12;
      func_0x000107c61434(param_2);
      func_0x000102e17b28(param_3,&uStack_138);
      func_0x000107c615f0(lVar4);
      func_0x00010075a04c(0,1,0x103404340,puVar7);
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(uVar13);
      func_0x000107c61574(puVar7);
      return;
    }
    func_0x000107c615e8(lVar10);
  }
  uStack_138 = 0;
  uStack_130 = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(uStack_130);
  uStack_138 = 0xd000000000000024;
  uStack_130 = 0x800000010f14b010;
  func_0x000107c5fb78(param_1,param_2);
  uVar9 = uStack_130;
  func_0x000104366fc4(uStack_138,uStack_130,uVar12,&PTR_DAT_110651af8);
  func_0x000107c6142c(uVar9);
  plVar8 = unaff_x20 + 0xc;
  func_0x0001000a8868(plVar8,unaff_x20[0xf]);
  uVar11 = *(undefined8 *)(*plVar8 + 0x10);
  func_0x000107c5fadc(param_1,param_2);
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f14b040);
  uVar12 = 0x6c616974696e69;
  func_0x000107c5fadc(0x6c616974696e69,0xe700000000000000);
  func_0x000106b9da20(uVar11,param_1,uVar9,uVar12,1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  uVar9 = unaff_x20[8];
  lVar10 = unaff_x20[9];
  func_0x000107c614f0(uVar9);
  uStack_138 = CONCAT71(uStack_138._1_7_,2);
  uStack_d8 = 1;
  (**(code **)(lVar10 + 0x28))(&uStack_138,uVar9,lVar10);
  return;
}



/* Entry: 103402bb4; end: 103403647;  */

void FUN_103402bb4(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [24];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_70;
  
  lVar9 = *param_1;
  cVar1 = (char)param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_138,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x108) == 0 || param_3 != *(long *)(param_2 + 0x108)) {
    func_0x0001007d6c6c(1,0xd000000000000032,0x800000010f14b080,param_7,&PTR_DAT_110651af8);
LAB_103402c5c:
    func_0x000107c61574(param_2);
  }
  else {
    if (cVar1 == '\x01') {
      lStack_d0 = 0;
      uStack_c8 = 0xe000000000000000;
      func_0x000107c602fc(0x19);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f14b0c0);
      func_0x000107c5fb78(param_4,param_5);
      func_0x000107c5fb78(0x203a,0xe200000000000000);
      uVar2 = 0x112d393f0;
      lStack_120 = lVar9;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(&lStack_120,&lStack_d0,uVar2,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar2 = uStack_c8;
      func_0x0001007d6c6c(3,lStack_d0,uStack_c8,param_7,&PTR_DAT_110651af8);
      func_0x000107c6142c(uVar2);
      plVar3 = (long *)(param_2 + 0x60);
      func_0x0001000a8868(plVar3,*(undefined8 *)(param_2 + 0x78));
      func_0x000100d47c80(lVar9,1);
      lVar4 = lVar9;
      FUN_103409540(lVar9);
      uVar7 = *(undefined8 *)(*plVar3 + 0x10);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000103409370(lVar4);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_5);
      uVar2 = 0x6c616974696e69;
      func_0x000107c5fadc(0x6c616974696e69,0xe700000000000000);
      func_0x000106b9da20(uVar7,param_4,lVar4,uVar2,1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar2);
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      lVar4 = *(long *)(param_2 + 0x48);
      uVar7 = uVar2;
      func_0x000107c614f0(uVar2);
      func_0x000107c614cc(lVar9,auStack_140,auStack_158);
      func_0x000107c615f0(uVar2);
      FUN_10340e5b0(uStack_150,uStack_148);
      lStack_d0 = CONCAT71(lStack_d0._1_7_,(char)uStack_150);
      uStack_70 = 1;
      (**(code **)(lVar4 + 0x28))(&lStack_d0,uVar7,lVar4);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar2);
      return;
    }
    if (lVar9 == 0) {
      func_0x000104366fc4(0xd00000000000002f,0x800000010f14b0e0,param_7,&PTR_DAT_110651af8);
      plVar3 = (long *)(param_2 + 0x60);
      func_0x0001000a8868(plVar3,*(undefined8 *)(param_2 + 0x78));
      uVar11 = *(undefined8 *)(*plVar3 + 0x10);
      func_0x000107c5fadc(param_4,param_5);
      uVar2 = 0x736e656c5f6c696e;
      func_0x000107c5fadc(0x736e656c5f6c696e,0xe800000000000000);
      uVar7 = 0x6c616974696e69;
      func_0x000107c5fadc(0x6c616974696e69,0xe700000000000000);
      func_0x000106b9da20(uVar11,param_4,uVar2,uVar7,1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar7);
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      lVar9 = *(long *)(param_2 + 0x48);
      uVar7 = uVar2;
      func_0x000107c614f0(uVar2);
      lStack_d0 = CONCAT71(lStack_d0._1_7_,2);
      uStack_70 = 1;
      pcVar10 = *(code **)(lVar9 + 0x28);
      func_0x000107c615f0(uVar2);
      (*pcVar10)(&lStack_d0,uVar7,lVar9);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar2);
      return;
    }
    lVar4 = lVar9;
    if (param_6[1] == 0) {
      func_0x000107c61174();
      func_0x000107c61174();
    }
    else {
      lStack_120 = *param_6;
      lStack_108 = param_6[3];
      lStack_110 = param_6[2];
      lStack_f8 = param_6[5];
      lStack_100 = param_6[4];
      lStack_e8 = param_6[7];
      lStack_f0 = param_6[6];
      lStack_d8 = param_6[9];
      lStack_e0 = param_6[8];
      lStack_118 = param_6[1];
      func_0x000107c61174();
      func_0x00010433a7f8();
    }
    lStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(uStack_c8);
    lStack_d0 = -0x2fffffffffffffe6;
    uStack_c8 = 0x800000010f14b110;
    func_0x000107c5fb78(param_4,param_5);
    uVar2 = uStack_c8;
    func_0x0001007d6c6c(1,lStack_d0,uStack_c8,param_7,&PTR_DAT_110651af8);
    func_0x000107c6142c(uVar2);
    lVar8 = *(long *)(param_2 + 0x120);
    lStack_d0 = lVar4;
    if (lVar8 == 0) {
      func_0x0001000285a8(0x112f65668,&UNK_10dbc18f0);
      func_0x000107c613fc();
      func_0x000107c61174(lVar4);
      plVar3 = &lStack_d0;
      func_0x00010042e6a0();
      uVar2 = *(undefined8 *)(param_2 + 0x120);
      *(long **)(param_2 + 0x120) = plVar3;
      func_0x000107c6157c();
      func_0x000107c61574(uVar2);
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      uVar7 = *(undefined8 *)(param_2 + 0x58);
      uVar11 = *(undefined8 *)(param_2 + 0x20);
      func_0x000107c61174();
      func_0x000107c61174(uVar7);
      func_0x000107c6157c(uVar11);
      plVar5 = plVar3;
      func_0x00010433cbec(plVar3,uVar11);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(uVar11);
      func_0x000107c42c1c(uVar2);
      func_0x000107c61574(plVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(plVar5);
    }
    else {
      func_0x000107c6157c(lVar8);
      func_0x0001007d6d78(&lStack_d0);
      func_0x000107c61574(lVar8);
    }
    lVar8 = lVar4;
    func_0x000107c4a73c();
    if ((int)lVar8 != 0) {
      lVar8 = param_2 + 0x98;
      func_0x000107c61618();
      if (lVar8 != 0) {
        FUN_103402690();
        FUN_1033fc22c(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar8);
        func_0x000103404354(lVar9,cVar1);
        goto LAB_103402c5c;
      }
    }
    plVar3 = (long *)(param_2 + 0x60);
    func_0x0001000a8868(plVar3,*(undefined8 *)(param_2 + 0x78));
    uVar2 = *(undefined8 *)(*plVar3 + 0x10);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000106b9d8ac(uVar2,param_4,1);
    func_0x000107c61170(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar6 = 0;
    func_0x00010340dc58();
    func_0x000107c613fc();
    *(long *)(lVar6 + 0x10) = param_3;
    *(undefined8 *)(lVar6 + 0x18) = uVar2;
    uVar7 = *(undefined8 *)(param_2 + 0x110);
    *(long *)(param_2 + 0x110) = lVar6;
    func_0x000107c6157c(uVar2);
    func_0x000107c615f0(param_3);
    func_0x000107c6157c(lVar6);
    func_0x000107c61574(uVar7);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    lVar8 = *(long *)(param_2 + 0x48);
    uVar7 = uVar2;
    func_0x000107c614f0(uVar2);
    uStack_70 = 0;
    pcVar10 = *(code **)(lVar8 + 0x28);
    lStack_d0 = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c615f0(uVar2);
    (*pcVar10)(&lStack_d0,uVar7,lVar8);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000103404354(lVar9,cVar1);
  }
  return;
}



/* Entry: 103403648; end: 10340376b;  */

/* WARNING: Possible PIC construction at 0x000103403748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340374c) */

void FUN_103403648(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  lVar5 = unaff_x20[0x22];
  if ((lVar5 != 0) && (*(char *)(unaff_x20 + 0x23) != '\x02')) {
    uVar6 = *unaff_x20;
    *(undefined1 *)(unaff_x20 + 0x23) = 2;
    func_0x000107c6157c(lVar5);
    func_0x0001007d6c6c(1,0xd00000000000001f,0x800000010f14ae20,uVar6,&PTR_DAT_110651af8);
    uVar1 = unaff_x20[0x15];
    uVar2 = unaff_x20[0x16];
    puVar3 = &UNK_110650c38;
    func_0x000107c613fc(&UNK_110650c38,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_110650d00;
    func_0x000107c613fc(&UNK_110650d00,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar5;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar2;
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    func_0x000107c6157c(lVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c6157c(puVar3);
    FUN_10340d904(0x1034042ec,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar5);
    return;
  }
  return;
}



/* Entry: 10340376c; end: 1034038ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340376c(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_68 [24];
  
  lVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_2 + 0xa8);
    func_0x000100077018(uVar2,*(undefined8 *)(param_2 + 0xb0),
                        *(undefined8 *)(lVar7 + _DAT_11302a2e0));
    if ((uVar2 & 1) == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      plVar3 = (long *)(param_2 + 0x60);
      func_0x0001000a8868(plVar3,*(undefined8 *)(param_2 + 0x78));
      uVar8 = *(undefined8 *)(lVar7 + _DAT_11302a2e8);
      func_0x000107c614b0(uVar8);
      FUN_103409540(uVar8);
      uVar4 = *(undefined8 *)(param_2 + 0xa8);
      uVar1 = *(undefined8 *)(param_2 + 0xb0);
      uVar6 = *(undefined8 *)(*plVar3 + 0x10);
      func_0x000107c61434(uVar1);
      uVar5 = uVar1;
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000103409370(uVar8);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
      func_0x000106b9dce0(uVar6,uVar4,uVar8,1);
      func_0x000107c6142c(uVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar8);
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      lVar7 = *(long *)(param_2 + 0x48);
      uVar8 = uVar4;
      func_0x000107c614f0(uVar4);
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      uVar5 = *(undefined8 *)(param_2 + 0xb0);
      pcVar9 = *(code **)(lVar7 + 0x30);
      func_0x000107c615f0(uVar4);
      func_0x000107c61434(uVar5);
      (*pcVar9)(uVar1,uVar5,uVar8,lVar7);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar4);
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 1034038f0; end: 103403c93;  */

void FUN_1034038f0(undefined8 param_1,char param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_200 [80];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_70;
  
  func_0x000107c61428(param_3 + 0x10,auStack_138,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (*(long *)(param_3 + 0x110) == 0 || param_4 != *(long *)(param_3 + 0x110)) {
      func_0x0001007d6c6c(1,0xd000000000000029,0x800000010f14ae40,param_7,&PTR_DAT_110651af8);
      func_0x000107c61574(param_3);
    }
    else {
      *(undefined1 *)(param_3 + 0x118) = 0;
      if (param_2 == '\x01') {
        uStack_d0 = 0;
        uStack_c8 = 0xe000000000000000;
        func_0x000107c602fc(0x19);
        func_0x000107c5fb78(0xd000000000000017,0x800000010f14ae70);
        uVar5 = 0x112d393f0;
        uStack_120 = param_1;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&uStack_120,&uStack_d0,uVar5,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar5 = uStack_c8;
        func_0x0001007d6c6c(3,uStack_d0,uStack_c8,param_7,&PTR_DAT_110651af8);
        func_0x000107c6142c(uVar5);
        plVar3 = (long *)(param_3 + 0x60);
        func_0x0001000a8868(plVar3,*(undefined8 *)(param_3 + 0x78));
        func_0x000100d47c80(param_1,1);
        uVar5 = param_1;
        FUN_103409540(param_1);
        uVar4 = *(undefined8 *)(*plVar3 + 0x10);
        func_0x000107c5fadc(param_5,param_6);
        func_0x000103409370(uVar5);
        func_0x000107c5fadc();
        func_0x000107c6142c(param_6);
        uVar2 = 0x64616f6c6572;
        func_0x000107c5fadc(0x64616f6c6572,0xe600000000000000);
        func_0x000106b9da20(uVar4,param_5,uVar5,uVar2,1);
        func_0x000107c61170(param_5);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar2);
        uVar5 = *(undefined8 *)(param_3 + 0x40);
        lVar1 = *(long *)(param_3 + 0x48);
        uVar2 = uVar5;
        func_0x000107c614f0(uVar5);
        func_0x000107c614cc(param_1,auStack_140,auStack_158);
        func_0x000107c615f0(uVar5);
        FUN_10340e5b0(uStack_150,uStack_148);
        uStack_d0 = CONCAT71(uStack_d0._1_7_,(char)uStack_150);
        uStack_70 = 1;
        (**(code **)(lVar1 + 0x28))(&uStack_d0,uVar2,lVar1);
        func_0x000107c61574(param_3);
        func_0x000107c615e8(uVar5);
      }
      else {
        if (*(long *)(param_3 + 0xc0) == 0) {
          func_0x000107c61174();
        }
        else {
          uStack_198 = *(undefined8 *)(param_3 + 0xd0);
          uStack_1a0 = *(undefined8 *)(param_3 + 200);
          uStack_188 = *(undefined8 *)(param_3 + 0xe0);
          uStack_190 = *(undefined8 *)(param_3 + 0xd8);
          uStack_178 = *(undefined8 *)(param_3 + 0xf0);
          uStack_180 = *(undefined8 *)(param_3 + 0xe8);
          uStack_168 = *(undefined8 *)(param_3 + 0x100);
          uStack_170 = *(undefined8 *)(param_3 + 0xf8);
          uStack_1a8 = *(undefined8 *)(param_3 + 0xc0);
          uStack_1b0 = *(undefined8 *)(param_3 + 0xb8);
          uStack_120 = uStack_1b0;
          uStack_118 = uStack_1a8;
          uStack_110 = uStack_1a0;
          uStack_108 = uStack_198;
          uStack_100 = uStack_190;
          uStack_f8 = uStack_188;
          uStack_f0 = uStack_180;
          uStack_e8 = uStack_178;
          uStack_e0 = uStack_170;
          uStack_d8 = uStack_168;
          uStack_d0 = uStack_1b0;
          uStack_c8 = uStack_1a8;
          uStack_c0 = uStack_1a0;
          uStack_b8 = uStack_198;
          uStack_b0 = uStack_190;
          uStack_a8 = uStack_188;
          uStack_a0 = uStack_180;
          uStack_98 = uStack_178;
          uStack_90 = uStack_170;
          uStack_88 = uStack_168;
          FUN_1034042fc(&uStack_d0,auStack_200);
          func_0x00010433a7f8();
          func_0x000102e04190(&uStack_1b0);
        }
        plVar3 = (long *)(param_3 + 0x60);
        func_0x0001000a8868(plVar3,*(undefined8 *)(param_3 + 0x78));
        uVar5 = *(undefined8 *)(*plVar3 + 0x10);
        func_0x000107c5fadc(param_5,param_6);
        func_0x000106b9d8ac(uVar5,param_5,1);
        func_0x000107c61170(param_5);
        uVar5 = *(undefined8 *)(param_3 + 0x40);
        lVar1 = *(long *)(param_3 + 0x48);
        uVar2 = uVar5;
        func_0x000107c614f0(uVar5);
        uStack_70 = 0;
        pcVar6 = *(code **)(lVar1 + 0x28);
        uStack_d0 = param_1;
        func_0x000107c615f0(uVar5);
        func_0x000107c61174(param_1);
        (*pcVar6)(&uStack_d0,uVar2,lVar1);
        func_0x000107c61574(param_3);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 103403c94; end: 103403da7;  */

void FUN_103403c94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_110650c38;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_110650c38,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648(lVar2);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  puStack_70 = puVar1;
  uStack_68 = param_3;
  func_0x000107c613fc(&UNK_110650c38,0x18,7);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61574(lVar2);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  func_0x000107c61574(param_2);
  func_0x0001008546f4(FUN_103403da8,0,0x1034042d4,auStack_80,FUN_103403fd4,0,0x1034042dc,puVar3,
                      FUN_103404024,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 103403da8; end: 103403dab;  */

void FUN_103403da8(void)

{
  return;
}



/* Entry: 103403dac; end: 103403fd3;  */

void FUN_103403dac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x119) = 1;
    if (*(char *)(param_2 + 0x118) == '\0') {
      lVar3 = *(long *)(param_2 + 0x108);
      if (lVar3 != 0) {
        func_0x000107c3d080(lVar3);
        func_0x000107c61180();
        puVar1 = &UNK_110650cb0;
        func_0x000107c613fc(&UNK_110650cb0,0x18,7);
        *(undefined8 *)(puVar1 + 0x10) = param_3;
        uStack_58 = 0x1034042e4;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1010186a8;
        puStack_60 = &UNK_110650cc8;
        ppuVar2 = &puStack_78;
        puStack_50 = puVar1;
        func_0x000107c60bc4(ppuVar2);
        func_0x000107c61574(puStack_50);
        func_0x0001000d224c(&puStack_78);
        puVar1 = puStack_78;
        func_0x000107c5dc64(lVar3);
        func_0x000107c615e8(puVar1);
        func_0x000107c61574(param_2);
        func_0x000107c60bd0(ppuVar2);
        func_0x000107c61170(lVar3);
        return;
      }
    }
    else if (*(char *)(param_2 + 0x118) == '\x01') {
      FUN_103403648();
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 103403fd4; end: 103403fd7;  */

void FUN_103403fd4(void)

{
  return;
}



/* Entry: 103403fd8; end: 103404023;  */

void FUN_103403fd8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x119) = 0;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 103404024; end: 103404027;  */

void FUN_103404024(void)

{
  return;
}



/* Entry: 103404028; end: 103404127;  */

void FUN_103404028(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_103404284(unaff_x20 + 0x98);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000102e17d54(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 103404128; end: 103404283;  */

int FUN_103404128(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_1034041a4;
        goto LAB_103404184;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103404184:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_1034041a4:
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 1)) {
    uVar1 = *(byte *)((long)param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103404284; end: 1034042a7;  */

undefined8 FUN_103404284(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1034042a8; end: 1034042fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034042a8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_68 [24];
  
  lVar8 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0xa8);
    func_0x000100077018(uVar3,*(undefined8 *)(lVar2 + 0xb0),*(undefined8 *)(lVar8 + _DAT_11302a2e0))
    ;
    if ((uVar3 & 1) == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      plVar4 = (long *)(lVar2 + 0x60);
      func_0x0001000a8868(plVar4,*(undefined8 *)(lVar2 + 0x78));
      uVar9 = *(undefined8 *)(lVar8 + _DAT_11302a2e8);
      func_0x000107c614b0(uVar9);
      FUN_103409540(uVar9);
      uVar5 = *(undefined8 *)(lVar2 + 0xa8);
      uVar1 = *(undefined8 *)(lVar2 + 0xb0);
      uVar7 = *(undefined8 *)(*plVar4 + 0x10);
      func_0x000107c61434(uVar1);
      uVar6 = uVar1;
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000103409370(uVar9);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
      func_0x000106b9dce0(uVar7,uVar5,uVar9,1);
      func_0x000107c6142c(uVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar9);
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      lVar8 = *(long *)(lVar2 + 0x48);
      uVar9 = uVar5;
      func_0x000107c614f0(uVar5);
      uVar1 = *(undefined8 *)(lVar2 + 0xa8);
      uVar6 = *(undefined8 *)(lVar2 + 0xb0);
      pcVar10 = *(code **)(lVar8 + 0x30);
      func_0x000107c615f0(uVar5);
      func_0x000107c61434(uVar6);
      (*pcVar10)(uVar1,uVar6,uVar9,lVar8);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar5);
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}



/* Entry: 1034042fc; end: 103404337;  */

undefined8 FUN_1034042fc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10433b57c)(param_2,param_1);
  return param_2;
}



/* Entry: 103404338; end: 1034044cf;  */

/* WARNING: Removing unreachable block (ram,0x0001034034a8) */

void FUN_103404338(undefined8 *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_1;
  uVar10 = param_1[1];
  uVar15 = param_1[2];
  uVar21 = param_1[6];
  uVar20 = param_1[5];
  uVar23 = param_1[4];
  uVar22 = param_1[3];
  uVar18 = param_1[10];
  uVar16 = param_1[9];
  uVar19 = param_1[8];
  uVar17 = param_1[7];
  uVar9 = param_1[0xb];
  uVar3 = param_1[0xc];
  func_0x000107c61428(lVar7 + 0x10,auStack_e0,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 == 0) {
    return;
  }
  func_0x0001000d224c(&uStack_c8);
  uVar6 = uStack_c8;
  uVar8 = uStack_c8;
  func_0x000107c4f098();
  func_0x000107c615e8(uVar6);
  uVar2 = (uint)(uVar15 >> 0x20);
  uVar12 = uVar2 >> 0x1d;
  if (uVar2 >> 0x1d < 3) {
    if (uVar12 != 0) goto LAB_103403584;
    uVar2 = (uint)uVar15 & 0xff;
    if (uVar2 == 1 || (uVar15 & 0xff) == 0) {
      if ((uVar15 & 0xff) == 0) {
        uStack_f8 = 0;
        uStack_f0 = 0xe000000000000000;
        uStack_c8 = uVar22;
        uStack_c0 = uVar23;
        uStack_b8 = uVar20;
        uStack_b0 = uVar21;
        uStack_a8 = uVar17;
        uStack_a0 = uVar19;
        uStack_98 = uVar16;
        uStack_90 = uVar18;
        uStack_88 = uVar9;
        uStack_80 = uVar3;
        func_0x000107c602fc(0x1e);
        func_0x000107c6142c(uStack_f0);
        uStack_f8 = 0xd000000000000015;
        uStack_f0 = 0x800000010f14afa0;
        uVar9 = *(undefined8 *)(lVar7 + 0xa8);
        uVar3 = *(undefined8 *)(lVar7 + 0xb0);
        func_0x000107c61434(uVar3);
        func_0x000107c5fb78(uVar9,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c5fb78(0x209286e220,0xa500000000000000);
        func_0x000107c5fb78(uVar11,uVar10);
        uVar9 = uStack_f0;
        func_0x0001007d6c6c(1,uStack_f8,uStack_f0,uVar5,&PTR_DAT_110651af8);
        func_0x000107c6142c(uVar9);
        FUN_1034026c0(uVar11,uVar10,&uStack_c8);
        goto LAB_103403584;
      }
LAB_103403470:
      if ((((int)uVar8 != 0) && (*(long *)(lVar7 + 0x110) != 0)) &&
         (lVar13 = *(long *)(lVar7 + 0x120), lVar13 != 0)) {
        func_0x000107c6157c(lVar13);
        func_0x000104886d18(&uStack_f8);
        func_0x0001007d6c6c(1,0x100000000000003a,0x800000010f14af60,uVar5,&PTR_DAT_110651af8);
        uVar11 = *(undefined8 *)(lVar7 + 0x40);
        lVar4 = *(long *)(lVar7 + 0x48);
        uVar9 = uVar11;
        func_0x000107c614f0(uVar11);
        uStack_c8 = uStack_f8;
        uStack_68 = 0;
        pcVar14 = *(code **)(lVar4 + 0x28);
        func_0x000107c615f0(uVar11);
        uVar10 = uStack_f8;
        func_0x000107c61174(uStack_f8);
        (*pcVar14)(&uStack_c8,uVar9,lVar4);
        func_0x000107c61574(lVar13);
        func_0x000107c61574(lVar7);
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar10);
        return;
      }
      if (*(char *)(lVar7 + 0x119) != '\x01') {
        *(undefined1 *)(lVar7 + 0x118) = 1;
        pcVar1 = s_Reload_requested_will_forceActiv_10f14af00;
        uVar11 = 0x1000000000000039;
        goto LAB_103403570;
      }
      pcVar1 = s_Reload_requested_while_view_visi_10f14af40;
      uVar11 = 0x100000000000003d;
    }
    else {
      if (uVar2 != 2) goto LAB_103403470;
      pcVar1 = s_Capture_failed_performing_immedi_10f14aed0;
      uVar11 = 0x100000000000002e;
    }
    func_0x0001007d6c6c(1,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,uVar5,
                        &PTR_DAT_110651af8);
    FUN_103403648();
  }
  else {
    if ((4 < uVar12) || (uVar12 == 3)) goto LAB_103403584;
    if ((int)uVar8 == 0) {
      func_0x0001007d6c6c(1,0xd00000000000001d,0x800000010f14afc0,uVar5,&PTR_DAT_110651af8);
      lVar13 = *(long *)(lVar7 + 0x108);
      if (lVar13 != 0) {
        func_0x000107c615f0(lVar13);
        func_0x000107c4139c();
        func_0x000107c615e8(lVar13);
      }
      goto LAB_103403584;
    }
    pcVar1 = "Preserving lens through preview (no deactivate)";
    uVar11 = 0xd00000000000002f;
LAB_103403570:
    func_0x0001007d6c6c(1,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,uVar5,
                        &PTR_DAT_110651af8);
  }
LAB_103403584:
  func_0x000107c61574(lVar7);
  return;
}



/* Entry: 1034044d0; end: 10340450f;  */

void FUN_1034044d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f65670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc1940;
  func_0x000107c61520(&UNK_10dbc1940,&UNK_110650de8);
  puRam0000000112f65670 = puVar1;
  return;
}



/* Entry: 103404510; end: 103404517;  */

void FUN_103404510(long param_1,long param_2)

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



/* Entry: 103404518; end: 103404943;  */

/* WARNING: Possible PIC construction at 0x000103404570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034045b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034047a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034047d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034047f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103404850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103404868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034048a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034048b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340499c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034049b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103404908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034048d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034048e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103404620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340473c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034048ec) */
/* WARNING: Removing unreachable block (ram,0x0001034048dc) */
/* WARNING: Removing unreachable block (ram,0x0001034049b4) */
/* WARNING: Removing unreachable block (ram,0x0001034049a0) */
/* WARNING: Removing unreachable block (ram,0x0001034048b8) */
/* WARNING: Removing unreachable block (ram,0x0001034048a8) */
/* WARNING: Removing unreachable block (ram,0x00010340486c) */
/* WARNING: Removing unreachable block (ram,0x0001034047fc) */
/* WARNING: Removing unreachable block (ram,0x0001034048f8) */
/* WARNING: Removing unreachable block (ram,0x000103404810) */
/* WARNING: Removing unreachable block (ram,0x000103404854) */
/* WARNING: Removing unreachable block (ram,0x00010340483c) */
/* WARNING: Removing unreachable block (ram,0x0001034047d8) */
/* WARNING: Removing unreachable block (ram,0x0001034048c8) */
/* WARNING: Removing unreachable block (ram,0x0001034047e4) */
/* WARNING: Removing unreachable block (ram,0x0001034047ac) */
/* WARNING: Removing unreachable block (ram,0x0001034045bc) */
/* WARNING: Removing unreachable block (ram,0x0001034045d0) */
/* WARNING: Removing unreachable block (ram,0x0001034045d8) */
/* WARNING: Removing unreachable block (ram,0x000103404574) */
/* WARNING: Removing unreachable block (ram,0x000103404588) */
/* WARNING: Removing unreachable block (ram,0x000103404700) */
/* WARNING: Removing unreachable block (ram,0x000103404718) */
/* WARNING: Removing unreachable block (ram,0x000103404590) */
/* WARNING: Removing unreachable block (ram,0x0001034045f8) */
/* WARNING: Removing unreachable block (ram,0x000103404740) */
/* WARNING: Removing unreachable block (ram,0x00010340475c) */
/* WARNING: Removing unreachable block (ram,0x00010340460c) */
/* WARNING: Removing unreachable block (ram,0x0001034045a4) */
/* WARNING: Removing unreachable block (ram,0x000103404624) */
/* WARNING: Removing unreachable block (ram,0x000103404630) */
/* WARNING: Removing unreachable block (ram,0x000103404738) */
/* WARNING: Removing unreachable block (ram,0x000103404638) */
/* WARNING: Removing unreachable block (ram,0x000103404774) */

void FUN_103404518(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001034049f0();
  if (param_1 != 0) {
    func_0x000107c4f490();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    func_0x000107c60e78();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = *(long *)(unaff_x20 + 0x28);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c61434(lVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 103404944; end: 103404b3b;  */

/* WARNING: Possible PIC construction at 0x00010340499c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034049a0) */

void FUN_103404944(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61434(lVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 103404b3c; end: 103404b8f;  */

void FUN_103404b3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103404b90; end: 103404bc7;  */

void FUN_103404b90(void)

{
  undefined8 in_x6;
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  uVar1 = *puVar2;
  *puVar2 = in_x6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103404bc8; end: 103404beb;  */

void FUN_103404bc8(void)

{
  FUN_10334d9e0();
  return;
}



/* Entry: 103404bec; end: 103404c07;  */

void FUN_103404bec(long param_1,long param_2)

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



/* Entry: 103404c08; end: 103404e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103404c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f657b8;
  func_0x000107c61614(unaff_x20 + _DAT_112f657b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f657c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f657c8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f657d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f657d8) = 0;
  lVar4 = _DAT_112f657e0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112f657e8) = param_3;
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112f657f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f657f8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f65800) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f65808) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f65810) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f65818) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f65820);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f65828) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_112f65830) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f65838) = param_14;
  *(undefined1 *)(unaff_x20 + _DAT_112f65840) = param_15;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  puVar6 = auStack_80;
  func_0x000107c61154(puVar6,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar6;
}


