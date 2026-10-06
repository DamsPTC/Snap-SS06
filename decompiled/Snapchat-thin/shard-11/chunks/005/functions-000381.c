/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086ea7e0; end: 1086eabeb;  */

void FUN_1086ea7e0(undefined *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  undefined **extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined **extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined **extraout_x9;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 4:
    func_0x0001086ebc04();
    goto code_r0x0001086ea9f0;
  case 5:
    func_0x0001086ebc04();
    func_0x0001086ea21c();
    break;
  case 6:
    func_0x0001086ebc04();
    func_0x0001086ea254();
    func_0x0001086ebc6c();
    ppuVar1 = extraout_x9;
    if (extraout_w8_00 != 6) {
      ppuVar1 = &PTR_PTR_113286cd8;
    }
    uVar3 = *(uint *)(ppuVar1 + 2);
    if ((uVar3 & 1) != 0) {
      func_0x0001086ebc78();
      func_0x000108655060();
      func_0x0001086ebcec();
      uVar3 = *(uint *)(ppuVar1 + 2);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      puVar4 = ppuVar1[4];
      func_0x0001086ebc78();
      FUN_1086eb980(puVar4,param_1);
      uVar3 = *(uint *)(ppuVar1 + 2);
      param_1 = puVar4;
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       ((puVar4 = ppuVar1[5], func_0x0001086ebc78(), *(int *)(puVar4 + 0x18) != 0 ||
        (func_0x0001086ebd74(*(undefined8 *)(param_1 + 0x78)), *(int *)(extraout_x8_05 + 0x18) == 0)
        ))) {
      func_0x0001086eb9fc();
      FUN_10890b830();
    }
    func_0x0001086ebc04();
    FUN_1086eac18(param_1 + 0xd8);
    break;
  case 7:
    func_0x0001086ebc04();
    FUN_1086ea28c();
    break;
  case 8:
    func_0x0001086ebd1c();
    ppuVar1 = &PTR_PTR_113286f90;
    if (extraout_x8_00 != (undefined **)0x0) {
      ppuVar1 = extraout_x8_00;
    }
    FUN_108919e8c(param_2 + 0x50,ppuVar1);
    if (*(char *)(param_2 + 0x120) == '\x01') {
      *(undefined1 *)(param_2 + 0x120) = 0;
    }
    if (*(char *)(param_2 + 300) == '\x01') {
      *(undefined1 *)(param_2 + 300) = 0;
    }
    break;
  case 0xb:
    func_0x0001086ebc04();
    func_0x0001086ea310();
    goto code_r0x0001086ea9e0;
  case 0xc:
    func_0x0001086ebc04();
    func_0x0001086ea348();
    goto code_r0x0001086ea9e0;
  case 0xd:
    func_0x0001086ebc04();
    func_0x0001086ebc6c();
    FUN_1086ea380();
code_r0x0001086ea9e0:
    func_0x0001086ebc04();
code_r0x0001086ea9f0:
    FUN_1086ea1bc();
    break;
  case 0xf:
    func_0x0001086ebd1c();
    func_0x0001086ebc58();
    if (*(int *)(extraout_x8_04 + 0x1c) == 3) {
      FUN_1086ea460(*(undefined8 *)(extraout_x8_04 + 0x10),param_2);
    }
    break;
  case 0x10:
    func_0x0001086ebd1c();
    ppuVar1 = &PTR_PTR_113286d98;
    if (extraout_x8_03 != (undefined **)0x0) {
      ppuVar1 = extraout_x8_03;
    }
    if (((ulong)ppuVar1[2] & 1) != 0) {
      func_0x0001086ebc04();
      ppuVar1 = *(undefined ***)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x40) != 0x10) {
        ppuVar1 = &PTR_PTR_113287020;
      }
      ppuVar2 = &PTR_PTR_113286d98;
      if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar1[3];
      }
      func_0x0001086ebcc4(ppuVar2);
      FUN_1086ea4e8();
    }
    break;
  case 0x11:
    func_0x0001086ebc04();
    FUN_1086ea6dc();
    break;
  case 0x12:
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x0001086ebc04();
    FUN_1086eabec(param_1 + 0xd8,lVar5 + 0x10);
    *(undefined1 *)(param_2 + 0x140) = 0;
    break;
  case 0x13:
    puVar4 = param_1;
    func_0x0001086ebb80(*(undefined8 *)(param_2 + 0x78));
    if (extraout_w8 == 5) {
      lVar6 = *(long *)(param_1 + 0x38);
      func_0x0001086ebc04();
      lVar5 = param_2 + 0x50;
      FUN_108667a24(lVar5);
      func_0x000108655070();
      FUN_1086eabec(puVar4 + 0xd8,lVar6 + 0x18);
      if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
        func_0x0001086eba74(lVar5);
        FUN_108908fe0();
      }
    }
    break;
  case 0x14:
    func_0x0001086ebd74(*(undefined8 *)(param_2 + 0x78));
    if (*(int *)(extraout_x8 + 0xc0) == 0xb) {
      func_0x0001086ebc78();
      FUN_1086eb3c8();
      func_0x0001086ebc6c();
      func_0x0001086ebd8c();
    }
    break;
  case 0x15:
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x0001086ebc78();
    if ((*(byte *)(lVar5 + 0x10) & 1) != 0) {
      FUN_1086eb980(*(undefined8 *)(lVar5 + 0x18),param_1);
    }
    FUN_1086eb3c8(param_1);
    func_0x0001086eb44c();
    FUN_108910b14();
    break;
  case 0x16:
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x0001086ebc78();
    puVar4 = param_1;
    func_0x0001086ebd74(*(undefined8 *)(lVar5 + 0x18));
    FUN_1086eb9a4(puVar4 + 0x30,extraout_x8_02 + 0x10);
    func_0x0001086eb9fc(param_1);
    FUN_10890b830();
    if (*(int *)(param_1 + 0xc0) == 0xd) {
      func_0x0001086eb608();
    }
    else {
      if (*(int *)(param_1 + 0xc0) != 0xe) break;
      func_0x0001086eb578();
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
    break;
  case 0x18:
    func_0x0001086ebc04();
    param_1[0x142] = 1;
    break;
  case 0x19:
    func_0x0001086ebc78();
    FUN_1086ea75c();
  }
  func_0x0001086ebd04(*(undefined8 *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0xe8) = extraout_x8_01;
  return;
}



/* Entry: 1086eabec; end: 1086eac17;  */

long FUN_1086eabec(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_1086ebb18(param_1);
  }
  return param_1;
}



/* Entry: 1086eac18; end: 1086eac2b;  */

void FUN_1086eac18(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1086eac2c; end: 1086eac87;  */

bool FUN_1086eac2c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_x9;
  undefined8 *puVar4;
  
  func_0x0001086ebc0c(*param_1);
  puVar4 = param_1;
  if (!(bool)in_ZR) {
    puVar4 = extraout_x9;
  }
  lVar1 = (long)*(int *)(param_1 + 1) << 3;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    uVar2 = *puVar4;
    func_0x000107c287e8(uVar2,param_2);
    lVar1 = lVar3 + -8;
    puVar4 = puVar4 + 1;
  } while ((int)uVar2 == 0);
  return lVar3 != 0;
}



/* Entry: 1086eac88; end: 1086eacbf;  */

