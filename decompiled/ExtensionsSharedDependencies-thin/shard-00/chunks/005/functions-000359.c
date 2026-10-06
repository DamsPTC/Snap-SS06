/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00723ef4; end: 00723fbb;  */

undefined1 * FUN_00723ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  
  func_0x00729d0c();
  bVar1 = *(byte *)(param_3 + 4);
  if (bVar1 == 1) {
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
      *unaff_x19 = *unaff_x20;
      unaff_x19 = unaff_x19 + 1;
    }
  }
  else {
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
      if (bVar1 != 0) {
        func_0x0072a134();
        _memmove();
      }
      unaff_x19 = unaff_x19 + bVar1;
    }
  }
  return unaff_x19;
}



/* Entry: 00723fbc; end: 0072401f;  */

undefined2 * FUN_00723fbc(uint param_1,undefined1 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar5 = 0x2d;
  if (-1 < (int)param_1) {
    uVar5 = 0x2b;
  }
  uVar4 = -param_1;
  if (-1 < (int)param_1) {
    uVar4 = param_1;
  }
  puVar2 = (undefined2 *)(param_2 + 1);
  *param_2 = uVar5;
  if (99 < uVar4) {
    lVar1 = (ulong)(uVar4 / 100) * 2;
    puVar3 = puVar2;
    if (999 < uVar4) {
      puVar3 = (undefined2 *)(param_2 + 2);
      param_2[1] = (&UNK_0083ccd4)[lVar1];
    }
    puVar2 = (undefined2 *)((long)puVar3 + 1);
    *(undefined *)puVar3 = (&UNK_0083ccd5)[lVar1];
    uVar4 = uVar4 % 100;
  }
  *puVar2 = *(undefined2 *)(&UNK_0083ccd4 + (ulong)uVar4 * 2);
  return puVar2 + 1;
}



/* Entry: 00724020; end: 0072434b;  */

undefined8 FUN_00724020(undefined8 param_1,undefined8 *param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  int iVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  uint uVar11;
  int extraout_w11;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  func_0x0072a4a8();
  puVar12 = (undefined1 *)*param_2;
  func_0x00723c50();
  uVar15 = (uint)(param_4 >> 0x20);
  uVar16 = uVar15 >> 8 & 0xff;
  uVar8 = (uint)puVar12;
  uVar1 = uVar8;
  if (uVar16 != 0) {
    uVar1 = uVar8 + 1;
  }
  uVar10 = (ulong)uVar1;
  uVar4 = *(uint *)(param_2 + 1);
  uVar1 = uVar4 + uVar8;
  uVar11 = uVar15 & 0xff;
  uVar14 = (uint)param_4;
  if ((param_4 & 0xff00000000) == 0) {
    if (-4 < (int)uVar1) {
      uVar11 = uVar14;
      if ((int)uVar14 < 1) {
        uVar11 = 0x10;
      }
      cVar7 = SBORROW4(uVar1,uVar11);
      iVar9 = uVar1 - uVar11;
      bVar6 = uVar1 == uVar11;
      if ((int)uVar1 <= (int)uVar11) goto LAB_00724148;
    }
  }
  else {
    cVar7 = SBORROW4(uVar11,1);
    iVar9 = uVar11 - 1;
    if (uVar11 != 1) {
      bVar6 = false;
LAB_00724148:
      cVar5 = iVar9 < 0;
      if ((int)uVar4 < 0) {
        if ((int)uVar1 < 1) {
          uVar15 = uVar14;
          if ((int)(uVar14 + uVar1) < 0 == SCARRY4(uVar14,uVar1)) {
            uVar15 = -uVar1;
          }
          if (0x7fffffff < uVar14 || uVar8 != 0) {
            uVar15 = -uVar1;
          }
          func_0x00729bac((uVar15 + 2) + uVar10);
          func_0x007297b8();
          func_0x00729b74();
          func_0x00729ce8();
          puVar13 = puVar12;
          if (uVar16 != 0) {
            func_0x00729934();
            puVar13 = puVar12 + 1;
            *puVar12 = extraout_w8_01;
          }
          *puVar13 = 0x30;
          if ((uVar8 != 0 || (param_4 & 0x10000000000000) != 0) || uVar15 != 0) {
            puVar13[1] = 0x2e;
            puVar12 = puVar13 + 2;
            while (0 < (int)uVar15) {
              *puVar12 = 0x30;
              puVar12 = puVar12 + 1;
              uVar15 = uVar15 - 1;
            }
            func_0x0072a200(puVar12);
          }
        }
        else {
          uVar14 = uVar14 - uVar8;
          uVar1 = uVar14 & (int)(uVar15 << 0xb) >> 0x1f;
          func_0x00729bac(((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 1) + uVar10);
          func_0x007297b8();
          func_0x00729b74();
          func_0x00729ce8();
          puVar13 = puVar12;
          if (uVar16 != 0) {
            func_0x00729934();
            puVar13 = puVar12 + 1;
            *puVar12 = extraout_w8_00;
          }
          FUN_007243c4();
          if (0 < (int)uVar1) {
            while (0 < (int)uVar14) {
              *puVar13 = 0x30;
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 - 1;
            }
          }
        }
      }
      else {
        func_0x0072a060(uVar10 + uVar4);
        bVar6 = bVar6 || cVar5 != cVar7;
        func_0x0072a050();
        uVar2 = extraout_x8_00;
        iVar9 = extraout_w9;
        if (!bVar6) {
          uVar2 = extraout_x12_00;
          iVar9 = extraout_w11;
        }
        bVar6 = false;
        uVar3 = extraout_x8_00;
        iVar17 = extraout_w9;
        if ((param_4 >> 0x20 & 0x100000) != 0) {
          uVar3 = uVar2;
          iVar17 = iVar9;
        }
        func_0x00729bac(uVar3);
        uVar10 = 0;
        if (bVar6) {
          uVar10 = extraout_x9;
        }
        func_0x007297b8();
        puVar13 = (undefined1 *)(uVar10 >> (extraout_x9_00 & 0x3f));
        func_0x00729b74();
        FUN_00723ef4();
        if (uVar16 != 0) {
          func_0x00729934();
          *puVar12 = extraout_w8;
        }
        func_0x0072a200();
        iVar9 = *(int *)(param_2 + 1);
        while (0 < iVar9) {
          *puVar13 = 0x30;
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        }
        if (((uVar15 >> 0x14 & 1) != 0) && (*puVar13 = 0x2e, 0 < iVar17)) {
          while( true ) {
            puVar13 = puVar13 + 1;
            if (iVar17 < 1) break;
            *puVar13 = 0x30;
            iVar17 = iVar17 + -1;
          }
        }
      }
      goto LAB_0072429c;
    }
  }
  bVar6 = uVar8 == 1;
  func_0x0072a140();
  uVar2 = extraout_x8;
  if (!bVar6) {
    uVar2 = extraout_x12;
  }
  func_0x0072a090(uVar2);
  func_0x00729b7c();
  if (*param_3 < 1) {
    func_0x00729b74();
    func_0x0072a340();
    return param_1;
  }
  func_0x00729a70(*(undefined1 *)((long)param_3 + 9));
  func_0x00729b74();
  FUN_00723ef4();
  func_0x0072a340();
LAB_0072429c:
  FUN_00723ef4();
  return param_1;
}



/* Entry: 0072434c; end: 007243c3;  */

undefined2 * FUN_0072434c(uint *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *extraout_x8;
  undefined1 uVar7;
  
  puVar6 = param_2;
  if (*param_1 != 0) {
    puVar6 = param_2 + 1;
    *param_2 = (&UNK_0083cd9c)[*param_1];
  }
  func_0x0072a010(puVar6);
  puVar6 = extraout_x8;
  FUN_007243c4();
  uVar5 = param_1[6];
  if (0 < (int)uVar5) {
    while (0 < (int)uVar5) {
      *puVar6 = 0x30;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    }
  }
  *puVar6 = (char)param_1[7];
  uVar5 = param_1[8];
  uVar7 = 0x2d;
  if (-1 < (int)uVar5) {
    uVar7 = 0x2b;
  }
  uVar4 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = (undefined2 *)(puVar6 + 2);
  puVar6[1] = uVar7;
  if (99 < uVar4) {
    lVar1 = (ulong)(uVar4 / 100) * 2;
    puVar3 = puVar2;
    if (999 < uVar4) {
      puVar3 = (undefined2 *)(puVar6 + 3);
      puVar6[2] = (&UNK_0083ccd4)[lVar1];
    }
    puVar2 = (undefined2 *)((long)puVar3 + 1);
    *(undefined *)puVar3 = (&UNK_0083ccd5)[lVar1];
    uVar4 = uVar4 % 100;
  }
  *puVar2 = *(undefined2 *)(&UNK_0083ccd4 + (ulong)uVar4 * 2);
  return puVar2 + 1;
}



/* Entry: 007243c4; end: 0072445f;  */

undefined8
FUN_007243c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  if (param_5 == 0) {
    func_0x00723c7c(param_1);
  }
  else {
    func_0x00723c7c(param_1 + 1);
    if (param_4 != 0) {
      if (param_4 == 1) {
        *param_1 = param_1[1];
      }
      else {
        func_0x00729f5c();
      }
    }
    param_1[param_4] = (char)param_5;
  }
  return param_2;
}



/* Entry: 00724460; end: 007244a7;  */

int FUN_00724460(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = 0xf < param_1;
    param_1 = param_1 >> 4;
  } while (bVar1);
  return iVar2;
}



/* Entry: 007244a8; end: 007244db;  */

bool FUN_007244a8(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  _memchr(param_1,param_3,param_2 - param_1);
  *param_4 = param_1;
  return param_1 != 0;
}



/* Entry: 007244dc; end: 00724533;  */

void FUN_007244dc(long param_1,uint param_2,undefined8 param_3,long param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return;
  }
  puVar3 = &UNK_0091dbd1;
  FUN_00721c34();
  if (*(int *)(puVar3 + 0x10) < 1) {
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    return;
  }
  puVar4 = (ulong *)&UNK_0091dc1c;
  FUN_00721c34();
  uVar1 = param_4 + (ulong)param_2;
  *puVar4 = uVar1;
  puVar4[1] = 0;
  if ((*(byte *)((long)param_5 + 9) & 0xf) == 4) {
    uVar5 = (ulong)*param_5;
    if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
      *puVar4 = uVar5;
      puVar4[1] = uVar5 - uVar1;
      return;
    }
  }
  else {
    uVar2 = param_5[1];
    if ((int)param_2 < (int)uVar2) {
      *puVar4 = param_4 + (ulong)uVar2;
      puVar4[1] = (ulong)(uVar2 - param_2);
    }
  }
  return;
}



/* Entry: 00724534; end: 0072471f;  */

void FUN_00724534(ulong *param_1,uint param_2,undefined8 param_3,long param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = param_4 + (ulong)param_2;
  *param_1 = uVar1;
  param_1[1] = 0;
  if ((*(byte *)((long)param_5 + 9) & 0xf) == 4) {
    uVar3 = (ulong)*param_5;
    if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
      *param_1 = uVar3;
      param_1[1] = uVar3 - uVar1;
      return;
    }
  }
  else {
    uVar2 = param_5[1];
    if ((int)param_2 < (int)uVar2) {
      *param_1 = param_4 + (ulong)uVar2;
      param_1[1] = (ulong)(uVar2 - param_2);
    }
  }
  return;
}



/* Entry: 00724720; end: 00724867;  */

long FUN_00724720(long *param_1,undefined8 param_2,code *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  cVar2 = *(char *)((long)param_1 + 9);
  uVar3 = (int)cVar2 & 0x100000;
  uVar4 = (ulong)uVar3;
  cVar1 = (char)param_1[1];
  switch(cVar1) {
  case 'A':
    uVar3 = uVar3 | 0x10000;
code_r0x00724778:
    uVar4 = (ulong)(uVar3 | 3);
    break;
  case 'B':
  case 'C':
  case 'D':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
LAB_0072480c:
    func_0x00729a9c();
    uStack_18 = 0x724818;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    lStack_58 = *param_1;
    lStack_40 = param_1[3];
    lStack_48 = param_1[2];
    lStack_50 = param_1[1];
    puStack_20 = &stack0xfffffffffffffff0;
    (*param_3)(param_2,&uStack_38,&lStack_58);
    return lStack_58;
  case 'E':
    uVar3 = 0x10000;
code_r0x007247a0:
    uVar5 = 0x100000;
    if (*(int *)((long)param_1 + 4) == 0 && -1 < cVar2) {
      uVar5 = 0;
    }
    uVar4 = (ulong)(uVar3 & 0xffeffffe | uVar5 | 1);
    break;
  case 'F':
    uVar3 = 0x10000;
code_r0x007247d4:
    uVar5 = 0x100000;
    if (*(int *)((long)param_1 + 4) == 0 && -1 < cVar2) {
      uVar5 = 0;
    }
    uVar4 = (ulong)(uVar3 & 0xfffff | uVar5 | 2);
    break;
  case 'G':
    uVar4 = (ulong)(uVar3 | 0x10000);
    break;
  case 'L':
    uVar4 = (ulong)(uVar3 | 0x20000);
    break;
  default:
    switch(cVar1) {
    case 'a':
      goto code_r0x00724778;
    case 'b':
    case 'c':
    case 'd':
      goto LAB_0072480c;
    case 'e':
      goto code_r0x007247a0;
    case 'f':
      goto code_r0x007247d4;
    case 'g':
      break;
    default:
      if (cVar1 != '\0') goto LAB_0072480c;
      uVar3 = 0x100000;
      if (*(int *)((long)param_1 + 4) < 1 && -1 < cVar2) {
        uVar3 = 0;
      }
      uVar4 = (ulong)uVar3;
    }
  }
  return uVar4 << 0x20;
}



/* Entry: 00724868; end: 007248eb;  */

undefined1 * FUN_00724868(undefined1 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  func_0x0072a294();
  func_0x00729e10(param_2 >> 0x1f & 1);
  func_0x0072a2d4();
  if (puVar1 == (undefined1 *)0x0) {
    if ((int)param_2 < 0) {
      func_0x007298b4();
    }
    func_0x0072a474();
    func_0x00724958();
  }
  else {
    if ((int)param_2 < 0) {
      *puVar1 = 0x2d;
    }
    func_0x00723bf8();
    puVar1 = param_1;
  }
  return puVar1;
}



/* Entry: 007248ec; end: 0072499f;  */

long FUN_007248ec(long param_1,long param_2)

{
  if (*(ulong *)(param_1 + 0x18) < (ulong)(*(long *)(param_1 + 0x10) + param_2)) {
    func_0x00729f44();
  }
  return param_1;
}



/* Entry: 007249a0; end: 00724a1f;  */

undefined1 * FUN_007249a0(undefined1 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  func_0x00729fe0();
  func_0x00729e10(param_2 >> 0x3f);
  func_0x0072a2d4();
  if (puVar1 == (undefined1 *)0x0) {
    if ((long)param_2 < 0) {
      func_0x007298b4();
    }
    func_0x00729e1c(param_1);
    FUN_00724a20();
  }
  else {
    if ((long)param_2 < 0) {
      *puVar1 = 0x2d;
    }
    func_0x00729e1c();
    func_0x00723c7c();
  }
  return param_1;
}



/* Entry: 00724a20; end: 00724a67;  */

undefined1 * FUN_00724a20(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_3c [20];
  undefined8 uStack_28;
  
  func_0x00729854();
  uStack_28 = extraout_x8;
  func_0x00723c7c(auStack_3c);
  puVar2 = auStack_3c;
  func_0x00729d78();
  func_0x0072975c(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar1 = (long)param_3 >> 0x3f;
  lVar3 = ((ulong)param_2 ^ uVar1) - uVar1;
  FUN_00723cd4(lVar3,(param_3 ^ uVar1) - (uVar1 + (((ulong)param_2 ^ uVar1) < uVar1)));
  puVar4 = puVar2;
  FUN_007248ec(puVar2,(long)(int)lVar3 - uVar1);
  func_0x0072491c();
  if (puVar4 == (undefined1 *)0x0) {
    if ((long)param_3 < 0) {
      func_0x007298b4();
    }
    func_0x00729f90(puVar2);
    FUN_00724b10();
  }
  else {
    if ((long)param_3 < 0) {
      *puVar4 = 0x2d;
    }
    func_0x00729f90();
    FUN_00723d5c();
  }
  return puVar2;
}



/* Entry: 00724a68; end: 00724b0f;  */

undefined1 * FUN_00724a68(undefined1 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  uVar1 = (long)param_3 >> 0x3f;
  lVar2 = (param_2 ^ uVar1) - uVar1;
  FUN_00723cd4(lVar2,(param_3 ^ uVar1) - (uVar1 + ((param_2 ^ uVar1) < uVar1)));
  puVar3 = param_1;
  FUN_007248ec(param_1,(long)(int)lVar2 - uVar1);
  func_0x0072491c();
  if (puVar3 == (undefined1 *)0x0) {
    if ((long)param_3 < 0) {
      func_0x007298b4();
    }
    func_0x00729f90(param_1);
    FUN_00724b10();
  }
  else {
    if ((long)param_3 < 0) {
      *puVar3 = 0x2d;
    }
    func_0x00729f90();
    FUN_00723d5c();
  }
  return param_1;
}



/* Entry: 00724b10; end: 00724b5f;  */

undefined1 * FUN_00724b10(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00729854();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x4f);
    FUN_00723d5c();
    func_0x00729d78((undefined1 *)((long)register0x00000008 + -0x4f));
    func_0x0072975c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00724b60;
    func_0x00729d0c();
    FUN_00723cd4(puVar1,param_3);
    func_0x00729e10();
    func_0x0072a2d4();
    if (puVar1 != (undefined1 *)0x0) break;
    func_0x00729f90();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  func_0x00729f90();
  FUN_00723d5c();
  return param_1;
}



/* Entry: 00724b60; end: 00724bcf;  */

undefined1 * FUN_00724b60(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00729d0c();
    FUN_00723cd4(param_2,param_3);
    func_0x00729e10();
    func_0x0072a2d4();
    if (param_2 != (undefined1 *)0x0) {
      func_0x00729f90();
      FUN_00723d5c();
      return unaff_x19;
    }
    func_0x00729f90();
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00729854();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x4f);
    FUN_00723d5c();
    func_0x00729d78((undefined1 *)((long)register0x00000008 + -0x4f));
    func_0x0072975c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_00724b60;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return param_2;
}



/* Entry: 00724bd0; end: 00724bf3;  */

undefined8 FUN_00724bd0(undefined8 param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = 4;
  if (param_2 == 0) {
    lVar1 = 5;
  }
  pcVar2 = "true";
  if (param_2 == 0) {
    pcVar2 = "false";
  }
  FUN_00721a10(param_1,pcVar2,pcVar2 + lVar1);
  return param_1;
}



/* Entry: 00724bf4; end: 00724c4b;  */

undefined8 FUN_00724bf4(undefined8 param_1,long param_2,long param_3)

{
  FUN_00721a10(param_1,param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 00724c4c; end: 00724f4f;  */

/* WARNING: Removing unreachable block (ram,0x00724f18) */
/* WARNING: Removing unreachable block (ram,0x00724f24) */

void FUN_00724c4c(float param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *extraout_x9;
  undefined1 uStack_51;
  
  if ((((uint)param_1 ^ 0xffffffff) & 0x7f800000) == 0) {
    uVar2 = 3;
    if ((int)param_1 < 0) {
      uVar2 = 4;
    }
    func_0x00729e68(uVar2,param_2);
    FUN_007248ec();
    func_0x00729ac4();
    if ((int)param_1 < 0) {
      func_0x007298e0();
      FUN_00721aa0(param_2,&uStack_51);
    }
    func_0x0072a3a8();
    pcVar3 = extraout_x9;
    if (ABS(param_1) != INFINITY) {
      pcVar3 = "nan";
    }
    func_0x00724fe4(pcVar3,pcVar3 + 3,param_2);
    func_0x00724f50();
  }
  else {
    FUN_00722620(ABS(param_1));
    lVar6 = param_2;
    FUN_00721bf0();
    iVar5 = (int)lVar6;
    iVar1 = iVar5 + (int)((ulong)param_2 >> 0x20);
    if (iVar1 - 0x11U < 0xffffffec) {
      func_0x00729fac();
      if ((int)param_1 < 0) {
        func_0x007298e0();
        func_0x00729d80();
      }
      func_0x0072a000();
      FUN_00725020();
      FUN_00721aa0();
      FUN_0072506c(iVar1 + -1,lVar6);
    }
    else {
      if (param_2 < 0) {
        if (iVar1 < 1) {
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = -iVar1;
          }
          func_0x00729fac();
          func_0x00729aec();
          if ((int)param_1 < 0) {
            func_0x007298e0();
            func_0x00729d80();
          }
          func_0x00729d80();
          if (iVar4 != 0 || iVar5 != 0) {
            func_0x00729d80();
            FUN_00725120(lVar6,iVar4,&UNK_0083ce8c);
            func_0x00724958();
          }
        }
        else {
          func_0x00729fac();
          func_0x00729aec();
          if ((int)param_1 < 0) {
            func_0x007298e0();
            func_0x0072a42c();
            func_0x00729d80();
          }
          func_0x0072a000();
          FUN_00725020();
        }
      }
      else {
        func_0x00729fac();
        func_0x00729aec();
        if ((int)param_1 < 0) {
          func_0x007298e0();
          func_0x00729d80();
        }
        func_0x0072a000();
        func_0x00724958();
        FUN_00725120();
      }
      func_0x00724f50();
    }
  }
  return;
}



/* Entry: 00724f50; end: 0072501f;  */

undefined8 FUN_00724f50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00729d0c();
  if (*(char *)(param_3 + 4) == '\x01') {
    func_0x00729f90();
    func_0x00724fa8();
  }
  else {
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
      unaff_x19 = unaff_x20;
      func_0x00724fe4();
    }
  }
  return unaff_x19;
}



/* Entry: 00725020; end: 0072506b;  */

undefined1 * FUN_00725020(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  uint uVar3;
  undefined1 auStack_33 [11];
  undefined8 uStack_28;
  
  func_0x00729854();
  puVar1 = auStack_33;
  uStack_28 = extraout_x8;
  func_0x00723f54(puVar1);
  puVar2 = auStack_33;
  func_0x00729d78(puVar2,puVar1);
  uVar3 = (uint)puVar2;
  func_0x0072975c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)uVar3 < 0) {
      func_0x007298b4();
      uVar3 = -uVar3;
    }
    else {
      func_0x0072a42c(0x2b);
      func_0x00729a8c();
    }
    if (99 < uVar3) {
      if (999 < uVar3) {
        func_0x00729a8c();
      }
      func_0x00729a8c();
    }
    func_0x00729a8c();
    func_0x00729a8c();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 0072506c; end: 0072511f;  */

undefined8 FUN_0072506c(uint param_1,undefined8 param_2)

{
  if ((int)param_1 < 0) {
    func_0x007298b4();
    param_1 = -param_1;
  }
  else {
    func_0x0072a42c(0x2b);
    func_0x00729a8c();
  }
  if (99 < param_1) {
    if (999 < param_1) {
      func_0x00729a8c();
    }
    func_0x00729a8c();
  }
  func_0x00729a8c();
  func_0x00729a8c();
  return param_2;
}



/* Entry: 00725120; end: 0072515b;  */

undefined8 FUN_00725120(undefined8 param_1,int param_2)

{
  while (0 < param_2) {
    func_0x00729f08();
    FUN_00721aa0();
    param_2 = param_2 + -1;
  }
  return param_1;
}



/* Entry: 0072515c; end: 007251bb;  */

