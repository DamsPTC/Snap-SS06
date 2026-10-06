/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016ea3c8; end: 1016ea41b;  */

undefined8 * FUN_1016ea3c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1016ea41c; end: 1016ea4cf;  */

int FUN_1016ea41c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016ea4d0; end: 1016ea513;  */

void FUN_1016ea4d0(long param_1,long *param_2,long param_3)

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



/* Entry: 1016ea514; end: 1016ea527;  */

void FUN_1016ea514(void)

{
  FUN_1016e8ac8();
  return;
}



/* Entry: 1016ea528; end: 1016ea54b;  */

void FUN_1016ea528(long param_1,long param_2)

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



/* Entry: 1016ea54c; end: 1016ea55f;  */

void FUN_1016ea54c(void)

{
  FUN_1016e8bd0();
  return;
}



/* Entry: 1016ea560; end: 1016ea56b;  */

long FUN_1016ea560(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016ea56c; end: 1016ea57f;  */

void FUN_1016ea56c(void)

{
  FUN_1016e9990();
  return;
}



/* Entry: 1016ea580; end: 1016ea583;  */

void FUN_1016ea580(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(lVar3 + 200);
    lVar2 = *(long *)(lVar3 + 0xd0);
    FUN_1016e8a6c(lVar3 + 0xb0,uVar1);
    lVar3 = lVar4;
    (**(code **)(lVar2 + 0x10))(lVar4,uVar1,lVar2);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000100bcb1dc(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000100bcb1dc(unaff_x22 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016e3340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3);
  return;
}



/* Entry: 1016ea584; end: 1016ea597;  */

void FUN_1016ea584(void)

{
  FUN_1016e89a0();
  return;
}



/* Entry: 1016ea598; end: 1016ea5af;  */

undefined8 * FUN_1016ea598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1016ea5b0; end: 1016ea62b;  */

void FUN_1016ea5b0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103fb810;
  func_0x000107c613fc(&UNK_1103fb810,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_50 = 0x1016eb02c;
  puStack_48 = puVar1;
  func_0x000107c6157c(param_2);
  (*param_3)(&uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016ea62c; end: 1016ead8b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ea62c(long *param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *apuStack_320 [4];
  long lStack_300;
  long *plStack_2f8;
  undefined **appuStack_2f0 [5];
  long alStack_2c8 [3];
  undefined **appuStack_2b0 [10];
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined *apuStack_250 [3];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [40];
  undefined *apuStack_200 [3];
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **appuStack_1d8 [3];
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined8 auStack_180 [3];
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  apuStack_320[3] = (undefined1 *)in_x6;
  lStack_300 = in_x7;
  plStack_2f8 = param_1;
  func_0x000100083b20(auStack_90);
  func_0x000100083b20(&uStack_130);
  apuStack_320[2] = (undefined1 *)uStack_130;
  func_0x000100083b20(appuStack_2b0 + 7);
  ppuVar1 = appuStack_2b0[7];
  func_0x000107c4d090();
  func_0x000107c61180();
  func_0x000107c61170(appuStack_2b0[7]);
  func_0x000100083b20(appuStack_2b0 + 2);
  uVar13 = *(undefined8 *)((long)appuStack_2b0[2] + _DAT_11305e778);
  func_0x000107c6157c(uVar13);
  func_0x000107c61170(appuStack_2b0[2]);
  func_0x0001000d224c(apuStack_250);
  func_0x000107c61574(uVar13);
  puVar11 = apuStack_250;
  func_0x0001000a8868(puVar11,uStack_238);
  uVar13 = 3;
  func_0x000100774b74(3,0x3a,0,uStack_238,uStack_230,puVar11);
  func_0x000100083b20(alStack_2c8);
  uVar10 = *(undefined8 *)(alStack_2c8[0] + _DAT_11305e778);
  func_0x000107c6157c(uVar10);
  func_0x000107c61170(alStack_2c8[0]);
  func_0x0001000d224c(auStack_158);
  func_0x000107c61574(uVar10);
  puVar2 = auStack_158;
  func_0x0001000a8868(puVar2,uStack_140);
  uVar10 = 3;
  func_0x000100774b74(3,0x3a,1,uStack_140,uStack_138,puVar2);
  func_0x000100083b20(auStack_180);
  puStack_168 = &UNK_1103fb8f8;
  ppuStack_160 = &PTR_DAT_1103fb9a0;
  ppuStack_190 = (undefined **)0x0;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined *)0x0;
  puStack_198 = (undefined *)0x0;
  uStack_1a0 = 0;
  ppuStack_1c0 = (undefined **)&UNK_1103fb8d0;
  ppuStack_1b8 = &PTR_DAT_1103fb990;
  puVar3 = &UNK_1103fb748;
  func_0x000107c613fc(&UNK_1103fb748,0x30,7);
  *(code **)(puVar3 + 0x10) = FUN_1016eb480;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(code **)(puVar3 + 0x20) = FUN_1016eb4c8;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  lVar4 = 0;
  appuStack_1d8[0] = (undefined **)puVar3;
  func_0x0001016eb5a4();
  func_0x000107c613fc();
  puVar5 = (undefined *)0x0;
  func_0x00010006a340();
  puVar6 = puVar5;
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar4 + 0x10) = puVar6;
  *(undefined **)(lVar4 + 0x18) = puVar3;
  uStack_128 = uVar13;
  lStack_a8 = lVar4;
  FUN_1016eaf44(appuStack_1d8,auStack_120);
  FUN_1016eaf44(auStack_180,auStack_f8);
  FUN_1016eae9c(&puStack_1b0,apuStack_200);
  if (puStack_1e8 == (undefined *)0x0) {
    ppuStack_b0 = &PTR_DAT_1103fb5d8;
    puStack_b8 = &UNK_1103fb3f8;
    func_0x000107c61174(ppuVar1);
    func_0x0001016eaeec(&puStack_1b0);
    func_0x0001000834e4(appuStack_1d8);
    func_0x0001000834e4(auStack_180);
    if (puStack_1e8 != (undefined *)0x0) {
      func_0x0001016eaeec(apuStack_200);
    }
  }
  else {
    func_0x0001016eaeec(&puStack_1b0);
    func_0x0001000834e4(appuStack_1d8);
    func_0x0001000834e4(auStack_180);
    func_0x000100cba0d4(apuStack_200,auStack_d0);
  }
  puVar3 = &UNK_1103fb770;
  func_0x000107c613fc(&UNK_1103fb770,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  puVar6 = &UNK_1103fb798;
  func_0x000107c613fc(&UNK_1103fb798,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1016eaf34;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  uStack_a0 = 0x1016eaf3c;
  puStack_98 = puVar6;
  func_0x0001000834e4(auStack_158);
  func_0x0001000834e4(apuStack_250);
  func_0x000100083b20(apuStack_250);
  puVar3 = apuStack_250[0];
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(apuStack_250[0]);
  ppuVar7 = (undefined **)0x0;
  func_0x0001016e65e8();
  ppuVar1 = ppuVar7;
  func_0x000107c613fc();
  func_0x000107c613fc(puVar5,0x18,7);
  func_0x00010006a360();
  ppuVar1[8] = puVar5;
  ppuVar1[9] = (undefined *)0x0;
  FUN_1016eaf44(auStack_90,ppuVar1 + 2);
  ppuVar1[7] = puVar3;
  FUN_1016eaf44(auStack_90,apuStack_250);
  func_0x000100083b20(auStack_228);
  func_0x000100083b20(auStack_158);
  puStack_168 = &UNK_1103fb838;
  ppuStack_160 = &PTR_DAT_1103fb850;
  auStack_180[0] = apuStack_320[2];
  puStack_198 = &UNK_1103fb4f8;
  ppuStack_190 = &PTR_DAT_1103fb5c0;
  puVar3 = &UNK_1103fb7c0;
  func_0x000107c613fc(&UNK_1103fb7c0,0xb0,7);
  puStack_1b0 = puVar3;
  FUN_1016e8ae4(&uStack_130,puVar3 + 0x10);
  ppuStack_1b8 = &PTR_DAT_1103fb070;
  puStack_1e8 = &UNK_1103fb3d0;
  ppuStack_1e0 = &PTR_DAT_1103fb5b0;
  puVar3 = &UNK_1103fb7e8;
  appuStack_1d8[0] = ppuVar1;
  ppuStack_1c0 = ppuVar7;
  func_0x000107c613fc(&UNK_1103fb7e8,0x60,7);
  apuStack_200[0] = puVar3;
  func_0x0001016eaf88(apuStack_250,puVar3 + 0x10);
  lVar4 = 0;
  func_0x0001016e6588();
  lStack_300 = lVar4;
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_180,&UNK_1103fb838);
  apuStack_320[3] = (undefined1 *)apuStack_320;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(PTR___sBOWV_11034d658 + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_320 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  func_0x0001000c6518(&puStack_1b0,&UNK_1103fb4f8);
  apuStack_320[2] = (undefined1 *)puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(0xa0);
  puVar11 = (undefined8 *)((long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar11);
  func_0x0001000c6518(appuStack_1d8,ppuVar7);
  apuStack_320[1] = (undefined1 *)puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(ppuVar7[0xffffffffffffffff] + 0x40));
  plVar8 = (long *)((long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(plVar8);
  func_0x0001000c6518(apuStack_200,&UNK_1103fb3d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x50);
  puVar14 = (undefined8 *)((long)plVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar14);
  appuStack_2b0[7] = (undefined **)*puVar12;
  lVar9 = *plVar8;
  puStack_260 = &UNK_1103fb838;
  ppuStack_258 = &PTR_DAT_1103fb850;
  appuStack_2b0[5] = (undefined **)&UNK_1103fb4f8;
  appuStack_2b0[6] = &PTR_DAT_1103fb5c0;
  puVar3 = &UNK_1103fb7c0;
  func_0x000107c613fc(&UNK_1103fb7c0,0xb0,7);
  appuStack_2b0[2] = (undefined **)puVar3;
  uVar13 = puVar11[0xc];
  uVar15 = puVar11[0xf];
  uVar10 = puVar11[0xe];
  *(undefined8 *)(puVar3 + 0x78) = puVar11[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar13;
  *(undefined8 *)(puVar3 + 0x88) = uVar15;
  *(undefined8 *)(puVar3 + 0x80) = uVar10;
  uVar13 = puVar11[0x10];
  uVar15 = puVar11[0x13];
  uVar10 = puVar11[0x12];
  *(undefined8 *)(puVar3 + 0x98) = puVar11[0x11];
  *(undefined8 *)(puVar3 + 0x90) = uVar13;
  *(undefined8 *)(puVar3 + 0xa8) = uVar15;
  *(undefined8 *)(puVar3 + 0xa0) = uVar10;
  uVar13 = puVar11[4];
  uVar15 = puVar11[7];
  uVar10 = puVar11[6];
  *(undefined8 *)(puVar3 + 0x38) = puVar11[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar15;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  uVar13 = puVar11[8];
  uVar15 = puVar11[0xb];
  uVar10 = puVar11[10];
  *(undefined8 *)(puVar3 + 0x58) = puVar11[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  *(undefined8 *)(puVar3 + 0x68) = uVar15;
  *(undefined8 *)(puVar3 + 0x60) = uVar10;
  uVar13 = *puVar11;
  uVar15 = puVar11[3];
  uVar10 = puVar11[2];
  *(undefined8 *)(puVar3 + 0x18) = puVar11[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  appuStack_2b0[1] = &PTR_DAT_1103fb070;
  appuStack_2f0[3] = (undefined **)&UNK_1103fb3d0;
  appuStack_2f0[4] = &PTR_DAT_1103fb5b0;
  puVar3 = &UNK_1103fb7e8;
  alStack_2c8[0] = lVar9;
  appuStack_2b0[0] = ppuVar7;
  func_0x000107c613fc(&UNK_1103fb7e8,0x60,7);
  appuStack_2f0[0] = (undefined **)puVar3;
  uVar13 = puVar14[4];
  uVar15 = puVar14[7];
  uVar10 = puVar14[6];
  *(undefined8 *)(puVar3 + 0x38) = puVar14[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar15;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  uVar13 = puVar14[8];
  *(undefined8 *)(puVar3 + 0x58) = puVar14[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  uVar15 = *puVar14;
  uVar10 = puVar14[3];
  uVar13 = puVar14[2];
  *(undefined8 *)(puVar3 + 0x18) = puVar14[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar15;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar13;
  func_0x0001016eafc4(apuStack_250);
  func_0x000100cba0d4(appuStack_2b0 + 7,lVar4 + 0x10);
  func_0x000100cba0d4(appuStack_2b0 + 2,lVar4 + 0x38);
  func_0x000100cba0d4(alStack_2c8,lVar4 + 0x60);
  func_0x000100cba0d4(appuStack_2f0,lVar4 + 0x88);
  func_0x000100cba0d4(auStack_158,lVar4 + 0xb0);
  func_0x0001000834e4(apuStack_200);
  func_0x0001000834e4(appuStack_1d8);
  func_0x0001000834e4(&puStack_1b0);
  func_0x0001000834e4(auStack_180);
  func_0x0001016eaff8(&uStack_130);
  plStack_2f8[3] = lStack_300;
  plStack_2f8[4] = (long)&PTR_DAT_1103fb088;
  *plStack_2f8 = lVar4;
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 1016ead8c; end: 1016ead9f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ead8c(long *param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *apuStack_320 [4];
  long lStack_300;
  long *plStack_2f8;
  undefined **appuStack_2f0 [5];
  long alStack_2c8 [3];
  undefined **appuStack_2b0 [10];
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined *apuStack_250 [3];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [40];
  undefined *apuStack_200 [3];
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **appuStack_1d8 [3];
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined8 auStack_180 [3];
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  apuStack_320[3] = *(undefined1 **)(unaff_x20 + 0x40);
  lStack_300 = *(undefined8 *)(unaff_x20 + 0x48);
  plStack_2f8 = param_1;
  func_0x000100083b20(auStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_130);
  apuStack_320[2] = (undefined1 *)uStack_130;
  func_0x000100083b20(appuStack_2b0 + 7);
  ppuVar1 = appuStack_2b0[7];
  func_0x000107c4d090();
  func_0x000107c61180();
  func_0x000107c61170(appuStack_2b0[7]);
  func_0x000100083b20(appuStack_2b0 + 2);
  uVar13 = *(undefined8 *)((long)appuStack_2b0[2] + _DAT_11305e778);
  func_0x000107c6157c(uVar13);
  func_0x000107c61170(appuStack_2b0[2]);
  func_0x0001000d224c(apuStack_250);
  func_0x000107c61574(uVar13);
  puVar11 = apuStack_250;
  func_0x0001000a8868(puVar11,uStack_238);
  uVar13 = 3;
  func_0x000100774b74(3,0x3a,0,uStack_238,uStack_230,puVar11);
  func_0x000100083b20(alStack_2c8);
  uVar10 = *(undefined8 *)(alStack_2c8[0] + _DAT_11305e778);
  func_0x000107c6157c(uVar10);
  func_0x000107c61170(alStack_2c8[0]);
  func_0x0001000d224c(auStack_158);
  func_0x000107c61574(uVar10);
  puVar2 = auStack_158;
  func_0x0001000a8868(puVar2,uStack_140);
  uVar10 = 3;
  func_0x000100774b74(3,0x3a,1,uStack_140,uStack_138,puVar2);
  func_0x000100083b20(auStack_180);
  puStack_168 = &UNK_1103fb8f8;
  ppuStack_160 = &PTR_DAT_1103fb9a0;
  ppuStack_190 = (undefined **)0x0;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined *)0x0;
  puStack_198 = (undefined *)0x0;
  uStack_1a0 = 0;
  ppuStack_1c0 = (undefined **)&UNK_1103fb8d0;
  ppuStack_1b8 = &PTR_DAT_1103fb990;
  puVar3 = &UNK_1103fb748;
  func_0x000107c613fc(&UNK_1103fb748,0x30,7);
  *(code **)(puVar3 + 0x10) = FUN_1016eb480;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(code **)(puVar3 + 0x20) = FUN_1016eb4c8;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  lVar4 = 0;
  appuStack_1d8[0] = (undefined **)puVar3;
  func_0x0001016eb5a4();
  func_0x000107c613fc();
  puVar5 = (undefined *)0x0;
  func_0x00010006a340();
  puVar6 = puVar5;
  func_0x000107c613fc();
  func_0x00010006a360();
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar4 + 0x10) = puVar6;
  *(undefined **)(lVar4 + 0x18) = puVar3;
  uStack_128 = uVar13;
  lStack_a8 = lVar4;
  FUN_1016eaf44(appuStack_1d8,auStack_120);
  FUN_1016eaf44(auStack_180,auStack_f8);
  FUN_1016eae9c(&puStack_1b0,apuStack_200);
  if (puStack_1e8 == (undefined *)0x0) {
    ppuStack_b0 = &PTR_DAT_1103fb5d8;
    puStack_b8 = &UNK_1103fb3f8;
    func_0x000107c61174(ppuVar1);
    func_0x0001016eaeec(&puStack_1b0);
    func_0x0001000834e4(appuStack_1d8);
    func_0x0001000834e4(auStack_180);
    if (puStack_1e8 != (undefined *)0x0) {
      func_0x0001016eaeec(apuStack_200);
    }
  }
  else {
    func_0x0001016eaeec(&puStack_1b0);
    func_0x0001000834e4(appuStack_1d8);
    func_0x0001000834e4(auStack_180);
    func_0x000100cba0d4(apuStack_200,auStack_d0);
  }
  puVar3 = &UNK_1103fb770;
  func_0x000107c613fc(&UNK_1103fb770,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  puVar6 = &UNK_1103fb798;
  func_0x000107c613fc(&UNK_1103fb798,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1016eaf34;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  uStack_a0 = 0x1016eaf3c;
  puStack_98 = puVar6;
  func_0x0001000834e4(auStack_158);
  func_0x0001000834e4(apuStack_250);
  func_0x000100083b20(apuStack_250);
  puVar3 = apuStack_250[0];
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(apuStack_250[0]);
  ppuVar7 = (undefined **)0x0;
  func_0x0001016e65e8();
  ppuVar1 = ppuVar7;
  func_0x000107c613fc();
  func_0x000107c613fc(puVar5,0x18,7);
  func_0x00010006a360();
  ppuVar1[8] = puVar5;
  ppuVar1[9] = (undefined *)0x0;
  FUN_1016eaf44(auStack_90,ppuVar1 + 2);
  ppuVar1[7] = puVar3;
  FUN_1016eaf44(auStack_90,apuStack_250);
  func_0x000100083b20(auStack_228);
  func_0x000100083b20(auStack_158);
  puStack_168 = &UNK_1103fb838;
  ppuStack_160 = &PTR_DAT_1103fb850;
  auStack_180[0] = apuStack_320[2];
  puStack_198 = &UNK_1103fb4f8;
  ppuStack_190 = &PTR_DAT_1103fb5c0;
  puVar3 = &UNK_1103fb7c0;
  func_0x000107c613fc(&UNK_1103fb7c0,0xb0,7);
  puStack_1b0 = puVar3;
  FUN_1016e8ae4(&uStack_130,puVar3 + 0x10);
  ppuStack_1b8 = &PTR_DAT_1103fb070;
  puStack_1e8 = &UNK_1103fb3d0;
  ppuStack_1e0 = &PTR_DAT_1103fb5b0;
  puVar3 = &UNK_1103fb7e8;
  appuStack_1d8[0] = ppuVar1;
  ppuStack_1c0 = ppuVar7;
  func_0x000107c613fc(&UNK_1103fb7e8,0x60,7);
  apuStack_200[0] = puVar3;
  func_0x0001016eaf88(apuStack_250,puVar3 + 0x10);
  lVar4 = 0;
  func_0x0001016e6588();
  lStack_300 = lVar4;
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_180,&UNK_1103fb838);
  apuStack_320[3] = (undefined1 *)apuStack_320;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(PTR___sBOWV_11034d658 + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_320 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  func_0x0001000c6518(&puStack_1b0,&UNK_1103fb4f8);
  apuStack_320[2] = (undefined1 *)puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(0xa0);
  puVar11 = (undefined8 *)((long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar11);
  func_0x0001000c6518(appuStack_1d8,ppuVar7);
  apuStack_320[1] = (undefined1 *)puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(ppuVar7[0xffffffffffffffff] + 0x40));
  plVar8 = (long *)((long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(plVar8);
  func_0x0001000c6518(apuStack_200,&UNK_1103fb3d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x50);
  puVar14 = (undefined8 *)((long)plVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar14);
  appuStack_2b0[7] = (undefined **)*puVar12;
  lVar9 = *plVar8;
  puStack_260 = &UNK_1103fb838;
  ppuStack_258 = &PTR_DAT_1103fb850;
  appuStack_2b0[5] = (undefined **)&UNK_1103fb4f8;
  appuStack_2b0[6] = &PTR_DAT_1103fb5c0;
  puVar3 = &UNK_1103fb7c0;
  func_0x000107c613fc(&UNK_1103fb7c0,0xb0,7);
  appuStack_2b0[2] = (undefined **)puVar3;
  uVar13 = puVar11[0xc];
  uVar15 = puVar11[0xf];
  uVar10 = puVar11[0xe];
  *(undefined8 *)(puVar3 + 0x78) = puVar11[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar13;
  *(undefined8 *)(puVar3 + 0x88) = uVar15;
  *(undefined8 *)(puVar3 + 0x80) = uVar10;
  uVar13 = puVar11[0x10];
  uVar15 = puVar11[0x13];
  uVar10 = puVar11[0x12];
  *(undefined8 *)(puVar3 + 0x98) = puVar11[0x11];
  *(undefined8 *)(puVar3 + 0x90) = uVar13;
  *(undefined8 *)(puVar3 + 0xa8) = uVar15;
  *(undefined8 *)(puVar3 + 0xa0) = uVar10;
  uVar13 = puVar11[4];
  uVar15 = puVar11[7];
  uVar10 = puVar11[6];
  *(undefined8 *)(puVar3 + 0x38) = puVar11[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar15;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  uVar13 = puVar11[8];
  uVar15 = puVar11[0xb];
  uVar10 = puVar11[10];
  *(undefined8 *)(puVar3 + 0x58) = puVar11[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  *(undefined8 *)(puVar3 + 0x68) = uVar15;
  *(undefined8 *)(puVar3 + 0x60) = uVar10;
  uVar13 = *puVar11;
  uVar15 = puVar11[3];
  uVar10 = puVar11[2];
  *(undefined8 *)(puVar3 + 0x18) = puVar11[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  appuStack_2b0[1] = &PTR_DAT_1103fb070;
  appuStack_2f0[3] = (undefined **)&UNK_1103fb3d0;
  appuStack_2f0[4] = &PTR_DAT_1103fb5b0;
  puVar3 = &UNK_1103fb7e8;
  alStack_2c8[0] = lVar9;
  appuStack_2b0[0] = ppuVar7;
  func_0x000107c613fc(&UNK_1103fb7e8,0x60,7);
  appuStack_2f0[0] = (undefined **)puVar3;
  uVar13 = puVar14[4];
  uVar15 = puVar14[7];
  uVar10 = puVar14[6];
  *(undefined8 *)(puVar3 + 0x38) = puVar14[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x48) = uVar15;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  uVar13 = puVar14[8];
  *(undefined8 *)(puVar3 + 0x58) = puVar14[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar13;
  uVar15 = *puVar14;
  uVar10 = puVar14[3];
  uVar13 = puVar14[2];
  *(undefined8 *)(puVar3 + 0x18) = puVar14[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar15;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar13;
  func_0x0001016eafc4(apuStack_250);
  func_0x000100cba0d4(appuStack_2b0 + 7,lVar4 + 0x10);
  func_0x000100cba0d4(appuStack_2b0 + 2,lVar4 + 0x38);
  func_0x000100cba0d4(alStack_2c8,lVar4 + 0x60);
  func_0x000100cba0d4(appuStack_2f0,lVar4 + 0x88);
  func_0x000100cba0d4(auStack_158,lVar4 + 0xb0);
  func_0x0001000834e4(apuStack_200);
  func_0x0001000834e4(appuStack_1d8);
  func_0x0001000834e4(&puStack_1b0);
  func_0x0001000834e4(auStack_180);
  func_0x0001016eaff8(&uStack_130);
  plStack_2f8[3] = lStack_300;
  plStack_2f8[4] = (long)&PTR_DAT_1103fb088;
  *plStack_2f8 = lVar4;
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 1016eada0; end: 1016eadf7;  */

void FUN_1016eada0(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  func_0x000100083b20(auStack_48);
  lVar1 = 0;
  func_0x0001016e65a8();
  func_0x000107c613fc();
  func_0x000100cba0d4(auStack_48,lVar1 + 0x10);
  *param_1 = lVar1;
  return;
}



/* Entry: 1016eadf8; end: 1016eae1f;  */

void FUN_1016eadf8(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  func_0x000100083b20(auStack_48);
  lVar1 = 0;
  func_0x0001016e65a8();
  func_0x000107c613fc();
  func_0x000100cba0d4(auStack_48,lVar1 + 0x10);
  *param_1 = lVar1;
  return;
}



/* Entry: 1016eae20; end: 1016eae9b;  */

undefined8 FUN_1016eae20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c4d208(uVar2);
  func_0x000107c4d200(uVar2);
  func_0x000107c4d204(uVar2);
  func_0x000107c61180();
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 1016eae9c; end: 1016eaf33;  */

undefined8 FUN_1016eae9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc2bb8;
  func_0x0001000285a8(0x112dc2bb8,&UNK_10d97fc10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016eaf34; end: 1016eaf43;  */

void FUN_1016eaf34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103fb350;
  func_0x000107c613fc(&UNK_1103fb350,0x20,7);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x0001016e9bd4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar3);
  func_0x00010488b6c8(0x403e000000000000,0x1016e9bb4,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016eaf44; end: 1016eb04b;  */

long FUN_1016eaf44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1016eb04c; end: 1016eb05b;  */

undefined1  [16] FUN_1016eb04c(void)

{
  return ZEXT816(0x1103fb838);
}



/* Entry: 1016eb05c; end: 1016eb47f;  */

undefined1  [16] FUN_1016eb05c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined *puStack_a8;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar5 = unaff_x20;
  func_0x0001000a8868();
  pcVar4 = (code *)puVar5[2];
  (*(code *)*puVar5)();
  if ((((ulong)puVar5 & 0xfffffffffffffffe) == 2) ||
     ((*pcVar4)(), (undefined8 *)0xffffffffed400000 < puVar5 + -0x2580000)) {
    puStack_a8 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x10);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar13 != 0) {
      uVar12 = 0;
LAB_1016eb100:
      uVar2 = uVar12;
      if (uVar12 <= uVar13) {
        uVar2 = uVar13;
      }
      puVar5 = (undefined8 *)(param_1 + 0x28 + uVar12 * 0x10);
      uVar12 = uVar12 + 1;
      do {
        if (uVar12 - uVar2 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016eb47c);
          (*pcVar4)();
        }
        uVar1 = puVar5[-1];
        uVar3 = *puVar5;
        plVar6 = unaff_x20 + 5;
        func_0x0001000a8868(plVar6,unaff_x20[8]);
        lVar14 = *plVar6;
        uStack_78 = 0xd00000000000002d;
        uStack_70 = 0x800000010efb7f70;
        func_0x000107c61434(uVar3);
        func_0x000107c5fb78(uVar1,uVar3);
        uVar8 = uStack_70;
        uVar7 = uStack_78;
        func_0x000107c5fadc(uStack_78,uStack_70);
        func_0x000107c6142c(uVar8);
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (lVar14 != 0) {
          uVar8 = 0x112d373e8;
          lStack_80 = lVar14;
          func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
          puVar9 = &uStack_78;
          func_0x000107c6147c(puVar9,&lStack_80,uVar8,PTR___sSSN_11034da80,6);
          if (((ulong)puVar9 & 1) != 0) goto code_r0x0001016eb1f0;
        }
        func_0x000107c6142c(uVar3);
        uVar12 = uVar12 + 1;
        puVar5 = puVar5 + 2;
        if (uVar12 - uVar13 == 1) goto LAB_1016eb2ac;
      } while( true );
    }
  }
LAB_1016eb288:
  auVar15._8_8_ = puVar10;
  auVar15._0_8_ = puStack_a8;
  return auVar15;
code_r0x0001016eb1f0:
  func_0x000107c6142c(uStack_70);
  puVar10 = puStack_a8;
  func_0x000107c61558();
  puStack_68 = puStack_a8;
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000100403514(0,*(long *)(puStack_a8 + 0x10) + 1,1);
  }
  uVar2 = *(ulong *)(puStack_68 + 0x10);
  if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
  }
  *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x20) = uVar1;
  *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x28) = uVar3;
  puStack_a8 = puStack_68;
  if (uVar12 == uVar13) goto LAB_1016eb2ac;
  goto LAB_1016eb100;
LAB_1016eb2ac:
  uVar12 = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar2 = uVar12;
    if (uVar12 <= uVar13) {
      uVar2 = uVar13;
    }
    puVar5 = (undefined8 *)(param_1 + 0x28 + uVar12 * 0x10);
    uVar12 = uVar12 + 1;
    while( true ) {
      if (uVar12 - uVar2 == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016eb480);
        (*pcVar4)();
      }
      uVar1 = puVar5[-1];
      uVar3 = *puVar5;
      plVar6 = unaff_x20 + 5;
      func_0x0001000a8868(plVar6,unaff_x20[8]);
      lVar14 = *plVar6;
      uStack_78 = 0xd00000000000002d;
      uStack_70 = 0x800000010efb7f70;
      func_0x000107c61434(uVar3);
      func_0x000107c5fb78(uVar1,uVar3);
      uVar8 = uStack_70;
      uVar7 = uStack_78;
      func_0x000107c5fadc(uStack_78,uStack_70);
      func_0x000107c6142c(uVar8);
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (lVar14 == 0) break;
      uVar8 = 0x112d373e8;
      lStack_80 = lVar14;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      puVar9 = &uStack_78;
      func_0x000107c6147c(puVar9,&lStack_80,uVar8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar9 & 1) == 0) break;
      func_0x000107c6142c(uStack_70);
      func_0x000107c6142c(uVar3);
      uVar12 = uVar12 + 1;
      puVar5 = puVar5 + 2;
      if (uVar12 - uVar13 == 1) goto LAB_1016eb288;
    }
    puVar11 = puVar10;
    func_0x000107c61558();
    puStack_68 = puVar10;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_68 + 0x10);
    if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x20) = uVar1;
    *(undefined8 *)(puStack_68 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar10 = puStack_68;
  } while (uVar12 != uVar13);
  goto LAB_1016eb288;
}



/* Entry: 1016eb480; end: 1016eb4c7;  */

undefined * FUN_1016eb480(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c8d0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1016eb4c8; end: 1016eb4e3;  */

void FUN_1016eb4c8(long param_1)

{
  code *pcVar1;
  
  func_0x000107c611d8();
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016eb4e4);
  (*pcVar1)();
}



/* Entry: 1016eb4e4; end: 1016eb577;  */

void FUN_1016eb4e4(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x18,auStack_68,0x21,0);
  func_0x000107c61434(param_4);
  puVar1 = auStack_50;
  func_0x000100403b00(puVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uStack_48);
  *param_1 = (byte)puVar1 & 1;
  return;
}



/* Entry: 1016eb578; end: 1016eb5c3;  */

void FUN_1016eb578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016eb5c4; end: 1016eb627;  */

/* WARNING: Possible PIC construction at 0x0001016eb5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016eb5dc) */

void FUN_1016eb5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1016eb628; end: 1016eb68b;  */

undefined8 * FUN_1016eb628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1016eb68c; end: 1016eb6cf;  */

undefined8 * FUN_1016eb68c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016eb6d0; end: 1016eb777;  */

int FUN_1016eb6d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016eb778; end: 1016eb883;  */

/* WARNING: Possible PIC construction at 0x0001016eb788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016eb78c) */

void FUN_1016eb778(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1016eb884; end: 1016eb937;  */

int FUN_1016eb884(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016eb938; end: 1016eb99b;  */

void FUN_1016eb938(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eb99c,0,0);
  return;
}



/* Entry: 1016eb99c; end: 1016eba8f;  */

void FUN_1016eb99c(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar10 = *(long *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5ee80(uVar11,(double)*(long *)(lVar10 + 0x30) * 24.0 * 60.0 * 60.0);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(long *)(unaff_x22 + 0x30) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  uVar11 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  pcVar2 = FUN_1016ebd60;
  func_0x00010488bc98(FUN_1016ebd60,unaff_x22 + 0x10,uVar11);
  *(code **)(unaff_x22 + 0x88) = pcVar2;
  *(code **)(unaff_x22 + 0x50) = pcVar2;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  lVar10 = 0x112dc2cf0;
  func_0x0001000285a8(0x112dc2cf0,&UNK_10d9802c0);
  lVar4 = lVar10;
  FUN_1016ebd6c();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016eba90;
  plVar3[3] = unaff_x22 + 0x40;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar4,lVar10,&UNK_10e821f58,&UNK_10e821f60);
  uVar11 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar6 = 0;
  __ss6ResultOMa(0,uVar5,uVar11,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar6;
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar7;
  piVar9 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar8;
  *plVar8 = (long)plVar3;
  plVar8[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(plVar8,uVar7,lVar10,lVar4);
  return;
}



/* Entry: 1016eba90; end: 1016ebaef;  */

void FUN_1016eba90(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016ebaf0;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1016ebb50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016ebaf0; end: 1016ebb4f;  */

void FUN_1016ebaf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016ebb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2);
  return;
}



/* Entry: 1016ebb50; end: 1016ebba3;  */

void FUN_1016ebb50(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016ebba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 1016ebba4; end: 1016ebd5f;  */

void FUN_1016ebba4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puStack_80 = (undefined *)0x3a636973756d;
  uStack_78 = 0xe600000000000000;
  func_0x000107c5fb78(*param_3,param_3[1]);
  uVar1 = uStack_78;
  puVar3 = puStack_80;
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(puVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c4766c(puVar2);
  func_0x000107c61170(puVar3);
  FUN_1016ec0e0();
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5ee70();
  pcStack_60 = FUN_1016ebe70;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10137d3d0;
  puStack_68 = &UNK_1103fb9b8;
  ppuVar6 = &puStack_80;
  uStack_58 = param_1;
  func_0x000107c60bc4();
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4fc28(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1016ebd60; end: 1016ebd6b;  */

void FUN_1016ebd60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x20);
  puStack_80 = (undefined *)0x3a636973756d;
  uStack_78 = 0xe600000000000000;
  func_0x000107c5fb78(*puVar1,puVar1[1],puVar1,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x10));
  uVar3 = uStack_78;
  puVar5 = puStack_80;
  puVar4 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(puVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c4766c(puVar4);
  func_0x000107c61170(puVar5);
  FUN_1016ec0e0();
  puVar6 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c5ee70();
  pcStack_60 = FUN_1016ebe70;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10137d3d0;
  puStack_68 = &UNK_1103fb9b8;
  ppuVar8 = &puStack_80;
  uStack_58 = param_1;
  func_0x000107c60bc4();
  uVar3 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar3);
  func_0x000107c4fc28(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1016ebd6c; end: 1016ebdbb;  */

void FUN_1016ebd6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc2cf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc2cf0;
  func_0x00010002969c(0x112dc2cf0,&UNK_10d9802c0);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112dc2cf8 = puVar2;
  return;
}



/* Entry: 1016ebdbc; end: 1016ebe6f;  */

void FUN_1016ebdbc(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  if ((param_3 & 1) != 0) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar2 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar2 == 0) {
        if ((param_2 & 0xff000000000000) != 0) {
LAB_1016ebe08:
          uStack_40 = 0;
          lStack_50 = param_1;
          uStack_48 = param_2;
          func_0x00010006c00c();
          func_0x00010488e5d4(&lStack_50);
          func_0x00010006c090(param_1,param_2);
          return;
        }
      }
      else if ((long)(int)param_1 != param_1 >> 0x20) goto LAB_1016ebe08;
    }
    else if ((uVar2 == 2) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)))
    goto LAB_1016ebe08;
  }
  uStack_48 = 0xf000000000000000;
  lStack_50 = 0;
  uStack_40 = 0;
  func_0x00010488e5d4(&lStack_50);
  return;
}



/* Entry: 1016ebe70; end: 1016ebe93;  */

void FUN_1016ebe70(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  if ((param_3 & 1) != 0) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar2 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar2 == 0) {
        if ((param_2 & 0xff000000000000) != 0) {
LAB_1016ebe08:
          uStack_40 = 0;
          lStack_50 = param_1;
          uStack_48 = param_2;
          func_0x00010006c00c();
          func_0x00010488e5d4(&lStack_50);
          func_0x00010006c090(param_1,param_2);
          return;
        }
      }
      else if ((long)(int)param_1 != param_1 >> 0x20) goto LAB_1016ebe08;
    }
    else if ((uVar2 == 2) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)))
    goto LAB_1016ebe08;
  }
  uStack_48 = 0xf000000000000000;
  lStack_50 = 0;
  uStack_40 = 0;
  func_0x00010488e5d4(&lStack_50);
  return;
}



/* Entry: 1016ebe94; end: 1016ebeef;  */

long FUN_1016ebe94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016ebef0; end: 1016ebfdf;  */

undefined8 * FUN_1016ebef0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1016ebfe0; end: 1016ec03b;  */

undefined8 * FUN_1016ebfe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1016ec03c; end: 1016ec0df;  */

int FUN_1016ec03c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016ec0e0; end: 1016ec657;  */

undefined * FUN_1016ec0e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  
  uVar9 = *unaff_x20;
  uVar1 = unaff_x20[1];
  func_0x000107c5fb78(uVar9,uVar1);
  func_0x000107c5fb78(uVar9,uVar1);
  uVar5 = 0x3a636973756d;
  uVar6 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar7 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  puVar4 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  func_0x000107c5fadc(0x3a636973756d,0xe600000000000000);
  func_0x000107c6142c(0xe600000000000000);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c5fadc(uVar7,uVar3);
  func_0x000107c46d48();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  puVar8 = PTR_PTR_1126b1050;
  func_0x000107c610f8(PTR_PTR_1126b1050);
  func_0x000107c5fadc(uVar9,uVar1);
  uVar5 = 0x3a636973756d;
  func_0x000107c5fadc(0x3a636973756d,0xe600000000000000);
  func_0x000107c6142c(0xe600000000000000);
  func_0x000107c4915c(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  return puVar8;
}



/* Entry: 1016ec658; end: 1016ec6bb; -[SCMusicContextExtractor extractFrom:sourcePageType:] */

void FUN_1016ec658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016ec7ec(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ec6bc; end: 1016ec77b; -[SCMusicContextExtractor extractForLensAutoApplyFrom:sourcePageType:] */

void FUN_1016ec6bc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000107c5ce30();
  iVar1 = (int)uVar2;
  if ((iVar1 - 1U < 2) ||
     (((iVar1 != -0x4524111 && (iVar1 == 3)) &&
      ((uVar2 = param_3, func_0x000107c44a84(), (uVar2 & 1) != 0 ||
       (uVar2 = param_3, func_0x000107c4a624(), (uVar2 & 1) != 0)))))) {
    uVar2 = param_3;
    FUN_1016ec7ec(param_3,param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ec77c; end: 1016ec7b7; -[SCMusicContextExtractor init] */

void FUN_1016ec77c(undefined8 param_1)

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



/* Entry: 1016ec7b8; end: 1016ec7eb;  */

void FUN_1016ec7b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016ec7ec; end: 1016ec893;  */

void FUN_1016ec7ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000107c5b5f4();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x000107c5b5f4(param_1);
    lVar2 = param_1;
    func_0x000107c4d2a4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c5bb48();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c5ce30(param_1);
    uVar3 = 0;
    func_0x00010437ab8c(0);
    func_0x000107c610f8();
    func_0x00010437aa3c(lVar1,lVar4,param_2,param_1,uVar3);
  }
  return;
}



/* Entry: 1016ec894; end: 1016ec8b3;  */

void FUN_1016ec894(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8090);
  return;
}



/* Entry: 1016ec8b4; end: 1016ec913;  */

/* WARNING: Possible PIC construction at 0x0001016ec8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ec8f8) */

void FUN_1016ec8b4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016ede98();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(long *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016ec914; end: 1016ec91f;  */

/* WARNING: Possible PIC construction at 0x0001016ec8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ec8f8) */

void FUN_1016ec914(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_1016ede98();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(long *)(lVar3 + 0x18) = lVar1;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1016ec920; end: 1016ec963;  */

void FUN_1016ec920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1016ec964; end: 1016ec9f7; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl showLyricsDuringScrubbing] */

undefined8 FUN_1016ec964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efb8070);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ec9f8; end: 1016eca8b; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl addSoundPillPostModeEnabled] */

undefined8 FUN_1016ec9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efb8090);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016eca8c; end: 1016ecb1f; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicPopularPaginationPageSize] */

undefined8 FUN_1016eca8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efb80c0);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ecb20; end: 1016ecbbb; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicRecsContextsDebounceInterval] */

