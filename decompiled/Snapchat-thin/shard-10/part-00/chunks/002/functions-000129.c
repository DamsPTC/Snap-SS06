/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10751c998; end: 10751ca0f;  */

void FUN_10751c998(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x000107520a74();
  FUN_107367a70();
  lVar3 = *(long *)(unaff_x19 + 8);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      func_0x000104c2fe38(unaff_x20);
      func_0x0001075205d8();
      func_0x00010752039c();
      FUN_10751ca10(lVar3 + lVar1 * 0x40,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10751ca10; end: 10751ca37;  */

void FUN_10751ca10(long param_1)

{
  long unaff_x19;
  undefined1 uStack_21;
  
  func_0x000107520824();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(uint *)(unaff_x19 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x19 + 0x28)])(&uStack_21);
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10751ca38; end: 10751ca4b;  */

long FUN_10751ca38(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10751ca4c; end: 10751ca6b;  */

void FUN_10751ca4c(long param_1)

{
  long unaff_x19;
  
  func_0x000107520824();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 10751ca6c; end: 10751ca77;  */

void FUN_10751ca6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107520368();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10751ca78; end: 10751ca97;  */

void FUN_10751ca78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10751ca98; end: 10751cb03;  */

void FUN_10751ca98(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001075202d0();
  func_0x00010751cacc();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10751cb04; end: 10751cb27;  */

void FUN_10751cb04(long param_1)

{
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_1074e9e00();
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}



/* Entry: 10751cb28; end: 10751cb97;  */

void FUN_10751cb28(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107520988(*param_1);
  FUN_10743fa9c();
  func_0x000107520988(*param_1);
  FUN_10743fa44(param_1,param_2);
  return;
}



/* Entry: 10751cb98; end: 10751cc3f;  */

void FUN_10751cb98(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  lVar4 = param_2[5];
  lVar2 = param_2[3];
  param_2[3] = 0;
  param_1[3] = lVar2;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_2[4] = 0;
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[4];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(undefined8 **)(lVar2 + uVar5 * 8) = param_1 + 5;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}



/* Entry: 10751cc40; end: 10751cca3;  */

void FUN_10751cc40(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107520a68();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010751cc7c(unaff_x20 + 0x10);
    }
    func_0x000107520720();
  }
  return;
}



/* Entry: 10751cca4; end: 10751cdf7;  */

ulong * FUN_10751cca4(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x000107520a9c();
  puVar4 = (ulong *)param_1[1];
  if (puVar4 < (ulong *)param_1[2]) {
    puVar3 = puVar4;
    FUN_10751d168(puVar4,param_2);
    puVar4 = puVar4 + 0x1d;
  }
  else {
    lVar7 = (long)puVar4 - *param_1;
    uVar9 = lVar7 / 0xe8 + 1;
    puVar4 = param_1;
    if (0x11a7b9611a7b961 < uVar9) {
      FUN_10751d28c();
LAB_10751cdf4:
      func_0x000104bd35f4();
      if ((char)puVar4[0x1c] == '\x01') {
        FUN_10751d0f4(puVar4 + 0x16);
      }
      func_0x000104c2f714(puVar4 + 0xd);
      func_0x000104c335c0(puVar4 + 0xb);
      func_0x000104c3463c(puVar4);
      func_0x000104c31820();
      return param_1;
    }
    uVar8 = (long)((long)param_1[2] - *param_1) / 0xe8;
    uVar5 = uVar8 * 2;
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
      uVar5 = uVar9;
    }
    if (0x8d3dcb08d3dcaf < uVar8) {
      uVar5 = 0x11a7b9611a7b961;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      if (0x11a7b9611a7b961 < uVar5) goto LAB_10751cdf4;
      lVar2 = uVar5 * 0xe8;
      __Znwm();
    }
    lVar7 = lVar2 + lVar7;
    FUN_10751d168(lVar7,param_2);
    uVar6 = *param_1;
    uVar1 = param_1[1];
    uVar10 = lVar7 + ((long)(uVar1 - uVar6) / -0xe8) * 0xe8;
    uVar8 = uVar10;
    for (uVar9 = uVar6; uVar9 != uVar1; uVar9 = uVar9 + 0xe8) {
      FUN_10751d168(uVar8,uVar9);
      uVar8 = uVar8 + 0xe8;
    }
    for (; uVar6 != uVar1; uVar6 = uVar6 + 0xe8) {
      FUN_10751cdf8(uVar6);
    }
    puVar4 = (ulong *)(lVar7 + 0xe8);
    puVar3 = (ulong *)*param_1;
    *param_1 = uVar10;
    param_1[1] = (ulong)puVar4;
    param_1[2] = lVar2 + uVar5 * 0xe8;
    if (puVar3 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (ulong)puVar4;
  return puVar3;
}



/* Entry: 10751cdf8; end: 10751ce3b;  */

undefined8 FUN_10751cdf8(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_10751d0f4(param_1 + 0xb0);
  }
  func_0x000104c2f714(param_1 + 0x68);
  func_0x000104c335c0(param_1 + 0x58);
  func_0x000104c3463c(param_1);
  func_0x000104c31820();
  return unaff_x19;
}



/* Entry: 10751ce3c; end: 10751cfcf;  */

ulong FUN_10751ce3c(float *param_1,float *param_2,uint param_3,uint param_4,double *param_5,
                   uint param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  dVar14 = (double)param_6;
  if (param_4 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = ((float)(*param_5 + dVar14) + (float)(*param_5 + dVar14)) / (float)param_4;
  }
  fVar9 = -1.0;
  fVar8 = -1.0;
  if (param_3 != 0) {
    fVar8 = ((float)(param_5[1] + dVar14) + (float)(param_5[1] + dVar14)) / (float)param_3 + -1.0;
  }
  if (param_4 != 0) {
    fVar9 = ((float)(param_5[2] + dVar14) + (float)(param_5[2] + dVar14)) / (float)param_4 + -1.0;
  }
  fVar12 = 0.0;
  fVar11 = 0.0;
  if (param_3 != 0) {
    fVar11 = ((float)(param_5[3] + dVar14) + (float)(param_5[3] + dVar14)) / (float)param_3;
  }
  fVar17 = 0.0;
  if (param_1 != param_2) {
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    for (; param_1 != param_2; param_1 = param_1 + 4) {
      fVar12 = (param_1[2] - *param_1) * (param_1[3] - param_1[1]);
      fVar16 = fVar16 + fVar12 * (*param_1 + param_1[2]) * 0.5;
      fVar15 = fVar15 + fVar12 * (param_1[1] + param_1[3]) * 0.5;
      fVar13 = fVar13 + fVar12;
    }
    fVar12 = 0.0;
    fVar17 = 0.0;
    if (fVar13 != 0.0) {
      fVar12 = fVar16 / fVar13;
      fVar17 = fVar15 / fVar13;
    }
  }
  uVar1 = 0x100000000000000;
  if (1.0 < fVar12) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (fVar17 < -1.0) {
    uVar2 = 0;
  }
  uVar3 = 0x10000000000;
  if (fVar12 < -1.0) {
    uVar3 = 0;
  }
  uVar4 = 0x100000000;
  if (1.0 < fVar17) {
    uVar4 = 0;
  }
  uVar5 = 0x1000000;
  if (1.0 - fVar11 < fVar12) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if (fVar17 < fVar9) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if (fVar12 < fVar8) {
    uVar7 = 0;
  }
  return uVar3 | uVar1 | uVar7 | uVar2 | uVar4 | uVar5 | uVar6 | (ulong)(fVar17 <= 1.0 - fVar10);
}



/* Entry: 10751cfd0; end: 10751d0db;  */

void FUN_10751cfd0(undefined8 param_1,char *param_2)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107520328();
  if (((*param_2 == '\x01' && param_2[1] != '\0') && ((*(byte *)(unaff_x20 + 2) & 1) != 0)) &&
     ((*(byte *)(unaff_x20 + 3) & 1) != 0)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 6) = 0;
  }
  else {
    uVar1 = (ulong)*(uint *)(unaff_x20 + 4);
    func_0x0001075208d0();
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 5) = 2;
      *(undefined1 *)(unaff_x19 + 6) = 1;
    }
    else {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uVar1 = extraout_x8;
      if ((extraout_x9 & 1) == 0) {
        func_0x0001075205f0();
        uVar1 = (ulong)*(byte *)(unaff_x20 + 1);
      }
      if ((uVar1 & 1) == 0) {
        func_0x0001075205f0();
      }
      if ((*(byte *)(unaff_x20 + 2) & 1) == 0) {
        func_0x0001075205f0();
      }
      if ((*(byte *)(unaff_x20 + 3) & 1) == 0) {
        func_0x0001075205f0();
      }
      unaff_x19[1] = uStack_38;
      *unaff_x19 = uStack_40;
      unaff_x19[2] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      *(undefined4 *)(unaff_x19 + 5) = 3;
      *(undefined1 *)(unaff_x19 + 6) = 1;
      func_0x0001000e30f4(&uStack_40);
    }
  }
  return;
}



/* Entry: 10751d0dc; end: 10751d0f3;  */

bool FUN_10751d0dc(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10751d0f4; end: 10751d147;  */

void FUN_10751d0f4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b9230)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10751d148; end: 10751d167;  */

void FUN_10751d148(void)

{
  return;
}



/* Entry: 10751d168; end: 10751d1db;  */

void FUN_10751d168(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107520328();
  func_0x0001072692b0();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000104c318bc(param_1 + 0x68,unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  *(undefined1 *)(unaff_x19 + 0xe0) = 0;
  if (*(char *)(unaff_x20 + 0xe0) == '\x01') {
    FUN_10751d1dc((undefined1 *)(unaff_x19 + 0xb0),unaff_x20 + 0xb0);
    *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  }
  return;
}



/* Entry: 10751d1dc; end: 10751d24b;  */

void FUN_10751d1dc(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107520328();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_10751d0f4();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b9260)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 10751d24c; end: 10751d28b;  */

void FUN_10751d24c(void)

{
  return;
}



/* Entry: 10751d28c; end: 10751d297;  */

void FUN_10751d28c(long param_1)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x000107520368();
  func_0x000107520328();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    func_0x000100489910(uVar2);
    lVar1 = uVar2 + 0x18;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    func_0x0001000480a4();
    func_0x000107520514();
    func_0x0001000481ec();
    func_0x000100489910(lStack_58);
    lStack_58 = lStack_58 + 0x18;
    func_0x00010004824c();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x0001000482e8(auStack_68);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10751d298; end: 10751d35b;  */

void FUN_10751d298(long param_1)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107520328();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    func_0x000100489910(uVar2);
    lVar1 = uVar2 + 0x18;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    func_0x0001000480a4();
    func_0x000107520514();
    func_0x0001000481ec();
    func_0x000100489910(lStack_48);
    lStack_48 = lStack_48 + 0x18;
    func_0x00010004824c();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x0001000482e8(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10751d35c; end: 10751d397;  */

void FUN_10751d35c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107520a68();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001074f9a8c(unaff_x20 + 0x10);
    }
    func_0x000107520720();
  }
  return;
}



/* Entry: 10751d398; end: 10751d503;  */

void FUN_10751d398(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 auStack_390 [16];
  undefined8 *puStack_380;
  undefined1 auStack_378 [64];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [64];
  undefined1 auStack_2d8 [56];
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [64];
  undefined1 auStack_210 [64];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long alStack_180 [3];
  undefined1 auStack_168 [8];
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_98 [2];
  long alStack_88 [10];
  undefined8 uStack_38;
  
  lVar9 = param_4;
  func_0x000107520328();
  func_0x000107520138();
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  uStack_38 = extraout_x8;
  func_0x0001074e3ac0(alStack_88 + 3,param_3);
  FUN_1074b01dc(alStack_88,*(undefined8 *)(alStack_88[3] + 0x18));
  func_0x000107283194(alStack_88 + 3);
  func_0x000107520780(alStack_98);
  plVar12 = (long *)(alStack_98[0] + 0x10);
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    func_0x000104c2fe00(alStack_88 + 3,plVar12 + 2);
    FUN_1073f24b0(alStack_88,alStack_88 + 3);
    func_0x000104c2f714(alStack_88 + 3);
  }
  func_0x000107283194(alStack_98);
  func_0x000104c2fe00();
  plVar12 = alStack_88;
  func_0x000107277aa4(alStack_88 + 3);
  *(long *)(unaff_x19 + 0x48) = alStack_88[4];
  *(long *)(unaff_x19 + 0x40) = alStack_88[3];
  alStack_88[3] = 0;
  alStack_88[4] = 0;
  *(undefined4 *)(unaff_x19 + 0xa0) = 8;
  *(double *)(unaff_x19 + 0xa8) = (double)*(long *)(unaff_x20 + 0xa8);
  *(double *)(unaff_x19 + 0xb0) = (double)(param_4 / 1000000);
  *(undefined1 *)(unaff_x19 + 0xb8) = 0;
  *(undefined1 *)(unaff_x19 + 0x128) = 0;
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  *(undefined1 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1e8) = 0;
  *(undefined1 *)(unaff_x19 + 600) = 0;
  func_0x00010726b188(alStack_88 + 3);
  func_0x000107277d70();
  func_0x000107520114(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar16 = alStack_88;
  func_0x000107277d70();
  func_0x000107520208();
  pcStack_a8 = FUN_10751d504;
  lVar10 = lVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107520138();
  uVar5 = (int)plVar16[5] == 4;
  uStack_f8 = extraout_x8_00;
  switch((int)plVar16[5]) {
  case 0:
    pcVar7 = "failed_placement";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 1:
    pcVar7 = "not_in_feature_set";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 2:
    pcVar7 = "outside_viewport_bounds";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 3:
    alStack_180[0] = 0;
    alStack_180[1] = 0;
    alStack_180[2] = 0;
    FUN_1074b01dc(alStack_180,(plVar16[1] - *plVar16) / 0x18);
    lVar2 = plVar16[1];
    for (lVar15 = *plVar16; uVar5 = lVar15 == lVar2, !(bool)uVar5; lVar15 = lVar15 + 0x18) {
      func_0x000107262e9c(auStack_168,lVar15);
      func_0x000107520834(alStack_180);
      func_0x0001075202a0();
    }
    func_0x0001075203f0();
    func_0x0001075201a4();
    func_0x0001075202a0();
    pcVar7 = (char *)alStack_180;
    func_0x000107277aa4(&lStack_1a0,pcVar7);
    pcStack_158 = (code *)uStack_198;
    ppuStack_160 = (undefined1 **)lStack_1a0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    uStack_100 = 8;
    func_0x00010752082c(lVar9 + 0x1e8);
    func_0x000107520200();
    func_0x00010726b188(&lStack_1a0);
    goto code_r0x00010751d7c4;
  case 4:
    alStack_180[0] = 0;
    alStack_180[1] = 0;
    alStack_180[2] = 0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    plVar8 = param_3;
    FUN_1074b01dc(alStack_180,plVar16[3]);
    FUN_1074b01dc(&lStack_1a0,plVar16[3]);
    plVar16 = plVar16 + 2;
    while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
      uVar13 = plVar16[2];
      uVar1 = plVar12[1] - *plVar12 >> 6;
      uVar5 = uVar13 == uVar1;
      if (uVar13 < uVar1) {
        func_0x000104c2fe00(auStack_168,*plVar12 + uVar13 * 0x40);
        func_0x000107520834(alStack_180);
        func_0x0001075202a0();
        func_0x0001074e3ac0(&lStack_1b0,*(undefined8 *)(*plVar12 + uVar13 * 0x40 + 0x38));
        plVar14 = (long *)(lStack_1b0 + 0x10);
        while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
          func_0x000104c2fe00(auStack_168,plVar14 + 2);
          func_0x000107520834(&lStack_1a0);
          func_0x0001075202a0();
        }
        func_0x000107283194(&lStack_1b0);
      }
      else {
        uVar13 = uVar13 - uVar1;
        uVar1 = (param_3[1] - *param_3) / 0x48;
        uVar5 = uVar13 == uVar1;
        if (uVar13 < uVar1) {
          lVar15 = *param_3 + uVar13 * 0x48;
          FUN_10751dad8(alStack_180,lVar15);
          plVar14 = (long *)(*(long *)(lVar15 + 0x38) + 0x10);
          while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
            FUN_10751dad8(&lStack_1a0,plVar14 + 2);
          }
        }
      }
    }
    func_0x0001075203f0();
    func_0x0001075201a4();
    func_0x0001075202a0();
    func_0x000107277aa4(&lStack_1b0,alStack_180);
    pcStack_158 = (code *)uStack_1a8;
    ppuStack_160 = (undefined1 **)lStack_1b0;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_100 = 8;
    func_0x00010752082c(lVar9 + 0x130);
    func_0x000107520200();
    func_0x00010752083c();
    pcVar7 = (char *)&lStack_1a0;
    func_0x000107277aa4(&lStack_1b0,pcVar7);
    pcStack_158 = (code *)uStack_1a8;
    ppuStack_160 = (undefined1 **)lStack_1b0;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_100 = 8;
    func_0x00010752082c(lVar9 + 0xb8);
    func_0x000107520200();
    func_0x00010752083c();
    func_0x000107277d70(&lStack_1a0);
    param_3 = plVar8;
code_r0x00010751d7c4:
    func_0x000107277d70(alStack_180);
    goto LAB_10751d7cc;
  default:
    pcVar7 = "viewport_limited";
    func_0x0001075203f0();
    func_0x0001075201a4();
  }
  func_0x0001075202a0();
LAB_10751d7cc:
  func_0x000107520114(uStack_f8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107520200();
  func_0x00010752083c();
  func_0x000107277d70(&lStack_1a0);
  plVar12 = alStack_180;
  func_0x000107277d70();
  func_0x000107520208();
  pcVar11 = FUN_10751d89c;
  func_0x000107520a9c();
  puVar6 = auStack_390;
  ppuStack_160 = &puStack_b0;
  pcStack_158 = pcVar11;
  func_0x000107520138();
  uStack_1b8 = extraout_x8_01;
  func_0x00010752046c(auStack_390);
  puVar3 = puStack_380;
  puStack_380[2] = 0;
  func_0x00010752065c();
  *puVar3 = extraout_x8_02;
  puVar3[1] = 0;
  func_0x00010729807c(auStack_378,param_6);
  puVar3[3] = &PTR_DAT_110998aa8;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  auStack_338[0] = 0;
  func_0x0001072977b8(auStack_330,param_3);
  func_0x000107269bac(auStack_318,pcVar7);
  func_0x000104c2fe00(auStack_2d8,lVar10);
  func_0x000107520788(auStack_2a0);
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  func_0x000107263b58(auStack_250,auStack_378);
  func_0x00010726236c(auStack_210,pcVar7);
  uStack_1c8 = param_7[1];
  uStack_1d0 = *param_7;
  uStack_1c0 = *(undefined1 *)(param_7 + 2);
  func_0x000107297044(puVar3 + 9,auStack_338);
  func_0x0001072977f4(auStack_338);
  func_0x00010724b3d8(auStack_378);
  puVar4 = puStack_380;
  puStack_380 = (undefined8 *)0x0;
  *plVar12 = (long)(puVar4 + 3);
  plVar12[1] = (long)puVar4;
  func_0x000107297fb8(auStack_390);
  func_0x000107520114(uStack_1b8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072977f4(auStack_338);
  func_0x0001072978a8(puVar3 + 3);
  func_0x00010724b3d8(auStack_378);
  __ZNSt3__119__shared_weak_countD2Ev(puVar3);
  func_0x000107297fb8(auStack_390);
  do {
    __Unwind_Resume(puVar6);
  } while( true );
}



/* Entry: 10751d504; end: 10751d89b;  */

void FUN_10751d504(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  char *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_2f0 [16];
  undefined8 *puStack_2e0;
  undefined1 auStack_2d8 [64];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [64];
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [56];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e0 [3];
  undefined1 auStack_c8 [8];
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = param_4;
  func_0x000107520138();
  uVar5 = (int)param_1[5] == 4;
  uStack_58 = extraout_x8;
  switch((int)param_1[5]) {
  case 0:
    pcVar8 = "failed_placement";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 1:
    pcVar8 = "not_in_feature_set";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 2:
    pcVar8 = "outside_viewport_bounds";
    func_0x0001075203f0();
    func_0x0001075201a4();
    break;
  case 3:
    alStack_e0[0] = 0;
    alStack_e0[1] = 0;
    alStack_e0[2] = 0;
    FUN_1074b01dc(alStack_e0,(param_1[1] - *param_1) / 0x18);
    lVar2 = param_1[1];
    for (lVar13 = *param_1; uVar5 = lVar13 == lVar2, !(bool)uVar5; lVar13 = lVar13 + 0x18) {
      func_0x000107262e9c(auStack_c8,lVar13);
      func_0x000107520834(alStack_e0);
      func_0x0001075202a0();
    }
    func_0x0001075203f0();
    func_0x0001075201a4();
    func_0x0001075202a0();
    pcVar8 = (char *)alStack_e0;
    func_0x000107277aa4(&lStack_100,pcVar8);
    pcStack_b8 = (code *)uStack_f8;
    puStack_c0 = (undefined1 *)lStack_100;
    lStack_100 = 0;
    uStack_f8 = 0;
    uStack_60 = 8;
    func_0x00010752082c(param_4 + 0x1e8);
    func_0x000107520200();
    func_0x00010726b188(&lStack_100);
    goto code_r0x00010751d7c4;
  case 4:
    alStack_e0[0] = 0;
    alStack_e0[1] = 0;
    alStack_e0[2] = 0;
    lStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plVar6 = param_3;
    FUN_1074b01dc(alStack_e0,param_1[3]);
    FUN_1074b01dc(&lStack_100,param_1[3]);
    param_1 = param_1 + 2;
    while (param_1 = (long *)*param_1, param_1 != (long *)0x0) {
      uVar11 = param_1[2];
      uVar1 = param_2[1] - *param_2 >> 6;
      uVar5 = uVar11 == uVar1;
      if (uVar11 < uVar1) {
        func_0x000104c2fe00(auStack_c8,*param_2 + uVar11 * 0x40);
        func_0x000107520834(alStack_e0);
        func_0x0001075202a0();
        func_0x0001074e3ac0(&lStack_110,*(undefined8 *)(*param_2 + uVar11 * 0x40 + 0x38));
        plVar12 = (long *)(lStack_110 + 0x10);
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          func_0x000104c2fe00(auStack_c8,plVar12 + 2);
          func_0x000107520834(&lStack_100);
          func_0x0001075202a0();
        }
        func_0x000107283194(&lStack_110);
      }
      else {
        uVar11 = uVar11 - uVar1;
        uVar1 = (param_3[1] - *param_3) / 0x48;
        uVar5 = uVar11 == uVar1;
        if (uVar11 < uVar1) {
          lVar13 = *param_3 + uVar11 * 0x48;
          FUN_10751dad8(alStack_e0,lVar13);
          plVar12 = (long *)(*(long *)(lVar13 + 0x38) + 0x10);
          while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
            FUN_10751dad8(&lStack_100,plVar12 + 2);
          }
        }
      }
    }
    func_0x0001075203f0();
    func_0x0001075201a4();
    func_0x0001075202a0();
    func_0x000107277aa4(&lStack_110,alStack_e0);
    pcStack_b8 = (code *)uStack_108;
    puStack_c0 = (undefined1 *)lStack_110;
    lStack_110 = 0;
    uStack_108 = 0;
    uStack_60 = 8;
    func_0x00010752082c(param_4 + 0x130);
    func_0x000107520200();
    func_0x00010752083c();
    pcVar8 = (char *)&lStack_100;
    func_0x000107277aa4(&lStack_110,pcVar8);
    pcStack_b8 = (code *)uStack_108;
    puStack_c0 = (undefined1 *)lStack_110;
    lStack_110 = 0;
    uStack_108 = 0;
    uStack_60 = 8;
    func_0x00010752082c(param_4 + 0xb8);
    func_0x000107520200();
    func_0x00010752083c();
    func_0x000107277d70(&lStack_100);
    param_3 = plVar6;
code_r0x00010751d7c4:
    func_0x000107277d70(alStack_e0);
    goto LAB_10751d7cc;
  default:
    pcVar8 = "viewport_limited";
    func_0x0001075203f0();
    func_0x0001075201a4();
  }
  func_0x0001075202a0();
LAB_10751d7cc:
  func_0x000107520114(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107520200();
  func_0x00010752083c();
  func_0x000107277d70(&lStack_100);
  plVar6 = alStack_e0;
  func_0x000107277d70();
  func_0x000107520208();
  pcVar10 = FUN_10751d89c;
  func_0x000107520a9c();
  puVar7 = auStack_2f0;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = pcVar10;
  func_0x000107520138();
  uStack_118 = extraout_x8_00;
  func_0x00010752046c(auStack_2f0);
  puVar3 = puStack_2e0;
  puStack_2e0[2] = 0;
  func_0x00010752065c();
  *puVar3 = extraout_x8_01;
  puVar3[1] = 0;
  func_0x00010729807c(auStack_2d8,param_6);
  puVar3[3] = &PTR_DAT_110998aa8;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  auStack_298[0] = 0;
  func_0x0001072977b8(auStack_290,param_3);
  func_0x000107269bac(auStack_278,pcVar8);
  func_0x000104c2fe00(auStack_238,lVar9);
  func_0x000107520788(auStack_200);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x000107263b58(auStack_1b0,auStack_2d8);
  func_0x00010726236c(auStack_170,pcVar8);
  uStack_128 = param_7[1];
  uStack_130 = *param_7;
  uStack_120 = *(undefined1 *)(param_7 + 2);
  func_0x000107297044(puVar3 + 9,auStack_298);
  func_0x0001072977f4(auStack_298);
  func_0x00010724b3d8(auStack_2d8);
  puVar4 = puStack_2e0;
  puStack_2e0 = (undefined8 *)0x0;
  *plVar6 = (long)(puVar4 + 3);
  plVar6[1] = (long)puVar4;
  func_0x000107297fb8(auStack_2f0);
  func_0x000107520114(uStack_118);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072977f4(auStack_298);
  func_0x0001072978a8(puVar3 + 3);
  func_0x00010724b3d8(auStack_2d8);
  __ZNSt3__119__shared_weak_countD2Ev(puVar3);
  func_0x000107297fb8(auStack_2f0);
  do {
    __Unwind_Resume(puVar7);
  } while( true );
}



/* Entry: 10751d89c; end: 10751da6b;  */