void FUN_1086eac88(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086ebcbc();
  }
  else {
    func_0x0001086ebbd8();
  }
  func_0x0001086ebb70(&UNK_110a959f0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1086eacc0; end: 1086eacd3;  */

void FUN_1086eacc0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1086eacd4; end: 1086ead73;  */

long FUN_1086eacd4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *extraout_x9;
  ulong uVar7;
  undefined8 *extraout_x9_00;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = param_1;
  func_0x0001086ebc0c(*param_1);
  puVar1 = puVar5;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  uVar7 = param_2 - (long)puVar1;
  iVar8 = (int)(uVar7 >> 3);
  uVar2 = (int)(uVar7 + 8 >> 3) - iVar8;
  plVar3 = puVar1 + iVar8;
  lVar9 = puVar5[2];
  uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar10 = uVar6 << 3;
  while (uVar6 != 0) {
    if ((lVar9 == 0) && (*plVar3 != 0)) {
      func_0x0001086ebd38();
    }
    plVar3 = plVar3 + 1;
    uVar10 = uVar10 - 8;
    uVar6 = uVar10;
  }
  uVar4 = uVar2 == 1;
  if (0 < (int)uVar2) {
    func_0x00010b4d370c(param_1,uVar7 >> 3,uVar2);
  }
  func_0x0001086ebc0c(*param_1);
  if (!(bool)uVar4) {
    param_1 = extraout_x9_00;
  }
  return (long)param_1 + ((long)(uVar7 * 0x20000000) >> 0x1d);
}



/* Entry: 1086ead74; end: 1086eadcb;  */

bool FUN_1086ead74(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(int *)(param_2 + 0x1c) == 1) {
      return *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10);
    }
  }
  else if ((*(int *)(param_1 + 0x1c) == 2) && (*(int *)(param_2 + 0x1c) == 2)) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    puVar7 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    bVar3 = *(byte *)((long)puVar6 + 0x17);
    uVar1 = puVar6[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    bVar4 = *(byte *)((long)puVar7 + 0x17);
    uVar2 = puVar7[1];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    if (uVar1 == uVar2) {
      puVar5 = (ulong *)*puVar6;
      if (-1 < (char)bVar3) {
        puVar5 = puVar6;
      }
      puVar6 = (ulong *)*puVar7;
      if (-1 < (char)bVar4) {
        puVar6 = puVar7;
      }
      func_0x000107c610b0(puVar5,puVar6);
      return (int)puVar5 == 0;
    }
    return false;
  }
  return false;
}



/* Entry: 1086eadcc; end: 1086eae07;  */

void FUN_1086eadcc(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086ebcb4();
  }
  else {
    func_0x0001086ebbcc();
  }
  func_0x0001086ebc44(&UNK_110a958b0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1086eae08; end: 1086eae23;  */

void FUN_1086eae08(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1086eae24; end: 1086eae93;  */

void FUN_1086eae24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x0001086ebd30();
  }
  else {
    func_0x0001086ebca8();
  }
  func_0x0001086ebb70(&UNK_110a95a90);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 1086eae94; end: 1086eaeb3;  */

void FUN_1086eae94(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1086eaeb4; end: 1086eaf4b;  */

void FUN_1086eaeb4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_ZR;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong *extraout_x9;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar4 = param_1;
  func_0x0001086ebc0c(*param_1);
  puVar1 = puVar4;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  iVar9 = (int)((ulong)(param_2 - (long)puVar1) >> 3);
  uVar3 = (int)((param_2 - (long)puVar1) + 8U >> 3) - iVar9;
  puVar1 = puVar1 + iVar9;
  uVar10 = puVar4[2];
  uVar5 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  uVar11 = uVar5 << 3;
  while (uVar5 != 0) {
    if ((uVar10 == 0) && (*puVar1 != 0)) {
      func_0x0001086ebd38();
    }
    puVar1 = puVar1 + 1;
    uVar11 = uVar11 - 8;
    uVar5 = uVar11;
  }
  if ((int)uVar3 < 1) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    if ((iVar9 == 0) && (uVar3 == 1)) {
      *param_1 = 0;
    }
  }
  else {
    piVar6 = (int *)(*param_1 - 1);
    iVar2 = *piVar6;
    lVar8 = (long)(int)(uVar3 + iVar9);
    while (lVar7 = lVar8 + 1, lVar8 < iVar2) {
      *(undefined8 *)(piVar6 + (long)(int)uVar3 * -2 + lVar7 * 2) =
           *(undefined8 *)(piVar6 + lVar7 * 2);
      lVar8 = lVar7;
    }
    *piVar6 = iVar2 - uVar3;
  }
  *(uint *)(param_1 + 1) = (int)param_1[1] - uVar3;
  return;
}



/* Entry: 1086eaf4c; end: 1086eafb7;  */

undefined8 * FUN_1086eaf4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_1086eafb8(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 1086eafb8; end: 1086eb01f;  */

undefined1  [16] FUN_1086eafb8(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1086eb020(auStack_38);
  uVar1 = auStack_38[0];
  func_0x0001086eb088(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  FUN_1086afb28(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1086eb020; end: 1086eb0f3;  */

void FUN_1086eb020(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2 + 2;
  func_0x0001086ebd28();
  *param_1 = (long)param_2;
  param_1[1] = (long)puVar2;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  param_2[2] = puVar2;
  param_2[3] = uVar1;
  func_0x000107c278c8(puVar2,(long)puVar2 + uVar1);
  *(undefined8 **)(*param_1 + 8) = puVar2;
  return;
}



/* Entry: 1086eb0f4; end: 1086eb20f;  */

long FUN_1086eb0f4(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & param_2;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = param_2 / uVar5;
      }
      uVar7 = param_2;
      if (uVar5 <= param_2) {
        uVar7 = param_2 - uVar3 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_1086eb1a4;
          uVar3 = plVar4[1];
          if (uVar3 != param_2) break;
          plVar2 = param_1 + 4;
          func_0x00010728905c(plVar2,plVar4 + 2,param_3);
          if (((ulong)plVar2 & 1) != 0) {
            return (long)plVar4;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar3 = uVar3 & uVar6;
        }
        else if (uVar5 <= uVar3) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar3 / uVar5;
          }
          uVar3 = uVar3 - uVar1 * uVar5;
        }
      } while (uVar3 == uVar7);
    }
  }
LAB_1086eb1a4:
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c29008(param_1,uVar6);
  }
  return 0;
}



/* Entry: 1086eb210; end: 1086eb2ab;  */

void FUN_1086eb210(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1086eb2ac; end: 1086eb2c7;  */

bool FUN_1086eb2ac(long param_1)

{
  FUN_1086eb2c8();
  return param_1 != 0;
}



/* Entry: 1086eb2c8; end: 1086eb39f;  */

long FUN_1086eb2c8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = *param_2;
    func_0x000107c278c8(uVar2,uVar2 + param_2[1]);
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar2 != uVar4) break;
        plVar3 = param_1 + 4;
        func_0x00010728905c(plVar3,plVar5 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 1086eb3a0; end: 1086eb3c7;  */

void FUN_1086eb3a0(ulong *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar2;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar2 * 8 + 7);
  }
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1086eb3c8; end: 1086eb47f;  */

void FUN_1086eb3c8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0xb) {
    func_0x0001086ebd54();
    *(undefined4 *)(param_1 + 0xc0) = 0xb;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eb414();
    *(ulong *)(param_1 + 0xb8) = uVar1;
  }
  return;
}



/* Entry: 1086eb480; end: 1086eb48f;  */

void FUN_1086eb480(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eb53c();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086eb490; end: 1086eb4c3;  */

void FUN_1086eb490(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086ebcb4();
  }
  else {
    func_0x0001086ebbcc();
  }
  func_0x0001086ebb58(&UNK_110a91fe0);
  return;
}



/* Entry: 1086eb4c4; end: 1086eb4cf;  */

void FUN_1086eb4c4(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1086eb4d0);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1086eb4d0);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1086eb4d0; end: 1086eb713;  */

void FUN_1086eb4d0(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086ebcbc();
  }
  else {
    func_0x0001086ebbd8();
  }
  func_0x0001086ebb70(&UNK_110a91c70);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1086eb714; end: 1086eb723;  */

void FUN_1086eb714(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eb874();
    *(ulong *)(param_1 + 0x58) = uVar1;
  }
  return;
}



/* Entry: 1086eb724; end: 1086eb83f;  */