double FUN_1016ecb20(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uStack_48;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_48);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efb80f0);
  fVar2 = 1.0;
  func_0x000107c436e4(0x3f800000,uStack_48);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)fVar2;
}



/* Entry: 1016ecbbc; end: 1016ecbef; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicStickerPosition] */

undefined8 FUN_1016ecbbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1016ecbf0();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1016ecbf0; end: 1016ecccf;  */

undefined8 FUN_1016ecbf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb8120);
  uVar2 = 0x4c4f52544e4f43;
  uVar4 = 0xe700000000000000;
  func_0x000107c5fadc(0x4c4f52544e4f43,0xe700000000000000);
  uVar3 = uStack_38;
  func_0x000107c5c1dc(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar1 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  FUN_1016edab0(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  return uVar1;
}



/* Entry: 1016eccd0; end: 1016eccd7; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl isSnapEditorMusicEnabledWithIsBatchCapture:] */

uint FUN_1016eccd0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 ^ 1;
}



/* Entry: 1016eccd8; end: 1016ecd6b; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundTopicsContainsUiEnabled] */

undefined8 FUN_1016eccd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efb8140);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ecd6c; end: 1016ecdff; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl useSoundHideScrubberInMusicCameraEnabled] */

undefined8 FUN_1016ecd6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010efb8160);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ece00; end: 1016ece93; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundTopicsOperaShowUseSound] */

undefined8 FUN_1016ece00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efb81a0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ece94; end: 1016ecf27; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicMemoriesSoundPillRecommendationEnabled] */

undefined8 FUN_1016ece94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efb81d0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ecf28; end: 1016ecf33; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicSnapContextRecommendationCacheTTL] */

undefined8 FUN_1016ecf28(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_1016ecf34();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 1016ecf34; end: 1016ecfcb;  */

double FUN_1016ecf34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efb8200);
  uVar3 = uStack_38;
  func_0x000107c4980c();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar2);
  lVar5 = (long)(int)uVar3 * 0x3c;
  iVar4 = (int)lVar5;
  if (lVar5 - iVar4 == 0) {
    return (double)iVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ecfcc);
  (*pcVar1)();
}



/* Entry: 1016ecfcc; end: 1016ed05f; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicNowPlayingCacheTTL] */

double FUN_1016ecfcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efb8230);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 1016ed060; end: 1016ed0f3; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicNowPlayingRequestTimeout] */

double FUN_1016ed060(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efb8260);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}



/* Entry: 1016ed0f4; end: 1016ed187; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundReportingEnabled] */

undefined8 FUN_1016ed0f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efb8290);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed188; end: 1016ed21b; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl addMusicUnlocksToFeedEnabled] */