void FUN_10751d89c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1e0 [16];
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [64];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x000107520a9c();
  puVar3 = auStack_1e0;
  func_0x000107520138();
  uStack_8 = extraout_x8;
  func_0x00010752046c(auStack_1e0);
  puVar1 = puStack_1d0;
  puStack_1d0[2] = 0;
  func_0x00010752065c();
  *puVar1 = extraout_x8_00;
  puVar1[1] = 0;
  func_0x00010729807c(auStack_1c8,param_6);
  puVar1[3] = &PTR_DAT_110998aa8;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  auStack_188[0] = 0;
  func_0x0001072977b8(auStack_180,param_3);
  func_0x000107269bac(auStack_168,param_2);
  func_0x000104c2fe00(auStack_128,param_4);
  func_0x000107520788(auStack_f0);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x000107263b58(auStack_a0,auStack_1c8);
  func_0x00010726236c(auStack_60,param_2);
  uStack_18 = param_7[1];
  uStack_20 = *param_7;
  uStack_10 = *(undefined1 *)(param_7 + 2);
  func_0x000107297044(puVar1 + 9,auStack_188);
  func_0x0001072977f4(auStack_188);
  func_0x00010724b3d8(auStack_1c8);
  puVar2 = puStack_1d0;
  puStack_1d0 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x000107297fb8(auStack_1e0);
  func_0x000107520114(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072977f4(auStack_188);
  func_0x0001072978a8(puVar1 + 3);
  func_0x00010724b3d8(auStack_1c8);
  __ZNSt3__119__shared_weak_countD2Ev(puVar1);
  func_0x000107297fb8(auStack_1e0);
  do {
    __Unwind_Resume(puVar3);
  } while( true );
}



/* Entry: 10751da6c; end: 10751dad7;  */

long FUN_10751da6c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010726cda0(param_1 + 8,param_2 + 8);
  }
  else {
    func_0x00010751daac(param_1);
  }
  return param_1;
}



/* Entry: 10751dad8; end: 10751db87;  */

void FUN_10751dad8(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107520328();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001072ddd58();
    lVar2 = uVar1 + 0x70;
    *(long *)(unaff_x19 + 8) = lVar2;
  }
  else {
    func_0x00010727776c();
    func_0x000107520514();
    func_0x000107277858();
    func_0x0001072ddd58(lStack_48);
    lStack_48 = lStack_48 + 0x70;
    func_0x0001072777cc();
    lVar2 = *(long *)(unaff_x19 + 8);
    func_0x000107277a38(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar2;
  return;
}



/* Entry: 10751db88; end: 10751dbeb;  */

void FUN_10751db88(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001075202d0();
  func_0x000104c318bc();
  func_0x00010726cc04(param_1 + 0x40,unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  FUN_10751dbec(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
  FUN_10751dbec(unaff_x20 + 0x130,unaff_x19 + 0x130);
  func_0x0001072649c8(unaff_x20 + 0x1a8,unaff_x19 + 0x1a8);
  FUN_10751dbec(unaff_x20 + 0x1e8,unaff_x19 + 0x1e8);
  return;
}



/* Entry: 10751dbec; end: 10751dc17;  */

undefined1 * FUN_10751dbec(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  FUN_10751dc18();
  return param_1;
}



/* Entry: 10751dc18; end: 10751dc2b;  */

void FUN_10751dc18(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    func_0x00010726cc04(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 10751dc2c; end: 10751dc73;  */

long FUN_10751dc2c(long param_1)

{
  func_0x000107296ad0(param_1 + 0x1e8);
  func_0x00010724b3d8(param_1 + 0x1a8);
  func_0x000107296ad0(param_1 + 0x130);
  func_0x000107296ad0(param_1 + 0xb8);
  func_0x00010726af18(param_1 + 0x40);
  func_0x000107520798();
  return param_1;
}



/* Entry: 10751dc74; end: 10751e033;  */

long * FUN_10751dc74(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *unaff_x19;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107520a5c();
  func_0x00010726364c();
  uVar14 = unaff_x19[1];
  if (uVar14 != 0) {
    uVar13 = uVar14 - 1;
    if ((uVar14 & uVar13) == 0) {
      unaff_x25 = uVar13 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar14 <= param_1) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = param_1 / uVar14;
        }
        unaff_x25 = param_1 - uVar5 * uVar14;
      }
    }
    plVar12 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10751dd30;
          uVar5 = plVar12[1];
          if (uVar5 != param_1) break;
          plVar4 = plVar12 + 2;
          func_0x000104c32db4(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10751dfe4;
        }
        if ((uVar14 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar14 <= uVar5) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar7 * uVar14;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_10751dd30:
  plVar4 = unaff_x19 + 2;
  plVar12 = (long *)0xc0;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = param_1;
  plStack_68 = plVar12;
  plStack_60 = plVar4;
  func_0x000104c2fe00(plVar12 + 2,param_2);
  plVar12[10] = 0;
  plVar12[9] = 0;
  plVar12[0x17] = 0;
  plVar12[0x16] = 0;
  plVar12[0x15] = 0;
  plVar12[0x14] = 0;
  plVar12[0x13] = 0;
  plVar12[0x12] = 0;
  plVar12[0x11] = 0;
  plVar12[0x10] = 0;
  plVar12[0xf] = 0;
  plVar12[0xe] = 0;
  plVar12[0xd] = 0;
  plVar12[0xc] = 0;
  plVar12[0xb] = 0;
  *(undefined4 *)(plVar12 + 9) = 4;
  func_0x000107269c1c(plVar12 + 0x14);
  plVar12[0x16] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((uVar14 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar14))
  goto LAB_10751df6c;
  bVar2 = 2 < uVar14;
  bVar3 = uVar14 == 3;
  func_0x000107520a30(uVar14 << 1);
  uVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar13 = extraout_x9;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = unaff_x19[1];
  if (uVar14 < uVar13) {
LAB_10751de10:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10751e00c);
      (*pcVar1)();
    }
    __Znwm(uVar13 << 3);
    func_0x00010751e174();
    unaff_x19[1] = uVar13;
    lVar6 = *unaff_x19;
    for (uVar14 = 0; uVar13 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar6 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    uVar14 = uVar13;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar13 - 1;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar10 / uVar13;
      }
      uVar11 = uVar10;
      if (uVar13 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar13;
      }
      if ((uVar13 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar13 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            func_0x0001075204f4();
            lVar6 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            uVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar14) {
    uVar5 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001075204b4();
    }
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 < uVar14) {
      if (uVar13 != 0) goto LAB_10751de10;
      func_0x00010751e174();
      unaff_x19[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = unaff_x19[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & param_1;
  }
  else {
    unaff_x25 = param_1;
    if (uVar14 <= param_1) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = param_1 / uVar14;
      }
      unaff_x25 = param_1 - uVar13 * uVar14;
    }
  }
LAB_10751df6c:
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar6 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_10751d35c(&plStack_68);
LAB_10751dfe4:
  return plVar12 + 9;
}



/* Entry: 10751e034; end: 10751e07f;  */

void FUN_10751e034(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001075202d0();
  func_0x0001072c0368();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x50) = uVar1;
  func_0x0001072f99e4(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined2 *)(unaff_x20 + 0x70) = *(undefined2 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  return;
}



/* Entry: 10751e080; end: 10751e153;  */

long FUN_10751e080(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10751e154; end: 10751e18b;  */

void FUN_10751e154(void)

{
  return;
}



/* Entry: 10751e18c; end: 10751e1af;  */

void FUN_10751e18c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107267e44();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10751e1b0; end: 10751e85f;  */

void FUN_10751e1b0(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar14;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  uint extraout_w8_13;
  uint extraout_w8_14;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar15;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar16;
  long extraout_x8_05;
  long extraout_x9;
  ulong uVar17;
  ulong extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x10;
  long extraout_x10_00;
  ulong unaff_x19;
  ulong uVar18;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar22;
  ulong unaff_x28;
  ulong uVar23;
  undefined1 *puVar24;
  code *pcVar25;
  float fVar26;
  float fVar27;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [176];
  float fStack_f0;
  byte bStack_dc;
  undefined8 uStack_70;
  
  uVar20 = param_4;
  uVar12 = param_5;
  func_0x0001075202d0();
  func_0x000107520138();
  uVar21 = 0x98;
  uStack_70 = extraout_x8;
  do {
    func_0x00010752069c();
    uVar19 = unaff_x27;
    uVar16 = unaff_x28;
LAB_10751e1ec:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010751e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad45)[unaff_x28] * 4 + 0x10751e4f4))();
        return;
      }
      bVar5 = 0xe3e < extraout_x8_00;
      uVar7 = (long)(extraout_x8_00 - 0xe3f) < 0;
      uVar9 = extraout_x8_00 == 0xe3f;
      unaff_x27 = unaff_x19;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_00 < 0xe40) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = unaff_x20 == unaff_x19;
        if ((param_5 & 1) == 0) {
          if (!(bool)in_ZR) goto LAB_10751e7dc;
          goto LAB_10751e848;
        }
        if ((bool)in_ZR) goto LAB_10751e848;
        unaff_x24 = 0;
        uVar21 = unaff_x20;
        goto LAB_10751e558;
      }
      if (param_4 == 0) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_10751e848;
        func_0x000107520a1c();
        goto LAB_10751e5f8;
      }
      func_0x000107520974();
      if (bVar5) {
        func_0x000107520850();
        func_0x000107520960();
        FUN_10751e860();
        FUN_10751e860(unaff_x20 + 0x130,unaff_x28 + 0x98,uStack_1b0);
        uVar20 = unaff_x28 + 0x98;
        uVar17 = uVar19;
        FUN_10751e860(uVar19,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar17;
      }
      else {
        func_0x000107520850();
      }
      param_4 = param_4 - 1;
      if ((param_5 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar9) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        param_1 = *(float *)(unaff_x20 - 0x80);
        func_0x00010752091c();
        if ((bool)uVar7) break;
      }
      func_0x000107520198();
      func_0x000107520904();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
         (*(float *)(unaff_x19 - 0x80) <= param_1)) {
        do {
          uVar17 = unaff_x26;
          unaff_x26 = uVar17 + 0x98;
          if (unaff_x19 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar17 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar17 + 0xb0) <= param_1));
      }
      else {
        do {
          do {
            uVar17 = unaff_x26;
            unaff_x26 = uVar17 + 0x98;
          } while (*(char *)(uVar17 + 0xc4) != '\x01');
        } while (*(float *)(uVar17 + 0xb0) <= param_1);
      }
      uVar17 = unaff_x24;
      uVar15 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          uVar15 = uVar17;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar15 + 0x2c) & 1) == 0)) break;
          uVar17 = uVar15 - 0x98;
        } while (param_1 < *(float *)(uVar15 + 0x18));
      }
LAB_10751e4a8:
      if (unaff_x26 < uVar15) {
        func_0x00010752088c();
        func_0x000107520904();
        do {
          do {
            uVar17 = unaff_x26;
            unaff_x26 = uVar17 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar17 + 0xc4) & 1) == 0) ||
                (bVar5 = param_1 == *(float *)(uVar17 + 0xb0), uVar18 = uVar15,
                *(float *)(uVar17 + 0xb0) <= param_1));
        do {
          uVar15 = uVar18 - 0x98;
          func_0x0001075208a4();
          if (!bVar5) break;
          pfVar1 = (float *)(uVar18 - 0x80);
          bVar5 = param_1 == *pfVar1;
          uVar18 = uVar15;
        } while (param_1 < *pfVar1);
        goto LAB_10751e4a8;
      }
      in_CY = unaff_x26 - 0x98 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)in_ZR) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      param_5 = 0;
    }
    func_0x000107520198();
    func_0x000107520904();
    do {
      func_0x0001075208e4();
      bVar5 = !(bool)uVar9;
      uVar9 = true;
      if (bVar5 || extraout_w8 == 0) break;
      uVar9 = *(float *)(extraout_x10 + 0xb0) == param_1;
    } while (*(float *)(extraout_x10 + 0xb0) < param_1);
    uVar16 = extraout_x10 + 0x98;
    uVar17 = unaff_x24;
    uVar19 = unaff_x24;
    unaff_x26 = uVar16;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar19 = uVar17 + 0x98;
        bVar5 = uVar16 == uVar19;
        unaff_x21 = uVar19;
        if ((uVar19 <= uVar16) ||
           ((func_0x0001075208c4(), bVar5 && extraout_w8_01 != 0 &&
            (uVar19 = uVar17, unaff_x21 = uVar17, *(float *)(uVar17 + 0x18) < param_1)))) break;
        uVar17 = uVar17 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar5 = !(bool)uVar9;
        uVar9 = bVar5 || extraout_w8_00 == 0;
        if ((!bVar5 && extraout_w8_00 != 0) &&
           (uVar9 = *(float *)(uVar19 + 0x18) == param_1, unaff_x21 = uVar19,
           *(float *)(uVar19 + 0x18) < param_1)) break;
        uVar19 = uVar19 - 0x98;
      }
    }
    while (unaff_x26 < uVar19) {
      func_0x000107520898();
      func_0x000107520904();
      do {
        uVar17 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb0);
        unaff_x26 = uVar17;
      } while (*pfVar1 < param_1);
      do {
        do {
          uVar15 = uVar19;
          uVar19 = uVar15 - 0x98;
        } while (*(char *)(uVar15 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar17;
      } while (param_1 <= *(float *)(uVar15 - 0x80));
    }
    unaff_x27 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x27) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    in_CY = unaff_x21 <= uVar16;
    cVar8 = (long)(uVar16 - unaff_x21) < 0;
    in_ZR = uVar16 == unaff_x21;
    uVar19 = unaff_x27;
    if (!(bool)in_CY) goto LAB_10751e3a4;
    func_0x000107520558();
    FUN_10751ea68();
    uVar17 = unaff_x26;
    FUN_10751ea68(unaff_x26,unaff_x19);
    uVar16 = unaff_x28;
    if ((int)uVar17 == 0) goto code_r0x00010751e3a0;
    unaff_x19 = unaff_x27;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751e848;
LAB_10751e558:
  unaff_x21 = uVar21 + 0x98;
  in_CY = unaff_x19 <= unaff_x21;
  cVar8 = (long)(unaff_x21 - unaff_x19) < 0;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751e848;
  uVar17 = param_4;
  if (((*(char *)(uVar21 + 0xc4) == '\x01') && ((*(byte *)(uVar21 + 0x2c) & 1) != 0)) &&
     (uVar9 = *(float *)(uVar21 + 0xb0) == *(float *)(uVar21 + 0x18),
     *(float *)(uVar21 + 0xb0) < *(float *)(uVar21 + 0x18))) {
    func_0x00010752023c();
    param_5 = unaff_x24;
    do {
      func_0x000107520474();
      uVar17 = unaff_x20;
      if (param_5 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar9) || ((*(byte *)(uVar21 - 0x6c) & 1) == 0)) {
        uVar17 = unaff_x20 + param_5;
        break;
      }
      uVar21 = param_4 - 0x98;
      fVar26 = *(float *)(unaff_x20 + param_5 + -0x80);
      param_5 = param_5 - 0x98;
      uVar9 = fStack_f0 == fVar26;
      uVar17 = param_4;
    } while (fStack_f0 < fVar26);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  uVar21 = unaff_x21;
  param_4 = uVar17;
  goto LAB_10751e558;