void FUN_1086eb724(long param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x34) == 4) {
    uVar4 = *(ulong *)(param_1 + 0x28);
  }
  else {
    FUN_10891a790(param_1);
    *(undefined4 *)(param_1 + 0x34) = 4;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      func_0x0001086ebc18();
    }
    FUN_1086eb948();
    *(ulong *)(param_1 + 0x28) = uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  while (*(int *)(uVar4 + 0x18) < iVar1) {
    func_0x000107c29100(uVar4 + 0x18,0);
  }
  if ((*(byte *)(uVar4 + 0x10) & 1) != 0) {
    FUN_1086eb920(uVar4 + 0x18,*(undefined4 *)(*(long *)(uVar4 + 0x30) + 0x10),0xffffffff);
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    if (*(long *)(uVar4 + 0x30) != 0) {
      func_0x00010891a0d8();
    }
    *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) & 0xfffffffe;
    return;
  }
  FUN_1086eb920(uVar4 + 0x18,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x10),1);
  ppuVar3 = &PTR_PTR_113286df0;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x18);
  }
  *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 1;
  ppuVar2 = *(undefined ***)(uVar4 + 0x30);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(uVar4 + 8);
    if (((ulong)ppuVar2 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086d10c0();
    *(undefined ***)(uVar4 + 0x30) = ppuVar2;
  }
  if (ppuVar3 != ppuVar2) {
    func_0x000107c34a38();
    func_0x00010891a0d8();
    func_0x000108924aec();
    if (*(int *)(ppuVar3 + 2) != 0) {
      *(int *)(ppuVar2 + 2) = *(int *)(ppuVar3 + 2);
    }
    if (((ulong)ppuVar3[1] & 1) != 0) {
      if (((ulong)ppuVar2[1] & 1) == 0) {
        func_0x00010b4c3590();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
                ();
      return;
    }
    return;
  }
  return;
}



/* Entry: 1086eb840; end: 1086eb91f;  */

void FUN_1086eb840(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eb874();
    *(ulong *)(param_1 + 0x58) = uVar1;
  }
  return;
}



/* Entry: 1086eb920; end: 1086eb947;  */

void FUN_1086eb920(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *param_1)) {
    uVar1 = *(int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 4) + param_3;
    *(uint *)(*(long *)(param_1 + 2) + (ulong)param_2 * 4) =
         uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  return;
}



/* Entry: 1086eb948; end: 1086eb97f;  */

void FUN_1086eb948(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086ebd30();
  }
  else {
    func_0x0001086ebca8();
  }
  func_0x0001086ebb58(&UNK_110a95950);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1086eb980; end: 1086eb9a3;  */

long FUN_1086eb980(long param_1,long param_2)

{
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_2 + 0x38) != 0)) {
    return param_1;
  }
  param_2 = param_2 + 0x30;
  if (param_2 != param_1 + 0x10) {
    FUN_1086eb9e8(param_2);
    if (*(int *)(param_1 + 0x18) != 0) {
      func_0x000107c303c4(param_2,param_1 + 0x10);
    }
  }
  return param_2;
}



/* Entry: 1086eb9a4; end: 1086eb9e7;  */

