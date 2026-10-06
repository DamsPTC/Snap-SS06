/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a190f4; end: 103a19117;  */

void FUN_103a190f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a19118();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a19118; end: 103a19157;  */

void FUN_103a19118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3abb8;
  func_0x000107c61520(&UNK_10dc3abb8,&UNK_1106bf010);
  puRam0000000112fca708 = puVar1;
  return;
}



/* Entry: 103a19158; end: 103a1916b;  */

void FUN_103a19158(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a18efc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a1916c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a1916c; end: 103a191ab;  */

void FUN_103a1916c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3ab70;
  func_0x000107c61520(&DAT_10dc3ab70,&UNK_1106bf010);
  puRam0000000112fca710 = puVar1;
  return;
}



/* Entry: 103a191ac; end: 103a191af;  */

void FUN_103a191ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ac20;
  func_0x000107c61520(&UNK_10dc3ac20,&UNK_1106bf010);
  puRam0000000112fca718 = puVar1;
  return;
}



/* Entry: 103a191b0; end: 103a191ef;  */

void FUN_103a191b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ac20;
  func_0x000107c61520(&UNK_10dc3ac20,&UNK_1106bf010);
  puRam0000000112fca718 = puVar1;
  return;
}



/* Entry: 103a191f0; end: 103a19213;  */

void FUN_103a191f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a19214();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a19214; end: 103a19253;  */

void FUN_103a19214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ac90;
  func_0x000107c61520(&UNK_10dc3ac90,&UNK_1106bf098);
  puRam0000000112fca720 = puVar1;
  return;
}



/* Entry: 103a19254; end: 103a19267;  */

void FUN_103a19254(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a190b4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a19298();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a19268; end: 103a19297;  */

void FUN_103a19268(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a19298; end: 103a192d7;  */

void FUN_103a19298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3ac48;
  func_0x000107c61520(&DAT_10dc3ac48,&UNK_1106bf098);
  puRam0000000112fca728 = puVar1;
  return;
}



/* Entry: 103a192d8; end: 103a192db;  */

void FUN_103a192d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3acf8;
  func_0x000107c61520(&UNK_10dc3acf8,&UNK_1106bf098);
  puRam0000000112fca730 = puVar1;
  return;
}



/* Entry: 103a192dc; end: 103a1931b;  */

void FUN_103a192dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3acf8;
  func_0x000107c61520(&UNK_10dc3acf8,&UNK_1106bf098);
  puRam0000000112fca730 = puVar1;
  return;
}



/* Entry: 103a1931c; end: 103a1934b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a1931c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103a1934c; end: 103a1942b;  */

undefined8 * FUN_103a1934c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 103a1942c; end: 103a1947f;  */

undefined8 * FUN_103a1942c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103a19480; end: 103a19523;  */

int FUN_103a19480(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a19524; end: 103a19563;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a19524(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103a19564; end: 103a195f3;  */

undefined8 * FUN_103a19564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar2;
  uVar5 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar4,uVar5);
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  return param_1;
}



/* Entry: 103a195f4; end: 103a196b3;  */

undefined8 * FUN_103a195f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[7];
  uVar2 = param_2[8];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103a196b4; end: 103a19737;  */