LAB_10751e5f8:
  do {
    uVar17 = param_5;
    cVar6 = SBORROW8(0x98,uVar17);
    cVar8 = (long)(0x98 - uVar17) < 0;
    uVar9 = uVar17 == 0x98;
    if ((long)uVar17 < 0x99) {
      func_0x000107520610();
      if ((((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
          ((*(byte *)(uVar16 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar16 + 0x18) < *(float *)(uVar16 + 0xb0))) {
        func_0x000107520a04();
      }
      param_4 = unaff_x20 + uVar17 * unaff_x24;
      if (((*(char *)(uVar16 + 0x2c) != '\x01') || ((*(byte *)(param_4 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_4 + 0x18) <= *(float *)(uVar16 + 0x18))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar6 = SBORROW8(0x98,uVar19);
          cVar8 = (long)(0x98 - uVar19) < 0;
          uVar9 = uVar19 == 0x98;
          if (0x98 < (long)uVar19) break;
          func_0x0001075204d4();
          if (((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
             (((*(byte *)(uVar16 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar16 + 0x18) < *(float *)(uVar16 + 0xb0))))) {
            func_0x000107520a04();
          }
          param_4 = unaff_x21;
        } while (((*(char *)(uVar16 + 0x2c) != '\x01') || ((bStack_dc & 1) == 0)) ||
                (fStack_f0 <= *(float *)(uVar16 + 0x18)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    param_5 = uVar17 - 1;
  } while (-1 < (long)param_5);
  uVar21 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar6 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar8 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc(auStack_1a0);
    unaff_x24 = 0;
    param_4 = unaff_x21 >> 1;
    uVar15 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar8 != cVar6) && (*(char *)(extraout_x8_01 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_01 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_01 + 0xb0) < *(float *)(extraout_x8_01 + 0x148))))) {
        uVar15 = extraout_x8_01 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,param_4);
      cVar8 = (long)(unaff_x24 - param_4) < 0;
    } while ((long)unaff_x24 <= (long)param_4);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar15 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar18 = (uVar15 - unaff_x20) + 0x98;
      uVar9 = (long)((uVar15 - unaff_x20) + -1) < 0;
      uVar7 = uVar18 == 0x99;
      if (((0x98 < (long)uVar18) && (func_0x0001075201d8(uVar18 / 0x98 - 2), (bool)uVar7)) &&
         (((*(byte *)(uVar15 + 0x2c) & 1) != 0 &&
          (func_0x000107520678(*(undefined4 *)(uVar17 + 0x17)), (bool)uVar9)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar7)) ||
             ((bStack_dc & 1) == 0)) break;
          uVar7 = *(float *)(uVar17 + 0x17) == fStack_f0;
        } while (*(float *)(uVar17 + 0x17) < fStack_f0);
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(auStack_1a0);
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751e848;
code_r0x00010751e3a0:
  if ((unaff_x28 & 1) == 0) {
LAB_10751e3a4:
    uVar12 = (ulong)((uint)param_5 & 1);
    func_0x000107520558();
    uVar20 = param_4;
    FUN_10751e1b0();
    param_5 = 0;
  }
  goto LAB_10751e1ec;
LAB_10751f28c:
  uVar20 = uVar15;
  uVar15 = uVar20 + 0x98;
  in_CY = uVar18 <= uVar15;
  cVar8 = (long)(uVar15 - uVar18) < 0;
  uVar9 = uVar15 == uVar18;
  if (!(bool)uVar9) {
    if (((*(char *)(uVar20 + 0xc4) == '\x01') && ((*(byte *)(uVar20 + 0x2c) & 1) != 0)) &&
       (uVar9 = *(float *)(uVar20 + 0xb4) == *(float *)(uVar20 + 0x1c),
       *(float *)(uVar20 + 0xb4) < *(float *)(uVar20 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar9) || ((*(byte *)(uVar17 - 0x6c) & 1) == 0)) break;
        uVar9 = *(float *)((long)puVar4 + -0x18c) == *(float *)(uVar17 - 0x7c);
      } while (*(float *)((long)puVar4 + -0x18c) < *(float *)(uVar17 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(puVar4[-0x22]);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4[-0x50] = uVar20;
  puVar4[-0x4f] = uVar17;
  puVar4[-0x4e] = uVar15;
  puVar4[-0x4d] = uVar19;
  puVar4[-0x4c] = (ulong)(puVar4 + -0x16);
  puVar4[-0x4b] = (ulong)FUN_10751f310;
  func_0x0001075206d8();
  uVar14 = extraout_w8_13;
  if (((bool)uVar9) && ((*(byte *)(uVar17 + 0x2c) & 1) != 0)) {
    fVar26 = *(float *)(uVar19 + 0x1c);
    func_0x000107520684();
    uVar14 = extraout_w8_14;
    if ((bool)cVar8) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)uVar9) {
        fVar27 = *(float *)(uVar15 + 0x1c);
        in_CY = fVar26 <= fVar27;
        uVar7 = fVar27 == fVar26;
        cVar8 = 0;
        if (fVar27 < fVar26) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(uVar19 + 0x2c) & 1) == 0) {
        return;
      }
      fVar26 = *(float *)(uVar15 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar8) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(uVar15 + 0x2c) & uVar14) == 0;
  uVar9 = false;
  in_CY = 0;
  if ((bool)uVar7) {
    return;
  }
  func_0x00010752066c(*(undefined4 *)(uVar15 + 0x1c));
  if (!(bool)uVar9) {
    return;
  }
  func_0x000107520690();
  FUN_10751ebe8();
  func_0x0001075204a8();
  if (!(bool)uVar7) {
    return;
  }
  if ((*(byte *)(uVar17 + 0x2c) & 1) == 0) {
    return;
  }
  fVar26 = *(float *)(uVar19 + 0x1c);
  func_0x000107520684();
  if (!(bool)uVar9) {
    return;
  }
  func_0x000107520598();
LAB_10751f3c8:
  plVar10 = (long *)(puVar4 + -0x4c);
  puVar3 = puVar4 + -0x4b;
  puVar4 = puVar4 + -0x50;
  uVar9 = uVar7;
  uVar20 = uVar11;
  uVar12 = uVar13;
  uVar19 = uVar22;
  uVar16 = uVar23;
  puVar24 = (undefined1 *)*plVar10;
  pcVar25 = (code *)*puVar3;
  goto code_r0x00010751ebe8;
LAB_10751f008:
  uVar17 = uVar21 + 0x98;
  in_CY = uVar18 <= uVar17;
  cVar8 = (long)(uVar17 - uVar18) < 0;
  uVar9 = 1;
  if (uVar17 == uVar18) goto LAB_10751f2f8;
  uVar12 = uVar20;
  if (((*(char *)(uVar21 + 0xc4) == '\x01') && ((*(byte *)(uVar21 + 0x2c) & 1) != 0)) &&
     (uVar9 = *(float *)(uVar21 + 0xb4) == *(float *)(uVar21 + 0x1c),
     *(float *)(uVar21 + 0xb4) < *(float *)(uVar21 + 0x1c))) {
    func_0x00010752023c();
    param_5 = unaff_x24;
    do {
      func_0x000107520474();
      uVar12 = uVar15;
      if (param_5 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar9) || ((*(byte *)(uVar21 - 0x6c) & 1) == 0)) {
        uVar12 = uVar15 + param_5;
        break;
      }
      uVar21 = uVar20 - 0x98;
      fVar26 = *(float *)(uVar15 + param_5 + -0x7c);
      param_5 = param_5 - 0x98;
      uVar9 = *(float *)((long)puVar4 + -0x18c) == fVar26;
      uVar12 = uVar20;
    } while (*(float *)((long)puVar4 + -0x18c) < fVar26);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  uVar21 = uVar17;
  uVar20 = uVar12;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar12 = param_5;
    cVar6 = SBORROW8(0x98,uVar12);
    cVar8 = (long)(0x98 - uVar12) < 0;
    uVar9 = uVar12 == 0x98;
    if ((long)uVar12 < 0x99) {
      func_0x000107520610();
      if ((((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
          ((*(byte *)(uVar23 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar23 + 0x1c) < *(float *)(uVar23 + 0xb4))) {
        func_0x000107520a04();
      }
      uVar20 = uVar15 + uVar12 * unaff_x24;
      if (((*(char *)(uVar23 + 0x2c) != '\x01') || ((*(byte *)(uVar20 + 0x2c) & 1) == 0)) ||
         (*(float *)(uVar20 + 0x1c) <= *(float *)(uVar23 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar6 = SBORROW8(0x98,uVar22);
          cVar8 = (long)(0x98 - uVar22) < 0;
          uVar9 = uVar22 == 0x98;
          if (0x98 < (long)uVar22) break;
          func_0x0001075204d4();
          if (((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
             (((*(byte *)(uVar23 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar23 + 0x1c) < *(float *)(uVar23 + 0xb4))))) {
            func_0x000107520a04();
          }
          uVar20 = uVar17;
        } while (((*(char *)(uVar23 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)puVar4 + -0x17c) & 1) == 0)) ||
                (*(float *)((long)puVar4 + -0x18c) <= *(float *)(uVar23 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    param_5 = uVar12 - 1;
  } while (-1 < (long)param_5);
  uVar21 = 0x98;
  while( true ) {
    in_CY = 1 < uVar16;
    cVar6 = SBORROW8(uVar16,2);
    uVar17 = uVar16 - 2;
    cVar8 = (long)uVar17 < 0;
    uVar9 = uVar17 == 0;
    uVar19 = uVar18;
    unaff_x26 = uVar16;
    if ((long)uVar16 < 2) break;
    func_0x0001075202dc(puVar4 + -0x48);
    unaff_x24 = 0;
    uVar20 = uVar17 >> 1;
    uVar19 = uVar15;
    do {
      func_0x000107520374();
      if (((cVar8 != cVar6) && (*(char *)(extraout_x8_05 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_05 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_05 + 0xb4) < *(float *)(extraout_x8_05 + 0x14c))))) {
        uVar19 = extraout_x8_05 + 0x130;
        unaff_x24 = extraout_x9_02;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,uVar20);
      cVar8 = (long)(unaff_x24 - uVar20) < 0;
    } while ((long)unaff_x24 <= (long)uVar20);
    uVar18 = uVar18 - 0x98;
    if (uVar19 == uVar18) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar17 = (uVar19 - uVar15) + 0x98;
      uVar9 = (long)((uVar19 - uVar15) + -1) < 0;
      uVar7 = uVar17 == 0x99;
      if (((0x98 < (long)uVar17) && (func_0x0001075201d8(uVar17 / 0x98 - 2), (bool)uVar7)) &&
         (((*(byte *)(uVar19 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar12 + 0x1b)), (bool)uVar9)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar7)) ||
             ((*(byte *)((long)puVar4 + -0x17c) & 1) == 0)) break;
          uVar7 = *(float *)(uVar12 + 0x1b) == *(float *)((long)puVar4 + -0x18c);
        } while (*(float *)(uVar12 + 0x1b) < *(float *)((long)puVar4 + -0x18c));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(puVar4 + -0x48);
    uVar16 = uVar16 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((uVar16 & 1) == 0) {
LAB_10751ee54:
    uVar13 = (ulong)((uint)param_5 & 1);
    func_0x000107520558();
    uVar11 = uVar20;
    FUN_10751ec60();
    param_5 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751e7dc:
  param_4 = unaff_x20;
  unaff_x20 = param_4 + 0x98;
  in_CY = unaff_x19 <= unaff_x20;
  cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
  in_ZR = unaff_x20 == unaff_x19;
  if (!(bool)in_ZR) {
    if (((*(char *)(param_4 + 0xc4) == '\x01') && ((*(byte *)(param_4 + 0x2c) & 1) != 0)) &&
       (uVar9 = *(float *)(param_4 + 0xb0) == *(float *)(param_4 + 0x18),
       *(float *)(param_4 + 0xb0) < *(float *)(param_4 + 0x18))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar9) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar9 = fStack_f0 == *(float *)(unaff_x21 - 0x80);
      } while (fStack_f0 < *(float *)(unaff_x21 - 0x80));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751e7dc;
  }
LAB_10751e848:
  func_0x000107520114(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_1e0;
  pcStack_1b8 = FUN_10751e860;
  uStack_1e0 = param_4;
  uStack_1d8 = unaff_x21;
  uStack_1d0 = unaff_x20;
  uStack_1c8 = unaff_x27;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x0001075206d8();
  uVar14 = extraout_w8_05;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    fVar26 = *(float *)(unaff_x27 + 0x18);
    func_0x000107520678();
    uVar14 = extraout_w8_06;
    if ((bool)cVar8) {
      func_0x000107520928();
      uVar9 = false;
      if ((bool)in_ZR) {
        fVar27 = *(float *)(unaff_x20 + 0x18);
        in_CY = fVar26 <= fVar27;
        uVar9 = fVar27 == fVar26;
        cVar8 = 0;
        puVar24 = puStack_1c0;
        pcVar25 = pcStack_1b8;
        if (fVar27 < fVar26) goto code_r0x00010751ebe8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar9) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      fVar26 = *(float *)(unaff_x20 + 0x18);
      func_0x0001075206cc();
      puVar4 = &uStack_1e0;
      puVar24 = puStack_1c0;
      pcVar25 = pcStack_1b8;
      if (!(bool)cVar8) {
        return;
      }
      goto code_r0x00010751ebe8;
    }
  }
  uVar9 = (*(byte *)(unaff_x20 + 0x2c) & uVar14) == 0;
  uVar7 = false;
  in_CY = 0;
  if ((!(bool)uVar9) && (func_0x0001075206cc(*(undefined4 *)(unaff_x20 + 0x18)), (bool)uVar7)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      fVar26 = *(float *)(unaff_x27 + 0x18);
      func_0x000107520678();
      if ((bool)uVar7) {
        func_0x000107520598();
        puVar4 = &uStack_1e0;
        puVar24 = puStack_1c0;
        pcVar25 = pcStack_1b8;
code_r0x00010751ebe8:
        uVar15 = puVar4[2];
        uVar18 = puVar4[3];
        uVar2 = *puVar4;
        uVar17 = puVar4[1];
        plVar10 = (long *)(puVar4 + -0x12);
        puVar4[2] = uVar15;
        puVar4[3] = uVar18;
        puVar4[4] = (ulong)puVar24;
        puVar4[5] = (ulong)pcVar25;
        func_0x0001075202d0();
        func_0x000107520138();
        puVar4[1] = extraout_x8_02;
        func_0x0001075202dc(puVar4 + -0x12);
        func_0x000107520564();
        FUN_1074d3064();
        func_0x000107520790();
        func_0x00010748be00();
        func_0x000107520114(puVar4[1]);
        if ((bool)uVar9) {
          return;
        }
        ___stack_chk_fail();
        if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 0x30))();
          return;
        }
        puVar4[-0x14] = (ulong)(puVar4 + 4);
        puVar4[-0x13] = (ulong)FUN_10751ec44;
        func_0x000104bfeb48();
        puVar4[-0x20] = uVar16;
        puVar4[-0x1f] = uVar19;
        puVar4[-0x1e] = unaff_x26;
        puVar4[-0x1d] = param_5;
        puVar4[-0x1c] = unaff_x24;
        puVar4[-0x1b] = uVar21;
        puVar4[-0x1a] = uVar2;
        puVar4[-0x19] = uVar17;
        puVar4[-0x18] = uVar15;
        puVar4[-0x17] = uVar18;
        puVar4[-0x16] = (ulong)(puVar4 + -0x14);
        puVar4[-0x15] = (ulong)FUN_10751ec60;
        uVar11 = uVar20;
        uVar13 = uVar12;
        func_0x0001075202d0();
        func_0x000107520138();
        puVar4[-0x22] = extraout_x8_03;
        uVar21 = 0x98;
        param_5 = uVar12;
        do {
          func_0x00010752069c();
          uVar22 = uVar19;
          uVar23 = uVar16;
LAB_10751ec9c:
          while( true ) {
            uVar16 = unaff_x26;
            func_0x00010752099c();
            if (!(bool)in_CY || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10de7ad51)[uVar16] * 4 + 0x10751efa4))();
              return;
            }
            bVar5 = 0xe3e < extraout_x8_04;
            uVar7 = (long)(extraout_x8_04 - 0xe3f) < 0;
            uVar9 = extraout_x8_04 == 0xe3f;
            uVar19 = uVar18;
            unaff_x26 = uVar16;
            if ((long)extraout_x8_04 < 0xe40) {
              in_CY = uVar18 <= uVar15;
              cVar8 = (long)(uVar15 - uVar18) < 0;
              uVar9 = uVar15 == uVar18;
              if ((param_5 & 1) == 0) {
                if (!(bool)uVar9) goto LAB_10751f28c;
                goto LAB_10751f2f8;
              }
              if ((bool)uVar9) goto LAB_10751f2f8;
              unaff_x24 = 0;
              uVar21 = uVar15;
              goto LAB_10751f008;
            }
            if (uVar20 == 0) {
              in_CY = uVar18 <= uVar15;
              cVar8 = (long)(uVar15 - uVar18) < 0;
              uVar9 = 1;
              if (uVar15 == uVar18) goto LAB_10751f2f8;
              func_0x000107520a1c();
              goto LAB_10751f0a8;
            }
            func_0x000107520974();
            if (bVar5) {
              func_0x000107520858(uVar15,uVar16);
              func_0x000107520960();
              FUN_10751f310();
              FUN_10751f310(uVar15 + 0x130,uVar16 + 0x98,puVar4[-0x4a]);
              uVar11 = uVar16 + 0x98;
              uVar12 = uVar22;
              FUN_10751f310(uVar22,uVar16);
              func_0x000107520734();
              uVar16 = uVar12;
            }
            else {
              func_0x000107520858(uVar16,uVar15);
            }
            uVar20 = uVar20 - 1;
            if ((param_5 & 1) != 0) break;
            func_0x000107520934();
            if (((bool)uVar9) && ((*(byte *)(uVar15 + 0x2c) & 1) != 0)) {
              fVar26 = *(float *)(uVar15 - 0x7c);
              func_0x000107520940();
              if ((bool)uVar7) break;
            }
            func_0x000107520198();
            func_0x000107520910();
            unaff_x26 = uVar15;
            if (((extraout_w8_11 != 1) || ((*(byte *)(uVar18 - 0x6c) & 1) == 0)) ||
               (*(float *)(uVar18 - 0x7c) <= fVar26)) {
              do {
                uVar12 = unaff_x26;
                unaff_x26 = uVar12 + 0x98;
                if (uVar18 <= unaff_x26) break;
              } while (((extraout_w8_11 == 0) || ((*(byte *)(uVar12 + 0xc4) & 1) == 0)) ||
                      (*(float *)(uVar12 + 0xb4) <= fVar26));
            }
            else {
              do {
                do {
                  uVar12 = unaff_x26;
                  unaff_x26 = uVar12 + 0x98;
                } while (*(char *)(uVar12 + 0xc4) != '\x01');
              } while (*(float *)(uVar12 + 0xb4) <= fVar26);
            }
            uVar12 = unaff_x24;
            uVar16 = uVar18;
            if (unaff_x26 < uVar18) {
              do {
                uVar16 = uVar12;
                if ((extraout_w8_11 == 0) || ((*(byte *)(uVar16 + 0x2c) & 1) == 0)) break;
                uVar12 = uVar16 - 0x98;
              } while (fVar26 < *(float *)(uVar16 + 0x1c));
            }
LAB_10751ef58:
            if (unaff_x26 < uVar16) {
              func_0x00010752088c();
              func_0x000107520910();
              do {
                do {
                  uVar12 = unaff_x26;
                  unaff_x26 = uVar12 + 0x98;
                } while (extraout_w8_12 == 0);
              } while (((*(byte *)(uVar12 + 0xc4) & 1) == 0) ||
                      (bVar5 = fVar26 == *(float *)(uVar12 + 0xb4), uVar19 = uVar16,
                      *(float *)(uVar12 + 0xb4) <= fVar26));
              do {
                uVar16 = uVar19 - 0x98;
                func_0x0001075208a4();
                if (!bVar5) break;
                pfVar1 = (float *)(uVar19 - 0x7c);
                bVar5 = fVar26 == *pfVar1;
                uVar19 = uVar16;
              } while (fVar26 < *pfVar1);
              goto LAB_10751ef58;
            }
            in_CY = unaff_x26 - 0x98 <= uVar15;
            uVar9 = uVar15 == unaff_x26 - 0x98;
            if (!(bool)uVar9) {
              func_0x000107520728();
            }
            func_0x000107520714();
            func_0x000107520234();
            param_5 = 0;
          }
          func_0x000107520198();
          func_0x000107520910();
          do {
            func_0x0001075208e4();
            bVar5 = !(bool)uVar9;
            uVar9 = true;
            if (bVar5 || extraout_w8_07 == 0) break;
            uVar9 = *(float *)(extraout_x10_00 + 0xb4) == fVar26;
          } while (*(float *)(extraout_x10_00 + 0xb4) < fVar26);
          uVar23 = extraout_x10_00 + 0x98;
          uVar19 = unaff_x24;
          uVar12 = unaff_x24;
          unaff_x26 = uVar23;
          if (extraout_x9_01 == 0) {
            while( true ) {
              uVar12 = uVar19 + 0x98;
              bVar5 = uVar23 == uVar12;
              uVar17 = uVar12;
              if ((uVar12 <= uVar23) ||
                 ((func_0x0001075208c4(), bVar5 && extraout_w8_09 != 0 &&
                  (uVar12 = uVar19, uVar17 = uVar19, *(float *)(uVar19 + 0x1c) < fVar26)))) break;
              uVar19 = uVar19 - 0x98;
            }
          }
          else {
            while( true ) {
              func_0x0001075208c4();
              bVar5 = !(bool)uVar9;
              uVar9 = bVar5 || extraout_w8_08 == 0;
              if ((!bVar5 && extraout_w8_08 != 0) &&
                 (uVar9 = *(float *)(uVar12 + 0x1c) == fVar26, uVar17 = uVar12,
                 *(float *)(uVar12 + 0x1c) < fVar26)) break;
              uVar12 = uVar12 - 0x98;
            }
          }
          while (unaff_x26 < uVar12) {
            func_0x000107520898();
            func_0x000107520910();
            do {
              uVar19 = unaff_x26 + 0x98;
              if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_10 == 0) break;
              pfVar1 = (float *)(unaff_x26 + 0xb4);
              unaff_x26 = uVar19;
            } while (*pfVar1 < fVar26);
            do {
              do {
                uVar22 = uVar12;
                uVar12 = uVar22 - 0x98;
              } while (*(char *)(uVar22 - 0x6c) != '\x01' || extraout_w8_10 == 0);
              unaff_x26 = uVar19;
            } while (fVar26 <= *(float *)(uVar22 - 0x7c));
          }
          uVar19 = unaff_x26 - 0x98;
          if (uVar15 != uVar19) {
            func_0x000107520558();
            FUN_1074d3064();
          }
          func_0x000107520708();
          func_0x000107520234();
          in_CY = uVar17 <= uVar23;
          cVar8 = (long)(uVar23 - uVar17) < 0;
          uVar9 = uVar23 == uVar17;
          uVar22 = uVar19;
          if (!(bool)in_CY) goto LAB_10751ee54;
          func_0x000107520558();
          FUN_10751f518();
          uVar12 = unaff_x26;
          FUN_10751f518(unaff_x26,uVar18);
          uVar23 = uVar16;
          if ((int)uVar12 == 0) goto code_r0x00010751ee50;
          uVar18 = uVar19;
        } while ((uVar16 & 1) == 0);
        goto LAB_10751f2f8;
      }
    }
  }
  return;
}



/* Entry: 10751e860; end: 10751e9af;  */

void FUN_10751e860(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar13;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar14;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar15;
  ulong extraout_x9_00;
  long extraout_x10;
  long unaff_x19;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  long unaff_x21;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar21;
  float fVar22;
  
  puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
  func_0x0001075206d8();
  uVar13 = extraout_w8;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    fVar21 = *(float *)(unaff_x19 + 0x18);
    func_0x000107520678();
    uVar13 = extraout_w8_00;
    if ((bool)in_NG) {
      func_0x000107520928();
      uVar9 = false;
      if ((bool)in_ZR) {
        fVar22 = *(float *)(unaff_x20 + 0x18);
        in_CY = fVar21 <= fVar22;
        uVar9 = fVar22 == fVar21;
        in_NG = 0;
        if (fVar22 < fVar21) goto LAB_107520288;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar9) {
        return;
      }
      if ((*(byte *)(unaff_x19 + 0x2c) & 1) == 0) {
        return;
      }
      fVar21 = *(float *)(unaff_x20 + 0x18);
      func_0x0001075206cc();
      puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
      if (!(bool)in_NG) {
        return;
      }
      goto LAB_107520288;
    }
  }
  uVar9 = (*(byte *)(unaff_x20 + 0x2c) & uVar13) == 0;
  uVar7 = false;
  in_CY = 0;
  if ((!(bool)uVar9) && (func_0x0001075206cc(*(undefined4 *)(unaff_x20 + 0x18)), (bool)uVar7)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      fVar21 = *(float *)(unaff_x19 + 0x18);
      func_0x000107520678();
      if ((bool)uVar7) {
        func_0x000107520598();
        puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
LAB_107520288:
        uVar17 = puVar4[2];
        uVar16 = puVar4[3];
        uVar2 = *puVar4;
        uVar19 = puVar4[1];
        plVar10 = puVar4 + -0x12;
        puVar4[2] = uVar17;
        puVar4[3] = uVar16;
        puVar4[4] = unaff_x29;
        puVar4[5] = unaff_x30;
        func_0x0001075202d0();
        func_0x000107520138();
        puVar4[1] = extraout_x8;
        func_0x0001075202dc(puVar4 + -0x12);
        func_0x000107520564();
        FUN_1074d3064();
        func_0x000107520790();
        func_0x00010748be00();
        func_0x000107520114(puVar4[1]);
        if ((bool)uVar9) {
          return;
        }
        ___stack_chk_fail();
        if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 0x30))();
          return;
        }
        puVar4[-0x14] = puVar4 + 4;
        puVar4[-0x13] = FUN_10751ec44;
        func_0x000104bfeb48();
        puVar4[-0x20] = unaff_x28;
        puVar4[-0x1f] = unaff_x27;
        puVar4[-0x1e] = unaff_x26;
        puVar4[-0x1d] = unaff_x25;
        puVar4[-0x1c] = unaff_x24;
        puVar4[-0x1b] = unaff_x23;
        puVar4[-0x1a] = uVar2;
        puVar4[-0x19] = uVar19;
        puVar4[-0x18] = uVar17;
        puVar4[-0x17] = uVar16;
        puVar4[-0x16] = puVar4 + -0x14;
        puVar4[-0x15] = FUN_10751ec60;
        uVar11 = param_3;
        uVar12 = param_4;
        func_0x0001075202d0();
        func_0x000107520138();
        puVar4[-0x22] = extraout_x8_00;
        unaff_x23 = 0x98;
        unaff_x25 = param_4;
        do {
          func_0x00010752069c();
          uVar18 = unaff_x27;
          uVar20 = unaff_x28;
LAB_10751ec9c:
          while( true ) {
            unaff_x28 = unaff_x26;
            func_0x00010752099c();
            if (!(bool)in_CY || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
              return;
            }
            bVar5 = 0xe3e < extraout_x8_01;
            uVar7 = (long)(extraout_x8_01 - 0xe3f) < 0;
            uVar9 = extraout_x8_01 == 0xe3f;
            unaff_x27 = uVar16;
            unaff_x26 = unaff_x28;
            if ((long)extraout_x8_01 < 0xe40) {
              in_CY = uVar16 <= uVar17;
              cVar8 = (long)(uVar17 - uVar16) < 0;
              uVar9 = uVar17 == uVar16;
              if ((unaff_x25 & 1) == 0) {
                if (!(bool)uVar9) goto LAB_10751f28c;
                goto LAB_10751f2f8;
              }
              if ((bool)uVar9) goto LAB_10751f2f8;
              unaff_x24 = 0;
              unaff_x23 = uVar17;
              goto LAB_10751f008;
            }
            if (param_3 == 0) {
              in_CY = uVar16 <= uVar17;
              cVar8 = (long)(uVar17 - uVar16) < 0;
              uVar9 = 1;
              if (uVar17 == uVar16) goto LAB_10751f2f8;
              func_0x000107520a1c();
              goto LAB_10751f0a8;
            }
            func_0x000107520974();
            if (bVar5) {
              func_0x000107520858(uVar17,unaff_x28);
              func_0x000107520960();
              FUN_10751f310();
              FUN_10751f310(uVar17 + 0x130,unaff_x28 + 0x98,puVar4[-0x4a]);
              uVar11 = unaff_x28 + 0x98;
              uVar15 = uVar18;
              FUN_10751f310(uVar18,unaff_x28);
              func_0x000107520734();
              unaff_x28 = uVar15;
            }
            else {
              func_0x000107520858(unaff_x28,uVar17);
            }
            param_3 = param_3 - 1;
            if ((unaff_x25 & 1) != 0) break;
            func_0x000107520934();
            if (((bool)uVar9) && ((*(byte *)(uVar17 + 0x2c) & 1) != 0)) {
              fVar21 = *(float *)(uVar17 - 0x7c);
              func_0x000107520940();
              if ((bool)uVar7) break;
            }
            func_0x000107520198();
            func_0x000107520910();
            unaff_x26 = uVar17;
            if (((extraout_w8_05 != 1) || ((*(byte *)(uVar16 - 0x6c) & 1) == 0)) ||
               (*(float *)(uVar16 - 0x7c) <= fVar21)) {
              do {
                uVar15 = unaff_x26;
                unaff_x26 = uVar15 + 0x98;
                if (uVar16 <= unaff_x26) break;
              } while (((extraout_w8_05 == 0) || ((*(byte *)(uVar15 + 0xc4) & 1) == 0)) ||
                      (*(float *)(uVar15 + 0xb4) <= fVar21));
            }
            else {
              do {
                do {
                  uVar15 = unaff_x26;
                  unaff_x26 = uVar15 + 0x98;
                } while (*(char *)(uVar15 + 0xc4) != '\x01');
              } while (*(float *)(uVar15 + 0xb4) <= fVar21);
            }
            uVar15 = unaff_x24;
            uVar14 = uVar16;
            if (unaff_x26 < uVar16) {
              do {
                uVar14 = uVar15;
                if ((extraout_w8_05 == 0) || ((*(byte *)(uVar14 + 0x2c) & 1) == 0)) break;
                uVar15 = uVar14 - 0x98;
              } while (fVar21 < *(float *)(uVar14 + 0x1c));
            }
LAB_10751ef58:
            if (unaff_x26 < uVar14) {
              func_0x00010752088c();
              func_0x000107520910();
              do {
                do {
                  uVar15 = unaff_x26;
                  unaff_x26 = uVar15 + 0x98;
                } while (extraout_w8_06 == 0);
              } while (((*(byte *)(uVar15 + 0xc4) & 1) == 0) ||
                      (bVar5 = fVar21 == *(float *)(uVar15 + 0xb4), uVar3 = uVar14,
                      *(float *)(uVar15 + 0xb4) <= fVar21));
              do {
                uVar14 = uVar3 - 0x98;
                func_0x0001075208a4();
                if (!bVar5) break;
                pfVar1 = (float *)(uVar3 - 0x7c);
                bVar5 = fVar21 == *pfVar1;
                uVar3 = uVar14;
              } while (fVar21 < *pfVar1);
              goto LAB_10751ef58;
            }
            in_CY = unaff_x26 - 0x98 <= uVar17;
            uVar9 = uVar17 == unaff_x26 - 0x98;
            if (!(bool)uVar9) {
              func_0x000107520728();
            }
            func_0x000107520714();
            func_0x000107520234();
            unaff_x25 = 0;
          }
          func_0x000107520198();
          func_0x000107520910();
          do {
            func_0x0001075208e4();
            bVar5 = !(bool)uVar9;
            uVar9 = true;
            if (bVar5 || extraout_w8_01 == 0) break;
            uVar9 = *(float *)(extraout_x10 + 0xb4) == fVar21;
          } while (*(float *)(extraout_x10 + 0xb4) < fVar21);
          uVar20 = extraout_x10 + 0x98;
          uVar15 = unaff_x24;
          uVar18 = unaff_x24;
          unaff_x26 = uVar20;
          if (extraout_x9 == 0) {
            while( true ) {
              uVar18 = uVar15 + 0x98;
              bVar5 = uVar20 == uVar18;
              uVar19 = uVar18;
              if ((uVar18 <= uVar20) ||
                 ((func_0x0001075208c4(), bVar5 && extraout_w8_03 != 0 &&
                  (uVar18 = uVar15, uVar19 = uVar15, *(float *)(uVar15 + 0x1c) < fVar21)))) break;
              uVar15 = uVar15 - 0x98;
            }
          }
          else {
            while( true ) {
              func_0x0001075208c4();
              bVar5 = !(bool)uVar9;
              uVar9 = bVar5 || extraout_w8_02 == 0;
              if ((!bVar5 && extraout_w8_02 != 0) &&
                 (uVar9 = *(float *)(uVar18 + 0x1c) == fVar21, uVar19 = uVar18,
                 *(float *)(uVar18 + 0x1c) < fVar21)) break;
              uVar18 = uVar18 - 0x98;
            }
          }
          while (unaff_x26 < uVar18) {
            func_0x000107520898();
            func_0x000107520910();
            do {
              uVar15 = unaff_x26 + 0x98;
              if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_04 == 0) break;
              pfVar1 = (float *)(unaff_x26 + 0xb4);
              unaff_x26 = uVar15;
            } while (*pfVar1 < fVar21);
            do {
              do {
                uVar14 = uVar18;
                uVar18 = uVar14 - 0x98;
              } while (*(char *)(uVar14 - 0x6c) != '\x01' || extraout_w8_04 == 0);
              unaff_x26 = uVar15;
            } while (fVar21 <= *(float *)(uVar14 - 0x7c));
          }
          unaff_x27 = unaff_x26 - 0x98;
          if (uVar17 != unaff_x27) {
            func_0x000107520558();
            FUN_1074d3064();
          }
          func_0x000107520708();
          func_0x000107520234();
          in_CY = uVar19 <= uVar20;
          cVar8 = (long)(uVar20 - uVar19) < 0;
          uVar9 = uVar20 == uVar19;
          uVar18 = unaff_x27;
          if (!(bool)in_CY) goto LAB_10751ee54;
          func_0x000107520558();
          FUN_10751f518();
          uVar15 = unaff_x26;
          FUN_10751f518(unaff_x26,uVar16);
          uVar20 = unaff_x28;
          if ((int)uVar15 == 0) goto code_r0x00010751ee50;
          uVar16 = unaff_x27;
        } while ((unaff_x28 & 1) == 0);
        goto LAB_10751f2f8;
      }
    }
  }
  return;