void FUN_0072515c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar5;
  uint extraout_w8;
  char *extraout_x8;
  char *extraout_x9;
  ulong extraout_x9_00;
  undefined8 unaff_x19;
  undefined1 uStack_51;
  
  func_0x0072a480();
  uVar2 = 0;
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = extraout_w8;
  }
  if (((extraout_x9_00 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    func_0x0072a3e4();
    uVar1 = 3;
    if ((uVar2 >> 8 & 0xff) != 0) {
      uVar1 = 4;
    }
    func_0x00729e68(uVar1);
    FUN_007248ec();
    func_0x00729ac4();
    if ((uVar2 >> 8 & 0xff) != 0) {
      func_0x007298e0();
      FUN_00721aa0(unaff_x19,&uStack_51);
    }
    func_0x0072a3a8();
    bVar5 = (uVar2 & 0x10000) != 0;
    pcVar4 = extraout_x9;
    if (bVar5) {
      pcVar4 = extraout_x8;
    }
    pcVar3 = "nan";
    if (bVar5) {
      pcVar3 = "NAN";
    }
    if (param_2 == 0) {
      pcVar4 = pcVar3;
    }
    func_0x00724fe4(pcVar4,pcVar4 + 3,unaff_x19);
    func_0x00724f50();
    return;
  }
  func_0x00729f54();
  func_0x0072a270();
  return;
}



/* Entry: 007251bc; end: 007254ab;  */

void FUN_007251bc(uint param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  int extraout_w9;
  uint uVar11;
  int extraout_w10;
  int extraout_w11;
  undefined4 uVar12;
  undefined8 extraout_x12;
  uint uVar13;
  uint uVar14;
  undefined1 uStack000000000000002f;
  
  func_0x0072a4a8();
  uStack000000000000002f = 0x2e;
  func_0x00729fe0();
  uVar6 = (uint)(param_4 >> 0x20);
  uVar14 = uVar6 >> 8 & 0xff;
  uVar2 = param_1;
  if (uVar14 != 0) {
    uVar2 = param_1 + 1;
  }
  uVar5 = *(uint *)(param_2 + 8);
  uVar1 = uVar5 + param_1;
  uVar11 = uVar6 & 0xff;
  uVar13 = (uint)param_4;
  if ((param_4 & 0xff00000000) == 0) {
    if (-4 < (int)uVar1) {
      uVar11 = uVar13;
      if ((int)uVar13 < 1) {
        uVar11 = 0x10;
      }
      cVar9 = SBORROW4(uVar1,uVar11);
      iVar3 = uVar1 - uVar11;
      bVar10 = uVar1 == uVar11;
      if ((int)uVar1 <= (int)uVar11) goto LAB_007252c8;
    }
  }
  else {
    cVar9 = SBORROW4(uVar11,1);
    iVar3 = uVar11 - 1;
    if (uVar11 != 1) {
      bVar10 = false;
LAB_007252c8:
      cVar8 = iVar3 < 0;
      if ((int)uVar5 < 0) {
        if ((int)uVar1 < 1) {
          uVar2 = uVar13;
          if ((int)(uVar13 + uVar1) < 0 == SCARRY4(uVar13,uVar1)) {
            uVar2 = -uVar1;
          }
          if (0x7fffffff < uVar13 || param_1 != 0) {
            uVar2 = -uVar1;
          }
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          func_0x0072a2b4();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729a84();
          if ((param_1 != 0 || (param_4 & 0x10000000000000) != 0) || uVar2 != 0) {
            func_0x00729a84();
            func_0x0072a0f8();
            func_0x0072a194();
            func_0x00729e1c();
            FUN_00724a20();
          }
        }
        else {
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          func_0x0072a2a8();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729c68();
          func_0x00725514();
          if (0 < (int)(uVar13 - param_1 & (int)(uVar6 << 0xb) >> 0x1f)) {
            func_0x0072a0f8();
            FUN_00725120();
          }
        }
      }
      else {
        func_0x0072a060((ulong)uVar2 + (ulong)uVar5);
        bVar10 = bVar10 || cVar8 != cVar9;
        func_0x0072a050();
        iVar3 = extraout_w9;
        if (!bVar10) {
          iVar3 = extraout_w11;
        }
        iVar7 = extraout_w9;
        if ((param_4 >> 0x20 & 0x100000) != 0) {
          iVar7 = iVar3;
        }
        func_0x007297b8();
        func_0x00729a94();
        func_0x0072a2a8();
        if (uVar14 != 0) {
          func_0x00729770();
        }
        func_0x00729c68();
        FUN_00724a20();
        func_0x0072a0f8();
        FUN_00725120();
        if (((uVar6 >> 0x14 & 1) != 0) && (func_0x00729e08(), 0 < iVar7)) {
          func_0x0072a0f8();
          func_0x0072a304();
        }
      }
      goto LAB_007254a0;
    }
  }
  bVar10 = param_1 == 1;
  func_0x0072a140();
  uVar4 = extraout_x8;
  if (!bVar10) {
    uVar4 = extraout_x12;
  }
  func_0x0072a090(uVar4);
  cVar9 = extraout_w10 < 0;
  bVar10 = extraout_w10 == 0;
  cVar8 = '\0';
  func_0x00729b7c();
  uVar12 = 0x65;
  if (!bVar10) {
    uVar12 = extraout_w8;
  }
  func_0x00729d50(uVar12);
  if (cVar9 != cVar8) {
    func_0x00729a94();
    func_0x007254ac();
    return;
  }
  func_0x00729a70(*(undefined1 *)(param_3 + 9));
  func_0x00729a94();
  func_0x0072a2c0();
  func_0x007254ac();
LAB_007254a0:
  FUN_00724f50();
  return;
}



/* Entry: 007254ac; end: 007255bf;  */

undefined8 FUN_007254ac(int *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00729efc();
  if (*param_1 != 0) {
    func_0x00729be8();
  }
  func_0x0072a010();
  func_0x00725514();
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    func_0x0072a0f8();
    FUN_00725120(unaff_x20);
  }
  func_0x0072a42c(*(undefined1 *)(unaff_x19 + 0x1c));
  func_0x00729e08();
  func_0x0072a29c();
  return unaff_x20;
}



/* Entry: 007255c0; end: 0072560b;  */

/* WARNING: Removing unreachable block (ram,0x00725650) */
/* WARNING: Removing unreachable block (ram,0x00725658) */
/* WARNING: Removing unreachable block (ram,0x00724f50) */
/* WARNING: Removing unreachable block (ram,0x00724f88) */
/* WARNING: Removing unreachable block (ram,0x00724f8c) */
/* WARNING: Removing unreachable block (ram,0x00724f70) */
/* WARNING: Removing unreachable block (ram,0x00724f7c) */

undefined1 * FUN_007255c0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  
  if (param_2 == (undefined1 *)0x0) {
    func_0x00729b24();
    func_0x0072a2f8();
    func_0x007297dc();
    func_0x007299e4();
    func_0x00729e00();
    ppuVar2 = &puStack_60;
    puVar1 = param_2;
    FUN_00724460();
    uStack_58 = SUB84(puVar1,0);
    puStack_60 = param_2;
    FUN_007248ec(param_1);
    func_0x007256d4(&puStack_60,param_1);
    return (undefined1 *)ppuVar2;
  }
  _strlen(param_2);
  func_0x00729f08();
  FUN_00721a10();
  return param_2;
}



/* Entry: 0072560c; end: 00725613;  */

/* WARNING: Removing unreachable block (ram,0x00725650) */
/* WARNING: Removing unreachable block (ram,0x00725658) */
/* WARNING: Removing unreachable block (ram,0x00724f50) */
/* WARNING: Removing unreachable block (ram,0x00724f88) */
/* WARNING: Removing unreachable block (ram,0x00724f8c) */
/* WARNING: Removing unreachable block (ram,0x00724f70) */
/* WARNING: Removing unreachable block (ram,0x00724f7c) */

undefined8 * FUN_0072560c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_2;
  FUN_00724460();
  uStack_38 = (undefined4)uVar1;
  uStack_40 = param_2;
  FUN_007248ec(param_1);
  func_0x007256d4(&uStack_40,param_1);
  return puVar2;
}



/* Entry: 00725614; end: 007257bf;  */

undefined1 * FUN_00725614(undefined8 param_1,ulong param_2,uint *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  ulong uStack_40;
  undefined4 uStack_38;
  
  puVar4 = &uStack_40;
  uVar3 = param_2;
  FUN_00724460();
  uVar5 = (uVar3 & 0xffffffff) + 2;
  uStack_38 = (undefined4)uVar3;
  uStack_40 = param_2;
  if (param_3 != (uint *)0x0) {
    lVar6 = 0;
    if (uVar5 <= *param_3) {
      lVar6 = *param_3 - uVar5;
    }
    func_0x00729a70(*(undefined1 *)((long)param_3 + 9));
    FUN_007248ec(param_1,uVar5 + lVar6 * (ulong)*(byte *)((long)param_3 + 0xe));
    FUN_00724f50();
    func_0x007256d4(&uStack_40,param_1);
    lVar6 = (long)param_3 + 10;
    func_0x00729d0c();
    bVar1 = *(byte *)(lVar6 + 4);
    if ((ulong)bVar1 == 1) {
      func_0x00729f90(unaff_x19);
      func_0x00724fa8();
    }
    else {
      for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
        puVar2 = unaff_x20;
        func_0x00724fe4(unaff_x20,unaff_x20 + bVar1,unaff_x19);
        unaff_x19 = puVar2;
      }
    }
    return unaff_x19;
  }
  FUN_007248ec(param_1);
  func_0x007256d4(&uStack_40,param_1);
  return (undefined1 *)puVar4;
}



/* Entry: 007257c0; end: 007271d3;  */

void FUN_007257c0(ulong param_1,undefined **param_2,long param_3)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  uint uVar3;
  byte *pbVar4;
  undefined ***pppuVar5;
  code *pcVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined *****pppppuVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined ****ppppuVar23;
  uint uVar24;
  int extraout_w8;
  uint extraout_w8_00;
  int iVar25;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  uint uVar26;
  int extraout_w8_07;
  int extraout_w8_08;
  undefined8 extraout_x8;
  ulong uVar27;
  long extraout_x8_00;
  undefined **extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined **extraout_x8_08;
  undefined **ppuVar30;
  undefined **extraout_x8_09;
  long lVar31;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  ulong extraout_x8_12;
  byte bVar32;
  uint extraout_w9;
  int extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  int extraout_w9_07;
  uint extraout_w9_08;
  int extraout_w9_09;
  undefined8 uVar33;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar34;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  uint extraout_w10;
  uint uVar35;
  uint uVar36;
  uint extraout_w10_00;
  uint extraout_w10_01;
  undefined **extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  undefined **extraout_x10_03;
  undefined **extraout_x10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar37;
  undefined8 extraout_x11_01;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined *****pppppuVar40;
  ulong *puVar41;
  byte *pbVar42;
  ulong uVar43;
  float *pfVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  undefined8 unaff_x30;
  float fVar50;
  double dVar51;
  undefined ***pppuStack_618;
  undefined ****ppppuStack_610;
  undefined ***pppuStack_608;
  undefined ***pppuStack_600;
  undefined ***pppuStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined ***pppuStack_5e0;
  byte bStack_5d8;
  byte bStack_5d7;
  undefined2 uStack_5d6;
  undefined2 uStack_5d4;
  undefined1 uStack_5d2;
  undefined1 uStack_5d1;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined ***pppuStack_5c0;
  int iStack_5b8;
  uint uStack_5b4;
  int iStack_5b0;
  undefined1 uStack_5ac;
  uint uStack_5a4;
  long lStack_5a0;
  int iStack_598;
  float fStack_590;
  undefined4 uStack_58c;
  code *pcStack_588;
  uint uStack_580;
  undefined ****ppppuStack_570;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined1 uStack_540;
  undefined4 uStack_53c;
  undefined **ppuStack_350;
  undefined1 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [136];
  undefined4 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [136];
  undefined4 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [136];
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [136];
  undefined4 uStack_98;
  undefined8 uStack_88;
  
  func_0x00729854();
  ppuVar39 = (undefined **)(param_1 + 1);
  if (ppuVar39 == param_2) {
LAB_00726fec:
    func_0x0072990c();
LAB_00726ff0:
    ___stack_chk_fail();
LAB_00726ff4:
    func_0x00729944();
  }
  else {
    bVar32 = *(byte *)ppuVar39;
    uVar27 = (ulong)bVar32;
    uVar10 = bVar32 == 0x7b;
    uStack_88 = extraout_x8;
    if ((bool)uVar10) {
      func_0x00725788(param_3,ppuVar39,param_1 + 2);
LAB_00726f34:
      func_0x0072975c(uStack_88);
      if ((bool)uVar10) {
        func_0x0072a4e0((byte *)((long)ppuVar39 + 1),unaff_x30);
        return;
      }
      goto LAB_00726ff0;
    }
    uVar7 = 0x7c < bVar32;
    uVar24 = (uint)bVar32;
    uVar10 = uVar24 == 0x7d;
    if ((bool)uVar10) {
      lVar31 = param_3 + 8;
      FUN_007244dc(lVar31);
      pppppuVar40 = &ppppuStack_570;
      FUN_00727258(pppppuVar40,param_3 + 0x20,lVar31);
      func_0x00729c28();
      if (!(bool)uVar7 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x00725848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_0083c05b)[extraout_x8_00] * 4 + 0x72584c))();
        return;
      }
LAB_00725c0c:
      *(undefined ******)(param_3 + 0x20) = pppppuVar40;
      goto LAB_00726f34;
    }
    if (uVar24 != 0x3a) {
      bVar11 = uVar24 - 0x30 == 9;
      if (9 < uVar24 - 0x30) {
        func_0x0072a0a0();
        if ((!bVar11 && 0x18 < extraout_w9) && (bVar11 || extraout_w9 != 0x19)) goto LAB_00726fec;
        ppuVar30 = (undefined **)(param_1 + 2);
        do {
          bVar11 = param_2 <= ppuVar30;
          ppuVar38 = param_2;
          if (ppuVar30 == param_2) goto LAB_007258e4;
          func_0x00729b94();
          ppuVar30 = extraout_x8_01;
        } while ((!bVar11) || (extraout_w9_00 == 0x5f || extraout_w10 < 0x1a));
        ppuVar38 = (undefined **)((long)extraout_x8_01 - 1);
LAB_007258e4:
        param_1 = param_3 + 0x28;
        FUN_00727284(param_1,ppuVar39,(long)ppuVar38 - (long)ppuVar39);
        if ((int)param_1 < 0) {
          func_0x007299d8();
          uVar27 = extraout_x8_02;
          goto LAB_00725904;
        }
        goto LAB_00725968;
      }
      if (uVar24 == 0x30) {
        ppuVar38 = (undefined **)(param_1 + 2);
        param_1 = 0;
LAB_00725948:
        bVar11 = ppuVar38 == param_2;
        if ((bVar11) || ((func_0x0072a3f8(), !bVar11 && (extraout_w8 != 0x7d)))) goto LAB_00726fec;
        func_0x00724508(param_3 + 8);
        goto LAB_00725968;
      }
LAB_00725904:
      uVar33 = 0xccccccc;
      ppuVar39 = (undefined **)(param_1 + 2);
      uVar34 = 10;
      param_1 = 0;
      do {
        if ((uint)uVar33 < (uint)param_1) goto LAB_00726ff4;
        uVar24 = ((int)uVar27 + (uint)param_1 * (int)uVar34) - 0x30;
        param_1 = (ulong)uVar24;
        bVar11 = param_2 <= ppuVar39;
        ppuVar38 = param_2;
        if (ppuVar39 == param_2) goto LAB_00725944;
        func_0x0072a070();
        uVar27 = extraout_x8_03;
        uVar33 = extraout_x9;
        ppuVar39 = extraout_x10;
        uVar34 = extraout_x11;
      } while (!bVar11);
      ppuVar38 = (undefined **)((long)extraout_x10 - 1);
LAB_00725944:
      if (-1 < (int)uVar24) goto LAB_00725948;
      goto LAB_00726ff4;
    }
    param_1 = param_3 + 8;
    FUN_007244dc(param_1);
    ppuVar38 = ppuVar39;
LAB_00725968:
    bVar11 = ppuVar38 == param_2;
    if (!bVar11) {
      func_0x0072a3f8();
      if (!bVar11) {
        uVar7 = 0x7c < extraout_w8_00;
        uVar10 = extraout_w8_00 == 0x7d;
        if ((bool)uVar10) {
          pppppuVar40 = &ppppuStack_570;
          FUN_00727258(pppppuVar40,param_3 + 0x20,param_1);
          func_0x00729c28();
          ppuVar39 = ppuVar38;
          if (!(bool)uVar7 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x007259ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_0083c083)[extraout_x8_04] * 4 + 0x7259b0))();
            return;
          }
          goto LAB_00725c0c;
        }
        goto LAB_00726ff8;
      }
      ppppuVar1 = (undefined ****)(param_3 + 0x20);
      pfVar15 = &fStack_590;
      FUN_00727258(pfVar15,ppppuVar1,param_1);
      ppuVar30 = (undefined **)((long)ppuVar38 + 1);
      pfVar44 = (float *)(ulong)uStack_580;
      if (uStack_580 != 0xf) {
        pppuStack_5e0 = (undefined ***)0xffffffff00000000;
        pbVar42 = (byte *)((ulong)&pppuStack_5e0 | 10);
        bStack_5d8 = 0;
        bStack_5d7 = 0;
        uStack_5d6 = 0x20;
        uStack_5d4 = 0;
        uStack_5d2 = 1;
        ppuVar39 = (undefined **)((long)ppuVar38 + 2);
        if (((param_2 <= ppuVar39) || (*(byte *)ppuVar39 != 0x7d)) ||
           (bVar32 = *(byte *)ppuVar30, 0x19 < (*(byte *)ppuVar30 & 0xffffffdf) - 0x41)) {
          pppuStack_568 = (undefined ***)(param_3 + 8);
          uStack_558 = &ppppuStack_570;
          uStack_550 = (undefined ***)CONCAT44(uStack_550._4_4_,uStack_580);
          ppppuStack_570 = &pppuStack_5e0;
          pppuStack_560 = (undefined ***)ppppuVar1;
          if (ppuVar30 != param_2) {
            uVar27 = (ulong)(*(byte *)ppuVar30 >> 3);
            ppuVar39 = (undefined **)
                       ((long)ppuVar30 +
                       (long)(char)(&UNK_0083ce2a)[uVar27] + (0x80ff0000UL >> uVar27 & 1));
            if (param_2 <= ppuVar39) {
              ppuVar39 = ppuVar30;
            }
            do {
              bVar32 = *(byte *)ppuVar39;
              if (bVar32 == 0x5e) {
                bVar32 = 3;
LAB_00725b8c:
                uVar27 = (long)ppuVar39 - (long)ppuVar30;
                if (uVar27 == 0) goto LAB_00725bcc;
                if (*(byte *)ppuVar30 == 0x7b) {
                  FUN_00721c34(&UNK_0091dc55);
                }
                else {
                  pbVar4 = pbVar42;
                  uVar45 = uVar27;
                  if (uVar27 < 5) goto joined_r0x00725bac;
                  func_0x00729b24();
                  FUN_007217e4();
                  func_0x007297f4();
                }
                goto LAB_00727124;
              }
              if (bVar32 == 0x3e) {
                bVar32 = 2;
                goto LAB_00725b8c;
              }
              if (bVar32 == 0x3c) {
                bVar32 = 1;
                goto LAB_00725b8c;
              }
              bVar11 = ppuVar39 != ppuVar30;
              ppuVar39 = ppuVar30;
            } while (bVar11);
            goto LAB_00725bd4;
          }
          goto LAB_00725e44;
        }
        goto LAB_00725e54;
      }
      puVar41 = (ulong *)(param_3 + 8);
      uVar27 = *puVar41;
      *puVar41 = (ulong)ppuVar30;
      *(ulong *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + (uVar27 - (long)ppuVar30);
      (*pcStack_588)(CONCAT44(uStack_58c,fStack_590),puVar41,ppppuVar1);
      ppuVar39 = (undefined **)*puVar41;
      goto LAB_00726f24;
    }
  }
LAB_00726ff8:
  func_0x0072a248();
  goto LAB_00726ffc;
code_r0x007266dc:
  if (uStack_558 != (undefined *****)0xffffffffffffffff) {
    pppppuVar40 = (undefined *****)((long)uStack_558 + 1);
code_r0x007266ec:
    (*(code *)*ppppuStack_570)(&ppppuStack_570,pppppuVar40);
  }
  goto code_r0x00726688;
joined_r0x00725bac:
  for (; uVar45 != 0; uVar45 = uVar45 - 1) {
    *pbVar4 = *(byte *)ppuVar30;
    ppuVar30 = (undefined **)((long)ppuVar30 + 1);
    pbVar4 = pbVar4 + 1;
  }
  uStack_5d2 = (undefined1)uVar27;
  ppuVar30 = ppuVar39;
LAB_00725bcc:
  ppuVar30 = (undefined **)((long)ppuVar30 + 1);
  bStack_5d7 = bVar32;