undefined8 FUN_1016ed188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efb82b0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed21c; end: 1016ed2af; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicMainCameraRecoveryEnabled] */

undefined8 FUN_1016ed21c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efb82e0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed2b0; end: 1016ed343; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundTopicPageImprovementsEnabled] */

undefined8 FUN_1016ed2b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efb8310);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed344; end: 1016ed3d7; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundTopicHeaderStylingEnabled] */

undefined8 FUN_1016ed344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efb8330);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed3d8; end: 1016ed46b; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl topicPageNewSnapGridEnabled] */

undefined8 FUN_1016ed3d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efb8350);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed46c; end: 1016ed4ff; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl soundPillTapOpensPicker] */

undefined8 FUN_1016ed46c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb8370);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed500; end: 1016ed593; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicContentBasedRecommendationEnabled] */

undefined8 FUN_1016ed500(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efb8390);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed594; end: 1016ed627; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl trendingOnSpotlightTopicPageEntryButtonEnabled] */

undefined8 FUN_1016ed594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000039;
  func_0x000107c5fadc(0xd000000000000039,0x800000010efb83c0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed628; end: 1016ed6bb; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl favoriteToSaveEnabled] */

undefined8 FUN_1016ed628(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb8400);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed6bc; end: 1016ed74f; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl sharingSoundFromTopicPageEnabled] */

