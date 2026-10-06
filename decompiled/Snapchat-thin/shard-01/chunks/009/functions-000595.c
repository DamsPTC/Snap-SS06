/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016060d8; end: 1016060ef;  */

void FUN_1016060d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101605aa4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101605b24)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016060f0; end: 10160612f;  */

void FUN_1016060f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c410;
  func_0x000107c61520(&UNK_10d96c410,&UNK_1103e84d8);
  puRam0000000112db9b20 = puVar1;
  return;
}



/* Entry: 101606130; end: 101606153;  */

void FUN_101606130(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101606154();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101606154; end: 101606193;  */

void FUN_101606154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c4a0;
  func_0x000107c61520(&UNK_10d96c4a0,&UNK_1103e8688);
  puRam0000000112db9b28 = puVar1;
  return;
}



/* Entry: 101606194; end: 1016061a7;  */

void FUN_101606194(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101605c28();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1016058a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016061a8; end: 1016061d7;  */

void FUN_1016061a8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016061d8; end: 1016061db;  */

void FUN_1016061d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c508;
  func_0x000107c61520(&UNK_10d96c508,&UNK_1103e8688);
  puRam0000000112db9b30 = puVar1;
  return;
}



/* Entry: 1016061dc; end: 10160621b;  */

void FUN_1016061dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c508;
  func_0x000107c61520(&UNK_10d96c508,&UNK_1103e8688);
  puRam0000000112db9b30 = puVar1;
  return;
}



/* Entry: 10160621c; end: 101606243;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10160621c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101606244; end: 1016062eb;  */

undefined8 * FUN_101606244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1016062ec; end: 10160632f;  */

undefined8 * FUN_1016062ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101606330; end: 1016063db;  */

int FUN_101606330(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016063dc; end: 101606403;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016063dc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101606404; end: 1016064fb;  */

undefined8 * FUN_101606404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 1016064fc; end: 101606567;  */

undefined8 * FUN_1016064fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101606568; end: 101606637;  */

int FUN_101606568(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101606638; end: 101606667;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101606638(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101606668; end: 10160675f;  */

undefined8 * FUN_101606668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 101606760; end: 1016067c3;  */

undefined8 * FUN_101606760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1016067c4; end: 101606867;  */

int FUN_1016067c4(int *param_1,int param_2)

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



/* Entry: 101606868; end: 101606927;  */

void FUN_101606868(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96c474;
  func_0x000107c61520(&DAT_10d96c474,&UNK_1103e8688);
  puRam0000000112db9b40 = puVar1;
  return;
}



/* Entry: 101606928; end: 10160698b;  */

undefined8 FUN_101606928(undefined8 param_1,undefined8 param_2)

{
  FUN_101606404(param_2,param_1,&UNK_1103e84d8);
  return param_2;
}



/* Entry: 10160698c; end: 101606a3f;  */

void FUN_10160698c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101606a40; end: 101606a6f;  */

void FUN_101606a40(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_101614acc();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101606a70; end: 101606a77;  */

undefined8 FUN_101606a70(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101606a78; end: 101606aeb;  */

void FUN_101606a78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db9c20;
  func_0x0001000285a8(0x112db9c20,&UNK_10d96c728);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101606aec; end: 101606af7;  */

void FUN_101606aec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101606af8; end: 101606ba3;  */

void FUN_101606af8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101606ba4; end: 101606bb7;  */

bool FUN_101606ba4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101606bb8; end: 101606c17;  */

void FUN_101606bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_2d0 [344];
  undefined1 auStack_178 [344];
  
  func_0x000107c610b4(auStack_178,param_4 + 0x10,0x151);
  FUN_10161538c(auStack_178,auStack_2d0,0x112db4000,&UNK_10d95e5a0);
  func_0x000107c610b4(param_1,auStack_178,0x151);
  return;
}



/* Entry: 101606c18; end: 101606d17;  */

void FUN_101606c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_6d8 [336];
  undefined1 auStack_588 [344];
  undefined8 auStack_430 [42];
  undefined1 auStack_2e0 [344];
  undefined1 auStack_188 [344];
  
  func_0x000107c610b4(auStack_2e0,param_4 + 0x10,0x151);
  func_0x000107c610b4(auStack_188,param_4 + 0x10,0x151);
  iVar1 = (int)auStack_2e0;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_430,auStack_188,0x150);
    iVar1 = (int)auStack_188;
    FUN_10155b330();
    if (iVar1 == 1) {
      puVar2 = auStack_430;
      func_0x000100cb6ab0();
      uVar8 = puVar2[9];
      uVar4 = puVar2[8];
      uVar14 = puVar2[0xb];
      uVar12 = puVar2[10];
      uVar3 = puVar2[0xc];
      uVar9 = puVar2[5];
      uVar5 = puVar2[4];
      uVar15 = puVar2[7];
      uVar13 = puVar2[6];
      uVar10 = puVar2[1];
      uVar6 = *puVar2;
      uVar11 = puVar2[3];
      uVar7 = puVar2[2];
      func_0x000107c610b4(auStack_588,auStack_2e0,0x151);
      FUN_101614af8(auStack_588,auStack_6d8);
      goto LAB_101606cf4;
    }
  }
  uVar3 = 0;
  uVar11 = 0;
  uVar7 = 0xc000000000000000;
  uVar6 = 0;
  uVar10 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar15 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar12 = 0;
  uVar14 = 0;
LAB_101606cf4:
  param_1[1] = uVar10;
  *param_1 = uVar6;
  param_1[3] = uVar11;
  param_1[2] = uVar7;
  param_1[5] = uVar9;
  param_1[4] = uVar5;
  param_1[7] = uVar15;
  param_1[6] = uVar13;
  param_1[9] = uVar8;
  param_1[8] = uVar4;
  param_1[0xb] = uVar14;
  param_1[10] = uVar12;
  param_1[0xc] = uVar3;
  return;
}



/* Entry: 101606d18; end: 101606f7f;  */

void FUN_101606d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a0;
  undefined7 uStack_498;
  undefined1 uStack_491;
  undefined7 uStack_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  undefined1 uStack_479;
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  undefined1 uStack_469;
  undefined7 uStack_468;
  undefined1 uStack_461;
  undefined7 uStack_460;
  undefined1 uStack_459;
  undefined7 uStack_458;
  undefined1 uStack_451;
  undefined7 uStack_450;
  undefined1 uStack_449;
  undefined7 uStack_448;
  undefined1 uStack_441;
  undefined7 uStack_440;
  undefined1 uStack_439;
  undefined7 uStack_438;
  undefined1 uStack_431;
  undefined7 uStack_430;
  undefined1 uStack_429;
  undefined7 uStack_428;
  undefined1 uStack_421;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined1 auStack_300 [344];
  undefined1 auStack_1a8 [344];
  
  func_0x000107c610b4(auStack_300,param_4 + 0x10,0x151);
  func_0x000107c610b4(auStack_1a8,param_4 + 0x10,0x151);
  iVar1 = (int)auStack_300;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_4a0,auStack_1a8,0x150);
    iVar1 = (int)auStack_1a8;
    FUN_10155b330();
    if (iVar1 == 2) {
      puVar2 = &uStack_4a0;
      func_0x000100cb6ab0();
      uVar17 = puVar2[0x27];
      uVar14 = puVar2[0x26];
      uVar10 = puVar2[0x29];
      uVar6 = puVar2[0x28];
      uVar18 = puVar2[0x1e];
      uVar15 = puVar2[0x1d];
      uVar11 = puVar2[0x20];
      uVar7 = puVar2[0x1f];
      uVar3 = puVar2[0x21];
      uVar12 = puVar2[0x23];
      uVar8 = puVar2[0x22];
      uVar19 = puVar2[0x25];
      uVar16 = puVar2[0x24];
      uVar13 = puVar2[0x1c];
      uVar9 = puVar2[0x1b];
      uVar4 = puVar2[0x1a];
      uVar5 = *puVar2;
      func_0x000107c610b4(&uStack_5f8,auStack_300,0x151);
      FUN_101614af8(&uStack_5f8,&uStack_750);
      uStack_338 = puVar2[4];
      uStack_340 = puVar2[3];
      uStack_328 = puVar2[6];
      uStack_330 = puVar2[5];
      uStack_318 = puVar2[8];
      uStack_320 = puVar2[7];
      uStack_310 = *(undefined1 *)(puVar2 + 9);
      uStack_348 = puVar2[2];
      uStack_350 = puVar2[1];
      uStack_708 = puVar2[0x13];
      uStack_710 = puVar2[0x12];
      uStack_6f8 = puVar2[0x15];
      uStack_700 = puVar2[0x14];
      uStack_6e8 = puVar2[0x17];
      uStack_6f0 = puVar2[0x16];
      uStack_6d8 = puVar2[0x19];
      uStack_6e0 = puVar2[0x18];
      uStack_748 = puVar2[0xb];
      uStack_750 = puVar2[10];
      uStack_738 = puVar2[0xd];
      uStack_740 = puVar2[0xc];
      uStack_728 = puVar2[0xf];
      uStack_730 = puVar2[0xe];
      uStack_718 = puVar2[0x11];
      uStack_720 = puVar2[0x10];
      uStack_4f0 = uVar3;
      uStack_528 = uVar4;
      uStack_5f8 = uVar5;
      uStack_4c8 = uVar14;
      uStack_4c0 = uVar17;
      uStack_4b8 = uVar6;
      uStack_4b0 = uVar10;
      uStack_510 = uVar15;
      uStack_508 = uVar18;
      uStack_500 = uVar7;
      uStack_4f8 = uVar11;
      uStack_4d8 = uVar16;
      uStack_4d0 = uVar19;
      uStack_4e8 = uVar8;
      uStack_4e0 = uVar12;
      uStack_520 = uVar9;
      uStack_518 = uVar13;
      goto LAB_101606eb8;
    }
  }
  func_0x0001027f9a4c(&uStack_5f8);
  uStack_708 = uStack_560;
  uStack_710 = uStack_568;
  uStack_6f8 = uStack_550;
  uStack_700 = uStack_558;
  uStack_6e8 = uStack_540;
  uStack_6f0 = uStack_548;
  uStack_6d8 = uStack_530;
  uStack_6e0 = uStack_538;
  uStack_748 = uStack_5a0;
  uStack_750 = uStack_5a8;
  uStack_738 = uStack_590;
  uStack_740 = uStack_598;
  uStack_728 = uStack_580;
  uStack_730 = uStack_588;
  uStack_718 = uStack_570;
  uStack_720 = uStack_578;
  uStack_310 = uStack_5b0;
  uStack_318 = uStack_5b8;
  uStack_320 = uStack_5c0;
  uStack_328 = uStack_5c8;
  uStack_330 = uStack_5d0;
  uStack_348 = uStack_5e8;
  uStack_350 = uStack_5f0;
  uStack_338 = uStack_5d8;
  uStack_340 = uStack_5e0;
LAB_101606eb8:
  uStack_451 = (undefined1)uStack_708;
  uStack_450 = (undefined7)((ulong)uStack_708 >> 8);
  uStack_459 = (undefined1)uStack_710;
  uStack_458 = (undefined7)((ulong)uStack_710 >> 8);
  uStack_441 = (undefined1)uStack_6f8;
  uStack_440 = (undefined7)((ulong)uStack_6f8 >> 8);
  uStack_449 = (undefined1)uStack_700;
  uStack_448 = (undefined7)((ulong)uStack_700 >> 8);
  uStack_431 = (undefined1)uStack_6e8;
  uStack_430 = (undefined7)((ulong)uStack_6e8 >> 8);
  uStack_439 = (undefined1)uStack_6f0;
  uStack_438 = (undefined7)((ulong)uStack_6f0 >> 8);
  uStack_421 = (undefined1)uStack_6d8;
  uStack_429 = (undefined1)uStack_6e0;
  uStack_428 = (undefined7)((ulong)uStack_6e0 >> 8);
  uStack_491 = (undefined1)uStack_748;
  uStack_490 = (undefined7)((ulong)uStack_748 >> 8);
  uStack_4a0._7_1_ = (undefined1)uStack_750;
  uStack_498 = (undefined7)((ulong)uStack_750 >> 8);
  uStack_481 = (undefined1)uStack_738;
  uStack_480 = (undefined7)((ulong)uStack_738 >> 8);
  uStack_489 = (undefined1)uStack_740;
  uStack_488 = (undefined7)((ulong)uStack_740 >> 8);
  uStack_471 = (undefined1)uStack_728;
  uStack_470 = (undefined7)((ulong)uStack_728 >> 8);
  uStack_479 = (undefined1)uStack_730;
  uStack_478 = (undefined7)((ulong)uStack_730 >> 8);
  uStack_461 = (undefined1)uStack_718;
  uStack_460 = (undefined7)((ulong)uStack_718 >> 8);
  uStack_469 = (undefined1)uStack_720;
  uStack_468 = (undefined7)((ulong)uStack_720 >> 8);
  param_1[2] = uStack_348;
  param_1[1] = uStack_350;
  param_1[8] = uStack_318;
  param_1[7] = uStack_320;
  param_1[6] = uStack_328;
  param_1[5] = uStack_330;
  param_1[4] = uStack_338;
  param_1[3] = uStack_340;
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_491,uStack_498);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_4a0._7_1_,(undefined7)uStack_4a0);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_451,uStack_458);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_459,uStack_460);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_461,uStack_468);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_469,uStack_470);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_471,uStack_478);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_479,uStack_480);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_481,uStack_488);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_489,uStack_490);
  param_1[0x19] = uStack_6d8;
  param_1[0x1a] = uStack_528;
  *(ulong *)((long)param_1 + 0xc1) = CONCAT17(uStack_421,uStack_428);
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_429,uStack_430);
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_431,uStack_438);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_439,uStack_440);
  *param_1 = uStack_5f8;
  *(undefined1 *)(param_1 + 9) = uStack_310;
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_441,uStack_448);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_449,uStack_450);
  param_1[0x1c] = uStack_518;
  param_1[0x1b] = uStack_520;
  param_1[0x1e] = uStack_508;
  param_1[0x1d] = uStack_510;
  param_1[0x20] = uStack_4f8;
  param_1[0x1f] = uStack_500;
  param_1[0x21] = uStack_4f0;
  param_1[0x23] = uStack_4e0;
  param_1[0x22] = uStack_4e8;
  param_1[0x25] = uStack_4d0;
  param_1[0x24] = uStack_4d8;
  param_1[0x27] = uStack_4c0;
  param_1[0x26] = uStack_4c8;
  param_1[0x29] = uStack_4b0;
  param_1[0x28] = uStack_4b8;
  return;
}



/* Entry: 101606f80; end: 101607093;  */

void FUN_101606f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_6d8 [336];
  undefined1 auStack_588 [344];
  undefined1 auStack_430 [336];
  undefined1 auStack_2e0 [344];
  undefined1 auStack_188 [344];
  
  func_0x000107c610b4(auStack_2e0,param_4 + 0x10,0x151);
  func_0x000107c610b4(auStack_188,param_4 + 0x10,0x151);
  iVar2 = (int)auStack_2e0;
  FUN_10155b244();
  if (iVar2 != 1) {
    func_0x000107c610b4(auStack_430,auStack_188,0x150);
    iVar2 = (int)auStack_188;
    FUN_10155b330();
    if (iVar2 == 3) {
      pauVar3 = (undefined1 (*) [16])auStack_430;
      func_0x000100cb6ab0();
      pauVar1 = pauVar3 + 1;
      uVar7 = *(undefined8 *)*pauVar1;
      auVar6 = pauVar3[2];
      uVar5 = auVar6._0_8_;
      uVar8 = *(undefined8 *)*pauVar3;
      auVar6 = NEON_ext(auVar6,auVar6,8,1);
      uVar10 = auVar6._0_8_;
      auVar6 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uVar11 = auVar6._0_8_;
      auVar6 = NEON_ext(*pauVar3,*pauVar3,8,1);
      uVar9 = auVar6._0_8_;
      uVar4 = *(undefined8 *)pauVar3[3];
      func_0x000107c610b4(auStack_588,auStack_2e0,0x151);
      FUN_101614af8(auStack_588,auStack_6d8);
      goto LAB_101607068;
    }
  }
  uVar8 = 0;
  uVar4 = 0;
  uVar9 = 0xc000000000000000;
  uVar7 = 0;
  uVar11 = 0;
  uVar5 = 0;
  uVar10 = 0;