undefined8 * FUN_103a196b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x000107c6142c(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103a19738; end: 103a197df;  */

int FUN_103a19738(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a197e0; end: 103a1985f;  */

void FUN_103a197e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3ac64;
  func_0x000107c61520(&DAT_10dc3ac64,&UNK_1106bf098);
  puRam0000000112fca740 = puVar1;
  return;
}



/* Entry: 103a19860; end: 103a19867;  */

long FUN_103a19860(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a19868; end: 103a198a7;  */

long FUN_103a19868(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 103a198a8; end: 103a198c3;  */

void FUN_103a198a8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 103a198c4; end: 103a198df;  */

void FUN_103a198c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103a198e0,0,0);
  return;
}



/* Entry: 103a198e0; end: 103a19a37;  */

/* WARNING: Removing unreachable block (ram,0x000103a19974) */

void FUN_103a198e0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x110);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0x120) + 0x10,unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  lVar4 = unaff_x22 + 0xd0;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0xa8) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar11;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  FUN_103a1916c();
  func_0x000100075890(unaff_x22 + 0xf8,0,0,&UNK_1106bf010,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar5;
  plVar6 = plVar5;
  FUN_103a19298();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103a19a38;
                    /* WARNING: Could not recover jumptable at 0x000103a19a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x10,0xd00000000000002f,0x800000010f1888d0,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0x118),&UNK_1106bf098,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 103a19a38; end: 103a19aa3;  */

void FUN_103a19a38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = FUN_103a19aa4;
  }
  else {
    func_0x00010006c090(*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
    pcVar1 = (code *)0x103a19b20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103a19aa4; end: 103a19b97;  */

void FUN_103a19aa4(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x60);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1[8] = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000103a19b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103a19b98; end: 103a19bc7;  */

void FUN_103a19b98(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 103a19bc8; end: 103a19c07;  */

void FUN_103a19bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fca870;
  func_0x0001000285a8(0x112fca870,&UNK_10dc3ae70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103a19c08; end: 103a19c2f;  */

void FUN_103a19c08(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103a19c30; end: 103a19cdb;  */

void FUN_103a19c30(void)

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



/* Entry: 103a19cdc; end: 103a19cef;  */

bool FUN_103a19cdc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a19cf0; end: 103a19d37;  */

void FUN_103a19cf0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3b140,0x41,2);
  uRam000000011380cc20 = uStack_38;
  uRam000000011380cc18 = uStack_40;
  uRam000000011380cc30 = uStack_28;
  uRam000000011380cc28 = uStack_30;
  uRam000000011380cc40 = uStack_18;
  uRam000000011380cc38 = uStack_20;
  return;
}



/* Entry: 103a19d38; end: 103a19dd7;  */

/* WARNING: Possible PIC construction at 0x000103a19d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a19d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a19d88) */
/* WARNING: Removing unreachable block (ram,0x000103a19d98) */

void FUN_103a19d38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fca878 != -1) {
    func_0x000107c61568(0x112fca878,FUN_103a19cf0);
  }
  uVar5 = uRam000000011380cc40;
  uVar4 = uRam000000011380cc38;
  uVar3 = uRam000000011380cc30;
  uVar2 = uRam000000011380cc28;
  uVar1 = uRam000000011380cc20;
  *param_1 = uRam000000011380cc18;
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



/* Entry: 103a19dd8; end: 103a19e1f;  */

void FUN_103a19dd8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3b0d0,0x66,2);
  uRam000000011380cc50 = uStack_38;
  uRam000000011380cc48 = uStack_40;
  uRam000000011380cc60 = uStack_28;
  uRam000000011380cc58 = uStack_30;
  uRam000000011380cc70 = uStack_18;
  uRam000000011380cc68 = uStack_20;
  return;
}



/* Entry: 103a19e20; end: 103a19f4b;  */

/* WARNING: Removing unreachable block (ram,0x000103a19f30) */