long FUN_1086eb9a4(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_1086eb9e8(param_1);
    if (*(int *)(param_2 + 8) != 0) {
      func_0x000107c303c4(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1086eb9e8; end: 1086eba0b;  */

void FUN_1086eb9e8(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1086eba0c; end: 1086ebb03;  */

void FUN_1086eba0c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086ebc18();
    }
    func_0x0001086eba40();
    *(ulong *)(param_1 + 0x78) = uVar1;
  }
  return;
}



/* Entry: 1086ebb04; end: 1086ebb17;  */

void FUN_1086ebb04(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1086ebb18; end: 1086ebb57;  */

void FUN_1086ebb18(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x25;
  long unaff_x26;
  
  if (param_2 != param_1) {
    func_0x0001086ebc80();
    FUN_1086eac18();
    if ((int)unaff_x19[1] != 0) {
      plVar2 = unaff_x20;
      func_0x000100361ce4();
      plVar3 = plVar2;
      func_0x00010064e8bc();
      plVar4 = (long *)*unaff_x25;
      func_0x000100361e44();
      plVar6 = unaff_x25;
      if (0 < (int)plVar3) {
        func_0x000107c39cb4();
        plVar2 = plVar2 + (int)plVar3;
        plVar6 = unaff_x25 + (int)plVar3;
      }
      lVar5 = unaff_x19[2];
      for (; iVar1 = (int)plVar3, plVar6 < unaff_x25 + unaff_x26; plVar6 = plVar6 + 1) {
        plVar3 = plVar4;
        (**(code **)(*plVar4 + 0x10))(plVar4,lVar5);
        *plVar2 = (long)plVar3;
        func_0x00010064e8d4();
        plVar2 = plVar2 + 1;
      }
      func_0x000100361e74();
      if (iVar1 < (int)unaff_x20) {
        *(int *)(*unaff_x19 + -1) = (int)unaff_x20;
      }
      return;
    }
  }
  return;
}



/* Entry: 1086ebb58; end: 1086ebd9f;  */

void FUN_1086ebb58(long param_1,long *param_2)

{
  long unaff_x19;
  
  *param_2 = param_1 + 0x10;
  param_2[1] = unaff_x19;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = unaff_x19;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



/* Entry: 1086ebda0; end: 1086ec267;  */

uint * FUN_1086ebda0(long param_1,undefined8 param_2,uint *param_3,long param_4,undefined8 *param_5,
                    undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  uint *puVar3;
  uint *puVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint auStack_550 [50];
  undefined8 *puStack_488;
  undefined1 auStack_480 [24];
  undefined1 uStack_468;
  undefined1 auStack_460 [8];
  undefined1 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long *aplStack_438 [2];
  undefined **ppuStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_400;
  long lStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3e0 [16];
  long lStack_3d0;
  undefined1 uStack_3b8;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [48];
  undefined1 auStack_1c0 [128];
  long lStack_140;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [120];
  char cStack_78;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (uint *)(param_1 + 0x88);
  FUN_108699578();
  if ((((ulong)puVar4 & 1) != 0) || (puVar4 = param_3, func_0x000107c28f34(), (int)puVar4 == 0))
  goto LAB_1086ec134;
  auStack_550[0] = 0;
  auStack_550[1] = 0;
  auStack_550[2] = 0;
  auStack_550[3] = 0;
  auStack_550[4] = 0;
  auStack_550[5] = 0;
  FUN_108860924(auStack_3e0,*(undefined8 *)(param_1 + 0x38),param_2,auStack_550);
  func_0x0001086ece08();
  func_0x0001086ecdf4();
  cVar1 = cStack_78;
  func_0x0001086ece14();
  in_ZR = cVar1 == '\x01';
  if ((bool)in_ZR) {
    puVar4 = (uint *)(param_1 + 0xb0);
    func_0x000107c29310();
    if (*puVar4 == 0) goto LAB_1086ec134;
    uVar8 = (ulong)*puVar4 * 3600000;
    puVar3 = *(uint **)(param_1 + 0x28);
    func_0x000107c287d8();
    in_ZR = (long)puVar3 - param_4 == uVar8;
    puVar4 = puVar3;
    if ((ulong)((long)puVar3 - param_4) < uVar8) goto LAB_1086ec134;
    puVar4 = *(uint **)(param_1 + 0x38);
    FUN_108868228(auStack_3e0,puVar4,param_2,1);
    func_0x0001086ece08();
    func_0x0001086ecdf4();
    if ((cStack_78 == '\x01') &&
       (in_ZR = (long)puVar3 - lStack_140 == uVar8, (ulong)((long)puVar3 - lStack_140) < uVar8)) {
      func_0x0001086ece14();
      goto LAB_1086ec134;
    }
    func_0x0001086ece14();
  }
  (*(code *)*param_5)(auStack_550,param_3,param_5);
  lStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  ppuStack_428 = &PTR_FUN_110a90cd0;
  uStack_420 = 0;
  uStack_400 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  pppuVar5 = &ppuStack_428;
  FUN_1086cf28c();
  FUN_1086c1dc8();
  func_0x0001088bf408();
  pppuVar5[5] = *(undefined ***)(param_3 + 0x38);
  uVar8 = uStack_3f0;
  in_ZR = uStack_3f0 == uStack_3e8;
  if (uStack_3f0 < uStack_3e8) {
    func_0x0001086c1dd8(uStack_3f0,&ppuStack_428);
    uVar8 = uVar8 + 0x30;
  }
  else {
    plVar7 = &lStack_3f8;
    func_0x0001086ec2e8(plVar7,(long)(uStack_3f0 - lStack_3f8) / 0x30 + 1);
    FUN_1086ec3c4(auStack_3e0,plVar7,(long)(uStack_3f0 - lStack_3f8) / 0x30,&uStack_3e8);
    func_0x0001086c1dd8(lStack_3d0,&ppuStack_428);
    lStack_3d0 = lStack_3d0 + 0x30;
    FUN_1086ec338(&lStack_3f8,auStack_3e0);
    uVar8 = uStack_3f0;
    FUN_1086ec598(auStack_3e0);
  }
  uStack_218 = *(undefined8 *)(param_1 + 0x10);
  uStack_220 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_3f0 = uVar8;
  lStack_210 = param_1;
  func_0x000107c27994(auStack_208,param_2);
  func_0x0001086c1dd8(auStack_1f0,&ppuStack_428);
  FUN_108656428(auStack_1c0,auStack_550);
  uStack_f8 = *param_6;
  (**(code **)(param_6[1] + 0x10))(auStack_f0,param_6 + 1);
  puVar6 = (undefined8 *)0x160;
  __Znwm();
  FUN_1086ec6f4(auStack_3e0,&uStack_220);
  *puVar6 = &PTR_FUN_110a66150;
  FUN_1086ec6f4(puVar6 + 1,auStack_3e0);
  FUN_1086ec268(auStack_3e0);
  FUN_1086e5330(aplStack_438,param_1 + 0x18);
  if (aplStack_438[0] != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar7 + 0x10))();
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    auStack_460[0] = 0;
    uStack_458 = 0;
    auStack_480[0] = 0;
    uStack_468 = 0;
    auStack_3e0[0] = 0;
    uStack_3b8 = 0;
    puStack_488 = puVar6;
    (**(code **)(*aplStack_438[0] + 0x48))
              (aplStack_438[0],plVar7,&lStack_3f8,auStack_550,0,&uStack_450,auStack_460,auStack_480,
               auStack_3e0,&puStack_488);
    puVar6 = puStack_488;
    puStack_488 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      func_0x0001086ecdfc();
    }
    func_0x000107c27a1c(auStack_3e0);
    func_0x000107c279dc(auStack_480);
    func_0x000104bee630(&uStack_450);
    puVar6 = (undefined8 *)0x0;
    FUN_1086995ac(param_1 + 0x88,param_2);
  }
  func_0x000107c288e8(aplStack_438);
  if (puVar6 != (undefined8 *)0x0) {
    func_0x0001086ecde4();
  }
  FUN_1086ec268(&uStack_220);
  func_0x000107c2a484(&ppuStack_428);
  FUN_1086a9294(&lStack_3f8);
  puVar4 = auStack_550;
  func_0x000107c2a500();
LAB_1086ec134:
  func_0x0001086ece1c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086ecdf4();
    __Unwind_Resume();
    (*(code *)**(undefined8 **)(puVar4 + 0x4c))(puVar4 + 0x4c);
    func_0x000107c2a500(puVar4 + 0x18);
    func_0x000107c2a484(puVar4 + 0xc);
    func_0x000107c27914(puVar4 + 6);
    if (*(long *)(puVar4 + 2) != 0) {
      func_0x000107c60d68();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1086ec268; end: 1086ec2af;  */

long FUN_1086ec268(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x130))(param_1 + 0x130);
  func_0x000107c2a500(param_1 + 0x60);
  func_0x000107c2a484(param_1 + 0x30);
  func_0x000107c27914(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 1086ec2b0; end: 1086ec2d3;  */

void FUN_1086ec2b0(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086ec2d4; end: 1086ec337;  */

void FUN_1086ec2d4(void)

{
  func_0x0001086ec678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ec338; end: 1086ec3c3;  */

void FUN_1086ec338(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_1086ec410(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086ec3c4; end: 1086ec40f;  */

long * FUN_1086ec3c4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1086cf360();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 1086ec410; end: 1086ec4b7;  */

void FUN_1086ec410(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x30) {
    FUN_1086ec4ec(param_4,lVar1);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  FUN_1086ec4b8(param_1,param_2,param_3);
  FUN_1086cf3ac(&uStack_60);
  return;
}



/* Entry: 1086ec4b8; end: 1086ec4eb;  */

void FUN_1086ec4b8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x000107c2a484();
  }
  return;
}



/* Entry: 1086ec4ec; end: 1086ec4f7;  */

undefined8 * FUN_1086ec4ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90cd0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1086ec534(param_1,param_2);
  return param_1;
}



/* Entry: 1086ec4f8; end: 1086ec533;  */

undefined8 * FUN_1086ec4f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a90cd0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1086ec534(param_1,param_3);
  return param_1;
}



/* Entry: 1086ec534; end: 1086ec597;  */

long FUN_1086ec534(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_108907d84(param_1);
    }
    else {
      FUN_108907d50(param_1);
    }
  }
  return param_1;
}



/* Entry: 1086ec598; end: 1086ec5c3;  */

long * FUN_1086ec598(long *param_1)

{
  FUN_1086ec5c4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086ec5c4; end: 1086ec5cb;  */

void FUN_1086ec5c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x000107c2a484();
  }
  return;
}



/* Entry: 1086ec5cc; end: 1086ec6f3;  */

void FUN_1086ec5cc(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x000107c2a484();
  }
  return;
}



/* Entry: 1086ec6f4; end: 1086ec793;  */

undefined8 * FUN_1086ec6f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  func_0x000107c27994(param_1 + 3,param_2 + 3);
  FUN_1086ec4ec(param_1 + 6,param_2 + 6);
  FUN_108656428(param_1 + 0xc,param_2 + 0xc);
  param_1[0x25] = param_2[0x25];
  (**(code **)(param_2[0x26] + 0x10))(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



/* Entry: 1086ec794; end: 1086ec7bf;  */

undefined8 * FUN_1086ec794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66150;
  FUN_1086ec268(param_1 + 1);
  return param_1;
}



/* Entry: 1086ec7c0; end: 1086ec7d3;  */

void FUN_1086ec7c0(void)