LAB_101607068:
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar7;
  param_1[5] = uVar10;
  param_1[4] = uVar5;
  param_1[6] = uVar4;
  return;
}



/* Entry: 101607094; end: 1016070df;  */

undefined1  [16] FUN_101607094(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x168,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x168);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x170));
  return auVar1;
}



/* Entry: 1016070e0; end: 10160719f;  */

undefined8 FUN_1016070e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x1b0,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x1b0);
  uVar2 = *(undefined8 *)(param_3 + 0x1b8);
  lVar3 = *(long *)(param_3 + 0x1c0);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000112db9c28 != -1) {
      func_0x000107c61568(0x112db9c28,FUN_101611608);
    }
    func_0x000107c6157c(uRam0000000112db9c30);
    uVar4 = 0;
  }
  FUN_101615d30(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 1016071a0; end: 10160723f;  */

bool FUN_1016071a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x1b0,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x1b0);
  uVar2 = *(undefined8 *)(param_3 + 0x1b8);
  lVar3 = *(long *)(param_3 + 0x1c0);
  if (lVar3 == 0) {
    FUN_101615d30(uVar1,uVar2,0);
  }
  else {
    FUN_101615d30(uVar1,uVar2,lVar3);
    FUN_10161628c(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  FUN_10161628c(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 101607240; end: 10160741f;  */

void FUN_101607240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [224];
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x1c8),auStack_168,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x270);
  uStack_b0 = *(undefined8 *)(param_4 + 0x268);
  uStack_98 = *(undefined8 *)(param_4 + 0x280);
  uStack_a0 = *(undefined8 *)(param_4 + 0x278);
  uStack_88 = *(undefined8 *)(param_4 + 0x290);
  uStack_90 = *(undefined8 *)(param_4 + 0x288);
  uStack_78 = *(undefined8 *)(param_4 + 0x2a0);
  uStack_80 = *(undefined8 *)(param_4 + 0x298);
  uStack_e8 = *(undefined8 *)(param_4 + 0x230);
  uStack_f0 = *(undefined8 *)(param_4 + 0x228);
  uStack_d8 = *(undefined8 *)(param_4 + 0x240);
  uStack_e0 = *(undefined8 *)(param_4 + 0x238);
  uStack_c8 = *(undefined8 *)(param_4 + 0x250);
  uStack_d0 = *(undefined8 *)(param_4 + 0x248);
  uStack_b8 = *(undefined8 *)(param_4 + 0x260);
  uStack_c0 = *(undefined8 *)(param_4 + 600);
  uStack_128 = *(undefined8 *)(param_4 + 0x1f0);
  uStack_130 = *(undefined8 *)(param_4 + 0x1e8);
  uStack_118 = *(undefined8 *)(param_4 + 0x200);
  uStack_120 = *(undefined8 *)(param_4 + 0x1f8);
  uStack_108 = *(undefined8 *)(param_4 + 0x210);
  uStack_110 = *(undefined8 *)(param_4 + 0x208);
  uStack_f8 = *(undefined8 *)(param_4 + 0x220);
  uStack_100 = *(undefined8 *)(param_4 + 0x218);
  uStack_148 = *(undefined8 *)(param_4 + 0x1d0);
  uStack_150 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_138 = *(undefined8 *)(param_4 + 0x1e0);
  uStack_140 = *(undefined8 *)(param_4 + 0x1d8);
  iVar1 = (int)&uStack_150;
  func_0x000101614bf4();
  if (iVar1 == 1) {
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0xc000000000000000;
    uStack_290 = 0;
    uStack_278 = 0xc000000000000000;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 1;
    uVar10 = 1;
    bVar3 = 0;
    bVar2 = 0;
  }
  else {
    uStack_288 = uStack_110;
    uStack_290 = uStack_118;
    uStack_278 = uStack_120;
    uStack_280 = uStack_128;
    uStack_268 = uStack_f0;
    uStack_270 = uStack_f8;
    uStack_258 = uStack_100;
    uStack_260 = uStack_108;
    uStack_2a8 = uStack_d0;
    uStack_2b0 = uStack_d8;
    uStack_298 = uStack_e0;
    uStack_2a0 = uStack_e8;
    uStack_2c8 = uStack_b0;
    uStack_2d0 = uStack_b8;
    uStack_2b8 = uStack_c0;
    uStack_2c0 = uStack_c8;
    uStack_2e8 = uStack_90;
    uStack_2f0 = uStack_98;
    uStack_2d8 = uStack_a0;
    uStack_2e0 = uStack_a8;
    uStack_250 = uStack_88;
    uVar4 = uStack_150;
    uVar5 = uStack_80;
    uVar6 = uStack_148;
    uVar7 = uStack_78;
    uVar8 = uStack_138;
    uVar9 = (undefined1)uStack_140;
    uVar10 = (undefined1)uStack_130;
    bVar3 = uStack_140._1_1_;
    bVar2 = uStack_140._2_1_;
  }
  FUN_10161538c(&uStack_150,auStack_248,0x112db9c38,&UNK_10d96c738);
  *param_1 = uVar4;
  param_1[1] = uVar6;
  *(undefined1 *)(param_1 + 2) = uVar9;
  *(byte *)((long)param_1 + 0x11) = bVar3 & 1;
  *(byte *)((long)param_1 + 0x12) = bVar2 & 1;
  param_1[3] = uVar8;
  *(undefined1 *)(param_1 + 4) = uVar10;
  param_1[8] = uStack_288;
  param_1[7] = uStack_290;
  param_1[6] = uStack_278;
  param_1[5] = uStack_280;
  param_1[0xc] = uStack_268;
  param_1[0xb] = uStack_270;
  param_1[10] = uStack_258;
  param_1[9] = uStack_260;
  param_1[0x10] = uStack_2a8;
  param_1[0xf] = uStack_2b0;
  param_1[0xe] = uStack_298;
  param_1[0xd] = uStack_2a0;
  param_1[0x14] = uStack_2c8;
  param_1[0x13] = uStack_2d0;
  param_1[0x12] = uStack_2b8;
  param_1[0x11] = uStack_2c0;
  param_1[0x18] = uStack_2e8;
  param_1[0x17] = uStack_2f0;
  param_1[0x16] = uStack_2d8;
  param_1[0x15] = uStack_2e0;
  param_1[0x19] = uStack_250;
  param_1[0x1a] = uVar5;
  param_1[0x1b] = uVar7;
  return;
}



/* Entry: 101607420; end: 1016080a3;  */

uint FUN_101607420(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_910 [224];
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428((undefined8 *)(param_3 + 0x1c8),auStack_2e8,0,0);
  uStack_148 = *(undefined8 *)(param_3 + 0x270);
  uStack_150 = *(undefined8 *)(param_3 + 0x268);
  uStack_138 = *(undefined8 *)(param_3 + 0x280);
  uStack_140 = *(undefined8 *)(param_3 + 0x278);
  uStack_128 = *(undefined8 *)(param_3 + 0x290);
  uStack_130 = *(undefined8 *)(param_3 + 0x288);
  uStack_118 = *(undefined8 *)(param_3 + 0x2a0);
  uStack_120 = *(undefined8 *)(param_3 + 0x298);
  uStack_188 = *(undefined8 *)(param_3 + 0x230);
  uStack_190 = *(undefined8 *)(param_3 + 0x228);
  uStack_178 = *(undefined8 *)(param_3 + 0x240);
  uStack_180 = *(undefined8 *)(param_3 + 0x238);
  uStack_168 = *(undefined8 *)(param_3 + 0x250);
  uStack_170 = *(undefined8 *)(param_3 + 0x248);
  uStack_158 = *(undefined8 *)(param_3 + 0x260);
  uStack_160 = *(undefined8 *)(param_3 + 600);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x1f0);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x1e8);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x200);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x1f8);
  uStack_1a8 = *(undefined8 *)(param_3 + 0x210);
  uStack_1b0 = *(undefined8 *)(param_3 + 0x208);
  uStack_198 = *(undefined8 *)(param_3 + 0x220);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x218);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x1d0);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x1c8);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x1e0);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x1d8);
  func_0x000101614c18(&uStack_110);
  uStack_408 = uStack_148;
  uStack_410 = uStack_150;
  uStack_3f8 = uStack_138;
  uStack_400 = uStack_140;
  uStack_3e8 = uStack_128;
  uStack_3f0 = uStack_130;
  uStack_3d8 = uStack_118;
  uStack_3e0 = uStack_120;
  uStack_448 = uStack_188;
  uStack_450 = uStack_190;
  uStack_438 = uStack_178;
  uStack_440 = uStack_180;
  uStack_428 = uStack_168;
  uStack_430 = uStack_170;
  uStack_418 = uStack_158;
  uStack_420 = uStack_160;
  uStack_488 = uStack_1c8;
  uStack_490 = uStack_1d0;
  uStack_478 = uStack_1b8;
  uStack_480 = uStack_1c0;
  uStack_468 = uStack_1a8;
  uStack_470 = uStack_1b0;
  uStack_458 = uStack_198;
  uStack_460 = uStack_1a0;
  uStack_4a8 = uStack_1e8;
  uStack_4b0 = uStack_1f0;
  uStack_498 = uStack_1d8;
  uStack_4a0 = uStack_1e0;
  uStack_328 = uStack_68;
  uStack_330 = uStack_70;
  uStack_318 = uStack_58;
  uStack_320 = uStack_60;
  uStack_308 = uStack_48;
  uStack_310 = uStack_50;
  uStack_2f8 = uStack_38;
  uStack_300 = uStack_40;
  uStack_368 = uStack_a8;
  uStack_370 = uStack_b0;
  uStack_358 = uStack_98;
  uStack_360 = uStack_a0;
  uStack_348 = uStack_88;
  uStack_350 = uStack_90;
  uStack_338 = uStack_78;
  uStack_340 = uStack_80;
  uStack_3a8 = uStack_e8;
  uStack_3b0 = uStack_f0;
  uStack_398 = uStack_d8;
  uStack_3a0 = uStack_e0;
  uStack_388 = uStack_c8;
  uStack_390 = uStack_d0;
  uStack_378 = uStack_b8;
  uStack_380 = uStack_c0;
  uStack_3c8 = uStack_108;
  uStack_3d0 = uStack_110;
  uStack_3b8 = uStack_f8;
  uStack_3c0 = uStack_100;
  iVar1 = (int)&uStack_4b0;
  func_0x000101614bf4();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_3d0;
    func_0x000101614bf4();
    if (iVar1 == 1) {
      uStack_5c8 = uStack_408;
      uStack_5d0 = uStack_410;
      uStack_5b8 = uStack_3f8;
      uStack_5c0 = uStack_400;
      uStack_5a8 = uStack_3e8;
      uStack_5b0 = uStack_3f0;
      uStack_598 = uStack_3d8;
      uStack_5a0 = uStack_3e0;
      uStack_608 = uStack_448;
      uStack_610 = uStack_450;
      uStack_5f8 = uStack_438;
      uStack_600 = uStack_440;
      uStack_5e8 = uStack_428;
      uStack_5f0 = uStack_430;
      uStack_5d8 = uStack_418;
      uStack_5e0 = uStack_420;
      uStack_648 = uStack_488;
      uStack_650 = uStack_490;
      uStack_638 = uStack_478;
      uStack_640 = uStack_480;
      uStack_628 = uStack_468;
      uStack_630 = uStack_470;
      uStack_618 = uStack_458;
      uStack_620 = uStack_460;
      uStack_668 = uStack_4a8;
      uStack_670 = uStack_4b0;
      uStack_658 = uStack_498;
      uStack_660 = uStack_4a0;
      FUN_10161538c(&uStack_1f0,&uStack_2d0,0x112db9c38,&UNK_10d96c738);
      FUN_101618830(&uStack_670,0x112db9c38,&UNK_10d96c738);
      uVar3 = 0;
      goto LAB_101607814;
    }
  }
  else {
    uStack_6a8 = uStack_408;
    uStack_6b0 = uStack_410;
    uStack_698 = uStack_3f8;
    uStack_6a0 = uStack_400;
    uStack_688 = uStack_3e8;
    uStack_690 = uStack_3f0;
    uStack_678 = uStack_3d8;
    uStack_680 = uStack_3e0;
    uStack_6e8 = uStack_448;
    uStack_6f0 = uStack_450;
    uStack_6d8 = uStack_438;
    uStack_6e0 = uStack_440;
    uStack_6c8 = uStack_428;
    uStack_6d0 = uStack_430;
    uStack_6b8 = uStack_418;
    uStack_6c0 = uStack_420;
    uStack_728 = uStack_488;
    uStack_730 = uStack_490;
    uStack_718 = uStack_478;
    uStack_720 = uStack_480;
    uStack_708 = uStack_468;
    uStack_710 = uStack_470;
    uStack_6f8 = uStack_458;
    uStack_700 = uStack_460;
    uStack_748 = uStack_4a8;
    uStack_750 = uStack_4b0;
    uStack_738 = uStack_498;
    uStack_740 = uStack_4a0;
    iVar1 = (int)&uStack_3d0;
    func_0x000101614bf4();
    if (iVar1 != 1) {
      uStack_788 = uStack_328;
      uStack_790 = uStack_330;
      uStack_778 = uStack_318;
      uStack_780 = uStack_320;
      uStack_768 = uStack_308;
      uStack_770 = uStack_310;
      uStack_758 = uStack_2f8;
      uStack_760 = uStack_300;
      uStack_7c8 = uStack_368;
      uStack_7d0 = uStack_370;
      uStack_7b8 = uStack_358;
      uStack_7c0 = uStack_360;
      uStack_7a8 = uStack_348;
      uStack_7b0 = uStack_350;
      uStack_798 = uStack_338;
      uStack_7a0 = uStack_340;
      uStack_808 = uStack_3a8;
      uStack_810 = uStack_3b0;
      uStack_7f8 = uStack_398;
      uStack_800 = uStack_3a0;
      uStack_7e8 = uStack_388;
      uStack_7f0 = uStack_390;
      uStack_7d8 = uStack_378;
      uStack_7e0 = uStack_380;
      uStack_828 = uStack_3c8;
      uStack_830 = uStack_3d0;
      uStack_818 = uStack_3b8;
      uStack_820 = uStack_3c0;
      uStack_5c8 = uStack_328;
      uStack_5d0 = uStack_330;
      uStack_5b8 = uStack_318;
      uStack_5c0 = uStack_320;
      uStack_5a8 = uStack_308;
      uStack_5b0 = uStack_310;
      uStack_598 = uStack_2f8;
      uStack_5a0 = uStack_300;
      uStack_608 = uStack_368;
      uStack_610 = uStack_370;
      uStack_5f8 = uStack_358;
      uStack_600 = uStack_360;
      uStack_5e8 = uStack_348;
      uStack_5f0 = uStack_350;
      uStack_5d8 = uStack_338;
      uStack_5e0 = uStack_340;
      uStack_648 = uStack_3a8;
      uStack_650 = uStack_3b0;
      uStack_638 = uStack_398;
      uStack_640 = uStack_3a0;
      uStack_628 = uStack_388;
      uStack_630 = uStack_390;
      uStack_618 = uStack_378;
      uStack_620 = uStack_380;
      uStack_668 = uStack_3c8;
      uStack_670 = uStack_3d0;
      uStack_658 = uStack_3b8;
      uStack_660 = uStack_3c0;
      uStack_228 = uStack_6a8;
      uStack_230 = uStack_6b0;
      uStack_218 = uStack_698;
      uStack_220 = uStack_6a0;
      uStack_208 = uStack_688;
      uStack_210 = uStack_690;
      uStack_1f8 = uStack_678;
      uStack_200 = uStack_680;
      uStack_268 = uStack_6e8;
      uStack_270 = uStack_6f0;
      uStack_258 = uStack_6d8;
      uStack_260 = uStack_6e0;
      uStack_248 = uStack_6c8;
      uStack_250 = uStack_6d0;
      uStack_238 = uStack_6b8;
      uStack_240 = uStack_6c0;
      uStack_2a8 = uStack_728;
      uStack_2b0 = uStack_730;
      uStack_298 = uStack_718;
      uStack_2a0 = uStack_720;
      uStack_288 = uStack_708;
      uStack_290 = uStack_710;
      uStack_278 = uStack_6f8;
      uStack_280 = uStack_700;
      uStack_2c8 = uStack_748;
      uStack_2d0 = uStack_750;
      uStack_2b8 = uStack_738;
      uStack_2c0 = uStack_740;
      FUN_10161538c(&uStack_1f0,auStack_910,0x112db9c38,&UNK_10d96c738);
      FUN_10161538c(&uStack_1f0,auStack_910,0x112db9c38,&UNK_10d96c738);
      puVar2 = &uStack_2d0;
      FUN_101623a48(puVar2,&uStack_670);
      FUN_101618830(&uStack_1f0,0x112db9c38,&UNK_10d96c738);
      FUN_101618830(&uStack_830,0x112db9c38,&UNK_10d96c738);
      FUN_101618830(&uStack_4b0,0x112db9c38,&UNK_10d96c738);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_101607814;
    }
  }
  func_0x000107c610b4(&uStack_670,&uStack_4b0,0x1c0);
  FUN_10161538c(&uStack_1f0,&uStack_2d0,0x112db9c38,&UNK_10d96c738);
  FUN_101618830(&uStack_670,0x112db9c40,&UNK_10d96c740);
  uVar3 = 1;