undefined8 FUN_1016ed6bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efb8420);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1016ed750; end: 1016ed75b; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicContentBasedConfidenceThreshold] */

undefined8 FUN_1016ed750(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  (*(code *)0x1016ed79c)();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 1016ed75c; end: 1016ed837;  */

undefined8 FUN_1016ed75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c6157c();
  (*param_4)();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 1016ed838; end: 1016ed887; -[_TtC19SCMusicServicesImpl20MusicExperimentsImpl musicContentBasedModelKeys] */

void FUN_1016ed838(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1016ed888();
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ed888; end: 1016eda27;  */

void FUN_1016ed888(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_38;
  
  uVar2 = uRam0000000112dc2bc8;
  lVar1 = lRam0000000112dc2bc0;
  func_0x000107c61434(uRam0000000112dc2bc8);
  FUN_1016edbec(lVar1,uVar2);
  func_0x000107c6142c(uVar2);
  if (*(long *)(lVar1 + 0x10) == 0) {
    func_0x000107c6142c(lVar1);
    func_0x000100083b20(&lStack_38);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efb8470);
    if (lRam0000000112dc2d30 != -1) {
      func_0x000107c61568(0x112dc2d30,FUN_1016eda28);
    }
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar3;
    func_0x00010011d734();
    uVar5 = 0x2c;
    uVar7 = 0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar3,uVar4);
    uVar3 = uVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
    lVar1 = lStack_38;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    lVar6 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    FUN_1016edbec(lVar6,uVar3);
    func_0x000107c6142c(uVar3);
    if (*(long *)(lVar6 + 0x10) == 0) {
      func_0x000107c6142c(lVar6);
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
    }
  }
  return;
}