LAB_00725bd4:
  if (ppuVar30 != param_2) {
    bVar32 = *(byte *)ppuVar30;
    if (bVar32 == 0x20) {
      bVar32 = 0x30;
LAB_00725c20:
      FUN_00727330();
      pppppuVar40 = (undefined *****)ppppuStack_570;
      if (((uint)uStack_550 - 1 < 8) &&
         ((8 < (uint)uStack_550 || ((1 << (ulong)((uint)uStack_550 & 0x1f) & 0x10aU) == 0)))) {
        FUN_00721c34(&UNK_0091dca8);
        goto LAB_00727124;
      }
      *(byte *)((long)ppppuStack_570 + 9) = *(byte *)((long)ppppuStack_570 + 9) & 0x8f | bVar32;
      ppuVar30 = (undefined **)((long)ppuVar30 + 1);
      pfVar15 = pfVar44;
    }
    else {
      if (bVar32 == 0x2b) {
        bVar32 = 0x20;
        goto LAB_00725c20;
      }
      if (bVar32 == 0x2d) {
        bVar32 = 0x10;
        goto LAB_00725c20;
      }
      pppppuVar40 = (undefined *****)&pppuStack_5e0;
    }
    if (ppuVar30 != param_2) {
      bVar32 = *(byte *)ppuVar30;
      if (bVar32 == 0x23) {
        pfVar15 = (float *)((ulong)uStack_550 & 0xffffffff);
        FUN_00727330();
        pppppuVar40 = (undefined *****)ppppuStack_570;
        *(byte *)((long)ppppuStack_570 + 9) = *(byte *)((long)ppppuStack_570 + 9) | 0x80;
        ppuVar30 = (undefined **)((long)ppuVar30 + 1);
        if (ppuVar30 == param_2) goto LAB_00725e44;
        bVar32 = *(byte *)ppuVar30;
      }
      if (bVar32 == 0x30) {
        pfVar15 = (float *)((ulong)uStack_550 & 0xffffffff);
        FUN_00727330();
        pppppuVar40 = (undefined *****)ppppuStack_570;
        *(byte *)((long)ppppuStack_570 + 9) = *(byte *)((long)ppppuStack_570 + 9) & 0xf0 | 4;
        *(undefined1 *)((long)pppppuVar40 + 10) = 0x30;
        ppuVar30 = (undefined **)((long)ppuVar30 + 1);
        if (ppuVar30 == param_2) goto LAB_00725e44;
      }
      ppuStack_1f0 = ppuVar30;
      if (*(byte *)ppuVar30 - 0x30 < 10) {
        func_0x0072a230();
        pppppuVar40 = (undefined *****)ppppuStack_570;
        *(int *)ppppuStack_570 = (int)pfVar15;
        ppuVar30 = ppuStack_1f0;
      }
      else if (*(byte *)ppuVar30 == 0x7b) {
        ppuVar39 = (undefined **)((long)ppuVar30 + 1);
        bVar11 = ppuVar39 == param_2;
        if (!bVar11) {
          func_0x0072a104();
          if ((bVar11) || (iVar25 = (int)extraout_x8_05, iVar25 == 0x3a)) {
            pfVar15 = (float *)&uStack_140;
            FUN_0072743c(pfVar15,pppuStack_568,pppuStack_560);
            func_0x0072a158();
          }
          else {
            bVar11 = iVar25 - 0x30U == 9;
            ppuVar39 = param_2;
            if (iVar25 - 0x30U < 10) {
              if (iVar25 == 0x30) {
                ppuVar39 = (undefined **)((long)ppuVar30 + 2);
              }
              else {
                uVar27 = 0;
                uVar34 = 0xccccccc;
                ppuVar30 = (undefined **)((long)ppuVar30 + 2);
                uVar37 = 10;
                uVar33 = extraout_x8_05;
                do {
                  if ((uint)uVar34 < (uint)uVar27) goto LAB_007270a4;
                  uVar24 = ((int)uVar33 + (uint)uVar27 * (int)uVar37) - 0x30;
                  uVar27 = (ulong)uVar24;
                  bVar11 = param_2 <= ppuVar30;
                  if (ppuVar30 == param_2) goto LAB_00726ddc;
                  func_0x0072a070();
                  uVar24 = (uint)uVar27;
                  uVar33 = extraout_x8_10;
                  uVar34 = extraout_x9_00;
                  ppuVar30 = extraout_x10_03;
                  uVar37 = extraout_x11_00;
                } while (!bVar11);
                ppuVar39 = (undefined **)((long)extraout_x10_03 + -1);
LAB_00726ddc:
                if ((int)uVar24 < 0) {
LAB_007270a4:
                  func_0x00729944();
                  goto LAB_00727124;
                }
              }
              bVar11 = ppuVar39 == param_2;
              if ((bVar11) || ((func_0x0072a3f8(), !bVar11 && (extraout_w8_07 != 0x7d)))) {
                func_0x0072990c();
                goto LAB_00727124;
              }
              func_0x0072a16c();
              func_0x0072a158();
            }
            else {
              func_0x0072a0a0();
              if ((!bVar11 && 0x18 < extraout_w9_06) && (bVar11 || extraout_w9_06 != 0x19)) {
                func_0x0072990c();
                goto LAB_00727124;
              }
              ppuVar30 = (undefined **)((long)ppuVar30 + 2);
              do {
                bVar11 = param_2 <= ppuVar30;
                if (ppuVar30 == param_2) goto LAB_007269c0;
                func_0x00729b94();
                ppuVar30 = extraout_x8_08;
              } while ((!bVar11) || (extraout_w9_07 == 0x5f || extraout_w10_00 < 0x1a));
              ppuVar39 = (undefined **)((long)extraout_x8_08 + -1);
LAB_007269c0:
              func_0x0072a160();
              func_0x0072a158();
            }
          }
          pppppuVar40 = (undefined *****)ppppuStack_570;
          *(int *)ppppuStack_570 = (int)pfVar15;
        }
        if ((ppuVar39 == param_2) || (*(byte *)ppuVar39 != 0x7d)) {
          func_0x0072990c();
          goto LAB_00727124;
        }
        ppuVar30 = (undefined **)((long)ppuVar39 + 1);
      }
      uVar12 = SUB84(pfVar15,0);
      if (ppuVar30 != param_2) {
        if (*(byte *)ppuVar30 == 0x2e) {
          ppuStack_1f0 = (undefined **)((long)ppuVar30 + 1);
          if (ppuStack_1f0 == param_2) {
LAB_00727058:
            FUN_00721c34(&UNK_0091dcf6);
            goto LAB_00727124;
          }
          if ((int)(char)*(byte *)ppuStack_1f0 - 0x30U < 10) {
            func_0x0072a230();
            pppppuVar40 = (undefined *****)ppppuStack_570;
            *(undefined4 *)((long)ppppuStack_570 + 4) = uVar12;
          }
          else {
            if (*(byte *)ppuStack_1f0 != 0x7b) goto LAB_00727058;
            ppuVar39 = (undefined **)((long)ppuVar30 + 2);
            bVar11 = ppuVar39 == param_2;
            if (!bVar11) {
              func_0x0072a104();
              uVar12 = SUB84(pfVar15,0);
              if ((bVar11) || (iVar25 = (int)extraout_x8_06, iVar25 == 0x3a)) {
                puVar16 = &uStack_140;
                FUN_0072743c(puVar16,pppuStack_568,pppuStack_560);
                uVar12 = SUB84(puVar16,0);
                func_0x0072a178();
              }
              else {
                bVar11 = iVar25 - 0x30U == 9;
                ppuVar39 = param_2;
                if (iVar25 - 0x30U < 10) {
                  if (iVar25 == 0x30) {
                    ppuVar39 = (undefined **)((long)ppuVar30 + 3);
                  }
                  else {
                    uVar27 = 0;
                    uVar34 = 0xccccccc;
                    ppuVar30 = (undefined **)((long)ppuVar30 + 3);
                    uVar37 = 10;
                    uVar33 = extraout_x8_06;
                    do {
                      uVar12 = SUB84(pfVar15,0);
                      if ((uint)uVar34 < (uint)uVar27) goto LAB_007270c4;
                      uVar24 = ((int)uVar33 + (uint)uVar27 * (int)uVar37) - 0x30;
                      uVar27 = (ulong)uVar24;
                      bVar11 = param_2 <= ppuVar30;
                      if (ppuVar30 == param_2) goto LAB_00726e38;
                      func_0x0072a070();
                      uVar12 = SUB84(pfVar15,0);
                      uVar24 = (uint)uVar27;
                      uVar33 = extraout_x8_11;
                      uVar34 = extraout_x9_01;
                      ppuVar30 = extraout_x10_04;
                      uVar37 = extraout_x11_01;
                    } while (!bVar11);
                    ppuVar39 = (undefined **)((long)extraout_x10_04 + -1);
LAB_00726e38:
                    if ((int)uVar24 < 0) {
LAB_007270c4:
                      func_0x00729944();
                      goto LAB_00727124;
                    }
                  }
                  bVar11 = ppuVar39 == param_2;
                  if ((bVar11) || ((func_0x0072a3f8(), !bVar11 && (extraout_w8_08 != 0x7d)))) {
                    func_0x0072990c();
                    goto LAB_00727124;
                  }
                  func_0x0072a16c();
                  func_0x0072a178();
                }
                else {
                  func_0x0072a0a0();
                  if ((!bVar11 && 0x18 < extraout_w9_08) && (bVar11 || extraout_w9_08 != 0x19)) {
                    func_0x0072990c();
                    goto LAB_00727124;
                  }
                  ppuVar30 = (undefined **)((long)ppuVar30 + 3);
                  do {
                    uVar12 = SUB84(pfVar15,0);
                    bVar11 = param_2 <= ppuVar30;
                    if (ppuVar30 == param_2) goto LAB_00726a3c;
                    func_0x00729b94();
                    uVar12 = SUB84(pfVar15,0);
                    ppuVar30 = extraout_x8_09;
                  } while ((!bVar11) || (extraout_w9_09 == 0x5f || extraout_w10_01 < 0x1a));
                  ppuVar39 = (undefined **)((long)extraout_x8_09 + -1);
LAB_00726a3c:
                  func_0x0072a160();
                  func_0x0072a178();
                }
              }
              pppppuVar40 = (undefined *****)ppppuStack_570;
              *(undefined4 *)((long)ppppuStack_570 + 4) = uVar12;
            }
            if ((ppuVar39 == param_2) ||
               (ppuStack_1f0 = (undefined **)((long)ppuVar39 + 1), *(byte *)ppuVar39 != 0x7d)) {
              func_0x0072990c();
              goto LAB_00727124;
            }
          }
          ppuVar30 = ppuStack_1f0;
          if (((uint)uStack_550 < 0xf) && ((1 << (ulong)((uint)uStack_550 & 0x1f) & 0x41feU) != 0))
          {
            FUN_00721c34(&UNK_0091dd3e);
            goto LAB_00727124;
          }
        }
        if ((ppuVar30 != param_2) && (bVar32 = *(byte *)ppuVar30, bVar32 != 0x7d)) {
          ppuVar30 = (undefined **)((long)ppuVar30 + 1);
          *(byte *)(pppppuVar40 + 1) = bVar32;
        }
      }
    }
  }
LAB_00725e44:
  bVar11 = ppuVar30 == param_2;
  if ((bVar11) || (func_0x0072a104(), ppuVar39 = ppuVar30, bVar32 = bStack_5d8, !bVar11)) {
    func_0x0072a248();
    goto LAB_00727124;
  }
LAB_00725e54:
  bStack_5d8 = bVar32;
  bVar32 = bStack_5d7;
  lVar31 = param_3 + 8;
  pppppuVar40 = *(undefined ******)(param_3 + 0x20);
  pppuStack_608 = *(undefined ****)(param_3 + 0x38);
  pppuStack_600 = (undefined ***)&pppuStack_5e0;
  uStack_5e8 = 0;
  uStack_580 = uStack_580 - 1;
  uVar7 = 0xd < uStack_580;
  uVar10 = uStack_580 == 0xe;
  ppppuStack_610 = (undefined ****)pppppuVar40;
  pppuStack_5f8 = (undefined ***)ppppuVar1;
  lStack_5f0 = lVar31;
  switch(uStack_580) {
  case 0:
    func_0x00729cac();
    pppppuVar40 = (undefined *****)ppppuStack_610;
    break;
  case 1:
    pppuStack_560 = (undefined ***)&pppuStack_5e0;
    uStack_558 = (undefined *****)CONCAT44(uStack_558._4_4_,fStack_590);
    uStack_550 = (undefined ***)((ulong)uStack_550 & 0xffffffff00000000);
    ppppuStack_570 = (undefined ****)pppppuVar40;
    pppuStack_568 = pppuStack_608;
    func_0x00729b34();
    if ((bool)uVar7) {
      uVar7 = 0x2b;
      if (!(bool)uVar10) {
        uVar7 = 0x20;
      }
      uStack_558._0_5_ = CONCAT14(uVar7,(undefined4)uStack_558);
      uStack_550 = (undefined ***)CONCAT44(uStack_550._4_4_,1);
    }
    FUN_00727614((long)(char)bStack_5d8,&ppppuStack_570);
    pppppuVar40 = (undefined *****)ppppuStack_570;
    break;
  case 2:
    func_0x0072a0b0();
    if (extraout_x8_07 < 0) {
      uStack_550 = (undefined ***)CONCAT71(uStack_550._1_7_,0x2d);
      uStack_550 = (undefined ***)CONCAT44(1,(uint)uStack_550);
      uStack_558 = (undefined *****)-extraout_x8_07;
    }
    else {
      func_0x00729b34();
      if ((bool)uVar7) {
        uVar7 = 0x2b;
        if (!(bool)uVar10) {
          uVar7 = 0x20;
        }
        uStack_550 = (undefined ***)CONCAT71(uStack_550._1_7_,uVar7);
        uStack_550 = (undefined ***)CONCAT44(1,(uint)uStack_550);
      }
    }
    FUN_00727b84((long)(char)bStack_5d8,&ppppuStack_570);
    pppppuVar40 = (undefined *****)ppppuStack_570;
    break;
  case 3:
    func_0x0072a0b0();
    func_0x00729b34();
    if ((bool)uVar7) {
      uVar7 = 0x2b;
      if (!(bool)uVar10) {
        uVar7 = 0x20;
      }
      uStack_550 = (undefined ***)CONCAT71(uStack_550._1_7_,uVar7);
      uStack_550 = (undefined ***)CONCAT44(1,(uint)uStack_550);
    }
    FUN_00727b84((long)(char)bStack_5d8,&ppppuStack_570);
    pppppuVar40 = (undefined *****)ppppuStack_570;
    break;
  case 4:
    uStack_550 = (undefined ***)CONCAT44(uStack_58c,fStack_590);
    pppuStack_560 = (undefined ***)&pppuStack_5e0;
    pcStack_548 = pcStack_588;
    uStack_53c = 0;
    if ((long)pcStack_588 < 0) {
      uStack_540 = 0x2d;
      uStack_53c = 1;
      bVar11 = uStack_550 != (undefined ***)0x0;
      uStack_550 = (undefined ***)-(long)uStack_550;
      pcStack_548 = (code *)-(long)(pcStack_588 + bVar11);
      ppppuStack_570 = (undefined ****)pppppuVar40;
      pppuStack_568 = pppuStack_608;
    }
    else {
      ppppuStack_570 = (undefined ****)pppppuVar40;
      pppuStack_568 = pppuStack_608;
      func_0x00729b34();
      if ((bool)uVar7) {
        uStack_540 = 0x2b;
        if (!(bool)uVar10) {
          uStack_540 = 0x20;
        }
        uStack_53c = 1;
      }
    }
    FUN_007280ec((long)(char)bStack_5d8,&ppppuStack_570);
    pppppuVar40 = (undefined *****)ppppuStack_570;
    break;
  case 5:
    uStack_550 = (undefined ***)CONCAT44(uStack_58c,fStack_590);
    pppuStack_560 = (undefined ***)&pppuStack_5e0;
    pcStack_548 = pcStack_588;
    uStack_53c = 0;
    ppppuStack_570 = (undefined ****)pppppuVar40;
    pppuStack_568 = pppuStack_608;
    func_0x00729b34();
    if ((bool)uVar7) {
      uStack_540 = 0x2b;
      if (!(bool)uVar10) {
        uStack_540 = 0x20;
      }
      uStack_53c = 1;
    }
    FUN_007280ec((long)(char)bStack_5d8,&ppppuStack_570);
    pppppuVar40 = (undefined *****)ppppuStack_570;
    break;
  case 6:
    if (bStack_5d8 == 0) {
      func_0x0072a1c4();
      pppppuVar40 = (undefined *****)ppppuStack_610;
    }
    else {
      func_0x00729cac();
      pppppuVar40 = (undefined *****)ppppuStack_610;
    }
    break;
  case 7:
    if ((bStack_5d8 == 0) || (bStack_5d8 == 99)) {
      if (0xf < bStack_5d7 || (int)((ulong)bStack_5d7 & 0xf) == 4) {
        FUN_00721c34(&UNK_0091dd82);
        goto LAB_00727124;
      }
      ppppuStack_570 = (undefined ****)CONCAT71(ppppuStack_570._1_7_,fStack_590._0_1_);
      uVar27 = 0;
      if (((ulong)pppuStack_5e0 & 0xffffffff) != 0) {
        uVar27 = ((ulong)pppuStack_5e0 & 0xffffffff) - 1;
      }
      cVar9 = (&UNK_0083cda0)[(ulong)bStack_5d7 & 0xf];
      func_0x00729a94();
      uVar45 = uVar27 >> ((long)cVar9 & 0x3fU);
      FUN_00724f50(pppppuVar40,uVar45,pbVar42);
      FUN_00721aa0();
      FUN_00724f50(pppppuVar40,uVar27 - uVar45,pbVar42);
      ppppuStack_610 = (undefined ****)pppppuVar40;
    }
    else {
      func_0x00729cac();
      pppppuVar40 = (undefined *****)ppppuStack_610;
    }
    break;
  case 8:
    puStack_138 = (undefined1 *)
                  CONCAT17(uStack_5d1,
                           CONCAT16(uStack_5d2,
                                    CONCAT24(uStack_5d4,
                                             CONCAT22(uStack_5d6,CONCAT11(bStack_5d7,bStack_5d8)))))
    ;
    uStack_140 = (undefined **)pppuStack_5e0;
    pppppuVar40 = (undefined *****)&uStack_140;
    FUN_00724720();
    func_0x0072a0c8();
    func_0x007299f0();
    fVar50 = fStack_590;
    uVar24 = extraout_w11_01;
    if ((extraout_x10_02 & 0x80000000) != 0) {
      fVar50 = -fStack_590;
      uVar24 = extraout_w9_03;
    }
    if ((fVar50 < INFINITY) || (fVar50 != INFINITY)) {
      uVar35 = extraout_w8_03 & 0xf;
      cVar8 = SBORROW4(uVar35,4);
      cVar9 = (int)(uVar35 - 4) < 0;
      uVar10 = uVar35 == 4;
      if (((bool)uVar10) && ((uVar24 & 0xff00) != 0)) {
        func_0x00729c50();
        func_0x0072a040();
        func_0x00729a84();
        uVar24 = uVar24 & 0xffff00ff;
        if ((float)uStack_140 != 0.0) {
          uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,(int)(float)uStack_140 + -1);
        }
      }
      func_0x0072a44c();
      func_0x0072a030(0);
      if ((bool)uVar10) {
        if ((uVar24 >> 8 & 0xff) != 0) {
          func_0x0072a18c();
        }
        pppppuVar40 = (undefined *****)((ulong)uStack_140 >> 0x20);
        FUN_007230a4((double)fVar50,pppppuVar40,
                     (ulong)&pppuStack_5e0 & 0xffffffff | 10 | (ulong)uVar24 << 0x20,&ppppuStack_570
                    );
        func_0x0072a1a0();
      }
      else {
        func_0x0072a404();
        uVar35 = 6;
        if (cVar9 == cVar8) {
          uVar35 = extraout_w9_05;
        }
        if (extraout_w8_06 == 1) {
          if (uVar35 == 0x7fffffff) {
            func_0x00729b24();
            func_0x00729d38();
            func_0x007297f4();
            goto LAB_00727124;
          }
          uVar35 = uVar35 + 1;
        }
        pppppuVar40 = (undefined *****)(ulong)uVar35;
        FUN_007232f0((double)fVar50,pppppuVar40,
                     (ulong)&pppuStack_5e0 & 0xffffffff | 10 |
                     ((ulong)(uVar24 | 0xc0000) & 0x7fffffff) << 0x20,&ppppuStack_570);
        if ((uVar24 & 0x20000) != 0) {
          func_0x0072a2f0();
        }
        func_0x00729f74();
        func_0x00729ca0();
      }
code_r0x00726f14:
      func_0x006420e4(&ppppuStack_570);
    }
    else {
      func_0x00729c5c();
    }
    break;
  case 9:
    puStack_138 = (undefined1 *)
                  CONCAT17(uStack_5d1,
                           CONCAT16(uStack_5d2,
                                    CONCAT24(uStack_5d4,
                                             CONCAT22(uStack_5d6,CONCAT11(bStack_5d7,bStack_5d8)))))
    ;
    uStack_140 = (undefined **)pppuStack_5e0;
    pppppuVar40 = (undefined *****)&uStack_140;
    FUN_00724720();
    func_0x0072a0c8();
    func_0x007299f0();
    dVar51 = (double)CONCAT44(uStack_58c,fStack_590);
    uVar24 = extraout_w11;
    if ((extraout_x10_00 & 0x8000000000000000) != 0) {
      dVar51 = -(double)CONCAT44(uStack_58c,fStack_590);
      uVar24 = extraout_w9_01;
    }
    if ((dVar51 < INFINITY) || (dVar51 != INFINITY)) {
      uVar35 = extraout_w8_01 & 0xf;
      cVar8 = SBORROW4(uVar35,4);
      cVar9 = (int)(uVar35 - 4) < 0;
      uVar10 = uVar35 == 4;
      if (((bool)uVar10) && ((uVar24 & 0xff00) != 0)) {
        func_0x00729c50();
        func_0x0072a040();
        func_0x00729a84();
        uVar24 = uVar24 & 0xffff00ff;
        if ((float)uStack_140 != 0.0) {
          uStack_140 = (undefined **)CONCAT44(uStack_140._4_4_,(int)(float)uStack_140 + -1);
        }
      }
      func_0x0072a44c();
      func_0x0072a030(0);
      if ((bool)uVar10) {
        if ((uVar24 >> 8 & 0xff) != 0) {
          func_0x0072a18c();
        }
        pppppuVar40 = (undefined *****)((ulong)uStack_140 >> 0x20);
        FUN_007230a4(dVar51,pppppuVar40,
                     (ulong)&pppuStack_5e0 & 0xffffffff | 10 | (ulong)uVar24 << 0x20,&ppppuStack_570
                    );
        func_0x0072a1a0();
      }
      else {
        func_0x0072a404();
        uVar35 = 6;
        if (cVar9 == cVar8) {
          uVar35 = extraout_w9_04;
        }
        if (extraout_w8_05 == 1) {
          if (uVar35 == 0x7fffffff) {
            func_0x00729b24();
            func_0x00729d38();
            func_0x007297f4();
            goto LAB_00727124;
          }
          uVar35 = uVar35 + 1;
        }
        pppppuVar40 = (undefined *****)(ulong)uVar35;
        FUN_007232f0(dVar51,pppppuVar40,
                     (ulong)&pppuStack_5e0 & 0xffffffff | 10 |
                     ((ulong)(uVar24 | 0x80000) & 0x7fffffff) << 0x20,&ppppuStack_570);
        if ((uVar24 & 0x20000) != 0) {
          func_0x0072a2f0();
        }
        func_0x00729f74();
        func_0x00729ca0();
      }
      goto code_r0x00726f14;
    }
    func_0x0072a3d0();
    func_0x00729c5c();
    break;
  case 10:
    uStack_5c8 = CONCAT17(uStack_5d1,
                          CONCAT16(uStack_5d2,
                                   CONCAT24(uStack_5d4,
                                            CONCAT22(uStack_5d6,CONCAT11(bStack_5d7,bStack_5d8)))));
    uStack_5d0 = (undefined ****)pppuStack_5e0;
    pppppuVar17 = (undefined *****)&uStack_5d0;
    FUN_00724720();
    iVar25 = (int)lVar31;
    func_0x007299f0(bVar32);
    dVar51 = (double)CONCAT44(uStack_58c,fStack_590);
    uVar24 = extraout_w11_00;
    if ((extraout_x10_01 & 0x8000000000000000) != 0) {
      dVar51 = -(double)CONCAT44(uStack_58c,fStack_590);
      uVar24 = extraout_w9_02;
    }
    if ((dVar51 < INFINITY) || (dVar51 != INFINITY)) {
      uVar10 = (extraout_w8_02 & 0xf) == 4;
      if (((bool)uVar10) && ((uVar24 & 0xff00) != 0)) {
        func_0x00729c50();
        func_0x0072a040();
        iVar25 = (int)&ppppuStack_570;
        func_0x00729a84();
        uVar24 = uVar24 & 0xffff00ff;
        if ((int)uStack_5d0 != 0) {
          uStack_5d0 = (undefined ****)CONCAT44(uStack_5d0._4_4_,(int)uStack_5d0 + -1);
        }
      }
      ppppuStack_570 = (undefined ****)&PTR_FUN_00a0c670;
      pppuStack_568 = (undefined ***)&uStack_550;
      func_0x0072a030(0);
      if ((bool)uVar10) {
        if ((uVar24 >> 8 & 0xff) != 0) {
          func_0x0072a18c();
        }
        ppppuVar23 = (undefined ****)uStack_140;
        pppuVar20 = pppuStack_560;
        uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,0x25);
        if ((uVar24 >> 0x14 & 1) == 0) {
          puVar28 = (undefined2 *)((long)&uStack_140 + 1);
        }
        else {
          puVar28 = (undefined2 *)((long)&uStack_140 + 2);
          uStack_140 = (undefined **)CONCAT62(SUB86(ppppuVar23,2),0x2325);
        }
        puVar29 = puVar28;
        if (-1 < (long)uStack_5d0) {
          puVar29 = puVar28 + 1;
          *puVar28 = 0x2a2e;
        }
        *(undefined1 *)puVar29 = 0x4c;
        uVar10 = 0x61;
        if ((uVar24 & 0x10000) != 0) {
          uVar10 = 0x41;
        }
        *(undefined1 *)((long)puVar29 + 1) = uVar10;
        *(undefined1 *)(puVar29 + 1) = 0;
code_r0x00726688:
        while( true ) {
          uVar27 = (long)uStack_558 - (long)pppuVar20;
          pcVar18 = (char *)((long)pppuStack_568 + (long)pppuVar20);
          _snprintf(pcVar18,uVar27,&uStack_140);
          if ((int)pcVar18 < 0) goto code_r0x007266dc;
          if (((ulong)pcVar18 & 0xffffffff) < uVar27) break;
          pppppuVar40 = (undefined *****)((long)pppuVar20 + ((ulong)pcVar18 & 0xffffffff) + 1);
          if (uStack_558 < pppppuVar40) goto code_r0x007266ec;
        }
        pppppuVar40 = &ppppuStack_570;
        FUN_00721b24(pppppuVar40,(long)pppuVar20 + ((ulong)pcVar18 & 0xffffffff));
        func_0x0072a1a0();
        goto code_r0x00726f14;
      }
      uVar35 = 6;
      if ((char)uStack_5c8 == '\0' || -1 < (long)uStack_5d0) {
        uVar35 = uStack_5d0._4_4_;
      }
      if (extraout_w8_04 == 1) {
        if (uVar35 == 0x7fffffff) {
          func_0x00729b24();
          func_0x00729d38();
          func_0x007297f4();
          goto LAB_00727124;
        }
        uVar35 = uVar35 + 1;
      }
      uVar36 = uVar24 & 0xff;
      if (dVar51 <= 0.0) {
        if ((int)uVar35 < 1 || uVar36 != 2) {
          uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,0x30);
          pppppuVar40 = &ppppuStack_570;
          FUN_00721aa0(pppppuVar40,&uStack_140);
          iVar25 = 0;
        }
        else {
          func_0x00729f3c();
          ppppuVar23 = (undefined ****)pppuStack_568;
          uVar36 = uVar35;
          while (0 < (int)uVar36) {
            *(char *)ppppuVar23 = '0';
            ppppuVar23 = (undefined ****)((long)ppppuVar23 + 1);
            uVar36 = uVar36 - 1;
          }
          iVar25 = -uVar35;
          pppppuVar40 = pppppuVar17;
        }
      }
      else if ((int)uVar35 < 0) {
        if ((uVar24 >> 0x12 & 1) == 0) {
          FUN_007229c4(dVar51);
          pppppuVar40 = &ppppuStack_570;
          func_0x00723b04(pppppuVar40,pppppuVar17);
        }
        else {
          FUN_00722620((float)dVar51);
          pppppuVar40 = &ppppuStack_570;
          func_0x00723aa4(pppppuVar40,pppppuVar17);
          iVar25 = (int)((ulong)pppppuVar17 >> 0x20);
        }
      }
      else {
        func_0x007296f8(dVar51,&uStack_140);
        ppppuVar23 = (undefined ****)uStack_140;
        puVar21 = puStack_138;
        FUN_00723b60();
        iVar25 = (int)puVar21;
        uVar27 = (ulong)(-iVar25 - 0x7c);
        puVar22 = &uStack_5a4;
        func_0x00723b88(uVar27,puVar22);
        func_0x00723be0(ppppuVar23,(ulong)puVar21 & 0xffffffff,uVar27,(ulong)puVar22 & 0xffffffff);
        if (0x2fe < uVar35) {
          uVar35 = 0x2ff;
        }
        iStack_5b8 = 0;
        iStack_5b0 = -uStack_5a4;
        uVar45 = (ulong)(uint)-iVar25;
        uVar48 = (ulong)ppppuVar23 >> (uVar45 & 0x3f);
        uVar27 = uVar48;
        pppuStack_5c0 = (undefined ***)&uStack_550;
        uStack_5b4 = uVar35;
        uStack_5ac = uVar36 == 2;
        FUN_00721bf0();
        pppppuVar40 = (undefined *****)&pppuStack_5c0;
        FUN_00728c5c(pppppuVar40,*(long *)(&UNK_0083c0c0 + (long)(int)uVar27 * 8) << (uVar45 & 0x3f)
                     ,(ulong)ppppuVar23 / 10,uVar27);
        if ((int)pppppuVar40 == 0) {
          lVar31 = 1L << (uVar45 & 0x3f);
          uVar43 = lVar31 - 1;
          uVar47 = uVar43 & (ulong)ppppuVar23;
          uVar49 = (long)(int)uVar27;
          do {
            uVar35 = (uint)uVar48;
            switch((int)uVar49) {
            case 1:
              uVar48 = 0;
              goto code_r0x0072692c;
            case 2:
              uVar48 = (ulong)(uVar35 % 10);
              uVar35 = uVar35 / 10;
              goto code_r0x0072692c;
            case 3:
              uVar26 = 100;
              break;
            case 4:
              uVar26 = 1000;
              break;
            case 5:
              uVar26 = 10000;
              break;
            case 6:
              uVar26 = 100000;
              break;
            case 7:
              uVar26 = 1000000;
              break;
            case 8:
              uVar26 = 10000000;
              break;
            case 9:
              uVar26 = 100000000;
              break;
            case 10:
              uVar26 = 1000000000;
              break;
            default:
              cVar9 = '\0';
              goto code_r0x00726930;
            }
            uVar3 = 0;
            if (uVar26 != 0) {
              uVar3 = uVar35 / uVar26;
            }
            uVar48 = (ulong)(uVar35 - uVar3 * uVar26);
            uVar35 = uVar3;
code_r0x0072692c:
            cVar9 = (char)uVar35;
code_r0x00726930:
            pppppuVar40 = (undefined *****)&pppuStack_5c0;
            func_0x0072a23c(pppppuVar40,(int)(char)(cVar9 + '0'),
                            *(long *)(&UNK_0083c0c0 + uVar49 * 8) << (uVar45 & 0x3f),
                            ((uVar48 & 0xffffffff) << (uVar45 & 0x3f)) + uVar47);
            if ((int)pppppuVar40 != 0) {
              uVar27 = (ulong)((int)uVar49 - 1);
              goto code_r0x00726a5c;
            }
            uVar27 = uVar49 - 1;
            bVar11 = 1 < (long)uVar49;
            uVar49 = uVar27;
          } while (bVar11);
          lVar46 = 1;
          do {
            uVar48 = uVar47 * 10;
            lVar46 = lVar46 * 10;
            uVar47 = uVar43 & uVar47 * 10;
            uVar27 = (ulong)((int)uVar27 - 1);
            pppppuVar40 = (undefined *****)&pppuStack_5c0;
            func_0x00728ce4(pppppuVar40,(int)(char)((char)(uVar48 >> (uVar45 & 0x3f)) + '0'),lVar31,
                            uVar47,lVar46,0);
          } while ((int)pppppuVar40 == 0);
        }
code_r0x00726a5c:
        iVar25 = iStack_5b0;
        uVar35 = uStack_5b4;
        if ((int)pppppuVar40 == 2) {
          iVar25 = (int)uVar27 + ~uStack_5a4 + iStack_5b8;
          puStack_138 = auStack_120;
          uStack_140 = &PTR_FUN_00a1f650;
          uStack_128 = 0x20;
          uStack_130 = 0;
          uStack_98 = 0;
          puStack_1e8 = auStack_1d0;
          ppuStack_1f0 = &PTR_FUN_00a1f650;
          uStack_1d8 = 0x20;
          uStack_1e0 = 0;
          uStack_148 = 0;
          puStack_298 = auStack_280;
          ppuStack_2a0 = &PTR_FUN_00a1f650;
          uStack_288 = 0x20;
          uStack_290 = 0;
          uStack_1f8 = 0;
          puStack_348 = auStack_330;
          ppuStack_350 = &PTR_FUN_00a1f650;
          uStack_338 = 0x20;
          uStack_340 = 0;
          uStack_2a8 = 0;
          lStack_5a0 = 0;
          iStack_598 = 0;
          if ((uVar24 >> 0x12 & 1) == 0) {
            iVar13 = (int)&lStack_5a0;
            func_0x007296f8(dVar51);
          }
          else {
            iVar13 = (int)&lStack_5a0;
            func_0x00728e54((float)dVar51);
          }
          iVar14 = iStack_598;
          lVar31 = lStack_5a0;
          uVar26 = 1;
          if (iVar13 != 0) {
            uVar26 = 2;
          }
          lVar46 = lStack_5a0 << (ulong)uVar26;
          if (iStack_598 < 0) {
            if (iVar25 < 0) {
              FUN_00728f4c(&uStack_140,-iVar25);
              FUN_007291b0(&ppuStack_2a0,&uStack_140);
              if (iVar13 == 0) {
                pppuStack_618 = (undefined ***)0x0;
              }
              else {
                FUN_007291b0(&ppuStack_350,&uStack_140);
                pppuStack_618 = &ppuStack_350;
                func_0x00728ed0(&ppuStack_350,1);
              }
              FUN_0072961c(&uStack_140,lVar46);
              func_0x00729bd8(&ppuStack_1f0);
              pppuVar20 = &ppuStack_1f0;
              func_0x00728ed0(pppuVar20,uVar26 - iVar14);
            }
            else {
              func_0x00729f6c(&uStack_140);
              func_0x0072a224();
              func_0x00728ed0(&ppuStack_1f0,uVar26 - iVar14);
              pppuVar20 = &ppuStack_2a0;
              func_0x00729bd8();
              if (iVar13 == 0) {
                pppuStack_618 = (undefined ***)0x0;
              }
              else {
                pppuStack_618 = &ppuStack_350;
                pppuVar20 = &ppuStack_350;
                func_0x00728e90(pppuVar20,2);
              }
            }
          }
          else {
            func_0x00729f6c(&uStack_140);
            func_0x00728ed0(&uStack_140,iVar14);
            func_0x00729bd8(&ppuStack_2a0);
            func_0x00728ed0(&ppuStack_2a0,iVar14);
            if (iVar13 == 0) {
              pppuStack_618 = (undefined ***)0x0;
            }
            else {
              func_0x00729bd8(&ppuStack_350);
              pppuStack_618 = &ppuStack_350;
              func_0x00728ed0(&ppuStack_350,iVar14 + 1);
            }
            func_0x0072a224();
            pppuVar20 = &ppuStack_1f0;
            func_0x00728ed0(pppuVar20,(ulong)uVar26);
          }
          pppuVar5 = pppuStack_568;
          if ((int)uVar35 < 0) {
            lVar46 = 0;
            pppuVar2 = &ppuStack_2a0;
            if (pppuStack_618 != (undefined ***)0x0) {
              pppuVar2 = pppuStack_618;
            }
            uVar35 = (uint)lVar31 & 1;
            while( true ) {
              func_0x00729c0c();
              puVar16 = &uStack_140;
              FUN_00729308(puVar16,&ppuStack_2a0);
              puVar19 = &uStack_140;
              FUN_00729398(puVar19,pppuVar2,&ppuStack_1f0);
              *(char *)((long)pppuVar5 + lVar46) = (char)pppuVar20 + '0';
              if ((int)puVar16 < (int)(uVar35 ^ 1) || (int)uVar35 <= (int)puVar19) break;
              func_0x00729b2c(&uStack_140);
              pppuVar20 = &ppuStack_2a0;
              func_0x00729b2c();
              if (pppuStack_618 != (undefined ***)0x0) {
                pppuVar20 = pppuStack_618;
                func_0x00729b2c();
              }
              lVar46 = lVar46 + 1;
            }
            if ((int)puVar16 < (int)(uVar35 ^ 1)) {
              if ((int)uVar35 <= (int)puVar19) {
                puVar16 = &uStack_140;
                FUN_00729398(puVar16,&uStack_140,&ppuStack_1f0);
                if ((0 < (int)puVar16) || (((int)puVar16 == 0 && (((ulong)pppuVar20 & 1) != 0))))
                goto code_r0x00726db8;
              }
            }
            else {
code_r0x00726db8:
              *(char *)((long)pppuVar5 + lVar46) = (char)pppuVar20 + '1';
            }
            func_0x00729f3c();
            iVar25 = iVar25 - (int)lVar46;
          }
          else {
            uVar27 = (long)(int)uVar35 - 1;
            iVar25 = iVar25 - (int)uVar27;
            if (uVar35 == 0) {
              FUN_00721b24(&ppppuStack_570,1);
              iVar13 = (int)&ppuStack_1f0;
              func_0x00729b2c();
              func_0x00729f20();
              cVar9 = '0';
              if (0 < iVar13) {
                cVar9 = '1';
              }
              *(char *)pppuStack_568 = cVar9;
            }
            else {
              pppppuVar40 = &ppppuStack_570;
              FUN_00721b24(pppppuVar40,uVar35);
              for (uVar45 = 0; cVar9 = (char)pppppuVar40, (uVar27 & 0xffffffff) != uVar45;
                  uVar45 = uVar45 + 1) {
                func_0x00729c0c();
                *(char *)((long)pppuStack_568 + uVar45) = cVar9 + '0';
                pppppuVar40 = (undefined *****)&uStack_140;
                func_0x00729b2c();
              }
              func_0x00729c0c();
              iVar13 = (int)pppppuVar40;
              iVar14 = iVar13;
              func_0x00729f20();
              if ((0 < iVar14) || ((iVar14 == 0 && (((ulong)pppppuVar40 & 1) != 0)))) {
                if (iVar13 == 9) {
                  *(char *)((long)pppuStack_568 + uVar27) = ':';
                  uVar27 = (ulong)(uVar35 - 2);
                  uVar33 = 0x30;
                  while ((uVar35 = (int)uVar27 + 1, 0 < (int)uVar35 &&
                         (*(char *)((long)pppuStack_568 + (ulong)uVar35) == ':'))) {
                    *(char *)((long)pppuStack_568 + (ulong)uVar35) = (char)uVar33;
                    func_0x0072a36c();
                    uVar27 = extraout_x8_12;
                    uVar33 = extraout_x9_02;
                  }
                  if (*(char *)pppuStack_568 == ':') {
                    *(char *)pppuStack_568 = '1';
                    iVar25 = iVar25 + 1;
                  }
                  goto code_r0x00726e74;
                }
                iVar13 = iVar13 + 1;
              }
              *(char *)((long)pppuStack_568 + uVar27) = (char)iVar13 + '0';
            }
          }
code_r0x00726e74:
          func_0x00729600(&ppuStack_350);
          func_0x00729600(&ppuStack_2a0);
          func_0x00729600(&ppuStack_1f0);
          pppppuVar40 = (undefined *****)&uStack_140;
          func_0x00729600();
        }
        else {
          func_0x00729f3c();
          iVar25 = iVar25 + (int)uVar27;
        }
        if (((uVar24 >> 0x14 & 1) == 0) && (uVar36 != 2)) {
          iVar14 = iVar25 + (int)pppuStack_560;
          iVar13 = iVar25;
          for (ppppuVar23 = (undefined ****)pppuStack_560;
              (iVar25 = iVar14, ppppuVar23 != (undefined ****)0x0 &&
              (iVar25 = iVar13, ((char *)((long)pppuStack_568 + -1))[(long)ppppuVar23] == '0'));
              ppppuVar23 = (undefined ****)((long)ppppuVar23 + -1)) {
            iVar13 = iVar13 + 1;
          }
          func_0x00729f3c();
        }
      }
      if ((uVar24 & 0x20000) != 0) {
        func_0x0072a2f0();
      }
      uStack_140 = (undefined **)pppuStack_568;
      puStack_138 = (undefined1 *)CONCAT44(iVar25,(int)pppuStack_560);
      func_0x00729ca0((ulong)(uVar24 | 0x80000) << 0x20);
      goto code_r0x00726f14;
    }
    func_0x0072a3d0();
    func_0x00729c5c();
    pppppuVar40 = pppppuVar17;
    break;
  case 0xb:
    lVar31 = CONCAT44(uStack_58c,fStack_590);
    if (bStack_5d8 != 0x73) {
      if (bStack_5d8 == 0x70) {
        FUN_00728bfc(&ppppuStack_610,lVar31);
        pppppuVar40 = (undefined *****)ppppuStack_610;
        break;
      }
      if (bStack_5d8 != 0) {
        func_0x00729a9c();
        goto LAB_00727124;
      }
    }
    if (lVar31 == 0) {
      func_0x00729b24();
      func_0x0072a2f8();
      func_0x007297f4();
      goto LAB_00727124;
    }
    lVar46 = lVar31;
    _strlen(lVar31);
    FUN_007286e8(&ppppuStack_610,lVar31,lVar46,&pppuStack_5e0);
    pppppuVar40 = (undefined *****)ppppuStack_610;
    break;
  case 0xc:
    if ((bStack_5d8 != 0) && (bStack_5d8 != 0x73)) {
      func_0x00729a9c();
      goto LAB_00727124;
    }
    func_0x0072a1c4();
    pppppuVar40 = (undefined *****)ppppuStack_610;
    break;
  case 0xd:
    if ((bStack_5d8 != 0) && (bStack_5d8 != 0x70)) {
      func_0x00729a9c();
      goto LAB_00727124;
    }
    FUN_00728bfc(&ppppuStack_610,CONCAT44(uStack_58c,fStack_590));
    pppppuVar40 = (undefined *****)ppppuStack_610;
    break;
  case 0xe:
    (*pcStack_588)(CONCAT44(uStack_58c,fStack_590),lVar31,ppppuVar1);
    pppppuVar40 = (undefined *****)*ppppuVar1;
  }
  *ppppuVar1 = (undefined ***)pppppuVar40;