LAB_101607814:
  return uVar3 & 1;
}



/* Entry: 1016080a4; end: 101608207;  */

void FUN_1016080a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  undefined4 uStack_b0;
  undefined3 uStack_ac;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x528),auStack_d0,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x530);
  uStack_a0 = *(undefined8 *)(param_4 + 0x528);
  uStack_88 = *(undefined8 *)(param_4 + 0x540);
  uStack_90 = *(undefined8 *)(param_4 + 0x538);
  uStack_78 = *(undefined8 *)(param_4 + 0x550);
  uStack_80 = *(undefined8 *)(param_4 + 0x548);
  uStack_68 = *(ulong *)(param_4 + 0x560);
  uStack_70 = *(undefined8 *)(param_4 + 0x558);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x534) >> 8);
    uStack_a8 = *(undefined4 *)(param_4 + 0x531);
    uStack_ac = (undefined3)((uint)*(undefined4 *)(param_4 + 0x544) >> 8);
    uStack_b0 = *(undefined4 *)(param_4 + 0x541);
    uStack_b4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x554) >> 8);
    uStack_b8 = *(undefined4 *)(param_4 + 0x551);
    uVar1 = uStack_70;
    uVar2 = uStack_68;
    uVar3 = uStack_a0;
    uVar4 = uStack_90;
    uVar6 = uStack_80;
    uVar5 = (undefined1)uStack_98;
    uVar7 = (undefined1)uStack_88;
    uVar8 = (undefined1)uStack_78;
  }
  else {
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar7 = 1;
    uVar8 = 1;
  }
  FUN_10161538c(&uStack_a0,auStack_110,0x112db9c68,&UNK_10d96c768);
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((long)param_1 + 9) = uStack_a8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_a4,uStack_a8._3_1_);
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_b0;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_ac,uStack_b0._3_1_);
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar8;
  *(uint *)((long)param_1 + 0x2c) = CONCAT31(uStack_b4,uStack_b8._3_1_);
  *(undefined4 *)((long)param_1 + 0x29) = uStack_b8;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}



/* Entry: 101608208; end: 101608447;  */

undefined8 FUN_101608208(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x568,auStack_48,0,0);
  uVar1 = 0;
  if (*(long *)(param_3 + 0x570) != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x568);
  }
  FUN_101597350();
  return uVar1;
}



/* Entry: 101608448; end: 10160855b;  */

void FUN_101608448(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_4 + 0x5a0,auStack_d8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x5c8);
  lStack_a0 = *(long *)(param_4 + 0x5c0);
  uStack_88 = *(undefined8 *)(param_4 + 0x5d8);
  uStack_90 = *(undefined8 *)(param_4 + 0x5d0);
  uStack_78 = *(undefined8 *)(param_4 + 0x5e8);
  uStack_80 = *(undefined8 *)(param_4 + 0x5e0);
  uStack_70 = *(undefined8 *)(param_4 + 0x5f0);
  uStack_b8 = *(undefined8 *)(param_4 + 0x5a8);
  uStack_c0 = *(undefined8 *)(param_4 + 0x5a0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x5b8);
  uStack_b0 = *(undefined8 *)(param_4 + 0x5b0);
  if (lStack_a0 == 1) {
    bVar1 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    lVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    bVar1 = (byte)uStack_c0;
    lVar2 = lStack_a0;
    uVar3 = uStack_70;
    uVar4 = uStack_98;
    uVar5 = uStack_90;
    uVar6 = uStack_88;
    uVar7 = uStack_b0;
    uVar8 = uStack_80;
    uVar9 = uStack_78;
    uStack_140 = uStack_a8;
    uStack_138 = uStack_b8;
  }
  FUN_10161538c(&uStack_c0,auStack_130,0x112db9c78,&UNK_10d96c778);
  *param_1 = bVar1 & 1;
  *(undefined8 *)(param_1 + 8) = uStack_138;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uStack_140;
  *(long *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  return;
}



/* Entry: 10160855c; end: 1016086b3;  */

bool FUN_10160855c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_1c8 [88];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)(param_3 + 0x5a0);
  func_0x000107c61428(puVar1,auStack_b8,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x5c8);
  lVar4 = *(long *)(param_3 + 0x5c0);
  uStack_68 = *(undefined8 *)(param_3 + 0x5d8);
  uStack_70 = *(undefined8 *)(param_3 + 0x5d0);
  uStack_58 = *(undefined8 *)(param_3 + 0x5e8);
  uStack_60 = *(undefined8 *)(param_3 + 0x5e0);
  uStack_50 = *(undefined8 *)(param_3 + 0x5f0);
  uStack_98 = *(undefined8 *)(param_3 + 0x5a8);
  uStack_a0 = *(undefined8 *)(param_3 + 0x5a0);
  uStack_88 = *(undefined8 *)(param_3 + 0x5b8);
  uStack_90 = *(undefined8 *)(param_3 + 0x5b0);
  lStack_80 = lVar4;
  if (lVar4 == 1) {
    uStack_168 = *(undefined8 *)(param_3 + 0x5a8);
    uStack_170 = *puVar1;
    uStack_158 = *(undefined8 *)(param_3 + 0x5b8);
    uStack_160 = *(undefined8 *)(param_3 + 0x5b0);
    lStack_150 = 1;
    uStack_140 = *(undefined8 *)(param_3 + 0x5d0);
    uStack_148 = *(undefined8 *)(param_3 + 0x5c8);
    uStack_130 = *(undefined8 *)(param_3 + 0x5e0);
    uStack_138 = *(undefined8 *)(param_3 + 0x5d8);
    uStack_120 = *(undefined8 *)(param_3 + 0x5f0);
    uStack_128 = *(undefined8 *)(param_3 + 0x5e8);
    uVar2 = 0x112db9c78;
    puVar3 = &UNK_10d96c778;
    FUN_10161538c(&uStack_a0,auStack_1c8,0x112db9c78,&UNK_10d96c778);
  }
  else {
    uStack_168 = *(undefined8 *)(param_3 + 0x5a8);
    uStack_170 = *puVar1;
    uStack_158 = *(undefined8 *)(param_3 + 0x5b8);
    uStack_160 = *(undefined8 *)(param_3 + 0x5b0);
    uStack_140 = *(undefined8 *)(param_3 + 0x5d0);
    uStack_148 = *(undefined8 *)(param_3 + 0x5c8);
    uStack_130 = *(undefined8 *)(param_3 + 0x5e0);
    uStack_138 = *(undefined8 *)(param_3 + 0x5d8);
    uStack_120 = *(undefined8 *)(param_3 + 0x5f0);
    uStack_128 = *(undefined8 *)(param_3 + 0x5e8);
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f8 = 1;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_150 = lVar4;
    FUN_10161538c(&uStack_a0,auStack_1c8,0x112db9c78,&UNK_10d96c778);
    uVar2 = 0x112db9c80;
    puVar3 = &UNK_10d96c780;
  }
  FUN_101618830(&uStack_170,uVar2,puVar3);
  return lVar4 != 1;
}



/* Entry: 1016086b4; end: 1016087b7;  */

undefined4 FUN_1016086b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x620,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x630) >> 0x3c < 0xf) {
    uVar1 = (undefined4)*(undefined8 *)(param_3 + 0x620);
  }
  func_0x000100cb6ae8();
  return uVar1;
}



/* Entry: 1016087b8; end: 1016088af;  */

void FUN_1016087b8(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61428((ulong *)(param_4 + 0x638),auStack_a8,0,0);
  uStack_88 = *(undefined8 *)(param_4 + 0x640);
  uStack_90 = *(ulong *)(param_4 + 0x638);
  uStack_78 = *(undefined8 *)(param_4 + 0x650);
  uStack_80 = *(undefined8 *)(param_4 + 0x648);
  uStack_68 = *(undefined8 *)(param_4 + 0x660);
  uStack_70 = *(undefined8 *)(param_4 + 0x658);
  uStack_58 = *(undefined8 *)(param_4 + 0x670);
  uStack_60 = *(undefined8 *)(param_4 + 0x668);
  if ((uStack_90 & 0xff) == 2) {
    uVar2 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0xc000000000000000;
    uStack_100 = 0;
    uVar1 = 0;
    uVar3 = 0xf000000000000000;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = (undefined4)(uStack_90 >> 0x20);
    uVar1 = uStack_90;
    uVar3 = uStack_58;
    uVar4 = uStack_88;
    uVar5 = uStack_80;
    uStack_110 = uStack_68;
    uStack_108 = uStack_60;
    uStack_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  FUN_10161538c(&uStack_90,auStack_e8,0x112db9c88,&UNK_10d96c788);
  *param_1 = (byte)uVar1 & 1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uStack_108;
  *(undefined8 *)(param_1 + 0x28) = uStack_110;
  *(undefined8 *)(param_1 + 0x20) = uStack_f8;
  *(undefined8 *)(param_1 + 0x18) = uStack_100;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  return;
}



/* Entry: 1016088b0; end: 1016089eb;  */

bool FUN_1016088b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_158 [64];
  ulong uStack_118;
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
  undefined1 auStack_98 [24];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428((ulong *)(param_3 + 0x638),auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x640);
  uStack_118 = *(ulong *)(param_3 + 0x638);
  uStack_68 = *(undefined8 *)(param_3 + 0x650);
  uStack_70 = *(undefined8 *)(param_3 + 0x648);
  uStack_58 = *(undefined8 *)(param_3 + 0x660);
  uStack_60 = *(undefined8 *)(param_3 + 0x658);
  uStack_48 = *(undefined8 *)(param_3 + 0x670);
  uStack_50 = *(undefined8 *)(param_3 + 0x668);
  uVar3 = uStack_118 & 0xff;
  uStack_80 = uStack_118;
  if (uVar3 == 2) {
    uStack_108 = *(undefined8 *)(param_3 + 0x648);
    uStack_110 = *(undefined8 *)(param_3 + 0x640);
    uStack_f8 = *(undefined8 *)(param_3 + 0x658);
    uStack_100 = *(undefined8 *)(param_3 + 0x650);
    uStack_e8 = *(undefined8 *)(param_3 + 0x668);
    uStack_f0 = *(undefined8 *)(param_3 + 0x660);
    uStack_e0 = *(undefined8 *)(param_3 + 0x670);
    uVar1 = 0x112db9c88;
    puVar2 = &UNK_10d96c788;
    FUN_10161538c(&uStack_80,auStack_158,0x112db9c88,&UNK_10d96c788);
  }
  else {
    uStack_108 = *(undefined8 *)(param_3 + 0x648);
    uStack_110 = *(undefined8 *)(param_3 + 0x640);
    uStack_f8 = *(undefined8 *)(param_3 + 0x658);
    uStack_100 = *(undefined8 *)(param_3 + 0x650);
    uStack_e8 = *(undefined8 *)(param_3 + 0x668);
    uStack_f0 = *(undefined8 *)(param_3 + 0x660);
    uStack_e0 = *(undefined8 *)(param_3 + 0x670);
    uStack_d8 = 2;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    FUN_10161538c(&uStack_80,auStack_158,0x112db9c88,&UNK_10d96c788);
    uVar1 = 0x112db9c90;
    puVar2 = &UNK_10d96c790;
  }
  FUN_101618830(&uStack_118,uVar1,puVar2);
  return uVar3 != 2;
}



/* Entry: 1016089ec; end: 101608a93;  */

void FUN_1016089ec(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x678,auStack_68,0,0);
  uVar7 = *(ulong *)(param_4 + 0x688) >> 0x3c;
  uVar6 = 0;
  if (uVar7 < 0xf) {
    uVar6 = (undefined4)*(undefined8 *)(param_4 + 0x678);
  }
  uVar1 = 0;
  if (uVar7 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0x680);
  }
  uVar2 = 0xc000000000000000;
  if (uVar7 < 0xf) {
    uVar2 = *(ulong *)(param_4 + 0x688);
  }
  uVar3 = 0;
  if (uVar7 < 0xf) {
    uVar3 = *(undefined8 *)(param_4 + 0x690);
  }
  uVar4 = 0;
  if (uVar7 < 0xf) {
    uVar4 = *(undefined8 *)(param_4 + 0x698);
  }
  uVar5 = 0xf000000000000000;
  if (uVar7 < 0xf) {
    uVar5 = *(undefined8 *)(param_4 + 0x6a0);
  }
  FUN_101614ce8();
  *param_1 = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(ulong *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 10) = uVar5;
  return;
}



/* Entry: 101608a94; end: 101608b5b;  */

bool FUN_101608a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x678,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x678);
  uVar3 = *(undefined8 *)(param_3 + 0x680);
  uVar4 = *(ulong *)(param_3 + 0x688);
  uVar5 = *(undefined8 *)(param_3 + 0x690);
  uVar6 = *(undefined8 *)(param_3 + 0x698);
  uVar1 = *(undefined8 *)(param_3 + 0x6a0);
  FUN_101614ce8(uVar2,uVar3,uVar4,uVar5,uVar6,uVar1);
  func_0x000101614d3c(uVar2,uVar3,uVar4,uVar5,uVar6,uVar1);
  if (uVar4 >> 0x3c < 0xf) {
    func_0x000101614d3c(0,0,0xf000000000000000,0,0,0);
  }
  return uVar4 >> 0x3c < 0xf;
}



/* Entry: 101608b5c; end: 101609043;  */