LAB_10751f28c:
  param_3 = uVar17;
  uVar17 = param_3 + 0x98;
  in_CY = uVar16 <= uVar17;
  cVar8 = (long)(uVar17 - uVar16) < 0;
  uVar9 = uVar17 == uVar16;
  if (!(bool)uVar9) {
    if (((*(char *)(param_3 + 0xc4) == '\x01') && ((*(byte *)(param_3 + 0x2c) & 1) != 0)) &&
       (uVar9 = *(float *)(param_3 + 0xb4) == *(float *)(param_3 + 0x1c),
       *(float *)(param_3 + 0xb4) < *(float *)(param_3 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar9) || ((*(byte *)(uVar19 - 0x6c) & 1) == 0)) break;
        uVar9 = *(float *)((long)puVar4 + -0x18c) == *(float *)(uVar19 - 0x7c);
      } while (*(float *)((long)puVar4 + -0x18c) < *(float *)(uVar19 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(puVar4[-0x22]);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4[-0x50] = param_3;
  puVar4[-0x4f] = uVar19;
  puVar4[-0x4e] = uVar17;
  puVar4[-0x4d] = unaff_x27;
  puVar4[-0x4c] = puVar4 + -0x16;
  puVar4[-0x4b] = FUN_10751f310;
  func_0x0001075206d8();
  uVar13 = extraout_w8_07;
  if (((bool)uVar9) && ((*(byte *)(uVar19 + 0x2c) & 1) != 0)) {
    fVar21 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar13 = extraout_w8_08;
    if ((bool)cVar8) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)uVar9) {
        fVar22 = *(float *)(uVar17 + 0x1c);
        in_CY = fVar21 <= fVar22;
        uVar7 = fVar22 == fVar21;
        cVar8 = 0;
        if (fVar22 < fVar21) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      fVar21 = *(float *)(uVar17 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar8) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(uVar17 + 0x2c) & uVar13) == 0;
  uVar9 = false;
  in_CY = 0;
  if ((bool)uVar7) {
    return;
  }
  func_0x00010752066c(*(undefined4 *)(uVar17 + 0x1c));
  if (!(bool)uVar9) {
    return;
  }
  func_0x000107520690();
  FUN_10751ebe8();
  func_0x0001075204a8();
  if (!(bool)uVar7) {
    return;
  }
  if ((*(byte *)(uVar19 + 0x2c) & 1) == 0) {
    return;
  }
  fVar21 = *(float *)(unaff_x27 + 0x1c);
  func_0x000107520684();
  if (!(bool)uVar9) {
    return;
  }
  func_0x000107520598();
LAB_10751f3c8:
  unaff_x29 = puVar4[-0x4c];
  unaff_x30 = puVar4[-0x4b];
  puVar4 = puVar4 + -0x50;
  uVar9 = uVar7;
  param_3 = uVar11;
  param_4 = uVar12;
  unaff_x27 = uVar18;
  unaff_x28 = uVar20;
  goto LAB_107520288;
LAB_10751f008:
  uVar19 = unaff_x23 + 0x98;
  in_CY = uVar16 <= uVar19;
  cVar8 = (long)(uVar19 - uVar16) < 0;
  uVar9 = 1;
  if (uVar19 == uVar16) goto LAB_10751f2f8;
  uVar15 = param_3;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar9 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar15 = uVar17;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar9) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar15 = uVar17 + unaff_x25;
        break;
      }
      unaff_x23 = param_3 - 0x98;
      fVar21 = *(float *)(uVar17 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar9 = *(float *)((long)puVar4 + -0x18c) == fVar21;
      uVar15 = param_3;
    } while (*(float *)((long)puVar4 + -0x18c) < fVar21);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = uVar19;
  param_3 = uVar15;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar15 = unaff_x25;
    cVar6 = SBORROW8(0x98,uVar15);
    cVar8 = (long)(0x98 - uVar15) < 0;
    uVar9 = uVar15 == 0x98;
    if ((long)uVar15 < 0x99) {
      func_0x000107520610();
      if ((((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
          ((*(byte *)(uVar20 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar20 + 0x1c) < *(float *)(uVar20 + 0xb4))) {
        func_0x000107520a04();
      }
      param_3 = uVar17 + uVar15 * unaff_x24;
      if (((*(char *)(uVar20 + 0x2c) != '\x01') || ((*(byte *)(param_3 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_3 + 0x1c) <= *(float *)(uVar20 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar6 = SBORROW8(0x98,uVar18);
          cVar8 = (long)(0x98 - uVar18) < 0;
          uVar9 = uVar18 == 0x98;
          if (0x98 < (long)uVar18) break;
          func_0x0001075204d4();
          if (((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
             (((*(byte *)(uVar20 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar20 + 0x1c) < *(float *)(uVar20 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_3 = uVar19;
        } while (((*(char *)(uVar20 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)puVar4 + -0x17c) & 1) == 0)) ||
                (*(float *)((long)puVar4 + -0x18c) <= *(float *)(uVar20 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar15 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar6 = SBORROW8(unaff_x28,2);
    uVar19 = unaff_x28 - 2;
    cVar8 = (long)uVar19 < 0;
    uVar9 = uVar19 == 0;
    unaff_x27 = uVar16;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc(puVar4 + -0x48);
    unaff_x24 = 0;
    param_3 = uVar19 >> 1;
    uVar19 = uVar17;
    do {
      func_0x000107520374();
      if (((cVar8 != cVar6) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar19 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,param_3);
      cVar8 = (long)(unaff_x24 - param_3) < 0;
    } while ((long)unaff_x24 <= (long)param_3);
    uVar16 = uVar16 - 0x98;
    if (uVar19 == uVar16) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar14 = (uVar19 - uVar17) + 0x98;
      uVar9 = (long)((uVar19 - uVar17) + -1) < 0;
      uVar7 = uVar14 == 0x99;
      if (((0x98 < (long)uVar14) && (func_0x0001075201d8(uVar14 / 0x98 - 2), (bool)uVar7)) &&
         (((*(byte *)(uVar19 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar15 + 0x1b)), (bool)uVar9)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar7)) ||
             ((*(byte *)((long)puVar4 + -0x17c) & 1) == 0)) break;
          uVar7 = *(float *)(uVar15 + 0x1b) == *(float *)((long)puVar4 + -0x18c);
        } while (*(float *)(uVar15 + 0x1b) < *(float *)((long)puVar4 + -0x18c));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(puVar4 + -0x48);
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar12 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar11 = param_3;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
}



/* Entry: 10751e9b0; end: 10751ea67;  */

void FUN_10751e9b0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar14;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar15;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar16;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar17;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar18;
  float fVar19;
  
  func_0x0001075201ec();
  func_0x00010751e928();
  if ((*(char *)(param_5 + 0x2c) == '\x01') && ((*(byte *)(unaff_x22 + 0x2c) & 1) != 0)) {
    fVar18 = *(float *)(param_5 + 0x18);
    fVar19 = *(float *)(unaff_x22 + 0x18);
    uVar5 = fVar19 <= fVar18;
    uVar9 = fVar18 == fVar19;
    uVar7 = fVar18 < fVar19;
    if ((bool)uVar7) {
      func_0x000107520774();
      func_0x000107520a50();
      if ((((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) &&
         (func_0x000107520678(*(undefined4 *)(unaff_x22 + 0x18)), (bool)uVar7)) {
        func_0x000107520254();
        func_0x0001075209f8();
        if ((((bool)uVar9) && ((*(byte *)(unaff_x19 + 0x2c) & 1) != 0)) &&
           (func_0x0001075206cc(*(undefined4 *)(unaff_x21 + 0x18)), (bool)uVar7)) {
          func_0x000107520248();
          func_0x0001075204a8();
          if (((bool)uVar9) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
            fVar18 = *(float *)(unaff_x19 + 0x18);
            func_0x00010752091c();
            if ((bool)uVar7) {
              func_0x000107520564();
              puVar3 = (undefined1 *)register0x00000008;
code_r0x00010751ebe8:
              plVar10 = (long *)(puVar3 + -0xc0);
              *(ulong *)(puVar3 + -0x20) = unaff_x20;
              *(ulong *)(puVar3 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar3 + -8) = unaff_x30;
              func_0x0001075202d0();
              func_0x000107520138();
              *(undefined8 *)(puVar3 + -0x28) = extraout_x8;
              func_0x0001075202dc(puVar3 + -0xc0);
              func_0x000107520564();
              FUN_1074d3064();
              func_0x000107520790();
              func_0x00010748be00();
              func_0x000107520114(*(undefined8 *)(puVar3 + -0x28));
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar10 + 0x30))();
                return;
              }
              *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
              *(code **)(puVar3 + -200) = FUN_10751ec44;
              func_0x000104bfeb48();
              *(ulong *)(puVar3 + -0x130) = unaff_x28;
              *(ulong *)(puVar3 + -0x128) = unaff_x27;
              *(ulong *)(puVar3 + -0x120) = unaff_x26;
              *(ulong *)(puVar3 + -0x118) = unaff_x25;
              *(ulong *)(puVar3 + -0x110) = unaff_x24;
              *(ulong *)(puVar3 + -0x108) = unaff_x23;
              *(long *)(puVar3 + -0x100) = unaff_x22;
              *(ulong *)(puVar3 + -0xf8) = unaff_x21;
              *(ulong *)(puVar3 + -0xf0) = unaff_x20;
              *(ulong *)(puVar3 + -0xe8) = unaff_x19;
              *(undefined1 **)(puVar3 + -0xe0) = puVar3 + -0xd0;
              *(code **)(puVar3 + -0xd8) = FUN_10751ec60;
              uVar11 = param_3;
              uVar12 = param_4;
              func_0x0001075202d0();
              func_0x000107520138();
              *(undefined8 *)(puVar3 + -0x140) = extraout_x8_00;
              unaff_x23 = 0x98;
              unaff_x25 = param_4;
              do {
                func_0x00010752069c();
                uVar16 = unaff_x27;
                uVar17 = unaff_x28;
LAB_10751ec9c:
                while( true ) {
                  unaff_x28 = unaff_x26;
                  func_0x00010752099c();
                  if (!(bool)uVar5 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
                    return;
                  }
                  bVar4 = 0xe3e < extraout_x8_01;
                  uVar7 = (long)(extraout_x8_01 - 0xe3f) < 0;
                  uVar9 = extraout_x8_01 == 0xe3f;
                  unaff_x27 = unaff_x19;
                  unaff_x26 = unaff_x28;
                  if ((long)extraout_x8_01 < 0xe40) {
                    uVar5 = unaff_x19 <= unaff_x20;
                    cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
                    uVar9 = unaff_x20 == unaff_x19;
                    if ((unaff_x25 & 1) == 0) {
                      if (!(bool)uVar9) goto LAB_10751f28c;
                      goto LAB_10751f2f8;
                    }
                    if ((bool)uVar9) goto LAB_10751f2f8;
                    unaff_x24 = 0;
                    unaff_x23 = unaff_x20;
                    goto LAB_10751f008;
                  }
                  if (param_3 == 0) {
                    uVar5 = unaff_x19 <= unaff_x20;
                    cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
                    uVar9 = 1;
                    if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
                    func_0x000107520a1c();
                    goto LAB_10751f0a8;
                  }
                  func_0x000107520974();
                  if (bVar4) {
                    func_0x000107520858(unaff_x20,unaff_x28);
                    func_0x000107520960();
                    FUN_10751f310();
                    FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,
                                  *(undefined8 *)(puVar3 + -0x280));
                    uVar11 = unaff_x28 + 0x98;
                    uVar15 = uVar16;
                    FUN_10751f310(uVar16,unaff_x28);
                    func_0x000107520734();
                    unaff_x28 = uVar15;
                  }
                  else {
                    func_0x000107520858(unaff_x28,unaff_x20);
                  }
                  param_3 = param_3 - 1;
                  if ((unaff_x25 & 1) != 0) break;
                  func_0x000107520934();
                  if (((bool)uVar9) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
                    fVar18 = *(float *)(unaff_x20 - 0x7c);
                    func_0x000107520940();
                    if ((bool)uVar7) break;
                  }
                  func_0x000107520198();
                  func_0x000107520910();
                  unaff_x26 = unaff_x20;
                  if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
                     (*(float *)(unaff_x19 - 0x7c) <= fVar18)) {
                    do {
                      uVar15 = unaff_x26;
                      unaff_x26 = uVar15 + 0x98;
                      if (unaff_x19 <= unaff_x26) break;
                    } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar15 + 0xc4) & 1) == 0)) ||
                            (*(float *)(uVar15 + 0xb4) <= fVar18));
                  }
                  else {
                    do {
                      do {
                        uVar15 = unaff_x26;
                        unaff_x26 = uVar15 + 0x98;
                      } while (*(char *)(uVar15 + 0xc4) != '\x01');
                    } while (*(float *)(uVar15 + 0xb4) <= fVar18);
                  }
                  uVar15 = unaff_x24;
                  uVar14 = unaff_x19;
                  if (unaff_x26 < unaff_x19) {
                    do {
                      uVar14 = uVar15;
                      if ((extraout_w8_03 == 0) || ((*(byte *)(uVar14 + 0x2c) & 1) == 0)) break;
                      uVar15 = uVar14 - 0x98;
                    } while (fVar18 < *(float *)(uVar14 + 0x1c));
                  }
LAB_10751ef58:
                  if (unaff_x26 < uVar14) {
                    func_0x00010752088c();
                    func_0x000107520910();
                    do {
                      do {
                        uVar15 = unaff_x26;
                        unaff_x26 = uVar15 + 0x98;
                      } while (extraout_w8_04 == 0);
                    } while (((*(byte *)(uVar15 + 0xc4) & 1) == 0) ||
                            (bVar4 = fVar18 == *(float *)(uVar15 + 0xb4), uVar2 = uVar14,
                            *(float *)(uVar15 + 0xb4) <= fVar18));
                    do {
                      uVar14 = uVar2 - 0x98;
                      func_0x0001075208a4();
                      if (!bVar4) break;
                      pfVar1 = (float *)(uVar2 - 0x7c);
                      bVar4 = fVar18 == *pfVar1;
                      uVar2 = uVar14;
                    } while (fVar18 < *pfVar1);
                    goto LAB_10751ef58;
                  }
                  uVar5 = unaff_x26 - 0x98 <= unaff_x20;
                  uVar9 = unaff_x20 == unaff_x26 - 0x98;
                  if (!(bool)uVar9) {
                    func_0x000107520728();
                  }
                  func_0x000107520714();
                  func_0x000107520234();
                  unaff_x25 = 0;
                }
                func_0x000107520198();
                func_0x000107520910();
                do {
                  func_0x0001075208e4();
                  bVar4 = !(bool)uVar9;
                  uVar9 = true;
                  if (bVar4 || extraout_w8 == 0) break;
                  uVar9 = *(float *)(extraout_x10 + 0xb4) == fVar18;
                } while (*(float *)(extraout_x10 + 0xb4) < fVar18);
                uVar17 = extraout_x10 + 0x98;
                uVar15 = unaff_x24;
                uVar16 = unaff_x24;
                unaff_x26 = uVar17;
                if (extraout_x9 == 0) {
                  while( true ) {
                    uVar16 = uVar15 + 0x98;
                    bVar4 = uVar17 == uVar16;
                    unaff_x21 = uVar16;
                    if ((uVar16 <= uVar17) ||
                       ((func_0x0001075208c4(), bVar4 && extraout_w8_01 != 0 &&
                        (uVar16 = uVar15, unaff_x21 = uVar15, *(float *)(uVar15 + 0x1c) < fVar18))))
                    break;
                    uVar15 = uVar15 - 0x98;
                  }
                }
                else {
                  while( true ) {
                    func_0x0001075208c4();
                    bVar4 = !(bool)uVar9;
                    uVar9 = bVar4 || extraout_w8_00 == 0;
                    if ((!bVar4 && extraout_w8_00 != 0) &&
                       (uVar9 = *(float *)(uVar16 + 0x1c) == fVar18, unaff_x21 = uVar16,
                       *(float *)(uVar16 + 0x1c) < fVar18)) break;
                    uVar16 = uVar16 - 0x98;
                  }
                }
                while (unaff_x26 < uVar16) {
                  func_0x000107520898();
                  func_0x000107520910();
                  do {
                    uVar15 = unaff_x26 + 0x98;
                    if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
                    pfVar1 = (float *)(unaff_x26 + 0xb4);
                    unaff_x26 = uVar15;
                  } while (*pfVar1 < fVar18);
                  do {
                    do {
                      uVar14 = uVar16;
                      uVar16 = uVar14 - 0x98;
                    } while (*(char *)(uVar14 - 0x6c) != '\x01' || extraout_w8_02 == 0);
                    unaff_x26 = uVar15;
                  } while (fVar18 <= *(float *)(uVar14 - 0x7c));
                }
                unaff_x27 = unaff_x26 - 0x98;
                if (unaff_x20 != unaff_x27) {
                  func_0x000107520558();
                  FUN_1074d3064();
                }
                func_0x000107520708();
                func_0x000107520234();
                uVar5 = unaff_x21 <= uVar17;
                cVar8 = (long)(uVar17 - unaff_x21) < 0;
                uVar9 = uVar17 == unaff_x21;
                uVar16 = unaff_x27;
                if (!(bool)uVar5) goto LAB_10751ee54;
                func_0x000107520558();
                FUN_10751f518();
                uVar15 = unaff_x26;
                FUN_10751f518(unaff_x26,unaff_x19);
                uVar17 = unaff_x28;
                if ((int)uVar15 == 0) goto code_r0x00010751ee50;
                unaff_x19 = unaff_x27;
              } while ((unaff_x28 & 1) == 0);
              goto LAB_10751f2f8;
            }
          }
        }
      }
    }
  }
  return;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  uVar5 = unaff_x19 <= unaff_x21;
  cVar8 = (long)(unaff_x21 - unaff_x19) < 0;
  uVar9 = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar15 = param_3;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar9 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar15 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar9) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar15 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_3 - 0x98;
      fVar18 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar9 = *(float *)(puVar3 + -0x1bc) == fVar18;
      uVar15 = param_3;
    } while (*(float *)(puVar3 + -0x1bc) < fVar18);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_3 = uVar15;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar15 = unaff_x25;
    cVar6 = SBORROW8(0x98,uVar15);
    cVar8 = (long)(0x98 - uVar15) < 0;
    uVar9 = uVar15 == 0x98;
    if ((long)uVar15 < 0x99) {
      func_0x000107520610();
      if ((((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
          ((*(byte *)(uVar17 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar17 + 0x1c) < *(float *)(uVar17 + 0xb4))) {
        func_0x000107520a04();
      }
      param_3 = unaff_x20 + uVar15 * unaff_x24;
      if (((*(char *)(uVar17 + 0x2c) != '\x01') || ((*(byte *)(param_3 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_3 + 0x1c) <= *(float *)(uVar17 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar6 = SBORROW8(0x98,uVar16);
          cVar8 = (long)(0x98 - uVar16) < 0;
          uVar9 = uVar16 == 0x98;
          if (0x98 < (long)uVar16) break;
          func_0x0001075204d4();
          if (((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
             (((*(byte *)(uVar17 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar17 + 0x1c) < *(float *)(uVar17 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_3 = unaff_x21;
        } while (((*(char *)(uVar17 + 0x2c) != '\x01') || ((puVar3[-0x1ac] & 1) == 0)) ||
                (*(float *)(puVar3 + -0x1bc) <= *(float *)(uVar17 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar15 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    uVar5 = 1 < unaff_x28;
    cVar6 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar8 = (long)unaff_x21 < 0;
    uVar9 = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc(puVar3 + -0x270);
    unaff_x24 = 0;
    param_3 = unaff_x21 >> 1;
    uVar14 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar8 != cVar6) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar14 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,param_3);
      cVar8 = (long)(unaff_x24 - param_3) < 0;
    } while ((long)unaff_x24 <= (long)param_3);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar14 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar14 - unaff_x20) + 0x98;
      uVar9 = (long)((uVar14 - unaff_x20) + -1) < 0;
      uVar7 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar7)) &&
         (((*(byte *)(uVar14 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar15 + 0x1b)), (bool)uVar9)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar7)) ||
             ((puVar3[-0x1ac] & 1) == 0)) break;
          uVar7 = *(float *)(uVar15 + 0x1b) == *(float *)(puVar3 + -0x1bc);
        } while (*(float *)(uVar15 + 0x1b) < *(float *)(puVar3 + -0x1bc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(puVar3 + -0x270);
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar12 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar11 = param_3;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_3 = unaff_x20;
  unaff_x20 = param_3 + 0x98;
  uVar5 = unaff_x19 <= unaff_x20;
  cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
  uVar9 = unaff_x20 == unaff_x19;
  if (!(bool)uVar9) {
    if (((*(char *)(param_3 + 0xc4) == '\x01') && ((*(byte *)(param_3 + 0x2c) & 1) != 0)) &&
       (uVar9 = *(float *)(param_3 + 0xb4) == *(float *)(param_3 + 0x1c),
       *(float *)(param_3 + 0xb4) < *(float *)(param_3 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar9) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar9 = *(float *)(puVar3 + -0x1bc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)(puVar3 + -0x1bc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)(puVar3 + -0x140));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar3 + -0x2b0) = param_3;
  *(ulong *)(puVar3 + -0x2a8) = unaff_x21;
  *(ulong *)(puVar3 + -0x2a0) = unaff_x20;
  *(ulong *)(puVar3 + -0x298) = unaff_x27;
  *(undefined1 **)(puVar3 + -0x290) = puVar3 + -0xe0;
  *(code **)(puVar3 + -0x288) = FUN_10751f310;
  func_0x0001075206d8();
  uVar13 = extraout_w8_05;
  if (((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    fVar18 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar13 = extraout_w8_06;
    if ((bool)cVar8) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)uVar9) {
        fVar19 = *(float *)(unaff_x20 + 0x1c);
        uVar5 = fVar18 <= fVar19;
        uVar7 = fVar19 == fVar18;
        cVar8 = 0;
        if (fVar19 < fVar18) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      fVar18 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar8) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(unaff_x20 + 0x2c) & uVar13) == 0;
  uVar9 = false;
  uVar5 = 0;
  if ((!(bool)uVar7) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar9)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      fVar18 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar9) {
        func_0x000107520598();
LAB_10751f3c8:
        unaff_x29 = *(undefined8 *)(puVar3 + -0x290);
        unaff_x30 = *(undefined8 *)(puVar3 + -0x288);
        unaff_x20 = *(ulong *)(puVar3 + -0x2a0);
        unaff_x19 = *(ulong *)(puVar3 + -0x298);
        unaff_x22 = *(long *)(puVar3 + -0x2b0);
        unaff_x21 = *(ulong *)(puVar3 + -0x2a8);
        puVar3 = puVar3 + -0x280;
        uVar9 = uVar7;
        param_3 = uVar11;
        param_4 = uVar12;
        unaff_x27 = uVar16;
        unaff_x28 = uVar17;
        goto code_r0x00010751ebe8;
      }
    }
  }
  return;
}



/* Entry: 10751ea68; end: 10751ebe7;  */

/* WARNING: Removing unreachable block (ram,0x00010751ebd4) */

void FUN_10751ea68(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  bool bVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar14;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar15;
  long extraout_x8_04;
  long extraout_x9;
  ulong uVar16;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar19;
  code *pcVar20;
  float fVar21;
  undefined1 auStack_f0 [24];
  float fStack_d8;
  char cStack_c4;
  undefined8 uStack_58;
  
  puVar19 = &stack0xfffffffffffffff0;
  func_0x000107520328();
  func_0x000107520138();
  uStack_58 = extraout_x8;
  func_0x000107520404();
  uVar5 = 4 < extraout_x8_00;
  uVar7 = (long)(extraout_x8_00 - 5) < 0;
  uVar9 = extraout_x8_00 == 5;
  switch(extraout_x8_00) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000107520934();
    if (((bool)uVar9) && ((*(byte *)(unaff_x19 + 0x2c) & 1) != 0)) {
      param_1 = *(float *)(unaff_x20 - 0x80);
      func_0x0001075206cc();
      if ((bool)uVar7) {
        func_0x000107520818();
      }
    }
    break;
  case 3:
    param_4 = unaff_x20 - 0x98;
    FUN_10751e860();
    break;
  case 4:
    func_0x0001075209b0();
    func_0x00010751e928();
    break;
  case 5:
    func_0x0001075206b4(1);
    FUN_10751e9b0();
    break;
  default:
    func_0x0001075209c4();
    FUN_10751e860();
    unaff_x23 = 0;
    unaff_x24 = 0;
    uVar12 = unaff_x19 + 0x1c8;
    while( true ) {
      uVar13 = uVar12;
      uVar5 = unaff_x20 <= uVar13;
      bVar10 = uVar13 == unaff_x20;
      uVar9 = 1;
      if (bVar10) break;
      func_0x0001075208a4();
      uVar18 = unaff_x22;
      unaff_x25 = unaff_x21;
      if (((bVar10) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) &&
         (param_1 = *(float *)(uVar13 + 0x18), param_1 < *(float *)(unaff_x21 + 0x18))) {
        func_0x000107520844();
        unaff_x26 = unaff_x23;
        do {
          func_0x000107520414();
          uVar18 = unaff_x19;
          if (unaff_x26 == 0xfffffffffffffed0) break;
          if ((cStack_c4 != '\x01') || ((*(byte *)(unaff_x21 + 0xc4) & 1) == 0)) {
            uVar18 = unaff_x19 + unaff_x26 + 0x130;
            break;
          }
          unaff_x21 = unaff_x22 - 0x98;
          lVar3 = unaff_x19 + unaff_x26;
          unaff_x26 = unaff_x26 - 0x98;
          uVar18 = unaff_x22;
          param_1 = fStack_d8;
        } while (fStack_d8 < *(float *)(lVar3 + 0xb0));
        func_0x0001075207d8();
        func_0x0001075207c0();
        unaff_x25 = unaff_x21;
      }
      unaff_x23 = unaff_x23 + 0x98;
      uVar12 = uVar13 + 0x98;
      unaff_x21 = uVar13;
      unaff_x22 = uVar18;
    }
  }
  func_0x000107520114(uStack_58);
  if ((bool)uVar9) {
    return;
  }
  pcVar20 = FUN_10751ebe8;
  ___stack_chk_fail();
  puVar4 = auStack_f0;
code_r0x00010751ebe8:
  plVar11 = (long *)(puVar4 + -0xc0);
  *(ulong *)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar19;
  *(code **)(puVar4 + -8) = pcVar20;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)(puVar4 + -0x28) = extraout_x8_01;
  func_0x0001075202dc(puVar4 + -0xc0);
  func_0x000107520564();
  FUN_1074d3064();
  func_0x000107520790();
  func_0x00010748be00();
  func_0x000107520114(*(undefined8 *)(puVar4 + -0x28));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x30))();
    return;
  }
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
  *(code **)(puVar4 + -200) = FUN_10751ec44;
  func_0x000104bfeb48();
  *(ulong *)(puVar4 + -0x130) = unaff_x28;
  *(ulong *)(puVar4 + -0x128) = unaff_x27;
  *(ulong *)(puVar4 + -0x120) = unaff_x26;
  *(ulong *)(puVar4 + -0x118) = unaff_x25;
  *(ulong *)(puVar4 + -0x110) = unaff_x24;
  *(ulong *)(puVar4 + -0x108) = unaff_x23;
  *(ulong *)(puVar4 + -0x100) = unaff_x22;
  *(ulong *)(puVar4 + -0xf8) = unaff_x21;
  *(ulong *)(puVar4 + -0xf0) = unaff_x20;
  *(ulong *)(puVar4 + -0xe8) = unaff_x19;
  *(undefined1 **)(puVar4 + -0xe0) = puVar4 + -0xd0;
  *(code **)(puVar4 + -0xd8) = FUN_10751ec60;
  uVar12 = param_4;
  uVar13 = param_5;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)(puVar4 + -0x140) = extraout_x8_02;
  unaff_x23 = 0x98;
  unaff_x25 = param_5;
  do {
    func_0x00010752069c();
    uVar17 = unaff_x27;
    uVar18 = unaff_x28;
LAB_10751ec9c:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)uVar5 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
        return;
      }
      bVar10 = 0xe3e < extraout_x8_03;
      uVar7 = (long)(extraout_x8_03 - 0xe3f) < 0;
      uVar9 = extraout_x8_03 == 0xe3f;
      unaff_x27 = unaff_x19;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_03 < 0xe40) {
        uVar5 = unaff_x19 <= unaff_x20;
        cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
        uVar9 = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          if (!(bool)uVar9) goto LAB_10751f28c;
          goto LAB_10751f2f8;
        }
        if ((bool)uVar9) goto LAB_10751f2f8;
        unaff_x24 = 0;
        unaff_x23 = unaff_x20;
        goto LAB_10751f008;
      }
      if (param_4 == 0) {
        uVar5 = unaff_x19 <= unaff_x20;
        cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
        uVar9 = 1;
        if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
        func_0x000107520a1c();
        goto LAB_10751f0a8;
      }
      func_0x000107520974();
      if (bVar10) {
        func_0x000107520858(unaff_x20,unaff_x28);
        func_0x000107520960();
        FUN_10751f310();
        FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,*(undefined8 *)(puVar4 + -0x280));
        uVar12 = unaff_x28 + 0x98;
        uVar16 = uVar17;
        FUN_10751f310(uVar17,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar16;
      }
      else {
        func_0x000107520858(unaff_x28,unaff_x20);
      }
      param_4 = param_4 - 1;
      if ((unaff_x25 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar9) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        param_1 = *(float *)(unaff_x20 - 0x7c);
        func_0x000107520940();
        if ((bool)uVar7) break;
      }
      func_0x000107520198();
      func_0x000107520910();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
         (*(float *)(unaff_x19 - 0x7c) <= param_1)) {
        do {
          uVar16 = unaff_x26;
          unaff_x26 = uVar16 + 0x98;
          if (unaff_x19 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar16 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar16 + 0xb4) <= param_1));
      }
      else {
        do {
          do {
            uVar16 = unaff_x26;
            unaff_x26 = uVar16 + 0x98;
          } while (*(char *)(uVar16 + 0xc4) != '\x01');
        } while (*(float *)(uVar16 + 0xb4) <= param_1);
      }
      uVar16 = unaff_x24;
      uVar15 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          uVar15 = uVar16;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar15 + 0x2c) & 1) == 0)) break;
          uVar16 = uVar15 - 0x98;
        } while (param_1 < *(float *)(uVar15 + 0x1c));
      }