{
  FUN_1086ec794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ec7d4; end: 1086ecda3;  */

/* WARNING: Possible PIC construction at 0x0001086ecc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086ec930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086ecc74) */
/* WARNING: Removing unreachable block (ram,0x0001086ecc84) */
/* WARNING: Removing unreachable block (ram,0x0001086ecd00) */
/* WARNING: Removing unreachable block (ram,0x0001086ecd34) */
/* WARNING: Removing unreachable block (ram,0x0001086ecd94) */
/* WARNING: Removing unreachable block (ram,0x0001086ecdb4) */
/* WARNING: Removing unreachable block (ram,0x0001086ecdb0) */
/* WARNING: Removing unreachable block (ram,0x0001086ecd4c) */
/* WARNING: Removing unreachable block (ram,0x0001086ec934) */

void FUN_1086ec7d4(long param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  undefined1 in_ZR;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 auStack_658 [24];
  long lStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined **ppuStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long *plStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 uStack_5e0;
  uint uStack_5d8;
  undefined1 auStack_5d0 [120];
  undefined1 auStack_558 [24];
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined1 uStack_530;
  undefined1 uStack_518;
  undefined1 uStack_510;
  undefined1 uStack_50c;
  undefined1 uStack_508;
  undefined1 uStack_500;
  undefined1 uStack_4f8;
  undefined1 uStack_4f4;
  undefined1 uStack_4f0;
  undefined1 uStack_4e8;
  undefined1 uStack_4e0;
  undefined1 uStack_4dc;
  undefined1 uStack_4d8;
  undefined1 uStack_4d0;
  undefined1 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_4ac;
  undefined1 uStack_4a8;
  undefined1 uStack_4a4;
  undefined1 uStack_4a0;
  undefined1 uStack_498;
  undefined1 uStack_480;
  undefined1 auStack_478 [40];
  undefined **ppuStack_450;
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
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [440];
  byte bStack_208;
  undefined1 auStack_200 [424];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_680 = 0;
  lStack_678 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if (((lVar5 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_678 = lVar5, lVar5 == 0))
     || (lStack_680 = *(long *)(param_1 + 8), lStack_680 == 0)) goto LAB_1086ec970;
  func_0x00010869a12c(lVar3 + 0x88,param_1 + 0x20);
  if (*(int *)(param_2 + 0x38) != 1) {
    if (*(int *)(param_2 + 0x38) != 0) {
      func_0x00010563ab98();
      return;
    }
    return;
  }
  FUN_1086ecda4();
  in_ZR = *(int *)(param_2 + 0x18) == 1;
  if ((bool)in_ZR) {
    uVar7 = *(ulong *)(param_2 + 0x10);
    puVar1 = (ulong *)(param_2 + 0x10);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + 7);
    }
    uVar7 = *puVar1;
    in_ZR = *(char *)(uVar7 + 0x48) == '\x01';
    if ((!(bool)in_ZR) || (in_ZR = *(int *)(uVar7 + 0x68) == 0xc, !(bool)in_ZR)) goto LAB_1086ec954;
    FUN_1086a1148(auStack_3d8,*(undefined8 *)(lVar3 + 0x38),param_1 + 0x20,2);
    if ((bStack_208 & 1) == 0) {
      uVar7 = 4;
      uVar10 = 0x100000000;
    }
    else {
      uStack_448 = 0;
      ppuStack_450 = &PTR_DAT_110a96180;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      puStack_3f0 = (undefined *)0x0;
      uStack_3e0 = 0;
      func_0x000107c29ee4(&ppuStack_620,*(long *)(lVar3 + 0x38) + 0x40);
      FUN_1086ec2b0(&ppuStack_450);
      func_0x000107c287d0();
      func_0x000107c2a2e0(&ppuStack_620);
      FUN_108653db8(&ppuStack_450);
      func_0x00010890d3ac();
      FUN_108667a24(&ppuStack_450);
      FUN_108907d50();
      if (*(int *)(uVar7 + 0x68) == 0xc) {
        ppuVar11 = *(undefined ***)(uVar7 + 0x60);
      }
      else {
        ppuVar11 = &PTR_PTR_11327e880;
      }
      FUN_1086a2754(&ppuStack_450);
      FUN_1089229ac();
      func_0x0001086ec2c0(&ppuStack_450);
      FUN_1088bbb00();
      uStack_3e8 = CONCAT44(uStack_3e8._4_4_,*(undefined4 *)(ppuVar11 + 0x19));
      uStack_3e0 = *(undefined8 *)(param_2 + 0x28);
      puStack_3f0 = ppuVar11[0x18];
      uVar4 = *(uint *)(ppuVar11 + 2);
      if ((uVar4 >> 4 & 1) != 0) {
        ppuStack_620 = &PTR_FUN_110a8ea68;
        uStack_618 = 0;
        uStack_5d8 = 0;
        plStack_608 = (long *)0x0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        puStack_600 = (undefined *)0x0;
        uStack_5e8 = 0;
        uStack_5f0 = 0;
        func_0x0001086d0688(&ppuStack_620);
        FUN_10892a9f0();
        FUN_1086dcd58(auStack_478,auStack_3c0,&ppuStack_620);
        FUN_1086af46c(auStack_478);
        FUN_10885ff98(*(undefined8 *)(lVar3 + 0x38),auStack_3d8);
        FUN_1088fc38c(&ppuStack_620);
      }
      func_0x000107c27994(&ppuStack_620,param_1 + 0x20);
      plVar6 = *(long **)(lVar3 + 0x58);
      (**(code **)(*plVar6 + 0x10))();
      puStack_600 = ppuVar11[0x18];
      uStack_5f8 = CONCAT71(uStack_5f8._1_7_,1);
      uStack_5f0 = uStack_3e0;
      uStack_5e8 = CONCAT71(uStack_5e8._1_7_,1);
      uStack_5e0 = 0;
      uStack_5d8 = uStack_5d8 & 0xffffff00;
      plStack_608 = plVar6;
      func_0x000107c287dc(auStack_5d0,&ppuStack_450);
      func_0x000107c278b8(auStack_558,&DAT_10f4bdfd4);
      in_ZR = (undefined **)ppuVar11[0x10] == (undefined **)0x0;
      ppuVar2 = &PTR_PTR_113286e08;
      if (!(bool)in_ZR) {
        ppuVar2 = (undefined **)ppuVar11[0x10];
      }
      puStack_540 = ppuVar2[0x24];
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_498 = 0;
      uStack_480 = 0;
      lStack_640 = 0;
      uStack_638 = 0;
      uStack_630 = 0;
      uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18);
      func_0x000107c278b8(auStack_658,&UNK_10f4b1772);
      func_0x000107c31420(auStack_200,uVar8,auStack_658);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_658);
      FUN_1086a6610(&lStack_670,param_1 + 0x20,plStack_608,lVar3 + 0x38);
      if (lStack_640 != 0) {
        func_0x000104be12c4(&lStack_640);
        __ZdlPv(lStack_640);
      }
      uStack_638 = uStack_668;
      lStack_640 = lStack_670;
      uStack_630 = uStack_660;
      uStack_668 = 0;
      uStack_660 = 0;
      lStack_670 = 0;
      func_0x000104be1274(&lStack_670);
      (**(code **)(**(long **)(lVar3 + 0x38) + 0x10))(*(long **)(lVar3 + 0x38),&ppuStack_620);
      func_0x000107c31428(auStack_200);
      func_0x000107c31424(auStack_200);
      puVar9 = *(undefined8 **)(lVar3 + 0x68);
      func_0x000107c28a9c(auStack_200,&ppuStack_620);
      FUN_1086cc028(&lStack_670,auStack_200,1);
      (**(code **)*puVar9)(puVar9,param_1 + 0x20,auStack_3d8,uVar4 >> 4 & 1,&lStack_670,&lStack_640)
      ;
      func_0x00010867b9fc(&lStack_670);
      func_0x000107c288e0(auStack_200);
      func_0x000104be1274(&lStack_640);
      func_0x000107c288e0(&ppuStack_620);
      func_0x000107c2a5a4(&ppuStack_450);
      uVar10 = 0;
      uVar7 = 0;
    }
    func_0x000107c288c8(auStack_3d8);
  }
  else {
LAB_1086ec954:
    uVar7 = 4;
    uVar10 = 0x100000000;
  }
  (**(code **)(param_1 + 0x130))(uVar10 | uVar7,param_1 + 0x130);
LAB_1086ec970:
  func_0x000107c29320(&lStack_680);
  func_0x0001086ece1c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 1086ecda4; end: 1086ecdd7;  */

void FUN_1086ecda4(long param_1)