void FUN_101608b5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [184];
  undefined1 auStack_118 [24];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x6a8),auStack_118,0,0);
  uStack_78 = *(undefined8 *)(param_4 + 0x730);
  uStack_80 = *(undefined8 *)(param_4 + 0x728);
  uStack_68 = *(undefined8 *)(param_4 + 0x740);
  uStack_70 = *(undefined8 *)(param_4 + 0x738);
  uStack_58 = *(undefined8 *)(param_4 + 0x750);
  uStack_60 = *(undefined8 *)(param_4 + 0x748);
  uStack_50 = *(undefined8 *)(param_4 + 0x758);
  uStack_b8 = *(undefined8 *)(param_4 + 0x6f0);
  uStack_c0 = *(undefined8 *)(param_4 + 0x6e8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x700);
  uStack_b0 = *(undefined8 *)(param_4 + 0x6f8);
  uStack_98 = *(undefined8 *)(param_4 + 0x710);
  uStack_a0 = *(undefined8 *)(param_4 + 0x708);
  uStack_88 = *(undefined8 *)(param_4 + 0x720);
  uStack_90 = *(undefined8 *)(param_4 + 0x718);
  uStack_f8 = *(undefined8 *)(param_4 + 0x6b0);
  uStack_100 = *(undefined8 *)(param_4 + 0x6a8);
  uStack_e8 = *(undefined8 *)(param_4 + 0x6c0);
  uStack_f0 = *(undefined8 *)(param_4 + 0x6b8);
  uStack_d8 = *(undefined8 *)(param_4 + 0x6d0);
  uStack_e0 = *(undefined8 *)(param_4 + 0x6c8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x6e0);
  uStack_d0 = *(undefined8 *)(param_4 + 0x6d8);
  iVar1 = (int)&uStack_100;
  FUN_101614fc4();
  if (iVar1 == 1) {
    uStack_1d8 = 0;
    uStack_1e0 = 0xf000000000000000;
    uStack_1e8 = 0;
    uStack_1f0 = 2;
    uStack_1f8 = 0xf000000000000000;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0xc000000000000000;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 1;
  }
  else {
    uStack_208 = uStack_e8;
    uStack_210 = uStack_f0;
    uStack_1f8 = uStack_d8;
    uStack_200 = uStack_e0;
    uStack_228 = uStack_b8;
    uStack_230 = uStack_c0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_1d8 = uStack_78;
    uStack_1e0 = uStack_80;
    uStack_248 = uStack_88;
    uStack_250 = uStack_90;
    uStack_238 = uStack_a8;
    uStack_240 = uStack_b0;
    uStack_268 = uStack_58;
    uStack_270 = uStack_60;
    uStack_258 = uStack_68;
    uStack_260 = uStack_70;
    uVar2 = uStack_100;
    uVar3 = uStack_50;
    uVar4 = (undefined1)uStack_f8;
  }
  FUN_10161538c(&uStack_100,auStack_1d0,0x112db9c98,&UNK_10d96c798);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar4;
  param_1[3] = uStack_208;
  param_1[2] = uStack_210;
  param_1[5] = uStack_1f8;
  param_1[4] = uStack_200;
  param_1[7] = uStack_218;
  param_1[6] = uStack_220;
  param_1[9] = uStack_228;
  param_1[8] = uStack_230;
  param_1[0xb] = uStack_238;
  param_1[10] = uStack_240;
  param_1[0xd] = uStack_1e8;
  param_1[0xc] = uStack_1f0;
  param_1[0xf] = uStack_248;
  param_1[0xe] = uStack_250;
  param_1[0x11] = uStack_1d8;
  param_1[0x10] = uStack_1e0;
  param_1[0x13] = uStack_258;
  param_1[0x12] = uStack_260;
  param_1[0x15] = uStack_268;
  param_1[0x14] = uStack_270;
  param_1[0x16] = uVar3;
  return;
}



/* Entry: 101609044; end: 1016090d3;  */

undefined4 FUN_101609044(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x760,auStack_38,0,0);
  return *(undefined4 *)(param_3 + 0x760);
}



/* Entry: 1016090d4; end: 10160918b;  */

void FUN_1016090d4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  uVar9 = *(ulong *)(param_4 + 0x28) >> 0x3c;
  uVar6 = 0;
  if (uVar9 < 0xf) {
    uVar6 = (undefined4)*(undefined8 *)(param_4 + 0x10);
  }
  uVar8 = 0;
  if (uVar9 < 0xf) {
    uVar8 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
  }
  uVar7 = 0;
  if (uVar9 < 0xf) {
    uVar7 = (undefined4)*(undefined8 *)(param_4 + 0x18);
  }
  uVar1 = 0;
  if (uVar9 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
  }
  uVar2 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar2 = *(ulong *)(param_4 + 0x28);
  }
  uVar3 = 0;
  if (uVar9 < 0xf) {
    uVar3 = *(undefined8 *)(param_4 + 0x30);
  }
  uVar4 = 0;
  if (uVar9 < 0xf) {
    uVar4 = *(undefined8 *)(param_4 + 0x38);
  }
  uVar5 = 0xf000000000000000;
  if (uVar9 < 0xf) {
    uVar5 = *(undefined8 *)(param_4 + 0x40);
  }
  FUN_10155b840();
  *param_1 = uVar6;
  param_1[1] = uVar8;
  param_1[2] = uVar7;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(ulong *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  return;
}



/* Entry: 10160918c; end: 10160925f;  */

bool FUN_10160918c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = *(ulong *)(param_3 + 0x28);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  FUN_10155b840(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  FUN_101593c1c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  if (uVar5 >> 0x3c < 0xf) {
    FUN_101593c1c(0,0,0,0xf000000000000000,0,0,0);
  }
  return uVar5 >> 0x3c < 0xf;
}



/* Entry: 101609260; end: 101609317;  */

void FUN_101609260(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x48,auStack_78,0,0);
  uVar9 = *(ulong *)(param_4 + 0x60) >> 0x3c;
  uVar6 = 0;
  if (uVar9 < 0xf) {
    uVar6 = (undefined4)*(undefined8 *)(param_4 + 0x48);
  }
  uVar8 = 0;
  if (uVar9 < 0xf) {
    uVar8 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  }
  uVar7 = 0;
  if (uVar9 < 0xf) {
    uVar7 = (undefined4)*(undefined8 *)(param_4 + 0x50);
  }
  uVar1 = 0;
  if (uVar9 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0x58);
  }
  uVar2 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar2 = *(ulong *)(param_4 + 0x60);
  }
  uVar3 = 0;
  if (uVar9 < 0xf) {
    uVar3 = *(undefined8 *)(param_4 + 0x68);
  }
  uVar4 = 0;
  if (uVar9 < 0xf) {
    uVar4 = *(undefined8 *)(param_4 + 0x70);
  }
  uVar5 = 0xf000000000000000;
  if (uVar9 < 0xf) {
    uVar5 = *(undefined8 *)(param_4 + 0x78);
  }
  FUN_10155b840();
  *param_1 = uVar6;
  param_1[1] = uVar8;
  param_1[2] = uVar7;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(ulong *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  return;
}



/* Entry: 101609318; end: 1016093eb;  */

bool FUN_101609318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x48,auStack_68,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  uVar4 = *(undefined8 *)(param_3 + 0x50);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  uVar5 = *(ulong *)(param_3 + 0x60);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  uVar6 = *(undefined8 *)(param_3 + 0x70);
  uVar7 = *(undefined8 *)(param_3 + 0x78);
  FUN_10155b840(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  FUN_101593c1c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  if (uVar5 >> 0x3c < 0xf) {
    FUN_101593c1c(0,0,0,0xf000000000000000,0,0,0);
  }
  return uVar5 >> 0x3c < 0xf;
}



/* Entry: 1016093ec; end: 1016096df;  */

undefined8 FUN_1016093ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x80,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x90) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x80);
  }
  func_0x000100cb6ae8();
  return uVar1;
}



/* Entry: 1016096e0; end: 101609757;  */

undefined4 FUN_1016096e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 200,auStack_38,0,0);
  return *(undefined4 *)(param_3 + 200);
}



/* Entry: 101609758; end: 10160994f;  */

uint FUN_101609758(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0xd0,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0xd0);
  FUN_101541460(uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 101609950; end: 101609cc7;  */

void FUN_101609950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_530 [320];
  undefined8 auStack_3f0 [40];
  undefined1 auStack_2b0 [320];
  undefined1 auStack_170 [320];
  
  func_0x000107c610b4(auStack_2b0,param_4 + 0x100,0x140);
  func_0x000107c610b4(auStack_170,param_4 + 0x100,0x140);
  iVar1 = (int)auStack_2b0;
  FUN_10161529c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_3f0,auStack_170,0x140);
    iVar1 = (int)auStack_170;
    func_0x0001016152e8();
    if (iVar1 != 1) {
      puVar2 = auStack_3f0;
      func_0x000100cb6b20();
      uVar7 = puVar2[5];
      uVar4 = puVar2[4];
      uVar6 = puVar2[7];
      uVar3 = puVar2[6];
      uVar8 = puVar2[1];
      uVar5 = *puVar2;
      uVar10 = puVar2[3];
      uVar9 = puVar2[2];
      func_0x000107c610b4(auStack_530,auStack_2b0,0x140);
      FUN_1016152f4(auStack_530,&uStack_670);
      uStack_5a8 = puVar2[0x21];
      uStack_5b0 = puVar2[0x20];
      uStack_598 = puVar2[0x23];
      uStack_5a0 = puVar2[0x22];
      uStack_588 = puVar2[0x25];
      uStack_590 = puVar2[0x24];
      uStack_578 = puVar2[0x27];
      uStack_580 = puVar2[0x26];
      uStack_5e8 = puVar2[0x19];
      uStack_5f0 = puVar2[0x18];
      uStack_5d8 = puVar2[0x1b];
      uStack_5e0 = puVar2[0x1a];
      uStack_5c8 = puVar2[0x1d];
      uStack_5d0 = puVar2[0x1c];
      uStack_5b8 = puVar2[0x1f];
      uStack_5c0 = puVar2[0x1e];
      uStack_628 = puVar2[0x11];
      uStack_630 = puVar2[0x10];
      uStack_618 = puVar2[0x13];
      uStack_620 = puVar2[0x12];
      uStack_608 = puVar2[0x15];
      uStack_610 = puVar2[0x14];
      uStack_5f8 = puVar2[0x17];
      uStack_600 = puVar2[0x16];
      uStack_668 = puVar2[9];
      uStack_670 = puVar2[8];
      uStack_658 = puVar2[0xb];
      uStack_660 = puVar2[10];
      uStack_648 = puVar2[0xd];
      uStack_650 = puVar2[0xc];
      uStack_638 = puVar2[0xf];
      uStack_640 = puVar2[0xe];
      goto LAB_101609a64;
    }
  }
  func_0x0001016152c0(&uStack_670);
  uVar6 = 0xf000000000000000;
  uVar3 = 0;
  uVar7 = 0;
  uVar4 = 0xf000000000000000;
  uVar8 = 0xc000000000000000;
  uVar5 = 0;
  uVar9 = 0;
  uVar10 = 0;
LAB_101609a64:
  param_1[1] = uVar8;
  *param_1 = uVar5;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar7;
  param_1[4] = uVar4;
  param_1[7] = uVar6;
  param_1[6] = uVar3;
  param_1[0x21] = uStack_5a8;
  param_1[0x20] = uStack_5b0;
  param_1[0x23] = uStack_598;
  param_1[0x22] = uStack_5a0;
  param_1[0x25] = uStack_588;
  param_1[0x24] = uStack_590;
  param_1[0x27] = uStack_578;
  param_1[0x26] = uStack_580;
  param_1[0x19] = uStack_5e8;
  param_1[0x18] = uStack_5f0;
  param_1[0x1b] = uStack_5d8;
  param_1[0x1a] = uStack_5e0;
  param_1[0x1d] = uStack_5c8;
  param_1[0x1c] = uStack_5d0;
  param_1[0x1f] = uStack_5b8;
  param_1[0x1e] = uStack_5c0;
  param_1[0x11] = uStack_628;
  param_1[0x10] = uStack_630;
  param_1[0x13] = uStack_618;
  param_1[0x12] = uStack_620;
  param_1[0x15] = uStack_608;
  param_1[0x14] = uStack_610;
  param_1[0x17] = uStack_5f8;
  param_1[0x16] = uStack_600;
  param_1[9] = uStack_668;
  param_1[8] = uStack_670;
  param_1[0xb] = uStack_658;
  param_1[10] = uStack_660;
  param_1[0xd] = uStack_648;
  param_1[0xc] = uStack_650;
  param_1[0xf] = uStack_638;
  param_1[0xe] = uStack_640;
  return;
}



/* Entry: 101609cc8; end: 101609ce3;  */

undefined8 FUN_101609cc8(void)

{
  if (lRam0000000112db9cb0 != -1) {
    func_0x000107c61568(0x112db9cb0,FUN_101609f04);
  }
  func_0x000107c6157c(uRam0000000112db9cb8);
  return 0;
}



/* Entry: 101609ce4; end: 101609d33;  */

undefined8 FUN_101609ce4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    func_0x000107c61568(param_1,param_3);
  }
  func_0x000107c6157c(*param_2);
  return 0;
}



/* Entry: 101609d34; end: 101609dd3;  */

bool FUN_101609d34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10161538c(&uStack_50,auStack_68,0x112db80f8,&UNK_10d9671e0);
    func_0x000100cb6b04(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10161538c(&uStack_50,auStack_68,0x112db80f8,&UNK_10d9671e0);
  }
  func_0x000100cb6b04(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 101609dd4; end: 101609e1b;  */

void FUN_101609dd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d210,0x8c,2);
  uRam0000000113801670 = uStack_38;
  uRam0000000113801668 = uStack_40;
  uRam0000000113801680 = uStack_28;
  uRam0000000113801678 = uStack_30;
  uRam0000000113801690 = uStack_18;
  uRam0000000113801688 = uStack_20;
  return;
}



/* Entry: 101609e1c; end: 101609ebb;  */

/* WARNING: Possible PIC construction at 0x000101609e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101609e78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101609e6c) */
/* WARNING: Removing unreachable block (ram,0x000101609e7c) */

void FUN_101609e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9cc0 != -1) {
    func_0x000107c61568(0x112db9cc0,FUN_101609dd4);
  }
  uVar5 = uRam0000000113801690;
  uVar4 = uRam0000000113801688;
  uVar3 = uRam0000000113801680;
  uVar2 = uRam0000000113801678;
  uVar1 = uRam0000000113801670;
  *param_1 = uRam0000000113801668;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101609ebc; end: 101609f03;  */

void FUN_101609ebc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96cf90,0x273,2);
  uRam00000001138016a0 = uStack_38;
  uRam0000000113801698 = uStack_40;
  uRam00000001138016b0 = uStack_28;
  uRam00000001138016a8 = uStack_30;
  uRam00000001138016c0 = uStack_18;
  uRam00000001138016b8 = uStack_20;
  return;
}



/* Entry: 101609f04; end: 101609f23;  */

void FUN_101609f04(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101614ad8();
  func_0x000107c613fc();
  FUN_101609f24();
  uRam0000000112db9cb8 = uVar1;
  return;
}



/* Entry: 101609f24; end: 10160a15f;  */

void FUN_101609f24(void)

{
  long unaff_x20;
  undefined1 auStack_568 [344];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [312];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1016187bc(auStack_568);
  func_0x000107c610b4(unaff_x20 + 0x10,auStack_568,0x151);
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x178) = 2;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined1 *)(unaff_x20 + 0x198) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  func_0x000101614c18(&uStack_410);
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_370;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x298) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_378;
  *(undefined8 *)(unaff_x20 + 600) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_3f0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_3d8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_3e0;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_3f8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_400;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0xf000000000000000;
  func_0x000101614c54(&uStack_330);
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x398) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_300;
  func_0x000101614cac(auStack_230);
  func_0x000107c610b4(unaff_x20 + 0x3c0,auStack_230,0x138);
  *(undefined8 *)(unaff_x20 + 0x4f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x508) = 0;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 2;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0;
  *(undefined8 *)(unaff_x20 + 0x540) = 0;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x550) = 0;
  *(undefined8 *)(unaff_x20 + 0x548) = 0;
  *(undefined8 *)(unaff_x20 + 0x558) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 0;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 1;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x610) = 0;
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *(undefined1 *)(unaff_x20 + 0x618) = 1;
  *(undefined8 *)(unaff_x20 + 0x628) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  *(undefined8 *)(unaff_x20 + 0x638) = 2;
  *(undefined8 *)(unaff_x20 + 0x630) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x648) = 0;
  *(undefined8 *)(unaff_x20 + 0x640) = 0;
  *(undefined8 *)(unaff_x20 + 0x658) = 0;
  *(undefined8 *)(unaff_x20 + 0x650) = 0;
  *(undefined8 *)(unaff_x20 + 0x668) = 0;
  *(undefined8 *)(unaff_x20 + 0x660) = 0;
  *(undefined8 *)(unaff_x20 + 0x678) = 0;
  *(undefined8 *)(unaff_x20 + 0x670) = 0;
  *(undefined8 *)(unaff_x20 + 0x680) = 0;
  *(undefined8 *)(unaff_x20 + 0x688) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x6a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x698) = 0;
  *(undefined8 *)(unaff_x20 + 0x690) = 0;
  func_0x000101614ff4(&uStack_f8);
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x6a8) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_c8;
  *(undefined4 *)(unaff_x20 + 0x760) = 0;
  *(undefined8 *)(unaff_x20 + 0x768) = 0;
  *(undefined8 *)(unaff_x20 + 0x778) = 0;
  *(undefined8 *)(unaff_x20 + 0x770) = 0;
  *(undefined8 *)(unaff_x20 + 0x780) = 0xf000000000000000;
  return;
}



