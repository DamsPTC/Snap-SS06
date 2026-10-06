/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092d9308; end: 1092d93a3;  */

undefined8 FUN_1092d9308(void)

{
  return 0x3c;
}



/* Entry: 1092d93a4; end: 1092d941b;  */

undefined8 * FUN_1092d93a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9ee0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092d941c; end: 1092d941f;  */

void FUN_1092d941c(void)

{
  return;
}



/* Entry: 1092d9420; end: 1092d9567;  */

undefined8 * FUN_1092d9420(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_110ae9ee0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092bfde0();
  *param_1 = &PTR_FUN_110ae9f08;
  if (param_2[1] - *param_2 == 4) {
    return param_1;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_60,4);
  FUN_10928a5e0(appuStack_48,&UNK_10f564630,auStack_60);
  if (-1 < cStack_31) {
    appuStack_48[0] = appuStack_48;
  }
  FUN_1092cf480(uVar2,appuStack_48[0]);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092d94f8);
  (*pcVar1)();
}



/* Entry: 1092d9568; end: 1092d962f;  */

void FUN_1092d9568(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uStack_48;
  
  uStack_48 = (ulong)**(byte **)(param_1 + 0x10);
  lVar4 = 1;
  do {
    FUN_1092d81e8(&uStack_48,8);
    uStack_48 = uStack_48 | *(byte *)(*(long *)(param_1 + 0x10) + lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  uVar2 = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar3 = ~param_4;
  do {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = (int)(param_4 + (int)uVar2) / param_3;
    }
    *(uint *)(lVar4 + (long)iVar1 * 4) =
         *(uint *)(lVar4 + (long)iVar1 * 4) |
         ((uint)(uStack_48 >> (uVar2 & 0x3f)) & 1) <<
         (ulong)(uVar3 + param_3 + param_3 * iVar1 & 0x1f);
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0x20);
  return;
}



/* Entry: 1092d9630; end: 1092d9713;  */

undefined8 * FUN_1092d9630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9ee0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092d9714; end: 1092d990f;  */

undefined8 FUN_1092d9714(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  plStack_60 = plVar2;
  FUN_1092d0ec0(&plStack_58,&plStack_60);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  uStack_70 = 0;
  ppuStack_78 = &PTR_FUN_110ae99f0;
  plStack_68 = *(long **)(param_2 + 0x10);
  if (plStack_68 != (long *)0x0) {
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092d117c(&plStack_58,&ppuStack_78,param_1);
  ppuStack_78 = &PTR_FUN_110ae99f0;
  if ((plStack_68 != (long *)0x0) &&
     (iVar1 = (int)plStack_68[1] + -1, *(int *)(plStack_68 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
    (**(code **)(*plStack_68 + 8))();
  }
  plStack_68 = (long *)0x0;
  puStack_38 = auStack_50;
  FUN_1092d0c8c(&puStack_38);
  if ((plStack_58 != (long *)0x0) &&
     (iVar1 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  return 1;
}



/* Entry: 1092d9910; end: 1092d9acb;  */

undefined8 FUN_1092d9910(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_1[1];
  if (plStack_38 == (long *)0x0) {
    plStack_38 = (long *)0x0;
  }
  else {
    lVar2 = plStack_38[1];
    *(int *)(plStack_38 + 1) = (int)lVar2 + 1;
    if ((int)lVar2 == -1) {
      *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
      (**(code **)(*plStack_38 + 8))();
    }
  }
  uStack_48 = 0;
  ppuStack_50 = &PTR_FUN_110ae99f0;
  plStack_40 = *(long **)(param_2 + 0x10);
  if (plStack_40 != (long *)0x0) {
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092cf548(&plStack_38,&ppuStack_50,param_1);
  ppuStack_50 = &PTR_FUN_110ae99f0;
  if ((plStack_40 != (long *)0x0) &&
     (iVar1 = (int)plStack_40[1] + -1, *(int *)(plStack_40 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_40 + 1) = 0xdeadf001;
    (**(code **)(*plStack_40 + 8))();
  }
  plStack_40 = (long *)0x0;
  if ((plStack_38 != (long *)0x0) &&
     (iVar1 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
    (**(code **)(*plStack_38 + 8))();
  }
  return 1;
}



/* Entry: 1092d9acc; end: 1092d9e1b;  */

long * FUN_1092d9acc(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                    long *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_a9;
  char *pcStack_a8;
  char *pcStack_a0;
  long lStack_98;
  ulong auStack_90 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar8 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    uStack_30 = 0x2900000020;
    puVar9 = (undefined8 *)&UNK_10dfc37cc;
    break;
  case 1:
    uStack_30 = 0xa300000096;
    puVar9 = (undefined8 *)&UNK_10dfc37e4;
    break;
  case 2:
    uStack_30 = 0x2c00000021;
    puVar9 = (undefined8 *)&UNK_10dfc37fc;
    break;
  case 3:
    uStack_30 = 0xa000000093;
    puVar9 = (undefined8 *)&UNK_10dfc3814;
    break;
  case 4:
    uStack_30 = 0x3b00000032;
    puVar9 = (undefined8 *)&UNK_10dfc382c;
    break;
  case 5:
    uStack_30 = 0xa600000099;
    puVar9 = (undefined8 *)&UNK_10dfc3844;
    break;
  case 6:
    uStack_30 = 0x4200000039;
    puVar9 = (undefined8 *)&UNK_10dfc385c;
    break;
  case 7:
    uStack_30 = 0x9d00000090;
    puVar9 = (undefined8 *)&UNK_10dfc3874;
    break;
  case 8:
    uStack_30 = 0x3d00000048;
    puVar9 = (undefined8 *)&UNK_10dfc388c;
    break;
  case 9:
    uStack_30 = 0x8600000089;
    puVar9 = (undefined8 *)&UNK_10dfc38a4;
    break;
  case 10:
    uStack_30 = 0x3f0000004a;
    puVar9 = (undefined8 *)&UNK_10dfc38bc;
    break;
  case 0xb:
    uStack_30 = 0x8500000082;
    puVar9 = (undefined8 *)&UNK_10dfc38d4;
    break;
  case 0xc:
    uStack_30 = 0x4f00000046;
    puVar9 = (undefined8 *)&UNK_10dfc38ec;
    break;
  case 0xd:
    uStack_30 = 0x8b0000007f;
    puVar9 = (undefined8 *)&UNK_10dfc3904;
    break;
  case 0xe:
    uStack_30 = 0x520000004d;
    puVar9 = (undefined8 *)&UNK_10dfc391c;
    break;
  case 0xf:
    uStack_30 = 0x8000000078;
    puVar9 = (undefined8 *)&UNK_10dfc3934;
    break;
  case 0x10:
    uStack_30 = 0x5a00000063;
    puVar9 = (undefined8 *)&UNK_10dfc394c;
    break;
  case 0x11:
    uStack_30 = 0x7200000077;
    puVar9 = (undefined8 *)&UNK_10dfc3964;
    break;
  case 0x12:
    uStack_30 = 0x7000000075;
    puVar9 = (undefined8 *)&UNK_10dfc397c;
    break;
  case 0x13:
    uStack_30 = 0x670000005e;
    puVar9 = (undefined8 *)&UNK_10dfc3994;
    break;
  case 0x14:
    uStack_30 = 0x640000005d;
    puVar9 = (undefined8 *)&UNK_10dfc39ac;
    break;
  case 0x15:
    uStack_30 = 0x6000000069;
    puVar9 = (undefined8 *)&UNK_10dfc39c4;
    break;
  case 0x16:
    uStack_30 = 0x1c00000026;
    puVar9 = (undefined8 *)&UNK_10dfc39dc;
    break;
  case 0x17:
    uStack_30 = 0x1500000008;
    puVar9 = (undefined8 *)&UNK_10dfc39f4;
    break;
  case 0x18:
    uStack_30 = 0xf00000002;
    puVar9 = (undefined8 *)&UNK_10dfc3a0c;
    break;
  case 0x19:
    uStack_30 = 0x180000000b;
    puVar9 = (undefined8 *)&UNK_10dfc3a24;
    break;
  case 0x1a:
    uStack_30 = 0x1200000005;
    puVar9 = (undefined8 *)&UNK_10dfc3a3c;
    break;
  case 0x1b:
    uStack_30 = 0x250000002f;
    puVar9 = (undefined8 *)&UNK_10dfc3a54;
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1 = param_2;
    puVar8 = (undefined8 *)param_3;
    goto LAB_1092d9df0;
  }
  uStack_38 = puVar9[1];
  uStack_40 = *puVar9;
  (**(code **)(*param_2 + 0x58))();
  param_5 = (long *)(long)(int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,&uStack_40,(long)&uStack_40 + (long)(int)param_2 * 4);
LAB_1092d9df0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar11 = *(long **)((long)puVar8 + 0x10);
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x58))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  iVar3 = 0;
  if ((int)plVar6 != 0) {
    iVar3 = (int)plVar5 / (int)plVar6;
  }
  iVar4 = 0;
  if ((int)plVar7 != 0) {
    iVar4 = 0x80 / (int)plVar7;
  }
  auStack_90[1] = 0;
  auStack_90[0] = (ulong)*(int *)plVar11[2];
  uVar2 = iVar3 + iVar4 + 1;
  if (1 < (int)uVar2) {
    uVar12 = 1;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092da0e0(auStack_90,(long)(int)plVar5);
      auStack_90[0] = auStack_90[0] | (long)*(int *)(plVar11[2] + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
  }
  uStack_a9 = 0;
  FUN_109260268(&pcStack_a8,0x10,&uStack_a9);
  uVar12 = 0;
  do {
    uVar2 = (uint)uVar12 >> 3;
    pcStack_a8[uVar2] =
         (byte)(((uint)(auStack_90[uVar12 >> 6] >> (uVar12 & 0x3f)) & 1) <<
               (ulong)(((uint)uVar12 ^ 0xffffffff) & 7)) | pcStack_a8[uVar2];
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x80);
  FUN_1092da888(appuStack_d8,&pcStack_a8);
  if (pcStack_a8 != (char *)0x0) {
    pcStack_a0 = pcStack_a8;
    __ZdlPv();
  }
  iVar3 = (int)plVar11[1] + -1;
  *(int *)(plVar11 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  pcStack_a8 = (char *)0x0;
  pcStack_a0 = (char *)0x0;
  lStack_98 = 0;
  FUN_1092bfde0(&pcStack_a8,lStack_c8,lStack_c0,lStack_c0 - lStack_c8);
  if (*param_5 != 0) {
    param_5[1] = *param_5;
    __ZdlPv();
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  *param_5 = (long)pcStack_a8;
  param_5[2] = lStack_98;
  param_5[1] = (long)pcStack_a0;
  if (pcStack_a0 == pcStack_a8) {
LAB_1092da020:
    plVar11 = (long *)0x0;
  }
  else if (*pcStack_a8 == '\0') {
    pcVar10 = (char *)0x0;
    do {
      if (pcStack_a0 + ~(ulong)pcStack_a8 == pcVar10) goto LAB_1092da020;
      pcVar1 = pcStack_a8 + 1 + (long)pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 == '\0');
    plVar11 = (long *)(ulong)(pcVar10 < pcStack_a0 + -(long)pcStack_a8);
  }
  else {
    plVar11 = (long *)0x1;
  }
  appuStack_d8[0] = &PTR_FUN_110ae9ee0;
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return plVar11;
}



/* Entry: 1092d9e1c; end: 1092da0df;  */

bool FUN_1092d9e1c(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  undefined **appuStack_98 [2];
  long lStack_88;
  long lStack_80;
  undefined1 uStack_69;
  char *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  ulong auStack_50 [2];
  
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  }
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x58))();
  iVar3 = 0;
  if ((int)plVar7 != 0) {
    iVar3 = (int)plVar6 / (int)plVar7;
  }
  iVar4 = 0;
  if ((int)plVar8 != 0) {
    iVar4 = 0x80 / (int)plVar8;
  }
  auStack_50[1] = 0;
  auStack_50[0] = (ulong)*(int *)plVar10[2];
  uVar2 = iVar3 + iVar4 + 1;
  if (1 < (int)uVar2) {
    uVar11 = 1;
    do {
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092da0e0(auStack_50,(long)(int)plVar6);
      auStack_50[0] = auStack_50[0] | (long)*(int *)(plVar10[2] + uVar11 * 4);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uStack_69 = 0;
  FUN_109260268(&pcStack_68,0x10,&uStack_69);
  uVar11 = 0;
  do {
    uVar2 = (uint)uVar11 >> 3;
    pcStack_68[uVar2] =
         (byte)(((uint)(auStack_50[uVar11 >> 6] >> (uVar11 & 0x3f)) & 1) <<
               (ulong)(((uint)uVar11 ^ 0xffffffff) & 7)) | pcStack_68[uVar2];
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80);
  FUN_1092da888(appuStack_98,&pcStack_68);
  if (pcStack_68 != (char *)0x0) {
    pcStack_60 = pcStack_68;
    __ZdlPv();
  }
  iVar3 = (int)plVar10[1] + -1;
  *(int *)(plVar10 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  pcStack_68 = (char *)0x0;
  pcStack_60 = (char *)0x0;
  lStack_58 = 0;
  FUN_1092bfde0(&pcStack_68,lStack_88,lStack_80,lStack_80 - lStack_88);
  if (*param_4 != 0) {
    param_4[1] = *param_4;
    __ZdlPv();
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  *param_4 = (long)pcStack_68;
  param_4[2] = lStack_58;
  param_4[1] = (long)pcStack_60;
  if (pcStack_60 == pcStack_68) {
LAB_1092da020:
    bVar5 = false;
  }
  else if (*pcStack_68 == '\0') {
    pcVar9 = (char *)0x0;
    do {
      if (pcStack_60 + ~(ulong)pcStack_68 == pcVar9) goto LAB_1092da020;
      pcVar1 = pcStack_68 + 1 + (long)pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 == '\0');
    bVar5 = pcVar9 < pcStack_60 + -(long)pcStack_68;
  }
  else {
    bVar5 = true;
  }
  appuStack_98[0] = &PTR_FUN_110ae9ee0;
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  return bVar5;
}



/* Entry: 1092da0e0; end: 1092da1b3;  */

long FUN_1092da0e0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined4 uStack_58;
  long lStack_50;
  uint uStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  uVar1 = param_2;
  if (0x7f < param_2) {
    uVar1 = 0x80;
  }
  uVar2 = 0x80 - uVar1;
  lStack_50 = param_1 + (uVar2 >> 3 & 0x18);
  lStack_60 = param_1 + 0x10;
  uStack_48 = (uint)uVar2 & 0x3f;
  lStack_40 = param_1;
  if ((uVar2 & 0x3f) == 0) {
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    FUN_1092da464(auStack_70,&lStack_40,&lStack_50,&lStack_60);
  }
  else {
    uStack_38 = 0;
    uStack_58 = 0;
    FUN_1092da5a8(auStack_70,&lStack_40,&lStack_50,&lStack_60);
  }
  if (param_2 != 0) {
    uStack_38 = 0;
    lStack_40 = param_1;
    FUN_1092da7dc(&lStack_40,uVar1);
  }
  return param_1;
}



/* Entry: 1092da1b4; end: 1092da207;  */

void FUN_1092da1b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_1092da888();
  *param_1 = uVar1;
  return;
}



/* Entry: 1092da208; end: 1092da263;  */

void FUN_1092da208(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_1092da9d0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1092da264; end: 1092da27b;  */

undefined8 FUN_1092da264(void)

{
  return 0x12;
}



/* Entry: 1092da27c; end: 1092da2bb;  */

int FUN_1092da27c(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))(param_1);
  return (int)param_1 + (int)param_1 * (int)plVar1;
}



/* Entry: 1092da2bc; end: 1092da347;  */

undefined8 * FUN_1092da2bc(undefined8 *param_1)

{
  undefined1 auStack_548 [1296];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(auStack_548,&UNK_10dfc3a88,0x510);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,auStack_548,&lStack_38,0x144);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0xa8;
}



/* Entry: 1092da348; end: 1092da3ab;  */

undefined8 FUN_1092da348(void)

{
  return 0xa8;
}



/* Entry: 1092da3ac; end: 1092da463;  */

undefined8 * FUN_1092da3ac(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae9f48;
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092da464; end: 1092da5a7;  */

void FUN_1092da464(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar4 = (ulong)uVar1;
  uVar7 = (uVar4 + (*param_3 - *param_2) * 8) - (ulong)*(uint *)(param_2 + 1);
  puVar3 = (ulong *)*param_4;
  if (0 < (long)uVar7) {
    if (uVar1 != 0) {
      uVar5 = uVar7;
      if (uVar4 <= uVar7) {
        uVar5 = uVar4;
      }
      uVar7 = uVar7 - uVar5;
      uVar4 = -1L << (uVar4 - uVar5 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-uVar1 & 0x3f);
      *puVar3 = *puVar3 & (uVar4 ^ 0xffffffffffffffff) | *(ulong *)*param_3 & uVar4;
      *(uint *)(param_4 + 1) = (int)param_4[1] - (int)uVar5 & 0x3f;
    }
    uVar4 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar4 = uVar7;
    }
    lVar8 = (long)uVar4 >> 6;
    *param_4 = (long)(puVar3 + -lVar8);
    lVar2 = *param_3 + lVar8 * -8;
    *param_3 = lVar2;
    if (0x7e < uVar7 + 0x3f) {
      _memmove(*param_4,lVar2,lVar8 << 3);
    }
    lVar2 = uVar7 + lVar8 * -0x40;
    if (lVar2 < 1) {
      puVar3 = (ulong *)*param_4;
    }
    else {
      uVar4 = -1L << (-lVar2 & 0x3fU);
      uVar5 = *(ulong *)(*param_3 + -8);
      *param_3 = *param_3 + -8;
      puVar3 = (ulong *)(*param_4 + -8);
      uVar6 = *puVar3;
      *param_4 = (long)puVar3;
      *puVar3 = uVar6 & (uVar4 ^ 0xffffffffffffffff) | uVar5 & uVar4;
      *(uint *)(param_4 + 1) = -(int)uVar7 & 0x3f;
    }
  }
  *param_1 = (long)puVar3;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



/* Entry: 1092da5a8; end: 1092da7db;  */

void FUN_1092da5a8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar6 = *(uint *)(param_3 + 1);
  uVar7 = (ulong)uVar6;
  uVar4 = (uVar7 + (*param_3 - *param_2) * 8) - (ulong)*(uint *)(param_2 + 1);
  if ((long)uVar4 < 1) {
    uVar6 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar6 == 0) {
      uVar7 = (ulong)*(uint *)(param_4 + 1);
    }
    else {
      uVar9 = uVar4;
      if (uVar7 <= uVar4) {
        uVar9 = uVar7;
      }
      uVar4 = uVar4 - uVar9;
      uVar10 = -1L << (uVar7 - uVar9 & 0x3f) &
               0xffffffffffffffffU >> ((ulong)-uVar6 & 0x3f) & *(ulong *)*param_3;
      uVar2 = *(uint *)(param_4 + 1);
      uVar7 = (ulong)uVar2;
      uVar5 = uVar9;
      if (uVar7 <= uVar9) {
        uVar5 = uVar7;
      }
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = uVar10 << ((ulong)(uVar2 - uVar6) & 0x3f);
        if (uVar2 < uVar6 || uVar2 - uVar6 == 0) {
          uVar8 = uVar10 >> ((ulong)(uVar6 - uVar2) & 0x3f);
        }
        *(ulong *)*param_4 =
             *(ulong *)*param_4 &
             (-1L << (uVar7 - uVar5 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-uVar2 & 0x3f) ^
             0xffffffffffffffff) | uVar8;
        uVar6 = uVar2 - (int)uVar5 & 0x3f;
        uVar7 = (ulong)uVar6;
        *(uint *)(param_4 + 1) = uVar6;
        uVar9 = uVar9 - uVar5;
      }
      if (0 < (long)uVar9) {
        puVar11 = (ulong *)(*param_4 + -8);
        uVar8 = *puVar11;
        *param_4 = (long)puVar11;
        uVar6 = -(int)uVar9;
        *(uint *)(param_4 + 1) = uVar6 & 0x3f;
        iVar3 = ((int)param_3[1] - (int)uVar9) - (int)uVar5;
        *(int *)(param_3 + 1) = iVar3;
        uVar7 = (ulong)*(uint *)(param_4 + 1);
        *puVar11 = uVar10 << ((ulong)(*(uint *)(param_4 + 1) - iVar3) & 0x3f) |
                   uVar8 & (-1L << ((ulong)uVar6 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    uVar6 = (uint)uVar7;
    uVar9 = 0xffffffffffffffff >> ((ulong)-uVar6 & 0x3f);
    if (0x3f < (long)uVar4) {
      uVar5 = uVar4;
      do {
        uVar4 = *(ulong *)(*param_3 + -8);
        *param_3 = *param_3 + -8;
        puVar11 = (ulong *)*param_4;
        *puVar11 = *puVar11 & ~uVar9 | uVar4 >> ((ulong)(0x40 - uVar6) & 0x3f);
        puVar11 = puVar11 + -1;
        uVar10 = *puVar11;
        *param_4 = (long)puVar11;
        *puVar11 = uVar10 & uVar9 | uVar4 << (uVar7 & 0x3f);
        uVar4 = uVar5 - 0x40;
        bVar1 = 0x7f < uVar5;
        uVar5 = uVar4;
      } while (bVar1);
    }
    if (0 < (long)uVar4) {
      uVar10 = *(ulong *)(*param_3 + -8);
      *param_3 = *param_3 + -8;
      uVar10 = uVar10 & -1L << (-uVar4 & 0x3f);
      uVar5 = uVar4;
      if (uVar7 <= uVar4) {
        uVar5 = uVar7;
      }
      puVar11 = (ulong *)*param_4;
      *puVar11 = *puVar11 & (-1L << (uVar7 - uVar5 & 0x3f) & uVar9 ^ 0xffffffffffffffff) |
                 uVar10 >> ((ulong)(0x40 - uVar6) & 0x3f);
      uVar6 = uVar6 - (int)uVar5 & 0x3f;
      *(uint *)(param_4 + 1) = uVar6;
      if (0 < (long)(uVar4 - uVar5)) {
        puVar11 = puVar11 + -1;
        uVar7 = *puVar11;
        *param_4 = (long)puVar11;
        uVar2 = -(int)(uVar4 - uVar5);
        uVar6 = uVar2 & 0x3f;
        *(uint *)(param_4 + 1) = uVar6;
        *puVar11 = uVar7 & (-1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU) |
                   uVar10 << (uVar4 + uVar6 & 0x3f);
      }
    }
  }
  *param_1 = *param_4;
  *(uint *)(param_1 + 1) = uVar6;
  return;
}



/* Entry: 1092da7dc; end: 1092da887;  */

void FUN_1092da7dc(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 & (0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) &
                         -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff);
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _bzero(puVar4,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] =
         puVar4[uVar5] & (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}



/* Entry: 1092da888; end: 1092da9cf;  */

undefined8 * FUN_1092da888(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_110ae9ee0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092bfde0();
  *param_1 = &PTR_FUN_110aea090;
  if (param_2[1] - *param_2 == 0x10) {
    return param_1;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_60,0x10);
  FUN_10928a5e0(appuStack_48,&UNK_10f564630,auStack_60);
  if (-1 < cStack_31) {
    appuStack_48[0] = appuStack_48;
  }
  FUN_1092cf480(uVar2,appuStack_48[0]);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092da960);
  (*pcVar1)();
}



/* Entry: 1092da9d0; end: 1092dab4b;  */

undefined8 * FUN_1092da9d0(undefined8 *param_1,int param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_110ae9ee0;
  *(int *)(param_1 + 1) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092bfde0();
  *param_1 = &PTR_FUN_110aea090;
  if (param_3[1] - *param_3 == 0x10) {
    if (param_2 < 0x11) {
      return param_1;
    }
    ___cxa_allocate_exception(0x10);
    FUN_1092cf480();
    ___cxa_throw();
  }
  else {
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(auStack_60,0x10);
    FUN_10928a5e0(appuStack_48,&UNK_10f564630,auStack_60);
    if (-1 < cStack_31) {
      appuStack_48[0] = appuStack_48;
    }
    FUN_1092cf480(uVar2,appuStack_48[0]);
    ___cxa_throw();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092daadc);
  (*pcVar1)();
}



/* Entry: 1092dab4c; end: 1092dac23;  */

void FUN_1092dab4c(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong auStack_50 [2];
  
  auStack_50[1] = 0;
  auStack_50[0] = (ulong)**(byte **)(param_1 + 0x10);
  lVar4 = 1;
  do {
    FUN_1092da0e0(auStack_50,8);
    auStack_50[0] = auStack_50[0] | *(byte *)(*(long *)(param_1 + 0x10) + lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  uVar2 = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar3 = ~param_4;
  do {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = (int)(param_4 + (int)uVar2) / param_3;
    }
    *(uint *)(lVar4 + (long)iVar1 * 4) =
         ((uint)(auStack_50[uVar2 >> 6] >> (uVar2 & 0x3f)) & 1) <<
         (ulong)(uVar3 + param_3 + param_3 * iVar1 & 0x1f) | *(uint *)(lVar4 + (long)iVar1 * 4);
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0x80);
  return;
}



/* Entry: 1092dac24; end: 1092dad07;  */

undefined8 * FUN_1092dac24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9ee0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092dad08; end: 1092daf03;  */

undefined8 FUN_1092dad08(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  plStack_60 = plVar2;
  FUN_1092d0ec0(&plStack_58,&plStack_60);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  uStack_70 = 0;
  ppuStack_78 = &PTR_FUN_110ae99f0;
  plStack_68 = *(long **)(param_2 + 0x10);
  if (plStack_68 != (long *)0x0) {
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092d117c(&plStack_58,&ppuStack_78,param_1);
  ppuStack_78 = &PTR_FUN_110ae99f0;
  if ((plStack_68 != (long *)0x0) &&
     (iVar1 = (int)plStack_68[1] + -1, *(int *)(plStack_68 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_68 + 1) = 0xdeadf001;
    (**(code **)(*plStack_68 + 8))();
  }
  plStack_68 = (long *)0x0;
  puStack_38 = auStack_50;
  FUN_1092d0c8c(&puStack_38);
  if ((plStack_58 != (long *)0x0) &&
     (iVar1 = (int)plStack_58[1] + -1, *(int *)(plStack_58 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_58 + 1) = 0xdeadf001;
    (**(code **)(*plStack_58 + 8))();
  }
  return 1;
}



/* Entry: 1092daf04; end: 1092db0bf;  */

undefined8 FUN_1092daf04(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_1[1];
  if (plStack_38 == (long *)0x0) {
    plStack_38 = (long *)0x0;
  }
  else {
    lVar2 = plStack_38[1];
    *(int *)(plStack_38 + 1) = (int)lVar2 + 1;
    if ((int)lVar2 == -1) {
      *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
      (**(code **)(*plStack_38 + 8))();
    }
  }
  uStack_48 = 0;
  ppuStack_50 = &PTR_FUN_110ae99f0;
  plStack_40 = *(long **)(param_2 + 0x10);
  if (plStack_40 != (long *)0x0) {
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1092cf548(&plStack_38,&ppuStack_50,param_1);
  ppuStack_50 = &PTR_FUN_110ae99f0;
  if ((plStack_40 != (long *)0x0) &&
     (iVar1 = (int)plStack_40[1] + -1, *(int *)(plStack_40 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_40 + 1) = 0xdeadf001;
    (**(code **)(*plStack_40 + 8))();
  }
  plStack_40 = (long *)0x0;
  if ((plStack_38 != (long *)0x0) &&
     (iVar1 = (int)plStack_38[1] + -1, *(int *)(plStack_38 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plStack_38 + 1) = 0xdeadf001;
    (**(code **)(*plStack_38 + 8))();
  }
  return 1;
}



/* Entry: 1092db0c0; end: 1092db49f;  */

long * FUN_1092db0c0(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,
                    long *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_a9;
  char *pcStack_a8;
  char *pcStack_a0;
  long lStack_98;
  ulong auStack_90 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar8 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    uStack_30 = 0x5700000053;
    puVar9 = (undefined8 *)&UNK_10dfc3fe0;
    break;
  case 1:
    uStack_30 = 0x5a00000056;
    puVar9 = (undefined8 *)&UNK_10dfc3ff8;
    break;
  case 2:
    uStack_30 = 0x2200000020;
    puVar9 = (undefined8 *)&UNK_10dfc4010;
    break;
  case 3:
    uStack_30 = 0x6f0000006b;
    puVar9 = (undefined8 *)&UNK_10dfc4028;
    break;
  case 4:
    uStack_30 = 0x720000006e;
    puVar9 = (undefined8 *)&UNK_10dfc4040;
    break;
  case 5:
    uStack_30 = 0x9200000091;
    puVar9 = (undefined8 *)&UNK_10dfc4058;
    break;
  case 6:
    uStack_30 = 0x9500000089;
    puVar9 = (undefined8 *)&UNK_10dfc4070;
    break;
  case 7:
    uStack_30 = 0x4c00000038;
    puVar9 = (undefined8 *)&UNK_10dfc4088;
    break;
  case 8:
    uStack_30 = 0x4d00000045;
    puVar9 = (undefined8 *)&UNK_10dfc40a0;
    break;
  case 9:
    uStack_30 = 0x630000005f;
    puVar9 = (undefined8 *)&UNK_10dfc40b8;
    break;
  case 10:
    uStack_30 = 0x6600000062;
    puVar9 = (undefined8 *)&UNK_10dfc40d0;
    break;
  case 0xb:
    uStack_30 = 0x7b00000077;
    puVar9 = (undefined8 *)&UNK_10dfc40e8;
    break;
  case 0xc:
    uStack_30 = 0x800000007a;
    puVar9 = (undefined8 *)&UNK_10dfc4100;
    break;
  case 0xd:
    uStack_30 = 0x2400000023;
    puVar9 = (undefined8 *)&UNK_10dfc4118;
    break;
  case 0xe:
    uStack_30 = 0x8d00000085;
    puVar9 = (undefined8 *)&UNK_10dfc4130;
    break;
  case 0xf:
    uStack_30 = 0x960000008c;
    puVar9 = (undefined8 *)&UNK_10dfc4148;
    break;
  case 0x10:
    uStack_30 = 0xbd0000009b;
    puVar9 = (undefined8 *)&UNK_10dfc4160;
    break;
  case 0x11:
    uStack_30 = 0xcb000000ab;
    puVar9 = (undefined8 *)&UNK_10dfc4178;
    break;
  case 0x12:
    uStack_30 = 0x4b00000041;
    puVar9 = (undefined8 *)&UNK_10dfc4190;
    break;
  case 0x13:
    uStack_30 = 0x5000000048;
    puVar9 = (undefined8 *)&UNK_10dfc41a8;
    break;
  case 0x14:
    uStack_30 = 0x2500000026;
    puVar9 = (undefined8 *)&UNK_10dfc41c0;
    break;
  case 0x15:
    uStack_30 = 0xbf000000be;
    puVar9 = (undefined8 *)&UNK_10dfc41d8;
    break;
  case 0x16:
    uStack_30 = 0x2800000027;
    puVar9 = (undefined8 *)&UNK_10dfc41f0;
    break;
  case 0x17:
    uStack_30 = 0xc1000000c0;
    puVar9 = (undefined8 *)&UNK_10dfc4208;
    break;
  case 0x18:
    uStack_30 = 0xc9000000c8;
    puVar9 = (undefined8 *)&UNK_10dfc4220;
    break;
  case 0x19:
    uStack_30 = 0x2c0000002b;
    puVar9 = (undefined8 *)&UNK_10dfc4238;
    break;
  case 0x1a:
    uStack_30 = 0xc5000000c4;
    puVar9 = (undefined8 *)&UNK_10dfc4250;
    break;
  case 0x1b:
    uStack_30 = 0x300000002f;
    puVar9 = (undefined8 *)&UNK_10dfc4268;
    break;
  case 0x1c:
    uStack_30 = 0x290000002a;
    puVar9 = (undefined8 *)&UNK_10dfc4280;
    break;
  case 0x1d:
    uStack_30 = 0xc3000000c2;
    puVar9 = (undefined8 *)&UNK_10dfc4298;
    break;
  case 0x1e:
    uStack_30 = 0x2e0000002d;
    puVar9 = (undefined8 *)&UNK_10dfc42b0;
    break;
  case 0x1f:
    uStack_30 = 0xc7000000c6;
    puVar9 = (undefined8 *)&UNK_10dfc42c8;
    break;
  case 0x20:
    uStack_30 = 0x3500000033;
    puVar9 = (undefined8 *)&UNK_10dfc42e0;
    break;
  case 0x21:
    uStack_30 = 0x3e0000003d;
    puVar9 = (undefined8 *)&UNK_10dfc42f8;
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1 = param_2;
    puVar8 = (undefined8 *)param_3;
    goto LAB_1092db468;
  }
  uStack_38 = puVar9[1];
  uStack_40 = *puVar9;
  (**(code **)(*param_2 + 0x58))();
  param_5 = (long *)(long)(int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,&uStack_40,(long)&uStack_40 + (long)(int)param_2 * 4);
LAB_1092db468:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar11 = *(long **)((long)puVar8 + 0x10);
  if (plVar11 != (long *)0x0) {
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x58))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  iVar3 = 0;
  if ((int)plVar6 != 0) {
    iVar3 = (int)plVar5 / (int)plVar6;
  }
  iVar4 = 0;
  if ((int)plVar7 != 0) {
    iVar4 = 0x80 / (int)plVar7;
  }
  auStack_90[1] = 0;
  auStack_90[0] = (ulong)*(int *)plVar11[2];
  uVar2 = iVar3 + iVar4 + 1;
  if (1 < (int)uVar2) {
    uVar12 = 1;
    do {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092da0e0(auStack_90,(long)(int)plVar5);
      auStack_90[0] = auStack_90[0] | (long)*(int *)(plVar11[2] + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
  }
  uStack_a9 = 0;
  FUN_109260268(&pcStack_a8,0x10,&uStack_a9);
  uVar12 = 0;
  do {
    uVar2 = (uint)uVar12 >> 3;
    pcStack_a8[uVar2] =
         (byte)(((uint)(auStack_90[uVar12 >> 6] >> (uVar12 & 0x3f)) & 1) <<
               (ulong)(((uint)uVar12 ^ 0xffffffff) & 7)) | pcStack_a8[uVar2];
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x80);
  FUN_1092dba28(appuStack_d8,&pcStack_a8);
  if (pcStack_a8 != (char *)0x0) {
    pcStack_a0 = pcStack_a8;
    __ZdlPv();
  }
  iVar3 = (int)plVar11[1] + -1;
  *(int *)(plVar11 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  pcStack_a8 = (char *)0x0;
  pcStack_a0 = (char *)0x0;
  lStack_98 = 0;
  FUN_1092bfde0(&pcStack_a8,lStack_c8,lStack_c0,lStack_c0 - lStack_c8);
  if (*param_5 != 0) {
    param_5[1] = *param_5;
    __ZdlPv();
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  *param_5 = (long)pcStack_a8;
  param_5[2] = lStack_98;
  param_5[1] = (long)pcStack_a0;
  if (pcStack_a0 == pcStack_a8) {
LAB_1092db6a4:
    plVar11 = (long *)0x0;
  }
  else if (*pcStack_a8 == '\0') {
    pcVar10 = (char *)0x0;
    do {
      if (pcStack_a0 + ~(ulong)pcStack_a8 == pcVar10) goto LAB_1092db6a4;
      pcVar1 = pcStack_a8 + 1 + (long)pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 == '\0');
    plVar11 = (long *)(ulong)(pcVar10 < pcStack_a0 + -(long)pcStack_a8);
  }
  else {
    plVar11 = (long *)0x1;
  }
  appuStack_d8[0] = &PTR_FUN_110ae9ee0;
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return plVar11;
}



/* Entry: 1092db4a0; end: 1092db763;  */

bool FUN_1092db4a0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  undefined **appuStack_98 [2];
  long lStack_88;
  long lStack_80;
  undefined1 uStack_69;
  char *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  ulong auStack_50 [2];
  
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  }
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x60))();
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x58))();
  iVar3 = 0;
  if ((int)plVar7 != 0) {
    iVar3 = (int)plVar6 / (int)plVar7;
  }
  iVar4 = 0;
  if ((int)plVar8 != 0) {
    iVar4 = 0x80 / (int)plVar8;
  }
  auStack_50[1] = 0;
  auStack_50[0] = (ulong)*(int *)plVar10[2];
  uVar2 = iVar3 + iVar4 + 1;
  if (1 < (int)uVar2) {
    uVar11 = 1;
    do {
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1);
      FUN_1092da0e0(auStack_50,(long)(int)plVar6);
      auStack_50[0] = auStack_50[0] | (long)*(int *)(plVar10[2] + uVar11 * 4);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  uStack_69 = 0;
  FUN_109260268(&pcStack_68,0x10,&uStack_69);
  uVar11 = 0;
  do {
    uVar2 = (uint)uVar11 >> 3;
    pcStack_68[uVar2] =
         (byte)(((uint)(auStack_50[uVar11 >> 6] >> (uVar11 & 0x3f)) & 1) <<
               (ulong)(((uint)uVar11 ^ 0xffffffff) & 7)) | pcStack_68[uVar2];
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80);
  FUN_1092dba28(appuStack_98,&pcStack_68);
  if (pcStack_68 != (char *)0x0) {
    pcStack_60 = pcStack_68;
    __ZdlPv();
  }
  iVar3 = (int)plVar10[1] + -1;
  *(int *)(plVar10 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  pcStack_68 = (char *)0x0;
  pcStack_60 = (char *)0x0;
  lStack_58 = 0;
  FUN_1092bfde0(&pcStack_68,lStack_88,lStack_80,lStack_80 - lStack_88);
  if (*param_4 != 0) {
    param_4[1] = *param_4;
    __ZdlPv();
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  *param_4 = (long)pcStack_68;
  param_4[2] = lStack_58;
  param_4[1] = (long)pcStack_60;
  if (pcStack_60 == pcStack_68) {
LAB_1092db6a4:
    bVar5 = false;
  }
  else if (*pcStack_68 == '\0') {
    pcVar9 = (char *)0x0;
    do {
      if (pcStack_60 + ~(ulong)pcStack_68 == pcVar9) goto LAB_1092db6a4;
      pcVar1 = pcStack_68 + 1 + (long)pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 == '\0');
    bVar5 = pcVar9 < pcStack_60 + -(long)pcStack_68;
  }
  else {
    bVar5 = true;
  }
  appuStack_98[0] = &PTR_FUN_110ae9ee0;
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  return bVar5;
}



/* Entry: 1092db764; end: 1092db7b7;  */

void FUN_1092db764(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_1092dba28();
  *param_1 = uVar1;
  return;
}



/* Entry: 1092db7b8; end: 1092db81f;  */

void FUN_1092db7b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_1092dbb70();
  *param_1 = uVar1;
  return;
}



/* Entry: 1092db820; end: 1092db837;  */

undefined8 FUN_1092db820(void)

{
  return 0x13;
}



/* Entry: 1092db838; end: 1092db877;  */

int FUN_1092db838(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))(param_1);
  return (int)param_1 + (int)param_1 * (int)plVar1;
}



/* Entry: 1092db878; end: 1092db903;  */

undefined8 * FUN_1092db878(undefined8 *param_1)

{
  undefined1 auStack_5dc [1444];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _memcpy(auStack_5dc,&UNK_10dfc4330,0x5a4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_109285684(param_1,auStack_5dc,&lStack_38,0x169);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0xcc;
}



/* Entry: 1092db904; end: 1092db96f;  */

undefined8 FUN_1092db904(void)

{
  return 0xcc;
}



/* Entry: 1092db970; end: 1092dba27;  */

undefined8 * FUN_1092db970(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aea0d0;
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092dba28; end: 1092dbb6f;  */

undefined8 * FUN_1092dba28(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_110ae9ee0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092bfde0();
  *param_1 = &PTR_FUN_110aea218;
  if (param_2[1] - *param_2 == 0x10) {
    return param_1;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_60,0x10);
  FUN_10928a5e0(appuStack_48,&UNK_10f564630,auStack_60);
  if (-1 < cStack_31) {
    appuStack_48[0] = appuStack_48;
  }
  FUN_1092cf480(uVar2,appuStack_48[0]);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092dbb00);
  (*pcVar1)();
}



/* Entry: 1092dbb70; end: 1092dbcf3;  */

undefined8 * FUN_1092dbb70(undefined8 *param_1,int param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_110ae9ee0;
  *(int *)(param_1 + 1) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1092bfde0();
  *param_1 = &PTR_FUN_110aea218;
  if (param_3[1] - *param_3 == 0x10) {
    if (0xffffffef < param_2 - 0x91d5U) {
      return param_1;
    }
    ___cxa_allocate_exception(0x10);
    FUN_1092cf480();
    ___cxa_throw();
  }
  else {
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(auStack_60,0x10);
    FUN_10928a5e0(appuStack_48,&UNK_10f564630,auStack_60);
    if (-1 < cStack_31) {
      appuStack_48[0] = appuStack_48;
    }
    FUN_1092cf480(uVar2,appuStack_48[0]);
    ___cxa_throw();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092dbc84);
  (*pcVar1)();
}



/* Entry: 1092dbcf4; end: 1092dbdcb;  */

void FUN_1092dbcf4(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong auStack_50 [2];
  
  auStack_50[1] = 0;
  auStack_50[0] = (ulong)**(byte **)(param_1 + 0x10);
  lVar4 = 1;
  do {
    FUN_1092da0e0(auStack_50,8);
    auStack_50[0] = auStack_50[0] | *(byte *)(*(long *)(param_1 + 0x10) + lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  uVar2 = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar3 = ~param_4;
  do {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = (int)(param_4 + (int)uVar2) / param_3;
    }
    *(uint *)(lVar4 + (long)iVar1 * 4) =
         ((uint)(auStack_50[uVar2 >> 6] >> (uVar2 & 0x3f)) & 1) <<
         (ulong)(uVar3 + param_3 + param_3 * iVar1 & 0x1f) | *(uint *)(lVar4 + (long)iVar1 * 4);
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0x80);
  return;
}



/* Entry: 1092dbdcc; end: 1092dbe43;  */

undefined8 * FUN_1092dbdcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9ee0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092dbe44; end: 1092dc283;  */

void FUN_1092dbe44(undefined8 param_1,long param_2,long *param_3,undefined1 *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  long alStack_190 [4];
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long lStack_138;
  undefined4 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [2];
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long alStack_78 [3];
  
  *param_4 = 0;
  uStack_c8 = 0x42ff0000;
  puStack_f0 = &uStack_c8;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_88 = (long)&uStack_c4 + 4;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  uStack_d0 = 0;
  lStack_e0 = CONCAT44(lStack_e0._4_4_,0x1010000);
  auStack_f8[0] = 0x2010000;
  uStack_e8 = 0;
  uStack_170 = 0x42ff0000;
  puStack_108 = &uStack_170;
  puStack_130 = &uStack_168;
  iStack_164 = 0;
  uStack_160 = 0;
  iStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_144 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  auStack_110[0] = 0x1010000;
  alStack_190[1] = 0x7fefffffffffffff;
  alStack_190[0] = 0x7fefffffffffffff;
  alStack_190[3] = 0x7fefffffffffffff;
  alStack_190[2] = 0x7fefffffffffffff;
  alStack_78[2] = 0xffffffffffffffff;
  puStack_128 = &uStack_120;
  lStack_d8 = param_2;
  plStack_80 = alStack_78;
  FUN_109b32fd4(0,&lStack_e0,auStack_f8,auStack_110,alStack_78 + 2,2,0,alStack_190);
  if (lStack_138 != 0) {
    piVar19 = (int *)(lStack_138 + 0x14);
    do {
      iVar18 = *piVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar6) {
        *piVar19 = iVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_170);
    }
  }
  lStack_138 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  if (0 < iStack_16c) {
    lVar16 = 0;
    do {
      puStack_130[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_16c);
  }
  if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
    _free(puStack_128[-1]);
  }
  plVar7 = param_3;
  (**(code **)(*param_3 + 0x10))();
  plVar8 = param_3;
  (**(code **)(*param_3 + 0x18))();
  plVar9 = param_3;
  (**(code **)(*param_3 + 0x20))();
  iVar2 = *param_5;
  iVar18 = -iVar2;
  if (-1 < iVar2) {
    iVar18 = iVar2;
  }
  if (iVar18 <= (int)(uint)plVar8) {
    uVar3 = param_5[1];
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 <= (uint)plVar8) {
      (**(code **)(*param_3 + 0x38))(&uStack_170,param_3);
      plVar10 = param_3;
      (**(code **)(*param_3 + 0x40))(param_3);
      func_0x00010737fadc(alStack_190,(long)(int)plVar10);
      if (0 < (int)plVar7) {
        uVar17 = 0;
        iVar18 = 0;
        lVar16 = (long)(int)(uVar3 + (int)plVar9);
        piVar19 = (int *)CONCAT44(iStack_16c,uStack_170);
        bVar6 = true;
        do {
          lVar11 = CONCAT44(uStack_b4,uStack_b8) + (long)(iVar2 + (int)plVar9);
          piVar12 = piVar19;
          uVar13 = (ulong)plVar7 & 0xffffffff;
          do {
            if (*piVar12 != 0) {
              bVar4 = *(byte *)(lVar11 + lVar16 * *plStack_80);
              uVar14 = (ulong)(long)iVar18 >> 6;
              uVar15 = 1L << ((long)iVar18 & 0x3fU);
              if (bVar4 < 0x7f) {
                uVar15 = *(ulong *)(alStack_190[0] + uVar14 * 8) | uVar15;
              }
              else {
                uVar15 = *(ulong *)(alStack_190[0] + uVar14 * 8) & (uVar15 ^ 0xffffffffffffffff);
              }
              iVar18 = iVar18 + 1;
              *(ulong *)(alStack_190[0] + uVar14 * 8) = uVar15;
              bVar6 = (bool)(bVar6 & 0x7e < bVar4);
            }
            lVar11 = lVar11 + ((ulong)plVar8 & 0xffffffff);
            uVar13 = uVar13 - 1;
            piVar12 = piVar12 + 1;
          } while (uVar13 != 0);
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + ((ulong)plVar8 & 0xffffffff);
          piVar19 = piVar19 + ((ulong)plVar7 & 0xffffffff);
        } while (uVar17 != ((ulong)plVar7 & 0xffffffff));
        lStack_e0 = 0;
        lStack_d8 = 0;
        uStack_d0 = 0;
        if (!bVar6) {
          (**(code **)(*param_3 + 0xa8))(param_3,alStack_190,auStack_f8,&lStack_e0);
          if ((int)param_3 != 0) {
            *param_4 = 1;
            *(undefined4 *)(param_4 + 4) = 0;
            *(undefined4 *)(param_4 + 8) = auStack_f8[0];
            if ((long *)(param_4 + 0x28) != &lStack_e0) {
              FUN_1092df320();
            }
          }
          if (lStack_e0 != 0) {
            lStack_d8 = lStack_e0;
            __ZdlPv();
          }
        }
      }
      if (alStack_190[0] != 0) {
        __ZdlPv();
      }
      if (CONCAT44(iStack_16c,uStack_170) != 0) {
        uStack_168 = uStack_170;
        iStack_164 = iStack_16c;
        __ZdlPv();
      }
    }
  }
  if (lStack_90 != 0) {
    piVar19 = (int *)(lStack_90 + 0x14);
    do {
      iVar18 = *piVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar6) {
        *piVar19 = iVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < (int)uStack_c4) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_c4);
  }
  if (plStack_80 != alStack_78 && plStack_80 != (long *)0x0) {
    _free(plStack_80[-1]);
  }
  return;
}



/* Entry: 1092dc284; end: 1092dc6cf;  */

void FUN_1092dc284(undefined8 param_1,long param_2,long *param_3,undefined1 *param_4,float *param_5,
                  float *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long alStack_1a0 [4];
  undefined4 uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  undefined4 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 auStack_120 [2];
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long alStack_88 [3];
  
  *param_4 = 0;
  uStack_d8 = 0x42ff0000;
  puStack_100 = &uStack_d8;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_a0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  uStack_e0 = 0;
  lStack_f0 = CONCAT44(lStack_f0._4_4_,0x1010000);
  auStack_108[0] = 0x2010000;
  uStack_f8 = 0;
  uStack_180 = 0x42ff0000;
  puStack_118 = &uStack_180;
  puStack_140 = &uStack_178;
  iStack_174 = 0;
  uStack_170 = 0;
  iStack_17c = 0;
  uStack_178 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  auStack_120[0] = 0x1010000;
  alStack_1a0[1] = 0x7fefffffffffffff;
  alStack_1a0[0] = 0x7fefffffffffffff;
  alStack_1a0[3] = 0x7fefffffffffffff;
  alStack_1a0[2] = 0x7fefffffffffffff;
  alStack_88[2] = 0xffffffffffffffff;
  puStack_138 = &uStack_130;
  lStack_e8 = param_2;
  plStack_90 = alStack_88;
  FUN_109b32fd4(0,&lStack_f0,auStack_108,auStack_120,alStack_88 + 2,2,0,alStack_1a0);
  if (lStack_148 != 0) {
    piVar1 = (int *)(lStack_148 + 0x14);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_180);
    }
  }
  lStack_148 = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  if (0 < iStack_17c) {
    lVar12 = 0;
    do {
      puStack_140[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_17c);
  }
  if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
    _free(puStack_138[-1]);
  }
  plVar6 = param_3;
  (**(code **)(*param_3 + 0x10))();
  fVar18 = *param_6;
  fVar17 = param_6[1];
  fVar20 = *param_5;
  fVar19 = param_5[1];
  (**(code **)(*param_3 + 0x38))(&uStack_180,param_3);
  plVar7 = param_3;
  (**(code **)(*param_3 + 0x40))(param_3);
  func_0x00010737fadc(alStack_1a0,(long)(int)plVar7);
  if (0 < (int)plVar6) {
    uVar13 = 0;
    iVar10 = 0;
    fVar4 = (float)((int)plVar6 + -1);
    lVar12 = CONCAT44(iStack_17c,uStack_180);
    bVar3 = true;
    do {
      uVar14 = 0;
      fVar16 = *param_5;
      uVar15 = (uint)(param_5[1] + (float)(uVar13 & 0xffffffff) * ((fVar17 - fVar19) / fVar4));
      do {
        if (*(int *)(lVar12 + uVar14 * 4) != 0) {
          if (((((int)uVar15 < 0) || (uStack_d4._4_4_ <= (int)uVar15)) ||
              (uVar9 = (uint)(fVar16 + (float)(uVar14 & 0xffffffff) * ((fVar18 - fVar20) / fVar4)),
              (int)uVar9 < 0)) || (iStack_cc <= (int)uVar9)) {
            puVar8 = (ulong *)(alStack_1a0[0] + ((ulong)(long)iVar10 >> 6) * 8);
            uVar11 = 1L << ((long)iVar10 & 0x3fU);
LAB_1092dc514:
            uVar11 = *puVar8 & (uVar11 ^ 0xffffffffffffffff);
            bVar5 = 1;
          }
          else {
            puVar8 = (ulong *)(alStack_1a0[0] + ((ulong)(long)iVar10 >> 6) * 8);
            uVar11 = 1L << ((long)iVar10 & 0x3fU);
            if (0x7e < *(byte *)(CONCAT44(uStack_c4,uStack_c8) + *plStack_90 * (ulong)uVar15 +
                                (ulong)uVar9)) goto LAB_1092dc514;
            bVar5 = 0;
            uVar11 = *puVar8 | uVar11;
          }
          iVar10 = iVar10 + 1;
          *puVar8 = uVar11;
          bVar3 = (bool)(bVar3 & bVar5);
        }
        uVar14 = uVar14 + 1;
      } while (((ulong)plVar6 & 0xffffffff) != uVar14);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + ((ulong)plVar6 & 0xffffffff) * 4;
    } while (uVar13 != ((ulong)plVar6 & 0xffffffff));
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    if (!bVar3) {
      (**(code **)(*param_3 + 0xa8))(param_3,alStack_1a0,auStack_108,&lStack_f0);
      if ((int)param_3 != 0) {
        *param_4 = 1;
        *(undefined4 *)(param_4 + 4) = 0;
        *(undefined4 *)(param_4 + 8) = auStack_108[0];
        if ((long *)(param_4 + 0x28) != &lStack_f0) {
          FUN_1092df320();
        }
      }
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
    }
  }
  if (alStack_1a0[0] != 0) {
    __ZdlPv();
  }
  if (CONCAT44(iStack_17c,uStack_180) != 0) {
    uStack_178 = uStack_180;
    iStack_174 = iStack_17c;
    __ZdlPv();
  }
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 0x14);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_98 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_d4);
  }
  if (plStack_90 != alStack_88 && plStack_90 != (long *)0x0) {
    _free(plStack_90[-1]);
  }
  return;
}



/* Entry: 1092dc6d0; end: 1092de1a7;  */

void FUN_1092dc6d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  long **pplVar3;
  long **pplVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  long ****pppplVar9;
  code *pcVar10;
  long *****ppppplVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long lVar17;
  undefined8 *puVar18;
  long ***ppplVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  long ***ppplVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  float fVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  int iVar40;
  long ****pppplVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  double unaff_d8;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long ***ppplStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  undefined4 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  int iStack_480;
  int iStack_47c;
  int iStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  long lStack_448;
  int *piStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long ****pppplStack_420;
  undefined8 uStack_418;
  long ****pppplStack_410;
  undefined8 ****ppppuStack_408;
  undefined8 ****ppppuStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  double dStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  long ****pppplStack_3c8;
  long ***ppplStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  long **pplStack_380;
  long **pplStack_378;
  undefined8 uStack_370;
  long **pplStack_368;
  long **pplStack_360;
  undefined8 uStack_358;
  double dStack_350;
  ulong uStack_348;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [4];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined4 auStack_2c0 [2];
  int *piStack_2b8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a8 [2];
  long ****pppplStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  int *piStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_130;
  int iStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  
  func_0x0001092d96a8(&ppuStack_2d8);
  uStack_290._0_4_ = 0x42ff0000;
  piStack_250 = (int *)((ulong)&uStack_290 | 8);
  uStack_288._4_4_ = 0;
  uStack_280 = 0;
  uStack_290._4_4_ = 0;
  uStack_288._0_4_ = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppplStack_4e8 = (long ***)CONCAT44(ppplStack_4e8._4_4_,0x2010000);
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  puStack_248 = &uStack_240;
  uStack_4e0 = (long *****)&uStack_290;
  FUN_109a479a0(param_2,&ppplStack_4e8);
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar29 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar41 = *piVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar7) {
        *piVar29 = iVar41 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar41 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar17 = 0;
    lVar22 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar22 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0xc));
  }
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_288._4_4_,(int)uStack_288);
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_290._4_4_,(int)uStack_290);
  *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_274,uStack_278);
  *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_27c,uStack_280);
  *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_264,uStack_268);
  *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_26c,uStack_270);
  *(long *)(param_1 + 0x40) = lStack_258;
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_25c,uStack_260);
  puVar23 = *(undefined8 **)(param_1 + 0x50);
  puVar18 = (undefined8 *)(param_1 + 0x58);
  if (puVar23 != puVar18) {
    if (puVar23 != (undefined8 *)0x0) {
      _free(puVar23[-1]);
    }
    *(long *)(param_1 + 0x48) = param_1 + 0x10;
    *(undefined8 **)(param_1 + 0x50) = puVar18;
    puVar23 = puVar18;
  }
  if (uStack_290._4_4_ < 3) {
    puVar18 = (undefined8 *)((ulong)&uStack_290 | 4);
    *puVar23 = *puStack_248;
    puVar23[1] = puStack_248[1];
    uStack_290._0_4_ = 0x42ff0000;
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    *(undefined8 *)((long)puVar18 + 0x34) = 0;
    *(undefined8 *)((long)puVar18 + 0x2c) = 0;
    if (puStack_248 != &uStack_240) {
      _free(puStack_248[-1]);
    }
  }
  else {
    *(int **)(param_1 + 0x48) = piStack_250;
    *(undefined8 **)(param_1 + 0x50) = puStack_248;
  }
  auStack_338._0_4_ = 0x42ff0000;
  uStack_32c = 0;
  uStack_328 = 0;
  stack0xfffffffffffffccc = 0;
  puStack_2f8 = auStack_330;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_30c = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  lStack_300 = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_290._0_4_ = 0x1010000;
  uStack_288._0_4_ = (int)param_2;
  uStack_288._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
  ppplStack_4e8._0_4_ = 0x2010000;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_130 = 5;
  iStack_12c = 5;
  puStack_2f0 = &uStack_2e8;
  uStack_4e0 = (long *****)auStack_338;
  FUN_109b44a6c(0,0,&uStack_290,&ppplStack_4e8,&uStack_130,4);
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_290._0_4_ = 0x1010000;
  ppplStack_4e8._0_4_ = 0x2010000;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_288 = auStack_338;
  uStack_4e0 = (long *****)auStack_338;
  FUN_109b5a14c(0x406fe00000000000,0,&uStack_290,&ppplStack_4e8,1,0,0x1f);
  pplStack_368 = (long **)0x0;
  uStack_370 = 0;
  uStack_358 = 0;
  pplStack_360 = (long **)0x0;
  pplStack_378 = (long **)0x0;
  pplStack_380 = (long **)0x0;
  uStack_348 = 0xffffffffffffffff;
  uStack_290._0_4_ = 0x42ff0000;
  piStack_250 = (int *)&uStack_288;
  uStack_288._4_4_ = 0;
  uStack_280 = 0;
  uStack_290._4_4_ = 0;
  uStack_288._0_4_ = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppplStack_4e8._0_4_ = 0x2010000;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  puStack_248 = &uStack_240;
  uStack_4e0 = (long *****)&uStack_290;
  FUN_109a479a0(auStack_338,&ppplStack_4e8);
  ppplStack_4e8 = (long ***)CONCAT44(ppplStack_4e8._4_4_,0x3010000);
  uStack_4e0 = (long *****)&uStack_290;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_130 = 0x8204000c;
  uStack_128 = (long *****)&pplStack_380;
  uStack_120 = 0;
  uStack_11c = 0;
  pppplStack_3c8 = (long ****)&pplStack_368;
  uStack_3d0 = (long ****)CONCAT44(uStack_3d0._4_4_,0x8203001c);
  ppplStack_3c0 = (long ***)0x0;
  pppplStack_420 = (long ****)0x0;
  FUN_109adf8b0(&ppplStack_4e8,&uStack_130,&uStack_3d0,3,2,&pppplStack_420);
  ppplVar19 = (long ***)pplStack_378;
  ppplVar24 = (long ***)pplStack_380;
  if (pplStack_378 != pplStack_380) {
    lVar22 = 0;
    auVar39._0_8_ = 0;
    fVar8 = 1e+07;
    lVar17 = 0xc;
    do {
      pppplVar36 = (long ****)((long)ppplVar24 + lVar22);
      if ((0x640 < (ulong)((long)pppplVar36[1] - (long)*pppplVar36)) &&
         (*(int *)((long)pplStack_368 + lVar17) != -1)) {
        ppplStack_4e8 = (long ***)0x0;
        uStack_4e0._0_4_ = 0;
        uStack_4e0._4_4_ = 0;
        uStack_4d8 = 0;
        uStack_4d4 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_130 = 0x8103000c;
        uStack_128 = (long *****)pppplVar36;
        dVar33 = (double)FUN_109b4131c(&uStack_130,1);
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_130 = 0x8103000c;
        uStack_3d0 = (long ****)CONCAT44(uStack_3d0._4_4_,0x8203000c);
        ppplStack_3c0 = (long ***)0x0;
        pppplStack_3c8 = &ppplStack_4e8;
        uStack_128 = (long *****)pppplVar36;
        FUN_109ac7338(dVar33 * 0.1,&uStack_130,&uStack_3d0,1);
        pplVar3 = pplStack_380;
        if ((CONCAT44(uStack_4e0._4_4_,(undefined4)uStack_4e0) - (long)ppplStack_4e8 >> 3) - 3U < 2)
        {
          iVar41 = *(int *)((long)pplStack_368 + lVar17);
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_130 = 0x8103000c;
          uStack_128 = (long *****)pppplVar36;
          dVar33 = (double)FUN_109b415b4(&uStack_130,0);
          uStack_120 = 0;
          uStack_11c = 0;
          pppplVar36 = (long ****)(pplVar3 + (long)iVar41 * 3);
          uStack_130 = 0x8103000c;
          uStack_128 = (long *****)pppplVar36;
          unaff_d8 = (double)FUN_109b415b4(&uStack_130,0);
          if (unaff_d8 <= dVar33 * 1.5) {
            uStack_128._0_4_ = 0;
            uStack_128._4_4_ = 0;
            uStack_130 = 0;
            iStack_12c = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            ppplStack_3c0 = (long ***)0x0;
            uStack_3d0._0_4_ = 0x8103000c;
            pppplStack_3c8 = pppplVar36;
            dVar33 = (double)FUN_109b4131c(&uStack_3d0,1);
            ppplStack_3c0 = (long ***)0x0;
            uStack_3d0 = (long ****)CONCAT44(uStack_3d0._4_4_,0x8103000c);
            pppplStack_420 = (long ****)CONCAT44(pppplStack_420._4_4_,0x8203000c);
            uStack_418 = (long *****)&uStack_130;
            pppplStack_410 = (long ****)0x0;
            pppplStack_3c8 = pppplVar36;
            FUN_109ac7338(dVar33 * 0.1,&uStack_3d0,&pppplStack_420,1);
            lVar26 = CONCAT44(iStack_12c,uStack_130);
            if (CONCAT44(uStack_128._4_4_,(undefined4)uStack_128) - lVar26 == 0x18) {
              ppplStack_3c0 = (long ***)0x0;
              uStack_3d0 = (long ****)CONCAT44(uStack_3d0._4_4_,0x8103000c);
              pppplStack_3c8 = pppplVar36;
              FUN_109b408b4(&pppplStack_420,&uStack_3d0);
              fVar31 = ABS(uStack_418._4_4_ / (float)uStack_418 + -1.0);
              if (fVar31 < fVar8) {
                uStack_348 = CONCAT44(uStack_348._4_4_,iVar41);
                dStack_350 = unaff_d8;
                fVar8 = fVar31;
              }
              lVar26 = CONCAT44(iStack_12c,uStack_130);
            }
            if (lVar26 != 0) {
              uStack_128._0_4_ = (undefined4)lVar26;
              uStack_128._4_4_ = (int)((ulong)lVar26 >> 0x20);
              __ZdlPv();
            }
          }
        }
        if ((long ****)ppplStack_4e8 != (long ****)0x0) {
          uStack_4e0._0_4_ = SUB84(ppplStack_4e8,0);
          uStack_4e0._4_4_ = (int)((ulong)ppplStack_4e8 >> 0x20);
          __ZdlPv();
        }
        ppplVar19 = (long ***)pplStack_378;
        ppplVar24 = (long ***)pplStack_380;
      }
      auVar39._0_8_ = auVar39._0_8_ + 1;
      lVar17 = lVar17 + 0x10;
      lVar22 = lVar22 + 0x18;
    } while (auVar39._0_8_ < (ulong)(((long)ppplVar19 - (long)ppplVar24 >> 3) * -0x5555555555555555)
            );
  }
  if ((ppplVar19 != ppplVar24) && ((int)uStack_348 < 0)) {
    lVar22 = 0;
    auVar39._0_8_ = 0;
    fVar8 = 1e+07;
    lVar17 = 0xc;
    unaff_d8 = 0.1;
    do {
      ppppplVar11 = (long *****)((long)ppplVar24 + lVar22);
      if ((0x640 < (ulong)((long)ppppplVar11[1] - (long)*ppppplVar11)) &&
         (*(int *)((long)pplStack_368 + lVar17) != -1)) {
        ppplStack_4e8 = (long ***)0x0;
        uStack_4e0._0_4_ = 0;
        uStack_4e0._4_4_ = 0;
        uStack_4d8 = 0;
        uStack_4d4 = 0;
        uStack_128._0_4_ = 0;
        uStack_128._4_4_ = 0;
        uStack_130 = 0;
        iStack_12c = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        ppplStack_3c0 = (long ***)0x0;
        uStack_3d0._0_4_ = 0x8103000c;
        pppplStack_420._0_4_ = 0x82030004;
        uStack_418 = (long *****)&ppplStack_4e8;
        pppplStack_410 = (long ****)0x0;
        pppplStack_3c8 = (long ****)ppppplVar11;
        FUN_109ae2358(&uStack_3d0,&pppplStack_420,0,1);
        ppplStack_3c0 = (long ***)0x0;
        uStack_3d0 = (long ****)CONCAT44(uStack_3d0._4_4_,0x8103000c);
        pppplStack_420._0_4_ = 0x8203000c;
        pppplStack_410 = (long ****)0x0;
        uStack_418 = (long *****)&uStack_130;
        pppplStack_3c8 = (long ****)ppppplVar11;
        FUN_109ae2358(&uStack_3d0,&pppplStack_420,0,1);
        uStack_3d0 = (long ****)0x0;
        pppplStack_3c8 = (long ****)0x0;
        ppplStack_3c0 = (long ***)0x0;
        pppplStack_410 = (long ****)0x0;
        pppplStack_420._0_4_ = 0x8103000c;
        uStack_418 = (long *****)&uStack_130;
        dVar33 = (double)FUN_109b4131c(&pppplStack_420,1);
        pppplStack_410 = (long ****)0x0;
        pppplStack_420 = (long ****)CONCAT44(pppplStack_420._4_4_,0x8103000c);
        pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,0x8203000c);
        pppplStack_b0 = (long ****)&uStack_3d0;
        pppplStack_a8 = (long ****)0x0;
        uStack_418 = (long *****)&uStack_130;
        FUN_109ac7338(dVar33 * 0.1,&pppplStack_420,&pppplStack_b8,1);
        if (((long)pppplStack_3c8 - (long)uStack_3d0 >> 3) - 3U < 2) {
          pppplStack_420 = (long ****)0x0;
          uStack_418 = (long *****)0x0;
          pppplStack_410 = (long ****)0x0;
          pppplStack_a8 = (long ****)0x0;
          pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,0x8103000c);
          uStack_c0 = 0;
          iStack_d0 = -0x7efcfffc;
          uStack_c8 = (undefined8 *****)&ppplStack_4e8;
          auStack_2a8[0] = 0x8203001c;
          uStack_298 = 0;
          pppplStack_2a0 = (long ****)&pppplStack_420;
          pppplStack_b0 = (long ****)ppppplVar11;
          FUN_109ae3148(&pppplStack_b8,&iStack_d0,auStack_2a8);
          if (0xffffffffffffffec < ((long)uStack_418 - (long)pppplStack_420 >> 4) - 0x1eU) {
            pppplStack_a8 = (long ****)0x0;
            pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,0x8103000c);
            pppplStack_b0 = (long ****)&uStack_130;
            FUN_109b408b4(&iStack_d0,&pppplStack_b8);
            fVar31 = ABS(uStack_c8._4_4_ / (float)uStack_c8 + -1.0);
            if (fVar31 < fVar8) {
              uStack_348 = CONCAT44(uStack_348._4_4_,(int)auVar39._0_8_);
              pppplStack_a8 = (long ****)0x0;
              pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,0x8103000c);
              pppplStack_b0 = (long ****)&uStack_130;
              dStack_350 = (double)FUN_109b415b4(&pppplStack_b8,0);
              dStack_350 = dStack_350 * 0.9;
              fVar8 = fVar31;
            }
          }
          if ((long *****)pppplStack_420 != (long *****)0x0) {
            uStack_418 = (long *****)pppplStack_420;
            __ZdlPv();
          }
        }
        if (uStack_3d0 != (long ****)0x0) {
          pppplStack_3c8 = uStack_3d0;
          __ZdlPv();
        }
        if (CONCAT44(iStack_12c,uStack_130) != 0) {
          uStack_128._0_4_ = uStack_130;
          uStack_128._4_4_ = iStack_12c;
          __ZdlPv();
        }
        if ((long ****)ppplStack_4e8 != (long ****)0x0) {
          uStack_4e0._0_4_ = SUB84(ppplStack_4e8,0);
          uStack_4e0._4_4_ = (int)((ulong)ppplStack_4e8 >> 0x20);
          __ZdlPv();
        }
        ppplVar19 = (long ***)pplStack_378;
        ppplVar24 = (long ***)pplStack_380;
      }
      auVar39._0_8_ = auVar39._0_8_ + 1;
      lVar17 = lVar17 + 0x10;
      lVar22 = lVar22 + 0x18;
    } while (auVar39._0_8_ < (ulong)(((long)ppplVar19 - (long)ppplVar24 >> 3) * -0x5555555555555555)
            );
  }
  if (lStack_258 != 0) {
    piVar29 = (int *)(lStack_258 + 0x14);
    do {
      iVar41 = *piVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar7) {
        *piVar29 = iVar41 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar41 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < uStack_290._4_4_) {
    lVar17 = 0;
    do {
      piStack_250[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_290._4_4_);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  uStack_3d0 = (long ****)((ulong)uStack_3d0 & 0xffffffffffffff00);
  ppplStack_3c0 = (long ***)0x0;
  pppplStack_3c8 = (long ****)0x0;
  puStack_3b0 = (undefined8 *)0x0;
  uStack_3b8 = 0;
  uStack_3a0 = 0;
  puStack_3a8 = (undefined8 *)0x0;
  puStack_390 = (undefined8 *)0x0;
  puStack_398 = (undefined8 *)0x0;
  uStack_388 = 0;
  iVar41 = (int)uStack_348;
  if ((int)uStack_348 < 0) {
    bVar7 = false;
    iVar43 = 0;
    iVar41 = 0;
    *(undefined1 *)(param_4 + 1) = 0;
LAB_1092dd4e0:
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    ppppuStack_3f8 = (undefined8 *****)0x0;
    ppppuStack_400 = (undefined8 *****)0x0;
    ppppuStack_408 = (undefined8 *****)0x0;
    pppplStack_410 = (long ****)0x0;
    uStack_418 = (long *****)0x0;
    pppplStack_420 = (long ****)0x0;
LAB_1092dd4f4:
    uStack_290._4_4_ = 0x43260000;
    uStack_290._0_4_ = 0x42e80000;
    pppppuVar12 = &ppppuStack_408;
    FUN_1092de294(pppppuVar12,&uStack_290);
  }
  else {
    uStack_288._0_4_ = 0;
    uStack_288._4_4_ = 0;
    uStack_290._0_4_ = 0;
    uStack_290._4_4_ = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    pplVar3 = (long **)pplStack_380[(uStack_348 & 0xffffffff) * 3];
    pplVar4 = (long **)(pplStack_380 + (uStack_348 & 0xffffffff) * 3)[1];
    FUN_1092c9014(&uStack_290,pplVar3,pplVar4,(long)pplVar4 - (long)pplVar3 >> 3);
    ppplStack_4e8 = (long ***)0x0;
    uStack_4e0._0_4_ = 0;
    uStack_4e0._4_4_ = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    uStack_128._0_4_ = 0;
    uStack_128._4_4_ = 0;
    uStack_130 = 0;
    iStack_12c = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    pppplStack_410 = (long ****)0x0;
    pppplStack_420._0_4_ = 0x8103000c;
    pppplStack_b8._0_4_ = 0x82030004;
    pppplStack_a8 = (long ****)0x0;
    uStack_418 = (long *****)&uStack_290;
    pppplStack_b0 = &ppplStack_4e8;
    FUN_109ae2358(&pppplStack_420,&pppplStack_b8,0,1);
    pppplStack_410 = (long ****)0x0;
    pppplStack_420 = (long ****)CONCAT44(pppplStack_420._4_4_,0x8103000c);
    uStack_418 = (long *****)&uStack_290;
    pppplStack_a8 = (long ****)0x0;
    pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,0x81030004);
    iStack_d0 = -0x7dfcffe4;
    uStack_c8 = (undefined8 *****)&uStack_130;
    uStack_c0 = 0;
    pppplStack_b0 = &ppplStack_4e8;
    FUN_109ae3148(&pppplStack_420,&pppplStack_b8,&iStack_d0);
    lVar22 = CONCAT44(uStack_128._4_4_,(undefined4)uStack_128);
    lVar17 = CONCAT44(iStack_12c,uStack_130);
    if ((lVar22 - lVar17 >> 4) - 0x13U < 0x10) {
      pppplStack_420 = (long ****)0x0;
      uStack_418 = (long *****)0x0;
      pppplStack_410 = (long ****)0x0;
      pppplStack_b8 = (long ****)0x0;
      pppplStack_b0 = (long ****)0x0;
      pppplStack_a8 = (long ****)0x0;
      if (lVar22 != lVar17) {
        lVar26 = 0;
        auVar39._0_8_ = 0;
        unaff_d8 = 360.0;
        do {
          if (1000 < *(int *)(lVar17 + lVar26 + 0xc)) {
            piVar29 = (int *)(CONCAT44(uStack_290._4_4_,(int)uStack_290) +
                             (long)*(int *)(lVar17 + lVar26 + 8) * 8);
            iVar44 = *piVar29;
            iVar5 = piVar29[1];
            iVar43 = piVar29[4];
            iVar42 = piVar29[5];
            iStack_d0 = iVar44;
            iStack_cc = iVar5;
            dVar33 = (double)_atan2((double)(iVar5 - piVar29[-3]),
                                    SUB84((double)(iVar44 - piVar29[-4]),0));
            dVar34 = (double)_atan2((double)(iVar5 - iVar42),SUB84((double)(iVar44 - iVar43),0));
            dVar35 = (dVar33 * 180.0) / 3.141592653589793;
            dVar34 = (dVar34 * 180.0) / 3.141592653589793;
            dVar35 = (double)((ulong)dVar35 ^
                             ((ulong)dVar35 ^ (ulong)(dVar35 + 360.0)) & -(ulong)(dVar35 < 0.0));
            dVar34 = (double)((ulong)dVar34 ^
                             ((ulong)dVar34 ^ (ulong)(dVar34 + 360.0)) & -(ulong)(dVar34 < 0.0));
            dVar33 = dVar35 - dVar34;
            if (dVar35 <= dVar34) {
              dVar33 = dVar34 - dVar35;
            }
            dVar34 = 360.0 - dVar33;
            if (dVar33 <= 180.0) {
              dVar34 = dVar33;
            }
            if (130.0 <= dVar34) {
              if (pppplStack_b0 < pppplStack_a8) {
                *(int *)pppplStack_b0 = iVar44;
                *(int *)((long)pppplStack_b0 + 4) = iVar5;
                pppplStack_b0 = pppplStack_b0 + 1;
              }
              else {
                ppppplVar11 = &pppplStack_b8;
                FUN_1092c78ec(ppppplVar11,&iStack_d0);
                pppplStack_b0 = (long ****)ppppplVar11;
              }
            }
            else if (uStack_418 < pppplStack_410) {
              *(int *)uStack_418 = iVar44;
              *(int *)((long)uStack_418 + 4) = iVar5;
              uStack_418 = uStack_418 + 1;
            }
            else {
              ppppplVar11 = &pppplStack_420;
              FUN_1092c78ec(ppppplVar11,&iStack_d0);
              uStack_418 = ppppplVar11;
            }
            lVar22 = CONCAT44(uStack_128._4_4_,(undefined4)uStack_128);
            lVar17 = CONCAT44(iStack_12c,uStack_130);
          }
          auVar39._0_8_ = auVar39._0_8_ + 1;
          lVar26 = lVar26 + 0x10;
        } while (auVar39._0_8_ < (ulong)(lVar22 - lVar17 >> 4));
      }
      if (((long)pppplStack_b0 - (long)pppplStack_b8 == 0x20) &&
         ((long)uStack_418 - (long)pppplStack_420 == 0x20)) {
        uStack_3d0 = (long ****)CONCAT71(uStack_3d0._1_7_,1);
        uStack_3d0 = (long ****)CONCAT44(iVar41,(undefined4)uStack_3d0);
        FUN_1092c6040(&pppplStack_3c8,CONCAT44(uStack_290._4_4_,(int)uStack_290),
                      CONCAT44(uStack_288._4_4_,(int)uStack_288),
                      CONCAT44(uStack_288._4_4_,(int)uStack_288) -
                      CONCAT44(uStack_290._4_4_,(int)uStack_290) >> 3);
        FUN_1092c6040(&puStack_3b0,pppplStack_420,uStack_418,
                      (long)uStack_418 - (long)pppplStack_420 >> 3);
        FUN_1092c6040(&puStack_398,pppplStack_b8,pppplStack_b0,
                      (long)pppplStack_b0 - (long)pppplStack_b8 >> 3);
      }
      if ((long *****)pppplStack_b8 != (long *****)0x0) {
        pppplStack_b0 = pppplStack_b8;
        __ZdlPv();
      }
      if ((long *****)pppplStack_420 != (long *****)0x0) {
        uStack_418 = (long *****)pppplStack_420;
        __ZdlPv();
      }
      lVar17 = CONCAT44(iStack_12c,uStack_130);
    }
    if (lVar17 != 0) {
      uStack_128._0_4_ = (undefined4)lVar17;
      uStack_128._4_4_ = (int)((ulong)lVar17 >> 0x20);
      __ZdlPv();
    }
    if ((long ****)ppplStack_4e8 != (long ****)0x0) {
      uStack_4e0._0_4_ = SUB84(ppplStack_4e8,0);
      uStack_4e0._4_4_ = (int)((ulong)ppplStack_4e8 >> 0x20);
      __ZdlPv();
    }
    if (CONCAT44(uStack_290._4_4_,(int)uStack_290) != 0) {
      uStack_288._0_4_ = (int)uStack_290;
      uStack_288._4_4_ = uStack_290._4_4_;
      __ZdlPv();
    }
    *(undefined1 *)(param_4 + 1) = (undefined1)uStack_3d0;
    if (((ulong)uStack_3d0 & 1) == 0) {
      iVar41 = 0;
      iVar43 = 0;
      bVar7 = false;
      puVar23 = puStack_3a8;
      puVar18 = puStack_3b0;
    }
    else {
      uStack_4d8 = 0;
      uStack_4d4 = 0;
      ppplStack_4e8 = (long ***)CONCAT44(ppplStack_4e8._4_4_,0x8103000c);
      uStack_4e0 = &pppplStack_3c8;
      FUN_109b2f34c(&uStack_290,&ppplStack_4e8,0);
      puVar23 = puStack_3a8;
      puVar18 = puStack_3b0;
      if ((long)puStack_3a8 - (long)puStack_3b0 == 0) {
        auVar39 = ZEXT216(0);
        iVar42 = 0;
        iVar44 = 0;
      }
      else {
        lVar22 = (long)puStack_3a8 - (long)puStack_3b0 >> 3;
        iVar41 = 0;
        iVar43 = 0;
        puVar20 = puStack_3b0;
        lVar17 = lVar22;
        do {
          iVar41 = (int)*puVar20 + iVar41;
          iVar43 = (int)((ulong)*puVar20 >> 0x20) + iVar43;
          lVar17 = lVar17 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar17 != 0);
        puVar20 = puStack_3b0;
        auVar38 = ZEXT216(0);
        do {
          auVar39._0_4_ = (int)*puVar20 + auVar38._0_4_;
          auVar39._4_4_ = (int)((ulong)*puVar20 >> 0x20) + auVar38._4_4_;
          auVar39._8_8_ = 0;
          lVar22 = lVar22 + -1;
          puVar20 = puVar20 + 1;
          auVar38 = auVar39;
        } while (lVar22 != 0);
        iVar42 = -((int)(iVar41 + (-(uint)(iVar41 < 0) >> 0x1e)) >> 2);
        iVar44 = -((int)(iVar43 + (-(uint)(iVar43 < 0) >> 0x1e)) >> 2);
      }
      iVar43 = (int)((double)CONCAT44(uStack_288._4_4_,(int)uStack_288) /
                    (double)CONCAT44(uStack_290._4_4_,(int)uStack_290));
      iVar41 = (int)((double)CONCAT44(uStack_27c,uStack_280) /
                    (double)CONCAT44(uStack_290._4_4_,(int)uStack_290));
      if ((long)puStack_390 - (long)puStack_398 != 0) {
        lVar17 = (long)puStack_390 - (long)puStack_398 >> 3;
        puVar20 = puStack_398;
        do {
          auVar39._0_8_ =
               CONCAT44((int)((ulong)*puVar20 >> 0x20) + auVar39._4_4_,(int)*puVar20 + auVar39._0_4_
                       );
          auVar39._8_8_ = 0;
          lVar17 = lVar17 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar17 != 0);
      }
      iVar32 = (int)auVar39._0_8_;
      iVar5 = iVar32 + 7;
      if (-1 < iVar32) {
        iVar5 = iVar32;
      }
      iVar40 = (int)(auVar39._0_8_ >> 0x20);
      iVar32 = iVar40 + 7;
      if (-1 < (long)auVar39._0_8_) {
        iVar32 = iVar40;
      }
      dVar33 = (double)_atan2((double)(iVar44 + iVar41),SUB84((double)(iVar42 + iVar43),0));
      dVar34 = (double)_atan2((double)(iVar41 - (iVar32 >> 3)),
                              SUB84((double)(iVar43 - (iVar5 >> 3)),0));
      dVar35 = (dVar33 * 180.0) / 3.141592653589793;
      dVar33 = (dVar34 * 180.0) / 3.141592653589793;
      dVar35 = (double)((ulong)dVar35 ^
                       ((ulong)dVar35 ^ (ulong)(dVar35 + 360.0)) & -(ulong)(dVar35 < 0.0));
      unaff_d8 = (double)((ulong)dVar33 ^
                         ((ulong)dVar33 ^ (ulong)(dVar33 + 360.0)) & -(ulong)(dVar33 < 0.0));
      dVar33 = dVar35 - unaff_d8;
      if (dVar35 <= unaff_d8) {
        dVar33 = unaff_d8 - dVar35;
      }
      dVar34 = 360.0 - dVar33;
      if (dVar33 <= 180.0) {
        dVar34 = dVar33;
      }
      if (5.0 <= dVar34) {
        iVar41 = 0;
        iVar43 = 0;
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    ppppuStack_3f8 = (undefined8 *****)0x0;
    ppppuStack_400 = (undefined8 *****)0x0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_418 = (long *****)0x0;
    pppplStack_420 = (long ****)0x0;
    ppppuStack_408 = (undefined8 *****)0x0;
    pppplStack_410 = (long ****)0x0;
    if (puVar23 == puVar18) goto LAB_1092dd4e0;
    auVar39._0_8_ = 0;
    do {
      pppplVar36 = (long ****)NEON_scvtf(puVar18[auVar39._0_8_],4);
      uStack_290._0_4_ = (int)pppplVar36;
      uStack_290._4_4_ = (int)((ulong)pppplVar36 >> 0x20);
      if (uStack_418 < pppplStack_410) {
        ppppplVar11 = uStack_418 + 1;
        *uStack_418 = pppplVar36;
      }
      else {
        ppppplVar11 = &pppplStack_420;
        FUN_1092de294(ppppplVar11,&uStack_290);
        puVar23 = puStack_3a8;
        puVar18 = puStack_3b0;
      }
      auVar39._0_8_ = auVar39._0_8_ + 1;
      uStack_418 = ppppplVar11;
    } while (auVar39._0_8_ < (ulong)((long)puVar23 - (long)puVar18 >> 3));
    if (ppppuStack_3f8 <= ppppuStack_400) goto LAB_1092dd4f4;
    pppppuVar12 = (undefined8 *****)(ppppuStack_400 + 1);
    *ppppuStack_400 = (undefined8 ****)0x4326000042e80000;
  }
  pppppuVar14 = (undefined8 *****)ppppuStack_3f8;
  uStack_290._0_4_ = 0x43820000;
  uStack_290._4_4_ = 0x43260000;
  if (pppppuVar12 < ppppuStack_3f8) {
    pppppuVar13 = pppppuVar12 + 1;
    *pppppuVar12 = (undefined8 ****)0x4326000043820000;
  }
  else {
    pppppuVar13 = &ppppuStack_408;
    ppppuStack_400 = pppppuVar12;
    FUN_1092de294(&ppppuStack_408,&uStack_290);
    pppppuVar14 = (undefined8 *****)ppppuStack_3f8;
  }
  uStack_290._0_4_ = 0x42b60000;
  uStack_290._4_4_ = 0x438d0000;
  if (pppppuVar13 < pppppuVar14) {
    pppppuVar12 = pppppuVar13 + 1;
    *pppppuVar13 = (undefined8 ****)0x438d000042b60000;
  }
  else {
    pppppuVar12 = &ppppuStack_408;
    ppppuStack_400 = pppppuVar13;
    FUN_1092de294(&ppppuStack_408,&uStack_290);
    pppppuVar14 = (undefined8 *****)ppppuStack_3f8;
  }
  uStack_290._0_4_ = 0x438f0000;
  uStack_290._4_4_ = 0x438d0000;
  if (pppppuVar12 < pppppuVar14) {
    pppppuVar14 = pppppuVar12 + 1;
    *pppppuVar12 = (undefined8 ****)0x438d0000438f0000;
  }
  else {
    pppppuVar14 = &ppppuStack_408;
    ppppuStack_400 = pppppuVar12;
    FUN_1092de294(&ppppuStack_408,&uStack_290);
  }
  uStack_3d8 = 0x17c;
  ppplStack_4e8 = (long ***)((ulong)ppplStack_4e8 & 0xffffffffffffff00);
  uStack_4e0._0_4_ = 0x42ff0000;
  puStack_4a0 = &uStack_4d8;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4e0._4_4_ = 0;
  uStack_4d8 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4b4 = 0;
  uStack_4bc = 0;
  uStack_4b8 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  puStack_498 = &uStack_490;
  uStack_490 = 0;
  uStack_488 = 0;
  iStack_480 = 0x42ff0000;
  uStack_474 = 0;
  uStack_470 = 0;
  iStack_47c = 0;
  iStack_478 = 0;
  uStack_464 = 0;
  uStack_460 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  uStack_454 = 0;
  uStack_45c = 0;
  uStack_458 = 0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  piStack_440 = &iStack_478;
  puStack_438 = &uStack_430;
  ppppuStack_400 = pppppuVar14;
  dStack_3e0 = unaff_d8;
  uStack_3f0._0_4_ = iVar43;
  uStack_3f0._4_4_ = iVar41;
  if (!bVar7) goto LAB_1092dddd4;
  pppplStack_b8 = (long ****)0x0;
  pppplStack_b0 = (long ****)0x0;
  pppplStack_a8 = (long ****)0x0;
  if (uStack_418 == (long *****)pppplStack_420) {
    piVar30 = (int *)0x0;
    piVar29 = (int *)0x0;
  }
  else {
    piVar27 = (int *)0x0;
    piVar30 = (int *)0x0;
    auVar39._0_8_ = 0;
    piVar28 = (int *)0x0;
    ppppplVar11 = uStack_418;
    ppppplVar15 = (long *****)pppplStack_420;
    do {
      dVar33 = dStack_3e0;
      iVar42 = (int)(long)(float)(int)*(float *)((long)(ppppplVar15 + auVar39._0_8_) + 4);
      iVar43 = (int)(long)(float)(int)*(float *)(ppppplVar15 + auVar39._0_8_);
      dVar34 = (double)_atan2((double)(uStack_3f0._4_4_ - iVar42),
                              SUB84((double)((int)uStack_3f0 - iVar43),0));
      iVar41 = (int)(dVar33 + (dVar34 * -180.0) / 3.141592653589793 + 360.0) % 0x168;
      if (piVar30 < piVar27) {
        *piVar30 = iVar41;
        piVar30[1] = iVar43;
        piVar30[2] = iVar42;
        piVar29 = piVar28;
        piVar2 = piVar30;
      }
      else {
        lVar17 = (long)piVar30 - (long)piVar28;
        uVar21 = (lVar17 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar21) {
          FUN_1092de39c();
LAB_1092ddf3c:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1092ddf40);
          (*pcVar10)();
        }
        lVar22 = (long)piVar27 - (long)piVar28 >> 2;
        uVar25 = lVar22 * 0x5555555555555556;
        if (uVar25 < uVar21 || uVar25 - uVar21 == 0) {
          uVar25 = uVar21;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
          uVar25 = 0x1555555555555555;
        }
        if (uVar25 == 0) {
          lVar22 = 0;
        }
        else {
          if (0x1555555555555555 < uVar25) {
            func_0x000104c4f740();
            goto LAB_1092ddf3c;
          }
          lVar22 = uVar25 * 0xc;
          __Znwm();
        }
        piVar2 = (int *)(lVar22 + lVar17);
        *piVar2 = iVar41;
        piVar2[1] = iVar43;
        piVar2[2] = iVar42;
        uVar21 = SUB168(SEXT816(lVar17) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        piVar29 = piVar2 + ((uVar21 >> 1) - ((long)uVar21 >> 0x3f)) * 3;
        piVar1 = piVar29;
        for (piVar27 = piVar28; piVar27 != piVar30; piVar27 = piVar27 + 3) {
          *(undefined8 *)piVar1 = *(undefined8 *)piVar27;
          piVar1[2] = piVar27[2];
          piVar1 = piVar1 + 3;
        }
        piVar27 = (int *)(lVar22 + uVar25 * 0xc);
        if (piVar28 != (int *)0x0) {
          __ZdlPv(piVar28);
          ppppplVar11 = uStack_418;
          ppppplVar15 = (long *****)pppplStack_420;
        }
      }
      piVar30 = piVar2 + 3;
      auVar39._0_8_ = auVar39._0_8_ + 1;
      piVar28 = piVar29;
    } while (auVar39._0_8_ < (ulong)((long)ppppplVar11 - (long)ppppplVar15 >> 3));
  }
  lVar17 = 0;
  if (piVar30 != piVar29) {
    lVar17 = LZCOUNT(((long)piVar30 - (long)piVar29 >> 2) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_1092de3b0(piVar29,piVar30,lVar17,1);
  if ((long)piVar30 - (long)piVar29 == 0x30) {
    uVar37 = NEON_scvtf(*(undefined8 *)(piVar29 + 7),4);
    uStack_290._0_4_ = (int)uVar37;
    uStack_290._4_4_ = (int)((ulong)uVar37 >> 0x20);
    ppppplVar15 = &pppplStack_b8;
    FUN_1092de294(ppppplVar15,&uStack_290);
    ppppplVar11 = (long *****)pppplStack_a8;
    pppplVar36 = (long ****)NEON_scvtf(*(undefined8 *)(piVar29 + 4),4);
    uStack_290._0_4_ = (int)pppplVar36;
    uStack_290._4_4_ = (int)((ulong)pppplVar36 >> 0x20);
    if (ppppplVar15 < pppplStack_a8) {
      ppppplVar16 = ppppplVar15 + 1;
      *ppppplVar15 = pppplVar36;
    }
    else {
      ppppplVar16 = &pppplStack_b8;
      pppplStack_b0 = (long ****)ppppplVar15;
      FUN_1092de294(ppppplVar16,&uStack_290);
      ppppplVar11 = (long *****)pppplStack_a8;
    }
    pppplVar36 = (long ****)NEON_scvtf(*(undefined8 *)(piVar29 + 10),4);
    uStack_290._0_4_ = (int)pppplVar36;
    uStack_290._4_4_ = (int)((ulong)pppplVar36 >> 0x20);
    if (ppppplVar16 < ppppplVar11) {
      ppppplVar15 = ppppplVar16 + 1;
      *ppppplVar16 = pppplVar36;
    }
    else {
      ppppplVar15 = &pppplStack_b8;
      pppplStack_b0 = (long ****)ppppplVar16;
      FUN_1092de294(ppppplVar15,&uStack_290);
      ppppplVar11 = (long *****)pppplStack_a8;
    }
    pppplVar36 = (long ****)NEON_scvtf(*(undefined8 *)(piVar29 + 1),4);
    uStack_290._0_4_ = (int)pppplVar36;
    uStack_290._4_4_ = (int)((ulong)pppplVar36 >> 0x20);
    if (ppppplVar15 < ppppplVar11) {
      ppppplVar11 = ppppplVar15 + 1;
      *ppppplVar15 = pppplVar36;
    }
    else {
      ppppplVar11 = &pppplStack_b8;
      pppplStack_b0 = (long ****)ppppplVar15;
      FUN_1092de294(ppppplVar11,&uStack_290);
    }
    pppplStack_b0 = (long ****)ppppplVar11;
    __ZdlPv(piVar29);
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_130 = 0x8103000d;
    uStack_128 = &pppplStack_b8;
    uStack_c0 = 0;
    iStack_d0 = -0x7efcfff3;
    uStack_c8 = &ppppuStack_408;
    FUN_109b1fb0c(&uStack_290,&uStack_130,&iStack_d0);
    ppppplVar11 = uStack_128;
    if (lStack_448 != 0) {
      piVar29 = (int *)(lStack_448 + 0x14);
      do {
        iVar41 = *piVar29;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = iVar41 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar41 + -1 == 0) {
        func_0x000109a848d4(&iStack_480);
        ppppplVar11 = uStack_128;
      }
    }
    if (0 < iStack_47c) {
      lVar17 = 0;
      do {
        piStack_440[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_47c);
    }
    iStack_478 = (int)uStack_288;
    uStack_474 = uStack_288._4_4_;
    iStack_480 = (int)uStack_290;
    iStack_47c = uStack_290._4_4_;
    uStack_468 = uStack_278;
    uStack_464 = uStack_274;
    uStack_470 = uStack_280;
    uStack_46c = uStack_27c;
    uStack_458 = uStack_268;
    uStack_454 = uStack_264;
    uStack_460 = uStack_270;
    uStack_45c = uStack_26c;
    lStack_448 = lStack_258;
    uStack_450 = uStack_260;
    uStack_44c = uStack_25c;
    piVar29 = piStack_440;
    puVar18 = puStack_438;
    uStack_128 = ppppplVar11;
    if ((puStack_438 != &uStack_430) &&
       (piVar29 = &iStack_478, puVar18 = &uStack_430, puStack_438 != (undefined8 *)0x0)) {
      _free(puStack_438[-1]);
    }
    puStack_438 = puVar18;
    piStack_440 = piVar29;
    if (uStack_290._4_4_ < 3) {
      puVar18 = (undefined8 *)((ulong)&uStack_290 | 4);
      *puStack_438 = *puStack_248;
      puStack_438[1] = puStack_248[1];
      uStack_290._0_4_ = 0x42ff0000;
      puVar18[1] = 0;
      *puVar18 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[5] = 0;
      puVar18[4] = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      if (puStack_248 != &uStack_240) {
        _free(puStack_248[-1]);
      }
    }
    else {
      piStack_440 = piStack_250;
      puStack_438 = puStack_248;
    }
    FUN_109a8261c(&uStack_290,uStack_3d8,uStack_3d8,0x10);
    uStack_130 = 0x42ff0000;
    puStack_f0 = &uStack_128;
    uStack_128._4_4_ = 0;
    uStack_120 = 0;
    iStack_12c = 0;
    uStack_128._0_4_ = 0;
    lStack_f8 = 0;
    uStack_fc = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    puStack_e8 = &uStack_e0;
    (**(code **)(*(long *)CONCAT44(uStack_290._4_4_,(int)uStack_290) + 0x18))
              ((long *)CONCAT44(uStack_290._4_4_,(int)uStack_290),&uStack_290,&uStack_130,0xffffffff
              );
    FUN_10918eb6c(&uStack_290);
    uStack_c0 = 0;
    iStack_d0 = 0x1010000;
    uStack_c8 = (undefined8 *****)auStack_338;
    auStack_2a8[0] = 0x2010000;
    uStack_298 = 0;
    uStack_2b0 = 0;
    auStack_2c0[0] = 0x1010000;
    uStack_2c8 = NEON_rev64(*puStack_f0,4);
    uStack_288._0_4_ = 0;
    uStack_288._4_4_ = 0;
    uStack_290._0_4_ = 0;
    uStack_290._4_4_ = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    piStack_2b8 = &iStack_480;
    pppplStack_2a0 = (long ****)&uStack_130;
    FUN_109b1eb58(&iStack_d0,auStack_2a8,auStack_2c0,&uStack_2c8,1,0,&uStack_290);
    ppplStack_4e8 = (long ***)CONCAT71(ppplStack_4e8._1_7_,1);
    if (lStack_f8 != 0) {
      piVar29 = (int *)(lStack_f8 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = *piVar29 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (lStack_4a8 != 0) {
      piVar29 = (int *)(lStack_4a8 + 0x14);
      do {
        iVar41 = *piVar29;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = iVar41 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar41 + -1 == 0) {
        func_0x000109a848d4(&uStack_4e0);
      }
    }
    puVar18 = puStack_e8;
    lStack_4a8 = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4b8 = 0;
    uStack_4b4 = 0;
    uStack_4c0 = 0;
    uStack_4bc = 0;
    if (uStack_4e0._4_4_ < 1) {
LAB_1092ddbc4:
      uStack_4e0._0_4_ = uStack_130;
      if (2 < iStack_12c) goto LAB_1092ddbf8;
      uStack_4e0._4_4_ = iStack_12c;
      uStack_4d8 = (undefined4)uStack_128;
      uStack_4d4 = uStack_128._4_4_;
      *puStack_498 = *puStack_e8;
      puStack_498[1] = puVar18[1];
    }
    else {
      lVar17 = 0;
      do {
        puStack_4a0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_4e0._4_4_);
      if (uStack_4e0._4_4_ < 3) goto LAB_1092ddbc4;
LAB_1092ddbf8:
      uStack_4e0._0_4_ = uStack_130;
      func_0x000109a84868(&uStack_4e0,&uStack_130);
    }
    uStack_4c8 = uStack_118;
    uStack_4c4 = uStack_114;
    uStack_4d0 = uStack_120;
    uStack_4cc = uStack_11c;
    uStack_4b8 = uStack_108;
    uStack_4b4 = uStack_104;
    uStack_4c0 = uStack_110;
    uStack_4bc = uStack_10c;
    lStack_4a8 = lStack_f8;
    uStack_4b0 = uStack_100;
    uStack_4ac = uStack_fc;
    if (lStack_f8 != 0) {
      piVar29 = (int *)(lStack_f8 + 0x14);
      do {
        iVar41 = *piVar29;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = iVar41 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar41 + -1 == 0) {
        func_0x000109a848d4(&uStack_130);
      }
    }
    lStack_f8 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    if (0 < iStack_12c) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_f0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_12c);
    }
    uStack_128 = (long *****)CONCAT44(uStack_128._4_4_,(undefined4)uStack_128);
    if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
      _free(puStack_e8[-1]);
    }
  }
  else if (piVar29 != (int *)0x0) {
    __ZdlPv(piVar29);
  }
  if ((long *****)pppplStack_b8 != (long *****)0x0) {
    pppplStack_b0 = pppplStack_b8;
    __ZdlPv();
  }
  if ((char)ppplStack_4e8 == '\x01') {
    uStack_290._0_4_ = 0;
    uStack_290._4_4_ = 0;
    FUN_1092dbe44();
    uStack_550 = *(ulong *)(param_1 + 8);
    uStack_548 = *(undefined8 *)(param_1 + 0x10);
    uStack_510 = (ulong)&uStack_550 | 8;
    iVar41 = *(int *)(param_1 + 0xc);
    uStack_538 = *(undefined8 *)(param_1 + 0x20);
    uStack_540 = *(undefined8 *)(param_1 + 0x18);
    uStack_530 = *(undefined8 *)(param_1 + 0x28);
    uStack_528 = *(undefined8 *)(param_1 + 0x30);
    lStack_518 = *(long *)(param_1 + 0x40);
    uStack_520 = *(undefined8 *)(param_1 + 0x38);
    uStack_500 = 0;
    uStack_4f8 = 0;
    if (*(long *)(param_1 + 0x40) != 0) {
      piVar29 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = *piVar29 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      iVar41 = *(int *)(param_1 + 0xc);
    }
    puStack_508 = &uStack_500;
    if (iVar41 < 3) {
      uStack_500 = **(undefined8 **)(param_1 + 0x50);
      uStack_4f8 = (*(undefined8 **)(param_1 + 0x50))[1];
    }
    else {
      uStack_550 = uStack_550 & 0xffffffff;
      func_0x000109a84868(&uStack_550,param_1 + 8);
    }
    FUN_1092e2c84(&uStack_550,param_4,0);
    if (lStack_518 != 0) {
      piVar29 = (int *)(lStack_518 + 0x14);
      do {
        iVar41 = *piVar29;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar7) {
          *piVar29 = iVar41 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar41 + -1 == 0) {
        func_0x000109a848d4(&uStack_550);
      }
    }
    lStack_518 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    if (0 < uStack_550._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(uStack_510 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_550._4_4_);
    }
    if (puStack_508 != &uStack_500 && puStack_508 != (undefined8 *)0x0) {
      _free(puStack_508[-1]);
    }
  }
LAB_1092dddd4:
  FUN_1092df444(&ppplStack_4e8);
  if ((undefined8 *****)ppppuStack_408 != (undefined8 *****)0x0) {
    ppppuStack_400 = ppppuStack_408;
    __ZdlPv();
  }
  if ((long *****)pppplStack_420 != (long *****)0x0) {
    uStack_418 = (long *****)pppplStack_420;
    __ZdlPv();
  }
  if (puStack_398 != (undefined8 *)0x0) {
    puStack_390 = puStack_398;
    __ZdlPv();
  }
  if (puStack_3b0 != (undefined8 *)0x0) {
    puStack_3a8 = puStack_3b0;
    __ZdlPv();
  }
  if (pppplStack_3c8 != (long ****)0x0) {
    ppplStack_3c0 = (long ***)pppplStack_3c8;
    __ZdlPv();
  }
  if ((long ***)pplStack_368 != (long ***)0x0) {
    pplStack_360 = pplStack_368;
    __ZdlPv();
  }
  uStack_290 = (long ****)&pplStack_380;
  FUN_1092cc3c0(&uStack_290);
  pppplVar36 = uStack_290;
  pppplVar9 = (long ****)uStack_128;
  if (lStack_300 != 0) {
    piVar29 = (int *)(lStack_300 + 0x14);
    do {
      iVar41 = *piVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar7) {
        *piVar29 = iVar41 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar41 + -1 == 0) {
      func_0x000109a848d4(auStack_338);
      pppplVar36 = uStack_290;
      pppplVar9 = (long ****)uStack_128;
    }
  }
  lStack_300 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  if (0 < (int)auStack_338._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(puStack_2f8 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_338._4_4_);
  }
  uStack_290 = pppplVar36;
  uStack_128 = (long *****)pppplVar9;
  if (puStack_2f0 != &uStack_2e8 && puStack_2f0 != (undefined8 *)0x0) {
    _free(puStack_2f0[-1]);
  }
  ppuStack_2d8 = &PTR_FUN_110ae9f48;
  if ((plStack_2d0 != (long *)0x0) &&
     (iVar41 = (int)plStack_2d0[1] + -1, *(int *)(plStack_2d0 + 1) = iVar41, iVar41 == 0)) {
    *(undefined4 *)(plStack_2d0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_2d0 + 8))();
  }
  return;
}



/* Entry: 1092de1a8; end: 1092de27b;  */

long * FUN_1092de1a8(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092de27c; end: 1092de27f;  */

undefined8 * FUN_1092de27c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110aea258;
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 1092de280; end: 1092de293;  */

void FUN_1092de280(void)

{
  FUN_1092cc1d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092de294; end: 1092de39b;  */

int * FUN_1092de294(long *param_1,int *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar24 = param_1[1] - *param_1;
  uVar13 = (lVar24 >> 3) + 1;
  if (uVar13 >> 0x3d == 0) {
    uVar12 = param_1[2] - *param_1;
    uVar15 = (long)uVar12 >> 2;
    if (uVar15 <= uVar13) {
      uVar15 = uVar13;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar15 = 0x1fffffffffffffff;
    }
    plVar8 = param_1;
    plStack_38 = param_1;
    FUN_1092cc0a8();
    puStack_50 = (undefined8 *)((long)plVar8 + lVar24);
    plStack_40 = plVar8 + uVar15;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *(undefined8 *)param_2;
    plStack_58 = plVar8;
    FUN_1092cc028(param_1,&plStack_58);
    piVar23 = (int *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return piVar23;
  }
  FUN_1092cc094();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  piVar23 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  piVar18 = piVar23;
LAB_1092de3ec:
  do {
    piVar10 = piVar18;
    uVar15 = (long)param_2 - (long)piVar10;
    uVar13 = ((long)uVar15 >> 2) * -0x5555555555555555;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return piVar23;
      }
      if (uVar13 == 2) {
        iVar14 = *piVar10;
        if (iVar14 <= param_2[-3]) {
          return piVar23;
        }
        *piVar10 = param_2[-3];
        uVar25 = *(undefined8 *)(piVar10 + 1);
        *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar14;
        *(undefined8 *)(param_2 + -2) = uVar25;
        return piVar23;
      }
    }
    else {
      if (uVar13 == 3) {
        iVar14 = piVar10[3];
        iVar17 = *piVar10;
        iVar21 = param_2[-3];
        if (iVar14 < iVar17) {
          iVar11 = piVar10[1];
          iVar5 = piVar10[2];
          if (iVar21 < iVar14) {
            *piVar10 = iVar21;
            *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar10 = iVar14;
            *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 4);
            piVar10[3] = iVar17;
            piVar10[4] = iVar11;
            piVar10[5] = iVar5;
            if (iVar17 <= param_2[-3]) {
              return piVar23;
            }
            piVar10[3] = param_2[-3];
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(param_2 + -2);
          }
          param_2[-3] = iVar17;
          param_2[-2] = iVar11;
          param_2[-1] = iVar5;
          return piVar23;
        }
        if (iVar14 <= iVar21) {
          return piVar23;
        }
        piVar10[3] = iVar21;
        uVar25 = *(undefined8 *)(piVar10 + 4);
        *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar14;
        *(undefined8 *)(param_2 + -2) = uVar25;
        iVar14 = *piVar10;
        if (iVar14 <= piVar10[3]) {
          return piVar23;
        }
        *piVar10 = piVar10[3];
        piVar10[3] = iVar14;
        uVar25 = *(undefined8 *)(piVar10 + 1);
        *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 4);
        *(undefined8 *)(piVar10 + 4) = uVar25;
        return piVar23;
      }
      if (uVar13 == 4) {
        piVar23 = piVar10 + 3;
        piVar18 = piVar10 + 6;
        iVar14 = *piVar23;
        iVar17 = *piVar10;
        iVar21 = *piVar18;
        if (iVar14 < iVar17) {
          iVar11 = piVar10[1];
          if (iVar21 < iVar14) {
            *piVar10 = iVar21;
            *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 7);
          }
          else {
            *piVar10 = iVar14;
            *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 4);
            *piVar23 = iVar17;
            piVar10[4] = iVar11;
            piVar10[5] = piVar10[2];
            iVar21 = *piVar18;
            if (iVar17 <= iVar21) goto LAB_1092def78;
            *piVar23 = iVar21;
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar10 + 7);
          }
          *piVar18 = iVar17;
          piVar10[7] = iVar11;
          piVar10[8] = piVar10[2];
          iVar21 = iVar17;
        }
        else if (iVar21 < iVar14) {
          *piVar23 = iVar21;
          uVar25 = *(undefined8 *)(piVar10 + 4);
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar10 + 7);
          *piVar18 = iVar14;
          *(undefined8 *)(piVar10 + 7) = uVar25;
          iVar17 = *piVar10;
          iVar21 = iVar14;
          if (*piVar23 < iVar17) {
            *piVar10 = *piVar23;
            uVar25 = *(undefined8 *)(piVar10 + 1);
            *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 4);
            *piVar23 = iVar17;
            *(undefined8 *)(piVar10 + 4) = uVar25;
            iVar21 = *piVar18;
          }
        }
LAB_1092def78:
        iVar14 = param_2[-3];
        if (iVar14 < iVar21) {
          *piVar18 = iVar14;
          uVar25 = *(undefined8 *)(piVar10 + 7);
          *(undefined8 *)(piVar10 + 7) = *(undefined8 *)(param_2 + -2);
          param_2[-3] = iVar21;
          *(undefined8 *)(param_2 + -2) = uVar25;
          iVar14 = *piVar23;
          if (*piVar18 < iVar14) {
            *piVar23 = *piVar18;
            uVar25 = *(undefined8 *)(piVar10 + 4);
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar10 + 7);
            *piVar18 = iVar14;
            *(undefined8 *)(piVar10 + 7) = uVar25;
            iVar14 = *piVar10;
            if (*piVar23 < iVar14) {
              *piVar10 = *piVar23;
              uVar25 = *(undefined8 *)(piVar10 + 1);
              *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar10 + 4);
              *piVar23 = iVar14;
              *(undefined8 *)(piVar10 + 4) = uVar25;
            }
          }
        }
        return piVar10;
      }
      if (uVar13 == 5) {
        piVar23 = piVar10;
        FUN_1092deeb8(piVar10,piVar10 + 3,piVar10 + 6,piVar10 + 9);
        iVar14 = piVar10[9];
        if (iVar14 <= param_2[-3]) {
          return piVar23;
        }
        piVar10[9] = param_2[-3];
        uVar25 = *(undefined8 *)(piVar10 + 10);
        *(undefined8 *)(piVar10 + 10) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar14;
        *(undefined8 *)(param_2 + -2) = uVar25;
        iVar14 = piVar10[9];
        iVar17 = piVar10[6];
        if (iVar17 <= iVar14) {
          return piVar23;
        }
        iVar21 = piVar10[10];
        iVar11 = piVar10[0xb];
        uVar25 = *(undefined8 *)(piVar10 + 7);
        piVar10[6] = iVar14;
        piVar10[7] = iVar21;
        piVar10[8] = iVar11;
        piVar10[9] = iVar17;
        *(undefined8 *)(piVar10 + 10) = uVar25;
        iVar17 = piVar10[3];
        if (iVar17 <= iVar14) {
          return piVar23;
        }
        uVar25 = *(undefined8 *)(piVar10 + 4);
        piVar10[3] = iVar14;
        piVar10[4] = iVar21;
        piVar10[5] = iVar11;
        piVar10[6] = iVar17;
        *(undefined8 *)(piVar10 + 7) = uVar25;
        iVar17 = *piVar10;
        if (iVar17 <= iVar14) {
          return piVar23;
        }
        uVar25 = *(undefined8 *)(piVar10 + 1);
        *piVar10 = iVar14;
        piVar10[1] = iVar21;
        piVar10[2] = iVar11;
        piVar10[3] = iVar17;
        *(undefined8 *)(piVar10 + 4) = uVar25;
        return piVar23;
      }
    }
    if ((long)uVar15 < 0x120) {
      piVar18 = piVar10 + 3;
      if ((param_4 & 1) == 0) {
        if (piVar10 == param_2 || piVar18 == param_2) {
          return piVar23;
        }
        piVar9 = piVar10 + 4;
        do {
          piVar20 = piVar18;
          iVar14 = piVar10[3];
          iVar17 = *piVar10;
          if (iVar14 < iVar17) {
            uVar25 = *(undefined8 *)(piVar10 + 4);
            piVar18 = piVar9;
            do {
              piVar10 = piVar18;
              piVar10[-1] = iVar17;
              piVar18 = piVar10 + -3;
              *(undefined8 *)piVar10 = *(undefined8 *)piVar18;
              iVar17 = piVar10[-7];
            } while (iVar14 < iVar17);
            piVar10[-4] = iVar14;
            *(undefined8 *)piVar18 = uVar25;
          }
          piVar18 = piVar20 + 3;
          piVar9 = piVar9 + 3;
          piVar10 = piVar20;
        } while (piVar18 != param_2);
        return piVar23;
      }
      if (piVar10 == param_2 || piVar18 == param_2) {
        return piVar23;
      }
      lVar24 = 0;
      piVar9 = piVar10;
      do {
        piVar20 = piVar18;
        iVar14 = piVar9[3];
        iVar17 = *piVar9;
        if (iVar14 < iVar17) {
          uVar25 = *(undefined8 *)(piVar9 + 4);
          lVar7 = lVar24;
          do {
            lVar19 = lVar7;
            *(int *)((long)piVar10 + lVar19 + 0xc) = iVar17;
            *(undefined8 *)((long)piVar10 + lVar19 + 0x10) =
                 *(undefined8 *)((long)piVar10 + lVar19 + 4);
            piVar18 = piVar10;
            if (lVar19 == 0) goto LAB_1092deb70;
            iVar17 = *(int *)((long)piVar10 + lVar19 + -0xc);
            lVar7 = lVar19 + -0xc;
          } while (iVar14 < iVar17);
          piVar18 = (int *)((long)piVar10 + lVar19);
LAB_1092deb70:
          *piVar18 = iVar14;
          *(undefined8 *)(piVar18 + 1) = uVar25;
        }
        piVar18 = piVar20 + 3;
        lVar24 = lVar24 + 0xc;
        piVar9 = piVar20;
        if (piVar18 == param_2) {
          return piVar23;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar10 == param_2) {
        return piVar23;
      }
      uVar16 = uVar13 - 2 >> 1;
      uVar12 = uVar16;
      do {
        if ((long)uVar12 <= (long)uVar16) {
          uVar2 = uVar12 << 1 | 1;
          piVar23 = piVar10 + uVar2 * 3;
          uVar22 = uVar12 * 2 + 2;
          if ((long)uVar22 < (long)uVar13) {
            iVar17 = *piVar23;
            iVar21 = piVar23[3];
            iVar14 = iVar17;
            if (iVar17 <= iVar21) {
              iVar14 = iVar21;
            }
            piVar18 = piVar23 + 3;
            if (iVar21 <= iVar17) {
              piVar18 = piVar23;
              uVar22 = uVar2;
            }
          }
          else {
            iVar14 = *piVar23;
            piVar18 = piVar23;
            uVar22 = uVar2;
          }
          piVar23 = piVar10 + uVar12 * 3;
          iVar17 = *piVar23;
          if (iVar17 <= iVar14) {
            uVar25 = *(undefined8 *)(piVar23 + 1);
            do {
              piVar9 = piVar18;
              *piVar23 = iVar14;
              *(undefined8 *)(piVar23 + 1) = *(undefined8 *)(piVar9 + 1);
              if ((long)uVar16 < (long)uVar22) break;
              uVar2 = uVar22 << 1 | 1;
              piVar23 = piVar10 + uVar2 * 3;
              uVar22 = uVar22 * 2 + 2;
              if ((long)uVar22 < (long)uVar13) {
                iVar21 = *piVar23;
                iVar11 = piVar23[3];
                iVar14 = iVar21;
                if (iVar21 <= iVar11) {
                  iVar14 = iVar11;
                }
                piVar18 = piVar23 + 3;
                if (iVar11 <= iVar21) {
                  piVar18 = piVar23;
                  uVar22 = uVar2;
                }
              }
              else {
                iVar14 = *piVar23;
                piVar18 = piVar23;
                uVar22 = uVar2;
              }
              piVar23 = piVar9;
            } while (iVar17 <= iVar14);
            *piVar9 = iVar17;
            *(undefined8 *)(piVar9 + 1) = uVar25;
          }
        }
        bVar4 = uVar12 != 0;
        uVar12 = uVar12 - 1;
      } while (bVar4);
      lVar24 = (uVar15 >> 2) * -0x5555555555555555;
      do {
        piVar23 = (int *)0x0;
        iVar14 = *piVar10;
        iVar17 = piVar10[1];
        iVar21 = piVar10[2];
        piVar18 = piVar10;
        do {
          piVar9 = piVar18 + (long)piVar23 * 3 + 3;
          piVar3 = (int *)((long)piVar23 << 1 | 1);
          piVar20 = (int *)((long)piVar23 * 2 + 2);
          if ((long)piVar20 < lVar24) {
            lVar7 = (long)piVar23 * 3;
            iVar6 = piVar18[lVar7 + 6];
            iVar5 = piVar18[(long)piVar23 * 3 + 3];
            iVar11 = iVar5;
            if (iVar5 <= iVar6) {
              iVar11 = iVar6;
            }
            piVar23 = piVar20;
            piVar20 = piVar18 + lVar7 + 6;
            if (iVar6 <= iVar5) {
              piVar23 = piVar3;
              piVar20 = piVar9;
            }
          }
          else {
            iVar11 = *piVar9;
            piVar23 = piVar3;
            piVar20 = piVar9;
          }
          *piVar18 = iVar11;
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar20 + 1);
          piVar18 = piVar20;
        } while ((long)piVar23 <= (lVar24 + -2) / 2);
        if (piVar20 == param_2 + -3) {
          *piVar20 = iVar14;
          piVar20[1] = iVar17;
          piVar20[2] = iVar21;
        }
        else {
          *(undefined8 *)piVar20 = *(undefined8 *)(param_2 + -3);
          piVar20[2] = param_2[-1];
          param_2[-3] = iVar14;
          param_2[-2] = iVar17;
          param_2[-1] = iVar21;
          puVar1 = (undefined *)((long)piVar20 + (0xc - (long)piVar10));
          if (0xc < (long)puVar1) {
            uVar13 = ((ulong)puVar1 >> 2) * -0x5555555555555555 - 2 >> 1;
            iVar14 = piVar10[uVar13 * 3];
            iVar17 = *piVar20;
            if (iVar14 < iVar17) {
              uVar25 = *(undefined8 *)(piVar20 + 1);
              piVar18 = piVar10 + uVar13 * 3;
              do {
                piVar9 = piVar18;
                piVar23 = piVar20;
                *piVar23 = iVar14;
                *(undefined8 *)(piVar23 + 1) = *(undefined8 *)(piVar9 + 1);
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1 >> 1;
                iVar14 = piVar10[uVar13 * 3];
                piVar20 = piVar9;
                piVar18 = piVar10 + uVar13 * 3;
              } while (iVar14 < iVar17);
              *piVar9 = iVar17;
              *(undefined8 *)(piVar9 + 1) = uVar25;
            }
          }
        }
        bVar4 = lVar24 < 3;
        lVar24 = lVar24 + -1;
        param_2 = param_2 + -3;
        if (bVar4) {
          return piVar23;
        }
      } while( true );
    }
    piVar18 = piVar10 + (uVar13 >> 1) * 3;
    iVar14 = param_2[-3];
    if (uVar15 < 0x601) {
      iVar17 = *piVar10;
      iVar21 = *piVar18;
      if (iVar17 < iVar21) {
        iVar11 = piVar18[1];
        iVar5 = piVar18[2];
        if (iVar14 < iVar17) {
          *piVar18 = iVar14;
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar18 = iVar17;
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar10 + 1);
          *piVar10 = iVar21;
          piVar10[1] = iVar11;
          piVar10[2] = iVar5;
          if (iVar21 <= param_2[-3]) goto LAB_1092de7d0;
          *piVar10 = param_2[-3];
          *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar21;
        param_2[-2] = iVar11;
        param_2[-1] = iVar5;
      }
      else if (iVar14 < iVar17) {
        *piVar10 = iVar14;
        uVar25 = *(undefined8 *)(piVar10 + 1);
        *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar17;
        *(undefined8 *)(param_2 + -2) = uVar25;
        iVar14 = *piVar18;
        if (*piVar10 < iVar14) {
          *piVar18 = *piVar10;
          *piVar10 = iVar14;
          uVar25 = *(undefined8 *)(piVar18 + 1);
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar10 + 1);
          *(undefined8 *)(piVar10 + 1) = uVar25;
        }
      }
    }
    else {
      iVar17 = *piVar18;
      iVar21 = *piVar10;
      if (iVar17 < iVar21) {
        iVar11 = piVar10[1];
        iVar5 = piVar10[2];
        if (iVar14 < iVar17) {
          *piVar10 = iVar14;
          *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar10 = iVar17;
          *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar18 + 1);
          *piVar18 = iVar21;
          piVar18[1] = iVar11;
          piVar18[2] = iVar5;
          if (iVar21 <= param_2[-3]) goto LAB_1092de570;
          *piVar18 = param_2[-3];
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar21;
        param_2[-2] = iVar11;
        param_2[-1] = iVar5;
      }
      else if (iVar14 < iVar17) {
        *piVar18 = iVar14;
        uVar25 = *(undefined8 *)(piVar18 + 1);
        *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar17;
        *(undefined8 *)(param_2 + -2) = uVar25;
        iVar14 = *piVar10;
        if (*piVar18 < iVar14) {
          *piVar10 = *piVar18;
          *piVar18 = iVar14;
          uVar25 = *(undefined8 *)(piVar10 + 1);
          *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar18 + 1);
          *(undefined8 *)(piVar18 + 1) = uVar25;
        }
      }
LAB_1092de570:
      iVar17 = piVar18[-3];
      iVar14 = piVar10[3];
      iVar21 = param_2[-6];
      if (iVar17 < iVar14) {
        iVar11 = piVar10[4];
        iVar5 = piVar10[5];
        if (iVar21 < iVar17) {
          piVar10[3] = iVar21;
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(param_2 + -5);
        }
        else {
          piVar10[3] = iVar17;
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar18 + -2);
          piVar18[-3] = iVar14;
          piVar18[-2] = iVar11;
          piVar18[-1] = iVar5;
          if (iVar14 <= param_2[-6]) goto LAB_1092de658;
          piVar18[-3] = param_2[-6];
          *(undefined8 *)(piVar18 + -2) = *(undefined8 *)(param_2 + -5);
        }
        param_2[-6] = iVar14;
        param_2[-5] = iVar11;
        param_2[-4] = iVar5;
      }
      else if (iVar21 < iVar17) {
        piVar18[-3] = iVar21;
        uVar25 = *(undefined8 *)(piVar18 + -2);
        *(undefined8 *)(piVar18 + -2) = *(undefined8 *)(param_2 + -5);
        param_2[-6] = iVar17;
        *(undefined8 *)(param_2 + -5) = uVar25;
        iVar14 = piVar10[3];
        if (piVar18[-3] < iVar14) {
          piVar10[3] = piVar18[-3];
          piVar18[-3] = iVar14;
          uVar25 = *(undefined8 *)(piVar10 + 4);
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar18 + -2);
          *(undefined8 *)(piVar18 + -2) = uVar25;
        }
      }
LAB_1092de658:
      iVar14 = piVar18[3];
      iVar17 = piVar10[6];
      iVar21 = param_2[-9];
      if (iVar14 < iVar17) {
        iVar11 = piVar10[7];
        iVar5 = piVar10[8];
        if (iVar21 < iVar14) {
          piVar10[6] = iVar21;
          *(undefined8 *)(piVar10 + 7) = *(undefined8 *)(param_2 + -8);
        }
        else {
          piVar10[6] = iVar14;
          *(undefined8 *)(piVar10 + 7) = *(undefined8 *)(piVar18 + 4);
          piVar18[3] = iVar17;
          piVar18[4] = iVar11;
          piVar18[5] = iVar5;
          if (iVar17 <= param_2[-9]) goto LAB_1092de708;
          piVar18[3] = param_2[-9];
          *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(param_2 + -8);
        }
        param_2[-9] = iVar17;
        param_2[-8] = iVar11;
        param_2[-7] = iVar5;
      }
      else if (iVar21 < iVar14) {
        piVar18[3] = iVar21;
        uVar25 = *(undefined8 *)(piVar18 + 4);
        *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(param_2 + -8);
        param_2[-9] = iVar14;
        *(undefined8 *)(param_2 + -8) = uVar25;
        iVar14 = piVar10[6];
        if (piVar18[3] < iVar14) {
          piVar10[6] = piVar18[3];
          piVar18[3] = iVar14;
          uVar25 = *(undefined8 *)(piVar10 + 7);
          *(undefined8 *)(piVar10 + 7) = *(undefined8 *)(piVar18 + 4);
          *(undefined8 *)(piVar18 + 4) = uVar25;
        }
      }
LAB_1092de708:
      iVar14 = *piVar18;
      iVar21 = piVar18[-3];
      iVar17 = piVar18[3];
      if (iVar14 < iVar21) {
        iVar11 = piVar18[-2];
        iVar5 = piVar18[-1];
        if (iVar17 < iVar14) {
          piVar18[-3] = iVar17;
          *(undefined8 *)(piVar18 + -2) = *(undefined8 *)(piVar18 + 4);
          piVar18[3] = iVar21;
          piVar18[4] = iVar11;
          piVar18[5] = iVar5;
        }
        else {
          piVar18[-3] = iVar14;
          *(undefined8 *)(piVar18 + -2) = *(undefined8 *)(piVar18 + 1);
          *piVar18 = iVar21;
          piVar18[1] = iVar11;
          piVar18[2] = iVar5;
          iVar14 = iVar21;
          if (iVar17 < iVar21) {
            *piVar18 = iVar17;
            *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar18 + 4);
            piVar18[3] = iVar21;
            piVar18[4] = iVar11;
            piVar18[5] = iVar5;
            iVar14 = iVar17;
          }
        }
      }
      else if (iVar17 < iVar14) {
        iVar11 = piVar18[4];
        uVar25 = *(undefined8 *)(piVar18 + 1);
        *piVar18 = iVar17;
        piVar18[1] = iVar11;
        piVar18[2] = piVar18[5];
        piVar18[3] = iVar14;
        *(undefined8 *)(piVar18 + 4) = uVar25;
        iVar14 = iVar17;
        if (iVar17 < iVar21) {
          uVar25 = *(undefined8 *)(piVar18 + -2);
          piVar18[-3] = iVar17;
          piVar18[-2] = iVar11;
          piVar18[-1] = piVar18[5];
          *piVar18 = iVar21;
          *(undefined8 *)(piVar18 + 1) = uVar25;
          iVar14 = iVar21;
        }
      }
      iVar17 = piVar10[2];
      uVar25 = *(undefined8 *)piVar10;
      *piVar10 = iVar14;
      *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(piVar18 + 1);
      *(undefined8 *)piVar18 = uVar25;
      piVar18[2] = iVar17;
    }
LAB_1092de7d0:
    param_3 = param_3 + -1;
    iVar14 = *piVar10;
    piVar18 = piVar10;
    if (((param_4 & 1) == 0) && (iVar14 <= piVar10[-3])) {
      if (iVar14 < param_2[-3]) {
        do {
          piVar18 = piVar18 + 3;
        } while (*piVar18 <= iVar14);
      }
      else {
        do {
          piVar18 = piVar18 + 3;
          if (param_2 <= piVar18) break;
        } while (*piVar18 <= iVar14);
      }
      piVar9 = param_2;
      if (piVar18 < param_2) {
        do {
          piVar9 = piVar9 + -3;
        } while (iVar14 < *piVar9);
      }
      uVar25 = *(undefined8 *)(piVar10 + 1);
      if (piVar18 < piVar9) {
        iVar17 = *piVar18;
        iVar21 = *piVar9;
        do {
          *piVar18 = iVar21;
          uVar26 = *(undefined8 *)(piVar18 + 1);
          *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar9 + 1);
          *piVar9 = iVar17;
          *(undefined8 *)(piVar9 + 1) = uVar26;
          do {
            piVar18 = piVar18 + 3;
            iVar17 = *piVar18;
          } while (iVar17 <= iVar14);
          do {
            piVar9 = piVar9 + -3;
            iVar21 = *piVar9;
          } while (iVar14 < iVar21);
        } while (piVar18 < piVar9);
      }
      if (piVar18 + -3 != piVar10) {
        *(undefined8 *)piVar10 = *(undefined8 *)(piVar18 + -3);
        piVar10[2] = piVar18[-1];
      }
      param_4 = 0;
      piVar18[-3] = iVar14;
      *(undefined8 *)(piVar18 + -2) = uVar25;
      goto LAB_1092de3ec;
    }
    lVar24 = 0;
    uVar25 = *(undefined8 *)(piVar10 + 1);
    do {
      iVar17 = *(int *)((long)piVar10 + lVar24 + 0xc);
      lVar24 = lVar24 + 0xc;
    } while (iVar17 < iVar14);
    piVar23 = (int *)((long)piVar10 + lVar24);
    piVar9 = param_2;
    if (lVar24 == 0xc) {
      do {
        if (piVar9 <= piVar23) break;
        piVar9 = piVar9 + -3;
      } while (iVar14 <= *piVar9);
    }
    else {
      do {
        piVar9 = piVar9 + -3;
      } while (iVar14 <= *piVar9);
    }
    piVar18 = piVar23;
    if (piVar23 < piVar9) {
      iVar21 = *piVar9;
      piVar20 = piVar9;
      do {
        *piVar18 = iVar21;
        uVar26 = *(undefined8 *)(piVar18 + 1);
        *(undefined8 *)(piVar18 + 1) = *(undefined8 *)(piVar20 + 1);
        *piVar20 = iVar17;
        *(undefined8 *)(piVar20 + 1) = uVar26;
        do {
          piVar18 = piVar18 + 3;
          iVar17 = *piVar18;
        } while (iVar17 < iVar14);
        do {
          piVar20 = piVar20 + -3;
          iVar21 = *piVar20;
        } while (iVar14 <= iVar21);
      } while (piVar18 < piVar20);
    }
    piVar20 = piVar18 + -3;
    if (piVar20 != piVar10) {
      *(undefined8 *)piVar10 = *(undefined8 *)(piVar18 + -3);
      piVar10[2] = piVar18[-1];
    }
    piVar18[-3] = iVar14;
    *(undefined8 *)(piVar18 + -2) = uVar25;
    if (piVar23 < piVar9) {
LAB_1092de8e0:
      FUN_1092de3b0(piVar10,piVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
      piVar23 = piVar10;
    }
    else {
      piVar9 = piVar10;
      FUN_1092deff0(piVar10,piVar20);
      piVar23 = piVar18;
      FUN_1092deff0(piVar18,param_2);
      if ((int)piVar23 == 0) {
        if (((ulong)piVar9 & 1) == 0) goto LAB_1092de8e0;
      }
      else {
        piVar18 = piVar10;
        param_2 = piVar20;
        if (((ulong)piVar9 & 1) != 0) {
          return piVar23;
        }
      }
    }
  } while( true );
}



/* Entry: 1092de39c; end: 1092de3af;  */

void FUN_1092de39c(undefined8 param_1,int *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  piVar7 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
LAB_1092de3ec:
  do {
    piVar22 = piVar7;
    uVar13 = (long)param_2 - (long)piVar22;
    uVar11 = ((long)uVar13 >> 2) * -0x5555555555555555;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        iVar12 = *piVar22;
        if (iVar12 <= param_2[-3]) {
          return;
        }
        *piVar22 = param_2[-3];
        uVar23 = *(undefined8 *)(piVar22 + 1);
        *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar12;
        *(undefined8 *)(param_2 + -2) = uVar23;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        iVar12 = piVar22[3];
        iVar15 = *piVar22;
        iVar19 = param_2[-3];
        if (iVar12 < iVar15) {
          iVar10 = piVar22[1];
          iVar4 = piVar22[2];
          if (iVar19 < iVar12) {
            *piVar22 = iVar19;
            *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar22 = iVar12;
            *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 4);
            piVar22[3] = iVar15;
            piVar22[4] = iVar10;
            piVar22[5] = iVar4;
            if (iVar15 <= param_2[-3]) {
              return;
            }
            piVar22[3] = param_2[-3];
            *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(param_2 + -2);
          }
          param_2[-3] = iVar15;
          param_2[-2] = iVar10;
          param_2[-1] = iVar4;
          return;
        }
        if (iVar12 <= iVar19) {
          return;
        }
        piVar22[3] = iVar19;
        uVar23 = *(undefined8 *)(piVar22 + 4);
        *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar12;
        *(undefined8 *)(param_2 + -2) = uVar23;
        iVar12 = *piVar22;
        if (iVar12 <= piVar22[3]) {
          return;
        }
        *piVar22 = piVar22[3];
        piVar22[3] = iVar12;
        uVar23 = *(undefined8 *)(piVar22 + 1);
        *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 4);
        *(undefined8 *)(piVar22 + 4) = uVar23;
        return;
      }
      if (uVar11 == 4) {
        piVar7 = piVar22 + 3;
        piVar8 = piVar22 + 6;
        iVar12 = *piVar7;
        iVar15 = *piVar22;
        iVar19 = *piVar8;
        if (iVar12 < iVar15) {
          iVar10 = piVar22[1];
          if (iVar19 < iVar12) {
            *piVar22 = iVar19;
            *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 7);
          }
          else {
            *piVar22 = iVar12;
            *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 4);
            *piVar7 = iVar15;
            piVar22[4] = iVar10;
            piVar22[5] = piVar22[2];
            iVar19 = *piVar8;
            if (iVar15 <= iVar19) goto LAB_1092def78;
            *piVar7 = iVar19;
            *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(piVar22 + 7);
          }
          *piVar8 = iVar15;
          piVar22[7] = iVar10;
          piVar22[8] = piVar22[2];
          iVar19 = iVar15;
        }
        else if (iVar19 < iVar12) {
          *piVar7 = iVar19;
          uVar23 = *(undefined8 *)(piVar22 + 4);
          *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(piVar22 + 7);
          *piVar8 = iVar12;
          *(undefined8 *)(piVar22 + 7) = uVar23;
          iVar15 = *piVar22;
          iVar19 = iVar12;
          if (*piVar7 < iVar15) {
            *piVar22 = *piVar7;
            uVar23 = *(undefined8 *)(piVar22 + 1);
            *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 4);
            *piVar7 = iVar15;
            *(undefined8 *)(piVar22 + 4) = uVar23;
            iVar19 = *piVar8;
          }
        }
LAB_1092def78:
        iVar12 = param_2[-3];
        if (iVar12 < iVar19) {
          *piVar8 = iVar12;
          uVar23 = *(undefined8 *)(piVar22 + 7);
          *(undefined8 *)(piVar22 + 7) = *(undefined8 *)(param_2 + -2);
          param_2[-3] = iVar19;
          *(undefined8 *)(param_2 + -2) = uVar23;
          iVar12 = *piVar7;
          if (*piVar8 < iVar12) {
            *piVar7 = *piVar8;
            uVar23 = *(undefined8 *)(piVar22 + 4);
            *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(piVar22 + 7);
            *piVar8 = iVar12;
            *(undefined8 *)(piVar22 + 7) = uVar23;
            iVar12 = *piVar22;
            if (*piVar7 < iVar12) {
              *piVar22 = *piVar7;
              uVar23 = *(undefined8 *)(piVar22 + 1);
              *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar22 + 4);
              *piVar7 = iVar12;
              *(undefined8 *)(piVar22 + 4) = uVar23;
            }
          }
        }
        return;
      }
      if (uVar11 == 5) {
        FUN_1092deeb8(piVar22,piVar22 + 3,piVar22 + 6,piVar22 + 9);
        iVar12 = piVar22[9];
        if (iVar12 <= param_2[-3]) {
          return;
        }
        piVar22[9] = param_2[-3];
        uVar23 = *(undefined8 *)(piVar22 + 10);
        *(undefined8 *)(piVar22 + 10) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar12;
        *(undefined8 *)(param_2 + -2) = uVar23;
        iVar12 = piVar22[9];
        iVar15 = piVar22[6];
        if (iVar15 <= iVar12) {
          return;
        }
        iVar19 = piVar22[10];
        iVar10 = piVar22[0xb];
        uVar23 = *(undefined8 *)(piVar22 + 7);
        piVar22[6] = iVar12;
        piVar22[7] = iVar19;
        piVar22[8] = iVar10;
        piVar22[9] = iVar15;
        *(undefined8 *)(piVar22 + 10) = uVar23;
        iVar15 = piVar22[3];
        if (iVar15 <= iVar12) {
          return;
        }
        uVar23 = *(undefined8 *)(piVar22 + 4);
        piVar22[3] = iVar12;
        piVar22[4] = iVar19;
        piVar22[5] = iVar10;
        piVar22[6] = iVar15;
        *(undefined8 *)(piVar22 + 7) = uVar23;
        iVar15 = *piVar22;
        if (iVar15 <= iVar12) {
          return;
        }
        uVar23 = *(undefined8 *)(piVar22 + 1);
        *piVar22 = iVar12;
        piVar22[1] = iVar19;
        piVar22[2] = iVar10;
        piVar22[3] = iVar15;
        *(undefined8 *)(piVar22 + 4) = uVar23;
        return;
      }
    }
    if ((long)uVar13 < 0x120) {
      piVar7 = piVar22 + 3;
      if ((param_4 & 1) == 0) {
        if (piVar22 == param_2 || piVar7 == param_2) {
          return;
        }
        piVar8 = piVar22 + 4;
        do {
          piVar9 = piVar7;
          iVar12 = piVar22[3];
          iVar15 = *piVar22;
          if (iVar12 < iVar15) {
            uVar23 = *(undefined8 *)(piVar22 + 4);
            piVar7 = piVar8;
            do {
              piVar22 = piVar7;
              piVar22[-1] = iVar15;
              piVar7 = piVar22 + -3;
              *(undefined8 *)piVar22 = *(undefined8 *)piVar7;
              iVar15 = piVar22[-7];
            } while (iVar12 < iVar15);
            piVar22[-4] = iVar12;
            *(undefined8 *)piVar7 = uVar23;
          }
          piVar7 = piVar9 + 3;
          piVar8 = piVar8 + 3;
          piVar22 = piVar9;
        } while (piVar7 != param_2);
        return;
      }
      if (piVar22 == param_2 || piVar7 == param_2) {
        return;
      }
      lVar16 = 0;
      piVar8 = piVar22;
      do {
        piVar9 = piVar7;
        iVar12 = piVar8[3];
        iVar15 = *piVar8;
        if (iVar12 < iVar15) {
          uVar23 = *(undefined8 *)(piVar8 + 4);
          lVar6 = lVar16;
          do {
            lVar18 = lVar6;
            *(int *)((long)piVar22 + lVar18 + 0xc) = iVar15;
            *(undefined8 *)((long)piVar22 + lVar18 + 0x10) =
                 *(undefined8 *)((long)piVar22 + lVar18 + 4);
            piVar7 = piVar22;
            if (lVar18 == 0) goto LAB_1092deb70;
            iVar15 = *(int *)((long)piVar22 + lVar18 + -0xc);
            lVar6 = lVar18 + -0xc;
          } while (iVar12 < iVar15);
          piVar7 = (int *)((long)piVar22 + lVar18);
LAB_1092deb70:
          *piVar7 = iVar12;
          *(undefined8 *)(piVar7 + 1) = uVar23;
        }
        piVar7 = piVar9 + 3;
        lVar16 = lVar16 + 0xc;
        piVar8 = piVar9;
        if (piVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar22 == param_2) {
        return;
      }
      uVar14 = uVar11 - 2 >> 1;
      uVar20 = uVar14;
      do {
        if ((long)uVar20 <= (long)uVar14) {
          uVar2 = uVar20 << 1 | 1;
          piVar7 = piVar22 + uVar2 * 3;
          uVar21 = uVar20 * 2 + 2;
          if ((long)uVar21 < (long)uVar11) {
            iVar15 = *piVar7;
            iVar19 = piVar7[3];
            iVar12 = iVar15;
            if (iVar15 <= iVar19) {
              iVar12 = iVar19;
            }
            piVar8 = piVar7 + 3;
            if (iVar19 <= iVar15) {
              piVar8 = piVar7;
              uVar21 = uVar2;
            }
          }
          else {
            iVar12 = *piVar7;
            piVar8 = piVar7;
            uVar21 = uVar2;
          }
          piVar7 = piVar22 + uVar20 * 3;
          iVar15 = *piVar7;
          if (iVar15 <= iVar12) {
            uVar23 = *(undefined8 *)(piVar7 + 1);
            do {
              piVar9 = piVar8;
              *piVar7 = iVar12;
              *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar9 + 1);
              if ((long)uVar14 < (long)uVar21) break;
              uVar2 = uVar21 << 1 | 1;
              piVar7 = piVar22 + uVar2 * 3;
              uVar21 = uVar21 * 2 + 2;
              if ((long)uVar21 < (long)uVar11) {
                iVar19 = *piVar7;
                iVar10 = piVar7[3];
                iVar12 = iVar19;
                if (iVar19 <= iVar10) {
                  iVar12 = iVar10;
                }
                piVar8 = piVar7 + 3;
                if (iVar10 <= iVar19) {
                  piVar8 = piVar7;
                  uVar21 = uVar2;
                }
              }
              else {
                iVar12 = *piVar7;
                piVar8 = piVar7;
                uVar21 = uVar2;
              }
              piVar7 = piVar9;
            } while (iVar15 <= iVar12);
            *piVar9 = iVar15;
            *(undefined8 *)(piVar9 + 1) = uVar23;
          }
        }
        bVar3 = uVar20 != 0;
        uVar20 = uVar20 - 1;
      } while (bVar3);
      lVar16 = (uVar13 >> 2) * -0x5555555555555555;
      do {
        uVar11 = 0;
        iVar12 = *piVar22;
        iVar15 = piVar22[1];
        iVar19 = piVar22[2];
        piVar7 = piVar22;
        do {
          piVar8 = piVar7 + uVar11 * 3 + 3;
          uVar20 = uVar11 << 1 | 1;
          uVar13 = uVar11 * 2 + 2;
          if ((long)uVar13 < lVar16) {
            lVar6 = uVar11 * 3;
            iVar5 = piVar7[lVar6 + 6];
            iVar4 = piVar7[uVar11 * 3 + 3];
            iVar10 = iVar4;
            if (iVar4 <= iVar5) {
              iVar10 = iVar5;
            }
            uVar11 = uVar13;
            piVar9 = piVar7 + lVar6 + 6;
            if (iVar5 <= iVar4) {
              uVar11 = uVar20;
              piVar9 = piVar8;
            }
          }
          else {
            iVar10 = *piVar8;
            uVar11 = uVar20;
            piVar9 = piVar8;
          }
          *piVar7 = iVar10;
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar9 + 1);
          piVar7 = piVar9;
        } while ((long)uVar11 <= (lVar16 + -2) / 2);
        if (piVar9 == param_2 + -3) {
          *piVar9 = iVar12;
          piVar9[1] = iVar15;
          piVar9[2] = iVar19;
        }
        else {
          *(undefined8 *)piVar9 = *(undefined8 *)(param_2 + -3);
          piVar9[2] = param_2[-1];
          param_2[-3] = iVar12;
          param_2[-2] = iVar15;
          param_2[-1] = iVar19;
          puVar1 = (undefined *)((long)piVar9 + (0xc - (long)piVar22));
          if (0xc < (long)puVar1) {
            uVar11 = ((ulong)puVar1 >> 2) * -0x5555555555555555 - 2 >> 1;
            iVar12 = piVar22[uVar11 * 3];
            iVar15 = *piVar9;
            if (iVar12 < iVar15) {
              uVar23 = *(undefined8 *)(piVar9 + 1);
              piVar7 = piVar22 + uVar11 * 3;
              do {
                piVar8 = piVar7;
                *piVar9 = iVar12;
                *(undefined8 *)(piVar9 + 1) = *(undefined8 *)(piVar8 + 1);
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                iVar12 = piVar22[uVar11 * 3];
                piVar9 = piVar8;
                piVar7 = piVar22 + uVar11 * 3;
              } while (iVar12 < iVar15);
              *piVar8 = iVar15;
              *(undefined8 *)(piVar8 + 1) = uVar23;
            }
          }
        }
        bVar3 = lVar16 < 3;
        lVar16 = lVar16 + -1;
        param_2 = param_2 + -3;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    piVar7 = piVar22 + (uVar11 >> 1) * 3;
    iVar12 = param_2[-3];
    if (uVar13 < 0x601) {
      iVar15 = *piVar22;
      iVar19 = *piVar7;
      if (iVar15 < iVar19) {
        iVar10 = piVar7[1];
        iVar4 = piVar7[2];
        if (iVar12 < iVar15) {
          *piVar7 = iVar12;
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar7 = iVar15;
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar22 + 1);
          *piVar22 = iVar19;
          piVar22[1] = iVar10;
          piVar22[2] = iVar4;
          if (iVar19 <= param_2[-3]) goto LAB_1092de7d0;
          *piVar22 = param_2[-3];
          *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar19;
        param_2[-2] = iVar10;
        param_2[-1] = iVar4;
      }
      else if (iVar12 < iVar15) {
        *piVar22 = iVar12;
        uVar23 = *(undefined8 *)(piVar22 + 1);
        *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar15;
        *(undefined8 *)(param_2 + -2) = uVar23;
        iVar12 = *piVar7;
        if (*piVar22 < iVar12) {
          *piVar7 = *piVar22;
          *piVar22 = iVar12;
          uVar23 = *(undefined8 *)(piVar7 + 1);
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar22 + 1);
          *(undefined8 *)(piVar22 + 1) = uVar23;
        }
      }
    }
    else {
      iVar15 = *piVar7;
      iVar19 = *piVar22;
      if (iVar15 < iVar19) {
        iVar10 = piVar22[1];
        iVar4 = piVar22[2];
        if (iVar12 < iVar15) {
          *piVar22 = iVar12;
          *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar22 = iVar15;
          *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar7 + 1);
          *piVar7 = iVar19;
          piVar7[1] = iVar10;
          piVar7[2] = iVar4;
          if (iVar19 <= param_2[-3]) goto LAB_1092de570;
          *piVar7 = param_2[-3];
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar19;
        param_2[-2] = iVar10;
        param_2[-1] = iVar4;
      }
      else if (iVar12 < iVar15) {
        *piVar7 = iVar12;
        uVar23 = *(undefined8 *)(piVar7 + 1);
        *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar15;
        *(undefined8 *)(param_2 + -2) = uVar23;
        iVar12 = *piVar22;
        if (*piVar7 < iVar12) {
          *piVar22 = *piVar7;
          *piVar7 = iVar12;
          uVar23 = *(undefined8 *)(piVar22 + 1);
          *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar7 + 1);
          *(undefined8 *)(piVar7 + 1) = uVar23;
        }
      }
LAB_1092de570:
      iVar15 = piVar7[-3];
      iVar12 = piVar22[3];
      iVar19 = param_2[-6];
      if (iVar15 < iVar12) {
        iVar10 = piVar22[4];
        iVar4 = piVar22[5];
        if (iVar19 < iVar15) {
          piVar22[3] = iVar19;
          *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(param_2 + -5);
        }
        else {
          piVar22[3] = iVar15;
          *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(piVar7 + -2);
          piVar7[-3] = iVar12;
          piVar7[-2] = iVar10;
          piVar7[-1] = iVar4;
          if (iVar12 <= param_2[-6]) goto LAB_1092de658;
          piVar7[-3] = param_2[-6];
          *(undefined8 *)(piVar7 + -2) = *(undefined8 *)(param_2 + -5);
        }
        param_2[-6] = iVar12;
        param_2[-5] = iVar10;
        param_2[-4] = iVar4;
      }
      else if (iVar19 < iVar15) {
        piVar7[-3] = iVar19;
        uVar23 = *(undefined8 *)(piVar7 + -2);
        *(undefined8 *)(piVar7 + -2) = *(undefined8 *)(param_2 + -5);
        param_2[-6] = iVar15;
        *(undefined8 *)(param_2 + -5) = uVar23;
        iVar12 = piVar22[3];
        if (piVar7[-3] < iVar12) {
          piVar22[3] = piVar7[-3];
          piVar7[-3] = iVar12;
          uVar23 = *(undefined8 *)(piVar22 + 4);
          *(undefined8 *)(piVar22 + 4) = *(undefined8 *)(piVar7 + -2);
          *(undefined8 *)(piVar7 + -2) = uVar23;
        }
      }
LAB_1092de658:
      iVar12 = piVar7[3];
      iVar15 = piVar22[6];
      iVar19 = param_2[-9];
      if (iVar12 < iVar15) {
        iVar10 = piVar22[7];
        iVar4 = piVar22[8];
        if (iVar19 < iVar12) {
          piVar22[6] = iVar19;
          *(undefined8 *)(piVar22 + 7) = *(undefined8 *)(param_2 + -8);
        }
        else {
          piVar22[6] = iVar12;
          *(undefined8 *)(piVar22 + 7) = *(undefined8 *)(piVar7 + 4);
          piVar7[3] = iVar15;
          piVar7[4] = iVar10;
          piVar7[5] = iVar4;
          if (iVar15 <= param_2[-9]) goto LAB_1092de708;
          piVar7[3] = param_2[-9];
          *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + -8);
        }
        param_2[-9] = iVar15;
        param_2[-8] = iVar10;
        param_2[-7] = iVar4;
      }
      else if (iVar19 < iVar12) {
        piVar7[3] = iVar19;
        uVar23 = *(undefined8 *)(piVar7 + 4);
        *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_2 + -8);
        param_2[-9] = iVar12;
        *(undefined8 *)(param_2 + -8) = uVar23;
        iVar12 = piVar22[6];
        if (piVar7[3] < iVar12) {
          piVar22[6] = piVar7[3];
          piVar7[3] = iVar12;
          uVar23 = *(undefined8 *)(piVar22 + 7);
          *(undefined8 *)(piVar22 + 7) = *(undefined8 *)(piVar7 + 4);
          *(undefined8 *)(piVar7 + 4) = uVar23;
        }
      }
LAB_1092de708:
      iVar12 = *piVar7;
      iVar19 = piVar7[-3];
      iVar15 = piVar7[3];
      if (iVar12 < iVar19) {
        iVar10 = piVar7[-2];
        iVar4 = piVar7[-1];
        if (iVar15 < iVar12) {
          piVar7[-3] = iVar15;
          *(undefined8 *)(piVar7 + -2) = *(undefined8 *)(piVar7 + 4);
          piVar7[3] = iVar19;
          piVar7[4] = iVar10;
          piVar7[5] = iVar4;
        }
        else {
          piVar7[-3] = iVar12;
          *(undefined8 *)(piVar7 + -2) = *(undefined8 *)(piVar7 + 1);
          *piVar7 = iVar19;
          piVar7[1] = iVar10;
          piVar7[2] = iVar4;
          iVar12 = iVar19;
          if (iVar15 < iVar19) {
            *piVar7 = iVar15;
            *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar7 + 4);
            piVar7[3] = iVar19;
            piVar7[4] = iVar10;
            piVar7[5] = iVar4;
            iVar12 = iVar15;
          }
        }
      }
      else if (iVar15 < iVar12) {
        iVar10 = piVar7[4];
        uVar23 = *(undefined8 *)(piVar7 + 1);
        *piVar7 = iVar15;
        piVar7[1] = iVar10;
        piVar7[2] = piVar7[5];
        piVar7[3] = iVar12;
        *(undefined8 *)(piVar7 + 4) = uVar23;
        iVar12 = iVar15;
        if (iVar15 < iVar19) {
          uVar23 = *(undefined8 *)(piVar7 + -2);
          piVar7[-3] = iVar15;
          piVar7[-2] = iVar10;
          piVar7[-1] = piVar7[5];
          *piVar7 = iVar19;
          *(undefined8 *)(piVar7 + 1) = uVar23;
          iVar12 = iVar19;
        }
      }
      iVar15 = piVar22[2];
      uVar23 = *(undefined8 *)piVar22;
      *piVar22 = iVar12;
      *(undefined8 *)(piVar22 + 1) = *(undefined8 *)(piVar7 + 1);
      *(undefined8 *)piVar7 = uVar23;
      piVar7[2] = iVar15;
    }
LAB_1092de7d0:
    param_3 = param_3 + -1;
    iVar12 = *piVar22;
    piVar7 = piVar22;
    if (((param_4 & 1) == 0) && (iVar12 <= piVar22[-3])) {
      if (iVar12 < param_2[-3]) {
        do {
          piVar7 = piVar7 + 3;
        } while (*piVar7 <= iVar12);
      }
      else {
        do {
          piVar7 = piVar7 + 3;
          if (param_2 <= piVar7) break;
        } while (*piVar7 <= iVar12);
      }
      piVar8 = param_2;
      if (piVar7 < param_2) {
        do {
          piVar8 = piVar8 + -3;
        } while (iVar12 < *piVar8);
      }
      uVar23 = *(undefined8 *)(piVar22 + 1);
      if (piVar7 < piVar8) {
        iVar15 = *piVar7;
        iVar19 = *piVar8;
        do {
          *piVar7 = iVar19;
          uVar24 = *(undefined8 *)(piVar7 + 1);
          *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar8 + 1);
          *piVar8 = iVar15;
          *(undefined8 *)(piVar8 + 1) = uVar24;
          do {
            piVar7 = piVar7 + 3;
            iVar15 = *piVar7;
          } while (iVar15 <= iVar12);
          do {
            piVar8 = piVar8 + -3;
            iVar19 = *piVar8;
          } while (iVar12 < iVar19);
        } while (piVar7 < piVar8);
      }
      if (piVar7 + -3 != piVar22) {
        *(undefined8 *)piVar22 = *(undefined8 *)(piVar7 + -3);
        piVar22[2] = piVar7[-1];
      }
      param_4 = 0;
      piVar7[-3] = iVar12;
      *(undefined8 *)(piVar7 + -2) = uVar23;
      goto LAB_1092de3ec;
    }
    lVar16 = 0;
    uVar23 = *(undefined8 *)(piVar22 + 1);
    do {
      iVar15 = *(int *)((long)piVar22 + lVar16 + 0xc);
      lVar16 = lVar16 + 0xc;
    } while (iVar15 < iVar12);
    piVar8 = (int *)((long)piVar22 + lVar16);
    piVar9 = param_2;
    if (lVar16 == 0xc) {
      do {
        if (piVar9 <= piVar8) break;
        piVar9 = piVar9 + -3;
      } while (iVar12 <= *piVar9);
    }
    else {
      do {
        piVar9 = piVar9 + -3;
      } while (iVar12 <= *piVar9);
    }
    piVar7 = piVar8;
    if (piVar8 < piVar9) {
      iVar19 = *piVar9;
      piVar17 = piVar9;
      do {
        *piVar7 = iVar19;
        uVar24 = *(undefined8 *)(piVar7 + 1);
        *(undefined8 *)(piVar7 + 1) = *(undefined8 *)(piVar17 + 1);
        *piVar17 = iVar15;
        *(undefined8 *)(piVar17 + 1) = uVar24;
        do {
          piVar7 = piVar7 + 3;
          iVar15 = *piVar7;
        } while (iVar15 < iVar12);
        do {
          piVar17 = piVar17 + -3;
          iVar19 = *piVar17;
        } while (iVar12 <= iVar19);
      } while (piVar7 < piVar17);
    }
    piVar17 = piVar7 + -3;
    if (piVar17 != piVar22) {
      *(undefined8 *)piVar22 = *(undefined8 *)(piVar7 + -3);
      piVar22[2] = piVar7[-1];
    }
    piVar7[-3] = iVar12;
    *(undefined8 *)(piVar7 + -2) = uVar23;
    if (piVar8 < piVar9) {
LAB_1092de8e0:
      FUN_1092de3b0(piVar22,piVar17,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      piVar8 = piVar22;
      FUN_1092deff0(piVar22,piVar17);
      piVar9 = piVar7;
      FUN_1092deff0(piVar7,param_2);
      if ((int)piVar9 == 0) {
        if (((ulong)piVar8 & 1) == 0) goto LAB_1092de8e0;
      }
      else {
        piVar7 = piVar22;
        param_2 = piVar17;
        if (((ulong)piVar8 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1092de3b0; end: 1092deeb7;  */

void FUN_1092de3b0(int *param_1,int *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
LAB_1092de3ec:
  do {
    piVar20 = param_1;
    uVar11 = (long)param_2 - (long)piVar20;
    uVar9 = ((long)uVar11 >> 2) * -0x5555555555555555;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        iVar10 = *piVar20;
        if (iVar10 <= param_2[-3]) {
          return;
        }
        *piVar20 = param_2[-3];
        uVar21 = *(undefined8 *)(piVar20 + 1);
        *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar10;
        *(undefined8 *)(param_2 + -2) = uVar21;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        iVar10 = piVar20[3];
        iVar13 = *piVar20;
        iVar17 = param_2[-3];
        if (iVar10 < iVar13) {
          iVar8 = piVar20[1];
          iVar3 = piVar20[2];
          if (iVar17 < iVar10) {
            *piVar20 = iVar17;
            *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(param_2 + -2);
          }
          else {
            *piVar20 = iVar10;
            *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 4);
            piVar20[3] = iVar13;
            piVar20[4] = iVar8;
            piVar20[5] = iVar3;
            if (iVar13 <= param_2[-3]) {
              return;
            }
            piVar20[3] = param_2[-3];
            *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(param_2 + -2);
          }
          param_2[-3] = iVar13;
          param_2[-2] = iVar8;
          param_2[-1] = iVar3;
          return;
        }
        if (iVar10 <= iVar17) {
          return;
        }
        piVar20[3] = iVar17;
        uVar21 = *(undefined8 *)(piVar20 + 4);
        *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar10;
        *(undefined8 *)(param_2 + -2) = uVar21;
        iVar10 = *piVar20;
        if (iVar10 <= piVar20[3]) {
          return;
        }
        *piVar20 = piVar20[3];
        piVar20[3] = iVar10;
        uVar21 = *(undefined8 *)(piVar20 + 1);
        *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 4);
        *(undefined8 *)(piVar20 + 4) = uVar21;
        return;
      }
      if (uVar9 == 4) {
        piVar6 = piVar20 + 3;
        piVar7 = piVar20 + 6;
        iVar10 = *piVar6;
        iVar13 = *piVar20;
        iVar17 = *piVar7;
        if (iVar10 < iVar13) {
          iVar8 = piVar20[1];
          if (iVar17 < iVar10) {
            *piVar20 = iVar17;
            *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 7);
          }
          else {
            *piVar20 = iVar10;
            *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 4);
            *piVar6 = iVar13;
            piVar20[4] = iVar8;
            piVar20[5] = piVar20[2];
            iVar17 = *piVar7;
            if (iVar13 <= iVar17) goto LAB_1092def78;
            *piVar6 = iVar17;
            *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar20 + 7);
          }
          *piVar7 = iVar13;
          piVar20[7] = iVar8;
          piVar20[8] = piVar20[2];
          iVar17 = iVar13;
        }
        else if (iVar17 < iVar10) {
          *piVar6 = iVar17;
          uVar21 = *(undefined8 *)(piVar20 + 4);
          *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar20 + 7);
          *piVar7 = iVar10;
          *(undefined8 *)(piVar20 + 7) = uVar21;
          iVar13 = *piVar20;
          iVar17 = iVar10;
          if (*piVar6 < iVar13) {
            *piVar20 = *piVar6;
            uVar21 = *(undefined8 *)(piVar20 + 1);
            *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 4);
            *piVar6 = iVar13;
            *(undefined8 *)(piVar20 + 4) = uVar21;
            iVar17 = *piVar7;
          }
        }
LAB_1092def78:
        iVar10 = param_2[-3];
        if (iVar10 < iVar17) {
          *piVar7 = iVar10;
          uVar21 = *(undefined8 *)(piVar20 + 7);
          *(undefined8 *)(piVar20 + 7) = *(undefined8 *)(param_2 + -2);
          param_2[-3] = iVar17;
          *(undefined8 *)(param_2 + -2) = uVar21;
          iVar10 = *piVar6;
          if (*piVar7 < iVar10) {
            *piVar6 = *piVar7;
            uVar21 = *(undefined8 *)(piVar20 + 4);
            *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar20 + 7);
            *piVar7 = iVar10;
            *(undefined8 *)(piVar20 + 7) = uVar21;
            iVar10 = *piVar20;
            if (*piVar6 < iVar10) {
              *piVar20 = *piVar6;
              uVar21 = *(undefined8 *)(piVar20 + 1);
              *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar20 + 4);
              *piVar6 = iVar10;
              *(undefined8 *)(piVar20 + 4) = uVar21;
            }
          }
        }
        return;
      }
      if (uVar9 == 5) {
        FUN_1092deeb8(piVar20,piVar20 + 3,piVar20 + 6,piVar20 + 9);
        iVar10 = piVar20[9];
        if (iVar10 <= param_2[-3]) {
          return;
        }
        piVar20[9] = param_2[-3];
        uVar21 = *(undefined8 *)(piVar20 + 10);
        *(undefined8 *)(piVar20 + 10) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar10;
        *(undefined8 *)(param_2 + -2) = uVar21;
        iVar10 = piVar20[9];
        iVar13 = piVar20[6];
        if (iVar13 <= iVar10) {
          return;
        }
        iVar17 = piVar20[10];
        iVar8 = piVar20[0xb];
        uVar21 = *(undefined8 *)(piVar20 + 7);
        piVar20[6] = iVar10;
        piVar20[7] = iVar17;
        piVar20[8] = iVar8;
        piVar20[9] = iVar13;
        *(undefined8 *)(piVar20 + 10) = uVar21;
        iVar13 = piVar20[3];
        if (iVar13 <= iVar10) {
          return;
        }
        uVar21 = *(undefined8 *)(piVar20 + 4);
        piVar20[3] = iVar10;
        piVar20[4] = iVar17;
        piVar20[5] = iVar8;
        piVar20[6] = iVar13;
        *(undefined8 *)(piVar20 + 7) = uVar21;
        iVar13 = *piVar20;
        if (iVar13 <= iVar10) {
          return;
        }
        uVar21 = *(undefined8 *)(piVar20 + 1);
        *piVar20 = iVar10;
        piVar20[1] = iVar17;
        piVar20[2] = iVar8;
        piVar20[3] = iVar13;
        *(undefined8 *)(piVar20 + 4) = uVar21;
        return;
      }
    }
    if ((long)uVar11 < 0x120) {
      piVar6 = piVar20 + 3;
      if ((param_4 & 1) == 0) {
        if (piVar20 == param_2 || piVar6 == param_2) {
          return;
        }
        piVar7 = piVar20 + 4;
        do {
          piVar16 = piVar6;
          iVar10 = piVar20[3];
          iVar13 = *piVar20;
          if (iVar10 < iVar13) {
            uVar21 = *(undefined8 *)(piVar20 + 4);
            piVar20 = piVar7;
            do {
              piVar6 = piVar20;
              piVar6[-1] = iVar13;
              piVar20 = piVar6 + -3;
              *(undefined8 *)piVar6 = *(undefined8 *)piVar20;
              iVar13 = piVar6[-7];
            } while (iVar10 < iVar13);
            piVar6[-4] = iVar10;
            *(undefined8 *)piVar20 = uVar21;
          }
          piVar6 = piVar16 + 3;
          piVar7 = piVar7 + 3;
          piVar20 = piVar16;
        } while (piVar6 != param_2);
        return;
      }
      if (piVar20 == param_2 || piVar6 == param_2) {
        return;
      }
      lVar14 = 0;
      piVar7 = piVar20;
      do {
        piVar16 = piVar6;
        iVar10 = piVar7[3];
        iVar13 = *piVar7;
        if (iVar10 < iVar13) {
          uVar21 = *(undefined8 *)(piVar7 + 4);
          lVar5 = lVar14;
          do {
            lVar15 = lVar5;
            *(int *)((long)piVar20 + lVar15 + 0xc) = iVar13;
            *(undefined8 *)((long)piVar20 + lVar15 + 0x10) =
                 *(undefined8 *)((long)piVar20 + lVar15 + 4);
            piVar6 = piVar20;
            if (lVar15 == 0) goto LAB_1092deb70;
            iVar13 = *(int *)((long)piVar20 + lVar15 + -0xc);
            lVar5 = lVar15 + -0xc;
          } while (iVar10 < iVar13);
          piVar6 = (int *)((long)piVar20 + lVar15);
LAB_1092deb70:
          *piVar6 = iVar10;
          *(undefined8 *)(piVar6 + 1) = uVar21;
        }
        piVar6 = piVar16 + 3;
        lVar14 = lVar14 + 0xc;
        piVar7 = piVar16;
        if (piVar6 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (piVar20 == param_2) {
        return;
      }
      uVar12 = uVar9 - 2 >> 1;
      uVar18 = uVar12;
      do {
        if ((long)uVar18 <= (long)uVar12) {
          uVar1 = uVar18 << 1 | 1;
          piVar6 = piVar20 + uVar1 * 3;
          uVar19 = uVar18 * 2 + 2;
          if ((long)uVar19 < (long)uVar9) {
            iVar13 = *piVar6;
            iVar17 = piVar6[3];
            iVar10 = iVar13;
            if (iVar13 <= iVar17) {
              iVar10 = iVar17;
            }
            piVar7 = piVar6 + 3;
            if (iVar17 <= iVar13) {
              piVar7 = piVar6;
              uVar19 = uVar1;
            }
          }
          else {
            iVar10 = *piVar6;
            piVar7 = piVar6;
            uVar19 = uVar1;
          }
          piVar6 = piVar20 + uVar18 * 3;
          iVar13 = *piVar6;
          if (iVar13 <= iVar10) {
            uVar21 = *(undefined8 *)(piVar6 + 1);
            do {
              piVar16 = piVar7;
              *piVar6 = iVar10;
              *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(piVar16 + 1);
              if ((long)uVar12 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              piVar6 = piVar20 + uVar1 * 3;
              uVar19 = uVar19 * 2 + 2;
              if ((long)uVar19 < (long)uVar9) {
                iVar17 = *piVar6;
                iVar8 = piVar6[3];
                iVar10 = iVar17;
                if (iVar17 <= iVar8) {
                  iVar10 = iVar8;
                }
                piVar7 = piVar6 + 3;
                if (iVar8 <= iVar17) {
                  piVar7 = piVar6;
                  uVar19 = uVar1;
                }
              }
              else {
                iVar10 = *piVar6;
                piVar7 = piVar6;
                uVar19 = uVar1;
              }
              piVar6 = piVar16;
            } while (iVar13 <= iVar10);
            *piVar16 = iVar13;
            *(undefined8 *)(piVar16 + 1) = uVar21;
          }
        }
        bVar2 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar2);
      lVar14 = (uVar11 >> 2) * -0x5555555555555555;
      do {
        uVar9 = 0;
        iVar10 = *piVar20;
        iVar13 = piVar20[1];
        iVar17 = piVar20[2];
        piVar6 = piVar20;
        do {
          piVar7 = piVar6 + uVar9 * 3 + 3;
          uVar18 = uVar9 << 1 | 1;
          uVar11 = uVar9 * 2 + 2;
          if ((long)uVar11 < lVar14) {
            lVar5 = uVar9 * 3;
            iVar4 = piVar6[lVar5 + 6];
            iVar3 = piVar6[uVar9 * 3 + 3];
            iVar8 = iVar3;
            if (iVar3 <= iVar4) {
              iVar8 = iVar4;
            }
            uVar9 = uVar11;
            piVar16 = piVar6 + lVar5 + 6;
            if (iVar4 <= iVar3) {
              uVar9 = uVar18;
              piVar16 = piVar7;
            }
          }
          else {
            iVar8 = *piVar7;
            uVar9 = uVar18;
            piVar16 = piVar7;
          }
          *piVar6 = iVar8;
          *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(piVar16 + 1);
          piVar6 = piVar16;
        } while ((long)uVar9 <= (lVar14 + -2) / 2);
        if (piVar16 == param_2 + -3) {
          *piVar16 = iVar10;
          piVar16[1] = iVar13;
          piVar16[2] = iVar17;
        }
        else {
          *(undefined8 *)piVar16 = *(undefined8 *)(param_2 + -3);
          piVar16[2] = param_2[-1];
          param_2[-3] = iVar10;
          param_2[-2] = iVar13;
          param_2[-1] = iVar17;
          uVar9 = (long)piVar16 + (0xc - (long)piVar20);
          if (0xc < (long)uVar9) {
            uVar9 = (uVar9 >> 2) * -0x5555555555555555 - 2 >> 1;
            iVar10 = piVar20[uVar9 * 3];
            iVar13 = *piVar16;
            if (iVar10 < iVar13) {
              uVar21 = *(undefined8 *)(piVar16 + 1);
              piVar6 = piVar20 + uVar9 * 3;
              do {
                piVar7 = piVar6;
                *piVar16 = iVar10;
                *(undefined8 *)(piVar16 + 1) = *(undefined8 *)(piVar7 + 1);
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                iVar10 = piVar20[uVar9 * 3];
                piVar16 = piVar7;
                piVar6 = piVar20 + uVar9 * 3;
              } while (iVar10 < iVar13);
              *piVar7 = iVar13;
              *(undefined8 *)(piVar7 + 1) = uVar21;
            }
          }
        }
        bVar2 = lVar14 < 3;
        lVar14 = lVar14 + -1;
        param_2 = param_2 + -3;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    piVar6 = piVar20 + (uVar9 >> 1) * 3;
    iVar10 = param_2[-3];
    if (uVar11 < 0x601) {
      iVar13 = *piVar20;
      iVar17 = *piVar6;
      if (iVar13 < iVar17) {
        iVar8 = piVar6[1];
        iVar3 = piVar6[2];
        if (iVar10 < iVar13) {
          *piVar6 = iVar10;
          *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar6 = iVar13;
          *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(piVar20 + 1);
          *piVar20 = iVar17;
          piVar20[1] = iVar8;
          piVar20[2] = iVar3;
          if (iVar17 <= param_2[-3]) goto LAB_1092de7d0;
          *piVar20 = param_2[-3];
          *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar17;
        param_2[-2] = iVar8;
        param_2[-1] = iVar3;
      }
      else if (iVar10 < iVar13) {
        *piVar20 = iVar10;
        uVar21 = *(undefined8 *)(piVar20 + 1);
        *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar13;
        *(undefined8 *)(param_2 + -2) = uVar21;
        iVar10 = *piVar6;
        if (*piVar20 < iVar10) {
          *piVar6 = *piVar20;
          *piVar20 = iVar10;
          uVar21 = *(undefined8 *)(piVar6 + 1);
          *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(piVar20 + 1);
          *(undefined8 *)(piVar20 + 1) = uVar21;
        }
      }
    }
    else {
      iVar13 = *piVar6;
      iVar17 = *piVar20;
      if (iVar13 < iVar17) {
        iVar8 = piVar20[1];
        iVar3 = piVar20[2];
        if (iVar10 < iVar13) {
          *piVar20 = iVar10;
          *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *piVar20 = iVar13;
          *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar6 + 1);
          *piVar6 = iVar17;
          piVar6[1] = iVar8;
          piVar6[2] = iVar3;
          if (iVar17 <= param_2[-3]) goto LAB_1092de570;
          *piVar6 = param_2[-3];
          *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar17;
        param_2[-2] = iVar8;
        param_2[-1] = iVar3;
      }
      else if (iVar10 < iVar13) {
        *piVar6 = iVar10;
        uVar21 = *(undefined8 *)(piVar6 + 1);
        *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(param_2 + -2);
        param_2[-3] = iVar13;
        *(undefined8 *)(param_2 + -2) = uVar21;
        iVar10 = *piVar20;
        if (*piVar6 < iVar10) {
          *piVar20 = *piVar6;
          *piVar6 = iVar10;
          uVar21 = *(undefined8 *)(piVar20 + 1);
          *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar6 + 1);
          *(undefined8 *)(piVar6 + 1) = uVar21;
        }
      }
LAB_1092de570:
      iVar13 = piVar6[-3];
      iVar10 = piVar20[3];
      iVar17 = param_2[-6];
      if (iVar13 < iVar10) {
        iVar8 = piVar20[4];
        iVar3 = piVar20[5];
        if (iVar17 < iVar13) {
          piVar20[3] = iVar17;
          *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(param_2 + -5);
        }
        else {
          piVar20[3] = iVar13;
          *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar6 + -2);
          piVar6[-3] = iVar10;
          piVar6[-2] = iVar8;
          piVar6[-1] = iVar3;
          if (iVar10 <= param_2[-6]) goto LAB_1092de658;
          piVar6[-3] = param_2[-6];
          *(undefined8 *)(piVar6 + -2) = *(undefined8 *)(param_2 + -5);
        }
        param_2[-6] = iVar10;
        param_2[-5] = iVar8;
        param_2[-4] = iVar3;
      }
      else if (iVar17 < iVar13) {
        piVar6[-3] = iVar17;
        uVar21 = *(undefined8 *)(piVar6 + -2);
        *(undefined8 *)(piVar6 + -2) = *(undefined8 *)(param_2 + -5);
        param_2[-6] = iVar13;
        *(undefined8 *)(param_2 + -5) = uVar21;
        iVar10 = piVar20[3];
        if (piVar6[-3] < iVar10) {
          piVar20[3] = piVar6[-3];
          piVar6[-3] = iVar10;
          uVar21 = *(undefined8 *)(piVar20 + 4);
          *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar6 + -2);
          *(undefined8 *)(piVar6 + -2) = uVar21;
        }
      }
LAB_1092de658:
      iVar10 = piVar6[3];
      iVar13 = piVar20[6];
      iVar17 = param_2[-9];
      if (iVar10 < iVar13) {
        iVar8 = piVar20[7];
        iVar3 = piVar20[8];
        if (iVar17 < iVar10) {
          piVar20[6] = iVar17;
          *(undefined8 *)(piVar20 + 7) = *(undefined8 *)(param_2 + -8);
        }
        else {
          piVar20[6] = iVar10;
          *(undefined8 *)(piVar20 + 7) = *(undefined8 *)(piVar6 + 4);
          piVar6[3] = iVar13;
          piVar6[4] = iVar8;
          piVar6[5] = iVar3;
          if (iVar13 <= param_2[-9]) goto LAB_1092de708;
          piVar6[3] = param_2[-9];
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_2 + -8);
        }
        param_2[-9] = iVar13;
        param_2[-8] = iVar8;
        param_2[-7] = iVar3;
      }
      else if (iVar17 < iVar10) {
        piVar6[3] = iVar17;
        uVar21 = *(undefined8 *)(piVar6 + 4);
        *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_2 + -8);
        param_2[-9] = iVar10;
        *(undefined8 *)(param_2 + -8) = uVar21;
        iVar10 = piVar20[6];
        if (piVar6[3] < iVar10) {
          piVar20[6] = piVar6[3];
          piVar6[3] = iVar10;
          uVar21 = *(undefined8 *)(piVar20 + 7);
          *(undefined8 *)(piVar20 + 7) = *(undefined8 *)(piVar6 + 4);
          *(undefined8 *)(piVar6 + 4) = uVar21;
        }
      }
LAB_1092de708:
      iVar10 = *piVar6;
      iVar17 = piVar6[-3];
      iVar13 = piVar6[3];
      if (iVar10 < iVar17) {
        iVar8 = piVar6[-2];
        iVar3 = piVar6[-1];
        if (iVar13 < iVar10) {
          piVar6[-3] = iVar13;
          *(undefined8 *)(piVar6 + -2) = *(undefined8 *)(piVar6 + 4);
          piVar6[3] = iVar17;
          piVar6[4] = iVar8;
          piVar6[5] = iVar3;
        }
        else {
          piVar6[-3] = iVar10;
          *(undefined8 *)(piVar6 + -2) = *(undefined8 *)(piVar6 + 1);
          *piVar6 = iVar17;
          piVar6[1] = iVar8;
          piVar6[2] = iVar3;
          iVar10 = iVar17;
          if (iVar13 < iVar17) {
            *piVar6 = iVar13;
            *(undefined8 *)(piVar6 + 1) = *(undefined8 *)(piVar6 + 4);
            piVar6[3] = iVar17;
            piVar6[4] = iVar8;
            piVar6[5] = iVar3;
            iVar10 = iVar13;
          }
        }
      }
      else if (iVar13 < iVar10) {
        iVar8 = piVar6[4];
        uVar21 = *(undefined8 *)(piVar6 + 1);
        *piVar6 = iVar13;
        piVar6[1] = iVar8;
        piVar6[2] = piVar6[5];
        piVar6[3] = iVar10;
        *(undefined8 *)(piVar6 + 4) = uVar21;
        iVar10 = iVar13;
        if (iVar13 < iVar17) {
          uVar21 = *(undefined8 *)(piVar6 + -2);
          piVar6[-3] = iVar13;
          piVar6[-2] = iVar8;
          piVar6[-1] = piVar6[5];
          *piVar6 = iVar17;
          *(undefined8 *)(piVar6 + 1) = uVar21;
          iVar10 = iVar17;
        }
      }
      iVar13 = piVar20[2];
      uVar21 = *(undefined8 *)piVar20;
      *piVar20 = iVar10;
      *(undefined8 *)(piVar20 + 1) = *(undefined8 *)(piVar6 + 1);
      *(undefined8 *)piVar6 = uVar21;
      piVar6[2] = iVar13;
    }
LAB_1092de7d0:
    param_3 = param_3 + -1;
    iVar10 = *piVar20;
    param_1 = piVar20;
    if (((param_4 & 1) == 0) && (iVar10 <= piVar20[-3])) {
      if (iVar10 < param_2[-3]) {
        do {
          param_1 = param_1 + 3;
        } while (*param_1 <= iVar10);
      }
      else {
        do {
          param_1 = param_1 + 3;
          if (param_2 <= param_1) break;
        } while (*param_1 <= iVar10);
      }
      piVar6 = param_2;
      if (param_1 < param_2) {
        do {
          piVar6 = piVar6 + -3;
        } while (iVar10 < *piVar6);
      }
      uVar21 = *(undefined8 *)(piVar20 + 1);
      if (param_1 < piVar6) {
        iVar13 = *param_1;
        iVar17 = *piVar6;
        do {
          *param_1 = iVar17;
          uVar22 = *(undefined8 *)(param_1 + 1);
          *(undefined8 *)(param_1 + 1) = *(undefined8 *)(piVar6 + 1);
          *piVar6 = iVar13;
          *(undefined8 *)(piVar6 + 1) = uVar22;
          do {
            param_1 = param_1 + 3;
            iVar13 = *param_1;
          } while (iVar13 <= iVar10);
          do {
            piVar6 = piVar6 + -3;
            iVar17 = *piVar6;
          } while (iVar10 < iVar17);
        } while (param_1 < piVar6);
      }
      if (param_1 + -3 != piVar20) {
        *(undefined8 *)piVar20 = *(undefined8 *)(param_1 + -3);
        piVar20[2] = param_1[-1];
      }
      param_4 = 0;
      param_1[-3] = iVar10;
      *(undefined8 *)(param_1 + -2) = uVar21;
      goto LAB_1092de3ec;
    }
    lVar14 = 0;
    uVar21 = *(undefined8 *)(piVar20 + 1);
    do {
      iVar13 = *(int *)((long)piVar20 + lVar14 + 0xc);
      lVar14 = lVar14 + 0xc;
    } while (iVar13 < iVar10);
    piVar6 = (int *)((long)piVar20 + lVar14);
    piVar7 = param_2;
    if (lVar14 == 0xc) {
      do {
        if (piVar7 <= piVar6) break;
        piVar7 = piVar7 + -3;
      } while (iVar10 <= *piVar7);
    }
    else {
      do {
        piVar7 = piVar7 + -3;
      } while (iVar10 <= *piVar7);
    }
    param_1 = piVar6;
    if (piVar6 < piVar7) {
      iVar17 = *piVar7;
      piVar16 = piVar7;
      do {
        *param_1 = iVar17;
        uVar22 = *(undefined8 *)(param_1 + 1);
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(piVar16 + 1);
        *piVar16 = iVar13;
        *(undefined8 *)(piVar16 + 1) = uVar22;
        do {
          param_1 = param_1 + 3;
          iVar13 = *param_1;
        } while (iVar13 < iVar10);
        do {
          piVar16 = piVar16 + -3;
          iVar17 = *piVar16;
        } while (iVar10 <= iVar17);
      } while (param_1 < piVar16);
    }
    piVar16 = param_1 + -3;
    if (piVar16 != piVar20) {
      *(undefined8 *)piVar20 = *(undefined8 *)(param_1 + -3);
      piVar20[2] = param_1[-1];
    }
    param_1[-3] = iVar10;
    *(undefined8 *)(param_1 + -2) = uVar21;
    if (piVar6 < piVar7) {
LAB_1092de8e0:
      FUN_1092de3b0(piVar20,piVar16,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      piVar6 = piVar20;
      FUN_1092deff0(piVar20,piVar16);
      piVar7 = param_1;
      FUN_1092deff0(param_1,param_2);
      if ((int)piVar7 == 0) {
        if (((ulong)piVar6 & 1) == 0) goto LAB_1092de8e0;
      }
      else {
        param_1 = piVar20;
        param_2 = piVar16;
        if (((ulong)piVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1092deeb8; end: 1092defef;  */

void FUN_1092deeb8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar3 = *param_2;
  iVar4 = *param_1;
  iVar5 = *param_3;
  if (iVar3 < iVar4) {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    if (iVar5 < iVar3) {
      *param_1 = iVar5;
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_3 + 1);
    }
    else {
      *param_1 = iVar3;
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
      *param_2 = iVar4;
      param_2[1] = iVar1;
      param_2[2] = iVar2;
      iVar5 = *param_3;
      if (iVar4 <= iVar5) goto LAB_1092def78;
      *param_2 = iVar5;
      *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_3 + 1);
    }
    *param_3 = iVar4;
    param_3[1] = iVar1;
    param_3[2] = iVar2;
    iVar5 = iVar4;
  }
  else if (iVar5 < iVar3) {
    *param_2 = iVar5;
    uVar6 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_3 + 1);
    *param_3 = iVar3;
    *(undefined8 *)(param_3 + 1) = uVar6;
    iVar4 = *param_1;
    iVar5 = iVar3;
    if (*param_2 < iVar4) {
      *param_1 = *param_2;
      uVar6 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
      *param_2 = iVar4;
      *(undefined8 *)(param_2 + 1) = uVar6;
      iVar5 = *param_3;
    }
  }
LAB_1092def78:
  if (*param_4 < iVar5) {
    *param_3 = *param_4;
    uVar6 = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)(param_3 + 1) = *(undefined8 *)(param_4 + 1);
    *param_4 = iVar5;
    *(undefined8 *)(param_4 + 1) = uVar6;
    iVar3 = *param_2;
    if (*param_3 < iVar3) {
      *param_2 = *param_3;
      uVar6 = *(undefined8 *)(param_2 + 1);
      *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_3 + 1);
      *param_3 = iVar3;
      *(undefined8 *)(param_3 + 1) = uVar6;
      iVar3 = *param_1;
      if (*param_2 < iVar3) {
        *param_1 = *param_2;
        uVar6 = *(undefined8 *)(param_1 + 1);
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
        *param_2 = iVar3;
        *(undefined8 *)(param_2 + 1) = uVar6;
      }
    }
  }
  return;
}



/* Entry: 1092deff0; end: 1092df31f;  */

bool FUN_1092deff0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      iVar11 = *param_1;
      if (iVar11 <= param_2[-3]) {
        return true;
      }
      *param_1 = param_2[-3];
      uVar13 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + -2);
      param_2[-3] = iVar11;
      *(undefined8 *)(param_2 + -2) = uVar13;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      iVar11 = param_1[3];
      iVar4 = *param_1;
      iVar12 = param_2[-3];
      if (iVar11 < iVar4) {
        iVar2 = param_1[1];
        iVar3 = param_1[2];
        if (iVar12 < iVar11) {
          *param_1 = iVar12;
          *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + -2);
        }
        else {
          *param_1 = iVar11;
          *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_1 + 4);
          param_1[3] = iVar4;
          param_1[4] = iVar2;
          param_1[5] = iVar3;
          if (iVar4 <= param_2[-3]) {
            return true;
          }
          param_1[3] = param_2[-3];
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
        }
        param_2[-3] = iVar4;
        param_2[-2] = iVar2;
        param_2[-1] = iVar3;
        return true;
      }
      if (iVar11 <= iVar12) {
        return true;
      }
      param_1[3] = iVar12;
      uVar13 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
      param_2[-3] = iVar11;
      *(undefined8 *)(param_2 + -2) = uVar13;
      iVar11 = *param_1;
      if (iVar11 <= param_1[3]) {
        return true;
      }
      *param_1 = param_1[3];
      param_1[3] = iVar11;
      uVar13 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar13;
      return true;
    }
    if (uVar6 == 4) {
      FUN_1092deeb8(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar6 == 5) {
      FUN_1092deeb8(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
      iVar11 = param_1[9];
      if (iVar11 <= param_2[-3]) {
        return true;
      }
      param_1[9] = param_2[-3];
      uVar13 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      param_2[-3] = iVar11;
      *(undefined8 *)(param_2 + -2) = uVar13;
      iVar11 = param_1[9];
      iVar4 = param_1[6];
      if (iVar4 <= iVar11) {
        return true;
      }
      iVar12 = param_1[10];
      iVar2 = param_1[0xb];
      uVar13 = *(undefined8 *)(param_1 + 7);
      param_1[6] = iVar11;
      param_1[7] = iVar12;
      param_1[8] = iVar2;
      param_1[9] = iVar4;
      *(undefined8 *)(param_1 + 10) = uVar13;
      iVar4 = param_1[3];
      if (iVar4 <= iVar11) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_1 + 4);
      param_1[3] = iVar11;
      param_1[4] = iVar12;
      param_1[5] = iVar2;
      param_1[6] = iVar4;
      *(undefined8 *)(param_1 + 7) = uVar13;
      iVar4 = *param_1;
      if (iVar4 <= iVar11) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_1 + 1);
      *param_1 = iVar11;
      param_1[1] = iVar12;
      param_1[2] = iVar2;
      param_1[3] = iVar4;
      *(undefined8 *)(param_1 + 4) = uVar13;
      return true;
    }
  }
  iVar12 = param_1[6];
  iVar11 = param_1[3];
  iVar4 = *param_1;
  if (iVar11 < iVar4) {
    iVar2 = param_1[1];
    if (iVar12 < iVar11) {
      *param_1 = iVar12;
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_1 + 7);
    }
    else {
      *param_1 = iVar11;
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_1 + 4);
      param_1[3] = iVar4;
      param_1[4] = iVar2;
      param_1[5] = param_1[2];
      if (iVar4 <= iVar12) goto LAB_1092df274;
      param_1[3] = iVar12;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 7);
    }
    param_1[6] = iVar4;
    param_1[7] = iVar2;
    param_1[8] = param_1[2];
  }
  else if (iVar12 < iVar11) {
    iVar2 = param_1[7];
    uVar13 = *(undefined8 *)(param_1 + 4);
    param_1[3] = iVar12;
    param_1[4] = iVar2;
    param_1[5] = param_1[8];
    param_1[6] = iVar11;
    *(undefined8 *)(param_1 + 7) = uVar13;
    if (iVar12 < iVar4) {
      uVar13 = *(undefined8 *)(param_1 + 1);
      *param_1 = iVar12;
      param_1[1] = iVar2;
      param_1[2] = param_1[8];
      param_1[3] = iVar4;
      *(undefined8 *)(param_1 + 4) = uVar13;
    }
  }
LAB_1092df274:
  if (param_1 + 9 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    piVar8 = param_1 + 6;
    piVar9 = param_1 + 9;
    do {
      iVar4 = *piVar9;
      iVar12 = *piVar8;
      if (iVar4 < iVar12) {
        uVar13 = *(undefined8 *)(piVar9 + 1);
        lVar5 = lVar10;
        do {
          lVar7 = lVar5;
          *(int *)((long)param_1 + lVar7 + 0x24) = iVar12;
          *(undefined8 *)((long)param_1 + lVar7 + 0x28) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x1c);
          piVar8 = param_1;
          if (lVar7 == -0x18) goto LAB_1092df2d8;
          iVar12 = *(int *)((long)param_1 + lVar7 + 0xc);
          lVar5 = lVar7 + -0xc;
        } while (iVar4 < iVar12);
        piVar8 = (int *)((long)param_1 + lVar7 + 0x18);
LAB_1092df2d8:
        *piVar8 = iVar4;
        *(undefined8 *)(piVar8 + 1) = uVar13;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return piVar9 + 3 == param_2;
        }
      }
      piVar1 = piVar9 + 3;
      lVar10 = lVar10 + 0xc;
      piVar8 = piVar9;
      piVar9 = piVar1;
    } while (piVar1 != param_2);
  }
  return true;
}



/* Entry: 1092df320; end: 1092df443;  */

undefined8 * FUN_1092df320(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar5 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  puVar7 = param_1;
  if (uVar5 - (long)puVar10 < param_4) {
    puVar11 = param_1;
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
      __ZdlPv();
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar11 = puVar10;
    }
    if ((long)param_4 < 0) {
      func_0x000104c591bc();
      if (puVar11[0x14] != 0) {
        piVar1 = (int *)(puVar11[0x14] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar11 + 0xd);
        }
      }
      puVar11[0x14] = 0;
      puVar11[0x10] = 0;
      puVar11[0xf] = 0;
      puVar11[0x12] = 0;
      puVar11[0x11] = 0;
      if (0 < *(int *)((long)puVar11 + 0x6c)) {
        lVar6 = 0;
        lVar9 = puVar11[0x15];
        do {
          *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)((long)puVar11 + 0x6c));
      }
      puVar7 = (undefined8 *)puVar11[0x16];
      if (puVar7 != puVar11 + 0x17 && puVar7 != (undefined8 *)0x0) {
        _free(puVar7[-1]);
      }
      if (puVar11[8] != 0) {
        piVar1 = (int *)(puVar11[8] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar11 + 1);
        }
      }
      puVar11[8] = 0;
      puVar11[4] = 0;
      puVar11[3] = 0;
      puVar11[6] = 0;
      puVar11[5] = 0;
      if (0 < *(int *)((long)puVar11 + 0xc)) {
        lVar6 = 0;
        lVar9 = puVar11[9];
        do {
          *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)((long)puVar11 + 0xc));
      }
      puVar7 = (undefined8 *)puVar11[10];
      if (puVar7 != puVar11 + 0xb && puVar7 != (undefined8 *)0x0) {
        _free(puVar7[-1]);
      }
      return puVar11;
    }
    uVar8 = uVar5 * 2;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar5) {
      uVar8 = 0x7fffffffffffffff;
    }
    FUN_109246380(param_1,uVar8);
    puVar10 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar7 = puVar10;
      _memmove(puVar10,param_2,param_3);
    }
    param_3 = (long)puVar10 + param_3;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar11 - (long)puVar10) < param_4) {
      lVar6 = param_2 + ((long)puVar11 - (long)puVar10);
      if (puVar11 != puVar10) {
        _memmove(puVar10,param_2);
        puVar11 = (undefined8 *)param_1[1];
        puVar7 = puVar10;
      }
      param_3 = param_3 - lVar6;
      if (param_3 != 0) {
        puVar7 = puVar11;
        _memmove(puVar11,lVar6,param_3);
      }
      param_3 = (long)puVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar7 = puVar10;
        _memmove(puVar10,param_2,param_3);
      }
      param_3 = (long)puVar10 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar7;
}



/* Entry: 1092df444; end: 1092df563;  */

long FUN_1092df444(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x6c));
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != param_1 + 0xb8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1092df564; end: 1092df65f;  */

undefined8 * FUN_1092df564(double param_1,undefined8 *param_2,int param_3,int param_4)

{
  long *plVar1;
  
  *param_2 = &PTR_DAT_110aea290;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if (param_4 == 0) {
    plVar1 = (long *)0x10;
    __Znwm();
    func_0x0001092d96a8();
  }
  else if (param_4 == 6) {
    plVar1 = (long *)0x10;
    __Znwm();
    func_0x0001092dac9c();
  }
  else {
    plVar1 = (long *)0x8;
    __Znwm();
    *plVar1 = (long)&PTR_FUN_110ae9d88;
  }
  *(undefined1 *)(param_2 + 0xe) = 1;
  param_2[0xd] = plVar1;
  *(int *)(param_2 + 5) = param_3;
  param_2[1] = 0;
  (**(code **)(*plVar1 + 0x80))(plVar1);
  param_2[4] = param_1 * (double)param_3;
  param_2[0xc] = 0x3ff0000000000000;
  FUN_1092df660(param_2);
  param_2[2] = 0xfffffc00ff000000;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  return param_2;
}



/* Entry: 1092df660; end: 1092df7bb;  */

void FUN_1092df660(long param_1)

{
  int iVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = (double)*(int *)(param_1 + 0x28);
  dVar5 = dVar3 - *(double *)(param_1 + 8) * 2.0;
  *(double *)(param_1 + 0x30) = dVar5;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x90))();
  dVar5 = dVar5 * dVar3;
  dVar6 = *(double *)(param_1 + 0x30);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x98))();
  dVar7 = *(double *)(param_1 + 0x30);
  dVar4 = dVar3;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x88))();
  *(double *)(param_1 + 0x38) = dVar7 * dVar4;
  plVar2 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar2 + 0x10))();
  dVar4 = (dVar6 - dVar5 * 2.0) / (double)(int)plVar2;
  *(double *)(param_1 + 0x40) = dVar4;
  *(double *)(param_1 + 0x48) = dVar5 + *(double *)(param_1 + 8) + dVar4 * 0.5;
  plVar2 = *(long **)(param_1 + 0x68);
  (**(code **)(*plVar2 + 0x70))();
  if (((ulong)plVar2 & 1) == 0) {
    dVar7 = *(double *)(param_1 + 8);
  }
  else {
    dVar8 = *(double *)(param_1 + 0x30);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x78))();
    dVar7 = *(double *)(param_1 + 8);
    *(double *)(param_1 + 0x40) = dVar8 * dVar4;
    *(double *)(param_1 + 0x48) = dVar5 + dVar7 + *(double *)(param_1 + 0x38) * 0.5;
  }
  dVar6 = dVar6 * dVar3;
  dVar7 = dVar7 + (*(double *)(param_1 + 0x30) - dVar6) * 0.5;
  *(double *)(param_1 + 0x50) = dVar6 / 224.0;
  *(double *)(param_1 + 0x58) = dVar7;
  iVar1 = *(int *)(param_1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x80))();
  *(double *)(param_1 + 0x20) = dVar7 * (double)iVar1;
  return;
}



/* Entry: 1092df7bc; end: 1092df8af;  */

void FUN_1092df7bc(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_2 + 0x68) + 8))(&plStack_28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = *(long **)(param_2 + 0x68);
  (**(code **)(*plVar2 + 0x40))();
  func_0x000104bec9f0(param_1,(long)(int)plVar2,0);
  plVar3 = *(long **)(param_2 + 0x68);
  (**(code **)(*plVar3 + 0xa0))(plVar3,param_1,plStack_28);
  plVar2 = plStack_28;
  if (((ulong)plVar3 & 1) != 0) {
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    return;
  }
  ___cxa_allocate_exception(0x10);
  FUN_1092cf480();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092df880);
  (*pcVar1)();
}



/* Entry: 1092df8b0; end: 1092df913;  */

void FUN_1092df8b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 != 0) {
        FUN_1092d1fd4();
        __ZdlPv();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092df914; end: 1092df927;  */

void FUN_1092df914(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001092df924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0,param_2);
  return;
}



/* Entry: 1092df928; end: 1092e03e3;  */

undefined1 ** FUN_1092df928(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined8 extraout_x8;
  undefined1 *puVar14;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  undefined8 uVar17;
  double dVar18;
  long alStack_102c0 [3];
  undefined8 ****appppuStack_102a8 [2];
  char cStack_10291;
  undefined8 ****appppuStack_10290 [2];
  char cStack_10279;
  undefined **ppuStack_10278;
  undefined **ppuStack_10270;
  undefined1 auStack_10268 [56];
  undefined8 uStack_10230;
  char cStack_10219;
  undefined **appuStack_10208 [19];
  undefined8 ****ppppuStack_10170;
  ulong uStack_10168;
  byte bStack_10159;
  long alStack_10158 [2];
  char cStack_10141;
  undefined8 ****ppppuStack_10140;
  ulong uStack_10138;
  undefined8 uStack_10130;
  undefined8 ****appppuStack_10128 [2];
  char cStack_10111;
  undefined8 ****ppppuStack_10110;
  undefined8 uStack_10108;
  long lStack_10100;
  undefined8 uStack_100f8;
  undefined8 uStack_100f0;
  undefined8 uStack_100d8;
  undefined4 uStack_100d0;
  long lStack_100c8;
  undefined1 **ppuStack_100c0;
  undefined8 uStack_100b8;
  undefined1 *puStack_10098;
  undefined1 *puStack_10090;
  undefined8 *puStack_10088;
  undefined1 auStack_10080 [65536];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100d8 = 0;
  uStack_100f0 = 0;
  uStack_100f8 = 0;
  uStack_100d0 = 0;
  lStack_100c8 = 0;
  uStack_100b8 = 0;
  puStack_10098 = auStack_10080;
  puStack_10088 = &uStack_80;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_10090 = puStack_10098;
  FUN_10926db08(&ppuStack_10278);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
            (&ppuStack_10278,*(undefined4 *)(param_1 + 0x28));
  FUN_10926dc5c(appppuStack_10290,&ppuStack_10270,&ppppuStack_10110);
  ppppuStack_10110 = (undefined8 ****)0x0;
  uStack_10108 = 0;
  lStack_10100 = 0;
  FUN_1092e2190(&ppuStack_10270,&ppppuStack_10110);
  if (lStack_10100 < 0) {
    __ZdlPv(ppppuStack_10110);
  }
  FUN_1092b4db8(&ppuStack_10278,&UNK_10f565cfd,4);
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_10926dc5c(appppuStack_102a8,&ppuStack_10270,&ppppuStack_10110);
  ppppuStack_10110 = (undefined8 *****)0x0;
  uStack_10108 = 0;
  lStack_10100 = 0;
  FUN_1092e2190(&ppuStack_10270,&ppppuStack_10110);
  if (lStack_10100 < 0) {
    __ZdlPv(ppppuStack_10110);
  }
  ppuVar4 = &puStack_10098;
  FUN_1092d4258(ppuVar4,0x60);
  ppuVar4[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar4 + 5) = 1;
  ppuVar16 = ppuVar4 + 6;
  *ppuVar16 = (undefined1 *)0x0;
  ppuVar15 = ppuVar4 + 8;
  *ppuVar15 = (undefined1 *)0x0;
  *ppuVar4 = "svg";
  ppuVar4[2] = (undefined1 *)0x3;
  ppuVar4[1] = (undefined1 *)0x0;
  ppuVar5 = &puStack_10098;
  FUN_1092e03e4(ppuVar5,&UNK_10f565d02,&UNK_10f565d08);
  if (*ppuVar15 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar8 = ppuVar15;
  }
  else {
    puVar14 = ppuVar4[9];
    ppuVar8 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar5;
  ppuVar5[5] = puVar14;
  ppuVar4[9] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[6] = (undefined1 *)0x0;
  ppuVar5 = &puStack_10098;
  FUN_1092e03e4(ppuVar5,"version",&UNK_10f565d23);
  if (*ppuVar15 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar8 = ppuVar15;
  }
  else {
    puVar14 = ppuVar4[9];
    ppuVar8 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar5;
  ppuVar5[5] = puVar14;
  ppuVar4[9] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[6] = (undefined1 *)0x0;
  pppppuVar3 = (undefined8 *****)appppuStack_102a8[0];
  if (-1 < cStack_10291) {
    pppppuVar3 = appppuStack_102a8;
  }
  ppuVar5 = &puStack_10098;
  FUN_1092e03e4(ppuVar5,"viewBox",pppppuVar3);
  if (*ppuVar15 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar8 = ppuVar15;
  }
  else {
    puVar14 = ppuVar4[9];
    ppuVar8 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar5;
  ppuVar5[5] = puVar14;
  ppuVar4[9] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[6] = (undefined1 *)0x0;
  pppppuVar3 = (undefined8 *****)appppuStack_10290[0];
  if (-1 < cStack_10279) {
    pppppuVar3 = appppuStack_10290;
  }
  ppuVar5 = &puStack_10098;
  FUN_1092e03e4(ppuVar5,"width",pppppuVar3);
  if (*ppuVar15 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar8 = ppuVar15;
  }
  else {
    puVar14 = ppuVar4[9];
    ppuVar8 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar5;
  ppuVar5[5] = puVar14;
  ppuVar4[9] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[6] = (undefined1 *)0x0;
  pppppuVar3 = (undefined8 *****)appppuStack_10290[0];
  if (-1 < cStack_10279) {
    pppppuVar3 = appppuStack_10290;
  }
  ppuVar5 = &puStack_10098;
  FUN_1092e03e4(ppuVar5,"height",pppppuVar3);
  puVar14 = (undefined1 *)0x0;
  if (*ppuVar15 != (undefined1 *)0x0) {
    puVar14 = ppuVar4[9];
    ppuVar15 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar15 = (undefined1 *)ppuVar5;
  ppuVar5[5] = puVar14;
  ppuVar4[9] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[6] = (undefined1 *)0x0;
  plVar10 = &lStack_100c8;
  if (lStack_100c8 != 0) {
    plVar10 = (long *)((long)ppuStack_100c0 + 0x58);
  }
  ppuVar5 = (undefined1 **)(undefined1 *)0x0;
  if (lStack_100c8 != 0) {
    ppuVar5 = ppuStack_100c0;
  }
  *plVar10 = (long)ppuVar4;
  ppuStack_100c0 = ppuVar4;
  ppuVar4[4] = (undefined1 *)&uStack_100f8;
  ppuVar4[10] = (undefined1 *)ppuVar5;
  ppuVar4[0xb] = (undefined1 *)0x0;
  FUN_1092df7bc(alStack_102c0,param_1,param_2,param_3);
  ppuVar5 = &puStack_10098;
  FUN_1092d4258(ppuVar5,0x60);
  ppuVar5[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar5 + 5) = 1;
  ppuVar15 = ppuVar5 + 8;
  *ppuVar15 = (undefined1 *)0x0;
  ppuVar5[6] = (undefined1 *)0x0;
  *ppuVar5 = "path";
  ppuVar5[2] = (undefined1 *)0x4;
  ppuVar5[1] = (undefined1 *)0x0;
  puVar6 = &uStack_100f8;
  FUN_1092e1bd0(puVar6,ppuVar5,*(undefined4 *)(param_1 + 0x10));
  FUN_1092d2014();
  func_0x000107c31940(&ppppuStack_10110,PTR_DAT_1132cee88);
  FUN_1092d2088(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x58),puVar6,&ppppuStack_10110);
  if (lStack_10100 < 0) {
    __ZdlPv(ppppuStack_10110);
  }
  FUN_1092d45e8(appppuStack_10128,puVar6);
  FUN_1092df8b0(puVar6);
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(double *)(param_1 + 8) <= 0.0) {
    iVar1 = *(int *)(param_1 + 0x28) + -2;
  }
  uVar17 = 0;
  if (*(double *)(param_1 + 8) <= 0.0) {
    uVar17 = 0x3ff0000000000000;
  }
  uVar7 = 1;
  FUN_1092d46dc(uVar17,uVar17,(double)iVar1,(double)iVar1,*(undefined8 *)(param_1 + 0x20),1);
  FUN_1092d45e8(&ppppuStack_10140);
  pppppuVar3 = (undefined8 *****)ppppuStack_10140;
  if (-1 < (long)uStack_10130) {
    uStack_10138 = (ulong)uStack_10130._7_1_;
    pppppuVar3 = &ppppuStack_10140;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (appppuStack_10128,pppppuVar3,uStack_10138);
  if ((char)uStack_10130._7_1_ < '\0') {
    __ZdlPv(ppppuStack_10140);
  }
  FUN_1092df8b0(uVar7);
  pppppuVar3 = (undefined8 *****)appppuStack_10128[0];
  if (-1 < cStack_10111) {
    pppppuVar3 = appppuStack_10128;
  }
  ppuVar8 = &puStack_10098;
  FUN_1092e1e6c(ppuVar8,pppppuVar3);
  ppuVar9 = &puStack_10098;
  FUN_1092e03e4(ppuVar9,"d",ppuVar8);
  puVar14 = (undefined1 *)0x0;
  if (*ppuVar15 != (undefined1 *)0x0) {
    puVar14 = ppuVar5[9];
    ppuVar15 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar15 = (undefined1 *)ppuVar9;
  ppuVar9[5] = puVar14;
  ppuVar5[9] = (undefined1 *)ppuVar9;
  ppuVar9[4] = (undefined1 *)ppuVar5;
  ppuVar9[6] = (undefined1 *)0x0;
  if (*ppuVar16 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar15 = ppuVar16;
  }
  else {
    puVar14 = ppuVar4[7];
    ppuVar15 = (undefined1 **)(puVar14 + 0x58);
  }
  *ppuVar15 = (undefined1 *)ppuVar5;
  ppuVar5[10] = puVar14;
  ppuVar4[7] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[0xb] = (undefined1 *)0x0;
  if (cStack_10111 < '\0') {
    __ZdlPv(appppuStack_10128[0]);
  }
  ppuVar5 = &puStack_10098;
  FUN_1092d4258(ppuVar5,0x60);
  ppuVar5[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar5 + 5) = 1;
  ppuVar5[6] = (undefined1 *)0x0;
  ppuVar15 = ppuVar5 + 8;
  *ppuVar15 = (undefined1 *)0x0;
  *ppuVar5 = "path";
  ppuVar5[2] = (undefined1 *)0x4;
  ppuVar5[1] = (undefined1 *)0x0;
  FUN_1092e1bd0(&uStack_100f8,ppuVar5,*(undefined4 *)(param_1 + 0x14));
  dVar18 = *(double *)(param_1 + 8);
  uVar17 = 0;
  FUN_1092d46dc(dVar18,dVar18,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                *(double *)(param_1 + 0x20) - dVar18,0);
  FUN_1092d45e8(&ppppuStack_10110);
  FUN_1092df8b0(uVar17);
  FUN_1092d2014();
  func_0x000107c31940(appppuStack_10128,PTR_DAT_1132cee90);
  FUN_1092d2088(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x58),uVar17,appppuStack_10128);
  if (cStack_10111 < '\0') {
    __ZdlPv(appppuStack_10128[0]);
  }
  FUN_1092d45e8(alStack_10158,uVar17);
  FUN_1092e1ec8(&ppppuStack_10170,param_1,alStack_102c0);
  pppppuVar3 = (undefined8 *****)ppppuStack_10170;
  if (-1 < (char)bStack_10159) {
    uStack_10168 = (ulong)bStack_10159;
    pppppuVar3 = &ppppuStack_10170;
  }
  plVar10 = alStack_10158;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar10,pppppuVar3,uStack_10168);
  uStack_10138 = plVar10[1];
  ppppuStack_10140 = (undefined8 ****)*plVar10;
  uStack_10130 = plVar10[2];
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  uVar2 = uStack_10138;
  pppppuVar3 = (undefined8 *****)ppppuStack_10140;
  if (-1 < (long)uStack_10130) {
    uVar2 = uStack_10130 >> 0x38;
    pppppuVar3 = &ppppuStack_10140;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppuStack_10110,pppppuVar3,uVar2);
  if ((long)uStack_10130 < 0) {
    __ZdlPv(ppppuStack_10140);
  }
  if ((char)bStack_10159 < '\0') {
    __ZdlPv(ppppuStack_10170);
  }
  if (cStack_10141 < '\0') {
    __ZdlPv(alStack_10158[0]);
  }
  FUN_1092df8b0(uVar17);
  pppppuVar3 = (undefined8 *****)ppppuStack_10110;
  if (-1 < lStack_10100) {
    pppppuVar3 = &ppppuStack_10110;
  }
  ppuVar8 = &puStack_10098;
  FUN_1092e1e6c(ppuVar8,pppppuVar3);
  ppuVar9 = &puStack_10098;
  FUN_1092e03e4(ppuVar9,"d",ppuVar8);
  puVar14 = (undefined1 *)0x0;
  if (*ppuVar15 != (undefined1 *)0x0) {
    puVar14 = ppuVar5[9];
    ppuVar15 = (undefined1 **)(puVar14 + 0x30);
  }
  *ppuVar15 = (undefined1 *)ppuVar9;
  ppuVar9[5] = puVar14;
  ppuVar5[9] = (undefined1 *)ppuVar9;
  ppuVar9[4] = (undefined1 *)ppuVar5;
  ppuVar9[6] = (undefined1 *)0x0;
  if (*ppuVar16 == (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    ppuVar15 = ppuVar16;
  }
  else {
    puVar14 = ppuVar4[7];
    ppuVar15 = (undefined1 **)(puVar14 + 0x58);
  }
  *ppuVar15 = (undefined1 *)ppuVar5;
  ppuVar5[10] = puVar14;
  ppuVar4[7] = (undefined1 *)ppuVar5;
  ppuVar5[4] = (undefined1 *)ppuVar4;
  ppuVar5[0xb] = (undefined1 *)0x0;
  if (lStack_10100 < 0) {
    __ZdlPv(ppppuStack_10110);
  }
  if (*(char *)(param_1 + 0x1b) != '\0') {
    ppuVar5 = &puStack_10098;
    FUN_1092d4258(ppuVar5,0x60);
    ppuVar5[4] = (undefined1 *)0x0;
    *(undefined4 *)(ppuVar5 + 5) = 1;
    ppuVar5[6] = (undefined1 *)0x0;
    ppuVar15 = ppuVar5 + 8;
    *ppuVar15 = (undefined1 *)0x0;
    *ppuVar5 = "path";
    ppuVar5[2] = (undefined1 *)0x4;
    ppuVar5[1] = (undefined1 *)0x0;
    puVar6 = &uStack_100f8;
    FUN_1092e1bd0(puVar6,ppuVar5,*(undefined4 *)(param_1 + 0x18));
    FUN_1092d2014();
    func_0x000107c31940(&ppppuStack_10110,PTR_DAT_1132cee88);
    FUN_1092d2088(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x58),puVar6,&ppppuStack_10110);
    if (lStack_10100 < 0) {
      __ZdlPv(ppppuStack_10110);
    }
    FUN_1092d45e8(appppuStack_10128,puVar6);
    FUN_1092df8b0(puVar6);
    pppppuVar3 = (undefined8 *****)appppuStack_10128[0];
    if (-1 < cStack_10111) {
      pppppuVar3 = appppuStack_10128;
    }
    ppuVar8 = &puStack_10098;
    FUN_1092e1e6c(ppuVar8,pppppuVar3);
    ppuVar9 = &puStack_10098;
    FUN_1092e03e4(ppuVar9,"d",ppuVar8);
    puVar14 = (undefined1 *)0x0;
    if (*ppuVar15 != (undefined1 *)0x0) {
      puVar14 = ppuVar5[9];
      ppuVar15 = (undefined1 **)(puVar14 + 0x30);
    }
    *ppuVar15 = (undefined1 *)ppuVar9;
    ppuVar9[5] = puVar14;
    ppuVar5[9] = (undefined1 *)ppuVar9;
    ppuVar9[4] = (undefined1 *)ppuVar5;
    ppuVar9[6] = (undefined1 *)0x0;
    puVar14 = (undefined1 *)0x0;
    if (*ppuVar16 != (undefined1 *)0x0) {
      puVar14 = ppuVar4[7];
      ppuVar16 = (undefined1 **)(puVar14 + 0x58);
    }
    *ppuVar16 = (undefined1 *)ppuVar5;
    ppuVar5[10] = puVar14;
    ppuVar4[7] = (undefined1 *)ppuVar5;
    ppuVar5[4] = (undefined1 *)ppuVar4;
    ppuVar5[0xb] = (undefined1 *)0x0;
    if (cStack_10111 < '\0') {
      __ZdlPv(appppuStack_10128[0]);
    }
  }
  puVar6 = &uStack_100f8;
  FUN_1092e21dc(&ppuStack_10278,0,puVar6,0);
  FUN_10926dc5c(extraout_x8,&ppuStack_10270,&ppppuStack_10110);
  if (alStack_102c0[0] != 0) {
    __ZdlPv();
  }
  if (cStack_10291 < '\0') {
    __ZdlPv(appppuStack_102a8[0]);
  }
  if (cStack_10279 < '\0') {
    __ZdlPv(appppuStack_10290[0]);
  }
  appuStack_10208[0] = &PTR_DAT_11088d708;
  ppuStack_10278 = &PTR_SUB_11088d6e0;
  ppuStack_10270 = &PTR_DAT_11088d7b0;
  if (cStack_10219 < '\0') {
    __ZdlPv(uStack_10230);
  }
  ppuStack_10270 =
       (undefined **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_10268);
  ppuVar13 = &PTR_PTR_11088d720;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_10278);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_10208);
  ppuVar4 = &puStack_10098;
  FUN_1092d2c38();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (lStack_10100 < 0) {
      __ZdlPv(ppppuStack_10110);
    }
    if (alStack_102c0[0] != 0) {
      __ZdlPv();
    }
    if (cStack_10291 < '\0') {
      __ZdlPv(appppuStack_102a8[0]);
    }
    if (cStack_10279 < '\0') {
      __ZdlPv(appppuStack_10290[0]);
    }
    func_0x000105490284(&ppuStack_10278);
    FUN_1092d2c38(&puStack_10098);
    __Unwind_Resume(ppuVar4);
    func_0x000104bd46a0();
    FUN_1092d4258();
    ppuVar4[4] = (undefined1 *)0x0;
    *ppuVar4 = (undefined1 *)0x0;
    ppuVar4[1] = (undefined1 *)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar11 = ppuVar13;
      _strlen();
      *ppuVar4 = (undefined1 *)ppuVar13;
      ppuVar4[2] = (undefined1 *)ppuVar11;
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar12 = puVar6;
      _strlen();
      ppuVar4[1] = (undefined1 *)puVar6;
      ppuVar4[3] = (undefined1 *)puVar12;
    }
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 1092e03e4; end: 1092e044b;  */

long * FUN_1092e03e4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  FUN_1092d4258(param_1,0x38);
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar1 = param_2;
    _strlen();
    *param_1 = param_2;
    param_1[2] = lVar1;
  }
  if (param_3 != 0) {
    lVar1 = param_3;
    _strlen();
    param_1[1] = param_3;
    param_1[3] = lVar1;
  }
  return param_1;
}



/* Entry: 1092e044c; end: 1092e0b5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092e044c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 extraout_x8;
  undefined1 *puVar16;
  undefined *puVar17;
  long *plVar18;
  undefined **ppuVar19;
  double dVar20;
  undefined1 *puStack_10300;
  ulong uStack_102f8;
  byte bStack_102e9;
  undefined8 *******apppppppuStack_102e8 [2];
  char cStack_102d1;
  undefined ***pppuStack_102d0;
  undefined8 *puStack_102c8;
  undefined8 uStack_102c0;
  undefined1 **ppuStack_102b8;
  undefined1 **ppuStack_102b0;
  long lStack_102a8;
  undefined8 uStack_102a0;
  undefined1 **ppuStack_10298;
  undefined1 *puStack_10290;
  code *pcStack_10288;
  undefined8 uStack_10280;
  long alStack_10278 [3];
  undefined8 *******apppppppuStack_10260 [2];
  char cStack_10249;
  undefined8 *******apppppppuStack_10248 [2];
  char cStack_10231;
  undefined **ppuStack_10230;
  undefined **ppuStack_10228;
  undefined1 auStack_10220 [56];
  undefined8 uStack_101e8;
  char cStack_101d1;
  undefined **appuStack_101c0 [19];
  undefined8 *******pppppppuStack_10128;
  ulong uStack_10120;
  byte bStack_10111;
  undefined8 *******pppppppuStack_10110;
  undefined8 uStack_10108;
  long lStack_10100;
  undefined8 uStack_100f8;
  undefined8 uStack_100f0;
  undefined8 uStack_100d8;
  undefined4 uStack_100d0;
  long lStack_100c8;
  undefined1 **ppuStack_100c0;
  undefined8 uStack_100b8;
  undefined1 *puStack_10098;
  undefined1 *puStack_10090;
  undefined8 *puStack_10088;
  undefined1 auStack_10080 [65536];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100d8 = 0;
  uStack_100f0 = 0;
  uStack_100f8 = 0;
  uStack_100d0 = 0;
  lStack_100c8 = 0;
  uStack_100b8 = 0;
  puStack_10098 = auStack_10080;
  puStack_10088 = &uStack_80;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_10280 = extraout_x8;
  puStack_10090 = puStack_10098;
  FUN_10926db08(&ppuStack_10230);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
            (&ppuStack_10230,*(undefined4 *)(param_1 + 0x28));
  FUN_10926dc5c(apppppppuStack_10248,&ppuStack_10228,&pppppppuStack_10110);
  pppppppuStack_10110 = (undefined8 *******)0x0;
  uStack_10108 = 0;
  lStack_10100 = 0;
  FUN_1092e2190(&ppuStack_10228,&pppppppuStack_10110);
  if (lStack_10100 < 0) {
    __ZdlPv(pppppppuStack_10110);
  }
  FUN_1092b4db8(&ppuStack_10230,&UNK_10f565cfd,4);
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_10926dc5c(apppppppuStack_10260,&ppuStack_10228,&pppppppuStack_10110);
  pppppppuStack_10110 = (undefined8 *******)0x0;
  uStack_10108 = 0;
  lStack_10100 = 0;
  FUN_1092e2190(&ppuStack_10228,&pppppppuStack_10110);
  if (lStack_10100 < 0) {
    __ZdlPv(pppppppuStack_10110);
  }
  ppuVar3 = &puStack_10098;
  FUN_1092d4258(ppuVar3,0x60);
  ppuVar3[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar3 + 5) = 1;
  ppuVar10 = ppuVar3 + 6;
  *ppuVar10 = (undefined1 *)0x0;
  ppuVar9 = ppuVar3 + 8;
  *ppuVar9 = (undefined1 *)0x0;
  *ppuVar3 = "svg";
  ppuVar3[2] = (undefined1 *)0x3;
  ppuVar3[1] = (undefined1 *)0x0;
  ppuVar4 = &puStack_10098;
  FUN_1092e03e4(ppuVar4,&UNK_10f565d02,&UNK_10f565d08);
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    ppuVar7 = ppuVar9;
  }
  else {
    puVar16 = ppuVar3[9];
    ppuVar7 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar7 = (undefined1 *)ppuVar4;
  ppuVar4[5] = puVar16;
  ppuVar3[9] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[6] = (undefined1 *)0x0;
  ppuVar4 = &puStack_10098;
  FUN_1092e03e4(ppuVar4,"version",&UNK_10f565d23);
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    ppuVar7 = ppuVar9;
  }
  else {
    puVar16 = ppuVar3[9];
    ppuVar7 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar7 = (undefined1 *)ppuVar4;
  ppuVar4[5] = puVar16;
  ppuVar3[9] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[6] = (undefined1 *)0x0;
  pppppppuVar2 = apppppppuStack_10260[0];
  if (-1 < cStack_10249) {
    pppppppuVar2 = apppppppuStack_10260;
  }
  ppuVar4 = &puStack_10098;
  FUN_1092e03e4(ppuVar4,"viewBox",pppppppuVar2);
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    ppuVar7 = ppuVar9;
  }
  else {
    puVar16 = ppuVar3[9];
    ppuVar7 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar7 = (undefined1 *)ppuVar4;
  ppuVar4[5] = puVar16;
  ppuVar3[9] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[6] = (undefined1 *)0x0;
  pppppppuVar2 = apppppppuStack_10248[0];
  if (-1 < cStack_10231) {
    pppppppuVar2 = apppppppuStack_10248;
  }
  ppuVar4 = &puStack_10098;
  FUN_1092e03e4(ppuVar4,"width",pppppppuVar2);
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    ppuVar7 = ppuVar9;
  }
  else {
    puVar16 = ppuVar3[9];
    ppuVar7 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar7 = (undefined1 *)ppuVar4;
  ppuVar4[5] = puVar16;
  ppuVar3[9] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[6] = (undefined1 *)0x0;
  pppppppuVar2 = apppppppuStack_10248[0];
  if (-1 < cStack_10231) {
    pppppppuVar2 = apppppppuStack_10248;
  }
  ppuVar4 = &puStack_10098;
  FUN_1092e03e4(ppuVar4,"height",pppppppuVar2);
  puVar16 = (undefined1 *)0x0;
  if (*ppuVar9 != (undefined1 *)0x0) {
    puVar16 = ppuVar3[9];
    ppuVar9 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar9 = (undefined1 *)ppuVar4;
  ppuVar4[5] = puVar16;
  ppuVar3[9] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[6] = (undefined1 *)0x0;
  plVar18 = &lStack_100c8;
  if (lStack_100c8 != 0) {
    plVar18 = (long *)((long)ppuStack_100c0 + 0x58);
  }
  ppuVar4 = (undefined1 **)(undefined1 *)0x0;
  if (lStack_100c8 != 0) {
    ppuVar4 = ppuStack_100c0;
  }
  *plVar18 = (long)ppuVar3;
  ppuStack_100c0 = ppuVar3;
  ppuVar3[4] = (undefined1 *)&uStack_100f8;
  ppuVar3[10] = (undefined1 *)ppuVar4;
  ppuVar3[0xb] = (undefined1 *)0x0;
  FUN_1092df7bc(alStack_10278,param_1,param_2,param_3);
  ppuVar4 = &puStack_10098;
  FUN_1092d4258(ppuVar4,0x60);
  ppuVar4[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar4 + 5) = 1;
  ppuVar9 = ppuVar4 + 8;
  *ppuVar9 = (undefined1 *)0x0;
  ppuVar4[6] = (undefined1 *)0x0;
  *ppuVar4 = "path";
  ppuVar4[2] = (undefined1 *)0x4;
  ppuVar4[1] = (undefined1 *)0x0;
  FUN_1092e1bd0(&uStack_100f8,ppuVar4,*(undefined4 *)(param_1 + 0x10));
  dVar20 = (double)(*(int *)(param_1 + 0x28) / 2);
  uVar5 = 0;
  FUN_1092d4acc(dVar20,dVar20,(*(double *)(param_1 + 0x30) / 750.0) * 250.0,0);
  FUN_1092d45e8(&pppppppuStack_10110);
  FUN_1092df8b0(uVar5);
  iVar15 = *(int *)(param_1 + 0x28);
  if (*(double *)(param_1 + 8) <= 0.0) {
    iVar15 = *(int *)(param_1 + 0x28) + -2;
  }
  uVar5 = 0;
  if (*(double *)(param_1 + 8) <= 0.0) {
    uVar5 = 0x3ff0000000000000;
  }
  uVar6 = 1;
  FUN_1092d46dc(uVar5,uVar5,(double)iVar15,(double)iVar15,*(undefined8 *)(param_1 + 0x20));
  FUN_1092d45e8(&pppppppuStack_10128);
  pppppppuVar2 = pppppppuStack_10128;
  if (-1 < (char)bStack_10111) {
    uStack_10120 = (ulong)bStack_10111;
    pppppppuVar2 = &pppppppuStack_10128;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&pppppppuStack_10110,pppppppuVar2,uStack_10120);
  if ((char)bStack_10111 < '\0') {
    __ZdlPv(pppppppuStack_10128);
  }
  FUN_1092df8b0(uVar6);
  pppppppuVar2 = pppppppuStack_10110;
  if (-1 < lStack_10100) {
    pppppppuVar2 = &pppppppuStack_10110;
  }
  ppuVar7 = &puStack_10098;
  FUN_1092e1e6c(ppuVar7,pppppppuVar2);
  ppuVar8 = &puStack_10098;
  FUN_1092e03e4(ppuVar8,"d",ppuVar7);
  puVar16 = (undefined1 *)0x0;
  if (*ppuVar9 != (undefined1 *)0x0) {
    puVar16 = ppuVar4[9];
    ppuVar9 = (undefined1 **)(puVar16 + 0x30);
  }
  *ppuVar9 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar16;
  ppuVar4[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar4;
  ppuVar8[6] = (undefined1 *)0x0;
  puVar16 = (undefined1 *)0x0;
  if (*ppuVar10 != (undefined1 *)0x0) {
    puVar16 = ppuVar3[7];
    ppuVar10 = (undefined1 **)(puVar16 + 0x58);
  }
  *ppuVar10 = (undefined1 *)ppuVar4;
  ppuVar4[10] = puVar16;
  ppuVar3[7] = (undefined1 *)ppuVar4;
  ppuVar4[4] = (undefined1 *)ppuVar3;
  ppuVar4[0xb] = (undefined1 *)0x0;
  if (lStack_10100 < 0) {
    __ZdlPv(pppppppuStack_10110);
  }
  uVar5 = param_4;
  FUN_1092e0b60(param_1,&uStack_100f8,ppuVar3,alStack_10278);
  iVar15 = (int)uVar5;
  puVar14 = &uStack_100f8;
  uVar5 = 0;
  FUN_1092e21dc(&ppuStack_10230,0,puVar14,0);
  FUN_10926dc5c(uStack_10280,&ppuStack_10228,&pppppppuStack_10110);
  if (alStack_10278[0] != 0) {
    __ZdlPv();
  }
  if (cStack_10249 < '\0') {
    __ZdlPv(apppppppuStack_10260[0]);
  }
  if (cStack_10231 < '\0') {
    __ZdlPv(apppppppuStack_10248[0]);
  }
  appuStack_101c0[0] = &PTR_DAT_11088d708;
  ppuStack_10230 = &PTR_SUB_11088d6e0;
  ppuStack_10228 = &PTR_DAT_11088d7b0;
  if (cStack_101d1 < '\0') {
    __ZdlPv(uStack_101e8);
  }
  ppuStack_10228 =
       (undefined **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_10220);
  ppuVar13 = &PTR_PTR_11088d720;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_10230);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_101c0);
  ppuVar9 = &puStack_10098;
  FUN_1092d2c38();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar13 == 0) {
    __Unwind_Resume(ppuVar9);
  }
  ppuVar10 = ppuVar9;
  func_0x000104bd46a0();
  pcStack_10288 = FUN_1092e0b60;
  ppuVar11 = ppuVar13 + 0xc;
  pppuStack_102d0 = &ppuStack_10230;
  puStack_102c8 = &uStack_100f8;
  uStack_102c0 = uVar6;
  ppuStack_102b8 = ppuVar4;
  ppuStack_102b0 = ppuVar3;
  lStack_102a8 = param_1;
  uStack_102a0 = param_4;
  ppuStack_10298 = ppuVar9;
  puStack_10290 = &stack0xfffffffffffffff0;
  FUN_1092d4258(ppuVar11,0x60);
  ppuVar11[4] = (undefined *)0x0;
  *(undefined4 *)(ppuVar11 + 5) = 1;
  ppuVar19 = ppuVar11 + 8;
  *ppuVar19 = (undefined *)0x0;
  ppuVar11[6] = (undefined *)0x0;
  *ppuVar11 = "path";
  ppuVar11[2] = (undefined *)0x4;
  ppuVar11[1] = (undefined *)0x0;
  FUN_1092e1bd0(ppuVar13,ppuVar11,*(undefined4 *)((long)ppuVar10 + 0x14));
  puVar16 = ppuVar10[1];
  uVar6 = 0;
  FUN_1092d46dc(puVar16,puVar16,ppuVar10[6],ppuVar10[6],(double)ppuVar10[4] - (double)puVar16,0);
  FUN_1092d45e8(apppppppuStack_102e8);
  FUN_1092df8b0(uVar6);
  FUN_1092e1ec8(&puStack_10300,ppuVar10,uVar5);
  uVar1 = uStack_102f8;
  ppuVar3 = (undefined1 **)puStack_10300;
  if (-1 < (char)bStack_102e9) {
    uVar1 = (ulong)bStack_102e9;
    ppuVar3 = &puStack_10300;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (apppppppuStack_102e8,ppuVar3,uVar1);
  if ((char)bStack_102e9 < '\0') {
    __ZdlPv(puStack_10300);
  }
  if (iVar15 != 0) {
    uVar5 = 1;
    FUN_1092d4acc((double)(*(int *)(ppuVar10 + 5) / 2),(double)(*(int *)(ppuVar10 + 5) / 2),
                  ((double)ppuVar10[6] / 750.0) * 250.0 + ((double)ppuVar10[6] / 750.0) * -5.0,1);
    FUN_1092d45e8(&puStack_10300);
    ppuVar3 = (undefined1 **)puStack_10300;
    if (-1 < (char)bStack_102e9) {
      uStack_102f8 = (ulong)bStack_102e9;
      ppuVar3 = &puStack_10300;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (apppppppuStack_102e8,ppuVar3,uStack_102f8);
    if ((char)bStack_102e9 < '\0') {
      __ZdlPv(puStack_10300);
    }
    FUN_1092df8b0(uVar5);
  }
  pppppppuVar2 = apppppppuStack_102e8[0];
  if (-1 < cStack_102d1) {
    pppppppuVar2 = apppppppuStack_102e8;
  }
  ppuVar12 = ppuVar13 + 0xc;
  FUN_1092e1e6c(ppuVar12,pppppppuVar2);
  ppuVar13 = ppuVar13 + 0xc;
  FUN_1092e03e4(ppuVar13,"d",ppuVar12);
  puVar17 = (undefined *)0x0;
  if (*ppuVar19 != (undefined *)0x0) {
    puVar17 = ppuVar11[9];
    ppuVar19 = (undefined **)(puVar17 + 0x30);
  }
  *ppuVar19 = (undefined *)ppuVar13;
  ppuVar13[5] = puVar17;
  ppuVar11[9] = (undefined *)ppuVar13;
  ppuVar13[4] = (undefined *)ppuVar11;
  ppuVar13[6] = (undefined *)0x0;
  plVar18 = puVar14 + 6;
  puVar17 = (undefined *)0x0;
  if (*plVar18 != 0) {
    puVar17 = (undefined *)puVar14[7];
    plVar18 = (long *)(puVar17 + 0x58);
  }
  *plVar18 = (long)ppuVar11;
  ppuVar11[10] = puVar17;
  puVar14[7] = ppuVar11;
  ppuVar11[4] = (undefined *)puVar14;
  ppuVar11[0xb] = (undefined *)0x0;
  if (cStack_102d1 < '\0') {
    __ZdlPv(apppppppuStack_102e8[0]);
  }
  return;
}



/* Entry: 1092e0b60; end: 1092e0ddb;  */

void FUN_1092e0b60(long param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 ****appppuStack_68 [2];
  char cStack_51;
  
  puVar4 = (undefined8 *)(param_2 + 0x60);
  FUN_1092d4258(puVar4,0x60);
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = 1;
  plVar7 = puVar4 + 8;
  *plVar7 = 0;
  puVar4[6] = 0;
  *puVar4 = "path";
  puVar4[2] = 4;
  puVar4[1] = 0;
  FUN_1092e1bd0(param_2,puVar4,*(undefined4 *)(param_1 + 0x14));
  dVar8 = *(double *)(param_1 + 8);
  uVar5 = 0;
  FUN_1092d46dc(dVar8,dVar8,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                *(double *)(param_1 + 0x20) - dVar8,0);
  FUN_1092d45e8(appppuStack_68);
  FUN_1092df8b0(uVar5);
  FUN_1092e1ec8(&puStack_80,param_1,param_4);
  uVar1 = uStack_78;
  ppuVar3 = (undefined1 **)puStack_80;
  if (-1 < (char)bStack_69) {
    uVar1 = (ulong)bStack_69;
    ppuVar3 = &puStack_80;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (appppuStack_68,ppuVar3,uVar1);
  if ((char)bStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  if (param_5 != 0) {
    dVar8 = (double)(*(int *)(param_1 + 0x28) / 2);
    dVar9 = *(double *)(param_1 + 0x30) / 750.0;
    uVar5 = 1;
    FUN_1092d4acc(dVar8,dVar8,dVar9 * 250.0 + dVar9 * -5.0,1);
    FUN_1092d45e8(&puStack_80);
    ppuVar3 = (undefined1 **)puStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      ppuVar3 = &puStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (appppuStack_68,ppuVar3,uStack_78);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(puStack_80);
    }
    FUN_1092df8b0(uVar5);
  }
  pppppuVar2 = (undefined8 *****)appppuStack_68[0];
  if (-1 < cStack_51) {
    pppppuVar2 = appppuStack_68;
  }
  lVar6 = param_2 + 0x60;
  FUN_1092e1e6c(lVar6,pppppuVar2);
  param_2 = param_2 + 0x60;
  FUN_1092e03e4(param_2,"d",lVar6);
  lVar6 = 0;
  if (*plVar7 != 0) {
    lVar6 = puVar4[9];
    plVar7 = (long *)(lVar6 + 0x30);
  }
  *plVar7 = param_2;
  *(long *)(param_2 + 0x28) = lVar6;
  puVar4[9] = param_2;
  *(undefined8 **)(param_2 + 0x20) = puVar4;
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar7 = (long *)(param_3 + 0x30);
  lVar6 = 0;
  if (*plVar7 != 0) {
    lVar6 = *(long *)(param_3 + 0x38);
    plVar7 = (long *)(lVar6 + 0x58);
  }
  *plVar7 = (long)puVar4;
  puVar4[10] = lVar6;
  *(undefined8 **)(param_3 + 0x38) = puVar4;
  puVar4[4] = param_3;
  puVar4[0xb] = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(appppuStack_68[0]);
  }
  return;
}



/* Entry: 1092e0ddc; end: 1092e1bcf;  */

/* WARNING: Removing unreachable block (ram,0x0001092e1d2c) */
/* WARNING: Removing unreachable block (ram,0x0001092e1e28) */

void FUN_1092e0ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ******ppppppuVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  long *plVar11;
  undefined8 *****pppppuVar12;
  undefined1 **ppuVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 extraout_x8;
  undefined1 *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined1 **ppuVar21;
  undefined **ppuVar22;
  char *pcVar23;
  undefined **ppuVar24;
  undefined1 **ppuVar25;
  undefined8 uVar26;
  double dVar27;
  undefined *****apppppuStack_10520 [2];
  undefined **ppuStack_10510;
  undefined **ppuStack_10508;
  undefined1 auStack_10500 [56];
  undefined8 uStack_104c8;
  char cStack_104b1;
  undefined **appuStack_104a0 [19];
  undefined1 uStack_10401;
  undefined1 auStack_10400 [24];
  long lStack_103e8;
  long alStack_10368 [3];
  undefined8 ****appppuStack_10350 [2];
  char cStack_10339;
  undefined8 ****appppuStack_10338 [2];
  char cStack_10321;
  undefined **ppuStack_10320;
  undefined **ppuStack_10318;
  undefined1 auStack_10310 [56];
  undefined8 uStack_102d8;
  char cStack_102c1;
  undefined **appuStack_102b0 [19];
  undefined8 ****ppppuStack_10218;
  ulong uStack_10210;
  byte bStack_10201;
  undefined8 ****ppppuStack_10200;
  ulong uStack_101f8;
  byte bStack_101e9;
  undefined8 auStack_101e8 [2];
  char cStack_101d1;
  long lStack_101d0;
  undefined8 uStack_101c8;
  long lStack_101c0;
  long lStack_101b0;
  long lStack_101a8;
  long lStack_101a0;
  long lStack_10190;
  long lStack_10188;
  long lStack_10180;
  long lStack_10170;
  long lStack_10168;
  long lStack_10160;
  undefined8 ****ppppuStack_10150;
  ulong uStack_10148;
  undefined8 uStack_10140;
  undefined8 ****ppppuStack_10130;
  undefined8 ***pppuStack_10128;
  undefined8 ***pppuStack_10120;
  undefined8 uStack_10110;
  undefined8 uStack_10108;
  undefined8 uStack_100f0;
  undefined4 uStack_100e8;
  long lStack_100e0;
  undefined1 **ppuStack_100d8;
  undefined8 uStack_100d0;
  undefined1 *puStack_100b0;
  undefined1 *puStack_100a8;
  undefined8 *puStack_100a0;
  undefined1 auStack_10098 [65536];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100f0 = 0;
  uStack_10108 = 0;
  uStack_10110 = 0;
  uStack_100e8 = 0;
  lStack_100e0 = 0;
  uStack_100d0 = 0;
  puStack_100b0 = auStack_10098;
  puStack_100a0 = &uStack_98;
  uStack_90 = 0;
  uStack_98 = 0;
  puStack_100a8 = puStack_100b0;
  FUN_10926db08(&ppuStack_10320);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
            (&ppuStack_10320,*(undefined4 *)(param_1 + 0x28));
  FUN_10926dc5c(appppuStack_10338,&ppuStack_10318,&ppppuStack_10130);
  pppuStack_10128 = (undefined8 ***)0x0;
  ppppuStack_10130 = (undefined8 ****)0x0;
  pppuStack_10120 = (undefined8 ***)0x0;
  FUN_1092e2190(&ppuStack_10318,&ppppuStack_10130);
  if ((long)pppuStack_10120 < 0) {
    __ZdlPv(ppppuStack_10130);
  }
  FUN_1092b4db8(&ppuStack_10320,&UNK_10f565cfd,4);
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_1092b4db8();
  FUN_10926dc5c(appppuStack_10350,&ppuStack_10318,&ppppuStack_10130);
  pppuStack_10128 = (undefined8 ***)0x0;
  ppppuStack_10130 = (undefined8 *****)0x0;
  pppuStack_10120 = (undefined8 ***)0x0;
  FUN_1092e2190(&ppuStack_10318,&ppppuStack_10130);
  if ((long)pppuStack_10120 < 0) {
    __ZdlPv(ppppuStack_10130);
  }
  ppuVar5 = &puStack_100b0;
  FUN_1092d4258(ppuVar5,0x60);
  ppuVar5[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar5 + 5) = 1;
  ppuVar25 = ppuVar5 + 6;
  *ppuVar25 = (undefined1 *)0x0;
  ppuVar10 = ppuVar5 + 8;
  *ppuVar10 = (undefined1 *)0x0;
  *ppuVar5 = "svg";
  ppuVar5[2] = (undefined1 *)0x3;
  ppuVar5[1] = (undefined1 *)0x0;
  ppuVar6 = &puStack_100b0;
  FUN_1092e03e4(ppuVar6,&UNK_10f565d02,&UNK_10f565d08);
  if (*ppuVar10 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar10;
  }
  else {
    puVar18 = ppuVar5[9];
    ppuVar8 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar6;
  ppuVar6[5] = puVar18;
  ppuVar5[9] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[6] = (undefined1 *)0x0;
  ppuVar6 = &puStack_100b0;
  FUN_1092e03e4(ppuVar6,"version",&UNK_10f565d23);
  if (*ppuVar10 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar10;
  }
  else {
    puVar18 = ppuVar5[9];
    ppuVar8 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar6;
  ppuVar6[5] = puVar18;
  ppuVar5[9] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[6] = (undefined1 *)0x0;
  pppppuVar12 = (undefined8 *****)appppuStack_10350[0];
  if (-1 < cStack_10339) {
    pppppuVar12 = appppuStack_10350;
  }
  ppuVar6 = &puStack_100b0;
  FUN_1092e03e4(ppuVar6,"viewBox",pppppuVar12);
  if (*ppuVar10 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar10;
  }
  else {
    puVar18 = ppuVar5[9];
    ppuVar8 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar6;
  ppuVar6[5] = puVar18;
  ppuVar5[9] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[6] = (undefined1 *)0x0;
  pppppuVar12 = (undefined8 *****)appppuStack_10338[0];
  if (-1 < cStack_10321) {
    pppppuVar12 = appppuStack_10338;
  }
  ppuVar6 = &puStack_100b0;
  FUN_1092e03e4(ppuVar6,"width",pppppuVar12);
  if (*ppuVar10 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar10;
  }
  else {
    puVar18 = ppuVar5[9];
    ppuVar8 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar6;
  ppuVar6[5] = puVar18;
  ppuVar5[9] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[6] = (undefined1 *)0x0;
  pppppuVar12 = (undefined8 *****)appppuStack_10338[0];
  if (-1 < cStack_10321) {
    pppppuVar12 = appppuStack_10338;
  }
  ppuVar6 = &puStack_100b0;
  FUN_1092e03e4(ppuVar6,"height",pppppuVar12);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar10 != (undefined1 *)0x0) {
    puVar18 = ppuVar5[9];
    ppuVar10 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar10 = (undefined1 *)ppuVar6;
  ppuVar6[5] = puVar18;
  ppuVar5[9] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[6] = (undefined1 *)0x0;
  plVar11 = &lStack_100e0;
  if (lStack_100e0 != 0) {
    plVar11 = (long *)((long)ppuStack_100d8 + 0x58);
  }
  ppuVar6 = (undefined1 **)(undefined1 *)0x0;
  if (lStack_100e0 != 0) {
    ppuVar6 = ppuStack_100d8;
  }
  *plVar11 = (long)ppuVar5;
  ppuStack_100d8 = ppuVar5;
  ppuVar5[4] = (undefined1 *)&uStack_10110;
  ppuVar5[10] = (undefined1 *)ppuVar6;
  ppuVar5[0xb] = (undefined1 *)0x0;
  FUN_1092df7bc(alStack_10368,param_1,param_2,param_3);
  ppuVar6 = &puStack_100b0;
  FUN_1092d4258(ppuVar6,0x60);
  ppuVar6[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar6 + 5) = 1;
  ppuVar10 = ppuVar6 + 8;
  *ppuVar10 = (undefined1 *)0x0;
  ppuVar6[6] = (undefined1 *)0x0;
  *ppuVar6 = "path";
  ppuVar6[2] = (undefined1 *)0x4;
  ppuVar6[1] = (undefined1 *)0x0;
  FUN_1092e1bd0(&uStack_10110,ppuVar6,*(undefined4 *)(param_1 + 0x10));
  func_0x000107c31940(&ppppuStack_10130,"");
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(double *)(param_1 + 8) <= 0.0) {
    iVar2 = *(int *)(param_1 + 0x28) + -2;
  }
  uVar26 = 0;
  if (*(double *)(param_1 + 8) <= 0.0) {
    uVar26 = 0x3ff0000000000000;
  }
  uVar7 = 1;
  FUN_1092d46dc(uVar26,uVar26,(double)iVar2,(double)iVar2,*(undefined8 *)(param_1 + 0x20),1);
  FUN_1092d45e8(&ppppuStack_10150);
  pppppuVar12 = (undefined8 *****)ppppuStack_10150;
  if (-1 < uStack_10140) {
    uStack_10148 = (ulong)uStack_10140._7_1_;
    pppppuVar12 = &ppppuStack_10150;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppuStack_10130,pppppuVar12,uStack_10148);
  if ((char)uStack_10140._7_1_ < '\0') {
    __ZdlPv(ppppuStack_10150);
  }
  FUN_1092df8b0(uVar7);
  pppppuVar12 = (undefined8 *****)ppppuStack_10130;
  if (-1 < (long)pppuStack_10120) {
    pppppuVar12 = &ppppuStack_10130;
  }
  ppuVar8 = &puStack_100b0;
  FUN_1092e1e6c(ppuVar8,pppppuVar12);
  ppuVar9 = &puStack_100b0;
  FUN_1092e03e4(ppuVar9,"d",ppuVar8);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar10 != (undefined1 *)0x0) {
    puVar18 = ppuVar6[9];
    ppuVar10 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar10 = (undefined1 *)ppuVar9;
  ppuVar9[5] = puVar18;
  ppuVar6[9] = (undefined1 *)ppuVar9;
  ppuVar9[4] = (undefined1 *)ppuVar6;
  ppuVar9[6] = (undefined1 *)0x0;
  if (*ppuVar25 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar10 = ppuVar25;
  }
  else {
    puVar18 = ppuVar5[7];
    ppuVar10 = (undefined1 **)(puVar18 + 0x58);
  }
  *ppuVar10 = (undefined1 *)ppuVar6;
  ppuVar6[10] = puVar18;
  ppuVar5[7] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[0xb] = (undefined1 *)0x0;
  if ((long)pppuStack_10120 < 0) {
    __ZdlPv(ppppuStack_10130);
  }
  FUN_1092e0b60(param_1,&uStack_10110,ppuVar5,alStack_10368,0);
  ppuVar6 = &puStack_100b0;
  FUN_1092d4258(ppuVar6,0x60);
  ppuVar6[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar6 + 5) = 1;
  ppuVar9 = ppuVar6 + 6;
  *ppuVar9 = (undefined1 *)0x0;
  ppuVar8 = ppuVar6 + 8;
  *ppuVar8 = (undefined1 *)0x0;
  *ppuVar6 = "g";
  ppuVar6[2] = (undefined1 *)0x1;
  ppuVar6[1] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092e03e4(ppuVar10,"fill","none");
  if (*ppuVar8 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar13 = ppuVar8;
  }
  else {
    puVar18 = ppuVar6[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar10;
  ppuVar10[5] = puVar18;
  ppuVar6[9] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[6] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092e03e4(ppuVar10,"stroke-width","1");
  if (*ppuVar8 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar13 = ppuVar8;
  }
  else {
    puVar18 = ppuVar6[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar10;
  ppuVar10[5] = puVar18;
  ppuVar6[9] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[6] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092e03e4(ppuVar10,"fill-rule","evenodd");
  if (*ppuVar8 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar13 = ppuVar8;
  }
  else {
    puVar18 = ppuVar6[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar10;
  ppuVar10[5] = puVar18;
  ppuVar6[9] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[6] = (undefined1 *)0x0;
  iVar2 = *(int *)(param_1 + 0x28);
  dVar27 = (double)iVar2;
  dVar27 = (dVar27 + dVar27 * -0.5078125) * 0.5;
  __ZNSt3__19to_stringEd(auStack_101e8,dVar27);
  plVar11 = auStack_101e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar11,0,&UNK_10f565d27,10);
  uStack_101c8 = plVar11[1];
  lStack_101d0 = *plVar11;
  lStack_101c0 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  plVar11 = &lStack_101d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar11,&DAT_10f68e8ee,1);
  lStack_101a8 = plVar11[1];
  lStack_101b0 = *plVar11;
  lStack_101a0 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  __ZNSt3__19to_stringEd(&ppppuStack_10200,dVar27);
  pppppuVar12 = (undefined8 *****)ppppuStack_10200;
  if (-1 < (char)bStack_101e9) {
    uStack_101f8 = (ulong)bStack_101e9;
    pppppuVar12 = &ppppuStack_10200;
  }
  plVar11 = &lStack_101b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar11,pppppuVar12,uStack_101f8);
  lStack_10188 = plVar11[1];
  lStack_10190 = *plVar11;
  lStack_10180 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  plVar11 = &lStack_10190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar11,&UNK_10f565d32,8);
  lStack_10168 = plVar11[1];
  lStack_10170 = *plVar11;
  lStack_10160 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  __ZNSt3__19to_stringEd(&ppppuStack_10218,(double)iVar2 / 256.0);
  pppppuVar12 = (undefined8 *****)ppppuStack_10218;
  if (-1 < (char)bStack_10201) {
    uStack_10210 = (ulong)bStack_10201;
    pppppuVar12 = &ppppuStack_10218;
  }
  plVar11 = &lStack_10170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar11,pppppuVar12,uStack_10210);
  uStack_10148 = plVar11[1];
  ppppuStack_10150 = (undefined8 ****)*plVar11;
  uStack_10140 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  pppppuVar12 = &ppppuStack_10150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar12,&DAT_10f684600,1);
  pppuStack_10128 = pppppuVar12[1];
  ppppuStack_10130 = *pppppuVar12;
  pppuStack_10120 = pppppuVar12[2];
  pppppuVar12[1] = (undefined8 ****)0x0;
  pppppuVar12[2] = (undefined8 ****)0x0;
  *pppppuVar12 = (undefined8 ****)0x0;
  if (uStack_10140 < 0) {
    __ZdlPv(ppppuStack_10150);
  }
  if ((char)bStack_10201 < '\0') {
    __ZdlPv(ppppuStack_10218);
  }
  if (lStack_10160 < 0) {
    __ZdlPv(lStack_10170);
  }
  if (lStack_10180 < 0) {
    __ZdlPv(lStack_10190);
  }
  if ((char)bStack_101e9 < '\0') {
    __ZdlPv(ppppuStack_10200);
  }
  if (lStack_101a0 < 0) {
    __ZdlPv(lStack_101b0);
  }
  if (lStack_101c0 < 0) {
    __ZdlPv(lStack_101d0);
  }
  if (cStack_101d1 < '\0') {
    __ZdlPv(auStack_101e8[0]);
  }
  pppuVar4 = pppuStack_10120;
  ppppuVar3 = ppppuStack_10130;
  pppppuVar12 = (undefined8 *****)ppppuStack_10130;
  if (-1 < (long)pppuStack_10120) {
    pppppuVar12 = &ppppuStack_10130;
  }
  ppuVar10 = &puStack_100b0;
  FUN_1092e1e6c(ppuVar10,pppppuVar12);
  ppuVar13 = &puStack_100b0;
  FUN_1092e03e4(ppuVar13,"transform",ppuVar10);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar8 != (undefined1 *)0x0) {
    puVar18 = ppuVar6[9];
    ppuVar8 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar8 = (undefined1 *)ppuVar13;
  ppuVar13[5] = puVar18;
  ppuVar6[9] = (undefined1 *)ppuVar13;
  ppuVar13[4] = (undefined1 *)ppuVar6;
  ppuVar13[6] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092d4258(ppuVar10,0x60);
  ppuVar10[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar10 + 5) = 1;
  ppuVar10[6] = (undefined1 *)0x0;
  ppuVar13 = ppuVar10 + 8;
  *ppuVar13 = (undefined1 *)0x0;
  *ppuVar10 = "path";
  ppuVar10[2] = (undefined1 *)0x4;
  ppuVar10[1] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"d",&UNK_10f565d3b);
  if (*ppuVar13 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar21 = ppuVar13;
  }
  else {
    puVar18 = ppuVar10[9];
    ppuVar21 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar21 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"fill",&UNK_10f565df2);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar13 != (undefined1 *)0x0) {
    puVar18 = ppuVar10[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar9;
  }
  else {
    puVar18 = ppuVar6[7];
    ppuVar8 = (undefined1 **)(puVar18 + 0x58);
  }
  *ppuVar8 = (undefined1 *)ppuVar10;
  ppuVar10[10] = puVar18;
  ppuVar6[7] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[0xb] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092d4258(ppuVar10,0x60);
  ppuVar10[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar10 + 5) = 1;
  ppuVar10[6] = (undefined1 *)0x0;
  ppuVar13 = ppuVar10 + 8;
  *ppuVar13 = (undefined1 *)0x0;
  *ppuVar10 = "path";
  ppuVar10[2] = (undefined1 *)0x4;
  ppuVar10[1] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"d",&UNK_10f565dfa);
  if (*ppuVar13 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar21 = ppuVar13;
  }
  else {
    puVar18 = ppuVar10[9];
    ppuVar21 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar21 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"fill",&DAT_10f49bb0d);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar13 != (undefined1 *)0x0) {
    puVar18 = ppuVar10[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  if (*ppuVar9 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar8 = ppuVar9;
  }
  else {
    puVar18 = ppuVar6[7];
    ppuVar8 = (undefined1 **)(puVar18 + 0x58);
  }
  *ppuVar8 = (undefined1 *)ppuVar10;
  ppuVar10[10] = puVar18;
  ppuVar6[7] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[0xb] = (undefined1 *)0x0;
  ppuVar10 = &puStack_100b0;
  FUN_1092d4258(ppuVar10,0x60);
  ppuVar10[4] = (undefined1 *)0x0;
  *(undefined4 *)(ppuVar10 + 5) = 1;
  ppuVar10[6] = (undefined1 *)0x0;
  ppuVar13 = ppuVar10 + 8;
  *ppuVar13 = (undefined1 *)0x0;
  *ppuVar10 = "path";
  ppuVar10[2] = (undefined1 *)0x4;
  ppuVar10[1] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"d",&UNK_10f565f81);
  if (*ppuVar13 == (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    ppuVar21 = ppuVar13;
  }
  else {
    puVar18 = ppuVar10[9];
    ppuVar21 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar21 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  ppuVar8 = &puStack_100b0;
  FUN_1092e03e4(ppuVar8,"fill",&DAT_10f49bb0d);
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar13 != (undefined1 *)0x0) {
    puVar18 = ppuVar10[9];
    ppuVar13 = (undefined1 **)(puVar18 + 0x30);
  }
  *ppuVar13 = (undefined1 *)ppuVar8;
  ppuVar8[5] = puVar18;
  ppuVar10[9] = (undefined1 *)ppuVar8;
  ppuVar8[4] = (undefined1 *)ppuVar10;
  ppuVar8[6] = (undefined1 *)0x0;
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar9 != (undefined1 *)0x0) {
    puVar18 = ppuVar6[7];
    ppuVar9 = (undefined1 **)(puVar18 + 0x58);
  }
  *ppuVar9 = (undefined1 *)ppuVar10;
  ppuVar10[10] = puVar18;
  ppuVar6[7] = (undefined1 *)ppuVar10;
  ppuVar10[4] = (undefined1 *)ppuVar6;
  ppuVar10[0xb] = (undefined1 *)0x0;
  puVar18 = (undefined1 *)0x0;
  if (*ppuVar25 != (undefined1 *)0x0) {
    puVar18 = ppuVar5[7];
    ppuVar25 = (undefined1 **)(puVar18 + 0x58);
  }
  *ppuVar25 = (undefined1 *)ppuVar6;
  ppuVar6[10] = puVar18;
  ppuVar5[7] = (undefined1 *)ppuVar6;
  ppuVar6[4] = (undefined1 *)ppuVar5;
  ppuVar6[0xb] = (undefined1 *)0x0;
  if ((long)pppuVar4 < 0) {
    __ZdlPv(ppppuVar3);
  }
  puVar17 = &uStack_10110;
  FUN_1092e21dc(&ppuStack_10320,0,puVar17,0);
  FUN_10926dc5c(extraout_x8,&ppuStack_10318,&ppppuStack_10130);
  if (alStack_10368[0] != 0) {
    __ZdlPv();
  }
  if (cStack_10339 < '\0') {
    __ZdlPv(appppuStack_10350[0]);
  }
  if (cStack_10321 < '\0') {
    __ZdlPv(appppuStack_10338[0]);
  }
  appuStack_102b0[0] = &PTR_DAT_11088d708;
  ppuStack_10320 = &PTR_SUB_11088d6e0;
  ppuStack_10318 = &PTR_DAT_11088d7b0;
  if (cStack_102c1 < '\0') {
    __ZdlPv(uStack_102d8);
  }
  ppuStack_10318 =
       (undefined **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_10310);
  ppuVar15 = &PTR_PTR_11088d720;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_10320);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_102b0);
  ppuVar5 = &puStack_100b0;
  FUN_1092d2c38();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar15 == 0) {
    __Unwind_Resume(ppuVar5);
  }
  func_0x000104bd46a0();
  lStack_103e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _snprintf(auStack_10400,8,&UNK_10f565cf7);
  func_0x000107c31940(apppppuStack_10520,auStack_10400);
  ppppppuVar1 = (undefined ******)apppppuStack_10520[0];
  if (-1 < (long)ppuStack_10510) {
    ppppppuVar1 = apppppuStack_10520;
  }
  ppuVar6 = ppuVar5 + 0xc;
  FUN_1092e1e6c(ppuVar6,ppppppuVar1);
  if ((long)ppuStack_10510 < 0) {
    __ZdlPv(apppppuStack_10520[0]);
  }
  pcVar16 = "fill";
  pppuVar14 = (undefined ***)(ppuVar5 + 0xc);
  FUN_1092e03e4(pppuVar14,"fill",ppuVar6);
  dVar27 = (double)(long)(((double)((ulong)puVar17 >> 0x18 & 0xff) / 255.0) * 100.0) / 100.0;
  ppuVar24 = ppuVar15 + 8;
  if (*ppuVar24 == (undefined *)0x0) {
    ppuVar19 = (undefined **)0x0;
    ppuVar22 = ppuVar24;
  }
  else {
    ppuVar19 = (undefined **)ppuVar15[9];
    ppuVar22 = ppuVar19 + 6;
  }
  *ppuVar22 = (undefined *)pppuVar14;
  pppuVar14[5] = ppuVar19;
  ppuVar15[9] = (undefined *)pppuVar14;
  pppuVar14[4] = ppuVar15;
  pppuVar14[6] = (undefined **)0x0;
  if (dVar27 < 1.0) {
    FUN_1092a988c(apppppuStack_10520);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar27,&ppuStack_10510);
    FUN_10926dc5c(auStack_10400,&ppuStack_10508,&uStack_10401);
    ppuVar6 = ppuVar5 + 0xc;
    FUN_1092e1e6c(ppuVar6,auStack_10400);
    ppuVar5 = ppuVar5 + 0xc;
    FUN_1092e03e4(ppuVar5,"fill-opacity",ppuVar6);
    puVar20 = (undefined *)0x0;
    if (*ppuVar24 != (undefined *)0x0) {
      puVar20 = ppuVar15[9];
      ppuVar24 = (undefined **)(puVar20 + 0x30);
    }
    *ppuVar24 = (undefined *)ppuVar5;
    ppuVar5[5] = puVar20;
    ppuVar15[9] = (undefined *)ppuVar5;
    ppuVar5[4] = (undefined1 *)ppuVar15;
    ppuVar5[6] = (undefined1 *)0x0;
    apppppuStack_10520[0] = (undefined *****)&PTR_SUB_1108a5a38;
    ppuStack_10510 = &PTR_DAT_1108a5a60;
    appuStack_104a0[0] = &PTR_DAT_1108a5a88;
    ppuStack_10508 = &PTR_DAT_11088d7b0;
    if (cStack_104b1 < '\0') {
      __ZdlPv(uStack_104c8);
    }
    ppuStack_10508 =
         (undefined **)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_10500);
    ppuVar15 = &PTR_PTR_1108a5aa0;
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apppppuStack_10520);
    pppuVar14 = appuStack_104a0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    pcVar16 = (char *)ppuVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_103e8) {
    ___stack_chk_fail();
    func_0x000105673d7c(apppppuStack_10520);
    __Unwind_Resume();
    ppuVar15 = (undefined **)pcVar16;
    _strlen();
    pcVar23 = (char *)((long)ppuVar15 + 1);
    FUN_1092d4258(pppuVar14,pcVar23);
    if (ppuVar15 != (undefined **)0xffffffffffffffff) {
      do {
        *(char *)pppuVar14 = *pcVar16;
        pcVar23 = pcVar23 + -1;
        pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
        pcVar16 = (char *)((long)pcVar16 + 1);
      } while (pcVar23 != (char *)0x0);
    }
    return;
  }
  return;
}



/* Entry: 1092e1bd0; end: 1092e1e6b;  */

/* WARNING: Removing unreachable block (ram,0x0001092e1d2c) */
/* WARNING: Removing unreachable block (ram,0x0001092e1e28) */

void FUN_1092e1bd0(long param_1,undefined **param_2,ulong param_3)

{
  undefined ******ppppppuVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  double dVar11;
  undefined *****apppppuStack_190 [2];
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [56];
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [19];
  undefined1 uStack_71;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _snprintf(auStack_70,8,&UNK_10f565cf7);
  func_0x000107c31940(apppppuStack_190,auStack_70);
  ppppppuVar1 = (undefined ******)apppppuStack_190[0];
  if (-1 < (long)ppuStack_180) {
    ppppppuVar1 = apppppuStack_190;
  }
  lVar2 = param_1 + 0x60;
  FUN_1092e1e6c(lVar2,ppppppuVar1);
  if ((long)ppuStack_180 < 0) {
    __ZdlPv(apppppuStack_190[0]);
  }
  pcVar6 = "fill";
  pppuVar3 = (undefined ***)(param_1 + 0x60);
  FUN_1092e03e4(pppuVar3,"fill",lVar2);
  dVar11 = (double)(long)(((double)(param_3 >> 0x18 & 0xff) / 255.0) * 100.0) / 100.0;
  ppuVar5 = param_2 + 8;
  if (*ppuVar5 == (undefined *)0x0) {
    ppuVar7 = (undefined **)0x0;
    ppuVar9 = ppuVar5;
  }
  else {
    ppuVar7 = (undefined **)param_2[9];
    ppuVar9 = ppuVar7 + 6;
  }
  *ppuVar9 = (undefined *)pppuVar3;
  pppuVar3[5] = ppuVar7;
  param_2[9] = (undefined *)pppuVar3;
  pppuVar3[4] = param_2;
  pppuVar3[6] = (undefined **)0x0;
  if (dVar11 < 1.0) {
    FUN_1092a988c(apppppuStack_190);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar11,&ppuStack_180);
    FUN_10926dc5c(auStack_70,&ppuStack_178,&uStack_71);
    lVar2 = param_1 + 0x60;
    FUN_1092e1e6c(lVar2,auStack_70);
    puVar4 = (undefined *)(param_1 + 0x60);
    FUN_1092e03e4(puVar4,"fill-opacity",lVar2);
    puVar8 = (undefined *)0x0;
    if (*ppuVar5 != (undefined *)0x0) {
      puVar8 = param_2[9];
      ppuVar5 = (undefined **)(puVar8 + 0x30);
    }
    *ppuVar5 = puVar4;
    *(undefined **)(puVar4 + 0x28) = puVar8;
    param_2[9] = puVar4;
    *(undefined ***)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = 0;
    apppppuStack_190[0] = (undefined *****)&PTR_SUB_1108a5a38;
    ppuStack_180 = &PTR_DAT_1108a5a60;
    appuStack_110[0] = &PTR_DAT_1108a5a88;
    ppuStack_178 = &PTR_DAT_11088d7b0;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    ppuStack_178 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_170);
    ppuVar5 = &PTR_PTR_1108a5aa0;
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apppppuStack_190);
    pppuVar3 = appuStack_110;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    pcVar6 = (char *)ppuVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000105673d7c(apppppuStack_190);
    __Unwind_Resume();
    ppuVar5 = (undefined **)pcVar6;
    _strlen();
    pcVar10 = (char *)((long)ppuVar5 + 1);
    FUN_1092d4258(pppuVar3,pcVar10);
    if (ppuVar5 != (undefined **)0xffffffffffffffff) {
      do {
        *(char *)pppuVar3 = *pcVar6;
        pcVar10 = pcVar10 + -1;
        pppuVar3 = (undefined ***)((long)pppuVar3 + 1);
        pcVar6 = (char *)((long)pcVar6 + 1);
      } while (pcVar10 != (char *)0x0);
    }
    return;
  }
  return;
}



/* Entry: 1092e1e6c; end: 1092e1ec7;  */

void FUN_1092e1e6c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_2;
  _strlen();
  puVar2 = puVar1 + 1;
  FUN_1092d4258(param_1,puVar2);
  if (puVar1 != (undefined1 *)0xffffffffffffffff) {
    do {
      *param_1 = *param_2;
      puVar2 = puVar2 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (puVar2 != (undefined1 *)0x0);
  }
  return;
}



/* Entry: 1092e1ec8; end: 1092e20cf;  */

void FUN_1092e1ec8(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  byte bStack_71;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5 = *(long **)(param_2 + 0x68);
  (**(code **)(*plVar5 + 0x10))();
  if (0 < (int)plVar5) {
    uVar13 = 0;
    uVar10 = 0;
    iVar8 = 0;
    uVar11 = (ulong)plVar5 & 0xffffffff;
    do {
      uVar14 = 0;
      uVar9 = uVar13;
      uVar12 = uVar11;
      do {
        (**(code **)(**(long **)(param_2 + 0x68) + 0x38))(&ppuStack_88);
        if ((ulong)((long)ppuStack_80 - (long)ppuStack_88 >> 2) <= uVar9) {
          func_0x0001092e2168();
LAB_1092e2074:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1092e2078);
          (*pcVar4)();
        }
        iVar2 = *(int *)((long)ppuStack_88 + uVar9 * 4);
        ppuStack_80 = ppuStack_88;
        __ZdlPv();
        if (iVar2 != 0) {
          if ((ulong)param_3[1] <= (ulong)(long)iVar8) {
            func_0x0001092e217c();
            goto LAB_1092e2074;
          }
          iVar2 = iVar8 + 1;
          uVar7 = (ulong)iVar8;
          iVar8 = iVar2;
          if ((*(ulong *)(*param_3 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
            uVar6 = 1;
            FUN_1092d4acc(*(double *)(param_2 + 0x48) + *(double *)(param_2 + 0x40) * (double)uVar14
                          ,*(double *)(param_2 + 0x48) +
                           *(double *)(param_2 + 0x40) * (double)(uVar10 & 0xffffffff),
                          (double)(long)(*(double *)(param_2 + 0x38) * 0.5 *
                                         *(double *)(param_2 + 0x60) * 100.0) / 100.0,1);
            FUN_1092d45e8(&ppuStack_88);
            pppuVar1 = (undefined8 ***)ppuStack_80;
            pppuVar3 = (undefined8 ***)ppuStack_88;
            if (-1 < (char)bStack_71) {
              pppuVar1 = (undefined8 ***)(ulong)bStack_71;
              pppuVar3 = &ppuStack_88;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,pppuVar3,pppuVar1);
            if ((char)bStack_71 < '\0') {
              __ZdlPv(ppuStack_88);
            }
            FUN_1092df8b0(uVar6);
          }
        }
        uVar14 = uVar14 + 1;
        uVar9 = uVar9 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + uVar11;
    } while (uVar10 != uVar11);
  }
  return;
}



/* Entry: 1092e20d0; end: 1092e2167;  */

undefined8 * FUN_1092e20d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aea290;
  if ((*(char *)(param_1 + 0xe) == '\x01') && ((long *)param_1[0xd] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xd] + 0xe0))();
  }
  return param_1;
}



/* Entry: 1092e2168; end: 1092e218f;  */

void FUN_1092e2168(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_109262df8(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109262df8();
  if ((char)puVar1[0x57] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar1 + 0x40));
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_2[2];
  *(undefined8 *)(puVar1 + 0x48) = uVar6;
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  uVar3 = (ulong)(char)puVar1[0x57];
  puVar4 = puVar1 + 0x40;
  if ((long)uVar3 < 0) {
    uVar3 = *(ulong *)(puVar1 + 0x48);
    puVar4 = *(undefined **)(puVar1 + 0x40);
  }
  if ((*(uint *)(puVar1 + 0x60) >> 3 & 1) != 0) {
    *(undefined **)(puVar1 + 0x58) = puVar4 + uVar3;
    *(undefined **)(puVar1 + 0x10) = puVar4;
    *(undefined **)(puVar1 + 0x18) = puVar4;
    *(undefined **)(puVar1 + 0x20) = puVar4 + uVar3;
  }
  if ((*(uint *)(puVar1 + 0x60) >> 4 & 1) != 0) {
    *(undefined **)(puVar1 + 0x58) = puVar4 + uVar3;
    if ((char)puVar1[0x57] < '\0') {
      lVar2 = (*(ulong *)(puVar1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar2 = 0x16;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (puVar1 + 0x40,lVar2,0);
    lVar2 = (long)(char)puVar1[0x57];
    if (lVar2 < 0) {
      lVar2 = *(long *)(puVar1 + 0x48);
    }
    *(undefined **)(puVar1 + 0x28) = puVar4;
    *(undefined **)(puVar1 + 0x30) = puVar4;
    *(undefined **)(puVar1 + 0x38) = puVar4 + lVar2;
    if ((puVar1[0x60] & 3) != 0) {
      if (uVar3 >> 0x1f != 0) {
        lVar2 = ((uVar3 - 0x80000000) / 0x7fffffff) * 0x80000000 - (uVar3 - 0x80000000) / 0x7fffffff
        ;
        puVar4 = puVar4 + lVar2 + 0x7fffffff;
        uVar3 = (uVar3 - lVar2) - 0x7fffffff;
        *(undefined **)(puVar1 + 0x30) = puVar4;
      }
      if (uVar3 != 0) {
        *(undefined **)(puVar1 + 0x30) = puVar4 + uVar3;
      }
    }
  }
  return;
}



/* Entry: 1092e2190; end: 1092e21db;  */

void FUN_1092e2190(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (param_1 + 0x40,lVar1,0);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar2 >> 0x1f != 0) {
        lVar1 = ((uVar2 - 0x80000000) / 0x7fffffff) * 0x80000000 - (uVar2 - 0x80000000) / 0x7fffffff
        ;
        lVar3 = lVar3 + 0x7fffffff + lVar1;
        uVar2 = (uVar2 - lVar1) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 1092e21dc; end: 1092e290b;  */

undefined1  [16] FUN_1092e21dc(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bStack_71;
  long lStack_70;
  long lStack_68;
  
  iVar2 = (int)param_3[5];
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        for (lVar8 = param_3[6]; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x58)) {
          FUN_1092e21dc(param_1,param_2,lVar8,param_4);
        }
        goto LAB_1092e287c;
      }
      if (iVar2 != 1) goto LAB_1092e287c;
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (*param_3 != 0) {
        lVar7 = *param_3;
        for (lVar8 = param_3[2]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
      FUN_1092e290c(param_1,param_2,param_3[8]);
      if (((param_3[1] == 0) || (param_3[3] == 0)) && (param_3[6] == 0)) goto LAB_1092e27bc;
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        lVar7 = 0;
        lVar5 = 0x1132cee80;
        if (param_3[1] != 0) {
          lVar7 = param_3[3];
          lVar5 = param_3[1];
        }
LAB_1092e27e8:
        lVar7 = lVar5 + lVar7;
        FUN_1092e2a8c(lVar5,lVar7,0,param_1,param_2);
        param_1 = lVar5;
        param_2 = lVar7;
      }
      else {
        if ((*(long *)(lVar8 + 0x58) == 0) && (*(int *)(lVar8 + 0x28) == 2)) {
          lVar7 = 0;
          lVar5 = 0x1132cee80;
          if (*(long *)(lVar8 + 8) != 0) {
            lVar7 = *(long *)(lVar8 + 0x18);
            lVar5 = *(long *)(lVar8 + 8);
          }
          goto LAB_1092e27e8;
        }
        do {
          FUN_1092e21dc();
          lVar8 = *(long *)(lVar8 + 0x58);
        } while (lVar8 != 0);
      }
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (*param_3 != 0) {
        lVar7 = *param_3;
        for (lVar8 = param_3[2]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
    }
    else {
      if (iVar2 == 2) {
        pbVar4 = (byte *)param_3[1];
        if (pbVar4 == (byte *)0x0) {
          lVar8 = 0;
          pbVar4 = (byte *)0x1132cee80;
        }
        else {
          lVar8 = param_3[3];
        }
        pbVar1 = pbVar4 + lVar8;
        lStack_68 = param_2;
        lStack_70 = param_1;
        do {
          if (pbVar4 == pbVar1) {
            auVar10._8_8_ = lStack_68;
            auVar10._0_8_ = lStack_70;
            return auVar10;
          }
          bVar3 = *pbVar4;
          pbVar6 = pbVar4;
          if (bVar3 != 0) {
            if (bVar3 < 0x27) {
              if (bVar3 == 0x22) {
                bStack_71 = 0x26;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x71;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x75;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x6f;
                goto LAB_1092e2c20;
              }
              if (bVar3 == 0x26) {
                bStack_71 = 0x26;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x61;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x6d;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x70;
                goto LAB_1092e2c30;
              }
            }
            else {
              if (bVar3 == 0x27) {
                bStack_71 = 0x26;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x61;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x70;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x6f;
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x73;
              }
              else {
                if (bVar3 == 0x3e) {
                  bStack_71 = 0x26;
                  func_0x0001092e28a0(&lStack_70,&bStack_71);
                  bStack_71 = 0x67;
                }
                else {
                  if (bVar3 != 0x3c) goto LAB_1092e2c48;
                  bStack_71 = 0x26;
                  func_0x0001092e28a0(&lStack_70,&bStack_71);
                  bStack_71 = 0x6c;
                }
LAB_1092e2c20:
                func_0x0001092e28a0(&lStack_70,&bStack_71);
                bStack_71 = 0x74;
              }
LAB_1092e2c30:
              func_0x0001092e28a0(&lStack_70,&bStack_71);
              bStack_71 = 0x3b;
              pbVar6 = &bStack_71;
            }
          }
LAB_1092e2c48:
          func_0x0001092e28a0(&lStack_70,pbVar6);
          pbVar4 = pbVar4 + 1;
        } while( true );
      }
      if (iVar2 != 3) goto LAB_1092e287c;
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (param_3[1] != 0) {
        lVar7 = param_3[1];
        for (lVar8 = param_3[3]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
LAB_1092e2740:
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
LAB_1092e27bc:
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    }
  }
  else {
    if (iVar2 < 6) {
      if (iVar2 != 4) {
        if (iVar2 == 5) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          FUN_1092e290c(param_1,param_2,param_3[8]);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
          func_0x0001092e28a0(&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
        }
        goto LAB_1092e287c;
      }
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (param_3[1] != 0) {
        lVar7 = param_3[1];
        for (lVar8 = param_3[3]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
      goto LAB_1092e2740;
    }
    if (iVar2 != 6) {
      if (iVar2 != 7) goto LAB_1092e287c;
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (*param_3 != 0) {
        lVar7 = *param_3;
        for (lVar8 = param_3[2]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
      func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
      if (param_3[1] != 0) {
        lVar7 = param_3[1];
        for (lVar8 = param_3[3]; lVar8 != 0; lVar8 = lVar8 + -1) {
          func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
          lVar7 = lVar7 + 1;
        }
      }
      goto LAB_1092e27bc;
    }
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
    if (param_3[1] != 0) {
      lVar7 = param_3[1];
      for (lVar8 = param_3[3]; lVar8 != 0; lVar8 = lVar8 + -1) {
        func_0x0001092e28a0(&stack0xffffffffffffffc0,lVar7);
        lVar7 = lVar7 + 1;
      }
    }
  }
  func_0x0001092e28a0(&stack0xffffffffffffffb0,&stack0xffffffffffffffc0);
LAB_1092e287c:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 1092e290c; end: 1092e2a8b;  */

undefined1  [16] FUN_1092e290c(char *param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  if (param_3 != (long *)0x0) {
    pcVar1 = (char *)0x1132cee80;
    pcStack_70 = param_1;
    pcStack_68 = param_2;
    do {
      pcStack_60 = (char *)CONCAT71(pcStack_60._1_7_,0x20);
      func_0x0001092e28a0(&pcStack_70,&pcStack_60);
      if (*param_3 != 0) {
        lVar3 = *param_3;
        pcVar4 = pcStack_70;
        pcVar5 = pcStack_68;
        pcVar6 = pcStack_70;
        pcVar7 = pcStack_68;
        for (lVar8 = param_3[2]; pcStack_68 = pcVar5, pcStack_70 = pcVar4, pcStack_60 = pcStack_70,
            pcStack_58 = pcStack_68, lVar8 != 0; lVar8 = lVar8 + -1) {
          pcStack_70 = pcVar6;
          pcStack_68 = pcVar7;
          func_0x0001092e28a0(&pcStack_60,lVar3);
          lVar3 = lVar3 + 1;
          pcVar4 = pcStack_60;
          pcVar5 = pcStack_58;
          pcVar6 = pcStack_70;
          pcVar7 = pcStack_68;
        }
      }
      pcStack_60._0_1_ = 0x3d;
      func_0x0001092e28a0(&pcStack_70,&pcStack_60);
      lVar8 = 0;
      pcVar6 = pcVar1;
      if ((char *)param_3[1] != (char *)0x0) {
        lVar8 = param_3[3];
        pcVar6 = (char *)param_3[1];
      }
      do {
        if (lVar8 == 0) {
          pcStack_60._0_1_ = 0x22;
          func_0x0001092e28a0(&pcStack_70,&pcStack_60);
          lVar8 = 0;
          pcVar6 = pcVar1;
          if ((char *)param_3[1] != (char *)0x0) {
            lVar8 = param_3[3];
            pcVar6 = (char *)param_3[1];
          }
          pcVar7 = pcVar6 + lVar8;
          FUN_1092e2a8c(pcVar6,pcVar7,0x27,pcStack_70,pcStack_68);
          pcStack_60 = (char *)CONCAT71(pcStack_60._1_7_,0x22);
          pcStack_70 = pcVar6;
          pcStack_68 = pcVar7;
          goto LAB_1092e2a50;
        }
        cVar2 = *pcVar6;
        lVar8 = lVar8 + -1;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\"');
      pcStack_60._0_1_ = 0x27;
      func_0x0001092e28a0(&pcStack_70,&pcStack_60);
      lVar8 = 0;
      pcVar6 = pcVar1;
      if ((char *)param_3[1] != (char *)0x0) {
        lVar8 = param_3[3];
        pcVar6 = (char *)param_3[1];
      }
      pcVar7 = pcVar6 + lVar8;
      FUN_1092e2a8c(pcVar6,pcVar7,0x22,pcStack_70,pcStack_68);
      pcStack_60 = (char *)CONCAT71(pcStack_60._1_7_,0x27);
      pcStack_70 = pcVar6;
      pcStack_68 = pcVar7;
LAB_1092e2a50:
      func_0x0001092e28a0(&pcStack_70,&pcStack_60);
      param_1 = pcStack_70;
      param_2 = pcStack_68;
    } while ((param_3[4] != 0) && (param_3 = (long *)param_3[6], param_3 != (long *)0x0));
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 1092e2a8c; end: 1092e2c83;  */

undefined1  [16]
FUN_1092e2a8c(byte *param_1,byte *param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = param_4;
  uStack_68 = param_5;
  do {
    if (param_1 == param_2) {
      auVar3._8_8_ = uStack_68;
      auVar3._0_8_ = uStack_70;
      return auVar3;
    }
    bVar1 = *param_1;
    pbVar2 = param_1;
    if (bVar1 != param_3) {
      if (bVar1 < 0x27) {
        if (bVar1 == 0x22) {
          bStack_71 = 0x26;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x71;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x75;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x6f;
          goto LAB_1092e2c20;
        }
        if (bVar1 == 0x26) {
          bStack_71 = 0x26;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x61;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x6d;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x70;
          goto LAB_1092e2c30;
        }
      }
      else {
        if (bVar1 == 0x27) {
          bStack_71 = 0x26;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x61;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x70;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x6f;
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x73;
        }
        else {
          if (bVar1 == 0x3e) {
            bStack_71 = 0x26;
            func_0x0001092e28a0(&uStack_70,&bStack_71);
            bStack_71 = 0x67;
          }
          else {
            if (bVar1 != 0x3c) goto LAB_1092e2c48;
            bStack_71 = 0x26;
            func_0x0001092e28a0(&uStack_70,&bStack_71);
            bStack_71 = 0x6c;
          }
LAB_1092e2c20:
          func_0x0001092e28a0(&uStack_70,&bStack_71);
          bStack_71 = 0x74;
        }
LAB_1092e2c30:
        func_0x0001092e28a0(&uStack_70,&bStack_71);
        bStack_71 = 0x3b;
        pbVar2 = &bStack_71;
      }
    }
LAB_1092e2c48:
    func_0x0001092e28a0(&uStack_70,pbVar2);
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 1092e2c84; end: 1092e2e8f;  */

void FUN_1092e2c84(undefined8 param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    return;
  }
  uStack_a8 = 0x42ff0000;
  uStack_9c = 0;
  uStack_98 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  puStack_68 = &uStack_a0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  puStack_60 = &uStack_58;
  puStack_40 = &uStack_a8;
  FUN_109a479a0(param_1,auStack_48);
  puVar8 = (undefined4 *)(param_2 + 8);
  *param_2 = 1;
  if (puVar8 == &uStack_a8) goto LAB_1092e2dec;
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar8);
    }
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0xc) < 1) {
    *puVar8 = uStack_a8;
LAB_1092e2d90:
    if (2 < iStack_a4) goto LAB_1092e2dc4;
    *(int *)(param_2 + 0xc) = iStack_a4;
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_9c,uStack_a0);
    puVar7 = *(undefined8 **)(param_2 + 0x50);
    *puVar7 = *puStack_60;
    puVar7[1] = puStack_60[1];
  }
  else {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0xc));
    *puVar8 = uStack_a8;
    if (*(int *)(param_2 + 0xc) < 3) goto LAB_1092e2d90;
LAB_1092e2dc4:
    func_0x000109a84868(puVar8,&uStack_a8);
  }
  *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_94,uStack_98);
  *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_7c,uStack_80);
  *(ulong *)(param_2 + 0x28) = CONCAT44(uStack_84,uStack_88);
  *(long *)(param_2 + 0x40) = lStack_70;
  *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_74,uStack_78);
LAB_1092e2dec:
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_a8);
    }
  }
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  if (0 < iStack_a4) {
    lVar5 = 0;
    do {
      puStack_68[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_a4);
  }
  if (puStack_60 != &uStack_58 && puStack_60 != (undefined8 *)0x0) {
    _free(puStack_60[-1]);
  }
  return;
}



/* Entry: 1092e2e90; end: 1092e2ecb;  */

void FUN_1092e2e90(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1092e2f88();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1092e2fd8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1092e2ecc; end: 1092e2f87;  */

uint * FUN_1092e2ecc(uint *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar20 = NEON_smax(*(undefined8 *)param_3,0,4);
  *(undefined8 *)param_3 = uVar20;
  uVar21 = NEON_rev64(*(undefined8 *)(param_2 + 2),4);
  uVar19 = NEON_smax(*(undefined8 *)(param_3 + 2),0,4);
  uVar19 = NEON_smin(CONCAT44((int)((ulong)uVar21 >> 0x20) - (int)((ulong)uVar20 >> 0x20),
                              (int)uVar21 - (int)uVar20),uVar19,4);
  *(undefined8 *)(param_3 + 2) = uVar19;
  uVar3 = *param_2;
  *param_1 = uVar3;
  param_1[1] = 2;
  uVar19 = NEON_rev64(*(undefined8 *)(param_3 + 2),4);
  puVar17 = param_1 + 2;
  *(undefined8 *)puVar17 = uVar19;
  lVar14 = *(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * (long)param_3[1];
  puVar18 = param_1 + 4;
  *(long *)puVar18 = lVar14;
  uVar19 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar19;
  lVar9 = *(long *)(param_2 + 0xe);
  puVar11 = param_1 + 0x14;
  puVar11[0] = 0;
  puVar11[1] = 0;
  *(long *)(param_1 + 0xe) = lVar9;
  *(uint **)(param_1 + 0x10) = puVar17;
  *(uint **)(param_1 + 0x12) = puVar11;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((int)param_2[1] < 3) {
    uVar13 = param_2[3];
    iVar10 = param_3[2];
    iVar2 = param_3[3];
    uVar15 = 0xffffbfff;
    if ((int)uVar13 <= iVar10) {
      uVar15 = 0xffffffff;
    }
    uVar16 = 0x4000;
    if (iVar2 != 1) {
      uVar16 = 0;
    }
    *param_1 = uVar16 | uVar15 & uVar3;
    uVar3 = (uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar3 & 7) << 1) & 3);
    iVar4 = *param_3;
    *(long *)(param_1 + 4) = lVar14 + (long)iVar4 * (long)(int)uVar3;
    if (((((-1 < iVar4) && (-1 < iVar10)) && (iVar4 + iVar10 <= (int)uVar13)) &&
        ((-1 < param_3[1] && (-1 < iVar2)))) && (param_3[1] + iVar2 <= (int)param_2[2])) {
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x14);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar10 = param_3[2];
        uVar13 = param_2[3];
      }
      if ((iVar10 < (int)uVar13) || (param_3[3] < (int)param_2[2])) {
        *param_1 = *param_1 | 0x8000;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x12);
      *puVar12 = **(undefined8 **)(param_2 + 0x12);
      puVar12[1] = (ulong)uVar3;
      if (((int)param_1[2] < 1) || ((int)param_1[3] < 1)) {
        if (*(long *)(param_1 + 0xe) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            func_0x000109a848d4(param_1);
          }
        }
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        puVar18[0] = 0;
        puVar18[1] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        if (0 < (int)param_1[1]) {
          lVar9 = 0;
          lVar14 = *(long *)(param_1 + 0x10);
          do {
            *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)param_1[1]);
        }
        puVar17[0] = 0;
        puVar17[1] = 0;
      }
      return param_1;
    }
    puVar8 = (undefined4 *)0x84;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar8 + 0x13) = 0x3c20302026262079;
    *(undefined8 *)(puVar8 + 0x11) = 0x2e696f72203d3c20;
    *(undefined8 *)(puVar8 + 0x17) = 0x2026262074686769;
    *(undefined8 *)(puVar8 + 0x15) = 0x65682e696f72203d;
    *(undefined8 *)(puVar8 + 0x1b) = 0x676965682e696f72;
    *(undefined8 *)(puVar8 + 0x19) = 0x202b20792e696f72;
    *(undefined8 *)(puVar8 + 0x1e) = 0x73776f722e6d203d;
    *(undefined8 *)(puVar8 + 0x1c) = 0x3c20746867696568;
    *(undefined8 *)(puVar8 + 3) = 0x203020262620782e;
    *(undefined8 *)(puVar8 + 1) = 0x696f72203d3c2030;
    *(undefined8 *)(puVar8 + 7) = 0x2026262068746469;
    *(undefined8 *)(puVar8 + 5) = 0x772e696f72203d3c;
    *(undefined8 *)(puVar8 + 0xb) = 0x746469772e696f72;
    *(undefined8 *)(puVar8 + 9) = 0x202b20782e696f72;
    *puVar8 = 1;
    puStack_40 = (undefined8 *)(puVar8 + 1);
    uStack_38 = 0x7c;
    *(undefined1 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0xf) = 0x3020262620736c6f;
    *(undefined8 *)(puVar8 + 0xd) = 0x632e6d203d3c2068;
    FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f2e8162,&UNK_10f597913,0x1fc);
  }
  else {
    puVar8 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_40 = (undefined8 *)(puVar8 + 1);
    *puStack_40 = 0x3c20736d69642e6d;
    uStack_38 = 0xb;
    *(undefined1 *)((long)puVar8 + 0xf) = 0;
    *(undefined4 *)((long)puVar8 + 0xb) = 0x32203d3c;
    FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f2e8162,&UNK_10f597913,0x1f5);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a8559c);
  (*pcVar7)();
}



/* Entry: 1092e2f88; end: 1092e2fd7;  */

void FUN_1092e2f88(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_1092c9014(puVar1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1092e2fd8; end: 1092e30fb;  */

/* WARNING: Possible PIC construction at 0x0001092e30c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092e30f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092e30cc) */
/* WARNING: Removing unreachable block (ram,0x0001092e30f4) */
/* WARNING: Removing unreachable block (ram,0x0001092e3150) */
/* WARNING: Removing unreachable block (ram,0x0001092e3130) */

long ** FUN_1092e2fd8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar4 < 0xaaaaaaaaaaaaaab) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092e3110();
    }
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    plStack_58 = plVar2;
    plStack_50 = puVar1;
    plStack_48 = puVar1;
    plStack_40 = plVar2 + uVar5 * 3;
    FUN_1092c9014(puVar1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    lVar6 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)(puVar1 + 3);
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
  }
  else {
    FUN_1092e30fc();
  }
  func_0x0001092e3188(&plStack_58,plStack_50);
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  return &plStack_58;
}



/* Entry: 1092e30fc; end: 1092e310f;  */

undefined1  [16] FUN_1092e30fc(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x0001092e3188();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 1092e3110; end: 1092e31df;  */

undefined1  [16] FUN_1092e3110(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x0001092e3188();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1092e31e0; end: 1092e3d2f;  */

void FUN_1092e31e0(long *param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  long ****pppplVar1;
  int iVar2;
  char cVar3;
  int *****pppppiVar4;
  undefined4 uVar5;
  long *****ppppplVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *****ppppplVar19;
  undefined8 uVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  int ****ppppiStack_2e8;
  int ****ppppiStack_2c0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  int ****ppppiStack_280;
  int ****ppppiStack_278;
  ulong uStack_270;
  int ****ppppiStack_268;
  int ****ppppiStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  long *plStack_230;
  int ****ppppiStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int ****ppppiStack_1e0;
  int ****ppppiStack_1d8;
  int ****ppppiStack_1d0;
  int ****ppppiStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  char cStack_184;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int ****ppppiStack_160;
  int ****ppppiStack_158;
  int ****ppppiStack_150;
  int ****ppppiStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int ****ppppiStack_108;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  int ****ppppiStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long ****pppplStack_d8;
  undefined8 uStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  undefined8 uStack_b8;
  
  (**(code **)(*param_4 + 0xd0))(&uStack_1f0,param_4);
  iRam0000000113732c30 = (int)(dStack_190 * dStack_190 * 1000.0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar11 = 12000;
  ppppiStack_1d0 = (int ****)param_1;
  __Znwm();
  *param_1 = lVar11;
  param_1[1] = lVar11;
  param_1[2] = lVar11 + 12000;
  uStack_1e8 = (long *****)0x0;
  uStack_1f0 = (long *****)0x0;
  ppppiStack_1d8 = (int ****)0x0;
  ppppiStack_1e0 = (int ****)0x0;
  func_0x0001092e3154(&uStack_1f0);
  uVar17 = (ulong)&uStack_250 | 8;
  uStack_248 = (long *****)param_3[1];
  uStack_250 = (int ****)*param_3;
  uStack_238 = param_3[3];
  uStack_240 = param_3[2];
  iVar2 = *(int *)((long)param_3 + 4);
  ppppiStack_228 = (int ****)param_3[5];
  plStack_230 = (long *)param_3[4];
  uStack_218 = param_3[7];
  uStack_220 = param_3[6];
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (param_3[7] != 0) {
    piVar15 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar8) {
        *piVar15 = *piVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_3 + 4);
  }
  uStack_210 = uVar17;
  puStack_208 = &uStack_200;
  if (iVar2 < 3) {
    uStack_200 = *(undefined8 *)param_3[9];
    uStack_1f8 = ((undefined8 *)param_3[9])[1];
  }
  else {
    uStack_250 = (int ****)((ulong)uStack_250 & 0xffffffff);
    func_0x000109a84868(&uStack_250,param_3);
  }
  if (200 < uStack_248._4_4_) {
    dVar28 = (double)((int)param_3[1] * *(int *)((long)param_3 + 0xc)) / 2.0;
    puVar18 = (undefined8 *)((ulong)&uStack_1f0 | 4);
    ppppiStack_2e8 = (int ****)0x41dfffffffc00000;
    ppppiStack_2c0 = (int ****)0x8;
    do {
      uStack_168 = (long ****)&uStack_250;
      uStack_1f0 = (long *****)CONCAT44(uStack_1f0._4_4_,0x42ff0000);
      puVar18[1] = 0;
      *puVar18 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[5] = 0;
      puVar18[4] = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      ppppiStack_160 = (int ****)0x0;
      uStack_170 = (long ****)CONCAT44(uStack_170._4_4_,0x1010000);
      pppplStack_c8._0_4_ = 0x2010000;
      uStack_b8 = 0;
      puStack_1b0 = &uStack_1e8;
      puStack_1a8 = &uStack_1a0;
      pppplStack_c0 = (long ****)&uStack_1f0;
      FUN_109b5a14c(0x406fe00000000000,0x4010000000000000,&uStack_170,&pppplStack_c8,0,0,0xb);
      ppppiStack_260 = (int ****)0x0;
      uStack_258 = 0;
      ppppiStack_268 = (int ****)0x0;
      uStack_170 = (long ****)0x0;
      uStack_168 = (long ****)0x0;
      ppppiStack_160 = (int ****)0x0;
      pppplStack_c8 = (long ****)CONCAT44(pppplStack_c8._4_4_,0x3010000);
      uStack_b8 = 0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0x8204000c);
      pppplStack_d8 = (long ****)&ppppiStack_268;
      uStack_d0 = 0;
      auStack_f8[0] = 0x8203001c;
      uStack_e8 = 0;
      uStack_110 = 0;
      ppppiStack_f0 = (int ****)&uStack_170;
      pppplStack_c0 = (long ****)&uStack_1f0;
      FUN_109adf8b0(&pppplStack_c8,&uStack_e0,auStack_f8,1,2,&uStack_110);
      if (uStack_170 != (long ****)0x0) {
        uStack_168 = uStack_170;
        __ZdlPv();
      }
      if (uStack_1b8 != 0) {
        piVar15 = (int *)(uStack_1b8 + 0x14);
        do {
          iVar2 = *piVar15;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar8) {
            *piVar15 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      uStack_1b8 = 0;
      ppppplVar21 = (long *****)0x0;
      ppppiStack_1d8 = (int ****)0x0;
      ppppiStack_1e0 = (int ****)0x0;
      ppppiStack_1c8 = (int ****)0x0;
      ppppiStack_1d0 = (int ****)0x0;
      if (0 < uStack_1f0._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_1f0._4_4_);
      }
      ppppplVar19 = (long *****)ppppiStack_268;
      ppppplVar6 = (long *****)ppppiStack_260;
      if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
        _free(puStack_1a8[-1]);
        ppppplVar19 = (long *****)ppppiStack_268;
        ppppplVar6 = (long *****)ppppiStack_260;
      }
      for (; ppppplVar19 != ppppplVar6; ppppplVar19 = ppppplVar19 + 3) {
        pppplVar1 = ppppplVar19[1];
        if (*ppppplVar19 != pppplVar1) {
          uVar20 = NEON_scvtf(param_3[1],4);
          ppppplVar21 = (long *****)NEON_rev64(uVar20,4);
          uVar20 = NEON_scvtf(uStack_248,4);
          uVar20 = NEON_rev64(uVar20,4);
          pppplVar13 = *ppppplVar19;
          do {
            uVar25 = NEON_scvtf(*pppplVar13,4);
            pppplVar14 = pppplVar13 + 1;
            *pppplVar13 = (long ***)
                          CONCAT44((int)(((float)((ulong)ppppplVar21 >> 0x20) *
                                         (float)((ulong)uVar25 >> 0x20)) /
                                        (float)((ulong)uVar20 >> 0x20)),
                                   (int)((SUB84(ppppplVar21,0) * (float)uVar25) / (float)uVar20));
            pppplVar13 = pppplVar14;
          } while (pppplVar14 != pppplVar1);
        }
        ppppiStack_1e0 = (int ****)0x0;
        uStack_1f0 = (long *****)CONCAT44(uStack_1f0._4_4_,0x8103000c);
        uStack_1e8 = ppppplVar19;
        FUN_109b415b4(&uStack_1f0,0);
        bVar8 = false;
        bVar9 = false;
        bVar10 = false;
        if ((double)iRam0000000113732c30 <= (double)ppppplVar21) {
          bVar8 = false;
          bVar9 = false;
          bVar10 = true;
          if (!NAN((double)ppppplVar21) && !NAN(dVar28)) {
            bVar8 = (double)ppppplVar21 < dVar28;
            bVar9 = (double)ppppplVar21 == dVar28;
            bVar10 = false;
          }
        }
        if (bVar9 || bVar8 != bVar10) {
          ppppiStack_280 = (int ****)0x0;
          ppppiStack_278 = (int ****)0x0;
          uStack_270 = 0;
          (**(code **)(*param_4 + 0xd0))(&uStack_1f0,param_4);
          if (cStack_184 == '\x01') {
            uStack_170 = (long ****)0x0;
            uStack_168 = (long ****)0x0;
            ppppiStack_160 = (int ****)0x0;
            FUN_1092c8e7c(&uStack_1f0,&uStack_170,ppppplVar19);
            if ((long *****)ppppiStack_280 != (long *****)0x0) {
              ppppiStack_278 = ppppiStack_280;
              __ZdlPv();
            }
            ppppplVar21 = uStack_1f0;
            ppppiStack_278 = (int ****)uStack_1e8;
            ppppiStack_280 = (int ****)uStack_1f0;
            uStack_270 = (ulong)ppppiStack_1e0;
            uStack_1e8 = (long *****)0x0;
            ppppiStack_1e0 = (int ****)0x0;
            uStack_1f0 = (long *****)0x0;
            if (uStack_170 != (long ****)0x0) {
              uStack_168 = uStack_170;
              __ZdlPv();
            }
LAB_1092e3640:
            pppplStack_c8 = (long ****)0x0;
            pppplStack_c0 = (long ****)0x0;
            uStack_b8 = 0;
            uStack_1f0 = (long *****)0x242ff400c;
            ppppiStack_1d8 = (int ****)0x0;
            ppppiStack_1d0 = (int ****)0x0;
            uStack_1c0 = 0;
            uStack_1b8 = 0;
            uStack_1a0 = 0;
            uStack_198 = 0;
            uVar16 = (long)ppppiStack_278 - (long)ppppiStack_280;
            uVar5 = (undefined4)(uVar16 >> 3);
            uStack_1e8 = (long *****)CONCAT44(1,uVar5);
            lVar11 = (long)(uVar16 * 0x20000000) >> 0x20;
            if (uVar16 != 0) {
              ppppplVar21 = (long *****)0x8;
              uStack_198 = 8;
              uStack_1a0 = 8;
              ppppiStack_1d8 = ppppiStack_280;
              ppppiStack_1d0 = ppppiStack_280 + lVar11;
              ppppiStack_1c8 = ppppiStack_1d0;
            }
            uStack_d0 = 0;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x1010000);
            auStack_f8[0] = 0x8203000c;
            ppppiStack_f0 = (int ****)&pppplStack_c8;
            uStack_e8 = 0;
            uStack_170 = (long ****)0x242ff400c;
            uStack_168 = (long ****)CONCAT44(1,uVar5);
            ppppiStack_158 = (int ****)0x0;
            ppppiStack_150 = (int ****)0x0;
            uStack_140 = 0;
            lStack_138 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            if (ppppiStack_280 != ppppiStack_278) {
              uStack_118 = 8;
              uStack_120 = 8;
              ppppiStack_158 = ppppiStack_280;
              ppppiStack_150 = ppppiStack_280 + lVar11;
              ppppplVar21 = (long *****)ppppiStack_2c0;
              ppppiStack_148 = ppppiStack_150;
            }
            uStack_100 = 0;
            uStack_110 = CONCAT44(uStack_110._4_4_,0x1010000);
            ppppiStack_1e0 = ppppiStack_1d8;
            puStack_1b0 = &uStack_1e8;
            puStack_1a8 = &uStack_1a0;
            ppppiStack_160 = ppppiStack_158;
            puStack_130 = &uStack_168;
            puStack_128 = &uStack_120;
            ppppiStack_108 = (int ****)&uStack_170;
            pppplStack_d8 = (long ****)&uStack_1f0;
            FUN_109b4131c(&uStack_110,1);
            FUN_109ac7338((double)ppppplVar21 * 0.12,&uStack_e0,auStack_f8,1);
            if (lStack_138 != 0) {
              piVar15 = (int *)(lStack_138 + 0x14);
              do {
                iVar2 = *piVar15;
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar8) {
                  *piVar15 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_170);
              }
            }
            lStack_138 = 0;
            ppppiStack_158 = (int ****)0x0;
            ppppiStack_160 = (int ****)0x0;
            ppppiStack_148 = (int ****)0x0;
            ppppiStack_150 = (int ****)0x0;
            if (0 < uStack_170._4_4_) {
              lVar11 = 0;
              do {
                *(undefined4 *)((long)puStack_130 + lVar11 * 4) = 0;
                lVar11 = lVar11 + 1;
              } while (lVar11 < uStack_170._4_4_);
            }
            if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
              _free(puStack_128[-1]);
            }
            if (uStack_1b8 != 0) {
              piVar15 = (int *)(uStack_1b8 + 0x14);
              do {
                iVar2 = *piVar15;
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar8) {
                  *piVar15 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_1f0);
              }
            }
            uStack_1b8 = 0;
            ppppplVar21 = (long *****)0x0;
            ppppiStack_1d8 = (int ****)0x0;
            ppppiStack_1e0 = (int ****)0x0;
            ppppiStack_1c8 = (int ****)0x0;
            ppppiStack_1d0 = (int ****)0x0;
            if (0 < uStack_1f0._4_4_) {
              lVar11 = 0;
              do {
                *(undefined4 *)((long)puStack_1b0 + lVar11 * 4) = 0;
                lVar11 = lVar11 + 1;
              } while (lVar11 < uStack_1f0._4_4_);
            }
            if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
              _free(puStack_1a8[-1]);
            }
            if ((long)pppplStack_c0 - (long)pppplStack_c8 == 0x20) {
              uStack_1f0._0_4_ = 0x8103000c;
              uStack_1e8 = (long *****)&ppppiStack_280;
              ppppiStack_1e0 = (int ****)0x0;
              FUN_109b415b4(&uStack_1f0,0);
              uStack_1f0 = (long *****)CONCAT44(uStack_1f0._4_4_,0x8103000c);
              uStack_1e8 = &pppplStack_c8;
              ppppiStack_1e0 = (int ****)0x0;
              ppppplVar22 = ppppplVar21;
              FUN_109b415b4(&uStack_1f0,0);
              ppppplVar21 = (long *****)
                            (double)ABS(((float)(double)ppppplVar21 - (float)(double)ppppplVar22) /
                                        (float)(double)ppppplVar21);
              if (0.4 < (double)ppppplVar21) goto LAB_1092e3880;
              uVar16 = 2;
              pppppiVar4 = (int *****)pppplStack_c8;
              do {
                iVar2 = *(int *)(pppppiVar4 + 1);
                dVar23 = (double)(*(int *)(pppplStack_c8 + (uVar16 & 3)) - iVar2);
                dVar24 = (double)(*(int *)((long)(pppplStack_c8 + (uVar16 & 3)) + 4) -
                                 *(int *)((long)pppppiVar4 + 0xc));
                dVar26 = (double)(*(int *)pppppiVar4 - iVar2);
                dVar27 = (double)(*(int *)((long)pppppiVar4 + 4) - *(int *)((long)pppppiVar4 + 0xc))
                ;
                ppppplVar21 = (long *****)
                              ABS((dVar24 * dVar27 + dVar26 * dVar23) /
                                  SQRT((dVar27 * dVar27 + dVar26 * dVar26) *
                                       (dVar24 * dVar24 + dVar23 * dVar23) + 1e-10));
                if (0.3 < (double)ppppplVar21) goto LAB_1092e3884;
                uVar16 = uVar16 + 1;
                pppppiVar4 = pppppiVar4 + 1;
              } while (uVar16 != 5);
              uVar16 = 1;
              piVar15 = (int *)((long)pppplStack_c8 + 4U);
              ppppplVar22 = (long *****)ppppiStack_2e8;
              do {
                dVar23 = (double)(piVar15[-1] - *(int *)(pppplStack_c8 + (uVar16 & 3)));
                dVar24 = (double)(*piVar15 - *(int *)((long)(pppplStack_c8 + (uVar16 & 3)) + 4));
                ppppplVar21 = (long *****)SQRT(dVar24 * dVar24 + dVar23 * dVar23);
                if ((double)ppppplVar22 <= (double)ppppplVar21) {
                  ppppplVar21 = ppppplVar22;
                }
                uVar16 = uVar16 + 1;
                piVar15 = piVar15 + 2;
                ppppplVar22 = ppppplVar21;
              } while (uVar16 != 5);
              uVar16 = 1;
              piVar15 = (int *)((long)pppplStack_c8 + 4U);
              do {
                if (uVar16 == 5) {
                  pppplStack_c0 = pppplStack_c8;
                  __ZdlPv();
                  FUN_1092e2e90(param_1,&ppppiStack_280);
                  goto LAB_1092e388c;
                }
                dVar23 = (double)(piVar15[-1] - *(int *)(pppplStack_c8 + (uVar16 & 3)));
                dVar24 = (double)(*piVar15 - *(int *)((long)(pppplStack_c8 + (uVar16 & 3)) + 4));
                uVar16 = uVar16 + 1;
                piVar15 = piVar15 + 2;
              } while (ABS((SQRT(dVar24 * dVar24 + dVar23 * dVar23) - (double)ppppplVar21) /
                           (double)ppppplVar21) <= 0.7);
            }
            else {
LAB_1092e3880:
              if ((int *****)pppplStack_c8 == (int *****)0x0) goto LAB_1092e388c;
            }
LAB_1092e3884:
            pppplStack_c0 = pppplStack_c8;
            __ZdlPv();
          }
          else {
            lStack_298 = 0;
            lStack_290 = 0;
            uStack_288 = 0;
            FUN_1092c9014(&lStack_298,*ppppplVar19,ppppplVar19[1],
                          (long)ppppplVar19[1] - (long)*ppppplVar19 >> 3);
            plVar12 = &lStack_298;
            FUN_1092c6220(plVar12,&ppppiStack_280);
            if (lStack_298 != 0) {
              lStack_290 = lStack_298;
              __ZdlPv();
            }
            if (((ulong)plVar12 & 1) != 0) goto LAB_1092e3640;
          }
LAB_1092e388c:
          if ((long *****)ppppiStack_280 != (long *****)0x0) {
            ppppiStack_278 = ppppiStack_280;
            __ZdlPv();
          }
        }
      }
      uStack_1f0 = (long *****)CONCAT44(uStack_1f0._4_4_,0x42ff0000);
      puVar18[1] = 0;
      *puVar18 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[5] = 0;
      puVar18[4] = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_170 = (long ****)CONCAT44(uStack_170._4_4_,0x1010000);
      uStack_168 = (long ****)&uStack_250;
      ppppiStack_160 = (int ****)0x0;
      pppplStack_c8 = (long ****)CONCAT44(pppplStack_c8._4_4_,0x2010000);
      uStack_b8 = 0;
      uStack_e0 = NEON_rev64(CONCAT44((int)((ulong)uStack_248 >> 0x20) / 2,(int)uStack_248 / 2),4);
      puStack_1b0 = (undefined8 *)((ulong)&uStack_1f0 | 8);
      puStack_1a8 = &uStack_1a0;
      pppplStack_c0 = (long ****)&uStack_1f0;
      FUN_109b0f718(0x4008000000000000,0,&uStack_170,&pppplStack_c8,&uStack_e0,1);
      if (uStack_218 != 0) {
        piVar15 = (int *)(uStack_218 + 0x14);
        do {
          iVar2 = *piVar15;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar8) {
            *piVar15 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_250);
        }
      }
      if (0 < uStack_250._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)(uStack_210 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_250._4_4_);
      }
      uStack_248 = uStack_1e8;
      uStack_250 = (int ****)uStack_1f0;
      uStack_238 = (ulong)ppppiStack_1d8;
      uStack_240 = (ulong)ppppiStack_1e0;
      ppppiStack_228 = ppppiStack_1c8;
      plStack_230 = (long *)ppppiStack_1d0;
      uStack_218 = uStack_1b8;
      uStack_220 = uStack_1c0;
      uVar16 = uStack_210;
      puVar7 = puStack_208;
      if ((puStack_208 != &uStack_200) &&
         (uVar16 = uVar17, puVar7 = &uStack_200, puStack_208 != (undefined8 *)0x0)) {
        _free(puStack_208[-1]);
      }
      puStack_208 = puVar7;
      uStack_210 = uVar16;
      if (uStack_1f0._4_4_ < 3) {
        *puStack_208 = *puStack_1a8;
        puStack_208[1] = puStack_1a8[1];
        uStack_1f0 = (long *****)CONCAT44(uStack_1f0._4_4_,0x42ff0000);
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        if (puStack_1a8 != &uStack_1a0) {
          _free(puStack_1a8[-1]);
        }
      }
      else {
        uStack_210 = (ulong)puStack_1b0;
        puStack_208 = puStack_1a8;
      }
      uStack_1f0 = (long *****)&ppppiStack_268;
      FUN_1092cc3c0(&uStack_1f0);
    } while (200 < uStack_248._4_4_);
  }
  if (uStack_218 != 0) {
    piVar15 = (int *)(uStack_218 + 0x14);
    do {
      iVar2 = *piVar15;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar8) {
        *piVar15 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
    }
  }
  uStack_218 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppppiStack_228 = (int ****)0x0;
  plStack_230 = (long *)0x0;
  if (0 < uStack_250._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_210 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_250._4_4_);
  }
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  return;
}



/* Entry: 1092e3d30; end: 1092e3d83;  */

void FUN_1092e3d30(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      *(undefined4 *)(uVar1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x10);
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_1092e8de4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1092e3d84; end: 1092e3db3;  */

void FUN_1092e3d84(long *param_1,ulong param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar6 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  plVar3 = (long *)(param_2 - uVar6);
  lVar9 = param_1[1];
  if ((long *)(param_1[2] - lVar9 >> 3) < plVar3) {
    lVar9 = lVar9 - *param_1;
    uVar6 = (long)plVar3 + (lVar9 >> 3);
    if (uVar6 >> 0x3d != 0) {
      FUN_1092cc094();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar6 = param_1[2];
      plVar2 = (long *)*param_1;
      if ((ulong)((long)(uVar6 - (long)plVar2) >> 3) < param_4) {
        plVar5 = plVar3;
        if (plVar2 != (long *)0x0) {
          param_1[1] = (long)plVar2;
          __ZdlPv();
          uVar6 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        if (param_4 >> 0x3d != 0) {
          FUN_1092cc094();
          if ((ulong)plVar5 >> 0x3d != 0) {
            FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
          plVar3 = plVar2;
          FUN_1092cc0a8();
          *plVar2 = (long)plVar3;
          plVar2[1] = (long)plVar3;
          plVar2[2] = (long)(plVar3 + (long)plVar5);
          return;
        }
        uVar8 = (long)uVar6 >> 2;
        if ((ulong)((long)uVar6 >> 2) <= param_4) {
          uVar8 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        FUN_1092e9240(param_1,uVar8);
        plVar2 = (long *)param_1[1];
        for (; plVar3 != param_3; plVar3 = plVar3 + 1) {
          *plVar2 = *plVar3;
          plVar2 = plVar2 + 1;
        }
        param_1[1] = (long)plVar2;
      }
      else {
        plVar5 = (long *)param_1[1];
        lVar9 = (long)plVar5 - (long)plVar2;
        if ((ulong)(lVar9 >> 3) < param_4) {
          plVar7 = (long *)((long)plVar3 + lVar9);
          plVar1 = plVar5;
          if (plVar5 != plVar2) {
            do {
              *plVar2 = *plVar3;
              lVar9 = lVar9 + -8;
              plVar2 = plVar2 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar9 != 0);
          }
          for (; plVar7 != param_3; plVar7 = plVar7 + 1) {
            *plVar5 = *plVar7;
            plVar5 = plVar5 + 1;
            plVar1 = plVar1 + 1;
          }
          param_1[1] = (long)plVar1;
        }
        else {
          for (; plVar3 != param_3; plVar3 = plVar3 + 1) {
            *plVar2 = *plVar3;
            plVar2 = plVar2 + 1;
          }
          param_1[1] = (long)plVar2;
        }
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092cc0a8();
    }
    lVar9 = (long)plVar2 + lVar9;
    plStack_40 = plVar2 + uVar8;
    plStack_58 = plVar2;
    lStack_50 = lVar9;
    _bzero(lVar9,(long)plVar3 * 8);
    lStack_48 = lVar9 + (long)plVar3 * 8;
    FUN_1092cc028(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (plVar3 != (long *)0x0) {
      _bzero(lVar9,(long)plVar3 * 8);
      lVar9 = lVar9 + (long)plVar3 * 8;
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 1092e3db4; end: 1092e3f2f;  */

void FUN_1092e3db4(int *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iStack_48;
  int iStack_44;
  
  (**(code **)(*param_3 + 0x18))();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  iVar5 = (int)param_3;
  iVar3 = iVar5 * 9;
  iVar4 = iVar5 * 3;
  piVar6 = param_1;
  iStack_48 = iVar3;
  iStack_44 = iVar4;
  FUN_1092e7794(param_1,&iStack_48);
  piVar8 = *(int **)(param_1 + 4);
  *(int **)(param_1 + 2) = piVar6;
  iVar1 = iVar5 * 10;
  if (piVar6 < piVar8) {
    piVar7 = piVar6 + 2;
    *piVar6 = iVar1;
    piVar6[1] = iVar4;
  }
  else {
    piVar7 = param_1;
    iStack_48 = iVar1;
    iStack_44 = iVar4;
    FUN_1092e7794(param_1,&iStack_48);
    piVar8 = *(int **)(param_1 + 4);
  }
  *(int **)(param_1 + 2) = piVar7;
  iVar2 = iVar5 * 0xd;
  if (piVar7 < piVar8) {
    piVar6 = piVar7 + 2;
    *piVar7 = iVar4;
    piVar7[1] = iVar2;
  }
  else {
    piVar6 = param_1;
    iStack_48 = iVar4;
    iStack_44 = iVar2;
    FUN_1092e7794(param_1,&iStack_48);
    piVar8 = *(int **)(param_1 + 4);
  }
  *(int **)(param_1 + 2) = piVar6;
  iStack_48 = iVar5 * 0x10;
  if (piVar6 < piVar8) {
    piVar7 = piVar6 + 2;
    *piVar6 = iStack_48;
    piVar6[1] = iVar2;
  }
  else {
    piVar7 = param_1;
    iStack_44 = iVar2;
    FUN_1092e7794(param_1,&iStack_48);
    piVar8 = *(int **)(param_1 + 4);
  }
  *(int **)(param_1 + 2) = piVar7;
  iVar5 = iVar5 * 0xf;
  if (piVar7 < piVar8) {
    piVar6 = piVar7 + 2;
    *piVar7 = iVar3;
    piVar7[1] = iVar5;
  }
  else {
    piVar6 = param_1;
    iStack_48 = iVar3;
    iStack_44 = iVar5;
    FUN_1092e7794(param_1,&iStack_48);
    piVar8 = *(int **)(param_1 + 4);
  }
  *(int **)(param_1 + 2) = piVar6;
  if (piVar6 < piVar8) {
    piVar8 = piVar6 + 2;
    *piVar6 = iVar1;
    piVar6[1] = iVar5;
  }
  else {
    piVar8 = param_1;
    iStack_48 = iVar1;
    iStack_44 = iVar5;
    FUN_1092e7794(param_1,&iStack_48);
  }
  *(int **)(param_1 + 2) = piVar8;
  return;
}



/* Entry: 1092e3f30; end: 1092e7737;  */

/* WARNING: Removing unreachable block (ram,0x0001092e4610) */
/* WARNING: Removing unreachable block (ram,0x0001092e4614) */
/* WARNING: Removing unreachable block (ram,0x0001092e461c) */
/* WARNING: Removing unreachable block (ram,0x0001092e4624) */
/* WARNING: Removing unreachable block (ram,0x0001092e4628) */
/* WARNING: Removing unreachable block (ram,0x0001092e4648) */
/* WARNING: Removing unreachable block (ram,0x0001092e4650) */
/* WARNING: Removing unreachable block (ram,0x0001092e4664) */
/* WARNING: Removing unreachable block (ram,0x0001092e4674) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1092e3f30(long *param_1,undefined8 param_2,byte *param_3,long param_4,long *param_5,
                  undefined8 *******param_6,int param_7)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  float fVar15;
  undefined4 *puVar16;
  double *pdVar17;
  code *pcVar18;
  bool bVar19;
  undefined8 *******pppppppuVar20;
  uint *******pppppppuVar21;
  long *plVar22;
  uint *******pppppppuVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  uint *******pppppppuVar27;
  undefined8 *puVar28;
  char cVar29;
  uint uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *******pppppppuVar33;
  long lVar34;
  int iVar35;
  int *piVar36;
  ulong uVar37;
  ulong uVar38;
  float *pfVar39;
  uint uVar40;
  int iVar41;
  undefined8 *puVar42;
  int iVar43;
  uint uVar44;
  bool bVar45;
  double dVar46;
  uint ******ppppppuVar47;
  uint ******ppppppuVar48;
  uint uVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  undefined8 uVar53;
  double dVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar61 [16];
  undefined8 *****pppppuVar63;
  undefined1 auVar64 [16];
  long lVar65;
  double dVar66;
  float fVar67;
  undefined8 ******ppppppuVar68;
  int iVar69;
  undefined8 ******ppppppuVar70;
  uint *******pppppppuStack_830;
  uint *******pppppppuStack_818;
  uint *******pppppppuStack_7a0;
  undefined8 uStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  ulong uStack_750;
  undefined8 *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_728;
  undefined8 *****pppppuStack_720;
  undefined8 uStack_718;
  undefined8 ******ppppppuStack_710;
  undefined8 ******ppppppuStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  ulong uStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  byte bStack_690;
  byte bStack_68f;
  undefined2 uStack_68e;
  float fStack_68c;
  undefined8 uStack_688;
  int iStack_680;
  int iStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  int *piStack_650;
  long **pplStack_648;
  long *plStack_640;
  long alStack_638 [2];
  uint uStack_628;
  int iStack_624;
  int iStack_620;
  int iStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  double dStack_5f0;
  int *piStack_5e8;
  double *pdStack_5e0;
  double adStack_5d8 [3];
  float fStack_5c0;
  int iStack_5bc;
  undefined8 ******ppppppuStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 ******ppppppuStack_590;
  undefined8 ******ppppppuStack_588;
  ulong uStack_580;
  undefined8 ****ppppuStack_578;
  undefined8 ****ppppuStack_570;
  undefined8 ****ppppuStack_568;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  float fStack_548;
  undefined4 uStack_544;
  float fStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  int iStack_530;
  int iStack_52c;
  undefined8 uStack_528;
  double dStack_520;
  undefined8 *****pppppuStack_518;
  undefined8 *****pppppuStack_510;
  undefined8 *****pppppuStack_508;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *****pppppuStack_4e8;
  undefined8 *****pppppuStack_4e0;
  undefined8 uStack_4d8;
  double dStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  ulong uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  ulong uStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  uint *****pppppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  float fStack_3c0;
  float fStack_3bc;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  double dStack_388;
  int *piStack_380;
  double *pdStack_378;
  double dStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  uint uStack_350;
  float fStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 ******ppppppuStack_338;
  undefined8 ******ppppppuStack_330;
  undefined8 uStack_328;
  uint uStack_320;
  uint uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint *******pppppppuStack_308;
  uint *******pppppppuStack_300;
  uint *******pppppppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  double dStack_2b8;
  undefined8 uStack_2b0;
  double *pdStack_2a8;
  double dStack_2a0;
  double dStack_298;
  undefined4 *puStack_290;
  undefined8 uStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double dStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long alStack_c0 [3];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_3c0 = 127.5;
  uStack_3b8._4_4_ = 0;
  uStack_3b0 = 0;
  fStack_3bc = 0.0;
  uStack_3b8._0_4_ = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  piVar36 = (int *)((ulong)&fStack_3c0 | 8);
  uStack_394 = 0;
  uStack_39c = 0;
  uStack_398 = 0;
  dStack_388 = 0.0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_368 = 0;
  dStack_370 = 0.0;
  uStack_3d8 = 0;
  lStack_3e0 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  pppppuStack_400 = (uint *****)0x0;
  uStack_3c8 = -1;
  param_1[0x11] = param_1[0x10];
  piStack_380 = piVar36;
  pdStack_378 = &dStack_370;
  FUN_1092c54cc(param_1 + 0x13,param_2,&fStack_3c0,&pppppuStack_400);
  if (uStack_3c8 < 0) {
    uStack_460 = param_1[1];
    lStack_458 = param_1[2];
    iVar35 = *(int *)((long)param_1 + 0xc);
    uStack_420 = (ulong)&uStack_460 | 8;
    lStack_450 = param_1[3];
    lStack_448 = param_1[4];
    lStack_440 = param_1[5];
    lStack_438 = param_1[6];
    lStack_430 = param_1[7];
    lStack_428 = param_1[8];
    puVar31 = &uStack_410;
    uStack_408 = 0;
    uStack_410 = 0;
    if (param_1[8] != 0) {
      piVar36 = (int *)(param_1[8] + 0x14);
      do {
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = *piVar36 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      iVar35 = *(int *)((long)param_1 + 0xc);
    }
    puStack_418 = puVar31;
    if (iVar35 < 3) {
      uStack_410 = *(undefined8 *)param_1[10];
      uStack_408 = ((undefined8 *)param_1[10])[1];
    }
    else {
      uStack_460 = uStack_460 & 0xffffffff;
      func_0x000109a84868(&uStack_460);
    }
    FUN_1092e2c84(&uStack_460,param_4,0);
    if (lStack_428 != 0) {
      piVar36 = (int *)(lStack_428 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_460);
      }
    }
    lStack_428 = 0;
    lStack_448 = 0;
    lStack_450 = 0;
    lStack_438 = 0;
    lStack_440 = 0;
    puVar42 = puStack_418;
    if (0 < uStack_460._4_4_) {
      lVar24 = 0;
      do {
        *(undefined4 *)(uStack_420 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < uStack_460._4_4_);
    }
LAB_1092e45cc:
    if (puVar42 != puVar31 && puVar42 != (undefined8 *)0x0) {
      _free(puVar42[-1]);
    }
    goto LAB_1092e7120;
  }
  if (param_7 != 0) {
    uStack_2f0._0_4_ = 6.888262e-29;
    uStack_2f0._4_4_ = 1.4013e-45;
    uVar37 = (long)param_1 + 0x99;
    FUN_1092e9388(uVar37,&uStack_2f0,param_2,param_6,&pppppuStack_400);
    if ((uVar37 & 1) == 0) {
      uStack_4c0 = param_1[1];
      lStack_4b8 = param_1[2];
      iVar35 = *(int *)((long)param_1 + 0xc);
      uStack_480 = (ulong)&uStack_4c0 | 8;
      lStack_4b0 = param_1[3];
      lStack_4a8 = param_1[4];
      lStack_4a0 = param_1[5];
      lStack_498 = param_1[6];
      lStack_490 = param_1[7];
      lStack_488 = param_1[8];
      puVar31 = &uStack_470;
      uStack_468 = 0;
      uStack_470 = 0;
      if (param_1[8] != 0) {
        piVar36 = (int *)(param_1[8] + 0x14);
        do {
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = *piVar36 + 1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        iVar35 = *(int *)((long)param_1 + 0xc);
      }
      puStack_478 = puVar31;
      if (iVar35 < 3) {
        uStack_470 = *(undefined8 *)param_1[10];
        uStack_468 = ((undefined8 *)param_1[10])[1];
      }
      else {
        uStack_4c0 = uStack_4c0 & 0xffffffff;
        func_0x000109a84868(&uStack_4c0);
      }
      FUN_1092e2c84(&uStack_4c0,param_4,0);
      if (lStack_488 != 0) {
        piVar36 = (int *)(lStack_488 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_4c0);
        }
      }
      lStack_488 = 0;
      lStack_4a8 = 0;
      lStack_4b0 = 0;
      lStack_498 = 0;
      lStack_4a0 = 0;
      puVar42 = puStack_478;
      if (0 < uStack_4c0._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_480 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_4c0._4_4_);
      }
      goto LAB_1092e45cc;
    }
  }
  uStack_4c8 = 0;
  pppppppuStack_4f8 = (undefined8 *******)0x0;
  pppppppuStack_500 = (undefined8 *******)0x0;
  pppppuStack_4e8 = (undefined8 *****)0x0;
  pppppppuStack_4f0 = (undefined8 *******)0x0;
  uStack_4d8 = 0;
  pppppuStack_4e0 = (undefined8 *****)0x0;
  FUN_1092c5e24(&uStack_2f0,param_1 + 0x13);
  puVar16 = puStack_290;
  dVar46 = dStack_2b8;
  iVar35 = dStack_298._0_4_;
  uVar37 = (ulong)dStack_298 & 0xffffffff;
  uStack_108._0_4_ = 0;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  ppppuVar6 = pppppuStack_400[(long)uStack_3c8._4_4_ * 3];
  ppppuVar7 = (pppppuStack_400 + (long)uStack_3c8._4_4_ * 3)[1];
  FUN_1092c9014(&fStack_110,ppppuVar6,ppppuVar7,(long)ppppuVar7 - (long)ppppuVar6 >> 3);
  iStack_680 = 0;
  iStack_67c = 0;
  bStack_690 = 0xc;
  bStack_68f = 0;
  uStack_68e = 0x8103;
  uStack_688 = (undefined8 *******)&fStack_110;
  FUN_109b2f34c(&uStack_2f0,&bStack_690,0);
  uStack_4c8 = CONCAT44((int)(long)((double)CONCAT44(uStack_2dc,uStack_2e0) /
                                   (double)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0)),
                        (int)(long)((double)CONCAT44(uStack_2e8._4_4_,(int)uStack_2e8) /
                                   (double)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0)));
  if (CONCAT44(fStack_10c,fStack_110) != 0) {
    uStack_108._0_4_ = (int)fStack_110;
    uStack_108._4_4_ = (int)fStack_10c;
    __ZdlPv();
  }
  iStack_680 = 0;
  iStack_67c = 0;
  bStack_690 = 0;
  bStack_68f = 0;
  uStack_68e = 0;
  fStack_68c = 0.0;
  uStack_688._0_4_ = 0;
  uStack_688._4_4_ = 0.0;
  ppppuVar6 = pppppuStack_400[(long)uStack_3c8._4_4_ * 3];
  ppppuVar7 = (pppppuStack_400 + (long)uStack_3c8._4_4_ * 3)[1];
  FUN_1092c9014(&bStack_690,ppppuVar6,ppppuVar7,(long)ppppuVar7 - (long)ppppuVar6 >> 3);
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2f0._0_4_ = -2.4060934e-38;
  uStack_2e8 = (undefined8 *******)&bStack_690;
  FUN_109b408b4(&fStack_560,&uStack_2f0);
  iVar41 = CONCAT22(uStack_68e,CONCAT11(bStack_68f,bStack_690));
  if (CONCAT44(fStack_68c,iVar41) != 0) {
    uStack_688._4_4_ = fStack_68c;
    uStack_688._0_4_ = iVar41;
    __ZdlPv();
  }
  fStack_558 = (float)((double)fStack_558 * dVar46);
  fStack_554 = (float)((double)fStack_554 * dVar46);
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2e8._0_4_ = 0;
  uStack_2e8._4_4_ = 0;
  uStack_2f0._0_4_ = 0.0;
  uStack_2f0._4_4_ = 0.0;
  FUN_109a9bd44(&fStack_560,&uStack_2f0);
  if (0 < iVar35) {
    pfVar39 = (float *)((ulong)&uStack_2f0 | 4);
    do {
      lVar24 = (long)(float)(int)pfVar39[-1];
      bStack_690 = (byte)lVar24;
      bStack_68f = (byte)((ulong)lVar24 >> 8);
      uStack_68e = (undefined2)((ulong)lVar24 >> 0x10);
      fStack_68c = (float)(long)(float)(int)*pfVar39;
      if (pppppppuStack_4f8 < pppppppuStack_4f0) {
        pppppppuVar20 = pppppppuStack_4f8 + 1;
        *(int *)pppppppuStack_4f8 = (int)lVar24;
        *(float *)((long)pppppppuStack_4f8 + 4) = fStack_68c;
      }
      else {
        pppppppuVar20 = &pppppppuStack_500;
        FUN_1092e7794(pppppppuVar20,&bStack_690);
      }
      pfVar39 = pfVar39 + 2;
      uVar37 = uVar37 - 1;
      pppppppuStack_4f8 = pppppppuVar20;
    } while (uVar37 != 0);
  }
  uStack_108._0_4_ = 0;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  ppppuVar6 = pppppuStack_400[(long)(int)uStack_3c8 * 3];
  ppppuVar7 = (pppppuStack_400 + (long)(int)uStack_3c8 * 3)[1];
  FUN_1092c9014(&fStack_110,ppppuVar6,ppppuVar7,(long)ppppuVar7 - (long)ppppuVar6 >> 3);
  iStack_680 = 0;
  iStack_67c = 0;
  bStack_690 = 0xc;
  bStack_68f = 0;
  uStack_68e = 0x8103;
  uStack_688 = (undefined8 *******)&fStack_110;
  FUN_109b41868(&pppppppuStack_308,&bStack_690);
  if (CONCAT44(fStack_10c,fStack_110) != 0) {
    uStack_108._0_4_ = (int)fStack_110;
    uStack_108._4_4_ = (int)fStack_10c;
    __ZdlPv();
  }
  dStack_4d0 = (double)(pppppppuStack_2f8._0_4_ + 90.0);
  uStack_108._0_4_ = 0;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  ppppuVar6 = pppppuStack_400[(long)(int)uStack_3c8 * 3];
  ppppuVar7 = (pppppuStack_400 + (long)(int)uStack_3c8 * 3)[1];
  FUN_1092c9014(&fStack_110,ppppuVar6,ppppuVar7,(long)ppppuVar7 - (long)ppppuVar6 >> 3);
  iStack_680 = 0;
  iStack_67c = 0;
  bStack_690 = 0xc;
  bStack_68f = 0;
  uStack_68e = 0x8103;
  uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,0x8203000c);
  uStack_180 = 0;
  ppppppuStack_188 = &pppppuStack_4e8;
  uStack_688 = (undefined8 *******)&fStack_110;
  FUN_109ae2358(&bStack_690,&uStack_190,0,1);
  if (CONCAT44(fStack_10c,fStack_110) != 0) {
    uStack_108._0_4_ = (int)fStack_110;
    uStack_108._4_4_ = (int)fStack_10c;
    __ZdlPv();
  }
  pppppppuVar20 = uStack_688;
  if (puVar16 != (undefined4 *)0x0) {
    __ZdlPv(puVar16);
    pppppppuVar20 = uStack_688;
  }
  *(undefined1 *)(param_4 + 1) = 1;
  uStack_688 = pppppppuVar20;
  uStack_318 = (undefined8 *******)CONCAT44(uStack_318._4_4_,(uint)uStack_318);
  uStack_2e8 = (undefined8 *******)CONCAT44(uStack_2e8._4_4_,(int)uStack_2e8);
  uStack_3b8 = (undefined8 *******)CONCAT44(uStack_3b8._4_4_,(int)uStack_3b8);
  if (param_6[2] != (undefined8 ******)0x0) {
    uVar37 = (ulong)*(uint *)((long)param_6 + 4);
    if ((int)*(uint *)((long)param_6 + 4) < 3) {
      lVar24 = (long)*(int *)((long)param_6 + 0xc) * (long)*(int *)(param_6 + 1);
    }
    else {
      lVar24 = 1;
      ppppppuVar68 = param_6[8];
      do {
        lVar24 = lVar24 * *(int *)ppppppuVar68;
        uVar37 = uVar37 - 1;
        ppppppuVar68 = (undefined8 ******)((long)ppppppuVar68 + 4);
      } while (uVar37 != 0);
    }
    uStack_318 = (undefined8 *******)CONCAT44(uStack_318._4_4_,(uint)uStack_318);
    uStack_2e8 = (undefined8 *******)CONCAT44(uStack_2e8._4_4_,(int)uStack_2e8);
    uStack_3b8 = (undefined8 *******)CONCAT44(uStack_3b8._4_4_,(int)uStack_3b8);
    if (lVar24 != 0) {
      fStack_560 = 127.5;
      uStack_688 = (undefined8 *******)&fStack_560;
      dStack_520 = (double)((ulong)uStack_688 | 8);
      auVar60._0_14_ = ZEXT214(0);
      auVar60._14_2_ = 0;
      fStack_554 = 0.0;
      uStack_550 = 0;
      fStack_55c = 0.0;
      fStack_558 = 0.0;
      uStack_544 = 0;
      fStack_540 = 0.0;
      uStack_54c = 0;
      fStack_548 = 0.0;
      uStack_534 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      uStack_528 = (undefined8 ******)0x0;
      iStack_530 = 0;
      iStack_52c = 0;
      pppppuStack_508 = (undefined8 *****)0x0;
      pppppuStack_510 = (undefined8 *****)0x0;
      pppppuStack_518 = &pppppuStack_510;
      if (((ulong)*param_6 & 0xff8) == 0) {
        if (uStack_688 == param_6) {
          ppppppuStack_590 = (undefined8 ******)0x0;
          auVar64 = ZEXT216(0);
        }
        else {
          if (param_6[7] != (undefined8 ******)0x0) {
            piVar1 = (int *)((long)param_6[7] + 0x14);
            do {
              cVar29 = '\x01';
              bVar45 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar45) {
                *piVar1 = *piVar1 + 1;
                cVar29 = ExclusiveMonitorsStatus();
              }
            } while (cVar29 != '\0');
          }
          uStack_528 = (undefined8 ******)0x0;
          fStack_548 = 0.0;
          uStack_544 = 0;
          uStack_550 = 0;
          uStack_54c = 0;
          uStack_538 = 0;
          uStack_534 = 0;
          fStack_540 = 0.0;
          uStack_53c = 0;
          fStack_560 = *(float *)param_6;
          if (*(int *)((long)param_6 + 4) < 3) {
            fStack_558 = SUB84(param_6[1],0);
            fStack_554 = (float)((ulong)param_6[1] >> 0x20);
            pppppuStack_510 = *param_6[9];
            pppppuStack_508 = param_6[9][1];
            fStack_55c = (float)*(int *)((long)param_6 + 4);
          }
          else {
            uStack_688 = pppppppuVar20;
            func_0x000109a84868(&fStack_560,param_6);
            pppppppuVar20 = uStack_688;
          }
          auVar60 = *(undefined1 (*) [16])(param_6 + 2);
          auVar64 = *(undefined1 (*) [16])(param_6 + 4);
          fStack_548 = auVar60._8_4_;
          uStack_544 = auVar60._12_4_;
          uStack_550 = auVar60._0_4_;
          uStack_54c = auVar60._4_4_;
          uStack_538 = auVar64._8_4_;
          uStack_534 = auVar64._12_4_;
          fStack_540 = auVar64._0_4_;
          uStack_53c = auVar64._4_4_;
          ppppppuStack_590 = param_6[6];
          uStack_528 = param_6[7];
          iStack_530 = (int)ppppppuStack_590;
          iStack_52c = (int)((ulong)ppppppuStack_590 >> 0x20);
        }
      }
      else {
        uStack_2e0 = 0;
        uStack_2dc = 0;
        uStack_2f0._0_4_ = 2.3693558e-38;
        uStack_2e8._0_4_ = (int)param_6;
        uStack_2e8._4_4_ = (int)((ulong)param_6 >> 0x20);
        bStack_690 = 0;
        bStack_68f = 0;
        uStack_68e = 0x201;
        iStack_680 = 0;
        iStack_67c = 0;
        FUN_109ac9fc8(&uStack_2f0,&bStack_690,7,0);
        auVar60._4_4_ = uStack_54c;
        auVar60._0_4_ = uStack_550;
        auVar60._8_4_ = fStack_548;
        auVar60._12_4_ = uStack_544;
        auVar64._4_4_ = uStack_53c;
        auVar64._0_4_ = fStack_540;
        auVar64._8_4_ = uStack_538;
        auVar64._12_4_ = uStack_534;
        ppppppuStack_590 = (undefined8 ******)CONCAT44(iStack_52c,iStack_530);
        pppppppuVar20 = uStack_688;
      }
      ppppppuStack_5b8 = (undefined8 ******)CONCAT44(fStack_554,fStack_558);
      uStack_580 = (ulong)&fStack_5c0 | 8;
      fStack_5c0 = fStack_560;
      iStack_5bc = (int)fStack_55c;
      uStack_5a8 = auVar60._8_8_;
      uStack_5b0 = auVar60._0_8_;
      uStack_598 = auVar64._8_8_;
      uStack_5a0 = auVar64._0_8_;
      ppppuStack_568 = (undefined8 ****)0x0;
      ppppuStack_570 = (undefined8 ****)0x0;
      if (uStack_528 != (undefined8 ******)0x0) {
        piVar1 = (int *)((long)uStack_528 + 0x14);
        do {
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar45) {
            *piVar1 = *piVar1 + 1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
      }
      ppppppuStack_588 = uStack_528;
      ppppuStack_578 = &ppppuStack_570;
      uStack_688 = pppppppuVar20;
      if ((int)fStack_55c < 3) {
        ppppuStack_570 = *pppppuStack_518;
        ppppuStack_568 = pppppuStack_518[1];
      }
      else {
        iStack_5bc = 0;
        func_0x000109a84868(&fStack_5c0,&fStack_560);
      }
      FUN_1092c5e24(&uStack_2f0,param_1 + 0x13);
      dVar46 = dStack_2a0;
      fVar67 = (float)uStack_2f0;
      iVar35 = uStack_2b0._4_4_;
      fVar15 = pdStack_2a8._0_4_;
      iVar41 = dStack_298._0_4_;
      uVar37 = (ulong)dStack_298 & 0xffffffff;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2f0._0_4_ = -2.4060934e-38;
      uStack_2e8 = &pppppppuStack_500;
      FUN_109b42928(&uStack_350,&uStack_2f0);
      auVar59._0_8_ = (long)(int)uStack_350;
      auVar59._8_8_ = (long)(int)fStack_34c;
      auVar60 = NEON_scvtf(auVar59,8);
      auVar49._0_8_ = (long)(int)uStack_348;
      auVar49._8_8_ = (long)uStack_348._4_4_;
      auVar64 = NEON_scvtf(auVar49,8);
      uStack_190 = (undefined8 ******)CONCAT44(iStack_5bc,fStack_5c0);
      dVar66 = (double)(int)ppppppuStack_5b8 / (double)(int)uStack_3b8;
      dVar52 = auVar64._0_8_ * dVar66;
      dVar56 = auVar64._8_8_ * dVar66;
      dVar57 = auVar60._0_8_ * dVar66;
      dVar62 = auVar60._8_8_ * dVar66;
      lVar24 = -(ulong)(dVar57 < 0.0);
      lVar65 = -(ulong)(dVar62 < 0.0);
      auVar61._0_8_ =
           (double)CONCAT17((byte)((ulong)dVar57 >> 0x38) & ~(byte)((ulong)lVar24 >> 0x38),
                            CONCAT16((byte)((ulong)dVar57 >> 0x30) & ~(byte)((ulong)lVar24 >> 0x30),
                                     CONCAT15((byte)((ulong)dVar57 >> 0x28) &
                                              ~(byte)((ulong)lVar24 >> 0x28),
                                              CONCAT14((byte)((ulong)dVar57 >> 0x20) &
                                                       ~(byte)((ulong)lVar24 >> 0x20),
                                                       CONCAT13((byte)((ulong)dVar57 >> 0x18) &
                                                                ~(byte)((ulong)lVar24 >> 0x18),
                                                                CONCAT12((byte)((ulong)dVar57 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)lVar24 >>
                                                                                0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  dVar57 >> 8) & ~(byte)((ulong)lVar24 >> 8),
                                                  SUB81(dVar57,0) & ~(byte)lVar24)))))));
      auVar61[8] = SUB81(dVar62,0) & ~(byte)lVar65;
      auVar61[9] = (byte)((ulong)dVar62 >> 8) & ~(byte)((ulong)lVar65 >> 8);
      auVar61[10] = (byte)((ulong)dVar62 >> 0x10) & ~(byte)((ulong)lVar65 >> 0x10);
      auVar61[0xb] = (byte)((ulong)dVar62 >> 0x18) & ~(byte)((ulong)lVar65 >> 0x18);
      auVar61[0xc] = (byte)((ulong)dVar62 >> 0x20) & ~(byte)((ulong)lVar65 >> 0x20);
      auVar61[0xd] = (byte)((ulong)dVar62 >> 0x28) & ~(byte)((ulong)lVar65 >> 0x28);
      auVar61[0xe] = (byte)((ulong)dVar62 >> 0x30) & ~(byte)((ulong)lVar65 >> 0x30);
      auVar61[0xf] = (byte)((ulong)dVar62 >> 0x38) & ~(byte)((ulong)lVar65 >> 0x38);
      lVar24 = -(ulong)(dVar52 < 0.0);
      lVar65 = -(ulong)(dVar56 < 0.0);
      auVar54._0_8_ =
           (double)CONCAT17((byte)((ulong)dVar52 >> 0x38) & ~(byte)((ulong)lVar24 >> 0x38),
                            CONCAT16((byte)((ulong)dVar52 >> 0x30) & ~(byte)((ulong)lVar24 >> 0x30),
                                     CONCAT15((byte)((ulong)dVar52 >> 0x28) &
                                              ~(byte)((ulong)lVar24 >> 0x28),
                                              CONCAT14((byte)((ulong)dVar52 >> 0x20) &
                                                       ~(byte)((ulong)lVar24 >> 0x20),
                                                       CONCAT13((byte)((ulong)dVar52 >> 0x18) &
                                                                ~(byte)((ulong)lVar24 >> 0x18),
                                                                CONCAT12((byte)((ulong)dVar52 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)lVar24 >>
                                                                                0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  dVar52 >> 8) & ~(byte)((ulong)lVar24 >> 8),
                                                  SUB81(dVar52,0) & ~(byte)lVar24)))))));
      auVar54[8] = SUB81(dVar56,0) & ~(byte)lVar65;
      auVar54[9] = (byte)((ulong)dVar56 >> 8) & ~(byte)((ulong)lVar65 >> 8);
      auVar54[10] = (byte)((ulong)dVar56 >> 0x10) & ~(byte)((ulong)lVar65 >> 0x10);
      auVar54[0xb] = (byte)((ulong)dVar56 >> 0x18) & ~(byte)((ulong)lVar65 >> 0x18);
      auVar54[0xc] = (byte)((ulong)dVar56 >> 0x20) & ~(byte)((ulong)lVar65 >> 0x20);
      auVar54[0xd] = (byte)((ulong)dVar56 >> 0x28) & ~(byte)((ulong)lVar65 >> 0x28);
      auVar54[0xe] = (byte)((ulong)dVar56 >> 0x30) & ~(byte)((ulong)lVar65 >> 0x30);
      auVar54[0xf] = (byte)((ulong)dVar56 >> 0x38) & ~(byte)((ulong)lVar65 >> 0x38);
      uStack_350 = (uint)(long)auVar61._0_8_;
      fStack_34c = (float)(long)auVar61._8_8_;
      uStack_348 = (undefined8 *)CONCAT44((int)(long)auVar54._8_8_,(int)(long)auVar54._0_8_);
      ppppppuStack_188 = ppppppuStack_5b8;
      uStack_178 = uStack_5a8;
      uStack_180 = uStack_5b0;
      uStack_168 = uStack_598;
      uStack_170 = uStack_5a0;
      ppppppuStack_158 = ppppppuStack_588;
      ppppppuStack_160 = ppppppuStack_590;
      ppppppuStack_150 = (undefined8 ******)((ulong)&uStack_190 | 8);
      pppuStack_138 = (undefined8 ***)0x0;
      pppuStack_140 = (undefined8 ***)0x0;
      if (ppppppuStack_588 != (undefined8 ******)0x0) {
        piVar1 = (int *)((long)ppppppuStack_588 + 0x14);
        do {
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar45) {
            *piVar1 = *piVar1 + 1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
      }
      pppuStack_148 = &pppuStack_140;
      if (iStack_5bc < 3) {
        pppuStack_140 = *ppppuStack_578;
        pppuStack_138 = ppppuStack_578[1];
      }
      else {
        uStack_190 = (undefined8 ******)(ulong)(uint)fStack_5c0;
        func_0x000109a84868(&uStack_190,&fStack_5c0);
      }
      uStack_688._0_4_ = (int)uStack_348;
      uStack_688._4_4_ = (float)((ulong)uStack_348 >> 0x20);
      bStack_690 = (byte)uStack_350;
      bStack_68f = (byte)(uStack_350 >> 8);
      uStack_68e = (undefined2)(uStack_350 >> 0x10);
      fStack_68c = fStack_34c;
      FUN_1092e2ecc(&uStack_2f0,&uStack_190,&bStack_690);
      if (dStack_388 != 0.0) {
        piVar1 = (int *)((long)dStack_388 + 0x14);
        do {
          iVar43 = *piVar1;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar45) {
            *piVar1 = iVar43 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar43 + -1 == 0) {
          func_0x000109a848d4(&fStack_3c0);
        }
      }
      if (0 < (int)fStack_3bc) {
        lVar24 = 0;
        do {
          piStack_380[lVar24] = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)fStack_3bc);
      }
      fStack_3c0 = (float)uStack_2f0;
      fStack_3bc = uStack_2f0._4_4_;
      uStack_3a8 = uStack_2d8;
      uStack_3a4 = uStack_2d4;
      uStack_3b0 = uStack_2e0;
      uStack_3ac = uStack_2dc;
      uStack_398 = (undefined4)uStack_2c8;
      uStack_394 = uStack_2c8._4_4_;
      uStack_3a0 = (undefined4)uStack_2d0;
      uStack_39c = uStack_2d0._4_4_;
      dStack_388 = dStack_2b8;
      uStack_390 = uStack_2c0;
      uStack_38c = uStack_2bc;
      piVar1 = piStack_380;
      pdVar17 = pdStack_378;
      uStack_3b8 = uStack_2e8;
      if ((pdStack_378 != &dStack_370) &&
         (piVar1 = piVar36, pdVar17 = &dStack_370, pdStack_378 != (double *)0x0)) {
        _free(pdStack_378[-1]);
      }
      pdStack_378 = pdVar17;
      piStack_380 = piVar1;
      pdVar17 = pdStack_2a8;
      puVar31 = (undefined8 *)((ulong)&uStack_2f0 | 4);
      if ((int)uStack_2f0._4_4_ < 3) {
        *pdStack_378 = *pdStack_2a8;
        pdStack_378[1] = pdVar17[1];
        uStack_2f0._0_4_ = 127.5;
        puVar31[1] = 0;
        *puVar31 = 0;
        puVar31[3] = 0;
        puVar31[2] = 0;
        puVar31[5] = 0;
        puVar31[4] = 0;
        *(undefined8 *)((long)puVar31 + 0x34) = 0;
        *(undefined8 *)((long)puVar31 + 0x2c) = 0;
        if (pdVar17 != &dStack_2a0) {
          _free(pdVar17[-1]);
        }
      }
      else {
        pdStack_378 = pdStack_2a8;
        piStack_380 = uStack_2b0;
        pdStack_2a8 = &dStack_2a0;
        uStack_2f0._0_4_ = 127.5;
        puVar31[1] = 0;
        *puVar31 = 0;
        puVar31[3] = 0;
        puVar31[2] = 0;
        puVar31[5] = 0;
        puVar31[4] = 0;
        *(undefined8 *)((long)puVar31 + 0x34) = 0;
        *(undefined8 *)((long)puVar31 + 0x2c) = 0;
        uStack_2b0 = (int *)((ulong)&uStack_2f0 | 8);
      }
      if (ppppppuStack_158 != (undefined8 ******)0x0) {
        piVar36 = (int *)((long)ppppppuStack_158 + 0x14);
        do {
          iVar43 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar43 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar43 + -1 == 0) {
          func_0x000109a848d4(&uStack_190);
        }
      }
      ppppppuStack_158 = (undefined8 ******)0x0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      if (0 < uStack_190._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)ppppppuStack_150 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_190._4_4_);
      }
      pppppppuVar20 = uStack_3b8;
      if ((undefined8 ****)pppuStack_148 != &pppuStack_140 && pppuStack_148 != (undefined8 ***)0x0)
      {
        _free(pppuStack_148[-1]);
        pppppppuVar20 = uStack_3b8;
      }
      uStack_3b8._4_4_ = (int)((ulong)pppppppuVar20 >> 0x20);
      uStack_3b8._0_4_ = (int)pppppppuVar20;
      dVar56 = (double)iVar35;
      dVar52 = dVar56 / (double)uStack_3b8._4_4_;
      fStack_10c = (float)(int)(dVar52 * (double)(int)uStack_3b8);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2f0._0_4_ = 2.3693558e-38;
      bStack_690 = 0;
      bStack_68f = 0;
      uStack_68e = 0x201;
      iStack_680 = 0;
      iStack_67c = 0;
      fStack_110 = (float)iVar35;
      uStack_2e8 = (undefined8 *******)&fStack_3c0;
      uStack_688 = (undefined8 *******)&fStack_3c0;
      uStack_3b8 = pppppppuVar20;
      FUN_109b0f718(0,0,&uStack_2f0,&bStack_690,&fStack_110,1);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2f0._0_4_ = 2.3693558e-38;
      bStack_690 = 0;
      bStack_68f = 0;
      uStack_68e = 0x201;
      iStack_680 = 0;
      iStack_67c = 0;
      fStack_110 = fVar15;
      fStack_10c = fVar15;
      pppppppuStack_308 = (uint *******)0xffffffffffffffff;
      uStack_2e8 = (undefined8 *******)&fStack_3c0;
      uStack_688 = (undefined8 *******)&fStack_3c0;
      FUN_109b437c0(&uStack_2f0,&bStack_690,0xffffffff,&fStack_110,&pppppppuStack_308,1,4);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2f0._0_4_ = 2.3693558e-38;
      uStack_2e8 = (undefined8 *******)&fStack_3c0;
      bStack_690 = 0;
      bStack_68f = 0;
      uStack_68e = 0x201;
      iStack_680 = 0;
      iStack_67c = 0;
      uStack_688 = uStack_2e8;
      FUN_109b5a14c(0x406fe00000000000,(double)(int)fVar67,&uStack_2f0,&bStack_690,1,0,*puStack_290)
      ;
      if ((long)pppppppuStack_4f8 - (long)pppppppuStack_500 != 0) {
        lVar24 = (long)pppppppuStack_4f8 - (long)pppppppuStack_500 >> 3;
        piVar36 = (int *)((long)pppppppuStack_500 + 4);
        do {
          piVar36[-1] = (int)(long)(double)(long)(dVar52 * (double)(int)((int)(long)(double)(long)(
                                                  dVar66 * (double)piVar36[-1]) - uStack_350));
          *piVar36 = (int)(long)(double)(long)(dVar52 * (double)((int)(long)(double)(long)(dVar66 * 
                                                  (double)*piVar36) - (int)fStack_34c));
          piVar36 = piVar36 + 2;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      if ((long)pppppuStack_4e0 - (long)pppppuStack_4e8 != 0) {
        lVar24 = (long)pppppuStack_4e0 - (long)pppppuStack_4e8 >> 3;
        piVar36 = (int *)((long)pppppuStack_4e8 + 4);
        do {
          piVar36[-1] = (int)(long)(double)(long)(dVar52 * (double)(int)((int)(long)(double)(long)(
                                                  dVar66 * (double)piVar36[-1]) - uStack_350));
          *piVar36 = (int)(long)(double)(long)(dVar52 * (double)((int)(long)(double)(long)(dVar66 * 
                                                  (double)*piVar36) - (int)fStack_34c));
          piVar36 = piVar36 + 2;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      uStack_4c8 = CONCAT44((int)(long)(double)(long)(dVar52 * (double)((int)(long)(double)(long)(
                                                  dVar66 * (double)uStack_4c8._4_4_) -
                                                  (int)fStack_34c)),
                            (int)(long)(double)(long)(dVar52 * (double)(int)((int)(long)(double)(
                                                  long)(dVar66 * (double)(int)uStack_4c8) -
                                                  uStack_350)));
      ppppppuStack_330 = (undefined8 ******)0x0;
      ppppppuStack_338 = (undefined8 ******)0x0;
      uStack_328 = 0;
      if (iVar41 < 1) {
        lVar24 = 0;
        puVar31 = (undefined8 *)0x0;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        uStack_108._0_4_ = 0;
        uStack_108._4_4_ = 0;
        uStack_100 = 0;
        uStack_fc = 0;
      }
      else {
        iVar35 = (int)(dVar46 * dVar56);
        uVar38 = 0;
        do {
          uVar25 = uVar38 + 1;
          ppppppuStack_120 = (undefined8 ******)0x0;
          ppppppuStack_128 = (undefined8 ******)0x0;
          pppppppuStack_300 = (uint *******)0x0;
          pppppppuStack_308 = (uint *******)0x0;
          pppppppuStack_2f8 = (uint *******)0x0;
          pppppppuVar20 = pppppppuStack_500 + uVar38;
          lVar24 = 0;
          if (uVar25 != uVar37) {
            lVar24 = uVar38 + 1;
          }
          pppppppuVar33 = pppppppuStack_500 + lVar24;
          iVar41 = *(int *)pppppppuVar20;
          iVar43 = *(int *)((long)pppppppuVar20 + 4);
          iVar69 = iVar41 - *(int *)pppppppuVar33;
          iVar10 = iVar43 - *(int *)((long)pppppppuVar33 + 4);
          dVar56 = SQRT((double)(uint)(iVar69 * iVar69 + iVar10 * iVar10));
          iVar10 = *(int *)((long)pppppppuVar33 + 4) - iVar43;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_320 = 0x8103000c;
          uStack_318 = &pppppppuStack_500;
          uStack_728 = (undefined8 *****)
                       CONCAT44((float)(int)((double)(iVar10 / 0x32 + iVar43) -
                                            (double)(iVar69 * 10) / dVar56),
                                (float)(int)((double)((*(int *)pppppppuVar33 - iVar41) / 0x32 +
                                                     iVar41) - (double)(iVar10 * 10) / dVar56));
          dVar46 = (double)FUN_109b0e274(&uStack_320,&uStack_728,0);
          iVar41 = 0;
          do {
            if (0 < iVar35) {
              iVar43 = 0;
              do {
                ppppppuVar70 = *pppppppuVar33;
                ppppppuVar68 = *pppppppuVar20;
                uStack_2f0._0_4_ = fStack_3c0;
                uStack_2f0._4_4_ = fStack_3bc;
                uStack_2d8 = uStack_3a8;
                uStack_2d4 = uStack_3a4;
                uStack_2e0 = uStack_3b0;
                uStack_2dc = uStack_3ac;
                dStack_2b8 = dStack_388;
                dStack_2a0 = 0.0;
                dStack_298 = 0.0;
                if (dStack_388 != 0.0) {
                  piVar36 = (int *)((long)dStack_388 + 0x14);
                  do {
                    cVar29 = '\x01';
                    bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar45) {
                      *piVar36 = *piVar36 + 1;
                      cVar29 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar29 != '\0');
                }
                uStack_2b0 = (int *)((ulong)&uStack_2f0 | 8);
                pdStack_2a8 = &dStack_2a0;
                if ((int)fStack_3bc < 3) {
                  dStack_2a0 = *pdStack_378;
                  dStack_298 = pdStack_378[1];
                  pppppppuVar13 = uStack_3b8;
                }
                else {
                  uStack_2f0._4_4_ = 0.0;
                  uStack_2e8 = uStack_3b8;
                  func_0x000109a84868(&uStack_2f0,&fStack_3c0);
                  pppppppuVar13 = uStack_2e8;
                }
                uStack_2e8._4_4_ = (int)((ulong)pppppppuVar13 >> 0x20);
                uStack_2e8._0_4_ = (int)pppppppuVar13;
                iVar69 = (int)((ulong)ppppppuVar68 >> 0x20);
                uVar53 = NEON_ext(ppppppuVar70,ppppppuVar68,4,1);
                uVar58 = NEON_ext(ppppppuVar68,ppppppuVar70,4,1);
                auVar50._0_8_ =
                     (long)((((int)ppppppuVar70 - (int)ppppppuVar68) * iVar41) / 0x32 +
                           (int)ppppppuVar68);
                auVar50._8_8_ =
                     (long)((((int)((ulong)ppppppuVar70 >> 0x20) - iVar69) * iVar41) / 0x32 + iVar69
                           );
                auVar60 = NEON_scvtf(auVar50,8);
                auVar55._0_8_ = (long)(((int)uVar53 - (int)uVar58) * iVar43 * (int)dVar46);
                auVar55._8_8_ =
                     (long)(((int)((ulong)uVar53 >> 0x20) - (int)((ulong)uVar58 >> 0x20)) *
                           iVar43 * (int)dVar46);
                auVar64 = NEON_scvtf(auVar55,8);
                uVar30 = (uint)(long)(auVar60._0_8_ - auVar64._0_8_ / dVar56);
                uVar51 = (uint)(long)(auVar60._8_8_ - auVar64._8_8_ / dVar56);
                uVar44 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
                if ((int)((int)uStack_2e8 - 1U) <= (int)uVar44) {
                  uVar44 = (int)uStack_2e8 - 1U;
                }
                uVar40 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
                if ((int)(uStack_2e8._4_4_ - 1U) <= (int)uVar40) {
                  uVar40 = uStack_2e8._4_4_ - 1U;
                }
                cVar29 = *(char *)(CONCAT44(uStack_2dc,uStack_2e0) +
                                   (long)*pdStack_2a8 * (long)(int)uVar44 + (long)(int)uVar40);
                uStack_2e8 = pppppppuVar13;
                if (dStack_2b8 != 0.0) {
                  piVar36 = (int *)((long)dStack_2b8 + 0x14);
                  do {
                    iVar69 = *piVar36;
                    cVar8 = '\x01';
                    bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                    if (bVar45) {
                      *piVar36 = iVar69 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar69 + -1 == 0) {
                    func_0x000109a848d4(&uStack_2f0);
                  }
                }
                dStack_2b8 = 0.0;
                uStack_2d8 = 0;
                uStack_2d4 = 0;
                uStack_2e0 = 0;
                uStack_2dc = 0;
                uStack_2c8._0_4_ = 0;
                uStack_2c8._4_4_ = 0;
                uStack_2d0._0_4_ = 0;
                uStack_2d0._4_4_ = 0;
                if (0 < (int)uStack_2f0._4_4_) {
                  lVar24 = 0;
                  do {
                    uStack_2b0[lVar24] = 0;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 < (int)uStack_2f0._4_4_);
                }
                if (pdStack_2a8 != &dStack_2a0 && pdStack_2a8 != (double *)0x0) {
                  _free(pdStack_2a8[-1]);
                }
                if (cVar29 == '\0') {
                  uStack_320 = uVar30;
                  uStack_31c = uVar51;
                  if (pppppppuStack_300 < pppppppuStack_2f8) {
                    *pppppppuStack_300 = (uint ******)CONCAT44(uVar51,uVar30);
                    pppppppuStack_300 = pppppppuStack_300 + 1;
                  }
                  else {
                    pppppppuVar21 = (uint *******)&pppppppuStack_308;
                    FUN_1092e7794(pppppppuVar21,&uStack_320);
                    pppppppuStack_300 = pppppppuVar21;
                  }
                }
                iVar43 = iVar43 + 2;
              } while (iVar43 < iVar35);
            }
            iVar41 = iVar41 + 1;
          } while (iVar41 != 0x32);
          if ((ulong)((long)pppppppuStack_300 - (long)pppppppuStack_308) < 9) {
            ppppppuStack_710 = *pppppppuVar20;
            ppppppuStack_708 = *pppppppuVar33;
          }
          else {
            pppppppuStack_830 = (uint *******)0x0;
            pppppppuStack_7a0 = (uint *******)0x0;
            pppppppuStack_818 = (uint *******)0x0;
            iVar41 = 0;
            pppppppuVar21 = pppppppuStack_308;
            do {
              _rand();
              uVar32 = (long)pppppppuStack_300 - (long)pppppppuStack_308 >> 3;
              uVar38 = 0;
              if (uVar32 != 0) {
                uVar38 = (ulong)(long)(int)pppppppuVar21 / uVar32;
              }
              pppppppuVar27 = pppppppuStack_308 + ((long)(int)pppppppuVar21 - uVar38 * uVar32);
              ppppppuVar47 = *pppppppuVar27;
              iVar43 = *(int *)pppppppuVar27;
              iVar69 = *(int *)((long)pppppppuVar27 + 4);
              _rand();
              uVar32 = (long)pppppppuStack_300 - (long)pppppppuStack_308 >> 3;
              uVar38 = 0;
              if (uVar32 != 0) {
                uVar38 = (ulong)(long)(int)pppppppuVar21 / uVar32;
              }
              pppppppuVar27 = pppppppuStack_308 + ((long)(int)pppppppuVar21 - uVar38 * uVar32);
              iVar10 = *(int *)pppppppuVar27;
              iVar4 = *(int *)((long)pppppppuVar27 + 4);
              if (dVar56 * dVar56 * 0.2 * 0.2 <=
                  (double)(uint)((iVar43 - iVar10) * (iVar43 - iVar10) +
                                (iVar69 - iVar4) * (iVar69 - iVar4))) {
                ppppppuVar48 = *pppppppuVar27;
                uVar40 = *(uint *)pppppppuVar33;
                uVar44 = *(uint *)((long)pppppppuVar33 + 4);
                uVar51 = *(uint *)pppppppuVar20;
                uVar5 = *(uint *)((long)pppppppuVar20 + 4);
                uVar11 = uVar40 - uVar51;
                uVar30 = -uVar11;
                if (-1 < (int)uVar11) {
                  uVar30 = uVar11;
                }
                uVar12 = uVar44 - uVar5;
                uVar11 = -uVar12;
                if (-1 < (int)uVar12) {
                  uVar11 = uVar12;
                }
                if (uVar11 < uVar30) {
                  if (iVar10 - iVar43 != 0) {
                    uVar44 = uVar51;
                    if ((int)uVar40 <= (int)uVar51) {
                      uVar44 = uVar40;
                    }
                    if ((int)uVar51 <= (int)uVar40) {
                      uVar51 = uVar40;
                    }
                    uVar40 = 0;
                    if ((int)uVar44 < (int)uVar51) {
                      do {
                        uVar30 = (uint)(((double)(iVar4 - iVar69) * (double)(int)(uVar44 - iVar10))
                                        / (double)(iVar10 - iVar43) + (double)iVar4);
                        uVar30 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
                        uVar51 = (int)uStack_3b8 - 1U;
                        if ((int)uVar30 <= (int)((int)uStack_3b8 - 1U)) {
                          uVar51 = uVar30;
                        }
                        bStack_690 = SUB41(fStack_3c0,0);
                        bStack_68f = (byte)((uint)fStack_3c0 >> 8);
                        uStack_68e = (undefined2)((uint)fStack_3c0 >> 0x10);
                        fStack_68c = fStack_3bc;
                        uStack_678 = uStack_3a8;
                        uStack_674 = uStack_3a4;
                        iStack_680 = uStack_3b0;
                        iStack_67c = uStack_3ac;
                        uStack_658 = SUB84(dStack_388,0);
                        uStack_654 = (undefined4)((ulong)dStack_388 >> 0x20);
                        if (dStack_388 != 0.0) {
                          piVar36 = (int *)((long)dStack_388 + 0x14);
                          do {
                            cVar29 = '\x01';
                            bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                            if (bVar45) {
                              *piVar36 = *piVar36 + 1;
                              cVar29 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar29 != '\0');
                        }
                        piStack_650 = (int *)((ulong)&bStack_690 | 8);
                        pplStack_648 = &plStack_640;
                        pppppppuVar13 = uStack_3b8;
                        if (2 < (int)fStack_3bc) {
                          fStack_68c = 0.0;
                          pppppppuVar21 = (uint *******)&bStack_690;
                          uStack_688 = uStack_3b8;
                          func_0x000109a84868(pppppppuVar21,&fStack_3c0);
                          pppppppuVar13 = uStack_688;
                        }
                        uStack_688._4_4_ = (float)((ulong)pppppppuVar13 >> 0x20);
                        uStack_688._0_4_ = (int)pppppppuVar13;
                        uVar51 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
                        if ((int)((int)uStack_688 - 1U) <= (int)uVar51) {
                          uVar51 = (int)uStack_688 - 1U;
                        }
                        uVar30 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
                        if ((int)((int)uStack_688._4_4_ - 1U) <= (int)uVar30) {
                          uVar30 = (int)uStack_688._4_4_ - 1U;
                        }
                        if (*(char *)(CONCAT44(iStack_67c,iStack_680) +
                                      (long)*pplStack_648 * (long)(int)uVar51 + (long)(int)uVar30)
                            == '\0') {
                          uVar40 = uVar40 + 1;
                        }
                        uStack_688 = pppppppuVar13;
                        if (CONCAT44(uStack_654,uStack_658) != 0) {
                          piVar36 = (int *)(CONCAT44(uStack_654,uStack_658) + 0x14);
                          do {
                            iVar3 = *piVar36;
                            cVar29 = '\x01';
                            bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                            if (bVar45) {
                              *piVar36 = iVar3 + -1;
                              cVar29 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar29 != '\0');
                          if (iVar3 + -1 == 0) {
                            pppppppuVar21 = (uint *******)&bStack_690;
                            func_0x000109a848d4();
                          }
                        }
                        uStack_658 = 0;
                        uStack_654 = 0;
                        uStack_678 = 0;
                        uStack_674 = 0;
                        iStack_680 = 0;
                        iStack_67c = 0;
                        uStack_668 = 0;
                        uStack_664 = 0;
                        uStack_670 = 0;
                        uStack_66c = 0;
                        if (0 < (int)fStack_68c) {
                          lVar24 = 0;
                          do {
                            *(undefined4 *)((long)piStack_650 + lVar24 * 4) = 0;
                            lVar24 = lVar24 + 1;
                          } while (lVar24 < (int)fStack_68c);
                        }
                        if (pplStack_648 != &plStack_640 && pplStack_648 != (long **)0x0) {
                          pppppppuVar21 = (uint *******)pplStack_648[-1];
                          _free();
                        }
                        uVar44 = uVar44 + 1;
                        iVar3 = *(int *)pppppppuVar20;
                        if (*(int *)pppppppuVar20 <= *(int *)pppppppuVar33) {
                          iVar3 = *(int *)pppppppuVar33;
                        }
                      } while ((int)uVar44 < iVar3);
                      goto LAB_1092e5304;
                    }
                  }
LAB_1092e5300:
                  uVar40 = 0;
                }
                else {
                  if (iVar4 - iVar69 == 0) goto LAB_1092e5300;
                  uVar30 = uVar5;
                  if ((int)uVar5 <= (int)uVar44) {
                    uVar30 = uVar44;
                    uVar44 = uVar5;
                  }
                  uVar40 = 0;
                  if ((int)uVar44 < (int)uVar30) {
                    pppppppuVar13 = uStack_3b8;
                    do {
                      uStack_3b8._4_4_ = (int)((ulong)pppppppuVar13 >> 0x20);
                      uVar30 = (uint)(((double)(iVar10 - iVar43) * (double)(int)(uVar44 - iVar4)) /
                                      (double)(iVar4 - iVar69) + (double)iVar10);
                      uVar30 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
                      uVar51 = uStack_3b8._4_4_ - 1U;
                      if ((int)uVar30 <= (int)(uStack_3b8._4_4_ - 1U)) {
                        uVar51 = uVar30;
                      }
                      fStack_110 = fStack_3c0;
                      fStack_10c = fStack_3bc;
                      uStack_f8 = uStack_3a8;
                      uStack_f4 = uStack_3a4;
                      uStack_100 = uStack_3b0;
                      uStack_fc = uStack_3ac;
                      dStack_d8 = dStack_388;
                      if (dStack_388 != 0.0) {
                        piVar36 = (int *)((long)dStack_388 + 0x14);
                        do {
                          cVar29 = '\x01';
                          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                          if (bVar45) {
                            *piVar36 = *piVar36 + 1;
                            cVar29 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar29 != '\0');
                      }
                      puStack_d0 = (undefined8 *)((ulong)&fStack_110 | 8);
                      plStack_c8 = alStack_c0;
                      pppppppuVar14 = pppppppuVar13;
                      if (2 < (int)fStack_3bc) {
                        fStack_10c = 0.0;
                        pppppppuVar21 = (uint *******)&fStack_110;
                        uStack_3b8 = pppppppuVar13;
                        uStack_108 = pppppppuVar13;
                        func_0x000109a84868(pppppppuVar21,&fStack_3c0);
                        pppppppuVar13 = uStack_3b8;
                        pppppppuVar14 = uStack_108;
                      }
                      uStack_108._4_4_ = (int)((ulong)pppppppuVar14 >> 0x20);
                      uStack_108._0_4_ = (int)pppppppuVar14;
                      uVar30 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
                      if ((int)((int)uStack_108 - 1U) <= (int)uVar30) {
                        uVar30 = (int)uStack_108 - 1U;
                      }
                      uVar51 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
                      if ((int)(uStack_108._4_4_ - 1U) <= (int)uVar51) {
                        uVar51 = uStack_108._4_4_ - 1U;
                      }
                      if (*(char *)(CONCAT44(uStack_fc,uStack_100) + *plStack_c8 * (long)(int)uVar30
                                   + (long)(int)uVar51) == '\0') {
                        uVar40 = uVar40 + 1;
                      }
                      uStack_3b8 = pppppppuVar13;
                      uStack_108 = pppppppuVar14;
                      if (dStack_d8 != 0.0) {
                        piVar36 = (int *)((long)dStack_d8 + 0x14);
                        do {
                          iVar3 = *piVar36;
                          cVar29 = '\x01';
                          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                          if (bVar45) {
                            *piVar36 = iVar3 + -1;
                            cVar29 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar29 != '\0');
                        if (iVar3 + -1 == 0) {
                          pppppppuVar21 = (uint *******)&fStack_110;
                          func_0x000109a848d4();
                        }
                      }
                      dStack_d8 = 0.0;
                      uStack_f8 = 0;
                      uStack_f4 = 0;
                      uStack_100 = 0;
                      uStack_fc = 0;
                      uStack_e8._0_4_ = 0;
                      uStack_e8._4_4_ = 0;
                      uStack_f0._0_4_ = 0;
                      uStack_f0._4_4_ = 0;
                      if (0 < (int)fStack_10c) {
                        lVar24 = 0;
                        do {
                          *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
                          lVar24 = lVar24 + 1;
                        } while (lVar24 < (int)fStack_10c);
                      }
                      if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
                        pppppppuVar21 = (uint *******)plStack_c8[-1];
                        _free();
                      }
                      uVar44 = uVar44 + 1;
                      iVar3 = *(int *)((long)pppppppuVar20 + 4);
                      if (*(int *)((long)pppppppuVar20 + 4) <= *(int *)((long)pppppppuVar33 + 4)) {
                        iVar3 = *(int *)((long)pppppppuVar33 + 4);
                      }
                      pppppppuVar13 = uStack_3b8;
                    } while ((int)uVar44 < iVar3);
                  }
                }
LAB_1092e5304:
                uStack_318._4_4_ = (uint)ppppppuVar48;
                uStack_310 = (undefined4)((ulong)ppppppuVar48 >> 0x20);
                uStack_31c = (uint)ppppppuVar47;
                uStack_318._0_4_ = (uint)((ulong)ppppppuVar47 >> 0x20);
                uStack_320 = uVar40;
                if (pppppppuStack_7a0 < pppppppuStack_830) {
                  lVar24 = 0;
                  *(uint *)pppppppuStack_7a0 = uVar40;
                  do {
                    *(undefined4 *)((long)pppppppuStack_7a0 + lVar24 + 4) =
                         *(undefined4 *)((long)&uStack_31c + lVar24);
                    lVar24 = lVar24 + 4;
                  } while (lVar24 != 0x10);
                  pppppppuStack_7a0 = (uint *******)((long)pppppppuStack_7a0 + 0x14);
                }
                else {
                  lVar24 = (long)pppppppuStack_7a0 - (long)pppppppuStack_818;
                  uVar38 = (lVar24 >> 2) * -0x3333333333333333 + 1;
                  if (0xccccccccccccccc < uVar38) {
                    FUN_1092e789c();
LAB_1092e7208:
                    /* WARNING: Does not return */
                    pcVar18 = (code *)SoftwareBreakpoint(1,0x1092e720c);
                    (*pcVar18)();
                  }
                  lVar65 = (long)pppppppuStack_830 - (long)pppppppuStack_818 >> 2;
                  uVar32 = lVar65 * -0x6666666666666666;
                  if (uVar32 < uVar38 || uVar32 - uVar38 == 0) {
                    uVar32 = uVar38;
                  }
                  if (0x666666666666665 < (ulong)(lVar65 * -0x3333333333333333)) {
                    uVar32 = 0xccccccccccccccc;
                  }
                  if (uVar32 == 0) {
                    lVar65 = 0;
                  }
                  else {
                    if (0xccccccccccccccc < uVar32) {
                      func_0x000104c4f740();
                      goto LAB_1092e7208;
                    }
                    lVar65 = uVar32 * 0x14;
                    __Znwm();
                  }
                  puVar2 = (uint *)(lVar65 + lVar24);
                  *puVar2 = uVar40;
                  *(ulong *)(puVar2 + 3) = CONCAT44(uStack_310,uStack_318._4_4_);
                  *(ulong *)(puVar2 + 1) = CONCAT44((uint)uStack_318,uStack_31c);
                  lVar24 = SUB168(SEXT816(lVar24) * SEXT816(-0x6666666666666667),8);
                  pppppppuVar27 = (uint *******)(puVar2 + ((lVar24 >> 3) - (lVar24 >> 0x3f)) * 5);
                  for (pppppppuVar21 = pppppppuStack_818; pppppppuVar21 != pppppppuStack_7a0;
                      pppppppuVar21 = (uint *******)((long)pppppppuVar21 + 0x14)) {
                    lVar34 = 0;
                    *(int *)pppppppuVar27 = *(int *)pppppppuVar21;
                    do {
                      *(undefined4 *)((long)pppppppuVar27 + lVar34 + 4) =
                           *(undefined4 *)((long)pppppppuVar21 + lVar34 + 4);
                      lVar34 = lVar34 + 4;
                    } while (lVar34 != 0x10);
                    pppppppuVar27 = (uint *******)((long)pppppppuVar27 + 0x14);
                  }
                  pppppppuStack_830 = (uint *******)(lVar65 + uVar32 * 0x14);
                  pppppppuStack_7a0 = (uint *******)(puVar2 + 5);
                  if (pppppppuStack_818 != (uint *******)0x0) {
                    __ZdlPv();
                  }
                  pppppppuVar21 = pppppppuStack_818;
                  pppppppuStack_818 =
                       (uint *******)(puVar2 + ((lVar24 >> 3) - (lVar24 >> 0x3f)) * 5);
                }
              }
              iVar41 = iVar41 + 1;
            } while (iVar41 != 300);
            if ((long)pppppppuStack_7a0 - (long)pppppppuStack_818 == 0) {
              ppppppuStack_708 = ppppppuStack_120;
              ppppppuStack_710 = ppppppuStack_128;
              if (pppppppuStack_7a0 == (uint *******)0x0) goto joined_r0x0001092e5690;
            }
            else {
              FUN_1092e78b0(pppppppuStack_818,pppppppuStack_7a0,
                            LZCOUNT(((long)pppppppuStack_7a0 - (long)pppppppuStack_818 >> 2) *
                                    -0x3333333333333333) * -2 + 0x7e,1);
              ppppppuStack_710 = *(undefined8 *******)((long)pppppppuStack_818 + 4);
              ppppppuStack_708 = *(undefined8 *******)((long)pppppppuStack_818 + 0xc);
            }
            __ZdlPv(pppppppuStack_818);
          }
joined_r0x0001092e5690:
          if (pppppppuStack_308 != (uint *******)0x0) {
            pppppppuStack_300 = pppppppuStack_308;
            __ZdlPv();
          }
          FUN_1092e3d30(&ppppppuStack_338,&ppppppuStack_710);
          uVar38 = uVar25;
        } while (uVar25 != uVar37);
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        uStack_108._0_4_ = 0;
        uStack_108._4_4_ = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        lVar24 = (long)ppppppuStack_330 - (long)ppppppuStack_338;
        if (lVar24 == 0) {
          lVar24 = 0;
          puVar31 = (undefined8 *)0x0;
        }
        else {
          lVar65 = 0;
          uVar37 = 0;
          puVar42 = (undefined8 *)0x0;
          do {
            uVar25 = lVar24 >> 4;
            uVar37 = uVar37 + 1;
            uVar38 = 0;
            if (uVar25 != 0) {
              uVar38 = uVar37 / uVar25;
            }
            func_0x0001092e2f04(&uStack_2f0,(long)ppppppuStack_338 + lVar65,
                                ppppppuStack_338 + (uVar37 - uVar38 * uVar25) * 2);
            fVar15 = uStack_2f0._4_4_;
            fVar67 = (float)uStack_2f0;
            lVar24 = (long)(float)(int)(float)uStack_2f0;
            bStack_690 = (byte)lVar24;
            bStack_68f = (byte)((ulong)lVar24 >> 8);
            uStack_68e = (undefined2)((ulong)lVar24 >> 0x10);
            fStack_68c = (float)(long)(float)(int)uStack_2f0._4_4_;
            if (puVar42 < (undefined8 *)CONCAT44(uStack_fc,uStack_100)) {
              puVar31 = puVar42 + 1;
              *(int *)puVar42 = (int)lVar24;
              *(float *)((long)puVar42 + 4) = fStack_68c;
            }
            else {
              puVar31 = (undefined8 *)&fStack_110;
              FUN_1092e7794(puVar31,&bStack_690);
            }
            uStack_108._0_4_ = (int)puVar31;
            uStack_108._4_4_ = (int)((ulong)puVar31 >> 0x20);
            if ((fVar67 == -1.0) && (fVar15 == -1.0)) goto LAB_1092e5878;
            lVar24 = (long)ppppppuStack_330 - (long)ppppppuStack_338;
            lVar65 = lVar65 + 0x10;
            puVar42 = puVar31;
          } while (uVar37 < (ulong)(lVar24 >> 4));
          lVar24 = CONCAT44(fStack_10c,fStack_110);
        }
      }
      FUN_1092c6040(&pppppppuStack_500,lVar24,puVar31,(long)puVar31 - lVar24 >> 3);
      iStack_680 = 0;
      iStack_67c = 0;
      bStack_690 = 0xc;
      bStack_68f = 0;
      uStack_68e = 0x8103;
      uStack_688 = (undefined8 *******)&fStack_110;
      FUN_109b2f34c(&uStack_2f0,&bStack_690,0);
      uStack_4c8 = CONCAT44((int)(long)((double)CONCAT44(uStack_2dc,uStack_2e0) /
                                       (double)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0)),
                            (int)(long)((double)uStack_2e8 /
                                       (double)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0)));
      auVar60 = NEON_fmov(0x3ff0000000000000,8);
      param_1[0xe] = (long)(auVar60._8_8_ / dVar66);
      param_1[0xd] = (long)(auVar60._0_8_ / dVar52);
      lVar24 = NEON_scvtf(CONCAT44(fStack_34c,uStack_350),4);
      param_1[0xf] = lVar24;
LAB_1092e5878:
      if (CONCAT44(fStack_10c,fStack_110) != 0) {
        uStack_108._0_4_ = (int)fStack_110;
        uStack_108._4_4_ = (int)fStack_10c;
        __ZdlPv();
      }
      if (ppppppuStack_338 != (undefined8 ******)0x0) {
        ppppppuStack_330 = ppppppuStack_338;
        __ZdlPv();
      }
      __ZdlPv(puStack_290);
      if (ppppppuStack_588 != (undefined8 ******)0x0) {
        piVar36 = (int *)((long)ppppppuStack_588 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&fStack_5c0);
        }
      }
      ppppppuStack_588 = (undefined8 ******)0x0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      if (0 < iStack_5bc) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_580 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < iStack_5bc);
      }
      if ((undefined8 *****)ppppuStack_578 != &ppppuStack_570 &&
          ppppuStack_578 != (undefined8 ****)0x0) {
        _free(ppppuStack_578[-1]);
      }
      if (uStack_528 != (undefined8 ******)0x0) {
        piVar36 = (int *)((long)uStack_528 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&fStack_560);
        }
      }
      uStack_528 = (undefined8 ******)0x0;
      fStack_548 = 0.0;
      uStack_544 = 0;
      uStack_550 = 0;
      uStack_54c = 0;
      uStack_538 = 0;
      uStack_534 = 0;
      fStack_540 = 0.0;
      uStack_53c = 0;
      if (0 < (int)fStack_55c) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)dStack_520 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)fStack_55c);
      }
      if ((undefined8 ******)pppppuStack_518 != &pppppuStack_510 &&
          pppppuStack_518 != (undefined8 *****)0x0) {
        _free(pppppuStack_518[-1]);
      }
    }
  }
  uStack_538 = 0;
  uStack_534 = 0;
  fStack_540 = 0.0;
  uStack_53c = 0;
  uStack_528 = (undefined8 ******)0x0;
  iStack_530 = 0;
  iStack_52c = 0;
  fStack_558 = 0.0;
  fStack_554 = 0.0;
  fStack_560 = 0.0;
  fStack_55c = 0.0;
  fStack_548 = 0.0;
  uStack_544 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  plVar22 = param_5;
  (**(code **)(*param_5 + 0x28))();
  fStack_558 = fStack_560;
  fStack_554 = fStack_55c;
  if (pppppppuStack_4f8 != pppppppuStack_500) {
    uVar37 = 0;
    puVar31 = (undefined8 *)CONCAT44(fStack_55c,fStack_560);
    pppppppuVar20 = pppppppuStack_4f8;
    pppppppuVar33 = pppppppuStack_500;
    do {
      uVar53 = NEON_scvtf(pppppppuVar33[uVar37],4);
      uStack_2f0._0_4_ = (float)uVar53;
      uStack_2f0._4_4_ = (float)((ulong)uVar53 >> 0x20);
      if (puVar31 < (undefined8 *)CONCAT44(uStack_54c,uStack_550)) {
        puVar42 = puVar31 + 1;
        *puVar31 = uVar53;
      }
      else {
        puVar42 = (undefined8 *)&fStack_560;
        FUN_1092de294(puVar42,&uStack_2f0);
        pppppppuVar20 = pppppppuStack_4f8;
        pppppppuVar33 = pppppppuStack_500;
      }
      fStack_558 = SUB84(puVar42,0);
      fStack_554 = (float)((ulong)puVar42 >> 0x20);
      uVar37 = uVar37 + 1;
      puVar31 = puVar42;
    } while (uVar37 < (ulong)((long)pppppppuVar20 - (long)pppppppuVar33 >> 3));
  }
  uStack_2f0._0_4_ = 0.0;
  uStack_2f0._4_4_ = 0.0;
  pfVar39 = (float *)CONCAT44(uStack_53c,fStack_540);
  pfVar26 = (float *)CONCAT44(uStack_534,uStack_538);
  if (pfVar39 < pfVar26) {
    pfVar39[0] = 0.0;
    pfVar39[1] = 0.0;
    pfVar39 = pfVar39 + 2;
  }
  else {
    pfVar39 = &fStack_548;
    FUN_1092de294(&fStack_548,&uStack_2f0);
    pfVar26 = (float *)CONCAT44(uStack_534,uStack_538);
  }
  fStack_540 = SUB84(pfVar39,0);
  uStack_53c = (undefined4)((ulong)pfVar39 >> 0x20);
  fVar67 = (float)(int)plVar22;
  uStack_2f0._4_4_ = 0.0;
  if (pfVar39 < pfVar26) {
    *pfVar39 = fVar67;
    pfVar39[1] = 0.0;
    pfVar39 = pfVar39 + 2;
  }
  else {
    pfVar39 = &fStack_548;
    uStack_2f0._0_4_ = fVar67;
    FUN_1092de294(&fStack_548,&uStack_2f0);
    pfVar26 = (float *)CONCAT44(uStack_534,uStack_538);
  }
  fStack_540 = SUB84(pfVar39,0);
  uStack_53c = (undefined4)((ulong)pfVar39 >> 0x20);
  uStack_2f0._0_4_ = 0.0;
  if (pfVar39 < pfVar26) {
    *pfVar39 = 0.0;
    pfVar39[1] = fVar67;
    pfVar39 = pfVar39 + 2;
  }
  else {
    pfVar39 = &fStack_548;
    uStack_2f0._4_4_ = fVar67;
    FUN_1092de294(&fStack_548,&uStack_2f0);
    pfVar26 = (float *)CONCAT44(uStack_534,uStack_538);
  }
  fStack_540 = SUB84(pfVar39,0);
  uStack_53c = (undefined4)((ulong)pfVar39 >> 0x20);
  if (pfVar39 < pfVar26) {
    pfVar26 = pfVar39 + 2;
    *pfVar39 = fVar67;
    pfVar39[1] = fVar67;
  }
  else {
    pfVar26 = &fStack_548;
    uStack_2f0._0_4_ = fVar67;
    uStack_2f0._4_4_ = fVar67;
    FUN_1092de294(&fStack_548,&uStack_2f0);
  }
  fStack_540 = SUB84(pfVar26,0);
  uStack_53c = (undefined4)((ulong)pfVar26 >> 0x20);
  iStack_530 = (int)uStack_4c8;
  iStack_52c = (int)((ulong)uStack_4c8 >> 0x20);
  dStack_520 = dStack_4d0;
  pppppuStack_518 = (undefined8 *****)CONCAT44(pppppuStack_518._4_4_,(int)plVar22);
  uStack_2f0._0_4_ = 127.5;
  uStack_2b0 = (int *)&uStack_2e8;
  uStack_2e8._4_4_ = 0;
  uStack_2e0 = 0;
  uStack_2f0._4_4_ = 0.0;
  uStack_2e8._0_4_ = 0;
  uStack_2d4 = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2d0._4_4_ = 0;
  uStack_2c8._0_4_ = 0;
  dStack_2b8 = 0.0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  dStack_298 = 0.0;
  dStack_2a0 = 0.0;
  bStack_690 = 0;
  bStack_68f = 0;
  uStack_68e = 0x42ff;
  piStack_650 = (int *)&uStack_688;
  uStack_688._4_4_ = 0.0;
  iStack_680 = 0;
  fStack_68c = 0.0;
  uStack_688._0_4_ = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  iStack_67c = 0;
  uStack_678 = 0;
  uStack_664 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_658 = 0;
  uStack_654 = 0;
  uStack_660 = 0;
  uStack_65c = 0;
  alStack_638[0] = 0;
  plStack_640 = (long *)0x0;
  fStack_110 = 7.00649e-45;
  fStack_10c = 1.4013e-45;
  pplStack_648 = &plStack_640;
  pdStack_2a8 = &dStack_2a0;
  FUN_109a83fd0(&bStack_690,2,&fStack_110,5);
  fStack_110 = 127.5;
  puStack_d0 = &uStack_108;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  fStack_10c = 0.0;
  uStack_108._0_4_ = 0;
  uStack_f4 = 0;
  uStack_f0._0_4_ = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e8._4_4_ = 0;
  uStack_f0._4_4_ = 0;
  uStack_e8._0_4_ = 0;
  dStack_d8 = 0.0;
  uStack_e0 = 0;
  uStack_dc = 0;
  alStack_c0[0] = 0;
  alStack_c0[1] = 0;
  uStack_190._0_4_ = (int)((ulong)((long)pppppuStack_4e0 - (long)pppppuStack_4e8) >> 3);
  uStack_190._4_4_ = 1;
  plStack_c8 = alStack_c0;
  FUN_109a83fd0(&fStack_110,2,&uStack_190,0xd);
  if ((long)pppppuStack_4e0 - (long)pppppuStack_4e8 != 0) {
    lVar24 = 0;
    lVar65 = (long)pppppuStack_4e0 - (long)pppppuStack_4e8 >> 3;
    lVar34 = *plStack_c8;
    pppppuVar63 = pppppuStack_4e8;
    do {
      uVar53 = NEON_scvtf(*pppppuVar63,4);
      *(undefined8 *)(CONCAT44(uStack_fc,uStack_100) + (lVar24 >> 0x20) * lVar34) = uVar53;
      lVar24 = lVar24 + 0x100000000;
      lVar65 = lVar65 + -1;
      pppppuVar63 = pppppuVar63 + 1;
    } while (lVar65 != 0);
  }
  uStack_180 = 0;
  uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,0x1010000);
  ppppppuStack_188 = (undefined8 ******)&fStack_110;
  pppppppuStack_308 = (uint *******)CONCAT44(pppppppuStack_308._4_4_,0x3010000);
  pppppppuStack_300 = (uint *******)&uStack_2f0;
  pppppppuStack_2f8 = (uint *******)0x0;
  uStack_320 = 0x2010000;
  uStack_318 = (undefined8 *******)&bStack_690;
  uStack_310 = 0;
  uStack_30c = 0;
  FUN_109a55914(&uStack_190,3,&pppppppuStack_308,0,0,2,2,&uStack_320);
  ppppppuStack_188 = (undefined8 ******)((ulong)ppppppuStack_188 & 0xffffffff00000000);
  uStack_190 = (undefined8 ******)0x0;
  if ((long)pppppuStack_4e0 - (long)pppppuStack_4e8 != 0) {
    lVar65 = 0;
    lVar24 = 0;
    lVar34 = CONCAT44(uStack_2dc,uStack_2e0);
    do {
      if ((((uint)(float)uStack_2f0 >> 0xe & 1) == 0) && (*uStack_2b0 != 1)) {
        if (uStack_2b0[1] == 1) {
          piVar36 = (int *)(lVar34 + (long)*pdStack_2a8 * (lVar65 >> 0x20));
        }
        else {
          iVar35 = 0;
          if (uStack_2e8._4_4_ != 0) {
            iVar35 = (int)lVar24 / uStack_2e8._4_4_;
          }
          piVar36 = (int *)(lVar34 + (long)*pdStack_2a8 * (long)iVar35 +
                           (long)((int)lVar24 + -uStack_2e8._4_4_ * iVar35) * 4);
        }
      }
      else {
        piVar36 = (int *)(lVar34 + (lVar65 >> 0x1e));
      }
      *(int *)((long)&uStack_190 + (long)*piVar36 * 4) =
           *(int *)((long)&uStack_190 + (long)*piVar36 * 4) + 1;
      lVar24 = lVar24 + 1;
      lVar65 = lVar65 + 0x100000000;
    } while ((long)pppppuStack_4e0 - (long)pppppuStack_4e8 >> 3 != lVar24);
  }
  lVar24 = 0;
  piVar36 = (int *)&uStack_190;
  iVar35 = -1;
  iVar41 = -1;
  do {
    iVar69 = *piVar36;
    iVar43 = iVar35;
    if (iVar35 <= iVar69) {
      iVar43 = iVar69;
    }
    iVar10 = (int)lVar24;
    if (iVar69 <= iVar35) {
      iVar10 = iVar41;
    }
    lVar24 = lVar24 + 2;
    piVar36 = piVar36 + 1;
    iVar35 = iVar43;
    iVar41 = iVar10;
  } while (lVar24 != 6);
  if (((bStack_68f >> 6 & 1) == 0) && (*piStack_650 != 1)) {
    if (piStack_650[1] == 1) {
      pfVar39 = (float *)(CONCAT44(iStack_67c,iStack_680) + (long)*pplStack_648 * (long)iVar10);
      pfVar26 = (float *)(CONCAT44(iStack_67c,iStack_680) + (long)*pplStack_648 * (long)(iVar10 + 1)
                         );
    }
    else {
      iVar35 = 0;
      if (uStack_688._4_4_ != 0.0) {
        iVar35 = iVar10 / (int)uStack_688._4_4_;
      }
      pfVar39 = (float *)(CONCAT44(iStack_67c,iStack_680) + (long)*pplStack_648 * (long)iVar35 +
                         (long)(iVar10 - iVar35 * (int)uStack_688._4_4_) * 4);
      iVar35 = 0;
      if (uStack_688._4_4_ != 0.0) {
        iVar35 = (iVar10 + 1) / (int)uStack_688._4_4_;
      }
      pfVar26 = (float *)(CONCAT44(iStack_67c,iStack_680) + (long)*pplStack_648 * (long)iVar35 +
                         (long)((iVar10 + 1) - iVar35 * (int)uStack_688._4_4_) * 4);
    }
  }
  else {
    pfVar39 = (float *)(CONCAT44(iStack_67c,iStack_680) + (long)iVar10 * 4);
    pfVar26 = pfVar39 + 1;
  }
  uStack_528 = (undefined8 ******)
               CONCAT44((int)(long)(float)(int)*pfVar26,(int)(long)(float)(int)*pfVar39);
  if (dStack_d8 != 0.0) {
    piVar36 = (int *)((long)dStack_d8 + 0x14);
    do {
      iVar35 = *piVar36;
      cVar29 = '\x01';
      bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar45) {
        *piVar36 = iVar35 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if (iVar35 + -1 == 0) {
      func_0x000109a848d4(&fStack_110);
    }
  }
  dStack_d8 = 0.0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8._0_4_ = 0;
  uStack_e8._4_4_ = 0;
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0;
  if (0 < (int)fStack_10c) {
    lVar24 = 0;
    do {
      *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)fStack_10c);
  }
  if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
    _free(plStack_c8[-1]);
  }
  if (CONCAT44(uStack_654,uStack_658) != 0) {
    piVar36 = (int *)(CONCAT44(uStack_654,uStack_658) + 0x14);
    do {
      iVar35 = *piVar36;
      cVar29 = '\x01';
      bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar45) {
        *piVar36 = iVar35 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if (iVar35 + -1 == 0) {
      func_0x000109a848d4(&bStack_690);
    }
  }
  uStack_658 = 0;
  uStack_654 = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  iStack_680 = 0;
  iStack_67c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  if (0 < (int)fStack_68c) {
    lVar24 = 0;
    do {
      piStack_650[lVar24] = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)fStack_68c);
  }
  if (pplStack_648 != &plStack_640 && pplStack_648 != (long **)0x0) {
    _free(pplStack_648[-1]);
  }
  if (dStack_2b8 != 0.0) {
    piVar36 = (int *)((long)dStack_2b8 + 0x14);
    do {
      iVar35 = *piVar36;
      cVar29 = '\x01';
      bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar45) {
        *piVar36 = iVar35 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if (iVar35 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  dStack_2b8 = 0.0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2d0._4_4_ = 0;
  if (0 < (int)uStack_2f0._4_4_) {
    lVar24 = 0;
    do {
      uStack_2b0[lVar24] = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uStack_2f0._4_4_);
  }
  if (pdStack_2a8 != &dStack_2a0 && pdStack_2a8 != (double *)0x0) {
    _free(pdStack_2a8[-1]);
  }
  bStack_690 = 0;
  uStack_688._0_4_ = 0x42ff0000;
  pplStack_648 = (long **)&iStack_680;
  iStack_67c = 0;
  uStack_678 = 0;
  uStack_688._4_4_ = 0.0;
  iStack_680 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_65c = 0;
  uStack_664 = 0;
  uStack_660 = 0;
  piStack_650 = (int *)0x0;
  uStack_658 = 0;
  uStack_654 = 0;
  plStack_640 = alStack_638;
  alStack_638[1] = 0;
  alStack_638[0] = 0;
  uStack_628 = 0x42ff0000;
  iStack_61c = 0;
  uStack_618 = 0;
  iStack_624 = 0;
  iStack_620 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_5fc = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  dStack_5f0 = 0.0;
  uStack_5f8 = 0;
  uStack_5f4 = 0;
  adStack_5d8[1] = 0.0;
  adStack_5d8[0] = 0.0;
  ppppppuStack_188 = (undefined8 ******)0x0;
  uStack_190 = (undefined8 ******)0x0;
  uStack_180 = 0;
  piStack_5e8 = &iStack_620;
  pdStack_5e0 = adStack_5d8;
  FUN_1092e3d84(&uStack_190,4);
  ppppppuVar68 = uStack_190;
  iVar41 = iStack_52c;
  iVar35 = iStack_530;
  ppppppuStack_128 = (undefined8 ******)((ulong)ppppppuStack_128 & 0xffffffffffffff00);
  uStack_350 = uStack_350 & 0xffffff00;
  ppppppuStack_710 = (undefined8 ******)((ulong)ppppppuStack_710 & 0xffffffffffffff00);
  uStack_728 = (undefined8 *****)((ulong)uStack_728 & 0xffffffffffffff00);
  lVar24 = CONCAT44(fStack_554,fStack_558) - (long)CONCAT44(fStack_55c,fStack_560);
  if (lVar24 != 0) {
    cVar29 = '\0';
    lVar24 = lVar24 >> 3;
    iVar43 = iStack_530 - (int)uStack_528;
    iVar69 = iStack_52c - uStack_528._4_4_;
    puVar31 = (undefined8 *)CONCAT44(fStack_55c,fStack_560);
    do {
      pppppuVar63 = (undefined8 *****)*puVar31;
      iVar10 = iVar35 - (int)(long)(float)(int)SUB84(pppppuVar63,0);
      iVar4 = iVar41 - (int)(long)(float)(int)(float)((ulong)pppppuVar63 >> 0x20);
      dVar46 = -(double)iVar69 * (double)iVar10 + (double)iVar4 * (double)iVar43;
      dVar52 = (double)(iVar10 * iVar43 + iVar4 * iVar69) /
               SQRT((double)(uint)(iVar43 * iVar43 + iVar69 * iVar69));
      if ((0.0 <= dVar46) || (dVar52 <= 0.0)) {
        if ((0.0 < dVar46) && (0.0 < dVar52)) {
          ppppppuVar70 = (undefined8 ******)&uStack_350;
          lVar65 = 1;
          goto LAB_1092e60b4;
        }
        if ((dVar46 < 0.0) && (dVar52 < 0.0)) {
          ppppppuVar70 = &ppppppuStack_710;
          lVar65 = 2;
          goto LAB_1092e60b4;
        }
        if ((0.0 < dVar46) && (dVar52 < 0.0)) {
          ppppppuVar70 = (undefined8 ******)&uStack_728;
          lVar65 = 3;
          goto LAB_1092e60b4;
        }
      }
      else {
        lVar65 = 0;
        ppppppuVar70 = &ppppppuStack_128;
LAB_1092e60b4:
        if (((ulong)*ppppppuVar70 & 1) == 0) {
          *(byte *)ppppppuVar70 = 1;
          cVar29 = cVar29 + '\x01';
          ppppppuVar68[lVar65] = pppppuVar63;
        }
      }
      lVar24 = lVar24 + -1;
      puVar31 = puVar31 + 1;
    } while (lVar24 != 0);
    if (cVar29 == '\x04') {
      if (param_1 + 0x10 != &uStack_190) {
        FUN_1092e9120();
      }
      lVar24 = param_1[0x11] - param_1[0x10];
      if (lVar24 != 0) {
        lVar24 = lVar24 >> 3;
        dVar52 = (double)param_1[0xd];
        dVar46 = (double)param_1[0xe];
        puVar31 = (undefined8 *)param_1[0x10];
        do {
          *puVar31 = CONCAT44((float)((double)((float)((ulong)param_1[0xf] >> 0x20) +
                                              (float)((double)(float)((ulong)*puVar31 >> 0x20) *
                                                     dVar52)) * dVar46),
                              (float)((double)((float)param_1[0xf] +
                                              (float)((double)(float)*puVar31 * dVar52)) * dVar46));
          lVar24 = lVar24 + -1;
          puVar31 = puVar31 + 1;
        } while (lVar24 != 0);
      }
      uStack_100 = 0;
      uStack_fc = 0;
      fStack_110 = -2.4060936e-38;
      uStack_108 = (undefined8 *******)&uStack_190;
      pppppppuStack_2f8 = (uint *******)0x0;
      pppppppuStack_308 = (uint *******)CONCAT44(pppppppuStack_308._4_4_,0x8103000d);
      pppppppuStack_300 = (uint *******)&fStack_548;
      FUN_109b1fb0c(&uStack_2f0,&fStack_110,&pppppppuStack_308);
      puVar31 = uStack_108;
      puVar42 = uStack_318;
      pppppppuVar20 = uStack_3b8;
      if (dStack_5f0 != 0.0) {
        piVar36 = (int *)((long)dStack_5f0 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_628);
          puVar31 = uStack_108;
          puVar42 = uStack_318;
          pppppppuVar20 = uStack_3b8;
        }
      }
      if (0 < iStack_624) {
        lVar24 = 0;
        do {
          piStack_5e8[lVar24] = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < iStack_624);
      }
      iStack_620 = (int)uStack_2e8;
      iStack_61c = uStack_2e8._4_4_;
      uStack_628 = (uint)(float)uStack_2f0;
      iStack_624 = (int)uStack_2f0._4_4_;
      uStack_610 = uStack_2d8;
      uStack_60c = uStack_2d4;
      uStack_618 = uStack_2e0;
      uStack_614 = uStack_2dc;
      uStack_600 = (undefined4)uStack_2c8;
      uStack_5fc = uStack_2c8._4_4_;
      uStack_608 = (undefined4)uStack_2d0;
      uStack_604 = uStack_2d0._4_4_;
      dStack_5f0 = dStack_2b8;
      uStack_5f8 = uStack_2c0;
      uStack_5f4 = uStack_2bc;
      piVar36 = piStack_5e8;
      pdVar17 = pdStack_5e0;
      uStack_108 = (undefined8 *******)puVar31;
      uStack_318 = (undefined8 *******)puVar42;
      uStack_3b8 = pppppppuVar20;
      if ((pdStack_5e0 != adStack_5d8) &&
         (piVar36 = &iStack_620, pdVar17 = adStack_5d8, pdStack_5e0 != (double *)0x0)) {
        _free(pdStack_5e0[-1]);
      }
      pdStack_5e0 = pdVar17;
      piStack_5e8 = piVar36;
      pdVar17 = pdStack_2a8;
      if ((int)uStack_2f0._4_4_ < 3) {
        puVar31 = (undefined8 *)((ulong)&uStack_2f0 | 4);
        *pdStack_5e0 = *pdStack_2a8;
        pdStack_5e0[1] = pdVar17[1];
        uStack_2f0._0_4_ = 127.5;
        puVar31[1] = 0;
        *puVar31 = 0;
        puVar31[3] = 0;
        puVar31[2] = 0;
        puVar31[5] = 0;
        puVar31[4] = 0;
        *(undefined8 *)((long)puVar31 + 0x34) = 0;
        *(undefined8 *)((long)puVar31 + 0x2c) = 0;
        if (pdVar17 != &dStack_2a0) {
          _free(pdVar17[-1]);
        }
      }
      else {
        pdStack_5e0 = pdStack_2a8;
        piStack_5e8 = uStack_2b0;
      }
      FUN_109a8261c(&uStack_2f0,(ulong)pppppuStack_518 & 0xffffffff,
                    (ulong)pppppuStack_518 & 0xffffffff,0x10);
      fStack_110 = 127.5;
      puStack_d0 = &uStack_108;
      uStack_108._4_4_ = 0;
      uStack_100 = 0;
      fStack_10c = 0.0;
      uStack_108._0_4_ = 0;
      dStack_d8 = 0.0;
      uStack_dc = 0;
      uStack_e8._4_4_ = 0;
      uStack_e0 = 0;
      uStack_f0._4_4_ = 0;
      uStack_e8._0_4_ = 0;
      uStack_f4 = 0;
      uStack_f0._0_4_ = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      alStack_c0[0] = 0;
      alStack_c0[1] = 0;
      plStack_c8 = alStack_c0;
      (**(code **)(*(long *)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0) + 0x18))
                ((long *)CONCAT44(uStack_2f0._4_4_,(float)uStack_2f0),&uStack_2f0,&fStack_110,
                 0xffffffff);
      FUN_10918eb6c(&uStack_2f0);
      pppppppuStack_2f8 = (uint *******)0x0;
      pppppppuStack_308 = (uint *******)CONCAT44(pppppppuStack_308._4_4_,0x1010000);
      pppppppuStack_300 = (uint *******)&fStack_3c0;
      uStack_320 = 0x2010000;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_328 = 0;
      ppppppuStack_338 = (undefined8 ******)CONCAT44(ppppppuStack_338._4_4_,0x1010000);
      uStack_360 = NEON_rev64(*puStack_d0,4);
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2e8._0_4_ = 0;
      uStack_2e8._4_4_ = 0;
      uStack_2f0._0_4_ = 0.0;
      uStack_2f0._4_4_ = 0.0;
      ppppppuStack_330 = (undefined8 ******)&uStack_628;
      uStack_318 = (undefined8 *******)&fStack_110;
      FUN_109b1eb58(&pppppppuStack_308,&uStack_320,&ppppppuStack_338,&uStack_360,1,0,&uStack_2f0);
      bStack_690 = 1;
      if (dStack_d8 != 0.0) {
        piVar36 = (int *)((long)dStack_d8 + 0x14);
        do {
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = *piVar36 + 1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
      }
      if (piStack_650 != (int *)0x0) {
        piVar36 = (int *)((long)piStack_650 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_688);
        }
      }
      plVar22 = plStack_c8;
      piStack_650 = (int *)0x0;
      uStack_670 = 0;
      uStack_66c = 0;
      uStack_678 = 0;
      uStack_674 = 0;
      uStack_660 = 0;
      uStack_65c = 0;
      uStack_668 = 0;
      uStack_664 = 0;
      if ((int)uStack_688._4_4_ < 1) {
LAB_1092e646c:
        uStack_688._0_4_ = (int)fStack_110;
        if (2 < (int)fStack_10c) goto LAB_1092e64a0;
        uStack_688._4_4_ = fStack_10c;
        iStack_680 = (int)uStack_108;
        iStack_67c = uStack_108._4_4_;
        *plStack_640 = *plStack_c8;
        plStack_640[1] = plVar22[1];
      }
      else {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)pplStack_648 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)uStack_688._4_4_);
        if ((int)uStack_688._4_4_ < 3) goto LAB_1092e646c;
LAB_1092e64a0:
        uStack_688._0_4_ = (int)fStack_110;
        func_0x000109a84868(&uStack_688,&fStack_110);
      }
      uStack_670 = uStack_f8;
      uStack_66c = uStack_f4;
      uStack_678 = uStack_100;
      uStack_674 = uStack_fc;
      uStack_660 = (undefined4)uStack_e8;
      uStack_65c = uStack_e8._4_4_;
      uStack_668 = (undefined4)uStack_f0;
      uStack_664 = uStack_f0._4_4_;
      piStack_650 = (int *)dStack_d8;
      uStack_658 = uStack_e0;
      uStack_654 = uStack_dc;
      if (dStack_d8 != 0.0) {
        piVar36 = (int *)((long)dStack_d8 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar45) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&fStack_110);
        }
      }
      dStack_d8 = 0.0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      uStack_f0._4_4_ = 0;
      if (0 < (int)fStack_10c) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)fStack_10c);
      }
      if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
        _free(plStack_c8[-1]);
      }
    }
  }
  if (uStack_190 != (undefined8 ******)0x0) {
    ppppppuStack_188 = uStack_190;
    __ZdlPv();
  }
  if ((bStack_690 & 1) == 0) {
    uStack_6f0 = param_1[1];
    lStack_6e8 = param_1[2];
    iVar35 = *(int *)((long)param_1 + 0xc);
    uStack_6b0 = (ulong)&uStack_6f0 | 8;
    lStack_6e0 = param_1[3];
    lStack_6d8 = param_1[4];
    lStack_6d0 = param_1[5];
    lStack_6c8 = param_1[6];
    lStack_6c0 = param_1[7];
    lStack_6b8 = param_1[8];
    uStack_698 = 0;
    uStack_6a0 = 0;
    if (param_1[8] != 0) {
      piVar36 = (int *)(param_1[8] + 0x14);
      do {
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = *piVar36 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      iVar35 = *(int *)((long)param_1 + 0xc);
    }
    puStack_6a8 = &uStack_6a0;
    if (iVar35 < 3) {
      uStack_6a0 = *(undefined8 *)param_1[10];
      uStack_698 = ((undefined8 *)param_1[10])[1];
    }
    else {
      uStack_6f0 = uStack_6f0 & 0xffffffff;
      func_0x000109a84868(&uStack_6f0);
    }
    FUN_1092e2c84(&uStack_6f0,param_4,0);
    if (lStack_6b8 != 0) {
      piVar36 = (int *)(lStack_6b8 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_6f0);
      }
    }
    lStack_6b8 = 0;
    lStack_6d8 = 0;
    lStack_6e0 = 0;
    lStack_6c8 = 0;
    lStack_6d0 = 0;
    if (0 < uStack_6f0._4_4_) {
      lVar24 = 0;
      do {
        *(undefined4 *)(uStack_6b0 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < uStack_6f0._4_4_);
    }
    if (puStack_6a8 != &uStack_6a0 && puStack_6a8 != (undefined8 *)0x0) {
      _free(puStack_6a8[-1]);
    }
  }
  else {
    ppppppuStack_710 = (undefined8 ******)0x0;
    ppppppuStack_708 = (undefined8 ******)0x0;
    uStack_700 = 0;
    uStack_728 = (undefined8 *****)0x0;
    pppppuStack_720 = (undefined8 *****)0x0;
    uStack_718 = 0;
    uStack_2f0._0_4_ = 127.62509;
    uStack_2f0._4_4_ = 2.8026e-45;
    uStack_2b0 = (int *)&uStack_2e8;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = (undefined8 ******)0x0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    dStack_2b8 = 0.0;
    dStack_298 = 0.0;
    dStack_2a0 = 0.0;
    uVar37 = (long)pppppuStack_4e0 - (long)pppppuStack_4e8;
    uStack_2e8._0_4_ = (int)(uVar37 >> 3);
    uStack_2e8._4_4_ = 1;
    uStack_2c8 = (undefined8 ******)CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
    if (uVar37 != 0) {
      dStack_298 = 3.95252516672997e-323;
      dStack_2a0 = 3.95252516672997e-323;
      uStack_2e0 = SUB84(pppppuStack_4e8,0);
      uStack_2dc = (undefined4)((ulong)pppppuStack_4e8 >> 0x20);
      uStack_2d0 = (undefined8 ******)(pppppuStack_4e8 + ((long)(uVar37 * 0x20000000) >> 0x20));
      uStack_2d8 = uStack_2e0;
      uStack_2d4 = uStack_2dc;
      uStack_2c8 = uStack_2d0;
    }
    uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,0x8203000d);
    ppppppuStack_188 = (undefined8 ******)&uStack_728;
    uStack_180 = 0;
    puStack_d0 = (undefined8 *)((ulong)&fStack_110 | 8);
    uStack_108._0_4_ = 0;
    uStack_108._4_4_ = 1;
    fStack_110 = 127.6251;
    fStack_10c = 2.8026e-45;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    dStack_d8 = 0.0;
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    uStack_2e0 = uStack_2d8;
    uStack_2dc = uStack_2d4;
    pdStack_2a8 = &dStack_2a0;
    plStack_c8 = alStack_c0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_2f0,&uStack_190,0xd);
    if (dStack_d8 != 0.0) {
      piVar36 = (int *)((long)dStack_d8 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&fStack_110);
      }
    }
    dStack_d8 = 0.0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    if (0 < (int)fStack_10c) {
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)fStack_10c);
    }
    if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
      _free(plStack_c8[-1]);
    }
    if (dStack_2b8 != 0.0) {
      piVar36 = (int *)((long)dStack_2b8 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_2f0);
      }
    }
    dStack_2b8 = 0.0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2c8._0_4_ = 0;
    uStack_2c8._4_4_ = 0;
    uStack_2d0._0_4_ = 0;
    uStack_2d0._4_4_ = 0;
    if (0 < (int)uStack_2f0._4_4_) {
      lVar24 = 0;
      do {
        *(undefined4 *)((long)uStack_2b0 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_2f0._4_4_);
    }
    if (pdStack_2a8 != &dStack_2a0 && pdStack_2a8 != (double *)0x0) {
      _free(pdStack_2a8[-1]);
    }
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2f0._0_4_ = -2.4060936e-38;
    uStack_2e8 = (undefined8 *******)&uStack_728;
    fStack_110 = -9.624375e-38;
    uStack_108 = &ppppppuStack_710;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_180 = 0;
    uStack_190._0_4_ = 0x1010000;
    ppppppuStack_188 = (undefined8 ******)&uStack_628;
    FUN_109a6c2a0(&uStack_2f0,&fStack_110,&uStack_190);
    uStack_2f0._0_4_ = 127.6251;
    uStack_2f0._4_4_ = 2.8026e-45;
    uStack_2b0 = (int *)&uStack_2e8;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = (undefined8 ******)0x0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    dStack_2b8 = 0.0;
    dStack_298 = 0.0;
    dStack_2a0 = 0.0;
    uVar37 = (long)ppppppuStack_708 - (long)ppppppuStack_710;
    uStack_2e8._0_4_ = (int)(uVar37 >> 3);
    uStack_2e8._4_4_ = 1;
    uStack_2c8 = (undefined8 ******)CONCAT44(uStack_2c8._4_4_,(undefined4)uStack_2c8);
    if (uVar37 != 0) {
      dStack_298 = 3.95252516672997e-323;
      dStack_2a0 = 3.95252516672997e-323;
      uStack_2e0 = SUB84(ppppppuStack_710,0);
      uStack_2dc = (undefined4)((ulong)ppppppuStack_710 >> 0x20);
      uStack_2d0 = ppppppuStack_710 + ((long)(uVar37 * 0x20000000) >> 0x20);
      uStack_2d8 = uStack_2e0;
      uStack_2d4 = uStack_2dc;
      uStack_2c8 = uStack_2d0;
    }
    uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,0x8203000c);
    uStack_180 = 0;
    fStack_110 = 127.62509;
    fStack_10c = 2.8026e-45;
    puStack_d0 = &uStack_108;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = (undefined8 *****)0x0;
    uStack_e0 = 0;
    uStack_dc = 0;
    dStack_d8 = 0.0;
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    uVar37 = (long)pppppuStack_4e0 - (long)pppppuStack_4e8;
    uStack_108._0_4_ = (int)(uVar37 >> 3);
    uStack_108._4_4_ = 1;
    uStack_e8 = (undefined8 *****)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
    if (uVar37 != 0) {
      alStack_c0[1] = 8;
      alStack_c0[0] = 8;
      uStack_100 = SUB84(pppppuStack_4e8,0);
      uStack_fc = (undefined4)((ulong)pppppuStack_4e8 >> 0x20);
      uStack_f0 = pppppuStack_4e8 + ((long)(uVar37 * 0x20000000) >> 0x20);
      uStack_f8 = uStack_100;
      uStack_f4 = uStack_fc;
      uStack_e8 = uStack_f0;
    }
    uStack_2e0 = uStack_2d8;
    uStack_2dc = uStack_2d4;
    pdStack_2a8 = &dStack_2a0;
    ppppppuStack_188 = &pppppuStack_4e8;
    uStack_100 = uStack_f8;
    uStack_fc = uStack_f4;
    plStack_c8 = alStack_c0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_2f0,&uStack_190,0xc);
    if (dStack_d8 != 0.0) {
      piVar36 = (int *)((long)dStack_d8 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&fStack_110);
      }
    }
    dStack_d8 = 0.0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0;
    if (0 < (int)fStack_10c) {
      lVar24 = 0;
      do {
        *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)fStack_10c);
    }
    if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
      _free(plStack_c8[-1]);
    }
    if (dStack_2b8 != 0.0) {
      piVar36 = (int *)((long)dStack_2b8 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_2f0);
      }
    }
    dStack_2b8 = 0.0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    uStack_2c8._0_4_ = 0;
    uStack_2c8._4_4_ = 0;
    uStack_2d0._0_4_ = 0;
    uStack_2d0._4_4_ = 0;
    if (0 < (int)uStack_2f0._4_4_) {
      lVar24 = 0;
      do {
        *(undefined4 *)((long)uStack_2b0 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)uStack_2f0._4_4_);
    }
    if (pdStack_2a8 != &dStack_2a0 && pdStack_2a8 != (double *)0x0) {
      _free(pdStack_2a8[-1]);
    }
    *param_3 = 0;
    plVar22 = param_5;
    (**(code **)(*param_5 + 0x18))();
    pppppppuStack_300 = (uint *******)0x0;
    pppppppuStack_308 = (uint *******)0x0;
    pppppppuStack_2f8 = (uint *******)0x0;
    uStack_2f0._0_4_ = 0.0;
    uStack_2f0._4_4_ = 0.0;
    pppppppuVar21 = (uint *******)&pppppppuStack_308;
    FUN_1092e7794(pppppppuVar21,&uStack_2f0);
    pppppppuVar27 = pppppppuStack_2f8;
    iVar41 = (int)plVar22;
    iVar35 = (int)((ulong)((long)iVar41 * 0x55555555) >> 0x20) - iVar41;
    iVar35 = (iVar35 >> 1) - (iVar35 >> 0x1f);
    uStack_2f0._4_4_ = 0.0;
    if (pppppppuVar21 < pppppppuStack_2f8) {
      pppppppuVar23 = pppppppuVar21 + 1;
      *(int *)pppppppuVar21 = iVar35;
      *(int *)((long)pppppppuVar21 + 4) = 0;
    }
    else {
      pppppppuVar23 = (uint *******)&pppppppuStack_308;
      pppppppuStack_300 = pppppppuVar21;
      uStack_2f0._0_4_ = (float)iVar35;
      FUN_1092e7794(pppppppuVar23,&uStack_2f0);
      pppppppuVar27 = pppppppuStack_2f8;
    }
    uStack_2f0._0_4_ = 0.0;
    if (pppppppuVar23 < pppppppuVar27) {
      pppppppuVar21 = pppppppuVar23 + 1;
      *(int *)pppppppuVar23 = 0;
      *(int *)((long)pppppppuVar23 + 4) = iVar35;
    }
    else {
      pppppppuVar21 = (uint *******)&pppppppuStack_308;
      pppppppuStack_300 = pppppppuVar23;
      uStack_2f0._4_4_ = (float)iVar35;
      FUN_1092e7794(pppppppuVar21,&uStack_2f0);
      pppppppuVar27 = pppppppuStack_2f8;
    }
    iVar41 = iVar41 / 3;
    uStack_2f0._4_4_ = 0.0;
    if (pppppppuVar21 < pppppppuVar27) {
      pppppppuVar23 = pppppppuVar21 + 1;
      *(int *)pppppppuVar21 = iVar41;
      *(int *)((long)pppppppuVar21 + 4) = 0;
    }
    else {
      pppppppuVar23 = (uint *******)&pppppppuStack_308;
      pppppppuStack_300 = pppppppuVar21;
      uStack_2f0._0_4_ = (float)iVar41;
      FUN_1092e7794(pppppppuVar23,&uStack_2f0);
      pppppppuVar27 = pppppppuStack_2f8;
    }
    uStack_2f0._0_4_ = 0.0;
    uStack_2f0._4_4_ = (float)iVar41;
    if (pppppppuVar23 < pppppppuVar27) {
      pppppppuVar21 = pppppppuVar23 + 1;
      *(int *)pppppppuVar23 = 0;
      *(int *)((long)pppppppuVar23 + 4) = iVar41;
    }
    else {
      pppppppuVar21 = (uint *******)&pppppppuStack_308;
      pppppppuStack_300 = pppppppuVar23;
      FUN_1092e7794(pppppppuVar21,&uStack_2f0);
    }
    pppppppuStack_300 = pppppppuVar21;
    (**(code **)(*param_1 + 0x18))(&uStack_320,param_1,param_5);
    uVar44 = 0;
    puVar31 = (undefined8 *)((ulong)&uStack_2f0 | 4);
    puVar42 = (undefined8 *)((ulong)&uStack_190 | 4);
    do {
      uStack_2f0._0_4_ = 127.5;
      puVar31[1] = 0;
      *puVar31 = 0;
      puVar31[3] = 0;
      puVar31[2] = 0;
      puVar31[5] = 0;
      puVar31[4] = 0;
      *(undefined8 *)((long)puVar31 + 0x34) = 0;
      *(undefined8 *)((long)puVar31 + 0x2c) = 0;
      dStack_2a0 = 0.0;
      dStack_298 = 0.0;
      uVar53 = NEON_scvtf(CONCAT44(iStack_67c / 2,iStack_680 / 2),4);
      uStack_190 = (undefined8 ******)NEON_rev64(uVar53,4);
      uStack_2b0 = (int *)&uStack_2e8;
      pdStack_2a8 = &dStack_2a0;
      FUN_109b1f55c(&fStack_110,(double)uVar44,0x3ff0000000000000,&uStack_190);
      uStack_328 = 0;
      ppppppuStack_338._0_4_ = 0x1010000;
      ppppppuStack_128._0_4_ = 0x2010000;
      uStack_118 = 0;
      uStack_340 = 0;
      uStack_350 = 0x1010000;
      uStack_358 = NEON_rev64(*pplStack_648,4);
      uStack_178 = 0;
      uStack_180 = 0;
      ppppppuStack_188 = (undefined8 ******)0x0;
      uStack_190 = (undefined8 ******)0x0;
      uStack_348 = (undefined8 *)&fStack_110;
      ppppppuStack_330 = (undefined8 ******)&uStack_688;
      ppppppuStack_120 = (undefined8 ******)&uStack_2f0;
      FUN_109b1e030(&ppppppuStack_338,&ppppppuStack_128,&uStack_350,&uStack_358,1,0,&uStack_190);
      uStack_190 = (undefined8 ******)CONCAT44(uStack_190._4_4_,0x42ff0000);
      puVar42[1] = 0;
      *puVar42 = 0;
      puVar42[3] = 0;
      puVar42[2] = 0;
      puVar42[5] = 0;
      puVar42[4] = 0;
      *(undefined8 *)((long)puVar42 + 0x34) = 0;
      *(undefined8 *)((long)puVar42 + 0x2c) = 0;
      pppuStack_140 = (undefined8 ***)0x0;
      pppuStack_138 = (undefined8 ***)0x0;
      uStack_328 = 0;
      ppppppuStack_338 = (undefined8 ******)CONCAT44(ppppppuStack_338._4_4_,0x8103000c);
      ppppppuStack_128 = (undefined8 ******)CONCAT44(ppppppuStack_128._4_4_,0x2010000);
      uStack_118 = 0;
      uStack_340 = 0;
      uStack_350 = 0x1010000;
      uStack_348 = (undefined8 *)&fStack_110;
      ppppppuStack_330 = &pppppuStack_4e8;
      ppppppuStack_150 = &ppppppuStack_188;
      pppuStack_148 = &pppuStack_140;
      ppppppuStack_120 = (undefined8 ******)&uStack_190;
      FUN_109a6b6dc(&ppppppuStack_338,&ppppppuStack_128,&uStack_350);
      if (pppppppuStack_300 != pppppppuStack_308) {
        uVar37 = 0;
        do {
          puVar28 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
          if (uStack_318 == (undefined8 *******)puVar28) {
LAB_1092e6d00:
            FUN_1092dbe44(param_1,&uStack_2f0,param_5,param_3,pppppppuStack_308 + uVar37);
            if ((*param_3 & 1) != 0) {
              bVar45 = false;
              goto LAB_1092e6d44;
            }
          }
          else {
            uVar38 = 0;
            do {
              uStack_328 = 0;
              ppppppuStack_338 = (undefined8 ******)CONCAT44(ppppppuStack_338._4_4_,0x1010000);
              ppppppuStack_128 =
                   (undefined8 ******)
                   NEON_scvtf(CONCAT44((int)((ulong)pppppppuStack_308[uVar37] >> 0x20) +
                                       (int)((ulong)puVar28[uVar38] >> 0x20),
                                       (int)pppppppuStack_308[uVar37] + (int)puVar28[uVar38]),4);
              ppppppuStack_330 = (undefined8 ******)&uStack_190;
              dVar46 = (double)FUN_109b0e274(&ppppppuStack_338,&ppppppuStack_128,0);
              uVar38 = uVar38 + 1;
              puVar28 = (undefined8 *)CONCAT44(uStack_31c,uStack_320);
              if ((ulong)((long)uStack_318 - (long)puVar28 >> 3) <= uVar38) break;
            } while (0.0 <= dVar46);
            if (0.0 <= dVar46) goto LAB_1092e6d00;
          }
          uVar37 = uVar37 + 1;
        } while (uVar37 < (ulong)((long)pppppppuStack_300 - (long)pppppppuStack_308 >> 3));
      }
      bVar45 = true;
LAB_1092e6d44:
      if (ppppppuStack_158 != (undefined8 ******)0x0) {
        piVar36 = (int *)((long)ppppppuStack_158 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_190);
        }
      }
      ppppppuStack_158 = (undefined8 ******)0x0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      if (0 < uStack_190._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)ppppppuStack_150 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_190._4_4_);
      }
      if ((undefined8 ****)pppuStack_148 != &pppuStack_140 && pppuStack_148 != (undefined8 ***)0x0)
      {
        _free(pppuStack_148[-1]);
      }
      if (dStack_d8 != 0.0) {
        piVar36 = (int *)((long)dStack_d8 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&fStack_110);
        }
      }
      dStack_d8 = 0.0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      uStack_f0._4_4_ = 0;
      if (0 < (int)fStack_10c) {
        lVar24 = 0;
        do {
          *(undefined4 *)((long)puStack_d0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)fStack_10c);
      }
      if (plStack_c8 != alStack_c0 && plStack_c8 != (long *)0x0) {
        _free(plStack_c8[-1]);
      }
      if (dStack_2b8 != 0.0) {
        piVar36 = (int *)((long)dStack_2b8 + 0x14);
        do {
          iVar35 = *piVar36;
          cVar29 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar36,0x10);
          if (bVar9) {
            *piVar36 = iVar35 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if (iVar35 + -1 == 0) {
          func_0x000109a848d4(&uStack_2f0);
        }
      }
      dStack_2b8 = 0.0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2c8._0_4_ = 0;
      uStack_2c8._4_4_ = 0;
      uStack_2d0._0_4_ = 0;
      uStack_2d0._4_4_ = 0;
      if (0 < (int)uStack_2f0._4_4_) {
        lVar24 = 0;
        do {
          uStack_2b0[lVar24] = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)uStack_2f0._4_4_);
      }
      if (pdStack_2a8 != &dStack_2a0 && pdStack_2a8 != (double *)0x0) {
        _free(pdStack_2a8[-1]);
      }
      bVar19 = uVar44 < 0x10e;
      uVar44 = uVar44 + 0x5a;
      bVar9 = false;
      if (bVar19) {
        bVar9 = bVar45;
      }
    } while (bVar9);
    if (CONCAT44(uStack_31c,uStack_320) != 0) {
      uStack_318._0_4_ = uStack_320;
      uStack_318._4_4_ = uStack_31c;
      __ZdlPv();
    }
    if (pppppppuStack_308 != (uint *******)0x0) {
      pppppppuStack_300 = pppppppuStack_308;
      __ZdlPv();
    }
    uStack_790 = param_1[1];
    lStack_788 = param_1[2];
    iVar35 = *(int *)((long)param_1 + 0xc);
    uStack_750 = (ulong)&uStack_790 | 8;
    lStack_780 = param_1[3];
    lStack_778 = param_1[4];
    lStack_770 = param_1[5];
    lStack_768 = param_1[6];
    lStack_760 = param_1[7];
    lStack_758 = param_1[8];
    uStack_740 = 0;
    uStack_738 = 0;
    if (param_1[8] != 0) {
      piVar36 = (int *)(param_1[8] + 0x14);
      do {
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = *piVar36 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      iVar35 = *(int *)((long)param_1 + 0xc);
    }
    puStack_748 = &uStack_740;
    if (iVar35 < 3) {
      uStack_740 = *(undefined8 *)param_1[10];
      uStack_738 = ((undefined8 *)param_1[10])[1];
    }
    else {
      uStack_790 = uStack_790 & 0xffffffff;
      func_0x000109a84868(&uStack_790);
    }
    FUN_1092e2c84(&uStack_790,param_4,0);
    if (lStack_758 != 0) {
      piVar36 = (int *)(lStack_758 + 0x14);
      do {
        iVar35 = *piVar36;
        cVar29 = '\x01';
        bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar45) {
          *piVar36 = iVar35 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_790);
      }
    }
    lStack_758 = 0;
    lStack_778 = 0;
    lStack_780 = 0;
    lStack_768 = 0;
    lStack_770 = 0;
    if (0 < uStack_790._4_4_) {
      lVar24 = 0;
      do {
        *(undefined4 *)(uStack_750 + lVar24 * 4) = 0;
        lVar24 = lVar24 + 1;
      } while (lVar24 < uStack_790._4_4_);
    }
    if (puStack_748 != &uStack_740 && puStack_748 != (undefined8 *)0x0) {
      _free(puStack_748[-1]);
    }
    if (uStack_728 != (undefined8 *****)0x0) {
      pppppuStack_720 = uStack_728;
      __ZdlPv();
    }
    if (ppppppuStack_710 != (undefined8 ******)0x0) {
      ppppppuStack_708 = ppppppuStack_710;
      __ZdlPv();
    }
  }
  FUN_1092df444(&bStack_690);
  if (CONCAT44(uStack_544,fStack_548) != 0) {
    fStack_540 = fStack_548;
    uStack_53c = uStack_544;
    __ZdlPv();
  }
  if (CONCAT44(fStack_55c,fStack_560) != 0) {
    fStack_558 = fStack_560;
    fStack_554 = fStack_55c;
    __ZdlPv();
  }
  if (pppppuStack_4e8 != (undefined8 *****)0x0) {
    pppppuStack_4e0 = pppppuStack_4e8;
    __ZdlPv();
  }
  if (pppppppuStack_500 != (undefined8 *******)0x0) {
    pppppppuStack_4f8 = pppppppuStack_500;
    __ZdlPv();
  }
LAB_1092e7120:
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  uStack_2f0 = &pppppuStack_400;
  puVar31 = &uStack_2f0;
  FUN_1092cc3c0(puVar31);
  if (dStack_388 != 0.0) {
    piVar36 = (int *)((long)dStack_388 + 0x14);
    do {
      iVar35 = *piVar36;
      cVar29 = '\x01';
      bVar45 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar45) {
        *piVar36 = iVar35 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if (iVar35 + -1 == 0) {
      puVar31 = (undefined8 *)&fStack_3c0;
      func_0x000109a848d4(puVar31);
    }
  }
  dStack_388 = 0.0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  if (0 < (int)fStack_3bc) {
    lVar24 = 0;
    do {
      piStack_380[lVar24] = 0;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)fStack_3bc);
  }
  if (pdStack_378 != &dStack_370 && pdStack_378 != (double *)0x0) {
    puVar31 = (undefined8 *)pdStack_378[-1];
    _free(puVar31);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  while ((int)param_4 == 0) {
    __Unwind_Resume(puVar31);
  }
  func_0x000104bd46a0(puVar31);
  return;
}



/* Entry: 1092e7738; end: 1092e773b;  */

void FUN_1092e7738(void)

{
  return;
}



/* Entry: 1092e773c; end: 1092e777b;  */

long * FUN_1092e773c(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092e777c; end: 1092e777f;  */

undefined8 * FUN_1092e777c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110aea318;
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110aea258;
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 1092e7780; end: 1092e7793;  */

void FUN_1092e7780(void)

{
  FUN_1092cf444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092e7794; end: 1092e789b;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1092e7794(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  undefined8 ******ppppppuVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  undefined *puVar28;
  uint *unaff_x20;
  uint *puVar29;
  uint *puVar30;
  uint *unaff_x22;
  uint *puVar31;
  uint *puVar32;
  uint *unaff_x27;
  uint *puVar33;
  uint *unaff_x28;
  uint *puVar34;
  undefined8 *******pppppppuVar35;
  code *pcVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined1 auStack_160 [8];
  uint *puStack_158;
  uint *puStack_150;
  uint *puStack_148;
  undefined8 uStack_110;
  long lStack_108;
  uint uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  undefined8 *******pppppppuStack_80;
  code *pcStack_78;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  uint *puStack_58;
  long *plStack_50;
  long *plStack_48;
  uint *puStack_40;
  uint *puStack_38;
  
  puVar29 = (uint *)(*(long *)(param_1 + 2) - *(long *)param_1);
  uVar14 = ((long)puVar29 >> 3) + 1;
  if (uVar14 >> 0x3d == 0) {
    uVar13 = *(long *)(param_1 + 4) - *(long *)param_1;
    uVar18 = (long)uVar13 >> 2;
    if (uVar18 <= uVar14) {
      uVar18 = uVar14;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar18 = 0x1fffffffffffffff;
    }
    puVar11 = param_1;
    puStack_38 = param_1;
    FUN_1092c61ac();
    plStack_50 = (long *)((long)puVar11 + (long)puVar29);
    puStack_40 = puVar11 + uVar18 * 2;
    plStack_48 = plStack_50 + 1;
    *plStack_50 = *(long *)param_2;
    puStack_58 = puVar11;
    FUN_1092c79f4(param_1,&puStack_58);
    puVar29 = *(uint **)(param_1 + 2);
    if (plStack_48 != plStack_50) {
      plStack_48 = (long *)((long)plStack_48 +
                           ((ulong)((long)plStack_50 + (7 - (long)plStack_48)) & 0xfffffffffffffff8)
                           );
    }
    if (puStack_58 != (uint *)0x0) {
      __ZdlPv();
    }
    return puVar29;
  }
  FUN_1092c6198();
  if (plStack_48 != plStack_50) {
    plStack_48 = (long *)((long)plStack_48 +
                         (((long)plStack_50 - (long)plStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (puStack_58 != (uint *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  ppppppuVar8 = &ppppppuStack_70;
  pcStack_68 = FUN_1092e789c;
  puVar11 = (uint *)&DAT_10f62a4d8;
  ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_78 = FUN_1092e78b0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar11;
  puVar15 = param_2;
  puVar31 = param_3;
  puVar32 = param_4;
  pppppppuStack_80 = &ppppppuStack_70;
  do {
    puVar30 = puVar15 + -5;
    puVar33 = puVar15 + -10;
    puStack_150 = puVar15 + -9;
    puStack_148 = puVar15 + -4;
    puVar34 = puVar15 + -0xf;
    puStack_158 = puVar15 + -0xe;
    puVar24 = puVar10;
LAB_1092e7914:
    puVar10 = puVar24;
    uVar18 = (long)puVar15 - (long)puVar10;
    uVar14 = ((long)uVar18 >> 2) * -0x3333333333333333;
    puVar12 = puVar15;
    if (uVar14 - 2 != 0 && 1 < (long)uVar14) {
      if (uVar14 == 3) {
        puVar29 = puVar10 + 5;
        uVar20 = *puVar29;
        puVar32 = puVar15 + -5;
        uVar27 = *puVar10;
        if ((int)uVar27 < (int)uVar20) {
          if ((int)uVar20 < (int)*puVar32) {
            lStack_108 = *(long *)(puVar10 + 3);
            uStack_110 = *(long *)(puVar10 + 1);
            lVar16 = *(long *)(puVar15 + -3);
            lVar23 = *(long *)puVar32;
            puVar10[4] = puVar15[-1];
            *(long *)(puVar10 + 2) = lVar16;
            *(long *)puVar10 = lVar23;
          }
          else {
            lStack_108 = *(long *)(puVar10 + 3);
            uStack_110 = *(long *)(puVar10 + 1);
            *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
            *(long *)puVar10 = *(long *)puVar29;
            puVar10[4] = puVar10[9];
            puVar10[5] = uVar27;
            *(long *)(puVar10 + 8) = lStack_108;
            *(long *)(puVar10 + 6) = uStack_110;
            if ((int)*puVar32 <= (int)uVar27) break;
            lStack_108 = *(long *)(puVar10 + 8);
            uStack_110 = *(long *)(puVar10 + 6);
            uVar37 = *(undefined8 *)(puVar15 + -3);
            lVar23 = *(long *)puVar32;
            puVar10[9] = puVar15[-1];
            *(undefined8 *)(puVar10 + 7) = uVar37;
            *(long *)puVar29 = lVar23;
          }
          puVar15[-5] = uVar27;
          goto LAB_1092e862c;
        }
        if ((int)*puVar32 <= (int)uVar20) break;
        lStack_108 = *(long *)(puVar10 + 8);
        uStack_110 = *(long *)(puVar10 + 6);
        uVar37 = *(undefined8 *)(puVar15 + -3);
        lVar23 = *(long *)puVar32;
        puVar10[9] = puVar15[-1];
        *(undefined8 *)(puVar10 + 7) = uVar37;
        *(long *)puVar29 = lVar23;
        puVar15[-5] = uVar20;
        *(long *)(puVar15 + -2) = lStack_108;
        *(long *)(puVar15 + -4) = uStack_110;
      }
      else {
        if (uVar14 != 4) {
          if (uVar14 != 5) goto LAB_1092e795c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) goto LAB_1092e8744;
          param_2 = puVar10 + 5;
          param_3 = puVar10 + 10;
          param_4 = puVar10 + 0xf;
          param_5 = puVar30;
          pppppppuVar35 = pppppppuStack_80;
          pcVar36 = pcStack_78;
          goto code_r0x0001092e8748;
        }
        puVar29 = puVar10 + 5;
        uVar20 = *puVar29;
        puVar32 = puVar10 + 10;
        uVar17 = *puVar32;
        uVar27 = *puVar10;
        if ((int)uVar27 < (int)uVar20) {
          if ((int)uVar20 < (int)uVar17) {
            lVar16 = *(long *)(puVar10 + 3);
            lVar23 = *(long *)(puVar10 + 1);
            *(long *)(puVar10 + 2) = *(long *)(puVar10 + 0xc);
            *(long *)puVar10 = *(long *)puVar32;
            puVar10[4] = puVar10[0xe];
            puVar10[10] = uVar27;
            uStack_110 = lVar23;
            lStack_108 = lVar16;
          }
          else {
            lStack_108 = *(long *)(puVar10 + 3);
            uStack_110 = *(long *)(puVar10 + 1);
            *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
            *(long *)puVar10 = *(long *)puVar29;
            puVar10[4] = puVar10[9];
            puVar10[5] = uVar27;
            *(long *)(puVar10 + 8) = lStack_108;
            *(long *)(puVar10 + 6) = uStack_110;
            if ((int)uVar17 <= (int)uVar27) goto LAB_1092e8680;
            lVar16 = *(long *)(puVar10 + 8);
            lVar23 = *(long *)(puVar10 + 6);
            *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
            *(long *)puVar29 = *(long *)puVar32;
            puVar10[9] = puVar10[0xe];
            puVar10[10] = uVar27;
          }
          *(long *)(puVar10 + 0xd) = lVar16;
          *(long *)(puVar10 + 0xb) = lVar23;
          uVar17 = uVar27;
        }
        else if ((int)uVar20 < (int)uVar17) {
          *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
          *(long *)puVar29 = *(long *)puVar32;
          puVar10[9] = puVar10[0xe];
          puVar10[10] = uVar20;
          *(long *)(puVar10 + 0xd) = *(long *)(puVar10 + 8);
          *(long *)(puVar10 + 0xb) = *(long *)(puVar10 + 6);
          uVar27 = *puVar10;
          uVar17 = uVar20;
          if ((int)uVar27 < (int)puVar10[5]) {
            lStack_108 = *(long *)(puVar10 + 3);
            uStack_110 = *(long *)(puVar10 + 1);
            *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
            *(long *)puVar10 = *(long *)puVar29;
            puVar10[4] = puVar10[9];
            puVar10[5] = uVar27;
            *(long *)(puVar10 + 8) = lStack_108;
            *(long *)(puVar10 + 6) = uStack_110;
          }
        }
LAB_1092e8680:
        if ((int)*puVar30 <= (int)uVar17) break;
        lStack_108 = *(long *)(puVar10 + 0xd);
        uStack_110 = *(long *)(puVar10 + 0xb);
        lVar16 = *(long *)(puVar15 + -3);
        lVar23 = *(long *)puVar30;
        puVar10[0xe] = puVar15[-1];
        *(long *)(puVar10 + 0xc) = lVar16;
        *(long *)puVar32 = lVar23;
        puVar15[-5] = uVar17;
        *(long *)(puVar15 + -2) = lStack_108;
        *(long *)(puVar15 + -4) = uStack_110;
        uVar27 = puVar10[5];
        if ((int)puVar10[10] <= (int)uVar27) break;
        *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
        *(long *)puVar29 = *(long *)puVar32;
        puVar10[9] = puVar10[0xe];
        puVar10[10] = uVar27;
        *(long *)(puVar10 + 0xd) = *(long *)(puVar10 + 8);
        *(long *)(puVar10 + 0xb) = *(long *)(puVar10 + 6);
      }
      uVar27 = *puVar10;
      if ((int)uVar27 < (int)puVar10[5]) {
        lStack_108 = *(long *)(puVar10 + 3);
        uStack_110 = *(long *)(puVar10 + 1);
        *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
        *(long *)puVar10 = *(long *)(puVar10 + 5);
        puVar10[4] = puVar10[9];
        puVar10[5] = uVar27;
        *(long *)(puVar10 + 8) = lStack_108;
        *(long *)(puVar10 + 6) = uStack_110;
      }
      break;
    }
    if (uVar14 < 2) break;
    if (uVar14 == 2) {
      uVar27 = *puVar10;
      if ((int)uVar27 < (int)puVar15[-5]) {
        lStack_108 = *(long *)(puVar10 + 3);
        uStack_110 = *(long *)(puVar10 + 1);
        lVar16 = *(long *)(puVar15 + -3);
        lVar23 = *(long *)(puVar15 + -5);
        puVar10[4] = puVar15[-1];
        *(long *)(puVar10 + 2) = lVar16;
        *(long *)puVar10 = lVar23;
        puVar15[-5] = uVar27;
LAB_1092e862c:
        *(long *)(puVar15 + -2) = lStack_108;
        *(long *)(puVar15 + -4) = uStack_110;
      }
      break;
    }
LAB_1092e795c:
    if ((long)uVar18 < 0x1e0) {
      if (((ulong)puVar32 & 1) == 0) {
        puVar29 = puVar10;
        if (puVar10 != puVar15) {
          while (puVar29 = puVar29 + 5, puVar29 != puVar15) {
            uVar27 = *puVar29;
            if ((int)*puVar10 < (int)uVar27) {
              lVar23 = 0;
              uStack_110._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar27);
              do {
                *(undefined4 *)((long)&uStack_110 + lVar23 + 4) =
                     *(undefined4 *)((long)puVar10 + lVar23 + 0x18);
                lVar23 = lVar23 + 4;
                puVar32 = puVar29;
              } while (lVar23 != 0x10);
              do {
                puVar24 = puVar32;
                *(long *)(puVar24 + 2) = *(long *)(puVar24 + -3);
                *(long *)puVar24 = *(long *)(puVar24 + -5);
                puVar24[4] = puVar24[-1];
                puVar32 = puVar24 + -5;
              } while ((int)puVar24[-10] < (int)uVar27);
              puVar24[-1] = uStack_100;
              *(long *)(puVar24 + -3) = lStack_108;
              *(long *)(puVar24 + -5) = uStack_110;
            }
            puVar10 = puVar10 + 5;
          }
        }
        break;
      }
      if ((puVar10 == puVar15) || (puVar29 = puVar10 + 5, puVar29 == puVar15)) break;
      lVar23 = 0;
      puVar32 = puVar10;
      goto LAB_1092e81e8;
    }
    if (puVar31 == (uint *)0x0) {
      if (puVar10 == puVar15) break;
      uVar19 = uVar14 - 2 >> 1;
      uVar13 = uVar19;
      goto LAB_1092e8294;
    }
    puVar24 = puVar10 + (uVar14 >> 1) * 5;
    uVar27 = *puVar30;
    if (uVar18 < 0xa01) {
      uVar20 = *puVar10;
      uVar17 = *puVar24;
      if ((int)uVar17 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar27) {
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          lVar16 = *(long *)(puVar15 + -3);
          lVar23 = *(long *)puVar30;
          puVar24[4] = puVar15[-1];
          *(long *)(puVar24 + 2) = lVar16;
          *(long *)puVar24 = lVar23;
        }
        else {
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          lVar16 = *(long *)(puVar10 + 2);
          lVar23 = *(long *)puVar10;
          puVar24[4] = puVar10[4];
          *(long *)(puVar24 + 2) = lVar16;
          *(long *)puVar24 = lVar23;
          *puVar10 = uVar17;
          *(long *)(puVar10 + 3) = lStack_108;
          *(long *)(puVar10 + 1) = uStack_110;
          if ((int)*puVar30 <= (int)uVar17) goto LAB_1092e7e88;
          lStack_108 = *(long *)(puVar10 + 3);
          uStack_110 = *(long *)(puVar10 + 1);
          lVar16 = *(long *)(puVar15 + -3);
          lVar23 = *(long *)puVar30;
          puVar10[4] = puVar15[-1];
          *(long *)(puVar10 + 2) = lVar16;
          *(long *)puVar10 = lVar23;
        }
        *puVar30 = uVar17;
        *(long *)(puStack_148 + 2) = lStack_108;
        *(long *)puStack_148 = uStack_110;
      }
      else if ((int)uVar20 < (int)uVar27) {
        lStack_108 = *(long *)(puVar10 + 3);
        uStack_110 = *(long *)(puVar10 + 1);
        lVar16 = *(long *)(puVar15 + -3);
        lVar23 = *(long *)puVar30;
        puVar10[4] = puVar15[-1];
        *(long *)(puVar10 + 2) = lVar16;
        *(long *)puVar10 = lVar23;
        *puVar30 = uVar20;
        *(long *)(puStack_148 + 2) = lStack_108;
        *(long *)puStack_148 = uStack_110;
        uVar27 = *puVar24;
        if ((int)uVar27 < (int)*puVar10) {
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          lVar16 = *(long *)(puVar10 + 2);
          lVar23 = *(long *)puVar10;
          puVar24[4] = puVar10[4];
          *(long *)(puVar24 + 2) = lVar16;
          *(long *)puVar24 = lVar23;
          *puVar10 = uVar27;
          *(long *)(puVar10 + 3) = lStack_108;
          *(long *)(puVar10 + 1) = uStack_110;
        }
      }
    }
    else {
      uVar20 = *puVar24;
      uVar17 = *puVar10;
      if ((int)uVar17 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar27) {
          lStack_108 = *(long *)(puVar10 + 3);
          uStack_110 = *(long *)(puVar10 + 1);
          lVar16 = *(long *)(puVar15 + -3);
          lVar23 = *(long *)puVar30;
          puVar10[4] = puVar15[-1];
          *(long *)(puVar10 + 2) = lVar16;
          *(long *)puVar10 = lVar23;
        }
        else {
          uVar40 = *(undefined8 *)(puVar10 + 3);
          uVar37 = *(undefined8 *)(puVar10 + 1);
          lVar16 = *(long *)(puVar24 + 2);
          lVar23 = *(long *)puVar24;
          puVar10[4] = puVar24[4];
          *(long *)(puVar10 + 2) = lVar16;
          *(long *)puVar10 = lVar23;
          *puVar24 = uVar17;
          *(undefined8 *)(puVar24 + 3) = uVar40;
          *(undefined8 *)(puVar24 + 1) = uVar37;
          if ((int)*puVar30 <= (int)uVar17) goto LAB_1092e7b10;
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          lVar16 = *(long *)(puVar15 + -3);
          lVar23 = *(long *)puVar30;
          puVar24[4] = puVar15[-1];
          *(long *)(puVar24 + 2) = lVar16;
          *(long *)puVar24 = lVar23;
        }
        *puVar30 = uVar17;
        *(long *)(puStack_148 + 2) = lStack_108;
        *(long *)puStack_148 = uStack_110;
      }
      else if ((int)uVar20 < (int)uVar27) {
        lVar38 = *(long *)(puVar24 + 3);
        lVar23 = *(long *)(puVar24 + 1);
        lVar39 = *(long *)(puVar15 + -3);
        lVar16 = *(long *)puVar30;
        puVar24[4] = puVar15[-1];
        *(long *)(puVar24 + 2) = lVar39;
        *(long *)puVar24 = lVar16;
        *puVar30 = uVar20;
        *(long *)(puStack_148 + 2) = lVar38;
        *(long *)puStack_148 = lVar23;
        uVar27 = *puVar10;
        if ((int)uVar27 < (int)*puVar24) {
          uVar40 = *(undefined8 *)(puVar10 + 3);
          uVar37 = *(undefined8 *)(puVar10 + 1);
          lVar16 = *(long *)(puVar24 + 2);
          lVar23 = *(long *)puVar24;
          puVar10[4] = puVar24[4];
          *(long *)(puVar10 + 2) = lVar16;
          *(long *)puVar10 = lVar23;
          *puVar24 = uVar27;
          *(undefined8 *)(puVar24 + 3) = uVar40;
          *(undefined8 *)(puVar24 + 1) = uVar37;
        }
      }
LAB_1092e7b10:
      puVar9 = puVar10 + 5;
      uVar27 = *puVar9;
      puVar12 = puVar24 + -5;
      uVar20 = *puVar12;
      if ((int)uVar27 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar33) {
          lStack_108 = *(long *)(puVar10 + 8);
          uStack_110 = *(long *)(puVar10 + 6);
          lVar16 = *(long *)(puVar15 + -8);
          lVar23 = *(long *)puVar33;
          puVar10[9] = puVar15[-6];
          *(long *)(puVar10 + 7) = lVar16;
          *(long *)puVar9 = lVar23;
        }
        else {
          lVar38 = *(long *)(puVar10 + 8);
          lVar23 = *(long *)(puVar10 + 6);
          uVar37 = *(undefined8 *)(puVar24 + -3);
          lVar16 = *(long *)puVar12;
          puVar10[9] = puVar24[-1];
          *(undefined8 *)(puVar10 + 7) = uVar37;
          *(long *)puVar9 = lVar16;
          puVar24[-5] = uVar27;
          *(long *)(puVar24 + -2) = lVar38;
          *(long *)(puVar24 + -4) = lVar23;
          if ((int)*puVar33 <= (int)uVar27) goto LAB_1092e7c74;
          lStack_108 = *(long *)(puVar24 + -2);
          uStack_110 = *(long *)(puVar24 + -4);
          lVar16 = *(long *)(puVar15 + -8);
          lVar23 = *(long *)puVar33;
          puVar24[-1] = puVar15[-6];
          *(long *)(puVar24 + -3) = lVar16;
          *(long *)puVar12 = lVar23;
        }
        *puVar33 = uVar27;
        *(long *)(puStack_150 + 2) = lStack_108;
        *(long *)puStack_150 = uStack_110;
      }
      else if ((int)uVar20 < (int)*puVar33) {
        lVar38 = *(long *)(puVar24 + -2);
        lVar23 = *(long *)(puVar24 + -4);
        lVar39 = *(long *)(puVar15 + -8);
        lVar16 = *(long *)puVar33;
        puVar24[-1] = puVar15[-6];
        *(long *)(puVar24 + -3) = lVar39;
        *(long *)puVar12 = lVar16;
        *puVar33 = uVar20;
        *(long *)(puStack_150 + 2) = lVar38;
        *(long *)puStack_150 = lVar23;
        uVar27 = *puVar9;
        if ((int)uVar27 < (int)puVar24[-5]) {
          lVar38 = *(long *)(puVar10 + 8);
          lVar23 = *(long *)(puVar10 + 6);
          uVar37 = *(undefined8 *)(puVar24 + -3);
          lVar16 = *(long *)puVar12;
          puVar10[9] = puVar24[-1];
          *(undefined8 *)(puVar10 + 7) = uVar37;
          *(long *)puVar9 = lVar16;
          *puVar12 = uVar27;
          *(long *)(puVar24 + -2) = lVar38;
          *(long *)(puVar24 + -4) = lVar23;
        }
      }
LAB_1092e7c74:
      puVar21 = puVar10 + 10;
      uVar27 = *puVar21;
      puVar9 = puVar24 + 5;
      uVar20 = *puVar9;
      if ((int)uVar27 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar34) {
          lStack_108 = *(long *)(puVar10 + 0xd);
          uStack_110 = *(long *)(puVar10 + 0xb);
          lVar16 = *(long *)(puVar15 + -0xd);
          lVar23 = *(long *)puVar34;
          puVar10[0xe] = puVar15[-0xb];
          *(long *)(puVar10 + 0xc) = lVar16;
          *(long *)puVar21 = lVar23;
        }
        else {
          lVar38 = *(long *)(puVar10 + 0xd);
          lVar23 = *(long *)(puVar10 + 0xb);
          lVar39 = *(long *)(puVar24 + 7);
          lVar16 = *(long *)puVar9;
          puVar10[0xe] = puVar24[9];
          *(long *)(puVar10 + 0xc) = lVar39;
          *(long *)puVar21 = lVar16;
          puVar24[5] = uVar27;
          *(long *)(puVar24 + 8) = lVar38;
          *(long *)(puVar24 + 6) = lVar23;
          if ((int)*puVar34 <= (int)uVar27) goto LAB_1092e7d74;
          lStack_108 = *(long *)(puVar24 + 8);
          uStack_110 = *(long *)(puVar24 + 6);
          uVar37 = *(undefined8 *)(puVar15 + -0xd);
          lVar23 = *(long *)puVar34;
          puVar24[9] = puVar15[-0xb];
          *(undefined8 *)(puVar24 + 7) = uVar37;
          *(long *)puVar9 = lVar23;
        }
        *puVar34 = uVar27;
        *(long *)(puStack_158 + 2) = lStack_108;
        *(long *)puStack_158 = uStack_110;
      }
      else if ((int)uVar20 < (int)*puVar34) {
        lVar38 = *(long *)(puVar24 + 8);
        lVar23 = *(long *)(puVar24 + 6);
        uVar37 = *(undefined8 *)(puVar15 + -0xd);
        lVar16 = *(long *)puVar34;
        puVar24[9] = puVar15[-0xb];
        *(undefined8 *)(puVar24 + 7) = uVar37;
        *(long *)puVar9 = lVar16;
        *puVar34 = uVar20;
        *(long *)(puStack_158 + 2) = lVar38;
        *(long *)puStack_158 = lVar23;
        uVar27 = *puVar21;
        if ((int)uVar27 < (int)puVar24[5]) {
          lVar38 = *(long *)(puVar10 + 0xd);
          lVar23 = *(long *)(puVar10 + 0xb);
          lVar39 = *(long *)(puVar24 + 7);
          lVar16 = *(long *)puVar9;
          puVar10[0xe] = puVar24[9];
          *(long *)(puVar10 + 0xc) = lVar39;
          *(long *)puVar21 = lVar16;
          *puVar9 = uVar27;
          *(long *)(puVar24 + 8) = lVar38;
          *(long *)(puVar24 + 6) = lVar23;
        }
      }
LAB_1092e7d74:
      uVar27 = *puVar24;
      uVar20 = puVar24[-5];
      if ((int)uVar20 < (int)uVar27) {
        if ((int)uVar27 < (int)puVar24[5]) {
          lStack_108 = *(long *)(puVar24 + -2);
          uStack_110 = *(long *)(puVar24 + -4);
          *(undefined8 *)(puVar24 + -3) = *(undefined8 *)(puVar24 + 7);
          *(long *)puVar12 = *(long *)puVar9;
          puVar24[-1] = puVar24[9];
        }
        else {
          *(long *)(puVar24 + -3) = *(long *)(puVar24 + 2);
          *(long *)puVar12 = *(long *)puVar24;
          puVar24[-1] = puVar24[4];
          *puVar24 = uVar20;
          *(long *)(puVar24 + 3) = *(long *)(puVar24 + -2);
          *(long *)(puVar24 + 1) = *(long *)(puVar24 + -4);
          if ((int)puVar24[5] <= (int)uVar20) goto LAB_1092e7e60;
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          *(long *)(puVar24 + 2) = *(long *)(puVar24 + 7);
          *(long *)puVar24 = *(long *)puVar9;
          puVar24[4] = puVar24[9];
        }
        puVar24[5] = uVar20;
        *(long *)(puVar24 + 8) = lStack_108;
        *(long *)(puVar24 + 6) = uStack_110;
      }
      else if ((int)uVar27 < (int)puVar24[5]) {
        *(long *)(puVar24 + 2) = *(long *)(puVar24 + 7);
        *(long *)puVar24 = *(long *)puVar9;
        puVar24[4] = puVar24[9];
        puVar24[5] = uVar27;
        *(long *)(puVar24 + 8) = *(long *)(puVar24 + 3);
        *(long *)(puVar24 + 6) = *(long *)(puVar24 + 1);
        uVar27 = puVar24[-5];
        if ((int)uVar27 < (int)*puVar24) {
          *(long *)(puVar24 + -3) = *(long *)(puVar24 + 2);
          *(long *)puVar12 = *(long *)puVar24;
          puVar24[-1] = puVar24[4];
          *puVar24 = uVar27;
          *(long *)(puVar24 + 3) = *(long *)(puVar24 + -2);
          *(long *)(puVar24 + 1) = *(long *)(puVar24 + -4);
        }
      }
LAB_1092e7e60:
      uVar27 = *puVar10;
      lStack_108 = *(long *)(puVar10 + 3);
      uStack_110 = *(long *)(puVar10 + 1);
      lVar16 = *(long *)(puVar24 + 2);
      lVar23 = *(long *)puVar24;
      puVar10[4] = puVar24[4];
      *(long *)(puVar10 + 2) = lVar16;
      *(long *)puVar10 = lVar23;
      *puVar24 = uVar27;
      *(long *)(puVar24 + 3) = lStack_108;
      *(long *)(puVar24 + 1) = uStack_110;
    }
LAB_1092e7e88:
    puVar31 = (uint *)((long)puVar31 + -1);
    uVar27 = *puVar10;
    if ((((ulong)puVar32 & 1) == 0) && ((int)puVar10[-5] <= (int)uVar27)) {
      lStack_e8 = *(long *)(puVar10 + 3);
      lStack_f0 = *(long *)(puVar10 + 1);
      puVar24 = puVar10;
      if ((int)*puVar30 < (int)uVar27) {
        do {
          puVar24 = puVar24 + 5;
        } while ((int)uVar27 <= (int)*puVar24);
      }
      else {
        do {
          puVar24 = puVar24 + 5;
          if (puVar15 <= puVar24) break;
        } while ((int)uVar27 <= (int)*puVar24);
      }
      puVar32 = puVar15;
      if (puVar24 < puVar15) {
        do {
          puVar32 = puVar32 + -5;
        } while ((int)*puVar32 < (int)uVar27);
      }
      if (puVar24 < puVar32) {
        uVar20 = *puVar24;
        do {
          lStack_108 = *(long *)(puVar24 + 3);
          uStack_110 = *(long *)(puVar24 + 1);
          lVar16 = *(long *)(puVar32 + 2);
          lVar23 = *(long *)puVar32;
          puVar24[4] = puVar32[4];
          *(long *)(puVar24 + 2) = lVar16;
          *(long *)puVar24 = lVar23;
          *puVar32 = uVar20;
          *(long *)(puVar32 + 3) = lStack_108;
          *(long *)(puVar32 + 1) = uStack_110;
          do {
            puVar24 = puVar24 + 5;
            uVar20 = *puVar24;
          } while ((int)uVar27 <= (int)uVar20);
          do {
            puVar32 = puVar32 + -5;
          } while ((int)*puVar32 < (int)uVar27);
        } while (puVar24 < puVar32);
      }
      if (puVar24 + -5 != puVar10) {
        lVar16 = *(long *)(puVar24 + -3);
        lVar23 = *(long *)(puVar24 + -5);
        puVar10[4] = puVar24[-1];
        *(long *)(puVar10 + 2) = lVar16;
        *(long *)puVar10 = lVar23;
      }
      puVar32 = (uint *)0x0;
      puVar24[-5] = uVar27;
      *(long *)(puVar24 + -2) = lStack_e8;
      *(long *)(puVar24 + -4) = lStack_f0;
      goto LAB_1092e7914;
    }
    lVar23 = 0;
    lStack_e8 = *(long *)(puVar10 + 3);
    lStack_f0 = *(long *)(puVar10 + 1);
    do {
      uVar20 = *(uint *)((long)puVar10 + lVar23 + 0x14);
      lVar23 = lVar23 + 0x14;
    } while ((int)uVar27 < (int)uVar20);
    puVar11 = (uint *)((long)puVar10 + lVar23);
    puVar9 = puVar15;
    if (lVar23 == 0x14) {
      do {
        if (puVar9 <= puVar11) break;
        puVar9 = puVar9 + -5;
      } while ((int)*puVar9 <= (int)uVar27);
    }
    else {
      do {
        puVar9 = puVar9 + -5;
      } while ((int)*puVar9 <= (int)uVar27);
    }
    puVar24 = puVar11;
    puVar12 = puVar9;
    if (puVar11 < puVar9) {
      do {
        lStack_108 = *(long *)(puVar24 + 3);
        uStack_110 = *(long *)(puVar24 + 1);
        lVar16 = *(long *)(puVar12 + 2);
        lVar23 = *(long *)puVar12;
        puVar24[4] = puVar12[4];
        *(long *)(puVar24 + 2) = lVar16;
        *(long *)puVar24 = lVar23;
        *puVar12 = uVar20;
        *(long *)(puVar12 + 3) = lStack_108;
        *(long *)(puVar12 + 1) = uStack_110;
        do {
          puVar24 = puVar24 + 5;
          uVar20 = *puVar24;
        } while ((int)uVar27 < (int)uVar20);
        do {
          puVar12 = puVar12 + -5;
        } while ((int)*puVar12 <= (int)uVar27);
      } while (puVar24 < puVar12);
    }
    puVar12 = puVar24 + -5;
    if (puVar12 != puVar10) {
      lVar16 = *(long *)(puVar24 + -3);
      lVar23 = *(long *)puVar12;
      puVar10[4] = puVar24[-1];
      *(long *)(puVar10 + 2) = lVar16;
      *(long *)puVar10 = lVar23;
    }
    *puVar12 = uVar27;
    *(long *)(puVar24 + -2) = lStack_e8;
    *(long *)(puVar24 + -4) = lStack_f0;
    if (puVar11 < puVar9) goto LAB_1092e7fac;
    puVar9 = puVar10;
    FUN_1092e8994(puVar10,puVar12);
    puVar11 = puVar24;
    param_2 = puVar15;
    FUN_1092e8994();
    if ((int)puVar11 == 0) goto code_r0x0001092e7fa8;
    puVar15 = puVar12;
  } while (((ulong)puVar9 & 1) == 0);
  goto LAB_1092e870c;
LAB_1092e81e8:
  do {
    uVar27 = *puVar29;
    if ((int)*puVar32 < (int)uVar27) {
      lVar16 = 0;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar27);
      do {
        *(undefined4 *)((long)&uStack_110 + lVar16 + 4) =
             *(undefined4 *)((long)puVar32 + lVar16 + 0x18);
        lVar16 = lVar16 + 4;
        lVar38 = lVar23;
      } while (lVar16 != 0x10);
      do {
        lVar16 = lVar38;
        puVar2 = (undefined8 *)((long)puVar10 + lVar16);
        *(undefined8 *)((long)puVar2 + 0x1c) = puVar2[1];
        *(undefined8 *)((long)puVar2 + 0x14) = *puVar2;
        *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar2 + 2);
        puVar24 = puVar10;
        if (lVar16 == 0) goto LAB_1092e8258;
        lVar38 = lVar16 + -0x14;
      } while (*(int *)((long)puVar2 + -0x14) < (int)uVar27);
      puVar24 = (uint *)((long)puVar10 + lVar16);
LAB_1092e8258:
      puVar24[4] = uStack_100;
      *(long *)(puVar24 + 2) = lStack_108;
      *(long *)puVar24 = uStack_110;
    }
    puVar29 = puVar29 + 5;
    puVar32 = puVar32 + 5;
    lVar23 = lVar23 + 0x14;
  } while (puVar29 != puVar15);
  goto LAB_1092e870c;
code_r0x0001092e7fa8:
  if (((ulong)puVar9 & 1) == 0) {
LAB_1092e7fac:
    param_4 = (uint *)(ulong)((uint)puVar32 & 1);
    param_3 = puVar31;
    FUN_1092e78b0();
    puVar32 = (uint *)0x0;
    puVar11 = puVar10;
    param_2 = puVar12;
  }
  goto LAB_1092e7914;
LAB_1092e8294:
  do {
    if ((long)uVar13 <= (long)uVar19) {
      uVar3 = uVar13 << 1 | 1;
      puVar29 = puVar10 + uVar3 * 5;
      uVar26 = uVar13 * 2 + 2;
      if ((long)uVar26 < (long)uVar14) {
        uVar20 = *puVar29;
        uVar17 = puVar29[5];
        uVar27 = uVar20;
        if ((int)uVar17 <= (int)uVar20) {
          uVar27 = uVar17;
        }
        puVar11 = puVar29 + 5;
        if ((int)uVar20 <= (int)uVar17) {
          puVar11 = puVar29;
          uVar26 = uVar3;
        }
      }
      else {
        uVar27 = *puVar29;
        puVar11 = puVar29;
        uVar26 = uVar3;
      }
      puVar29 = puVar10 + uVar13 * 5;
      uVar20 = *puVar29;
      if ((int)uVar27 <= (int)uVar20) {
        lStack_108 = *(long *)(puVar29 + 3);
        uStack_110 = *(long *)(puVar29 + 1);
        do {
          puVar32 = puVar11;
          uVar40 = *(undefined8 *)(puVar32 + 2);
          uVar37 = *(undefined8 *)puVar32;
          puVar29[4] = puVar32[4];
          *(undefined8 *)(puVar29 + 2) = uVar40;
          *(undefined8 *)puVar29 = uVar37;
          if ((long)uVar19 < (long)uVar26) break;
          uVar3 = uVar26 << 1 | 1;
          puVar29 = puVar10 + uVar3 * 5;
          uVar26 = uVar26 * 2 + 2;
          if ((long)uVar26 < (long)uVar14) {
            uVar17 = *puVar29;
            uVar7 = puVar29[5];
            uVar27 = uVar17;
            if ((int)uVar7 <= (int)uVar17) {
              uVar27 = uVar7;
            }
            puVar11 = puVar29 + 5;
            if ((int)uVar17 <= (int)uVar7) {
              puVar11 = puVar29;
              uVar26 = uVar3;
            }
          }
          else {
            uVar27 = *puVar29;
            puVar11 = puVar29;
            uVar26 = uVar3;
          }
          puVar29 = puVar32;
        } while ((int)uVar27 <= (int)uVar20);
        *puVar32 = uVar20;
        *(long *)(puVar32 + 3) = lStack_108;
        *(long *)(puVar32 + 1) = uStack_110;
      }
    }
    bVar5 = uVar13 != 0;
    uVar13 = uVar13 - 1;
  } while (bVar5);
  lVar23 = (uVar18 >> 2) * -0x3333333333333333;
  do {
    puVar28 = (undefined *)0x0;
    uVar27 = *puVar10;
    lStack_e8 = *(long *)(puVar10 + 3);
    lStack_f0 = *(long *)(puVar10 + 1);
    puVar29 = puVar10;
    do {
      puVar11 = puVar29 + (long)puVar28 * 5;
      param_3 = (uint *)((long)puVar28 * 2);
      puVar4 = (undefined *)((long)puVar28 << 1 | 1);
      puVar1 = (undefined *)((long)param_3 + 2);
      param_2 = puVar11;
      puVar32 = puVar11 + 5;
      puVar28 = puVar4;
      if ((long)puVar1 < lVar23) {
        param_2 = puVar11 + 10;
        param_3 = (uint *)(ulong)*param_2;
        param_4 = (uint *)(ulong)puVar11[5];
        puVar32 = param_2;
        puVar28 = puVar1;
        if ((int)puVar11[5] <= (int)*param_2) {
          puVar32 = puVar11 + 5;
          puVar28 = puVar4;
        }
      }
      lVar38 = *(long *)(puVar32 + 2);
      lVar16 = *(long *)puVar32;
      puVar11 = (uint *)(ulong)puVar32[4];
      puVar29[4] = puVar32[4];
      *(long *)(puVar29 + 2) = lVar38;
      *(long *)puVar29 = lVar16;
      puVar29 = puVar32;
    } while ((long)puVar28 <= (long)(lVar23 - 2U >> 1));
    puVar12 = puVar15 + -5;
    if (puVar32 == puVar12) {
      *puVar32 = uVar27;
      *(long *)(puVar32 + 3) = lStack_e8;
      *(long *)(puVar32 + 1) = lStack_f0;
    }
    else {
      lVar38 = *(long *)(puVar15 + -3);
      lVar16 = *(long *)puVar12;
      puVar32[4] = puVar15[-1];
      *(long *)(puVar32 + 2) = lVar38;
      *(long *)puVar32 = lVar16;
      puVar15[-5] = uVar27;
      *(long *)(puVar15 + -2) = lStack_e8;
      *(long *)(puVar15 + -4) = lStack_f0;
      puVar28 = (undefined *)((long)puVar32 + (0x14 - (long)puVar10));
      if (0x14 < (long)puVar28) {
        uVar14 = ((ulong)puVar28 >> 2) * -0x3333333333333333 - 2 >> 1;
        uVar27 = *puVar32;
        if ((int)uVar27 < (int)puVar10[uVar14 * 5]) {
          lStack_108 = *(long *)(puVar32 + 3);
          uStack_110 = *(long *)(puVar32 + 1);
          puVar29 = puVar10 + uVar14 * 5;
          do {
            puVar15 = puVar29;
            lVar38 = *(long *)(puVar15 + 2);
            lVar16 = *(long *)puVar15;
            puVar32[4] = puVar15[4];
            *(long *)(puVar32 + 2) = lVar38;
            *(long *)puVar32 = lVar16;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar32 = puVar15;
            puVar29 = puVar10 + uVar14 * 5;
          } while ((int)uVar27 < (int)puVar10[uVar14 * 5]);
          *puVar15 = uVar27;
          *(long *)(puVar15 + 3) = lStack_108;
          *(long *)(puVar15 + 1) = uStack_110;
        }
      }
    }
    bVar5 = 2 < lVar23;
    lVar23 = lVar23 + -1;
    puVar15 = puVar12;
  } while (bVar5);
LAB_1092e870c:
  puVar15 = puVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar11;
  }
LAB_1092e8744:
  unaff_x22 = puVar31;
  unaff_x20 = puVar15;
  param_1 = puVar10;
  puVar10 = puVar11;
  ___stack_chk_fail();
  ppppppuVar8 = (undefined8 ******)auStack_160;
  puVar29 = puVar30;
  unaff_x27 = puVar33;
  unaff_x28 = puVar34;
  pppppppuVar35 = &pppppppuStack_80;
  pcVar36 = FUN_1092e8748;
code_r0x0001092e8748:
  *(undefined8 ********)((long)ppppppuVar8 + -0x10) = pppppppuVar35;
  *(code **)((long)ppppppuVar8 + -8) = pcVar36;
  *(undefined8 *)((long)ppppppuVar8 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = *param_2;
  uVar20 = *puVar10;
  uVar17 = *param_3;
  if ((int)uVar20 < (int)uVar27) {
    if ((int)uVar27 < (int)uVar17) {
      uVar40 = *(undefined8 *)(puVar10 + 3);
      uVar37 = *(undefined8 *)(puVar10 + 1);
      uVar27 = param_3[4];
      lVar23 = *(long *)param_3;
      *(long *)(puVar10 + 2) = *(long *)(param_3 + 2);
      *(long *)puVar10 = lVar23;
      puVar10[4] = uVar27;
    }
    else {
      uVar40 = *(undefined8 *)(puVar10 + 3);
      uVar37 = *(undefined8 *)(puVar10 + 1);
      uVar27 = param_2[4];
      lVar23 = *(long *)param_2;
      *(long *)(puVar10 + 2) = *(long *)(param_2 + 2);
      *(long *)puVar10 = lVar23;
      puVar10[4] = uVar27;
      *param_2 = uVar20;
      *(undefined8 *)(param_2 + 3) = uVar40;
      *(undefined8 *)(param_2 + 1) = uVar37;
      uVar17 = *param_3;
      if ((int)*param_3 <= (int)uVar20) goto LAB_1092e883c;
      uVar40 = *(undefined8 *)(param_2 + 3);
      uVar37 = *(undefined8 *)(param_2 + 1);
      uVar27 = param_3[4];
      lVar23 = *(long *)param_3;
      *(long *)(param_2 + 2) = *(long *)(param_3 + 2);
      *(long *)param_2 = lVar23;
      param_2[4] = uVar27;
    }
    *param_3 = uVar20;
    *(undefined8 *)(param_3 + 3) = uVar40;
    *(undefined8 *)(param_3 + 1) = uVar37;
    uVar17 = uVar20;
  }
  else if ((int)uVar27 < (int)uVar17) {
    uVar40 = *(undefined8 *)(param_2 + 3);
    uVar37 = *(undefined8 *)(param_2 + 1);
    uVar20 = param_3[4];
    lVar23 = *(long *)param_3;
    *(long *)(param_2 + 2) = *(long *)(param_3 + 2);
    *(long *)param_2 = lVar23;
    param_2[4] = uVar20;
    *param_3 = uVar27;
    *(undefined8 *)(param_3 + 3) = uVar40;
    *(undefined8 *)(param_3 + 1) = uVar37;
    uVar20 = *puVar10;
    uVar17 = uVar27;
    if ((int)uVar20 < (int)*param_2) {
      uVar40 = *(undefined8 *)(puVar10 + 3);
      uVar37 = *(undefined8 *)(puVar10 + 1);
      uVar27 = param_2[4];
      lVar23 = *(long *)param_2;
      *(long *)(puVar10 + 2) = *(long *)(param_2 + 2);
      *(long *)puVar10 = lVar23;
      puVar10[4] = uVar27;
      *param_2 = uVar20;
      *(undefined8 *)(param_2 + 3) = uVar40;
      *(undefined8 *)(param_2 + 1) = uVar37;
      uVar17 = *param_3;
    }
  }
LAB_1092e883c:
  if ((int)uVar17 < (int)*param_4) {
    uVar40 = *(undefined8 *)(param_3 + 3);
    uVar37 = *(undefined8 *)(param_3 + 1);
    uVar27 = param_4[4];
    lVar23 = *(long *)param_4;
    *(long *)(param_3 + 2) = *(long *)(param_4 + 2);
    *(long *)param_3 = lVar23;
    param_3[4] = uVar27;
    *param_4 = uVar17;
    *(undefined8 *)(param_4 + 3) = uVar40;
    *(undefined8 *)(param_4 + 1) = uVar37;
    uVar27 = *param_2;
    if ((int)uVar27 < (int)*param_3) {
      uVar40 = *(undefined8 *)(param_2 + 3);
      uVar37 = *(undefined8 *)(param_2 + 1);
      uVar20 = param_3[4];
      lVar23 = *(long *)param_3;
      *(long *)(param_2 + 2) = *(long *)(param_3 + 2);
      *(long *)param_2 = lVar23;
      param_2[4] = uVar20;
      *param_3 = uVar27;
      *(undefined8 *)(param_3 + 3) = uVar40;
      *(undefined8 *)(param_3 + 1) = uVar37;
      uVar27 = *puVar10;
      if ((int)uVar27 < (int)*param_2) {
        uVar40 = *(undefined8 *)(puVar10 + 3);
        uVar37 = *(undefined8 *)(puVar10 + 1);
        uVar20 = param_2[4];
        lVar23 = *(long *)param_2;
        *(long *)(puVar10 + 2) = *(long *)(param_2 + 2);
        *(long *)puVar10 = lVar23;
        puVar10[4] = uVar20;
        *param_2 = uVar27;
        *(undefined8 *)(param_2 + 3) = uVar40;
        *(undefined8 *)(param_2 + 1) = uVar37;
      }
    }
  }
  uVar27 = *param_4;
  if ((int)uVar27 < (int)*param_5) {
    uVar40 = *(undefined8 *)(param_4 + 3);
    uVar37 = *(undefined8 *)(param_4 + 1);
    uVar20 = param_5[4];
    lVar23 = *(long *)param_5;
    *(long *)(param_4 + 2) = *(long *)(param_5 + 2);
    *(long *)param_4 = lVar23;
    param_4[4] = uVar20;
    *param_5 = uVar27;
    *(undefined8 *)(param_5 + 3) = uVar40;
    *(undefined8 *)(param_5 + 1) = uVar37;
    uVar27 = *param_3;
    if ((int)uVar27 < (int)*param_4) {
      uVar40 = *(undefined8 *)(param_3 + 3);
      uVar37 = *(undefined8 *)(param_3 + 1);
      uVar20 = param_4[4];
      lVar23 = *(long *)param_4;
      *(long *)(param_3 + 2) = *(long *)(param_4 + 2);
      *(long *)param_3 = lVar23;
      param_3[4] = uVar20;
      *param_4 = uVar27;
      *(undefined8 *)(param_4 + 3) = uVar40;
      *(undefined8 *)(param_4 + 1) = uVar37;
      uVar27 = *param_2;
      if ((int)uVar27 < (int)*param_3) {
        uVar40 = *(undefined8 *)(param_2 + 3);
        uVar37 = *(undefined8 *)(param_2 + 1);
        uVar20 = param_3[4];
        lVar23 = *(long *)param_3;
        *(long *)(param_2 + 2) = *(long *)(param_3 + 2);
        *(long *)param_2 = lVar23;
        param_2[4] = uVar20;
        *param_3 = uVar27;
        *(undefined8 *)(param_3 + 3) = uVar40;
        *(undefined8 *)(param_3 + 1) = uVar37;
        uVar27 = *puVar10;
        if ((int)uVar27 < (int)*param_2) {
          uVar40 = *(undefined8 *)(puVar10 + 3);
          uVar37 = *(undefined8 *)(puVar10 + 1);
          uVar20 = param_2[4];
          lVar23 = *(long *)param_2;
          *(long *)(puVar10 + 2) = *(long *)(param_2 + 2);
          *(long *)puVar10 = lVar23;
          puVar10[4] = uVar20;
          *param_2 = uVar27;
          *(undefined8 *)(param_2 + 3) = uVar40;
          *(undefined8 *)(param_2 + 1) = uVar37;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppppppuVar8 + -0x18)) {
    return puVar10;
  }
  ___stack_chk_fail();
  *(uint **)((long)ppppppuVar8 + -0x100) = unaff_x28;
  *(uint **)((long)ppppppuVar8 + -0xf8) = unaff_x27;
  *(undefined1 **)((long)ppppppuVar8 + -0xf0) = (undefined1 *)((long)ppppppuVar8 + -0x10);
  *(code **)((long)ppppppuVar8 + -0xe8) = FUN_1092e8994;
  *(undefined8 *)((long)ppppppuVar8 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = ((long)param_2 - (long)puVar10 >> 2) * -0x3333333333333333;
  if (2 < (long)uVar14) {
    if (uVar14 == 3) {
      puVar11 = puVar10 + 5;
      uVar20 = *puVar11;
      puVar15 = param_2 + -5;
      uVar27 = *puVar10;
      if ((int)uVar27 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar15) {
          lVar16 = *(long *)(puVar10 + 3);
          lVar23 = *(long *)(puVar10 + 1);
          uVar20 = param_2[-1];
          lVar38 = *(long *)puVar15;
          *(long *)(puVar10 + 2) = *(long *)(param_2 + -3);
          *(long *)puVar10 = lVar38;
          puVar10[4] = uVar20;
        }
        else {
          *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
          *(long *)puVar10 = *(long *)puVar11;
          puVar10[4] = puVar10[9];
          puVar10[5] = uVar27;
          *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
          *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
          if ((int)*puVar15 <= (int)uVar27) goto LAB_1092e8da4;
          lVar16 = *(long *)(puVar10 + 8);
          lVar23 = *(long *)(puVar10 + 6);
          uVar20 = param_2[-1];
          lVar38 = *(long *)puVar15;
          *(undefined8 *)(puVar10 + 7) = *(undefined8 *)(param_2 + -3);
          *(long *)puVar11 = lVar38;
          puVar10[9] = uVar20;
        }
        param_2[-5] = uVar27;
        goto LAB_1092e8bf4;
      }
      if ((int)*puVar15 <= (int)uVar20) goto LAB_1092e8da4;
      lVar16 = *(long *)(puVar10 + 8);
      lVar23 = *(long *)(puVar10 + 6);
      uVar27 = param_2[-1];
      lVar38 = *(long *)puVar15;
      *(undefined8 *)(puVar10 + 7) = *(undefined8 *)(param_2 + -3);
      *(long *)puVar11 = lVar38;
      puVar10[9] = uVar27;
      param_2[-5] = uVar20;
      *(long *)(param_2 + -2) = lVar16;
      *(long *)(param_2 + -4) = lVar23;
    }
    else {
      if (uVar14 != 4) {
        if (uVar14 == 5) {
          param_2 = puVar10 + 5;
          FUN_1092e8748();
          goto LAB_1092e8da4;
        }
        goto LAB_1092e8a78;
      }
      puVar11 = puVar10 + 5;
      uVar20 = *puVar11;
      puVar15 = puVar10 + 10;
      uVar17 = *puVar15;
      uVar27 = *puVar10;
      if ((int)uVar27 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar17) {
          lVar16 = *(long *)(puVar10 + 3);
          lVar23 = *(long *)(puVar10 + 1);
          *(long *)(puVar10 + 2) = *(long *)(puVar10 + 0xc);
          *(long *)puVar10 = *(long *)puVar15;
          puVar10[4] = puVar10[0xe];
        }
        else {
          *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
          *(long *)puVar10 = *(long *)puVar11;
          puVar10[4] = puVar10[9];
          puVar10[5] = uVar27;
          *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
          *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
          if ((int)uVar17 <= (int)uVar27) goto LAB_1092e8d28;
          lVar16 = *(long *)(puVar10 + 8);
          lVar23 = *(long *)(puVar10 + 6);
          *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
          *(long *)puVar11 = *(long *)puVar15;
          puVar10[9] = puVar10[0xe];
        }
        puVar10[10] = uVar27;
        *(long *)(puVar10 + 0xd) = lVar16;
        *(long *)(puVar10 + 0xb) = lVar23;
        uVar17 = uVar27;
      }
      else if ((int)uVar20 < (int)uVar17) {
        *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
        *(long *)puVar11 = *(long *)puVar15;
        puVar10[9] = puVar10[0xe];
        puVar10[10] = uVar20;
        *(long *)(puVar10 + 0xd) = *(long *)(puVar10 + 8);
        *(long *)(puVar10 + 0xb) = *(long *)(puVar10 + 6);
        uVar17 = uVar20;
        if ((int)uVar27 < (int)puVar10[5]) {
          *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
          *(long *)puVar10 = *(long *)puVar11;
          puVar10[4] = puVar10[9];
          puVar10[5] = uVar27;
          *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
          *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
        }
      }
LAB_1092e8d28:
      if ((int)param_2[-5] <= (int)uVar17) goto LAB_1092e8da4;
      lVar16 = *(long *)(puVar10 + 0xd);
      lVar23 = *(long *)(puVar10 + 0xb);
      uVar27 = param_2[-1];
      lVar38 = *(long *)(param_2 + -5);
      *(long *)(puVar10 + 0xc) = *(long *)(param_2 + -3);
      *(long *)puVar15 = lVar38;
      puVar10[0xe] = uVar27;
      param_2[-5] = uVar17;
      *(long *)(param_2 + -2) = lVar16;
      *(long *)(param_2 + -4) = lVar23;
      uVar27 = puVar10[5];
      if ((int)puVar10[10] <= (int)uVar27) goto LAB_1092e8da4;
      *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
      *(long *)puVar11 = *(long *)puVar15;
      puVar10[9] = puVar10[0xe];
      puVar10[10] = uVar27;
      *(long *)(puVar10 + 0xd) = *(long *)(puVar10 + 8);
      *(long *)(puVar10 + 0xb) = *(long *)(puVar10 + 6);
    }
    uVar27 = *puVar10;
    if ((int)uVar27 < (int)puVar10[5]) {
      *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
      *(long *)puVar10 = *(long *)(puVar10 + 5);
      puVar10[4] = puVar10[9];
      puVar10[5] = uVar27;
      *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
      *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
    }
    goto LAB_1092e8da4;
  }
  if (uVar14 < 2) goto LAB_1092e8da4;
  if (uVar14 == 2) {
    uVar27 = *puVar10;
    if ((int)param_2[-5] <= (int)uVar27) goto LAB_1092e8da4;
    lVar16 = *(long *)(puVar10 + 3);
    lVar23 = *(long *)(puVar10 + 1);
    uVar20 = param_2[-1];
    lVar38 = *(long *)(param_2 + -5);
    *(long *)(puVar10 + 2) = *(long *)(param_2 + -3);
    *(long *)puVar10 = lVar38;
    puVar10[4] = uVar20;
    param_2[-5] = uVar27;
LAB_1092e8bf4:
    *(long *)(param_2 + -2) = lVar16;
    *(long *)(param_2 + -4) = lVar23;
    goto LAB_1092e8da4;
  }
LAB_1092e8a78:
  puVar11 = puVar10 + 10;
  uVar20 = *puVar11;
  puVar15 = puVar10 + 5;
  uVar17 = *puVar15;
  uVar27 = *puVar10;
  if ((int)uVar27 < (int)uVar17) {
    if ((int)uVar17 < (int)uVar20) {
      lVar16 = *(long *)(puVar10 + 3);
      lVar23 = *(long *)(puVar10 + 1);
      *(long *)(puVar10 + 2) = *(long *)(puVar10 + 0xc);
      *(long *)puVar10 = *(long *)puVar11;
      puVar10[4] = puVar10[0xe];
    }
    else {
      *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
      *(long *)puVar10 = *(long *)puVar15;
      puVar10[4] = puVar10[9];
      puVar10[5] = uVar27;
      *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
      *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
      if ((int)uVar20 <= (int)uVar27) goto LAB_1092e8c38;
      lVar16 = *(long *)(puVar10 + 8);
      lVar23 = *(long *)(puVar10 + 6);
      *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
      *(long *)puVar15 = *(long *)puVar11;
      puVar10[9] = puVar10[0xe];
    }
    puVar10[10] = uVar27;
    *(long *)(puVar10 + 0xd) = lVar16;
    *(long *)(puVar10 + 0xb) = lVar23;
  }
  else if ((int)uVar17 < (int)uVar20) {
    *(long *)(puVar10 + 7) = *(long *)(puVar10 + 0xc);
    *(long *)puVar15 = *(long *)puVar11;
    puVar10[9] = puVar10[0xe];
    puVar10[10] = uVar17;
    *(long *)(puVar10 + 0xd) = *(long *)(puVar10 + 8);
    *(long *)(puVar10 + 0xb) = *(long *)(puVar10 + 6);
    if ((int)uVar27 < (int)puVar10[5]) {
      *(long *)(puVar10 + 2) = *(long *)(puVar10 + 7);
      *(long *)puVar10 = *(long *)puVar15;
      puVar10[4] = puVar10[9];
      puVar10[5] = uVar27;
      *(long *)(puVar10 + 8) = *(long *)(puVar10 + 3);
      *(long *)(puVar10 + 6) = *(long *)(puVar10 + 1);
    }
  }
LAB_1092e8c38:
  if (puVar10 + 0xf != param_2) {
    lVar16 = 0;
    lVar23 = 0;
    iVar22 = 0;
    puVar15 = puVar10 + 0xf;
    do {
      uVar27 = *puVar15;
      if ((int)*puVar11 < (int)uVar27) {
        uVar37 = *(undefined8 *)(puVar10 + lVar23 * 5 + 0x10);
        *(undefined8 *)((long)ppppppuVar8 + -0x248) =
             *(undefined8 *)(puVar10 + lVar23 * 5 + 0x10 + 2);
        *(undefined8 *)((long)ppppppuVar8 + -0x250) = uVar37;
        lVar38 = lVar16;
        do {
          lVar39 = lVar38;
          *(undefined8 *)((long)puVar10 + lVar39 + 0x44) =
               *(undefined8 *)((long)puVar10 + lVar39 + 0x30);
          *(undefined8 *)((long)puVar10 + lVar39 + 0x3c) =
               *(undefined8 *)((long)puVar10 + lVar39 + 0x28);
          *(undefined4 *)((long)puVar10 + lVar39 + 0x4c) =
               *(undefined4 *)((long)puVar10 + lVar39 + 0x38);
          puVar11 = puVar10;
          if (lVar39 == -0x28) goto LAB_1092e8cb4;
          lVar38 = lVar39 + -0x14;
        } while (*(int *)((long)puVar10 + lVar39 + 0x14) < (int)uVar27);
        puVar11 = (uint *)((long)puVar10 + lVar39 + 0x28);
LAB_1092e8cb4:
        *puVar11 = uVar27;
        uVar37 = *(undefined8 *)((long)ppppppuVar8 + -0x250);
        *(undefined8 *)(puVar11 + 3) = *(undefined8 *)((long)ppppppuVar8 + -0x248);
        *(undefined8 *)(puVar11 + 1) = uVar37;
        iVar22 = iVar22 + 1;
        if (iVar22 == 8) {
          puVar11 = (uint *)(ulong)(puVar15 + 5 == param_2);
          goto LAB_1092e8da8;
        }
      }
      puVar31 = puVar15 + 5;
      lVar23 = lVar23 + 1;
      lVar16 = lVar16 + 0x14;
      puVar11 = puVar15;
      puVar15 = puVar31;
    } while (puVar31 != param_2);
  }
LAB_1092e8da4:
  puVar11 = (uint *)0x1;
LAB_1092e8da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppppppuVar8 + -0x108)) {
    return puVar11;
  }
  ___stack_chk_fail();
  *(uint **)((long)ppppppuVar8 + -0x280) = unaff_x22;
  *(uint **)((long)ppppppuVar8 + -0x278) = puVar29;
  *(uint **)((long)ppppppuVar8 + -0x270) = unaff_x20;
  *(uint **)((long)ppppppuVar8 + -0x268) = param_1;
  *(undefined1 **)((long)ppppppuVar8 + -0x260) = (undefined1 *)((long)ppppppuVar8 + -0xf0);
  *(code **)((long)ppppppuVar8 + -600) = FUN_1092e8de4;
  lVar23 = *(long *)(puVar11 + 2) - *(long *)puVar11;
  uVar14 = (lVar23 >> 4) + 1;
  if (uVar14 >> 0x3c != 0) {
    FUN_1092e8f98();
    lVar23 = *(long *)((long)ppppppuVar8 + -0x298);
    if (lVar23 != *(long *)((long)ppppppuVar8 + -0x2a0)) {
      *(ulong *)((long)ppppppuVar8 + -0x298) =
           lVar23 + ((*(long *)((long)ppppppuVar8 + -0x2a0) - lVar23) + 0xfU & 0xfffffffffffffff0);
    }
    if (*(long *)((long)ppppppuVar8 + -0x2a8) != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar39 = *(long *)puVar11;
    lVar6 = *(long *)(puVar11 + 2);
    lVar38 = *(long *)(param_2 + 2) + (lVar39 - lVar6);
    lVar16 = lVar38;
    for (lVar23 = lVar39; lVar6 != lVar23; lVar23 = lVar23 + 0x10) {
      lVar25 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar25) = *(undefined4 *)(lVar23 + lVar25);
        lVar25 = lVar25 + 4;
      } while (lVar25 != 0x10);
      lVar16 = lVar16 + 0x10;
    }
    *(long *)(param_2 + 2) = lVar38;
    lVar23 = *(long *)puVar11;
    *(long *)puVar11 = lVar38;
    *(long *)(puVar11 + 2) = lVar39;
    *(long *)(param_2 + 2) = lVar23;
    lVar23 = *(long *)(puVar11 + 2);
    *(long *)(puVar11 + 2) = *(long *)(param_2 + 4);
    *(long *)(param_2 + 4) = lVar23;
    lVar23 = *(long *)(puVar11 + 4);
    *(long *)(puVar11 + 4) = *(long *)(param_2 + 6);
    *(long *)(param_2 + 6) = lVar23;
    *(long *)param_2 = *(long *)(param_2 + 2);
    return puVar11;
  }
  uVar13 = *(long *)(puVar11 + 4) - *(long *)puVar11;
  uVar18 = (long)uVar13 >> 3;
  if (uVar18 <= uVar14) {
    uVar18 = uVar14;
  }
  if (0x7fffffffffffffef < uVar13) {
    uVar18 = 0xfffffffffffffff;
  }
  *(uint **)((long)ppppppuVar8 + -0x288) = puVar11;
  if (uVar18 == 0) {
    puVar29 = (uint *)0x0;
  }
  else {
    puVar29 = puVar11;
    FUN_1092e8fac();
  }
  lVar16 = 0;
  lVar23 = (long)puVar29 + lVar23;
  *(uint **)((long)ppppppuVar8 + -0x2a8) = puVar29;
  *(long *)((long)ppppppuVar8 + -0x2a0) = lVar23;
  *(uint **)((long)ppppppuVar8 + -0x290) = puVar29 + uVar18 * 4;
  do {
    *(undefined4 *)(lVar23 + lVar16) = *(undefined4 *)((long)param_2 + lVar16);
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x10);
  *(long *)((long)ppppppuVar8 + -0x298) = lVar23 + 0x10;
  FUN_1092e8f14(puVar11,(undefined1 *)((long)ppppppuVar8 + -0x2a8));
  puVar29 = *(uint **)(puVar11 + 2);
  lVar23 = *(long *)((long)ppppppuVar8 + -0x298);
  if (lVar23 != *(long *)((long)ppppppuVar8 + -0x2a0)) {
    *(ulong *)((long)ppppppuVar8 + -0x298) =
         lVar23 + ((*(long *)((long)ppppppuVar8 + -0x2a0) - lVar23) + 0xfU & 0xfffffffffffffff0);
  }
  if (*(long *)((long)ppppppuVar8 + -0x2a8) != 0) {
    __ZdlPv();
  }
  return puVar29;
}



/* Entry: 1092e789c; end: 1092e78af;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1092e789c(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  undefined *puVar30;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *puVar31;
  uint *unaff_x22;
  uint *puVar32;
  uint *puVar33;
  uint *unaff_x27;
  uint *puVar34;
  uint *unaff_x28;
  uint *puVar35;
  undefined8 *******pppppppuVar36;
  code *pcVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auStack_100 [8];
  uint *puStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 *******pppppppuStack_20;
  code *pcStack_18;
  
  puVar9 = &stack0xfffffffffffffff0;
  puVar11 = (uint *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  pcStack_18 = FUN_1092e78b0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar11;
  puVar18 = param_2;
  puVar32 = param_3;
  puVar33 = param_4;
  pppppppuStack_20 = (undefined8 *******)&stack0xfffffffffffffff0;
  do {
    puVar31 = puVar18 + -5;
    puVar34 = puVar18 + -10;
    puStack_f0 = puVar18 + -9;
    puStack_e8 = puVar18 + -4;
    puVar35 = puVar18 + -0xf;
    puStack_f8 = puVar18 + -0xe;
    puVar24 = puVar12;
LAB_1092e7914:
    puVar12 = puVar24;
    uVar17 = (long)puVar18 - (long)puVar12;
    uVar14 = ((long)uVar17 >> 2) * -0x3333333333333333;
    puVar13 = puVar18;
    if (uVar14 - 2 != 0 && 1 < (long)uVar14) {
      if (uVar14 == 3) {
        puVar33 = puVar12 + 5;
        uVar22 = *puVar33;
        puVar24 = puVar18 + -5;
        uVar29 = *puVar12;
        if ((int)uVar29 < (int)uVar22) {
          if ((int)uVar22 < (int)*puVar24) {
            uStack_a8 = *(undefined8 *)(puVar12 + 3);
            uStack_b0 = *(undefined8 *)(puVar12 + 1);
            uVar39 = *(undefined8 *)(puVar18 + -3);
            uVar38 = *(undefined8 *)puVar24;
            puVar12[4] = puVar18[-1];
            *(undefined8 *)(puVar12 + 2) = uVar39;
            *(undefined8 *)puVar12 = uVar38;
          }
          else {
            uStack_a8 = *(undefined8 *)(puVar12 + 3);
            uStack_b0 = *(undefined8 *)(puVar12 + 1);
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
            puVar12[4] = puVar12[9];
            puVar12[5] = uVar29;
            *(undefined8 *)(puVar12 + 8) = uStack_a8;
            *(undefined8 *)(puVar12 + 6) = uStack_b0;
            if ((int)*puVar24 <= (int)uVar29) break;
            uStack_a8 = *(undefined8 *)(puVar12 + 8);
            uStack_b0 = *(undefined8 *)(puVar12 + 6);
            uVar39 = *(undefined8 *)(puVar18 + -3);
            uVar38 = *(undefined8 *)puVar24;
            puVar12[9] = puVar18[-1];
            *(undefined8 *)(puVar12 + 7) = uVar39;
            *(undefined8 *)puVar33 = uVar38;
          }
          puVar18[-5] = uVar29;
          goto LAB_1092e862c;
        }
        if ((int)*puVar24 <= (int)uVar22) break;
        uStack_a8 = *(undefined8 *)(puVar12 + 8);
        uStack_b0 = *(undefined8 *)(puVar12 + 6);
        uVar39 = *(undefined8 *)(puVar18 + -3);
        uVar38 = *(undefined8 *)puVar24;
        puVar12[9] = puVar18[-1];
        *(undefined8 *)(puVar12 + 7) = uVar39;
        *(undefined8 *)puVar33 = uVar38;
        puVar18[-5] = uVar22;
        *(undefined8 *)(puVar18 + -2) = uStack_a8;
        *(undefined8 *)(puVar18 + -4) = uStack_b0;
      }
      else {
        if (uVar14 != 4) {
          if (uVar14 != 5) goto LAB_1092e795c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_1092e8744;
          param_2 = puVar12 + 5;
          param_3 = puVar12 + 10;
          param_4 = puVar12 + 0xf;
          param_5 = puVar31;
          pppppppuVar36 = pppppppuStack_20;
          pcVar37 = pcStack_18;
          goto code_r0x0001092e8748;
        }
        puVar33 = puVar12 + 5;
        uVar22 = *puVar33;
        puVar24 = puVar12 + 10;
        uVar20 = *puVar24;
        uVar29 = *puVar12;
        if ((int)uVar29 < (int)uVar22) {
          if ((int)uVar22 < (int)uVar20) {
            uVar39 = *(undefined8 *)(puVar12 + 3);
            uVar38 = *(undefined8 *)(puVar12 + 1);
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 0xc);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar24;
            puVar12[4] = puVar12[0xe];
            puVar12[10] = uVar29;
            uStack_b0 = uVar38;
            uStack_a8 = uVar39;
          }
          else {
            uStack_a8 = *(undefined8 *)(puVar12 + 3);
            uStack_b0 = *(undefined8 *)(puVar12 + 1);
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
            puVar12[4] = puVar12[9];
            puVar12[5] = uVar29;
            *(undefined8 *)(puVar12 + 8) = uStack_a8;
            *(undefined8 *)(puVar12 + 6) = uStack_b0;
            if ((int)uVar20 <= (int)uVar29) goto LAB_1092e8680;
            uVar39 = *(undefined8 *)(puVar12 + 8);
            uVar38 = *(undefined8 *)(puVar12 + 6);
            *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
            *(undefined8 *)puVar33 = *(undefined8 *)puVar24;
            puVar12[9] = puVar12[0xe];
            puVar12[10] = uVar29;
          }
          *(undefined8 *)(puVar12 + 0xd) = uVar39;
          *(undefined8 *)(puVar12 + 0xb) = uVar38;
          uVar20 = uVar29;
        }
        else if ((int)uVar22 < (int)uVar20) {
          *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
          *(undefined8 *)puVar33 = *(undefined8 *)puVar24;
          puVar12[9] = puVar12[0xe];
          puVar12[10] = uVar22;
          *(undefined8 *)(puVar12 + 0xd) = *(undefined8 *)(puVar12 + 8);
          *(undefined8 *)(puVar12 + 0xb) = *(undefined8 *)(puVar12 + 6);
          uVar29 = *puVar12;
          uVar20 = uVar22;
          if ((int)uVar29 < (int)puVar12[5]) {
            uStack_a8 = *(undefined8 *)(puVar12 + 3);
            uStack_b0 = *(undefined8 *)(puVar12 + 1);
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar33;
            puVar12[4] = puVar12[9];
            puVar12[5] = uVar29;
            *(undefined8 *)(puVar12 + 8) = uStack_a8;
            *(undefined8 *)(puVar12 + 6) = uStack_b0;
          }
        }
LAB_1092e8680:
        if ((int)*puVar31 <= (int)uVar20) break;
        uStack_a8 = *(undefined8 *)(puVar12 + 0xd);
        uStack_b0 = *(undefined8 *)(puVar12 + 0xb);
        uVar39 = *(undefined8 *)(puVar18 + -3);
        uVar38 = *(undefined8 *)puVar31;
        puVar12[0xe] = puVar18[-1];
        *(undefined8 *)(puVar12 + 0xc) = uVar39;
        *(undefined8 *)puVar24 = uVar38;
        puVar18[-5] = uVar20;
        *(undefined8 *)(puVar18 + -2) = uStack_a8;
        *(undefined8 *)(puVar18 + -4) = uStack_b0;
        uVar29 = puVar12[5];
        if ((int)puVar12[10] <= (int)uVar29) break;
        *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
        *(undefined8 *)puVar33 = *(undefined8 *)puVar24;
        puVar12[9] = puVar12[0xe];
        puVar12[10] = uVar29;
        *(undefined8 *)(puVar12 + 0xd) = *(undefined8 *)(puVar12 + 8);
        *(undefined8 *)(puVar12 + 0xb) = *(undefined8 *)(puVar12 + 6);
      }
      uVar29 = *puVar12;
      if ((int)uVar29 < (int)puVar12[5]) {
        uStack_a8 = *(undefined8 *)(puVar12 + 3);
        uStack_b0 = *(undefined8 *)(puVar12 + 1);
        *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
        *(undefined8 *)puVar12 = *(undefined8 *)(puVar12 + 5);
        puVar12[4] = puVar12[9];
        puVar12[5] = uVar29;
        *(undefined8 *)(puVar12 + 8) = uStack_a8;
        *(undefined8 *)(puVar12 + 6) = uStack_b0;
      }
      break;
    }
    if (uVar14 < 2) break;
    if (uVar14 == 2) {
      uVar29 = *puVar12;
      if ((int)uVar29 < (int)puVar18[-5]) {
        uStack_a8 = *(undefined8 *)(puVar12 + 3);
        uStack_b0 = *(undefined8 *)(puVar12 + 1);
        uVar39 = *(undefined8 *)(puVar18 + -3);
        uVar38 = *(undefined8 *)(puVar18 + -5);
        puVar12[4] = puVar18[-1];
        *(undefined8 *)(puVar12 + 2) = uVar39;
        *(undefined8 *)puVar12 = uVar38;
        puVar18[-5] = uVar29;
LAB_1092e862c:
        *(undefined8 *)(puVar18 + -2) = uStack_a8;
        *(undefined8 *)(puVar18 + -4) = uStack_b0;
      }
      break;
    }
LAB_1092e795c:
    if ((long)uVar17 < 0x1e0) {
      if (((ulong)puVar33 & 1) == 0) {
        puVar33 = puVar12;
        if (puVar12 != puVar18) {
          while (puVar33 = puVar33 + 5, puVar33 != puVar18) {
            uVar29 = *puVar33;
            if ((int)*puVar12 < (int)uVar29) {
              lVar26 = 0;
              uStack_b0._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar29);
              do {
                *(undefined4 *)((long)&uStack_b0 + lVar26 + 4) =
                     *(undefined4 *)((long)puVar12 + lVar26 + 0x18);
                lVar26 = lVar26 + 4;
                puVar24 = puVar33;
              } while (lVar26 != 0x10);
              do {
                puVar10 = puVar24;
                *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar10 + -3);
                *(undefined8 *)puVar10 = *(undefined8 *)(puVar10 + -5);
                puVar10[4] = puVar10[-1];
                puVar24 = puVar10 + -5;
              } while ((int)puVar10[-10] < (int)uVar29);
              puVar10[-1] = uStack_a0;
              *(undefined8 *)(puVar10 + -3) = uStack_a8;
              *(undefined8 *)(puVar10 + -5) = uStack_b0;
            }
            puVar12 = puVar12 + 5;
          }
        }
        break;
      }
      if ((puVar12 == puVar18) || (puVar33 = puVar12 + 5, puVar33 == puVar18)) break;
      lVar26 = 0;
      puVar24 = puVar12;
      goto LAB_1092e81e8;
    }
    if (puVar32 == (uint *)0x0) {
      if (puVar12 == puVar18) break;
      uVar21 = uVar14 - 2 >> 1;
      uVar16 = uVar21;
      goto LAB_1092e8294;
    }
    puVar24 = puVar12 + (uVar14 >> 1) * 5;
    uVar29 = *puVar31;
    if (uVar17 < 0xa01) {
      uVar22 = *puVar12;
      uVar20 = *puVar24;
      if ((int)uVar20 < (int)uVar22) {
        if ((int)uVar22 < (int)uVar29) {
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          uVar39 = *(undefined8 *)(puVar18 + -3);
          uVar38 = *(undefined8 *)puVar31;
          puVar24[4] = puVar18[-1];
          *(undefined8 *)(puVar24 + 2) = uVar39;
          *(undefined8 *)puVar24 = uVar38;
        }
        else {
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          uVar39 = *(undefined8 *)(puVar12 + 2);
          uVar38 = *(undefined8 *)puVar12;
          puVar24[4] = puVar12[4];
          *(undefined8 *)(puVar24 + 2) = uVar39;
          *(undefined8 *)puVar24 = uVar38;
          *puVar12 = uVar20;
          *(undefined8 *)(puVar12 + 3) = uStack_a8;
          *(undefined8 *)(puVar12 + 1) = uStack_b0;
          if ((int)*puVar31 <= (int)uVar20) goto LAB_1092e7e88;
          uStack_a8 = *(undefined8 *)(puVar12 + 3);
          uStack_b0 = *(undefined8 *)(puVar12 + 1);
          uVar39 = *(undefined8 *)(puVar18 + -3);
          uVar38 = *(undefined8 *)puVar31;
          puVar12[4] = puVar18[-1];
          *(undefined8 *)(puVar12 + 2) = uVar39;
          *(undefined8 *)puVar12 = uVar38;
        }
        *puVar31 = uVar20;
        *(undefined8 *)(puStack_e8 + 2) = uStack_a8;
        *(undefined8 *)puStack_e8 = uStack_b0;
      }
      else if ((int)uVar22 < (int)uVar29) {
        uStack_a8 = *(undefined8 *)(puVar12 + 3);
        uStack_b0 = *(undefined8 *)(puVar12 + 1);
        uVar39 = *(undefined8 *)(puVar18 + -3);
        uVar38 = *(undefined8 *)puVar31;
        puVar12[4] = puVar18[-1];
        *(undefined8 *)(puVar12 + 2) = uVar39;
        *(undefined8 *)puVar12 = uVar38;
        *puVar31 = uVar22;
        *(undefined8 *)(puStack_e8 + 2) = uStack_a8;
        *(undefined8 *)puStack_e8 = uStack_b0;
        uVar29 = *puVar24;
        if ((int)uVar29 < (int)*puVar12) {
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          uVar39 = *(undefined8 *)(puVar12 + 2);
          uVar38 = *(undefined8 *)puVar12;
          puVar24[4] = puVar12[4];
          *(undefined8 *)(puVar24 + 2) = uVar39;
          *(undefined8 *)puVar24 = uVar38;
          *puVar12 = uVar29;
          *(undefined8 *)(puVar12 + 3) = uStack_a8;
          *(undefined8 *)(puVar12 + 1) = uStack_b0;
        }
      }
    }
    else {
      uVar22 = *puVar24;
      uVar20 = *puVar12;
      if ((int)uVar20 < (int)uVar22) {
        if ((int)uVar22 < (int)uVar29) {
          uStack_a8 = *(undefined8 *)(puVar12 + 3);
          uStack_b0 = *(undefined8 *)(puVar12 + 1);
          uVar39 = *(undefined8 *)(puVar18 + -3);
          uVar38 = *(undefined8 *)puVar31;
          puVar12[4] = puVar18[-1];
          *(undefined8 *)(puVar12 + 2) = uVar39;
          *(undefined8 *)puVar12 = uVar38;
        }
        else {
          uVar40 = *(undefined8 *)(puVar12 + 3);
          uVar38 = *(undefined8 *)(puVar12 + 1);
          uVar41 = *(undefined8 *)(puVar24 + 2);
          uVar39 = *(undefined8 *)puVar24;
          puVar12[4] = puVar24[4];
          *(undefined8 *)(puVar12 + 2) = uVar41;
          *(undefined8 *)puVar12 = uVar39;
          *puVar24 = uVar20;
          *(undefined8 *)(puVar24 + 3) = uVar40;
          *(undefined8 *)(puVar24 + 1) = uVar38;
          if ((int)*puVar31 <= (int)uVar20) goto LAB_1092e7b10;
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          uVar39 = *(undefined8 *)(puVar18 + -3);
          uVar38 = *(undefined8 *)puVar31;
          puVar24[4] = puVar18[-1];
          *(undefined8 *)(puVar24 + 2) = uVar39;
          *(undefined8 *)puVar24 = uVar38;
        }
        *puVar31 = uVar20;
        *(undefined8 *)(puStack_e8 + 2) = uStack_a8;
        *(undefined8 *)puStack_e8 = uStack_b0;
      }
      else if ((int)uVar22 < (int)uVar29) {
        uVar40 = *(undefined8 *)(puVar24 + 3);
        uVar38 = *(undefined8 *)(puVar24 + 1);
        uVar41 = *(undefined8 *)(puVar18 + -3);
        uVar39 = *(undefined8 *)puVar31;
        puVar24[4] = puVar18[-1];
        *(undefined8 *)(puVar24 + 2) = uVar41;
        *(undefined8 *)puVar24 = uVar39;
        *puVar31 = uVar22;
        *(undefined8 *)(puStack_e8 + 2) = uVar40;
        *(undefined8 *)puStack_e8 = uVar38;
        uVar29 = *puVar12;
        if ((int)uVar29 < (int)*puVar24) {
          uVar40 = *(undefined8 *)(puVar12 + 3);
          uVar38 = *(undefined8 *)(puVar12 + 1);
          uVar41 = *(undefined8 *)(puVar24 + 2);
          uVar39 = *(undefined8 *)puVar24;
          puVar12[4] = puVar24[4];
          *(undefined8 *)(puVar12 + 2) = uVar41;
          *(undefined8 *)puVar12 = uVar39;
          *puVar24 = uVar29;
          *(undefined8 *)(puVar24 + 3) = uVar40;
          *(undefined8 *)(puVar24 + 1) = uVar38;
        }
      }
LAB_1092e7b10:
      puVar10 = puVar12 + 5;
      uVar29 = *puVar10;
      puVar13 = puVar24 + -5;
      uVar22 = *puVar13;
      if ((int)uVar29 < (int)uVar22) {
        if ((int)uVar22 < (int)*puVar34) {
          uStack_a8 = *(undefined8 *)(puVar12 + 8);
          uStack_b0 = *(undefined8 *)(puVar12 + 6);
          uVar39 = *(undefined8 *)(puVar18 + -8);
          uVar38 = *(undefined8 *)puVar34;
          puVar12[9] = puVar18[-6];
          *(undefined8 *)(puVar12 + 7) = uVar39;
          *(undefined8 *)puVar10 = uVar38;
        }
        else {
          uVar40 = *(undefined8 *)(puVar12 + 8);
          uVar38 = *(undefined8 *)(puVar12 + 6);
          uVar41 = *(undefined8 *)(puVar24 + -3);
          uVar39 = *(undefined8 *)puVar13;
          puVar12[9] = puVar24[-1];
          *(undefined8 *)(puVar12 + 7) = uVar41;
          *(undefined8 *)puVar10 = uVar39;
          puVar24[-5] = uVar29;
          *(undefined8 *)(puVar24 + -2) = uVar40;
          *(undefined8 *)(puVar24 + -4) = uVar38;
          if ((int)*puVar34 <= (int)uVar29) goto LAB_1092e7c74;
          uStack_a8 = *(undefined8 *)(puVar24 + -2);
          uStack_b0 = *(undefined8 *)(puVar24 + -4);
          uVar39 = *(undefined8 *)(puVar18 + -8);
          uVar38 = *(undefined8 *)puVar34;
          puVar24[-1] = puVar18[-6];
          *(undefined8 *)(puVar24 + -3) = uVar39;
          *(undefined8 *)puVar13 = uVar38;
        }
        *puVar34 = uVar29;
        *(undefined8 *)(puStack_f0 + 2) = uStack_a8;
        *(undefined8 *)puStack_f0 = uStack_b0;
      }
      else if ((int)uVar22 < (int)*puVar34) {
        uVar40 = *(undefined8 *)(puVar24 + -2);
        uVar38 = *(undefined8 *)(puVar24 + -4);
        uVar41 = *(undefined8 *)(puVar18 + -8);
        uVar39 = *(undefined8 *)puVar34;
        puVar24[-1] = puVar18[-6];
        *(undefined8 *)(puVar24 + -3) = uVar41;
        *(undefined8 *)puVar13 = uVar39;
        *puVar34 = uVar22;
        *(undefined8 *)(puStack_f0 + 2) = uVar40;
        *(undefined8 *)puStack_f0 = uVar38;
        uVar29 = *puVar10;
        if ((int)uVar29 < (int)puVar24[-5]) {
          uVar40 = *(undefined8 *)(puVar12 + 8);
          uVar38 = *(undefined8 *)(puVar12 + 6);
          uVar41 = *(undefined8 *)(puVar24 + -3);
          uVar39 = *(undefined8 *)puVar13;
          puVar12[9] = puVar24[-1];
          *(undefined8 *)(puVar12 + 7) = uVar41;
          *(undefined8 *)puVar10 = uVar39;
          *puVar13 = uVar29;
          *(undefined8 *)(puVar24 + -2) = uVar40;
          *(undefined8 *)(puVar24 + -4) = uVar38;
        }
      }
LAB_1092e7c74:
      puVar23 = puVar12 + 10;
      uVar29 = *puVar23;
      puVar10 = puVar24 + 5;
      uVar22 = *puVar10;
      if ((int)uVar29 < (int)uVar22) {
        if ((int)uVar22 < (int)*puVar35) {
          uStack_a8 = *(undefined8 *)(puVar12 + 0xd);
          uStack_b0 = *(undefined8 *)(puVar12 + 0xb);
          uVar39 = *(undefined8 *)(puVar18 + -0xd);
          uVar38 = *(undefined8 *)puVar35;
          puVar12[0xe] = puVar18[-0xb];
          *(undefined8 *)(puVar12 + 0xc) = uVar39;
          *(undefined8 *)puVar23 = uVar38;
        }
        else {
          uVar40 = *(undefined8 *)(puVar12 + 0xd);
          uVar38 = *(undefined8 *)(puVar12 + 0xb);
          uVar41 = *(undefined8 *)(puVar24 + 7);
          uVar39 = *(undefined8 *)puVar10;
          puVar12[0xe] = puVar24[9];
          *(undefined8 *)(puVar12 + 0xc) = uVar41;
          *(undefined8 *)puVar23 = uVar39;
          puVar24[5] = uVar29;
          *(undefined8 *)(puVar24 + 8) = uVar40;
          *(undefined8 *)(puVar24 + 6) = uVar38;
          if ((int)*puVar35 <= (int)uVar29) goto LAB_1092e7d74;
          uStack_a8 = *(undefined8 *)(puVar24 + 8);
          uStack_b0 = *(undefined8 *)(puVar24 + 6);
          uVar39 = *(undefined8 *)(puVar18 + -0xd);
          uVar38 = *(undefined8 *)puVar35;
          puVar24[9] = puVar18[-0xb];
          *(undefined8 *)(puVar24 + 7) = uVar39;
          *(undefined8 *)puVar10 = uVar38;
        }
        *puVar35 = uVar29;
        *(undefined8 *)(puStack_f8 + 2) = uStack_a8;
        *(undefined8 *)puStack_f8 = uStack_b0;
      }
      else if ((int)uVar22 < (int)*puVar35) {
        uVar40 = *(undefined8 *)(puVar24 + 8);
        uVar38 = *(undefined8 *)(puVar24 + 6);
        uVar41 = *(undefined8 *)(puVar18 + -0xd);
        uVar39 = *(undefined8 *)puVar35;
        puVar24[9] = puVar18[-0xb];
        *(undefined8 *)(puVar24 + 7) = uVar41;
        *(undefined8 *)puVar10 = uVar39;
        *puVar35 = uVar22;
        *(undefined8 *)(puStack_f8 + 2) = uVar40;
        *(undefined8 *)puStack_f8 = uVar38;
        uVar29 = *puVar23;
        if ((int)uVar29 < (int)puVar24[5]) {
          uVar40 = *(undefined8 *)(puVar12 + 0xd);
          uVar38 = *(undefined8 *)(puVar12 + 0xb);
          uVar41 = *(undefined8 *)(puVar24 + 7);
          uVar39 = *(undefined8 *)puVar10;
          puVar12[0xe] = puVar24[9];
          *(undefined8 *)(puVar12 + 0xc) = uVar41;
          *(undefined8 *)puVar23 = uVar39;
          *puVar10 = uVar29;
          *(undefined8 *)(puVar24 + 8) = uVar40;
          *(undefined8 *)(puVar24 + 6) = uVar38;
        }
      }
LAB_1092e7d74:
      uVar29 = *puVar24;
      uVar22 = puVar24[-5];
      if ((int)uVar22 < (int)uVar29) {
        if ((int)uVar29 < (int)puVar24[5]) {
          uStack_a8 = *(undefined8 *)(puVar24 + -2);
          uStack_b0 = *(undefined8 *)(puVar24 + -4);
          *(undefined8 *)(puVar24 + -3) = *(undefined8 *)(puVar24 + 7);
          *(undefined8 *)puVar13 = *(undefined8 *)puVar10;
          puVar24[-1] = puVar24[9];
        }
        else {
          *(undefined8 *)(puVar24 + -3) = *(undefined8 *)(puVar24 + 2);
          *(undefined8 *)puVar13 = *(undefined8 *)puVar24;
          puVar24[-1] = puVar24[4];
          *puVar24 = uVar22;
          *(undefined8 *)(puVar24 + 3) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)(puVar24 + 1) = *(undefined8 *)(puVar24 + -4);
          if ((int)puVar24[5] <= (int)uVar22) goto LAB_1092e7e60;
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + 7);
          *(undefined8 *)puVar24 = *(undefined8 *)puVar10;
          puVar24[4] = puVar24[9];
        }
        puVar24[5] = uVar22;
        *(undefined8 *)(puVar24 + 8) = uStack_a8;
        *(undefined8 *)(puVar24 + 6) = uStack_b0;
      }
      else if ((int)uVar29 < (int)puVar24[5]) {
        *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + 7);
        *(undefined8 *)puVar24 = *(undefined8 *)puVar10;
        puVar24[4] = puVar24[9];
        puVar24[5] = uVar29;
        *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar24 + 3);
        *(undefined8 *)(puVar24 + 6) = *(undefined8 *)(puVar24 + 1);
        uVar29 = puVar24[-5];
        if ((int)uVar29 < (int)*puVar24) {
          *(undefined8 *)(puVar24 + -3) = *(undefined8 *)(puVar24 + 2);
          *(undefined8 *)puVar13 = *(undefined8 *)puVar24;
          puVar24[-1] = puVar24[4];
          *puVar24 = uVar29;
          *(undefined8 *)(puVar24 + 3) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)(puVar24 + 1) = *(undefined8 *)(puVar24 + -4);
        }
      }
LAB_1092e7e60:
      uVar29 = *puVar12;
      uStack_a8 = *(undefined8 *)(puVar12 + 3);
      uStack_b0 = *(undefined8 *)(puVar12 + 1);
      uVar39 = *(undefined8 *)(puVar24 + 2);
      uVar38 = *(undefined8 *)puVar24;
      puVar12[4] = puVar24[4];
      *(undefined8 *)(puVar12 + 2) = uVar39;
      *(undefined8 *)puVar12 = uVar38;
      *puVar24 = uVar29;
      *(undefined8 *)(puVar24 + 3) = uStack_a8;
      *(undefined8 *)(puVar24 + 1) = uStack_b0;
    }
LAB_1092e7e88:
    puVar32 = (uint *)((long)puVar32 + -1);
    uVar29 = *puVar12;
    if ((((ulong)puVar33 & 1) == 0) && ((int)puVar12[-5] <= (int)uVar29)) {
      uStack_88 = *(undefined8 *)(puVar12 + 3);
      uStack_90 = *(undefined8 *)(puVar12 + 1);
      puVar24 = puVar12;
      if ((int)*puVar31 < (int)uVar29) {
        do {
          puVar24 = puVar24 + 5;
        } while ((int)uVar29 <= (int)*puVar24);
      }
      else {
        do {
          puVar24 = puVar24 + 5;
          if (puVar18 <= puVar24) break;
        } while ((int)uVar29 <= (int)*puVar24);
      }
      puVar33 = puVar18;
      if (puVar24 < puVar18) {
        do {
          puVar33 = puVar33 + -5;
        } while ((int)*puVar33 < (int)uVar29);
      }
      if (puVar24 < puVar33) {
        uVar22 = *puVar24;
        do {
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          uVar39 = *(undefined8 *)(puVar33 + 2);
          uVar38 = *(undefined8 *)puVar33;
          puVar24[4] = puVar33[4];
          *(undefined8 *)(puVar24 + 2) = uVar39;
          *(undefined8 *)puVar24 = uVar38;
          *puVar33 = uVar22;
          *(undefined8 *)(puVar33 + 3) = uStack_a8;
          *(undefined8 *)(puVar33 + 1) = uStack_b0;
          do {
            puVar24 = puVar24 + 5;
            uVar22 = *puVar24;
          } while ((int)uVar29 <= (int)uVar22);
          do {
            puVar33 = puVar33 + -5;
          } while ((int)*puVar33 < (int)uVar29);
        } while (puVar24 < puVar33);
      }
      if (puVar24 + -5 != puVar12) {
        uVar39 = *(undefined8 *)(puVar24 + -3);
        uVar38 = *(undefined8 *)(puVar24 + -5);
        puVar12[4] = puVar24[-1];
        *(undefined8 *)(puVar12 + 2) = uVar39;
        *(undefined8 *)puVar12 = uVar38;
      }
      puVar33 = (uint *)0x0;
      puVar24[-5] = uVar29;
      *(undefined8 *)(puVar24 + -2) = uStack_88;
      *(undefined8 *)(puVar24 + -4) = uStack_90;
      goto LAB_1092e7914;
    }
    lVar26 = 0;
    uStack_88 = *(undefined8 *)(puVar12 + 3);
    uStack_90 = *(undefined8 *)(puVar12 + 1);
    do {
      uVar22 = *(uint *)((long)puVar12 + lVar26 + 0x14);
      lVar26 = lVar26 + 0x14;
    } while ((int)uVar29 < (int)uVar22);
    puVar11 = (uint *)((long)puVar12 + lVar26);
    puVar10 = puVar18;
    if (lVar26 == 0x14) {
      do {
        if (puVar10 <= puVar11) break;
        puVar10 = puVar10 + -5;
      } while ((int)*puVar10 <= (int)uVar29);
    }
    else {
      do {
        puVar10 = puVar10 + -5;
      } while ((int)*puVar10 <= (int)uVar29);
    }
    puVar24 = puVar11;
    puVar13 = puVar10;
    if (puVar11 < puVar10) {
      do {
        uStack_a8 = *(undefined8 *)(puVar24 + 3);
        uStack_b0 = *(undefined8 *)(puVar24 + 1);
        uVar39 = *(undefined8 *)(puVar13 + 2);
        uVar38 = *(undefined8 *)puVar13;
        puVar24[4] = puVar13[4];
        *(undefined8 *)(puVar24 + 2) = uVar39;
        *(undefined8 *)puVar24 = uVar38;
        *puVar13 = uVar22;
        *(undefined8 *)(puVar13 + 3) = uStack_a8;
        *(undefined8 *)(puVar13 + 1) = uStack_b0;
        do {
          puVar24 = puVar24 + 5;
          uVar22 = *puVar24;
        } while ((int)uVar29 < (int)uVar22);
        do {
          puVar13 = puVar13 + -5;
        } while ((int)*puVar13 <= (int)uVar29);
      } while (puVar24 < puVar13);
    }
    puVar13 = puVar24 + -5;
    if (puVar13 != puVar12) {
      uVar39 = *(undefined8 *)(puVar24 + -3);
      uVar38 = *(undefined8 *)puVar13;
      puVar12[4] = puVar24[-1];
      *(undefined8 *)(puVar12 + 2) = uVar39;
      *(undefined8 *)puVar12 = uVar38;
    }
    *puVar13 = uVar29;
    *(undefined8 *)(puVar24 + -2) = uStack_88;
    *(undefined8 *)(puVar24 + -4) = uStack_90;
    if (puVar11 < puVar10) goto LAB_1092e7fac;
    puVar10 = puVar12;
    FUN_1092e8994(puVar12,puVar13);
    puVar11 = puVar24;
    param_2 = puVar18;
    FUN_1092e8994();
    if ((int)puVar11 == 0) goto code_r0x0001092e7fa8;
    puVar18 = puVar13;
  } while (((ulong)puVar10 & 1) == 0);
  goto LAB_1092e870c;
LAB_1092e81e8:
  do {
    uVar29 = *puVar33;
    if ((int)*puVar24 < (int)uVar29) {
      lVar19 = 0;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar29);
      do {
        *(undefined4 *)((long)&uStack_b0 + lVar19 + 4) =
             *(undefined4 *)((long)puVar24 + lVar19 + 0x18);
        lVar19 = lVar19 + 4;
        lVar3 = lVar26;
      } while (lVar19 != 0x10);
      do {
        lVar19 = lVar3;
        puVar2 = (undefined8 *)((long)puVar12 + lVar19);
        *(undefined8 *)((long)puVar2 + 0x1c) = puVar2[1];
        *(undefined8 *)((long)puVar2 + 0x14) = *puVar2;
        *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar2 + 2);
        puVar10 = puVar12;
        if (lVar19 == 0) goto LAB_1092e8258;
        lVar3 = lVar19 + -0x14;
      } while (*(int *)((long)puVar2 + -0x14) < (int)uVar29);
      puVar10 = (uint *)((long)puVar12 + lVar19);
LAB_1092e8258:
      puVar10[4] = uStack_a0;
      *(undefined8 *)(puVar10 + 2) = uStack_a8;
      *(undefined8 *)puVar10 = uStack_b0;
    }
    puVar33 = puVar33 + 5;
    puVar24 = puVar24 + 5;
    lVar26 = lVar26 + 0x14;
  } while (puVar33 != puVar18);
  goto LAB_1092e870c;
code_r0x0001092e7fa8:
  if (((ulong)puVar10 & 1) == 0) {
LAB_1092e7fac:
    param_4 = (uint *)(ulong)((uint)puVar33 & 1);
    param_3 = puVar32;
    FUN_1092e78b0();
    puVar33 = (uint *)0x0;
    puVar11 = puVar12;
    param_2 = puVar13;
  }
  goto LAB_1092e7914;
LAB_1092e8294:
  do {
    if ((long)uVar16 <= (long)uVar21) {
      uVar4 = uVar16 << 1 | 1;
      puVar11 = puVar12 + uVar4 * 5;
      uVar28 = uVar16 * 2 + 2;
      if ((long)uVar28 < (long)uVar14) {
        uVar22 = *puVar11;
        uVar20 = puVar11[5];
        uVar29 = uVar22;
        if ((int)uVar20 <= (int)uVar22) {
          uVar29 = uVar20;
        }
        puVar33 = puVar11 + 5;
        if ((int)uVar22 <= (int)uVar20) {
          puVar33 = puVar11;
          uVar28 = uVar4;
        }
      }
      else {
        uVar29 = *puVar11;
        puVar33 = puVar11;
        uVar28 = uVar4;
      }
      puVar11 = puVar12 + uVar16 * 5;
      uVar22 = *puVar11;
      if ((int)uVar29 <= (int)uVar22) {
        uStack_a8 = *(undefined8 *)(puVar11 + 3);
        uStack_b0 = *(undefined8 *)(puVar11 + 1);
        do {
          puVar24 = puVar33;
          uVar39 = *(undefined8 *)(puVar24 + 2);
          uVar38 = *(undefined8 *)puVar24;
          puVar11[4] = puVar24[4];
          *(undefined8 *)(puVar11 + 2) = uVar39;
          *(undefined8 *)puVar11 = uVar38;
          if ((long)uVar21 < (long)uVar28) break;
          uVar4 = uVar28 << 1 | 1;
          puVar11 = puVar12 + uVar4 * 5;
          uVar28 = uVar28 * 2 + 2;
          if ((long)uVar28 < (long)uVar14) {
            uVar20 = *puVar11;
            uVar8 = puVar11[5];
            uVar29 = uVar20;
            if ((int)uVar8 <= (int)uVar20) {
              uVar29 = uVar8;
            }
            puVar33 = puVar11 + 5;
            if ((int)uVar20 <= (int)uVar8) {
              puVar33 = puVar11;
              uVar28 = uVar4;
            }
          }
          else {
            uVar29 = *puVar11;
            puVar33 = puVar11;
            uVar28 = uVar4;
          }
          puVar11 = puVar24;
        } while ((int)uVar29 <= (int)uVar22);
        *puVar24 = uVar22;
        *(undefined8 *)(puVar24 + 3) = uStack_a8;
        *(undefined8 *)(puVar24 + 1) = uStack_b0;
      }
    }
    bVar6 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar6);
  lVar26 = (uVar17 >> 2) * -0x3333333333333333;
  do {
    puVar30 = (undefined *)0x0;
    uVar29 = *puVar12;
    uStack_88 = *(undefined8 *)(puVar12 + 3);
    uStack_90 = *(undefined8 *)(puVar12 + 1);
    puVar33 = puVar12;
    do {
      puVar11 = puVar33 + (long)puVar30 * 5;
      param_3 = (uint *)((long)puVar30 * 2);
      puVar5 = (undefined *)((long)puVar30 << 1 | 1);
      puVar1 = (undefined *)((long)param_3 + 2);
      param_2 = puVar11;
      puVar24 = puVar11 + 5;
      puVar30 = puVar5;
      if ((long)puVar1 < lVar26) {
        param_2 = puVar11 + 10;
        param_3 = (uint *)(ulong)*param_2;
        param_4 = (uint *)(ulong)puVar11[5];
        puVar24 = param_2;
        puVar30 = puVar1;
        if ((int)puVar11[5] <= (int)*param_2) {
          puVar24 = puVar11 + 5;
          puVar30 = puVar5;
        }
      }
      uVar39 = *(undefined8 *)(puVar24 + 2);
      uVar38 = *(undefined8 *)puVar24;
      puVar11 = (uint *)(ulong)puVar24[4];
      puVar33[4] = puVar24[4];
      *(undefined8 *)(puVar33 + 2) = uVar39;
      *(undefined8 *)puVar33 = uVar38;
      puVar33 = puVar24;
    } while ((long)puVar30 <= (long)(lVar26 - 2U >> 1));
    puVar13 = puVar18 + -5;
    if (puVar24 == puVar13) {
      *puVar24 = uVar29;
      *(undefined8 *)(puVar24 + 3) = uStack_88;
      *(undefined8 *)(puVar24 + 1) = uStack_90;
    }
    else {
      uVar39 = *(undefined8 *)(puVar18 + -3);
      uVar38 = *(undefined8 *)puVar13;
      puVar24[4] = puVar18[-1];
      *(undefined8 *)(puVar24 + 2) = uVar39;
      *(undefined8 *)puVar24 = uVar38;
      puVar18[-5] = uVar29;
      *(undefined8 *)(puVar18 + -2) = uStack_88;
      *(undefined8 *)(puVar18 + -4) = uStack_90;
      puVar30 = (undefined *)((long)puVar24 + (0x14 - (long)puVar12));
      if (0x14 < (long)puVar30) {
        uVar14 = ((ulong)puVar30 >> 2) * -0x3333333333333333 - 2 >> 1;
        uVar29 = *puVar24;
        if ((int)uVar29 < (int)puVar12[uVar14 * 5]) {
          uStack_a8 = *(undefined8 *)(puVar24 + 3);
          uStack_b0 = *(undefined8 *)(puVar24 + 1);
          puVar18 = puVar12 + uVar14 * 5;
          do {
            puVar33 = puVar18;
            uVar39 = *(undefined8 *)(puVar33 + 2);
            uVar38 = *(undefined8 *)puVar33;
            puVar24[4] = puVar33[4];
            *(undefined8 *)(puVar24 + 2) = uVar39;
            *(undefined8 *)puVar24 = uVar38;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar24 = puVar33;
            puVar18 = puVar12 + uVar14 * 5;
          } while ((int)uVar29 < (int)puVar12[uVar14 * 5]);
          *puVar33 = uVar29;
          *(undefined8 *)(puVar33 + 3) = uStack_a8;
          *(undefined8 *)(puVar33 + 1) = uStack_b0;
        }
      }
    }
    bVar6 = 2 < lVar26;
    lVar26 = lVar26 + -1;
    puVar18 = puVar13;
  } while (bVar6);
LAB_1092e870c:
  puVar18 = puVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar11;
  }
LAB_1092e8744:
  unaff_x22 = puVar32;
  unaff_x20 = puVar18;
  unaff_x19 = puVar12;
  puVar12 = puVar11;
  ___stack_chk_fail();
  puVar9 = auStack_100;
  unaff_x21 = puVar31;
  unaff_x27 = puVar34;
  unaff_x28 = puVar35;
  pppppppuVar36 = &pppppppuStack_20;
  pcVar37 = FUN_1092e8748;
code_r0x0001092e8748:
  *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar36;
  *(code **)(puVar9 + -8) = pcVar37;
  *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *param_2;
  uVar22 = *puVar12;
  uVar20 = *param_3;
  if ((int)uVar22 < (int)uVar29) {
    if ((int)uVar29 < (int)uVar20) {
      uVar39 = *(undefined8 *)(puVar12 + 3);
      uVar38 = *(undefined8 *)(puVar12 + 1);
      uVar29 = param_3[4];
      uVar40 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar12 = uVar40;
      puVar12[4] = uVar29;
    }
    else {
      uVar39 = *(undefined8 *)(puVar12 + 3);
      uVar38 = *(undefined8 *)(puVar12 + 1);
      uVar29 = param_2[4];
      uVar40 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar12 = uVar40;
      puVar12[4] = uVar29;
      *param_2 = uVar22;
      *(undefined8 *)(param_2 + 3) = uVar39;
      *(undefined8 *)(param_2 + 1) = uVar38;
      uVar20 = *param_3;
      if ((int)*param_3 <= (int)uVar22) goto LAB_1092e883c;
      uVar39 = *(undefined8 *)(param_2 + 3);
      uVar38 = *(undefined8 *)(param_2 + 1);
      uVar29 = param_3[4];
      uVar40 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar40;
      param_2[4] = uVar29;
    }
    *param_3 = uVar22;
    *(undefined8 *)(param_3 + 3) = uVar39;
    *(undefined8 *)(param_3 + 1) = uVar38;
    uVar20 = uVar22;
  }
  else if ((int)uVar29 < (int)uVar20) {
    uVar39 = *(undefined8 *)(param_2 + 3);
    uVar38 = *(undefined8 *)(param_2 + 1);
    uVar22 = param_3[4];
    uVar40 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar40;
    param_2[4] = uVar22;
    *param_3 = uVar29;
    *(undefined8 *)(param_3 + 3) = uVar39;
    *(undefined8 *)(param_3 + 1) = uVar38;
    uVar22 = *puVar12;
    uVar20 = uVar29;
    if ((int)uVar22 < (int)*param_2) {
      uVar39 = *(undefined8 *)(puVar12 + 3);
      uVar38 = *(undefined8 *)(puVar12 + 1);
      uVar29 = param_2[4];
      uVar40 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar12 = uVar40;
      puVar12[4] = uVar29;
      *param_2 = uVar22;
      *(undefined8 *)(param_2 + 3) = uVar39;
      *(undefined8 *)(param_2 + 1) = uVar38;
      uVar20 = *param_3;
    }
  }
LAB_1092e883c:
  if ((int)uVar20 < (int)*param_4) {
    uVar39 = *(undefined8 *)(param_3 + 3);
    uVar38 = *(undefined8 *)(param_3 + 1);
    uVar29 = param_4[4];
    uVar40 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar40;
    param_3[4] = uVar29;
    *param_4 = uVar20;
    *(undefined8 *)(param_4 + 3) = uVar39;
    *(undefined8 *)(param_4 + 1) = uVar38;
    uVar29 = *param_2;
    if ((int)uVar29 < (int)*param_3) {
      uVar39 = *(undefined8 *)(param_2 + 3);
      uVar38 = *(undefined8 *)(param_2 + 1);
      uVar22 = param_3[4];
      uVar40 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar40;
      param_2[4] = uVar22;
      *param_3 = uVar29;
      *(undefined8 *)(param_3 + 3) = uVar39;
      *(undefined8 *)(param_3 + 1) = uVar38;
      uVar29 = *puVar12;
      if ((int)uVar29 < (int)*param_2) {
        uVar39 = *(undefined8 *)(puVar12 + 3);
        uVar38 = *(undefined8 *)(puVar12 + 1);
        uVar22 = param_2[4];
        uVar40 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar12 = uVar40;
        puVar12[4] = uVar22;
        *param_2 = uVar29;
        *(undefined8 *)(param_2 + 3) = uVar39;
        *(undefined8 *)(param_2 + 1) = uVar38;
      }
    }
  }
  uVar29 = *param_4;
  if ((int)uVar29 < (int)*param_5) {
    uVar39 = *(undefined8 *)(param_4 + 3);
    uVar38 = *(undefined8 *)(param_4 + 1);
    uVar22 = param_5[4];
    uVar40 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar40;
    param_4[4] = uVar22;
    *param_5 = uVar29;
    *(undefined8 *)(param_5 + 3) = uVar39;
    *(undefined8 *)(param_5 + 1) = uVar38;
    uVar29 = *param_3;
    if ((int)uVar29 < (int)*param_4) {
      uVar39 = *(undefined8 *)(param_3 + 3);
      uVar38 = *(undefined8 *)(param_3 + 1);
      uVar22 = param_4[4];
      uVar40 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar40;
      param_3[4] = uVar22;
      *param_4 = uVar29;
      *(undefined8 *)(param_4 + 3) = uVar39;
      *(undefined8 *)(param_4 + 1) = uVar38;
      uVar29 = *param_2;
      if ((int)uVar29 < (int)*param_3) {
        uVar39 = *(undefined8 *)(param_2 + 3);
        uVar38 = *(undefined8 *)(param_2 + 1);
        uVar22 = param_3[4];
        uVar40 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar40;
        param_2[4] = uVar22;
        *param_3 = uVar29;
        *(undefined8 *)(param_3 + 3) = uVar39;
        *(undefined8 *)(param_3 + 1) = uVar38;
        uVar29 = *puVar12;
        if ((int)uVar29 < (int)*param_2) {
          uVar39 = *(undefined8 *)(puVar12 + 3);
          uVar38 = *(undefined8 *)(puVar12 + 1);
          uVar22 = param_2[4];
          uVar40 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar12 = uVar40;
          puVar12[4] = uVar22;
          *param_2 = uVar29;
          *(undefined8 *)(param_2 + 3) = uVar39;
          *(undefined8 *)(param_2 + 1) = uVar38;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x18)) {
    return puVar12;
  }
  ___stack_chk_fail();
  *(uint **)(puVar9 + -0x100) = unaff_x28;
  *(uint **)(puVar9 + -0xf8) = unaff_x27;
  *(undefined1 **)(puVar9 + -0xf0) = puVar9 + -0x10;
  *(code **)(puVar9 + -0xe8) = FUN_1092e8994;
  *(undefined8 *)(puVar9 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = ((long)param_2 - (long)puVar12 >> 2) * -0x3333333333333333;
  if (2 < (long)uVar14) {
    if (uVar14 == 3) {
      puVar11 = puVar12 + 5;
      uVar22 = *puVar11;
      puVar18 = param_2 + -5;
      uVar29 = *puVar12;
      if ((int)uVar29 < (int)uVar22) {
        if ((int)uVar22 < (int)*puVar18) {
          uVar39 = *(undefined8 *)(puVar12 + 3);
          uVar38 = *(undefined8 *)(puVar12 + 1);
          uVar22 = param_2[-1];
          uVar40 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)puVar12 = uVar40;
          puVar12[4] = uVar22;
        }
        else {
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
          puVar12[4] = puVar12[9];
          puVar12[5] = uVar29;
          *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
          *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
          if ((int)*puVar18 <= (int)uVar29) goto LAB_1092e8da4;
          uVar39 = *(undefined8 *)(puVar12 + 8);
          uVar38 = *(undefined8 *)(puVar12 + 6);
          uVar22 = param_2[-1];
          uVar40 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)puVar11 = uVar40;
          puVar12[9] = uVar22;
        }
        param_2[-5] = uVar29;
        goto LAB_1092e8bf4;
      }
      if ((int)*puVar18 <= (int)uVar22) goto LAB_1092e8da4;
      uVar39 = *(undefined8 *)(puVar12 + 8);
      uVar38 = *(undefined8 *)(puVar12 + 6);
      uVar29 = param_2[-1];
      uVar40 = *(undefined8 *)puVar18;
      *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar11 = uVar40;
      puVar12[9] = uVar29;
      param_2[-5] = uVar22;
      *(undefined8 *)(param_2 + -2) = uVar39;
      *(undefined8 *)(param_2 + -4) = uVar38;
    }
    else {
      if (uVar14 != 4) {
        if (uVar14 == 5) {
          param_2 = puVar12 + 5;
          FUN_1092e8748();
          goto LAB_1092e8da4;
        }
        goto LAB_1092e8a78;
      }
      puVar11 = puVar12 + 5;
      uVar22 = *puVar11;
      puVar18 = puVar12 + 10;
      uVar20 = *puVar18;
      uVar29 = *puVar12;
      if ((int)uVar29 < (int)uVar22) {
        if ((int)uVar22 < (int)uVar20) {
          uVar39 = *(undefined8 *)(puVar12 + 3);
          uVar38 = *(undefined8 *)(puVar12 + 1);
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 0xc);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar18;
          puVar12[4] = puVar12[0xe];
        }
        else {
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
          puVar12[4] = puVar12[9];
          puVar12[5] = uVar29;
          *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
          *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
          if ((int)uVar20 <= (int)uVar29) goto LAB_1092e8d28;
          uVar39 = *(undefined8 *)(puVar12 + 8);
          uVar38 = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
          *(undefined8 *)puVar11 = *(undefined8 *)puVar18;
          puVar12[9] = puVar12[0xe];
        }
        puVar12[10] = uVar29;
        *(undefined8 *)(puVar12 + 0xd) = uVar39;
        *(undefined8 *)(puVar12 + 0xb) = uVar38;
        uVar20 = uVar29;
      }
      else if ((int)uVar22 < (int)uVar20) {
        *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
        *(undefined8 *)puVar11 = *(undefined8 *)puVar18;
        puVar12[9] = puVar12[0xe];
        puVar12[10] = uVar22;
        *(undefined8 *)(puVar12 + 0xd) = *(undefined8 *)(puVar12 + 8);
        *(undefined8 *)(puVar12 + 0xb) = *(undefined8 *)(puVar12 + 6);
        uVar20 = uVar22;
        if ((int)uVar29 < (int)puVar12[5]) {
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
          puVar12[4] = puVar12[9];
          puVar12[5] = uVar29;
          *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
          *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
        }
      }
LAB_1092e8d28:
      if ((int)param_2[-5] <= (int)uVar20) goto LAB_1092e8da4;
      uVar39 = *(undefined8 *)(puVar12 + 0xd);
      uVar38 = *(undefined8 *)(puVar12 + 0xb);
      uVar29 = param_2[-1];
      uVar40 = *(undefined8 *)(param_2 + -5);
      *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar18 = uVar40;
      puVar12[0xe] = uVar29;
      param_2[-5] = uVar20;
      *(undefined8 *)(param_2 + -2) = uVar39;
      *(undefined8 *)(param_2 + -4) = uVar38;
      uVar29 = puVar12[5];
      if ((int)puVar12[10] <= (int)uVar29) goto LAB_1092e8da4;
      *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
      *(undefined8 *)puVar11 = *(undefined8 *)puVar18;
      puVar12[9] = puVar12[0xe];
      puVar12[10] = uVar29;
      *(undefined8 *)(puVar12 + 0xd) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(puVar12 + 0xb) = *(undefined8 *)(puVar12 + 6);
    }
    uVar29 = *puVar12;
    if ((int)uVar29 < (int)puVar12[5]) {
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
      *(undefined8 *)puVar12 = *(undefined8 *)(puVar12 + 5);
      puVar12[4] = puVar12[9];
      puVar12[5] = uVar29;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
    }
    goto LAB_1092e8da4;
  }
  if (uVar14 < 2) goto LAB_1092e8da4;
  if (uVar14 == 2) {
    uVar29 = *puVar12;
    if ((int)param_2[-5] <= (int)uVar29) goto LAB_1092e8da4;
    uVar39 = *(undefined8 *)(puVar12 + 3);
    uVar38 = *(undefined8 *)(puVar12 + 1);
    uVar22 = param_2[-1];
    uVar40 = *(undefined8 *)(param_2 + -5);
    *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -3);
    *(undefined8 *)puVar12 = uVar40;
    puVar12[4] = uVar22;
    param_2[-5] = uVar29;
LAB_1092e8bf4:
    *(undefined8 *)(param_2 + -2) = uVar39;
    *(undefined8 *)(param_2 + -4) = uVar38;
    goto LAB_1092e8da4;
  }
LAB_1092e8a78:
  puVar11 = puVar12 + 10;
  uVar22 = *puVar11;
  puVar18 = puVar12 + 5;
  uVar20 = *puVar18;
  uVar29 = *puVar12;
  if ((int)uVar29 < (int)uVar20) {
    if ((int)uVar20 < (int)uVar22) {
      uVar39 = *(undefined8 *)(puVar12 + 3);
      uVar38 = *(undefined8 *)(puVar12 + 1);
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 0xc);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
      puVar12[4] = puVar12[0xe];
    }
    else {
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar18;
      puVar12[4] = puVar12[9];
      puVar12[5] = uVar29;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
      if ((int)uVar22 <= (int)uVar29) goto LAB_1092e8c38;
      uVar39 = *(undefined8 *)(puVar12 + 8);
      uVar38 = *(undefined8 *)(puVar12 + 6);
      *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
      *(undefined8 *)puVar18 = *(undefined8 *)puVar11;
      puVar12[9] = puVar12[0xe];
    }
    puVar12[10] = uVar29;
    *(undefined8 *)(puVar12 + 0xd) = uVar39;
    *(undefined8 *)(puVar12 + 0xb) = uVar38;
  }
  else if ((int)uVar20 < (int)uVar22) {
    *(undefined8 *)(puVar12 + 7) = *(undefined8 *)(puVar12 + 0xc);
    *(undefined8 *)puVar18 = *(undefined8 *)puVar11;
    puVar12[9] = puVar12[0xe];
    puVar12[10] = uVar20;
    *(undefined8 *)(puVar12 + 0xd) = *(undefined8 *)(puVar12 + 8);
    *(undefined8 *)(puVar12 + 0xb) = *(undefined8 *)(puVar12 + 6);
    if ((int)uVar29 < (int)puVar12[5]) {
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 7);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar18;
      puVar12[4] = puVar12[9];
      puVar12[5] = uVar29;
      *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar12 + 3);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar12 + 1);
    }
  }
LAB_1092e8c38:
  if (puVar12 + 0xf != param_2) {
    lVar19 = 0;
    lVar26 = 0;
    iVar25 = 0;
    puVar18 = puVar12 + 0xf;
    do {
      uVar29 = *puVar18;
      if ((int)*puVar11 < (int)uVar29) {
        uVar38 = *(undefined8 *)(puVar12 + lVar26 * 5 + 0x10);
        *(undefined8 *)(puVar9 + -0x248) = *(undefined8 *)(puVar12 + lVar26 * 5 + 0x10 + 2);
        *(undefined8 *)(puVar9 + -0x250) = uVar38;
        lVar3 = lVar19;
        do {
          lVar15 = lVar3;
          *(undefined8 *)((long)puVar12 + lVar15 + 0x44) =
               *(undefined8 *)((long)puVar12 + lVar15 + 0x30);
          *(undefined8 *)((long)puVar12 + lVar15 + 0x3c) =
               *(undefined8 *)((long)puVar12 + lVar15 + 0x28);
          *(undefined4 *)((long)puVar12 + lVar15 + 0x4c) =
               *(undefined4 *)((long)puVar12 + lVar15 + 0x38);
          puVar11 = puVar12;
          if (lVar15 == -0x28) goto LAB_1092e8cb4;
          lVar3 = lVar15 + -0x14;
        } while (*(int *)((long)puVar12 + lVar15 + 0x14) < (int)uVar29);
        puVar11 = (uint *)((long)puVar12 + lVar15 + 0x28);
LAB_1092e8cb4:
        *puVar11 = uVar29;
        uVar38 = *(undefined8 *)(puVar9 + -0x250);
        *(undefined8 *)(puVar11 + 3) = *(undefined8 *)(puVar9 + -0x248);
        *(undefined8 *)(puVar11 + 1) = uVar38;
        iVar25 = iVar25 + 1;
        if (iVar25 == 8) {
          puVar11 = (uint *)(ulong)(puVar18 + 5 == param_2);
          goto LAB_1092e8da8;
        }
      }
      puVar32 = puVar18 + 5;
      lVar26 = lVar26 + 1;
      lVar19 = lVar19 + 0x14;
      puVar11 = puVar18;
      puVar18 = puVar32;
    } while (puVar32 != param_2);
  }
LAB_1092e8da4:
  puVar11 = (uint *)0x1;
LAB_1092e8da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x108)) {
    return puVar11;
  }
  ___stack_chk_fail();
  *(uint **)(puVar9 + -0x280) = unaff_x22;
  *(uint **)(puVar9 + -0x278) = unaff_x21;
  *(uint **)(puVar9 + -0x270) = unaff_x20;
  *(uint **)(puVar9 + -0x268) = unaff_x19;
  *(undefined1 **)(puVar9 + -0x260) = puVar9 + -0xf0;
  *(code **)(puVar9 + -600) = FUN_1092e8de4;
  lVar26 = *(long *)(puVar11 + 2) - *(long *)puVar11;
  uVar14 = (lVar26 >> 4) + 1;
  if (uVar14 >> 0x3c != 0) {
    FUN_1092e8f98();
    lVar26 = *(long *)(puVar9 + -0x298);
    if (lVar26 != *(long *)(puVar9 + -0x2a0)) {
      *(ulong *)(puVar9 + -0x298) =
           lVar26 + ((*(long *)(puVar9 + -0x2a0) - lVar26) + 0xfU & 0xfffffffffffffff0);
    }
    if (*(long *)(puVar9 + -0x2a8) != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar15 = *(long *)puVar11;
    lVar7 = *(long *)(puVar11 + 2);
    lVar3 = *(long *)(param_2 + 2) + (lVar15 - lVar7);
    lVar19 = lVar3;
    for (lVar26 = lVar15; lVar7 != lVar26; lVar26 = lVar26 + 0x10) {
      lVar27 = 0;
      do {
        *(undefined4 *)(lVar19 + lVar27) = *(undefined4 *)(lVar26 + lVar27);
        lVar27 = lVar27 + 4;
      } while (lVar27 != 0x10);
      lVar19 = lVar19 + 0x10;
    }
    *(long *)(param_2 + 2) = lVar3;
    lVar26 = *(long *)puVar11;
    *(long *)puVar11 = lVar3;
    *(long *)(puVar11 + 2) = lVar15;
    *(long *)(param_2 + 2) = lVar26;
    lVar26 = *(long *)(puVar11 + 2);
    *(long *)(puVar11 + 2) = *(long *)(param_2 + 4);
    *(long *)(param_2 + 4) = lVar26;
    lVar26 = *(long *)(puVar11 + 4);
    *(long *)(puVar11 + 4) = *(long *)(param_2 + 6);
    *(long *)(param_2 + 6) = lVar26;
    *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 2);
    return puVar11;
  }
  uVar16 = *(long *)(puVar11 + 4) - *(long *)puVar11;
  uVar17 = (long)uVar16 >> 3;
  if (uVar17 <= uVar14) {
    uVar17 = uVar14;
  }
  if (0x7fffffffffffffef < uVar16) {
    uVar17 = 0xfffffffffffffff;
  }
  *(uint **)(puVar9 + -0x288) = puVar11;
  if (uVar17 == 0) {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = puVar11;
    FUN_1092e8fac();
  }
  lVar19 = 0;
  lVar26 = (long)puVar12 + lVar26;
  *(uint **)(puVar9 + -0x2a8) = puVar12;
  *(long *)(puVar9 + -0x2a0) = lVar26;
  *(uint **)(puVar9 + -0x290) = puVar12 + uVar17 * 4;
  do {
    *(undefined4 *)(lVar26 + lVar19) = *(undefined4 *)((long)param_2 + lVar19);
    lVar19 = lVar19 + 4;
  } while (lVar19 != 0x10);
  *(long *)(puVar9 + -0x298) = lVar26 + 0x10;
  FUN_1092e8f14(puVar11,puVar9 + -0x2a8);
  puVar11 = *(uint **)(puVar11 + 2);
  lVar26 = *(long *)(puVar9 + -0x298);
  if (lVar26 != *(long *)(puVar9 + -0x2a0)) {
    *(ulong *)(puVar9 + -0x298) =
         lVar26 + ((*(long *)(puVar9 + -0x2a0) - lVar26) + 0xfU & 0xfffffffffffffff0);
  }
  if (*(long *)(puVar9 + -0x2a8) != 0) {
    __ZdlPv();
  }
  return puVar11;
}



/* Entry: 1092e78b0; end: 1092e8747;  */

uint * FUN_1092e78b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *puVar27;
  uint *unaff_x22;
  uint *puVar28;
  uint *puVar29;
  uint *unaff_x27;
  uint *puVar30;
  uint *unaff_x28;
  uint *puVar31;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auStack_f0 [8];
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  puVar10 = param_2;
  puVar28 = param_3;
  puVar29 = param_4;
  do {
    puVar27 = puVar10 + -5;
    puVar30 = puVar10 + -10;
    puStack_e0 = puVar10 + -9;
    puStack_d8 = puVar10 + -4;
    puVar31 = puVar10 + -0xf;
    puStack_e8 = puVar10 + -0xe;
    puVar21 = puVar9;
LAB_1092e7914:
    puVar9 = puVar21;
    uVar15 = (long)puVar10 - (long)puVar9;
    uVar12 = ((long)uVar15 >> 2) * -0x3333333333333333;
    puVar11 = puVar10;
    if (uVar12 - 2 != 0 && 1 < (long)uVar12) {
      if (uVar12 == 3) {
        puVar29 = puVar9 + 5;
        uVar20 = *puVar29;
        puVar21 = puVar10 + -5;
        uVar26 = *puVar9;
        if ((int)uVar26 < (int)uVar20) {
          if ((int)uVar20 < (int)*puVar21) {
            uStack_98 = *(undefined8 *)(puVar9 + 3);
            uStack_a0 = *(undefined8 *)(puVar9 + 1);
            uVar33 = *(undefined8 *)(puVar10 + -3);
            uVar32 = *(undefined8 *)puVar21;
            puVar9[4] = puVar10[-1];
            *(undefined8 *)(puVar9 + 2) = uVar33;
            *(undefined8 *)puVar9 = uVar32;
          }
          else {
            uStack_98 = *(undefined8 *)(puVar9 + 3);
            uStack_a0 = *(undefined8 *)(puVar9 + 1);
            *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar29;
            puVar9[4] = puVar9[9];
            puVar9[5] = uVar26;
            *(undefined8 *)(puVar9 + 8) = uStack_98;
            *(undefined8 *)(puVar9 + 6) = uStack_a0;
            if ((int)*puVar21 <= (int)uVar26) break;
            uStack_98 = *(undefined8 *)(puVar9 + 8);
            uStack_a0 = *(undefined8 *)(puVar9 + 6);
            uVar33 = *(undefined8 *)(puVar10 + -3);
            uVar32 = *(undefined8 *)puVar21;
            puVar9[9] = puVar10[-1];
            *(undefined8 *)(puVar9 + 7) = uVar33;
            *(undefined8 *)puVar29 = uVar32;
          }
          puVar10[-5] = uVar26;
          goto LAB_1092e862c;
        }
        if ((int)*puVar21 <= (int)uVar20) break;
        uStack_98 = *(undefined8 *)(puVar9 + 8);
        uStack_a0 = *(undefined8 *)(puVar9 + 6);
        uVar33 = *(undefined8 *)(puVar10 + -3);
        uVar32 = *(undefined8 *)puVar21;
        puVar9[9] = puVar10[-1];
        *(undefined8 *)(puVar9 + 7) = uVar33;
        *(undefined8 *)puVar29 = uVar32;
        puVar10[-5] = uVar20;
        *(undefined8 *)(puVar10 + -2) = uStack_98;
        *(undefined8 *)(puVar10 + -4) = uStack_a0;
      }
      else {
        if (uVar12 != 4) {
          if (uVar12 != 5) goto LAB_1092e795c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1092e8744;
          param_2 = puVar9 + 5;
          param_3 = puVar9 + 10;
          param_4 = puVar9 + 0xf;
          param_5 = puVar27;
          goto code_r0x0001092e8748;
        }
        puVar29 = puVar9 + 5;
        uVar20 = *puVar29;
        puVar21 = puVar9 + 10;
        uVar17 = *puVar21;
        uVar26 = *puVar9;
        if ((int)uVar26 < (int)uVar20) {
          if ((int)uVar20 < (int)uVar17) {
            uVar33 = *(undefined8 *)(puVar9 + 3);
            uVar32 = *(undefined8 *)(puVar9 + 1);
            *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 0xc);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar21;
            puVar9[4] = puVar9[0xe];
            puVar9[10] = uVar26;
            uStack_a0 = uVar32;
            uStack_98 = uVar33;
          }
          else {
            uStack_98 = *(undefined8 *)(puVar9 + 3);
            uStack_a0 = *(undefined8 *)(puVar9 + 1);
            *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar29;
            puVar9[4] = puVar9[9];
            puVar9[5] = uVar26;
            *(undefined8 *)(puVar9 + 8) = uStack_98;
            *(undefined8 *)(puVar9 + 6) = uStack_a0;
            if ((int)uVar17 <= (int)uVar26) goto LAB_1092e8680;
            uVar33 = *(undefined8 *)(puVar9 + 8);
            uVar32 = *(undefined8 *)(puVar9 + 6);
            *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
            *(undefined8 *)puVar29 = *(undefined8 *)puVar21;
            puVar9[9] = puVar9[0xe];
            puVar9[10] = uVar26;
          }
          *(undefined8 *)(puVar9 + 0xd) = uVar33;
          *(undefined8 *)(puVar9 + 0xb) = uVar32;
          uVar17 = uVar26;
        }
        else if ((int)uVar20 < (int)uVar17) {
          *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
          *(undefined8 *)puVar29 = *(undefined8 *)puVar21;
          puVar9[9] = puVar9[0xe];
          puVar9[10] = uVar20;
          *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)(puVar9 + 8);
          *(undefined8 *)(puVar9 + 0xb) = *(undefined8 *)(puVar9 + 6);
          uVar26 = *puVar9;
          uVar17 = uVar20;
          if ((int)uVar26 < (int)puVar9[5]) {
            uStack_98 = *(undefined8 *)(puVar9 + 3);
            uStack_a0 = *(undefined8 *)(puVar9 + 1);
            *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar29;
            puVar9[4] = puVar9[9];
            puVar9[5] = uVar26;
            *(undefined8 *)(puVar9 + 8) = uStack_98;
            *(undefined8 *)(puVar9 + 6) = uStack_a0;
          }
        }
LAB_1092e8680:
        if ((int)*puVar27 <= (int)uVar17) break;
        uStack_98 = *(undefined8 *)(puVar9 + 0xd);
        uStack_a0 = *(undefined8 *)(puVar9 + 0xb);
        uVar33 = *(undefined8 *)(puVar10 + -3);
        uVar32 = *(undefined8 *)puVar27;
        puVar9[0xe] = puVar10[-1];
        *(undefined8 *)(puVar9 + 0xc) = uVar33;
        *(undefined8 *)puVar21 = uVar32;
        puVar10[-5] = uVar17;
        *(undefined8 *)(puVar10 + -2) = uStack_98;
        *(undefined8 *)(puVar10 + -4) = uStack_a0;
        uVar26 = puVar9[5];
        if ((int)puVar9[10] <= (int)uVar26) break;
        *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
        *(undefined8 *)puVar29 = *(undefined8 *)puVar21;
        puVar9[9] = puVar9[0xe];
        puVar9[10] = uVar26;
        *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)(puVar9 + 8);
        *(undefined8 *)(puVar9 + 0xb) = *(undefined8 *)(puVar9 + 6);
      }
      uVar26 = *puVar9;
      if ((int)uVar26 < (int)puVar9[5]) {
        uStack_98 = *(undefined8 *)(puVar9 + 3);
        uStack_a0 = *(undefined8 *)(puVar9 + 1);
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
        *(undefined8 *)puVar9 = *(undefined8 *)(puVar9 + 5);
        puVar9[4] = puVar9[9];
        puVar9[5] = uVar26;
        *(undefined8 *)(puVar9 + 8) = uStack_98;
        *(undefined8 *)(puVar9 + 6) = uStack_a0;
      }
      break;
    }
    if (uVar12 < 2) break;
    if (uVar12 == 2) {
      uVar26 = *puVar9;
      if ((int)uVar26 < (int)puVar10[-5]) {
        uStack_98 = *(undefined8 *)(puVar9 + 3);
        uStack_a0 = *(undefined8 *)(puVar9 + 1);
        uVar33 = *(undefined8 *)(puVar10 + -3);
        uVar32 = *(undefined8 *)(puVar10 + -5);
        puVar9[4] = puVar10[-1];
        *(undefined8 *)(puVar9 + 2) = uVar33;
        *(undefined8 *)puVar9 = uVar32;
        puVar10[-5] = uVar26;
LAB_1092e862c:
        *(undefined8 *)(puVar10 + -2) = uStack_98;
        *(undefined8 *)(puVar10 + -4) = uStack_a0;
      }
      break;
    }
LAB_1092e795c:
    if ((long)uVar15 < 0x1e0) {
      if (((ulong)puVar29 & 1) == 0) {
        puVar29 = puVar9;
        if (puVar9 != puVar10) {
          while (puVar29 = puVar29 + 5, puVar29 != puVar10) {
            uVar26 = *puVar29;
            if ((int)*puVar9 < (int)uVar26) {
              lVar23 = 0;
              uStack_a0._4_4_ = (undefined4)((ulong)uStack_a0 >> 0x20);
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar26);
              do {
                *(undefined4 *)((long)&uStack_a0 + lVar23 + 4) =
                     *(undefined4 *)((long)puVar9 + lVar23 + 0x18);
                lVar23 = lVar23 + 4;
                puVar21 = puVar29;
              } while (lVar23 != 0x10);
              do {
                puVar8 = puVar21;
                *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + -3);
                *(undefined8 *)puVar8 = *(undefined8 *)(puVar8 + -5);
                puVar8[4] = puVar8[-1];
                puVar21 = puVar8 + -5;
              } while ((int)puVar8[-10] < (int)uVar26);
              puVar8[-1] = uStack_90;
              *(undefined8 *)(puVar8 + -3) = uStack_98;
              *(undefined8 *)(puVar8 + -5) = uStack_a0;
            }
            puVar9 = puVar9 + 5;
          }
        }
        break;
      }
      if ((puVar9 == puVar10) || (puVar29 = puVar9 + 5, puVar29 == puVar10)) break;
      lVar23 = 0;
      puVar21 = puVar9;
      goto LAB_1092e81e8;
    }
    if (puVar28 == (uint *)0x0) {
      if (puVar9 == puVar10) break;
      uVar19 = uVar12 - 2 >> 1;
      uVar14 = uVar19;
      goto LAB_1092e8294;
    }
    puVar21 = puVar9 + (uVar12 >> 1) * 5;
    uVar26 = *puVar27;
    if (uVar15 < 0xa01) {
      uVar20 = *puVar9;
      uVar17 = *puVar21;
      if ((int)uVar17 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar26) {
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          uVar33 = *(undefined8 *)(puVar10 + -3);
          uVar32 = *(undefined8 *)puVar27;
          puVar21[4] = puVar10[-1];
          *(undefined8 *)(puVar21 + 2) = uVar33;
          *(undefined8 *)puVar21 = uVar32;
        }
        else {
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          uVar33 = *(undefined8 *)(puVar9 + 2);
          uVar32 = *(undefined8 *)puVar9;
          puVar21[4] = puVar9[4];
          *(undefined8 *)(puVar21 + 2) = uVar33;
          *(undefined8 *)puVar21 = uVar32;
          *puVar9 = uVar17;
          *(undefined8 *)(puVar9 + 3) = uStack_98;
          *(undefined8 *)(puVar9 + 1) = uStack_a0;
          if ((int)*puVar27 <= (int)uVar17) goto LAB_1092e7e88;
          uStack_98 = *(undefined8 *)(puVar9 + 3);
          uStack_a0 = *(undefined8 *)(puVar9 + 1);
          uVar33 = *(undefined8 *)(puVar10 + -3);
          uVar32 = *(undefined8 *)puVar27;
          puVar9[4] = puVar10[-1];
          *(undefined8 *)(puVar9 + 2) = uVar33;
          *(undefined8 *)puVar9 = uVar32;
        }
        *puVar27 = uVar17;
        *(undefined8 *)(puStack_d8 + 2) = uStack_98;
        *(undefined8 *)puStack_d8 = uStack_a0;
      }
      else if ((int)uVar20 < (int)uVar26) {
        uStack_98 = *(undefined8 *)(puVar9 + 3);
        uStack_a0 = *(undefined8 *)(puVar9 + 1);
        uVar33 = *(undefined8 *)(puVar10 + -3);
        uVar32 = *(undefined8 *)puVar27;
        puVar9[4] = puVar10[-1];
        *(undefined8 *)(puVar9 + 2) = uVar33;
        *(undefined8 *)puVar9 = uVar32;
        *puVar27 = uVar20;
        *(undefined8 *)(puStack_d8 + 2) = uStack_98;
        *(undefined8 *)puStack_d8 = uStack_a0;
        uVar26 = *puVar21;
        if ((int)uVar26 < (int)*puVar9) {
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          uVar33 = *(undefined8 *)(puVar9 + 2);
          uVar32 = *(undefined8 *)puVar9;
          puVar21[4] = puVar9[4];
          *(undefined8 *)(puVar21 + 2) = uVar33;
          *(undefined8 *)puVar21 = uVar32;
          *puVar9 = uVar26;
          *(undefined8 *)(puVar9 + 3) = uStack_98;
          *(undefined8 *)(puVar9 + 1) = uStack_a0;
        }
      }
    }
    else {
      uVar20 = *puVar21;
      uVar17 = *puVar9;
      if ((int)uVar17 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar26) {
          uStack_98 = *(undefined8 *)(puVar9 + 3);
          uStack_a0 = *(undefined8 *)(puVar9 + 1);
          uVar33 = *(undefined8 *)(puVar10 + -3);
          uVar32 = *(undefined8 *)puVar27;
          puVar9[4] = puVar10[-1];
          *(undefined8 *)(puVar9 + 2) = uVar33;
          *(undefined8 *)puVar9 = uVar32;
        }
        else {
          uVar34 = *(undefined8 *)(puVar9 + 3);
          uVar32 = *(undefined8 *)(puVar9 + 1);
          uVar35 = *(undefined8 *)(puVar21 + 2);
          uVar33 = *(undefined8 *)puVar21;
          puVar9[4] = puVar21[4];
          *(undefined8 *)(puVar9 + 2) = uVar35;
          *(undefined8 *)puVar9 = uVar33;
          *puVar21 = uVar17;
          *(undefined8 *)(puVar21 + 3) = uVar34;
          *(undefined8 *)(puVar21 + 1) = uVar32;
          if ((int)*puVar27 <= (int)uVar17) goto LAB_1092e7b10;
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          uVar33 = *(undefined8 *)(puVar10 + -3);
          uVar32 = *(undefined8 *)puVar27;
          puVar21[4] = puVar10[-1];
          *(undefined8 *)(puVar21 + 2) = uVar33;
          *(undefined8 *)puVar21 = uVar32;
        }
        *puVar27 = uVar17;
        *(undefined8 *)(puStack_d8 + 2) = uStack_98;
        *(undefined8 *)puStack_d8 = uStack_a0;
      }
      else if ((int)uVar20 < (int)uVar26) {
        uVar34 = *(undefined8 *)(puVar21 + 3);
        uVar32 = *(undefined8 *)(puVar21 + 1);
        uVar35 = *(undefined8 *)(puVar10 + -3);
        uVar33 = *(undefined8 *)puVar27;
        puVar21[4] = puVar10[-1];
        *(undefined8 *)(puVar21 + 2) = uVar35;
        *(undefined8 *)puVar21 = uVar33;
        *puVar27 = uVar20;
        *(undefined8 *)(puStack_d8 + 2) = uVar34;
        *(undefined8 *)puStack_d8 = uVar32;
        uVar26 = *puVar9;
        if ((int)uVar26 < (int)*puVar21) {
          uVar34 = *(undefined8 *)(puVar9 + 3);
          uVar32 = *(undefined8 *)(puVar9 + 1);
          uVar35 = *(undefined8 *)(puVar21 + 2);
          uVar33 = *(undefined8 *)puVar21;
          puVar9[4] = puVar21[4];
          *(undefined8 *)(puVar9 + 2) = uVar35;
          *(undefined8 *)puVar9 = uVar33;
          *puVar21 = uVar26;
          *(undefined8 *)(puVar21 + 3) = uVar34;
          *(undefined8 *)(puVar21 + 1) = uVar32;
        }
      }
LAB_1092e7b10:
      puVar8 = puVar9 + 5;
      uVar26 = *puVar8;
      puVar11 = puVar21 + -5;
      uVar20 = *puVar11;
      if ((int)uVar26 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar30) {
          uStack_98 = *(undefined8 *)(puVar9 + 8);
          uStack_a0 = *(undefined8 *)(puVar9 + 6);
          uVar33 = *(undefined8 *)(puVar10 + -8);
          uVar32 = *(undefined8 *)puVar30;
          puVar9[9] = puVar10[-6];
          *(undefined8 *)(puVar9 + 7) = uVar33;
          *(undefined8 *)puVar8 = uVar32;
        }
        else {
          uVar34 = *(undefined8 *)(puVar9 + 8);
          uVar32 = *(undefined8 *)(puVar9 + 6);
          uVar35 = *(undefined8 *)(puVar21 + -3);
          uVar33 = *(undefined8 *)puVar11;
          puVar9[9] = puVar21[-1];
          *(undefined8 *)(puVar9 + 7) = uVar35;
          *(undefined8 *)puVar8 = uVar33;
          puVar21[-5] = uVar26;
          *(undefined8 *)(puVar21 + -2) = uVar34;
          *(undefined8 *)(puVar21 + -4) = uVar32;
          if ((int)*puVar30 <= (int)uVar26) goto LAB_1092e7c74;
          uStack_98 = *(undefined8 *)(puVar21 + -2);
          uStack_a0 = *(undefined8 *)(puVar21 + -4);
          uVar33 = *(undefined8 *)(puVar10 + -8);
          uVar32 = *(undefined8 *)puVar30;
          puVar21[-1] = puVar10[-6];
          *(undefined8 *)(puVar21 + -3) = uVar33;
          *(undefined8 *)puVar11 = uVar32;
        }
        *puVar30 = uVar26;
        *(undefined8 *)(puStack_e0 + 2) = uStack_98;
        *(undefined8 *)puStack_e0 = uStack_a0;
      }
      else if ((int)uVar20 < (int)*puVar30) {
        uVar34 = *(undefined8 *)(puVar21 + -2);
        uVar32 = *(undefined8 *)(puVar21 + -4);
        uVar35 = *(undefined8 *)(puVar10 + -8);
        uVar33 = *(undefined8 *)puVar30;
        puVar21[-1] = puVar10[-6];
        *(undefined8 *)(puVar21 + -3) = uVar35;
        *(undefined8 *)puVar11 = uVar33;
        *puVar30 = uVar20;
        *(undefined8 *)(puStack_e0 + 2) = uVar34;
        *(undefined8 *)puStack_e0 = uVar32;
        uVar26 = *puVar8;
        if ((int)uVar26 < (int)puVar21[-5]) {
          uVar34 = *(undefined8 *)(puVar9 + 8);
          uVar32 = *(undefined8 *)(puVar9 + 6);
          uVar35 = *(undefined8 *)(puVar21 + -3);
          uVar33 = *(undefined8 *)puVar11;
          puVar9[9] = puVar21[-1];
          *(undefined8 *)(puVar9 + 7) = uVar35;
          *(undefined8 *)puVar8 = uVar33;
          *puVar11 = uVar26;
          *(undefined8 *)(puVar21 + -2) = uVar34;
          *(undefined8 *)(puVar21 + -4) = uVar32;
        }
      }
LAB_1092e7c74:
      puVar18 = puVar9 + 10;
      uVar26 = *puVar18;
      puVar8 = puVar21 + 5;
      uVar20 = *puVar8;
      if ((int)uVar26 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar31) {
          uStack_98 = *(undefined8 *)(puVar9 + 0xd);
          uStack_a0 = *(undefined8 *)(puVar9 + 0xb);
          uVar33 = *(undefined8 *)(puVar10 + -0xd);
          uVar32 = *(undefined8 *)puVar31;
          puVar9[0xe] = puVar10[-0xb];
          *(undefined8 *)(puVar9 + 0xc) = uVar33;
          *(undefined8 *)puVar18 = uVar32;
        }
        else {
          uVar34 = *(undefined8 *)(puVar9 + 0xd);
          uVar32 = *(undefined8 *)(puVar9 + 0xb);
          uVar35 = *(undefined8 *)(puVar21 + 7);
          uVar33 = *(undefined8 *)puVar8;
          puVar9[0xe] = puVar21[9];
          *(undefined8 *)(puVar9 + 0xc) = uVar35;
          *(undefined8 *)puVar18 = uVar33;
          puVar21[5] = uVar26;
          *(undefined8 *)(puVar21 + 8) = uVar34;
          *(undefined8 *)(puVar21 + 6) = uVar32;
          if ((int)*puVar31 <= (int)uVar26) goto LAB_1092e7d74;
          uStack_98 = *(undefined8 *)(puVar21 + 8);
          uStack_a0 = *(undefined8 *)(puVar21 + 6);
          uVar33 = *(undefined8 *)(puVar10 + -0xd);
          uVar32 = *(undefined8 *)puVar31;
          puVar21[9] = puVar10[-0xb];
          *(undefined8 *)(puVar21 + 7) = uVar33;
          *(undefined8 *)puVar8 = uVar32;
        }
        *puVar31 = uVar26;
        *(undefined8 *)(puStack_e8 + 2) = uStack_98;
        *(undefined8 *)puStack_e8 = uStack_a0;
      }
      else if ((int)uVar20 < (int)*puVar31) {
        uVar34 = *(undefined8 *)(puVar21 + 8);
        uVar32 = *(undefined8 *)(puVar21 + 6);
        uVar35 = *(undefined8 *)(puVar10 + -0xd);
        uVar33 = *(undefined8 *)puVar31;
        puVar21[9] = puVar10[-0xb];
        *(undefined8 *)(puVar21 + 7) = uVar35;
        *(undefined8 *)puVar8 = uVar33;
        *puVar31 = uVar20;
        *(undefined8 *)(puStack_e8 + 2) = uVar34;
        *(undefined8 *)puStack_e8 = uVar32;
        uVar26 = *puVar18;
        if ((int)uVar26 < (int)puVar21[5]) {
          uVar34 = *(undefined8 *)(puVar9 + 0xd);
          uVar32 = *(undefined8 *)(puVar9 + 0xb);
          uVar35 = *(undefined8 *)(puVar21 + 7);
          uVar33 = *(undefined8 *)puVar8;
          puVar9[0xe] = puVar21[9];
          *(undefined8 *)(puVar9 + 0xc) = uVar35;
          *(undefined8 *)puVar18 = uVar33;
          *puVar8 = uVar26;
          *(undefined8 *)(puVar21 + 8) = uVar34;
          *(undefined8 *)(puVar21 + 6) = uVar32;
        }
      }
LAB_1092e7d74:
      uVar26 = *puVar21;
      uVar20 = puVar21[-5];
      if ((int)uVar20 < (int)uVar26) {
        if ((int)uVar26 < (int)puVar21[5]) {
          uStack_98 = *(undefined8 *)(puVar21 + -2);
          uStack_a0 = *(undefined8 *)(puVar21 + -4);
          *(undefined8 *)(puVar21 + -3) = *(undefined8 *)(puVar21 + 7);
          *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
          puVar21[-1] = puVar21[9];
        }
        else {
          *(undefined8 *)(puVar21 + -3) = *(undefined8 *)(puVar21 + 2);
          *(undefined8 *)puVar11 = *(undefined8 *)puVar21;
          puVar21[-1] = puVar21[4];
          *puVar21 = uVar20;
          *(undefined8 *)(puVar21 + 3) = *(undefined8 *)(puVar21 + -2);
          *(undefined8 *)(puVar21 + 1) = *(undefined8 *)(puVar21 + -4);
          if ((int)puVar21[5] <= (int)uVar20) goto LAB_1092e7e60;
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(puVar21 + 7);
          *(undefined8 *)puVar21 = *(undefined8 *)puVar8;
          puVar21[4] = puVar21[9];
        }
        puVar21[5] = uVar20;
        *(undefined8 *)(puVar21 + 8) = uStack_98;
        *(undefined8 *)(puVar21 + 6) = uStack_a0;
      }
      else if ((int)uVar26 < (int)puVar21[5]) {
        *(undefined8 *)(puVar21 + 2) = *(undefined8 *)(puVar21 + 7);
        *(undefined8 *)puVar21 = *(undefined8 *)puVar8;
        puVar21[4] = puVar21[9];
        puVar21[5] = uVar26;
        *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(puVar21 + 3);
        *(undefined8 *)(puVar21 + 6) = *(undefined8 *)(puVar21 + 1);
        uVar26 = puVar21[-5];
        if ((int)uVar26 < (int)*puVar21) {
          *(undefined8 *)(puVar21 + -3) = *(undefined8 *)(puVar21 + 2);
          *(undefined8 *)puVar11 = *(undefined8 *)puVar21;
          puVar21[-1] = puVar21[4];
          *puVar21 = uVar26;
          *(undefined8 *)(puVar21 + 3) = *(undefined8 *)(puVar21 + -2);
          *(undefined8 *)(puVar21 + 1) = *(undefined8 *)(puVar21 + -4);
        }
      }
LAB_1092e7e60:
      uVar26 = *puVar9;
      uStack_98 = *(undefined8 *)(puVar9 + 3);
      uStack_a0 = *(undefined8 *)(puVar9 + 1);
      uVar33 = *(undefined8 *)(puVar21 + 2);
      uVar32 = *(undefined8 *)puVar21;
      puVar9[4] = puVar21[4];
      *(undefined8 *)(puVar9 + 2) = uVar33;
      *(undefined8 *)puVar9 = uVar32;
      *puVar21 = uVar26;
      *(undefined8 *)(puVar21 + 3) = uStack_98;
      *(undefined8 *)(puVar21 + 1) = uStack_a0;
    }
LAB_1092e7e88:
    puVar28 = (uint *)((long)puVar28 + -1);
    uVar26 = *puVar9;
    if ((((ulong)puVar29 & 1) == 0) && ((int)puVar9[-5] <= (int)uVar26)) {
      uStack_78 = *(undefined8 *)(puVar9 + 3);
      uStack_80 = *(undefined8 *)(puVar9 + 1);
      puVar21 = puVar9;
      if ((int)*puVar27 < (int)uVar26) {
        do {
          puVar21 = puVar21 + 5;
        } while ((int)uVar26 <= (int)*puVar21);
      }
      else {
        do {
          puVar21 = puVar21 + 5;
          if (puVar10 <= puVar21) break;
        } while ((int)uVar26 <= (int)*puVar21);
      }
      puVar29 = puVar10;
      if (puVar21 < puVar10) {
        do {
          puVar29 = puVar29 + -5;
        } while ((int)*puVar29 < (int)uVar26);
      }
      if (puVar21 < puVar29) {
        uVar20 = *puVar21;
        do {
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          uVar33 = *(undefined8 *)(puVar29 + 2);
          uVar32 = *(undefined8 *)puVar29;
          puVar21[4] = puVar29[4];
          *(undefined8 *)(puVar21 + 2) = uVar33;
          *(undefined8 *)puVar21 = uVar32;
          *puVar29 = uVar20;
          *(undefined8 *)(puVar29 + 3) = uStack_98;
          *(undefined8 *)(puVar29 + 1) = uStack_a0;
          do {
            puVar21 = puVar21 + 5;
            uVar20 = *puVar21;
          } while ((int)uVar26 <= (int)uVar20);
          do {
            puVar29 = puVar29 + -5;
          } while ((int)*puVar29 < (int)uVar26);
        } while (puVar21 < puVar29);
      }
      if (puVar21 + -5 != puVar9) {
        uVar33 = *(undefined8 *)(puVar21 + -3);
        uVar32 = *(undefined8 *)(puVar21 + -5);
        puVar9[4] = puVar21[-1];
        *(undefined8 *)(puVar9 + 2) = uVar33;
        *(undefined8 *)puVar9 = uVar32;
      }
      puVar29 = (uint *)0x0;
      puVar21[-5] = uVar26;
      *(undefined8 *)(puVar21 + -2) = uStack_78;
      *(undefined8 *)(puVar21 + -4) = uStack_80;
      goto LAB_1092e7914;
    }
    lVar23 = 0;
    uStack_78 = *(undefined8 *)(puVar9 + 3);
    uStack_80 = *(undefined8 *)(puVar9 + 1);
    do {
      uVar20 = *(uint *)((long)puVar9 + lVar23 + 0x14);
      lVar23 = lVar23 + 0x14;
    } while ((int)uVar26 < (int)uVar20);
    puVar8 = (uint *)((long)puVar9 + lVar23);
    puVar18 = puVar10;
    if (lVar23 == 0x14) {
      do {
        if (puVar18 <= puVar8) break;
        puVar18 = puVar18 + -5;
      } while ((int)*puVar18 <= (int)uVar26);
    }
    else {
      do {
        puVar18 = puVar18 + -5;
      } while ((int)*puVar18 <= (int)uVar26);
    }
    puVar21 = puVar8;
    puVar11 = puVar18;
    if (puVar8 < puVar18) {
      do {
        uStack_98 = *(undefined8 *)(puVar21 + 3);
        uStack_a0 = *(undefined8 *)(puVar21 + 1);
        uVar33 = *(undefined8 *)(puVar11 + 2);
        uVar32 = *(undefined8 *)puVar11;
        puVar21[4] = puVar11[4];
        *(undefined8 *)(puVar21 + 2) = uVar33;
        *(undefined8 *)puVar21 = uVar32;
        *puVar11 = uVar20;
        *(undefined8 *)(puVar11 + 3) = uStack_98;
        *(undefined8 *)(puVar11 + 1) = uStack_a0;
        do {
          puVar21 = puVar21 + 5;
          uVar20 = *puVar21;
        } while ((int)uVar26 < (int)uVar20);
        do {
          puVar11 = puVar11 + -5;
        } while ((int)*puVar11 <= (int)uVar26);
      } while (puVar21 < puVar11);
    }
    puVar11 = puVar21 + -5;
    if (puVar11 != puVar9) {
      uVar33 = *(undefined8 *)(puVar21 + -3);
      uVar32 = *(undefined8 *)puVar11;
      puVar9[4] = puVar21[-1];
      *(undefined8 *)(puVar9 + 2) = uVar33;
      *(undefined8 *)puVar9 = uVar32;
    }
    *puVar11 = uVar26;
    *(undefined8 *)(puVar21 + -2) = uStack_78;
    *(undefined8 *)(puVar21 + -4) = uStack_80;
    if (puVar8 < puVar18) goto LAB_1092e7fac;
    puVar8 = puVar9;
    FUN_1092e8994(puVar9,puVar11);
    param_1 = puVar21;
    param_2 = puVar10;
    FUN_1092e8994();
    if ((int)param_1 == 0) goto code_r0x0001092e7fa8;
    puVar10 = puVar11;
  } while (((ulong)puVar8 & 1) == 0);
  goto LAB_1092e870c;
LAB_1092e81e8:
  do {
    uVar26 = *puVar29;
    if ((int)*puVar21 < (int)uVar26) {
      lVar16 = 0;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar26);
      do {
        *(undefined4 *)((long)&uStack_a0 + lVar16 + 4) =
             *(undefined4 *)((long)puVar21 + lVar16 + 0x18);
        lVar16 = lVar16 + 4;
        lVar3 = lVar23;
      } while (lVar16 != 0x10);
      do {
        lVar16 = lVar3;
        puVar2 = (undefined8 *)((long)puVar9 + lVar16);
        *(undefined8 *)((long)puVar2 + 0x1c) = puVar2[1];
        *(undefined8 *)((long)puVar2 + 0x14) = *puVar2;
        *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar2 + 2);
        puVar8 = puVar9;
        if (lVar16 == 0) goto LAB_1092e8258;
        lVar3 = lVar16 + -0x14;
      } while (*(int *)((long)puVar2 + -0x14) < (int)uVar26);
      puVar8 = (uint *)((long)puVar9 + lVar16);
LAB_1092e8258:
      puVar8[4] = uStack_90;
      *(undefined8 *)(puVar8 + 2) = uStack_98;
      *(undefined8 *)puVar8 = uStack_a0;
    }
    puVar29 = puVar29 + 5;
    puVar21 = puVar21 + 5;
    lVar23 = lVar23 + 0x14;
  } while (puVar29 != puVar10);
  goto LAB_1092e870c;
code_r0x0001092e7fa8:
  if (((ulong)puVar8 & 1) == 0) {
LAB_1092e7fac:
    param_4 = (uint *)(ulong)((uint)puVar29 & 1);
    param_3 = puVar28;
    FUN_1092e78b0();
    puVar29 = (uint *)0x0;
    param_1 = puVar9;
    param_2 = puVar11;
  }
  goto LAB_1092e7914;
LAB_1092e8294:
  do {
    if ((long)uVar14 <= (long)uVar19) {
      uVar4 = uVar14 << 1 | 1;
      puVar29 = puVar9 + uVar4 * 5;
      uVar25 = uVar14 * 2 + 2;
      if ((long)uVar25 < (long)uVar12) {
        uVar20 = *puVar29;
        uVar17 = puVar29[5];
        uVar26 = uVar20;
        if ((int)uVar17 <= (int)uVar20) {
          uVar26 = uVar17;
        }
        puVar21 = puVar29 + 5;
        if ((int)uVar20 <= (int)uVar17) {
          puVar21 = puVar29;
          uVar25 = uVar4;
        }
      }
      else {
        uVar26 = *puVar29;
        puVar21 = puVar29;
        uVar25 = uVar4;
      }
      puVar29 = puVar9 + uVar14 * 5;
      uVar20 = *puVar29;
      if ((int)uVar26 <= (int)uVar20) {
        uStack_98 = *(undefined8 *)(puVar29 + 3);
        uStack_a0 = *(undefined8 *)(puVar29 + 1);
        do {
          puVar11 = puVar21;
          uVar33 = *(undefined8 *)(puVar11 + 2);
          uVar32 = *(undefined8 *)puVar11;
          puVar29[4] = puVar11[4];
          *(undefined8 *)(puVar29 + 2) = uVar33;
          *(undefined8 *)puVar29 = uVar32;
          if ((long)uVar19 < (long)uVar25) break;
          uVar4 = uVar25 << 1 | 1;
          puVar29 = puVar9 + uVar4 * 5;
          uVar25 = uVar25 * 2 + 2;
          if ((long)uVar25 < (long)uVar12) {
            uVar17 = *puVar29;
            uVar7 = puVar29[5];
            uVar26 = uVar17;
            if ((int)uVar7 <= (int)uVar17) {
              uVar26 = uVar7;
            }
            puVar21 = puVar29 + 5;
            if ((int)uVar17 <= (int)uVar7) {
              puVar21 = puVar29;
              uVar25 = uVar4;
            }
          }
          else {
            uVar26 = *puVar29;
            puVar21 = puVar29;
            uVar25 = uVar4;
          }
          puVar29 = puVar11;
        } while ((int)uVar26 <= (int)uVar20);
        *puVar11 = uVar20;
        *(undefined8 *)(puVar11 + 3) = uStack_98;
        *(undefined8 *)(puVar11 + 1) = uStack_a0;
      }
    }
    bVar5 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar5);
  lVar23 = (uVar15 >> 2) * -0x3333333333333333;
  do {
    uVar12 = 0;
    uVar26 = *puVar9;
    uStack_78 = *(undefined8 *)(puVar9 + 3);
    uStack_80 = *(undefined8 *)(puVar9 + 1);
    puVar29 = puVar9;
    do {
      puVar11 = puVar29 + uVar12 * 5;
      param_3 = (uint *)(uVar12 * 2);
      uVar14 = uVar12 << 1 | 1;
      uVar15 = (long)param_3 + 2;
      param_2 = puVar11;
      puVar21 = puVar11 + 5;
      uVar12 = uVar14;
      if ((long)uVar15 < lVar23) {
        param_2 = puVar11 + 10;
        param_3 = (uint *)(ulong)*param_2;
        param_4 = (uint *)(ulong)puVar11[5];
        puVar21 = param_2;
        uVar12 = uVar15;
        if ((int)puVar11[5] <= (int)*param_2) {
          puVar21 = puVar11 + 5;
          uVar12 = uVar14;
        }
      }
      uVar33 = *(undefined8 *)(puVar21 + 2);
      uVar32 = *(undefined8 *)puVar21;
      param_1 = (uint *)(ulong)puVar21[4];
      puVar29[4] = puVar21[4];
      *(undefined8 *)(puVar29 + 2) = uVar33;
      *(undefined8 *)puVar29 = uVar32;
      puVar29 = puVar21;
    } while ((long)uVar12 <= (long)(lVar23 - 2U >> 1));
    puVar11 = puVar10 + -5;
    if (puVar21 == puVar11) {
      *puVar21 = uVar26;
      *(undefined8 *)(puVar21 + 3) = uStack_78;
      *(undefined8 *)(puVar21 + 1) = uStack_80;
    }
    else {
      uVar33 = *(undefined8 *)(puVar10 + -3);
      uVar32 = *(undefined8 *)puVar11;
      puVar21[4] = puVar10[-1];
      *(undefined8 *)(puVar21 + 2) = uVar33;
      *(undefined8 *)puVar21 = uVar32;
      puVar10[-5] = uVar26;
      *(undefined8 *)(puVar10 + -2) = uStack_78;
      *(undefined8 *)(puVar10 + -4) = uStack_80;
      uVar12 = (long)puVar21 + (0x14 - (long)puVar9);
      if (0x14 < (long)uVar12) {
        uVar12 = (uVar12 >> 2) * -0x3333333333333333 - 2 >> 1;
        uVar26 = *puVar21;
        if ((int)uVar26 < (int)puVar9[uVar12 * 5]) {
          uStack_98 = *(undefined8 *)(puVar21 + 3);
          uStack_a0 = *(undefined8 *)(puVar21 + 1);
          puVar10 = puVar9 + uVar12 * 5;
          do {
            puVar29 = puVar10;
            uVar33 = *(undefined8 *)(puVar29 + 2);
            uVar32 = *(undefined8 *)puVar29;
            puVar21[4] = puVar29[4];
            *(undefined8 *)(puVar21 + 2) = uVar33;
            *(undefined8 *)puVar21 = uVar32;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            puVar21 = puVar29;
            puVar10 = puVar9 + uVar12 * 5;
          } while ((int)uVar26 < (int)puVar9[uVar12 * 5]);
          *puVar29 = uVar26;
          *(undefined8 *)(puVar29 + 3) = uStack_98;
          *(undefined8 *)(puVar29 + 1) = uStack_a0;
        }
      }
    }
    bVar5 = 2 < lVar23;
    lVar23 = lVar23 + -1;
    puVar10 = puVar11;
  } while (bVar5);
LAB_1092e870c:
  puVar10 = puVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
LAB_1092e8744:
  unaff_x22 = puVar28;
  unaff_x20 = puVar10;
  unaff_x19 = puVar9;
  puVar9 = param_1;
  unaff_x30 = FUN_1092e8748;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_f0;
  unaff_x21 = puVar27;
  unaff_x27 = puVar30;
  unaff_x28 = puVar31;
  unaff_x29 = puVar1;
code_r0x0001092e8748:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = *param_2;
  uVar20 = *puVar9;
  uVar17 = *param_3;
  if ((int)uVar20 < (int)uVar26) {
    if ((int)uVar26 < (int)uVar17) {
      uVar33 = *(undefined8 *)(puVar9 + 3);
      uVar32 = *(undefined8 *)(puVar9 + 1);
      uVar26 = param_3[4];
      uVar34 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar9 = uVar34;
      puVar9[4] = uVar26;
    }
    else {
      uVar33 = *(undefined8 *)(puVar9 + 3);
      uVar32 = *(undefined8 *)(puVar9 + 1);
      uVar26 = param_2[4];
      uVar34 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar9 = uVar34;
      puVar9[4] = uVar26;
      *param_2 = uVar20;
      *(undefined8 *)(param_2 + 3) = uVar33;
      *(undefined8 *)(param_2 + 1) = uVar32;
      uVar17 = *param_3;
      if ((int)*param_3 <= (int)uVar20) goto LAB_1092e883c;
      uVar33 = *(undefined8 *)(param_2 + 3);
      uVar32 = *(undefined8 *)(param_2 + 1);
      uVar26 = param_3[4];
      uVar34 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar34;
      param_2[4] = uVar26;
    }
    *param_3 = uVar20;
    *(undefined8 *)(param_3 + 3) = uVar33;
    *(undefined8 *)(param_3 + 1) = uVar32;
    uVar17 = uVar20;
  }
  else if ((int)uVar26 < (int)uVar17) {
    uVar33 = *(undefined8 *)(param_2 + 3);
    uVar32 = *(undefined8 *)(param_2 + 1);
    uVar20 = param_3[4];
    uVar34 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar34;
    param_2[4] = uVar20;
    *param_3 = uVar26;
    *(undefined8 *)(param_3 + 3) = uVar33;
    *(undefined8 *)(param_3 + 1) = uVar32;
    uVar20 = *puVar9;
    uVar17 = uVar26;
    if ((int)uVar20 < (int)*param_2) {
      uVar33 = *(undefined8 *)(puVar9 + 3);
      uVar32 = *(undefined8 *)(puVar9 + 1);
      uVar26 = param_2[4];
      uVar34 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar9 = uVar34;
      puVar9[4] = uVar26;
      *param_2 = uVar20;
      *(undefined8 *)(param_2 + 3) = uVar33;
      *(undefined8 *)(param_2 + 1) = uVar32;
      uVar17 = *param_3;
    }
  }
LAB_1092e883c:
  if ((int)uVar17 < (int)*param_4) {
    uVar33 = *(undefined8 *)(param_3 + 3);
    uVar32 = *(undefined8 *)(param_3 + 1);
    uVar26 = param_4[4];
    uVar34 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar34;
    param_3[4] = uVar26;
    *param_4 = uVar17;
    *(undefined8 *)(param_4 + 3) = uVar33;
    *(undefined8 *)(param_4 + 1) = uVar32;
    uVar26 = *param_2;
    if ((int)uVar26 < (int)*param_3) {
      uVar33 = *(undefined8 *)(param_2 + 3);
      uVar32 = *(undefined8 *)(param_2 + 1);
      uVar20 = param_3[4];
      uVar34 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar34;
      param_2[4] = uVar20;
      *param_3 = uVar26;
      *(undefined8 *)(param_3 + 3) = uVar33;
      *(undefined8 *)(param_3 + 1) = uVar32;
      uVar26 = *puVar9;
      if ((int)uVar26 < (int)*param_2) {
        uVar33 = *(undefined8 *)(puVar9 + 3);
        uVar32 = *(undefined8 *)(puVar9 + 1);
        uVar20 = param_2[4];
        uVar34 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar9 = uVar34;
        puVar9[4] = uVar20;
        *param_2 = uVar26;
        *(undefined8 *)(param_2 + 3) = uVar33;
        *(undefined8 *)(param_2 + 1) = uVar32;
      }
    }
  }
  uVar26 = *param_4;
  if ((int)uVar26 < (int)*param_5) {
    uVar33 = *(undefined8 *)(param_4 + 3);
    uVar32 = *(undefined8 *)(param_4 + 1);
    uVar20 = param_5[4];
    uVar34 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar34;
    param_4[4] = uVar20;
    *param_5 = uVar26;
    *(undefined8 *)(param_5 + 3) = uVar33;
    *(undefined8 *)(param_5 + 1) = uVar32;
    uVar26 = *param_3;
    if ((int)uVar26 < (int)*param_4) {
      uVar33 = *(undefined8 *)(param_3 + 3);
      uVar32 = *(undefined8 *)(param_3 + 1);
      uVar20 = param_4[4];
      uVar34 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar34;
      param_3[4] = uVar20;
      *param_4 = uVar26;
      *(undefined8 *)(param_4 + 3) = uVar33;
      *(undefined8 *)(param_4 + 1) = uVar32;
      uVar26 = *param_2;
      if ((int)uVar26 < (int)*param_3) {
        uVar33 = *(undefined8 *)(param_2 + 3);
        uVar32 = *(undefined8 *)(param_2 + 1);
        uVar20 = param_3[4];
        uVar34 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar34;
        param_2[4] = uVar20;
        *param_3 = uVar26;
        *(undefined8 *)(param_3 + 3) = uVar33;
        *(undefined8 *)(param_3 + 1) = uVar32;
        uVar26 = *puVar9;
        if ((int)uVar26 < (int)*param_2) {
          uVar33 = *(undefined8 *)(puVar9 + 3);
          uVar32 = *(undefined8 *)(puVar9 + 1);
          uVar20 = param_2[4];
          uVar34 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar9 = uVar34;
          puVar9[4] = uVar20;
          *param_2 = uVar26;
          *(undefined8 *)(param_2 + 3) = uVar33;
          *(undefined8 *)(param_2 + 1) = uVar32;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x18)) {
    return puVar9;
  }
  ___stack_chk_fail();
  *(uint **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(uint **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0xe8) = FUN_1092e8994;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = ((long)param_2 - (long)puVar9 >> 2) * -0x3333333333333333;
  if (2 < (long)uVar12) {
    if (uVar12 == 3) {
      puVar10 = puVar9 + 5;
      uVar20 = *puVar10;
      puVar28 = param_2 + -5;
      uVar26 = *puVar9;
      if ((int)uVar26 < (int)uVar20) {
        if ((int)uVar20 < (int)*puVar28) {
          uVar33 = *(undefined8 *)(puVar9 + 3);
          uVar32 = *(undefined8 *)(puVar9 + 1);
          uVar20 = param_2[-1];
          uVar34 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)puVar9 = uVar34;
          puVar9[4] = uVar20;
        }
        else {
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
          puVar9[4] = puVar9[9];
          puVar9[5] = uVar26;
          *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
          if ((int)*puVar28 <= (int)uVar26) goto LAB_1092e8da4;
          uVar33 = *(undefined8 *)(puVar9 + 8);
          uVar32 = *(undefined8 *)(puVar9 + 6);
          uVar20 = param_2[-1];
          uVar34 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)puVar10 = uVar34;
          puVar9[9] = uVar20;
        }
        param_2[-5] = uVar26;
        goto LAB_1092e8bf4;
      }
      if ((int)*puVar28 <= (int)uVar20) goto LAB_1092e8da4;
      uVar33 = *(undefined8 *)(puVar9 + 8);
      uVar32 = *(undefined8 *)(puVar9 + 6);
      uVar26 = param_2[-1];
      uVar34 = *(undefined8 *)puVar28;
      *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar10 = uVar34;
      puVar9[9] = uVar26;
      param_2[-5] = uVar20;
      *(undefined8 *)(param_2 + -2) = uVar33;
      *(undefined8 *)(param_2 + -4) = uVar32;
    }
    else {
      if (uVar12 != 4) {
        if (uVar12 == 5) {
          param_2 = puVar9 + 5;
          FUN_1092e8748();
          goto LAB_1092e8da4;
        }
        goto LAB_1092e8a78;
      }
      puVar10 = puVar9 + 5;
      uVar20 = *puVar10;
      puVar28 = puVar9 + 10;
      uVar17 = *puVar28;
      uVar26 = *puVar9;
      if ((int)uVar26 < (int)uVar20) {
        if ((int)uVar20 < (int)uVar17) {
          uVar33 = *(undefined8 *)(puVar9 + 3);
          uVar32 = *(undefined8 *)(puVar9 + 1);
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 0xc);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar28;
          puVar9[4] = puVar9[0xe];
        }
        else {
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
          puVar9[4] = puVar9[9];
          puVar9[5] = uVar26;
          *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
          if ((int)uVar17 <= (int)uVar26) goto LAB_1092e8d28;
          uVar33 = *(undefined8 *)(puVar9 + 8);
          uVar32 = *(undefined8 *)(puVar9 + 6);
          *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
          *(undefined8 *)puVar10 = *(undefined8 *)puVar28;
          puVar9[9] = puVar9[0xe];
        }
        puVar9[10] = uVar26;
        *(undefined8 *)(puVar9 + 0xd) = uVar33;
        *(undefined8 *)(puVar9 + 0xb) = uVar32;
        uVar17 = uVar26;
      }
      else if ((int)uVar20 < (int)uVar17) {
        *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
        *(undefined8 *)puVar10 = *(undefined8 *)puVar28;
        puVar9[9] = puVar9[0xe];
        puVar9[10] = uVar20;
        *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)(puVar9 + 8);
        *(undefined8 *)(puVar9 + 0xb) = *(undefined8 *)(puVar9 + 6);
        uVar17 = uVar20;
        if ((int)uVar26 < (int)puVar9[5]) {
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
          puVar9[4] = puVar9[9];
          puVar9[5] = uVar26;
          *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
        }
      }
LAB_1092e8d28:
      if ((int)param_2[-5] <= (int)uVar17) goto LAB_1092e8da4;
      uVar33 = *(undefined8 *)(puVar9 + 0xd);
      uVar32 = *(undefined8 *)(puVar9 + 0xb);
      uVar26 = param_2[-1];
      uVar34 = *(undefined8 *)(param_2 + -5);
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)puVar28 = uVar34;
      puVar9[0xe] = uVar26;
      param_2[-5] = uVar17;
      *(undefined8 *)(param_2 + -2) = uVar33;
      *(undefined8 *)(param_2 + -4) = uVar32;
      uVar26 = puVar9[5];
      if ((int)puVar9[10] <= (int)uVar26) goto LAB_1092e8da4;
      *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
      *(undefined8 *)puVar10 = *(undefined8 *)puVar28;
      puVar9[9] = puVar9[0xe];
      puVar9[10] = uVar26;
      *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)(puVar9 + 8);
      *(undefined8 *)(puVar9 + 0xb) = *(undefined8 *)(puVar9 + 6);
    }
    uVar26 = *puVar9;
    if ((int)uVar26 < (int)puVar9[5]) {
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
      *(undefined8 *)puVar9 = *(undefined8 *)(puVar9 + 5);
      puVar9[4] = puVar9[9];
      puVar9[5] = uVar26;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
    }
    goto LAB_1092e8da4;
  }
  if (uVar12 < 2) goto LAB_1092e8da4;
  if (uVar12 == 2) {
    uVar26 = *puVar9;
    if ((int)param_2[-5] <= (int)uVar26) goto LAB_1092e8da4;
    uVar33 = *(undefined8 *)(puVar9 + 3);
    uVar32 = *(undefined8 *)(puVar9 + 1);
    uVar20 = param_2[-1];
    uVar34 = *(undefined8 *)(param_2 + -5);
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + -3);
    *(undefined8 *)puVar9 = uVar34;
    puVar9[4] = uVar20;
    param_2[-5] = uVar26;
LAB_1092e8bf4:
    *(undefined8 *)(param_2 + -2) = uVar33;
    *(undefined8 *)(param_2 + -4) = uVar32;
    goto LAB_1092e8da4;
  }
LAB_1092e8a78:
  puVar10 = puVar9 + 10;
  uVar20 = *puVar10;
  puVar28 = puVar9 + 5;
  uVar17 = *puVar28;
  uVar26 = *puVar9;
  if ((int)uVar26 < (int)uVar17) {
    if ((int)uVar17 < (int)uVar20) {
      uVar33 = *(undefined8 *)(puVar9 + 3);
      uVar32 = *(undefined8 *)(puVar9 + 1);
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 0xc);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
      puVar9[4] = puVar9[0xe];
    }
    else {
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar28;
      puVar9[4] = puVar9[9];
      puVar9[5] = uVar26;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
      if ((int)uVar20 <= (int)uVar26) goto LAB_1092e8c38;
      uVar33 = *(undefined8 *)(puVar9 + 8);
      uVar32 = *(undefined8 *)(puVar9 + 6);
      *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
      *(undefined8 *)puVar28 = *(undefined8 *)puVar10;
      puVar9[9] = puVar9[0xe];
    }
    puVar9[10] = uVar26;
    *(undefined8 *)(puVar9 + 0xd) = uVar33;
    *(undefined8 *)(puVar9 + 0xb) = uVar32;
  }
  else if ((int)uVar17 < (int)uVar20) {
    *(undefined8 *)(puVar9 + 7) = *(undefined8 *)(puVar9 + 0xc);
    *(undefined8 *)puVar28 = *(undefined8 *)puVar10;
    puVar9[9] = puVar9[0xe];
    puVar9[10] = uVar17;
    *(undefined8 *)(puVar9 + 0xd) = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)(puVar9 + 0xb) = *(undefined8 *)(puVar9 + 6);
    if ((int)uVar26 < (int)puVar9[5]) {
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 7);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar28;
      puVar9[4] = puVar9[9];
      puVar9[5] = uVar26;
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar9 + 3);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar9 + 1);
    }
  }
LAB_1092e8c38:
  if (puVar9 + 0xf != param_2) {
    lVar16 = 0;
    lVar23 = 0;
    iVar22 = 0;
    puVar28 = puVar9 + 0xf;
    do {
      uVar26 = *puVar28;
      if ((int)*puVar10 < (int)uVar26) {
        uVar32 = *(undefined8 *)(puVar9 + lVar23 * 5 + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0x248) =
             *(undefined8 *)(puVar9 + lVar23 * 5 + 0x10 + 2);
        *(undefined8 *)((long)register0x00000008 + -0x250) = uVar32;
        lVar3 = lVar16;
        do {
          lVar13 = lVar3;
          *(undefined8 *)((long)puVar9 + lVar13 + 0x44) =
               *(undefined8 *)((long)puVar9 + lVar13 + 0x30);
          *(undefined8 *)((long)puVar9 + lVar13 + 0x3c) =
               *(undefined8 *)((long)puVar9 + lVar13 + 0x28);
          *(undefined4 *)((long)puVar9 + lVar13 + 0x4c) =
               *(undefined4 *)((long)puVar9 + lVar13 + 0x38);
          puVar10 = puVar9;
          if (lVar13 == -0x28) goto LAB_1092e8cb4;
          lVar3 = lVar13 + -0x14;
        } while (*(int *)((long)puVar9 + lVar13 + 0x14) < (int)uVar26);
        puVar10 = (uint *)((long)puVar9 + lVar13 + 0x28);
LAB_1092e8cb4:
        *puVar10 = uVar26;
        uVar32 = *(undefined8 *)((long)register0x00000008 + -0x250);
        *(undefined8 *)(puVar10 + 3) = *(undefined8 *)((long)register0x00000008 + -0x248);
        *(undefined8 *)(puVar10 + 1) = uVar32;
        iVar22 = iVar22 + 1;
        if (iVar22 == 8) {
          puVar9 = (uint *)(ulong)(puVar28 + 5 == param_2);
          goto LAB_1092e8da8;
        }
      }
      puVar29 = puVar28 + 5;
      lVar23 = lVar23 + 1;
      lVar16 = lVar16 + 0x14;
      puVar10 = puVar28;
      puVar28 = puVar29;
    } while (puVar29 != param_2);
  }
LAB_1092e8da4:
  puVar9 = (uint *)0x1;
LAB_1092e8da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x108)) {
    return puVar9;
  }
  ___stack_chk_fail();
  *(uint **)((long)register0x00000008 + -0x280) = unaff_x22;
  *(uint **)((long)register0x00000008 + -0x278) = unaff_x21;
  *(uint **)((long)register0x00000008 + -0x270) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x268) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x260) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -600) = FUN_1092e8de4;
  lVar23 = *(long *)(puVar9 + 2) - *(long *)puVar9;
  uVar12 = (lVar23 >> 4) + 1;
  if (uVar12 >> 0x3c != 0) {
    FUN_1092e8f98();
    lVar23 = *(long *)((long)register0x00000008 + -0x298);
    if (lVar23 != *(long *)((long)register0x00000008 + -0x2a0)) {
      *(ulong *)((long)register0x00000008 + -0x298) =
           lVar23 + ((*(long *)((long)register0x00000008 + -0x2a0) - lVar23) + 0xfU &
                    0xfffffffffffffff0);
    }
    if (*(long *)((long)register0x00000008 + -0x2a8) != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar13 = *(long *)puVar9;
    lVar6 = *(long *)(puVar9 + 2);
    lVar3 = *(long *)(param_2 + 2) + (lVar13 - lVar6);
    lVar16 = lVar3;
    for (lVar23 = lVar13; lVar6 != lVar23; lVar23 = lVar23 + 0x10) {
      lVar24 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar24) = *(undefined4 *)(lVar23 + lVar24);
        lVar24 = lVar24 + 4;
      } while (lVar24 != 0x10);
      lVar16 = lVar16 + 0x10;
    }
    *(long *)(param_2 + 2) = lVar3;
    lVar23 = *(long *)puVar9;
    *(long *)puVar9 = lVar3;
    *(long *)(puVar9 + 2) = lVar13;
    *(long *)(param_2 + 2) = lVar23;
    lVar23 = *(long *)(puVar9 + 2);
    *(long *)(puVar9 + 2) = *(long *)(param_2 + 4);
    *(long *)(param_2 + 4) = lVar23;
    lVar23 = *(long *)(puVar9 + 4);
    *(long *)(puVar9 + 4) = *(long *)(param_2 + 6);
    *(long *)(param_2 + 6) = lVar23;
    *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 2);
    return puVar9;
  }
  uVar14 = *(long *)(puVar9 + 4) - *(long *)puVar9;
  uVar15 = (long)uVar14 >> 3;
  if (uVar15 <= uVar12) {
    uVar15 = uVar12;
  }
  if (0x7fffffffffffffef < uVar14) {
    uVar15 = 0xfffffffffffffff;
  }
  *(uint **)((long)register0x00000008 + -0x288) = puVar9;
  if (uVar15 == 0) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = puVar9;
    FUN_1092e8fac();
  }
  lVar16 = 0;
  lVar23 = (long)puVar10 + lVar23;
  *(uint **)((long)register0x00000008 + -0x2a8) = puVar10;
  *(long *)((long)register0x00000008 + -0x2a0) = lVar23;
  *(uint **)((long)register0x00000008 + -0x290) = puVar10 + uVar15 * 4;
  do {
    *(undefined4 *)(lVar23 + lVar16) = *(undefined4 *)((long)param_2 + lVar16);
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x10);
  *(long *)((long)register0x00000008 + -0x298) = lVar23 + 0x10;
  FUN_1092e8f14(puVar9,(undefined1 *)((long)register0x00000008 + -0x2a8));
  puVar9 = *(uint **)(puVar9 + 2);
  lVar23 = *(long *)((long)register0x00000008 + -0x298);
  if (lVar23 != *(long *)((long)register0x00000008 + -0x2a0)) {
    *(ulong *)((long)register0x00000008 + -0x298) =
         lVar23 + ((*(long *)((long)register0x00000008 + -0x2a0) - lVar23) + 0xfU &
                  0xfffffffffffffff0);
  }
  if (*(long *)((long)register0x00000008 + -0x2a8) != 0) {
    __ZdlPv();
  }
  return puVar9;
}



/* Entry: 1092e8748; end: 1092e8993;  */

long * FUN_1092e8748(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  long *plStack_288;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = (int)*param_2;
  iVar2 = (int)*param_1;
  iVar6 = (int)*param_3;
  if (iVar2 < iVar13) {
    if (iVar13 < iVar6) {
      uVar16 = *(undefined8 *)((long)param_1 + 0xc);
      uVar15 = *(undefined8 *)((long)param_1 + 4);
      lVar10 = param_3[2];
      lVar11 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = lVar11;
      *(int *)(param_1 + 2) = (int)lVar10;
    }
    else {
      uVar16 = *(undefined8 *)((long)param_1 + 0xc);
      uVar15 = *(undefined8 *)((long)param_1 + 4);
      lVar10 = param_2[2];
      lVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar11;
      *(int *)(param_1 + 2) = (int)lVar10;
      *(int *)param_2 = iVar2;
      *(undefined8 *)((long)param_2 + 0xc) = uVar16;
      *(undefined8 *)((long)param_2 + 4) = uVar15;
      iVar6 = (int)*param_3;
      if ((int)*param_3 <= iVar2) goto LAB_1092e883c;
      uVar16 = *(undefined8 *)((long)param_2 + 0xc);
      uVar15 = *(undefined8 *)((long)param_2 + 4);
      lVar10 = param_3[2];
      lVar11 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = lVar11;
      *(int *)(param_2 + 2) = (int)lVar10;
    }
    *(int *)param_3 = iVar2;
    *(undefined8 *)((long)param_3 + 0xc) = uVar16;
    *(undefined8 *)((long)param_3 + 4) = uVar15;
    iVar6 = iVar2;
  }
  else if (iVar13 < iVar6) {
    uVar16 = *(undefined8 *)((long)param_2 + 0xc);
    uVar15 = *(undefined8 *)((long)param_2 + 4);
    lVar10 = param_3[2];
    lVar11 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar11;
    *(int *)(param_2 + 2) = (int)lVar10;
    *(int *)param_3 = iVar13;
    *(undefined8 *)((long)param_3 + 0xc) = uVar16;
    *(undefined8 *)((long)param_3 + 4) = uVar15;
    lVar10 = *param_1;
    iVar6 = iVar13;
    if ((int)lVar10 < (int)*param_2) {
      uVar16 = *(undefined8 *)((long)param_1 + 0xc);
      uVar15 = *(undefined8 *)((long)param_1 + 4);
      lVar11 = param_2[2];
      lVar17 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar17;
      *(int *)(param_1 + 2) = (int)lVar11;
      *(int *)param_2 = (int)lVar10;
      *(undefined8 *)((long)param_2 + 0xc) = uVar16;
      *(undefined8 *)((long)param_2 + 4) = uVar15;
      iVar6 = (int)*param_3;
    }
  }
LAB_1092e883c:
  if (iVar6 < (int)*param_4) {
    uVar16 = *(undefined8 *)((long)param_3 + 0xc);
    uVar15 = *(undefined8 *)((long)param_3 + 4);
    lVar10 = param_4[2];
    lVar11 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = lVar11;
    *(int *)(param_3 + 2) = (int)lVar10;
    *(int *)param_4 = iVar6;
    *(undefined8 *)((long)param_4 + 0xc) = uVar16;
    *(undefined8 *)((long)param_4 + 4) = uVar15;
    lVar10 = *param_2;
    if ((int)lVar10 < (int)*param_3) {
      uVar16 = *(undefined8 *)((long)param_2 + 0xc);
      uVar15 = *(undefined8 *)((long)param_2 + 4);
      lVar11 = param_3[2];
      lVar17 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = lVar17;
      *(int *)(param_2 + 2) = (int)lVar11;
      *(int *)param_3 = (int)lVar10;
      *(undefined8 *)((long)param_3 + 0xc) = uVar16;
      *(undefined8 *)((long)param_3 + 4) = uVar15;
      lVar10 = *param_1;
      if ((int)lVar10 < (int)*param_2) {
        uVar16 = *(undefined8 *)((long)param_1 + 0xc);
        uVar15 = *(undefined8 *)((long)param_1 + 4);
        lVar11 = param_2[2];
        lVar17 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar17;
        *(int *)(param_1 + 2) = (int)lVar11;
        *(int *)param_2 = (int)lVar10;
        *(undefined8 *)((long)param_2 + 0xc) = uVar16;
        *(undefined8 *)((long)param_2 + 4) = uVar15;
      }
    }
  }
  lVar10 = *param_4;
  if ((int)lVar10 < (int)*param_5) {
    uVar16 = *(undefined8 *)((long)param_4 + 0xc);
    uVar15 = *(undefined8 *)((long)param_4 + 4);
    lVar11 = param_5[2];
    lVar17 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = lVar17;
    *(int *)(param_4 + 2) = (int)lVar11;
    *(int *)param_5 = (int)lVar10;
    *(undefined8 *)((long)param_5 + 0xc) = uVar16;
    *(undefined8 *)((long)param_5 + 4) = uVar15;
    lVar10 = *param_3;
    if ((int)lVar10 < (int)*param_4) {
      uVar16 = *(undefined8 *)((long)param_3 + 0xc);
      uVar15 = *(undefined8 *)((long)param_3 + 4);
      lVar11 = param_4[2];
      lVar17 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = lVar17;
      *(int *)(param_3 + 2) = (int)lVar11;
      *(int *)param_4 = (int)lVar10;
      *(undefined8 *)((long)param_4 + 0xc) = uVar16;
      *(undefined8 *)((long)param_4 + 4) = uVar15;
      lVar10 = *param_2;
      if ((int)lVar10 < (int)*param_3) {
        uVar16 = *(undefined8 *)((long)param_2 + 0xc);
        uVar15 = *(undefined8 *)((long)param_2 + 4);
        lVar11 = param_3[2];
        lVar17 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = lVar17;
        *(int *)(param_2 + 2) = (int)lVar11;
        *(int *)param_3 = (int)lVar10;
        *(undefined8 *)((long)param_3 + 0xc) = uVar16;
        *(undefined8 *)((long)param_3 + 4) = uVar15;
        lVar10 = *param_1;
        if ((int)lVar10 < (int)*param_2) {
          uVar16 = *(undefined8 *)((long)param_1 + 0xc);
          uVar15 = *(undefined8 *)((long)param_1 + 4);
          lVar11 = param_2[2];
          lVar17 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = lVar17;
          *(int *)(param_1 + 2) = (int)lVar11;
          *(int *)param_2 = (int)lVar10;
          *(undefined8 *)((long)param_2 + 0xc) = uVar16;
          *(undefined8 *)((long)param_2 + 4) = uVar15;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
  if (2 < (long)uVar8) {
    if (uVar8 == 3) {
      plVar4 = (long *)((long)param_1 + 0x14);
      iVar2 = *(int *)plVar4;
      plVar5 = (long *)((long)param_2 + -0x14);
      iVar13 = (int)*param_1;
      if (iVar13 < iVar2) {
        if (iVar2 < *(int *)plVar5) {
          lVar11 = *(long *)((long)param_1 + 0xc);
          lVar10 = *(long *)((long)param_1 + 4);
          iVar2 = *(int *)((long)param_2 + -4);
          lVar17 = *plVar5;
          param_1[1] = *(long *)((long)param_2 + -0xc);
          *param_1 = lVar17;
          *(int *)(param_1 + 2) = iVar2;
        }
        else {
          param_1[1] = *(long *)((long)param_1 + 0x1c);
          *param_1 = *plVar4;
          *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
          *(int *)((long)param_1 + 0x14) = iVar13;
          param_1[4] = *(long *)((long)param_1 + 0xc);
          param_1[3] = *(long *)((long)param_1 + 4);
          if (*(int *)plVar5 <= iVar13) goto LAB_1092e8da4;
          lVar11 = param_1[4];
          lVar10 = param_1[3];
          iVar2 = *(int *)((long)param_2 + -4);
          lVar17 = *plVar5;
          *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
          *plVar4 = lVar17;
          *(int *)((long)param_1 + 0x24) = iVar2;
        }
        *(int *)((long)param_2 + -0x14) = iVar13;
        goto LAB_1092e8bf4;
      }
      if (*(int *)plVar5 <= iVar2) goto LAB_1092e8da4;
      lVar11 = param_1[4];
      lVar10 = param_1[3];
      iVar13 = *(int *)((long)param_2 + -4);
      lVar17 = *plVar5;
      *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
      *plVar4 = lVar17;
      *(int *)((long)param_1 + 0x24) = iVar13;
      *(int *)((long)param_2 + -0x14) = iVar2;
      param_2[-1] = lVar11;
      param_2[-2] = lVar10;
    }
    else {
      if (uVar8 != 4) {
        if (uVar8 == 5) {
          param_2 = (long *)((long)param_1 + 0x14);
          FUN_1092e8748();
          goto LAB_1092e8da4;
        }
        goto LAB_1092e8a78;
      }
      plVar4 = (long *)((long)param_1 + 0x14);
      iVar2 = *(int *)plVar4;
      plVar5 = param_1 + 5;
      iVar6 = (int)*plVar5;
      iVar13 = (int)*param_1;
      if (iVar13 < iVar2) {
        if (iVar2 < iVar6) {
          lVar11 = *(long *)((long)param_1 + 0xc);
          lVar10 = *(long *)((long)param_1 + 4);
          param_1[1] = param_1[6];
          *param_1 = *plVar5;
          *(int *)(param_1 + 2) = (int)param_1[7];
        }
        else {
          param_1[1] = *(long *)((long)param_1 + 0x1c);
          *param_1 = *plVar4;
          *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
          *(int *)((long)param_1 + 0x14) = iVar13;
          param_1[4] = *(long *)((long)param_1 + 0xc);
          param_1[3] = *(long *)((long)param_1 + 4);
          if (iVar6 <= iVar13) goto LAB_1092e8d28;
          lVar11 = param_1[4];
          lVar10 = param_1[3];
          *(long *)((long)param_1 + 0x1c) = param_1[6];
          *plVar4 = *plVar5;
          *(int *)((long)param_1 + 0x24) = (int)param_1[7];
        }
        *(int *)(param_1 + 5) = iVar13;
        *(long *)((long)param_1 + 0x34) = lVar11;
        *(long *)((long)param_1 + 0x2c) = lVar10;
        iVar6 = iVar13;
      }
      else if (iVar2 < iVar6) {
        *(long *)((long)param_1 + 0x1c) = param_1[6];
        *plVar4 = *plVar5;
        *(int *)((long)param_1 + 0x24) = (int)param_1[7];
        *(int *)(param_1 + 5) = iVar2;
        *(long *)((long)param_1 + 0x34) = param_1[4];
        *(long *)((long)param_1 + 0x2c) = param_1[3];
        iVar6 = iVar2;
        if (iVar13 < *(int *)((long)param_1 + 0x14)) {
          param_1[1] = *(long *)((long)param_1 + 0x1c);
          *param_1 = *plVar4;
          *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
          *(int *)((long)param_1 + 0x14) = iVar13;
          param_1[4] = *(long *)((long)param_1 + 0xc);
          param_1[3] = *(long *)((long)param_1 + 4);
        }
      }
LAB_1092e8d28:
      if (*(int *)((long)param_2 + -0x14) <= iVar6) goto LAB_1092e8da4;
      lVar11 = *(long *)((long)param_1 + 0x34);
      lVar10 = *(long *)((long)param_1 + 0x2c);
      iVar13 = *(int *)((long)param_2 + -4);
      lVar17 = *(long *)((long)param_2 + -0x14);
      param_1[6] = *(long *)((long)param_2 + -0xc);
      *plVar5 = lVar17;
      *(int *)(param_1 + 7) = iVar13;
      *(int *)((long)param_2 + -0x14) = iVar6;
      param_2[-1] = lVar11;
      param_2[-2] = lVar10;
      iVar13 = *(int *)((long)param_1 + 0x14);
      if ((int)param_1[5] <= iVar13) goto LAB_1092e8da4;
      *(long *)((long)param_1 + 0x1c) = param_1[6];
      *plVar4 = *plVar5;
      *(int *)((long)param_1 + 0x24) = (int)param_1[7];
      *(int *)(param_1 + 5) = iVar13;
      *(long *)((long)param_1 + 0x34) = param_1[4];
      *(long *)((long)param_1 + 0x2c) = param_1[3];
    }
    lVar10 = *param_1;
    if ((int)lVar10 < *(int *)((long)param_1 + 0x14)) {
      param_1[1] = *(long *)((long)param_1 + 0x1c);
      *param_1 = *(long *)((long)param_1 + 0x14);
      *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
      *(int *)((long)param_1 + 0x14) = (int)lVar10;
      param_1[4] = *(long *)((long)param_1 + 0xc);
      param_1[3] = *(long *)((long)param_1 + 4);
    }
    goto LAB_1092e8da4;
  }
  if (uVar8 < 2) goto LAB_1092e8da4;
  if (uVar8 == 2) {
    lVar17 = *param_1;
    if (*(int *)((long)param_2 + -0x14) <= (int)lVar17) goto LAB_1092e8da4;
    lVar11 = *(long *)((long)param_1 + 0xc);
    lVar10 = *(long *)((long)param_1 + 4);
    iVar13 = *(int *)((long)param_2 + -4);
    lVar18 = *(long *)((long)param_2 + -0x14);
    param_1[1] = *(long *)((long)param_2 + -0xc);
    *param_1 = lVar18;
    *(int *)(param_1 + 2) = iVar13;
    *(int *)((long)param_2 + -0x14) = (int)lVar17;
LAB_1092e8bf4:
    param_2[-1] = lVar11;
    param_2[-2] = lVar10;
    goto LAB_1092e8da4;
  }
LAB_1092e8a78:
  plVar4 = param_1 + 5;
  iVar2 = (int)*plVar4;
  plVar5 = (long *)((long)param_1 + 0x14);
  iVar6 = *(int *)plVar5;
  iVar13 = (int)*param_1;
  if (iVar13 < iVar6) {
    if (iVar6 < iVar2) {
      lVar11 = *(long *)((long)param_1 + 0xc);
      lVar10 = *(long *)((long)param_1 + 4);
      param_1[1] = param_1[6];
      *param_1 = *plVar4;
      *(int *)(param_1 + 2) = (int)param_1[7];
    }
    else {
      param_1[1] = *(long *)((long)param_1 + 0x1c);
      *param_1 = *plVar5;
      *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
      *(int *)((long)param_1 + 0x14) = iVar13;
      param_1[4] = *(long *)((long)param_1 + 0xc);
      param_1[3] = *(long *)((long)param_1 + 4);
      if (iVar2 <= iVar13) goto LAB_1092e8c38;
      lVar11 = param_1[4];
      lVar10 = param_1[3];
      *(long *)((long)param_1 + 0x1c) = param_1[6];
      *plVar5 = *plVar4;
      *(int *)((long)param_1 + 0x24) = (int)param_1[7];
    }
    *(int *)(param_1 + 5) = iVar13;
    *(long *)((long)param_1 + 0x34) = lVar11;
    *(long *)((long)param_1 + 0x2c) = lVar10;
  }
  else if (iVar6 < iVar2) {
    *(long *)((long)param_1 + 0x1c) = param_1[6];
    *plVar5 = *plVar4;
    *(int *)((long)param_1 + 0x24) = (int)param_1[7];
    *(int *)(param_1 + 5) = iVar6;
    *(long *)((long)param_1 + 0x34) = param_1[4];
    *(long *)((long)param_1 + 0x2c) = param_1[3];
    if (iVar13 < *(int *)((long)param_1 + 0x14)) {
      param_1[1] = *(long *)((long)param_1 + 0x1c);
      *param_1 = *plVar5;
      *(int *)(param_1 + 2) = *(int *)((long)param_1 + 0x24);
      *(int *)((long)param_1 + 0x14) = iVar13;
      param_1[4] = *(long *)((long)param_1 + 0xc);
      param_1[3] = *(long *)((long)param_1 + 4);
    }
  }
LAB_1092e8c38:
  if ((long *)((long)param_1 + 0x3c) != param_2) {
    lVar11 = 0;
    lVar10 = 0;
    iVar13 = 0;
    plVar5 = (long *)((long)param_1 + 0x3c);
    do {
      iVar2 = (int)*plVar5;
      if ((int)*plVar4 < iVar2) {
        puVar3 = (undefined8 *)((long)param_1 + lVar10 * 0x14 + 0x40);
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        lVar17 = lVar11;
        do {
          lVar18 = lVar17;
          *(undefined8 *)((long)param_1 + lVar18 + 0x44) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x30);
          *(undefined8 *)((long)param_1 + lVar18 + 0x3c) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x28);
          *(undefined4 *)((long)param_1 + lVar18 + 0x4c) =
               *(undefined4 *)((long)param_1 + lVar18 + 0x38);
          plVar4 = param_1;
          if (lVar18 == -0x28) goto LAB_1092e8cb4;
          lVar17 = lVar18 + -0x14;
        } while (*(int *)((long)param_1 + lVar18 + 0x14) < iVar2);
        plVar4 = (long *)((long)param_1 + lVar18 + 0x28);
LAB_1092e8cb4:
        *(int *)plVar4 = iVar2;
        *(undefined8 *)((long)plVar4 + 0xc) = uVar16;
        *(undefined8 *)((long)plVar4 + 4) = uVar15;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          plVar4 = (long *)(ulong)((long *)((long)plVar5 + 0x14) == param_2);
          goto LAB_1092e8da8;
        }
      }
      plVar1 = (long *)((long)plVar5 + 0x14);
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x14;
      plVar4 = plVar5;
      plVar5 = plVar1;
    } while (plVar1 != param_2);
  }
LAB_1092e8da4:
  plVar4 = (long *)0x1;
LAB_1092e8da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return plVar4;
  }
  ___stack_chk_fail();
  lVar7 = plVar4[1] - *plVar4;
  uVar8 = (lVar7 >> 4) + 1;
  if (uVar8 >> 0x3c == 0) {
    uVar9 = plVar4[2] - *plVar4;
    uVar12 = (long)uVar9 >> 3;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar12 = 0xfffffffffffffff;
    }
    plStack_288 = plVar4;
    if (uVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar4;
      FUN_1092e8fac();
    }
    lVar10 = 0;
    lStack_2a0 = (long)plVar5 + lVar7;
    plStack_290 = plVar5 + uVar12 * 2;
    do {
      *(undefined4 *)(lStack_2a0 + lVar10) = *(undefined4 *)((long)param_2 + lVar10);
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x10);
    lStack_298 = lStack_2a0 + 0x10;
    plStack_2a8 = plVar5;
    FUN_1092e8f14(plVar4,&plStack_2a8);
    plVar4 = (long *)plVar4[1];
    if (lStack_298 != lStack_2a0) {
      lStack_298 = lStack_298 + ((lStack_2a0 - lStack_298) + 0xfU & 0xfffffffffffffff0);
    }
    if (plStack_2a8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar4;
  }
  FUN_1092e8f98();
  if (lStack_298 != lStack_2a0) {
    lStack_298 = lStack_298 + ((lStack_2a0 - lStack_298) + 0xfU & 0xfffffffffffffff0);
  }
  if (plStack_2a8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar17 = *plVar4;
  lVar18 = plVar4[1];
  lVar11 = param_2[1] + (lVar17 - lVar18);
  lVar10 = lVar11;
  for (lVar7 = lVar17; lVar18 != lVar7; lVar7 = lVar7 + 0x10) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lVar10 + lVar14) = *(undefined4 *)(lVar7 + lVar14);
      lVar14 = lVar14 + 4;
    } while (lVar14 != 0x10);
    lVar10 = lVar10 + 0x10;
  }
  param_2[1] = lVar11;
  lVar7 = *plVar4;
  *plVar4 = lVar11;
  plVar4[1] = lVar17;
  param_2[1] = lVar7;
  lVar7 = plVar4[1];
  plVar4[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = plVar4[2];
  plVar4[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return plVar4;
}



/* Entry: 1092e8994; end: 1092e8de3;  */

long * FUN_1092e8994(int *param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
  if (2 < (long)uVar7) {
    if (uVar7 == 3) {
      piVar9 = param_1 + 5;
      iVar3 = *piVar9;
      piVar11 = param_2 + -5;
      iVar15 = *param_1;
      if (iVar15 < iVar3) {
        if (iVar3 < *piVar11) {
          uVar19 = *(undefined8 *)(param_1 + 3);
          uVar18 = *(undefined8 *)(param_1 + 1);
          iVar3 = param_2[-1];
          uVar20 = *(undefined8 *)piVar11;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)param_1 = uVar20;
          param_1[4] = iVar3;
        }
        else {
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)piVar9;
          param_1[4] = param_1[9];
          param_1[5] = iVar15;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
          if (*piVar11 <= iVar15) goto LAB_1092e8da4;
          uVar19 = *(undefined8 *)(param_1 + 8);
          uVar18 = *(undefined8 *)(param_1 + 6);
          iVar3 = param_2[-1];
          uVar20 = *(undefined8 *)piVar11;
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
          *(undefined8 *)piVar9 = uVar20;
          param_1[9] = iVar3;
        }
        param_2[-5] = iVar15;
        goto LAB_1092e8bf4;
      }
      if (*piVar11 <= iVar3) goto LAB_1092e8da4;
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar18 = *(undefined8 *)(param_1 + 6);
      iVar15 = param_2[-1];
      uVar20 = *(undefined8 *)piVar11;
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)piVar9 = uVar20;
      param_1[9] = iVar15;
      param_2[-5] = iVar3;
      *(undefined8 *)(param_2 + -2) = uVar19;
      *(undefined8 *)(param_2 + -4) = uVar18;
    }
    else {
      if (uVar7 != 4) {
        if (uVar7 == 5) {
          piVar9 = param_2 + -5;
          param_2 = param_1 + 5;
          FUN_1092e8748(param_1,param_2,param_1 + 10,param_1 + 0xf,piVar9);
          goto LAB_1092e8da4;
        }
        goto LAB_1092e8a78;
      }
      piVar9 = param_1 + 5;
      iVar3 = *piVar9;
      piVar11 = param_1 + 10;
      iVar16 = *piVar11;
      iVar15 = *param_1;
      if (iVar15 < iVar3) {
        if (iVar3 < iVar16) {
          uVar19 = *(undefined8 *)(param_1 + 3);
          uVar18 = *(undefined8 *)(param_1 + 1);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)param_1 = *(undefined8 *)piVar11;
          param_1[4] = param_1[0xe];
        }
        else {
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)piVar9;
          param_1[4] = param_1[9];
          param_1[5] = iVar15;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
          if (iVar16 <= iVar15) goto LAB_1092e8d28;
          uVar19 = *(undefined8 *)(param_1 + 8);
          uVar18 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)piVar9 = *(undefined8 *)piVar11;
          param_1[9] = param_1[0xe];
        }
        param_1[10] = iVar15;
        *(undefined8 *)(param_1 + 0xd) = uVar19;
        *(undefined8 *)(param_1 + 0xb) = uVar18;
        iVar16 = iVar15;
      }
      else if (iVar3 < iVar16) {
        *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)piVar9 = *(undefined8 *)piVar11;
        param_1[9] = param_1[0xe];
        param_1[10] = iVar3;
        *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_1 + 6);
        iVar16 = iVar3;
        if (iVar15 < param_1[5]) {
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
          *(undefined8 *)param_1 = *(undefined8 *)piVar9;
          param_1[4] = param_1[9];
          param_1[5] = iVar15;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
        }
      }
LAB_1092e8d28:
      if (param_2[-5] <= iVar16) goto LAB_1092e8da4;
      uVar19 = *(undefined8 *)(param_1 + 0xd);
      uVar18 = *(undefined8 *)(param_1 + 0xb);
      iVar15 = param_2[-1];
      uVar20 = *(undefined8 *)(param_2 + -5);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -3);
      *(undefined8 *)piVar11 = uVar20;
      param_1[0xe] = iVar15;
      param_2[-5] = iVar16;
      *(undefined8 *)(param_2 + -2) = uVar19;
      *(undefined8 *)(param_2 + -4) = uVar18;
      iVar15 = param_1[5];
      if (param_1[10] <= iVar15) goto LAB_1092e8da4;
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)piVar9 = *(undefined8 *)piVar11;
      param_1[9] = param_1[0xe];
      param_1[10] = iVar15;
      *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_1 + 6);
    }
    iVar15 = *param_1;
    if (iVar15 < param_1[5]) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 5);
      param_1[4] = param_1[9];
      param_1[5] = iVar15;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
    }
    goto LAB_1092e8da4;
  }
  if (uVar7 < 2) goto LAB_1092e8da4;
  if (uVar7 == 2) {
    iVar15 = *param_1;
    if (param_2[-5] <= iVar15) goto LAB_1092e8da4;
    uVar19 = *(undefined8 *)(param_1 + 3);
    uVar18 = *(undefined8 *)(param_1 + 1);
    iVar3 = param_2[-1];
    uVar20 = *(undefined8 *)(param_2 + -5);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -3);
    *(undefined8 *)param_1 = uVar20;
    param_1[4] = iVar3;
    param_2[-5] = iVar15;
LAB_1092e8bf4:
    *(undefined8 *)(param_2 + -2) = uVar19;
    *(undefined8 *)(param_2 + -4) = uVar18;
    goto LAB_1092e8da4;
  }
LAB_1092e8a78:
  piVar9 = param_1 + 10;
  iVar3 = *piVar9;
  piVar11 = param_1 + 5;
  iVar16 = *piVar11;
  iVar15 = *param_1;
  if (iVar15 < iVar16) {
    if (iVar16 < iVar3) {
      uVar19 = *(undefined8 *)(param_1 + 3);
      uVar18 = *(undefined8 *)(param_1 + 1);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)param_1 = *(undefined8 *)piVar9;
      param_1[4] = param_1[0xe];
    }
    else {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
      *(undefined8 *)param_1 = *(undefined8 *)piVar11;
      param_1[4] = param_1[9];
      param_1[5] = iVar15;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
      if (iVar3 <= iVar15) goto LAB_1092e8c38;
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar18 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)piVar11 = *(undefined8 *)piVar9;
      param_1[9] = param_1[0xe];
    }
    param_1[10] = iVar15;
    *(undefined8 *)(param_1 + 0xd) = uVar19;
    *(undefined8 *)(param_1 + 0xb) = uVar18;
  }
  else if (iVar16 < iVar3) {
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)piVar11 = *(undefined8 *)piVar9;
    param_1[9] = param_1[0xe];
    param_1[10] = iVar16;
    *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_1 + 6);
    if (iVar15 < param_1[5]) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
      *(undefined8 *)param_1 = *(undefined8 *)piVar11;
      param_1[4] = param_1[9];
      param_1[5] = iVar15;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 3);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 1);
    }
  }
LAB_1092e8c38:
  if (param_1 + 0xf != param_2) {
    lVar13 = 0;
    lVar12 = 0;
    iVar15 = 0;
    piVar11 = param_1 + 0xf;
    do {
      iVar3 = *piVar11;
      if (*piVar9 < iVar3) {
        uVar19 = *(undefined8 *)(param_1 + lVar12 * 5 + 0x10 + 2);
        uVar18 = *(undefined8 *)(param_1 + lVar12 * 5 + 0x10);
        lVar2 = lVar13;
        do {
          lVar8 = lVar2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x44) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x30);
          *(undefined8 *)((long)param_1 + lVar8 + 0x3c) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x28);
          *(undefined4 *)((long)param_1 + lVar8 + 0x4c) =
               *(undefined4 *)((long)param_1 + lVar8 + 0x38);
          piVar9 = param_1;
          if (lVar8 == -0x28) goto LAB_1092e8cb4;
          lVar2 = lVar8 + -0x14;
        } while (*(int *)((long)param_1 + lVar8 + 0x14) < iVar3);
        piVar9 = (int *)((long)param_1 + lVar8 + 0x28);
LAB_1092e8cb4:
        *piVar9 = iVar3;
        *(undefined8 *)(piVar9 + 3) = uVar19;
        *(undefined8 *)(piVar9 + 1) = uVar18;
        iVar15 = iVar15 + 1;
        if (iVar15 == 8) {
          plVar4 = (long *)(ulong)(piVar11 + 5 == param_2);
          goto LAB_1092e8da8;
        }
      }
      piVar1 = piVar11 + 5;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x14;
      piVar9 = piVar11;
      piVar11 = piVar1;
    } while (piVar1 != param_2);
  }
LAB_1092e8da4:
  plVar4 = (long *)0x1;
LAB_1092e8da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return plVar4;
  }
  ___stack_chk_fail();
  lVar6 = plVar4[1] - *plVar4;
  uVar7 = (lVar6 >> 4) + 1;
  if (uVar7 >> 0x3c == 0) {
    uVar10 = plVar4[2] - *plVar4;
    uVar14 = (long)uVar10 >> 3;
    if (uVar14 <= uVar7) {
      uVar14 = uVar7;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar14 = 0xfffffffffffffff;
    }
    plStack_1a8 = plVar4;
    if (uVar14 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar4;
      FUN_1092e8fac();
    }
    lVar12 = 0;
    lStack_1c0 = (long)plVar5 + lVar6;
    plStack_1b0 = plVar5 + uVar14 * 2;
    do {
      *(undefined4 *)(lStack_1c0 + lVar12) = *(undefined4 *)((long)param_2 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x10);
    lStack_1b8 = lStack_1c0 + 0x10;
    plStack_1c8 = plVar5;
    FUN_1092e8f14(plVar4,&plStack_1c8);
    plVar4 = (long *)plVar4[1];
    if (lStack_1b8 != lStack_1c0) {
      lStack_1b8 = lStack_1b8 + ((lStack_1c0 - lStack_1b8) + 0xfU & 0xfffffffffffffff0);
    }
    if (plStack_1c8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar4;
  }
  FUN_1092e8f98();
  if (lStack_1b8 != lStack_1c0) {
    lStack_1b8 = lStack_1b8 + ((lStack_1c0 - lStack_1b8) + 0xfU & 0xfffffffffffffff0);
  }
  if (plStack_1c8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar2 = *plVar4;
  lVar8 = plVar4[1];
  lVar13 = *(long *)(param_2 + 2) + (lVar2 - lVar8);
  lVar12 = lVar13;
  for (lVar6 = lVar2; lVar8 != lVar6; lVar6 = lVar6 + 0x10) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar17) = *(undefined4 *)(lVar6 + lVar17);
      lVar17 = lVar17 + 4;
    } while (lVar17 != 0x10);
    lVar12 = lVar12 + 0x10;
  }
  *(long *)(param_2 + 2) = lVar13;
  lVar6 = *plVar4;
  *plVar4 = lVar13;
  plVar4[1] = lVar2;
  *(long *)(param_2 + 2) = lVar6;
  lVar6 = plVar4[1];
  plVar4[1] = *(long *)(param_2 + 4);
  *(long *)(param_2 + 4) = lVar6;
  lVar6 = plVar4[2];
  plVar4[2] = *(long *)(param_2 + 6);
  *(long *)(param_2 + 6) = lVar6;
  *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 2);
  return plVar4;
}



/* Entry: 1092e8de4; end: 1092e8f13;  */

long * FUN_1092e8de4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_1;
      FUN_1092e8fac();
    }
    lVar6 = 0;
    lStack_50 = (long)plVar9 + lVar10;
    plStack_40 = plVar9 + uVar7 * 2;
    do {
      *(undefined4 *)(lStack_50 + lVar6) = *(undefined4 *)((long)param_2 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x10);
    lStack_48 = lStack_50 + 0x10;
    plStack_58 = plVar9;
    FUN_1092e8f14(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0xfU & 0xfffffffffffffff0);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_1092e8f98();
  if (lStack_48 != lStack_50) {
    lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 0xfU & 0xfffffffffffffff0);
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar2 = param_2[1] + (lVar3 - lVar4);
  lVar6 = lVar2;
  for (lVar10 = lVar3; lVar4 != lVar10; lVar10 = lVar10 + 0x10) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar8) = *(undefined4 *)(lVar10 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x10);
    lVar6 = lVar6 + 0x10;
  }
  param_2[1] = lVar2;
  lVar10 = *param_1;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 1092e8f14; end: 1092e8f97;  */

void FUN_1092e8f14(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar2 = param_2[1] + (lVar3 - lVar4);
  lVar1 = lVar2;
  for (lVar5 = lVar3; lVar4 != lVar5; lVar5 = lVar5 + 0x10) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(lVar5 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x10);
    lVar1 = lVar1 + 0x10;
  }
  param_2[1] = lVar2;
  lVar5 = *param_1;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1092e8f98; end: 1092e8fab;  */

void FUN_1092e8f98(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  lVar9 = plVar2[1];
  if ((long *)(plVar2[2] - lVar9 >> 3) < param_2) {
    lVar9 = lVar9 - *plVar2;
    uVar5 = (long)param_2 + (lVar9 >> 3);
    if (uVar5 >> 0x3d != 0) {
      FUN_1092cc094();
      if (lStack_78 != lStack_80) {
        lStack_78 = lStack_78 + ((lStack_80 - lStack_78) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_88 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar5 = plVar2[2];
      plVar3 = (long *)*plVar2;
      if ((ulong)((long)(uVar5 - (long)plVar3) >> 3) < param_4) {
        plVar6 = param_2;
        if (plVar3 != (long *)0x0) {
          plVar2[1] = (long)plVar3;
          __ZdlPv();
          uVar5 = 0;
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2[2] = 0;
        }
        if (param_4 >> 0x3d != 0) {
          FUN_1092cc094();
          if ((ulong)plVar6 >> 0x3d != 0) {
            FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
          plVar2 = plVar3;
          FUN_1092cc0a8();
          *plVar3 = (long)plVar2;
          plVar3[1] = (long)plVar2;
          plVar3[2] = (long)(plVar2 + (long)plVar6);
          return;
        }
        uVar8 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar8 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar8 = 0x1fffffffffffffff;
        }
        FUN_1092e9240(plVar2,uVar8);
        plVar3 = (long *)plVar2[1];
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *plVar3 = *param_2;
          plVar3 = plVar3 + 1;
        }
        plVar2[1] = (long)plVar3;
      }
      else {
        plVar6 = (long *)plVar2[1];
        lVar9 = (long)plVar6 - (long)plVar3;
        if ((ulong)(lVar9 >> 3) < param_4) {
          plVar7 = (long *)((long)param_2 + lVar9);
          plVar1 = plVar6;
          if (plVar6 != plVar3) {
            do {
              *plVar3 = *param_2;
              lVar9 = lVar9 + -8;
              plVar3 = plVar3 + 1;
              param_2 = param_2 + 1;
            } while (lVar9 != 0);
          }
          for (; plVar7 != param_3; plVar7 = plVar7 + 1) {
            *plVar6 = *plVar7;
            plVar6 = plVar6 + 1;
            plVar1 = plVar1 + 1;
          }
          plVar2[1] = (long)plVar1;
        }
        else {
          for (; param_2 != param_3; param_2 = param_2 + 1) {
            *plVar3 = *param_2;
            plVar3 = plVar3 + 1;
          }
          plVar2[1] = (long)plVar3;
        }
      }
      return;
    }
    uVar4 = plVar2[2] - *plVar2;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_68 = plVar2;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_1092cc0a8();
    }
    lVar9 = (long)plVar3 + lVar9;
    plStack_70 = plVar3 + uVar8;
    plStack_88 = plVar3;
    lStack_80 = lVar9;
    _bzero(lVar9,(long)param_2 << 3);
    lStack_78 = lVar9 + (long)param_2 * 8;
    FUN_1092cc028(plVar2,&plStack_88);
    if (lStack_78 != lStack_80) {
      lStack_78 = lStack_78 + ((lStack_80 - lStack_78) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_88 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      _bzero(lVar9,(long)param_2 << 3);
      lVar9 = lVar9 + (long)param_2 * 8;
    }
    plVar2[1] = lVar9;
  }
  return;
}



/* Entry: 1092e8fac; end: 1092e8fdf;  */

void FUN_1092e8fac(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  lVar8 = param_1[1];
  if ((long *)(param_1[2] - lVar8 >> 3) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar5 = (long)param_2 + (lVar8 >> 3);
    if (uVar5 >> 0x3d != 0) {
      FUN_1092cc094();
      if (lStack_68 != lStack_70) {
        lStack_68 = lStack_68 + ((lStack_70 - lStack_68) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_78 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar5 = param_1[2];
      plVar2 = (long *)*param_1;
      if ((ulong)((long)(uVar5 - (long)plVar2) >> 3) < param_4) {
        plVar6 = param_2;
        if (plVar2 != (long *)0x0) {
          param_1[1] = (long)plVar2;
          __ZdlPv();
          uVar5 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        if (param_4 >> 0x3d != 0) {
          FUN_1092cc094();
          if ((ulong)plVar6 >> 0x3d != 0) {
            FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
          plVar3 = plVar2;
          FUN_1092cc0a8();
          *plVar2 = (long)plVar3;
          plVar2[1] = (long)plVar3;
          plVar2[2] = (long)(plVar3 + (long)plVar6);
          return;
        }
        uVar7 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar7 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        FUN_1092e9240(param_1,uVar7);
        plVar2 = (long *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *plVar2 = *param_2;
          plVar2 = plVar2 + 1;
        }
        param_1[1] = (long)plVar2;
      }
      else {
        plVar6 = (long *)param_1[1];
        lVar8 = (long)plVar6 - (long)plVar2;
        if ((ulong)(lVar8 >> 3) < param_4) {
          plVar3 = (long *)((long)param_2 + lVar8);
          plVar1 = plVar6;
          if (plVar6 != plVar2) {
            do {
              *plVar2 = *param_2;
              lVar8 = lVar8 + -8;
              plVar2 = plVar2 + 1;
              param_2 = param_2 + 1;
            } while (lVar8 != 0);
          }
          for (; plVar3 != param_3; plVar3 = plVar3 + 1) {
            *plVar6 = *plVar3;
            plVar6 = plVar6 + 1;
            plVar1 = plVar1 + 1;
          }
          param_1[1] = (long)plVar1;
        }
        else {
          for (; param_2 != param_3; param_2 = param_2 + 1) {
            *plVar2 = *param_2;
            plVar2 = plVar2 + 1;
          }
          param_1[1] = (long)plVar2;
        }
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092cc0a8();
    }
    lVar8 = (long)plVar2 + lVar8;
    plStack_60 = plVar2 + uVar7;
    plStack_78 = plVar2;
    lStack_70 = lVar8;
    _bzero(lVar8,(long)param_2 << 3);
    lStack_68 = lVar8 + (long)param_2 * 8;
    FUN_1092cc028(param_1,&plStack_78);
    if (lStack_68 != lStack_70) {
      lStack_68 = lStack_68 + ((lStack_70 - lStack_68) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_78 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      _bzero(lVar8,(long)param_2 << 3);
      lVar8 = lVar8 + (long)param_2 * 8;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 1092e8fe0; end: 1092e911f;  */

void FUN_1092e8fe0(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1];
  if ((long *)(param_1[2] - lVar8 >> 3) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar5 = (long)param_2 + (lVar8 >> 3);
    if (uVar5 >> 0x3d != 0) {
      FUN_1092cc094();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      uVar5 = param_1[2];
      plVar2 = (long *)*param_1;
      if ((ulong)((long)(uVar5 - (long)plVar2) >> 3) < param_4) {
        plVar6 = param_2;
        if (plVar2 != (long *)0x0) {
          param_1[1] = (long)plVar2;
          __ZdlPv();
          uVar5 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        if (param_4 >> 0x3d != 0) {
          FUN_1092cc094();
          if ((ulong)plVar6 >> 0x3d != 0) {
            FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
          plVar3 = plVar2;
          FUN_1092cc0a8();
          *plVar2 = (long)plVar3;
          plVar2[1] = (long)plVar3;
          plVar2[2] = (long)(plVar3 + (long)plVar6);
          return;
        }
        uVar7 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar7 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        FUN_1092e9240(param_1,uVar7);
        plVar2 = (long *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *plVar2 = *param_2;
          plVar2 = plVar2 + 1;
        }
        param_1[1] = (long)plVar2;
      }
      else {
        plVar6 = (long *)param_1[1];
        lVar8 = (long)plVar6 - (long)plVar2;
        if ((ulong)(lVar8 >> 3) < param_4) {
          plVar3 = (long *)((long)param_2 + lVar8);
          plVar1 = plVar6;
          if (plVar6 != plVar2) {
            do {
              *plVar2 = *param_2;
              lVar8 = lVar8 + -8;
              plVar2 = plVar2 + 1;
              param_2 = param_2 + 1;
            } while (lVar8 != 0);
          }
          for (; plVar3 != param_3; plVar3 = plVar3 + 1) {
            *plVar6 = *plVar3;
            plVar6 = plVar6 + 1;
            plVar1 = plVar1 + 1;
          }
          param_1[1] = (long)plVar1;
        }
        else {
          for (; param_2 != param_3; param_2 = param_2 + 1) {
            *plVar2 = *param_2;
            plVar2 = plVar2 + 1;
          }
          param_1[1] = (long)plVar2;
        }
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092cc0a8();
    }
    lVar8 = (long)plVar2 + lVar8;
    plStack_40 = plVar2 + uVar7;
    plStack_58 = plVar2;
    lStack_50 = lVar8;
    _bzero(lVar8,(long)param_2 << 3);
    lStack_48 = lVar8 + (long)param_2 * 8;
    FUN_1092cc028(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      _bzero(lVar8,(long)param_2 << 3);
      lVar8 = lVar8 + (long)param_2 * 8;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 1092e9120; end: 1092e923f;  */

void FUN_1092e9120(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar5 = param_1[2];
  plVar3 = (long *)*param_1;
  if ((ulong)((long)(uVar5 - (long)plVar3) >> 3) < param_4) {
    plVar6 = param_2;
    if (plVar3 != (long *)0x0) {
      param_1[1] = (long)plVar3;
      __ZdlPv();
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_1092cc094();
      if ((ulong)plVar6 >> 0x3d != 0) {
        FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      plVar4 = plVar3;
      FUN_1092cc0a8();
      *plVar3 = (long)plVar4;
      plVar3[1] = (long)plVar4;
      plVar3[2] = (long)(plVar4 + (long)plVar6);
      return;
    }
    uVar1 = (long)uVar5 >> 2;
    if ((ulong)((long)uVar5 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_1092e9240(param_1,uVar1);
    plVar3 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *plVar3 = *param_2;
      plVar3 = plVar3 + 1;
    }
    param_1[1] = (long)plVar3;
  }
  else {
    plVar6 = (long *)param_1[1];
    lVar7 = (long)plVar6 - (long)plVar3;
    if ((ulong)(lVar7 >> 3) < param_4) {
      plVar4 = (long *)((long)param_2 + lVar7);
      plVar2 = plVar6;
      if (plVar6 != plVar3) {
        do {
          *plVar3 = *param_2;
          lVar7 = lVar7 + -8;
          plVar3 = plVar3 + 1;
          param_2 = param_2 + 1;
        } while (lVar7 != 0);
      }
      for (; plVar4 != param_3; plVar4 = plVar4 + 1) {
        *plVar6 = *plVar4;
        plVar6 = plVar6 + 1;
        plVar2 = plVar2 + 1;
      }
      param_1[1] = (long)plVar2;
    }
    else {
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *plVar3 = *param_2;
        plVar3 = plVar3 + 1;
      }
      param_1[1] = (long)plVar3;
    }
  }
  return;
}



/* Entry: 1092e9240; end: 1092e9277;  */

void FUN_1092e9240(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1092cc0a8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_1092cc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