LAB_10751ef58:
      if (unaff_x26 < uVar15) {
        func_0x00010752088c();
        func_0x000107520910();
        do {
          do {
            uVar16 = unaff_x26;
            unaff_x26 = uVar16 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar16 + 0xc4) & 1) == 0) ||
                (bVar10 = param_1 == *(float *)(uVar16 + 0xb4), uVar2 = uVar15,
                *(float *)(uVar16 + 0xb4) <= param_1));
        do {
          uVar15 = uVar2 - 0x98;
          func_0x0001075208a4();
          if (!bVar10) break;
          pfVar1 = (float *)(uVar2 - 0x7c);
          bVar10 = param_1 == *pfVar1;
          uVar2 = uVar15;
        } while (param_1 < *pfVar1);
        goto LAB_10751ef58;
      }
      uVar5 = unaff_x26 - 0x98 <= unaff_x20;
      uVar9 = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)uVar9) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      unaff_x25 = 0;
    }
    func_0x000107520198();
    func_0x000107520910();
    do {
      func_0x0001075208e4();
      bVar10 = !(bool)uVar9;
      uVar9 = true;
      if (bVar10 || extraout_w8 == 0) break;
      uVar9 = *(float *)(extraout_x10 + 0xb4) == param_1;
    } while (*(float *)(extraout_x10 + 0xb4) < param_1);
    uVar18 = extraout_x10 + 0x98;
    uVar16 = unaff_x24;
    uVar17 = unaff_x24;
    unaff_x26 = uVar18;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar17 = uVar16 + 0x98;
        bVar10 = uVar18 == uVar17;
        unaff_x21 = uVar17;
        if ((uVar17 <= uVar18) ||
           ((func_0x0001075208c4(), bVar10 && extraout_w8_01 != 0 &&
            (uVar17 = uVar16, unaff_x21 = uVar16, *(float *)(uVar16 + 0x1c) < param_1)))) break;
        uVar16 = uVar16 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar10 = !(bool)uVar9;
        uVar9 = bVar10 || extraout_w8_00 == 0;
        if ((!bVar10 && extraout_w8_00 != 0) &&
           (uVar9 = *(float *)(uVar17 + 0x1c) == param_1, unaff_x21 = uVar17,
           *(float *)(uVar17 + 0x1c) < param_1)) break;
        uVar17 = uVar17 - 0x98;
      }
    }
    while (unaff_x26 < uVar17) {
      func_0x000107520898();
      func_0x000107520910();
      do {
        uVar16 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb4);
        unaff_x26 = uVar16;
      } while (*pfVar1 < param_1);
      do {
        do {
          uVar15 = uVar17;
          uVar17 = uVar15 - 0x98;
        } while (*(char *)(uVar15 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar16;
      } while (param_1 <= *(float *)(uVar15 - 0x7c));
    }
    unaff_x27 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x27) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    uVar5 = unaff_x21 <= uVar18;
    cVar8 = (long)(uVar18 - unaff_x21) < 0;
    uVar9 = uVar18 == unaff_x21;
    uVar17 = unaff_x27;
    if (!(bool)uVar5) goto LAB_10751ee54;
    func_0x000107520558();
    FUN_10751f518();
    uVar16 = unaff_x26;
    FUN_10751f518(unaff_x26,unaff_x19);
    uVar18 = unaff_x28;
    if ((int)uVar16 == 0) goto code_r0x00010751ee50;
    unaff_x19 = unaff_x27;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751f2f8;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  uVar5 = unaff_x19 <= unaff_x21;
  cVar8 = (long)(unaff_x21 - unaff_x19) < 0;
  uVar9 = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar16 = param_4;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar9 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar16 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar9) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar16 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_4 - 0x98;
      fVar21 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar9 = *(float *)(puVar4 + -0x1bc) == fVar21;
      uVar16 = param_4;
    } while (*(float *)(puVar4 + -0x1bc) < fVar21);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_4 = uVar16;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar16 = unaff_x25;
    cVar6 = SBORROW8(0x98,uVar16);
    cVar8 = (long)(0x98 - uVar16) < 0;
    uVar9 = uVar16 == 0x98;
    if ((long)uVar16 < 0x99) {
      func_0x000107520610();
      if ((((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
          ((*(byte *)(uVar18 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar18 + 0x1c) < *(float *)(uVar18 + 0xb4))) {
        func_0x000107520a04();
      }
      param_4 = unaff_x20 + uVar16 * unaff_x24;
      if (((*(char *)(uVar18 + 0x2c) != '\x01') || ((*(byte *)(param_4 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_4 + 0x1c) <= *(float *)(uVar18 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar6 = SBORROW8(0x98,uVar17);
          cVar8 = (long)(0x98 - uVar17) < 0;
          uVar9 = uVar17 == 0x98;
          if (0x98 < (long)uVar17) break;
          func_0x0001075204d4();
          if (((cVar8 != cVar6) && (func_0x000107520a10(), (bool)uVar9)) &&
             (((*(byte *)(uVar18 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar18 + 0x1c) < *(float *)(uVar18 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_4 = unaff_x21;
        } while (((*(char *)(uVar18 + 0x2c) != '\x01') || ((puVar4[-0x1ac] & 1) == 0)) ||
                (*(float *)(puVar4 + -0x1bc) <= *(float *)(uVar18 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar16 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    uVar5 = 1 < unaff_x28;
    cVar6 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar8 = (long)unaff_x21 < 0;
    uVar9 = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc(puVar4 + -0x270);
    unaff_x24 = 0;
    param_4 = unaff_x21 >> 1;
    uVar15 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar8 != cVar6) && (*(char *)(extraout_x8_04 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_04 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_04 + 0xb4) < *(float *)(extraout_x8_04 + 0x14c))))) {
        uVar15 = extraout_x8_04 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,param_4);
      cVar8 = (long)(unaff_x24 - param_4) < 0;
    } while ((long)unaff_x24 <= (long)param_4);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar15 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar15 - unaff_x20) + 0x98;
      uVar9 = (long)((uVar15 - unaff_x20) + -1) < 0;
      uVar7 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar7)) &&
         (((*(byte *)(uVar15 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar16 + 0x1b)), (bool)uVar9)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar7)) ||
             ((puVar4[-0x1ac] & 1) == 0)) break;
          uVar7 = *(float *)(uVar16 + 0x1b) == *(float *)(puVar4 + -0x1bc);
        } while (*(float *)(uVar16 + 0x1b) < *(float *)(puVar4 + -0x1bc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(puVar4 + -0x270);
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar13 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar12 = param_4;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_4 = unaff_x20;
  unaff_x20 = param_4 + 0x98;
  uVar5 = unaff_x19 <= unaff_x20;
  cVar8 = (long)(unaff_x20 - unaff_x19) < 0;
  uVar9 = unaff_x20 == unaff_x19;
  if (!(bool)uVar9) {
    if (((*(char *)(param_4 + 0xc4) == '\x01') && ((*(byte *)(param_4 + 0x2c) & 1) != 0)) &&
       (uVar9 = *(float *)(param_4 + 0xb4) == *(float *)(param_4 + 0x1c),
       *(float *)(param_4 + 0xb4) < *(float *)(param_4 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar9) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar9 = *(float *)(puVar4 + -0x1bc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)(puVar4 + -0x1bc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)(puVar4 + -0x140));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar4 + -0x2b0) = param_4;
  *(ulong *)(puVar4 + -0x2a8) = unaff_x21;
  *(ulong *)(puVar4 + -0x2a0) = unaff_x20;
  *(ulong *)(puVar4 + -0x298) = unaff_x27;
  *(undefined1 **)(puVar4 + -0x290) = puVar4 + -0xe0;
  *(code **)(puVar4 + -0x288) = FUN_10751f310;
  func_0x0001075206d8();
  uVar14 = extraout_w8_05;
  if (((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    param_1 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar14 = extraout_w8_06;
    if ((bool)cVar8) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)uVar9) {
        fVar21 = *(float *)(unaff_x20 + 0x1c);
        uVar5 = param_1 <= fVar21;
        uVar7 = fVar21 == param_1;
        cVar8 = 0;
        if (fVar21 < param_1) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      param_1 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar8) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(unaff_x20 + 0x2c) & uVar14) == 0;
  uVar9 = false;
  uVar5 = 0;
  if ((!(bool)uVar7) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar9)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      param_1 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar9) {
        func_0x000107520598();
LAB_10751f3c8:
        puVar19 = *(undefined1 **)(puVar4 + -0x290);
        pcVar20 = *(code **)(puVar4 + -0x288);
        unaff_x20 = *(ulong *)(puVar4 + -0x2a0);
        unaff_x19 = *(ulong *)(puVar4 + -0x298);
        unaff_x22 = *(ulong *)(puVar4 + -0x2b0);
        unaff_x21 = *(ulong *)(puVar4 + -0x2a8);
        puVar4 = puVar4 + -0x280;
        uVar9 = uVar7;
        param_4 = uVar12;
        param_5 = uVar13;
        unaff_x27 = uVar17;
        unaff_x28 = uVar18;
        goto code_r0x00010751ebe8;
      }
    }
  }
  return;
}



/* Entry: 10751ebe8; end: 10751ec43;  */

void FUN_10751ebe8(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar12;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar14;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar15;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar16;
  
code_r0x00010751ebe8:
  plVar8 = (long *)((long)register0x00000008 + -0xc0);
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
  func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0xc0));
  func_0x000107520564();
  FUN_1074d3064();
  func_0x000107520790();
  func_0x00010748be00();
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x30))();
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -200) = FUN_10751ec44;
  func_0x000104bfeb48();
  *(ulong *)((long)register0x00000008 + -0x130) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x128) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x110) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x108) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0xf0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_10751ec60;
  uVar9 = param_4;
  uVar10 = param_5;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x140) = extraout_x8_00;
  unaff_x23 = 0x98;
  unaff_x25 = param_5;
  do {
    func_0x00010752069c();
    uVar14 = unaff_x27;
    uVar15 = unaff_x28;
LAB_10751ec9c:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
        return;
      }
      bVar3 = 0xe3e < extraout_x8_01;
      uVar5 = (long)(extraout_x8_01 - 0xe3f) < 0;
      uVar7 = extraout_x8_01 == 0xe3f;
      unaff_x27 = unaff_x19;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_01 < 0xe40) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          if (!(bool)in_ZR) goto LAB_10751f28c;
          goto LAB_10751f2f8;
        }
        if ((bool)in_ZR) goto LAB_10751f2f8;
        unaff_x24 = 0;
        unaff_x23 = unaff_x20;
        goto LAB_10751f008;
      }
      if (param_4 == 0) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
        func_0x000107520a1c();
        goto LAB_10751f0a8;
      }
      func_0x000107520974();
      if (bVar3) {
        func_0x000107520858(unaff_x20,unaff_x28);
        func_0x000107520960();
        FUN_10751f310();
        FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,
                      *(undefined8 *)((long)register0x00000008 + -0x280));
        uVar9 = unaff_x28 + 0x98;
        uVar13 = uVar14;
        FUN_10751f310(uVar14,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar13;
      }
      else {
        func_0x000107520858(unaff_x28,unaff_x20);
      }
      param_4 = param_4 - 1;
      if ((unaff_x25 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        param_1 = *(float *)(unaff_x20 - 0x7c);
        func_0x000107520940();
        if ((bool)uVar5) break;
      }
      func_0x000107520198();
      func_0x000107520910();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
         (*(float *)(unaff_x19 - 0x7c) <= param_1)) {
        do {
          uVar13 = unaff_x26;
          unaff_x26 = uVar13 + 0x98;
          if (unaff_x19 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar13 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar13 + 0xb4) <= param_1));
      }
      else {
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (*(char *)(uVar13 + 0xc4) != '\x01');
        } while (*(float *)(uVar13 + 0xb4) <= param_1);
      }
      uVar13 = unaff_x24;
      uVar12 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          uVar12 = uVar13;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar12 + 0x2c) & 1) == 0)) break;
          uVar13 = uVar12 - 0x98;
        } while (param_1 < *(float *)(uVar12 + 0x1c));
      }
LAB_10751ef58:
      if (unaff_x26 < uVar12) {
        func_0x00010752088c();
        func_0x000107520910();
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar13 + 0xc4) & 1) == 0) ||
                (bVar3 = param_1 == *(float *)(uVar13 + 0xb4), uVar2 = uVar12,
                *(float *)(uVar13 + 0xb4) <= param_1));
        do {
          uVar12 = uVar2 - 0x98;
          func_0x0001075208a4();
          if (!bVar3) break;
          pfVar1 = (float *)(uVar2 - 0x7c);
          bVar3 = param_1 == *pfVar1;
          uVar2 = uVar12;
        } while (param_1 < *pfVar1);
        goto LAB_10751ef58;
      }
      in_CY = unaff_x26 - 0x98 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)in_ZR) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      unaff_x25 = 0;
    }
    func_0x000107520198();
    func_0x000107520910();
    do {
      func_0x0001075208e4();
      bVar3 = !(bool)uVar7;
      uVar7 = true;
      if (bVar3 || extraout_w8 == 0) break;
      uVar7 = *(float *)(extraout_x10 + 0xb4) == param_1;
    } while (*(float *)(extraout_x10 + 0xb4) < param_1);
    uVar15 = extraout_x10 + 0x98;
    uVar13 = unaff_x24;
    uVar14 = unaff_x24;
    unaff_x26 = uVar15;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar14 = uVar13 + 0x98;
        bVar3 = uVar15 == uVar14;
        unaff_x21 = uVar14;
        if ((uVar14 <= uVar15) ||
           ((func_0x0001075208c4(), bVar3 && extraout_w8_01 != 0 &&
            (uVar14 = uVar13, unaff_x21 = uVar13, *(float *)(uVar13 + 0x1c) < param_1)))) break;
        uVar13 = uVar13 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar3 = !(bool)uVar7;
        uVar7 = bVar3 || extraout_w8_00 == 0;
        if ((!bVar3 && extraout_w8_00 != 0) &&
           (uVar7 = *(float *)(uVar14 + 0x1c) == param_1, unaff_x21 = uVar14,
           *(float *)(uVar14 + 0x1c) < param_1)) break;
        uVar14 = uVar14 - 0x98;
      }
    }
    while (unaff_x26 < uVar14) {
      func_0x000107520898();
      func_0x000107520910();
      do {
        uVar13 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb4);
        unaff_x26 = uVar13;
      } while (*pfVar1 < param_1);
      do {
        do {
          uVar12 = uVar14;
          uVar14 = uVar12 - 0x98;
        } while (*(char *)(uVar12 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar13;
      } while (param_1 <= *(float *)(uVar12 - 0x7c));
    }
    unaff_x27 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x27) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    in_CY = unaff_x21 <= uVar15;
    cVar6 = (long)(uVar15 - unaff_x21) < 0;
    in_ZR = uVar15 == unaff_x21;
    uVar14 = unaff_x27;
    if (!(bool)in_CY) goto LAB_10751ee54;
    func_0x000107520558();
    FUN_10751f518();
    uVar13 = unaff_x26;
    FUN_10751f518(unaff_x26,unaff_x19);
    uVar15 = unaff_x28;
    if ((int)uVar13 == 0) goto code_r0x00010751ee50;
    unaff_x19 = unaff_x27;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751f2f8;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  in_CY = unaff_x19 <= unaff_x21;
  cVar6 = (long)(unaff_x21 - unaff_x19) < 0;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar13 = param_4;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar7 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar13 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar7) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar13 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_4 - 0x98;
      fVar16 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar7 = *(float *)((long)register0x00000008 + -0x1bc) == fVar16;
      uVar13 = param_4;
    } while (*(float *)((long)register0x00000008 + -0x1bc) < fVar16);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_4 = uVar13;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar13 = unaff_x25;
    cVar4 = SBORROW8(0x98,uVar13);
    cVar6 = (long)(0x98 - uVar13) < 0;
    uVar7 = uVar13 == 0x98;
    if ((long)uVar13 < 0x99) {
      func_0x000107520610();
      if ((((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
          ((*(byte *)(uVar15 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar15 + 0x1c) < *(float *)(uVar15 + 0xb4))) {
        func_0x000107520a04();
      }
      param_4 = unaff_x20 + uVar13 * unaff_x24;
      if (((*(char *)(uVar15 + 0x2c) != '\x01') || ((*(byte *)(param_4 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_4 + 0x1c) <= *(float *)(uVar15 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar4 = SBORROW8(0x98,uVar14);
          cVar6 = (long)(0x98 - uVar14) < 0;
          uVar7 = uVar14 == 0x98;
          if (0x98 < (long)uVar14) break;
          func_0x0001075204d4();
          if (((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
             (((*(byte *)(uVar15 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar15 + 0x1c) < *(float *)(uVar15 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_4 = unaff_x21;
        } while (((*(char *)(uVar15 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)register0x00000008 + -0x1ac) & 1) == 0)) ||
                (*(float *)((long)register0x00000008 + -0x1bc) <= *(float *)(uVar15 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar13 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar4 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar6 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x270));
    unaff_x24 = 0;
    param_4 = unaff_x21 >> 1;
    uVar12 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar6 != cVar4) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar12 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar4 = SBORROW8(unaff_x24,param_4);
      cVar6 = (long)(unaff_x24 - param_4) < 0;
    } while ((long)unaff_x24 <= (long)param_4);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar12 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar12 - unaff_x20) + 0x98;
      uVar7 = (long)((uVar12 - unaff_x20) + -1) < 0;
      uVar5 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar5)) &&
         (((*(byte *)(uVar12 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar13 + 0x1b)), (bool)uVar7)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar5)) ||
             ((*(byte *)((long)register0x00000008 + -0x1ac) & 1) == 0)) break;
          uVar5 = *(float *)(uVar13 + 0x1b) == *(float *)((long)register0x00000008 + -0x1bc);
        } while (*(float *)(uVar13 + 0x1b) < *(float *)((long)register0x00000008 + -0x1bc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00((undefined1 *)((long)register0x00000008 + -0x270));
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar10 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar9 = param_4;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_4 = unaff_x20;
  unaff_x20 = param_4 + 0x98;
  in_CY = unaff_x19 <= unaff_x20;
  cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
  in_ZR = unaff_x20 == unaff_x19;
  if (!(bool)in_ZR) {
    if (((*(char *)(param_4 + 0xc4) == '\x01') && ((*(byte *)(param_4 + 0x2c) & 1) != 0)) &&
       (uVar7 = *(float *)(param_4 + 0xb4) == *(float *)(param_4 + 0x1c),
       *(float *)(param_4 + 0xb4) < *(float *)(param_4 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar7) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar7 = *(float *)((long)register0x00000008 + -0x1bc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)((long)register0x00000008 + -0x1bc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x140));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)((long)register0x00000008 + -0x2b0) = param_4;
  *(ulong *)((long)register0x00000008 + -0x2a8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x2a0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x298) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x290) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0x288) = FUN_10751f310;
  func_0x0001075206d8();
  uVar11 = extraout_w8_05;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    param_1 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar11 = extraout_w8_06;
    if ((bool)cVar6) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)in_ZR) {
        fVar16 = *(float *)(unaff_x20 + 0x1c);
        in_CY = param_1 <= fVar16;
        uVar7 = fVar16 == param_1;
        cVar6 = 0;
        if (fVar16 < param_1) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      param_1 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar6) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(unaff_x20 + 0x2c) & uVar11) == 0;
  uVar5 = false;
  in_CY = 0;
  if ((!(bool)uVar7) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar5)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      param_1 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar5) {
        func_0x000107520598();
LAB_10751f3c8:
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x290);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x288);
        unaff_x20 = *(ulong *)((long)register0x00000008 + -0x2a0);
        unaff_x19 = *(ulong *)((long)register0x00000008 + -0x298);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x2a8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
        in_ZR = uVar7;
        param_4 = uVar9;
        param_5 = uVar10;
        unaff_x27 = uVar14;
        unaff_x28 = uVar15;
        goto code_r0x00010751ebe8;
      }
    }
  }
  return;
}



/* Entry: 10751ec44; end: 10751ec5f;  */

void FUN_10751ec44(float param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar11;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar12;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar13;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar14;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar15;
  
code_r0x00010751ec44:
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))();
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000104bfeb48();
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10751ec60;
  uVar8 = param_4;
  uVar9 = param_5;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x80) = extraout_x8_00;
  unaff_x23 = 0x98;
  unaff_x25 = param_5;
  do {
    func_0x00010752069c();
    uVar13 = unaff_x27;
    uVar14 = unaff_x28;
LAB_10751ec9c:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
        return;
      }
      bVar3 = 0xe3e < extraout_x8_01;
      uVar5 = (long)(extraout_x8_01 - 0xe3f) < 0;
      uVar7 = extraout_x8_01 == 0xe3f;
      unaff_x27 = unaff_x19;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_01 < 0xe40) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          if (!(bool)in_ZR) goto LAB_10751f28c;
          goto LAB_10751f2f8;
        }
        if ((bool)in_ZR) goto LAB_10751f2f8;
        unaff_x24 = 0;
        unaff_x23 = unaff_x20;
        goto LAB_10751f008;
      }
      if (param_4 == 0) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
        func_0x000107520a1c();
        goto LAB_10751f0a8;
      }
      func_0x000107520974();
      if (bVar3) {
        func_0x000107520858(unaff_x20,unaff_x28);
        func_0x000107520960();
        FUN_10751f310();
        FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,
                      *(undefined8 *)((long)register0x00000008 + -0x1c0));
        uVar8 = unaff_x28 + 0x98;
        uVar12 = uVar13;
        FUN_10751f310(uVar13,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar12;
      }
      else {
        func_0x000107520858(unaff_x28,unaff_x20);
      }
      param_4 = param_4 - 1;
      if ((unaff_x25 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        param_1 = *(float *)(unaff_x20 - 0x7c);
        func_0x000107520940();
        if ((bool)uVar5) break;
      }
      func_0x000107520198();
      func_0x000107520910();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
         (*(float *)(unaff_x19 - 0x7c) <= param_1)) {
        do {
          uVar12 = unaff_x26;
          unaff_x26 = uVar12 + 0x98;
          if (unaff_x19 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar12 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar12 + 0xb4) <= param_1));
      }
      else {
        do {
          do {
            uVar12 = unaff_x26;
            unaff_x26 = uVar12 + 0x98;
          } while (*(char *)(uVar12 + 0xc4) != '\x01');
        } while (*(float *)(uVar12 + 0xb4) <= param_1);
      }
      uVar12 = unaff_x24;
      uVar11 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          uVar11 = uVar12;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar11 + 0x2c) & 1) == 0)) break;
          uVar12 = uVar11 - 0x98;
        } while (param_1 < *(float *)(uVar11 + 0x1c));
      }
LAB_10751ef58:
      if (unaff_x26 < uVar11) {
        func_0x00010752088c();
        func_0x000107520910();
        do {
          do {
            uVar12 = unaff_x26;
            unaff_x26 = uVar12 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar12 + 0xc4) & 1) == 0) ||
                (bVar3 = param_1 == *(float *)(uVar12 + 0xb4), uVar2 = uVar11,
                *(float *)(uVar12 + 0xb4) <= param_1));
        do {
          uVar11 = uVar2 - 0x98;
          func_0x0001075208a4();
          if (!bVar3) break;
          pfVar1 = (float *)(uVar2 - 0x7c);
          bVar3 = param_1 == *pfVar1;
          uVar2 = uVar11;
        } while (param_1 < *pfVar1);
        goto LAB_10751ef58;
      }
      in_CY = unaff_x26 - 0x98 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)in_ZR) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      unaff_x25 = 0;
    }
    func_0x000107520198();
    func_0x000107520910();
    do {
      func_0x0001075208e4();
      bVar3 = !(bool)uVar7;
      uVar7 = true;
      if (bVar3 || extraout_w8 == 0) break;
      uVar7 = *(float *)(extraout_x10 + 0xb4) == param_1;
    } while (*(float *)(extraout_x10 + 0xb4) < param_1);
    uVar14 = extraout_x10 + 0x98;
    uVar12 = unaff_x24;
    uVar13 = unaff_x24;
    unaff_x26 = uVar14;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar13 = uVar12 + 0x98;
        bVar3 = uVar14 == uVar13;
        unaff_x21 = uVar13;
        if ((uVar13 <= uVar14) ||
           ((func_0x0001075208c4(), bVar3 && extraout_w8_01 != 0 &&
            (uVar13 = uVar12, unaff_x21 = uVar12, *(float *)(uVar12 + 0x1c) < param_1)))) break;
        uVar12 = uVar12 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar3 = !(bool)uVar7;
        uVar7 = bVar3 || extraout_w8_00 == 0;
        if ((!bVar3 && extraout_w8_00 != 0) &&
           (uVar7 = *(float *)(uVar13 + 0x1c) == param_1, unaff_x21 = uVar13,
           *(float *)(uVar13 + 0x1c) < param_1)) break;
        uVar13 = uVar13 - 0x98;
      }
    }
    while (unaff_x26 < uVar13) {
      func_0x000107520898();
      func_0x000107520910();
      do {
        uVar12 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb4);
        unaff_x26 = uVar12;
      } while (*pfVar1 < param_1);
      do {
        do {
          uVar11 = uVar13;
          uVar13 = uVar11 - 0x98;
        } while (*(char *)(uVar11 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar12;
      } while (param_1 <= *(float *)(uVar11 - 0x7c));
    }
    unaff_x27 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x27) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    in_CY = unaff_x21 <= uVar14;
    cVar6 = (long)(uVar14 - unaff_x21) < 0;
    in_ZR = uVar14 == unaff_x21;
    uVar13 = unaff_x27;
    if (!(bool)in_CY) goto LAB_10751ee54;
    func_0x000107520558();
    FUN_10751f518();
    uVar12 = unaff_x26;
    FUN_10751f518(unaff_x26,unaff_x19);
    uVar14 = unaff_x28;
    if ((int)uVar12 == 0) goto code_r0x00010751ee50;
    unaff_x19 = unaff_x27;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751f2f8;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  in_CY = unaff_x19 <= unaff_x21;
  cVar6 = (long)(unaff_x21 - unaff_x19) < 0;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar12 = param_4;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar7 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar12 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar7) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar12 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_4 - 0x98;
      fVar15 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar7 = *(float *)((long)register0x00000008 + -0xfc) == fVar15;
      uVar12 = param_4;
    } while (*(float *)((long)register0x00000008 + -0xfc) < fVar15);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_4 = uVar12;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar12 = unaff_x25;
    cVar4 = SBORROW8(0x98,uVar12);
    cVar6 = (long)(0x98 - uVar12) < 0;
    uVar7 = uVar12 == 0x98;
    if ((long)uVar12 < 0x99) {
      func_0x000107520610();
      if ((((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
          ((*(byte *)(uVar14 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar14 + 0x1c) < *(float *)(uVar14 + 0xb4))) {
        func_0x000107520a04();
      }
      param_4 = unaff_x20 + uVar12 * unaff_x24;
      if (((*(char *)(uVar14 + 0x2c) != '\x01') || ((*(byte *)(param_4 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_4 + 0x1c) <= *(float *)(uVar14 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar4 = SBORROW8(0x98,uVar13);
          cVar6 = (long)(0x98 - uVar13) < 0;
          uVar7 = uVar13 == 0x98;
          if (0x98 < (long)uVar13) break;
          func_0x0001075204d4();
          if (((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
             (((*(byte *)(uVar14 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar14 + 0x1c) < *(float *)(uVar14 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_4 = unaff_x21;
        } while (((*(char *)(uVar14 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)register0x00000008 + -0xec) & 1) == 0)) ||
                (*(float *)((long)register0x00000008 + -0xfc) <= *(float *)(uVar14 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar12 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar4 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar6 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x1b0));
    unaff_x24 = 0;
    param_4 = unaff_x21 >> 1;
    uVar11 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar6 != cVar4) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar11 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar4 = SBORROW8(unaff_x24,param_4);
      cVar6 = (long)(unaff_x24 - param_4) < 0;
    } while ((long)unaff_x24 <= (long)param_4);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar11 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar11 - unaff_x20) + 0x98;
      uVar7 = (long)((uVar11 - unaff_x20) + -1) < 0;
      uVar5 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar5)) &&
         (((*(byte *)(uVar11 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar12 + 0x1b)), (bool)uVar7)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar5)) ||
             ((*(byte *)((long)register0x00000008 + -0xec) & 1) == 0)) break;
          uVar5 = *(float *)(uVar12 + 0x1b) == *(float *)((long)register0x00000008 + -0xfc);
        } while (*(float *)(uVar12 + 0x1b) < *(float *)((long)register0x00000008 + -0xfc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00((undefined1 *)((long)register0x00000008 + -0x1b0));
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar9 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar8 = param_4;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_4 = unaff_x20;
  unaff_x20 = param_4 + 0x98;
  in_CY = unaff_x19 <= unaff_x20;
  cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
  in_ZR = unaff_x20 == unaff_x19;
  if (!(bool)in_ZR) {
    if (((*(char *)(param_4 + 0xc4) == '\x01') && ((*(byte *)(param_4 + 0x2c) & 1) != 0)) &&
       (uVar7 = *(float *)(param_4 + 0xb4) == *(float *)(param_4 + 0x1c),
       *(float *)(param_4 + 0xb4) < *(float *)(param_4 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar7) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar7 = *(float *)((long)register0x00000008 + -0xfc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)((long)register0x00000008 + -0xfc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x80));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)((long)register0x00000008 + -0x1f0) = param_4;
  *(ulong *)((long)register0x00000008 + -0x1e8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x1e0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x1d8) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x1d0) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x1c8) = FUN_10751f310;
  func_0x0001075206d8();
  uVar10 = extraout_w8_05;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    param_1 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar10 = extraout_w8_06;
    if ((bool)cVar6) {
      func_0x000107520928();
      uVar7 = false;
      if ((bool)in_ZR) {
        fVar15 = *(float *)(unaff_x20 + 0x1c);
        in_CY = param_1 <= fVar15;
        uVar7 = fVar15 == param_1;
        cVar6 = 0;
        if (fVar15 < param_1) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar7) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      param_1 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar6) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar7 = (*(byte *)(unaff_x20 + 0x2c) & uVar10) == 0;
  uVar5 = false;
  in_CY = 0;
  if ((!(bool)uVar7) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar5)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      param_1 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar5) {
        func_0x000107520598();
LAB_10751f3c8:
        unaff_x20 = *(ulong *)((long)register0x00000008 + -0x1e0);
        unaff_x19 = *(ulong *)((long)register0x00000008 + -0x1d8);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x1e8);
        param_2 = (long *)((long)register0x00000008 + -0x280);
        *(ulong *)((long)register0x00000008 + -0x1e0) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x1d8) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1d0);
        func_0x0001075202d0();
        func_0x000107520138();
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = extraout_x8;
        func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x280));
        func_0x000107520564();
        FUN_1074d3064();
        func_0x000107520790();
        func_0x00010748be00();
        func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x1e8));
        if ((bool)uVar7) {
          return;
        }
        unaff_x30 = FUN_10751ec44;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
        in_ZR = uVar7;
        param_4 = uVar8;
        param_5 = uVar9;
        unaff_x27 = uVar13;
        unaff_x28 = uVar14;
        goto code_r0x00010751ec44;
      }
    }
  }
  return;
}