/* Entry: 10160a160; end: 10160b183;  */

void FUN_10160a160(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1750 [24];
  undefined1 auStack_1738 [24];
  undefined1 auStack_1720 [24];
  undefined1 auStack_1708 [184];
  undefined1 auStack_1650 [24];
  undefined1 auStack_1638 [24];
  undefined1 auStack_1620 [24];
  undefined1 auStack_1608 [24];
  undefined1 auStack_15f0 [24];
  undefined1 auStack_15d8 [24];
  undefined1 auStack_15c0 [24];
  undefined1 auStack_15a8 [24];
  undefined1 auStack_1590 [24];
  undefined1 auStack_1578 [24];
  undefined1 auStack_1560 [24];
  undefined1 auStack_1548 [24];
  undefined1 auStack_1530 [24];
  undefined1 auStack_1518 [24];
  undefined1 auStack_1500 [24];
  undefined1 auStack_14e8 [24];
  undefined1 auStack_14d0 [24];
  undefined1 auStack_14b8 [24];
  undefined1 auStack_14a0 [24];
  undefined1 auStack_1488 [24];
  undefined1 auStack_1470 [24];
  undefined1 auStack_1458 [24];
  undefined1 auStack_1440 [24];
  undefined1 auStack_1428 [24];
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined1 auStack_12d0 [24];
  undefined1 auStack_12b8 [24];
  undefined1 auStack_12a0 [24];
  undefined1 auStack_1288 [24];
  undefined1 auStack_1270 [24];
  undefined1 auStack_1258 [24];
  undefined1 auStack_1240 [24];
  undefined1 auStack_1228 [24];
  undefined1 auStack_1210 [24];
  undefined1 auStack_11f8 [24];
  undefined1 auStack_11e0 [24];
  undefined1 auStack_11c8 [24];
  undefined1 auStack_11b0 [24];
  undefined1 auStack_1198 [24];
  undefined1 auStack_1180 [24];
  undefined1 auStack_1168 [24];
  undefined1 auStack_1150 [24];
  undefined1 auStack_1138 [24];
  undefined1 auStack_1120 [344];
  undefined1 auStack_fc8 [344];
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined1 auStack_c90 [312];
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined1 auStack_aa0 [344];
  undefined1 auStack_948 [344];
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_428 [312];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1016187bc(auStack_fc8);
  func_0x000107c610b4(unaff_x20 + 0x10,auStack_fc8,0x151);
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x178) = 2;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined1 *)(unaff_x20 + 0x198) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1a8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  func_0x000101614c18(&uStack_e70);
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_dc8;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_dd0;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_db8;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_dc0;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_da8;
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_db0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_d98;
  *(undefined8 *)(unaff_x20 + 0x298) = uStack_da0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_e08;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_e10;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_df8;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_e00;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_de8;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_df0;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_dd8;
  *(undefined8 *)(unaff_x20 + 600) = uStack_de0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_e48;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_e50;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_e38;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_e40;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_e28;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_e30;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_e18;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_e20;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_e68;
  *puVar1 = uStack_e70;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_e58;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_e60;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0xf000000000000000;
  func_0x000101614c54(&uStack_d90);
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_cc8;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_cd0;
  *(undefined8 *)(unaff_x20 + 0x398) = uStack_cb8;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_cc0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_ca8;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_cb0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_c98;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_ca0;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_d08;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_d10;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_cf8;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_d00;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_ce8;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_cf0;
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_cd8;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_ce0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_d48;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_d50;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_d38;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_d40;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_d28;
  *(undefined8 *)(unaff_x20 + 800) = uStack_d30;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_d18;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_d20;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_d88;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_d90;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_d78;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_d80;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_d68;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_d70;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_d58;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_d60;
  func_0x000101614cac(auStack_c90);
  func_0x000107c610b4(unaff_x20 + 0x3c0,auStack_c90,0x138);
  *(undefined8 *)(unaff_x20 + 0x4f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x508) = 0;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 2;
  puVar2 = (undefined8 *)(unaff_x20 + 0x528);
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0;
  *(undefined8 *)(unaff_x20 + 0x540) = 0;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x550) = 0;
  *(undefined8 *)(unaff_x20 + 0x548) = 0;
  *(undefined8 *)(unaff_x20 + 0x558) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 0;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 1;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x610) = 0;
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *(undefined1 *)(unaff_x20 + 0x618) = 1;
  *(undefined8 *)(unaff_x20 + 0x628) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x638);
  *(undefined8 *)(unaff_x20 + 0x638) = 2;
  *(undefined8 *)(unaff_x20 + 0x630) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x648) = 0;
  *(undefined8 *)(unaff_x20 + 0x640) = 0;
  *(undefined8 *)(unaff_x20 + 0x658) = 0;
  *(undefined8 *)(unaff_x20 + 0x650) = 0;
  *(undefined8 *)(unaff_x20 + 0x668) = 0;
  *(undefined8 *)(unaff_x20 + 0x660) = 0;
  *(undefined8 *)(unaff_x20 + 0x678) = 0;
  *(undefined8 *)(unaff_x20 + 0x670) = 0;
  *(undefined8 *)(unaff_x20 + 0x680) = 0;
  *(undefined8 *)(unaff_x20 + 0x688) = 0xf000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x6a8);
  *(undefined8 *)(unaff_x20 + 0x6a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x698) = 0;
  *(undefined8 *)(unaff_x20 + 0x690) = 0;
  func_0x000101614ff4(&uStack_b58);
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_ad0;
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_ad8;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_ac0;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_ac8;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_ab0;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_ab8;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_aa8;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_b10;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_b18;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_b00;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_b08;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_af0;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_af8;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_ae0;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_ae8;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_b50;
  *puVar4 = uStack_b58;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_b40;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_b48;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_b30;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_b38;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_b20;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_b28;
  *(undefined4 *)(unaff_x20 + 0x760) = 0;
  *(undefined8 *)(unaff_x20 + 0x768) = 0;
  *(undefined8 *)(unaff_x20 + 0x778) = 0;
  *(undefined8 *)(unaff_x20 + 0x770) = 0;
  *(undefined8 *)(unaff_x20 + 0x780) = 0xf000000000000000;
  func_0x000107c610b4(auStack_aa0,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_948,unaff_x20 + 0x10,0x151);
  func_0x000107c610b8(unaff_x20 + 0x10,param_1 + 0x10,0x151);
  FUN_10161538c(auStack_aa0,auStack_1120,0x112db4000,&UNK_10d95e5a0);
  FUN_101618830(auStack_948,0x112db4000,&UNK_10d95e5a0);
  func_0x000107c61428(param_1 + 0x168,auStack_1138,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x168);
  uVar9 = *(undefined8 *)(param_1 + 0x170);
  func_0x000107c61428(unaff_x20 + 0x168,auStack_1150,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x178,auStack_1168,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  uVar16 = *(undefined8 *)(param_1 + 0x180);
  uVar8 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c61428(unaff_x20 + 0x178,auStack_1180,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar8;
  FUN_101541460(uVar7,uVar16,uVar8);
  func_0x000101556278(uVar9,uVar11,uVar10);
  func_0x000107c61428(param_1 + 400,auStack_1198,0,0);
  uVar7 = *(undefined8 *)(param_1 + 400);
  uVar6 = *(undefined1 *)(param_1 + 0x198);
  func_0x000107c61428(unaff_x20 + 400,auStack_11b0,1,0);
  *(undefined8 *)(unaff_x20 + 400) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x198) = uVar6;
  func_0x000107c61428(param_1 + 0x1a0,auStack_11c8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x1a0);
  uVar6 = *(undefined1 *)(param_1 + 0x1a8);
  func_0x000107c61428(unaff_x20 + 0x1a0,auStack_11e0,1,0);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x1a8) = uVar6;
  func_0x000107c61428(param_1 + 0x1b0,auStack_11f8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  uVar16 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1b0,auStack_1210,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar8;
  FUN_101615d30(uVar7,uVar16,uVar8);
  FUN_10161628c(uVar9,uVar11,uVar10);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1c8),auStack_1228,0,0);
  uStack_748 = *(undefined8 *)(param_1 + 0x270);
  uStack_750 = *(undefined8 *)(param_1 + 0x268);
  uStack_738 = *(undefined8 *)(param_1 + 0x280);
  uStack_740 = *(undefined8 *)(param_1 + 0x278);
  uStack_728 = *(undefined8 *)(param_1 + 0x290);
  uStack_730 = *(undefined8 *)(param_1 + 0x288);
  uStack_718 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_720 = *(undefined8 *)(param_1 + 0x298);
  uStack_788 = *(undefined8 *)(param_1 + 0x230);
  uStack_790 = *(undefined8 *)(param_1 + 0x228);
  uStack_778 = *(undefined8 *)(param_1 + 0x240);
  uStack_780 = *(undefined8 *)(param_1 + 0x238);
  uStack_768 = *(undefined8 *)(param_1 + 0x250);
  uStack_770 = *(undefined8 *)(param_1 + 0x248);
  uStack_758 = *(undefined8 *)(param_1 + 0x260);
  uStack_760 = *(undefined8 *)(param_1 + 600);
  uStack_7c8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_7d0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_7b8 = *(undefined8 *)(param_1 + 0x200);
  uStack_7c0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_7a8 = *(undefined8 *)(param_1 + 0x210);
  uStack_7b0 = *(undefined8 *)(param_1 + 0x208);
  uStack_798 = *(undefined8 *)(param_1 + 0x220);
  uStack_7a0 = *(undefined8 *)(param_1 + 0x218);
  uStack_7e8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_7f0 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_7d8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_7e0 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428(puVar1,auStack_1240,1,0);
  uStack_668 = *(undefined8 *)(unaff_x20 + 0x270);
  uStack_670 = *(undefined8 *)(unaff_x20 + 0x268);
  uStack_658 = *(undefined8 *)(unaff_x20 + 0x280);
  uStack_660 = *(undefined8 *)(unaff_x20 + 0x278);
  uStack_648 = *(undefined8 *)(unaff_x20 + 0x290);
  uStack_650 = *(undefined8 *)(unaff_x20 + 0x288);
  uStack_638 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uStack_640 = *(undefined8 *)(unaff_x20 + 0x298);
  uStack_6a8 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_6b0 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_698 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_6a0 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_688 = *(undefined8 *)(unaff_x20 + 0x250);
  uStack_690 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_678 = *(undefined8 *)(unaff_x20 + 0x260);
  uStack_680 = *(undefined8 *)(unaff_x20 + 600);
  uStack_6e8 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_6f0 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_6d8 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_6e0 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_6c8 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_6d0 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_6b8 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_6c0 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_708 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_710 = *puVar1;
  uStack_6f8 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_700 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_748;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_750;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_738;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_740;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_728;
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_730;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_718;
  *(undefined8 *)(unaff_x20 + 0x298) = uStack_720;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_788;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_790;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_778;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_780;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_768;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_770;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_758;
  *(undefined8 *)(unaff_x20 + 600) = uStack_760;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_7c8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_7d0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_7b8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_7c0;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_7a8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_7b0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_798;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_7a0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_7e8;
  *puVar1 = uStack_7f0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_7d8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_7e0;
  FUN_10161538c(&uStack_7f0,auStack_1120,0x112db9c38,&UNK_10d96c738);
  FUN_101618830(&uStack_710,0x112db9c38,&UNK_10d96c738);
  func_0x000107c61428(param_1 + 0x2a8,auStack_1258,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x2a8);
  uVar9 = *(undefined8 *)(param_1 + 0x2b0);
  uVar16 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2a8),auStack_1270,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x2b8);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar16;
  func_0x000100cb6ae8(uVar7,uVar9,uVar16);
  func_0x000100cb6b04(uVar11,uVar8,uVar10);
  func_0x000107c61428(param_1 + 0x2c0,auStack_1288,0,0);
  uStack_568 = *(undefined8 *)(param_1 + 0x388);
  uStack_570 = *(undefined8 *)(param_1 + 0x380);
  uStack_558 = *(undefined8 *)(param_1 + 0x398);
  uStack_560 = *(undefined8 *)(param_1 + 0x390);
  uStack_548 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_550 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_538 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_540 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_5a8 = *(undefined8 *)(param_1 + 0x348);
  uStack_5b0 = *(undefined8 *)(param_1 + 0x340);
  uStack_598 = *(undefined8 *)(param_1 + 0x358);
  uStack_5a0 = *(undefined8 *)(param_1 + 0x350);
  uStack_588 = *(undefined8 *)(param_1 + 0x368);
  uStack_590 = *(undefined8 *)(param_1 + 0x360);
  uStack_578 = *(undefined8 *)(param_1 + 0x378);
  uStack_580 = *(undefined8 *)(param_1 + 0x370);
  uStack_5e8 = *(undefined8 *)(param_1 + 0x308);
  uStack_5f0 = *(undefined8 *)(param_1 + 0x300);
  uStack_5d8 = *(undefined8 *)(param_1 + 0x318);
  uStack_5e0 = *(undefined8 *)(param_1 + 0x310);
  uStack_5c8 = *(undefined8 *)(param_1 + 0x328);
  uStack_5d0 = *(undefined8 *)(param_1 + 800);
  uStack_5b8 = *(undefined8 *)(param_1 + 0x338);
  uStack_5c0 = *(undefined8 *)(param_1 + 0x330);
  uStack_628 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_630 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_618 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_620 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_608 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_610 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_5f8 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_600 = *(undefined8 *)(param_1 + 0x2f0);
  func_0x000107c61428(unaff_x20 + 0x2c0,auStack_12a0,1,0);
  uStack_468 = *(undefined8 *)(unaff_x20 + 0x388);
  uStack_470 = *(undefined8 *)(unaff_x20 + 0x380);
  uStack_458 = *(undefined8 *)(unaff_x20 + 0x398);
  uStack_460 = *(undefined8 *)(unaff_x20 + 0x390);
  uStack_448 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uStack_450 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uStack_438 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uStack_440 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uStack_4a8 = *(undefined8 *)(unaff_x20 + 0x348);
  uStack_4b0 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_498 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_4a0 = *(undefined8 *)(unaff_x20 + 0x350);
  uStack_488 = *(undefined8 *)(unaff_x20 + 0x368);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_478 = *(undefined8 *)(unaff_x20 + 0x378);
  uStack_480 = *(undefined8 *)(unaff_x20 + 0x370);
  uStack_4e8 = *(undefined8 *)(unaff_x20 + 0x308);
  uStack_4f0 = *(undefined8 *)(unaff_x20 + 0x300);
  uStack_4d8 = *(undefined8 *)(unaff_x20 + 0x318);
  uStack_4e0 = *(undefined8 *)(unaff_x20 + 0x310);
  uStack_4c8 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_4d0 = *(undefined8 *)(unaff_x20 + 800);
  uStack_4b8 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_4c0 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_528 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_530 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_518 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_520 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_508 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_510 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uStack_4f8 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uStack_500 = *(undefined8 *)(unaff_x20 + 0x2f0);
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_568;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_570;
  *(undefined8 *)(unaff_x20 + 0x398) = uStack_558;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_560;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_548;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_550;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_538;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_540;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_5a8;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_5b0;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_598;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_5a0;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_588;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_590;
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_578;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_580;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_5e8;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_5f0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_5d8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_5e0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_5c8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_5d0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_5b8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_5c0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_628;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_630;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_618;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_620;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_608;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_610;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_5f8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_600;
  FUN_10161538c(&uStack_630,auStack_1120,0x112db9c48,&UNK_10d96c748);
  FUN_101618830(&uStack_530,0x112db9c48,&UNK_10d96c748);
  func_0x000107c61428(param_1 + 0x3c0,auStack_12b8,0,0);
  func_0x000107c610b4(auStack_428,param_1 + 0x3c0,0x138);
  func_0x000107c61428(unaff_x20 + 0x3c0,auStack_12d0,1,0);
  func_0x000107c610b4(auStack_1120,unaff_x20 + 0x3c0,0x138);
  func_0x000107c610b4(unaff_x20 + 0x3c0,auStack_428,0x138);
  FUN_10161538c(auStack_428,&uStack_1410,0x112db9c58,&UNK_10d96c758);
  FUN_101618830(auStack_1120,0x112db9c58,&UNK_10d96c758);
  func_0x000107c61428(param_1 + 0x4f8,auStack_1428,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x4f8);
  uVar9 = *(undefined8 *)(param_1 + 0x500);
  uVar16 = *(undefined8 *)(param_1 + 0x508);
  func_0x000107c61428(unaff_x20 + 0x4f8,auStack_1440,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x4f8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x500);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x508);
  *(undefined8 *)(unaff_x20 + 0x4f8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x500) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x508) = uVar16;
  func_0x000101541464(uVar7,uVar9,uVar16);
  func_0x000101556278(uVar11,uVar8,uVar10);
  func_0x000107c61428(param_1 + 0x510,auStack_1458,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x510);
  uVar9 = *(undefined8 *)(param_1 + 0x518);
  uVar16 = *(undefined8 *)(param_1 + 0x520);
  func_0x000107c61428(unaff_x20 + 0x510,auStack_1470,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x510);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x518);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x520);
  *(undefined8 *)(unaff_x20 + 0x510) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x518) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x520) = uVar16;
  func_0x000101541464(uVar7,uVar9,uVar16);
  func_0x000101556278(uVar11,uVar8,uVar10);
  func_0x000107c61428((undefined8 *)(param_1 + 0x528),auStack_1488,0,0);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x530);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x528);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x540);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x538);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x550);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x548);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x560);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x558);
  func_0x000107c61428(puVar2,auStack_14a0,1,0);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x530);
  uStack_2b0 = *puVar2;
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x540);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x538);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x550);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x548);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x560);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x558);
  *(undefined8 *)(unaff_x20 + 0x530) = uStack_2e8;
  *puVar2 = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x540) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x538) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x550) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x548) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x560) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x558) = uStack_2c0;
  FUN_10161538c(&uStack_2f0,&uStack_1410,0x112db9c68,&UNK_10d96c768);
  FUN_101618830(&uStack_2b0,0x112db9c68,&UNK_10d96c768);
  func_0x000107c61428(param_1 + 0x568,auStack_14b8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x568);
  uVar16 = *(undefined8 *)(param_1 + 0x570);
  uVar11 = *(undefined8 *)(param_1 + 0x578);
  uVar8 = *(undefined8 *)(param_1 + 0x580);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x568),auStack_14d0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x568);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x570);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x578);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x580);
  *(undefined8 *)(unaff_x20 + 0x568) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x570) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x578) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x580) = uVar8;
  FUN_101597350(uVar9,uVar16,uVar11,uVar8);
  FUN_101597ae4(uVar10,uVar14,uVar17,uVar7);
  func_0x000107c61428(param_1 + 0x588,auStack_14e8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x588);
  uVar9 = *(undefined8 *)(param_1 + 0x590);
  uVar16 = *(undefined8 *)(param_1 + 0x598);
  func_0x000107c61428(unaff_x20 + 0x588,auStack_1500,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x588);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x590);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x598);
  *(undefined8 *)(unaff_x20 + 0x588) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x590) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x598) = uVar16;
  func_0x000100cb6ae8(uVar7,uVar9,uVar16);
  func_0x000100cb6b04(uVar11,uVar8,uVar10);
  func_0x000107c61428(param_1 + 0x5a0,auStack_1518,0,0);
  uStack_248 = *(undefined8 *)(param_1 + 0x5c8);
  uStack_250 = *(undefined8 *)(param_1 + 0x5c0);
  uStack_238 = *(undefined8 *)(param_1 + 0x5d8);
  uStack_240 = *(undefined8 *)(param_1 + 0x5d0);
  uStack_228 = *(undefined8 *)(param_1 + 0x5e8);
  uStack_230 = *(undefined8 *)(param_1 + 0x5e0);
  uStack_220 = *(undefined8 *)(param_1 + 0x5f0);
  uStack_268 = *(undefined8 *)(param_1 + 0x5a8);
  uStack_270 = *(undefined8 *)(param_1 + 0x5a0);
  uStack_258 = *(undefined8 *)(param_1 + 0x5b8);
  uStack_260 = *(undefined8 *)(param_1 + 0x5b0);
  func_0x000107c61428(unaff_x20 + 0x5a0,auStack_1530,1,0);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x5c8);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x5c0);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x5d8);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x5d0);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x5e8);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x5e0);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x5a8);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x5a0);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x5b8);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x5b0);
  *(undefined8 *)(unaff_x20 + 0x5c8) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x5c0) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x5d8) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x5d0) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x5e8) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x5e0) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x5a8) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x5a0) = uStack_270;
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x5f0);
  *(undefined8 *)(unaff_x20 + 0x5f0) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x5b8) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x5b0) = uStack_260;
  FUN_10161538c(&uStack_270,&uStack_1410,0x112db9c78,&UNK_10d96c778);
  FUN_101618830(&uStack_210,0x112db9c78,&UNK_10d96c778);
  func_0x000107c61428(param_1 + 0x5f8,auStack_1548,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x5f8);
  uVar9 = *(undefined8 *)(param_1 + 0x600);
  uVar16 = *(undefined8 *)(param_1 + 0x608);
  func_0x000107c61428(unaff_x20 + 0x5f8,auStack_1560,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x5f8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x600);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x608);
  *(undefined8 *)(unaff_x20 + 0x5f8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x600) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x608) = uVar16;
  func_0x000101541464(uVar7,uVar9,uVar16);
  func_0x000101556278(uVar11,uVar8,uVar10);
  func_0x000107c61428(param_1 + 0x610,auStack_1578,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x610);
  uVar6 = *(undefined1 *)(param_1 + 0x618);
  func_0x000107c61428(unaff_x20 + 0x610,auStack_1590,1,0);
  *(undefined8 *)(unaff_x20 + 0x610) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x618) = uVar6;
  func_0x000107c61428(param_1 + 0x620,auStack_15a8,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x620);
  uVar9 = *(undefined8 *)(param_1 + 0x628);
  uVar16 = *(undefined8 *)(param_1 + 0x630);
  func_0x000107c61428(unaff_x20 + 0x620,auStack_15c0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x620);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x628);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x630);
  *(undefined8 *)(unaff_x20 + 0x620) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x628) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x630) = uVar16;
  func_0x000100cb6ae8(uVar7,uVar9,uVar16);
  func_0x000100cb6b04(uVar11,uVar8,uVar10);
  func_0x000107c61428((undefined8 *)(param_1 + 0x638),auStack_15d8,0,0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x640);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x638);
  uStack_198 = *(undefined8 *)(param_1 + 0x650);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x648);
  uStack_188 = *(undefined8 *)(param_1 + 0x660);
  uStack_190 = *(undefined8 *)(param_1 + 0x658);
  uStack_178 = *(undefined8 *)(param_1 + 0x670);
  uStack_180 = *(undefined8 *)(param_1 + 0x668);
  func_0x000107c61428(puVar3,auStack_15f0,1,0);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x640);
  uStack_170 = *puVar3;
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x650);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x648);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x660);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x658);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x670);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x668);
  *(undefined8 *)(unaff_x20 + 0x640) = uStack_1a8;
  *puVar3 = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x650) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x648) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x660) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x658) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x670) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x668) = uStack_180;
  FUN_10161538c(&uStack_1b0,&uStack_1410,0x112db9c88,&UNK_10d96c788);
  FUN_101618830(&uStack_170,0x112db9c88,&UNK_10d96c788);
  func_0x000107c61428(param_1 + 0x678,auStack_1608,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x678);
  uVar10 = *(undefined8 *)(param_1 + 0x680);
  uVar14 = *(undefined8 *)(param_1 + 0x688);
  uVar17 = *(undefined8 *)(param_1 + 0x690);
  uVar12 = *(undefined8 *)(param_1 + 0x698);
  uVar13 = *(undefined8 *)(param_1 + 0x6a0);
  func_0x000107c61428(unaff_x20 + 0x678,auStack_1620,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x678);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x680);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x688);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x690);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x698);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x6a0);
  *(undefined8 *)(unaff_x20 + 0x678) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x680) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x688) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x690) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x698) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x6a0) = uVar13;
  FUN_101614ce8(uVar8,uVar10,uVar14,uVar17,uVar12,uVar13);
  func_0x000101614d3c(uVar15,uVar18,uVar16,uVar7,uVar11,uVar9);
  func_0x000107c61428((undefined8 *)(param_1 + 0x6a8),auStack_1638,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x730);
  uStack_b0 = *(undefined8 *)(param_1 + 0x728);
  uStack_98 = *(undefined8 *)(param_1 + 0x740);
  uStack_a0 = *(undefined8 *)(param_1 + 0x738);
  uStack_88 = *(undefined8 *)(param_1 + 0x750);
  uStack_90 = *(undefined8 *)(param_1 + 0x748);
  uStack_80 = *(undefined8 *)(param_1 + 0x758);
  uStack_e8 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x700);
  uStack_e0 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x710);
  uStack_d0 = *(undefined8 *)(param_1 + 0x708);
  uStack_b8 = *(undefined8 *)(param_1 + 0x720);
  uStack_c0 = *(undefined8 *)(param_1 + 0x718);
  uStack_128 = *(undefined8 *)(param_1 + 0x6b0);
  uStack_130 = *(undefined8 *)(param_1 + 0x6a8);
  uStack_118 = *(undefined8 *)(param_1 + 0x6c0);
  uStack_120 = *(undefined8 *)(param_1 + 0x6b8);
  uStack_108 = *(undefined8 *)(param_1 + 0x6d0);
  uStack_110 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_100 = *(undefined8 *)(param_1 + 0x6d8);
  func_0x000107c61428(puVar4,auStack_1650,1,0);
  uStack_1388 = *(undefined8 *)(unaff_x20 + 0x730);
  uStack_1390 = *(undefined8 *)(unaff_x20 + 0x728);
  uStack_1378 = *(undefined8 *)(unaff_x20 + 0x740);
  uStack_1380 = *(undefined8 *)(unaff_x20 + 0x738);
  uStack_1368 = *(undefined8 *)(unaff_x20 + 0x750);
  uStack_1370 = *(undefined8 *)(unaff_x20 + 0x748);
  uStack_1360 = *(undefined8 *)(unaff_x20 + 0x758);
  uStack_13c8 = *(undefined8 *)(unaff_x20 + 0x6f0);
  uStack_13d0 = *(undefined8 *)(unaff_x20 + 0x6e8);
  uStack_13b8 = *(undefined8 *)(unaff_x20 + 0x700);
  uStack_13c0 = *(undefined8 *)(unaff_x20 + 0x6f8);
  uStack_13a8 = *(undefined8 *)(unaff_x20 + 0x710);
  uStack_13b0 = *(undefined8 *)(unaff_x20 + 0x708);
  uStack_1398 = *(undefined8 *)(unaff_x20 + 0x720);
  uStack_13a0 = *(undefined8 *)(unaff_x20 + 0x718);
  uStack_1408 = *(undefined8 *)(unaff_x20 + 0x6b0);
  uStack_1410 = *puVar4;
  uStack_13f8 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uStack_1400 = *(undefined8 *)(unaff_x20 + 0x6b8);
  uStack_13e8 = *(undefined8 *)(unaff_x20 + 0x6d0);
  uStack_13f0 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uStack_13d8 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uStack_13e0 = *(undefined8 *)(unaff_x20 + 0x6d8);
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_128;
  *puVar4 = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_100;
  FUN_10161538c(&uStack_130,auStack_1708,0x112db9c98,&UNK_10d96c798);
  FUN_101618830(&uStack_1410,0x112db9c98,&UNK_10d96c798);
  func_0x000107c61428(param_1 + 0x760,auStack_1708,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x760);
  func_0x000107c61428(unaff_x20 + 0x760,auStack_1720,1,0);
  *(undefined4 *)(unaff_x20 + 0x760) = uVar5;
  func_0x000107c61428(param_1 + 0x768,auStack_1738,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x768);
  uVar10 = *(undefined8 *)(param_1 + 0x770);
  uVar14 = *(undefined8 *)(param_1 + 0x778);
  uVar17 = *(undefined8 *)(param_1 + 0x780);
  func_0x000101615024(uVar8,uVar10,uVar14,uVar17);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x768,auStack_1750,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x768);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x770);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x778);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x780);
  *(undefined8 *)(unaff_x20 + 0x768) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x770) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x778) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x780) = uVar17;
  func_0x000101615040(uVar7,uVar9,uVar16,uVar11);
  return;
}