LAB_00726f24:
  bVar11 = ppuVar39 == param_2;
  if (!bVar11) {
    func_0x0072a104();
    uVar10 = 1;
    if (bVar11) goto LAB_00726f34;
  }
LAB_00726ffc:
  FUN_00721c34(&UNK_0091db9b);
LAB_00727124:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x727128);
  (*pcVar6)();
}



/* Entry: 007271d4; end: 00727257;  */

ulong * FUN_007271d4(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  ulong *puVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  char *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_38;
  
  if (param_2 != param_3) {
    func_0x00729cd8();
    while( true ) {
      func_0x00729f08();
      FUN_007244a8();
      if (((ulong)param_1 & 1) == 0) break;
      pcVar5 = (char *)(lStack_38 + 1);
      if ((pcVar5 == unaff_x19) || (*pcVar5 != '}')) {
        func_0x0072a1f4();
        param_2 = param_2 + 8;
        puVar3 = param_1;
        func_0x00722324();
        if ((int)param_1[2] != 0) {
          return puVar3;
        }
        func_0x007299d8();
        if ((*puVar3 >> 0x3e & 1) == 0) {
          return (ulong *)0xffffffff;
        }
        lVar8 = 0;
        uVar6 = puVar3[1];
        lVar1 = -0x10;
        if (0x7fffffffffffffff < *puVar3) {
          lVar1 = -0x20;
        }
        lVar9 = ((long *)(uVar6 + lVar1))[1];
        while( true ) {
          if (lVar9 == 0) {
            return (ulong *)0xffffffff;
          }
          lVar10 = *(long *)(uVar6 + lVar1);
          pcVar7 = *(char **)(lVar10 + lVar8);
          pcVar4 = pcVar7;
          _strlen();
          pcVar2 = pcVar4;
          if (pcVar5 <= pcVar4) {
            pcVar2 = pcVar5;
          }
          _memcmp(pcVar7,param_2,pcVar2);
          if (pcVar4 == pcVar5 && (int)pcVar7 == 0) break;
          lVar8 = lVar8 + 0x10;
          lVar9 = lVar9 + -1;
        }
        return (ulong *)(ulong)*(uint *)(lVar10 + lVar8 + 8);
      }
      param_1 = (ulong *)*unaff_x21;
      func_0x00725788();
      param_2 = unaff_x20;
      unaff_x20 = lStack_38 + 2;
    }
    param_1 = (ulong *)*unaff_x21;
    func_0x0072a31c(param_1);
  }
  return param_1;
}



/* Entry: 00727258; end: 00727283;  */

ulong * FUN_00727258(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  param_2 = param_2 + 8;
  puVar3 = param_1;
  func_0x00722324(param_1,param_2);
  if ((int)param_1[2] != 0) {
    return puVar3;
  }
  func_0x007299d8();
  if ((*puVar3 >> 0x3e & 1) != 0) {
    lVar7 = 0;
    uVar5 = puVar3[1];
    lVar1 = -0x10;
    if (0x7fffffffffffffff < *puVar3) {
      lVar1 = -0x20;
    }
    lVar8 = ((long *)(uVar5 + lVar1))[1];
    while( true ) {
      if (lVar8 == 0) {
        return (ulong *)0xffffffff;
      }
      lVar9 = *(long *)(uVar5 + lVar1);
      uVar6 = *(ulong *)(lVar9 + lVar7);
      uVar4 = uVar6;
      _strlen();
      uVar2 = uVar4;
      if (param_3 <= uVar4) {
        uVar2 = param_3;
      }
      _memcmp(uVar6,param_2,uVar2);
      if (uVar4 == param_3 && (int)uVar6 == 0) break;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + -1;
    }
    return (ulong *)(ulong)*(uint *)(lVar9 + lVar7 + 8);
  }
  return (ulong *)0xffffffff;
}



/* Entry: 00727284; end: 0072732f;  */

undefined4 FUN_00727284(ulong *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((*param_1 >> 0x3e & 1) == 0) {
    return 0xffffffff;
  }
  lVar6 = 0;
  uVar4 = param_1[1];
  lVar1 = -0x10;
  if (0x7fffffffffffffff < *param_1) {
    lVar1 = -0x20;
  }
  lVar7 = ((long *)(uVar4 + lVar1))[1];
  while( true ) {
    if (lVar7 == 0) {
      return 0xffffffff;
    }
    lVar8 = *(long *)(uVar4 + lVar1);
    uVar5 = *(ulong *)(lVar8 + lVar6);
    uVar3 = uVar5;
    _strlen();
    uVar2 = uVar3;
    if (param_3 <= uVar3) {
      uVar2 = param_3;
    }
    _memcmp(uVar5,param_2,uVar2);
    if (uVar3 == param_3 && (int)uVar5 == 0) break;
    lVar6 = lVar6 + 0x10;
    lVar7 = lVar7 + -1;
  }
  return *(undefined4 *)(lVar8 + lVar6 + 8);
}



/* Entry: 00727330; end: 0072743b;  */

ulong * FUN_00727330(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((int)param_1 - 1U < 0xb) {
    return param_1;
  }
  puVar5 = (undefined8 *)&UNK_0091dc7d;
  FUN_00721c34();
  puVar6 = (ulong *)0x0;
  puVar3 = (ulong *)*puVar5;
  do {
    puVar8 = (ulong *)((long)puVar3 + 1);
    if (0xccccccc < (uint)puVar6) goto LAB_007273b4;
    uVar2 = ((uint)(byte)*puVar3 + (uint)puVar6 * 10) - 0x30;
    puVar6 = (ulong *)(ulong)uVar2;
    *puVar5 = puVar8;
  } while ((puVar8 != param_2) && (puVar3 = puVar8, *(byte *)puVar8 - 0x30 < 10));
  if (-1 < (int)uVar2) {
    return puVar6;
  }
LAB_007273b4:
  func_0x00729944();
  switch((uint)puVar6[2]) {
  case 1:
    if (-1 < (int)(uint)*puVar6) {
      return (ulong *)(ulong)(uint)*puVar6;
    }
    goto code_r0x0072740c;
  case 2:
    goto code_r0x00727418;
  case 3:
    puVar6 = (ulong *)*puVar6;
    if ((long)puVar6 < 0) goto code_r0x0072740c;
    break;
  case 4:
  case 6:
code_r0x007273fc:
    puVar6 = (ulong *)*puVar6;
    break;
  case 5:
    if (-1 < (long)puVar6[1]) goto code_r0x007273fc;
code_r0x0072740c:
    puVar6 = (ulong *)&UNK_0091dcd2;
    FUN_00721c34();
code_r0x00727418:
    puVar6 = (ulong *)(ulong)(uint)*puVar6;
    break;
  default:
    FUN_00721c34(&UNK_0091dce1);
    goto code_r0x00727438;
  }
  if ((ulong)puVar6 >> 0x1f == 0) {
    return puVar6;
  }
code_r0x00727438:
  func_0x00729944();
  puVar6 = param_2;
  FUN_007244dc();
  puVar8 = param_2;
  func_0x00729f08();
  puVar6 = puVar6 + 1;
  puVar3 = param_2;
  func_0x00722324();
  if ((int)param_2[2] != 0) {
    return puVar3;
  }
  func_0x007299d8();
  if ((*puVar3 >> 0x3e & 1) != 0) {
    lVar10 = 0;
    uVar7 = puVar3[1];
    lVar1 = -0x10;
    if (0x7fffffffffffffff < *puVar3) {
      lVar1 = -0x20;
    }
    lVar11 = ((long *)(uVar7 + lVar1))[1];
    while( true ) {
      if (lVar11 == 0) {
        return (ulong *)0xffffffff;
      }
      lVar12 = *(long *)(uVar7 + lVar1);
      puVar9 = *(ulong **)(lVar12 + lVar10);
      puVar4 = puVar9;
      _strlen();
      puVar3 = puVar4;
      if (puVar8 <= puVar4) {
        puVar3 = puVar8;
      }
      _memcmp(puVar9,puVar6,puVar3);
      if (puVar4 == puVar8 && (int)puVar9 == 0) break;
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -1;
    }
    return (ulong *)(ulong)*(uint *)(lVar12 + lVar10 + 8);
  }
  return (ulong *)0xffffffff;
}



/* Entry: 0072743c; end: 0072746b;  */

ulong * FUN_0072743c(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = param_2;
  FUN_007244dc();
  puVar5 = param_2;
  func_0x00729f08();
  puVar4 = puVar4 + 1;
  puVar2 = param_2;
  func_0x00722324();
  if ((int)param_2[2] != 0) {
    return puVar2;
  }
  func_0x007299d8();
  if ((*puVar2 >> 0x3e & 1) != 0) {
    lVar8 = 0;
    uVar6 = puVar2[1];
    lVar1 = -0x10;
    if (0x7fffffffffffffff < *puVar2) {
      lVar1 = -0x20;
    }
    lVar9 = ((long *)(uVar6 + lVar1))[1];
    while( true ) {
      if (lVar9 == 0) {
        return (ulong *)0xffffffff;
      }
      lVar10 = *(long *)(uVar6 + lVar1);
      puVar7 = *(ulong **)(lVar10 + lVar8);
      puVar3 = puVar7;
      _strlen();
      puVar2 = puVar3;
      if (puVar5 <= puVar3) {
        puVar2 = puVar5;
      }
      _memcmp(puVar7,puVar4,puVar2);
      if (puVar3 == puVar5 && (int)puVar7 == 0) break;
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + -1;
    }
    return (ulong *)(ulong)*(uint *)(lVar10 + lVar8 + 8);
  }
  return (ulong *)0xffffffff;
}