/* Entry: 1016eda28; end: 1016eda5f;  */

void FUN_1016eda28(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  uRam0000000112dc2d38 = uVar1;
  return;
}



/* Entry: 1016eda60; end: 1016eda6b;  */

void FUN_1016eda60(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001016edaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016eda6c; end: 1016edaaf;  */

void FUN_1016eda6c(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001016edaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016edab0; end: 1016edbeb;  */

undefined8 FUN_1016edab0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4c4f52544e4f43;
  if ((param_1 == 0x4c4f52544e4f43 && param_2 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x4c4f52544e4f43,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
  {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x5446454c5f504f54) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x5446454c5f504f54,0xe800000000000000,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x4c5f4d4f54544f42) && (param_2 == -0x14ffffffffabb9bb)) ||
         (func_0x000107c605b8(0x4c5f4d4f54544f42,0xeb00000000544645,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if ((param_1 == 0x525f4d4f54544f42) && (param_2 == -0x13ffffffabb7b8b7)) {
          uVar2 = 3;
        }
        else {
          func_0x000107c605b8(0x525f4d4f54544f42,0xec00000054484749,param_1,param_2,0);
          uVar2 = 3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 1016edbec; end: 1016ede87;  */

undefined * FUN_1016edbec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  func_0x000107c5eb9c();
  lStack_a8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar16 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_70 = (undefined *)0x2c;
  uStack_68 = 0xe100000000000000;
  ppuStack_90 = &puStack_70;
  func_0x000107c61434(param_2);
  lVar7 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1016edeb8,&puStack_a0,param_1,param_2);
  uStack_b8 = 0;
  lVar18 = *(long *)(lVar7 + 0x10);
  if (lVar18 == 0) {
    func_0x000107c6142c(lVar7);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar18,0);
    puVar14 = (undefined8 *)(lVar7 + 0x38);
    lStack_b0 = lVar7;
    do {
      puVar13 = puStack_70;
      ppuStack_90 = (undefined **)puVar14[-1];
      uVar3 = *puVar14;
      uStack_98 = puVar14[-2];
      puStack_a0 = (undefined *)puVar14[-3];
      uVar8 = uVar3;
      uStack_88 = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000107c5eb88(puVar16);
      func_0x000101478db0();
      puVar9 = puVar16;
      puVar11 = PTR___sSsN_11034e1d8;
      func_0x000107c601f0(puVar16,PTR___sSsN_11034e1d8,uVar8);
      (**(code **)(lStack_a8 + 8))(puVar16,lVar6);
      func_0x000107c6142c(uVar3);
      uVar15 = *(ulong *)(puVar13 + 0x10);
      puStack_70 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar15) {
        func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar15 + 1,1);
      }
      puVar13 = puStack_70;
      puVar14 = puVar14 + 4;
      *(ulong *)(puStack_70 + 0x10) = uVar15 + 1;
      *(undefined1 **)(puStack_70 + uVar15 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puStack_70 + uVar15 * 0x10 + 0x28) = puVar11;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    func_0x000107c6142c(lStack_b0);
  }
  uVar15 = 0;
  uVar17 = *(ulong *)(puVar13 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar12 = (ulong *)(puVar13 + uVar15 * 0x10 + 0x28);
    do {
      if (uVar17 == uVar15) {
        func_0x000107c6142c(puVar13);
        return puVar11;
      }
      if (*(ulong *)(puVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016ede88);
        (*pcVar5)();
      }
      uVar1 = puVar12[-1];
      uVar4 = *puVar12;
      puVar12 = puVar12 + 2;
      uVar15 = uVar15 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar2 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar4);
    puVar10 = puVar11;
    func_0x000107c61558();
    puStack_a0 = puVar11;
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_a0 + 0x10);
    if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_a0 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x28) = uVar4;
    puVar11 = puStack_a0;
  } while( true );
}