/* Entry: 10160b184; end: 10160b373;  */

void FUN_10160b184(void)

{
  long unaff_x20;
  
  FUN_101618830(unaff_x20 + 0x10,0x112db4000,&UNK_10d95e5a0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188));
  FUN_10161628c(*(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0));
  FUN_101618830(unaff_x20 + 0x1c8,0x112db9c38,&UNK_10d96c738);
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0x2a8),*(undefined8 *)(unaff_x20 + 0x2b0),
                      *(undefined8 *)(unaff_x20 + 0x2b8));
  FUN_101618830(unaff_x20 + 0x2c0,0x112db9c48,&UNK_10d96c748);
  FUN_101618830(unaff_x20 + 0x3c0,0x112db9c58,&UNK_10d96c758);
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x4f8),*(undefined8 *)(unaff_x20 + 0x500),
                      *(undefined8 *)(unaff_x20 + 0x508));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x510),*(undefined8 *)(unaff_x20 + 0x518),
                      *(undefined8 *)(unaff_x20 + 0x520));
  func_0x000101618080(*(undefined8 *)(unaff_x20 + 0x528),*(undefined8 *)(unaff_x20 + 0x530),
                      *(undefined8 *)(unaff_x20 + 0x538),*(undefined8 *)(unaff_x20 + 0x540),
                      *(undefined8 *)(unaff_x20 + 0x548),*(undefined8 *)(unaff_x20 + 0x550),
                      *(undefined8 *)(unaff_x20 + 0x558),*(undefined8 *)(unaff_x20 + 0x560));
  FUN_101597ae4(*(undefined8 *)(unaff_x20 + 0x568),*(undefined8 *)(unaff_x20 + 0x570),
                *(undefined8 *)(unaff_x20 + 0x578),*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0x588),*(undefined8 *)(unaff_x20 + 0x590),
                      *(undefined8 *)(unaff_x20 + 0x598));
  FUN_10161809c(*(undefined8 *)(unaff_x20 + 0x5a0),*(undefined8 *)(unaff_x20 + 0x5a8),
                *(undefined8 *)(unaff_x20 + 0x5b0),*(undefined8 *)(unaff_x20 + 0x5b8),
                *(undefined8 *)(unaff_x20 + 0x5c0),*(undefined8 *)(unaff_x20 + 0x5c8),
                *(undefined8 *)(unaff_x20 + 0x5d0),*(undefined8 *)(unaff_x20 + 0x5d8),
                *(undefined8 *)(unaff_x20 + 0x5e0),*(undefined8 *)(unaff_x20 + 0x5e8),
                *(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x5f8),*(undefined8 *)(unaff_x20 + 0x600),
                      *(undefined8 *)(unaff_x20 + 0x608));
  func_0x000100cb6b04(*(undefined8 *)(unaff_x20 + 0x620),*(undefined8 *)(unaff_x20 + 0x628),
                      *(undefined8 *)(unaff_x20 + 0x630));
  FUN_101618124(*(undefined8 *)(unaff_x20 + 0x638),*(undefined8 *)(unaff_x20 + 0x640),
                *(undefined8 *)(unaff_x20 + 0x648),*(undefined8 *)(unaff_x20 + 0x650),
                *(undefined8 *)(unaff_x20 + 0x658),*(undefined8 *)(unaff_x20 + 0x660),
                *(undefined8 *)(unaff_x20 + 0x668),*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000101614d3c(*(undefined8 *)(unaff_x20 + 0x678),*(undefined8 *)(unaff_x20 + 0x680),
                      *(undefined8 *)(unaff_x20 + 0x688),*(undefined8 *)(unaff_x20 + 0x690),
                      *(undefined8 *)(unaff_x20 + 0x698),*(undefined8 *)(unaff_x20 + 0x6a0));
  FUN_101618830(unaff_x20 + 0x6a8,0x112db9c98,&UNK_10d96c798);
  func_0x000101615040(*(undefined8 *)(unaff_x20 + 0x768),*(undefined8 *)(unaff_x20 + 0x770),
                      *(undefined8 *)(unaff_x20 + 0x778),*(undefined8 *)(unaff_x20 + 0x780));
  return;
}