/* Entry: 0072746c; end: 007274ab;  */

ulong * FUN_0072746c(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x00724508(*(undefined8 *)(param_2 + 8));
  lVar5 = *(long *)(param_2 + 0x10) + 8;
  puVar3 = param_1;
  func_0x00722324(param_1,lVar5);
  if ((int)param_1[2] != 0) {
    return puVar3;
  }
  func_0x007299d8();
  if ((*puVar3 >> 0x3e & 1) != 0) {
    lVar8 = 0;
    uVar6 = puVar3[1];
    lVar1 = -0x10;
    if (0x7fffffffffffffff < *puVar3) {
      lVar1 = -0x20;
    }
    lVar9 = ((long *)(uVar6 + lVar1))[1];
    while( true ) {
      if (lVar9 == 0) {
        return (ulong *)0xffffffff;
      }
      lVar10 = *(long *)(uVar6 + lVar1);
      uVar7 = *(ulong *)(lVar10 + lVar8);
      uVar4 = uVar7;
      _strlen();
      uVar2 = uVar4;
      if (param_3 <= uVar4) {
        uVar2 = param_3;
      }
      _memcmp(uVar7,lVar5,uVar2);
      if (uVar4 == param_3 && (int)uVar7 == 0) break;
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + -1;
    }
    return (ulong *)(ulong)*(uint *)(lVar10 + lVar8 + 8);
  }
  return (ulong *)0xffffffff;
}



/* Entry: 007274ac; end: 007274fb;  */

void FUN_007274ac(undefined8 param_1,long param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *unaff_x19;
  int unaff_w20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint *puStack_70;
  int iStack_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  
  func_0x00729efc();
  puVar2 = (uint *)(param_2 + 8);
  FUN_00727284();
  if ((int)puVar2 < 0) {
    *unaff_x19 = 0;
    unaff_x19[4] = 0;
  }
  else {
    param_3 = unaff_w20 + 8;
    puVar3 = unaff_x19;
    param_4 = puVar2;
    func_0x00722324();
    puVar2 = puVar3;
    if (unaff_x19[4] != 0) {
      return;
    }
  }
  func_0x007299d8();
  switch(puVar2[4]) {
  case 1:
    if (-1 < (int)*puVar2) {
      return;
    }
    goto code_r0x00727550;
  case 2:
    goto code_r0x0072755c;
  case 3:
    puVar4 = *(undefined8 **)puVar2;
    if ((long)puVar4 < 0) goto code_r0x00727550;
    break;
  case 4:
  case 6:
code_r0x00727540:
    puVar4 = *(undefined8 **)puVar2;
    break;
  case 5:
    if (-1 < *(long *)(puVar2 + 2)) goto code_r0x00727540;
code_r0x00727550:
    puVar2 = (uint *)&UNK_0091dd12;
    FUN_00721c34();
code_r0x0072755c:
    puVar4 = (undefined8 *)(ulong)*puVar2;
    break;
  default:
    puVar4 = (undefined8 *)&UNK_0091dd25;
    FUN_00721c34();
    goto code_r0x0072757c;
  }
  if ((ulong)puVar4 >> 0x1f == 0) {
    return;
  }
code_r0x0072757c:
  func_0x00729944();
  uStack_78 = puVar4[1];
  uStack_80 = *puVar4;
  uStack_60 = 0;
  if (param_3 < 0) {
    uStack_64 = 0x2d;
    uStack_60 = 1;
    iStack_68 = -param_3;
  }
  else {
    bVar1 = *(byte *)((long)param_4 + 9) >> 4 & 7;
    iStack_68 = param_3;
    if (1 < bVar1) {
      uStack_64 = 0x2b;
      if (bVar1 != 2) {
        uStack_64 = 0x20;
      }
      uStack_60 = 1;
    }
  }
  puStack_70 = param_4;
  FUN_00727614((long)(char)param_4[2],&uStack_80);
  *puVar4 = uStack_80;
  return;
}



/* Entry: 007274fc; end: 0072757f;  */

void FUN_007274fc(uint *param_1,int param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  int iStack_48;
  undefined1 uStack_44;
  undefined4 uStack_40;
  
  switch(param_1[4]) {
  case 1:
    if (-1 < (int)*param_1) {
      return;
    }
    goto code_r0x00727550;
  case 2:
    goto code_r0x0072755c;
  case 3:
    puVar2 = *(undefined8 **)param_1;
    if ((long)puVar2 < 0) goto code_r0x00727550;
    break;
  case 4:
  case 6:
code_r0x00727540:
    puVar2 = *(undefined8 **)param_1;
    break;
  case 5:
    if (-1 < *(long *)(param_1 + 2)) goto code_r0x00727540;
code_r0x00727550:
    param_1 = (uint *)&UNK_0091dd12;
    FUN_00721c34();
code_r0x0072755c:
    puVar2 = (undefined8 *)(ulong)*param_1;
    break;
  default:
    puVar2 = (undefined8 *)&UNK_0091dd25;
    FUN_00721c34();
    goto code_r0x0072757c;
  }
  if ((ulong)puVar2 >> 0x1f == 0) {
    return;
  }
code_r0x0072757c:
  func_0x00729944();
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  uStack_40 = 0;
  if (param_2 < 0) {
    uStack_44 = 0x2d;
    uStack_40 = 1;
    iStack_48 = -param_2;
  }
  else {
    bVar1 = *(byte *)(param_3 + 9) >> 4 & 7;
    iStack_48 = param_2;
    if (1 < bVar1) {
      uStack_44 = 0x2b;
      if (bVar1 != 2) {
        uStack_44 = 0x20;
      }
      uStack_40 = 1;
    }
  }
  lStack_50 = param_3;
  FUN_00727614((long)*(char *)(param_3 + 8),&uStack_60);
  *puVar2 = uStack_60;
  return;
}



/* Entry: 00727580; end: 00727613;  */

void FUN_00727580(undefined8 *param_1,int param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_30 = 0;
  if (param_2 < 0) {
    uStack_34 = 0x2d;
    uStack_30 = 1;
    iStack_38 = -param_2;
  }
  else {
    bVar1 = *(byte *)(param_3 + 9) >> 4 & 7;
    iStack_38 = param_2;
    if (1 < bVar1) {
      uStack_34 = 0x2b;
      if (bVar1 != 2) {
        uStack_34 = 0x20;
      }
      uStack_30 = 1;
    }
  }
  lStack_40 = param_3;
  FUN_00727614((long)*(char *)(param_3 + 8),&uStack_50);
  *param_1 = uStack_50;
  return;
}



/* Entry: 00727614; end: 00727ad3;  */

void FUN_00727614(long *param_1,long *param_2)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  int extraout_w8;
  uint uVar11;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar12;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  uint uVar13;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  char *extraout_x12;
  char *pcVar14;
  long extraout_x12_00;
  char *extraout_x13;
  long extraout_x14;
  undefined1 *extraout_x15;
  undefined1 *puVar15;
  int iVar16;
  undefined8 unaff_x20;
  long lVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  ulong unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x29;
  undefined8 *puVar19;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_270 [7];
  undefined1 uStack_269;
  undefined8 uStack_268;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long alStack_38 [5];
  undefined8 uStack_10;
  
  func_0x0072a4fc();
  puVar19 = &stack0x00000050;
  puVar4 = auStack_270;
  in_stack_00000050 = unaff_x29;
  func_0x00729854();
  iVar8 = (int)param_1;
  if (iVar8 == 0) {
LAB_0072767c:
    func_0x0072975c(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00729fe8();
      puVar4 = (undefined1 *)register0x00000008;
      puVar19 = in_stack_00000050;
      goto code_r0x00727ad4;
    }
LAB_00727aa8:
    ___stack_chk_fail();
  }
  else {
    uStack_10 = extraout_x8;
    if (iVar8 == 0x42) {
LAB_00727748:
      func_0x00729f30();
      if (extraout_w8_00 < 0) {
        *(int *)(param_2 + 4) = (int)param_2[4] + 1;
        func_0x00729a0c((long)param_2 + 0x1c);
        func_0x0072a494();
      }
      lVar17 = 0;
      uVar10 = (ulong)*(uint *)(param_2 + 3);
      do {
        lVar17 = lVar17 + 1;
        uVar11 = (uint)uVar10;
        uVar7 = uVar11 == 1;
        uVar10 = uVar10 >> 1;
      } while (1 < uVar11);
      func_0x0072a080();
      plVar9 = alStack_38;
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (unaff_w26 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      lVar3 = param_2[3];
      func_0x007298d4();
      if (plVar9 == (long *)0x0) {
        func_0x007245a8(&uStack_250,(int)lVar3,lVar17);
        plVar9 = (long *)&uStack_250;
        func_0x00729974();
      }
      else {
        func_0x007245a8();
      }
      func_0x007298c8();
LAB_00727990:
      *param_2 = (long)plVar9;
      param_2 = plVar9;
LAB_00727994:
      func_0x0072975c(uStack_10);
      param_1 = param_2;
      if ((bool)uVar7) {
        return;
      }
      goto LAB_00727aa8;
    }
    uVar7 = iVar8 == 0x4c;
    if ((bool)uVar7) {
      func_0x0072a20c();
      func_0x00729b5c();
      if (extraout_x8_00 == 0) {
        FUN_00727ad4();
      }
      else {
        iVar8 = (int)param_2[1];
        FUN_00723014();
        uStack_269 = (undefined1)iVar8;
        if (iVar8 == 0) {
          FUN_00727ad4();
        }
        else {
          lVar3 = param_2[3];
          FUN_00721bf0((int)lVar3);
          func_0x00729cb8();
          func_0x00729fc4(uStack_268);
          uVar10 = extraout_x11;
          pcVar1 = extraout_x13;
          puVar15 = extraout_x15;
          for (lVar17 = extraout_x14; pcVar14 = extraout_x12, puVar18 = unaff_x22, lVar17 != 0;
              lVar17 = lVar17 + -1) {
            iVar16 = (int)*pcVar1;
            iVar8 = (int)uVar10;
            uVar11 = iVar8 - iVar16;
            uVar7 = uVar11 == 0;
            uVar10 = (ulong)uVar11;
            pcVar14 = pcVar1;
            puVar18 = puVar15;
            if (((bool)uVar7 || iVar8 < iVar16) ||
               (uVar11 = iVar16 - 0x7fU & 0xff, uVar7 = uVar11 == 0x82, uVar11 < 0x82)) break;
            puVar15 = (undefined1 *)(ulong)((int)puVar15 + 1);
            pcVar1 = pcVar1 + 1;
          }
          if (extraout_w9 < 0) {
            if (pcVar14 == (char *)(extraout_x8_01 + extraout_x10)) goto LAB_007279e0;
          }
          else {
            func_0x0072a020();
            if ((bool)uVar7) {
LAB_007279e0:
              func_0x00729dcc();
              puVar18 = (undefined1 *)(ulong)(uint)(extraout_w8_01 + (int)puVar18);
            }
          }
          plVar9 = alStack_38;
          func_0x00723bf8(plVar9,(int)lVar3);
          func_0x00729a54();
          uStack_238 = 500;
          uStack_240 = 0;
          func_0x00729e48((int)param_2[4]);
          func_0x00729b44();
          func_0x00729a38();
          uVar12 = unaff_x20;
          while( true ) {
            iVar8 = (int)uVar12;
            cVar5 = SBORROW4(iVar8,1);
            cVar6 = iVar8 + -1 < 0;
            uVar7 = iVar8 == 1;
            if (iVar8 < 2) break;
            func_0x00729998();
            uVar12 = extraout_x8_02;
            if (((cVar6 == cVar5) && (func_0x00729da0(), uVar12 = unaff_x20, !(bool)uVar7)) &&
               (extraout_w8_02 == 0)) {
              func_0x00729a1c();
              lVar17 = extraout_x12_00;
              if (cVar6 == cVar5) {
                lVar17 = extraout_x9;
              }
              uVar11 = (uint)unaff_x25;
              if (extraout_x8_03 != extraout_x10_00 + lVar17) {
                uVar11 = 0;
              }
              unaff_x25 = (ulong)uVar11;
              plVar9 = (long *)&uStack_269;
              FUN_0072a254();
            }
          }
          *puVar18 = (undefined1)alStack_38[0];
          if ((int)param_2[4] != 0) {
            puVar18[-1] = 0x2d;
          }
          func_0x00729870();
          func_0x007248ec();
          func_0x00729d44();
          func_0x00729adc();
          func_0x00729acc((long)alStack_38 - ((ulong)alStack_38 >> (unaff_x25 & 0x3f)));
          func_0x00729d94();
          param_2 = plVar9;
        }
      }
      func_0x00729d28();
      goto LAB_00727994;
    }
    if (iVar8 == 0x58) {
LAB_007276a4:
      func_0x00729f30();
      if (extraout_w8 < 0) {
        *(int *)(param_2 + 4) = (int)param_2[4] + 1;
        func_0x00729a0c((long)param_2 + 0x1c);
        func_0x0072a494();
      }
      uVar10 = (ulong)*(uint *)(param_2 + 3);
      do {
        uVar11 = (uint)uVar10;
        uVar10 = uVar10 >> 4;
      } while (0xf < uVar11);
      func_0x0072a080();
      plVar9 = (long *)&uStack_250;
      func_0x0072978c();
      func_0x00729730(CONCAT71(uStack_24f,uStack_250));
      func_0x00729bc0();
      func_0x0072980c();
      if (unaff_w26 != 0) {
        func_0x007297cc();
      }
      alStack_38[0]._0_1_ = 0x30;
      func_0x007298a8();
      cVar6 = *(char *)(param_2[2] + 8);
      func_0x007298d4();
      uVar7 = cVar6 == 'x';
      if (plVar9 == (long *)0x0) {
        func_0x0072a418();
        func_0x0072457c();
        plVar9 = alStack_38;
        func_0x00729974();
      }
      else {
        func_0x0072457c();
      }
      func_0x007298c8();
      goto LAB_00727990;
    }
    if (iVar8 == 0x62) goto LAB_00727748;
    uVar7 = iVar8 == 99;
    if ((bool)uVar7) {
      plVar9 = (long *)*param_2;
      uStack_250 = (undefined1)(int)param_2[3];
      func_0x0072a2e8();
      param_2 = plVar9;
      goto LAB_00727994;
    }
    if (iVar8 == 0x78) goto LAB_007276a4;
    if (iVar8 == 0x6f) {
      iVar8 = 0;
      uVar11 = *(uint *)(param_2 + 3);
      uVar10 = (ulong)uVar11;
      do {
        iVar8 = iVar8 + 1;
        uVar13 = (uint)uVar10;
        uVar7 = uVar13 == 7;
        uVar10 = uVar10 >> 3;
      } while (7 < uVar13);
      if ((*(char *)(param_2[2] + 9) < '\0') &&
         (bVar2 = iVar8 < *(int *)(param_2[2] + 4), uVar7 = bVar2 || uVar11 == 0,
         !bVar2 && uVar11 != 0)) {
        uVar11 = *(uint *)(param_2 + 4);
        *(uint *)(param_2 + 4) = uVar11 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar11 + 0x1c) = 0x30;
      }
      func_0x0072a080();
      plVar9 = (long *)&uStack_250;
      func_0x0072978c();
      func_0x00729bac(CONCAT71(uStack_24f,uStack_250));
      func_0x007297a0();
      func_0x00729bc0();
      func_0x0072980c();
      if (unaff_w26 != 0) {
        func_0x007297cc();
      }
      alStack_38[0]._0_1_ = 0x30;
      func_0x007298a8();
      func_0x007298d4();
      if (plVar9 == (long *)0x0) {
        func_0x0072a418();
        func_0x007245cc();
        plVar9 = alStack_38;
        func_0x00729974();
      }
      else {
        func_0x007245cc();
      }
      func_0x007298c8();
      goto LAB_00727990;
    }
    in_ZR = 1;
    if (iVar8 == 100) goto LAB_0072767c;
  }
  param_2 = param_1;
  FUN_00727b60();
  func_0x00729d28();
  unaff_x30 = FUN_00727ad4;
  func_0x00729bc8();
code_r0x00727ad4:
  func_0x0072a4c4();
  *(undefined8 **)(puVar4 + 0x70) = puVar19;
  *(code **)(puVar4 + 0x78) = unaff_x30;
  uVar10 = (ulong)*(uint *)(param_2 + 3);
  FUN_00721bf0(uVar10);
  lVar17 = param_2[4];
  puVar15 = puVar4 + 8;
  func_0x00729b1c(puVar15,uVar10,(long)param_2 + 0x1c,(int)lVar17);
  func_0x0072981c(*(undefined8 *)(puVar4 + 8));
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if ((int)lVar17 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  func_0x00724958();
  func_0x00729d00();
  *param_2 = (long)puVar15;
  return;
}



/* Entry: 00727ad4; end: 00727b5f;  */

void FUN_00727ad4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  
  func_0x0072a4c4();
  uVar2 = (ulong)*(uint *)(param_1 + 3);
  FUN_00721bf0(uVar2);
  lVar1 = param_1[4];
  puVar3 = &stack0x00000008;
  func_0x00729b1c(puVar3,uVar2,(long)param_1 + 0x1c,(int)lVar1);
  func_0x0072981c(in_stack_00000008);
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if ((int)lVar1 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  func_0x00724958();
  func_0x00729d00();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 00727b60; end: 00727b83;  */

void FUN_00727b60(long *param_1,long *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  char *extraout_x12;
  char *pcVar15;
  long extraout_x12_00;
  char *extraout_x13;
  long extraout_x14;
  long *extraout_x15;
  ulong uVar16;
  int iVar17;
  undefined8 unaff_x20;
  long lVar18;
  long *plVar19;
  uint uVar20;
  ulong unaff_x25;
  undefined8 *puVar21;
  undefined8 *in_stack_00000030;
  code *in_stack_00000038;
  undefined1 auStack_290 [7];
  undefined1 uStack_289;
  undefined8 uStack_288;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  long alStack_58 [5];
  undefined8 uStack_30;
  
  func_0x00729b24();
  func_0x00729ccc();
  func_0x007297dc();
  func_0x007299e4();
  func_0x00729e00();
  pcVar12 = FUN_00727b84;
  func_0x0072a4fc();
  puVar21 = &stack0x00000030;
  puVar4 = auStack_290;
  in_stack_00000030 = (undefined8 *)&stack0xfffffffffffffff0;
  in_stack_00000038 = pcVar12;
  func_0x00729854();
  iVar8 = (int)param_1;
  if (iVar8 == 0) {
LAB_00727bf0:
    func_0x0072975c(extraout_x8);
    puVar3 = in_stack_00000030;
    if ((bool)in_ZR) {
      pcVar12 = in_stack_00000038;
      func_0x00729fe8();
      puVar4 = &stack0xffffffffffffffe0;
      puVar21 = puVar3;
      goto code_r0x0072803c;
    }
LAB_00728010:
    ___stack_chk_fail();
  }
  else {
    uStack_30 = extraout_x8;
    if (iVar8 == 0x42) {
LAB_00727cb8:
      func_0x00729f30();
      if (extraout_w8_00 < 0) {
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
        func_0x00729a0c(param_2 + 4);
        func_0x0072a394();
      }
      uVar16 = param_2[3];
      do {
        uVar7 = uVar16 == 1;
        bVar1 = 1 < uVar16;
        uVar16 = uVar16 >> 1;
      } while (bVar1);
      iVar8 = *(int *)((long)param_2 + 0x24);
      plVar9 = alStack_58;
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar8 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (plVar9 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724630();
        plVar9 = (long *)auStack_270;
        func_0x00729974();
      }
      else {
        func_0x00724630();
      }
      func_0x007298c8();
LAB_00727ef8:
      *param_2 = (long)plVar9;
      param_2 = plVar9;
LAB_00727efc:
      func_0x0072975c(uStack_30);
      param_1 = param_2;
      if ((bool)uVar7) {
        return;
      }
      goto LAB_00728010;
    }
    uVar7 = iVar8 == 0x4c;
    if ((bool)uVar7) {
      func_0x0072a20c();
      func_0x00729b5c();
      if (extraout_x8_00 == 0) {
        FUN_0072803c();
      }
      else {
        iVar8 = (int)param_2[1];
        FUN_00723014();
        uStack_289 = (undefined1)iVar8;
        if (iVar8 == 0) {
          FUN_0072803c();
        }
        else {
          lVar18 = param_2[3];
          func_0x00723c50(lVar18);
          func_0x00729cb8();
          func_0x00729fc4(uStack_288);
          uVar16 = extraout_x11;
          pcVar2 = extraout_x13;
          plVar9 = extraout_x15;
          for (lVar10 = extraout_x14; pcVar15 = extraout_x12, plVar19 = alStack_58, lVar10 != 0;
              lVar10 = lVar10 + -1) {
            iVar17 = (int)*pcVar2;
            iVar8 = (int)uVar16;
            uVar20 = iVar8 - iVar17;
            uVar7 = uVar20 == 0;
            uVar16 = (ulong)uVar20;
            pcVar15 = pcVar2;
            plVar19 = plVar9;
            if (((bool)uVar7 || iVar8 < iVar17) ||
               (uVar20 = iVar17 - 0x7fU & 0xff, uVar7 = uVar20 == 0x82, uVar20 < 0x82)) break;
            plVar9 = (long *)(ulong)((int)plVar9 + 1);
            pcVar2 = pcVar2 + 1;
          }
          if (extraout_w9 < 0) {
            if (pcVar15 == (char *)(extraout_x8_01 + extraout_x10)) goto LAB_00727f48;
          }
          else {
            func_0x0072a020();
            if ((bool)uVar7) {
LAB_00727f48:
              func_0x00729dcc();
              plVar19 = (long *)(ulong)(uint)(extraout_w8_01 + (int)plVar19);
            }
          }
          plVar9 = alStack_58;
          func_0x00723c7c(plVar9,lVar18);
          func_0x00729a54();
          uStack_258 = 500;
          uStack_260 = 0;
          func_0x00729e48(*(undefined4 *)((long)param_2 + 0x24));
          func_0x00729b44();
          func_0x00729a38();
          uVar14 = unaff_x20;
          while( true ) {
            iVar8 = (int)uVar14;
            cVar5 = SBORROW4(iVar8,1);
            cVar6 = iVar8 + -1 < 0;
            uVar7 = iVar8 == 1;
            if (iVar8 < 2) break;
            func_0x00729998();
            uVar14 = extraout_x8_02;
            if (((cVar6 == cVar5) && (func_0x00729da0(), uVar14 = unaff_x20, !(bool)uVar7)) &&
               (extraout_w8_02 == 0)) {
              func_0x00729a1c();
              lVar10 = extraout_x12_00;
              if (cVar6 == cVar5) {
                lVar10 = extraout_x9;
              }
              uVar20 = (uint)unaff_x25;
              if (extraout_x8_03 != extraout_x10_00 + lVar10) {
                uVar20 = 0;
              }
              unaff_x25 = (ulong)uVar20;
              plVar9 = (long *)&uStack_289;
              FUN_0072a254();
            }
          }
          *(undefined1 *)plVar19 = (undefined1)alStack_58[0];
          if (*(int *)((long)param_2 + 0x24) != 0) {
            *(undefined1 *)((long)plVar19 + -1) = 0x2d;
          }
          func_0x00729870();
          FUN_007248ec();
          func_0x00729d44();
          func_0x00729adc();
          func_0x00729acc((long)alStack_58 - ((ulong)alStack_58 >> (unaff_x25 & 0x3f)));
          func_0x00729d94();
          param_2 = plVar9;
        }
      }
      func_0x00729d28();
      goto LAB_00727efc;
    }
    if (iVar8 == 0x58) {
LAB_00727c18:
      func_0x00729f30();
      if (extraout_w8 < 0) {
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
        func_0x00729a0c(param_2 + 4);
        func_0x0072a394();
      }
      uVar16 = param_2[3];
      do {
        bVar1 = 0xf < uVar16;
        uVar16 = uVar16 >> 4;
      } while (bVar1);
      iVar8 = *(int *)((long)param_2 + 0x24);
      plVar9 = alStack_58;
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar8 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      cVar6 = *(char *)(param_2[2] + 8);
      func_0x007298d4();
      uVar7 = cVar6 == 'x';
      if (plVar9 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724608();
        plVar9 = (long *)auStack_270;
        func_0x00729974();
      }
      else {
        func_0x00724608();
      }
      func_0x007298c8();
      goto LAB_00727ef8;
    }
    if (iVar8 == 0x62) goto LAB_00727cb8;
    uVar7 = iVar8 == 99;
    if ((bool)uVar7) {
      plVar9 = (long *)*param_2;
      auStack_270[0] = (undefined1)param_2[3];
      func_0x0072a2e8();
      param_2 = plVar9;
      goto LAB_00727efc;
    }
    if (iVar8 == 0x78) goto LAB_00727c18;
    if (iVar8 == 0x6f) {
      iVar8 = 0;
      uVar13 = param_2[3];
      uVar16 = uVar13;
      do {
        iVar8 = iVar8 + 1;
        uVar7 = uVar16 == 7;
        bVar1 = 7 < uVar16;
        uVar16 = uVar16 >> 3;
      } while (bVar1);
      if ((*(char *)(param_2[2] + 9) < '\0') &&
         (bVar1 = iVar8 < *(int *)(param_2[2] + 4), uVar7 = bVar1 || uVar13 == 0,
         !bVar1 && uVar13 != 0)) {
        uVar20 = *(uint *)((long)param_2 + 0x24);
        *(uint *)((long)param_2 + 0x24) = uVar20 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar20 + 0x20) = 0x30;
      }
      iVar8 = *(int *)((long)param_2 + 0x24);
      plVar9 = alStack_58;
      func_0x0072978c();
      func_0x00729bac(CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]));
      func_0x007297a0();
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar8 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (plVar9 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724654();
        plVar9 = (long *)auStack_270;
        func_0x00729974();
      }
      else {
        func_0x00724654();
      }
      func_0x007298c8();
      goto LAB_00727ef8;
    }
    in_ZR = 1;
    if (iVar8 == 100) goto LAB_00727bf0;
  }
  param_2 = param_1;
  FUN_007280c8();
  func_0x00729d28();
  pcVar12 = FUN_0072803c;
  func_0x00729bc8();