{
  if (*(int *)(param_1 + 0x38) == 1) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 1086ecdd8; end: 1086ece2f;  */

void FUN_1086ecdd8(void)

{
  return;
}



/* Entry: 1086ece30; end: 1086ecfb7;  */

void FUN_1086ece30(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  
  func_0x000107c29328();
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) == 0) goto LAB_1086ecf5c;
  lVar16 = *(long *)(param_2 + 0x18);
  uVar6 = *(uint *)(lVar16 + 0x10);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar9 = 0;
    if ((uVar6 >> 1 & 1) == 0) goto LAB_1086ecee4;
LAB_1086ece78:
    lVar12 = *(long *)(lVar16 + 0x20);
    uVar14 = *(undefined1 *)(lVar12 + 0x10);
    uVar13 = *(undefined1 *)(lVar12 + 0x11);
    uVar11 = *(undefined1 *)(lVar12 + 0x12);
    if ((uVar6 >> 2 & 1) == 0) goto LAB_1086ecef4;
LAB_1086ece8c:
    lVar16 = *(long *)(lVar16 + 0x28);
    uVar17 = *(undefined1 *)(lVar16 + 0x20);
    uVar15 = *(undefined1 *)(lVar16 + 0x21);
    if ((*(byte *)(lVar16 + 0x10) & 1) == 0) goto LAB_1086ecf08;
    lVar16 = *(long *)(lVar16 + 0x18);
    uVar4 = *(undefined1 *)(lVar16 + 0x10);
    uVar3 = *(undefined1 *)(lVar16 + 0x11);
    uVar2 = *(undefined1 *)(lVar16 + 0x12);
    uVar18 = *(undefined8 *)(lVar16 + 0x14);
  }
  else {
    lVar12 = *(long *)(lVar16 + 0x18);
    uVar7 = *(undefined1 *)(lVar12 + 0x18);
    uVar5 = *(undefined1 *)(lVar12 + 0x19);
    uVar9 = *(uint *)(lVar12 + 0x10);
    uVar1 = *(uint *)(lVar12 + 0x14);
    if (199 < uVar9) {
      uVar9 = 200;
    }
    if (199 < uVar1) {
      uVar1 = 200;
    }
    uVar10 = uVar9;
    if (uVar9 <= uVar1) {
      uVar10 = uVar1;
    }
    uVar8 = *(undefined1 *)(lVar12 + 0x1a);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_1086ece78;
LAB_1086ecee4:
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 1;
    if ((uVar6 >> 2 & 1) != 0) goto LAB_1086ece8c;
LAB_1086ecef4:
    uVar15 = 0;
    uVar17 = 0;
LAB_1086ecf08:
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar18 = 0;
  }
  *param_1 = uVar7;
  param_1[1] = uVar5;
  *(uint *)(param_1 + 4) = uVar9;
  *(uint *)(param_1 + 8) = uVar10;
  param_1[0xc] = uVar8;
  param_1[0x10] = uVar14;
  param_1[0x11] = uVar13;
  param_1[0x12] = uVar11;
  param_1[0x14] = uVar17;
  param_1[0x15] = uVar15;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar2;
  *(undefined8 *)(param_1 + 0x1c) = uVar18;
  uVar6 = *(uint *)(param_2 + 0x10);
LAB_1086ecf5c:
  if ((uVar6 >> 1 & 1) != 0) {
    lVar16 = *(long *)(param_2 + 0x20);
    if ((*(uint *)(lVar16 + 0x10) & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(*(long *)(lVar16 + 0x18) + 0x10);
    }
    if ((*(uint *)(lVar16 + 0x10) >> 1 & 1) == 0) {
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x10);
      uVar8 = *(undefined1 *)(*(long *)(lVar16 + 0x20) + 0x11);
    }
    param_1[0x24] = uVar7;
    param_1[0x25] = uVar5;
    param_1[0x26] = uVar8;
    param_1[0x27] = 1;
    return;
  }
  return;
}



/* Entry: 1086ecfb8; end: 1086ed037;  */

void FUN_1086ecfb8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((iVar1 == 0) && (lVar3 + *(long *)(param_1 + 0x68) * 1000000 < lVar2)) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0xd8))(*(long **)(param_1 + 0x40),6);
      lVar2 = *(long *)(param_1 + 0x28);
      if ((*(char *)(lVar2 + 0x20) == '\x01') && ((*(byte *)(lVar2 + 0x21) & 1) != 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar2;
        func_0x0001006b3c90();
      }
      *(long *)(lVar2 + 0x10) = lVar3;
      return;
    }
  }
  return;
}



/* Entry: 1086ed038; end: 1086ed077;  */

void FUN_1086ed038(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  *(long *)(param_1 + 0x58) = lVar1;
  return;
}



/* Entry: 1086ed078; end: 1086ed07b;  */