/* Entry: 10160b374; end: 10160b737;  */

/* WARNING: Removing unreachable block (ram,0x00010160b444) */
/* WARNING: Removing unreachable block (ram,0x00010160b5c8) */
/* WARNING: Removing unreachable block (ram,0x00010160b68c) */
/* WARNING: Removing unreachable block (ram,0x00010160b600) */
/* WARNING: Removing unreachable block (ram,0x00010160b6c4) */
/* WARNING: Removing unreachable block (ram,0x00010160b4d0) */
/* WARNING: Removing unreachable block (ram,0x00010160b508) */
/* WARNING: Removing unreachable block (ram,0x00010160b638) */
/* WARNING: Removing unreachable block (ram,0x00010160b6fc) */
/* WARNING: Removing unreachable block (ram,0x00010160b718) */
/* WARNING: Removing unreachable block (ram,0x00010160b4ec) */
/* WARNING: Removing unreachable block (ram,0x00010160b498) */
/* WARNING: Removing unreachable block (ram,0x00010160b4b4) */
/* WARNING: Removing unreachable block (ram,0x00010160b460) */
/* WARNING: Removing unreachable block (ram,0x00010160b524) */
/* WARNING: Removing unreachable block (ram,0x00010160b6e0) */
/* WARNING: Removing unreachable block (ram,0x00010160b654) */
/* WARNING: Removing unreachable block (ram,0x00010160b47c) */
/* WARNING: Removing unreachable block (ram,0x00010160b580) */
/* WARNING: Removing unreachable block (ram,0x00010160b6a8) */
/* WARNING: Removing unreachable block (ram,0x00010160b61c) */
/* WARNING: Removing unreachable block (ram,0x00010160b564) */
/* WARNING: Removing unreachable block (ram,0x00010160b670) */
/* WARNING: Removing unreachable block (ram,0x00010160b5e4) */
/* WARNING: Removing unreachable block (ram,0x00010160b734) */