/* Entry: 10751ec60; end: 10751f30f;  */

void FUN_10751ec60(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar12;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar14;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar16;
  
code_r0x00010751ec60:
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = param_4;
  uVar10 = param_5;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8_00;
  unaff_x23 = 0x98;
  unaff_x25 = param_5;
  do {
    func_0x00010752069c();
    uVar14 = unaff_x27;
    uVar15 = unaff_x28;
LAB_10751ec9c:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
        return;
      }
      bVar3 = 0xe3e < extraout_x8_01;
      uVar5 = (long)(extraout_x8_01 - 0xe3f) < 0;
      uVar7 = extraout_x8_01 == 0xe3f;
      unaff_x27 = unaff_x19;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_01 < 0xe40) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          if (!(bool)in_ZR) goto LAB_10751f28c;
          goto LAB_10751f2f8;
        }
        if ((bool)in_ZR) goto LAB_10751f2f8;
        unaff_x24 = 0;
        unaff_x23 = unaff_x20;
        goto LAB_10751f008;
      }
      if (param_4 == 0) {
        in_CY = unaff_x19 <= unaff_x20;
        cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
        func_0x000107520a1c();
        goto LAB_10751f0a8;
      }
      func_0x000107520974();
      if (bVar3) {
        func_0x000107520858(unaff_x20,unaff_x28);
        func_0x000107520960();
        FUN_10751f310();
        FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,
                      *(undefined8 *)((long)register0x00000008 + -0x1b0));
        uVar9 = unaff_x28 + 0x98;
        uVar13 = uVar14;
        FUN_10751f310(uVar14,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar13;
      }
      else {
        func_0x000107520858(unaff_x28,unaff_x20);
      }
      param_4 = param_4 - 1;
      if ((unaff_x25 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        param_1 = *(float *)(unaff_x20 - 0x7c);
        func_0x000107520940();
        if ((bool)uVar5) break;
      }
      func_0x000107520198();
      func_0x000107520910();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
         (*(float *)(unaff_x19 - 0x7c) <= param_1)) {
        do {
          uVar13 = unaff_x26;
          unaff_x26 = uVar13 + 0x98;
          if (unaff_x19 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar13 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar13 + 0xb4) <= param_1));
      }
      else {
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (*(char *)(uVar13 + 0xc4) != '\x01');
        } while (*(float *)(uVar13 + 0xb4) <= param_1);
      }
      uVar13 = unaff_x24;
      uVar12 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          uVar12 = uVar13;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar12 + 0x2c) & 1) == 0)) break;
          uVar13 = uVar12 - 0x98;
        } while (param_1 < *(float *)(uVar12 + 0x1c));
      }
LAB_10751ef58:
      if (unaff_x26 < uVar12) {
        func_0x00010752088c();
        func_0x000107520910();
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar13 + 0xc4) & 1) == 0) ||
                (bVar3 = param_1 == *(float *)(uVar13 + 0xb4), uVar2 = uVar12,
                *(float *)(uVar13 + 0xb4) <= param_1));
        do {
          uVar12 = uVar2 - 0x98;
          func_0x0001075208a4();
          if (!bVar3) break;
          pfVar1 = (float *)(uVar2 - 0x7c);
          bVar3 = param_1 == *pfVar1;
          uVar2 = uVar12;
        } while (param_1 < *pfVar1);
        goto LAB_10751ef58;
      }
      in_CY = unaff_x26 - 0x98 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)in_ZR) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      unaff_x25 = 0;
    }
    func_0x000107520198();
    func_0x000107520910();
    do {
      func_0x0001075208e4();
      bVar3 = !(bool)uVar7;
      uVar7 = true;
      if (bVar3 || extraout_w8 == 0) break;
      uVar7 = *(float *)(extraout_x10 + 0xb4) == param_1;
    } while (*(float *)(extraout_x10 + 0xb4) < param_1);
    uVar15 = extraout_x10 + 0x98;
    uVar13 = unaff_x24;
    uVar14 = unaff_x24;
    unaff_x26 = uVar15;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar14 = uVar13 + 0x98;
        bVar3 = uVar15 == uVar14;
        unaff_x21 = uVar14;
        if ((uVar14 <= uVar15) ||
           ((func_0x0001075208c4(), bVar3 && extraout_w8_01 != 0 &&
            (uVar14 = uVar13, unaff_x21 = uVar13, *(float *)(uVar13 + 0x1c) < param_1)))) break;
        uVar13 = uVar13 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar3 = !(bool)uVar7;
        uVar7 = bVar3 || extraout_w8_00 == 0;
        if ((!bVar3 && extraout_w8_00 != 0) &&
           (uVar7 = *(float *)(uVar14 + 0x1c) == param_1, unaff_x21 = uVar14,
           *(float *)(uVar14 + 0x1c) < param_1)) break;
        uVar14 = uVar14 - 0x98;
      }
    }
    while (unaff_x26 < uVar14) {
      func_0x000107520898();
      func_0x000107520910();
      do {
        uVar13 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb4);
        unaff_x26 = uVar13;
      } while (*pfVar1 < param_1);
      do {
        do {
          uVar12 = uVar14;
          uVar14 = uVar12 - 0x98;
        } while (*(char *)(uVar12 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar13;
      } while (param_1 <= *(float *)(uVar12 - 0x7c));
    }
    unaff_x27 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x27) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    in_CY = unaff_x21 <= uVar15;
    cVar6 = (long)(uVar15 - unaff_x21) < 0;
    in_ZR = uVar15 == unaff_x21;
    uVar14 = unaff_x27;
    if (!(bool)in_CY) goto LAB_10751ee54;
    func_0x000107520558();
    FUN_10751f518();
    uVar13 = unaff_x26;
    FUN_10751f518(unaff_x26,unaff_x19);
    uVar15 = unaff_x28;
    if ((int)uVar13 == 0) goto code_r0x00010751ee50;
    unaff_x19 = unaff_x27;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751f2f8;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  in_CY = unaff_x19 <= unaff_x21;
  cVar6 = (long)(unaff_x21 - unaff_x19) < 0;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar13 = param_4;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar7 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar13 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar7) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar13 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_4 - 0x98;
      fVar16 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar7 = *(float *)((long)register0x00000008 + -0xec) == fVar16;
      uVar13 = param_4;
    } while (*(float *)((long)register0x00000008 + -0xec) < fVar16);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_4 = uVar13;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar13 = unaff_x25;
    cVar4 = SBORROW8(0x98,uVar13);
    cVar6 = (long)(0x98 - uVar13) < 0;
    uVar7 = uVar13 == 0x98;
    if ((long)uVar13 < 0x99) {
      func_0x000107520610();
      if ((((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
          ((*(byte *)(uVar15 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar15 + 0x1c) < *(float *)(uVar15 + 0xb4))) {
        func_0x000107520a04();
      }
      param_4 = unaff_x20 + uVar13 * unaff_x24;
      if (((*(char *)(uVar15 + 0x2c) != '\x01') || ((*(byte *)(param_4 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_4 + 0x1c) <= *(float *)(uVar15 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar4 = SBORROW8(0x98,uVar14);
          cVar6 = (long)(0x98 - uVar14) < 0;
          uVar7 = uVar14 == 0x98;
          if (0x98 < (long)uVar14) break;
          func_0x0001075204d4();
          if (((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
             (((*(byte *)(uVar15 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar15 + 0x1c) < *(float *)(uVar15 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_4 = unaff_x21;
        } while (((*(char *)(uVar15 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)register0x00000008 + -0xdc) & 1) == 0)) ||
                (*(float *)((long)register0x00000008 + -0xec) <= *(float *)(uVar15 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar13 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar4 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar6 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x1a0));
    unaff_x24 = 0;
    param_4 = unaff_x21 >> 1;
    uVar12 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar6 != cVar4) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar12 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar4 = SBORROW8(unaff_x24,param_4);
      cVar6 = (long)(unaff_x24 - param_4) < 0;
    } while ((long)unaff_x24 <= (long)param_4);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar12 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar12 - unaff_x20) + 0x98;
      uVar7 = (long)((uVar12 - unaff_x20) + -1) < 0;
      uVar5 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar5)) &&
         (((*(byte *)(uVar12 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar13 + 0x1b)), (bool)uVar7)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar5)) ||
             ((*(byte *)((long)register0x00000008 + -0xdc) & 1) == 0)) break;
          uVar5 = *(float *)(uVar13 + 0x1b) == *(float *)((long)register0x00000008 + -0xec);
        } while (*(float *)(uVar13 + 0x1b) < *(float *)((long)register0x00000008 + -0xec));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00((undefined1 *)((long)register0x00000008 + -0x1a0));
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar10 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar9 = param_4;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_4 = unaff_x20;
  unaff_x20 = param_4 + 0x98;
  in_CY = unaff_x19 <= unaff_x20;
  cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
  in_ZR = unaff_x20 == unaff_x19;
  if (!(bool)in_ZR) {
    if (((*(char *)(param_4 + 0xc4) == '\x01') && ((*(byte *)(param_4 + 0x2c) & 1) != 0)) &&
       (uVar7 = *(float *)(param_4 + 0xb4) == *(float *)(param_4 + 0x1c),
       *(float *)(param_4 + 0xb4) < *(float *)(param_4 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar7) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar7 = *(float *)((long)register0x00000008 + -0xec) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)((long)register0x00000008 + -0xec) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x70));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)((long)register0x00000008 + -0x1e0) = param_4;
  *(ulong *)((long)register0x00000008 + -0x1d8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x1d0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x1c8) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0x1c0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x1b8) = FUN_10751f310;
  func_0x0001075206d8();
  uVar11 = extraout_w8_05;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    param_1 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar11 = extraout_w8_06;
    if ((bool)cVar6) {
      func_0x000107520928();
      bVar3 = false;
      if ((bool)in_ZR) {
        fVar16 = *(float *)(unaff_x20 + 0x1c);
        in_CY = param_1 <= fVar16;
        in_ZR = fVar16 == param_1;
        cVar6 = 0;
        bVar3 = (bool)in_ZR;
        if (fVar16 < param_1) goto LAB_10751f3c8;
      }
      in_ZR = bVar3;
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)in_ZR) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      param_1 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar6) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  in_ZR = (*(byte *)(unaff_x20 + 0x2c) & uVar11) == 0;
  uVar7 = false;
  in_CY = 0;
  if ((!(bool)in_ZR) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar7)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      param_1 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar7) {
        func_0x000107520598();
LAB_10751f3c8:
        unaff_x20 = *(ulong *)((long)register0x00000008 + -0x1d0);
        unaff_x19 = *(ulong *)((long)register0x00000008 + -0x1c8);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x1d8);
        plVar8 = (long *)((long)register0x00000008 + -0x270);
        *(ulong *)((long)register0x00000008 + -0x1d0) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x1c8) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -0x1b8);
        func_0x0001075202d0();
        func_0x000107520138();
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = extraout_x8;
        func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x270));
        func_0x000107520564();
        FUN_1074d3064();
        func_0x000107520790();
        func_0x00010748be00();
        func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x1d8));
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x30))();
          return;
        }
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x280);
        *(undefined1 **)((long)register0x00000008 + -0x280) =
             (undefined1 *)((long)register0x00000008 + -0x1c0);
        *(code **)((long)register0x00000008 + -0x278) = FUN_10751ec44;
        unaff_x30 = FUN_10751ec60;
        func_0x000104bfeb48();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
        param_4 = uVar9;
        param_5 = uVar10;
        unaff_x27 = uVar14;
        unaff_x28 = uVar15;
        goto code_r0x00010751ec60;
      }
    }
  }
  return;
}



/* Entry: 10751f310; end: 10751f45f;  */

void FUN_10751f310(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar11;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong uVar12;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar13;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong uVar14;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar15;
  float fVar16;
  
code_r0x00010751f310:
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001075206d8();
  uVar10 = extraout_w8_05;
  if (((bool)in_ZR) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    fVar15 = *(float *)(unaff_x19 + 0x1c);
    func_0x000107520684();
    uVar10 = extraout_w8_06;
    if (!(bool)in_NG) goto LAB_10751f358;
    func_0x000107520928();
    if ((bool)in_ZR) {
      fVar16 = *(float *)(unaff_x20 + 0x1c);
      in_CY = fVar15 <= fVar16;
      in_ZR = fVar16 == fVar15;
      in_NG = fVar16 < fVar15;
      unaff_x22 = param_3;
      uVar9 = param_4;
      if (!(bool)in_NG) goto LAB_10751f39c;
    }
    else {
LAB_10751f39c:
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)in_ZR) {
        return;
      }
      if ((*(byte *)(unaff_x19 + 0x2c) & 1) == 0) {
        return;
      }
      fVar15 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      unaff_x22 = param_3;
      uVar9 = param_4;
      if (!(bool)in_NG) {
        return;
      }
    }
  }
  else {
LAB_10751f358:
    in_ZR = (*(byte *)(unaff_x20 + 0x2c) & uVar10) == 0;
    uVar7 = false;
    in_CY = 0;
    if (((bool)in_ZR) || (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), !(bool)uVar7)) {
      return;
    }
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (!(bool)in_ZR) {
      return;
    }
    if ((*(byte *)(unaff_x21 + 0x2c) & 1) == 0) {
      return;
    }
    fVar15 = *(float *)(unaff_x19 + 0x1c);
    func_0x000107520684();
    if (!(bool)uVar7) {
      return;
    }
    func_0x000107520598();
    unaff_x22 = param_3;
    uVar9 = param_4;
  }
  unaff_x20 = *(ulong *)((long)register0x00000008 + -0x20);
  uVar12 = *(ulong *)((long)register0x00000008 + -0x18);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  plVar8 = (long *)((long)register0x00000008 + -0xc0);
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
  func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0xc0));
  func_0x000107520564();
  FUN_1074d3064();
  func_0x000107520790();
  func_0x00010748be00();
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x30))();
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -200) = FUN_10751ec44;
  func_0x000104bfeb48();
  *(ulong *)((long)register0x00000008 + -0x130) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x128) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x110) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x108) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar2;
  *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0xf0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0xe8) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_10751ec60;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
  param_3 = unaff_x22;
  param_4 = uVar9;
  func_0x0001075202d0();
  func_0x000107520138();
  *(undefined8 *)((long)register0x00000008 + -0x140) = extraout_x8_00;
  unaff_x23 = 0x98;
  unaff_x25 = uVar9;
  unaff_x19 = unaff_x27;
  do {
    func_0x00010752069c();
    unaff_x27 = unaff_x19;
    uVar9 = unaff_x28;
LAB_10751ec9c:
    while( true ) {
      unaff_x28 = unaff_x26;
      func_0x00010752099c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
        return;
      }
      bVar3 = 0xe3e < extraout_x8_01;
      uVar5 = (long)(extraout_x8_01 - 0xe3f) < 0;
      uVar7 = extraout_x8_01 == 0xe3f;
      unaff_x19 = uVar12;
      unaff_x26 = unaff_x28;
      if ((long)extraout_x8_01 < 0xe40) {
        in_CY = uVar12 <= unaff_x20;
        in_NG = (long)(unaff_x20 - uVar12) < 0;
        in_ZR = unaff_x20 == uVar12;
        if ((unaff_x25 & 1) == 0) {
          if (!(bool)in_ZR) goto LAB_10751f28c;
          goto LAB_10751f2f8;
        }
        if ((bool)in_ZR) goto LAB_10751f2f8;
        unaff_x24 = 0;
        unaff_x23 = unaff_x20;
        goto LAB_10751f008;
      }
      if (unaff_x22 == 0) {
        in_CY = uVar12 <= unaff_x20;
        in_NG = (long)(unaff_x20 - uVar12) < 0;
        in_ZR = 1;
        if (unaff_x20 == uVar12) goto LAB_10751f2f8;
        func_0x000107520a1c();
        goto LAB_10751f0a8;
      }
      func_0x000107520974();
      if (bVar3) {
        func_0x000107520858(unaff_x20,unaff_x28);
        func_0x000107520960();
        FUN_10751f310();
        FUN_10751f310(unaff_x20 + 0x130,unaff_x28 + 0x98,
                      *(undefined8 *)((long)register0x00000008 + -0x280));
        param_3 = unaff_x28 + 0x98;
        uVar13 = unaff_x27;
        FUN_10751f310(unaff_x27,unaff_x28);
        func_0x000107520734();
        unaff_x28 = uVar13;
      }
      else {
        func_0x000107520858(unaff_x28,unaff_x20);
      }
      unaff_x22 = unaff_x22 - 1;
      if ((unaff_x25 & 1) != 0) break;
      func_0x000107520934();
      if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
        fVar15 = *(float *)(unaff_x20 - 0x7c);
        func_0x000107520940();
        if ((bool)uVar5) break;
      }
      func_0x000107520198();
      func_0x000107520910();
      unaff_x26 = unaff_x20;
      if (((extraout_w8_03 != 1) || ((*(byte *)(uVar12 - 0x6c) & 1) == 0)) ||
         (*(float *)(uVar12 - 0x7c) <= fVar15)) {
        do {
          uVar13 = unaff_x26;
          unaff_x26 = uVar13 + 0x98;
          if (uVar12 <= unaff_x26) break;
        } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar13 + 0xc4) & 1) == 0)) ||
                (*(float *)(uVar13 + 0xb4) <= fVar15));
      }
      else {
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (*(char *)(uVar13 + 0xc4) != '\x01');
        } while (*(float *)(uVar13 + 0xb4) <= fVar15);
      }
      uVar13 = unaff_x24;
      uVar11 = uVar12;
      if (unaff_x26 < uVar12) {
        do {
          uVar11 = uVar13;
          if ((extraout_w8_03 == 0) || ((*(byte *)(uVar11 + 0x2c) & 1) == 0)) break;
          uVar13 = uVar11 - 0x98;
        } while (fVar15 < *(float *)(uVar11 + 0x1c));
      }
LAB_10751ef58:
      if (unaff_x26 < uVar11) {
        func_0x00010752088c();
        func_0x000107520910();
        do {
          do {
            uVar13 = unaff_x26;
            unaff_x26 = uVar13 + 0x98;
          } while (extraout_w8_04 == 0);
        } while (((*(byte *)(uVar13 + 0xc4) & 1) == 0) ||
                (bVar3 = fVar15 == *(float *)(uVar13 + 0xb4), uVar14 = uVar11,
                *(float *)(uVar13 + 0xb4) <= fVar15));
        do {
          uVar11 = uVar14 - 0x98;
          func_0x0001075208a4();
          if (!bVar3) break;
          pfVar1 = (float *)(uVar14 - 0x7c);
          bVar3 = fVar15 == *pfVar1;
          uVar14 = uVar11;
        } while (fVar15 < *pfVar1);
        goto LAB_10751ef58;
      }
      in_CY = unaff_x26 - 0x98 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0x98;
      if (!(bool)in_ZR) {
        func_0x000107520728();
      }
      func_0x000107520714();
      func_0x000107520234();
      unaff_x25 = 0;
    }
    func_0x000107520198();
    func_0x000107520910();
    do {
      func_0x0001075208e4();
      bVar3 = !(bool)uVar7;
      uVar7 = true;
      if (bVar3 || extraout_w8 == 0) break;
      uVar7 = *(float *)(extraout_x10 + 0xb4) == fVar15;
    } while (*(float *)(extraout_x10 + 0xb4) < fVar15);
    uVar9 = extraout_x10 + 0x98;
    uVar11 = unaff_x24;
    uVar13 = unaff_x24;
    unaff_x26 = uVar9;
    if (extraout_x9 == 0) {
      while( true ) {
        uVar13 = uVar11 + 0x98;
        bVar3 = uVar9 == uVar13;
        unaff_x21 = uVar13;
        if ((uVar13 <= uVar9) ||
           ((func_0x0001075208c4(), bVar3 && extraout_w8_01 != 0 &&
            (uVar13 = uVar11, unaff_x21 = uVar11, *(float *)(uVar11 + 0x1c) < fVar15)))) break;
        uVar11 = uVar11 - 0x98;
      }
    }
    else {
      while( true ) {
        func_0x0001075208c4();
        bVar3 = !(bool)uVar7;
        uVar7 = bVar3 || extraout_w8_00 == 0;
        if ((!bVar3 && extraout_w8_00 != 0) &&
           (uVar7 = *(float *)(uVar13 + 0x1c) == fVar15, unaff_x21 = uVar13,
           *(float *)(uVar13 + 0x1c) < fVar15)) break;
        uVar13 = uVar13 - 0x98;
      }
    }
    while (unaff_x26 < uVar13) {
      func_0x000107520898();
      func_0x000107520910();
      do {
        uVar11 = unaff_x26 + 0x98;
        if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
        pfVar1 = (float *)(unaff_x26 + 0xb4);
        unaff_x26 = uVar11;
      } while (*pfVar1 < fVar15);
      do {
        do {
          uVar14 = uVar13;
          uVar13 = uVar14 - 0x98;
        } while (*(char *)(uVar14 - 0x6c) != '\x01' || extraout_w8_02 == 0);
        unaff_x26 = uVar11;
      } while (fVar15 <= *(float *)(uVar14 - 0x7c));
    }
    unaff_x19 = unaff_x26 - 0x98;
    if (unaff_x20 != unaff_x19) {
      func_0x000107520558();
      FUN_1074d3064();
    }
    func_0x000107520708();
    func_0x000107520234();
    in_CY = unaff_x21 <= uVar9;
    in_NG = (long)(uVar9 - unaff_x21) < 0;
    in_ZR = uVar9 == unaff_x21;
    unaff_x27 = unaff_x19;
    if (!(bool)in_CY) goto LAB_10751ee54;
    func_0x000107520558();
    FUN_10751f518();
    uVar13 = unaff_x26;
    FUN_10751f518(unaff_x26,uVar12);
    uVar9 = unaff_x28;
    if ((int)uVar13 == 0) goto code_r0x00010751ee50;
    uVar12 = unaff_x19;
  } while ((unaff_x28 & 1) == 0);
  goto LAB_10751f2f8;