undefined8 * FUN_1086ed078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a661a0;
  func_0x000107c29344(param_1 + 8);
  func_0x000107c28800(param_1 + 6);
  func_0x000107c2933c(param_1 + 5);
  func_0x000107c29348(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086ed07c; end: 1086ed08f;  */

void FUN_1086ed07c(void)

{
  FUN_1086ed090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ed090; end: 1086ed0df;  */

undefined8 * FUN_1086ed090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a661a0;
  func_0x000107c29344(param_1 + 8);
  func_0x000107c28800(param_1 + 6);
  func_0x000107c2933c(param_1 + 5);
  func_0x000107c29348(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086ed0e0; end: 1086ed133;  */

undefined8 FUN_1086ed0e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(param_2,0,10);
  *param_3 = (long)(int)param_2;
  return 1;
}



/* Entry: 1086ed134; end: 1086ed14f;  */

void FUN_1086ed134(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c28800(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ed150; end: 1086ed1db;  */

undefined8 FUN_1086ed150(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint extraout_w8;
  ulong extraout_x8;
  undefined8 uVar1;
  undefined8 uStack_138;
  undefined1 auStack_130 [272];
  
  func_0x000107c282f8(auStack_130,param_2,8);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERy(auStack_130,&uStack_138);
  func_0x0001086ed1e4();
  if ((extraout_x8 & 5) == 0) {
    func_0x000107c28cf8(auStack_130);
    func_0x0001086ed1e4();
    if ((extraout_w8 >> 1 & 1) != 0) {
      *param_3 = uStack_138;
      uVar1 = 1;
      goto LAB_1086ed1a0;
    }
  }
  uVar1 = 0;
LAB_1086ed1a0:
  func_0x000107c282fc(auStack_130);
  return uVar1;
}



/* Entry: 1086ed1dc; end: 1086ed20b;  */

void FUN_1086ed1dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1086ed20c; end: 1086ed25f;  */

void FUN_1086ed20c(long param_1,undefined8 param_2,long param_3)

{
  FUN_1086ee0f4();
  FUN_1086ed260();
  if (*(long *)(param_1 + 0x28) < param_3) {
    *(long *)(param_1 + 0x28) = param_3;
    func_0x0001086ee118();
  }
  return;
}



/* Entry: 1086ed260; end: 1086ed6cb;  */

undefined ** FUN_1086ed260(long param_1,undefined *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puVar17;
  undefined *unaff_x25;
  undefined **ppuStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [72];
  byte bStack_58;
  
  ppuVar14 = (undefined **)(param_1 + 0x98);
  FUN_1086ede90();
  if (ppuVar14 != (undefined **)0x0) goto LAB_1086ed66c;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(auStack_a0,*(long **)(param_1 + 0x38),param_2);
  if ((bStack_58 & 1) == 0) {
    ppuStack_e8 = &PTR_FUN_110a805a0;
    plStack_e0 = (long *)0x0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    FUN_1086527cc(auStack_a0,&ppuStack_e8);
    bStack_58 = 1;
    FUN_1088b64c0(&ppuStack_e8);
    FUN_1086ed6cc(param_1,param_2,auStack_a0);
  }
  puVar9 = param_2;
  FUN_108848654();
  puVar17 = *(undefined **)(param_1 + 0xa0);
  if (puVar17 != (undefined *)0x0) {
    puVar15 = puVar17 + -1;
    uVar16 = (uint)puVar17;
    if (((ulong)puVar17 & (ulong)puVar15) == 0) {
      unaff_x25 = (undefined *)((ulong)(uVar16 - 1) & (ulong)puVar9);
    }
    else {
      unaff_x25 = puVar9;
      if (puVar17 <= puVar9) {
        uVar2 = 0;
        if (uVar16 != 0) {
          uVar2 = (uint)puVar9 / uVar16;
        }
        unaff_x25 = (undefined *)(ulong)((uint)puVar9 - uVar2 * uVar16);
      }
    }
    ppuVar14 = *(undefined ***)(*(long *)(param_1 + 0x98) + (long)unaff_x25 * 8);
    if (ppuVar14 != (undefined **)0x0) {
      do {
        while( true ) {
          ppuVar14 = (undefined **)*ppuVar14;
          if (ppuVar14 == (undefined **)0x0) goto LAB_1086ed3a4;
          puVar8 = ppuVar14[1];
          if (puVar8 != puVar9) break;
          ppuVar6 = ppuVar14 + 2;
          func_0x000107c28078(ppuVar6,param_2);
          if (((ulong)ppuVar6 & 1) != 0) goto LAB_1086ed664;
        }
        if (((ulong)puVar17 & (ulong)puVar15) == 0) {
          puVar8 = (undefined *)((ulong)puVar8 & (ulong)puVar15);
        }
        else if (puVar17 <= puVar8) {
          uVar3 = 0;
          if (puVar17 != (undefined *)0x0) {
            uVar3 = (ulong)puVar8 / (ulong)puVar17;
          }
          puVar8 = puVar8 + -(uVar3 * (long)puVar17);
        }
      } while (puVar8 == unaff_x25);
    }
  }
LAB_1086ed3a4:
  ppuVar14 = (undefined **)0x70;
  __Znwm();
  plVar1 = (long *)(param_1 + 0xa8);
  uStack_d8 = 0;
  *ppuVar14 = (undefined *)0x0;
  ppuVar14[1] = puVar9;
  ppuStack_e8 = ppuVar14;
  plStack_e0 = plVar1;
  func_0x000107c27994(ppuVar14 + 2,param_2);
  FUN_1086edf6c(ppuVar14 + 5,auStack_a0);
  uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
  fVar4 = (float)(*(long *)(param_1 + 0xb0) + 1);
  if ((puVar17 == (undefined *)0x0) || (*(float *)(param_1 + 0xb8) * (float)puVar17 < fVar4)) {
    uVar3 = 1;
    if ((undefined *)0x2 < puVar17) {
      uVar3 = (ulong)(((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0);
    }
    puVar15 = (undefined *)(uVar3 | (long)puVar17 << 1);
    puVar17 = (undefined *)(long)(fVar4 / *(float *)(param_1 + 0xb8));
    if (puVar15 <= puVar17) {
      puVar15 = puVar17;
    }
    if (puVar15 + -1 == (undefined *)0x0) {
      puVar15 = (undefined *)0x2;
    }
    else if (((ulong)puVar15 & (ulong)(puVar15 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar17 = *(undefined **)(param_1 + 0xa0);
    if (puVar17 < puVar15) {
LAB_1086ed460:
      if ((ulong)puVar15 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1086ed694);
        (*pcVar5)();
      }
      lVar7 = (long)puVar15 << 3;
      __Znwm(lVar7);
      func_0x0001086edf78(param_1 + 0x98,lVar7);
      *(undefined **)(param_1 + 0xa0) = puVar15;
      lVar7 = *(long *)(param_1 + 0x98);
      for (puVar17 = (undefined *)0x0; puVar15 != puVar17; puVar17 = puVar17 + 1) {
        *(undefined8 *)(lVar7 + (long)puVar17 * 8) = 0;
      }
      plVar10 = (long *)*plVar1;
      puVar17 = puVar15;
      if (plVar10 != (long *)0x0) {
        puVar12 = (undefined *)plVar10[1];
        puVar8 = puVar15 + -1;
        uVar3 = 0;
        if (puVar15 != (undefined *)0x0) {
          uVar3 = (ulong)puVar12 / (ulong)puVar15;
        }
        puVar13 = puVar12;
        if (puVar15 <= puVar12) {
          puVar13 = puVar12 + -(uVar3 * (long)puVar15);
        }
        if (((ulong)puVar15 & (ulong)puVar8) == 0) {
          puVar13 = (undefined *)((ulong)puVar12 & (ulong)puVar8);
        }
        *(long **)(lVar7 + (long)puVar13 * 8) = plVar1;
        while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
          puVar12 = (undefined *)plVar10[1];
          if (((ulong)puVar15 & (ulong)puVar8) == 0) {
            puVar12 = (undefined *)((ulong)puVar12 & (ulong)puVar8);
          }
          else if (puVar15 <= puVar12) {
            uVar3 = 0;
            if (puVar15 != (undefined *)0x0) {
              uVar3 = (ulong)puVar12 / (ulong)puVar15;
            }
            puVar12 = puVar12 + -(uVar3 * (long)puVar15);
          }
          if (puVar12 != puVar13) {
            if (*(long *)(lVar7 + (long)puVar12 * 8) == 0) {
              *(long **)(lVar7 + (long)puVar12 * 8) = plVar11;
              puVar13 = puVar12;
            }
            else {
              *plVar11 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar7 + (long)puVar12 * 8);
              **(long **)(lVar7 + (long)puVar12 * 8) = (long)plVar10;
              plVar10 = plVar11;
            }
          }
        }
      }
    }
    else if (puVar15 < puVar17) {
      puVar8 = (undefined *)(long)((float)*(ulong *)(param_1 + 0xb0) / *(float *)(param_1 + 0xb8));
      if ((puVar17 < (undefined *)0x3) || (((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined *)0x1 < puVar8) {
        puVar8 = (undefined *)(1L << (-LZCOUNT(puVar8 + -1) & 0x3fU));
      }
      if (puVar15 <= puVar8) {
        puVar15 = puVar8;
      }
      if (puVar15 < puVar17) {
        if (puVar15 != (undefined *)0x0) goto LAB_1086ed460;
        func_0x0001086edf78(param_1 + 0x98,0);
        *(undefined8 *)(param_1 + 0xa0) = 0;
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = *(undefined **)(param_1 + 0xa0);
      }
    }
    if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
      unaff_x25 = (undefined *)((ulong)((int)puVar17 - 1) & (ulong)puVar9);
    }
    else {
      unaff_x25 = puVar9;
      if (puVar17 <= puVar9) {
        uVar3 = 0;
        if (puVar17 != (undefined *)0x0) {
          uVar3 = (ulong)puVar9 / (ulong)puVar17;
        }
        unaff_x25 = puVar9 + -(uVar3 * (long)puVar17);
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x98);
  plVar10 = *(long **)(lVar7 + (long)unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    *ppuVar14 = (undefined *)*plVar1;
    *plVar1 = (long)ppuVar14;
    *(long **)(lVar7 + (long)unaff_x25 * 8) = plVar1;
    if (*ppuVar14 != (undefined *)0x0) {
      puVar9 = *(undefined **)(*ppuVar14 + 8);
      if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
        puVar9 = (undefined *)((ulong)puVar9 & (ulong)(puVar17 + -1));
      }
      else if (puVar17 <= puVar9) {
        uVar3 = 0;
        if (puVar17 != (undefined *)0x0) {
          uVar3 = (ulong)puVar9 / (ulong)puVar17;
        }
        puVar9 = puVar9 + -(uVar3 * (long)puVar17);
      }
      *(undefined ***)(lVar7 + (long)puVar9 * 8) = ppuVar14;
    }
  }
  else {
    *ppuVar14 = (undefined *)*plVar10;
    *plVar10 = (long)ppuVar14;
  }
  ppuStack_e8 = (undefined **)0x0;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  func_0x0001086ee12c();
LAB_1086ed664:
  FUN_1086edae4(auStack_a0);
LAB_1086ed66c:
  return ppuVar14 + 5;
}



/* Entry: 1086ed6cc; end: 1086ed76f;  */

void FUN_1086ed6cc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c29ee4(auStack_50,param_2);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  if (*(long *)(param_3 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_3 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_3 + 0x18) = uVar1;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(auStack_50);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
  return;
}



/* Entry: 1086ed770; end: 1086ed80f;  */

void FUN_1086ed770(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  FUN_1086ee0f4();
  FUN_1086ed260();
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 < param_3) {
    *(long *)(param_1 + 0x30) = param_3;
  }
  if (*(long *)(param_1 + 0x38) < param_3) {
    *(long *)(param_1 + 0x38) = param_3;
    if (param_4 <= *(long *)(param_1 + 0x40)) goto LAB_1086ed7dc;
  }
  else if (param_4 <= *(long *)(param_1 + 0x40)) {
    if (param_3 <= lVar1) {
      return;
    }
    goto LAB_1086ed7dc;
  }
  *(long *)(param_1 + 0x40) = param_4;
LAB_1086ed7dc:
  func_0x0001086ee118();
  return;
}



/* Entry: 1086ed810; end: 1086ed863;  */

void FUN_1086ed810(long param_1,undefined8 param_2,long param_3)

{
  FUN_1086ee0f4();
  FUN_1086ed260();
  if (*(long *)(param_1 + 0x38) < param_3) {
    *(long *)(param_1 + 0x38) = param_3;
    func_0x0001086ee118();
  }
  return;
}



/* Entry: 1086ed864; end: 1086eda0b;  */

void FUN_1086ed864(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  func_0x000107c3291c();
  func_0x0001086ee134(*(undefined8 *)(extraout_x8 + 0x30));
  func_0x0001086ee134(*(undefined8 *)(**(long **)(param_1 + 0x48) + 0x28));
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    func_0x0001086ee134(*(undefined8 *)(**(long **)(param_1 + 0x58) + 0x28));
  }
  plVar2 = (long *)(param_1 + 0x98);
  FUN_1086ede90(plVar2,param_2);
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0xa0);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x98);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  if (plVar6 == (long *)(param_1 + 0xa8)) {
LAB_1086ed948:
    if (lVar3 == 0) {
LAB_1086ed97c:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1086ed984;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1086ed97c;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1086ed948;
LAB_1086ed984:
    if (lVar3 == 0) goto LAB_1086ed9bc;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1086ed9bc:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
  func_0x0001086ee12c();
  return;
}



/* Entry: 1086eda0c; end: 1086eda8f;  */

undefined8 * FUN_1086eda0c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 1086eda90; end: 1086eda93;  */

undefined8 * FUN_1086eda90(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a662c0;
  plVar1 = (long *)param_1[0x15];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1086ede68(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c27c20(param_1 + 0x11);
  func_0x000107c288a4(param_1 + 0xf);
  func_0x000107c290c0(param_1 + 0xd);
  func_0x000107c289f4(param_1 + 0xb);
  func_0x000107c2936c(param_1 + 9);
  func_0x000107c29370(param_1 + 7);
  func_0x000107c29374(param_1 + 5);
  func_0x000107c29378(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086eda94; end: 1086edaa7;  */

void FUN_1086eda94(void)

{
  FUN_1086eddc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086edaa8; end: 1086edaaf;  */

void FUN_1086edaa8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1086ee0f4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086edab0; end: 1086edae3;  */

void FUN_1086edab0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1086ee0f4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086edae4; end: 1086edb03;  */

void FUN_1086edae4(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1088b64c0();
  }
  return;
}



/* Entry: 1086edb04; end: 1086edb0b;  */

void FUN_1086edb04(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1086ee0f4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    FUN_1088b6940();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086edb0c; end: 1086edba7;  */

void FUN_1086edb0c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1086ee0f4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    FUN_1088b6940();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086edba8; end: 1086edc73;  */

void FUN_1086edba8(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2 = puVar2 + 4;
  }
  else {
    plVar1 = param_1;
    FUN_1086edc74(param_1,((long)puVar2 - *param_1 >> 4) + 1);
    FUN_1086edd28(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
    *puStack_48 = param_2;
    *(undefined8 *)(puStack_48 + 2) = param_3;
    puStack_48 = puStack_48 + 4;
    FUN_1086edcb4(param_1,auStack_58);
    puVar2 = (undefined4 *)param_1[1];
    func_0x0001086edd70(auStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1086edc74; end: 1086edcb3;  */

ulong FUN_1086edc74(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_1086d0618();
  FUN_1086ee0f4();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 1086edcb4; end: 1086edd27;  */

void FUN_1086edcb4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  FUN_1086ee0f4();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1086edd28; end: 1086edd9b;  */

long * FUN_1086edd28(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1086d0624();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1086edd9c; end: 1086eddbf;  */

void FUN_1086edd9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1086eddc0; end: 1086ede67;  */

undefined8 * FUN_1086eddc0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a662c0;
  plVar1 = (long *)param_1[0x15];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1086ede68(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c27c20(param_1 + 0x11);
  func_0x000107c288a4(param_1 + 0xf);
  func_0x000107c290c0(param_1 + 0xd);
  func_0x000107c289f4(param_1 + 0xb);
  func_0x000107c2936c(param_1 + 9);
  func_0x000107c29370(param_1 + 7);
  func_0x000107c29374(param_1 + 5);
  func_0x000107c29378(param_1 + 3);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086ede68; end: 1086ede8f;  */

long FUN_1086ede68(long param_1)

{
  long lStack_28;
  
  FUN_1088b64c0(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086ede90; end: 1086edf6b;  */

long FUN_1086ede90(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1086edf6c; end: 1086edf8f;  */

void FUN_1086edf6c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001088b6db0(param_1,0);
  *unaff_x19 = &PTR_FUN_110a805a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088b6d64();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x000107c2a26c();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a26c();
  }
  unaff_x19[4] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  unaff_x19[8] = *(undefined8 *)(unaff_x20 + 0x40);
  unaff_x19[7] = uVar4;
  unaff_x19[6] = uVar3;
  unaff_x19[5] = uVar2;
  return;
}



/* Entry: 1086edf90; end: 1086edff3;  */

long * FUN_1086edf90(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1086ede68(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1086edff4; end: 1086ee007;  */

void FUN_1086edff4(void)

{
  func_0x0001086edfd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ee008; end: 1086ee04b;  */

undefined8 FUN_1086ee008(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1086ee0d4();
  return uVar1;
}



/* Entry: 1086ee04c; end: 1086ee08f;  */

void FUN_1086ee04c(long param_1,undefined8 param_2)

{
  func_0x0001086ee13c(param_2,param_1 + 8);
  FUN_1086eda0c();
  return;
}



/* Entry: 1086ee090; end: 1086ee0c7;  */

long FUN_1086ee090(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a66440);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1086ee0c8; end: 1086ee0d3;  */

undefined ** FUN_1086ee0c8(void)

{
  return &PTR_DAT_110a66440;
}



/* Entry: 1086ee0d4; end: 1086ee0f3;  */

void FUN_1086ee0d4(void)

{
  func_0x0001086ee13c();
  FUN_1086eda0c();
  return;
}



/* Entry: 1086ee0f4; end: 1086ee14f;  */

void FUN_1086ee0f4(void)

{
  return;
}



/* Entry: 1086ee150; end: 1086ee1b7;  */

void FUN_1086ee150(long param_1)

{
  long *aplStack_30 [2];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c292ac(aplStack_30,param_1 + 8);
    if (aplStack_30[0] != (long *)0x0) {
      (**(code **)(*aplStack_30[0] + 0x2e0))();
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    func_0x000107c32920();
  }
  return;
}