void FUN_10160b374(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_10160b738(param_1,param_2,param_3,param_4);
        break;
      case 2:
        FUN_10160b9cc(param_1,param_2,param_3,param_4);
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x168,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x168;
        goto code_r0x00010160b5a4;
      case 4:
        FUN_10160bd4c(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_10160bde0(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_10160be74(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_10160bf08(param_1,param_2,param_3,param_4);
        break;
      case 8:
        FUN_10160c1c4(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_10160c258(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_10160c2ec(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_10160c380(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_10160c414(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_10160c4a8(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_10160c53c(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_10160c5d0(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_10160c664(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_10160c6f8(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_10160c78c(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_10160c820(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_10160c8b4(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_10160c948(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_10160c9dc(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_10160ca70(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_10160cb04(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        func_0x000107c61428(param_1 + 0x760,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x760;
code_r0x00010160b5a4:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x1b:
        FUN_10160cb98(param_1,param_2,param_3,param_4);
        break;
      case 0x1c:
        FUN_10160ceb0(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10160b738; end: 10160b9cb;  */

/* WARNING: Removing unreachable block (ram,0x00010160b92c) */

void FUN_10160b738(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_740;
  long lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 auStack_5f0 [43];
  undefined1 auStack_498 [344];
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [344];
  undefined1 auStack_1c0 [352];
  
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  func_0x000107c610b4(auStack_318,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1c0,param_1 + 0x10,0x151);
  puVar5 = auStack_318;
  FUN_10155b244();
  iVar3 = (int)puVar5;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_5f0,auStack_1c0,0x150);
    puVar5 = auStack_1c0;
    FUN_10155b330();
    if ((int)puVar5 == 0) {
      puVar4 = auStack_5f0;
      func_0x000100cb6ab0();
      uVar6 = *puVar4;
      uVar1 = puVar4[3];
      uVar2 = puVar4[4];
      uVar9 = puVar4[2];
      lVar8 = puVar4[1];
      func_0x000107c610b4(auStack_498,auStack_318,0x151);
      FUN_101614af8(auStack_498,&uStack_740);
      puVar5 = (undefined1 *)0x0;
      FUN_1016186c0(0,0,0,0,0);
      uStack_340 = uVar6;
      lStack_338 = lVar8;
      uStack_330 = uVar9;
      uStack_328 = uVar1;
      uStack_320 = uVar2;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000101618440();
  (*pcVar7)(&uStack_340,&UNK_1103eee58,puVar5,param_3,param_4);
  uVar9 = uStack_320;
  uVar6 = uStack_328;
  uVar2 = uStack_330;
  lVar8 = lStack_338;
  uVar1 = uStack_340;
  if (unaff_x21 == 0) {
    if (lStack_338 != 0) {
      if (iVar3 == 1) {
        func_0x000107c61434(lStack_338);
        func_0x000107c61434(uVar2);
        func_0x00010006c00c(uVar6,uVar9);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_338);
        func_0x000107c61434(uVar2);
        func_0x00010006c00c(uVar6,uVar9);
        (*pcVar7)(param_3,param_4);
      }
      FUN_1016186c0(uStack_340,lStack_338,uStack_330,uStack_328,uStack_320);
      uStack_740 = uVar1;
      lStack_738 = lVar8;
      uStack_730 = uVar2;
      uStack_728 = uVar6;
      uStack_720 = uVar9;
      FUN_101614b2c(&uStack_740);
      func_0x000107c610b4(auStack_5f0,&uStack_740,0x150);
      func_0x000101614b3c(auStack_5f0);
      func_0x000107c610b4(auStack_498,param_1 + 0x10,0x151);
      func_0x000107c610b4(param_1 + 0x10,auStack_5f0,0x151);
      FUN_101618830(auStack_498,0x112db4000,&UNK_10d95e5a0);
      return;
    }
    lVar8 = 0;
  }
  FUN_1016186c0(uStack_340,lVar8,uStack_330,uStack_328,uStack_320);
  return;
}



/* Entry: 10160b9cc; end: 10160bd4b;  */

/* WARNING: Removing unreachable block (ram,0x00010160bc80) */

void FUN_10160b9cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long lStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 auStack_708 [43];
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 auStack_300 [43];
  undefined8 auStack_1a8 [43];
  
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_350 = 0;
  lStack_348 = 1;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_310 = 0;
  func_0x000107c610b4(auStack_300,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x10,0x151);
  puVar2 = auStack_300;
  FUN_10155b244();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_708,auStack_1a8,0x150);
    puVar2 = auStack_1a8;
    FUN_10155b330();
    if ((int)puVar2 == 1) {
      puVar3 = auStack_708;
      func_0x000100cb6ab0();
      uStack_398 = uStack_328;
      uStack_3a0 = uStack_330;
      uStack_388 = uStack_318;
      uStack_390 = uStack_320;
      uStack_380 = uStack_310;
      uStack_3d8 = uStack_368;
      uStack_3e0 = uStack_370;
      uStack_3c8 = uStack_358;
      uStack_3d0 = uStack_360;
      uStack_3a8 = uStack_338;
      uStack_3b0 = uStack_340;
      lStack_3b8 = lStack_348;
      uStack_3c0 = uStack_350;
      func_0x000107c610b4(&uStack_5b0,auStack_300,0x151);
      FUN_101614af8(&uStack_5b0,&uStack_860);
      puVar2 = &uStack_3e0;
      FUN_101618830(puVar2,0x112dba3a0,&UNK_10d96cf78);
      uStack_358 = puVar3[3];
      uStack_360 = puVar3[2];
      lStack_348 = puVar3[5];
      uStack_350 = puVar3[4];
      uStack_368 = puVar3[1];
      uStack_370 = *puVar3;
      uStack_328 = puVar3[9];
      uStack_330 = puVar3[8];
      uStack_318 = puVar3[0xb];
      uStack_320 = puVar3[10];
      uStack_310 = puVar3[0xc];
      uStack_338 = puVar3[7];
      uStack_340 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000101618480();
  (*pcVar6)(&uStack_370,&UNK_1103ea570,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_428 = lStack_348;
    uStack_430 = uStack_350;
    uStack_418 = uStack_338;
    uStack_420 = uStack_340;
    uStack_408 = uStack_328;
    uStack_410 = uStack_330;
    uStack_3f8 = uStack_318;
    uStack_400 = uStack_320;
    uStack_3f0 = uStack_310;
    uStack_448 = uStack_368;
    uStack_450 = uStack_370;
    uStack_438 = uStack_358;
    uStack_440 = uStack_360;
    uStack_3c8 = uStack_358;
    uStack_3d0 = uStack_360;
    uStack_3d8 = uStack_368;
    uStack_3e0 = uStack_370;
    uStack_380 = uStack_310;
    lStack_3b8 = lStack_348;
    uStack_3c0 = uStack_350;
    uStack_3a8 = uStack_338;
    uStack_3b0 = uStack_340;
    uStack_388 = uStack_318;
    uStack_390 = uStack_320;
    uStack_398 = uStack_328;
    uStack_3a0 = uStack_330;
    if (lStack_348 != 1) {
      if (iVar1 == 1) {
        uStack_568 = uStack_328;
        uStack_570 = uStack_330;
        uStack_558 = uStack_318;
        uStack_560 = uStack_320;
        uStack_550 = uStack_310;
        uStack_5a8 = uStack_368;
        uStack_5b0 = uStack_370;
        uStack_598 = uStack_358;
        uStack_5a0 = uStack_360;
        lStack_588 = lStack_348;
        uStack_590 = uStack_350;
        uStack_578 = uStack_338;
        uStack_580 = uStack_340;
        FUN_101614b58(&uStack_5b0,auStack_708);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_568 = uStack_328;
        uStack_570 = uStack_330;
        uStack_558 = uStack_318;
        uStack_560 = uStack_320;
        uStack_550 = uStack_310;
        uStack_5a8 = uStack_368;
        uStack_5b0 = uStack_370;
        uStack_598 = uStack_358;
        uStack_5a0 = uStack_360;
        lStack_588 = lStack_348;
        uStack_590 = uStack_350;
        uStack_578 = uStack_338;
        uStack_580 = uStack_340;
        FUN_101614b58(&uStack_5b0,auStack_708);
        (*pcVar6)(param_3,param_4);
      }
      FUN_101618830(&uStack_370,0x112dba3a0,&UNK_10d96cf78);
      uStack_818 = uStack_398;
      uStack_820 = uStack_3a0;
      uStack_808 = uStack_388;
      uStack_810 = uStack_390;
      uStack_800 = uStack_380;
      uStack_858 = uStack_3d8;
      uStack_860 = uStack_3e0;
      uStack_848 = uStack_3c8;
      uStack_850 = uStack_3d0;
      lStack_838 = lStack_3b8;
      uStack_840 = uStack_3c0;
      uStack_828 = uStack_3a8;
      uStack_830 = uStack_3b0;
      func_0x000101614b44(&uStack_860);
      func_0x000107c610b4(auStack_708,&uStack_860,0x150);
      func_0x000101614b3c(auStack_708);
      func_0x000107c610b4(&uStack_5b0,param_1 + 0x10,0x151);
      func_0x000107c610b4(param_1 + 0x10,auStack_708,0x151);
      uVar4 = 0x112db4000;
      puVar5 = &UNK_10d95e5a0;
      puVar2 = &uStack_5b0;
      goto LAB_10160bbc4;
    }
  }
  uVar4 = 0x112dba3a0;
  puVar5 = &UNK_10d96cf78;
  puVar2 = &uStack_370;
LAB_10160bbc4:
  FUN_101618830(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10160bd4c; end: 10160bddf;  */

void FUN_10160bd4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x178;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x178,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160bde0; end: 10160be73;  */

void FUN_10160bde0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 400;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101618400();
  (*pcVar2)(param_2 + 400,&UNK_1103eae20,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160be74; end: 10160bf07;  */

void FUN_10160be74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_101618380();
  (*pcVar2)(param_2 + 0x1a0,&UNK_1103e89f8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160bf08; end: 10160c1c3;  */

/* WARNING: Removing unreachable block (ram,0x00010160c114) */

void FUN_10160bf08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_c40 [336];
  undefined1 auStack_af0 [344];
  undefined1 auStack_998 [344];
  undefined1 auStack_840 [336];
  undefined1 auStack_6f0 [336];
  undefined1 auStack_5a0 [336];
  undefined1 auStack_450 [336];
  undefined1 auStack_300 [344];
  undefined1 auStack_1a8 [344];
  
  FUN_10161870c(auStack_450);
  func_0x000107c610b4(auStack_5a0,auStack_450,0x150);
  func_0x000107c610b4(auStack_300,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x10,0x151);
  puVar3 = auStack_300;
  FUN_10155b244();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_af0,auStack_1a8,0x150);
    puVar3 = auStack_1a8;
    FUN_10155b330();
    if ((int)puVar3 == 2) {
      puVar3 = auStack_af0;
      func_0x000100cb6ab0(puVar3);
      func_0x000107c610b4(auStack_840,auStack_5a0,0x150);
      func_0x000107c610b4(auStack_998,auStack_300,0x151);
      FUN_101614af8(auStack_998,auStack_6f0);
      FUN_101618830(auStack_840,0x112dba3a8,&UNK_10d96cf80);
      func_0x000107c610b4(auStack_6f0,puVar3,0x150);
      func_0x000101618758(auStack_6f0);
      puVar3 = auStack_5a0;
      func_0x000107c610b4(puVar3,auStack_6f0,0x150);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_10155b3b0();
  (*pcVar6)(auStack_5a0,&UNK_110551238,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_840,auStack_5a0,0x150);
    func_0x000107c610b4(auStack_6f0,auStack_5a0,0x150);
    iVar2 = (int)auStack_840;
    func_0x000101618740();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_998,auStack_840,0x150);
        FUN_101614ba8(auStack_998,auStack_af0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_998,auStack_840,0x150);
        FUN_101614ba8(auStack_998,auStack_af0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_101618830(auStack_5a0,0x112dba3a8,&UNK_10d96cf80);
      func_0x000107c610b4(auStack_c40,auStack_6f0,0x150);
      FUN_101614b94(auStack_c40);
      func_0x000107c610b4(auStack_af0,auStack_c40,0x150);
      func_0x000101614b3c(auStack_af0);
      func_0x000107c610b4(auStack_998,param_1 + 0x10,0x151);
      func_0x000107c610b4(param_1 + 0x10,auStack_af0,0x151);
      uVar4 = 0x112db4000;
      puVar5 = &UNK_10d95e5a0;
      puVar3 = auStack_998;
      goto LAB_10160c090;
    }
  }
  uVar4 = 0x112dba3a8;
  puVar5 = &UNK_10d96cf80;
  puVar3 = auStack_5a0;
LAB_10160c090:
  FUN_101618830(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 10160c1c4; end: 10160c257;  */

void FUN_10160c1c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1016156f4();
  (*pcVar2)(param_2 + 0x1b0,&UNK_1103e8b80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c258; end: 10160c2eb;  */

void FUN_10160c258(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618680();
  (*pcVar2)(param_2 + 0x1c8,&UNK_1103e9db8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c2ec; end: 10160c37f;  */

void FUN_10160c2ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x2a8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c380; end: 10160c413;  */

void FUN_10160c380(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618640();
  (*pcVar2)(param_2 + 0x2c0,&UNK_1103e9490,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c414; end: 10160c4a7;  */

void FUN_10160c414(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618600();
  (*pcVar2)(param_2 + 0x3c0,&UNK_1103e9078,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c4a8; end: 10160c53b;  */

void FUN_10160c4a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x4f8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c53c; end: 10160c5cf;  */

void FUN_10160c53c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x510;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x510,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c5d0; end: 10160c663;  */

void FUN_10160c5d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x528;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001016185c0();
  (*pcVar2)(param_2 + 0x528,&UNK_1103e96a0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c664; end: 10160c6f7;  */

void FUN_10160c664(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x568;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x568,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c6f8; end: 10160c78b;  */

void FUN_10160c6f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x588;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x588,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c78c; end: 10160c81f;  */

void FUN_10160c78c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x5a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10155b424();
  (*pcVar2)(param_2 + 0x5a0,&UNK_1103ea3c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c820; end: 10160c8b3;  */

void FUN_10160c820(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x5f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x5f8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c8b4; end: 10160c947;  */

void FUN_10160c8b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x610;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001016183c0();
  (*pcVar2)(param_2 + 0x610,&UNK_1103e98f0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c948; end: 10160c9db;  */

void FUN_10160c948(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x620;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x620,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160c9dc; end: 10160ca6f;  */

void FUN_10160c9dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x638;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618580();
  (*pcVar2)(param_2 + 0x638,&UNK_1103ea208,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160ca70; end: 10160cb03;  */

void FUN_10160ca70(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x678;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101615820();
  (*pcVar2)(param_2 + 0x678,&UNK_1103e8c90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160cb04; end: 10160cb97;  */

void FUN_10160cb04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x6a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618540();
  (*pcVar2)(param_2 + 0x6a8,&UNK_1103ea908,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160cb98; end: 10160ceaf;  */

/* WARNING: Removing unreachable block (ram,0x00010160cdd4) */

void FUN_10160cb98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x21;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 auStack_600 [43];
  undefined1 auStack_4a8 [344];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [344];
  undefined1 auStack_1c0 [352];
  
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_320 = 0;
  lStack_330 = 1;
  uStack_328 = 0;
  func_0x000107c610b4(auStack_318,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1c0,param_1 + 0x10,0x151);
  puVar3 = auStack_318;
  FUN_10155b244();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_600,auStack_1c0,0x150);
    puVar3 = auStack_1c0;
    FUN_10155b330();
    if ((int)puVar3 == 3) {
      puVar2 = auStack_600;
      func_0x000100cb6ab0();
      uVar4 = puVar2[6];
      uVar11 = puVar2[1];
      uVar10 = *puVar2;
      uVar8 = puVar2[3];
      uVar6 = puVar2[2];
      uVar9 = puVar2[5];
      lVar7 = puVar2[4];
      func_0x000107c610b4(auStack_4a8,auStack_318,0x151);
      FUN_101614af8(auStack_4a8,&uStack_750);
      puVar3 = (undefined1 *)0x0;
      FUN_10161875c(0,0,0,0,1,0,0);
      uStack_350 = uVar10;
      uStack_348 = uVar11;
      uStack_340 = uVar6;
      uStack_338 = uVar8;
      lStack_330 = lVar7;
      uStack_328 = uVar9;
      uStack_320 = uVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000101618500();
  (*pcVar5)(&uStack_350,&UNK_1103ea720,puVar3,param_3,param_4);
  uVar11 = uStack_320;
  uVar10 = uStack_328;
  lVar7 = lStack_330;
  uVar9 = uStack_338;
  uVar8 = uStack_340;
  uVar6 = uStack_348;
  uVar4 = uStack_350;
  if (unaff_x21 == 0) {
    if (lStack_330 == 1) {
      FUN_10161875c(uStack_350,uStack_348,uStack_340,uStack_338,1);
    }
    else {
      if (iVar1 == 1) {
        func_0x00010006c00c(uStack_350,uStack_348);
        func_0x000101541428(uVar8,uVar9,lVar7,uVar10,uVar11);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_350,uStack_348);
        func_0x000101541428(uVar8,uVar9,lVar7,uVar10,uVar11);
        (*pcVar5)(param_3,param_4);
      }
      FUN_10161875c(uStack_350,uStack_348,uStack_340,uStack_338,lStack_330,uStack_328,uStack_320);
      uStack_750 = uVar4;
      uStack_748 = uVar6;
      uStack_740 = uVar8;
      uStack_738 = uVar9;
      lStack_730 = lVar7;
      uStack_728 = uVar10;
      uStack_720 = uVar11;
      FUN_101614be4(&uStack_750);
      func_0x000107c610b4(auStack_600,&uStack_750,0x150);
      func_0x000101614b3c(auStack_600);
      func_0x000107c610b4(auStack_4a8,param_1 + 0x10,0x151);
      func_0x000107c610b4(param_1 + 0x10,auStack_600,0x151);
      FUN_101618830(auStack_4a8,0x112db4000,&UNK_10d95e5a0);
    }
  }
  else {
    FUN_10161875c(uStack_350,uStack_348,uStack_340,uStack_338,lStack_330,uStack_328,uStack_320);
  }
  return;
}



/* Entry: 10160ceb0; end: 10160cf43;  */

void FUN_10160ceb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x768;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001016184c0();
  (*pcVar2)(param_2 + 0x768,&UNK_1103eabd8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10160cf44; end: 10160d4a7;  */

void FUN_10160cf44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_5f0 [336];
  undefined1 auStack_4a0 [344];
  long lStack_348;
  undefined1 uStack_340;
  long lStack_330;
  undefined1 uStack_328;
  long lStack_318;
  undefined1 uStack_310;
  undefined1 auStack_300 [344];
  undefined1 auStack_1a8 [344];
  
  func_0x000107c610b4(auStack_300,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_1a8,param_1 + 0x10,0x151);
  iVar4 = (int)auStack_300;
  FUN_10155b244();
  if (iVar4 != 1) {
    iVar4 = (int)auStack_1a8;
    FUN_10155b330();
    if (iVar4 == 1) {
      func_0x000107c610b4(auStack_4a0,auStack_300,0x151);
      FUN_101614af8(auStack_4a0,auStack_5f0);
      FUN_10160d584(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar4 != 0) goto LAB_10160d04c;
      func_0x000107c610b4(auStack_4a0,auStack_300,0x151);
      FUN_101614af8(auStack_4a0,auStack_5f0);
      FUN_10160d4a8(param_1,param_2,param_3,param_4);
    }
    if (unaff_x21 != 0) {
      FUN_101618830(auStack_300,0x112db4000,&UNK_10d95e5a0);
      return;
    }
    FUN_101618830(auStack_300,0x112db4000,&UNK_10d95e5a0);
  }
LAB_10160d04c:
  func_0x000107c61428(param_1 + 0x168,auStack_4a0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x168);
  uVar3 = *(ulong *)(param_1 + 0x170);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar6 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar6)(uVar2,uVar3,3,param_3,param_4);
    if (unaff_x21 != 0) {
      func_0x000107c6142c(uVar3);
      return;
    }
    func_0x000107c6142c(uVar3);
  }
  FUN_10160d678(param_1,param_2,param_3,param_4);
  if (unaff_x21 == 0) {
    lVar5 = param_1 + 400;
    func_0x000107c61428(lVar5,auStack_5f0,0,0);
    if (*(long *)(param_1 + 400) != 0) {
      uStack_310 = *(undefined1 *)(param_1 + 0x198);
      pcVar6 = *(code **)(param_4 + 0x80);
      lStack_318 = *(long *)(param_1 + 400);
      func_0x000101618400();
      (*pcVar6)(&lStack_318,5,&UNK_1103eae20,lVar5,param_3,param_4);
    }
    lVar5 = param_1 + 0x1a0;
    func_0x000107c61428(lVar5,&lStack_318,0,0);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      uStack_328 = *(undefined1 *)(param_1 + 0x1a8);
      pcVar6 = *(code **)(param_4 + 0x80);
      lStack_330 = *(long *)(param_1 + 0x1a0);
      func_0x000101618380();
      (*pcVar6)(&lStack_330,6,&UNK_1103e89f8,lVar5,param_3,param_4);
    }
    FUN_10160d720(param_1,param_2,param_3,param_4);
    FUN_10160d800(param_1,param_2,param_3,param_4);
    FUN_10160d8a0(param_1,param_2,param_3,param_4);
    FUN_10160d9e8(param_1,param_2,param_3,param_4);
    FUN_10160da94(param_1,param_2,param_3,param_4);
    FUN_10160dbf4(param_1,param_2,param_3,param_4);
    FUN_10160dcc0(param_1,param_2,param_3,param_4);
    FUN_10160dd68(param_1,param_2,param_3,param_4);
    FUN_10160de14(param_1,param_2,param_3,param_4);
    FUN_10160decc(param_1,param_2,param_3,param_4);
    FUN_10160df74(param_1,param_2,param_3,param_4);
    FUN_10160e020(param_1,param_2,param_3,param_4);
    FUN_10160e0e0(param_1,param_2,param_3,param_4);
    lVar5 = param_1 + 0x610;
    func_0x000107c61428(lVar5,&lStack_330,0,0);
    if (*(long *)(param_1 + 0x610) != 0) {
      uStack_340 = *(undefined1 *)(param_1 + 0x618);
      pcVar6 = *(code **)(param_4 + 0x80);
      lStack_348 = *(long *)(param_1 + 0x610);
      func_0x0001016183c0();
      (*pcVar6)(&lStack_348,0x15,&UNK_1103e98f0,lVar5,param_3,param_4);
    }
    FUN_10160e188(param_1,param_2,param_3,param_4);
    FUN_10160e234(param_1,param_2,param_3,param_4);
    FUN_10160e2f0(param_1,param_2,param_3,param_4);
    FUN_10160e3ac(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x760,&lStack_348,0,0);
    if (*(int *)(param_1 + 0x760) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x760),0x1a,param_3,param_4);
    }
    FUN_10160e4fc(param_1,param_2,param_3,param_4);
    FUN_10160e5e4(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 10160d4a8; end: 10160d583;  */

void FUN_10160d4a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 auStack_440 [42];
  undefined1 auStack_2f0 [344];
  undefined1 auStack_198 [344];
  
  func_0x000107c610b4(auStack_2f0,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_198,param_1 + 0x10,0x151);
  iVar1 = (int)auStack_2f0;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_440,auStack_198,0x150);
    iVar1 = (int)auStack_198;
    FUN_10155b330();
    if (iVar1 == 0) {
      puVar2 = auStack_440;
      func_0x000100cb6ab0();
      uStack_468 = *puVar2;
      uStack_448 = puVar2[4];
      uStack_450 = puVar2[3];
      uStack_458 = puVar2[2];
      uStack_460 = puVar2[1];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101618440();
      (*pcVar3)(&uStack_468,1,&UNK_1103eee58,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10160d584);
  (*pcVar3)();
}



/* Entry: 10160d584; end: 10160d677;  */

void FUN_10160d584(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 auStack_440 [42];
  undefined1 auStack_2f0 [344];
  undefined1 auStack_198 [344];
  
  func_0x000107c610b4(auStack_2f0,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_198,param_1 + 0x10,0x151);
  iVar1 = (int)auStack_2f0;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_440,auStack_198,0x150);
    iVar1 = (int)auStack_198;
    FUN_10155b330();
    if (iVar1 == 1) {
      puVar2 = auStack_440;
      func_0x000100cb6ab0();
      uStack_4a8 = puVar2[1];
      uStack_4b0 = *puVar2;
      uStack_498 = puVar2[3];
      uStack_4a0 = puVar2[2];
      uStack_488 = puVar2[5];
      uStack_490 = puVar2[4];
      uStack_478 = puVar2[7];
      uStack_480 = puVar2[6];
      uStack_468 = puVar2[9];
      uStack_470 = puVar2[8];
      uStack_458 = puVar2[0xb];
      uStack_460 = puVar2[10];
      uStack_450 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101618480();
      (*pcVar3)(&uStack_4b0,2,&UNK_1103ea570,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10160d678);
  (*pcVar3)();
}



/* Entry: 10160d678; end: 10160d71f;  */

void FUN_10160d678(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x178;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x178) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x178) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x188);
    uStack_68 = *(undefined8 *)(param_1 + 0x180);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,4,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160d720; end: 10160d7ff;  */

void FUN_10160d720(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_590 [336];
  undefined1 auStack_440 [336];
  undefined1 auStack_2f0 [344];
  undefined1 auStack_198 [344];
  
  puVar3 = auStack_590;
  func_0x000107c610b4(auStack_2f0,param_1 + 0x10,0x151);
  func_0x000107c610b4(auStack_198,param_1 + 0x10,0x151);
  iVar1 = (int)auStack_2f0;
  FUN_10155b244();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_440,auStack_198,0x150);
    iVar1 = (int)auStack_198;
    FUN_10155b330();
    if (iVar1 == 2) {
      puVar2 = auStack_440;
      func_0x000100cb6ab0(puVar2);
      func_0x000107c610b4(auStack_590,puVar2,0x150);
      pcVar4 = *(code **)(param_4 + 0x88);
      FUN_10155b3b0();
      (*pcVar4)(auStack_590,7,&UNK_110551238,puVar3,param_3,param_4);
    }
  }
  return;
}



/* Entry: 10160d800; end: 10160d89f;  */

void FUN_10160d800(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x1c0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1016156f4();
    (*pcVar2)(&uStack_70,8,&UNK_1103e8b80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10160d8a0; end: 10160d9e7;  */

void FUN_10160d8a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428(puVar1,auStack_218,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x270);
  uStack_80 = *(undefined8 *)(param_1 + 0x268);
  uStack_148 = *(undefined8 *)(param_1 + 0x280);
  uStack_150 = *(undefined8 *)(param_1 + 0x278);
  uStack_88 = *(undefined8 *)(param_1 + 0x260);
  uStack_90 = *(undefined8 *)(param_1 + 600);
  uStack_158 = *(undefined8 *)(param_1 + 0x270);
  uStack_160 = *(undefined8 *)(param_1 + 0x268);
  uStack_68 = *(undefined8 *)(param_1 + 0x280);
  uStack_70 = *(undefined8 *)(param_1 + 0x278);
  uStack_138 = *(undefined8 *)(param_1 + 0x290);
  uStack_140 = *(undefined8 *)(param_1 + 0x288);
  uStack_58 = *(undefined8 *)(param_1 + 0x290);
  uStack_60 = *(undefined8 *)(param_1 + 0x288);
  uStack_128 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_130 = *(undefined8 *)(param_1 + 0x298);
  uStack_b8 = *(undefined8 *)(param_1 + 0x230);
  uStack_c0 = *(undefined8 *)(param_1 + 0x228);
  uStack_188 = *(undefined8 *)(param_1 + 0x240);
  uStack_190 = *(undefined8 *)(param_1 + 0x238);
  uStack_c8 = *(undefined8 *)(param_1 + 0x220);
  uStack_d0 = *(undefined8 *)(param_1 + 0x218);
  uStack_198 = *(undefined8 *)(param_1 + 0x230);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x228);
  uStack_a8 = *(undefined8 *)(param_1 + 0x240);
  uStack_b0 = *(undefined8 *)(param_1 + 0x238);
  uStack_178 = *(undefined8 *)(param_1 + 0x250);
  uStack_180 = *(undefined8 *)(param_1 + 0x248);
  uStack_98 = *(undefined8 *)(param_1 + 0x250);
  uStack_a0 = *(undefined8 *)(param_1 + 0x248);
  uStack_168 = *(undefined8 *)(param_1 + 0x260);
  uStack_170 = *(undefined8 *)(param_1 + 600);
  uStack_f8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_100 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x200);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_108 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_e8 = *(undefined8 *)(param_1 + 0x200);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x210);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x208);
  uStack_d8 = *(undefined8 *)(param_1 + 0x210);
  uStack_e0 = *(undefined8 *)(param_1 + 0x208);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x220);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x218);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_200 = *puVar1;
  uStack_1e8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_118 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_120 = *puVar1;
  uStack_48 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_50 = *(undefined8 *)(param_1 + 0x298);
  puVar1 = &uStack_200;
  func_0x000101614bf4();
  if ((int)puVar1 != 1) {
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_228 = uStack_48;
    uStack_230 = uStack_50;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101618680();
    (*pcVar2)(&uStack_300,9,&UNK_1103e9db8,puVar1,param_3,param_4);
  }
  return;
}