LAB_10751f28c:
  unaff_x22 = unaff_x20;
  unaff_x20 = unaff_x22 + 0x98;
  in_CY = uVar12 <= unaff_x20;
  in_NG = (long)(unaff_x20 - uVar12) < 0;
  in_ZR = unaff_x20 == uVar12;
  if (!(bool)in_ZR) {
    if (((*(char *)(unaff_x22 + 0xc4) == '\x01') && ((*(byte *)(unaff_x22 + 0x2c) & 1) != 0)) &&
       (uVar7 = *(float *)(unaff_x22 + 0xb4) == *(float *)(unaff_x22 + 0x1c),
       *(float *)(unaff_x22 + 0xb4) < *(float *)(unaff_x22 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar7) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar7 = *(float *)((long)register0x00000008 + -0x1bc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)((long)register0x00000008 + -0x1bc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)((long)register0x00000008 + -0x140));
  if ((bool)in_ZR) {
    return;
  }
  unaff_x30 = FUN_10751f310;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x280);
  unaff_x28 = uVar9;
  goto code_r0x00010751f310;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  in_CY = uVar12 <= unaff_x21;
  in_NG = (long)(unaff_x21 - uVar12) < 0;
  in_ZR = 1;
  if (unaff_x21 == uVar12) goto LAB_10751f2f8;
  uVar13 = unaff_x22;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar7 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar13 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar7) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar13 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = unaff_x22 - 0x98;
      fVar15 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar7 = *(float *)((long)register0x00000008 + -0x1bc) == fVar15;
      uVar13 = unaff_x22;
    } while (*(float *)((long)register0x00000008 + -0x1bc) < fVar15);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  unaff_x22 = uVar13;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar13 = unaff_x25;
    cVar4 = SBORROW8(0x98,uVar13);
    cVar6 = (long)(0x98 - uVar13) < 0;
    uVar7 = uVar13 == 0x98;
    if ((long)uVar13 < 0x99) {
      func_0x000107520610();
      if ((((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
          ((*(byte *)(uVar9 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar9 + 0x1c) < *(float *)(uVar9 + 0xb4))) {
        func_0x000107520a04();
      }
      unaff_x22 = unaff_x20 + uVar13 * unaff_x24;
      if (((*(char *)(uVar9 + 0x2c) != '\x01') || ((*(byte *)(unaff_x22 + 0x2c) & 1) == 0)) ||
         (*(float *)(unaff_x22 + 0x1c) <= *(float *)(uVar9 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar4 = SBORROW8(0x98,unaff_x27);
          cVar6 = (long)(0x98 - unaff_x27) < 0;
          uVar7 = unaff_x27 == 0x98;
          if (0x98 < (long)unaff_x27) break;
          func_0x0001075204d4();
          if (((cVar6 != cVar4) && (func_0x000107520a10(), (bool)uVar7)) &&
             (((*(byte *)(uVar9 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar9 + 0x1c) < *(float *)(uVar9 + 0xb4))))) {
            func_0x000107520a04();
          }
          unaff_x22 = unaff_x21;
        } while (((*(char *)(uVar9 + 0x2c) != '\x01') ||
                 ((*(byte *)((long)register0x00000008 + -0x1ac) & 1) == 0)) ||
                (*(float *)((long)register0x00000008 + -0x1bc) <= *(float *)(uVar9 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar13 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    in_CY = 1 < unaff_x28;
    cVar6 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    in_NG = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == 0;
    unaff_x19 = uVar12;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc((undefined1 *)((long)register0x00000008 + -0x270));
    unaff_x24 = 0;
    unaff_x22 = unaff_x21 >> 1;
    uVar11 = unaff_x20;
    do {
      func_0x000107520374();
      if (((in_NG != cVar6) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar11 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar6 = SBORROW8(unaff_x24,unaff_x22);
      in_NG = (long)(unaff_x24 - unaff_x22) < 0;
    } while ((long)unaff_x24 <= (long)unaff_x22);
    uVar12 = uVar12 - 0x98;
    if (uVar11 == uVar12) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar14 = (uVar11 - unaff_x20) + 0x98;
      uVar7 = (long)((uVar11 - unaff_x20) + -1) < 0;
      uVar5 = uVar14 == 0x99;
      if (((0x98 < (long)uVar14) && (func_0x0001075201d8(uVar14 / 0x98 - 2), (bool)uVar5)) &&
         (((*(byte *)(uVar11 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar13 + 0x1b)), (bool)uVar7)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar5)) ||
             ((*(byte *)((long)register0x00000008 + -0x1ac) & 1) == 0)) break;
          uVar5 = *(float *)(uVar13 + 0x1b) == *(float *)((long)register0x00000008 + -0x1bc);
        } while (*(float *)(uVar13 + 0x1b) < *(float *)((long)register0x00000008 + -0x1bc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00((undefined1 *)((long)register0x00000008 + -0x270));
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    param_4 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    param_3 = unaff_x22;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
}



/* Entry: 10751f460; end: 10751f517;  */

/* WARNING: Possible PIC construction at 0x00010751ecc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010751ece8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010751eccc) */
/* WARNING: Removing unreachable block (ram,0x00010751ecec) */

void FUN_10751f460(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar14;
  long extraout_x8_02;
  long extraout_x9;
  ulong uVar15;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar16;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar17;
  ulong unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar18;
  undefined8 unaff_x30;
  float fVar19;
  float fVar20;
  
  func_0x0001075201ec();
  func_0x00010751f3d8();
  if ((*(char *)(param_5 + 0x2c) == '\x01') && ((*(byte *)(unaff_x22 + 0x2c) & 1) != 0)) {
    fVar19 = *(float *)(param_5 + 0x1c);
    fVar20 = *(float *)(unaff_x22 + 0x1c);
    uVar4 = fVar20 <= fVar19;
    uVar7 = fVar19 == fVar20;
    uVar9 = fVar19 < fVar20;
    if ((bool)uVar9) {
      func_0x000107520774();
      func_0x000107520a50();
      if ((((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) &&
         (func_0x000107520684(*(undefined4 *)(unaff_x22 + 0x1c)), (bool)uVar9)) {
        func_0x000107520254();
        func_0x0001075209f8();
        if ((((bool)uVar7) && ((*(byte *)(unaff_x19 + 0x2c) & 1) != 0)) &&
           (func_0x00010752066c(*(undefined4 *)(unaff_x21 + 0x1c)), (bool)uVar9)) {
          func_0x000107520248();
          func_0x0001075204a8();
          if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
            fVar19 = *(float *)(unaff_x19 + 0x1c);
            func_0x000107520940();
            if ((bool)uVar9) {
              func_0x000107520564();
              puVar3 = (undefined1 *)register0x00000008;
code_r0x00010751ebe8:
              plVar10 = (long *)(puVar3 + -0xc0);
              *(ulong *)(puVar3 + -0x20) = unaff_x20;
              *(ulong *)(puVar3 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar3 + -8) = unaff_x30;
              func_0x0001075202d0();
              func_0x000107520138();
              *(undefined8 *)(puVar3 + -0x28) = extraout_x8;
              func_0x0001075202dc(puVar3 + -0xc0);
              func_0x000107520564();
              FUN_1074d3064();
              func_0x000107520790();
              func_0x00010748be00();
              func_0x000107520114(*(undefined8 *)(puVar3 + -0x28));
              if ((bool)uVar7) {
                return;
              }
              ___stack_chk_fail();
              if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010751ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar10 + 0x30))();
                return;
              }
              *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
              *(code **)(puVar3 + -200) = FUN_10751ec44;
              func_0x000104bfeb48();
              *(ulong *)(puVar3 + -0x130) = unaff_x28;
              *(ulong *)(puVar3 + -0x128) = unaff_x27;
              *(ulong *)(puVar3 + -0x120) = unaff_x26;
              *(ulong *)(puVar3 + -0x118) = unaff_x25;
              *(ulong *)(puVar3 + -0x110) = unaff_x24;
              *(ulong *)(puVar3 + -0x108) = unaff_x23;
              *(long *)(puVar3 + -0x100) = unaff_x22;
              *(ulong *)(puVar3 + -0xf8) = unaff_x21;
              *(ulong *)(puVar3 + -0xf0) = unaff_x20;
              *(ulong *)(puVar3 + -0xe8) = unaff_x19;
              *(undefined1 **)(puVar3 + -0xe0) = puVar3 + -0xd0;
              *(code **)(puVar3 + -0xd8) = FUN_10751ec60;
              uVar11 = param_3;
              uVar12 = param_4;
              func_0x0001075202d0();
              func_0x000107520138();
              *(undefined8 *)(puVar3 + -0x140) = extraout_x8_00;
              unaff_x23 = 0x98;
              unaff_x25 = param_4;
              do {
                func_0x00010752069c();
                uVar16 = unaff_x27;
                uVar17 = unaff_x28;
LAB_10751ec9c:
                while( true ) {
                  unaff_x28 = unaff_x26;
                  func_0x00010752099c();
                  if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010751efa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)(byte)(&UNK_10de7ad51)[unaff_x28] * 4 + 0x10751efa4))();
                    return;
                  }
                  uVar4 = 0xe3e < extraout_x8_01;
                  cVar6 = (long)(extraout_x8_01 - 0xe3f) < 0;
                  uVar7 = extraout_x8_01 == 0xe3f;
                  unaff_x27 = unaff_x19;
                  unaff_x26 = unaff_x28;
                  if ((long)extraout_x8_01 < 0xe40) {
                    uVar4 = unaff_x19 <= unaff_x20;
                    cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
                    uVar7 = unaff_x20 == unaff_x19;
                    if ((unaff_x25 & 1) == 0) {
                      if (!(bool)uVar7) goto LAB_10751f28c;
                      goto LAB_10751f2f8;
                    }
                    if ((bool)uVar7) goto LAB_10751f2f8;
                    unaff_x24 = 0;
                    unaff_x23 = unaff_x20;
                    goto LAB_10751f008;
                  }
                  if (param_3 == 0) {
                    uVar4 = unaff_x19 <= unaff_x20;
                    cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
                    uVar7 = 1;
                    if (unaff_x20 == unaff_x19) goto LAB_10751f2f8;
                    func_0x000107520a1c();
                    goto LAB_10751f0a8;
                  }
                  func_0x000107520974();
                  if ((bool)uVar4) {
                    func_0x000107520858(unaff_x20,unaff_x28);
                    func_0x000107520960();
                    uVar18 = 0x10751eccc;
                    goto FUN_10751f310;
                  }
                  func_0x000107520858(unaff_x28,unaff_x20);
                  param_3 = param_3 - 1;
                  if ((unaff_x25 & 1) != 0) break;
                  func_0x000107520934();
                  if (((bool)uVar7) && ((*(byte *)(unaff_x20 + 0x2c) & 1) != 0)) {
                    fVar19 = *(float *)(unaff_x20 - 0x7c);
                    func_0x000107520940();
                    if ((bool)cVar6) break;
                  }
                  func_0x000107520198();
                  func_0x000107520910();
                  unaff_x26 = unaff_x20;
                  if (((extraout_w8_03 != 1) || ((*(byte *)(unaff_x19 - 0x6c) & 1) == 0)) ||
                     (*(float *)(unaff_x19 - 0x7c) <= fVar19)) {
                    do {
                      uVar15 = unaff_x26;
                      unaff_x26 = uVar15 + 0x98;
                      if (unaff_x19 <= unaff_x26) break;
                    } while (((extraout_w8_03 == 0) || ((*(byte *)(uVar15 + 0xc4) & 1) == 0)) ||
                            (*(float *)(uVar15 + 0xb4) <= fVar19));
                  }
                  else {
                    do {
                      do {
                        uVar15 = unaff_x26;
                        unaff_x26 = uVar15 + 0x98;
                      } while (*(char *)(uVar15 + 0xc4) != '\x01');
                    } while (*(float *)(uVar15 + 0xb4) <= fVar19);
                  }
                  uVar15 = unaff_x24;
                  uVar14 = unaff_x19;
                  if (unaff_x26 < unaff_x19) {
                    do {
                      uVar14 = uVar15;
                      if ((extraout_w8_03 == 0) || ((*(byte *)(uVar14 + 0x2c) & 1) == 0)) break;
                      uVar15 = uVar14 - 0x98;
                    } while (fVar19 < *(float *)(uVar14 + 0x1c));
                  }
LAB_10751ef58:
                  if (unaff_x26 < uVar14) {
                    func_0x00010752088c();
                    func_0x000107520910();
                    do {
                      do {
                        uVar15 = unaff_x26;
                        unaff_x26 = uVar15 + 0x98;
                      } while (extraout_w8_04 == 0);
                    } while (((*(byte *)(uVar15 + 0xc4) & 1) == 0) ||
                            (bVar8 = fVar19 == *(float *)(uVar15 + 0xb4), uVar2 = uVar14,
                            *(float *)(uVar15 + 0xb4) <= fVar19));
                    do {
                      uVar14 = uVar2 - 0x98;
                      func_0x0001075208a4();
                      if (!bVar8) break;
                      pfVar1 = (float *)(uVar2 - 0x7c);
                      bVar8 = fVar19 == *pfVar1;
                      uVar2 = uVar14;
                    } while (fVar19 < *pfVar1);
                    goto LAB_10751ef58;
                  }
                  uVar4 = unaff_x26 - 0x98 <= unaff_x20;
                  uVar7 = unaff_x20 == unaff_x26 - 0x98;
                  if (!(bool)uVar7) {
                    func_0x000107520728();
                  }
                  func_0x000107520714();
                  func_0x000107520234();
                  unaff_x25 = 0;
                }
                func_0x000107520198();
                func_0x000107520910();
                do {
                  func_0x0001075208e4();
                  bVar8 = !(bool)uVar7;
                  uVar7 = true;
                  if (bVar8 || extraout_w8 == 0) break;
                  uVar7 = *(float *)(extraout_x10 + 0xb4) == fVar19;
                } while (*(float *)(extraout_x10 + 0xb4) < fVar19);
                uVar17 = extraout_x10 + 0x98;
                uVar15 = unaff_x24;
                uVar16 = unaff_x24;
                unaff_x26 = uVar17;
                if (extraout_x9 == 0) {
                  while( true ) {
                    uVar16 = uVar15 + 0x98;
                    bVar8 = uVar17 == uVar16;
                    unaff_x21 = uVar16;
                    if ((uVar16 <= uVar17) ||
                       ((func_0x0001075208c4(), bVar8 && extraout_w8_01 != 0 &&
                        (uVar16 = uVar15, unaff_x21 = uVar15, *(float *)(uVar15 + 0x1c) < fVar19))))
                    break;
                    uVar15 = uVar15 - 0x98;
                  }
                }
                else {
                  while( true ) {
                    func_0x0001075208c4();
                    bVar8 = !(bool)uVar7;
                    uVar7 = bVar8 || extraout_w8_00 == 0;
                    if ((!bVar8 && extraout_w8_00 != 0) &&
                       (uVar7 = *(float *)(uVar16 + 0x1c) == fVar19, unaff_x21 = uVar16,
                       *(float *)(uVar16 + 0x1c) < fVar19)) break;
                    uVar16 = uVar16 - 0x98;
                  }
                }
                while (unaff_x26 < uVar16) {
                  func_0x000107520898();
                  func_0x000107520910();
                  do {
                    uVar15 = unaff_x26 + 0x98;
                    if (*(char *)(unaff_x26 + 0xc4) != '\x01' || extraout_w8_02 == 0) break;
                    pfVar1 = (float *)(unaff_x26 + 0xb4);
                    unaff_x26 = uVar15;
                  } while (*pfVar1 < fVar19);
                  do {
                    do {
                      uVar14 = uVar16;
                      uVar16 = uVar14 - 0x98;
                    } while (*(char *)(uVar14 - 0x6c) != '\x01' || extraout_w8_02 == 0);
                    unaff_x26 = uVar15;
                  } while (fVar19 <= *(float *)(uVar14 - 0x7c));
                }
                unaff_x27 = unaff_x26 - 0x98;
                if (unaff_x20 != unaff_x27) {
                  func_0x000107520558();
                  FUN_1074d3064();
                }
                func_0x000107520708();
                func_0x000107520234();
                uVar4 = unaff_x21 <= uVar17;
                cVar6 = (long)(uVar17 - unaff_x21) < 0;
                uVar7 = uVar17 == unaff_x21;
                uVar16 = unaff_x27;
                if (!(bool)uVar4) goto LAB_10751ee54;
                func_0x000107520558();
                FUN_10751f518();
                uVar15 = unaff_x26;
                FUN_10751f518(unaff_x26,unaff_x19);
                uVar17 = unaff_x28;
                if ((int)uVar15 == 0) goto code_r0x00010751ee50;
                unaff_x19 = unaff_x27;
              } while ((unaff_x28 & 1) == 0);
              goto LAB_10751f2f8;
            }
          }
        }
      }
    }
  }
  return;
LAB_10751f008:
  unaff_x21 = unaff_x23 + 0x98;
  uVar4 = unaff_x19 <= unaff_x21;
  cVar6 = (long)(unaff_x21 - unaff_x19) < 0;
  uVar7 = 1;
  if (unaff_x21 == unaff_x19) goto LAB_10751f2f8;
  uVar15 = param_3;
  if (((*(char *)(unaff_x23 + 0xc4) == '\x01') && ((*(byte *)(unaff_x23 + 0x2c) & 1) != 0)) &&
     (uVar7 = *(float *)(unaff_x23 + 0xb4) == *(float *)(unaff_x23 + 0x1c),
     *(float *)(unaff_x23 + 0xb4) < *(float *)(unaff_x23 + 0x1c))) {
    func_0x00010752023c();
    unaff_x25 = unaff_x24;
    do {
      func_0x000107520474();
      uVar15 = unaff_x20;
      if (unaff_x25 == 0) break;
      func_0x0001075208f8();
      if ((!(bool)uVar7) || ((*(byte *)(unaff_x23 - 0x6c) & 1) == 0)) {
        uVar15 = unaff_x20 + unaff_x25;
        break;
      }
      unaff_x23 = param_3 - 0x98;
      fVar19 = *(float *)(unaff_x20 + unaff_x25 + -0x7c);
      unaff_x25 = unaff_x25 - 0x98;
      uVar7 = *(float *)(puVar3 + -0x1bc) == fVar19;
      uVar15 = param_3;
    } while (*(float *)(puVar3 + -0x1bc) < fVar19);
    func_0x000107520228();
    func_0x000107520234();
  }
  unaff_x24 = unaff_x24 + 0x98;
  unaff_x23 = unaff_x21;
  param_3 = uVar15;
  goto LAB_10751f008;
LAB_10751f0a8:
  do {
    uVar15 = unaff_x25;
    cVar5 = SBORROW8(0x98,uVar15);
    cVar6 = (long)(0x98 - uVar15) < 0;
    uVar7 = uVar15 == 0x98;
    if ((long)uVar15 < 0x99) {
      func_0x000107520610();
      if ((((cVar6 != cVar5) && (func_0x000107520a10(), (bool)uVar7)) &&
          ((*(byte *)(uVar17 + 0xc4) & 1) != 0)) &&
         (*(float *)(uVar17 + 0x1c) < *(float *)(uVar17 + 0xb4))) {
        func_0x000107520a04();
      }
      param_3 = unaff_x20 + uVar15 * unaff_x24;
      if (((*(char *)(uVar17 + 0x2c) != '\x01') || ((*(byte *)(param_3 + 0x2c) & 1) == 0)) ||
         (*(float *)(param_3 + 0x1c) <= *(float *)(uVar17 + 0x1c))) {
        func_0x00010752075c();
        do {
          func_0x0001075205f8();
          cVar5 = SBORROW8(0x98,uVar16);
          cVar6 = (long)(0x98 - uVar16) < 0;
          uVar7 = uVar16 == 0x98;
          if (0x98 < (long)uVar16) break;
          func_0x0001075204d4();
          if (((cVar6 != cVar5) && (func_0x000107520a10(), (bool)uVar7)) &&
             (((*(byte *)(uVar17 + 0xc4) & 1) != 0 &&
              (*(float *)(uVar17 + 0x1c) < *(float *)(uVar17 + 0xb4))))) {
            func_0x000107520a04();
          }
          param_3 = unaff_x21;
        } while (((*(char *)(uVar17 + 0x2c) != '\x01') || ((puVar3[-0x1ac] & 1) == 0)) ||
                (*(float *)(puVar3 + -0x1bc) <= *(float *)(uVar17 + 0x1c)));
        func_0x00010752021c();
        func_0x000107520234();
      }
    }
    unaff_x25 = uVar15 - 1;
  } while (-1 < (long)unaff_x25);
  unaff_x23 = 0x98;
  while( true ) {
    uVar4 = 1 < unaff_x28;
    cVar5 = SBORROW8(unaff_x28,2);
    unaff_x21 = unaff_x28 - 2;
    cVar6 = (long)unaff_x21 < 0;
    uVar7 = unaff_x21 == 0;
    unaff_x27 = unaff_x19;
    unaff_x26 = unaff_x28;
    if ((long)unaff_x28 < 2) break;
    func_0x0001075202dc(puVar3 + -0x270);
    unaff_x24 = 0;
    param_3 = unaff_x21 >> 1;
    uVar14 = unaff_x20;
    do {
      func_0x000107520374();
      if (((cVar6 != cVar5) && (*(char *)(extraout_x8_02 + 0xc4) == '\x01')) &&
         (((*(byte *)(extraout_x8_02 + 0x15c) & 1) != 0 &&
          (*(float *)(extraout_x8_02 + 0xb4) < *(float *)(extraout_x8_02 + 0x14c))))) {
        uVar14 = extraout_x8_02 + 0x130;
        unaff_x24 = extraout_x9_00;
      }
      FUN_1074d3064();
      cVar5 = SBORROW8(unaff_x24,param_3);
      cVar6 = (long)(unaff_x24 - param_3) < 0;
    } while ((long)unaff_x24 <= (long)param_3);
    unaff_x19 = unaff_x19 - 0x98;
    if (uVar14 == unaff_x19) {
      func_0x0001075207a8();
    }
    else {
      func_0x000107520598();
      FUN_1074d3064();
      func_0x000107520790();
      uVar2 = (uVar14 - unaff_x20) + 0x98;
      uVar7 = (long)((uVar14 - unaff_x20) + -1) < 0;
      uVar9 = uVar2 == 0x99;
      if (((0x98 < (long)uVar2) && (func_0x0001075201d8(uVar2 / 0x98 - 2), (bool)uVar9)) &&
         (((*(byte *)(uVar14 + 0x2c) & 1) != 0 &&
          (func_0x000107520684(*(undefined4 *)(uVar15 + 0x1b)), (bool)uVar7)))) {
        func_0x00010752023c();
        do {
          func_0x000107520570();
          if (((unaff_x24 == 0) || (func_0x0001075201d8(unaff_x24 - 1), !(bool)uVar9)) ||
             ((puVar3[-0x1ac] & 1) == 0)) break;
          uVar9 = *(float *)(uVar15 + 0x1b) == *(float *)(puVar3 + -0x1bc);
        } while (*(float *)(uVar15 + 0x1b) < *(float *)(puVar3 + -0x1bc));
        func_0x000107520228();
        func_0x000107520234();
      }
    }
    func_0x00010748be00(puVar3 + -0x270);
    unaff_x28 = unaff_x28 - 1;
  }
  goto LAB_10751f2f8;
code_r0x00010751ee50:
  if ((unaff_x28 & 1) == 0) {
LAB_10751ee54:
    uVar12 = (ulong)((uint)unaff_x25 & 1);
    func_0x000107520558();
    uVar11 = param_3;
    FUN_10751ec60();
    unaff_x25 = 0;
  }
  goto LAB_10751ec9c;
LAB_10751f28c:
  param_3 = unaff_x20;
  unaff_x20 = param_3 + 0x98;
  uVar4 = unaff_x19 <= unaff_x20;
  cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
  uVar7 = unaff_x20 == unaff_x19;
  if (!(bool)uVar7) {
    if (((*(char *)(param_3 + 0xc4) == '\x01') && ((*(byte *)(param_3 + 0x2c) & 1) != 0)) &&
       (uVar7 = *(float *)(param_3 + 0xb4) == *(float *)(param_3 + 0x1c),
       *(float *)(param_3 + 0xb4) < *(float *)(param_3 + 0x1c))) {
      func_0x000107520198();
      do {
        func_0x0001075205c8();
        func_0x0001075208f8();
        if ((!(bool)uVar7) || ((*(byte *)(unaff_x21 - 0x6c) & 1) == 0)) break;
        uVar7 = *(float *)(puVar3 + -0x1bc) == *(float *)(unaff_x21 - 0x7c);
      } while (*(float *)(puVar3 + -0x1bc) < *(float *)(unaff_x21 - 0x7c));
      func_0x00010752021c();
      func_0x000107520234();
    }
    goto LAB_10751f28c;
  }
LAB_10751f2f8:
  func_0x000107520114(*(undefined8 *)(puVar3 + -0x140));
  if ((bool)uVar7) {
    return;
  }
  uVar18 = 0x10751f310;
  ___stack_chk_fail();
FUN_10751f310:
  *(ulong *)(puVar3 + -0x2b0) = param_3;
  *(ulong *)(puVar3 + -0x2a8) = unaff_x21;
  *(ulong *)(puVar3 + -0x2a0) = unaff_x20;
  *(ulong *)(puVar3 + -0x298) = unaff_x27;
  *(undefined1 **)(puVar3 + -0x290) = puVar3 + -0xe0;
  *(undefined8 *)(puVar3 + -0x288) = uVar18;
  func_0x0001075206d8();
  uVar13 = extraout_w8_05;
  if (((bool)uVar7) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
    fVar19 = *(float *)(unaff_x27 + 0x1c);
    func_0x000107520684();
    uVar13 = extraout_w8_06;
    if ((bool)cVar6) {
      func_0x000107520928();
      uVar9 = false;
      if ((bool)uVar7) {
        fVar20 = *(float *)(unaff_x20 + 0x1c);
        uVar4 = fVar19 <= fVar20;
        uVar9 = fVar20 == fVar19;
        cVar6 = 0;
        if (fVar20 < fVar19) goto LAB_10751f3c8;
      }
      func_0x000107520598();
      FUN_10751ebe8();
      func_0x000107520928();
      if (!(bool)uVar9) {
        return;
      }
      if ((*(byte *)(unaff_x27 + 0x2c) & 1) == 0) {
        return;
      }
      fVar19 = *(float *)(unaff_x20 + 0x1c);
      func_0x00010752066c();
      if (!(bool)cVar6) {
        return;
      }
      goto LAB_10751f3c8;
    }
  }
  uVar9 = (*(byte *)(unaff_x20 + 0x2c) & uVar13) == 0;
  uVar7 = false;
  uVar4 = 0;
  if ((!(bool)uVar9) && (func_0x00010752066c(*(undefined4 *)(unaff_x20 + 0x1c)), (bool)uVar7)) {
    func_0x000107520690();
    FUN_10751ebe8();
    func_0x0001075204a8();
    if (((bool)uVar9) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) {
      fVar19 = *(float *)(unaff_x27 + 0x1c);
      func_0x000107520684();
      if ((bool)uVar7) {
        func_0x000107520598();
LAB_10751f3c8:
        unaff_x29 = *(undefined8 *)(puVar3 + -0x290);
        unaff_x30 = *(undefined8 *)(puVar3 + -0x288);
        unaff_x20 = *(ulong *)(puVar3 + -0x2a0);
        unaff_x19 = *(ulong *)(puVar3 + -0x298);
        unaff_x22 = *(long *)(puVar3 + -0x2b0);
        unaff_x21 = *(ulong *)(puVar3 + -0x2a8);
        puVar3 = puVar3 + -0x280;
        uVar7 = uVar9;
        param_3 = uVar11;
        param_4 = uVar12;
        unaff_x27 = uVar16;
        unaff_x28 = uVar17;
        goto code_r0x00010751ebe8;
      }
    }
  }
  return;
}



/* Entry: 10751f518; end: 10751f697;  */

/* WARNING: Removing unreachable block (ram,0x00010751f684) */

ulong FUN_10751f518(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fStack_d4;
  char cStack_c4;
  
  func_0x000107520328();
  func_0x000107520138();
  func_0x000107520404();
  uVar6 = (uint)param_3;
  uVar2 = extraout_x8_00 + -5 < 0;
  uVar3 = extraout_x8_00 == 5;
  uVar5 = 1;
  switch(extraout_x8_00) {
  case 0:
  case 1:
    goto LAB_10751f670;
  case 2:
    func_0x000107520934();
    if (((!(bool)uVar3) || ((*(byte *)(unaff_x19 + 0x2c) & 1) == 0)) ||
       (func_0x00010752066c(*(undefined4 *)(unaff_x20 + -0x7c)), !(bool)uVar2)) goto LAB_10751f670;
    func_0x000107520818();
    break;
  case 3:
    uVar6 = (int)unaff_x20 - 0x98;
    param_2 = unaff_x19 + 0x98;
    FUN_10751f310();
    break;
  case 4:
    func_0x0001075209b0();
    func_0x00010751f3d8();
    break;
  case 5:
    func_0x0001075206b4();
    FUN_10751f460();
    break;
  default:
    func_0x0001075209c4();
    FUN_10751f310();
    lVar9 = 0;
    lVar10 = unaff_x19 + 0x1c8;
    while( true ) {
      lVar7 = lVar10;
      uVar6 = (uint)param_3;
      bVar4 = lVar7 == unaff_x20;
      uVar3 = 1;
      if (bVar4) break;
      func_0x0001075208a4();
      lVar8 = unaff_x22;
      if (((bVar4) && ((*(byte *)(unaff_x21 + 0x2c) & 1) != 0)) &&
         (*(float *)(lVar7 + 0x1c) < *(float *)(unaff_x21 + 0x1c))) {
        func_0x000107520844();
        lVar10 = lVar9;
        do {
          func_0x000107520414();
          lVar8 = unaff_x19;
          if (lVar10 == -0x130) break;
          if ((cStack_c4 != '\x01') || ((*(byte *)(unaff_x21 + 0xc4) & 1) == 0)) {
            lVar8 = unaff_x19 + lVar10 + 0x130;
            break;
          }
          unaff_x21 = unaff_x22 + -0x98;
          lVar1 = unaff_x19 + lVar10;
          lVar10 = lVar10 + -0x98;
          lVar8 = unaff_x22;
        } while (fStack_d4 < *(float *)(lVar1 + 0xb4));
        func_0x0001075207d8();
        func_0x0001075207c0();
      }
      lVar9 = lVar9 + 0x98;
      lVar10 = lVar7 + 0x98;
      unaff_x21 = lVar7;
      unaff_x22 = lVar8;
    }
  }
  uVar5 = 1;
LAB_10751f670:
  func_0x000107520114(extraout_x8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    fVar11 = -*(float *)(uVar5 + 0x24);
    if ((param_2 & 1) == 0) {
      fVar11 = *(float *)(uVar5 + 0x24);
    }
    if ((uVar6 & *(byte *)(uVar5 + 0x2c) & 1) == 0) {
      fVar11 = 0.0;
    }
    uVar6 = 0;
    if (*(float *)(uVar5 + 0x1c) + fVar11 < *(float *)(uVar5 + 0x20)) {
      uVar6 = (uint)*(byte *)(uVar5 + 0x2c);
    }
    return (ulong)uVar6;
  }
  return uVar5;
}



/* Entry: 10751f698; end: 10751f6cf;  */

byte FUN_10751f698(long param_1,uint param_2,byte param_3)

{
  byte bVar1;
  float fVar2;
  
  fVar2 = -*(float *)(param_1 + 0x24);
  if ((param_2 & 1) == 0) {
    fVar2 = *(float *)(param_1 + 0x24);
  }
  if ((param_3 & *(byte *)(param_1 + 0x2c) & 1) == 0) {
    fVar2 = 0.0;
  }
  bVar1 = 0;
  if (*(float *)(param_1 + 0x1c) + fVar2 < *(float *)(param_1 + 0x20)) {
    bVar1 = *(byte *)(param_1 + 0x2c);
  }
  return bVar1;
}



/* Entry: 10751f6d0; end: 10751f6db;  */

void FUN_10751f6d0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *extraout_x8;
  uint uVar3;
  undefined1 auStack_68 [40];
  
  func_0x000107520368();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001075202e4(uVar1);
  (*extraout_x8)();
  func_0x000107269bac(param_1,uVar1);
  (**(code **)(**(long **)(param_2 + 0x10) + 0x40))(param_1 + 0x40);
  plVar2 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar2 + 0x20))();
  func_0x000107268400(param_1 + 0x58,plVar2);
  func_0x000104c2fe00(param_1 + 0x68,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(long *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  if (*(int *)(param_3 + 4) == 2) {
    uVar3 = *(uint *)(param_3 + 0x48);
    func_0x0001075208d0();
    if ((uVar3 & 1) == 0) {
      FUN_10751cfd0(param_1 + 0xb0);
    }
    else {
      func_0x0001072a87c8(auStack_68,param_3 + 0x20);
      func_0x0001072a8164(param_1 + 0xb0,auStack_68);
      *(undefined4 *)(param_1 + 0xd8) = 4;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      func_0x0001072a8888(auStack_68);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  return;
}



/* Entry: 10751f6dc; end: 10751f7f7;  */

void FUN_10751f6dc(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *extraout_x8;
  uint uVar3;
  undefined1 auStack_58 [40];
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001075202e4(uVar1);
  (*extraout_x8)();
  func_0x000107269bac(param_1,uVar1);
  (**(code **)(**(long **)(param_2 + 0x10) + 0x40))(param_1 + 0x40);
  plVar2 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar2 + 0x20))();
  func_0x000107268400(param_1 + 0x58,plVar2);
  func_0x000104c2fe00(param_1 + 0x68,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(long *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  if (*(int *)(param_3 + 4) == 2) {
    uVar3 = *(uint *)(param_3 + 0x48);
    func_0x0001075208d0();
    if ((uVar3 & 1) == 0) {
      FUN_10751cfd0(param_1 + 0xb0);
    }
    else {
      func_0x0001072a87c8(auStack_58,param_3 + 0x20);
      func_0x0001072a8164(param_1 + 0xb0,auStack_58);
      *(undefined4 *)(param_1 + 0xd8) = 4;
      *(undefined1 *)(param_1 + 0xe0) = 1;
      func_0x0001072a8888(auStack_58);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  return;
}



/* Entry: 10751f7f8; end: 10751f8eb;  */

void FUN_10751f7f8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001072a88ac(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10751f8ec; end: 10751f9bf;  */

undefined1 *
FUN_10751f8ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_b4 [16];
  undefined1 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  func_0x000107520138();
  uStack_48 = extraout_x8;
  func_0x00010752046c(auStack_a0);
  puVar1 = puStack_90;
  puStack_90[2] = 0;
  func_0x00010752065c();
  *puVar1 = extraout_x8_00;
  puVar1[1] = 0;
  func_0x00010729807c(auStack_88,param_5);
  auStack_b4[0] = 0;
  uStack_a4 = 0;
  FUN_107374ae4(puVar1 + 3,param_2,param_3,param_4,auStack_88,auStack_b4);
  func_0x00010752063c();
  puVar2 = puStack_90;
  puStack_90 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  puVar3 = auStack_a0;
  func_0x000107297fb8();
  func_0x000107520114(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010752063c();
  __ZNSt3__119__shared_weak_countD2Ev(puVar1);
  puVar3 = auStack_a0;
  func_0x000107297fb8(puVar3);
  func_0x000107520208();
  func_0x00010726af18(puVar3 + 0x40);
  func_0x000107520798();
  return puVar3;
}



/* Entry: 10751f9c0; end: 10751fb07;  */

long FUN_10751f9c0(long param_1)

{
  func_0x00010726af18(param_1 + 0x40);
  func_0x000107520798();
  return param_1;
}



/* Entry: 10751fb08; end: 10751fb0f;  */

void FUN_10751fb08(void)

{
  return;
}



/* Entry: 10751fb10; end: 10751fb3f;  */

void FUN_10751fb10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109b92f0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10751fb40; end: 10751fb63;  */

void FUN_10751fb40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b92f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10751fb64; end: 10751fc1f;  */

undefined1 * FUN_10751fb64(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar3 = auStack_60;
  func_0x000107520138();
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = *param_2;
  uVar1 = *(long *)(lVar5 + 0x38) - *(long *)(lVar5 + 0x30) >> 6;
  uVar2 = uVar6 == uVar1;
  uStack_28 = extraout_x8;
  if (uVar6 < uVar1) {
    puVar4 = (undefined *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x40);
  }
  else {
    uVar6 = uVar6 - uVar1;
    uVar1 = (*(long *)(lVar5 + 0x50) - *(long *)(lVar5 + 0x48)) / 0x48;
    uVar2 = uVar6 == uVar1;
    if (uVar1 <= uVar6) {
      puVar4 = &UNK_10f416191;
      func_0x000100060964(auStack_60);
      goto LAB_10751fbec;
    }
    puVar4 = (undefined *)(*(long *)(lVar5 + 0x48) + uVar6 * 0x48);
  }
  func_0x000104c2fe00(auStack_60);
LAB_10751fbec:
  func_0x000107520690();
  func_0x000104c33004();
  func_0x000104c2f714(auStack_60);
  func_0x000107520114(uStack_28);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001004a5364(puVar4,&PTR_DAT_1109b9360);
    puVar3 = puVar3 + 8;
    if ((int)puVar4 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10751fc20; end: 10751fc57;  */

long FUN_10751fc20(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9360);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10751fc58; end: 10751fcbb;  */

undefined ** FUN_10751fc58(void)

{
  return &PTR_DAT_1109b9360;
}



/* Entry: 10751fcbc; end: 10751fe03;  */

long FUN_10751fcbc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10751fe04; end: 10751fe7f;  */

void FUN_10751fe04(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x000107520a74();
  func_0x000104c32974();
  lVar3 = *(long *)(unaff_x19 + 8);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      func_0x000104c2fe38(unaff_x20);
      func_0x0001075205d8();
      func_0x00010752039c();
      FUN_10751fe80(lVar3 + lVar1 * 0x78,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x78;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10751fe80; end: 10751fea3;  */

undefined8 FUN_10751fe80(void)

{
  undefined8 unaff_x19;
  
  func_0x000107520824();
  func_0x000107520768();
  func_0x0001074febf0();
  func_0x0001074f9a0c();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 10751fea4; end: 10751feb7;  */

long FUN_10751fea4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10751feb8; end: 10751ff0f;  */

long * FUN_10751feb8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010751cc7c(lVar1);
    func_0x000107520720();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10751ff10; end: 10751ff17;  */

void FUN_10751ff10(void)

{
  return;
}



/* Entry: 10751ff18; end: 10751ff53;  */

void FUN_10751ff18(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b93a0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 10751ff54; end: 10751ff83;  */

void FUN_10751ff54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109b93a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10751ff84; end: 10752006b;  */

undefined1 * FUN_10751ff84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  lVar4 = param_1;
  func_0x000107520138();
  auStack_88[0] = 0;
  lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0xa8) + 0x350;
  uStack_48 = extraout_x8;
  func_0x00010724e2c8(lVar4,auStack_88);
  if ((int)lVar4 == 0) {
    plVar3 = (long *)**(undefined8 **)(param_1 + 0x18);
    func_0x00010729807c(auStack_88,*(undefined8 *)(param_1 + 0x20));
    puVar2 = auStack_88;
    (**(code **)(*plVar3 + 0xa0))(auStack_b8,plVar3,puVar2,param_2,param_3);
    puVar1 = auStack_b8;
    FUN_10745f870();
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    lVar4 = *(long *)(**(long **)(param_1 + 0x18) + 8);
    func_0x00010729807c(auStack_88,*(undefined8 *)(param_1 + 0x20));
    puVar2 = (undefined1 *)(lVar4 + 0x10);
    FUN_1075200b0(puVar1,puVar2,auStack_88,param_2,param_3);
  }
  func_0x00010752063c();
  func_0x000107520114(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010752063c();
  func_0x000107520208();
  func_0x0001004a5364(puVar2,&PTR_DAT_1109b9410);
  puVar1 = puVar1 + 8;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* Entry: 10752006c; end: 1075200a3;  */

long FUN_10752006c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b9410);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1075200a4; end: 1075200af;  */

undefined ** FUN_1075200a4(void)

{
  return &PTR_DAT_1109b9410;
}



/* Entry: 1075200b0; end: 1075200cf;  */

long * FUN_1075200b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001075200c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1075200d0; end: 107520113;  */

long * FUN_1075200d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107520114; end: 107520ab3;  */

void FUN_107520114(void)

{
  return;
}



/* Entry: 107520ab4; end: 107520c97;  */

undefined4 * FUN_107520ab4(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined4 *puVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar7 = &puStack_a0;
  puVar4 = param_2;
  func_0x000107521a6c();
  *puVar4 = param_1;
  puVar9 = (undefined8 *)(puVar4 + 4);
  *puVar9 = 0;
  *(undefined8 *)(puVar4 + 2) = param_3;
  *(undefined ***)(puVar4 + 6) = &PTR_PTR_1131ad8f8;
  puVar8 = (undefined8 *)(puVar4 + 8);
  *puVar8 = 0;
  *(undefined8 *)(puVar4 + 10) = 0;
  uStack_48 = extraout_x8;
  FUN_1073af27c(&uStack_80,0,0);
  *(undefined8 *)(param_2 + 0xe) = uStack_78;
  *(ulong *)(param_2 + 0xc) = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar5 = &uStack_80;
  func_0x00010724b8b8();
  func_0x00010726ed14(param_2 + 0x10);
  *(undefined4 **)(param_2 + 0x14) = param_2;
  func_0x00010785f1f4();
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  puVar5 = puVar5 + 0x3c;
  func_0x00010724e2c8(puVar5,&uStack_80);
  if ((int)puVar5 == 0) {
    puStack_88 = *(undefined8 **)(param_2 + 0xe);
    puStack_90 = *(undefined8 **)(param_2 + 0xc);
    if (*(long *)(param_2 + 0xe) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0xe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    func_0x000107313a6c(auStack_60,1);
    puVar9 = puStack_50;
    puStack_50[2] = 0;
    *puStack_50 = &PTR_DAT_11099f968;
    puStack_50[1] = 0;
    func_0x00010002b838(&uStack_80,&UNK_10f4161a1);
    func_0x000107313ae4(puVar9 + 3,1,0,&uStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
    puVar9 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    unaff_x23 = puVar9 + 3;
    func_0x0001073141d4(auStack_60);
    puStack_88 = puVar9;
    puStack_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    puStack_90 = unaff_x23;
  }
  func_0x0001073139fc(puVar8,&puStack_90);
  ppuVar6 = &puStack_90;
  func_0x00010724b8b8(ppuVar6);
  if ((int)puVar5 != 0) {
    func_0x000107313354(&puStack_a0);
    ppuVar6 = ppuVar7;
  }
  func_0x000107521a24(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x23);
  func_0x0001073141d4(auStack_60);
  FUN_107521100(param_2 + 0x10);
  func_0x00010724b8b8(param_2 + 0xc);
  do {
    func_0x00010724b8b8(puVar8);
    FUN_107521070(puVar9);
    __Unwind_Resume(ppuVar6);
  } while( true );
}



/* Entry: 107520c98; end: 107520cd3;  */

long FUN_107520c98(long param_1)

{
  FUN_107521100(param_1 + 0x40);
  func_0x00010724b8b8(param_1 + 0x30);
  func_0x00010724b8b8(param_1 + 0x20);
  FUN_107521070(param_1 + 0x10);
  return param_1;
}



/* Entry: 107520cd4; end: 107520f43;  */

void FUN_107520cd4(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_4f0 [24];
  undefined8 uStack_4d8;
  undefined4 *puStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 *puStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 auStack_478 [24];
  undefined1 *puStack_460;
  long alStack_458 [63];
  undefined1 auStack_260 [24];
  undefined8 *puStack_248;
  undefined8 auStack_240 [63];
  undefined8 uStack_48;
  
  puVar5 = auStack_4f0;
  puVar3 = param_2;
  func_0x000107521a6c();
  uStack_48 = extraout_x8;
  func_0x000104c2d614();
  if ((int)puVar3 == 0) {
    func_0x000107521aac();
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    auStack_240[0] = 0;
    FUN_107521094(param_1 + 4,puVar3);
    FUN_107521070(auStack_240);
    FUN_107526e40(auStack_240,*param_1,param_2);
    puVar3 = &uStack_4c0;
    func_0x000107521afc();
    uStack_4a8 = 0;
    puStack_248 = (undefined8 *)0x0;
    puStack_4a0 = param_1;
    func_0x000107521aac();
    *puVar3 = &PTR_SUB_1109b9470;
    puVar3[2] = uStack_4b8;
    puVar3[1] = uStack_4c0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    puVar3[3] = uStack_4b0;
    uVar1 = uStack_4a8;
    puVar3[5] = puStack_4a0;
    puVar3[4] = uVar1;
    puStack_248 = puVar3;
    (**(code **)(*param_3 + 0x10))(alStack_458,param_3,auStack_240,auStack_260);
    lVar2 = alStack_458[0];
    alStack_458[0] = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 4) + 0x20);
    *(long *)(*(long *)(param_1 + 4) + 0x20) = lVar2;
    if (lVar4 != 0) {
      func_0x000107521a44();
      lVar2 = alStack_458[0];
      alStack_458[0] = 0;
      if (lVar2 != 0) {
        func_0x000107521a44();
      }
    }
    func_0x0001072ad0c8(auStack_260);
    func_0x00010725b1d4(&uStack_4c0);
    FUN_107526cd0(alStack_458,*param_1,param_2);
    func_0x000107521afc();
    uStack_4d8 = 0;
    puStack_460 = (undefined1 *)0x0;
    puStack_4d0 = param_1;
    func_0x000107521aac();
    func_0x000107521ad4(&PTR_FUN_1109b94f0);
    *(undefined8 *)(puVar5 + 0x18) = extraout_x8_00;
    uVar1 = uStack_4d8;
    *(undefined4 **)(puVar5 + 0x28) = puStack_4d0;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    puStack_460 = puVar5;
    (**(code **)(*param_3 + 0x10))(&lStack_4c8,param_3,alStack_458,auStack_478);
    lVar2 = lStack_4c8;
    lStack_4c8 = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 4) + 0x28);
    *(long *)(*(long *)(param_1 + 4) + 0x28) = lVar2;
    if (lVar4 != 0) {
      func_0x000107521a44();
      lVar2 = lStack_4c8;
      lStack_4c8 = 0;
      if (lVar2 != 0) {
        func_0x000107521a44();
      }
    }
    func_0x0001072ad0c8(auStack_478);
    func_0x000107521aa4();
    func_0x00010724b374(alStack_458);
    func_0x00010724b374(auStack_240);
  }
  else {
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_490 = 0;
    (**(code **)(**(long **)(param_1 + 6) + 0x10))(*(long **)(param_1 + 6),&uStack_490);
    func_0x00010747030c(&uStack_490);
  }
  func_0x000107521a24(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ad0c8(auStack_478);
  func_0x000107521aa4();
  func_0x00010724b374(alStack_458);
  func_0x00010724b374(auStack_240);
  do {
    func_0x000107521a58();
  } while( true );
}



/* Entry: 107520f44; end: 107521007;  */

void FUN_107520f44(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107521a6c();
  lVar2 = **(long **)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  if ((lVar2 != 0) && (lVar3 = (*(long **)(param_1 + 0x10))[2], lVar3 != 0)) {
    func_0x000107521afc(auStack_80);
    lStack_40 = 0;
    lVar1 = 0x28;
    lStack_68 = param_1;
    __Znwm();
    func_0x000107521ad4(&PTR_SUB_1109b9570);
    *(undefined8 *)(lVar1 + 0x18) = extraout_x8_00;
    *(long *)(lVar1 + 0x20) = param_1;
    lStack_40 = lVar1;
    FUN_107521c9c(lVar2,lVar3,param_1 + 0x20,param_1 + 0x30,auStack_58);
    func_0x0001075219e0(auStack_58);
    func_0x000107521aa4();
  }
  func_0x000107521a24(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001075219e0(auStack_58);
  func_0x000107521aa4();
  func_0x000107521a58();
  return;
}



/* Entry: 107521008; end: 107521017;  */

void FUN_107521008(void)

{
  return;
}



/* Entry: 107521018; end: 10752106f;  */

void FUN_107521018(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_2[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar4;
  func_0x00010725b1d4(&uStack_20);
  func_0x000107521aa4();
  return;
}



/* Entry: 107521070; end: 107521093;  */

undefined8 FUN_107521070(undefined8 param_1)

{
  FUN_107521094(param_1,0);
  return param_1;
}



/* Entry: 107521094; end: 1075210ab;  */

void FUN_107521094(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1075210c8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1075210ac; end: 1075210c7;  */

void FUN_1075210ac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1075210c8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075210c8; end: 1075210ff;  */

/* WARNING: Possible PIC construction at 0x0001075210ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001075210f0) */

long FUN_1075210c8(long param_1)

{
  long lVar1;
  
  func_0x0001072aca78(param_1 + 0x28);
  func_0x0001072aca78(param_1 + 0x20);
  lVar1 = param_1 + 0x10;
  func_0x0001000df518();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107521100; end: 107521127;  */

long FUN_107521100(long param_1)

{
  FUN_107521128();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107521128; end: 10752117b;  */

void FUN_107521128(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10752117c; end: 10752118f;  */

void FUN_10752117c(void)

{
  func_0x000107521154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107521190; end: 1075211b3;  */

long FUN_107521190(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521aac();
  func_0x000107521b38();
  func_0x000107521b04(&PTR_SUB_1109b9470);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 1075211b4; end: 1075211d3;  */

void FUN_1075211b4(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521b38(param_2,param_1 + 8);
  func_0x000107521b04(&PTR_SUB_1109b9470);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1075211d4; end: 1075212ab;  */

void FUN_1075211d4(void)

{
  int iVar1;
  long unaff_x19;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107521a90();
  iVar1 = (int)unaff_x19 + 8;
  func_0x0001075213c8();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_107521418(*(undefined8 *)(lVar2 + 8),0x10,0x25);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      if ((*(byte *)(unaff_x20 + 0x19) & 1) == 0) {
        if (*(char *)(unaff_x20 + 0x18) == '\x01') {
          FUN_1075215b8(auStack_38);
          func_0x00010724ac30(*(long *)(lVar2 + 0x10) + 0x10,auStack_38);
          func_0x00010724c894(auStack_38);
        }
        else {
          func_0x0001072631dc(*(long *)(lVar2 + 0x10) + 0x10,unaff_x20 + 0x20);
        }
        FUN_107520f44(lVar2);
      }
    }
    else {
      plVar3 = *(long **)(lVar2 + 0x18);
      func_0x000107521b2c();
      func_0x000107521b20();
      func_0x000107521b14(*(undefined8 *)(*plVar3 + 0x18));
      func_0x000107521a88();
      func_0x000107521abc();
    }
  }
  func_0x000107521ab4();
  return;
}



/* Entry: 1075212ac; end: 1075212d7;  */

void FUN_1075212ac(undefined8 param_1,undefined8 param_2)

{
  func_0x000107521af4(param_2,param_1,&PTR_DAT_1109b94d0);
  func_0x000107521ac4();
  return;
}



/* Entry: 1075212d8; end: 1075212e3;  */

undefined ** FUN_1075212d8(void)

{
  return &PTR_DAT_1109b94d0;
}



/* Entry: 1075212e4; end: 107521313;  */

void FUN_1075212e4(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521b38();
  func_0x000107521b04(&PTR_SUB_1109b9470);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107521314; end: 107521343;  */

void FUN_107521314(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107521344; end: 107521417;  */

void FUN_107521344(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1075213bc;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1075213bc:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107521418; end: 1075215b7;  */

void FUN_107521418(ulong *param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  undefined4 uStack_128;
  undefined4 auStack_120 [6];
  undefined4 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b0 [6];
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_100 = &PTR_DAT_110996720;
  uStack_f8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 1;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  auStack_120[0] = param_3;
  uStack_e0 = param_3;
  auStack_b0[0] = param_2;
  uStack_70 = param_2;
  if ((*(byte **)(param_4 + 0x10) == (byte *)0x0) ||
     (bVar1 = **(byte **)(param_4 + 0x10), uStack_40 = (ulong)bVar1, bVar1 == 1)) {
    func_0x00010729d56c(auStack_b0,"status","success");
    lVar2 = *(long *)(param_4 + 0x20);
    if (lVar2 != 0) {
      uStack_40 = (ulong)*(char *)(lVar2 + 0x17);
      if ((long)uStack_40 < 0) {
        uStack_40 = *(ulong *)(lVar2 + 8);
      }
      uStack_38 = CONCAT44(uStack_38._4_4_,3);
      uStack_130 = *param_1;
      uStack_128 = 3;
      FUN_10743fa44(param_1,auStack_120,&uStack_40,&uStack_130,7);
    }
  }
  else {
    uStack_38 = 0;
    func_0x0001003a91d4(&UNK_10f4161af);
    func_0x0001003a9204(auStack_148);
    func_0x00010726e300(auStack_b0,"status",auStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  }
  uStack_40 = *param_1;
  uStack_38 = CONCAT44(uStack_38._4_4_,3);
  FUN_10743f9dc(param_1,auStack_b0,param_4 + 8,&uStack_40,7);
  func_0x000107262330(auStack_120);
  func_0x000107262330(auStack_b0);
  return;
}



/* Entry: 1075215b8; end: 1075215d7;  */

void FUN_1075215b8(void)

{
  undefined1 uStack_11;
  
  FUN_1075215d8(&uStack_11);
  return;
}



/* Entry: 1075215d8; end: 107521657;  */

undefined1 * FUN_1075215d8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000107521a6c();
  uStack_28 = extraout_x8;
  func_0x00010724c79c(auStack_40,1);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_110995158;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010724c884(auStack_40);
  func_0x000107521a24(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107521b0c(&PTR_FUN_1109b94f0);
  return puVar2;
}



/* Entry: 107521658; end: 10752167f;  */

undefined8 FUN_107521658(undefined8 param_1)

{
  func_0x000107521b0c(&PTR_FUN_1109b94f0);
  return param_1;
}



/* Entry: 107521680; end: 107521693;  */

void FUN_107521680(void)

{
  FUN_107521658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