void FUN_103a19e20(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar3 = *(code **)(param_3 + 0x160);
            lVar1 = unaff_x20 + 0x10;
          }
          else {
            if (lVar1 != 3) goto LAB_103a19e98;
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x18;
          }
          goto LAB_103a19e88;
        }
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103a18f3c();
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x20;
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x28;
        }
        else {
          if (lVar1 != 6) goto LAB_103a19e98;
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_103a19e88:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103a19e98:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a19f4c; end: 103a1a097;  */

void FUN_103a19f4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103a18f3c();
    (*pcVar2)(&lStack_50,1,&UNK_1106bf2b0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((((*(long *)(unaff_x20[2] + 0x10) == 0) ||
         ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
        (((int)unaff_x20[3] == 0 ||
         ((**(code **)(param_3 + 0x18))((int)unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x100))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) &&
      ((*(long *)(unaff_x20[5] + 0x10) == 0 ||
       ((**(code **)(param_3 + 0x100))(unaff_x20[5],5,param_2,param_3), unaff_x21 == 0)))) &&
     ((*(long *)(unaff_x20[6] + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x100))(unaff_x20[6],6,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  }
  return;
}



/* Entry: 103a1a098; end: 103a1a0ef;  */

void FUN_103a1a098(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 103a1a0f0; end: 103a1a11f;  */

undefined1  [16] FUN_103a1a0f0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 103a1a120; end: 103a1a153;  */

void FUN_103a1a120(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 103a1a154; end: 103a1a167;  */

undefined1  [16] FUN_103a1a154(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x103a1a164;
  return auVar1;
}



/* Entry: 103a1a168; end: 103a1a18f;  */

void FUN_103a1a168(void)

{
  FUN_103a19e20();
  return;
}



/* Entry: 103a1a190; end: 103a1a193;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a1a190(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103a1a194; end: 103a1a1cb;  */

uint FUN_103a1a194(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103a1abc4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103a1a1cc; end: 103a1a223;  */

uint FUN_103a1a1cc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103a1a46c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a1a224; end: 103a1a2c3;  */

/* WARNING: Possible PIC construction at 0x000103a1a270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a1a280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1a274) */
/* WARNING: Removing unreachable block (ram,0x000103a1a284) */

void FUN_103a1a224(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fca880 != -1) {
    func_0x000107c61568(0x112fca880,FUN_103a19dd8);
  }
  uVar5 = uRam000000011380cc70;
  uVar4 = uRam000000011380cc68;
  uVar3 = uRam000000011380cc60;
  uVar2 = uRam000000011380cc58;
  uVar1 = uRam000000011380cc50;
  *param_1 = uRam000000011380cc48;
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



/* Entry: 103a1a2c4; end: 103a1a2ff;  */

void FUN_103a1a2c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca8d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca8d0,&UNK_10dc3b0c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a1a300; end: 103a1a413;  */

void FUN_103a1a300(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a1a414; end: 103a1a46b;  */

uint FUN_103a1a414(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103a1a46c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a1a46c; end: 103a1a5a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a1a584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103a1a588) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a1a46c(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar22 = param_1[2];
  lVar23 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar23 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar23) {
      puVar28 = (undefined8 *)(lVar23 + 0x28);
      puVar29 = (undefined8 *)(lVar22 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if ((int)param_1[3] == (int)param_2[3]) {
      uVar13 = param_1[4];
      func_0x00010142cfc4(uVar13,param_2[4]);
      if ((uVar13 & 1) != 0) {
        uVar13 = param_1[5];
        func_0x00010142cfc4(uVar13,param_2[5]);
        if ((uVar13 & 1) != 0) {
          uVar13 = param_1[6];
          func_0x00010142cfc4(uVar13,param_2[6]);
          if ((uVar13 & 1) != 0) {
            pbVar10 = (byte *)param_1[7];
            pbVar27 = (byte *)param_1[8];
            lVar19 = param_2[7];
            uVar13 = param_2[8];
            puVar7 = (undefined1 *)register0x00000008;
            do {
              *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
              *(byte **)(puVar7 + -0x48) = unaff_x25;
              *(byte **)(puVar7 + -0x40) = unaff_x24;
              *(byte **)(puVar7 + -0x38) = unaff_x23;
              *(ulong *)(puVar7 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
              *(ulong *)(puVar7 + -0x20) = unaff_x20;
              *(byte **)(puVar7 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar7 + -8) = unaff_x30;
              *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = (uint)((ulong)pbVar27 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar13 >> 0x20);
              uVar24 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar14 = pbVar27;
              if ((ulong)pbVar27 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                    (uVar13 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar24 == 0) {
                  uVar25 = uVar13 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar24 == 2) {
                  uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      puVar7[-0x70] = (char)pbVar10;
                      puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                      puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                      puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                      puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                      puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                      puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                      puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                      puVar7[-0x68] = (char)pbVar27;
                      puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                      pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto code_r0x000100e262b0;
                    }
                    unaff_x25 = (byte *)(long)iVar8;
                    unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                    if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec30();
                    unaff_x24 = pbVar27;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar14 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar14) {
                          pbVar14 = unaff_x23;
                        }
                        pbVar14 = pbVar14 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar14 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar14 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar27;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar14 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar13;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
                }
              }
code_r0x000100e262b0:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                return pbVar9;
              }
              func_0x000107c60e78();
              *(byte **)(puVar7 + -0xc0) = unaff_x24;
              *(byte **)(puVar7 + -0xb8) = unaff_x23;
              *(ulong *)(puVar7 + -0xb0) = unaff_x22;
              *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
              *(ulong *)(puVar7 + -0xa0) = unaff_x20;
              *(byte **)(puVar7 + -0x98) = unaff_x19;
              *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar26 = *(byte **)(pbVar9 + 0x18);
              bVar30 = pbVar9[0x28];
              pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar15 = pbVar10;
              if (bVar30 < 3) {
                if (bVar30 == 0) {
                  if (pbVar14[0x28] == 0) {
                    lVar19 = *(long *)pbVar14;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar30 == 1) {
                  if (pbVar14[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)(pbVar14 + 8);
                  pbVar17 = *(byte **)(pbVar14 + 0x10);
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar27;
                  if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar14[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar26 != (byte *)0x0) {
                      if (lVar19 == 0) {
                        return (byte *)0x0;
                      }
                      func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                      func_0x000107c61174(lVar19);
                      func_0x000107c61174();
                      pbVar12 = pbVar26;
                      func_0x000107c60118();
                      func_0x000107c61170(pbVar26);
                      func_0x000107c61170(lVar19);
                      pbVar26 = pbVar12;
                      goto joined_r0x000100e266a4;
                    }
joined_r0x000100e26620:
                    if (lVar19 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                }
                goto code_r0x000107c605b8;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar30 < 5) {
                if (bVar30 != 3) {
                  if (pbVar14[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar27, pbVar15 = pbVar26, pbVar16 = *(byte **)(pbVar14 + 0x10),
                     pbVar17 = *(byte **)(pbVar14 + 0x18),
                     pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar26 == *(byte **)(pbVar14 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar14[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar14 + 0x10);
                lVar19 = *(long *)(pbVar14 + 0x20);
                if (pbVar27 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)(pbVar14 + 8);
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar27;
                  if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
                    return pbVar12;
                  }
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar26 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar26,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                  if (((ulong)pbVar26 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
                goto joined_r0x000100e26620;
              }
              if (bVar30 != 5) {
                if ((((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar27 == (byte *)0x0) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar14 + 0x20);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  bVar30 = pbVar14[8] | (byte)lVar19;
                  bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                  bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar38 = pbVar14[0x10] | (byte)lVar22;
                  bVar39 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar40 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar41 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar42 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar43 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar44 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar45 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
                  auVar46[1] = bVar31;
                  auVar46[0] = bVar30;
                  auVar46[2] = bVar32;
                  auVar46[3] = bVar33;
                  auVar46[4] = bVar34;
                  auVar46[5] = bVar35;
                  auVar46[6] = bVar36;
                  auVar46[7] = bVar37;
                  auVar46[8] = bVar38;
                  auVar46[9] = bVar39;
                  auVar46[10] = bVar40;
                  auVar46[0xb] = bVar41;
                  auVar46[0xc] = bVar42;
                  auVar46[0xd] = bVar43;
                  auVar46[0xe] = bVar44;
                  auVar46[0xf] = bVar45;
                  auVar3[1] = bVar31;
                  auVar3[0] = bVar30;
                  auVar3[2] = bVar32;
                  auVar3[3] = bVar33;
                  auVar3[4] = bVar34;
                  auVar3[5] = bVar35;
                  auVar3[6] = bVar36;
                  auVar3[7] = bVar37;
                  auVar3[8] = bVar38;
                  auVar3[9] = bVar39;
                  auVar3[10] = bVar40;
                  auVar3[0xb] = bVar41;
                  auVar3[0xc] = bVar42;
                  auVar3[0xd] = bVar43;
                  auVar3[0xe] = bVar44;
                  auVar3[0xf] = bVar45;
                  auVar46 = NEON_ext(auVar46,auVar3,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar14 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && lVar22 == 0)) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar14 != 1) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar14 != 2) {
                    return (byte *)0x0;
                  }
                }
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar30 = pbVar14[8] | (byte)lVar19;
                bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar38 = pbVar14[0x10] | (byte)lVar22;
                bVar39 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar40 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar41 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar42 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar43 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar44 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar45 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar1[1] = bVar31;
                auVar1[0] = bVar30;
                auVar1[2] = bVar32;
                auVar1[3] = bVar33;
                auVar1[4] = bVar34;
                auVar1[5] = bVar35;
                auVar1[6] = bVar36;
                auVar1[7] = bVar37;
                auVar1[8] = bVar38;
                auVar1[9] = bVar39;
                auVar1[10] = bVar40;
                auVar1[0xb] = bVar41;
                auVar1[0xc] = bVar42;
                auVar1[0xd] = bVar43;
                auVar1[0xe] = bVar44;
                auVar1[0xf] = bVar45;
                auVar2[1] = bVar31;
                auVar2[0] = bVar30;
                auVar2[2] = bVar32;
                auVar2[3] = bVar33;
                auVar2[4] = bVar34;
                auVar2[5] = bVar35;
                auVar2[6] = bVar36;
                auVar2[7] = bVar37;
                auVar2[8] = bVar38;
                auVar2[9] = bVar39;
                auVar2[10] = bVar40;
                auVar2[0xb] = bVar41;
                auVar2[0xc] = bVar42;
                auVar2[0xd] = bVar43;
                auVar2[0xe] = bVar44;
                auVar2[0xf] = bVar45;
                auVar46 = NEON_ext(auVar1,auVar2,8,1);
                lVar19 = CONCAT17(bVar37 | auVar46[7],
                                  CONCAT16(bVar36 | auVar46[6],
                                           CONCAT15(bVar35 | auVar46[5],
                                                    CONCAT14(bVar34 | auVar46[4],
                                                             CONCAT13(bVar33 | auVar46[3],
                                                                      CONCAT12(bVar32 | auVar46[2],
                                                                               CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar14[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar14 + 8);
              uVar13 = *(ulong *)(pbVar14 + 0x10);
              lVar22 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
              unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
              unaff_x20 = *(ulong *)(puVar7 + -0xa0);
              unaff_x19 = *(byte **)(puVar7 + -0x98);
              unaff_x22 = *(ulong *)(puVar7 + -0xb0);
              unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
              unaff_x24 = *(byte **)(puVar7 + -0xc0);
              unaff_x23 = *(byte **)(puVar7 + -0xb8);
              puVar7 = puVar7 + -0x80;
            } while( true );
          }
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103a1a5a4; end: 103a1a5e3;  */

void FUN_103a1a5a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3aff8;
  func_0x000107c61520(&UNK_10dc3aff8,&UNK_1106bf328);
  puRam0000000112fca888 = puVar1;
  return;
}



/* Entry: 103a1a5e4; end: 103a1a5f7;  */

void FUN_103a1a5e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a1a5f8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103a1a638)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a1a5f8; end: 103a1a677;  */

void FUN_103a1a5f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3af10;
  func_0x000107c61520(&UNK_10dc3af10,&UNK_1106bf2b0);
  puRam0000000112fca890 = puVar1;
  return;
}



/* Entry: 103a1a678; end: 103a1a67b;  */

void FUN_103a1a678(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fca8a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fca8a8;
  func_0x00010002969c(0x112fca8a8,&UNK_10dc3ae98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fca8a0 = puVar2;
  return;
}



/* Entry: 103a1a67c; end: 103a1a6cb;  */

void FUN_103a1a67c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fca8a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fca8a8;
  func_0x00010002969c(0x112fca8a8,&UNK_10dc3ae98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fca8a0 = puVar2;
  return;
}



/* Entry: 103a1a6cc; end: 103a1a6cf;  */

void FUN_103a1a6cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3af50;
  func_0x000107c61520(&UNK_10dc3af50,&UNK_1106bf2b0);
  puRam0000000112fca8b0 = puVar1;
  return;
}



/* Entry: 103a1a6d0; end: 103a1a70f;  */

void FUN_103a1a6d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3af50;
  func_0x000107c61520(&UNK_10dc3af50,&UNK_1106bf2b0);
  puRam0000000112fca8b0 = puVar1;
  return;
}



/* Entry: 103a1a710; end: 103a1a733;  */

void FUN_103a1a710(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a1a734();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a1a734; end: 103a1a773;  */

void FUN_103a1a734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3afd0;
  func_0x000107c61520(&UNK_10dc3afd0,&UNK_1106bf328);
  puRam0000000112fca8b8 = puVar1;
  return;
}



/* Entry: 103a1a774; end: 103a1a787;  */

void FUN_103a1a774(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a1a5a4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a1a7b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a1a788; end: 103a1a7b7;  */

void FUN_103a1a788(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a1a7b8; end: 103a1a7f7;  */

void FUN_103a1a7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3af88;
  func_0x000107c61520(&DAT_10dc3af88,&UNK_1106bf328);
  puRam0000000112fca8c0 = puVar1;
  return;
}



/* Entry: 103a1a7f8; end: 103a1a7fb;  */

void FUN_103a1a7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b038;
  func_0x000107c61520(&UNK_10dc3b038,&UNK_1106bf328);
  puRam0000000112fca8c8 = puVar1;
  return;
}



/* Entry: 103a1a7fc; end: 103a1a83b;  */

void FUN_103a1a7fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b038;
  func_0x000107c61520(&UNK_10dc3b038,&UNK_1106bf328);
  puRam0000000112fca8c8 = puVar1;
  return;
}



/* Entry: 103a1a83c; end: 103a1a8db;  */

int FUN_103a1a83c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103a1a8dc; end: 103a1a947;  */

long FUN_103a1a8dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a1a948; end: 103a1a9d7;  */

undefined8 * FUN_103a1a948(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar2;
  uVar5 = param_2[8];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar4,uVar5);
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  return param_1;
}



/* Entry: 103a1a9d8; end: 103a1aa97;  */

undefined8 * FUN_103a1a9d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[7];
  uVar2 = param_2[8];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103a1aa98; end: 103a1ab1b;  */

undefined8 * FUN_103a1aa98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x000107c6142c(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103a1ab1c; end: 103a1abc3;  */

int FUN_103a1ab1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a1abc4; end: 103a1ac37;  */

void FUN_103a1abc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3afa4;
  func_0x000107c61520(&DAT_10dc3afa4,&UNK_1106bf328);
  puRam0000000112fca8d8 = puVar1;
  return;
}



/* Entry: 103a1ac38; end: 103a1ac7b;  */

void FUN_103a1ac38(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103a1ac7c; end: 103a1acdf;  */

undefined1  [16] FUN_103a1ac7c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x18,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103a1adec;
  return auVar1;
}



/* Entry: 103a1ace0; end: 103a1ad23;  */

void FUN_103a1ace0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103a1ad24; end: 103a1ad53;  */

undefined1  [16] FUN_103a1ad24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = FUN_103a1ad54;
  return auVar1;
}



/* Entry: 103a1ad54; end: 103a1ad57;  */

void FUN_103a1ad54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103a1ad58; end: 103a1ad9b;  */

void FUN_103a1ad58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103a1ad9c; end: 103a1adc7;  */

void FUN_103a1ad9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1adc8; end: 103a1adef;  */

bool FUN_103a1adc8(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && *(int *)(*param_1 + 0x10) == *(int *)(*param_2 + 0x10);
}



/* Entry: 103a1adf0; end: 103a1ae5b;  */

void FUN_103a1adf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 103a1ae5c; end: 103a1ae97;  */

void FUN_103a1ae5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a1ae98; end: 103a1aebb;  */

bool FUN_103a1ae98(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && *(int *)(*param_1 + 0x20) == *(int *)(*param_2 + 0x20);
}



/* Entry: 103a1aebc; end: 103a1af53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1aebc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcaa80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1af54; end: 103a1afb3; -[SCLensFullScreenServices init] */

void FUN_103a1af54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUXServices.LensFullScreenServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1af80);
  (*pcVar1)();
}



/* Entry: 103a1afb4; end: 103a1afc3; -[SCLensFullScreenServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1afb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcaa80));
  return;
}



/* Entry: 103a1afc4; end: 103a1afe3;  */

void FUN_103a1afc4(void)

{
  func_0x000107c61168(&PTR_PTR_112912fe8);
  return;
}



/* Entry: 103a1afe4; end: 103a1b09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103a1afe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  func_0x000100768d78(param_1,unaff_x20 + _DAT_112fcaab8);
  func_0x000100768d78(param_2,unaff_x20 + _DAT_112fcaab0);
  *(undefined8 *)(unaff_x20 + _DAT_112fcaac0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcaac8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103a1b09c; end: 103a1b0fb; -[SCLensFullScreenUXServices init] */

void FUN_103a1b09c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUXServices.LensFullScreenUXServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1b0c8);
  (*pcVar1)();
}



/* Entry: 103a1b0fc; end: 103a1b153; -[SCLensFullScreenUXServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a1b138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1b13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1b0fc(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112fcaab0);
  func_0x0001000834e4(param_1 + _DAT_112fcaab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcaac0));
  return;
}



/* Entry: 103a1b154; end: 103a1b16b;  */

bool FUN_103a1b154(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a1b16c; end: 103a1b1ab;  */

void FUN_103a1b16c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcaaf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b3e0;
  func_0x000107c61520(&UNK_10dc3b3e0,&UNK_1106bf578);
  puRam0000000112fcaaf8 = puVar1;
  return;
}



/* Entry: 103a1b1ac; end: 103a1b257;  */

void FUN_103a1b1ac(void)

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



/* Entry: 103a1b258; end: 103a1b3df;  */

void FUN_103a1b258(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103a1b3e0; end: 103a1b477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1b3e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcab00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a1b478; end: 103a1b4d7; -[SCExternalMusicFetchServices init] */

void FUN_103a1b478(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicFetchServices.ExternalMusicFetchServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a1b4a4);
  (*pcVar1)();
}



/* Entry: 103a1b4d8; end: 103a1b4fb; -[SCExternalMusicFetchServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a1b4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcab00));
  return;
}



/* Entry: 103a1b4fc; end: 103a1b5a7;  */

void FUN_103a1b4fc(void)

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