code_r0x0072803c:
  func_0x0072a4c4();
  *(undefined8 **)(puVar4 + 0x70) = puVar21;
  *(code **)(puVar4 + 0x78) = pcVar12;
  lVar10 = param_2[3];
  func_0x00723c50(lVar10);
  iVar8 = *(int *)((long)param_2 + 0x24);
  puVar11 = puVar4 + 8;
  func_0x00729b1c(puVar11,lVar10,param_2 + 4,iVar8);
  func_0x0072981c(*(undefined8 *)(puVar4 + 8));
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar8 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724a20();
  func_0x00729d00();
  *param_2 = (long)puVar11;
  return;
}



/* Entry: 00727b84; end: 0072803b;  */

void FUN_00727b84(long *param_1,long *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  char *extraout_x12;
  char *pcVar13;
  long extraout_x12_00;
  char *extraout_x13;
  long extraout_x14;
  long *extraout_x15;
  ulong uVar14;
  int iVar15;
  undefined8 unaff_x20;
  long lVar16;
  long *plVar17;
  uint uVar18;
  ulong unaff_x25;
  undefined8 *unaff_x29;
  undefined8 *puVar19;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_270 [7];
  undefined1 uStack_269;
  undefined8 uStack_268;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  long alStack_38 [5];
  undefined8 uStack_10;
  
  func_0x0072a4fc();
  puVar19 = &stack0x00000050;
  puVar3 = auStack_270;
  in_stack_00000050 = unaff_x29;
  func_0x00729854();
  iVar7 = (int)param_1;
  if (iVar7 == 0) {
LAB_00727bf0:
    func_0x0072975c(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00729fe8();
      puVar3 = (undefined1 *)register0x00000008;
      puVar19 = in_stack_00000050;
      goto code_r0x0072803c;
    }
LAB_00728010:
    ___stack_chk_fail();
  }
  else {
    uStack_10 = extraout_x8;
    if (iVar7 == 0x42) {
LAB_00727cb8:
      func_0x00729f30();
      if (extraout_w8_00 < 0) {
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
        func_0x00729a0c(param_2 + 4);
        func_0x0072a394();
      }
      uVar14 = param_2[3];
      do {
        uVar6 = uVar14 == 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 >> 1;
      } while (bVar1);
      iVar7 = *(int *)((long)param_2 + 0x24);
      plVar8 = alStack_38;
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar7 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (plVar8 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724630();
        plVar8 = (long *)auStack_250;
        func_0x00729974();
      }
      else {
        func_0x00724630();
      }
      func_0x007298c8();
LAB_00727ef8:
      *param_2 = (long)plVar8;
      param_2 = plVar8;
LAB_00727efc:
      func_0x0072975c(uStack_10);
      param_1 = param_2;
      if ((bool)uVar6) {
        return;
      }
      goto LAB_00728010;
    }
    uVar6 = iVar7 == 0x4c;
    if ((bool)uVar6) {
      func_0x0072a20c();
      func_0x00729b5c();
      if (extraout_x8_00 == 0) {
        FUN_0072803c();
      }
      else {
        iVar7 = (int)param_2[1];
        FUN_00723014();
        uStack_269 = (undefined1)iVar7;
        if (iVar7 == 0) {
          FUN_0072803c();
        }
        else {
          lVar16 = param_2[3];
          func_0x00723c50(lVar16);
          func_0x00729cb8();
          func_0x00729fc4(uStack_268);
          uVar14 = extraout_x11;
          pcVar2 = extraout_x13;
          plVar8 = extraout_x15;
          for (lVar9 = extraout_x14; pcVar13 = extraout_x12, plVar17 = alStack_38, lVar9 != 0;
              lVar9 = lVar9 + -1) {
            iVar15 = (int)*pcVar2;
            iVar7 = (int)uVar14;
            uVar18 = iVar7 - iVar15;
            uVar6 = uVar18 == 0;
            uVar14 = (ulong)uVar18;
            pcVar13 = pcVar2;
            plVar17 = plVar8;
            if (((bool)uVar6 || iVar7 < iVar15) ||
               (uVar18 = iVar15 - 0x7fU & 0xff, uVar6 = uVar18 == 0x82, uVar18 < 0x82)) break;
            plVar8 = (long *)(ulong)((int)plVar8 + 1);
            pcVar2 = pcVar2 + 1;
          }
          if (extraout_w9 < 0) {
            if (pcVar13 == (char *)(extraout_x8_01 + extraout_x10)) goto LAB_00727f48;
          }
          else {
            func_0x0072a020();
            if ((bool)uVar6) {
LAB_00727f48:
              func_0x00729dcc();
              plVar17 = (long *)(ulong)(uint)(extraout_w8_01 + (int)plVar17);
            }
          }
          plVar8 = alStack_38;
          func_0x00723c7c(plVar8,lVar16);
          func_0x00729a54();
          uStack_238 = 500;
          uStack_240 = 0;
          func_0x00729e48(*(undefined4 *)((long)param_2 + 0x24));
          func_0x00729b44();
          func_0x00729a38();
          uVar12 = unaff_x20;
          while( true ) {
            iVar7 = (int)uVar12;
            cVar4 = SBORROW4(iVar7,1);
            cVar5 = iVar7 + -1 < 0;
            uVar6 = iVar7 == 1;
            if (iVar7 < 2) break;
            func_0x00729998();
            uVar12 = extraout_x8_02;
            if (((cVar5 == cVar4) && (func_0x00729da0(), uVar12 = unaff_x20, !(bool)uVar6)) &&
               (extraout_w8_02 == 0)) {
              func_0x00729a1c();
              lVar9 = extraout_x12_00;
              if (cVar5 == cVar4) {
                lVar9 = extraout_x9;
              }
              uVar18 = (uint)unaff_x25;
              if (extraout_x8_03 != extraout_x10_00 + lVar9) {
                uVar18 = 0;
              }
              unaff_x25 = (ulong)uVar18;
              plVar8 = (long *)&uStack_269;
              FUN_0072a254();
            }
          }
          *(undefined1 *)plVar17 = (undefined1)alStack_38[0];
          if (*(int *)((long)param_2 + 0x24) != 0) {
            *(undefined1 *)((long)plVar17 + -1) = 0x2d;
          }
          func_0x00729870();
          FUN_007248ec();
          func_0x00729d44();
          func_0x00729adc();
          func_0x00729acc((long)alStack_38 - ((ulong)alStack_38 >> (unaff_x25 & 0x3f)));
          func_0x00729d94();
          param_2 = plVar8;
        }
      }
      func_0x00729d28();
      goto LAB_00727efc;
    }
    if (iVar7 == 0x58) {
LAB_00727c18:
      func_0x00729f30();
      if (extraout_w8 < 0) {
        *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + 1;
        func_0x00729a0c(param_2 + 4);
        func_0x0072a394();
      }
      uVar14 = param_2[3];
      do {
        bVar1 = 0xf < uVar14;
        uVar14 = uVar14 >> 4;
      } while (bVar1);
      iVar7 = *(int *)((long)param_2 + 0x24);
      plVar8 = alStack_38;
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar7 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      cVar5 = *(char *)(param_2[2] + 8);
      func_0x007298d4();
      uVar6 = cVar5 == 'x';
      if (plVar8 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724608();
        plVar8 = (long *)auStack_250;
        func_0x00729974();
      }
      else {
        func_0x00724608();
      }
      func_0x007298c8();
      goto LAB_00727ef8;
    }
    if (iVar7 == 0x62) goto LAB_00727cb8;
    uVar6 = iVar7 == 99;
    if ((bool)uVar6) {
      plVar8 = (long *)*param_2;
      auStack_250[0] = (undefined1)param_2[3];
      func_0x0072a2e8();
      param_2 = plVar8;
      goto LAB_00727efc;
    }
    if (iVar7 == 0x78) goto LAB_00727c18;
    if (iVar7 == 0x6f) {
      iVar7 = 0;
      uVar11 = param_2[3];
      uVar14 = uVar11;
      do {
        iVar7 = iVar7 + 1;
        uVar6 = uVar14 == 7;
        bVar1 = 7 < uVar14;
        uVar14 = uVar14 >> 3;
      } while (bVar1);
      if ((*(char *)(param_2[2] + 9) < '\0') &&
         (bVar1 = iVar7 < *(int *)(param_2[2] + 4), uVar6 = bVar1 || uVar11 == 0,
         !bVar1 && uVar11 != 0)) {
        uVar18 = *(uint *)((long)param_2 + 0x24);
        *(uint *)((long)param_2 + 0x24) = uVar18 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar18 + 0x20) = 0x30;
      }
      iVar7 = *(int *)((long)param_2 + 0x24);
      plVar8 = alStack_38;
      func_0x0072978c();
      func_0x00729bac(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x007297a0();
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar7 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (plVar8 == (long *)0x0) {
        func_0x00729de0();
        func_0x00724654();
        plVar8 = (long *)auStack_250;
        func_0x00729974();
      }
      else {
        func_0x00724654();
      }
      func_0x007298c8();
      goto LAB_00727ef8;
    }
    in_ZR = 1;
    if (iVar7 == 100) goto LAB_00727bf0;
  }
  param_2 = param_1;
  FUN_007280c8();
  func_0x00729d28();
  unaff_x30 = FUN_0072803c;
  func_0x00729bc8();
code_r0x0072803c:
  func_0x0072a4c4();
  *(undefined8 **)(puVar3 + 0x70) = puVar19;
  *(code **)(puVar3 + 0x78) = unaff_x30;
  lVar9 = param_2[3];
  func_0x00723c50(lVar9);
  iVar7 = *(int *)((long)param_2 + 0x24);
  puVar10 = puVar3 + 8;
  func_0x00729b1c(puVar10,lVar9,param_2 + 4,iVar7);
  func_0x0072981c(*(undefined8 *)(puVar3 + 8));
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar7 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724a20();
  func_0x00729d00();
  *param_2 = (long)puVar10;
  return;
}



/* Entry: 0072803c; end: 007280c7;  */

void FUN_0072803c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  
  func_0x0072a4c4();
  lVar2 = param_1[3];
  func_0x00723c50(lVar2);
  iVar1 = *(int *)((long)param_1 + 0x24);
  puVar3 = &stack0x00000008;
  func_0x00729b1c(puVar3,lVar2,param_1 + 4,iVar1);
  func_0x0072981c(in_stack_00000008);
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar1 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724a20();
  func_0x00729d00();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 007280c8; end: 007280eb;  */

void FUN_007280c8(long *param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  long *plVar13;
  undefined1 *puVar14;
  code *pcVar15;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar16;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  int iVar17;
  char *extraout_x11;
  ulong uVar18;
  char *pcVar19;
  long extraout_x12;
  long lVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined8 unaff_x20;
  long lVar23;
  uint *puVar24;
  long *unaff_x23;
  uint uVar25;
  ulong unaff_x25;
  long unaff_x26;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *in_stack_00000030;
  code *in_stack_00000038;
  undefined1 auStack_290 [7];
  undefined1 uStack_289;
  char *pcStack_288;
  long lStack_280;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  long alStack_58 [5];
  undefined8 uStack_30;
  
  func_0x00729b24();
  func_0x00729ccc();
  func_0x007297dc();
  func_0x007299e4();
  func_0x00729e00();
  pcVar15 = FUN_007280ec;
  func_0x0072a4fc();
  puVar27 = &stack0x00000030;
  puVar7 = auStack_290;
  in_stack_00000030 = (undefined8 *)&stack0xfffffffffffffff0;
  in_stack_00000038 = pcVar15;
  func_0x00729854();
  iVar12 = (int)param_1;
  if (iVar12 == 0) {
LAB_00728158:
    func_0x0072975c(extraout_x8);
    puVar6 = in_stack_00000030;
    if ((bool)in_ZR) {
      pcVar15 = in_stack_00000038;
      func_0x00729fe8();
      puVar7 = &stack0xffffffffffffffe0;
      puVar27 = puVar6;
      goto code_r0x00728638;
    }
LAB_0072860c:
    ___stack_chk_fail();
  }
  else {
    iVar17 = (int)unaff_x26;
    uStack_30 = extraout_x8;
    if (iVar12 == 0x42) {
LAB_0072822c:
      func_0x00729f30();
      if (extraout_w8_00 < 0) {
        *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + 1;
        func_0x00729a0c(param_2 + 6);
        func_0x0072a380();
      }
      lVar23 = 0;
      uVar26 = param_2[5];
      uVar18 = param_2[4];
      do {
        uVar3 = uVar26 << 0x3f;
        bVar8 = uVar18 < 2;
        uVar5 = uVar26 + !bVar8;
        uVar11 = uVar5 == 0;
        uVar26 = uVar26 >> 1;
        lVar23 = lVar23 + 1;
        uVar18 = uVar18 >> 1 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar8));
      func_0x00729e54();
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar17 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (param_1 == (long *)0x0) {
        func_0x00729e34();
        func_0x007246c0();
        param_1 = (long *)auStack_270;
        func_0x00729bb8(param_1,unaff_x26 + lVar23);
      }
      else {
        func_0x007246c0();
      }
      func_0x007298c8();
LAB_007284f0:
      *param_2 = (long)param_1;
      param_2 = param_1;
LAB_007284f4:
      func_0x0072975c(uStack_30);
      param_1 = param_2;
      if ((bool)uVar11) {
        return;
      }
      goto LAB_0072860c;
    }
    cVar9 = SBORROW4(iVar12,0x4c);
    cVar10 = iVar12 + -0x4c < 0;
    uVar11 = iVar12 == 0x4c;
    if ((bool)uVar11) {
      func_0x0072a20c();
      func_0x00729b5c();
      if (extraout_x8_00 == 0) {
        FUN_00728638();
      }
      else {
        iVar12 = (int)param_2[1];
        FUN_00723014();
        uStack_289 = (undefined1)iVar12;
        if (iVar12 == 0) {
          FUN_00728638();
        }
        else {
          puVar14 = (undefined1 *)param_2[4];
          lVar23 = param_2[5];
          puVar21 = puVar14;
          FUN_00723cd4(puVar14,lVar23);
          func_0x00729cb8();
          pcVar1 = pcStack_288;
          if (cVar10 == cVar9) {
            pcVar1 = extraout_x11;
          }
          iVar12 = (int)extraout_x9;
          bVar8 = iVar12 == 0;
          lVar20 = lStack_280;
          if (-1 < iVar12) {
            lVar20 = extraout_x9;
          }
          pcVar2 = pcVar1 + lVar20;
          for (; pcVar19 = pcVar2, lVar20 != 0; lVar20 = lVar20 + -1) {
            iVar22 = (int)*pcVar1;
            iVar17 = (int)puVar21;
            uVar25 = iVar17 - iVar22;
            bVar8 = uVar25 == 0;
            puVar21 = (undefined1 *)(ulong)uVar25;
            pcVar19 = pcVar1;
            if ((bVar8 || iVar17 < iVar22) ||
               (uVar25 = iVar22 - 0x7fU & 0xff, bVar8 = uVar25 == 0x82, uVar25 < 0x82)) break;
            pcVar1 = pcVar1 + 1;
          }
          if (iVar12 < 0) {
            if (pcVar19 == pcStack_288 + lStack_280) goto LAB_00728540;
          }
          else {
            func_0x0072a020();
            if (bVar8) {
LAB_00728540:
              func_0x00729dcc();
            }
          }
          plVar13 = alStack_58;
          FUN_00723d5c(plVar13,puVar14,lVar23);
          func_0x00729a54();
          uStack_258 = 500;
          uStack_260 = 0;
          func_0x00729e48(*(undefined4 *)((long)param_2 + 0x34));
          func_0x00729b44();
          func_0x00729a38();
          uVar16 = unaff_x20;
          while( true ) {
            iVar12 = (int)uVar16;
            cVar9 = SBORROW4(iVar12,1);
            cVar10 = iVar12 + -1 < 0;
            uVar11 = iVar12 == 1;
            if (iVar12 < 2) break;
            func_0x00729998();
            uVar16 = extraout_x8_01;
            if (((cVar10 == cVar9) && (func_0x00729da0(), uVar16 = unaff_x20, !(bool)uVar11)) &&
               (extraout_w8_01 == 0)) {
              func_0x00729a1c();
              lVar23 = extraout_x12;
              if (cVar10 == cVar9) {
                lVar23 = extraout_x9_00;
              }
              uVar25 = (uint)unaff_x25;
              if (extraout_x8_02 != extraout_x10 + lVar23) {
                uVar25 = 0;
              }
              unaff_x25 = (ulong)uVar25;
              plVar13 = (long *)&uStack_289;
              FUN_0072a254();
            }
          }
          *puVar14 = (undefined1)alStack_58[0];
          if (*(int *)((long)param_2 + 0x34) != 0) {
            puVar14[-1] = 0x2d;
          }
          func_0x00729870();
          func_0x007248ec();
          func_0x00729d44();
          func_0x00729adc();
          func_0x00729acc((long)alStack_58 - ((ulong)alStack_58 >> (unaff_x25 & 0x3f)));
          func_0x00729d94();
          param_2 = plVar13;
        }
      }
      func_0x00729d28();
      goto LAB_007284f4;
    }
    if (iVar12 == 0x58) {
LAB_00728180:
      func_0x00729f30();
      if (extraout_w8 < 0) {
        *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + 1;
        func_0x00729a0c(param_2 + 6);
        func_0x0072a380();
      }
      lVar23 = 0;
      uVar26 = param_2[5];
      uVar18 = param_2[4];
      do {
        uVar3 = uVar26 << 0x3c;
        bVar8 = uVar18 < 0x10;
        uVar5 = uVar26 + !bVar8;
        uVar26 = uVar26 >> 4;
        lVar23 = lVar23 + 1;
        uVar18 = uVar18 >> 4 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar8));
      func_0x00729e54();
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar17 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      bVar4 = *(byte *)(param_2[2] + 8);
      func_0x007298d4();
      uVar11 = bVar4 == 0x78;
      if (param_1 == (long *)0x0) {
        func_0x00729e34();
        func_0x00724678();
        param_1 = (long *)auStack_270;
        func_0x00729bb8(param_1,(ulong)bVar4 + lVar23);
      }
      else {
        func_0x00724678();
      }
      func_0x007298c8();
      goto LAB_007284f0;
    }
    if (iVar12 == 0x62) goto LAB_0072822c;
    uVar11 = iVar12 == 99;
    if ((bool)uVar11) {
      plVar13 = (long *)*param_2;
      auStack_270[0] = (undefined1)param_2[4];
      func_0x0072a2e8();
      param_2 = plVar13;
      goto LAB_007284f4;
    }
    if (iVar12 == 0x78) goto LAB_00728180;
    if (iVar12 == 0x6f) {
      lVar23 = 0;
      uVar26 = param_2[4];
      uVar18 = param_2[5];
      do {
        uVar3 = uVar18 << 0x3d;
        bVar8 = uVar26 < 8;
        uVar5 = uVar18 + !bVar8;
        uVar18 = uVar18 >> 3;
        lVar23 = lVar23 + 1;
        uVar26 = uVar26 >> 3 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar8));
      puVar24 = (uint *)param_2[2];
      uVar26 = (ulong)*(char *)((long)puVar24 + 9);
      if ((*(char *)((long)puVar24 + 9) < '\0') &&
         ((int)puVar24[1] <= (int)lVar23 && (param_2[4] != 0 || param_2[5] != 0))) {
        uVar25 = *(uint *)((long)param_2 + 0x34);
        *(uint *)((long)param_2 + 0x34) = uVar25 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar25 + 0x30) = 0x30;
        uVar26 = (ulong)*(byte *)((long)puVar24 + 9);
      }
      func_0x00729e54();
      FUN_00724534();
      uVar3 = (ulong)*puVar24 - CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]);
      uVar11 = uVar3 == 0;
      uVar18 = 0;
      if (CONCAT71(alStack_58[0]._1_7_,(undefined1)alStack_58[0]) <= (ulong)*puVar24) {
        uVar18 = uVar3;
      }
      cVar10 = (&UNK_0083cda5)[uVar26 & 0xf];
      func_0x00729bc0();
      func_0x00729ac4();
      param_1 = unaff_x23;
      if (iVar17 != 0) {
        func_0x007297cc();
        param_1 = unaff_x23;
      }
      func_0x00729f14();
      func_0x00729830();
      plVar13 = param_1;
      func_0x0072491c(param_1,lVar23);
      if (plVar13 == (long *)0x0) {
        func_0x00729e34();
        func_0x007246f0();
        param_1 = (long *)(unaff_x26 + lVar23);
        func_0x00729bb8(auStack_270);
      }
      else {
        func_0x007246f0();
      }
      FUN_00724f50(param_1,uVar18 - (uVar18 >> ((long)cVar10 & 0x3fU)),(long)puVar24 + 10);
      goto LAB_007284f0;
    }
    in_ZR = 1;
    if (iVar12 == 100) goto LAB_00728158;
  }
  param_2 = param_1;
  FUN_007286c4();
  func_0x00729d28();
  pcVar15 = FUN_00728638;
  func_0x00729bc8();
code_r0x00728638:
  func_0x0072a4c4();
  *(undefined8 **)(puVar7 + 0x70) = puVar27;
  *(code **)(puVar7 + 0x78) = pcVar15;
  lVar23 = param_2[4];
  FUN_00723cd4(lVar23,param_2[5]);
  iVar12 = *(int *)((long)param_2 + 0x34);
  puVar14 = puVar7 + 8;
  func_0x00729b1c(puVar14,lVar23,param_2 + 6,iVar12);
  func_0x0072981c(*(undefined8 *)(puVar7 + 8));
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar12 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724b10();
  func_0x00729d00();
  *param_2 = (long)puVar14;
  return;
}



/* Entry: 007280ec; end: 00728637;  */