/* Entry: 1016ede88; end: 1016ede97;  */

undefined1  [16] FUN_1016ede88(void)

{
  return ZEXT816(0x1103fbaa0);
}



/* Entry: 1016ede98; end: 1016edeb7;  */

void FUN_1016ede98(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2db8);
  return;
}



/* Entry: 1016edeb8; end: 1016edf0b;  */

uint FUN_1016edeb8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1016edf0c; end: 1016edf73;  */

/* WARNING: Possible PIC construction at 0x0001016edf54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016edf58) */

void FUN_1016edf0c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016eeb6c();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(long *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016edf74; end: 1016edf7f;  */

/* WARNING: Possible PIC construction at 0x0001016edf54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016edf58) */

void FUN_1016edf74(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_1016eeb6c();
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(long *)(lVar3 + 0x18) = lVar1;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1016edf80; end: 1016edfcb;  */

void FUN_1016edf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1016edfcc; end: 1016ee48b;  */

void FUN_1016edfcc(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long unaff_x20;
  code *pcVar12;
  long lStack_58;
  
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
    uVar7 = param_2;
    func_0x000100083b20(&lStack_58);
    lVar3 = lStack_58;
    lVar2 = lStack_58;
    func_0x000107c42e1c();
    func_0x000107c615e8();
    if ((param_1 & 1) == 0) {
      if ((int)lVar2 == 0) {
        func_0x000107e481a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ee48c);
          (*pcVar1)();
        }
        lVar2 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        puVar4 = PTR_PTR_1126b0c40;
        func_0x000107c61168();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4000000000000000,
                            0x4000000000000000,0x4000000000000000,0x4000000000000000);
      }
      else {
        func_0x000107e48220();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ee484);
          (*pcVar1)();
        }
        lVar2 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        puVar4 = PTR_PTR_1126b0c40;
        func_0x000107c61168();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4000000000000000,
                            0x4000000000000000,0x4000000000000000,0x4000000000000000);
      }
    }
    else if ((int)lVar2 == 0) {
      func_0x000107e48190();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ee488);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4000000000000000,
                          0x4000000000000000,0x4000000000000000,0x4000000000000000);
    }
    else {
      func_0x000107e48208();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ee480);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4000000000000000,
                          0x4000000000000000,0x4000000000000000,0x4000000000000000);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c4253c();
      func_0x000107c61180();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c45b00();
      func_0x000107c61170(puVar5);
    }
    puVar6 = PTR_PTR_1126b0ae0;
    func_0x000107c61168(PTR_PTR_1126b0ae0);
    func_0x000107c61174(puVar4);
    FUN_1016ee4c0(param_2,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c5fadc(lVar2,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010efb84d0);
    func_0x000107c40b10(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar7);
    plVar8 = (long *)PTR_PTR_1126bfd70;
    func_0x000107c610f8();
    func_0x000107c48050();
    func_0x0001000285a8(0x112dc2e30,&UNK_10d97fe68);
    plVar9 = plVar8;
    func_0x000107c4d7a4();
    func_0x000107c61180();
    plVar10 = plVar9;
    func_0x0001000b637c();
    func_0x000107c61170(plVar9);
    puVar5 = &UNK_1103fbae8;
    func_0x000107c613fc(&UNK_1103fbae8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcVar12 = *(code **)(*plVar10 + 0x68);
    func_0x000107c6157c(puVar5);
    pcVar1 = FUN_1016eeb18;
    puVar11 = puVar5;
    (*pcVar12)();
    func_0x000107c61574(plVar10);
    func_0x000107c61578(puVar5,2);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(code **)(unaff_x20 + 0x30) = pcVar1;
    *(undefined **)(unaff_x20 + 0x38) = puVar11;
    func_0x000107c615e8(uVar7);
    func_0x000100083b20(&lStack_58);
    func_0x000107c61174(puVar6);
    func_0x000107c5c2e0(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1016ee48c; end: 1016ee4bf; -[_TtC19SCMusicServicesImpl30MusicNotificationPresenterImpl submitFavoritesNotification:] */

void FUN_1016ee48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1016edfcc(param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1016ee4c0; end: 1016ee7d3;  */

/* WARNING: Possible PIC construction at 0x0001016ee598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ee780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ee59c) */
/* WARNING: Removing unreachable block (ram,0x0001016ee634) */
/* WARNING: Removing unreachable block (ram,0x0001016ee5e8) */
/* WARNING: Removing unreachable block (ram,0x0001016ee784) */

void FUN_1016ee4c0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_1 == 0) {
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
  }
  else {
    func_0x000107c61174();
    func_0x000107c5d7e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}