void FUN_007280ec(long *param_1,long *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  long *plVar12;
  undefined1 *puVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  int iVar15;
  char *extraout_x11;
  ulong uVar16;
  char *pcVar17;
  long extraout_x12;
  long lVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined8 unaff_x20;
  long lVar21;
  uint *puVar22;
  long *unaff_x23;
  uint uVar23;
  ulong unaff_x25;
  long unaff_x26;
  ulong uVar24;
  undefined8 *unaff_x29;
  undefined8 *puVar25;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_270 [7];
  undefined1 uStack_269;
  char *pcStack_268;
  long lStack_260;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  long alStack_38 [5];
  undefined8 uStack_10;
  
  func_0x0072a4fc();
  puVar25 = &stack0x00000050;
  puVar6 = auStack_270;
  in_stack_00000050 = unaff_x29;
  func_0x00729854();
  iVar11 = (int)param_1;
  if (iVar11 == 0) {
LAB_00728158:
    func_0x0072975c(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00729fe8();
      puVar6 = (undefined1 *)register0x00000008;
      puVar25 = in_stack_00000050;
      goto code_r0x00728638;
    }
LAB_0072860c:
    ___stack_chk_fail();
  }
  else {
    iVar15 = (int)unaff_x26;
    uStack_10 = extraout_x8;
    if (iVar11 == 0x42) {
LAB_0072822c:
      func_0x00729f30();
      if (extraout_w8_00 < 0) {
        *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + 1;
        func_0x00729a0c(param_2 + 6);
        func_0x0072a380();
      }
      lVar21 = 0;
      uVar24 = param_2[5];
      uVar16 = param_2[4];
      do {
        uVar3 = uVar24 << 0x3f;
        bVar7 = uVar16 < 2;
        uVar5 = uVar24 + !bVar7;
        uVar10 = uVar5 == 0;
        uVar24 = uVar24 >> 1;
        lVar21 = lVar21 + 1;
        uVar16 = uVar16 >> 1 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar7));
      func_0x00729e54();
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar15 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      func_0x007298d4();
      if (param_1 == (long *)0x0) {
        func_0x00729e34();
        func_0x007246c0();
        param_1 = (long *)auStack_250;
        func_0x00729bb8(param_1,unaff_x26 + lVar21);
      }
      else {
        func_0x007246c0();
      }
      func_0x007298c8();
LAB_007284f0:
      *param_2 = (long)param_1;
      param_2 = param_1;
LAB_007284f4:
      func_0x0072975c(uStack_10);
      param_1 = param_2;
      if ((bool)uVar10) {
        return;
      }
      goto LAB_0072860c;
    }
    cVar8 = SBORROW4(iVar11,0x4c);
    cVar9 = iVar11 + -0x4c < 0;
    uVar10 = iVar11 == 0x4c;
    if ((bool)uVar10) {
      func_0x0072a20c();
      func_0x00729b5c();
      if (extraout_x8_00 == 0) {
        FUN_00728638();
      }
      else {
        iVar11 = (int)param_2[1];
        FUN_00723014();
        uStack_269 = (undefined1)iVar11;
        if (iVar11 == 0) {
          FUN_00728638();
        }
        else {
          puVar13 = (undefined1 *)param_2[4];
          lVar21 = param_2[5];
          puVar19 = puVar13;
          FUN_00723cd4(puVar13,lVar21);
          func_0x00729cb8();
          pcVar1 = pcStack_268;
          if (cVar9 == cVar8) {
            pcVar1 = extraout_x11;
          }
          iVar11 = (int)extraout_x9;
          bVar7 = iVar11 == 0;
          lVar18 = lStack_260;
          if (-1 < iVar11) {
            lVar18 = extraout_x9;
          }
          pcVar2 = pcVar1 + lVar18;
          for (; pcVar17 = pcVar2, lVar18 != 0; lVar18 = lVar18 + -1) {
            iVar20 = (int)*pcVar1;
            iVar15 = (int)puVar19;
            uVar23 = iVar15 - iVar20;
            bVar7 = uVar23 == 0;
            puVar19 = (undefined1 *)(ulong)uVar23;
            pcVar17 = pcVar1;
            if ((bVar7 || iVar15 < iVar20) ||
               (uVar23 = iVar20 - 0x7fU & 0xff, bVar7 = uVar23 == 0x82, uVar23 < 0x82)) break;
            pcVar1 = pcVar1 + 1;
          }
          if (iVar11 < 0) {
            if (pcVar17 == pcStack_268 + lStack_260) goto LAB_00728540;
          }
          else {
            func_0x0072a020();
            if (bVar7) {
LAB_00728540:
              func_0x00729dcc();
            }
          }
          plVar12 = alStack_38;
          FUN_00723d5c(plVar12,puVar13,lVar21);
          func_0x00729a54();
          uStack_238 = 500;
          uStack_240 = 0;
          func_0x00729e48(*(undefined4 *)((long)param_2 + 0x34));
          func_0x00729b44();
          func_0x00729a38();
          uVar14 = unaff_x20;
          while( true ) {
            iVar11 = (int)uVar14;
            cVar8 = SBORROW4(iVar11,1);
            cVar9 = iVar11 + -1 < 0;
            uVar10 = iVar11 == 1;
            if (iVar11 < 2) break;
            func_0x00729998();
            uVar14 = extraout_x8_01;
            if (((cVar9 == cVar8) && (func_0x00729da0(), uVar14 = unaff_x20, !(bool)uVar10)) &&
               (extraout_w8_01 == 0)) {
              func_0x00729a1c();
              lVar21 = extraout_x12;
              if (cVar9 == cVar8) {
                lVar21 = extraout_x9_00;
              }
              uVar23 = (uint)unaff_x25;
              if (extraout_x8_02 != extraout_x10 + lVar21) {
                uVar23 = 0;
              }
              unaff_x25 = (ulong)uVar23;
              plVar12 = (long *)&uStack_269;
              FUN_0072a254();
            }
          }
          *puVar13 = (undefined1)alStack_38[0];
          if (*(int *)((long)param_2 + 0x34) != 0) {
            puVar13[-1] = 0x2d;
          }
          func_0x00729870();
          func_0x007248ec();
          func_0x00729d44();
          func_0x00729adc();
          func_0x00729acc((long)alStack_38 - ((ulong)alStack_38 >> (unaff_x25 & 0x3f)));
          func_0x00729d94();
          param_2 = plVar12;
        }
      }
      func_0x00729d28();
      goto LAB_007284f4;
    }
    if (iVar11 == 0x58) {
LAB_00728180:
      func_0x00729f30();
      if (extraout_w8 < 0) {
        *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + 1;
        func_0x00729a0c(param_2 + 6);
        func_0x0072a380();
      }
      lVar21 = 0;
      uVar24 = param_2[5];
      uVar16 = param_2[4];
      do {
        uVar3 = uVar24 << 0x3c;
        bVar7 = uVar16 < 0x10;
        uVar5 = uVar24 + !bVar7;
        uVar24 = uVar24 >> 4;
        lVar21 = lVar21 + 1;
        uVar16 = uVar16 >> 4 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar7));
      func_0x00729e54();
      func_0x0072978c();
      func_0x00729730(CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]));
      func_0x00729bc0();
      func_0x0072980c();
      if (iVar15 != 0) {
        func_0x007297cc();
      }
      func_0x00729f14();
      func_0x00729830();
      bVar4 = *(byte *)(param_2[2] + 8);
      func_0x007298d4();
      uVar10 = bVar4 == 0x78;
      if (param_1 == (long *)0x0) {
        func_0x00729e34();
        func_0x00724678();
        param_1 = (long *)auStack_250;
        func_0x00729bb8(param_1,(ulong)bVar4 + lVar21);
      }
      else {
        func_0x00724678();
      }
      func_0x007298c8();
      goto LAB_007284f0;
    }
    if (iVar11 == 0x62) goto LAB_0072822c;
    uVar10 = iVar11 == 99;
    if ((bool)uVar10) {
      plVar12 = (long *)*param_2;
      auStack_250[0] = (undefined1)param_2[4];
      func_0x0072a2e8();
      param_2 = plVar12;
      goto LAB_007284f4;
    }
    if (iVar11 == 0x78) goto LAB_00728180;
    if (iVar11 == 0x6f) {
      lVar21 = 0;
      uVar24 = param_2[4];
      uVar16 = param_2[5];
      do {
        uVar3 = uVar16 << 0x3d;
        bVar7 = uVar24 < 8;
        uVar5 = uVar16 + !bVar7;
        uVar16 = uVar16 >> 3;
        lVar21 = lVar21 + 1;
        uVar24 = uVar24 >> 3 | uVar3;
      } while (!CARRY8(~uVar5,(ulong)bVar7));
      puVar22 = (uint *)param_2[2];
      uVar24 = (ulong)*(char *)((long)puVar22 + 9);
      if ((*(char *)((long)puVar22 + 9) < '\0') &&
         ((int)puVar22[1] <= (int)lVar21 && (param_2[4] != 0 || param_2[5] != 0))) {
        uVar23 = *(uint *)((long)param_2 + 0x34);
        *(uint *)((long)param_2 + 0x34) = uVar23 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar23 + 0x30) = 0x30;
        uVar24 = (ulong)*(byte *)((long)puVar22 + 9);
      }
      func_0x00729e54();
      FUN_00724534();
      uVar3 = (ulong)*puVar22 - CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]);
      uVar10 = uVar3 == 0;
      uVar16 = 0;
      if (CONCAT71(alStack_38[0]._1_7_,(undefined1)alStack_38[0]) <= (ulong)*puVar22) {
        uVar16 = uVar3;
      }
      cVar9 = (&UNK_0083cda5)[uVar24 & 0xf];
      func_0x00729bc0();
      func_0x00729ac4();
      param_1 = unaff_x23;
      if (iVar15 != 0) {
        func_0x007297cc();
        param_1 = unaff_x23;
      }
      func_0x00729f14();
      func_0x00729830();
      plVar12 = param_1;
      func_0x0072491c(param_1,lVar21);
      if (plVar12 == (long *)0x0) {
        func_0x00729e34();
        func_0x007246f0();
        param_1 = (long *)(unaff_x26 + lVar21);
        func_0x00729bb8(auStack_250);
      }
      else {
        func_0x007246f0();
      }
      FUN_00724f50(param_1,uVar16 - (uVar16 >> ((long)cVar9 & 0x3fU)),(long)puVar22 + 10);
      goto LAB_007284f0;
    }
    in_ZR = 1;
    if (iVar11 == 100) goto LAB_00728158;
  }
  param_2 = param_1;
  FUN_007286c4();
  func_0x00729d28();
  unaff_x30 = FUN_00728638;
  func_0x00729bc8();
code_r0x00728638:
  func_0x0072a4c4();
  *(undefined8 **)(puVar6 + 0x70) = puVar25;
  *(code **)(puVar6 + 0x78) = unaff_x30;
  lVar21 = param_2[4];
  FUN_00723cd4(lVar21,param_2[5]);
  iVar11 = *(int *)((long)param_2 + 0x34);
  puVar13 = puVar6 + 8;
  func_0x00729b1c(puVar13,lVar21,param_2 + 6,iVar11);
  func_0x0072981c(*(undefined8 *)(puVar6 + 8));
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar11 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724b10();
  func_0x00729d00();
  *param_2 = (long)puVar13;
  return;
}



/* Entry: 00728638; end: 007286c3;  */

void FUN_00728638(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  
  func_0x0072a4c4();
  lVar2 = param_1[4];
  FUN_00723cd4(lVar2,param_1[5]);
  iVar1 = *(int *)((long)param_1 + 0x34);
  puVar3 = &stack0x00000008;
  func_0x00729b1c(puVar3,lVar2,param_1 + 6,iVar1);
  func_0x0072981c(in_stack_00000008);
  func_0x007297b8();
  func_0x007299b8();
  func_0x00729cf4();
  if (iVar1 != 0) {
    func_0x00729aa8();
  }
  func_0x00729980();
  FUN_00724b10();
  func_0x00729d00();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 007286c4; end: 007286e7;  */

void FUN_007286c4(long *param_1,long param_2,ulong param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  func_0x00729b24();
  func_0x00729ccc();
  func_0x007297dc();
  func_0x007299e4();
  func_0x00729e00();
  lVar3 = *param_1;
  uVar2 = param_4[1];
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = (ulong)uVar2;
  }
  if (-1 < (int)uVar2) {
    param_3 = uVar1;
  }
  uVar1 = param_3;
  if (*param_4 != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    }
  }
  func_0x0072a460(*(undefined1 *)((long)param_4 + 9),lVar3);
  FUN_007248ec();
  func_0x00729ac4();
  func_0x00724fe4(param_2,param_2 + param_3,lVar3);
  func_0x00724f50();
  *param_1 = param_2;
  return;
}



/* Entry: 007286e8; end: 0072881b;  */

void FUN_007286e8(long *param_1,long param_2,ulong param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = param_4[1];
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = (ulong)uVar2;
  }
  if (-1 < (int)uVar2) {
    param_3 = uVar1;
  }
  uVar1 = param_3;
  if (*param_4 != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    }
  }
  func_0x0072a460(*(undefined1 *)((long)param_4 + 9),lVar3);
  FUN_007248ec();
  func_0x00729ac4();
  func_0x00724fe4(param_2,param_2 + param_3,lVar3);
  func_0x00724f50();
  *param_1 = param_2;
  return;
}



/* Entry: 0072881c; end: 00728b0f;  */

void FUN_0072881c(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined4 extraout_w8;
  ulong uVar11;
  int extraout_w9;
  uint uVar12;
  ulong extraout_x10;
  int extraout_w11;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uStack000000000000002f;
  
  uStack000000000000002f = param_5;
  func_0x0072a4a8();
  uVar5 = (uint)(param_4 >> 0x20);
  uVar14 = uVar5 >> 8 & 0xff;
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar1 = uVar3;
  if (uVar14 != 0) {
    uVar1 = uVar3 + 1;
  }
  uVar11 = (ulong)uVar1;
  uVar1 = uVar4 + uVar3;
  uVar12 = uVar5 & 0xff;
  uVar10 = (uint)param_4;
  if ((param_4 & 0xff00000000) == 0) {
    if (-4 < (int)uVar1) {
      uVar12 = uVar10;
      if ((int)uVar10 < 1) {
        uVar12 = 0x10;
      }
      cVar8 = SBORROW4(uVar1,uVar12);
      iVar2 = uVar1 - uVar12;
      bVar9 = uVar1 == uVar12;
      if ((int)uVar1 <= (int)uVar12) goto LAB_00728924;
    }
  }
  else {
    cVar8 = SBORROW4(uVar12,1);
    iVar2 = uVar12 - 1;
    if (uVar12 != 1) {
      bVar9 = false;
LAB_00728924:
      cVar7 = iVar2 < 0;
      if ((int)uVar4 < 0) {
        if ((int)uVar1 < 1) {
          uVar4 = uVar10;
          if ((int)(uVar10 + uVar1) < 0 == SCARRY4(uVar10,uVar1)) {
            uVar4 = -uVar1;
          }
          if (0x7fffffff < uVar10 || uVar3 != 0) {
            uVar4 = -uVar1;
          }
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          func_0x0072a2b4();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729a84();
          if ((uVar3 != 0 || (param_4 & 0x10000000000000) != 0) || uVar4 != 0) {
            func_0x00729a84();
            func_0x0072a110();
            func_0x0072a194();
            func_0x00729e1c();
            FUN_00728be4();
          }
        }
        else {
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          FUN_00724f50();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729c68();
          FUN_00728b78();
          if (0 < (int)(uVar10 - uVar3 & (int)(uVar5 << 0xb) >> 0x1f)) {
            func_0x0072a110();
            FUN_00725120();
          }
        }
      }
      else {
        func_0x0072a060(uVar4 + uVar11);
        bVar9 = bVar9 || cVar7 != cVar8;
        func_0x0072a050();
        iVar2 = extraout_w9;
        if (!bVar9) {
          iVar2 = extraout_w11;
        }
        iVar6 = extraout_w9;
        if ((param_4 >> 0x20 & 0x100000) != 0) {
          iVar6 = iVar2;
        }
        func_0x007297b8();
        func_0x00729a94();
        FUN_00724f50();
        if (uVar14 != 0) {
          func_0x00729770();
        }
        func_0x00729c68();
        FUN_00728be4();
        func_0x0072a110();
        FUN_00725120();
        if (((uVar5 >> 0x14 & 1) != 0) && (func_0x00729e08(), 0 < iVar6)) {
          func_0x0072a110();
          func_0x0072a304();
        }
      }
      goto LAB_00728a74;
    }
  }
  if ((param_4 >> 0x20 & 0x100000) != 0) {
    uVar11 = (uVar10 - uVar3 & ((int)(uVar10 - uVar3) >> 0x1f ^ 0xffffffffU)) + uVar11;
  }
  func_0x0072a090(uVar11);
  bVar9 = (extraout_x10 & 0xff) == 0;
  cVar8 = '\0';
  cVar7 = '\0';
  func_0x00729b7c();
  uVar13 = 0x65;
  if (!bVar9) {
    uVar13 = extraout_w8;
  }
  func_0x00729d50(uVar13);
  if (cVar8 != cVar7) {
    func_0x00729a94();
    FUN_00728b10();
    return;
  }
  func_0x00729a70(*(undefined1 *)(param_3 + 9));
  func_0x00729a94();
  func_0x0072a2c0();
  FUN_00728b10();
LAB_00728a74:
  FUN_00724f50();
  return;
}



/* Entry: 00728b10; end: 00728b77;  */

undefined8 FUN_00728b10(int *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00729efc();
  if (*param_1 != 0) {
    func_0x00729be8();
  }
  func_0x0072a010();
  FUN_00728b78();
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    func_0x0072a110();
    FUN_00725120(unaff_x20);
  }
  func_0x0072a42c(*(undefined1 *)(unaff_x19 + 0x1c));
  func_0x00729e08();
  func_0x0072a29c();
  return unaff_x20;
}



/* Entry: 00728b78; end: 00728be3;  */

long FUN_00728b78(undefined8 param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2 + param_4;
  lVar1 = param_2;
  func_0x00724fe4(param_2,lVar2,param_1);
  if (param_5 != 0) {
    func_0x00729a8c();
    func_0x00724fe4(lVar2,param_2 + param_3,lVar1);
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 00728be4; end: 00728bfb;  */

void FUN_00728be4(undefined8 param_1,long param_2,int param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00729cd8(param_2,param_2 + param_3,param_1);
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    FUN_00721aa0();
  }
  return;
}



/* Entry: 00728bfc; end: 00728c23;  */

void FUN_00728bfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_00725614(uVar1,param_2,param_1[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 00728c24; end: 00728c5b;  */

bool FUN_00728c24(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 & 0xfffffffffffff;
  *param_2 = uVar1;
  uVar2 = (uint)(param_1 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
    iVar3 = -0x432;
  }
  else {
    *param_2 = uVar1 | 0x10000000000000;
    iVar3 = uVar2 - 0x433;
  }
  *(int *)(param_2 + 1) = iVar3;
  return (uVar1 == 0 && uVar2 != 0) && (uVar1 != 0 || uVar2 != 1);
}



/* Entry: 00728c5c; end: 00728e17;  */

undefined8 FUN_00728c5c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (*(char *)((long)param_1 + 0x14) != '\x01') {
    return 0;
  }
  iVar2 = *(int *)((long)param_1 + 0xc);
  param_4 = (int)param_1[2] + param_4;
  iVar1 = param_4 + iVar2;
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 == 0 || iVar1 < 0 != SCARRY4(param_4,iVar2)) {
    if (-1 < iVar1) {
      FUN_00728e18(param_2,param_3,10);
      if ((int)param_2 == 0) {
        return 2;
      }
      uVar5 = 0x30;
      if ((int)param_2 == 1) {
        uVar5 = 0x31;
      }
      lVar3 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar3 + 1;
      *(undefined1 *)(*param_1 + (long)(int)lVar3) = uVar5;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 00728e18; end: 00728e8f;  */

undefined8 FUN_00728e18(long param_1,ulong param_2,ulong param_3)

{
  if ((param_2 <= param_1 - param_2) && (param_3 << 1 <= param_1 + param_2 * -2)) {
    return 2;
  }
  if ((param_3 <= param_2) && (param_1 - (param_2 - param_3) <= param_2 - param_3)) {
    return 1;
  }
  return 0;
}



/* Entry: 00728e90; end: 00728f4b;  */

void FUN_00728e90(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = *(long *)(param_1 + 8);
  do {
    *(int *)(lVar2 + lVar1 * 4) = (int)param_2;
    lVar1 = lVar1 + 1;
    param_2 = param_2 >> 0x20;
  } while (param_2 != 0);
  FUN_0072952c(param_1,lVar1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 00728f4c; end: 007291af;  */

undefined1 * FUN_00728f4c(undefined1 *param_1,ulong param_2)

{
  uint *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong unaff_x20;
  uint uVar18;
  ulong uVar19;
  undefined **ppuStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint auStack_f0 [34];
  undefined8 uStack_68;
  
  pppuVar5 = &ppuStack_110;
  pppuVar4 = (undefined ***)param_1;
  func_0x00729854();
  uVar7 = (uint)param_2;
  if (uVar7 == 0) {
    func_0x0072975c(extraout_x8);
    uVar8 = param_2;
    if ((bool)in_ZR) {
      **(undefined4 **)(param_1 + 8) = 1;
      puVar6 = param_1;
      FUN_0072952c(param_1,1);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return puVar6;
    }
  }
  else {
    uVar18 = 1;
    do {
      uVar9 = uVar18;
      uVar3 = uVar7 == uVar9;
      uVar18 = uVar9 << 1;
    } while ((int)uVar9 <= (int)uVar7);
    uVar8 = 5;
    pppuVar4 = (undefined ***)param_1;
    uStack_68 = extraout_x8;
    FUN_00728e90();
    puVar1 = (uint *)(param_1 + 0x20);
    for (uVar9 = (int)uVar9 >> 2; uVar9 != 0; uVar9 = (int)uVar9 >> 1) {
      uStack_100 = 0;
      ppuStack_110 = &PTR_FUN_00a1f650;
      puStack_108 = *(uint **)(param_1 + 8);
      lVar16 = *(long *)(param_1 + 0x10);
      uStack_f8 = *(undefined8 *)(param_1 + 0x18);
      if (puStack_108 == puVar1) {
        puStack_108 = auStack_f0;
        FUN_00729514(puVar1,puVar1 + lVar16,auStack_f0);
      }
      else {
        *(uint **)(param_1 + 8) = puVar1;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      FUN_0072952c(&ppuStack_110,lVar16);
      uVar19 = *(ulong *)(param_1 + 0x10);
      uVar18 = (uint)uVar19;
      uVar8 = (ulong)(uVar18 * 2);
      FUN_0072952c(param_1);
      uVar10 = 0;
      uVar11 = 0;
      for (uVar13 = 0; uVar17 = uVar13, puVar15 = puStack_108,
          uVar13 != (uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar13 = uVar13 + 1) {
        for (; uVar17 != 0xffffffffffffffff; uVar17 = uVar17 - 1) {
          bVar2 = CARRY8(uVar10,(ulong)puStack_108[uVar17 & 0xffffffff] * (ulong)*puVar15);
          uVar10 = uVar10 + (ulong)puStack_108[uVar17 & 0xffffffff] * (ulong)*puVar15;
          if (bVar2) {
            uVar11 = uVar11 + 1;
          }
          puVar15 = puVar15 + 1;
        }
        *(int *)(*(long *)(param_1 + 8) + uVar13 * 4) = (int)uVar10;
        uVar10 = uVar10 >> 0x20 | uVar11 << 0x20;
        uVar11 = uVar11 >> 0x20;
      }
      iVar14 = 1;
      for (; (int)uVar19 < (int)(uVar18 * 2); uVar19 = (ulong)((int)uVar19 + 1)) {
        lVar16 = (long)iVar14;
        uVar13 = -(ulong)(uVar18 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar18 - 1) << 2;
        while (lVar16 < (int)uVar18) {
          puVar15 = puStack_108 + lVar16;
          lVar16 = lVar16 + 1;
          uVar17 = (ulong)*(uint *)((long)puStack_108 + uVar13) * (ulong)*puVar15;
          bVar2 = CARRY8(uVar10,uVar17);
          uVar10 = uVar10 + uVar17;
          if (bVar2) {
            uVar11 = uVar11 + 1;
          }
          uVar13 = uVar13 - 4;
        }
        *(int *)(*(long *)(param_1 + 8) + (uVar19 & 0xffffffff) * 4) = (int)uVar10;
        uVar10 = uVar10 >> 0x20 | uVar11 << 0x20;
        uVar11 = uVar11 >> 0x20;
        iVar14 = iVar14 + 1;
      }
      FUN_007295c0(param_1);
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) << 1;
      pppuVar4 = &ppuStack_110;
      func_0x00729600();
      uVar3 = (uVar9 & uVar7) == 0;
      if (!(bool)uVar3) {
        uVar8 = 5;
        pppuVar4 = (undefined ***)param_1;
        func_0x007296b0();
      }
    }
    func_0x0072975c(uStack_68);
    unaff_x20 = param_2;
    if ((bool)uVar3) {
      func_0x0072a474();
      *(int *)((long)pppuVar4 + 0xa8) = *(int *)((long)pppuVar4 + 0xa8) + (int)uVar8 / 0x20;
      uVar7 = (int)uVar8 % 0x20;
      if (uVar7 != 0) {
        uVar18 = 0;
        lVar12 = *(long *)((long)pppuVar4 + 0x10);
        for (lVar16 = 0; lVar12 != lVar16; lVar16 = lVar16 + 1) {
          uVar9 = *(uint *)(*(long *)((long)pppuVar4 + 8) + lVar16 * 4);
          iVar14 = (uVar9 << (ulong)(uVar7 & 0x1f)) + uVar18;
          uVar18 = uVar9 >> (ulong)(0x20 - uVar7 & 0x1f);
          *(int *)(*(long *)((long)pppuVar4 + 8) + lVar16 * 4) = iVar14;
        }
        if (uVar18 != 0) {
          func_0x00729570(pppuVar4);
        }
      }
      return (undefined1 *)pppuVar4;
    }
  }
  ___stack_chk_fail();
  puVar6 = (undefined1 *)pppuVar4;
  if ((int)uVar8 != 0) {
    func_0x0040cf10();
    func_0x00729600(&ppuStack_110);
    puVar6 = (undefined1 *)pppuVar5;
  }
  func_0x00729bc8();
  func_0x00729efc();
  lVar16 = *(long *)(uVar8 + 0x10);
  FUN_0072952c();
  if (lVar16 != 0) {
    puVar6 = *(undefined1 **)((long)pppuVar4 + 8);
    _memmove(puVar6,*(undefined8 *)(unaff_x20 + 8),lVar16 << 2);
  }
  *(undefined4 *)((long)pppuVar4 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
  return puVar6;
}



/* Entry: 007291b0; end: 00729307;  */

void FUN_007291b0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00729efc();
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_0072952c();
  if (lVar1 != 0) {
    _memmove(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x20 + 8),lVar1 << 2);
  }
  *(undefined4 *)(unaff_x19 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
  return;
}



/* Entry: 00729308; end: 00729397;  */

undefined4 FUN_00729308(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar9 = (uint)*(ulong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xa8) + uVar9;
  uVar8 = *(uint *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0xa8) + uVar8;
  if (iVar1 != iVar2) {
    uVar4 = 0xffffffff;
    if (iVar2 < iVar1) {
      uVar4 = 1;
    }
    return uVar4;
  }
  uVar10 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
  uVar3 = uVar9 - uVar8 & ((int)(uVar9 - uVar8) >> 0x1f ^ 0xffffffffU);
  uVar5 = uVar3;
  if ((int)uVar9 <= (int)uVar3) {
    uVar5 = uVar9;
  }
  do {
    if ((int)uVar10 <= (int)uVar3) {
      uVar4 = 0xffffffff;
      if ((int)uVar8 < (int)uVar5) {
        uVar4 = 1;
      }
      uVar6 = 0;
      if (uVar5 != uVar8) {
        uVar6 = uVar4;
      }
      return uVar6;
    }
    uVar9 = *(uint *)(*(long *)(param_1 + 8) + -4 + uVar10 * 4);
    uVar10 = uVar10 - 1;
    uVar8 = uVar8 - 1;
    uVar7 = *(uint *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 4);
  } while (uVar9 == uVar7);
  uVar4 = 0xffffffff;
  if (uVar7 < uVar9) {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 00729398; end: 00729497;  */

int FUN_00729398(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint extraout_w8;
  ulong uVar6;
  uint extraout_w9;
  uint extraout_w10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  int iVar7;
  ulong uVar8;
  
  iVar4 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_2 + 0xa8) + *(int *)(param_2 + 0x10);
  if (iVar4 <= iVar7) {
    iVar4 = iVar7;
  }
  iVar7 = *(int *)(param_3 + 0xa8) + *(int *)(param_3 + 0x10);
  if (iVar4 + 1 < iVar7) {
    iVar4 = -1;
  }
  else if (iVar7 < iVar4) {
    iVar4 = 1;
  }
  else {
    func_0x00729cd8();
    uVar8 = 0;
    uVar1 = extraout_w9;
    if ((int)extraout_w8 <= (int)extraout_w9) {
      uVar1 = extraout_w8;
    }
    uVar6 = (ulong)uVar1;
    uVar2 = extraout_w10;
    if ((int)uVar1 <= (int)extraout_w10) {
      uVar2 = uVar1;
    }
    while (iVar4 = (int)uVar6, (int)uVar2 < iVar7) {
      uVar6 = unaff_x21;
      func_0x0072a2cc();
      uVar5 = unaff_x20;
      func_0x0072a2cc();
      uVar5 = (uVar5 & 0xffffffff) + (uVar6 & 0xffffffff);
      uVar6 = unaff_x19;
      func_0x0072a2cc();
      uVar6 = uVar8 | uVar6 & 0xffffffff;
      uVar3 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        iVar4 = 1;
        break;
      }
      if (1 < uVar3) {
        iVar4 = -1;
        uVar8 = uVar3;
        break;
      }
      uVar8 = uVar3 << 0x20;
      iVar7 = iVar7 + -1;
    }
    if (iVar7 <= (int)uVar2) {
      iVar4 = -(uint)(uVar8 != 0);
    }
  }
  return iVar4;
}



/* Entry: 00729498; end: 00729513;  */

void FUN_00729498(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x18) >> 1);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = param_1 + 0xa0;
  FUN_0053aff8(lVar2,param_2);
  FUN_00729514(lVar3,lVar3 + *(long *)(param_1 + 0x10) * 4,lVar2);
  *(long *)(param_1 + 8) = lVar2;
  *(ulong *)(param_1 + 0x18) = param_2;
  if (lVar3 != param_1 + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar3);
    return;
  }
  return;
}



/* Entry: 00729514; end: 0072952b;  */

void FUN_00729514(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 0072952c; end: 007295bf;  */

void FUN_0072952c(long param_1,ulong param_2)

{
  ulong uVar1;
  code *extraout_x8;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x00729efc();
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 < param_2) {
    func_0x0072a134(*(undefined8 *)*unaff_x19);
    (*extraout_x8)();
    uVar1 = unaff_x19[3];
  }
  if (uVar1 <= unaff_x20) {
    unaff_x20 = uVar1;
  }
  unaff_x19[2] = unaff_x20;
  return;
}



/* Entry: 007295c0; end: 0072961b;  */

void FUN_007295c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  code *extraout_x8;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar3 = (uint)uVar5;
  if (0 < (int)uVar3) {
    uVar3 = 1;
  }
  lVar6 = (uVar5 & 0xffffffff) * 4;
  do {
    lVar6 = lVar6 + -4;
    uVar4 = (uint)uVar5;
    uVar1 = uVar3;
    if ((int)uVar4 < 2) break;
    uVar5 = (ulong)(uVar4 - 1);
    uVar1 = uVar4;
  } while (*(int *)(*(long *)(param_1 + 8) + lVar6) == 0);
  uVar5 = (ulong)uVar1;
  func_0x00729efc();
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < uVar5) {
    func_0x0072a134(*(undefined8 *)*unaff_x19);
    (*extraout_x8)();
    uVar2 = unaff_x19[3];
  }
  if (uVar2 <= unaff_x20) {
    unaff_x20 = uVar2;
  }
  unaff_x19[2] = unaff_x20;
  return;
}



/* Entry: 0072961c; end: 00729683;  */

void FUN_0072961c(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + lVar3 * 4);
    uVar1 = (param_2 & 0xffffffff) * (ulong)uVar2 + (uVar5 & 0xffffffff);
    uVar5 = (uVar5 >> 0x20) + (param_2 >> 0x20) * (ulong)uVar2 + (uVar1 >> 0x20);
    *(int *)(*(long *)(param_1 + 8) + lVar3 * 4) = (int)uVar1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 >> 0x20) {
    func_0x0072a474();
    func_0x00729570();
  }
  return;
}



/* Entry: 00729684; end: 0072a253;  */

undefined4 FUN_00729684(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 <= param_2) && (param_2 < iVar1 + *(int *)(param_1 + 0x10))) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)(uint)(param_2 - iVar1) * 4);
  }
  return 0;
}



/* Entry: 0072a254; end: 0072a26f;  */

void FUN_0072a254(undefined8 param_1)

{
  long unaff_x28;
  
  func_0x007245f0(param_1,unaff_x28 + 1);
  return;
}



/* Entry: 0072a270; end: 0072a537;  */

void FUN_0072a270(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  int extraout_w9;
  uint uVar11;
  int extraout_w10;
  int extraout_w11;
  undefined4 uVar12;
  undefined8 extraout_x12;
  uint unaff_w19;
  uint uVar13;
  uint uVar14;
  undefined1 uStack000000000000002f;
  
  func_0x0072a4a8();
  uStack000000000000002f = 0x2e;
  func_0x00729fe0();
  uVar6 = (uint)(param_4 >> 0x20);
  uVar14 = uVar6 >> 8 & 0xff;
  uVar2 = unaff_w19;
  if (uVar14 != 0) {
    uVar2 = unaff_w19 + 1;
  }
  uVar5 = *(uint *)((long)register0x00000008 + 8);
  uVar1 = uVar5 + unaff_w19;
  uVar11 = uVar6 & 0xff;
  uVar13 = (uint)param_4;
  if ((param_4 & 0xff00000000) == 0) {
    if (-4 < (int)uVar1) {
      uVar11 = uVar13;
      if ((int)uVar13 < 1) {
        uVar11 = 0x10;
      }
      cVar9 = SBORROW4(uVar1,uVar11);
      iVar3 = uVar1 - uVar11;
      bVar10 = uVar1 == uVar11;
      if ((int)uVar1 <= (int)uVar11) goto LAB_007252c8;
    }
  }
  else {
    cVar9 = SBORROW4(uVar11,1);
    iVar3 = uVar11 - 1;
    if (uVar11 != 1) {
      bVar10 = false;
LAB_007252c8:
      cVar8 = iVar3 < 0;
      if ((int)uVar5 < 0) {
        if ((int)uVar1 < 1) {
          uVar2 = uVar13;
          if ((int)(uVar13 + uVar1) < 0 == SCARRY4(uVar13,uVar1)) {
            uVar2 = -uVar1;
          }
          if (0x7fffffff < uVar13 || unaff_w19 != 0) {
            uVar2 = -uVar1;
          }
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          func_0x0072a2b4();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729a84();
          if ((unaff_w19 != 0 || (param_4 & 0x10000000000000) != 0) || uVar2 != 0) {
            func_0x00729a84();
            func_0x0072a0f8();
            func_0x0072a194();
            func_0x00729e1c();
            FUN_00724a20();
          }
        }
        else {
          func_0x00729c18();
          func_0x007297b8();
          func_0x00729a94();
          func_0x0072a2a8();
          if (uVar14 != 0) {
            func_0x00729770();
          }
          func_0x00729c68();
          func_0x00725514();
          if (0 < (int)(uVar13 - unaff_w19 & (int)(uVar6 << 0xb) >> 0x1f)) {
            func_0x0072a0f8();
            FUN_00725120();
          }
        }
      }
      else {
        func_0x0072a060((ulong)uVar2 + (ulong)uVar5);
        bVar10 = bVar10 || cVar8 != cVar9;
        func_0x0072a050();
        iVar3 = extraout_w9;
        if (!bVar10) {
          iVar3 = extraout_w11;
        }
        iVar7 = extraout_w9;
        if ((param_4 >> 0x20 & 0x100000) != 0) {
          iVar7 = iVar3;
        }
        func_0x007297b8();
        func_0x00729a94();
        func_0x0072a2a8();
        if (uVar14 != 0) {
          func_0x00729770();
        }
        func_0x00729c68();
        FUN_00724a20();
        func_0x0072a0f8();
        FUN_00725120();
        if (((uVar6 >> 0x14 & 1) != 0) && (func_0x00729e08(), 0 < iVar7)) {
          func_0x0072a0f8();
          func_0x0072a304();
        }
      }
      goto LAB_007254a0;
    }
  }
  bVar10 = unaff_w19 == 1;
  func_0x0072a140();
  uVar4 = extraout_x8;
  if (!bVar10) {
    uVar4 = extraout_x12;
  }
  func_0x0072a090(uVar4);
  cVar9 = extraout_w10 < 0;
  bVar10 = extraout_w10 == 0;
  cVar8 = '\0';
  func_0x00729b7c();
  uVar12 = 0x65;
  if (!bVar10) {
    uVar12 = extraout_w8;
  }
  func_0x00729d50(uVar12);
  if (cVar9 != cVar8) {
    func_0x00729a94();
    func_0x007254ac();
    return;
  }
  func_0x00729a70(*(undefined1 *)(param_3 + 9));
  func_0x00729a94();
  func_0x0072a2c0();
  func_0x007254ac();
LAB_007254a0:
  FUN_00724f50();
  return;
}



/* Entry: 0072a538; end: 0072a583; +[SCLazy automaticCreationWithInitializationBlock:] */

void FUN_0072a538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00785900();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072a584; end: 0072a5cf; +[SCLazy manualCreationWithInitializationBlock:] */

void FUN_0072a584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00785900();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0072a5d0; end: 0072a60b; -[SCLazy isCreated] */

bool FUN_0072a5d0(long param_1)

{
  char cVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x1c);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return cVar1 == '\x02';
}



/* Entry: 0072a60c; end: 0072a7cf; -[SCLazy target] */

void FUN_0072a60c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _os_unfair_lock_lock(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    lVar3 = param_1 + 0x18;
    _os_unfair_lock_unlock();
    lVar6 = 0;
    goto LAB_0072a77c;
  }
  if (cVar1 == '\x02') {
LAB_0072a684:
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    unaff_x20 = *(long *)(param_1 + 0x10);
    _objc_retain(unaff_x20);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar5);
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x1c) = 2;
      lVar3 = *(long *)(param_1 + 8);
      (**(code **)(lVar3 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar3;
      _objc_release(uVar5);
      goto LAB_0072a684;
    }
    unaff_x20 = 0;
    lVar6 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(unaff_x20);
  param_4 = auStack_c8;
  lVar3 = unaff_x20;
  func_0x00780ea0();
  if (lVar3 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(unaff_x20);
        }
        lVar4 = *(long *)(lStack_108 + lVar7 * 8);
        (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      param_4 = auStack_c8;
      lVar3 = unaff_x20;
      func_0x00780ea0();
    } while (lVar3 != 0);
  }
  param_1 = 0;
  _objc_release(unaff_x20);
  _objc_retain(lVar6);
  _objc_release(unaff_x20);
  lVar3 = lVar6;
  _objc_release();
LAB_0072a77c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  lVar6 = lVar3;
  __Unwind_Resume();
  pcStack_118 = FUN_0072a7d0;
  lStack_140 = unaff_x22;
  lStack_138 = param_1;
  lStack_130 = unaff_x20;
  lStack_128 = lVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  func_0x0078a020(lVar6);
  iVar2 = (int)lVar6 + 0x18;
  _os_unfair_lock_trylock();
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(lVar6 + 0x1c), _os_unfair_lock_unlock(lVar6 + 0x18), cVar1 != '\x02')) {
    puStack_168 = PTR___NSConcreteStackBlock_00999f30;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_0072a87c;
    puStack_150 = &UNK_009e3fc0;
    lStack_148 = lVar6;
    _dispatch_async(param_4,&puStack_168);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 0072a7d0; end: 0072a87b; -[SCLazy asyncTarget:triggerCreateNowOnQueue:] */

void FUN_0072a7d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x0078a020(param_1);
  iVar2 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(param_1 + 0x1c), _os_unfair_lock_unlock(param_1 + 0x18), cVar1 != '\x02')) {
    puStack_58 = PTR___NSConcreteStackBlock_00999f30;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_0072a87c;
    puStack_40 = &UNK_009e3fc0;
    lStack_38 = param_1;
    _dispatch_async(param_4,&puStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 0072a87c; end: 0072a89b;  */

void FUN_0072a87c(long param_1)

{
  func_0x007811a0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 0072a89c; end: 0072a99f; -[SCLazy onCreated:] */

void FUN_0072a89c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar3);
      _os_unfair_lock_unlock(param_1 + 0x18);
      (**(code **)(param_3 + 0x10))(param_3,uVar3);
      _objc_release(uVar3);
    }
    else {
      puVar4 = *(undefined **)(param_1 + 0x10);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
        _objc_opt_new();
      }
      else {
        _objc_retain(puVar4);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00780e20(param_3);
      lVar2 = lVar1;
      _objc_retainBlock();
      func_0x0077e720(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _os_unfair_lock_unlock(param_1 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0072a9a0; end: 0072a9ef; -[SCLazy ifCreated] */

void FUN_0072a9a0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072a9f0; end: 0072aa4b; -[SCLazy ifCreatedNonBlocking] */

void FUN_0072a9f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0072aa4c; end: 0072abd7; -[SCLazy createNow] */

void FUN_0072aa4c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) != '\x02') {
    *(undefined1 *)(param_1 + 0x1c) = 2;
    lVar1 = *(long *)(param_1 + 8);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar4);
  }
  puVar5 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar5);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00780ea0();
  if (lVar1 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar3 = &uStack_110;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(0x18);
    __Unwind_Resume();
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _os_unfair_lock_lock(lVar6 + 0x18);
      if (*(char *)(lVar6 + 0x1c) == '\x02') {
        uVar4 = *(undefined8 *)(lVar6 + 8);
        _objc_retain(uVar4);
        puVar5 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
        puStack_1a0 = PTR___NSConcreteStackBlock_00999f30;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_0072ae2c;
        puStack_188 = &UNK_00a1f680;
        _objc_retain(puVar3);
        puStack_178 = (undefined1 *)puVar3;
        _objc_retain(uVar4);
        uStack_180 = uVar4;
        func_0x0077f660(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x007811a0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uStack_180);
        _objc_release(puStack_178);
        _objc_release(uVar4);
        _os_unfair_lock_unlock(lVar6 + 0x18);
      }
      else {
        _os_unfair_lock_unlock(lVar6 + 0x18);
        uStack_1c0 = 0;
        uStack_1b0 = 0x2020000000;
        uStack_1a8 = 0;
        puVar5 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
        puStack_1b8 = &uStack_1c0;
        _objc_alloc(PTR__OBJC_CLASS___SCLazy_00ac29d0);
        puStack_1f8 = PTR___NSConcreteStackBlock_00999f30;
        uStack_1f0 = 0xc2000000;
        pcStack_1e8 = FUN_0072ae3c;
        puStack_1e0 = &UNK_00a1f6b0;
        puStack_1c8 = &uStack_1c0;
        _objc_retain(puVar3);
        lStack_1d8 = lVar6;
        puStack_1d0 = (undefined1 *)puVar3;
        func_0x00785900(puVar5);
        _objc_initWeak(auStack_200,puVar5);
        _objc_copyWeak(auStack_208,auStack_200);
        func_0x0078a020(lVar6);
        _objc_destroyWeak(auStack_208);
        _objc_destroyWeak(auStack_200);
        _objc_release(puStack_1d0);
        __Block_object_dispose(&uStack_1c0,8);
      }
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0072abd8; end: 0072ae2b; -[SCLazy immediateMap:] */

void FUN_0072abd8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar2);
      puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
      puStack_90 = PTR___NSConcreteStackBlock_00999f30;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_0072ae2c;
      puStack_78 = &UNK_00a1f680;
      _objc_retain(param_3);
      lStack_68 = param_3;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      func_0x0077f660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x007811a0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uStack_70);
      _objc_release(lStack_68);
      _objc_release(uVar2);
      _os_unfair_lock_unlock(param_1 + 0x18);
    }
    else {
      _os_unfair_lock_unlock(param_1 + 0x18);
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
      puStack_a8 = &uStack_b0;
      _objc_alloc(PTR__OBJC_CLASS___SCLazy_00ac29d0);
      puStack_e8 = PTR___NSConcreteStackBlock_00999f30;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_0072ae3c;
      puStack_d0 = &UNK_00a1f6b0;
      puStack_b8 = &uStack_b0;
      _objc_retain(param_3);
      lStack_c8 = param_1;
      lStack_c0 = param_3;
      func_0x00785900(puVar1);
      _objc_initWeak(auStack_f0,puVar1);
      _objc_copyWeak(auStack_f8,auStack_f0);
      func_0x0078a020(param_1);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
      _objc_release(lStack_c0);
      __Block_object_dispose(&uStack_b0,8);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0072ae2c; end: 0072ae3b;  */

void FUN_0072ae2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0072ae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0072ae3c; end: 0072af4b;  */

void FUN_0072ae3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x007811a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 0072af4c; end: 0072b017; -[SCLazy map:] */

void FUN_0072af4c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
    _objc_alloc(PTR__OBJC_CLASS___SCLazy_00ac29d0);
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_0072b018;
    puStack_48 = &UNK_00a1f680;
    _objc_retain(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x00785900(puVar2,param_2,&puStack_60,cVar1 != '\0');
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0072b018; end: 0072b06b;  */

void FUN_0072b018(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x007811a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 0072b06c; end: 0072b2e3; -[SCLazy immediateFlatMap:] */

void FUN_0072b06c(long param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    if (cVar1 == '\x02') {
      func_0x007811a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_0072b2e4;
      uStack_80 = 0x72b2f4;
      lStack_78 = 0;
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x2020000000;
      uStack_a8 = 0;
      puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_00ac36c8;
      _objc_opt_new();
      puVar3 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
      _objc_alloc(PTR__OBJC_CLASS___SCLazy_00ac29d0);
      puStack_100 = PTR___NSConcreteStackBlock_00999f30;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_0072b2fc;
      puStack_e8 = &UNK_00a1f710;
      _objc_retain(puVar2);
      puStack_d0 = &uStack_c0;
      puStack_c8 = &uStack_a0;
      puStack_e0 = puVar2;
      lStack_d8 = param_1;
      func_0x00785900(puVar3);
      _objc_initWeak(auStack_108,puVar3);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x0078a020(param_1);
      _objc_destroyWeak(auStack_110);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_108);
      _objc_release(puStack_e0);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_c0,8);
      __Block_object_dispose(&uStack_a0,8);
      param_1 = lStack_78;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0072b2e4; end: 0072b2fb;  */

void FUN_0072b2e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 0072b2fc; end: 0072b367;  */

void FUN_0072b2fc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00788640(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  func_0x007811a0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x007811a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793000(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0072b368; end: 0072b477;  */

void FUN_0072b368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00788640(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  func_0x0078a020(uVar2);
  func_0x00793000(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 0072b478; end: 0072b5eb;  */

void FUN_0072b478(long param_1)

{
  long lVar1;
  
  func_0x00788640(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x007811a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00793010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s_unlock_00abf910);
  return;
}



/* Entry: 0072b5ec; end: 0072b72b; -[SCLazy flatMap:] */

void FUN_0072b5ec(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
    _objc_alloc(PTR__OBJC_CLASS___SCLazy_00ac29d0);
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x72b6b8;
    puStack_48 = &UNK_00a1f680;
    _objc_retain(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x00785900(puVar2,param_2,&puStack_60,cVar1 != '\0');
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0072b72c; end: 0072b7b7; -[SCLazy initWithInitializationBlock:isAutoCreation:] */

undefined1 *
FUN_0072b72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR__OBJC_CLASS___SCLazy_00ac4608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0072b7b8; end: 0072b7db; -[SCLazy copyWithZone:] */

undefined8 FUN_0072b7b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0072b7dc; end: 0072b80b; -[SCLazy .cxx_destruct] */

void FUN_0072b7dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0072b80c; end: 0072b857; -[SCLazyLoadingProxy initWithInitializationBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0072b80c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  func_0x0077f660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
  *(undefined **)(param_1 + _DAT_00ac5f00) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 0072b858; end: 0072b867; -[SCLazyLoadingProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5f00),PTR_s_target_00abf6d8);
  return;
}



/* Entry: 0072b868; end: 0072b903; -[SCLazyLoadingProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b868(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_00ac5f00);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (lRam0000000000b640f0 != -1) {
      _dispatch_once(0xb640f0,&PTR___NSConcreteGlobalBlock_00a1f7a0);
    }
    lVar2 = lRam0000000000b640f8;
    _objc_retain(lRam0000000000b640f8);
  }
  else {
    lVar2 = lVar1;
    func_0x00789380(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 0072b904; end: 0072b963; -[SCLazyLoadingProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_00ac5f00);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x007873e0(param_3,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0072b964; end: 0072b9b3; -[SCLazyLoadingProxy class] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac5f00);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}


