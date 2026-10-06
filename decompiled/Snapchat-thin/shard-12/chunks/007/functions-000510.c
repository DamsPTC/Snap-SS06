/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109780aa8; end: 109780db7;  */

void FUN_109780aa8(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  
  uVar4 = *(ulong *)(param_1 + 0x60);
  uVar14 = uVar4 >> 8;
  iVar15 = (int)(param_3 >> 8);
  iVar13 = (int)(uVar4 >> 8);
  if ((iVar15 < *(int *)(param_1 + 0x2c) || iVar13 < *(int *)(param_1 + 0x2c)) &&
     (*(int *)(param_1 + 0x28) <= iVar13 || *(int *)(param_1 + 0x28) <= iVar15)) {
    uVar6 = *(ulong *)(param_1 + 0x58);
    uVar12 = uVar6 >> 8;
    uVar17 = (uint)uVar6 & 0xff;
    uVar18 = (ulong)uVar17;
    uVar19 = (uint)uVar4 & 0xff;
    uVar20 = (ulong)uVar19;
    iVar21 = iVar15 - iVar13;
    iVar11 = (int)(uVar6 >> 8);
    iVar16 = (int)(param_2 >> 8);
    if (iVar21 != 0 || iVar11 != iVar16) {
      if (param_3 == uVar4) {
        FUN_1097809ec(param_1,param_2 >> 8,param_3 >> 8);
        goto LAB_109780d94;
      }
      lVar8 = param_3 - uVar4;
      if (param_2 == uVar6) {
        if (lVar8 < 1) {
          do {
            iVar13 = iVar13 + -1;
            lVar8 = *(long *)(param_1 + 0x38);
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) - (int)uVar20;
            *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + uVar17 * -2 * (int)uVar20;
            FUN_1097809ec(param_1,uVar12,iVar13);
            uVar20 = 0x100;
            uVar19 = 0x100;
            bVar3 = iVar21 != -1;
            iVar21 = iVar21 + 1;
          } while (bVar3);
        }
        else {
          iVar15 = 0x100 - uVar19;
          do {
            iVar13 = iVar13 + 1;
            lVar8 = *(long *)(param_1 + 0x38);
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + iVar15;
            *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + uVar17 * 2 * iVar15;
            FUN_1097809ec(param_1,uVar12,iVar13);
            iVar15 = 0x100;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          uVar19 = 0;
        }
      }
      else {
        lVar10 = param_2 - uVar6;
        lVar9 = 0;
        if (lVar10 != 0) {
          lVar9 = 0xffffffff / lVar10;
        }
        lVar1 = 0;
        if (iVar11 != iVar16) {
          lVar1 = lVar9;
        }
        lVar9 = 0;
        if (lVar8 != 0) {
          lVar9 = 0xffffffff / lVar8;
        }
        lVar2 = 0;
        if (iVar15 != iVar13) {
          lVar2 = lVar9;
        }
        lVar9 = lVar10 * (uVar4 & 0xff) - (uVar6 & 0xff) * lVar8;
        do {
          lVar5 = lVar9 + lVar10 * -0x100;
          iVar13 = (int)uVar20;
          iVar21 = (int)uVar18;
          if ((lVar9 < 1) && (0 < lVar5)) {
            uVar20 = (ulong)(lVar9 * lVar1) >> 0x20;
            lVar5 = lVar9 + lVar8 * -0x100;
            lVar7 = *(long *)(param_1 + 0x38);
            iVar13 = (int)((ulong)(lVar9 * lVar1) >> 0x20) - iVar13;
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + iVar13;
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + iVar13 * iVar21;
            uVar12 = (ulong)((int)uVar12 - 1);
            uVar18 = 0x100;
          }
          else {
            lVar7 = lVar5 + lVar8 * 0x100;
            if ((lVar5 < 1) && (0 < lVar7)) {
              uVar18 = (ulong)-(lVar2 * lVar5) >> 0x20;
              lVar9 = *(long *)(param_1 + 0x38);
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + (0x100 - iVar13);
              *(int *)(lVar9 + 8) =
                   *(int *)(lVar9 + 8) +
                   (iVar21 + (int)((ulong)-(lVar2 * lVar5) >> 0x20)) * (0x100 - iVar13);
              uVar14 = (ulong)((int)uVar14 + 1);
              uVar20 = 0;
            }
            else {
              lVar5 = lVar9 + lVar8 * 0x100;
              if ((lVar5 < 0) || (0 < lVar7)) {
                uVar18 = (ulong)-(lVar2 * lVar9) >> 0x20;
                lVar5 = lVar9 + lVar10 * 0x100;
                lVar7 = *(long *)(param_1 + 0x38);
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) - iVar13;
                *(int *)(lVar7 + 8) =
                     *(int *)(lVar7 + 8) -
                     (iVar21 + (int)((ulong)-(lVar2 * lVar9) >> 0x20)) * iVar13;
                uVar14 = (ulong)((int)uVar14 - 1);
                uVar20 = 0x100;
              }
              else {
                uVar20 = (ulong)(lVar5 * lVar1) >> 0x20;
                lVar9 = *(long *)(param_1 + 0x38);
                iVar13 = (int)((ulong)(lVar5 * lVar1) >> 0x20) - iVar13;
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + iVar13;
                *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + iVar13 * (iVar21 + 0x100);
                uVar12 = (ulong)((int)uVar12 + 1);
                uVar18 = 0;
              }
            }
          }
          uVar17 = (uint)uVar18;
          uVar19 = (uint)uVar20;
          FUN_1097809ec(param_1,uVar12,uVar14);
          lVar9 = lVar5;
        } while (((int)uVar12 != iVar16) || ((int)uVar14 != iVar15));
      }
    }
    lVar8 = *(long *)(param_1 + 0x38);
    iVar13 = ((uint)param_3 & 0xff) - uVar19;
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + iVar13;
    *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + (uVar17 + ((uint)param_2 & 0xff)) * iVar13;
  }
LAB_109780d94:
  *(ulong *)(param_1 + 0x58) = param_2;
  *(ulong *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 109780db8; end: 109780eb3;  */

void FUN_109780db8(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_90;
  int iStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined4 uStack_70;
  code *pcStack_68;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  puStack_48 = (undefined1 *)&lStack_90;
  plVar4 = *(long **)(param_2 + 8);
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = plVar4 + (ulong)*(ushort *)(param_2 + 2) * 2;
  }
  if ((param_3[1] & 0x3fffe000U) == 0) {
    uStack_70 = 3;
    pcStack_68 = FUN_109781280;
    uStack_40 = 0;
    uStack_30 = (ulong)(uint)(param_3[1] << 2);
    uStack_38 = 0;
    uStack_28 = (ulong)(uint)(*param_3 << 2);
    iStack_88 = param_3[2];
    uVar1 = 0;
    if (-1 < iStack_88) {
      uVar1 = iStack_88 * (*param_3 + -1);
    }
    lStack_90 = *(long *)(param_3 + 4) + (ulong)uVar1;
    plVar2 = plVar4;
    lStack_78 = param_2;
    if (plVar4 < plVar5) {
      do {
        plVar3 = plVar2 + 2;
        plVar2[1] = plVar2[1] << 2;
        *plVar2 = *plVar2 << 2;
        plVar2 = plVar3;
      } while (plVar3 < plVar5);
      puStack_48 = (undefined1 *)&lStack_90;
      (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),auStack_80);
      do {
        plVar2 = plVar4 + 2;
        plVar4[1] = (long)(plVar4[1] + (-(ulong)(plVar4[1] < 0) >> 0x3e)) >> 2;
        *plVar4 = (long)(*plVar4 + (-(ulong)(*plVar4 < 0) >> 0x3e)) >> 2;
        plVar4 = plVar2;
      } while (plVar2 < plVar5);
    }
    else {
      (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),auStack_80);
    }
  }
  return;
}



/* Entry: 109780eb4; end: 10978127f;  */

void FUN_109780eb4(long param_1,long param_2,uint *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  uint uStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puStack_68 = (undefined1 *)&lStack_b0;
  lVar8 = *(long *)(param_1 + 8);
  plVar7 = (long *)(lVar8 + 0x158);
  uStack_90 = 3;
  uStack_88 = 0x109781300;
  uStack_60 = 0;
  uStack_48 = (ulong)*param_3;
  uStack_50 = (ulong)param_3[1];
  uStack_58 = 0;
  uStack_a8 = param_3[2];
  uVar3 = 0;
  if (-1 < (int)uStack_a8) {
    uVar3 = uStack_a8 * (*param_3 - 1);
  }
  lStack_b0 = *(long *)(param_3 + 4) + (ulong)uVar3;
  if ((param_2 != 0) && (uVar1 = *(ushort *)(param_2 + 2), uVar1 != 0)) {
    uVar3 = 0;
    lVar9 = *(long *)(lVar8 + 0x160);
    lVar6 = *plVar7;
    plVar4 = *(long **)(param_2 + 8);
    do {
      plVar4[1] = plVar4[1] - lVar9;
      *plVar4 = *plVar4 - lVar6;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
    } while (uVar3 < uVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  lStack_98 = param_2;
  (**(code **)(param_1 + 0x70))(uVar2,auStack_a0);
  if ((int)uVar2 == 0) {
    lStack_b0 = lStack_b0 + 1;
    lVar9 = *(long *)(lVar8 + 0x170);
    lVar6 = *(long *)(lVar8 + 0x168);
    if ((param_2 != 0) && (uVar1 = *(ushort *)(param_2 + 2), uVar1 != 0)) {
      uVar3 = 0;
      lVar11 = *(long *)(lVar8 + 0x160);
      lVar10 = *plVar7;
      plVar7 = *(long **)(param_2 + 8);
      do {
        plVar7[1] = (lVar11 - lVar9) + plVar7[1];
        *plVar7 = (lVar10 - lVar6) + *plVar7;
        uVar3 = uVar3 + 1;
        plVar7 = plVar7 + 2;
      } while (uVar3 < uVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    (**(code **)(param_1 + 0x70))(uVar2,auStack_a0);
    if ((int)uVar2 == 0) {
      lStack_b0 = lStack_b0 + 1;
      plVar7 = (long *)(lVar8 + 0x178);
      lVar9 = *(long *)(lVar8 + 0x180);
      lVar6 = *plVar7;
      plVar4 = (long *)(lVar8 + 0x180);
      if ((param_2 != 0) && (uVar1 = *(ushort *)(param_2 + 2), uVar1 != 0)) {
        uVar3 = 0;
        lVar10 = *(long *)(lVar8 + 0x170);
        lVar8 = *(long *)(lVar8 + 0x168);
        plVar5 = *(long **)(param_2 + 8);
        do {
          plVar5[1] = (lVar10 - lVar9) + plVar5[1];
          *plVar5 = (lVar8 - lVar6) + *plVar5;
          uVar3 = uVar3 + 1;
          plVar5 = plVar5 + 2;
        } while (uVar3 < uVar1);
      }
      (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),auStack_a0);
    }
    else {
      plVar4 = (long *)(lVar8 + 0x170);
      plVar7 = (long *)(lVar8 + 0x168);
    }
  }
  else {
    plVar4 = (long *)(lVar8 + 0x160);
  }
  if ((param_2 != 0) && (uVar1 = *(ushort *)(param_2 + 2), uVar1 != 0)) {
    uVar3 = 0;
    lVar8 = *plVar4;
    lVar6 = *plVar7;
    plVar7 = *(long **)(param_2 + 8);
    do {
      *plVar7 = *plVar7 + lVar6;
      plVar7[1] = plVar7[1] + lVar8;
      uVar3 = uVar3 + 1;
      plVar7 = plVar7 + 2;
    } while (uVar3 < uVar1);
  }
  return;
}



/* Entry: 109781280; end: 109781353;  */

void FUN_109781280(int param_1,int param_2,short *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  if (param_2 != 0) {
    lVar4 = *param_4 - (long)(int)param_4[1] * (long)(iVar1 >> 2);
    do {
      if (param_3[1] != 0) {
        uVar5 = 0;
        bVar3 = *(byte *)(param_3 + 2);
        do {
          iVar1 = uVar5 + (int)*param_3;
          iVar2 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar2 = iVar1;
          }
          iVar1 = (bVar3 + 8 >> 4) + (uint)*(byte *)(lVar4 + (iVar2 >> 2));
          *(char *)(lVar4 + (iVar2 >> 2)) = (char)iVar1 - (char)((uint)iVar1 >> 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ushort)param_3[1]);
      }
      param_3 = param_3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 109781354; end: 109781397;  */

void FUN_109781354(long param_1)

{
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x81) == '\x01')) {
    (**(code **)(param_1 + 0x90))(param_1 + 0xa8);
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 109781398; end: 1097813a3;  */

undefined * FUN_109781398(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &DAT_10f2dd3dd;
    ppuVar1 = &PTR_DAT_110b0d290;
    do {
      _strcmp(puVar2,param_2);
      if ((int)puVar2 == 0) {
        return ppuVar1[1];
      }
      puVar2 = ppuVar1[2];
      ppuVar1 = ppuVar1 + 2;
    } while (puVar2 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}



/* Entry: 1097813a4; end: 1097814a7;  */

ulong FUN_1097813a4(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  uint uStack_44;
  
  if (param_3 != 0) {
    return 0x84;
  }
  if (*(char *)(param_1 + 0x81) == '\0') {
    return 0x9e;
  }
  lVar2 = **(long **)(param_1 + 8);
  pcVar4 = *(code **)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x80) == '\0') {
    uStack_44 = (int)param_1 + 0xa8;
    (**(code **)(param_1 + 0x88))();
    *(undefined1 *)(param_1 + 0x80) = 1;
    if (*(char *)(param_1 + 0x81) == '\0') goto LAB_109781438;
  }
  (**(code **)(param_1 + 0xa0))(param_2,1,param_1 + 0xa8);
LAB_109781438:
  lVar1 = lVar2;
  FUN_1097537e4(lVar2,(ulong)*(uint *)(param_2 + 0x98) * (long)*(int *)(param_2 + 0xa0),&uStack_44);
  *(long *)(param_2 + 0xa8) = lVar1;
  uVar3 = (ulong)uStack_44;
  if (uStack_44 == 0) {
    uVar3 = param_2;
    (*pcVar4)(param_2,param_1 + 0xa8);
    if ((int)uVar3 == 0) {
      *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
    }
    else {
      if (*(long *)(param_2 + 0xa8) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(param_2 + 0xa8) = 0;
    }
  }
  return uVar3;
}



/* Entry: 1097814a8; end: 109781687;  */

undefined8 FUN_1097814a8(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_2 + 0x120);
  if (param_3 == (long *)0x0) {
    lStack_50 = 0x10000;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0x10000;
    param_3 = &lStack_50;
  }
  if (param_4 == (long *)0x0) {
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *param_4;
    lVar6 = param_4[1];
  }
  uStack_68 = *(undefined8 *)(lVar5 + 0x58);
  uStack_70 = *(undefined8 *)(lVar5 + 0x50);
  uStack_58 = *(undefined8 *)(lVar5 + 0x68);
  uStack_60 = *(undefined8 *)(lVar5 + 0x60);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_78 = param_3[3];
  lStack_80 = param_3[2];
  func_0x000109753304(&lStack_90,&uStack_70);
  lVar1 = *(long *)(lVar5 + 0x70) * *param_3;
  lVar2 = *(long *)(lVar5 + 0x78) * param_3[1];
  lVar3 = param_3[2] * *(long *)(lVar5 + 0x70);
  lVar4 = param_3[3] * *(long *)(lVar5 + 0x78);
  *(long *)(lVar5 + 0x70) =
       lVar7 + (lVar1 + (lVar1 >> 0x3f) + 0x8000 >> 0x10) +
       (lVar2 + (lVar2 >> 0x3f) + 0x8000 >> 0x10);
  *(long *)(lVar5 + 0x78) =
       lVar6 + (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) +
       (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10);
  *(undefined8 *)(lVar5 + 0x58) = uStack_68;
  *(undefined8 *)(lVar5 + 0x50) = uStack_70;
  *(undefined8 *)(lVar5 + 0x68) = uStack_58;
  *(undefined8 *)(lVar5 + 0x60) = uStack_60;
  return 0;
}



/* Entry: 109781688; end: 1097816d3;  */

void FUN_109781688(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _strcmp(param_2,&UNK_10f57fb59);
  if ((int)param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    param_3[1] = *(undefined8 *)(param_1 + 0x90);
    *param_3 = uVar1;
    param_3[3] = uVar3;
    param_3[2] = uVar2;
  }
  return;
}



/* Entry: 1097816d4; end: 1097816e7;  */

undefined8 FUN_1097816d4(long param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0x28;
  return 0;
}



/* Entry: 1097816e8; end: 10978175b;  */

void FUN_1097816e8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  
  ppuVar1 = &PTR_DAT_110b0d380;
  func_0x000109753df4();
  if ((((ppuVar1 == (undefined **)0x0) && (param_1 != 0)) &&
      (plVar2 = *(long **)(param_1 + 8), plVar2 != (long *)0x0)) &&
     ((FUN_10975421c(plVar2,&UNK_10f57f7a4), plVar2 != (long *)0x0 &&
      (*(long *)(*plVar2 + 0x28) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000109781748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*plVar2 + 0x28) + 0x20))(param_1,param_2);
    return;
  }
  return;
}



/* Entry: 10978175c; end: 1097819d3;  */

void FUN_10978175c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0xb0) + 8);
  FUN_10975421c(plVar1,&UNK_10f57f7a4);
  if (((plVar1 != (long *)0x0) && (lVar5 = *(long *)(*plVar1 + 0x28), lVar5 != 0)) &&
     ((*(code **)(param_1 + 0x28) == (code *)0x0 ||
      (lVar3 = param_1, (**(code **)(param_1 + 0x28))(param_1,0,0,0), lVar3 == 0)))) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    (**(code **)(lVar5 + 8))(param_1,param_2,param_3,param_4,param_5);
    if ((int)param_1 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0xc0);
      lVar3 = *(long *)(param_2 + 0x118);
      if (lVar3 < 0x74727565) {
        if ((lVar3 != 0x10000) && (lVar3 != 0x20000)) {
          return;
        }
      }
      else if (((lVar3 != 0x74727565) && (lVar3 != 0xa56c7374)) && (lVar3 != 0xa56b6264)) {
        return;
      }
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x800;
      if ((-1 < (int)(uint)param_3) &&
         (uVar2 = uVar4, (**(code **)(lVar5 + 0x10))(uVar4,param_2,param_3,param_4,param_5),
         (int)uVar2 == 0)) {
        lVar5 = param_2;
        FUN_10978da54();
        if ((int)lVar5 != 0) {
          *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 0x2000;
        }
        lVar5 = param_2;
        func_0x00010978ddb4(param_2,uVar4);
        if ((int)lVar5 == 0) {
          if ((*(uint *)(param_2 + 0x10) & 0x20001) != 0) {
            lVar5 = param_2;
            FUN_10978df78(param_2,uVar4);
            if ((int)lVar5 != 0) {
              return;
            }
            lVar5 = param_2;
            FUN_10978828c(param_2,uVar4);
            if (((uint)lVar5 != 0) && (((uint)lVar5 & 0xff) != 0x8e)) {
              return;
            }
            lVar5 = param_2;
            FUN_10978e0ec(param_2,uVar4);
            if (((uint)lVar5 != 0) && (((uint)lVar5 & 0xff) != 0x8e)) {
              return;
            }
            lVar5 = param_2;
            func_0x00010978e164(param_2,uVar4);
            if (((uint)lVar5 != 0) && (((uint)lVar5 & 0xff) != 0x8e)) {
              return;
            }
            if (((*(int *)(param_2 + 0x38) != 0) && (*(long *)(param_2 + 0x500) != 0)) &&
               (lVar5 = param_2, FUN_10978e1dc(), (int)lVar5 != 0)) {
              *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffe;
            }
          }
          if (((*(byte *)(param_2 + 0x11) & 1) == 0) ||
             (lVar5 = param_2, FUN_109759dd4(param_2,(uint)param_3 >> 0x10), (int)lVar5 == 0)) {
            *(code **)(param_2 + 0x348) = FUN_10978e328;
            *(code **)(param_2 + 0x358) = FUN_10978e3ac;
            *(code **)(param_2 + 0x360) = FUN_10978e444;
            *(undefined8 *)(param_2 + 0x368) = 0x10978e778;
            *(code **)(param_2 + 0x350) = FUN_10978e9bc;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1097819d4; end: 109781b13;  */

void FUN_1097819d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(param_1 + 0xc0);
    lVar3 = *(long *)(param_1 + 0x370);
    if (*(code **)(param_1 + 0x498) != (code *)0x0) {
      (**(code **)(param_1 + 0x498))(*(undefined8 *)(param_1 + 0x490));
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(param_1);
    }
    lVar3 = *(long *)(param_1 + 0xc0);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) && (*(long *)(param_1 + 0x500) != 0)) {
      (**(code **)(*(long *)(lVar3 + 0x38) + 0x10))();
      lVar3 = *(long *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (*(long *)(param_1 + 0x528) != 0) {
      (**(code **)(*(long *)(lVar3 + 0x38) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x528) = 0;
    if ((*(long *)(lVar3 + 0x28) != 0) && (*(long *)(param_1 + 0x508) != 0)) {
      (**(code **)(*(long *)(lVar3 + 0x38) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (*(long *)(param_1 + 0x480) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x460) = 0;
    }
    else {
      if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(param_1 + 0x460) != 0)) {
        (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x460) = 0;
      if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(param_1 + 0x470) != 0)) {
        (**(code **)(*(long *)(lVar2 + 0x38) + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    FUN_10978784c(param_1);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  return;
}



/* Entry: 109781b14; end: 109781b2f;  */

undefined8 FUN_109781b14(long param_1)

{
  *(undefined8 *)(param_1 + 0x220) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffff;
  return 0;
}



/* Entry: 109781b30; end: 109781b53;  */

void FUN_109781b30(long param_1)

{
  FUN_10978b430();
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 109781b54; end: 109781b5f;  */

int FUN_109781b54(long param_1)

{
  long lVar1;
  long *plVar2;
  int iStack_24;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 0x128);
  if (((int)plVar2[1] != 0) && (plVar2[8] == 0)) {
    lVar1 = *plVar2;
    FUN_1097539a8(lVar1,0x10,0,(int)plVar2[1] << 1,0,&iStack_24);
    plVar2[8] = lVar1;
    if (iStack_24 != 0) {
      return iStack_24;
    }
    *(undefined1 *)((long)plVar2 + 0x14) = 1;
    plVar2[9] = lVar1 + (ulong)*(uint *)(plVar2 + 1) * 0x10;
    FUN_109753a20(plVar2);
  }
  return 0;
}



/* Entry: 109781b60; end: 10978270f;  */

long * FUN_109781b60(long param_1,long *param_2,ulong param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  short sVar10;
  ushort uVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
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
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  uint auStack_74 [5];
  
  if (param_2 == (long *)0x0) {
    return (long *)0x24;
  }
  plVar22 = *(long **)(param_1 + 8);
  if (plVar22 == (long *)0x0) {
    return (long *)0x23;
  }
  if (*(uint *)(plVar22 + 4) <= (uint)param_3) {
    return (long *)0x6;
  }
  if ((param_4 >> 1 & 1) != 0) {
    if ((*(byte *)((long)plVar22 + 0x11) & 0x20) != 0) {
      param_4 = param_4 & 0xfffffffd;
    }
    param_4 = param_4 >> 0xe & 2 | param_4;
  }
  if ((param_4 & 0x401) != 0) {
    uVar15 = 0xb;
    if ((*(byte *)((long)plVar22 + 0x11) & 0x20) != 0) {
      uVar15 = 9;
    }
    param_4 = uVar15 | param_4;
  }
  lVar23 = 0x60;
  if ((param_4 & 2) != 0) {
    lVar23 = 0x18;
  }
  param_2[0xb] = (long)param_2 + lVar23;
  uVar21 = (ulong)(int)param_4;
  if (((((param_4 >> 3 & 1) == 0) && (param_2[0x1e] != 0xffffffff)) &&
      ((*(ushort *)((long)plVar22 + 10) & 0x7fff) == 0)) && (-1 < *(char *)((long)plVar22 + 0x11)))
  {
    lVar23 = param_2[4];
    lVar24 = param_2[5];
    plVar17 = plVar22;
    (**(code **)(plVar22[0x6e] + 0x98))
              (plVar22,param_2[0x1e],param_3,uVar21,plVar22[0x18],param_1 + 0x98,&uStack_200);
    if ((uint)plVar17 == 0) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(ulong *)(param_1 + 0x30) = (uStack_200 >> 0x10 & 0xffff) << 6;
      *(ulong *)(param_1 + 0x38) = (uStack_200 & 0xffff) << 6;
      *(long *)(param_1 + 0x40) = (long)uStack_200._4_2_ << 6;
      *(long *)(param_1 + 0x48) = (long)uStack_200._6_2_ << 6;
      *(ulong *)(param_1 + 0x50) = ((ulong)uStack_1f8 & 0xffff) << 6;
      *(long *)(param_1 + 0x58) = (long)uStack_1f8._2_2_ << 6;
      *(long *)(param_1 + 0x60) = (long)uStack_1f8._4_2_ << 6;
      *(ulong *)(param_1 + 0x68) = ((ulong)uStack_1f8 >> 0x30) << 6;
      *(undefined4 *)(param_1 + 0x90) = 0x62697473;
      bVar12 = (uVar21 & 0x10) != 0;
      if (bVar12) {
        uStack_200._4_2_ = uStack_1f8._2_2_;
      }
      if (bVar12) {
        uStack_200._6_2_ = uStack_1f8._4_2_;
      }
      *(int *)(param_1 + 0xc0) = (int)uStack_200._4_2_;
      *(int *)(param_1 + 0xc4) = (int)uStack_200._6_2_;
      uStack_200 = *(long *)(param_1 + 8);
      if ((*(uint *)(uStack_200 + 0x10) & 0x20001) == 0) {
        return (long *)0x0;
      }
      uStack_1d0 = *(undefined8 *)(uStack_200 + 0xc0);
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_e0 = 0;
      lStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      plStack_f0 = (long *)0x0;
      uStack_f8 = 0;
      lStack_1e8 = 0;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      lStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_90 = 0;
      lStack_88 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      lStack_98 = 0;
      uStack_1f8 = param_2;
      lStack_1f0 = param_1;
      uStack_1e0 = uVar21;
      FUN_10978a238(&uStack_200,param_3,0,1);
      lVar14 = *(long *)(uStack_200 + 0xb8);
      lVar25 = lStack_98;
      if (lVar14 != 0) {
        while (lVar25 != 0) {
          lVar25 = *(long *)(lVar25 + 8);
          (**(code **)(lVar14 + 0x10))(lVar14);
        }
      }
      *(long *)(param_1 + 0x70) = (long)(int)uStack_198;
      *(long *)(param_1 + 0x78) = (long)uStack_d0._4_4_;
      bVar12 = true;
      bVar13 = false;
      if ((int)plVar22[0xa8] == 3) {
        bVar13 = SBORROW4((int)uStack_1c8._4_2_,1);
        bVar12 = uStack_1c8._4_2_ + -1 < 0;
      }
      if (bVar12 == bVar13) {
        bVar12 = (param_4 & 0x10) != 0;
        piVar4 = (int *)&uStack_1a0;
        if (bVar12) {
          piVar4 = (int *)&uStack_1c0;
        }
        piVar5 = (int *)&uStack_1b8;
        if (bVar12) {
          piVar5 = (int *)&uStack_d0;
        }
        iVar7 = *piVar5;
        *(int *)(param_1 + 0xc0) =
             *(int *)(param_1 + 0xc0) +
             (int)(lVar23 * *piVar4 + (lVar23 * *piVar4 >> 0x3f) + 0x8000U >> 0x16);
        *(int *)(param_1 + 0xc4) =
             *(int *)(param_1 + 0xc4) +
             (int)(lVar24 * iVar7 + (lVar24 * iVar7 >> 0x3f) + 0x8000U >> 0x16);
      }
      if ((*(long *)(param_1 + 0x50) == 0) && ((int)uStack_198 != 0)) {
        lVar23 = lVar23 * (int)uStack_198;
        *(long *)(param_1 + 0x50) = lVar23 + (lVar23 >> 0x3f) + 0x8000 >> 0x10;
      }
      if (*(long *)(param_1 + 0x68) == 0) {
        if (uStack_d0._4_4_ != 0) {
          lVar24 = lVar24 * uStack_d0._4_4_;
          *(long *)(param_1 + 0x68) = lVar24 + (lVar24 >> 0x3f) + 0x8000 >> 0x10;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
      return (long *)0x0;
    }
    uVar16 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    if (((uint)plVar17 & 0xff) == 0x9d) {
      if ((uVar16 & 1) == 0) {
        uStack_200 = uStack_200 & 0xffffffffffff0000;
        auStack_74[0] = auStack_74[0] & 0xffff0000;
        uStack_204 = 0;
        if (plVar22[0x9d] != 0) {
          (**(code **)(plVar22[0x6e] + 0x150))(plVar22,0,param_3,&uStack_200,(long)&uStack_204 + 2);
          FUN_10978a1d0(plVar22,param_3,0,auStack_74,&uStack_204);
          *(undefined4 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(long *)(param_1 + 0x40) =
               lVar23 * (short)uStack_200 + (lVar23 * (short)uStack_200 >> 0x3f) + 0x8000 >> 0x10;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(long *)(param_1 + 0x50) =
               (long)(lVar23 * (ulong)uStack_204._2_2_ +
                      ((long)(lVar23 * (ulong)uStack_204._2_2_) >> 0x3f) + 0x8000) >> 0x10;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(long *)(param_1 + 0x60) =
               lVar24 * (short)auStack_74[0] + (lVar24 * (short)auStack_74[0] >> 0x3f) + 0x8000 >>
               0x10;
          *(long *)(param_1 + 0x68) =
               (long)(lVar24 * (ulong)(ushort)uStack_204 +
                      ((long)(lVar24 * (ulong)(ushort)uStack_204) >> 0x3f) + 0x8000) >> 0x10;
          *(undefined4 *)(param_1 + 0x90) = 0x62697473;
          *(undefined1 *)(param_1 + 0xb2) = 1;
          *(undefined8 *)(param_1 + 0xc0) = 0;
          return (long *)0x0;
        }
        return plVar17;
      }
    }
    else if ((uVar16 & 1) == 0) {
      return plVar17;
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return (long *)0x6;
  }
  if (((param_4 & 1) == 0) && ((char)param_2[0x1c] == '\0')) {
    return (long *)0x24;
  }
  if (((param_4 & 0x1100000) == 0x100000) && (plVar22[0xb4] != 0)) {
    lVar24 = plVar22[0x6e];
    lVar23 = param_1;
    (**(code **)(lVar24 + 0x178))(param_1,param_3);
    if ((int)lVar23 == 0) {
      lVar23 = param_2[4];
      lVar25 = param_2[5];
      *(undefined4 *)(param_1 + 0x90) = 0x53564720;
      (**(code **)(lVar24 + 0x150))(plVar22,0,param_3,&uStack_200,(long)&uStack_204 + 2);
      (**(code **)(lVar24 + 0x150))(plVar22,1,param_3,auStack_74,&uStack_204);
      lVar23 = lVar23 * (ulong)uStack_204._2_2_;
      *(long *)(param_1 + 0x50) = lVar23 + (lVar23 >> 0x3f) + 0x8000 >> 0x10;
      *(ulong *)(param_1 + 0x70) = (ulong)uStack_204._2_2_;
      *(ulong *)(param_1 + 0x78) = (ulong)(ushort)uStack_204;
      lVar25 = lVar25 * (ulong)(ushort)uStack_204;
      *(long *)(param_1 + 0x68) = lVar25 + (lVar25 >> 0x3f) + 0x8000 >> 0x10;
      return (long *)0x0;
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) {
    return (long *)0x6;
  }
  lVar23 = *(long *)(param_1 + 8);
  uVar27 = *(undefined8 *)(lVar23 + 0xc0);
  lVar24 = *(long *)(lVar23 + 0xb0);
  uStack_1f8 = (long *)0x0;
  uStack_200 = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  if ((param_4 >> 1 & 1) == 0) {
    uVar21 = uVar21 >> 7 & 1;
    uVar15 = *(uint *)(param_2 + 0x44);
    plVar22 = (long *)(ulong)uVar15;
    if ((int)uVar15 < 0) {
      lVar25 = *param_2;
      plVar17 = *(long **)(lVar25 + 0xb8);
      if (param_2[0x21] != 0) {
        (*(code *)plVar17[2])(plVar17);
      }
      param_2[0x21] = 0;
      if (param_2[0x23] != 0) {
        (*(code *)plVar17[2])(plVar17);
      }
      param_2[0x23] = 0;
      if (param_2[0x38] != 0) {
        (*(code *)plVar17[2])(plVar17);
      }
      param_2[0x38] = 0;
      if (param_2[0x3a] != 0) {
        (*(code *)plVar17[2])(plVar17);
      }
      param_2[0x3a] = 0;
      if (param_2[0x43] != 0) {
        FUN_10978b0b8();
      }
      func_0x00010978b178(param_2 + 0x3b);
      param_2[0x44] = -1;
      lVar14 = *(long *)(lVar25 + 0xb0);
      func_0x00010978299c();
      param_2[0x43] = lVar14;
      uVar11 = *(ushort *)(lVar25 + 0x1e0);
      *(uint *)((long)param_2 + 0x104) = (uint)uVar11;
      *(uint *)((long)param_2 + 0x114) = (uint)*(ushort *)(lVar25 + 0x1e2);
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x22) = 0;
      param_2[0x24] = 0;
      param_2[0x37] = *(long *)(lVar25 + 0x478);
      *(undefined2 *)(param_2 + 0x39) = *(undefined2 *)(lVar25 + 0x1de);
      *(undefined2 *)((long)param_2 + 0xe1) = 0;
      param_2[0x19] = 0;
      param_2[0x18] = 0;
      param_2[0x1b] = 0;
      param_2[0x1a] = 0;
      plVar22 = plVar17;
      FUN_1097539a8(plVar17,0x20,0,uVar11,0,auStack_74);
      param_2[0x21] = (long)plVar22;
      plVar22 = (long *)(ulong)auStack_74[0];
      if (auStack_74[0] == 0) {
        plVar22 = plVar17;
        FUN_1097539a8(plVar17,0x20,0,*(undefined4 *)((long)param_2 + 0x114),0,auStack_74);
        param_2[0x23] = (long)plVar22;
        plVar22 = (long *)(ulong)auStack_74[0];
        if (auStack_74[0] == 0) {
          plVar22 = plVar17;
          FUN_1097539a8(plVar17,8,0,param_2[0x37],0,auStack_74);
          param_2[0x38] = (long)plVar22;
          plVar22 = (long *)(ulong)auStack_74[0];
          if (auStack_74[0] == 0) {
            plVar22 = plVar17;
            FUN_1097539a8(plVar17,8,0,(short)param_2[0x39],0,auStack_74);
            param_2[0x3a] = (long)plVar22;
            plVar22 = (long *)(ulong)auStack_74[0];
            if (auStack_74[0] == 0) {
              sVar10 = *(short *)(lVar25 + 0x1dc);
              FUN_10978b218(plVar17,sVar10 + 4,param_2 + 0x3b);
              plVar22 = plVar17;
              if ((int)plVar17 == 0) {
                *(short *)((long)param_2 + 0x1e4) = sVar10 + 4;
                param_2[0x30] = 0x100000001;
                param_2[0x2f] = 0x40;
                param_2[0x32] = 0;
                param_2[0x31] = 0x44;
                param_2[0x34] = 0x30009;
                param_2[0x33] = 0;
                param_2[0x36] = 1;
                param_2[0x35] = 0x1000100000000;
                param_2[0x2c] = 0x4000000040000000;
                param_2[0x2b] = 0x4000000000000000;
                param_2[0x2e] = 1;
                param_2[0x2d] = 0;
                pcVar18 = *(code **)(*(long *)(*(long *)(lVar25 + 0xb0) + 8) + 0x138);
                pcVar6 = FUN_109782a1c;
                if (pcVar18 != (code *)0x0) {
                  pcVar6 = pcVar18;
                }
                *(code **)(lVar25 + 0x488) = pcVar6;
                plVar22 = param_2;
                FUN_10978b320(param_2,uVar21);
                goto LAB_109782250;
              }
            }
          }
        }
      }
      FUN_10978b430(param_2);
LAB_109782250:
      if ((int)plVar22 != 0) {
        return plVar22;
      }
      plVar17 = (long *)(ulong)*(uint *)((long)param_2 + 0x224);
      if ((int)*(uint *)((long)param_2 + 0x224) < 0) {
        uVar16 = (ulong)*(ushort *)((long)param_2 + 0x1e4);
        if (uVar16 != 0) {
          puVar19 = (undefined8 *)param_2[0x3d];
          puVar20 = (undefined8 *)param_2[0x3e];
          do {
            *puVar19 = 0;
            puVar19[1] = 0;
            *puVar20 = 0;
            puVar20[1] = 0;
            uVar16 = uVar16 - 1;
            puVar19 = puVar19 + 2;
            puVar20 = puVar20 + 2;
          } while (uVar16 != 0);
        }
        if ((ulong)*(ushort *)(param_2 + 0x39) != 0) {
          _bzero(param_2[0x3a],(ulong)*(ushort *)(param_2 + 0x39) << 3);
        }
        param_2[0x30] = 0x100000001;
        param_2[0x2f] = 0x40;
        param_2[0x32] = 0;
        param_2[0x31] = 0x44;
        param_2[0x34] = 0x30009;
        param_2[0x33] = 0;
        param_2[0x36] = 1;
        param_2[0x35] = 0x1000100000000;
        param_2[0x2c] = 0x4000000040000000;
        param_2[0x2b] = 0x4000000000000000;
        param_2[0x2e] = 1;
        param_2[0x2d] = 0;
        plVar17 = param_2;
        FUN_10978af40(param_2,uVar21);
      }
      uVar26 = (uint)plVar17;
    }
    else {
      uVar26 = *(uint *)((long)param_2 + 0x224);
      plVar17 = (long *)(ulong)uVar26;
      if ((int)uVar26 < 0) goto LAB_109782250;
      if (uVar15 != 0) {
        return plVar22;
      }
    }
    if (uVar26 != 0) {
      return plVar17;
    }
    plVar22 = (long *)param_2[0x43];
    if (plVar22 == (long *)0x0) {
      return (long *)0x99;
    }
    bVar12 = (param_4 & 0xf0000) != 0x20000;
    bVar13 = *(int *)(lVar24 + 0x78) == 0x28;
    bVar9 = 0;
    if (bVar13) {
      bVar9 = (byte)(param_4 >> 0x12) & 1;
    }
    bVar1 = !bVar13 && bVar12;
    bVar2 = bVar13 && bVar12;
    bVar3 = bVar13 && ((param_4 & 0x70000) == 0 && (param_4 & 0xf0000) != 0x20000);
    *(byte *)((long)plVar22 + 0x44a) = bVar9;
    plVar17 = plVar22;
    FUN_10978ad6c(plVar22,lVar23,param_2);
    if ((int)plVar17 != 0) {
      return plVar17;
    }
    if (*(int *)(lVar24 + 0x78) == 0x28) {
      cVar8 = *(char *)((long)plVar22 + 0x449);
      if (bVar2 != (bool)cVar8) {
        *(bool *)((long)plVar22 + 0x449) = bVar2;
      }
      if (bVar3 == (bool)*(char *)((long)plVar22 + 0x44e)) {
        if (bVar1 == (bool)(char)plVar22[0x89]) {
          if (bVar2 == (bool)cVar8) goto LAB_109782400;
        }
        else {
LAB_1097823cc:
          *(bool *)(plVar22 + 0x89) = bVar1;
        }
      }
      else {
        *(bool *)((long)plVar22 + 0x44e) = bVar3;
        if (bVar1 != (bool)(char)plVar22[0x89]) goto LAB_1097823cc;
      }
      plVar17 = param_2;
      FUN_10978af40(param_2,uVar21);
      if ((int)plVar17 != 0) {
        return plVar17;
      }
      plVar17 = plVar22;
      FUN_10978ad6c(plVar22,lVar23,param_2);
      if ((int)plVar17 != 0) {
        return plVar17;
      }
    }
    else if (bVar1 != (bool)(char)plVar22[0x89]) goto LAB_1097823cc;
LAB_109782400:
    bVar9 = *(byte *)((long)plVar22 + 0x264);
    uVar15 = (uint)bVar9;
    if ((bVar9 >> 1 & 1) != 0) {
      uVar15 = 0;
      plVar22[0x48] = 0x100000001;
      plVar22[0x47] = 0x40;
      plVar22[0x4a] = 0;
      plVar22[0x49] = 0x44;
      plVar22[0x4c] = 0x30009;
      plVar22[0x4b] = 0;
      plVar22[0x4e] = 1;
      plVar22[0x4d] = 0x1000100000000;
      plVar22[0x44] = 0x4000000040000000;
      plVar22[0x43] = 0x4000000000000000;
      plVar22[0x46] = 1;
      plVar22[0x45] = 0;
    }
    iVar7 = *(int *)(lVar24 + 0x78);
    if (((bVar13 && bVar12) && (iVar7 == 0x28)) &&
       ((*(byte *)(*(long *)(param_1 + 8) + 0x11) >> 5 & 1) == 0)) {
      uVar15 = uVar15 >> 2 & 1;
      *(byte *)((long)plVar22 + 1099) = (byte)uVar15 ^ 1;
    }
    else {
      *(undefined1 *)((long)plVar22 + 1099) = 0;
      uVar15 = 1;
    }
    lStack_88 = 0;
    *(byte *)((long)plVar22 + 0x3e9) = (byte)(param_4 >> 7) & 1;
    lStack_e8 = plVar22[0x5a];
    if (iVar7 != 0x28) {
      uVar15 = 1;
    }
    if ((uVar15 == 1) && ((uStack_1e0 & 0x200002) == 0)) {
      if (*(long *)(lVar23 + 0x308) == 0) {
        lStack_88 = param_2[0x1d];
      }
      else {
        lStack_88 = 0;
      }
    }
    uVar21 = (ulong)(int)(param_4 | (bVar9 & 1) << 1);
    plStack_f0 = plVar22;
  }
  lStack_1e8 = **(long **)(param_1 + 0x128);
  *(undefined4 *)(lStack_1e8 + 0x18) = 0;
  *(undefined4 *)(lStack_1e8 + 0x38) = 0;
  *(undefined4 *)(lStack_1e8 + 0x50) = 0;
  *(undefined8 *)(lStack_1e8 + 0xa0) = *(undefined8 *)(lStack_1e8 + 0x58);
  *(undefined8 *)(lStack_1e8 + 0x88) = *(undefined8 *)(lStack_1e8 + 0x40);
  *(undefined8 *)(lStack_1e8 + 0x80) = *(undefined8 *)(lStack_1e8 + 0x38);
  *(undefined8 *)(lStack_1e8 + 0x98) = *(undefined8 *)(lStack_1e8 + 0x50);
  *(undefined8 *)(lStack_1e8 + 0x90) = *(undefined8 *)(lStack_1e8 + 0x48);
  *(undefined8 *)(lStack_1e8 + 0x68) = *(undefined8 *)(lStack_1e8 + 0x20);
  *(undefined8 *)(lStack_1e8 + 0x60) = *(undefined8 *)(lStack_1e8 + 0x18);
  *(undefined8 *)(lStack_1e8 + 0x78) = *(undefined8 *)(lStack_1e8 + 0x30);
  *(undefined8 *)(lStack_1e8 + 0x70) = *(undefined8 *)(lStack_1e8 + 0x28);
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_200 = lVar23;
  uStack_1e0 = uVar21;
  uStack_1d0 = uVar27;
  if ((((param_4 >> 8 & 1) != 0) && ((param_4 >> 4 & 1) == 0)) && (lStack_88 != 0)) {
    plVar22 = (long *)0x0;
    *(ulong *)(param_1 + 0x50) = (ulong)*(byte *)(lStack_88 + (param_3 & 0xffffffff)) << 6;
    uStack_1f8 = param_2;
    lStack_1f0 = param_1;
    goto LAB_1097826d0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  plVar22 = &uStack_200;
  uStack_1f8 = param_2;
  lStack_1f0 = param_1;
  FUN_10978a238(plVar22,param_3,0,0);
  if ((int)plVar22 == 0) {
    if (*(int *)(param_1 + 0x90) == 0x636f6d70) {
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lStack_1e8 + 0x50);
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lStack_1e8 + 0x58);
    }
    else {
      uVar28 = *(undefined8 *)(lStack_1e8 + 0x20);
      uVar27 = *(undefined8 *)(lStack_1e8 + 0x18);
      uVar30 = *(undefined8 *)(lStack_1e8 + 0x30);
      uVar29 = *(undefined8 *)(lStack_1e8 + 0x28);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lStack_1e8 + 0x38);
      *(undefined8 *)(param_1 + 0xe0) = uVar30;
      *(undefined8 *)(param_1 + 0xd8) = uVar29;
      *(undefined8 *)(param_1 + 0xd0) = uVar28;
      *(undefined8 *)(param_1 + 200) = uVar27;
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfffffdff;
      if ((lStack_190 != 0) && (uVar11 = *(ushort *)(param_1 + 0xca), uVar11 != 0)) {
        uVar15 = 0;
        plVar17 = *(long **)(param_1 + 0xd0);
        do {
          *plVar17 = *plVar17 - lStack_190;
          uVar15 = uVar15 + 1;
          plVar17 = plVar17 + 2;
        } while (uVar15 < uVar11);
      }
    }
    if ((param_4 >> 1 & 1) == 0) {
      *(long *)(param_1 + 0x100) = plStack_f0[0x5a];
      *(ulong *)(param_1 + 0x108) = (ulong)*(uint *)(plStack_f0 + 0x59);
      if (*(char *)((long)plStack_f0 + 0x265) == '\0') {
LAB_109782694:
        uVar15 = 8;
      }
      else {
        iVar7 = (int)plStack_f0[0x4d];
        if (iVar7 < 4) {
          if (iVar7 != 0) {
            if (iVar7 == 1) goto LAB_1097826a4;
            goto LAB_109782694;
          }
          uVar15 = 0x20;
        }
        else if (iVar7 == 5) {
          uVar15 = 0x10;
        }
        else {
          if (iVar7 != 4) goto LAB_109782694;
          uVar15 = 0x30;
        }
      }
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar15;
    }
LAB_1097826a4:
    FUN_10978ab3c(&uStack_200,param_3);
  }
  if (((param_4 & 1) == 0) && (*(ushort *)(param_2[0xb] + 2) < 0x18)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
  }
LAB_1097826d0:
  lVar24 = *(long *)(uStack_200 + 0xb8);
  lVar23 = lStack_98;
  if (lVar24 != 0) {
    while (lVar23 != 0) {
      lVar23 = *(long *)(lVar23 + 8);
      (**(code **)(lVar24 + 0x10))(lVar24);
    }
    return plVar22;
  }
  return plVar22;
}



/* Entry: 109782710; end: 109782753;  */

undefined8 FUN_109782710(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x370);
  *param_4 = 0;
  param_4[1] = 0;
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x564) != 0)) {
    (**(code **)(lVar1 + 0xb0))();
    *param_4 = (long)(int)param_1;
  }
  return 0;
}



/* Entry: 109782754; end: 10978293f;  */

undefined8 FUN_109782754(long param_1,ulong param_2,uint param_3,uint param_4,ulong *param_5)

{
  ulong uVar1;
  ushort uStack_38;
  undefined1 auStack_36 [2];
  ushort uStack_34;
  undefined1 auStack_32 [2];
  
  uVar1 = *(ulong *)(param_1 + 8) & 0x7fff0000;
  if ((param_4 >> 4 & 1) == 0) {
    if (((uVar1 != 0) || (*(char *)(param_1 + 0x11) < '\0')) &&
       ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0)) {
      return 7;
    }
    if (param_3 != 0) {
      uVar1 = (ulong)param_3;
      do {
        (**(code **)(*(long *)(param_1 + 0x370) + 0x150))(param_1,0,param_2,auStack_36,&uStack_38);
        *param_5 = (ulong)uStack_38;
        param_2 = (ulong)((int)param_2 + 1);
        uVar1 = uVar1 - 1;
        param_5 = param_5 + 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (((uVar1 != 0) || (*(char *)(param_1 + 0x11) < '\0')) &&
       ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) == 0)) {
      return 7;
    }
    if (param_3 != 0) {
      uVar1 = (ulong)param_3;
      do {
        FUN_10978a1d0(param_1,param_2,0,auStack_32,&uStack_34);
        *param_5 = (ulong)uStack_34;
        param_2 = (ulong)((int)param_2 + 1);
        uVar1 = uVar1 - 1;
        param_5 = param_5 + 1;
      } while (uVar1 != 0);
    }
  }
  return 0;
}



/* Entry: 109782940; end: 109782a1b;  */

void FUN_109782940(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  param_1[0x1e] = param_2;
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x370) + 0xe8))(lVar1,param_2,param_1 + 3);
    if ((int)lVar1 != 0) {
      param_1[0x1e] = 0xffffffff;
    }
  }
  else {
    func_0x000109755214();
    FUN_10978cd04(param_1);
  }
  return;
}



/* Entry: 109782a1c; end: 1097852c7;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_109782a1c(long *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
  int *piVar31;
  byte bVar32;
  undefined4 uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  code *pcVar39;
  code *pcVar40;
  long lVar41;
  ulong uVar42;
  short sVar43;
  undefined2 uVar44;
  ushort uVar45;
  long lVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined8 uVar49;
  undefined1 (*pauVar50) [16];
  long *plVar51;
  ushort uVar52;
  int iVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  int iVar56;
  long lVar57;
  long lVar58;
  uint uVar59;
  uint uVar60;
  long lVar61;
  uint uVar62;
  long lVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  long *plStack_d8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ushort uStack_a2;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  
  uVar9 = *(ushort *)((long)param_1 + 0x114);
  uVar27 = param_1[0x55];
  uVar37 = (uVar27 + uVar9) * 2;
  if (uVar37 < 0x1f) {
    uVar37 = 0x1e;
  }
  if (uVar37 < *(ushort *)((long)param_1 + 0x154)) {
    *(short *)((long)param_1 + 0x154) = (short)uVar37;
  }
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  if (uVar9 == 0) {
    uVar37 = uVar27 * 0x16 + 300;
  }
  else {
    lVar28 = 0x32;
    if (4 < uVar9) {
      lVar28 = (ulong)uVar9 * 10;
    }
    uVar37 = 0x32;
    if (499 < uVar27) {
      uVar37 = uVar27 / 10;
    }
    uVar37 = lVar28 + uVar37;
  }
  uVar27 = *(long *)(*param_1 + 0x20) * 100;
  if (uVar27 <= uVar37) {
    uVar37 = uVar27;
  }
  param_1[0x8b] = uVar37;
  param_1[0x8d] = uVar37;
  param_1[0x3c] = 0;
  if ((short)param_1[0x32] == *(short *)((long)param_1 + 0x192)) {
    lVar28 = 0x109785484;
    pcVar39 = FUN_109785444;
    lVar34 = 0x109785438;
    pcVar40 = FUN_109785430;
  }
  else {
    lVar28 = 0x1097853a8;
    pcVar39 = FUN_10978532c;
    lVar34 = 0x1097852f8;
    pcVar40 = FUN_1097852c8;
  }
  puVar2 = (undefined4 *)((long)param_1 + 0x21e);
  param_1[0x85] = (long)pcVar40;
  param_1[0x86] = lVar34;
  param_1[0x87] = (long)pcVar39;
  param_1[0x88] = lVar28;
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)((long)param_1 + 0x27c);
  FUN_1097854cc(param_1);
  if ((*(uint *)(param_1 + 0x48) & 0xf8) == 0) {
    param_1[0x7f] = (long)(&PTR_DAT_110b0d4e8)[(ulong)*(uint *)(param_1 + 0x48) & 7];
  }
  uVar37 = 0;
  *(undefined2 *)((long)param_1 + 0x44c) = 0;
  lVar28 = param_1[0x51];
  lVar34 = param_1[0x52];
  do {
    lVar46 = param_1[0x50];
    bVar32 = *(byte *)(lVar46 + lVar28);
    uVar27 = (ulong)bVar32;
    *(byte *)(param_1 + 0x53) = bVar32;
    cVar10 = (&UNK_10dff9620)[bVar32];
    iVar53 = (int)cVar10;
    *(int *)((long)param_1 + 0x29c) = (int)cVar10;
    if ((bVar32 & 0xfe) == 0x40) {
      if (lVar28 + 1 < lVar34) {
        iVar53 = 2 - (uint)*(byte *)(lVar46 + lVar28 + 1) * (int)cVar10;
        *(int *)((long)param_1 + 0x29c) = iVar53;
        goto LAB_109782be0;
      }
      goto LAB_109785260;
    }
LAB_109782be0:
    if (lVar34 < lVar28 + iVar53) goto LAB_109785260;
    bVar8 = (&UNK_10dff9720)[uVar27];
    lVar28 = param_1[4] - (ulong)(bVar8 >> 4);
    param_1[7] = lVar28;
    if (lVar28 < 0) {
      if (*(char *)((long)param_1 + 0x3e9) != '\0') {
        uVar35 = 0x81;
        goto LAB_109785228;
      }
      if (0xf < bVar8) {
        _bzero(param_1[6],((uint)(bVar8 >> 4) * 8 + 0x7fff8 & 0x7fff8) + 8);
      }
      lVar28 = 0;
      param_1[7] = 0;
    }
    if (bVar32 == 0x91) {
      if (*(uint **)(*param_1 + 0x4c0) != (uint *)0x0) {
        uVar35 = (ulong)**(uint **)(*param_1 + 0x4c0);
        goto LAB_109782c54;
      }
      lVar34 = param_1[8];
    }
    else {
      uVar35 = (ulong)bVar8 & 0xf;
LAB_109782c54:
      lVar34 = lVar28 + uVar35;
      param_1[8] = lVar34;
    }
    if (param_1[5] < lVar34) goto LAB_10978524c;
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 3) = 0;
    lVar41 = param_1[6];
    pauVar50 = (undefined1 (*) [16])(lVar41 + lVar28 * 8);
    if (0x92 < bVar32) {
      if (bVar32 < 0xe0) {
        if (bVar32 < 0xc0) {
          if (0xb7 < bVar32) {
            FUN_109785e0c(param_1,pauVar50);
            goto LAB_109784d30;
          }
          if (0xaf < bVar32) {
            func_0x000109785e90(param_1,pauVar50);
            goto LAB_109784d30;
          }
          goto LAB_109783808;
        }
        FUN_109785be4(param_1,*(undefined8 *)*pauVar50);
      }
      else {
        FUN_10978595c(param_1,*(undefined8 *)*pauVar50,*(undefined8 *)(*pauVar50 + 8));
      }
      goto LAB_109784d30;
    }
    uVar35 = 0x87;
    iVar56 = (int)param_1[5];
    plVar18 = param_1;
    switch(uVar27) {
    default:
      uVar45 = (bVar32 & 1) << 0xe;
      uVar9 = uVar45 ^ 0x4000;
      if (bVar32 < 4) {
        *(ushort *)((long)param_1 + 0x222) = uVar45;
        *(ushort *)((long)param_1 + 0x224) = uVar9;
        *(ushort *)((long)param_1 + 0x21e) = uVar45;
        *(ushort *)(param_1 + 0x44) = uVar9;
      }
      if ((bVar32 >> 1 & 1) == 0) {
        *(ushort *)((long)param_1 + 0x226) = uVar45;
        *(ushort *)(param_1 + 0x45) = uVar9;
      }
      goto code_r0x000109783a8c;
    case 6:
    case 7:
      FUN_10978d4ec(param_1,*(undefined2 *)(*pauVar50 + 8),*(undefined2 *)*pauVar50,
                    (long)param_1 + 0x222);
      if (((ulong)plVar18 & 1) == 0) {
        *puVar2 = *(undefined4 *)((long)param_1 + 0x222);
        goto code_r0x000109783a8c;
      }
      break;
    case 8:
    case 9:
      FUN_10978d4ec(param_1,*(undefined2 *)(*pauVar50 + 8),*(undefined2 *)*pauVar50,
                    (long)param_1 + 0x226);
      if (((ulong)plVar18 & 1) == 0) goto code_r0x000109783a8c;
      break;
    case 10:
      FUN_10978d588((long)*(short *)*pauVar50,(long)*(short *)(*pauVar50 + 8),(long)param_1 + 0x222)
      ;
      *puVar2 = *(undefined4 *)((long)param_1 + 0x222);
      goto code_r0x000109783a8c;
    case 0xb:
      lVar46 = (long)*(short *)(*pauVar50 + 8);
      lVar41 = (long)*(short *)*pauVar50;
      lVar28 = (long)param_1 + 0x226;
      goto code_r0x000109783528;
    case 0xc:
      *(long *)*pauVar50 = (long)*(short *)((long)param_1 + 0x222);
      lVar28 = (long)*(short *)((long)param_1 + 0x224);
      goto code_r0x00010978385c;
    case 0xd:
      *(long *)*pauVar50 = (long)*(short *)((long)param_1 + 0x226);
      lVar28 = (long)(short)param_1[0x45];
      goto code_r0x00010978385c;
    case 0xe:
      *(undefined4 *)((long)param_1 + 0x226) = *(undefined4 *)((long)param_1 + 0x222);
      goto code_r0x000109783a8c;
    case 0xf:
      if (((uint)*(ulong *)(pauVar50[1] + 8) & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54) &&
          ((uint)*(ulong *)pauVar50[2] & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) {
        if ((((uint)*(ulong *)(*pauVar50 + 8) & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94) &&
             ((uint)*(ulong *)pauVar50[1] & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) &&
           (uVar27 = *(ulong *)*pauVar50,
           ((uint)uVar27 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4))) {
          plVar18 = (long *)(param_1[0xc] + (*(ulong *)pauVar50[2] & 0xffff) * 0x10);
          plVar19 = (long *)(param_1[0xc] + (*(ulong *)(pauVar50[1] + 8) & 0xffff) * 0x10);
          plVar51 = (long *)(param_1[0x14] + (*(ulong *)pauVar50[1] & 0xffff) * 0x10);
          plVar5 = (long *)(param_1[0x14] + (*(ulong *)(*pauVar50 + 8) & 0xffff) * 0x10);
          uVar29 = *plVar18 - *plVar19;
          uVar22 = plVar18[1] - plVar19[1];
          lVar28 = *plVar5;
          lVar34 = plVar5[1];
          uVar38 = *plVar51 - lVar28;
          uVar36 = plVar51[1] - lVar34;
          uVar35 = -uVar22;
          if (-1 < (long)uVar22) {
            uVar35 = uVar22;
          }
          uVar42 = -uVar38;
          if (-1 < (long)uVar38) {
            uVar42 = uVar38;
          }
          uVar17 = uVar42 * uVar35 + 0x20 >> 6;
          uVar23 = -uVar17;
          if ((long)(uVar38 ^ uVar22 - 1) < 0) {
            uVar23 = uVar17;
          }
          uVar17 = -uVar29;
          if (-1 < (long)uVar29) {
            uVar17 = uVar29;
          }
          uVar24 = -uVar36;
          if (-1 < (long)uVar36) {
            uVar24 = uVar36;
          }
          uVar25 = uVar24 * uVar17 + 0x20 >> 6;
          uVar6 = -uVar25;
          if (-1 < (long)(uVar36 ^ uVar29)) {
            uVar6 = uVar25;
          }
          lVar46 = uVar6 + uVar23;
          uVar23 = uVar42 * uVar17 + 0x20 >> 6;
          uVar42 = -uVar23;
          if (-1 < (long)(uVar38 ^ uVar29)) {
            uVar42 = uVar23;
          }
          uVar24 = uVar24 * uVar35 + 0x20 >> 6;
          uVar23 = -uVar24;
          if (-1 < (long)(uVar36 ^ uVar22)) {
            uVar23 = uVar24;
          }
          lVar41 = uVar23 + uVar42;
          lVar57 = -lVar46;
          if (-1 < lVar46) {
            lVar57 = lVar46;
          }
          lVar58 = -lVar41;
          if (-1 < lVar41) {
            lVar58 = lVar41;
          }
          if (lVar57 * 0x13 - lVar58 == 0 || lVar57 * 0x13 < lVar58) {
            lVar28 = *plVar19 + *plVar18 + *plVar51 + *plVar5;
            lVar34 = plVar51[1] + plVar5[1] + plVar19[1] + plVar18[1];
            plVar18 = (long *)(param_1[0x1c] + (uVar27 & 0xffff) * 0x10);
            plVar18[1] = (long)(lVar34 + (-(ulong)(lVar34 < 0) >> 0x3e)) >> 2;
            *plVar18 = (long)(lVar28 + (-(ulong)(lVar28 < 0) >> 0x3e)) >> 2;
          }
          else {
            uVar24 = plVar19[1] - lVar34;
            uVar23 = *plVar19 - lVar28;
            uVar42 = -uVar23;
            if (-1 < (long)uVar23) {
              uVar42 = uVar23;
            }
            uVar42 = uVar42 * uVar35 + 0x20 >> 6;
            uVar35 = -uVar42;
            if ((long)(uVar23 ^ uVar22 - 1) < 0) {
              uVar35 = uVar42;
            }
            uVar22 = -uVar24;
            if (-1 < (long)uVar24) {
              uVar22 = uVar24;
            }
            uVar42 = uVar22 * uVar17 + 0x20 >> 6;
            uVar22 = -uVar42;
            if (-1 < (long)(uVar24 ^ uVar29)) {
              uVar22 = uVar42;
            }
            lVar41 = uVar22 + uVar35;
            FUN_1097532ac(lVar41,uVar38,lVar46);
            lVar57 = uVar22 + uVar35;
            FUN_1097532ac(lVar57,uVar36,lVar46);
            plVar18 = (long *)(param_1[0x1c] + (uVar27 & 0xffff) * 0x10);
            *plVar18 = lVar41 + lVar28;
            plVar18[1] = lVar34 + lVar57;
          }
          *(byte *)(param_1[0x1e] + (uVar27 & 0xffff)) =
               *(byte *)(param_1[0x1e] + (uVar27 & 0xffff)) | 0x18;
          break;
        }
      }
      goto code_r0x000109784140;
    case 0x10:
      *(short *)(param_1 + 0x43) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x11:
      *(short *)((long)param_1 + 0x21a) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x12:
      *(short *)((long)param_1 + 0x21c) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x13:
      if (*(int *)*pauVar50 == 0) {
        lVar28 = 0x148;
      }
      else {
        if (*(int *)*pauVar50 != 1) goto code_r0x000109784140;
        lVar28 = 0x108;
      }
      plVar18 = (long *)((long)param_1 + lVar28);
      lVar28 = *plVar18;
      lVar46 = plVar18[3];
      lVar34 = plVar18[2];
      param_1[10] = plVar18[1];
      param_1[9] = lVar28;
      param_1[0xc] = lVar46;
      param_1[0xb] = lVar34;
      auVar55 = *(undefined1 (*) [16])(plVar18 + 4);
      lVar34 = plVar18[7];
      lVar28 = plVar18[6];
      param_1[0xe] = auVar55._8_8_;
      param_1[0xd] = auVar55._0_8_;
      param_1[0x10] = lVar34;
      param_1[0xf] = lVar28;
      *(short *)((long)param_1 + 0x26c) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x14:
      if (*(int *)*pauVar50 == 0) {
        lVar28 = 0x148;
      }
      else {
        if (*(int *)*pauVar50 != 1) goto code_r0x000109784140;
        lVar28 = 0x108;
      }
      plVar18 = (long *)((long)param_1 + lVar28);
      lVar28 = *plVar18;
      lVar46 = plVar18[3];
      lVar34 = plVar18[2];
      param_1[0x12] = plVar18[1];
      param_1[0x11] = lVar28;
      param_1[0x14] = lVar46;
      param_1[0x13] = lVar34;
      auVar55 = *(undefined1 (*) [16])(plVar18 + 4);
      lVar34 = plVar18[7];
      lVar28 = plVar18[6];
      param_1[0x16] = auVar55._8_8_;
      param_1[0x15] = auVar55._0_8_;
      param_1[0x18] = lVar34;
      param_1[0x17] = lVar28;
      *(short *)((long)param_1 + 0x26e) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x15:
      if (*(int *)*pauVar50 == 0) {
        lVar28 = 0x148;
      }
      else {
        if (*(int *)*pauVar50 != 1) goto code_r0x000109784140;
        lVar28 = 0x108;
      }
      plVar18 = (long *)((long)param_1 + lVar28);
      lVar28 = *plVar18;
      lVar46 = plVar18[3];
      lVar34 = plVar18[2];
      param_1[0x1a] = plVar18[1];
      param_1[0x19] = lVar28;
      param_1[0x1c] = lVar46;
      param_1[0x1b] = lVar34;
      auVar55 = *(undefined1 (*) [16])(plVar18 + 4);
      lVar34 = plVar18[7];
      lVar28 = plVar18[6];
      param_1[0x1e] = auVar55._8_8_;
      param_1[0x1d] = auVar55._0_8_;
      param_1[0x20] = lVar34;
      param_1[0x1f] = lVar28;
      *(short *)(param_1 + 0x4e) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x16:
      if (*(int *)*pauVar50 == 0) {
        lVar28 = 0x148;
      }
      else {
        if (*(int *)*pauVar50 != 1) goto code_r0x000109784140;
        lVar28 = 0x108;
      }
      pauVar4 = (undefined1 (*) [16])((long)param_1 + lVar28);
      auVar55 = *pauVar4;
      lVar41 = *(long *)(pauVar4[1] + 8);
      lVar46 = *(long *)pauVar4[1];
      lVar34 = auVar55._8_8_;
      param_1[10] = lVar34;
      lVar28 = auVar55._0_8_;
      param_1[9] = lVar28;
      param_1[0xc] = lVar41;
      param_1[0xb] = lVar46;
      lVar58 = *(long *)(pauVar4[2] + 8);
      lVar57 = *(long *)pauVar4[2];
      lVar63 = *(long *)(pauVar4[3] + 8);
      lVar61 = *(long *)pauVar4[3];
      param_1[0xe] = lVar58;
      param_1[0xd] = lVar57;
      param_1[0x10] = lVar63;
      param_1[0xf] = lVar61;
      param_1[0x12] = lVar34;
      param_1[0x11] = lVar28;
      param_1[0x14] = lVar41;
      param_1[0x13] = lVar46;
      param_1[0x16] = lVar58;
      param_1[0x15] = lVar57;
      param_1[0x18] = lVar63;
      param_1[0x17] = lVar61;
      param_1[0x20] = lVar63;
      param_1[0x1f] = lVar61;
      param_1[0x1a] = lVar34;
      param_1[0x19] = lVar28;
      param_1[0x1c] = lVar41;
      param_1[0x1b] = lVar46;
      param_1[0x1e] = lVar58;
      param_1[0x1d] = lVar57;
      uVar44 = *(undefined2 *)*pauVar50;
      *(undefined2 *)((long)param_1 + 0x26c) = uVar44;
      *(undefined2 *)((long)param_1 + 0x26e) = uVar44;
      *(undefined2 *)(param_1 + 0x4e) = uVar44;
      break;
    case 0x17:
      uVar27 = *(ulong *)*pauVar50;
      if (-1 < (long)uVar27) {
        if (0xfffe < uVar27) {
          uVar27 = 0xffff;
        }
        param_1[0x46] = uVar27;
        break;
      }
      goto LAB_109785290;
    case 0x18:
      *(undefined4 *)(param_1 + 0x48) = 1;
      lVar28 = 0x10978d310;
      goto code_r0x000109784034;
    case 0x19:
      *(undefined4 *)(param_1 + 0x48) = 0;
      lVar28 = 0x10978d3b0;
      goto code_r0x000109784034;
    case 0x1a:
      param_1[0x47] = *(long *)*pauVar50;
      break;
    case 0x1b:
      iVar53 = 1;
      do {
        plVar18 = param_1;
        FUN_10978d5ec();
        if (((ulong)plVar18 & 1) != 0) break;
        iVar56 = iVar53 + -1;
        if ((char)param_1[0x53] == 'X') {
          iVar53 = iVar53 + 1;
        }
        if ((char)param_1[0x53] != 'Y') {
          iVar56 = iVar53;
        }
        iVar53 = iVar56;
      } while (iVar56 != 0);
      break;
    case 0x1c:
code_r0x000109783eac:
      func_0x000109785610(param_1,pauVar50);
      break;
    case 0x1d:
      param_1[0x49] = *(long *)*pauVar50;
      break;
    case 0x1e:
      param_1[0x4a] = *(long *)*pauVar50;
      break;
    case 0x1f:
      lVar28 = param_1[0x3d] * *(long *)*pauVar50;
      param_1[0x4b] = lVar28 + (lVar28 >> 0x3f) + 0x8000 >> 0x10;
      break;
    case 0x20:
      lVar28 = *(long *)*pauVar50;
code_r0x00010978385c:
      *(long *)(*pauVar50 + 8) = lVar28;
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      param_1[4] = lVar34;
      goto code_r0x000109784d90;
    case 0x22:
      param_1[8] = 0;
      break;
    case 0x23:
      auVar55 = NEON_ext(*pauVar50,*pauVar50,8,1);
      goto code_r0x00010978416c;
    case 0x24:
      uVar27 = param_1[4];
      goto code_r0x000109784070;
    case 0x25:
      lVar34 = *(long *)*pauVar50;
      if (lVar34 < 1 || lVar28 < lVar34) {
        if (*(char *)((long)param_1 + 0x3e9) == '\0') {
code_r0x0001097843bc:
          uVar27 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 3) = 0x86;
          uVar27 = 0;
        }
      }
      else {
        uVar27 = *(ulong *)(lVar41 + (lVar28 - lVar34) * 8);
      }
      goto code_r0x000109784070;
    case 0x26:
      lVar34 = *(long *)*pauVar50;
      if (lVar34 < 1 || lVar28 < lVar34) goto code_r0x000109784140;
      puVar1 = (undefined8 *)(lVar41 + (lVar28 - lVar34) * 8);
      uVar49 = *puVar1;
      _memmove(puVar1,puVar1 + 1,lVar34 * 8 + -8);
      *(undefined8 *)(param_1[6] + param_1[7] * 8 + -8) = uVar49;
      break;
    case 0x27:
      uVar54 = (uint)*(ulong *)*pauVar50;
      if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) {
        uVar66 = (uint)*(ulong *)(*pauVar50 + 8);
        if ((uVar66 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) {
          plVar18 = (long *)(param_1[0xc] + (*(ulong *)(*pauVar50 + 8) & 0xffff) * 0x10);
          plVar19 = (long *)(param_1[0x14] + (*(ulong *)*pauVar50 & 0xffff) * 0x10);
          plVar51 = param_1;
          (*(code *)param_1[0x80])(param_1,*plVar18 - *plVar19,plVar18[1] - plVar19[1]);
          (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar54 & 0xffff,(long)plVar51 / 2);
          (*(code *)param_1[0x83])(param_1,param_1 + 9,uVar66 & 0xffff,-((long)plVar51 / 2));
          break;
        }
      }
      goto code_r0x000109784140;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
code_r0x000109783804:
LAB_109783808:
      func_0x000109785690(param_1);
      break;
    case 0x29:
      if ((uint)*(ushort *)((long)param_1 + 0x54) <= ((uint)*(ulong *)*pauVar50 & 0xffff))
      goto code_r0x000109784140;
      bVar32 = 0xf7;
      if (*(short *)((long)param_1 + 0x226) == 0) {
        bVar32 = 0xff;
      }
      if ((short)param_1[0x45] != 0) {
        bVar32 = bVar32 & 0xef;
      }
      uVar27 = *(ulong *)*pauVar50 & 0xffff;
      *(byte *)(param_1[0xe] + uVar27) = bVar32 & *(byte *)(param_1[0xe] + uVar27);
      break;
    case 0x2a:
      uVar27 = *(ulong *)(*pauVar50 + 8);
      uVar54 = (int)param_1[0x5f] + 1;
      if (uVar27 < uVar54) {
        piVar31 = (int *)param_1[0x5c];
        if ((uVar54 != *(uint *)(param_1 + 0x5b)) ||
           (piVar30 = piVar31 + uVar27 * 8, uVar27 != (uint)piVar30[6])) {
          piVar30 = piVar31;
          piVar7 = (int *)0x0;
          if (piVar31 != (int *)0x0) {
            piVar7 = piVar31 + (ulong)*(uint *)(param_1 + 0x5b) * 8;
          }
          for (; (piVar30 < piVar7 && (uVar27 != (uint)piVar30[6])); piVar30 = piVar30 + 8) {
          }
          if (piVar30 == piVar7) goto code_r0x00010978469c;
        }
        if ((char)piVar30[7] == '\0') goto code_r0x00010978469c;
        iVar53 = (int)param_1[0x60];
        if (iVar53 < *(int *)((long)param_1 + 0x304)) {
          if (*(long *)*pauVar50 < 1) break;
          puVar47 = (undefined4 *)(param_1[0x61] + (long)iVar53 * 0x20);
          *puVar47 = *(undefined4 *)((long)param_1 + 0x27c);
          *(long *)(puVar47 + 2) = param_1[0x51] + 1;
          *(long *)(puVar47 + 4) = (long)*(int *)*pauVar50;
          *(int **)(puVar47 + 6) = piVar30;
          *(int *)(param_1 + 0x60) = iVar53 + 1;
          iVar53 = *piVar30;
          if (iVar53 - 4U < 0xfffffffd) {
            uVar33 = 0x84;
code_r0x0001097851e4:
            *(undefined4 *)(param_1 + 3) = uVar33;
          }
          else {
            lVar28 = param_1[(ulong)(iVar53 - 1) * 2 + 99];
            if (lVar28 == 0) {
              uVar33 = 0x8a;
              goto code_r0x0001097851e4;
            }
            lVar34 = *(long *)(piVar30 + 2);
            lVar46 = (param_1 + (ulong)(iVar53 - 1) * 2 + 99)[1];
            if (lVar46 < lVar34) {
              uVar33 = 0x83;
              goto code_r0x0001097851e4;
            }
            param_1[0x50] = lVar28;
            param_1[0x52] = lVar46;
            param_1[0x51] = lVar34;
            *(int *)((long)param_1 + 0x27c) = iVar53;
          }
          *(undefined1 *)(param_1 + 0x54) = 0;
          uVar27 = param_1[0x8a] + *(long *)*pauVar50;
          param_1[0x8a] = uVar27;
          if (uVar27 <= (ulong)param_1[0x8b]) break;
          uVar35 = 0x8b;
        }
        else {
          uVar35 = 0x82;
        }
      }
      else {
code_r0x00010978469c:
        uVar35 = 0x86;
      }
      *(int *)(param_1 + 3) = (int)uVar35;
      goto code_r0x000109784d34;
    case 0x2b:
      uVar27 = *(ulong *)*pauVar50;
      uVar54 = (int)param_1[0x5f] + 1;
      if ((uVar27 < uVar54) && (piVar31 = (int *)param_1[0x5c], piVar31 != (int *)0x0)) {
        uVar66 = *(uint *)(param_1 + 0x5b);
        if ((uVar54 != uVar66) || (piVar30 = piVar31 + uVar27 * 8, uVar27 != (uint)piVar30[6])) {
          piVar7 = piVar31 + (ulong)uVar66 * 8;
          piVar30 = piVar31;
          if (uVar66 != 0) {
            do {
              piVar30 = piVar31;
              if (uVar27 == (uint)piVar31[6]) break;
              piVar31 = piVar31 + 8;
              piVar30 = piVar31;
            } while (piVar31 < piVar7);
          }
          if (piVar30 == piVar7) goto LAB_109785278;
        }
        if ((char)piVar30[7] != '\0') {
          iVar53 = (int)param_1[0x60];
          if (*(int *)((long)param_1 + 0x304) <= iVar53) goto LAB_10978524c;
          puVar47 = (undefined4 *)(param_1[0x61] + (long)iVar53 * 0x20);
          *puVar47 = *(undefined4 *)((long)param_1 + 0x27c);
          *(long *)(puVar47 + 2) = param_1[0x51] + 1;
          *(undefined8 *)(puVar47 + 4) = 1;
          *(int **)(puVar47 + 6) = piVar30;
          *(int *)(param_1 + 0x60) = iVar53 + 1;
          iVar53 = *piVar30;
          if (iVar53 - 4U < 0xfffffffd) {
            uVar33 = 0x84;
code_r0x000109784c84:
            *(undefined4 *)(param_1 + 3) = uVar33;
          }
          else {
            lVar28 = param_1[(ulong)(iVar53 - 1) * 2 + 99];
            if (lVar28 == 0) {
              uVar33 = 0x8a;
              goto code_r0x000109784c84;
            }
            lVar34 = *(long *)(piVar30 + 2);
            lVar46 = (param_1 + (ulong)(iVar53 - 1) * 2 + 99)[1];
            if (lVar46 < lVar34) {
              uVar33 = 0x83;
              goto code_r0x000109784c84;
            }
            param_1[0x50] = lVar28;
            param_1[0x52] = lVar46;
            param_1[0x51] = lVar34;
            *(int *)((long)param_1 + 0x27c) = iVar53;
          }
          *(undefined1 *)(param_1 + 0x54) = 0;
          break;
        }
      }
      goto LAB_109785278;
    case 0x2c:
      if ((int)param_1[0x4f] == 3) {
code_r0x0001097852a0:
        uVar35 = 0x9c;
        goto LAB_109785228;
      }
      puVar47 = (undefined4 *)param_1[0x5c];
      if (puVar47 == (undefined4 *)0x0) {
        uVar27 = *(ulong *)*pauVar50;
        uVar54 = *(uint *)(param_1 + 0x5b);
        puVar48 = puVar47;
code_r0x0001097846b8:
        if (uVar54 < *(uint *)((long)param_1 + 0x2dc)) {
          *(uint *)(param_1 + 0x5b) = uVar54 + 1;
          puVar47 = puVar48;
          goto code_r0x0001097846cc;
        }
      }
      else {
        uVar54 = *(uint *)(param_1 + 0x5b);
        puVar48 = puVar47 + (ulong)uVar54 * 8;
        uVar27 = *(ulong *)*pauVar50;
        if (uVar54 != 0) {
          do {
            if (uVar27 == (uint)puVar47[6]) break;
            puVar47 = puVar47 + 8;
          } while (puVar47 < puVar48);
        }
        if (puVar47 == puVar48) goto code_r0x0001097846b8;
code_r0x0001097846cc:
        if (uVar27 >> 0x10 == 0) {
          *puVar47 = *(undefined4 *)((long)param_1 + 0x27c);
          puVar47[6] = (int)uVar27;
          *(long *)(puVar47 + 2) = param_1[0x51] + 1;
          *(undefined1 *)(puVar47 + 7) = 1;
          if (*(uint *)(param_1 + 0x5f) < uVar27) {
            *(int *)(param_1 + 0x5f) = (int)uVar27;
          }
          do {
            plVar18 = param_1;
            FUN_10978d5ec();
            if (((ulong)plVar18 & 1) != 0) goto LAB_109784d30;
            cVar10 = (char)param_1[0x53];
            if ((cVar10 == ',') || (cVar10 == -0x77)) goto code_r0x000109785288;
          } while (cVar10 != '-');
          goto code_r0x00010978472c;
        }
      }
      uVar35 = 0x8c;
      goto LAB_109785228;
    case 0x2d:
      iVar53 = (int)param_1[0x60];
      if (iVar53 < 1) {
        uVar35 = 0x88;
        goto LAB_109785228;
      }
      *(uint *)(param_1 + 0x60) = iVar53 - 1U;
      piVar31 = (int *)(param_1[0x61] + (ulong)(iVar53 - 1U) * 0x20);
      lVar28 = *(long *)(piVar31 + 4);
      *(long *)(piVar31 + 4) = lVar28 + -1;
      *(undefined1 *)(param_1 + 0x54) = 0;
      if (1 < lVar28) {
        *(int *)(param_1 + 0x60) = iVar53;
        param_1[0x51] = *(long *)(*(long *)(piVar31 + 6) + 8);
        break;
      }
      iVar53 = *piVar31;
      if (iVar53 - 4U < 0xfffffffd) goto LAB_109785290;
      lVar28 = param_1[(ulong)(iVar53 - 1) * 2 + 99];
      if (lVar28 != 0) {
        lVar34 = *(long *)(piVar31 + 2);
        lVar46 = (param_1 + (ulong)(iVar53 - 1) * 2 + 99)[1];
        if (lVar46 < lVar34) goto LAB_109785260;
        param_1[0x50] = lVar28;
        param_1[0x52] = lVar46;
        param_1[0x51] = lVar34;
        *(int *)((long)param_1 + 0x27c) = iVar53;
        break;
      }
      goto LAB_109785298;
    case 0x2e:
    case 0x2f:
      uVar54 = (uint)*(ulong *)*pauVar50;
      if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) {
        if ((bVar32 & 1) == 0) {
          lVar28 = 0;
        }
        else {
          puVar1 = (undefined8 *)(param_1[0xc] + (*(ulong *)*pauVar50 & 0xffff) * 0x10);
          (*(code *)param_1[0x80])(param_1,*puVar1,puVar1[1]);
          plVar19 = param_1;
          (*(code *)param_1[0x7f])(param_1,plVar18,3);
          lVar28 = (long)plVar19 - (long)plVar18;
        }
        pcVar39 = (code *)param_1[0x83];
code_r0x000109784bc4:
        uVar44 = (undefined2)uVar54;
        (*pcVar39)(param_1,param_1 + 9,uVar54 & 0xffff,lVar28);
        goto code_r0x000109784bd4;
      }
      goto code_r0x000109784140;
    case 0x30:
    case 0x31:
      if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
         (*(char *)((long)param_1 + 1099) != '\0')) {
        if ((*(char *)((long)param_1 + 0x44c) != '\0') && (*(char *)((long)param_1 + 0x44d) != '\0')
           ) break;
        if ((bVar32 & 1) == 0) {
          *(undefined1 *)((long)param_1 + 0x44d) = 1;
        }
        else {
          *(undefined1 *)((long)param_1 + 0x44c) = 1;
        }
      }
      if (*(short *)((long)param_1 + 0x116) != 0) {
        uVar27 = param_1[0x23];
        if ((bVar32 & 1) == 0) {
          uVar27 = uVar27 + 8;
          auVar55._0_8_ = param_1[0x24] + 8;
          auVar55._8_8_ = param_1[0x25] + 8;
          bVar32 = 0x10;
        }
        else {
          auVar55 = *(undefined1 (*) [16])(param_1 + 0x24);
          bVar32 = 8;
        }
        uVar35 = 0;
        sVar43 = 0;
        uStack_90 = auVar55._8_8_;
        lVar28 = auVar55._0_8_;
        uStack_88 = (uint)*(ushort *)((long)param_1 + 0x114);
        uStack_a0 = uVar27;
        lStack_98 = lVar28;
code_r0x000109784940:
        uVar54 = (uint)*(ushort *)(param_1[0x27] + (long)sVar43 * 2) -
                 (uint)*(ushort *)(param_1 + 0x28);
        if (*(ushort *)((long)param_1 + 0x114) <= uVar54) {
          uVar54 = *(ushort *)((long)param_1 + 0x114) - 1;
        }
        uVar22 = uVar35;
        if ((uint)uVar35 <= uVar54) {
          uVar38 = uVar35;
          do {
            uVar59 = (uint)uVar38;
            uVar66 = uVar59 + 1;
            uVar29 = (ulong)uVar66;
            uVar22 = uVar29;
            if ((bVar32 & *(byte *)(param_1[0x26] + uVar38)) != 0) {
              uVar36 = uVar38;
              uVar42 = uVar38;
              if (uVar66 <= uVar54) goto code_r0x0001097849b0;
              goto code_r0x0001097849fc;
            }
            uVar38 = uVar29;
          } while (uVar66 <= uVar54);
        }
        goto code_r0x000109784ac4;
      }
      break;
    case 0x32:
    case 0x33:
      if (param_1[4] < param_1[0x46]) {
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
        }
      }
      else {
        FUN_10978d7bc(param_1,&uStack_b0,&uStack_b8,&uStack_a0,&uStack_a2);
        uVar13 = uStack_b0;
        uVar49 = uStack_b8;
        if (((ulong)plVar18 & 1) != 0) break;
        lVar28 = param_1[0x46];
        if (0 < lVar28) {
          do {
            lVar34 = param_1[7];
            param_1[7] = lVar34 + -1;
            uVar54 = (uint)*(undefined8 *)(param_1[6] + (lVar34 + -1) * 8);
            if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4)) {
              func_0x00010978d914(param_1,uVar54 & 0xffff,uVar13,uVar49,1);
              lVar34 = param_1[0x46];
            }
            else {
              lVar34 = lVar28;
              if (*(char *)((long)param_1 + 0x3e9) != '\0') {
                *(undefined4 *)(param_1 + 3) = 0x86;
                goto LAB_109784d30;
              }
            }
            lVar28 = lVar34 + -1;
            param_1[0x46] = lVar28;
          } while (lVar28 != 0 && 0 < lVar34);
        }
      }
      param_1[0x46] = 1;
      goto code_r0x000109784188;
    case 0x34:
    case 0x35:
      if ((short)param_1[0x4e] == 0) {
        uVar54 = 1;
      }
      else {
        uVar54 = (uint)*(ushort *)((long)param_1 + 0xd6);
      }
      uVar27 = *(ulong *)*pauVar50;
      uVar66 = (uint)uVar27 & 0xffff;
      if (uVar66 < uVar54) {
        FUN_10978d7bc(param_1,&uStack_b0,&uStack_b8,&uStack_a0,&uStack_a2);
        uVar9 = uStack_a2;
        uVar13 = uStack_b0;
        uVar49 = uStack_b8;
        if (((ulong)plVar18 & 1) == 0) {
          if ((uVar27 & 0xffff) != 0) {
            uVar66 = ((uint)*(ushort *)(param_1[0x1f] + (uVar27 & 0xffff) * 2 + -2) -
                     (uint)*(ushort *)(param_1 + 0x20)) + 1;
          }
          if ((short)param_1[0x4e] == 0) {
            uVar54 = (uint)*(ushort *)((long)param_1 + 0xd4);
          }
          else {
            uVar54 = ((uint)*(ushort *)(param_1[0x1f] + (uVar27 & 0xffff) * 2) -
                     (uint)*(ushort *)(param_1 + 0x20)) + 1;
          }
          if ((uVar66 & 0xffff) < (uVar54 & 0xffff)) {
            lVar28 = CONCAT44(uStack_84,uStack_88);
            do {
              if ((lVar28 != param_1[0x1c]) || ((uint)uVar9 != (uVar66 & 0xffff))) {
                func_0x00010978d914(param_1,uVar66 & 0xffff,uVar13,uVar49,1);
              }
              uVar66 = uVar66 + 1;
            } while ((uVar66 & 0xffff) < (uVar54 & 0xffff));
          }
        }
      }
      else if (*(char *)((long)param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 3) = 0x86;
      }
      break;
    case 0x36:
    case 0x37:
      if ((*(uint *)*pauVar50 & 0xfffffffe) == 0) {
        FUN_10978d7bc(param_1,&uStack_b0,&uStack_b8,&uStack_a0,&uStack_a2);
        uVar9 = uStack_a2;
        uVar13 = uStack_b0;
        uVar49 = uStack_b8;
        if (((ulong)plVar18 & 1) == 0) {
          if ((short)param_1[0x4e] == 1) {
            if (*(ushort *)((long)param_1 + 0xd6) != 0) {
              uVar45 = *(short *)(param_1[0x1f] + (ulong)(*(ushort *)((long)param_1 + 0xd6) - 1) * 2
                                 ) + 1;
              goto code_r0x000109784f04;
            }
          }
          else if ((short)param_1[0x4e] == 0) {
            uVar45 = *(ushort *)((long)param_1 + 0xd4);
code_r0x000109784f04:
            if (uVar45 != 0) {
              uVar52 = 0;
              lVar28 = CONCAT44(uStack_84,uStack_88);
              do {
                if ((lVar28 != param_1[0x1c]) || (uVar9 != uVar52)) {
                  func_0x00010978d914(param_1,uVar52,uVar13,uVar49,0);
                }
                uVar52 = uVar52 + 1;
              } while (uVar52 < uVar45);
            }
          }
        }
      }
      else if (*(char *)((long)param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 3) = 0x86;
      }
      break;
    case 0x38:
      if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
        bVar14 = true;
      }
      else {
        bVar14 = (short)param_1[0x4e] == 0;
      }
      lVar34 = param_1[0x46];
      if (lVar34 < param_1[4]) {
        uVar66 = *(uint *)*pauVar50;
        sVar43 = *(short *)((long)param_1 + 0x226);
        uVar54 = -uVar66;
        if (-1 < (int)uVar66) {
          uVar54 = uVar66;
        }
        uVar59 = -(int)sVar43;
        if (-1 < sVar43) {
          uVar59 = (int)sVar43;
        }
        uVar62 = (uVar54 & 0xffff) * uVar59;
        uVar59 = (uVar54 >> 0x10) * uVar59;
        uVar60 = uVar59 >> 0x10;
        uVar59 = uVar59 * 0x10000 | 0x2000;
        if (CARRY4(uVar59,uVar62)) {
          uVar60 = uVar60 + 1;
        }
        iVar56 = (int)(CONCAT44(uVar60,uVar59 + uVar62) >> 0xe);
        iVar53 = -iVar56;
        if (-1 < (int)((int)sVar43 ^ uVar66)) {
          iVar53 = iVar56;
        }
        sVar43 = (short)param_1[0x45];
        uVar59 = -(int)sVar43;
        if (-1 < sVar43) {
          uVar59 = (int)sVar43;
        }
        uVar60 = uVar59 * (uVar54 & 0xffff);
        uVar59 = uVar59 * (uVar54 >> 0x10);
        uVar54 = uVar59 >> 0x10;
        uVar59 = uVar59 * 0x10000 | 0x2000;
        if (CARRY4(uVar59,uVar60)) {
          uVar54 = uVar54 + 1;
        }
        iVar12 = (int)(CONCAT44(uVar54,uVar59 + uVar60) >> 0xe);
        iVar56 = -iVar12;
        if (-1 < (int)((int)sVar43 ^ uVar66)) {
          iVar56 = iVar12;
        }
        if (0 < lVar34) {
          do {
            lVar28 = param_1[7];
            param_1[7] = lVar28 + -1;
            uVar27 = *(ulong *)(param_1[6] + (lVar28 + -1) * 8);
            uVar54 = (uint)uVar27;
            if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4)) {
              lVar28 = (long)iVar53;
              if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) {
                bVar15 = *(char *)((long)param_1 + 1099) == '\0';
                if (!bVar15) {
                  lVar28 = 0;
                }
                if (!(bool)(bVar15 | bVar14)) {
                  if (((*(char *)((long)param_1 + 0x44c) != '\0') &&
                      (*(char *)((long)param_1 + 0x44d) != '\0')) ||
                     ((((char)param_1[0x7d] == '\0' || ((short)param_1[0x45] == 0)) &&
                      ((*(byte *)(param_1[0x1e] + (uVar27 & 0xffff)) >> 4 & 1) == 0))))
                  goto code_r0x000109784390;
                  lVar28 = 0;
                }
              }
              func_0x00010978d914(param_1,uVar54 & 0xffff,lVar28,(long)iVar56,1);
              lVar34 = param_1[0x46];
            }
            else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
code_r0x000109784390:
            lVar28 = lVar34 + -1;
            param_1[0x46] = lVar28;
            bVar15 = 0 < lVar34;
            lVar34 = lVar28;
          } while (lVar28 != 0 && bVar15);
code_r0x0001097845c0:
          lVar28 = param_1[7];
        }
      }
      else {
code_r0x0001097843a0:
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          uVar33 = 0x86;
code_r0x0001097843ac:
          *(undefined4 *)(param_1 + 3) = uVar33;
        }
      }
      goto code_r0x0001097845c4;
    case 0x39:
      lVar28 = param_1[0x46];
      if (param_1[4] < lVar28) {
code_r0x000109784874:
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
        }
      }
      else {
        if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
          bVar14 = true;
        }
        else {
          bVar14 = (short)param_1[0x4e] == 0;
        }
        uVar27 = (ulong)*(ushort *)((long)param_1 + 0x21a);
        if (*(ushort *)((long)param_1 + 0x54) <= *(ushort *)((long)param_1 + 0x21a))
        goto code_r0x000109784874;
        plVar18 = (long *)(param_1[0xc] + uVar27 * 0x10);
        uVar9 = *(ushort *)((long)param_1 + 0x21c);
        if (bVar14) {
          plVar19 = (long *)(param_1[0xb] + uVar27 * 0x10);
          if (uVar9 < *(ushort *)((long)param_1 + 0x94)) {
            pcVar39 = (code *)param_1[0x81];
            lVar28 = param_1[0x13];
code_r0x000109784e7c:
            plVar51 = (long *)(lVar28 + (ulong)uVar9 * 0x10);
            lVar28 = *plVar51 - *plVar19;
            lVar34 = plVar51[1] - plVar19[1];
            goto code_r0x000109785078;
          }
code_r0x000109784e94:
          plStack_d8 = (long *)0x0;
          plVar51 = (long *)0x0;
        }
        else {
          plVar19 = (long *)(param_1[0xd] + uVar27 * 0x10);
          if (*(ushort *)((long)param_1 + 0x94) <= uVar9) goto code_r0x000109784e94;
          if (param_1[0x33] == param_1[0x34]) {
            pcVar39 = (code *)param_1[0x81];
            lVar28 = param_1[0x15];
            goto code_r0x000109784e7c;
          }
          plVar51 = (long *)(param_1[0x15] + (ulong)uVar9 * 0x10);
          lVar28 = (*plVar51 - *plVar19) * param_1[0x33];
          lVar28 = lVar28 + (lVar28 >> 0x3f) + 0x8000 >> 0x10;
          lVar34 = (plVar51[1] - plVar19[1]) * param_1[0x34];
          lVar34 = lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10;
          pcVar39 = (code *)param_1[0x81];
code_r0x000109785078:
          plVar51 = param_1;
          (*pcVar39)(param_1,lVar28,lVar34);
          plVar5 = (long *)(param_1[0x14] + (ulong)*(ushort *)((long)param_1 + 0x21c) * 0x10);
          plStack_d8 = param_1;
          (*(code *)param_1[0x80])(param_1,*plVar5 - *plVar18,plVar5[1] - plVar18[1]);
          lVar28 = param_1[0x46];
        }
        if (0 < lVar28) {
          do {
            lVar34 = param_1[7];
            param_1[7] = lVar34 + -1;
            uVar27 = *(ulong *)(param_1[6] + (lVar34 + -1) * 8);
            uVar54 = (uint)uVar27;
            if (uVar54 < *(ushort *)((long)param_1 + 0xd4)) {
              uVar27 = uVar27 & 0xffffffff;
              if (bVar14) {
                pcVar39 = (code *)param_1[0x81];
                lVar28 = param_1[0x1b];
code_r0x00010978510c:
                plVar5 = (long *)(lVar28 + uVar27 * 0x10);
                lVar28 = *plVar5 - *plVar19;
                lVar34 = plVar5[1] - plVar19[1];
              }
              else {
                if (param_1[0x33] == param_1[0x34]) {
                  pcVar39 = (code *)param_1[0x81];
                  lVar28 = param_1[0x1d];
                  goto code_r0x00010978510c;
                }
                plVar5 = (long *)(param_1[0x1d] + uVar27 * 0x10);
                lVar28 = (*plVar5 - *plVar19) * param_1[0x33];
                lVar28 = lVar28 + (lVar28 >> 0x3f) + 0x8000 >> 0x10;
                lVar34 = (plVar5[1] - plVar19[1]) * param_1[0x34];
                lVar34 = lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10;
                pcVar39 = (code *)param_1[0x81];
              }
              plVar20 = param_1;
              (*pcVar39)(param_1,lVar28,lVar34);
              plVar5 = (long *)(param_1[0x1c] + uVar27 * 0x10);
              plVar21 = param_1;
              (*(code *)param_1[0x80])(param_1,*plVar5 - *plVar18,plVar5[1] - plVar18[1]);
              if (plVar20 != (long *)0x0 && plVar51 != (long *)0x0) {
                FUN_1097532ac(plVar20,plStack_d8,plVar51);
              }
              (*(code *)param_1[0x83])
                        (param_1,param_1 + 0x19,uVar54 & 0xffff,(long)plVar20 - (long)plVar21);
              lVar28 = param_1[0x46];
            }
            else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
            lVar34 = lVar28 + -1;
            param_1[0x46] = lVar34;
            bVar15 = 0 < lVar28;
            lVar28 = lVar34;
          } while (lVar34 != 0 && bVar15);
        }
      }
      param_1[0x46] = 1;
      param_1[8] = param_1[7];
      break;
    case 0x3a:
    case 0x3b:
      uVar27 = *(ulong *)*pauVar50;
      uVar54 = (uint)uVar27;
      if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) {
        uVar9 = *(ushort *)(param_1 + 0x43);
        if ((uint)uVar9 < (uint)*(ushort *)((long)param_1 + 0x54)) {
          if (*(short *)((long)param_1 + 0x26e) == 0) {
            uVar35 = uVar27 & 0xffff;
            puVar1 = (undefined8 *)(param_1[0xb] + (ulong)(uint)uVar9 * 0x10);
            uVar49 = *puVar1;
            puVar11 = (undefined8 *)(param_1[0x13] + uVar35 * 0x10);
            puVar11[1] = puVar1[1];
            *puVar11 = uVar49;
            (*(code *)param_1[0x84])
                      (param_1,param_1 + 0x11,uVar54 & 0xffff,*(undefined8 *)(*pauVar50 + 8));
            puVar1 = (undefined8 *)(param_1[0x13] + uVar35 * 0x10);
            uVar49 = *puVar1;
            puVar11 = (undefined8 *)(param_1[0x14] + uVar35 * 0x10);
            puVar11[1] = puVar1[1];
            *puVar11 = uVar49;
            uVar9 = *(ushort *)(param_1 + 0x43);
          }
          plVar19 = (long *)(param_1[0x14] + (uVar27 & 0xffff) * 0x10);
          plVar18 = (long *)(param_1[0xc] + (ulong)uVar9 * 0x10);
          plVar51 = param_1;
          (*(code *)param_1[0x80])(param_1,*plVar19 - *plVar18,plVar19[1] - plVar18[1]);
          (*(code *)param_1[0x83])
                    (param_1,param_1 + 0x11,uVar54 & 0xffff,*(long *)(*pauVar50 + 8) - (long)plVar51
                    );
          *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
          *(short *)((long)param_1 + 0x21c) = (short)uVar27;
          if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
            *(short *)(param_1 + 0x43) = (short)uVar27;
          }
          break;
        }
      }
      goto code_r0x000109784140;
    case 0x3c:
      lVar34 = param_1[0x46];
      if ((param_1[4] < lVar34) ||
         (*(ushort *)((long)param_1 + 0x54) <= *(ushort *)(param_1 + 0x43)))
      goto code_r0x0001097843a0;
      if (0 < lVar34) {
        do {
          lVar28 = param_1[7];
          param_1[7] = lVar28 + -1;
          uVar27 = *(ulong *)(param_1[6] + (lVar28 + -1) * 8);
          uVar54 = (uint)uVar27;
          if ((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) {
            plVar18 = (long *)(param_1[0x14] + (uVar27 & 0xffff) * 0x10);
            plVar19 = (long *)(param_1[0xc] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
            plVar51 = param_1;
            (*(code *)param_1[0x80])(param_1,*plVar18 - *plVar19,plVar18[1] - plVar19[1]);
            (*(code *)param_1[0x83])(param_1,param_1 + 0x11,uVar54 & 0xffff,-(long)plVar51);
            lVar28 = param_1[0x46];
          }
          else {
            lVar28 = lVar34;
            if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
          }
          lVar34 = lVar28 + -1;
          param_1[0x46] = lVar34;
        } while (lVar34 != 0 && 0 < lVar28);
        goto code_r0x0001097845c0;
      }
      goto code_r0x0001097845c4;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x48) = 2;
      lVar28 = 0x10978d3f4;
      goto code_r0x000109784034;
    case 0x3e:
    case 0x3f:
      uVar27 = *(ulong *)*pauVar50;
      uVar54 = (uint)uVar27;
      uVar44 = (undefined2)uVar27;
      if (((uVar54 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) &&
         (*(ulong *)(*pauVar50 + 8) < (ulong)param_1[0x55])) {
        (*(code *)param_1[0x86])();
        if (*(short *)((long)param_1 + 0x26c) == 0) {
          uVar59 = (uint)plVar18;
          uVar66 = -uVar59;
          if (-1 < (int)uVar59) {
            uVar66 = uVar59;
          }
          lVar28 = param_1[0xb];
          uVar35 = uVar27 & 0xffff;
          iVar53 = MP_INT_ABS((int)*(short *)((long)param_1 + 0x226));
          iVar56 = MP_INT_ABS((int)(short)param_1[0x45]);
          uVar59 = iVar53 * (uVar66 >> 0x10);
          uVar62 = iVar56 * (uVar66 >> 0x10);
          uVar60 = uVar59 * 0x10000 | 0x2000;
          uVar65 = uVar62 * 0x10000 | 0x2000;
          uVar64 = uVar60 + iVar53 * (uVar66 & 0xffff);
          uVar66 = uVar65 + iVar56 * (uVar66 & 0xffff);
          bVar32 = (byte)((ulong)plVar18 >> 0x18);
          iVar53 = ((uVar59 >> 0x10) + (uint)(uVar64 < uVar60)) * 0x40000 + (uVar64 >> 0xe);
          iVar56 = ((uVar62 >> 0x10) + (uint)(uVar66 < uVar65)) * 0x40000 + (uVar66 >> 0xe);
          uVar22 = CONCAT44(iVar56,iVar53);
          uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(-iVar56,-iVar53)) &
                            CONCAT44(-(uint)((char)(bVar32 ^ (byte)((short)param_1[0x45] >> 0xf)) <
                                            '\0'),
                                     -(uint)((char)(bVar32 ^ (byte)(*(short *)((long)param_1 + 0x226
                                                                              ) >> 0xf)) < '\0'));
          plVar19 = (long *)(lVar28 + uVar35 * 0x10);
          plVar19[1] = (long)(int)(uVar22 >> 0x20);
          *plVar19 = (long)(int)uVar22;
          puVar1 = (undefined8 *)(lVar28 + uVar35 * 0x10);
          uVar49 = *puVar1;
          puVar11 = (undefined8 *)(param_1[0xc] + uVar35 * 0x10);
          puVar11[1] = puVar1[1];
          *puVar11 = uVar49;
        }
        puVar1 = (undefined8 *)(param_1[0xc] + (uVar27 & 0xffff) * 0x10);
        plVar19 = param_1;
        (*(code *)param_1[0x80])(param_1,*puVar1,puVar1[1]);
        if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
          lVar34 = (long)plVar18 - (long)plVar19;
          lVar28 = -lVar34;
          if (-1 < lVar34) {
            lVar28 = lVar34;
          }
          plVar51 = plVar19;
          if (lVar28 <= param_1[0x49]) {
            plVar51 = plVar18;
          }
          plVar18 = param_1;
          (*(code *)param_1[0x7f])(param_1,plVar51,3);
        }
        pcVar39 = (code *)param_1[0x83];
        lVar28 = (long)plVar18 - (long)plVar19;
        goto code_r0x000109784bc4;
      }
      if (*(char *)((long)param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 3) = 0x86;
      }
code_r0x000109784bd4:
      *(undefined2 *)(param_1 + 0x43) = uVar44;
      *(undefined2 *)((long)param_1 + 0x21a) = uVar44;
      break;
    case 0x40:
      bVar32 = *(byte *)(lVar46 + param_1[0x51] + 1);
      uVar27 = (ulong)bVar32;
      if ((iVar56 - (int)param_1[4]) + 1U <= (uint)bVar32) goto LAB_10978524c;
      if (bVar32 == 0) {
        uVar27 = 0;
      }
      else {
        lVar46 = lVar46 + 2;
        uVar35 = uVar27;
        do {
          *(ulong *)*pauVar50 = (ulong)*(byte *)(lVar46 + param_1[0x51]);
          lVar46 = lVar46 + 1;
          uVar35 = uVar35 - 1;
          pauVar50 = (undefined1 (*) [16])(*pauVar50 + 8);
        } while (uVar35 != 0);
        lVar34 = param_1[8];
      }
code_r0x000109784740:
      lVar28 = lVar34 + uVar27;
      goto code_r0x000109784744;
    case 0x41:
      bVar32 = *(byte *)(lVar46 + param_1[0x51] + 1);
      uVar27 = (ulong)bVar32;
      if ((uint)bVar32 < (iVar56 - (int)param_1[4]) + 1U) {
        param_1[0x51] = param_1[0x51] + 2;
        uVar35 = uVar27;
        if (bVar32 == 0) {
          uVar27 = 0;
        }
        else {
          do {
            lVar28 = param_1[0x51];
            param_1[0x51] = lVar28 + 2;
            pbVar3 = (byte *)(lVar46 + lVar28);
            *(ulong *)*pauVar50 = (long)(short)((ushort)*pbVar3 << 8) | (ulong)pbVar3[1];
            uVar35 = uVar35 - 1;
            pauVar50 = (undefined1 (*) [16])(*pauVar50 + 8);
          } while (uVar35 != 0);
          lVar34 = param_1[8];
        }
        *(undefined1 *)(param_1 + 0x54) = 0;
        goto code_r0x000109784740;
      }
LAB_10978524c:
      uVar35 = 0x82;
      goto LAB_109785228;
    case 0x42:
      uVar27 = *(ulong *)*pauVar50;
      if (*(ushort *)(param_1 + 0x69) <= uVar27) goto code_r0x000109784140;
      lVar28 = param_1[0x6a];
      if (((int)param_1[0x4f] != 3) || (lVar28 == param_1[0x6c])) {
code_r0x000109783e8c:
        *(undefined8 *)(lVar28 + uVar27 * 8) = *(undefined8 *)(*pauVar50 + 8);
        break;
      }
      lVar28 = param_1[2];
      func_0x000109755910(lVar28,8,(short)param_1[0x6b],(ulong)*(ushort *)(param_1 + 0x69),
                          param_1[0x6c],&uStack_a0);
      param_1[0x6c] = lVar28;
      uVar35 = uStack_a0 & 0xffffffff;
      *(int *)(param_1 + 3) = (int)uStack_a0;
      if ((int)uStack_a0 == 0) {
        *(ushort *)(param_1 + 0x6b) = *(ushort *)(param_1 + 0x69);
        _memcpy(lVar28,param_1[0x6a],(ulong)*(ushort *)(param_1 + 0x69) << 3);
        lVar28 = param_1[0x6c];
        param_1[0x6a] = lVar28;
        goto code_r0x000109783e8c;
      }
      goto code_r0x000109784d34;
    case 0x43:
      if ((ulong)*(ushort *)(param_1 + 0x69) <= *(ulong *)*pauVar50) {
        if (*(char *)((long)param_1 + 0x3e9) == '\0') goto code_r0x0001097843bc;
        goto LAB_109785278;
      }
      uVar27 = *(ulong *)(param_1[0x6a] + *(ulong *)*pauVar50 * 8);
      goto code_r0x000109784070;
    case 0x44:
      if ((ulong)param_1[0x55] <= *(ulong *)*pauVar50) goto code_r0x000109784140;
      (*(code *)param_1[0x87])(param_1,*(ulong *)*pauVar50,*(undefined8 *)(*pauVar50 + 8));
      break;
    case 0x45:
      if (*(ulong *)*pauVar50 < (ulong)param_1[0x55]) {
        (*(code *)param_1[0x86])();
      }
      else {
        if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
code_r0x0001097844cc:
        plVar18 = (long *)0x0;
      }
      goto code_r0x000109784cbc;
    case 0x46:
    case 0x47:
      if (*(ulong *)*pauVar50 < (ulong)*(ushort *)((long)param_1 + 0xd4)) {
        if ((bVar32 & 1) == 0) {
          pcVar39 = (code *)param_1[0x80];
          lVar28 = param_1[0x1c];
        }
        else {
          pcVar39 = (code *)param_1[0x81];
          lVar28 = param_1[0x1b];
        }
        puVar1 = (undefined8 *)(lVar28 + *(ulong *)*pauVar50 * 0x10);
        (*pcVar39)(param_1,*puVar1,puVar1[1]);
      }
      else {
code_r0x000109783028:
        if (*(char *)((long)param_1 + 0x3e9) == '\0') goto code_r0x0001097844cc;
        plVar18 = (long *)0x0;
        *(undefined4 *)(param_1 + 3) = 0x86;
      }
      goto code_r0x000109784cbc;
    case 0x48:
      uVar27 = *(ulong *)*pauVar50;
      if ((uint)*(ushort *)((long)param_1 + 0xd4) <= ((uint)uVar27 & 0xffff))
      goto code_r0x000109784140;
      puVar1 = (undefined8 *)(param_1[0x1c] + (uVar27 & 0xffff) * 0x10);
      (*(code *)param_1[0x80])(param_1,*puVar1,puVar1[1]);
      (*(code *)param_1[0x83])
                (param_1,param_1 + 0x19,(uint)uVar27 & 0xffff,
                 *(long *)(*pauVar50 + 8) - (long)plVar18);
      if ((short)param_1[0x4e] == 0) {
        auVar55 = *(undefined1 (*) [16])(param_1[0x1c] + (uVar27 & 0xffff) * 0x10);
        puVar1 = (undefined8 *)(param_1[0x1b] + (uVar27 & 0xffff) * 0x10);
        puVar1[1] = auVar55._8_8_;
        *puVar1 = auVar55._0_8_;
      }
      break;
    case 0x49:
    case 0x4a:
      uVar27 = *(ulong *)*pauVar50;
      if (((uint)*(ushort *)((long)param_1 + 0x54) <= ((uint)uVar27 & 0xffff)) ||
         (uVar35 = *(ulong *)(*pauVar50 + 8),
         (uint)*(ushort *)((long)param_1 + 0x94) <= ((uint)uVar35 & 0xffff)))
      goto code_r0x000109783028;
      if ((bVar32 & 1) == 0) {
        if ((*(short *)((long)param_1 + 0x26c) != 0) && (*(short *)((long)param_1 + 0x26e) != 0)) {
          plVar19 = (long *)(param_1[0xd] + (uVar27 & 0xffff) * 0x10);
          plVar51 = (long *)(param_1[0x15] + (uVar35 & 0xffff) * 0x10);
          if (param_1[0x33] == param_1[0x34]) {
            (*(code *)param_1[0x81])(param_1,*plVar19 - *plVar51,plVar19[1] - plVar51[1]);
            plVar18 = (long *)(param_1[0x33] * (long)plVar18 +
                               (param_1[0x33] * (long)plVar18 >> 0x3f) + 0x8000 >> 0x10);
          }
          else {
            lVar34 = (*plVar19 - *plVar51) * param_1[0x33];
            lVar28 = (plVar19[1] - plVar51[1]) * param_1[0x34];
            (*(code *)param_1[0x81])
                      (param_1,lVar34 + (lVar34 >> 0x3f) + 0x8000 >> 0x10,
                       lVar28 + (lVar28 >> 0x3f) + 0x8000 >> 0x10);
          }
          goto code_r0x000109784cbc;
        }
        plVar19 = (long *)(param_1[0xb] + (uVar27 & 0xffff) * 0x10);
        plVar51 = (long *)(param_1[0x13] + (uVar35 & 0xffff) * 0x10);
        pcVar39 = (code *)param_1[0x81];
      }
      else {
        pcVar39 = (code *)param_1[0x80];
        plVar19 = (long *)(param_1[0xc] + (uVar27 & 0xffff) * 0x10);
        plVar51 = (long *)(param_1[0x14] + (uVar35 & 0xffff) * 0x10);
      }
      (*pcVar39)(param_1,*plVar19 - *plVar51,plVar19[1] - plVar51[1]);
      goto code_r0x000109784cbc;
    case 0x4b:
code_r0x000109783b40:
      (*(code *)param_1[0x85])();
      goto code_r0x000109784cbc;
    case 0x4c:
      if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x23) goto code_r0x000109783b40;
      plVar18 = (long *)param_1[0x31];
      goto code_r0x000109784cbc;
    case 0x4d:
      *(undefined1 *)((long)param_1 + 0x244) = 1;
      break;
    case 0x4e:
      *(undefined1 *)((long)param_1 + 0x244) = 0;
      break;
    case 0x4f:
      goto LAB_109785228;
    case 0x50:
      uVar27 = (ulong)(*(long *)*pauVar50 < *(long *)(*pauVar50 + 8));
      goto code_r0x000109784070;
    case 0x51:
      uVar27 = (ulong)(*(long *)*pauVar50 <= *(long *)(*pauVar50 + 8));
      goto code_r0x000109784070;
    case 0x52:
      uVar27 = (ulong)(*(long *)(*pauVar50 + 8) < *(long *)*pauVar50);
      goto code_r0x000109784070;
    case 0x53:
      uVar27 = (ulong)(*(long *)(*pauVar50 + 8) <= *(long *)*pauVar50);
      goto code_r0x000109784070;
    case 0x54:
      bVar14 = *(long *)*pauVar50 == *(long *)(*pauVar50 + 8);
      goto code_r0x00010978406c;
    case 0x55:
      bVar14 = *(long *)*pauVar50 == *(long *)(*pauVar50 + 8);
code_r0x000109784004:
      uVar27 = (ulong)!bVar14;
      goto code_r0x000109784070;
    case 0x56:
      (*(code *)param_1[0x7f])(param_1,*(undefined8 *)*pauVar50,3);
      bVar14 = ((ulong)plVar18 & 0x7f) == 0x40;
      goto code_r0x00010978406c;
    case 0x57:
      (*(code *)param_1[0x7f])(param_1,*(undefined8 *)*pauVar50,3);
      bVar14 = ((ulong)plVar18 & 0x7f) == 0;
      goto code_r0x00010978406c;
    case 0x58:
      if (*(long *)*pauVar50 == 0) {
        iVar53 = 1;
        do {
          while( true ) {
            plVar18 = param_1;
            FUN_10978d5ec();
            if (((ulong)plVar18 & 1) != 0) goto LAB_109784d30;
            cVar10 = (char)param_1[0x53];
            if (cVar10 == '\x1b') break;
            if (cVar10 == 'Y') {
              iVar53 = iVar53 + -1;
              if (iVar53 == 0) goto LAB_109784d30;
            }
            else if (cVar10 == 'X') {
              iVar53 = iVar53 + 1;
            }
          }
        } while (iVar53 != 1);
      }
      break;
    case 0x5a:
      uVar27 = 0;
      if (*(long *)*pauVar50 != 0) {
code_r0x000109783390:
        bVar14 = *(long *)(*pauVar50 + 8) == 0;
        goto code_r0x000109784004;
      }
      goto code_r0x000109784070;
    case 0x5b:
      if (*(long *)*pauVar50 == 0) goto code_r0x000109783390;
      uVar27 = 1;
      goto code_r0x000109784070;
    case 0x5c:
      bVar14 = *(long *)*pauVar50 == 0;
code_r0x00010978406c:
      uVar27 = (ulong)bVar14;
      goto code_r0x000109784070;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_109785780(param_1,pauVar50);
      break;
    case 0x5e:
      *(short *)(param_1 + 0x4c) = (short)*(undefined8 *)*pauVar50;
      break;
    case 0x5f:
      if (6 < *(ulong *)*pauVar50) goto LAB_109785290;
      *(short *)((long)param_1 + 0x262) = (short)*(ulong *)*pauVar50;
      break;
    case 0x60:
      uVar27 = *(long *)(*pauVar50 + 8) + *(long *)*pauVar50;
      goto code_r0x000109784070;
    case 0x61:
      uVar27 = *(long *)*pauVar50 - *(long *)(*pauVar50 + 8);
      goto code_r0x000109784070;
    case 0x62:
      uVar35 = *(ulong *)(*pauVar50 + 8);
      if (uVar35 == 0) {
        uVar35 = 0x85;
        goto LAB_109785228;
      }
      uVar22 = *(ulong *)*pauVar50;
      uVar27 = -uVar35;
      if (-1 < (long)uVar35) {
        uVar27 = uVar35;
      }
      uVar29 = -uVar22;
      if (-1 < (long)uVar22) {
        uVar29 = uVar22;
      }
      uVar38 = 0;
      if (uVar27 != 0) {
        uVar38 = (uVar29 << 6) / uVar27;
      }
      goto code_r0x0001097833c0;
    case 99:
      uVar35 = *(ulong *)*pauVar50;
      uVar22 = *(ulong *)(*pauVar50 + 8);
      uVar27 = -uVar22;
      if (-1 < (long)uVar22) {
        uVar27 = uVar22;
      }
      uVar38 = -uVar35;
      if (-1 < (long)uVar35) {
        uVar38 = uVar35;
      }
      uVar38 = uVar27 * uVar38 + 0x20 >> 6;
code_r0x0001097833c0:
      uVar27 = -uVar38;
      if (-1 < (long)(uVar22 ^ uVar35)) {
        uVar27 = uVar38;
      }
      goto code_r0x000109784070;
    case 100:
      lVar28 = *(long *)*pauVar50;
      if (lVar28 < 0) goto code_r0x000109783e9c;
      break;
    case 0x65:
      lVar28 = *(long *)*pauVar50;
code_r0x000109783e9c:
      uVar27 = -lVar28;
      goto code_r0x000109784070;
    case 0x66:
      uVar27 = *(ulong *)*pauVar50;
      goto code_r0x000109783fe0;
    case 0x67:
      uVar27 = *(long *)*pauVar50 + 0x3f;
code_r0x000109783fe0:
      uVar27 = uVar27 & 0xffffffffffffffc0;
      goto code_r0x000109784070;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      (*(code *)param_1[0x7f])(param_1,*(undefined8 *)*pauVar50,bVar32 & 3);
code_r0x000109784cbc:
      *(long **)*pauVar50 = plVar18;
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar22 = *(ulong *)*pauVar50;
      uVar38 = uVar22 - param_1[(uVar27 & 3) + 0x3e];
      uVar35 = param_1[(uVar27 & 3) + 0x3e] + uVar22;
      uVar27 = uVar38 & (long)uVar38 >> 0x3f;
      if ((uVar22 & 0x8000000000000000) == 0) {
        uVar27 = uVar35 & ((long)uVar35 >> 0x3f ^ 0xffffffffffffffffU);
      }
      goto code_r0x000109784070;
    case 0x70:
      if ((ulong)param_1[0x55] <= *(ulong *)*pauVar50) goto code_r0x000109784140;
      lVar28 = param_1[0x3d] * *(long *)(*pauVar50 + 8);
      *(long *)(param_1[0x56] + *(ulong *)*pauVar50 * 8) =
           lVar28 + (lVar28 >> 0x3f) + 0x8000 >> 0x10;
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      (*(code *)param_1[0x85])();
      uVar27 = *(ulong *)*pauVar50;
      if (uVar27 != 0) {
        uVar35 = 1;
        do {
          lVar28 = param_1[7];
          if (lVar28 < 2) {
            if (*(char *)((long)param_1 + 0x3e9) != '\0') {
              *(undefined4 *)(param_1 + 3) = 0x81;
            }
            param_1[7] = 0;
            break;
          }
          param_1[7] = lVar28 + -2;
          uVar22 = *(ulong *)(param_1[6] + lVar28 * 8 + -8);
          if (uVar22 < (ulong)param_1[0x55]) {
            uVar29 = *(ulong *)(param_1[6] + (lVar28 + -2) * 8);
            uVar36 = uVar29 >> 4 & 0xf;
            uVar38 = uVar36;
            if ((char)param_1[0x53] == 't') {
              uVar38 = uVar36 | 0x10;
            }
            uVar36 = uVar36 | 0x20;
            if ((char)param_1[0x53] != 'u') {
              uVar36 = uVar38;
            }
            if (plVar18 == (long *)(uVar36 + *(ushort *)(param_1 + 0x4c))) {
              uVar29 = uVar29 & 0xf;
              lVar28 = -8;
              if (7 < uVar29) {
                lVar28 = -7;
              }
              (*(code *)param_1[0x88])
                        (param_1,uVar22,
                         lVar28 + uVar29 << ((ulong)(6 - *(ushort *)((long)param_1 + 0x262)) & 0x3f)
                        );
            }
          }
          else if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
          uVar35 = uVar35 + 1;
        } while (uVar35 <= uVar27);
      }
code_r0x000109784188:
      lVar28 = param_1[7];
      goto code_r0x000109784744;
    case 0x76:
      func_0x00010978d9c0(param_1,0x4000,*(undefined8 *)*pauVar50);
      *(undefined4 *)(param_1 + 0x48) = 6;
      lVar28 = 0x10978d42c;
      goto code_r0x000109784034;
    case 0x77:
      func_0x00010978d9c0(param_1,0x2d41,*(undefined8 *)*pauVar50);
      *(undefined4 *)(param_1 + 0x48) = 7;
      lVar28 = 0x10978d490;
      goto code_r0x000109784034;
    case 0x78:
      if (*(long *)(*pauVar50 + 8) != 0) goto code_r0x000109783eac;
      break;
    case 0x79:
      if (*(long *)(*pauVar50 + 8) == 0) goto code_r0x000109783eac;
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x48) = 5;
      lVar28 = 0x10978d2ec;
      goto code_r0x000109784034;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x48) = 4;
      lVar28 = 0x10978d348;
      goto code_r0x000109784034;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x48) = 3;
      lVar28 = 0x10978d380;
code_r0x000109784034:
      param_1[0x7f] = lVar28;
      break;
    case 0x80:
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
          (*(char *)((long)param_1 + 1099) == '\0')) ||
         ((*(char *)((long)param_1 + 0x44c) == '\0' || (*(char *)((long)param_1 + 0x44d) == '\0'))))
      {
        lVar34 = param_1[0x46];
        if (param_1[4] < lVar34) {
          if (*(char *)((long)param_1 + 0x3e9) != '\0') {
            uVar33 = 0x81;
            goto code_r0x0001097843ac;
          }
        }
        else if (0 < lVar34) {
          do {
            lVar28 = param_1[7];
            param_1[7] = lVar28 + -1;
            uVar27 = *(ulong *)(param_1[6] + (lVar28 + -1) * 8);
            if (((uint)uVar27 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x114)) {
              uVar27 = uVar27 & 0xffff;
              *(byte *)(param_1[0x26] + uVar27) = *(byte *)(param_1[0x26] + uVar27) ^ 1;
              lVar28 = param_1[0x46];
            }
            else {
              lVar28 = lVar34;
              if (*(char *)((long)param_1 + 0x3e9) != '\0') goto LAB_109785278;
            }
            lVar34 = lVar28 + -1;
            param_1[0x46] = lVar34;
          } while (lVar34 != 0 && 0 < lVar28);
          goto code_r0x0001097845c0;
        }
      }
code_r0x0001097845c4:
      param_1[0x46] = 1;
code_r0x000109784744:
      param_1[8] = lVar28;
      break;
    case 0x81:
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
          (*(char *)((long)param_1 + 1099) == '\0')) ||
         ((*(char *)((long)param_1 + 0x44c) == '\0' || (*(char *)((long)param_1 + 0x44d) == '\0'))))
      {
        uVar54 = *(uint *)*pauVar50;
        uVar59 = (uint)*(undefined8 *)(*pauVar50 + 8);
        uVar66 = uVar59 & 0xffff;
        if (*(ushort *)((long)param_1 + 0x114) <= uVar66 ||
            (uint)*(ushort *)((long)param_1 + 0x114) <= (uVar54 & 0xffff))
        goto code_r0x000109784140;
        if ((uVar54 & 0xffff) <= uVar66) {
          do {
            *(byte *)(param_1[0x26] + ((ulong)uVar54 & 0xffff)) =
                 *(byte *)(param_1[0x26] + ((ulong)uVar54 & 0xffff)) | 1;
            uVar54 = uVar54 + 1;
          } while ((uVar54 & 0xffff) <= (uVar59 & 0xffff));
        }
      }
      break;
    case 0x82:
      if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
           (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
         || (*(char *)((long)param_1 + 0x44d) == '\0')) {
        uVar54 = *(uint *)*pauVar50;
        uVar59 = (uint)*(undefined8 *)(*pauVar50 + 8);
        uVar66 = uVar59 & 0xffff;
        if (*(ushort *)((long)param_1 + 0x114) <= uVar66 ||
            (uint)*(ushort *)((long)param_1 + 0x114) <= (uVar54 & 0xffff))
        goto code_r0x000109784140;
        if ((uVar54 & 0xffff) <= uVar66) {
          do {
            *(byte *)(param_1[0x26] + ((ulong)uVar54 & 0xffff)) =
                 *(byte *)(param_1[0x26] + ((ulong)uVar54 & 0xffff)) & 0xfe;
            uVar54 = uVar54 + 1;
          } while ((uVar54 & 0xffff) <= (uVar59 & 0xffff));
        }
      }
      break;
    case 0x85:
      uVar66 = (uint)*(ulong *)*pauVar50;
      uVar54 = uVar66 & 0xff;
      if (uVar54 == 0xff) {
        uVar26 = 1;
      }
      else {
        if ((*(ulong *)*pauVar50 & 0xff) != 0) {
          if (((uVar66 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x3b) <= uVar54)) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar66 >> 9 & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar66 >> 10 & 1) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 1;
          }
          if (((uVar66 >> 0xb & 1) != 0) && (uVar54 < *(ushort *)(param_1 + 0x3b))) {
            *(undefined1 *)((long)param_1 + 0x265) = 0;
          }
          if (((uVar66 >> 0xc & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x265) = 0;
          }
          if (((uVar66 >> 0xd & 1) == 0) || (*(char *)((long)param_1 + 0x212) == '\0')) break;
        }
        uVar26 = 0;
      }
      *(undefined1 *)((long)param_1 + 0x265) = uVar26;
      break;
    case 0x86:
    case 0x87:
      if (((uint)*(ushort *)((long)param_1 + 0x94) <= ((uint)*(ulong *)*pauVar50 & 0xffff)) ||
         ((uint)*(ushort *)((long)param_1 + 0xd4) <= ((uint)*(ulong *)(*pauVar50 + 8) & 0xffff)))
      goto code_r0x000109784140;
      lVar41 = (*(ulong *)*pauVar50 & 0xffff) * 0x10;
      plVar18 = (long *)(param_1[0x13] + lVar41);
      lVar57 = (*(ulong *)(*pauVar50 + 8) & 0xffff) * 0x10;
      plVar19 = (long *)(param_1[0x1b] + lVar57);
      lVar34 = *plVar18 - *plVar19;
      bVar14 = lVar34 != 0;
      lVar46 = plVar18[1] - plVar19[1];
      bVar15 = lVar46 != 0;
      lVar28 = 0x4000;
      if (bVar14 || bVar15) {
        lVar28 = lVar34;
      }
      bVar16 = (bVar32 & 1) != 0;
      lVar34 = lVar28;
      if (bVar16 && (bVar14 || bVar15)) {
        lVar34 = -lVar46;
        lVar46 = lVar28;
      }
      FUN_10978d588(lVar34,lVar46,puVar2);
      plVar18 = (long *)(param_1[0x14] + lVar41);
      plVar19 = (long *)(param_1[0x1c] + lVar57);
      lVar34 = *plVar18 - *plVar19;
      lVar46 = plVar18[1] - plVar19[1];
      lVar28 = 0x4000;
      if (lVar34 != 0 || lVar46 != 0) {
        lVar28 = lVar34;
      }
      lVar41 = lVar28;
      if ((bVar16 && (bVar14 || bVar15)) && (lVar34 != 0 || lVar46 != 0)) {
        lVar41 = -lVar46;
        lVar46 = lVar28;
      }
      lVar28 = (long)param_1 + 0x222;
code_r0x000109783528:
      FUN_10978d588(lVar41,lVar46,lVar28);
code_r0x000109783a8c:
      FUN_1097854cc(param_1);
      break;
    case 0x88:
      uVar27 = *(ulong *)*pauVar50;
      uVar54 = (uint)uVar27;
      if ((uVar27 & 1) == 0) {
        uVar35 = 0;
      }
      else {
        uVar35 = (ulong)*(uint *)(*(long *)(*param_1 + 0xb0) + 0x78);
      }
      if (((uVar54 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
        uVar35 = uVar35 | 0x100;
      }
      if (((uVar54 >> 2 & 1) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
        uVar35 = uVar35 | 0x200;
      }
      if (((uVar54 >> 3 & 1) != 0) && (*(long *)(*param_1 + 0x4c0) != 0)) {
        uVar35 = uVar35 | 0x400;
      }
      if (((uVar54 >> 5 & 1) != 0) && ((char)param_1[0x89] != '\0')) {
        uVar35 = uVar35 | 0x1000;
      }
      if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
         (*(char *)((long)param_1 + 0x449) != '\0')) {
        uVar35 = uVar35 | uVar27 << 7 & 0x2000;
        if (((uVar54 >> 8 & 1) != 0) && (*(char *)((long)param_1 + 0x44a) != '\0')) {
          uVar35 = uVar35 | 0x8000;
        }
        uVar35 = uVar35 | uVar27 << 7 & 0x60000;
        if (((uVar54 >> 0xc & 1) != 0) && (*(char *)((long)param_1 + 0x44e) != '\0')) {
          uVar35 = uVar35 | 0x80000;
        }
      }
      *(ulong *)*pauVar50 = uVar35;
      break;
    case 0x89:
      if ((int)param_1[0x4f] == 3) goto code_r0x0001097852a0;
      puVar47 = (undefined4 *)param_1[0x5e];
      uVar54 = *(uint *)(param_1 + 0x5d);
      puVar48 = puVar47;
      if (puVar47 == (undefined4 *)0x0) {
code_r0x000109783bc8:
        if (uVar54 < *(uint *)((long)param_1 + 0x2ec)) {
          *(uint *)(param_1 + 0x5d) = uVar54 + 1;
          puVar47 = puVar48;
          goto code_r0x000109783bdc;
        }
code_r0x0001097852b0:
        uVar35 = 0x8d;
        goto LAB_109785228;
      }
      puVar48 = puVar47 + (ulong)uVar54 * 8;
      if (uVar54 != 0) {
        do {
          if (*(ulong *)*pauVar50 == (ulong)(uint)puVar47[6]) break;
          puVar47 = puVar47 + 8;
        } while (puVar47 < puVar48);
      }
      if (puVar47 == puVar48) goto code_r0x000109783bc8;
code_r0x000109783bdc:
      if (0xff < *(ulong *)*pauVar50) goto code_r0x0001097852b0;
      puVar47[6] = (int)*(ulong *)*pauVar50;
      *(long *)(puVar47 + 2) = param_1[0x51] + 1;
      *puVar47 = *(undefined4 *)((long)param_1 + 0x27c);
      *(undefined1 *)(puVar47 + 7) = 1;
      if ((ulong)*(uint *)((long)param_1 + 0x2fc) < *(ulong *)*pauVar50) {
        *(uint *)((long)param_1 + 0x2fc) = (uint)*(ulong *)*pauVar50 & 0xff;
      }
      do {
        plVar18 = param_1;
        FUN_10978d5ec();
        if (((ulong)plVar18 & 1) != 0) goto LAB_109784d30;
        cVar10 = (char)param_1[0x53];
        if ((cVar10 == ',') || (cVar10 == -0x77)) goto code_r0x000109785288;
      } while (cVar10 != '-');
code_r0x00010978472c:
      *(long *)(puVar47 + 4) = param_1[0x51];
      break;
    case 0x8a:
      auVar55 = *(undefined1 (*) [16])(*pauVar50 + 8);
      *(undefined8 *)pauVar50[1] = *(undefined8 *)*pauVar50;
code_r0x00010978416c:
      *(long *)(*pauVar50 + 8) = auVar55._8_8_;
      *(long *)*pauVar50 = auVar55._0_8_;
      break;
    case 0x8b:
      uVar27 = *(ulong *)(*pauVar50 + 8);
      if (*(long *)*pauVar50 < (long)*(ulong *)(*pauVar50 + 8)) goto code_r0x000109784070;
      break;
    case 0x8c:
      uVar27 = *(ulong *)(*pauVar50 + 8);
      if ((long)*(ulong *)(*pauVar50 + 8) < *(long *)*pauVar50) goto code_r0x000109784070;
      break;
    case 0x8d:
      if (-1 < *(long *)*pauVar50) {
        *(uint *)(param_1 + 0x4d) = (uint)*(long *)*pauVar50 & 0xffff;
      }
      break;
    case 0x8e:
      lVar28 = *(long *)(*pauVar50 + 8);
      if (0xfffffffffffffffc < lVar28 - 4U) {
        uVar27 = *(ulong *)*pauVar50;
        uVar54 = 1 << (ulong)((int)lVar28 - 1U & 0x1f);
        if (uVar27 == 0 || uVar27 == uVar54) {
          if ((int)param_1[0x4f] == 2) {
            *(byte *)((long)param_1 + 0x264) =
                 *(byte *)((long)param_1 + 0x264) & ((byte)uVar54 ^ 0xff) | (byte)uVar27;
          }
          else {
            if (lVar28 != 3 || (int)param_1[0x4f] != 3) goto code_r0x000109784140;
            if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) {
              *(bool *)((long)param_1 + 1099) = uVar27 != 4;
            }
          }
          break;
        }
      }
code_r0x000109784140:
      if (*(char *)((long)param_1 + 0x3e9) == '\0') break;
      goto LAB_109785278;
    case 0x91:
      if (*(long *)(*param_1 + 0x4c0) == 0) goto code_r0x000109783804;
      FUN_1097858f4(param_1,pauVar50);
      break;
    case 0x92:
      if (*(long *)(*param_1 + 0x4c0) == 0) goto code_r0x000109783804;
      uVar27 = 0x11;
code_r0x000109784070:
      *(ulong *)*pauVar50 = uVar27;
    }
LAB_109784d30:
    uVar35 = (ulong)*(uint *)(param_1 + 3);
code_r0x000109784d34:
    if ((int)uVar35 != 0) {
      if ((int)uVar35 != 0x80) {
        return uVar35;
      }
      piVar31 = (int *)param_1[0x5e];
      if ((piVar31 == (int *)0x0) || (*(uint *)(param_1 + 0x5d) == 0)) {
LAB_109785224:
        uVar35 = 0x80;
        goto LAB_109785228;
      }
      piVar30 = piVar31 + (ulong)*(uint *)(param_1 + 0x5d) * 8;
      while (((char)piVar31[7] == '\0' || ((char)param_1[0x53] != (char)piVar31[6]))) {
        piVar31 = piVar31 + 8;
        if (piVar30 <= piVar31) goto LAB_109785224;
      }
      if (*(int *)((long)param_1 + 0x304) <= (int)param_1[0x60]) {
LAB_109785278:
        uVar35 = 0x86;
        goto LAB_109785228;
      }
      puVar47 = (undefined4 *)(param_1[0x61] + (long)(int)param_1[0x60] * 0x20);
      *puVar47 = *(undefined4 *)((long)param_1 + 0x27c);
      *(long *)(puVar47 + 2) = param_1[0x51] + 1;
      *(undefined8 *)(puVar47 + 4) = 1;
      *(int **)(puVar47 + 6) = piVar31;
      iVar53 = *piVar31;
      if (iVar53 - 4U < 0xfffffffd) {
LAB_109785290:
        uVar35 = 0x84;
        goto LAB_109785228;
      }
      lVar46 = param_1[(ulong)(iVar53 - 1) * 2 + 99];
      if (lVar46 == 0) {
LAB_109785298:
        uVar35 = 0x8a;
        goto LAB_109785228;
      }
      lVar28 = *(long *)(piVar31 + 2);
      lVar34 = (param_1 + (ulong)(iVar53 - 1) * 2 + 99)[1];
      if (lVar28 <= lVar34) {
        param_1[0x50] = lVar46;
        param_1[0x52] = lVar34;
        param_1[0x51] = lVar28;
        *(int *)((long)param_1 + 0x27c) = iVar53;
        goto LAB_109784e30;
      }
LAB_109785260:
      uVar35 = 0x83;
      goto LAB_109785228;
    }
    param_1[4] = param_1[8];
    if ((char)param_1[0x54] != '\0') {
      iVar53 = *(int *)((long)param_1 + 0x29c);
code_r0x000109784d90:
      param_1[0x51] = param_1[0x51] + (long)iVar53;
    }
    uVar37 = uVar37 + 1;
    if (1000000 < uVar37) {
      uVar35 = 0x8b;
      goto LAB_109785228;
    }
    lVar28 = param_1[0x51];
    lVar34 = param_1[0x52];
LAB_109784e30:
    if (lVar34 <= lVar28) {
      if ((int)param_1[0x60] < 1) {
        return 0;
      }
      goto LAB_109785260;
    }
    if ((char)param_1[0x70] != '\0') {
      return 0;
    }
  } while( true );
code_r0x0001097849b0:
  do {
    iVar53 = (int)uVar42;
    uVar22 = (ulong)(iVar53 + 1);
    if ((bVar32 & *(byte *)(param_1[0x26] + uVar22)) != 0) {
      func_0x00010978d670(&uStack_a0,(int)uVar36 + 1,uVar42,uVar36,uVar22);
      uVar36 = uVar22;
    }
    uVar42 = uVar22;
  } while (iVar53 + 2U <= uVar54);
  uVar22 = (ulong)(iVar53 + 2);
  if ((uint)uVar36 == uVar59) {
code_r0x0001097849fc:
    lVar34 = *(long *)(lVar28 + uVar38 * 0x10) - *(long *)(uVar27 + uVar38 * 0x10);
    if (lVar34 != 0) {
      if ((uint)uVar35 < uVar59) {
        lVar46 = uVar38 - uVar35;
        plVar18 = (long *)(lVar28 + uVar35 * 0x10);
        do {
          *plVar18 = *plVar18 + lVar34;
          lVar46 = lVar46 + -1;
          plVar18 = plVar18 + 2;
        } while (lVar46 != 0);
      }
      for (; (uint)uVar29 <= uVar54; uVar29 = (ulong)((uint)uVar29 + 1)) {
        *(long *)(lVar28 + uVar29 * 0x10) = *(long *)(lVar28 + uVar29 * 0x10) + lVar34;
      }
    }
  }
  else {
    func_0x00010978d670(&uStack_a0,(uint)uVar36 + 1 & 0xffff,uVar54,uVar36,uVar38);
    if (uVar59 != 0) {
      func_0x00010978d670(&uStack_a0,uVar35,uVar59 - 1,uVar36,uVar38);
    }
  }
code_r0x000109784ac4:
  uVar35 = uVar22;
  sVar43 = sVar43 + 1;
  if ((int)(uint)*(ushort *)((long)param_1 + 0x116) <= (int)sVar43) goto LAB_109784d30;
  goto code_r0x000109784940;
code_r0x000109785288:
  uVar35 = 0x89;
LAB_109785228:
  *(int *)(param_1 + 3) = (int)uVar35;
  return uVar35;
}



/* Entry: 1097852c8; end: 10978532b;  */

long FUN_1097852c8(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1d8);
  FUN_10978ce58();
  param_1 = param_1 * (ulong)uVar1;
  return param_1 + (param_1 >> 0x3f) + 0x8000 >> 0x10;
}



/* Entry: 10978532c; end: 10978542f;  */

void FUN_10978532c(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010978cf20();
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = param_1;
    func_0x00010978ce58();
    if (uVar3 == 0) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar2 = -uVar3;
      if (-1 < (long)uVar3) {
        uVar2 = uVar3;
      }
      uVar1 = -param_3;
      if (-1 < (long)param_3) {
        uVar1 = param_3;
      }
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = ((uVar2 >> 1) + uVar1 * 0x10000) / uVar2;
      }
    }
    uVar2 = -uVar4;
    if (-1 < (long)(uVar3 ^ param_3)) {
      uVar2 = uVar4;
    }
    *(ulong *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) = uVar2;
  }
  return;
}



/* Entry: 109785430; end: 109785443;  */

undefined2 FUN_109785430(long param_1)

{
  return *(undefined2 *)(param_1 + 0x1d8);
}



/* Entry: 109785444; end: 1097854cb;  */

void FUN_109785444(long param_1,long param_2,undefined8 param_3)

{
  func_0x00010978cf20();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2b0) + param_2 * 8) = param_3;
  }
  return;
}



/* Entry: 1097854cc; end: 10978577f;  */

void FUN_1097854cc(long param_1)

{
  ulong uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  sVar2 = *(short *)(param_1 + 0x226);
  if (sVar2 == 0x4000) {
    sVar3 = *(short *)(param_1 + 0x222);
    uVar4 = (ulong)sVar3;
LAB_109785518:
    *(ulong *)(param_1 + 0x3f0) = uVar4;
  }
  else {
    if (*(short *)(param_1 + 0x228) != 0x4000) {
      sVar3 = *(short *)(param_1 + 0x222);
      uVar4 = (long)(int)sVar3 * (long)(int)sVar2 +
              (long)(int)*(short *)(param_1 + 0x224) * (long)(int)*(short *)(param_1 + 0x228) >> 0xe
      ;
      goto LAB_109785518;
    }
    uVar4 = (ulong)*(short *)(param_1 + 0x224);
    *(ulong *)(param_1 + 0x3f0) = uVar4;
    sVar3 = *(short *)(param_1 + 0x222);
  }
  if (sVar3 == 0x4000) {
    *(code **)(param_1 + 0x400) = FUN_10978cfa4;
  }
  else {
    if (*(short *)(param_1 + 0x224) == 0x4000) {
      pcVar6 = (code *)0x10978cfac;
    }
    else {
      pcVar6 = FUN_10978cfb4;
    }
    *(code **)(param_1 + 0x400) = pcVar6;
  }
  if (*(short *)(param_1 + 0x21e) == 0x4000) {
    *(code **)(param_1 + 0x408) = FUN_10978cfa4;
  }
  else {
    if (*(short *)(param_1 + 0x220) == 0x4000) {
      uVar5 = 0x10978cfac;
    }
    else {
      uVar5 = 0x10978cfe0;
    }
    *(undefined8 *)(param_1 + 0x408) = uVar5;
  }
  *(code **)(param_1 + 0x418) = FUN_10978d00c;
  *(undefined8 *)(param_1 + 0x420) = 0x10978d118;
  if (uVar4 == 0x4000) {
    if (sVar2 == 0x4000) {
      uVar5 = 0x10978d1f4;
      pcVar6 = FUN_10978d1a8;
    }
    else {
      if (*(short *)(param_1 + 0x228) != 0x4000) goto LAB_1097855f0;
      uVar5 = 0x10978d26c;
      pcVar6 = (code *)0x10978d20c;
    }
    *(code **)(param_1 + 0x418) = pcVar6;
    *(undefined8 *)(param_1 + 0x420) = uVar5;
  }
LAB_1097855f0:
  uVar1 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if (uVar1 < 0x400) {
    *(undefined8 *)(param_1 + 0x3f0) = 0x4000;
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



/* Entry: 109785780; end: 1097858f3;  */

void FUN_109785780(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = param_1;
  (*(code *)param_1[0x85])();
  uVar8 = *param_2;
  if (uVar8 != 0) {
    uVar9 = 1;
    do {
      lVar4 = param_1[7];
      if (lVar4 < 2) {
        if (*(char *)((long)param_1 + 0x3e9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x81;
        }
        param_1[7] = 0;
        break;
      }
      param_1[7] = lVar4 + -2;
      uVar5 = *(ulong *)(param_1[6] + lVar4 * 8 + -8);
      uVar3 = (uint)uVar5;
      if ((uVar3 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) {
        uVar6 = *(ulong *)(param_1[6] + (lVar4 + -2) * 8);
        uVar7 = uVar6 >> 4 & 0xf;
        uVar1 = uVar7;
        if ((char)param_1[0x53] == 'q') {
          uVar1 = uVar7 | 0x10;
        }
        uVar7 = uVar7 | 0x20;
        if ((char)param_1[0x53] != 'r') {
          uVar7 = uVar1;
        }
        if (plVar2 == (long *)(uVar7 + *(ushort *)(param_1 + 0x4c))) {
          uVar6 = uVar6 & 0xf;
          lVar4 = -8;
          if (7 < uVar6) {
            lVar4 = -7;
          }
          if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
              (*(char *)((long)param_1 + 1099) == '\0')) ||
             (((*(char *)((long)param_1 + 0x44c) == '\0' ||
               (*(char *)((long)param_1 + 0x44d) == '\0')) &&
              ((((char)param_1[0x7d] != '\0' && ((short)param_1[0x45] != 0)) ||
               ((*(byte *)(param_1[0xe] + (uVar5 & 0xffff)) >> 4 & 1) != 0)))))) {
            (*(code *)param_1[0x83])
                      (param_1,param_1 + 9,uVar3 & 0xffff,
                       lVar4 + uVar6 << ((ulong)(6 - *(ushort *)((long)param_1 + 0x262)) & 0x3f));
          }
        }
      }
      else if (*(char *)((long)param_1 + 0x3e9) != '\0') {
        *(undefined4 *)(param_1 + 3) = 0x86;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 <= uVar8);
  }
  param_1[8] = param_1[7];
  return;
}



/* Entry: 1097858f4; end: 10978595b;  */

void FUN_1097858f4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = **(uint **)(*param_1 + 0x4c0);
  uVar2 = (ulong)uVar1;
  if (((int)param_1[5] - (int)param_1[4]) + 1U <= uVar1) {
    *(undefined4 *)(param_1 + 3) = 0x82;
    return;
  }
  plVar3 = *(long **)(*(uint **)(*param_1 + 0x4c0) + 4);
  if (plVar3 == (long *)0x0) {
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(param_2,uVar2 << 3);
      return;
    }
  }
  else if (uVar1 != 0) {
    do {
      *param_2 = *plVar3 >> 2;
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10978595c; end: 109785be3;  */

void FUN_10978595c(ulong param_1,ushort param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  if (((param_2 < *(ushort *)(param_1 + 0x94)) && (param_3 + 1U < *(long *)(param_1 + 0x2a8) + 1U))
     && (uVar4 = *(ushort *)(param_1 + 0x218), uVar4 < *(ushort *)(param_1 + 0x54))) {
    if (param_3 == -1) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_1;
      (**(code **)(param_1 + 0x430))(param_1,param_3);
      uVar4 = *(ushort *)(param_1 + 0x218);
    }
    uVar9 = (ulong)uVar4;
    uVar11 = *(ulong *)(param_1 + 600);
    lVar5 = uVar16 - uVar11;
    lVar12 = -lVar5;
    if (-1 < lVar5) {
      lVar12 = lVar5;
    }
    uVar10 = -uVar11;
    if (-1 < (long)uVar16) {
      uVar10 = uVar11;
    }
    if (*(long *)(param_1 + 0x250) <= lVar12) {
      uVar10 = uVar16;
    }
    if (*(short *)(param_1 + 0x26e) == 0) {
      uVar20 = (uint)uVar10;
      uVar25 = -uVar20;
      if (-1 < (int)uVar20) {
        uVar25 = uVar20;
      }
      uVar11 = (ulong)param_2;
      plVar1 = (long *)(*(long *)(param_1 + 0x58) + uVar9 * 0x10);
      lVar14 = *plVar1;
      iVar8 = MP_INT_ABS((int)*(short *)(param_1 + 0x226));
      iVar17 = MP_INT_ABS((int)*(short *)(param_1 + 0x228));
      uVar20 = iVar8 * (uVar25 >> 0x10);
      uVar22 = iVar17 * (uVar25 >> 0x10);
      uVar21 = uVar20 * 0x10000;
      uVar23 = uVar22 * 0x10000;
      uVar16 = CONCAT44(uVar23,uVar21) | 0x200000002000;
      uVar24 = (int)uVar16 + iVar8 * (uVar25 & 0xffff);
      uVar25 = (int)(uVar16 >> 0x20) + iVar17 * (uVar25 & 0xffff);
      bVar19 = (byte)(uVar10 >> 0x18);
      iVar17 = ((uVar20 >> 0x10) + (uint)(uVar24 < (uVar21 | 0x2000))) * 0x40000 + (uVar24 >> 0xe);
      iVar18 = ((uVar22 >> 0x10) + (uint)(uVar25 < (uVar23 | 0x2000))) * 0x40000 + (uVar25 >> 0xe);
      iVar8 = -iVar18;
      uVar16 = CONCAT44(iVar18,iVar17) ^
               (CONCAT44(iVar18,iVar17) ^
               CONCAT17((char)((uint)iVar8 >> 0x18),
                        CONCAT16((char)((uint)iVar8 >> 0x10),
                                 CONCAT15((char)((uint)iVar8 >> 8),CONCAT14((char)iVar8,-iVar17)))))
               & CONCAT44(-(uint)((char)(bVar19 ^ (byte)(*(short *)(param_1 + 0x228) >> 0xf)) < '\0'
                                 ),-(uint)((char)(bVar19 ^ (byte)(*(short *)(param_1 + 0x226) >> 0xf
                                                                 )) < '\0'));
      lVar12 = *(long *)(param_1 + 0x98);
      lVar5 = *(long *)(param_1 + 0xa0);
      plVar2 = (long *)(lVar12 + uVar11 * 0x10);
      plVar2[1] = plVar1[1] + (long)(int)(uVar16 >> 0x20);
      *plVar2 = lVar14 + (int)uVar16;
      puVar6 = (undefined8 *)(lVar12 + uVar11 * 0x10);
      uVar15 = *puVar6;
      puVar7 = (undefined8 *)(lVar5 + uVar11 * 0x10);
      puVar7[1] = puVar6[1];
      *puVar7 = uVar15;
      uVar9 = (ulong)*(ushort *)(param_1 + 0x218);
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 0x10);
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + uVar9 * 0x10);
    uVar9 = param_1;
    (**(code **)(param_1 + 0x408))(param_1,*plVar2 - *plVar1,plVar2[1] - plVar1[1]);
    plVar1 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)param_2 * 0x10);
    plVar2 = (long *)(*(long *)(param_1 + 0x60) + (ulong)*(ushort *)(param_1 + 0x218) * 0x10);
    uVar11 = param_1;
    (**(code **)(param_1 + 0x400))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
    uVar16 = -uVar10;
    if (-1 < (long)(uVar9 ^ uVar10) || *(char *)(param_1 + 0x244) == '\0') {
      uVar16 = uVar10;
    }
    bVar19 = *(byte *)(param_1 + 0x298);
    if ((bVar19 >> 2 & 1) == 0) {
      lVar12 = *(long *)(param_1 + ((ulong)bVar19 & 3) * 8 + 0x1f0);
      uVar13 = uVar16 - lVar12;
      uVar10 = lVar12 + uVar16;
      uVar13 = uVar13 & (long)uVar13 >> 0x3f;
      if ((uVar16 & 0x8000000000000000) == 0) {
        uVar13 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    else {
      uVar10 = uVar16;
      if (*(short *)(param_1 + 0x26c) == *(short *)(param_1 + 0x26e)) {
        lVar5 = uVar16 - uVar9;
        lVar12 = -lVar5;
        if (-1 < lVar5) {
          lVar12 = lVar5;
        }
        uVar10 = uVar9;
        if (lVar12 <= *(long *)(param_1 + 0x248)) {
          uVar10 = uVar16;
        }
      }
      uVar13 = param_1;
      (**(code **)(param_1 + 0x3f8))(param_1,uVar10,bVar19 & 3);
      bVar19 = *(byte *)(param_1 + 0x298);
    }
    if ((bVar19 >> 3 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x238);
      uVar16 = uVar13;
      if ((long)-uVar10 <= (long)uVar13) {
        uVar16 = -uVar10;
      }
      uVar3 = uVar13;
      if ((long)uVar13 <= (long)uVar10) {
        uVar3 = uVar10;
      }
      uVar13 = uVar16;
      if ((uVar9 & 0x8000000000000000) == 0) {
        uVar13 = uVar3;
      }
    }
    (**(code **)(param_1 + 0x418))(param_1,param_1 + 0x88,param_2,uVar13 - uVar11);
  }
  else if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *(undefined2 *)(param_1 + 0x21a) = *(undefined2 *)(param_1 + 0x218);
  if ((*(byte *)(param_1 + 0x298) >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0x218) = param_2;
  }
  *(ushort *)(param_1 + 0x21c) = param_2;
  return;
}



/* Entry: 109785be4; end: 109785e0b;  */

void FUN_109785be4(ulong param_1,ushort param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if ((param_2 < *(ushort *)(param_1 + 0x94)) &&
     (uVar5 = *(ushort *)(param_1 + 0x218), uVar5 < *(ushort *)(param_1 + 0x54))) {
    uVar11 = param_1;
    if ((*(short *)(param_1 + 0x26c) == 0) || (*(short *)(param_1 + 0x26e) == 0)) {
      plVar1 = (long *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 0x10);
      plVar2 = (long *)(*(long *)(param_1 + 0x58) + (ulong)uVar5 * 0x10);
      (**(code **)(param_1 + 0x408))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0xa8) + (ulong)param_2 * 0x10);
      plVar2 = (long *)(*(long *)(param_1 + 0x68) + (ulong)uVar5 * 0x10);
      if (*(long *)(param_1 + 0x198) == *(long *)(param_1 + 0x1a0)) {
        (**(code **)(param_1 + 0x408))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
        lVar6 = *(long *)(param_1 + 0x198) * uVar11;
        uVar11 = lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10;
      }
      else {
        lVar10 = (*plVar1 - *plVar2) * *(long *)(param_1 + 0x198);
        lVar6 = (plVar1[1] - plVar2[1]) * *(long *)(param_1 + 0x1a0);
        (**(code **)(param_1 + 0x408))
                  (param_1,lVar10 + (lVar10 >> 0x3f) + 0x8000 >> 0x10,
                   lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10);
      }
    }
    lVar6 = *(long *)(param_1 + 0x250);
    if (0 < lVar6) {
      uVar8 = *(ulong *)(param_1 + 600);
      uVar9 = -uVar8;
      if (-1 < (long)uVar11) {
        uVar9 = uVar8;
      }
      if ((long)uVar11 < (long)(uVar8 + lVar6) && (long)(uVar8 - lVar6) < (long)uVar11) {
        uVar11 = uVar9;
      }
    }
    bVar4 = *(byte *)(param_1 + 0x298);
    if ((bVar4 >> 2 & 1) == 0) {
      lVar6 = *(long *)(param_1 + ((ulong)bVar4 & 3) * 8 + 0x1f0);
      uVar9 = uVar11 - lVar6;
      uVar8 = lVar6 + uVar11;
      uVar9 = uVar9 & (long)uVar9 >> 0x3f;
      if ((uVar11 & 0x8000000000000000) == 0) {
        uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    else {
      uVar9 = param_1;
      (**(code **)(param_1 + 0x3f8))(param_1,uVar11,bVar4 & 3);
      bVar4 = *(byte *)(param_1 + 0x298);
    }
    if ((bVar4 >> 3 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x238);
      uVar8 = uVar9;
      if ((long)-uVar7 <= (long)uVar9) {
        uVar8 = -uVar7;
      }
      uVar3 = uVar9;
      if ((long)uVar9 <= (long)uVar7) {
        uVar3 = uVar7;
      }
      uVar9 = uVar8;
      if ((uVar11 & 0x8000000000000000) == 0) {
        uVar9 = uVar3;
      }
    }
    plVar1 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)param_2 * 0x10);
    plVar2 = (long *)(*(long *)(param_1 + 0x60) + (ulong)*(ushort *)(param_1 + 0x218) * 0x10);
    uVar11 = param_1;
    (**(code **)(param_1 + 0x400))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
    (**(code **)(param_1 + 0x418))(param_1,param_1 + 0x88,param_2,uVar9 - uVar11);
  }
  else if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *(undefined2 *)(param_1 + 0x21a) = *(undefined2 *)(param_1 + 0x218);
  *(ushort *)(param_1 + 0x21c) = param_2;
  if ((*(byte *)(param_1 + 0x298) >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0x218) = param_2;
  }
  return;
}



/* Entry: 109785e0c; end: 109785eff;  */

void FUN_109785e0c(long param_1,ulong *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (ulong)(*(byte *)(param_1 + 0x298) + 0xff49) & 0xffff;
  if ((uint)uVar2 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) + 1U) {
    *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + 1;
    if (*(byte *)(param_1 + 0x298) != 0xb7) {
      lVar3 = *(long *)(param_1 + 0x280);
      do {
        lVar4 = *(long *)(param_1 + 0x288);
        *(long *)(param_1 + 0x288) = lVar4 + 2;
        pbVar1 = (byte *)(lVar3 + lVar4);
        *param_2 = (long)(short)((ushort)*pbVar1 << 8) | (ulong)pbVar1[1];
        uVar2 = uVar2 - 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x82;
  return;
}



/* Entry: 109785f00; end: 109785fe3;  */

void FUN_109785f00(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x4c0);
  if (puVar6 == (uint *)0x0) {
    lVar2 = param_1;
    FUN_109785fe4(param_1,0);
    if ((int)lVar2 != 0) {
      return;
    }
    puVar6 = *(uint **)(param_1 + 0x4c0);
  }
  if ((*(long *)(puVar6 + 2) != 0) ||
     (lVar2 = param_1, FUN_109787afc(param_1,0,0,1), (int)lVar2 == 0)) {
    uVar1 = *puVar6;
    if (param_2 <= *puVar6) {
      uVar1 = param_2;
    }
    uVar5 = (ulong)uVar1;
    if (*(char *)(param_1 + 0x4b9) == '\0') {
      if (uVar1 != 0) {
        _bzero(param_3,uVar5 << 3);
      }
    }
    else if (uVar1 != 0) {
      puVar3 = *(undefined8 **)(puVar6 + 4);
      puVar4 = param_3;
      do {
        *puVar4 = *puVar3;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    if (uVar1 < param_2) {
      _bzero(param_3 + uVar1,(ulong)(param_2 + ~uVar1) * 8 + 8);
    }
  }
  return;
}



/* Entry: 109785fe4; end: 10978674b;  */

long * FUN_109785fe4(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined4 uVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  ulong uVar30;
  uint *puVar31;
  uint uVar32;
  uint *puVar33;
  undefined1 auStack_bc [4];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined2 uStack_98;
  ushort uStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  undefined1 auStack_70 [16];
  
  puVar9 = (uint *)param_1[0x17];
  plVar13 = (long *)param_1[0x18];
  uStack_74 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar19 = *(uint *)(param_1 + 3);
  uVar5 = uVar19 >> 0x10;
  puVar33 = (uint *)param_1[0x98];
  if (puVar33 == (uint *)0x0) {
    plVar28 = param_1;
    (*(code *)param_1[0x68])(param_1,0x66766172,plVar13,auStack_70);
    if ((int)plVar28 != 0) {
      return plVar28;
    }
    lVar27 = plVar13[2];
    plVar28 = plVar13;
    FUN_1097579b0(plVar13,&UNK_10dff9848,&uStack_90);
    if ((int)plVar28 != 0) {
      return plVar28;
    }
    if (uVar5 < uStack_88._6_2_) {
      return (long *)0x8;
    }
    uVar7 = (ushort)uStack_80;
    uVar6 = uStack_88._2_2_;
    puVar31 = puVar9;
    (**(code **)(puVar9 + 2))(puVar9,0x90);
    if (puVar31 == (uint *)0x0) {
      param_1[0x98] = 0;
      return (long *)0x40;
    }
    puVar31[0x1e] = 0;
    puVar31[0x1f] = 0;
    puVar31[0x1c] = 0;
    puVar31[0x1d] = 0;
    puVar31[0x22] = 0;
    puVar31[0x23] = 0;
    puVar31[0x20] = 0;
    puVar31[0x21] = 0;
    puVar31[0x16] = 0;
    puVar31[0x17] = 0;
    puVar31[0x14] = 0;
    puVar31[0x15] = 0;
    puVar31[0x1a] = 0;
    puVar31[0x1b] = 0;
    puVar31[0x18] = 0;
    puVar31[0x19] = 0;
    puVar31[0xe] = 0;
    puVar31[0xf] = 0;
    puVar31[0xc] = 0;
    puVar31[0xd] = 0;
    puVar31[0x12] = 0;
    puVar31[0x13] = 0;
    puVar31[0x10] = 0;
    puVar31[0x11] = 0;
    puVar31[6] = 0;
    puVar31[7] = 0;
    puVar31[4] = 0;
    puVar31[5] = 0;
    puVar31[10] = 0;
    puVar31[0xb] = 0;
    puVar31[8] = 0;
    puVar31[9] = 0;
    puVar31[2] = 0;
    puVar31[3] = 0;
    puVar31[0] = 0;
    puVar31[1] = 0;
    param_1[0x98] = (long)puVar31;
    bVar8 = (uint)uVar6 * 4 + 6 != (uint)uVar7;
    uVar30 = (ulong)uStack_88._2_2_;
    *puVar31 = (uint)uStack_88._2_2_;
  }
  else {
    lVar27 = 0;
    uVar30 = (ulong)*puVar33;
    bVar8 = true;
    puVar31 = puVar33;
  }
  uStack_74 = 0;
  uVar22 = uVar30 * 2 + 7 & 0x3fffffff8;
  lVar23 = uVar30 * 0x30;
  uVar15 = (ulong)(uVar5 << 4);
  uVar29 = (uint)uVar30;
  lVar11 = (ulong)(uVar29 * uVar5) * 8;
  if (puVar33 == (uint *)0x0) {
    lVar16 = uVar15 + lVar23 + (ulong)(uVar29 * 5) + lVar11 + uVar22 + 0x20;
    *(long *)(puVar31 + 8) = lVar16;
    puVar33 = puVar9;
    FUN_1097537e4(puVar9,lVar16,&uStack_74);
    if (uStack_74 != 0) {
      return (long *)(ulong)uStack_74;
    }
    *(uint **)(param_1[0x98] + 0x18) = puVar33;
    *puVar33 = uVar29;
    puVar33[1] = 0xffffffff;
    puVar33[2] = uVar5;
    puVar31 = puVar33 + 8;
    plVar28 = (long *)((long)puVar31 + uVar22);
    plVar10 = plVar28 + uVar30 * 6;
    *(long **)(puVar33 + 4) = plVar28;
    *(long **)(puVar33 + 6) = plVar10;
    if (0xffff < uVar19) {
      uVar19 = uVar5;
      if (uVar5 < 2) {
        uVar19 = 1;
      }
      uVar20 = (ulong)uVar19;
      lVar16 = (long)puVar33 + lVar23 + uVar15 + uVar22 + 0x20;
      plVar25 = plVar10;
      do {
        *plVar25 = lVar16;
        lVar16 = lVar16 + uVar30 * 8;
        uVar20 = uVar20 - 1;
        plVar25 = plVar25 + 2;
      } while (uVar20 != 0);
    }
    if (uVar29 != 0) {
      lVar16 = (long)plVar10 + lVar11 + uVar15;
      uVar20 = uVar30;
      do {
        *plVar28 = lVar16;
        lVar16 = lVar16 + 5;
        uVar20 = uVar20 - 1;
        plVar28 = plVar28 + 6;
      } while (uVar20 != 0);
    }
    uVar20 = lVar27 + (uStack_88 & 0xffff);
    if ((code *)plVar13[5] == (code *)0x0) {
      if (uVar20 <= (ulong)plVar13[1]) goto LAB_109786324;
    }
    else {
      plVar28 = plVar13;
      (*(code *)plVar13[5])(plVar13,uVar20,0,0);
      if (plVar28 == (long *)0x0) {
LAB_109786324:
        plVar13[2] = uVar20;
        uStack_74 = 0;
        if (uVar29 != 0) {
          plVar28 = *(long **)(puVar33 + 4);
          uVar20 = uVar30;
          do {
            plVar10 = plVar13;
            FUN_1097579b0(plVar13,&UNK_10dff986c,&lStack_b8);
            if ((int)plVar10 != 0) {
              return plVar10;
            }
            plVar28[4] = lStack_b8;
            plVar28[2] = lStack_a8;
            plVar28[1] = lStack_b0;
            plVar28[3] = lStack_a0;
            *(uint *)(plVar28 + 5) = (uint)uStack_96;
            *(char *)*plVar28 = (char)((ulong)lStack_b8 >> 0x18);
            *(char *)(*plVar28 + 1) = (char)((ulong)plVar28[4] >> 0x10);
            *(char *)(*plVar28 + 2) = (char)((ulong)plVar28[4] >> 8);
            *(char *)(*plVar28 + 3) = (char)plVar28[4];
            *(undefined1 *)(*plVar28 + 4) = 0;
            *(undefined2 *)puVar31 = uStack_98;
            lVar27 = plVar28[2];
            if ((lVar27 < plVar28[1]) || (plVar28[3] < lVar27)) {
              plVar28[1] = lVar27;
              plVar28[3] = lVar27;
            }
            plVar28 = plVar28 + 6;
            puVar31 = (uint *)((long)puVar31 + 2);
            uVar19 = (int)uVar20 - 1;
            uVar20 = (ulong)uVar19;
          } while (uVar19 != 0);
        }
        uStack_74 = 0;
        puVar31 = puVar9;
        FUN_1097539a8(puVar9,8,0,(ulong)(uVar29 * uVar5),0,&uStack_74);
        lVar27 = param_1[0x98];
        *(uint **)(lVar27 + 0x28) = puVar31;
        if (uStack_74 != 0) {
          return (long *)(ulong)uStack_74;
        }
        uVar19 = (uint)uStack_88._6_2_;
        if (uStack_88._6_2_ != 0) {
          if (*(char *)(lVar27 + 0x30) == '\0') {
            uVar20 = plVar13[2];
            func_0x000109788db0(param_1);
            if ((code *)plVar13[5] == (code *)0x0) {
              if (uVar20 <= (ulong)plVar13[1]) goto LAB_109786728;
            }
            else {
              plVar28 = plVar13;
              (*(code *)plVar13[5])(plVar13,uVar20,0,0);
              if (plVar28 == (long *)0x0) {
LAB_109786728:
                plVar13[2] = uVar20;
                uStack_74 = 0;
                uVar19 = (uint)uStack_88._6_2_;
                if (uStack_88._6_2_ == 0) goto LAB_109786594;
                puVar31 = *(uint **)(param_1[0x98] + 0x28);
                goto LAB_109786444;
              }
            }
            goto LAB_10978631c;
          }
LAB_109786444:
          uVar32 = 0;
          plVar28 = *(long **)(puVar33 + 6);
          lVar27 = 4;
          if (!bVar8) {
            lVar27 = 6;
          }
          do {
            plVar10 = plVar13;
            func_0x00010975780c(plVar13,lVar27 + uVar30 * 4);
            uStack_74 = (uint)plVar10;
            if (uStack_74 != 0) {
              return plVar10;
            }
            puVar17 = (ushort *)plVar13[8];
            pbVar4 = (byte *)plVar13[9];
            if ((byte *)((long)puVar17 + 1U) < pbVar4) {
              uVar19 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
              puVar17 = puVar17 + 1;
            }
            else {
              uVar19 = 0;
            }
            *(uint *)(plVar28 + 1) = uVar19;
            lVar16 = 2;
            if (pbVar4 <= (byte *)((long)puVar17 + 1U)) {
              lVar16 = 0;
            }
            puVar17 = (ushort *)((long)puVar17 + lVar16);
            plVar13[8] = (long)puVar17;
            if (uVar29 != 0) {
              puVar21 = (ulong *)*plVar28;
              uVar20 = uVar30;
              do {
                if ((byte *)((long)puVar17 + 3U) < pbVar4) {
                  uVar6 = *puVar17;
                  pbVar1 = (byte *)((long)puVar17 + 1);
                  puVar2 = puVar17 + 1;
                  pbVar3 = (byte *)((long)puVar17 + 3);
                  puVar17 = puVar17 + 2;
                  uVar24 = (long)(int)((uint)(byte)uVar6 << 0x18) | (ulong)*pbVar1 << 0x10 |
                           (ulong)(byte)*puVar2 << 8 | (ulong)*pbVar3;
                }
                else {
                  uVar24 = 0;
                }
                plVar13[8] = (long)puVar17;
                *puVar21 = uVar24;
                uVar19 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar19;
                puVar21 = puVar21 + 1;
              } while (uVar19 != 0);
            }
            if (bVar8) {
              uVar19 = 0xffff;
            }
            else {
              if ((byte *)((long)puVar17 + 1U) < pbVar4) {
                uVar19 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
                puVar17 = puVar17 + 1;
              }
              else {
                uVar19 = 0;
              }
              plVar13[8] = (long)puVar17;
            }
            *(uint *)((long)plVar28 + 0xc) = uVar19;
            func_0x000109789108(param_1,uVar30,*plVar28,puVar31);
            if (plVar13[5] != 0) {
              if (*plVar13 != 0) {
                (**(code **)(plVar13[7] + 0x10))();
              }
              *plVar13 = 0;
            }
            puVar31 = puVar31 + uVar30 * 2;
            plVar13[8] = 0;
            plVar13[9] = 0;
            uVar32 = uVar32 + 1;
            plVar28 = plVar28 + 2;
            uVar19 = (uint)uStack_88._6_2_;
          } while (uVar32 < uStack_88._6_2_);
        }
LAB_109786594:
        if (uVar5 != uVar19) {
          lVar27 = param_1[0x6e];
          uVar26 = 0x11;
          plVar13 = param_1;
          (**(code **)(lVar27 + 0x160))(param_1,0x11,&lStack_b8,auStack_bc);
          if ((int)plVar13 == 0) {
            uVar26 = 2;
            plVar13 = param_1;
            (**(code **)(lVar27 + 0x160))(param_1,2,&lStack_b8,auStack_bc);
            if ((int)plVar13 == 0) goto LAB_109786640;
          }
          plVar13 = param_1;
          (**(code **)(lVar27 + 0x160))(param_1,6,&lStack_b8,auStack_bc);
          if ((int)plVar13 != 0) {
            *(uint *)((long)param_1 + 0x4dc) = uVar5;
            plVar13 = (long *)(*(long *)(puVar33 + 6) + (uStack_88 >> 0x30) * 0x10);
            *(undefined4 *)(plVar13 + 1) = uVar26;
            *(undefined4 *)((long)plVar13 + 0xc) = 6;
            if (uVar29 != 0) {
              puVar14 = (undefined8 *)*plVar13;
              puVar18 = (undefined8 *)(*(long *)(puVar33 + 4) + 0x10);
              uVar20 = uVar30;
              do {
                *puVar14 = *puVar18;
                uVar19 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar19;
                puVar14 = puVar14 + 1;
                puVar18 = puVar18 + 6;
              } while (uVar19 != 0);
            }
          }
        }
LAB_109786640:
        FUN_1097893d8(param_1);
        goto joined_r0x000109786654;
      }
    }
LAB_10978631c:
    plVar13 = (long *)0x55;
  }
  else {
joined_r0x000109786654:
    if (param_2 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      func_0x000109757fa4(puVar9,*(undefined8 *)(param_1[0x98] + 0x18),
                          *(undefined8 *)(param_1[0x98] + 0x20),&uStack_74);
      plVar13 = (long *)(ulong)uStack_74;
      if (uStack_74 == 0) {
        plVar13 = (long *)((long)puVar9 + uVar22 + 0x20);
        plVar28 = plVar13 + uVar30 * 6;
        *(long **)(puVar9 + 4) = plVar13;
        *(long **)(puVar9 + 6) = plVar28;
        uVar20 = (ulong)puVar9[2];
        if (puVar9[2] != 0) {
          lVar27 = (long)puVar9 + lVar23 + uVar15 + uVar22 + 0x20;
          plVar10 = plVar28;
          do {
            *plVar10 = lVar27;
            lVar27 = lVar27 + uVar30 * 8;
            uVar20 = uVar20 - 1;
            plVar10 = plVar10 + 2;
          } while (uVar20 != 0);
        }
        if (uVar29 != 0) {
          lVar27 = (long)plVar28 + lVar11 + uVar15;
          do {
            *plVar13 = lVar27;
            lVar11 = plVar13[4];
            if (lVar11 < 0x736c6e74) {
              if (lVar11 == 0x6974616c) {
                puVar12 = &UNK_10f57fba5;
              }
              else {
                if (lVar11 != 0x6f70737a) goto LAB_1097861a0;
                puVar12 = &UNK_10f57fb93;
              }
LAB_10978619c:
              *plVar13 = (long)puVar12;
            }
            else {
              if (lVar11 == 0x736c6e74) {
                puVar12 = &UNK_10f57fb9f;
                goto LAB_10978619c;
              }
              puVar12 = &DAT_10f57fadb;
              if ((lVar11 == 0x77676874) || (puVar12 = &DAT_10f57fb8d, lVar11 == 0x77647468))
              goto LAB_10978619c;
            }
LAB_1097861a0:
            lVar27 = lVar27 + 5;
            plVar13 = plVar13 + 6;
            uVar19 = (int)uVar30 - 1;
            uVar30 = (ulong)uVar19;
          } while (uVar19 != 0);
        }
        plVar13 = (long *)0x0;
        *param_2 = puVar9;
      }
    }
  }
  return plVar13;
}



/* Entry: 10978674c; end: 109786963;  */

ulong FUN_10978674c(ulong param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint uStack_54;
  
  uStack_54 = 0;
  plVar7 = *(long **)(param_1 + 0xb8);
  lVar9 = *(long *)(param_1 + 0x4c0);
  if (lVar9 == 0) {
    uVar8 = param_1;
    FUN_109785fe4(param_1,0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    lVar9 = *(long *)(param_1 + 0x4c0);
  }
  uStack_54 = 0;
  puVar10 = *(uint **)(lVar9 + 0x18);
  uVar2 = *puVar10;
  uVar1 = uVar2;
  if (param_2 <= uVar2) {
    uVar1 = param_2;
  }
  plVar4 = *(long **)(lVar9 + 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar7;
    FUN_1097539a8(plVar7,8,0,uVar2,0,&uStack_54);
    *(long **)(lVar9 + 8) = plVar4;
    if (uStack_54 != 0) {
      return (ulong)uStack_54;
    }
  }
  bVar3 = false;
  for (uVar2 = uVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (*plVar4 != *param_3) {
      *plVar4 = *param_3;
      bVar3 = true;
    }
    param_3 = param_3 + 1;
    plVar4 = plVar4 + 1;
  }
  uVar2 = *puVar10;
  if ((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) {
    if (uVar1 < uVar2) {
      iVar6 = uVar2 - uVar1;
      plVar5 = (long *)(*(long *)(puVar10 + 4) + (ulong)uVar1 * 0x30 + 0x10);
      do {
        if (*plVar4 != *plVar5) {
          *plVar4 = *plVar5;
          bVar3 = true;
        }
        plVar4 = plVar4 + 1;
        iVar6 = iVar6 + -1;
        plVar5 = plVar5 + 6;
      } while (iVar6 != 0);
    }
  }
  else if (uVar1 < uVar2) {
    plVar5 = (long *)(*(long *)(*(long *)(puVar10 + 6) +
                                (*(ulong *)(param_1 + 8) >> 0x10 & 0xffff) * 0x10 + -0x10) +
                     (ulong)uVar1 * 8);
    iVar6 = uVar2 - uVar1;
    do {
      if (*plVar4 != *plVar5) {
        *plVar4 = *plVar5;
        bVar3 = true;
      }
      plVar5 = plVar5 + 1;
      plVar4 = plVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(long *)(lVar9 + 0x10) == 0 || bVar3) {
    plVar4 = plVar7;
    FUN_1097539a8(plVar7,8,0,uVar2,0,&uStack_54);
    uVar8 = (ulong)uStack_54;
    if (uStack_54 == 0) {
      if (*(char *)(*(long *)(param_1 + 0x4c0) + 0x30) == '\0') {
        FUN_109788db0(param_1);
      }
      func_0x000109789108(param_1,uVar1,*(undefined8 *)(lVar9 + 8),plVar4);
      FUN_109787afc(param_1,*puVar10,plVar4,0);
      uVar8 = param_1;
    }
    if (plVar4 != (long *)0x0) {
      (*(code *)plVar7[2])(plVar7,plVar4);
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



/* Entry: 109786964; end: 109786a47;  */

void FUN_109786964(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x4c0);
  if (puVar6 == (uint *)0x0) {
    lVar2 = param_1;
    FUN_109785fe4(param_1,0);
    if ((int)lVar2 != 0) {
      return;
    }
    puVar6 = *(uint **)(param_1 + 0x4c0);
  }
  if ((*(long *)(puVar6 + 2) != 0) ||
     (lVar2 = param_1, FUN_109787afc(param_1,0,0,1), (int)lVar2 == 0)) {
    uVar1 = *puVar6;
    if (param_2 <= *puVar6) {
      uVar1 = param_2;
    }
    uVar5 = (ulong)uVar1;
    if (*(char *)(param_1 + 0x4b9) == '\0') {
      if (uVar1 != 0) {
        _bzero(param_3,uVar5 << 3);
      }
    }
    else if (uVar1 != 0) {
      puVar3 = *(undefined8 **)(puVar6 + 2);
      puVar4 = param_3;
      do {
        *puVar4 = *puVar3;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    if (uVar1 < param_2) {
      _bzero(param_3 + uVar1,(ulong)(param_2 + ~uVar1) * 8 + 8);
    }
  }
  return;
}



/* Entry: 109786a48; end: 109786b63;  */

/* WARNING: Removing unreachable block (ram,0x0001097867a4) */
/* WARNING: Removing unreachable block (ram,0x0001097867a8) */
/* WARNING: Removing unreachable block (ram,0x0001097867b8) */
/* WARNING: Removing unreachable block (ram,0x0001097867c0) */

ulong FUN_109786a48(ulong param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  uint uStack_54;
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar12;
  
  uVar12 = (uint)((ulong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar8 = *(long *)(param_1 + 0xb8);
  lVar4 = *(long *)(param_1 + 0x4c0);
  if (lVar4 == 0) {
    uVar10 = param_1;
    FUN_109785fe4(param_1,0);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    lVar4 = *(long *)(param_1 + 0x4c0);
    uVar12 = 0;
  }
  if (*(ushort *)(param_1 + 0x1a) < param_2) {
    return 6;
  }
  if (param_2 != 0) {
    puVar9 = *(undefined4 **)(lVar4 + 0x18);
    lVar4 = *(long *)(puVar9 + 6) + (ulong)param_2 * 0x10;
    uVar10 = param_1;
    (**(code **)(*(long *)(param_1 + 0x370) + 0x158))
              (param_1,*(undefined2 *)(lVar4 + -8),&stack0xffffffffffffffc0);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    *(undefined8 *)(param_1 + 0x30) = in_stack_ffffffffffffffc0;
    FUN_10978674c(param_1,*puVar9,*(undefined8 *)(lVar4 + -0x10));
    return param_1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_109758038(lVar8,*(undefined8 *)(param_1 + 0x4e0),&stack0xffffffffffffffcc);
  *(long *)(param_1 + 0x30) = lVar8;
  if (uVar12 == 0) {
    uStack_54 = 0;
    plVar7 = *(long **)(param_1 + 0xb8);
    lVar8 = *(long *)(param_1 + 0x4c0);
    if (lVar8 == 0) {
      uVar10 = param_1;
      FUN_109785fe4(param_1,0);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      lVar8 = *(long *)(param_1 + 0x4c0);
    }
    uStack_54 = 0;
    piVar11 = *(int **)(lVar8 + 0x18);
    plVar3 = *(long **)(lVar8 + 8);
    if (plVar3 == (long *)0x0) {
      plVar3 = plVar7;
      FUN_1097539a8(plVar7,8,0,*piVar11,0,&uStack_54);
      *(long **)(lVar8 + 8) = plVar3;
      if (uStack_54 != 0) {
        return (ulong)uStack_54;
      }
    }
    bVar2 = false;
    iVar1 = *piVar11;
    if ((*(ulong *)(param_1 + 8) & 0x7fff0000) == 0) {
      if (iVar1 != 0) {
        plVar5 = (long *)(*(long *)(piVar11 + 4) + 0x10);
        iVar6 = iVar1;
        do {
          if (*plVar3 != *plVar5) {
            *plVar3 = *plVar5;
            bVar2 = true;
          }
          plVar3 = plVar3 + 1;
          iVar6 = iVar6 + -1;
          plVar5 = plVar5 + 6;
        } while (iVar6 != 0);
      }
    }
    else if (iVar1 != 0) {
      plVar5 = *(long **)(*(long *)(piVar11 + 6) + (*(ulong *)(param_1 + 8) >> 0x10 & 0xffff) * 0x10
                         + -0x10);
      iVar6 = iVar1;
      do {
        if (*plVar3 != *plVar5) {
          *plVar3 = *plVar5;
          bVar2 = true;
        }
        plVar5 = plVar5 + 1;
        plVar3 = plVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(long *)(lVar8 + 0x10) == 0 || bVar2) {
      plVar3 = plVar7;
      FUN_1097539a8(plVar7,8,0,iVar1,0,&uStack_54);
      uVar10 = (ulong)uStack_54;
      if (uStack_54 == 0) {
        if (*(char *)(*(long *)(param_1 + 0x4c0) + 0x30) == '\0') {
          FUN_109788db0(param_1);
        }
        func_0x000109789108(param_1,0,*(undefined8 *)(lVar8 + 8),plVar3);
        FUN_109787afc(param_1,*piVar11,plVar3,0);
        uVar10 = param_1;
      }
      if (plVar3 != (long *)0x0) {
        (*(code *)plVar7[2])(plVar7,plVar3);
      }
    }
    else {
      uVar10 = 0xffffffff;
    }
    return uVar10;
  }
  return (ulong)uVar12;
}



/* Entry: 109786b64; end: 109786bdf;  */

void FUN_109786b64(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x4c0) != 0) ||
     (lVar1 = param_1, FUN_109785fe4(param_1,0), (int)lVar1 == 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x4dc);
  }
  return;
}



/* Entry: 109786be0; end: 109787693;  */

int FUN_109786be0(long param_1,ulong param_2,ulong *param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_64;
  
  uVar5 = *(ulong *)(param_1 + 0xc0);
  uVar6 = *(ulong *)(uVar5 + 0x38);
  if (*(code **)(uVar5 + 0x28) == (code *)0x0) {
    if (*(ulong *)(uVar5 + 8) < param_2) {
      return 0x55;
    }
  }
  else {
    uVar4 = uVar5;
    (**(code **)(uVar5 + 0x28))(uVar5,param_2,0,0);
    if (uVar4 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(uVar5 + 0x10) = param_2;
  iStack_64 = 0;
  uVar4 = uVar5;
  FUN_109757928(uVar5,&iStack_64);
  if (iStack_64 != 0) {
    return iStack_64;
  }
  uVar2 = uVar5;
  FUN_109757928(uVar5,&iStack_64);
  if (iStack_64 != 0) {
    return iStack_64;
  }
  uVar3 = uVar5;
  if ((int)uVar4 == 1) {
    func_0x0001097575b8(uVar5,&iStack_64);
  }
  else {
    if ((int)uVar4 != 0) {
      return 8;
    }
    func_0x000109757520(uVar5,&iStack_64);
  }
  uVar3 = uVar3 & 0xffffffff;
  *param_3 = uVar3;
  if (iStack_64 == 0) {
    uVar7 = (uint)uVar2;
    if ((0x3f < uVar7) ||
       (uVar1 = (uVar7 >> 4) + 1, uVar4 = uVar3 * uVar1, param_5 <= uVar4 && uVar4 - param_5 != 0))
    {
      return 8;
    }
    uVar4 = uVar6;
    FUN_1097539a8(uVar6,4,0,uVar3,0,&iStack_64);
    param_3[2] = uVar4;
    if (iStack_64 != 0) {
      return iStack_64;
    }
    FUN_1097539a8(uVar6,4,0,*param_3,0,&iStack_64);
    param_3[1] = uVar6;
    if (iStack_64 == 0) {
      if (*param_3 != 0) {
        uVar6 = 0;
        do {
          uVar8 = 0;
          uVar9 = uVar1;
          do {
            uVar4 = uVar5;
            FUN_109757928(uVar5,&iStack_64);
            if (iStack_64 != 0) {
              return iStack_64;
            }
            uVar8 = (uint)uVar4 | uVar8 << 8;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (uVar8 == 0xffffffff) {
            uVar8 = 0xffff;
            *(undefined4 *)(param_3[1] + uVar6 * 4) = 0xffff;
          }
          else {
            uVar9 = uVar8 >> (ulong)((uVar7 & 0xf) + 1);
            if (*param_4 <= uVar9) {
              return 8;
            }
            *(uint *)(param_3[1] + uVar6 * 4) = uVar9;
            uVar8 = uVar8 & (2 << (ulong)(uVar7 & 0xf)) - 1U;
            if (*(uint *)(*(long *)(param_4 + 2) + (ulong)uVar9 * 0x20) <= uVar8) {
              return 8;
            }
          }
          *(uint *)(param_3[2] + uVar6 * 4) = uVar8;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *param_3);
      }
      return 0;
    }
    return iStack_64;
  }
  return iStack_64;
}



/* Entry: 109787694; end: 109787797;  */

void FUN_109787694(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  lVar1 = *(long *)(param_2 + 2);
  if (lVar1 != 0) {
    if (*param_2 != 0) {
      lVar4 = 0;
      uVar6 = 0;
      do {
        lVar2 = *(long *)(lVar1 + lVar4 + 8);
        if (lVar2 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
          lVar1 = *(long *)(param_2 + 2);
        }
        *(undefined8 *)(lVar1 + lVar4 + 8) = 0;
        lVar2 = *(long *)(lVar1 + lVar4 + 0x10);
        if (lVar2 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
          lVar1 = *(long *)(param_2 + 2);
        }
        *(undefined8 *)(lVar1 + lVar4 + 0x10) = 0;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x20;
      } while (uVar6 < *param_2);
    }
    (**(code **)(lVar3 + 0x10))(lVar3);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  lVar1 = *(long *)(param_2 + 6);
  if (lVar1 != 0) {
    uVar6 = (ulong)param_2[5];
    if (param_2[5] != 0) {
      uVar5 = 0;
      do {
        lVar4 = *(long *)(lVar1 + uVar5 * 8);
        if (lVar4 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
          lVar1 = *(long *)(param_2 + 6);
          uVar6 = (ulong)param_2[5];
        }
        *(undefined8 *)(lVar1 + uVar5 * 8) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    (**(code **)(lVar3 + 0x10))(lVar3);
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}



/* Entry: 109787798; end: 1097877e7;  */

void FUN_109787798(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (*(long *)(param_2 + 0x10) != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(long *)(param_2 + 8) != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



/* Entry: 1097877e8; end: 10978784b;  */

undefined8
FUN_1097877e8(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c0);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_5 == (undefined8 *)0x0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(puVar1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x10);
    }
    if (param_5 == (undefined8 *)0x0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x18);
  }
  *param_5 = uVar2;
  return 0;
}



/* Entry: 10978784c; end: 109787afb;  */

void FUN_10978784c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x4c0);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    uVar1 = **(uint **)(lVar4 + 0x18);
    uVar6 = (ulong)uVar1;
    if (*(long *)(lVar4 + 8) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    if (*(long *)(lVar4 + 0x10) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    if (*(long *)(lVar4 + 0x28) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 0x28) = 0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    plVar3 = *(long **)(lVar4 + 0x38);
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        if (uVar1 != 0) {
          lVar7 = 8;
          do {
            if (*(long *)(lVar2 + lVar7) != 0) {
              (**(code **)(lVar5 + 0x10))(lVar5,*(long *)(lVar2 + lVar7));
              lVar2 = **(long **)(lVar4 + 0x38);
            }
            *(undefined8 *)(lVar2 + lVar7) = 0;
            lVar7 = lVar7 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        (**(code **)(lVar5 + 0x10))(lVar5);
        plVar3 = *(long **)(lVar4 + 0x38);
        *plVar3 = 0;
      }
      FUN_109787694(param_1,plVar3 + 1);
      lVar7 = *(long *)(lVar4 + 0x38);
      lVar2 = *(long *)(param_1 + 0xb8);
      if (*(long *)(lVar7 + 0x38) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x38) = 0;
      if (*(long *)(lVar7 + 0x30) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x30) = 0;
      if (*(long *)(lVar4 + 0x38) != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
    }
    if (*(long *)(lVar4 + 0x48) != 0) {
      FUN_109787694(param_1);
      lVar7 = *(long *)(lVar4 + 0x48);
      lVar2 = *(long *)(param_1 + 0xb8);
      if (*(long *)(lVar7 + 0x30) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x30) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (*(long *)(lVar4 + 0x48) != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5);
      }
      *(undefined8 *)(lVar4 + 0x48) = 0;
    }
    if (*(long *)(lVar4 + 0x58) != 0) {
      FUN_109787694(param_1);
      lVar7 = *(long *)(lVar4 + 0x58);
      lVar2 = *(long *)(param_1 + 0xb8);
      if (*(long *)(lVar7 + 0x30) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x30) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (*(long *)(lVar4 + 0x58) != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5);
      }
      *(undefined8 *)(lVar4 + 0x58) = 0;
    }
    if (*(long *)(lVar4 + 0x60) != 0) {
      FUN_109787694(param_1,*(long *)(lVar4 + 0x60) + 8);
      lVar2 = *(long *)(lVar4 + 0x60);
      if (*(long *)(lVar2 + 0x28) != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5,*(long *)(lVar2 + 0x28));
        lVar2 = *(long *)(lVar4 + 0x60);
      }
      *(undefined8 *)(lVar2 + 0x28) = 0;
      (**(code **)(lVar5 + 0x10))(lVar5);
      *(undefined8 *)(lVar4 + 0x60) = 0;
    }
    if (*(long *)(lVar4 + 0x70) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 0x70) = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(undefined8 *)(lVar4 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x000109787ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
    return;
  }
  return;
}



/* Entry: 109787afc; end: 10978828b;  */

long * FUN_109787afc(long *param_1,uint param_2,long *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  long lVar23;
  ushort *puVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  uint *puVar28;
  uint uStack_94;
  long lStack_90;
  ushort uStack_88;
  ushort uStack_86;
  long lStack_80;
  ushort uStack_78;
  ushort uStack_76;
  long lStack_70;
  ulong uStack_68;
  
  uStack_94 = 0;
  lVar19 = param_1[0x17];
  *(undefined1 *)((long)param_1 + 0x4b9) = 0;
  puVar27 = (uint *)param_1[0x98];
  if (puVar27 == (uint *)0x0) {
    plVar20 = param_1;
    FUN_109785fe4(param_1,0);
    if ((int)plVar20 != 0) {
      return plVar20;
    }
    puVar27 = (uint *)param_1[0x98];
  }
  uStack_94 = 0;
  puVar28 = *(uint **)(puVar27 + 6);
  uVar25 = *puVar28;
  if (param_2 <= *puVar28) {
    uVar25 = param_2;
  }
  uVar26 = (ulong)uVar25;
  uVar9 = uVar26;
  plVar20 = param_3;
  if (uVar25 != 0) {
    do {
      if (*plVar20 - 0x10001U < 0xfffffffffffdffff) {
        return (long *)0x6;
      }
      uVar9 = uVar9 - 1;
      plVar20 = plVar20 + 1;
    } while (uVar9 != 0);
  }
  if (((char)param_1[0x97] == '\0') && (*(long *)(puVar27 + 0x20) == 0)) {
    plVar21 = (long *)param_1[0x18];
    puVar22 = (ulong *)plVar21[7];
    plVar20 = param_1;
    (*(code *)param_1[0x68])(param_1,0x67766172,plVar21,&uStack_68);
    if ((int)plVar20 == 0) {
      lVar23 = plVar21[2];
      plVar20 = plVar21;
      FUN_1097579b0(plVar21,&UNK_10dff9824,&lStack_90);
      if ((int)plVar20 == 0) {
        if (((lStack_90 != 0x10000) || ((uint)uStack_88 != (uint)**(ushort **)(puVar27 + 6))) ||
           (uVar9 = (ulong)uStack_86 * (ulong)(uint)uStack_88,
           uStack_68 >> 1 <= uVar9 && uVar9 - (uStack_68 >> 1) != 0)) {
          return (long *)0x8;
        }
        lVar6 = 1;
        if ((uStack_76 & 1) != 0) {
          lVar6 = 2;
        }
        if (uStack_68 < (ulong)uStack_78 + 1 << lVar6) {
          return (long *)0x8;
        }
        *(ulong *)(puVar27 + 0x22) = uStack_68;
        plVar20 = plVar21;
        func_0x00010975780c();
        if ((int)plVar20 == 0) {
          puVar7 = puVar22;
          (*(code *)puVar22[1])(puVar22,(ulong)uStack_78 * 8 + 8);
          if (puVar7 == (ulong *)0x0) {
            puVar27[0x20] = 0;
            puVar27[0x21] = 0;
            plVar20 = (long *)0x40;
LAB_109788054:
            if (plVar21[5] != 0) {
              if (*plVar21 != 0) {
                (**(code **)(plVar21[7] + 0x10))();
              }
              *plVar21 = 0;
            }
            plVar21[8] = 0;
            plVar21[9] = 0;
          }
          else {
            *(ulong **)(puVar27 + 0x20) = puVar7;
            uStack_68 = uStack_68 + lVar23;
            if ((uStack_76 & 1) == 0) {
              uVar9 = 0;
              uVar14 = 0;
              do {
                pbVar15 = (byte *)plVar21[8];
                if (pbVar15 + 1 < (byte *)plVar21[9]) {
                  bVar3 = *pbVar15;
                  pbVar1 = pbVar15 + 1;
                  pbVar15 = pbVar15 + 2;
                  uVar17 = (ulong)bVar3 << 9 | (ulong)*pbVar1 << 1;
                }
                else {
                  uVar17 = 0;
                }
                plVar21[8] = (long)pbVar15;
                uVar17 = uVar17 + lStack_70 + lVar23;
                if (uVar14 <= uVar17) {
                  uVar14 = uVar17;
                }
                uVar17 = uStack_68;
                if (uVar14 <= uStack_68) {
                  uVar17 = uVar14;
                }
                *(ulong *)(*(long *)(puVar27 + 0x20) + uVar9 * 8) = uVar17;
                bVar5 = uVar9 < uStack_78;
                uVar9 = uVar9 + 1;
              } while (bVar5);
            }
            else {
              uVar9 = 0;
              uVar14 = 0;
              do {
                puVar16 = (uint *)plVar21[8];
                if ((long)puVar16 + 3U < (ulong)plVar21[9]) {
                  uVar8 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
                  uVar17 = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10);
                  puVar16 = puVar16 + 1;
                }
                else {
                  uVar17 = 0;
                }
                plVar21[8] = (long)puVar16;
                uVar17 = uVar17 + lStack_70 + lVar23;
                if (uVar14 <= uVar17) {
                  uVar14 = uVar17;
                }
                uVar17 = uStack_68;
                if (uVar14 <= uStack_68) {
                  uVar17 = uVar14;
                }
                *(ulong *)(*(long *)(puVar27 + 0x20) + uVar9 * 8) = uVar17;
                bVar5 = uVar9 < uStack_78;
                uVar9 = uVar9 + 1;
              } while (bVar5);
            }
            puVar27[0x1e] = (uint)uStack_78;
            if (plVar21[5] != 0) {
              if (*plVar21 != 0) {
                (**(code **)(plVar21[7] + 0x10))();
              }
              *plVar21 = 0;
            }
            plVar21[8] = 0;
            plVar21[9] = 0;
            if (uStack_86 == 0) goto LAB_109787be4;
            uVar9 = lStack_80 + lVar23;
            if ((code *)plVar21[5] == (code *)0x0) {
              if (uVar9 <= (ulong)plVar21[1]) goto LAB_10978814c;
            }
            else {
              plVar20 = plVar21;
              (*(code *)plVar21[5])(plVar21,uVar9,0,0);
              if (plVar20 == (long *)0x0) {
LAB_10978814c:
                plVar21[2] = uVar9;
                plVar20 = plVar21;
                func_0x00010975780c(plVar21,(ulong)uStack_88 * (ulong)uStack_86 * 2);
                if ((int)plVar20 == 0) {
                  uVar9 = (ulong)uStack_88 * (ulong)uStack_86;
                  if (uVar9 == 0) {
                    puVar7 = (ulong *)0x0;
LAB_1097881cc:
                    uVar8 = (uint)uStack_86;
                    *(ulong **)(puVar27 + 0x1c) = puVar7;
                    if (uVar8 != 0) {
                      uVar9 = 0;
                      uVar14 = (ulong)uStack_88;
                      uVar11 = (uint)uStack_88;
                      if (uStack_88 < 2) {
                        uVar11 = 1;
                      }
                      uVar17 = uVar14;
                      do {
                        if ((int)uVar17 == 0) {
                          uVar17 = 0;
                        }
                        else {
                          puVar24 = (ushort *)plVar21[8];
                          uVar2 = plVar21[9];
                          uVar18 = (ulong)uVar11;
                          puVar22 = puVar7;
                          do {
                            if ((long)puVar24 + 1U < uVar2) {
                              uVar4 = *puVar24 & 0xff00ff;
                              uVar17 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                       (ulong)((uint)(*puVar24 >> 8) | uVar4 << 8) << 2;
                              puVar24 = puVar24 + 1;
                            }
                            else {
                              uVar17 = 0;
                            }
                            plVar21[8] = (long)puVar24;
                            *puVar22 = uVar17;
                            uVar18 = uVar18 - 1;
                            uVar17 = uVar14;
                            puVar22 = puVar22 + 1;
                          } while (uVar18 != 0);
                        }
                        uVar9 = uVar9 + 1;
                        puVar7 = puVar7 + uVar14;
                      } while (uVar9 != uVar8);
                    }
                    puVar27[0x1a] = uVar8;
                    if (plVar21[5] != 0) {
                      if (*plVar21 != 0) {
                        (**(code **)(plVar21[7] + 0x10))();
                      }
                      *plVar21 = 0;
                    }
                    plVar21[8] = 0;
                    plVar21[9] = 0;
                    goto LAB_109787be4;
                  }
                  if (uVar9 >> 0x1c == 0) {
                    puVar7 = puVar22;
                    (*(code *)puVar22[1])(puVar22,uVar9 * 8);
                    if (puVar7 != (ulong *)0x0) goto LAB_1097881cc;
                    plVar20 = (long *)0x40;
                  }
                  else {
                    plVar20 = (long *)0xa;
                  }
                  puVar27[0x1c] = 0;
                  puVar27[0x1d] = 0;
                  goto LAB_109788054;
                }
                goto LAB_10978816c;
              }
            }
            plVar20 = (long *)0x55;
          }
LAB_10978816c:
          if (*(long *)(puVar27 + 0x20) != 0) {
            (*(code *)puVar22[2])();
          }
          puVar27[0x20] = 0;
          puVar27[0x21] = 0;
          puVar27[0x1e] = 0;
        }
      }
    }
    if ((int)plVar20 != 0x8e) {
      return plVar20;
    }
  }
LAB_109787be4:
  uStack_94 = 0;
  lVar23 = *(long *)(puVar27 + 2);
  if (lVar23 == 0) {
    lVar6 = lVar19;
    FUN_1097539a8(lVar19,8,0,*puVar28,0,&uStack_94);
    *(long *)(puVar27 + 2) = lVar6;
    if (uStack_94 != 0) {
      return (long *)(ulong)uStack_94;
    }
  }
  lVar6 = *(long *)(puVar27 + 4);
  if (lVar6 == 0) {
    lVar6 = lVar19;
    FUN_1097539a8(lVar19,8,0,*puVar28,0,&uStack_94);
    *(long *)(puVar27 + 4) = lVar6;
    if (uStack_94 != 0) {
      return (long *)(ulong)uStack_94;
    }
    uVar8 = *puVar28;
    iVar10 = 1;
  }
  else {
    if (uVar25 != 0) {
      uVar9 = 0;
      do {
        if (*(long *)(lVar6 + uVar9 * 8) != param_3[uVar9]) {
          uVar8 = *puVar28;
          iVar10 = 2;
          goto LAB_109787d34;
        }
        uVar9 = uVar9 + 1;
      } while (uVar26 != uVar9);
    }
    uVar8 = *puVar28;
    if ((param_1[1] & 0x7fff0000U) == 0) {
      iVar10 = uVar8 - uVar25;
      if (uVar8 < uVar25 || iVar10 == 0) goto LAB_109787d5c;
      bVar5 = false;
      plVar20 = (long *)(lVar6 + uVar26 * 8);
      do {
        if (*plVar20 != 0) {
          bVar5 = true;
        }
        iVar10 = iVar10 + -1;
        plVar20 = plVar20 + 1;
      } while (iVar10 != 0);
    }
    else {
      iVar10 = uVar8 - uVar25;
      if (uVar8 < uVar25 || iVar10 == 0) goto LAB_109787d5c;
      bVar5 = false;
      plVar20 = (long *)(*(long *)(puVar27 + 10) +
                         (ulong)((((uint)((ulong)param_1[1] >> 0x10) & 0xffff) - 1) * uVar8) * 8 +
                        uVar26 * 8);
      plVar21 = (long *)(lVar6 + uVar26 * 8);
      do {
        if (*plVar21 != *plVar20) {
          bVar5 = true;
        }
        iVar10 = iVar10 + -1;
        plVar20 = plVar20 + 1;
        plVar21 = plVar21 + 1;
      } while (iVar10 != 0);
    }
    if (!bVar5) {
LAB_109787d5c:
      *(undefined1 *)((long)param_1 + 0x4b9) = 1;
      return (long *)0xffffffff;
    }
    iVar10 = 0;
    uVar9 = uVar26;
LAB_109787d34:
    if ((uint)uVar9 < uVar8) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        if (*(long *)(lVar6 + uVar9 * 8) != 0) {
          iVar10 = 2;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
  }
  *puVar27 = uVar8;
  if (param_3 != (long *)0x0) {
    _memcpy();
  }
  if (param_4 != 0) {
    if (lVar23 == 0) {
      uVar25 = *puVar27;
    }
    plVar20 = *(long **)(puVar27 + 2);
    puVar28 = (uint *)param_1[0x98];
    uVar11 = *puVar28;
    uVar8 = uVar11;
    if (uVar25 <= uVar11) {
      uVar8 = uVar25;
    }
    uVar9 = (ulong)uVar8;
    if (uVar8 != 0) {
      plVar21 = *(long **)(puVar27 + 4);
      plVar12 = plVar20;
      uVar26 = uVar9;
      do {
        *plVar12 = *plVar21;
        uVar26 = uVar26 - 1;
        plVar21 = plVar21 + 1;
        plVar12 = plVar12 + 1;
      } while (uVar26 != 0);
    }
    if (uVar11 < uVar25) {
      _bzero(plVar20 + uVar8,(ulong)(uVar25 + ~uVar8) * 8 + 8);
    }
    if (((*(undefined8 **)(puVar28 + 0xe) != (undefined8 *)0x0) && (uVar8 != 0)) &&
       (puVar24 = (ushort *)**(undefined8 **)(puVar28 + 0xe), puVar24 != (ushort *)0x0)) {
      uVar26 = 0;
      do {
        if (1 < (ulong)*puVar24) {
          lVar23 = (ulong)*puVar24 - 1;
          plVar21 = *(long **)(puVar24 + 4);
          do {
            if (plVar20[uVar26] < plVar21[3]) {
              lVar23 = *plVar21;
              lVar6 = plVar20[uVar26] - plVar21[1];
              FUN_1097532ac(lVar6,plVar21[2] - lVar23,plVar21[3] - plVar21[1]);
              plVar20[uVar26] = lVar6 + lVar23;
              break;
            }
            lVar23 = lVar23 + -1;
            plVar21 = plVar21 + 2;
          } while (lVar23 != 0);
        }
        uVar26 = uVar26 + 1;
        puVar24 = puVar24 + 8;
      } while (uVar26 != uVar9);
    }
    if (uVar8 != 0) {
      plVar21 = (long *)(*(long *)(*(long *)(puVar28 + 6) + 0x10) + 0x10);
      do {
        lVar23 = *plVar20;
        if (lVar23 < 0) {
          lVar6 = *plVar21;
          lVar13 = lVar6 - plVar21[-1];
LAB_109787e98:
          lVar6 = lVar6 + (lVar13 * lVar23 + (lVar13 * lVar23 >> 0x3f) + 0x8000 >> 0x10);
        }
        else {
          lVar6 = *plVar21;
          if (lVar23 != 0) {
            lVar13 = plVar21[1] - lVar6;
            goto LAB_109787e98;
          }
        }
        *plVar20 = lVar6;
        plVar21 = plVar21 + 6;
        uVar9 = uVar9 - 1;
        plVar20 = plVar20 + 1;
      } while (uVar9 != 0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x4b9) = 1;
  if (param_1[0x90] != 0) {
    if (iVar10 == 1) {
      FUN_1097883e0(param_1,param_1[0x18]);
      return param_1;
    }
    if (iVar10 == 2) {
      (**(code **)(lVar19 + 0x10))(lVar19);
      param_1[0x90] = 0;
      FUN_10978828c(param_1,param_1[0x18]);
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10978828c; end: 1097883df;  */

void FUN_10978828c(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  ushort *puVar7;
  int iVar8;
  long lVar9;
  ulong uStack_38;
  
  lVar9 = param_2[7];
  lVar6 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x63767420,param_2,&uStack_38);
  if ((int)lVar6 == 0) {
    uVar2 = uStack_38 >> 1;
    *(ulong *)(param_1 + 0x478) = uVar2;
    if (uStack_38 < 2) {
      lVar9 = 0;
    }
    else {
      if ((uStack_38 >> 0x1e != 0) || ((**(code **)(lVar9 + 8))(lVar9,uVar2 << 2), lVar9 == 0)) {
        *(undefined8 *)(param_1 + 0x480) = 0;
        return;
      }
      uVar2 = *(ulong *)(param_1 + 0x478);
    }
    *(long *)(param_1 + 0x480) = lVar9;
    plVar1 = param_2;
    func_0x00010975780c(param_2,uVar2 << 1);
    if ((int)plVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x478);
      if (0 < lVar6) {
        piVar3 = *(int **)(param_1 + 0x480);
        puVar7 = (ushort *)param_2[8];
        uVar2 = param_2[9];
        piVar4 = piVar3;
        do {
          if ((long)puVar7 + 1U < uVar2) {
            iVar8 = (int)(short)(*puVar7 >> 8 | *puVar7 << 8) << 6;
            puVar7 = puVar7 + 1;
          }
          else {
            iVar8 = 0;
          }
          param_2[8] = (long)puVar7;
          piVar5 = piVar4 + 1;
          *piVar4 = iVar8;
          piVar4 = piVar5;
        } while (piVar5 < piVar3 + lVar6);
      }
      if (param_2[5] != 0) {
        if (*param_2 != 0) {
          (**(code **)(param_2[7] + 0x10))();
        }
        *param_2 = 0;
      }
      param_2[8] = 0;
      param_2[9] = 0;
      if (*(char *)(param_1 + 0x4b9) != '\0') {
        FUN_1097883e0(param_1,param_2);
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
  }
  return;
}



/* Entry: 1097883e0; end: 109788a2b;  */

int FUN_1097883e0(long param_1,ushort *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ushort *puVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  uint *puVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  ushort *puVar28;
  ushort *puVar29;
  uint uVar30;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  int iStack_64;
  
  lVar26 = *(long *)(param_2 + 0x1c);
  puVar27 = *(uint **)(param_1 + 0x4c0);
  uStack_78 = 0;
  if ((((puVar27 == (uint *)0x0) || (*(long *)(param_1 + 0x480) == 0)) ||
      (lVar19 = param_1, (**(code **)(param_1 + 0x340))(param_1,0x63766172,param_2,&uStack_70),
      (int)lVar19 != 0)) ||
     (puVar7 = param_2, func_0x00010975780c(param_2,uStack_70), (int)puVar7 != 0)) {
    return 0;
  }
  puVar7 = param_2 + 0x20;
  puVar14 = *(uint **)puVar7;
  uVar11 = *(ulong *)(param_2 + 0x24);
  if ((long)puVar14 + 3U < uVar11) {
    lVar19 = *(long *)param_2;
    puVar21 = puVar14 + 1;
    uVar22 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
    *(uint **)puVar7 = puVar21;
    if ((uVar22 >> 0x10 | uVar22 << 0x10) == 0x10000) {
      if ((long)puVar14 + 5U < uVar11) {
        puVar21 = (uint *)((long)puVar14 + 6);
        uVar22 = (uint)(ushort)((ushort)puVar14[1] >> 8) | ((ushort)puVar14[1] & 0xff00ff) << 8;
      }
      else {
        uVar22 = 0;
      }
      *(uint **)puVar7 = puVar21;
      if ((long)puVar21 + 1U < uVar11) {
        uVar25 = (ulong)((uint)(ushort)((ushort)*puVar21 >> 8) | ((ushort)*puVar21 & 0xff00ff) << 8)
        ;
        puVar21 = (uint *)((long)puVar21 + 2);
      }
      else {
        uVar25 = 0;
      }
      *(uint **)puVar7 = puVar21;
      uVar2 = uVar22 & 0xfff;
      if (uStack_70 < uVar25 + (uVar2 << 2)) {
        iStack_64 = 8;
        goto LAB_1097884c8;
      }
      uVar25 = (long)puVar14 + (uVar25 - lVar19);
      if (uVar22 >> 0xf == 0) {
        puVar28 = (ushort *)0x0;
      }
      else {
        uVar12 = lVar19 + uVar25;
        if (uVar11 - lVar19 <= uVar25) {
          uVar12 = uVar11;
        }
        *(ulong *)(param_2 + 0x20) = uVar12;
        puVar28 = param_2;
        FUN_109788a2c(param_2,&uStack_78);
        lVar16 = *(long *)param_2;
        uVar25 = *(long *)(param_2 + 0x20) - lVar16;
        lVar10 = lVar16 + ((long)puVar21 - lVar19);
        if ((ulong)(*(long *)(param_2 + 0x24) - lVar16) <= (ulong)((long)puVar21 - lVar19)) {
          lVar10 = *(long *)(param_2 + 0x24);
        }
        *(long *)(param_2 + 0x20) = lVar10;
      }
      uVar22 = *puVar27;
      if (uVar22 == 0) {
        lVar19 = 0;
LAB_1097885e4:
        iStack_64 = 0;
        lVar10 = lVar26;
        FUN_1097539a8(lVar26,8,0,*(undefined8 *)(param_1 + 0x478),0,&iStack_64);
        uVar22 = uStack_78;
        if (iStack_64 == 0) {
          if (uVar2 != 0) {
            uVar24 = 0;
            uVar3 = *puVar27;
            puVar1 = (ulong *)(lVar19 + (ulong)uVar3 * 8);
            puVar8 = *(ushort **)(param_2 + 0x20);
            puVar29 = *(ushort **)(param_2 + 0x24);
            do {
              if ((ushort *)((long)puVar8 + 1U) < puVar29) {
                uVar11 = (ulong)((uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8);
                puVar8 = puVar8 + 1;
              }
              else {
                uVar11 = 0;
              }
              *(ushort **)puVar7 = puVar8;
              if ((ushort *)((long)puVar8 + 1U) < puVar29) {
                puVar15 = puVar8 + 1;
                bVar5 = (byte)*puVar8;
                uVar30 = (uint)CONCAT11(bVar5,*(byte *)((long)puVar8 + 1));
                *(ushort **)puVar7 = puVar15;
                if (-1 < (char)bVar5) goto LAB_1097886a4;
                uVar12 = (ulong)*puVar27;
                lVar16 = lVar19;
                if (*puVar27 != 0) {
                  lVar18 = 0;
                  do {
                    if ((ushort *)((long)puVar15 + 1U) < puVar29) {
                      uVar4 = *puVar15 & 0xff00ff;
                      uVar13 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                               (ulong)((uint)(*puVar15 >> 8) | uVar4 << 8) << 2;
                      puVar15 = puVar15 + 1;
                    }
                    else {
                      uVar13 = 0;
                    }
                    *(ushort **)puVar7 = puVar15;
                    *(ulong *)(lVar19 + lVar18) = uVar13;
                    lVar18 = lVar18 + 8;
                  } while (uVar12 * 8 - lVar18 != 0);
                  bVar6 = false;
                  if ((bVar5 & 0x40) == 0) goto LAB_109788758;
LAB_1097886d4:
                  if (!bVar6) {
                    uVar13 = uVar12;
                    puVar20 = puVar1;
                    if (uVar12 < 2) {
                      uVar13 = 1;
                    }
                    do {
                      if ((ushort *)((long)puVar15 + 1U) < puVar29) {
                        uVar4 = *puVar15 & 0xff00ff;
                        uVar23 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                 (ulong)((uint)(*puVar15 >> 8) | uVar4 << 8) << 2;
                        puVar15 = puVar15 + 1;
                      }
                      else {
                        uVar23 = 0;
                      }
                      *(ushort **)puVar7 = puVar15;
                      *puVar20 = uVar23;
                      uVar13 = uVar13 - 1;
                      puVar20 = puVar20 + 1;
                    } while (uVar13 != 0);
                    puVar20 = puVar1 + uVar3;
                    if ((int)uVar12 != 0) {
                      do {
                        if ((ushort *)((long)puVar15 + 1U) < puVar29) {
                          uVar4 = *puVar15 & 0xff00ff;
                          uVar13 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                   (ulong)((uint)(*puVar15 >> 8) | uVar4 << 8) << 2;
                          puVar15 = puVar15 + 1;
                        }
                        else {
                          uVar13 = 0;
                        }
                        *(ushort **)puVar7 = puVar15;
                        *puVar20 = uVar13;
                        uVar12 = uVar12 - 1;
                        puVar20 = puVar20 + 1;
                      } while (uVar12 != 0);
                    }
                  }
                }
              }
              else {
                uVar30 = 0;
                puVar15 = puVar8;
LAB_1097886a4:
                if (puVar27[0x1a] <= (uVar30 & 0xfff)) {
                  iStack_64 = 8;
                  goto LAB_1097889e0;
                }
                uVar4 = *puVar27;
                uVar12 = (ulong)uVar4;
                lVar16 = *(long *)(puVar27 + 0x1c) + (ulong)(uVar4 * (uVar30 & 0xfff)) * 8;
                bVar6 = uVar4 == 0;
                if ((uVar30 >> 0xe & 1) != 0) goto LAB_1097886d4;
              }
LAB_109788758:
              puVar14 = puVar27;
              FUN_109788b90(puVar27,uVar30,lVar16,puVar1,puVar1 + uVar3);
              puVar8 = puVar15;
              if (puVar14 != (uint *)0x0) {
                lVar16 = *(long *)param_2;
                puVar8 = (ushort *)(lVar16 + uVar25);
                if ((ulong)((long)puVar29 - lVar16) <= uVar25) {
                  puVar8 = puVar29;
                }
                *(ushort **)(param_2 + 0x20) = puVar8;
                if ((uVar30 >> 0xd & 1) == 0) {
                  puVar8 = (ushort *)0x0;
                  uStack_74 = uVar22;
                  puVar29 = puVar28;
                }
                else {
                  puVar8 = param_2;
                  FUN_109788a2c(param_2,&uStack_74);
                  puVar29 = puVar8;
                }
                uVar30 = uStack_74;
                uVar12 = (ulong)uStack_74;
                uVar13 = uVar12;
                if (uStack_74 == 0) {
                  uVar13 = (ulong)*(uint *)(param_1 + 0x478);
                }
                puVar9 = param_2;
                FUN_109788c70(param_2,uVar13);
                if ((puVar29 == (ushort *)0x0) || (puVar9 == (ushort *)0x0)) {
LAB_10978883c:
                  if (1 < (long)puVar8 + 1U) {
LAB_1097888ec:
                    (**(code **)(lVar26 + 0x10))(lVar26,puVar8);
                  }
                  if (puVar9 != (ushort *)0x0) goto LAB_109788904;
                }
                else {
                  if (puVar8 != (ushort *)0xffffffffffffffff) {
                    puVar17 = puVar9;
                    if (uVar30 != 0) {
                      do {
                        uVar13 = (ulong)*puVar29;
                        if (uVar13 < *(ulong *)(param_1 + 0x478)) {
                          *(long *)(lVar10 + uVar13 * 8) =
                               *(long *)(lVar10 + uVar13 * 8) +
                               (*(long *)puVar17 * (long)puVar14 +
                                (*(long *)puVar17 * (long)puVar14 >> 0x3f) + 0x8000 >> 0x10);
                        }
                        uVar12 = uVar12 - 1;
                        puVar17 = puVar17 + 4;
                        puVar29 = puVar29 + 1;
                      } while (uVar12 != 0);
                      goto LAB_10978883c;
                    }
                    if (puVar8 == (ushort *)0x0) goto LAB_109788904;
                    goto LAB_1097888ec;
                  }
                  if (*(long *)(param_1 + 0x478) != 0) {
                    uVar12 = 0;
                    uVar13 = 1;
                    do {
                      *(long *)(lVar10 + uVar12 * 8) =
                           *(long *)(lVar10 + uVar12 * 8) +
                           (*(long *)(puVar9 + uVar12 * 4) * (long)puVar14 +
                            (*(long *)(puVar9 + uVar12 * 4) * (long)puVar14 >> 0x3f) + 0x8000 >>
                           0x10);
                      bVar6 = uVar13 < *(ulong *)(param_1 + 0x478);
                      uVar12 = uVar13;
                      uVar13 = (ulong)((int)uVar13 + 1);
                    } while (bVar6);
                  }
LAB_109788904:
                  (**(code **)(lVar26 + 0x10))(lVar26,puVar9);
                }
                puVar29 = *(ushort **)(param_2 + 0x24);
                puVar8 = (ushort *)(*(long *)param_2 + ((long)puVar15 - lVar16));
                if ((ulong)((long)puVar29 - *(long *)param_2) <= (ulong)((long)puVar15 - lVar16)) {
                  puVar8 = puVar29;
                }
                *(ushort **)(param_2 + 0x20) = puVar8;
              }
              uVar25 = uVar11 + uVar25;
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar2);
          }
          uVar11 = *(ulong *)(param_1 + 0x478);
          if (uVar11 != 0) {
            uVar25 = 0;
            lVar16 = *(long *)(param_1 + 0x480);
            do {
              *(int *)(lVar16 + uVar25 * 4) =
                   *(int *)(lVar16 + uVar25 * 4) +
                   (int)(*(long *)(lVar10 + uVar25 * 8) + 0x200U >> 10);
              uVar25 = uVar25 + 1;
            } while ((uVar25 & 0xffffffff) < uVar11);
          }
          lVar16 = *(long *)(param_1 + 200);
          while (lVar16 != 0) {
            lVar18 = *(long *)(lVar16 + 8);
            *(undefined4 *)(*(long *)(lVar16 + 0x10) + 0x224) = 0xffffffff;
            lVar16 = lVar18;
          }
        }
      }
      else if (uVar22 * 3 >> 0x1c == 0) {
        lVar19 = lVar26;
        (**(code **)(lVar26 + 8))(lVar26,uVar22 * 0x18);
        if (lVar19 != 0) goto LAB_1097885e4;
        lVar10 = 0;
        iStack_64 = 0x40;
      }
      else {
        lVar19 = 0;
        lVar10 = 0;
        iStack_64 = 10;
      }
LAB_1097889e0:
      if (1 < (long)puVar28 + 1U) {
        (**(code **)(lVar26 + 0x10))(lVar26,puVar28);
      }
      if (lVar10 != 0) {
        (**(code **)(lVar26 + 0x10))(lVar26);
      }
      if (lVar19 != 0) {
        (**(code **)(lVar26 + 0x10))(lVar26,lVar19);
      }
      goto LAB_1097884c8;
    }
  }
  iStack_64 = 0;
LAB_1097884c8:
  if (*(long *)(param_2 + 0x14) != 0) {
    if (*(long *)param_2 != 0) {
      (**(code **)(*(long *)(param_2 + 0x1c) + 0x10))();
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  puVar7[0] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  return iStack_64;
}



/* Entry: 109788a2c; end: 109788b8f;  */

long FUN_109788a2c(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ushort *puVar3;
  byte bVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  *param_2 = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  puVar3 = *(ushort **)(param_1 + 0x40);
  if (puVar3 < *(ushort **)(param_1 + 0x48)) {
    puVar6 = (ushort *)((long)puVar3 + 1);
    *(ushort **)(param_1 + 0x40) = puVar6;
    bVar4 = (byte)*puVar3;
    uVar13 = (ulong)bVar4;
    uVar9 = (uint)bVar4;
    if (bVar4 != 0) {
      uVar12 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        if (puVar6 < *(ushort **)(param_1 + 0x48)) {
          puVar6 = puVar3 + 1;
          *(ushort **)(param_1 + 0x40) = puVar6;
          uVar9 = (uint)*(byte *)((long)puVar3 + 1);
        }
        else {
          uVar9 = 0;
        }
        uVar12 = uVar9 | (uVar12 & 0x7f) << 8;
        uVar13 = (ulong)uVar12;
        uVar9 = 0;
      }
      if (uVar12 == 0) {
        lVar5 = 0;
      }
      else {
        uVar9 = (uint)uVar13;
        lVar5 = lVar2;
        (**(code **)(lVar2 + 8))(lVar2,uVar13 << 1);
        if (lVar5 == 0) {
          return 0;
        }
        sVar8 = 0;
        uVar12 = 0;
        puVar3 = *(ushort **)(param_1 + 0x48);
        puVar7 = *(ushort **)(param_1 + 0x40);
        do {
          if (puVar3 <= puVar7) {
LAB_109788b60:
            (**(code **)(lVar2 + 0x10))(lVar2);
            return 0;
          }
          puVar6 = (ushort *)((long)puVar7 + 1);
          uVar1 = (byte)*puVar7 & 0x7f;
          uVar11 = uVar9 - uVar12;
          if (uVar1 < uVar11) {
            uVar11 = uVar1 + 1;
          }
          iVar10 = (int)puVar3;
          uVar1 = uVar12;
          if ((char)(byte)*puVar7 < '\0') {
            if ((uint)(iVar10 - (int)puVar6) < uVar11 << 1) goto LAB_109788b60;
            if (uVar11 != 0) {
              uVar1 = uVar11 + uVar12;
              puVar7 = puVar6;
              do {
                puVar6 = puVar7 + 1;
                sVar8 = sVar8 + (*puVar7 >> 8 | *puVar7 << 8);
                *(short *)(lVar5 + (ulong)uVar12 * 2) = sVar8;
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 - 1;
                puVar7 = puVar6;
              } while (uVar11 != 0);
            }
          }
          else {
            if ((uint)(iVar10 - (int)puVar6) < uVar11) goto LAB_109788b60;
            if (uVar11 != 0) {
              uVar1 = uVar11 + uVar12;
              puVar7 = puVar6;
              do {
                puVar6 = (ushort *)((long)puVar7 + 1);
                sVar8 = sVar8 + (ushort)(byte)*puVar7;
                *(short *)(lVar5 + (ulong)uVar12 * 2) = sVar8;
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 - 1;
                puVar7 = puVar6;
              } while (uVar11 != 0);
            }
          }
          uVar12 = uVar1;
          puVar7 = puVar6;
        } while (uVar12 < uVar9);
      }
      *(ushort **)(param_1 + 0x40) = puVar6;
      *param_2 = uVar9;
      return lVar5;
    }
  }
  return -1;
}



/* Entry: 109788b90; end: 109788c6f;  */

undefined8 FUN_109788b90(uint *param_1,uint param_2,long *param_3,long *param_4,long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = (ulong)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x10000;
  }
  else {
    uVar1 = 0x10000;
    plVar5 = *(long **)(param_1 + 4);
    do {
      lVar2 = *plVar5;
      lVar3 = *param_3;
      if (lVar3 != lVar2 && lVar3 != 0) {
        if ((param_2 >> 0xe & 1) == 0) {
          if (lVar2 < 1 || lVar3 <= lVar2) {
            if (-1 < lVar2) {
              return 0;
            }
            if (lVar2 <= lVar3) {
              return 0;
            }
          }
        }
        else if ((lVar2 <= *param_4) || (*param_5 <= lVar2)) {
          return 0;
        }
        FUN_1097532ac();
      }
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  return uVar1;
}



/* Entry: 109788c70; end: 109788daf;  */

long FUN_109788c70(long param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar5 = 0;
    puVar6 = *(ushort **)(param_1 + 0x40);
  }
  else {
    if (param_2 >> 0x1c != 0) {
      return 0;
    }
    lVar11 = *(long *)(param_1 + 0x38);
    lVar5 = lVar11;
    (**(code **)(lVar11 + 8))(lVar11,param_2 << 3);
    if (lVar5 == 0) {
      return 0;
    }
    uVar9 = 0;
    puVar2 = *(ushort **)(param_1 + 0x48);
    puVar7 = *(ushort **)(param_1 + 0x40);
    do {
      if (puVar2 <= puVar7) goto LAB_109788d8c;
      puVar6 = (ushort *)((long)puVar7 + 1);
      bVar3 = (byte)*puVar7;
      uVar1 = (int)(char)bVar3 & 0x3f;
      uVar10 = param_2 - uVar9;
      if (uVar1 < uVar10) {
        uVar10 = uVar1 + 1;
      }
      uVar1 = uVar9;
      if ((char)bVar3 < 0) {
        if (uVar10 != 0) {
          uVar1 = uVar10 + uVar9;
          do {
            *(undefined8 *)(lVar5 + (ulong)uVar9 * 8) = 0;
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        iVar8 = (int)puVar2;
        if (bVar3 < 0x40) {
          if ((uint)(iVar8 - (int)puVar6) < uVar10) {
LAB_109788d8c:
            (**(code **)(lVar11 + 0x10))(lVar11);
            return 0;
          }
          if (uVar10 != 0) {
            uVar1 = uVar10 + uVar9;
            puVar7 = puVar6;
            do {
              puVar6 = (ushort *)((long)puVar7 + 1);
              *(long *)(lVar5 + (ulong)uVar9 * 8) = (long)(char)*puVar7 << 0x10;
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 - 1;
              puVar7 = puVar6;
            } while (uVar10 != 0);
          }
        }
        else {
          if ((uint)(iVar8 - (int)puVar6) < uVar10 << 1) goto LAB_109788d8c;
          if (uVar10 != 0) {
            uVar1 = uVar10 + uVar9;
            puVar7 = puVar6;
            do {
              puVar6 = puVar7 + 1;
              uVar4 = *puVar7 & 0xff00ff;
              *(ulong *)(lVar5 + (ulong)uVar9 * 8) =
                   -(ulong)(uVar4 >> 7) & 0xffffffff00000000 |
                   (ulong)((uint)(*puVar7 >> 8) | uVar4 << 8) << 0x10;
              uVar9 = uVar9 + 1;
              uVar10 = uVar10 - 1;
              puVar7 = puVar6;
            } while (uVar10 != 0);
          }
        }
      }
      uVar9 = uVar1;
      puVar7 = puVar6;
    } while (uVar9 < param_2);
  }
  *(ushort **)(param_1 + 0x40) = puVar6;
  return lVar5;
}



/* Entry: 109788db0; end: 1097893d7;  */

void FUN_109788db0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  ushort *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uStack_68;
  
  plVar13 = *(long **)(param_1 + 0xc0);
  puVar14 = (ushort *)plVar13[7];
  lVar15 = *(long *)(param_1 + 0x4c0);
  *(undefined1 *)(lVar15 + 0x30) = 1;
  lVar17 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x61766172,plVar13,&uStack_68);
  if ((int)lVar17 != 0) {
    return;
  }
  lVar17 = plVar13[2];
  plVar2 = plVar13;
  func_0x00010975780c(plVar13,uStack_68);
  if ((int)plVar2 != 0) {
    return;
  }
  plVar2 = plVar13 + 8;
  puVar7 = (uint *)*plVar2;
  if ((long)puVar7 + 3U < (ulong)plVar13[9]) {
    uVar18 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    puVar7 = puVar7 + 1;
  }
  else {
    uVar18 = 0;
  }
  *plVar2 = (long)puVar7;
  if ((long)puVar7 + 3U < (ulong)plVar13[9]) {
    uVar9 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    puVar7 = puVar7 + 1;
  }
  else {
    uVar9 = 0;
  }
  *plVar2 = (long)puVar7;
  if (((uVar18 != 0x20000) && (uVar18 != 0x10000)) ||
     (uVar19 = (ulong)(int)uVar9, uVar19 != **(uint **)(lVar15 + 0x18))) goto LAB_1097890c4;
  puVar3 = puVar14;
  (**(code **)(puVar14 + 4))(puVar14,0x40);
  if (puVar3 == (ushort *)0x0) {
    *(undefined8 *)(lVar15 + 0x38) = 0;
    goto LAB_1097890c4;
  }
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *(ushort **)(lVar15 + 0x38) = puVar3;
  if (uVar9 == 0) {
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  else {
    if ((uVar9 >> 0x1b != 0) ||
       (puVar4 = puVar14, (**(code **)(puVar14 + 4))(puVar14,uVar19 << 4), puVar4 == (ushort *)0x0))
    {
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      goto LAB_1097890c4;
    }
    uVar16 = 0;
    *(ushort **)puVar3 = puVar4;
    lVar15 = 1;
    do {
      puVar5 = (ushort *)plVar13[8];
      if ((long)puVar5 + 1U < (ulong)plVar13[9]) {
        uVar9 = (uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8;
        *plVar2 = (long)(puVar5 + 1);
        *puVar4 = (ushort)uVar9;
        if (uStack_68 < (ulong)uVar9 << 2) {
LAB_109789068:
          lVar17 = *(long *)puVar3;
          if ((int)uVar16 != 0) goto LAB_109789074;
          if (lVar17 == 0) goto LAB_1097890c0;
          goto LAB_1097890b4;
        }
        if (uVar9 == 0) goto LAB_109788fa0;
        puVar5 = puVar14;
        (**(code **)(puVar14 + 4))(puVar14,(ulong)uVar9 << 4);
        if (puVar5 == (ushort *)0x0) {
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          goto LAB_109789068;
        }
        uVar6 = (ulong)*puVar4;
        *(ushort **)(puVar4 + 4) = puVar5;
        if (uVar6 != 0) {
          puVar10 = (ushort *)plVar13[8];
          uVar1 = plVar13[9];
          puVar11 = (ulong *)(puVar5 + 4);
          do {
            if ((long)puVar10 + 1U < uVar1) {
              uVar9 = *puVar10 & 0xff00ff;
              uVar12 = -(ulong)(uVar9 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(*puVar10 >> 8) | uVar9 << 8) << 2;
              puVar10 = puVar10 + 1;
            }
            else {
              uVar12 = 0;
            }
            *plVar2 = (long)puVar10;
            puVar11[-1] = uVar12;
            if ((long)puVar10 + 1U < uVar1) {
              uVar9 = *puVar10 & 0xff00ff;
              uVar12 = -(ulong)(uVar9 >> 7) & 0xfffffffffffc0000 |
                       (ulong)((uint)(*puVar10 >> 8) | uVar9 << 8) << 2;
              puVar10 = puVar10 + 1;
            }
            else {
              uVar12 = 0;
            }
            *plVar2 = (long)puVar10;
            *puVar11 = uVar12;
            uVar6 = uVar6 - 1;
            puVar11 = puVar11 + 2;
          } while (uVar6 != 0);
        }
      }
      else {
        *puVar4 = 0;
LAB_109788fa0:
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
      }
      uVar16 = uVar16 + 1;
      puVar4 = puVar4 + 8;
      lVar15 = lVar15 + 1;
    } while (uVar16 != uVar19);
  }
  if ((int)uVar18 < 0x20000) goto LAB_1097890c4;
  puVar7 = (uint *)plVar13[8];
  if ((long)puVar7 + 3U < (ulong)plVar13[9]) {
    uVar18 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    puVar7 = puVar7 + 1;
  }
  else {
    uVar18 = 0;
  }
  *plVar2 = (long)puVar7;
  if ((long)puVar7 + 3U < (ulong)plVar13[9]) {
    uVar9 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    *plVar2 = (long)(puVar7 + 1);
    if (uVar9 == 0) goto LAB_109789044;
    lVar15 = param_1;
    func_0x000109786dfc(param_1,lVar17 + (ulong)uVar9,puVar3 + 4);
    if ((int)lVar15 != 0 || uVar18 == 0) goto LAB_1097890c4;
  }
  else {
LAB_109789044:
    if (uVar18 == 0) goto LAB_1097890c4;
  }
  func_0x000109786be0(param_1,lVar17 + (ulong)uVar18,puVar3 + 0x14,puVar3 + 4,uStack_68);
LAB_1097890c4:
  if (plVar13[5] != 0) {
    if (*plVar13 != 0) {
      (**(code **)(plVar13[7] + 0x10))();
    }
    *plVar13 = 0;
  }
  *plVar2 = 0;
  plVar13[9] = 0;
  return;
LAB_109789074:
  do {
    uVar19 = (ulong)((int)lVar15 - 2);
    lVar8 = *(long *)(lVar17 + uVar19 * 0x10 + 8);
    if (lVar8 != 0) {
      (**(code **)(puVar14 + 8))(puVar14,lVar8);
      lVar17 = *(long *)puVar3;
    }
    *(undefined8 *)(lVar17 + uVar19 * 0x10 + 8) = 0;
    lVar15 = lVar15 + -1;
  } while (1 < lVar15);
LAB_1097890b4:
  (**(code **)(puVar14 + 8))(puVar14);
LAB_1097890c0:
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  goto LAB_1097890c4;
}



/* Entry: 1097893d8; end: 109789733;  */

void FUN_1097893d8(undefined2 *param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_60 [12];
  int iStack_54;
  
  plVar13 = *(long **)(param_1 + 0x60);
  puVar14 = (undefined8 *)plVar13[7];
  lVar16 = *(long *)(param_1 + 0x260);
  puVar4 = param_1;
  (**(code **)(param_1 + 0x1a0))(param_1,0x4d564152,plVar13,auStack_60);
  iStack_54 = (int)puVar4;
  if (iStack_54 == 0) {
    lVar17 = plVar13[2];
    plVar5 = plVar13;
    func_0x000109757520(plVar13,&iStack_54);
    if (iStack_54 == 0) {
      uVar15 = plVar13[2] + 2;
      if ((code *)plVar13[5] == (code *)0x0) {
        if ((ulong)plVar13[1] < uVar15) {
          return;
        }
      }
      else {
        plVar6 = plVar13;
        (*(code *)plVar13[5])(plVar13,uVar15,0,0);
        if (plVar6 != (long *)0x0) {
          return;
        }
      }
      plVar13[2] = uVar15;
      if ((int)plVar5 == 1) {
        puVar7 = puVar14;
        (*(code *)puVar14[1])(puVar14,0x30);
        if (puVar7 == (undefined8 *)0x0) {
          *(undefined8 *)(lVar16 + 0x60) = 0;
        }
        else {
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          *(undefined8 **)(lVar16 + 0x60) = puVar7;
          uVar15 = plVar13[2] + 4;
          if ((code *)plVar13[5] == (code *)0x0) {
            if ((ulong)plVar13[1] < uVar15) {
              return;
            }
          }
          else {
            plVar5 = plVar13;
            (*(code *)plVar13[5])(plVar13,uVar15,0,0);
            if (plVar5 != (long *)0x0) {
              return;
            }
          }
          plVar13[2] = uVar15;
          iStack_54 = 0;
          plVar5 = plVar13;
          func_0x000109757520(plVar13,&iStack_54);
          **(undefined2 **)(lVar16 + 0x60) = (short)plVar5;
          if ((iStack_54 == 0) &&
             (plVar5 = plVar13, func_0x000109757520(plVar13,&iStack_54), iStack_54 == 0)) {
            uVar15 = plVar13[2];
            puVar4 = param_1;
            func_0x000109786dfc(param_1,lVar17 + ((ulong)plVar5 & 0xffffffff),
                                *(long *)(lVar16 + 0x60) + 8);
            iStack_54 = (int)puVar4;
            if (iStack_54 == 0) {
              FUN_1097539a8(puVar14,0x10,0,**(undefined2 **)(lVar16 + 0x60),0,&iStack_54);
              puVar8 = *(ushort **)(lVar16 + 0x60);
              *(undefined8 **)(puVar8 + 0x14) = puVar14;
              if (iStack_54 == 0) {
                if ((code *)plVar13[5] == (code *)0x0) {
                  if ((ulong)plVar13[1] < uVar15) {
                    return;
                  }
                }
                else {
                  plVar5 = plVar13;
                  (*(code *)plVar13[5])(plVar13,uVar15,0,0);
                  if (plVar5 != (long *)0x0) {
                    return;
                  }
                  puVar8 = *(ushort **)(lVar16 + 0x60);
                }
                plVar13[2] = uVar15;
                plVar5 = plVar13;
                func_0x00010975780c(plVar13,(ulong)*puVar8 << 3);
                iStack_54 = (int)plVar5;
                if (iStack_54 == 0) {
                  puVar8 = *(ushort **)(lVar16 + 0x60);
                  lVar17 = *(long *)(puVar8 + 0x14);
                  if ((lVar17 != 0) && (uVar2 = *puVar8, (ulong)uVar2 != 0)) {
                    puVar9 = (uint *)plVar13[8];
                    uVar15 = plVar13[9];
                    puVar4 = (undefined2 *)(lVar17 + 10);
                    do {
                      if ((long)puVar9 + 3U < uVar15) {
                        uVar12 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
                        uVar11 = (ulong)(uVar12 >> 0x10 | uVar12 << 0x10);
                        puVar10 = puVar9 + 1;
                      }
                      else {
                        uVar11 = 0;
                        puVar10 = puVar9;
                      }
                      plVar13[8] = (long)puVar10;
                      *(ulong *)(puVar4 + -5) = uVar11;
                      if ((long)puVar10 + 1U < uVar15) {
                        uVar11 = (ulong)((uint)(ushort)((ushort)*puVar10 >> 8) |
                                        ((ushort)*puVar10 & 0xff00ff) << 8);
                        puVar10 = (uint *)((long)puVar10 + 2);
                      }
                      else {
                        uVar11 = 0;
                      }
                      plVar13[8] = (long)puVar10;
                      puVar4[-1] = (short)uVar11;
                      if ((long)puVar10 + 1U < uVar15) {
                        puVar9 = (uint *)((long)puVar10 + 2);
                        uVar12 = (uint)(ushort)((ushort)*puVar10 >> 8) |
                                 ((ushort)*puVar10 & 0xff00ff) << 8;
                        plVar13[8] = (long)puVar9;
                        *puVar4 = (short)uVar12;
                        puVar10 = puVar9;
                        if (((uint)uVar11 != 0xffff) || (uVar12 != 0xffff)) goto LAB_109789684;
                      }
                      else {
                        uVar12 = 0;
                        *puVar4 = 0;
LAB_109789684:
                        if ((*(uint *)(puVar8 + 4) <= (uint)uVar11) ||
                           (puVar9 = puVar10,
                           *(uint *)(*(long *)(puVar8 + 8) + uVar11 * 0x20) <= uVar12)) {
                          bVar3 = false;
                          goto LAB_1097896c0;
                        }
                      }
                      puVar1 = puVar4 + 3;
                      puVar4 = puVar4 + 8;
                    } while (puVar1 < (undefined2 *)(lVar17 + (ulong)uVar2 * 0x10));
                  }
                  bVar3 = true;
LAB_1097896c0:
                  if (plVar13[5] != 0) {
                    if (*plVar13 != 0) {
                      (**(code **)(plVar13[7] + 0x10))();
                    }
                    *plVar13 = 0;
                  }
                  plVar13[8] = 0;
                  plVar13[9] = 0;
                  if (bVar3) {
                    puVar14 = *(undefined8 **)(*(ushort **)(lVar16 + 0x60) + 0x14);
                    if ((puVar14 != (undefined8 *)0x0) &&
                       (uVar15 = (ulong)**(ushort **)(lVar16 + 0x60), uVar15 != 0)) {
                      puVar7 = puVar14 + uVar15 * 2;
                      do {
                        puVar4 = param_1;
                        FUN_109789734(param_1,*puVar14);
                        if (puVar4 != (undefined2 *)0x0) {
                          *(undefined2 *)((long)puVar14 + 0xc) = *puVar4;
                        }
                        puVar14 = puVar14 + 2;
                      } while (puVar14 < puVar7);
                    }
                    *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) | 0x100;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 109789734; end: 109789b0b;  */

long FUN_109789734(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 0x7362786f) {
    if (param_2 < 0x68617363) {
      switch(param_2) {
      case 0x67737030:
        if (1 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8);
        }
        break;
      case 0x67737031:
        if (2 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 4;
        }
        break;
      case 0x67737032:
        if (3 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 8;
        }
        break;
      case 0x67737033:
        if (4 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0xc;
        }
        break;
      case 0x67737034:
        if (5 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x10;
        }
        break;
      case 0x67737035:
        if (6 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x14;
        }
        break;
      case 0x67737036:
        if (7 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x18;
        }
        break;
      case 0x67737037:
        if (8 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x1c;
        }
        break;
      case 0x67737038:
        if (9 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x20;
        }
        break;
      case 0x67737039:
        if (10 < *(ushort *)(param_1 + 0x3a2)) {
          return *(long *)(param_1 + 0x3a8) + 0x24;
        }
        break;
      default:
        param_1 = param_1 + 0x2e2;
        if (param_2 != 0x63706874) {
          param_1 = 0;
        }
        return param_1;
      }
      return 0;
    }
    if (param_2 < 0x6863726e) {
      lVar2 = 0x68636c63;
      lVar5 = param_1 + 0x1aa;
      if (param_2 != 0x68636f66) {
        lVar5 = 0;
      }
      lVar3 = param_1 + 0x2ca;
      if (param_2 != 0x68636c64) {
        lVar3 = lVar5;
      }
      lVar4 = 0x68617363;
      lVar5 = param_1 + 0x2c2;
      bVar1 = param_2 == 0x68636c61;
      param_1 = param_1 + 0x2c8;
    }
    else {
      lVar2 = 0x68647362;
      lVar5 = param_1 + 0x2c6;
      if (param_2 != 0x686c6770) {
        lVar5 = 0;
      }
      lVar3 = param_1 + 0x2c4;
      if (param_2 != 0x68647363) {
        lVar3 = lVar5;
      }
      lVar4 = 0x6863726e;
      lVar5 = param_1 + 0x1a8;
      bVar1 = param_2 == 0x68637273;
      param_1 = param_1 + 0x1a6;
    }
  }
  else if (param_2 < 0x73747273) {
    if (param_2 < 0x7370786f) {
      lVar2 = 0x7362796e;
      lVar5 = param_1 + 0x274;
      if (param_2 != 0x73627973) {
        lVar5 = 0;
      }
      lVar3 = param_1 + 0x278;
      if (param_2 != 0x7362796f) {
        lVar3 = lVar5;
      }
      lVar4 = 0x7362786f;
      lVar5 = param_1 + 0x276;
      bVar1 = param_2 == 0x73627873;
      param_1 = param_1 + 0x272;
    }
    else {
      lVar2 = 0x7370796e;
      lVar5 = param_1 + 0x284;
      if (param_2 != 0x7374726f) {
        lVar5 = 0;
      }
      lVar4 = param_1 + 0x27c;
      if (param_2 != 0x73707973) {
        lVar4 = lVar5;
      }
      lVar3 = param_1 + 0x280;
      if (param_2 != 0x7370796f) {
        lVar3 = lVar4;
      }
      lVar4 = 0x7370786f;
      lVar5 = param_1 + 0x27e;
      bVar1 = param_2 == 0x73707873;
      param_1 = param_1 + 0x27a;
    }
  }
  else if (param_2 < 0x7663726e) {
    lVar2 = 0x756e6472;
    lVar5 = param_1 + 0x212;
    if (param_2 != 0x76636f66) {
      lVar5 = 0;
    }
    lVar4 = param_1 + 0x200;
    if (param_2 != 0x76617363) {
      lVar4 = lVar5;
    }
    lVar3 = param_1 + 0x302;
    if (param_2 != 0x756e6473) {
      lVar3 = lVar4;
    }
    lVar4 = 0x73747273;
    lVar5 = param_1 + 0x282;
    bVar1 = param_2 == 0x756e646f;
    param_1 = param_1 + 0x300;
  }
  else {
    lVar2 = 0x76647362;
    lVar5 = param_1 + 0x2e0;
    if (param_2 != 0x78686774) {
      lVar5 = 0;
    }
    lVar4 = param_1 + 0x204;
    if (param_2 != 0x766c6770) {
      lVar4 = lVar5;
    }
    lVar3 = param_1 + 0x202;
    if (param_2 != 0x76647363) {
      lVar3 = lVar4;
    }
    lVar4 = 0x7663726e;
    lVar5 = param_1 + 0x210;
    bVar1 = param_2 == 0x76637273;
    param_1 = param_1 + 0x20e;
  }
  if (!bVar1) {
    param_1 = 0;
  }
  if (param_2 != lVar4) {
    lVar5 = param_1;
  }
  if (param_2 <= lVar2) {
    lVar3 = lVar5;
  }
  return lVar3;
}



/* Entry: 109789b0c; end: 109789c8f;  */

void FUN_109789b0c(short *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  long lVar20;
  long *plVar21;
  int iVar19;
  
  if ((*(byte *)((long)param_1 + 0x4c9) & 1) != 0) {
    lVar20 = *(long *)(param_1 + 0x260);
    puVar10 = *(ushort **)(lVar20 + 0x60);
    plVar21 = *(long **)(puVar10 + 0x14);
    if ((plVar21 == (long *)0x0) || (uVar11 = (ulong)*puVar10, uVar11 == 0)) {
      sVar13 = 0;
      sVar15 = 0;
      sVar17 = 0;
    }
    else {
      iVar16 = 0;
      iVar14 = 0;
      plVar1 = plVar21 + uVar11 * 2;
      iVar18 = 0;
      do {
        psVar8 = param_1;
        FUN_109789734(param_1,*plVar21);
        psVar9 = param_1;
        func_0x00010978730c(param_1,*(long *)(lVar20 + 0x60) + 8,(short)plVar21[1],
                            *(undefined2 *)((long)plVar21 + 10));
        iVar7 = (int)psVar9;
        iVar19 = iVar18;
        if (psVar8 != (short *)0x0 && iVar7 != 0) {
          *psVar8 = *(short *)((long)plVar21 + 0xc) + (short)psVar9;
          lVar12 = *plVar21;
          iVar19 = iVar16;
          if (lVar12 == 0x68647363) {
            iVar19 = iVar7;
          }
          iVar2 = iVar16;
          iVar6 = iVar7;
          if (lVar12 != 0x686c6770) {
            iVar2 = iVar19;
            iVar6 = iVar14;
          }
          iVar19 = iVar7;
          if (lVar12 != 0x68617363) {
            iVar16 = iVar2;
            iVar14 = iVar6;
            iVar19 = iVar18;
          }
        }
        sVar13 = (short)iVar14;
        sVar15 = (short)iVar16;
        sVar17 = (short)iVar19;
        plVar21 = plVar21 + 2;
        iVar18 = iVar19;
      } while (plVar21 < plVar1);
    }
    lVar20 = *(long *)(param_1 + 0x1c8);
    sVar4 = param_1[0x45];
    sVar5 = param_1[0x46];
    sVar17 = sVar4 + sVar17;
    param_1[0x45] = sVar17;
    sVar15 = sVar5 + sVar15;
    param_1[0x46] = sVar15;
    param_1[0x47] = (((param_1[0x47] + sVar13) - sVar4) + sVar5 + sVar17) - sVar15;
    sVar17 = param_1[0x181];
    param_1[0x4a] = param_1[0x180] - (short)((uint)(int)(short)(sVar17 - (sVar17 >> 0xf)) >> 1);
    param_1[0x4b] = sVar17;
    if ((lVar20 != 0) && (*(long *)(lVar20 + 0x40) != 0)) {
      lVar12 = *(long *)(param_1 + 100);
      while (lVar12 != 0) {
        lVar3 = *(long *)(lVar12 + 8);
        (**(code **)(lVar20 + 0x40))(*(undefined8 *)(lVar12 + 0x10));
        lVar12 = lVar3;
      }
    }
  }
  return;
}



/* Entry: 109789c90; end: 109789d47;  */

undefined8 FUN_109789c90(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0xd] = param_1[4];
  param_1[0xc] = param_1[3];
  param_1[0xf] = param_1[6];
  param_1[0xe] = param_1[5];
  param_1[0x11] = param_1[8];
  param_1[0x10] = param_1[7];
  param_1[0x12] = param_1[9];
  if (((short)param_1[0xc] == 0) || (*(short *)((long)param_1 + 0x62) == 0)) {
    uVar2 = 0x97;
  }
  else {
    if ((*(ushort *)(lVar1 + 0x150) >> 3 & 1) != 0) {
      lVar4 = param_1[0xe];
      lVar3 = lVar4 * *(short *)(lVar1 + 0x8a);
      lVar5 = lVar4 * *(short *)(lVar1 + 0x8c);
      param_1[0xf] = (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
      param_1[0x10] = (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
      lVar4 = lVar4 * *(short *)(lVar1 + 0x8e);
      param_1[0x11] = (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
    }
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return uVar2;
}



/* Entry: 109789d48; end: 109789e4b;  */

ulong FUN_109789d48(ulong param_1,ulong param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x4c0);
  if (lVar5 == 0) {
    param_1 = 0;
  }
  else {
    if (param_4 == 0) {
      if (*(char *)(lVar5 + 0x40) == '\0') {
        uVar3 = param_1;
        FUN_109789e4c(param_1,0);
        lVar5 = *(long *)(param_1 + 0x4c0);
        *(int *)(lVar5 + 0x44) = (int)uVar3;
      }
      if (*(char *)(lVar5 + 0x41) == '\0') {
        return (ulong)*(uint *)(lVar5 + 0x44);
      }
      plVar6 = (long *)(lVar5 + 0x48);
    }
    else {
      if (*(char *)(lVar5 + 0x50) == '\0') {
        uVar3 = param_1;
        FUN_109789e4c(param_1,1);
        lVar5 = *(long *)(param_1 + 0x4c0);
        *(int *)(lVar5 + 0x54) = (int)uVar3;
      }
      if (*(char *)(lVar5 + 0x51) == '\0') {
        return (ulong)*(uint *)(lVar5 + 0x54);
      }
      plVar6 = (long *)(lVar5 + 0x58);
    }
    lVar5 = *plVar6;
    if (*(long *)(lVar5 + 0x30) == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = (uint)param_2;
      if (*(ulong *)(lVar5 + 0x20) <= (param_2 & 0xffffffff)) {
        uVar1 = (int)*(ulong *)(lVar5 + 0x20) - 1;
      }
      uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x28) + (ulong)uVar1 * 4);
      param_2 = (ulong)*(uint *)(*(long *)(lVar5 + 0x30) + (ulong)uVar1 * 4);
    }
    func_0x00010978730c(param_1,lVar5,uVar4,param_2);
    iVar2 = (int)param_1;
    if (iVar2 != 0) {
      param_1 = 0;
      *param_3 = *param_3 + iVar2;
    }
  }
  return param_1;
}



/* Entry: 109789e4c; end: 10978a03f;  */

void FUN_109789e4c(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  int iStack_54;
  
  uVar8 = *(ulong *)(param_1 + 0xc0);
  puVar7 = *(undefined8 **)(uVar8 + 0x38);
  lVar9 = *(long *)(param_1 + 0x4c0);
  lVar10 = 0x40;
  if (param_2 != 0) {
    lVar10 = 0x50;
  }
  uVar2 = 0x48564152;
  if (param_2 != 0) {
    uVar2 = 0x56564152;
  }
  *(undefined1 *)(lVar9 + lVar10) = 1;
  lVar10 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,uVar2,uVar8,&uStack_60);
  iStack_54 = (int)lVar10;
  if (iStack_54 == 0) {
    lVar10 = *(long *)(uVar8 + 0x10);
    uVar3 = uVar8;
    func_0x000109757520(uVar8,&iStack_54);
    if (iStack_54 == 0) {
      uVar1 = *(long *)(uVar8 + 0x10) + 2;
      if (*(code **)(uVar8 + 0x28) == (code *)0x0) {
        if (*(ulong *)(uVar8 + 8) < uVar1) {
          return;
        }
      }
      else {
        uVar4 = uVar8;
        (**(code **)(uVar8 + 0x28))(uVar8,uVar1,0,0);
        if (uVar4 != 0) {
          return;
        }
      }
      *(ulong *)(uVar8 + 0x10) = uVar1;
      iStack_54 = 0;
      if ((((int)uVar3 == 1) &&
          (uVar3 = uVar8, func_0x0001097575b8(uVar8,&iStack_54), iStack_54 == 0)) &&
         (func_0x0001097575b8(uVar8,&iStack_54), iStack_54 == 0)) {
        (*(code *)puVar7[1])(puVar7,0x38);
        if (puVar7 == (undefined8 *)0x0) {
          if (param_2 == 0) {
            *(undefined8 *)(lVar9 + 0x48) = 0;
          }
          else {
            *(undefined8 *)(lVar9 + 0x58) = 0;
          }
        }
        else {
          puVar7[6] = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          lVar5 = 0x48;
          if (param_2 != 0) {
            lVar5 = 0x58;
          }
          *(undefined8 **)(lVar9 + lVar5) = puVar7;
          lVar5 = param_1;
          func_0x000109786dfc(param_1,lVar10 + (uVar3 & 0xffffffff),puVar7);
          if (((int)lVar5 == 0) &&
             (((int)uVar8 == 0 ||
              (lVar5 = param_1,
              func_0x000109786be0(param_1,lVar10 + (uVar8 & 0xffffffff),puVar7 + 4,puVar7,uStack_60)
              , (int)lVar5 == 0)))) {
            lVar10 = 0x41;
            if (param_2 != 0) {
              lVar10 = 0x51;
            }
            uVar6 = 2;
            if (param_2 != 0) {
              uVar6 = 0x10;
            }
            *(undefined1 *)(lVar9 + lVar10) = 1;
            *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) | uVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10978a040; end: 10978a117;  */

ulong FUN_10978a040(long param_1,uint param_2,long *param_3)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x4f8);
  if (param_2 < uVar6) {
    lVar7 = *(long *)(param_1 + 0x500);
    if (*(short *)(param_1 + 0x186) == 0) {
      puVar2 = (ushort *)(lVar7 + (ulong)(param_2 << 1));
      uVar4 = (ulong)((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8);
      uVar5 = uVar4;
      if (puVar2 + 2 <= (ushort *)(lVar7 + uVar6 * 2)) {
        uVar5 = (ulong)((uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8);
      }
      uVar4 = uVar4 << 1;
      uVar8 = uVar5 << 1;
    }
    else {
      puVar1 = (uint *)(lVar7 + (ulong)(param_2 << 2));
      uVar3 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
      uVar4 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar8 = uVar4;
      if (puVar1 + 2 <= (uint *)(lVar7 + uVar6 * 4)) {
        uVar3 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
        uVar8 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x4a8);
    if ((uVar5 < uVar4) || ((uVar5 < uVar8 && (uVar8 = uVar5, uVar6 - 2 != (ulong)param_2)))) {
      lVar7 = 0;
      uVar4 = 0;
      goto LAB_10978a110;
    }
    if (uVar4 <= uVar8) {
      uVar5 = uVar8;
    }
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  lVar7 = uVar5 - uVar4;
LAB_10978a110:
  *param_3 = lVar7;
  return uVar4;
}



/* Entry: 10978a118; end: 10978a1cf;  */

undefined8 FUN_10978a118(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  _strcmp(param_2,&UNK_10f57fbac);
  if ((int)param_2 == 0) {
    iVar2 = *param_3;
    if (iVar2 != 0x23) {
      if ((iVar2 != 0x28) && (iVar2 != 0x26)) {
        return 7;
      }
      iVar2 = 0x28;
    }
    uVar1 = 0;
    *(int *)(param_1 + 0x78) = iVar2;
  }
  else {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 10978a1d0; end: 10978a237;  */

void FUN_10978a1d0(long param_1,undefined8 param_2,short param_3,short *param_4,undefined2 *param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010978a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x370) + 0x150))(param_1,1,param_2);
    return;
  }
  if (*(short *)(param_1 + 0x268) == -1) {
    *param_4 = *(short *)(param_1 + 0x198) - param_3;
    sVar2 = *(short *)(param_1 + 0x198);
    sVar3 = *(short *)(param_1 + 0x19a);
  }
  else {
    *param_4 = *(short *)(param_1 + 0x2c2) - param_3;
    sVar2 = *(short *)(param_1 + 0x2c2);
    sVar3 = *(short *)(param_1 + 0x2c4);
  }
  iVar4 = (int)sVar2 - (int)sVar3;
  iVar1 = -iVar4;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  *param_5 = (short)iVar1;
  return;
}



/* Entry: 10978a238; end: 10978ab3b;  */

ulong * FUN_10978a238(ulong *param_1,ulong *param_2,uint param_3,int param_4)

{
  short sVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  short sVar23;
  ulong uVar24;
  ulong *puVar25;
  uint uVar26;
  ulong *puVar27;
  ulong *puVar28;
  long lVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  ulong *puVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uVar37;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ushort uStack_f2;
  ulong auStack_f0 [8];
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 (*pauVar22) [16];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar28 = (ulong *)*param_1;
  puVar25 = (ulong *)param_1[3];
  if (*(ushort *)((long)puVar28 + 0x1ea) < param_3) {
    *(short *)((long)puVar28 + 0x1ea) = (short)param_3;
  }
  puVar32 = param_1;
  puVar9 = param_2;
  if ((uint)puVar28[4] <= (uint)param_2) {
    puVar30 = (ulong *)0x10;
    goto LAB_10978a41c;
  }
  *(uint *)(param_1 + 5) = (uint)param_2;
  if ((param_1[4] & 1) == 0) {
    lVar29 = *(long *)(*(long *)(param_1[1] + 0x58) + 8);
    lVar19 = *(long *)(*(long *)(param_1[1] + 0x58) + 0x10);
  }
  else {
    lVar19 = 0x10000;
    lVar29 = 0x10000;
  }
  puVar27 = puVar28;
  FUN_10978a040(puVar28,param_2,&uStack_b0);
  *(int *)(param_1 + 7) = (int)uStack_b0;
  if ((int)uStack_b0 == 0) {
LAB_10978a348:
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
  }
  else {
    if (puVar28[0x96] == 0) {
      puVar32 = puVar27;
      puVar30 = (ulong *)0x8;
      goto LAB_10978a41c;
    }
    puVar9 = param_2;
    (*(code *)puVar28[0x69])(param_1,param_2,puVar28[0x96] + (long)puVar27);
    puVar30 = puVar32;
    if ((int)puVar32 != 0) goto LAB_10978a41c;
    puVar30 = param_1;
    (*(code *)puVar28[0x6b])();
    puVar32 = param_1;
    (*(code *)puVar28[0x6a])();
    if ((int)puVar30 != 0) goto LAB_10978a41c;
    if (((int)param_1[7] == 0) || (*(short *)((long)param_1 + 0x3c) == 0)) goto LAB_10978a348;
  }
  puVar32 = (ulong *)*param_1;
  puVar30 = (ulong *)param_1[6];
  uStack_b0 = uStack_b0 & 0xffffffffffff0000;
  auStack_f0[0] = auStack_f0[0] & 0xffffffffffff0000;
  uStack_120._0_4_ = (uint)uStack_120 & 0xffff0000;
  uStack_f2 = 0;
  puVar31 = (ulong *)puVar30[2];
  (**(code **)(puVar32[0x6e] + 0x150))(puVar32,0,param_2,&uStack_b0,&uStack_120);
  puVar9 = param_2;
  FUN_10978a1d0(puVar32,param_2,param_1[0xb],auStack_f0,&uStack_f2);
  if ((code *)puVar30[5] == (code *)0x0) {
    if (puVar31 <= (ulong *)puVar30[1]) goto LAB_10978a3dc;
  }
  else {
    puVar32 = puVar30;
    puVar9 = puVar31;
    (*(code *)puVar30[5])(puVar30,puVar31,0,0);
    if (puVar32 == (ulong *)0x0) {
LAB_10978a3dc:
      puVar30[2] = (ulong)puVar31;
      *(int *)(param_1 + 0xc) = (int)(short)uStack_b0;
      *(uint *)((long)param_1 + 100) = (uint)uStack_120 & 0xffff;
      *(int *)(param_1 + 0x26) = (int)(short)auStack_f0[0];
      *(uint *)((long)param_1 + 0x134) = (uint)uStack_f2;
      if (*(char *)((long)param_1 + 0x6c) == '\0') {
        *(undefined1 *)((long)param_1 + 0x6c) = 1;
        *(uint *)(param_1 + 0xd) = (uint)uStack_120 & 0xffff;
      }
      if (param_4 == 0) {
        if (((int)param_1[7] != 0) && (*(short *)((long)param_1 + 0x3c) != 0)) {
          FUN_10978b4ec(param_1);
          puVar32 = param_1;
          puVar9 = param_2;
          (*(code *)puVar28[0x69])
                    (param_1,param_2,(long)puVar27 + puVar28[0x96] + 10,(int)param_1[7] + -10);
          puVar30 = puVar32;
          if ((int)puVar32 != 0) goto LAB_10978a41c;
          if (*(short *)((long)param_1 + 0x3c) < 1) {
            if (*(short *)((long)param_1 + 0x3c) < 0) {
              puVar27 = (ulong *)puVar28[0x17];
              *(undefined2 *)((long)param_1 + 0x3c) = 0xffff;
              uVar13 = param_1[0x2d];
              if (uVar13 != 0) {
                iVar15 = param_3 + 1;
                uVar14 = uVar13;
                do {
                  iVar15 = iVar15 + -1;
                  uVar16 = uVar14;
                  if (iVar15 == 0) goto LAB_10978a684;
                  uVar14 = *(ulong *)(uVar14 + 8);
                } while (uVar14 != 0);
                do {
                  if (*(ulong *)(uVar13 + 0x10) == ((ulong)param_2 & 0xffffffff))
                  goto LAB_10978a788;
                  uVar13 = *(ulong *)(uVar13 + 8);
                } while (uVar13 != 0);
              }
              puVar9 = (ulong *)0x18;
              puVar32 = puVar27;
              (*(code *)puVar27[1])();
              if (puVar32 != (ulong *)0x0) {
                puVar32[2] = (ulong)param_2 & 0xffffffff;
                uVar13 = param_1[0x2e];
                *puVar32 = uVar13;
                puVar32[1] = 0;
                puVar30 = param_1 + 0x2d;
                if (uVar13 != 0) {
                  puVar30 = (ulong *)(uVar13 + 8);
                }
                *puVar30 = (ulong)puVar32;
                param_1[0x2e] = (ulong)puVar32;
                goto LAB_10978a6b4;
              }
              puVar30 = (ulong *)0x40;
            }
            else {
              puVar30 = (ulong *)0x0;
            }
          }
          else {
            puVar30 = param_1;
            (*(code *)puVar28[0x6c])();
            if ((int)puVar30 == 0) {
              (*(code *)puVar28[0x6a])(param_1);
              func_0x00010978bfc8();
              puVar32 = param_1;
              puVar30 = param_1;
              if ((int)param_1 == 0) {
                func_0x000109753d48();
                puVar32 = puVar25;
              }
              goto LAB_10978a41c;
            }
          }
          goto LAB_10978a5bc;
        }
        puVar32 = param_1;
        FUN_10978b4ec();
        if (((*(ushort *)((long)puVar28 + 10) & 0x7fff) != 0) ||
           (*(char *)((long)puVar28 + 0x11) < '\0')) {
          auStack_f0[5] = 0;
          auStack_f0[4] = 0;
          auStack_f0[7] = 0;
          auStack_f0[6] = 0;
          auStack_f0[1] = 0;
          auStack_f0[0] = 0;
          auStack_f0[3] = 0;
          auStack_f0[2] = 0;
          uStack_b0 = param_1[0xe];
          puStack_a8 = (ulong *)param_1[0xf];
          puStack_a0 = (ulong *)param_1[0x10];
          puStack_98 = (ulong *)param_1[0x11];
          uStack_90 = param_1[0x27];
          uStack_88 = param_1[0x28];
          uStack_80 = param_1[0x29];
          uStack_78 = param_1[0x2a];
          uStack_120._0_4_ = 0;
          puStack_118 = &uStack_b0;
          uStack_110 = 0;
          uStack_108 = 0;
          puVar9 = &uStack_120;
          puVar32 = param_1;
          func_0x00010978b560(param_1,puVar9,auStack_f0);
          puVar30 = puVar32;
          if ((int)puVar32 != 0) goto LAB_10978a41c;
        }
        if ((param_1[4] & 1) == 0) {
          param_1[0xe] = (long)(param_1[0xe] * lVar29 + ((long)(param_1[0xe] * lVar29) >> 0x3f) +
                               0x8000) >> 0x10;
          param_1[0x10] =
               (long)(param_1[0x10] * lVar29 + ((long)(param_1[0x10] * lVar29) >> 0x3f) + 0x8000) >>
               0x10;
          param_1[0x27] =
               (long)(param_1[0x27] * lVar29 + ((long)(param_1[0x27] * lVar29) >> 0x3f) + 0x8000) >>
               0x10;
          param_1[0x28] =
               (long)(param_1[0x28] * lVar19 + ((long)(param_1[0x28] * lVar19) >> 0x3f) + 0x8000) >>
               0x10;
          param_1[0x29] =
               (long)(param_1[0x29] * lVar29 + ((long)(param_1[0x29] * lVar29) >> 0x3f) + 0x8000) >>
               0x10;
          param_1[0x2a] =
               (long)(param_1[0x2a] * lVar19 + ((long)(param_1[0x2a] * lVar19) >> 0x3f) + 0x8000) >>
               0x10;
          puVar30 = (ulong *)0x0;
          goto LAB_10978a41c;
        }
      }
      goto LAB_10978a418;
    }
  }
  puVar30 = (ulong *)0x55;
  goto LAB_10978a41c;
LAB_10978a788:
  puVar30 = (ulong *)0x15;
  goto LAB_10978a5bc;
LAB_10978a684:
  do {
    *(undefined8 *)(uVar16 + 0x10) = 0xffffffffffffffff;
    puVar32 = (ulong *)(uVar16 + 8);
    uVar16 = *puVar32;
  } while (*puVar32 != 0);
  for (uVar13 = param_1[0x2d]; uVar13 != 0; uVar13 = *(ulong *)(uVar13 + 8)) {
    if (*(ulong *)(uVar13 + 0x10) == ((ulong)param_2 & 0xffffffff)) goto LAB_10978a788;
  }
  *(ulong *)(uVar14 + 0x10) = (ulong)param_2 & 0xffffffff;
LAB_10978a6b4:
  uVar5 = *(ushort *)((long)puVar25 + 0x1a);
  uVar13 = puVar25[3];
  puVar30 = param_1;
  (*(code *)puVar28[0x6d])();
  if ((int)puVar30 == 0) {
    uVar14 = param_1[0x24];
    (*(code *)puVar28[0x6a])(param_1);
    uVar26 = (uint)uVar5;
    if (((*(ushort *)((long)puVar28 + 10) & 0x7fff) != 0) ||
       (*(char *)((long)puVar28 + 0x11) < '\0')) {
      uStack_90 = 0;
      puStack_a8 = (ulong *)0x0;
      uStack_b0 = 0;
      puStack_98 = (ulong *)0x0;
      puStack_a0 = (ulong *)0x0;
      uVar5 = (ushort)puVar25[0x13];
      uVar16 = (ulong)uVar5;
      puVar9 = (ulong *)(uVar16 * 0x10 + 0x40);
      puVar28 = puVar27;
      (*(code *)puVar27[1])();
      puVar32 = (ulong *)0x0;
      if (puVar28 == (ulong *)0x0) {
LAB_10978a818:
        puVar30 = (ulong *)0x40;
        goto LAB_10978a41c;
      }
      puStack_a8 = puVar28;
      if (uVar5 == 0) {
        puVar9 = (ulong *)0x0;
        puVar31 = (ulong *)0x0;
        puStack_a0 = (ulong *)0x0;
LAB_10978a7a4:
        puVar33 = puVar27;
        puStack_98 = puVar31;
        (*(code *)puVar27[1])(puVar27,uVar16 * 0x10 + 0x40);
        if (puVar33 == (ulong *)0x0) {
          puVar30 = (ulong *)0x40;
        }
        else {
          uStack_b0 = CONCAT62(CONCAT42(uStack_b0._4_4_,uVar5),uVar5);
          if (uVar5 == 0) {
            uVar10 = 0;
          }
          else {
            uVar18 = 0;
            puVar11 = (undefined8 *)(puVar25[0x14] + 8);
            do {
              uVar34 = *puVar11;
              (puVar28 + uVar18 * 2)[1] = (long)(int)((ulong)uVar34 >> 0x20);
              puVar28[uVar18 * 2] = (long)(int)uVar34;
              *(undefined1 *)((long)puVar9 + uVar18) = 1;
              *(short *)((long)puVar31 + uVar18 * 2) = (short)uVar18;
              uVar18 = uVar18 + 1;
              puVar11 = puVar11 + 6;
            } while (uVar16 != uVar18);
            uVar10 = (uint)uVar5;
          }
          uVar18 = param_1[0xe];
          (puVar28 + (ulong)uVar10 * 2)[1] = param_1[0xf];
          puVar28[(ulong)uVar10 * 2] = uVar18;
          uVar18 = param_1[0x10];
          (puVar28 + ((ulong)(uVar10 + 1) & 0xffff) * 2)[1] = param_1[0x11];
          puVar28[((ulong)(uVar10 + 1) & 0xffff) * 2] = uVar18;
          uVar18 = param_1[0x27];
          (puVar28 + ((ulong)(uVar10 + 2) & 0xffff) * 2)[1] = param_1[0x28];
          puVar28[((ulong)(uVar10 + 2) & 0xffff) * 2] = uVar18;
          uVar18 = param_1[0x29];
          (puVar28 + ((ulong)(uVar10 + 3) & 0xffff) * 2)[1] = param_1[0x2a];
          puVar28[((ulong)(uVar10 + 3) & 0xffff) * 2] = uVar18;
          puVar30 = param_1;
          func_0x00010978b560(param_1,&uStack_b0,puVar33);
          if ((uVar5 != 0) && ((int)puVar30 == 0)) {
            puVar11 = (undefined8 *)(puVar25[0x14] + 8);
            puVar32 = puVar28;
            do {
              if ((*(ushort *)((long)puVar11 + -4) >> 1 & 1) != 0) {
                *puVar11 = CONCAT44((int)(short)puVar32[1],(int)(short)*puVar32);
              }
              puVar32 = puVar32 + 2;
              puVar11 = puVar11 + 6;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            puVar30 = (ulong *)0x0;
          }
        }
        puVar32 = puVar27;
        (*(code *)puVar27[2])();
        if (puVar9 != (ulong *)0x0) goto LAB_10978a8dc;
      }
      else {
        puVar9 = puVar27;
        (*(code *)puVar27[1])(puVar27,uVar16);
        if (puVar9 == (ulong *)0x0) {
          (*(code *)puVar27[2])();
          puVar32 = puVar27;
          puVar9 = puVar28;
          goto LAB_10978a818;
        }
        puVar31 = puVar27;
        puStack_a0 = puVar9;
        (*(code *)puVar27[1])(puVar27,uVar16 << 1);
        if (puVar31 != (ulong *)0x0) goto LAB_10978a7a4;
        puStack_98 = (ulong *)0x0;
        (*(code *)puVar27[2])(puVar27,puVar28);
        puVar33 = (ulong *)0x0;
        puVar30 = (ulong *)0x40;
LAB_10978a8dc:
        puVar28 = puVar9;
        puVar32 = puVar27;
        (*(code *)puVar27[2])();
      }
      if (puVar31 != (ulong *)0x0) {
        puVar32 = puVar27;
        (*(code *)puVar27[2])();
        puVar28 = puVar31;
      }
      puVar9 = puVar28;
      if (puVar33 != (ulong *)0x0) {
        (*(code *)puVar27[2])();
        puVar32 = puVar27;
        puVar9 = puVar33;
      }
      if ((int)puVar30 != 0) goto LAB_10978a41c;
    }
    if ((param_1[4] & 1) == 0) {
      param_1[0xe] = (long)(param_1[0xe] * lVar29 + ((long)(param_1[0xe] * lVar29) >> 0x3f) + 0x8000
                           ) >> 0x10;
      param_1[0x10] =
           (long)(param_1[0x10] * lVar29 + ((long)(param_1[0x10] * lVar29) >> 0x3f) + 0x8000) >>
           0x10;
      param_1[0x27] =
           (long)(param_1[0x27] * lVar29 + ((long)(param_1[0x27] * lVar29) >> 0x3f) + 0x8000) >>
           0x10;
      param_1[0x28] =
           (long)(param_1[0x28] * lVar19 + ((long)(param_1[0x28] * lVar19) >> 0x3f) + 0x8000) >>
           0x10;
      param_1[0x29] =
           (long)(param_1[0x29] * lVar29 + ((long)(param_1[0x29] * lVar29) >> 0x3f) + 0x8000) >>
           0x10;
      param_1[0x2a] =
           (long)(param_1[0x2a] * lVar19 + ((long)(param_1[0x2a] * lVar19) >> 0x3f) + 0x8000) >>
           0x10;
    }
    if (((uint)param_1[4] >> 10 & 1) != 0) {
      func_0x000109753d48();
      *(undefined4 *)(param_1[2] + 0x90) = 0x636f6d70;
      puVar32 = puVar25;
      puVar30 = (ulong *)0x0;
      goto LAB_10978a41c;
    }
    uVar18 = puVar25[0x13];
    uVar16 = (ulong)(uint)uVar18;
    uVar37 = puVar25[10];
    uVar12 = param_1[6];
    uVar24 = param_1[7];
    puVar32 = puVar25;
    func_0x000109753d48();
    if ((uint)uVar18 == 0) {
      lVar29 = 0;
      uVar10 = uVar26;
    }
    else {
      lVar29 = (ulong)(uint)uVar37 * 0x30;
      do {
        uStack_b0 = param_1[0xe];
        puStack_a8 = (ulong *)param_1[0xf];
        puStack_a0 = (ulong *)param_1[0x10];
        puStack_98 = (ulong *)param_1[0x11];
        uStack_90 = param_1[0x27];
        uStack_88 = param_1[0x28];
        uStack_80 = param_1[0x29];
        uStack_78 = param_1[0x2a];
        uVar18 = param_1[0xd];
        uVar3 = *(undefined4 *)((long)param_1 + 0x134);
        uVar5 = *(ushort *)((long)puVar25 + 0x1a);
        puVar9 = (ulong *)(ulong)*(uint *)(puVar25[0xb] + lVar29);
        puVar32 = param_1;
        FUN_10978a238(param_1,puVar9,param_3 + 1,0);
        puVar30 = puVar32;
        if ((int)puVar32 != 0) goto LAB_10978a41c;
        uVar37 = puVar25[0xb];
        puVar9 = (ulong *)(uVar37 + lVar29);
        if ((*(ushort *)((long)puVar9 + 4) >> 9 & 1) == 0) {
          param_1[0xf] = (ulong)puStack_a8;
          param_1[0xe] = uStack_b0;
          param_1[0x11] = (ulong)puStack_98;
          param_1[0x10] = (ulong)puStack_a0;
          param_1[0x28] = uStack_88;
          param_1[0x27] = uStack_90;
          param_1[0x2a] = uStack_78;
          param_1[0x29] = uStack_80;
          *(int *)(param_1 + 0xd) = (int)uVar18;
          *(undefined4 *)((long)param_1 + 0x134) = uVar3;
        }
        uVar4 = *(ushort *)((long)puVar25 + 0x1a);
        if ((uVar4 != uVar5) &&
           (puVar32 = param_1, func_0x00010978c2f8(param_1,puVar9,uVar26,uVar5), puVar30 = puVar32,
           (int)puVar32 != 0)) goto LAB_10978a41c;
        lVar29 = lVar29 + 0x30;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      lVar29 = uVar37 + lVar29 + -0x30;
      uVar10 = (uint)uVar4;
    }
    param_1[6] = uVar12;
    *(int *)(param_1 + 7) = (int)uVar24;
    param_1[0x24] = uVar14;
    if ((((lVar29 != 0) && (((uint)param_1[4] >> 1 & 1) == 0)) &&
        ((*(ushort *)(lVar29 + 4) >> 8 & 1) != 0)) && (uVar26 < uVar10)) {
      puVar9 = (ulong *)(ulong)uVar26;
      FUN_10978c4fc(param_1,puVar9,(short)uVar13);
      puVar32 = param_1;
      puVar30 = param_1;
      if ((int)param_1 != 0) goto LAB_10978a41c;
    }
    if (((int)puVar25[10] != 0) && ((*(ushort *)(puVar25[0xb] + 4) >> 10 & 1) != 0)) {
      *(uint *)(puVar25 + 7) = (uint)puVar25[7] | 0x40;
      puVar30 = (ulong *)0x0;
      goto LAB_10978a41c;
    }
LAB_10978a418:
    puVar30 = (ulong *)0x0;
    goto LAB_10978a41c;
  }
LAB_10978a5bc:
  (*(code *)puVar28[0x6a])();
  puVar32 = param_1;
LAB_10978a41c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar30;
  }
  ___stack_chk_fail();
  uVar13 = puVar32[2];
  uVar14 = puVar32[4];
  if ((uVar14 & 1) == 0) {
    uVar16 = *(ulong *)(*(long *)(puVar32[1] + 0x58) + 0x10);
  }
  else {
    uVar16 = 0x10000;
  }
  uVar18 = *puVar32;
  if (*(int *)(uVar13 + 0x90) == 0x636f6d70) {
    auVar35 = *(undefined1 (*) [16])(puVar32 + 8);
    auVar36 = *(undefined1 (*) [16])(puVar32 + 10);
  }
  else {
    uVar5 = *(ushort *)(uVar13 + 0xca);
    if (uVar5 == 0) {
      auVar35 = ZEXT216(0);
      auVar36 = ZEXT216(0);
    }
    else {
      pauVar20 = *(undefined1 (**) [16])(uVar13 + 0xd0);
      auVar35 = *pauVar20;
      auVar36 = auVar35;
      if (uVar5 != 1) {
        pauVar21 = pauVar20 + 1;
        do {
          pauVar22 = pauVar21 + 1;
          auVar6._8_8_ = -(ulong)(*(long *)(*pauVar21 + 8) < auVar35._8_8_);
          auVar6._0_8_ = -(ulong)(*(long *)*pauVar21 < auVar35._0_8_);
          auVar35 = auVar35 ^ (auVar35 ^ *pauVar21) & auVar6;
          auVar7._8_8_ = -(ulong)(auVar36._8_8_ < *(long *)(*pauVar21 + 8));
          auVar7._0_8_ = -(ulong)(auVar36._0_8_ < *(long *)*pauVar21);
          auVar36 = auVar36 ^ (auVar36 ^ *pauVar21) & auVar7;
          pauVar21 = pauVar22;
        } while (pauVar22 < pauVar20 + uVar5);
      }
    }
  }
  *(long *)(uVar13 + 0x70) = (long)(int)puVar32[0xd];
  lVar29 = auVar35._0_8_;
  lVar19 = auVar36._8_8_;
  *(long *)(uVar13 + 0x48) = lVar19;
  *(long *)(uVar13 + 0x40) = lVar29;
  if (puVar32[0x2f] == 0) {
    lVar17 = puVar32[0x10] - puVar32[0xe];
  }
  else {
    lVar17 = (ulong)*(byte *)(puVar32[0x2f] + ((ulong)puVar9 & 0xffffffff)) << 6;
  }
  *(long *)(uVar13 + 0x50) = lVar17;
  uVar37 = lVar19 - auVar35._8_8_;
  *(ulong *)(uVar13 + 0x38) = uVar37;
  *(long *)(uVar13 + 0x30) = auVar36._0_8_ - lVar29;
  if ((*(char *)(uVar18 + 0x1f0) == '\0') || (*(short *)(uVar18 + 0x21e) == 0)) {
    if (uVar16 == 0) {
      sVar23 = -1;
    }
    else {
      uVar24 = -uVar16;
      if (-1 < (long)uVar16) {
        uVar24 = uVar16;
      }
      uVar12 = -uVar37;
      if (-1 < (long)uVar37) {
        uVar12 = uVar37;
      }
      sVar23 = 0;
      if (uVar24 != 0) {
        sVar23 = (short)((uVar12 * 0x10000 + (uVar24 >> 1)) / uVar24);
      }
    }
    bVar8 = *(short *)(uVar18 + 0x268) != -1;
    lVar19 = 0x19a;
    if (bVar8) {
      lVar19 = 0x2c4;
    }
    lVar2 = 0x198;
    if (bVar8) {
      lVar2 = 0x2c2;
    }
    uVar18 = (long)*(short *)(uVar18 + lVar2) - (long)*(short *)(uVar18 + lVar19);
    sVar1 = -sVar23;
    if (-1 < (long)(uVar37 ^ uVar16)) {
      sVar1 = sVar23;
    }
    iVar15 = (int)uVar18 - (int)sVar1;
    lVar19 = (long)((ulong)(uint)(iVar15 - (iVar15 >> 0x1f)) << 0x20) >> 0x21;
  }
  else {
    uVar37 = puVar32[0x28];
    uVar18 = uVar37 - lVar19;
    if (uVar16 == 0) {
      sVar23 = -1;
    }
    else {
      uVar24 = -uVar16;
      if (-1 < (long)uVar16) {
        uVar24 = uVar16;
      }
      uVar12 = -uVar18;
      if (-1 < (long)uVar18) {
        uVar12 = uVar18;
      }
      sVar23 = 0;
      if (uVar24 != 0) {
        sVar23 = (short)((uVar12 * 0x10000 + (uVar24 >> 1)) / uVar24);
      }
    }
    sVar1 = -sVar23;
    if (-1 < (long)(uVar18 ^ uVar16)) {
      sVar1 = sVar23;
    }
    lVar19 = (long)sVar1;
    puVar25 = puVar32 + 0x2a;
    uVar24 = uVar37 - *puVar25;
    uVar18 = -uVar16;
    if (-1 < (long)uVar16) {
      uVar18 = uVar16;
    }
    uVar12 = -uVar24;
    if (-1 < (long)uVar24) {
      uVar12 = uVar24;
    }
    puVar32 = (ulong *)(uVar12 * 0x10000 + (uVar18 >> 1));
    uVar12 = 0;
    if (uVar18 != 0) {
      uVar12 = (ulong)puVar32 / uVar18;
    }
    uVar18 = 0x7fffffff;
    if (uVar16 != 0) {
      uVar18 = uVar12;
    }
    uVar12 = (ulong)(uint)-(int)uVar18;
    if (-1 < (long)(uVar24 ^ uVar16)) {
      uVar12 = uVar18;
    }
    uVar18 = 0;
    if ((long)*puVar25 < (long)uVar37) {
      uVar18 = uVar12 & 0xffff;
    }
  }
  *(ulong *)(uVar13 + 0x78) = uVar18;
  if ((uVar14 & 1) == 0) {
    lVar19 = (long)(lVar19 * uVar16 + ((long)(lVar19 * uVar16) >> 0x3f) + 0x8000) >> 0x10;
    uVar18 = (long)(uVar18 * uVar16 + ((long)(uVar18 * uVar16) >> 0x3f) + 0x8000) >> 0x10;
  }
  *(long *)(uVar13 + 0x58) = lVar29 - lVar17 / 2;
  *(long *)(uVar13 + 0x60) = lVar19;
  *(ulong *)(uVar13 + 0x68) = uVar18;
  return puVar32;
}



/* Entry: 10978ab3c; end: 10978ad6b;  */

void FUN_10978ab3c(long *param_1,uint param_2)

{
  short sVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  long lVar17;
  short sVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lVar23;
  ulong uVar24;
  undefined1 (*pauVar16) [16];
  
  lVar9 = param_1[2];
  uVar10 = param_1[4];
  if ((uVar10 & 1) == 0) {
    uVar11 = *(ulong *)(*(long *)(param_1[1] + 0x58) + 0x10);
  }
  else {
    uVar11 = 0x10000;
  }
  lVar13 = *param_1;
  if (*(int *)(lVar9 + 0x90) == 0x636f6d70) {
    auVar21 = *(undefined1 (*) [16])(param_1 + 8);
    auVar22 = *(undefined1 (*) [16])(param_1 + 10);
  }
  else {
    uVar3 = *(ushort *)(lVar9 + 0xca);
    if (uVar3 == 0) {
      auVar21 = ZEXT216(0);
      auVar22 = ZEXT216(0);
    }
    else {
      pauVar14 = *(undefined1 (**) [16])(lVar9 + 0xd0);
      auVar21 = *pauVar14;
      auVar22 = auVar21;
      if (uVar3 != 1) {
        pauVar15 = pauVar14 + 1;
        do {
          pauVar16 = pauVar15 + 1;
          auVar6._8_8_ = -(ulong)(*(long *)(*pauVar15 + 8) < auVar21._8_8_);
          auVar6._0_8_ = -(ulong)(*(long *)*pauVar15 < auVar21._0_8_);
          auVar21 = auVar21 ^ (auVar21 ^ *pauVar15) & auVar6;
          auVar7._8_8_ = -(ulong)(auVar22._8_8_ < *(long *)(*pauVar15 + 8));
          auVar7._0_8_ = -(ulong)(auVar22._0_8_ < *(long *)*pauVar15);
          auVar22 = auVar22 ^ (auVar22 ^ *pauVar15) & auVar7;
          pauVar15 = pauVar16;
        } while (pauVar16 < pauVar14 + uVar3);
      }
    }
  }
  *(long *)(lVar9 + 0x70) = (long)(int)param_1[0xd];
  lVar20 = auVar21._0_8_;
  lVar23 = auVar22._8_8_;
  *(long *)(lVar9 + 0x48) = lVar23;
  *(long *)(lVar9 + 0x40) = lVar20;
  if (param_1[0x2f] == 0) {
    lVar12 = param_1[0x10] - param_1[0xe];
  }
  else {
    lVar12 = (ulong)*(byte *)(param_1[0x2f] + (ulong)param_2) << 6;
  }
  *(long *)(lVar9 + 0x50) = lVar12;
  uVar24 = lVar23 - auVar21._8_8_;
  *(ulong *)(lVar9 + 0x38) = uVar24;
  *(long *)(lVar9 + 0x30) = auVar22._0_8_ - lVar20;
  if ((*(char *)(lVar13 + 0x1f0) == '\0') || (*(short *)(lVar13 + 0x21e) == 0)) {
    if (uVar11 == 0) {
      sVar18 = -1;
    }
    else {
      uVar19 = -uVar11;
      if (-1 < (long)uVar11) {
        uVar19 = uVar11;
      }
      uVar2 = -uVar24;
      if (-1 < (long)uVar24) {
        uVar2 = uVar24;
      }
      sVar18 = 0;
      if (uVar19 != 0) {
        sVar18 = (short)((uVar2 * 0x10000 + (uVar19 >> 1)) / uVar19);
      }
    }
    bVar8 = *(short *)(lVar13 + 0x268) != -1;
    lVar23 = 0x19a;
    if (bVar8) {
      lVar23 = 0x2c4;
    }
    lVar17 = 0x198;
    if (bVar8) {
      lVar17 = 0x2c2;
    }
    uVar19 = (long)*(short *)(lVar13 + lVar17) - (long)*(short *)(lVar13 + lVar23);
    sVar1 = -sVar18;
    if (-1 < (long)(uVar24 ^ uVar11)) {
      sVar1 = sVar18;
    }
    iVar4 = (int)uVar19 - (int)sVar1;
    lVar13 = (long)((ulong)(uint)(iVar4 - (iVar4 >> 0x1f)) << 0x20) >> 0x21;
  }
  else {
    lVar17 = param_1[0x28];
    uVar24 = lVar17 - lVar23;
    if (uVar11 == 0) {
      sVar18 = -1;
    }
    else {
      uVar19 = -uVar11;
      if (-1 < (long)uVar11) {
        uVar19 = uVar11;
      }
      uVar2 = -uVar24;
      if (-1 < (long)uVar24) {
        uVar2 = uVar24;
      }
      sVar18 = 0;
      if (uVar19 != 0) {
        sVar18 = (short)((uVar2 * 0x10000 + (uVar19 >> 1)) / uVar19);
      }
    }
    sVar1 = -sVar18;
    if (-1 < (long)(uVar24 ^ uVar11)) {
      sVar1 = sVar18;
    }
    lVar13 = (long)sVar1;
    uVar19 = lVar17 - param_1[0x2a];
    uVar24 = -uVar11;
    if (-1 < (long)uVar11) {
      uVar24 = uVar11;
    }
    uVar2 = -uVar19;
    if (-1 < (long)uVar19) {
      uVar2 = uVar19;
    }
    uVar5 = 0;
    if (uVar24 != 0) {
      uVar5 = (uVar2 * 0x10000 + (uVar24 >> 1)) / uVar24;
    }
    uVar24 = 0x7fffffff;
    if (uVar11 != 0) {
      uVar24 = uVar5;
    }
    uVar2 = (ulong)(uint)-(int)uVar24;
    if (-1 < (long)(uVar19 ^ uVar11)) {
      uVar2 = uVar24;
    }
    uVar19 = 0;
    if (param_1[0x2a] < lVar17) {
      uVar19 = uVar2 & 0xffff;
    }
  }
  *(ulong *)(lVar9 + 0x78) = uVar19;
  if ((uVar10 & 1) == 0) {
    lVar13 = (long)(lVar13 * uVar11 + ((long)(lVar13 * uVar11) >> 0x3f) + 0x8000) >> 0x10;
    uVar19 = (long)(uVar19 * uVar11 + ((long)(uVar19 * uVar11) >> 0x3f) + 0x8000) >> 0x10;
  }
  *(long *)(lVar9 + 0x58) = lVar20 - lVar12 / 2;
  *(long *)(lVar9 + 0x60) = lVar13;
  *(ulong *)(lVar9 + 0x68) = uVar19;
  return;
}



/* Entry: 10978ad6c; end: 10978af3f;  */

int FUN_10978ad6c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iStack_44;
  
  lVar3 = 0;
  lVar5 = param_1[2];
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x5b] = *(long *)(param_3 + 0x100);
  param_1[0x5d] = *(long *)(param_3 + 0x110);
  param_1[0x5c] = *(long *)(param_3 + 0x108);
  param_1[0x5e] = *(long *)(param_3 + 0x118);
  param_1[0x31] = *(long *)(param_3 + 0xf8);
  lVar6 = *(long *)(param_3 + 0x98);
  param_1[0x3a] = *(long *)(param_3 + 0xa0);
  param_1[0x39] = lVar6;
  lVar8 = *(long *)(param_3 + 0xc0);
  lVar6 = *(long *)(param_3 + 0xb8);
  lVar9 = *(long *)(param_3 + 200);
  lVar11 = *(long *)(param_3 + 0xe0);
  lVar10 = *(long *)(param_3 + 0xd8);
  lVar13 = *(long *)(param_3 + 0xb0);
  lVar12 = *(long *)(param_3 + 0xa8);
  param_1[0x40] = *(long *)(param_3 + 0xd0);
  param_1[0x3f] = lVar9;
  param_1[0x42] = lVar11;
  param_1[0x41] = lVar10;
  param_1[0x3c] = lVar13;
  param_1[0x3b] = lVar12;
  param_1[0x3e] = lVar8;
  param_1[0x3d] = lVar6;
  plVar4 = *(long **)(param_3 + 0x58);
  lVar10 = plVar4[3];
  lVar9 = plVar4[2];
  lVar8 = plVar4[5];
  lVar6 = plVar4[4];
  lVar12 = plVar4[1];
  lVar11 = *plVar4;
  param_1[0x38] = plVar4[6];
  param_1[0x33] = lVar12;
  param_1[0x32] = lVar11;
  param_1[0x35] = lVar10;
  param_1[0x34] = lVar9;
  param_1[0x37] = lVar8;
  param_1[0x36] = lVar6;
  param_1[0x5f] = *(long *)(param_3 + 0x120);
  do {
    puVar1 = (undefined8 *)(param_3 + 0x128 + lVar3);
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + lVar3 + 0x318);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x30);
  lVar3 = *(long *)(param_3 + 0x158);
  lVar8 = *(long *)(param_3 + 0x170);
  lVar6 = *(long *)(param_3 + 0x168);
  param_1[0x44] = *(long *)(param_3 + 0x160);
  param_1[0x43] = lVar3;
  param_1[0x46] = lVar8;
  param_1[0x45] = lVar6;
  lVar6 = *(long *)(param_3 + 0x180);
  lVar3 = *(long *)(param_3 + 0x178);
  lVar9 = *(long *)(param_3 + 400);
  lVar8 = *(long *)(param_3 + 0x188);
  lVar10 = *(long *)(param_3 + 0x198);
  lVar12 = *(long *)(param_3 + 0x1b0);
  lVar11 = *(long *)(param_3 + 0x1a8);
  param_1[0x4c] = *(long *)(param_3 + 0x1a0);
  param_1[0x4b] = lVar10;
  param_1[0x4e] = lVar12;
  param_1[0x4d] = lVar11;
  param_1[0x48] = lVar6;
  param_1[0x47] = lVar3;
  param_1[0x4a] = lVar9;
  param_1[0x49] = lVar8;
  lVar3 = *(long *)(param_3 + 0x1c0);
  param_1[0x55] = *(long *)(param_3 + 0x1b8);
  param_1[0x56] = lVar3;
  *(undefined2 *)(param_1 + 0x69) = *(undefined2 *)(param_3 + 0x1c8);
  param_1[0x6a] = *(long *)(param_3 + 0x1d0);
  lVar6 = *(long *)(param_3 + 0x1e0);
  lVar3 = *(long *)(param_3 + 0x1d8);
  lVar9 = *(long *)(param_3 + 0x1f0);
  lVar8 = *(long *)(param_3 + 0x1e8);
  lVar11 = *(long *)(param_3 + 0x200);
  lVar10 = *(long *)(param_3 + 0x1f8);
  lVar13 = *(long *)(param_3 + 0x210);
  lVar12 = *(long *)(param_3 + 0x208);
  plVar4 = param_1 + 9;
  param_1[10] = 0;
  *plVar4 = 0;
  param_1[0x2e] = lVar11;
  param_1[0x2d] = lVar10;
  param_1[0x30] = lVar13;
  param_1[0x2f] = lVar12;
  param_1[0x2a] = lVar6;
  param_1[0x29] = lVar3;
  param_1[0x2c] = lVar9;
  param_1[0x2b] = lVar8;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = param_1[10];
  param_1[0x11] = *plVar4;
  param_1[0x14] = param_1[0xc];
  param_1[0x13] = param_1[0xb];
  param_1[0x16] = param_1[0xe];
  param_1[0x15] = param_1[0xd];
  param_1[0x1e] = param_1[0xe];
  param_1[0x1d] = param_1[0xd];
  param_1[0x20] = param_1[0x10];
  param_1[0x1f] = param_1[0xf];
  param_1[0x1a] = param_1[10];
  param_1[0x19] = *plVar4;
  param_1[0x1c] = param_1[0xc];
  param_1[0x1b] = param_1[0xb];
  param_1[0x18] = param_1[0x10];
  param_1[0x17] = param_1[0xf];
  lVar3 = lVar5;
  func_0x000109755910(lVar5,8,param_1[5],(ulong)*(ushort *)(param_2 + 0x1e4) + 0x20,param_1[6],
                      &iStack_44);
  param_1[6] = lVar3;
  if (iStack_44 == 0) {
    param_1[5] = (ulong)*(ushort *)(param_2 + 0x1e4) + 0x20;
    if (param_1[0x5a] != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined4 *)((long)param_1 + 0x114) = 0;
    lVar5 = param_1[0x22];
    lVar3 = param_1[0x21];
    lVar8 = param_1[0x24];
    lVar6 = param_1[0x23];
    param_1[0x12] = lVar5;
    param_1[0x11] = lVar3;
    param_1[0x14] = lVar8;
    param_1[0x13] = lVar6;
    lVar10 = param_1[0x26];
    lVar9 = param_1[0x25];
    lVar12 = param_1[0x28];
    lVar11 = param_1[0x27];
    param_1[0x16] = lVar10;
    param_1[0x15] = lVar9;
    param_1[0x18] = lVar12;
    param_1[0x17] = lVar11;
    param_1[0x1e] = lVar10;
    param_1[0x1d] = lVar9;
    param_1[0x20] = lVar12;
    param_1[0x1f] = lVar11;
    param_1[0x1a] = lVar5;
    param_1[0x19] = lVar3;
    param_1[0x1c] = lVar8;
    param_1[0x1b] = lVar6;
    param_1[10] = lVar5;
    *plVar4 = lVar3;
    param_1[0xc] = lVar8;
    param_1[0xb] = lVar6;
    param_1[0xe] = lVar10;
    param_1[0xd] = lVar9;
    param_1[0x10] = lVar12;
    param_1[0xf] = lVar11;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return iStack_44;
}



/* Entry: 10978af40; end: 10978b0b7;  */

void FUN_10978af40(long *param_1,undefined1 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar14 = *param_1;
  if (param_1[0x37] != 0) {
    lVar7 = *(long *)(lVar14 + 0x480);
    lVar11 = param_1[0x38];
    uVar9 = 0;
    uVar12 = 1;
    do {
      uVar3 = *(uint *)(lVar7 + uVar9 * 4);
      uVar2 = uVar3 + 0x3f;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      lVar13 = param_1[0x17] * ((long)((ulong)uVar2 << 0x20) >> 0x26);
      *(long *)(lVar11 + uVar9 * 8) = lVar13 + (lVar13 >> 0x3f) + 0x8000 >> 0x10;
      bVar1 = uVar12 < (ulong)param_1[0x37];
      uVar9 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar1);
  }
  lVar11 = param_1[0x43];
  lVar7 = lVar11;
  FUN_10978ad6c(lVar11,lVar14,param_1);
  if ((int)lVar7 == 0) {
    *(undefined4 *)(lVar11 + 0x300) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x380) = 0;
    *(undefined1 *)(lVar11 + 0x3e9) = param_2;
    uVar8 = *(undefined8 *)(lVar14 + 0x470);
    uVar10 = *(undefined8 *)(lVar14 + 0x468);
    *(undefined8 *)(lVar11 + 0x328) = uVar8;
    *(undefined8 *)(lVar11 + 0x330) = uVar10;
    *(undefined8 *)(lVar11 + 0x340) = 0;
    *(undefined8 *)(lVar11 + 0x338) = 0;
    if (*(long *)(lVar14 + 0x468) == 0) {
      uVar6 = 0;
    }
    else {
      *(undefined8 *)(lVar11 + 0x280) = uVar8;
      *(undefined8 *)(lVar11 + 0x290) = uVar10;
      *(undefined8 *)(lVar11 + 0x288) = 0;
      *(undefined4 *)(lVar11 + 0x27c) = 2;
      lVar7 = lVar11;
      (**(code **)(lVar14 + 0x488))();
      uVar6 = (undefined4)lVar7;
    }
    lVar14 = 0;
    *(undefined4 *)((long)param_1 + 0x224) = uVar6;
    *(undefined2 *)(lVar11 + 0x228) = 0;
    *(undefined8 *)(lVar11 + 0x220) = 0x4000000040000000;
    *(long *)(lVar11 + 0x218) = 0x4000000000000000;
    *(undefined4 *)(lVar11 + 0x26c) = 0x10001;
    *(undefined2 *)(lVar11 + 0x270) = 1;
    *(undefined8 *)(lVar11 + 0x230) = 1;
    lVar13 = *(long *)(lVar11 + 0x240);
    lVar7 = *(long *)(lVar11 + 0x238);
    lVar16 = *(long *)(lVar11 + 0x250);
    lVar15 = *(long *)(lVar11 + 0x248);
    lVar17 = *(long *)(lVar11 + 600);
    lVar19 = *(long *)(lVar11 + 0x270);
    lVar18 = *(long *)(lVar11 + 0x268);
    param_1[0x34] = *(long *)(lVar11 + 0x260);
    param_1[0x33] = lVar17;
    param_1[0x36] = lVar19;
    param_1[0x35] = lVar18;
    param_1[0x30] = lVar13;
    param_1[0x2f] = lVar7;
    param_1[0x32] = lVar16;
    param_1[0x31] = lVar15;
    lVar7 = *(long *)(lVar11 + 0x218);
    lVar15 = *(long *)(lVar11 + 0x230);
    lVar13 = *(long *)(lVar11 + 0x228);
    param_1[0x2c] = *(long *)(lVar11 + 0x220);
    param_1[0x2b] = lVar7;
    param_1[0x2e] = lVar15;
    param_1[0x2d] = lVar13;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar11 + 0x2d8);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar11 + 0x2e8);
    param_1[0x24] = *(long *)(lVar11 + 0x2f8);
    do {
      puVar4 = (undefined8 *)(lVar11 + 0x318 + lVar14);
      uVar8 = *puVar4;
      puVar5 = (undefined8 *)((long)param_1 + lVar14 + 0x128);
      puVar5[1] = puVar4[1];
      *puVar5 = uVar8;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != 0x30);
  }
  return;
}



/* Entry: 10978b0b8; end: 10978b217;  */

void FUN_10978b0b8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_1[0x58] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  if (param_1[0x6c] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  if (param_1[0x61] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if (param_1[0x5a] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010978b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



/* Entry: 10978b218; end: 10978b31f;  */

int FUN_10978b218(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iStack_44;
  
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *param_3 = param_1;
  uVar1 = param_1;
  FUN_1097539a8(param_1,0x10,0,param_2,0,&iStack_44);
  param_3[2] = uVar1;
  iVar2 = iStack_44;
  if (iStack_44 == 0) {
    uVar1 = param_1;
    FUN_1097539a8(param_1,0x10,0,param_2,0,&iStack_44);
    param_3[3] = uVar1;
    iVar2 = iStack_44;
    if (iStack_44 == 0) {
      uVar1 = param_1;
      FUN_1097539a8(param_1,0x10,0,param_2,0,&iStack_44);
      param_3[4] = uVar1;
      iVar2 = iStack_44;
      if (iStack_44 == 0) {
        FUN_1097539a8(param_1,1,0,param_2,0,&iStack_44);
        param_3[5] = param_1;
        iVar2 = iStack_44;
        if (iStack_44 == 0) {
          param_3[6] = 0;
          *(short *)(param_3 + 1) = (short)param_2;
          *(undefined2 *)((long)param_3 + 10) = 0;
          return 0;
        }
      }
    }
  }
  func_0x00010978b178(param_3);
  return iVar2;
}



/* Entry: 10978b320; end: 10978b42f;  */

void FUN_10978b320(long *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar6 = param_1[0x43];
  lVar4 = lVar6;
  FUN_10978ad6c(lVar6,lVar7,param_1);
  if ((int)lVar4 == 0) {
    *(undefined4 *)(lVar6 + 0x300) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x368) = 0x40;
    *(undefined1 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x378) = 0;
    *(undefined8 *)(lVar6 + 0x370) = 0;
    *(undefined8 *)(lVar6 + 0x3f0) = 0x4000;
    *(undefined1 *)(lVar6 + 0x3e9) = param_2;
    *(undefined4 *)(lVar6 + 400) = 0;
    *(undefined2 *)(lVar6 + 0x1d8) = 0;
    *(undefined8 *)(lVar6 + 0x198) = 0;
    *(undefined8 *)(lVar6 + 0x1a0) = 0;
    *(undefined8 *)(lVar6 + 0x1e8) = 0;
    *(undefined8 *)(lVar6 + 0x1e0) = 0x10000;
    uVar3 = *(undefined8 *)(lVar7 + 0x460);
    uVar5 = *(undefined8 *)(lVar7 + 0x458);
    *(undefined8 *)(lVar6 + 0x318) = uVar3;
    *(undefined8 *)(lVar6 + 800) = uVar5;
    *(undefined8 *)(lVar6 + 0x330) = 0;
    *(undefined8 *)(lVar6 + 0x328) = 0;
    *(undefined8 *)(lVar6 + 0x340) = 0;
    *(undefined8 *)(lVar6 + 0x338) = 0;
    if (*(long *)(lVar7 + 0x458) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined8 *)(lVar6 + 0x280) = uVar3;
      *(undefined8 *)(lVar6 + 0x290) = uVar5;
      *(undefined8 *)(lVar6 + 0x288) = 0;
      *(undefined4 *)(lVar6 + 0x27c) = 1;
      lVar4 = lVar6;
      (**(code **)(lVar7 + 0x488))();
      *(int *)(param_1 + 0x44) = (int)lVar4;
      if ((int)lVar4 != 0) {
        return;
      }
    }
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar6 + 0x2d8);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar6 + 0x2e8);
    param_1[0x24] = *(long *)(lVar6 + 0x2f8);
    do {
      puVar1 = (undefined8 *)(lVar6 + 0x318 + lVar4);
      uVar3 = *puVar1;
      puVar2 = (undefined8 *)((long)param_1 + lVar4 + 0x128);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar3;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x30);
  }
  return;
}



/* Entry: 10978b430; end: 10978b4eb;  */

void FUN_10978b430(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0xb8);
  if (param_1[0x43] != 0) {
    FUN_10978b0b8();
    param_1[0x43] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (param_1[0x3a] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  func_0x00010978b178(param_1 + 0x3b);
  if (param_1[0x21] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x21] = 0;
  if (param_1[0x23] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x44] = -1;
  return;
}



/* Entry: 10978b4ec; end: 10978b55f;  */

void FUN_10978b4ec(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((long)param_1 + 100);
  lVar2 = param_1[8] - (long)(int)param_1[0xc];
  param_1[0xe] = lVar2;
  param_1[0xf] = 0;
  param_1[0x10] = lVar2 + iVar1;
  param_1[0x11] = 0;
  lVar2 = param_1[0xb] + (long)(int)param_1[0x26];
  param_1[0x27] = 0;
  param_1[0x28] = lVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = lVar2 - *(int *)((long)param_1 + 0x134);
  if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) && (lVar2 = param_1[0x22], lVar2 != 0)
       ) && (*(char *)(lVar2 + 0x449) != '\0')) && (*(char *)(lVar2 + 0x44e) != '\0')) {
    lVar2 = (long)((ulong)(uint)(iVar1 - (iVar1 >> 0x1f)) << 0x20) >> 0x21;
    param_1[0x27] = lVar2;
    param_1[0x29] = lVar2;
  }
  return;
}



/* Entry: 10978b560; end: 10978c4fb;  */

ushort * FUN_10978b560(long *param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ushort *puVar17;
  long lVar18;
  ushort *puVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  ushort *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  ushort *puVar32;
  ushort *puVar33;
  ulong uVar34;
  uint uVar35;
  ushort *puVar36;
  uint *puVar37;
  ulong uVar38;
  long lVar39;
  long *plVar40;
  ushort *puVar41;
  undefined8 uVar42;
  long lVar43;
  ushort *puStack_e0;
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  uint uStack_74;
  uint uStack_70;
  uint auStack_6c [3];
  
  lVar39 = *param_1;
  puVar33 = *(ushort **)(lVar39 + 0xc0);
  plVar40 = *(long **)(puVar33 + 0x1c);
  uVar35 = *(uint *)(param_1 + 5);
  uVar34 = (ulong)*(ushort *)(param_2 + 2);
  puVar37 = *(uint **)(lVar39 + 0x4c0);
  uStack_74 = 0;
  if (*(char *)(lVar39 + 0x4b9) == '\0' || puVar37 == (uint *)0x0) {
    return (ushort *)0x6;
  }
  lVar43 = uVar34 + 4;
  plVar13 = *(long **)(param_2 + 8);
  plVar12 = param_3;
  lVar26 = lVar43;
  do {
    lVar21 = *plVar13;
    plVar12[1] = plVar13[1] << 6;
    *plVar12 = lVar21 << 6;
    lVar26 = lVar26 + -1;
    plVar13 = plVar13 + 2;
    plVar12 = plVar12 + 2;
  } while (lVar26 != 0);
  if (puVar37[0x1e] <= uVar35) {
    return (ushort *)0x0;
  }
  uVar38 = *(ulong *)(*(long *)(puVar37 + 0x20) + (ulong)uVar35 * 8);
  uVar27 = *(long *)(*(long *)(puVar37 + 0x20) + (ulong)(uVar35 + 1) * 8) - uVar38;
  if (uVar27 == 0) {
    return (ushort *)0x0;
  }
  if (*(code **)(puVar33 + 0x14) == (code *)0x0) {
    if (*(ulong *)(puVar33 + 4) < uVar38) {
      return (ushort *)0x55;
    }
  }
  else {
    puVar17 = puVar33;
    (**(code **)(puVar33 + 0x14))(puVar33,uVar38,0,0);
    if (puVar17 != (ushort *)0x0) {
      return (ushort *)0x55;
    }
  }
  *(ulong *)(puVar33 + 8) = uVar38;
  puVar17 = puVar33;
  func_0x00010975780c(puVar33,uVar27);
  if ((int)puVar17 != 0) {
    return puVar17;
  }
  puVar32 = puVar33 + 0x20;
  puVar17 = *(ushort **)puVar32;
  uVar38 = *(ulong *)(puVar33 + 0x24);
  if ((long)puVar17 + 1U < uVar38) {
    uVar35 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
    puVar41 = puVar17 + 1;
  }
  else {
    uVar35 = 0;
    puVar41 = puVar17;
  }
  lVar26 = *(long *)puVar33;
  *(ushort **)puVar32 = puVar41;
  if ((long)puVar41 + 1U < uVar38) {
    uVar30 = (ulong)((uint)(*puVar41 >> 8) | (*puVar41 & 0xff00ff) << 8);
    *(ushort **)puVar32 = puVar41 + 1;
    puVar41 = puVar41 + 1;
    if (uVar30 <= uVar27) goto LAB_10978b6ec;
  }
  else {
    uVar30 = 0;
LAB_10978b6ec:
    uVar2 = uVar35 & 0xfff;
    if (uVar2 << 2 <= uVar27) {
      uStack_a0 = (long)puVar17 + (uVar30 - lVar26);
      if (uVar35 >> 0xf == 0) {
        puVar17 = (ushort *)0x0;
      }
      else {
        uVar27 = lVar26 + uStack_a0;
        if (uVar38 - lVar26 <= uStack_a0) {
          uVar27 = uVar38;
        }
        *(ulong *)(puVar33 + 0x20) = uVar27;
        puVar17 = puVar33;
        FUN_109788a2c(puVar33,&uStack_74);
        lVar18 = *(long *)puVar33;
        uStack_a0 = *(long *)(puVar33 + 0x20) - lVar18;
        lVar21 = lVar18 + ((long)puVar41 - lVar26);
        if ((ulong)(*(long *)(puVar33 + 0x24) - lVar18) <= (ulong)((long)puVar41 - lVar26)) {
          lVar21 = *(long *)(puVar33 + 0x24);
        }
        *(long *)(puVar33 + 0x20) = lVar21;
      }
      uVar35 = *puVar37;
      if (uVar35 == 0) {
        plStack_b0 = (long *)0x0;
LAB_10978b7b8:
        auStack_6c[0] = 0;
        uVar35 = (uint)lVar43;
        plStack_98 = plVar40;
        FUN_1097539a8(plVar40,8,0,uVar35 << 1,0,auStack_6c);
        puVar41 = (ushort *)(ulong)auStack_6c[0];
        if (auStack_6c[0] == 0) {
          plVar13 = plVar40;
          (*(code *)plVar40[1])(plVar40,lVar43 * 0x10);
          if (plVar13 == (long *)0x0) {
            plVar12 = (long *)0x0;
            plStack_a8 = (long *)0x0;
            plVar13 = (long *)0x0;
            puVar41 = (ushort *)0x40;
          }
          else {
            plStack_a8 = plVar40;
            (*(code *)plVar40[1])(plVar40,lVar43 * 0x10);
            if (plStack_a8 == (long *)0x0) {
              plStack_a8 = (long *)0x0;
            }
            else {
              plVar12 = plVar40;
              (*(code *)plVar40[1])(plVar40,lVar43);
              uVar7 = uStack_74;
              if (plVar12 != (long *)0x0) {
                lVar26 = 0;
                auStack_6c[0] = 0;
                uVar3 = *puVar37;
                lVar21 = *(long *)(param_2 + 8);
                do {
                  plVar14 = (long *)(lVar21 + lVar26);
                  lVar18 = *plVar14;
                  ((long *)((long)plVar13 + lVar26))[1] = plVar14[1] << 0x10;
                  *(long *)((long)plVar13 + lVar26) = lVar18 << 0x10;
                  lVar26 = lVar26 + 0x10;
                } while (uVar34 * 0x10 + 0x40 != lVar26);
                if (uVar2 != 0) {
                  uVar20 = 0;
                  puVar1 = (ulong *)(plStack_b0 + uVar3);
                  puStack_e0 = (ushort *)0x0;
                  puVar41 = *(ushort **)(puVar33 + 0x20);
                  puVar36 = *(ushort **)(puVar33 + 0x24);
                  lVar26 = uVar34 * 8 + 0x20;
                  do {
                    if ((ushort *)((long)puVar41 + 1U) < puVar36) {
                      uVar27 = (ulong)((uint)(*puVar41 >> 8) | (*puVar41 & 0xff00ff) << 8);
                      puVar41 = puVar41 + 1;
                    }
                    else {
                      uVar27 = 0;
                    }
                    *(ushort **)puVar32 = puVar41;
                    if ((ushort *)((long)puVar41 + 1U) < puVar36) {
                      puVar10 = puVar41 + 1;
                      bVar5 = (byte)*puVar41;
                      uVar31 = (uint)CONCAT11(bVar5,*(byte *)((long)puVar41 + 1));
                      *(ushort **)puVar32 = puVar10;
                      if (-1 < (char)bVar5) goto LAB_10978b940;
                      uVar38 = (ulong)*puVar37;
                      plVar14 = plStack_b0;
                      puVar41 = puVar10;
                      if (*puVar37 != 0) {
                        lVar21 = 0;
                        do {
                          if ((ushort *)((long)puVar10 + 1U) < puVar36) {
                            uVar4 = *puVar10 & 0xff00ff;
                            uVar30 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                     (ulong)((uint)(*puVar10 >> 8) | uVar4 << 8) << 2;
                            puVar10 = puVar10 + 1;
                          }
                          else {
                            uVar30 = 0;
                          }
                          *(ushort **)puVar32 = puVar10;
                          *(ulong *)((long)plStack_b0 + lVar21) = uVar30;
                          lVar21 = lVar21 + 8;
                        } while (uVar38 * 8 - lVar21 != 0);
                        bVar8 = false;
                        puVar41 = puVar10;
                        if ((bVar5 & 0x40) == 0) goto LAB_10978b9f4;
LAB_10978b970:
                        puVar41 = puVar10;
                        if (!bVar8) {
                          uVar30 = uVar38;
                          puVar22 = puVar1;
                          if (uVar38 < 2) {
                            uVar30 = 1;
                          }
                          do {
                            if ((ushort *)((long)puVar10 + 1U) < puVar36) {
                              uVar4 = *puVar10 & 0xff00ff;
                              uVar28 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                       (ulong)((uint)(*puVar10 >> 8) | uVar4 << 8) << 2;
                              puVar10 = puVar10 + 1;
                            }
                            else {
                              uVar28 = 0;
                            }
                            *(ushort **)puVar32 = puVar10;
                            *puVar22 = uVar28;
                            uVar30 = uVar30 - 1;
                            puVar22 = puVar22 + 1;
                          } while (uVar30 != 0);
                          puVar22 = puVar1 + uVar3;
                          puVar41 = puVar10;
                          if ((int)uVar38 != 0) {
                            do {
                              if ((ushort *)((long)puVar10 + 1U) < puVar36) {
                                uVar4 = *puVar10 & 0xff00ff;
                                uVar30 = -(ulong)(uVar4 >> 7) & 0xfffffffffffc0000 |
                                         (ulong)((uint)(*puVar10 >> 8) | uVar4 << 8) << 2;
                                puVar10 = puVar10 + 1;
                              }
                              else {
                                uVar30 = 0;
                              }
                              *(ushort **)puVar32 = puVar10;
                              *puVar22 = uVar30;
                              uVar38 = uVar38 - 1;
                              puVar22 = puVar22 + 1;
                              puVar41 = puVar10;
                            } while (uVar38 != 0);
                          }
                        }
                      }
                    }
                    else {
                      uVar31 = 0;
                      puVar10 = puVar41;
LAB_10978b940:
                      if (puVar37[0x1a] <= (uVar31 & 0xfff)) {
                        puVar41 = (ushort *)0x8;
                        goto LAB_10978bee8;
                      }
                      uVar4 = *puVar37;
                      uVar38 = (ulong)uVar4;
                      plVar14 = (long *)(*(long *)(puVar37 + 0x1c) +
                                        (ulong)(uVar4 * (uVar31 & 0xfff)) * 8);
                      bVar8 = uVar4 == 0;
                      puVar41 = puVar10;
                      if ((uVar31 >> 0xe & 1) != 0) goto LAB_10978b970;
                    }
LAB_10978b9f4:
                    puVar9 = puVar37;
                    FUN_109788b90(puVar37,uVar31,plVar14,puVar1,puVar1 + uVar3);
                    if (puVar9 != (uint *)0x0) {
                      lVar21 = *(long *)puVar33;
                      puVar10 = (ushort *)(lVar21 + uStack_a0);
                      if ((ulong)((long)puVar36 - lVar21) <= uStack_a0) {
                        puVar10 = puVar36;
                      }
                      *(ushort **)(puVar33 + 0x20) = puVar10;
                      if ((uVar31 >> 0xd & 1) == 0) {
                        uStack_70 = uVar7;
                        puVar36 = puVar17;
                      }
                      else {
                        puVar36 = puVar33;
                        FUN_109788a2c(puVar33,&uStack_70);
                        puStack_e0 = puVar36;
                      }
                      uVar4 = uStack_70;
                      uVar31 = uVar35;
                      if (uStack_70 != 0) {
                        uVar31 = uStack_70;
                      }
                      puVar10 = puVar33;
                      FUN_109788c70();
                      puVar11 = puVar33;
                      FUN_109788c70(puVar33,uVar31);
                      if (((puVar36 != (ushort *)0x0) && (puVar11 != (ushort *)0x0)) &&
                         (puVar10 != (ushort *)0x0)) {
                        if (puVar36 == (ushort *)0xffffffffffffffff) {
                          lVar18 = 0;
                          do {
                            lVar15 = *(long *)((long)plStack_98 + lVar18 + lVar26);
                            lVar25 = *(long *)((long)puVar10 + lVar18) * (long)puVar9;
                            lVar29 = *(long *)((long)puVar11 + lVar18) * (long)puVar9;
                            *(long *)((long)plStack_98 + lVar18) =
                                 *(long *)((long)plStack_98 + lVar18) +
                                 (lVar25 + (lVar25 >> 0x3f) + 0x8000 >> 0x10);
                            *(long *)((long)plStack_98 + lVar18 + lVar26) =
                                 lVar15 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
                            lVar18 = lVar18 + 8;
                          } while (lVar26 != lVar18);
                        }
                        else {
                          lVar15 = 0;
                          lVar18 = 0;
                          do {
                            *(undefined1 *)((long)plVar12 + lVar18) = 0;
                            uVar42 = *(undefined8 *)((long)plVar13 + lVar15);
                            ((undefined8 *)((long)plStack_a8 + lVar15))[1] =
                                 ((undefined8 *)((long)plVar13 + lVar15))[1];
                            *(undefined8 *)((long)plStack_a8 + lVar15) = uVar42;
                            lVar18 = lVar18 + 1;
                            lVar15 = lVar15 + 0x10;
                          } while (lVar43 != lVar18);
                          if (uVar4 != 0) {
                            uVar38 = (ulong)uVar4;
                            puVar19 = puVar10;
                            puVar23 = puVar11;
                            do {
                              uVar6 = *puVar36;
                              if (uVar6 < uVar35) {
                                *(undefined1 *)((long)plVar12 + (ulong)uVar6) = 1;
                                plVar14 = plStack_a8 + (ulong)uVar6 * 2;
                                *plVar14 = *plVar14 +
                                           (*(long *)puVar19 * (long)puVar9 +
                                            (*(long *)puVar19 * (long)puVar9 >> 0x3f) + 0x8000 >>
                                           0x10);
                                plVar14[1] = plVar14[1] +
                                             (*(long *)puVar23 * (long)puVar9 +
                                              (*(long *)puVar23 * (long)puVar9 >> 0x3f) + 0x8000 >>
                                             0x10);
                              }
                              puVar23 = puVar23 + 4;
                              puVar19 = puVar19 + 4;
                              uVar38 = uVar38 - 1;
                              puVar36 = puVar36 + 1;
                            } while (uVar38 != 0);
                          }
                          FUN_10978c758(param_2);
                          plVar16 = plStack_a8 + 1;
                          plVar14 = plVar13 + 1;
                          plVar24 = plStack_98;
                          lVar18 = lVar43;
                          do {
                            lVar29 = *plVar24;
                            lVar15 = plVar16[-1];
                            lVar25 = plVar14[-1];
                            plVar24[uVar34 + 4] = (*plVar16 + plVar24[uVar34 + 4]) - *plVar14;
                            *plVar24 = (lVar15 + lVar29) - lVar25;
                            plVar14 = plVar14 + 2;
                            plVar16 = plVar16 + 2;
                            lVar18 = lVar18 + -1;
                            plVar24 = plVar24 + 1;
                          } while (lVar18 != 0);
                        }
                      }
                      if (puStack_e0 == (ushort *)0xffffffffffffffff) {
                        puStack_e0 = (ushort *)0xffffffffffffffff;
                      }
                      else {
                        if (puStack_e0 != (ushort *)0x0) {
                          (*(code *)plVar40[2])();
                        }
                        puStack_e0 = (ushort *)0x0;
                      }
                      if (puVar10 != (ushort *)0x0) {
                        (*(code *)plVar40[2])(plVar40,puVar10);
                      }
                      if (puVar11 != (ushort *)0x0) {
                        (*(code *)plVar40[2])(plVar40,puVar11);
                      }
                      uVar38 = (long)puVar41 - lVar21;
                      puVar36 = *(ushort **)(puVar33 + 0x24);
                      puVar41 = (ushort *)(*(long *)puVar33 + uVar38);
                      if ((ulong)((long)puVar36 - *(long *)puVar33) <= uVar38) {
                        puVar41 = puVar36;
                      }
                      *(ushort **)(puVar33 + 0x20) = puVar41;
                    }
                    uStack_a0 = uVar27 + uStack_a0;
                    uVar20 = uVar20 + 1;
                  } while (uVar20 != uVar2);
                }
                uVar35 = *(uint *)(lVar39 + 0x4c8);
                if ((uVar35 >> 1 & 1) != 0) {
                  (plStack_98 + uVar34)[1] = 0;
                  plStack_98[uVar34] = 0;
                  (plStack_98 + lVar43 + uVar34)[1] = 0;
                  plStack_98[lVar43 + uVar34] = 0;
                }
                if ((uVar35 >> 4 & 1) != 0) {
                  (plStack_98 + uVar34 + 2)[1] = 0;
                  plStack_98[uVar34 + 2] = 0;
                  (plStack_98 + lVar43 + uVar34 + 2)[1] = 0;
                  plStack_98[lVar43 + uVar34 + 2] = 0;
                }
                lVar26 = 0;
                lVar43 = uVar34 * 8 + 0x20;
                lVar21 = *(long *)(param_2 + 8);
                plVar14 = (long *)(lVar21 + 8);
                plVar16 = param_3 + 1;
                do {
                  plVar16[-1] = plVar16[-1] + (*(long *)((long)plStack_98 + lVar26) + 0x200 >> 10);
                  *plVar16 = *plVar16 +
                             (*(long *)((long)plStack_98 + lVar26 + lVar43) + 0x200 >> 10);
                  plVar14[-1] = plVar14[-1] +
                                ((*(long *)((long)plStack_98 + lVar26) << 0x20) + 0x800000000000 >>
                                0x30);
                  *plVar14 = *plVar14 +
                             ((*(long *)((long)plStack_98 + lVar26 + lVar43) << 0x20) +
                              0x800000000000 >> 0x30);
                  lVar26 = lVar26 + 8;
                  plVar14 = plVar14 + 2;
                  plVar16 = plVar16 + 2;
                } while (lVar43 != lVar26);
                if ((uVar35 >> 1 & 1) == 0) {
                  plVar14 = (long *)(lVar21 + uVar34 * 0x10);
                  lVar43 = *plVar14;
                  param_1[0xf] = plVar14[1];
                  param_1[0xe] = lVar43;
                  plVar14 = (long *)(*(long *)(param_2 + 8) + uVar34 * 0x10 + 0x10);
                  lVar43 = *plVar14;
                  param_1[0x11] = plVar14[1];
                  param_1[0x10] = lVar43;
                  *(int *)(param_1 + 0xd) =
                       (int)((param_3[uVar34 * 2 + 2] - param_3[uVar34 * 2]) + 0x20U >> 6);
                  uVar35 = *(uint *)(lVar39 + 0x4c8);
                }
                puVar41 = (ushort *)0x0;
                if ((uVar35 >> 4 & 1) == 0) {
                  plVar14 = (long *)(*(long *)(param_2 + 8) + uVar34 * 0x10 + 0x20);
                  lVar39 = *plVar14;
                  param_1[0x28] = plVar14[1];
                  param_1[0x27] = lVar39;
                  plVar14 = (long *)(*(long *)(param_2 + 8) + uVar34 * 0x10 + 0x30);
                  lVar39 = *plVar14;
                  param_1[0x2a] = plVar14[1];
                  param_1[0x29] = lVar39;
                  *(int *)((long)param_1 + 0x134) =
                       (int)((param_3[uVar34 * 2 + 7] - param_3[uVar34 * 2 + 5]) + 0x20U >> 6);
                }
                goto LAB_10978bee8;
              }
            }
            puVar41 = (ushort *)0x40;
            plVar12 = (long *)0x0;
          }
        }
        else {
          plVar12 = (long *)0x0;
          plStack_a8 = (long *)0x0;
          plVar13 = (long *)0x0;
        }
      }
      else if (uVar35 * 3 >> 0x1c == 0) {
        plStack_b0 = plVar40;
        (*(code *)plVar40[1])(plVar40,uVar35 * 0x18);
        if (plStack_b0 != (long *)0x0) goto LAB_10978b7b8;
        plStack_b0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        plVar12 = (long *)0x0;
        plStack_a8 = (long *)0x0;
        plVar13 = (long *)0x0;
        puVar41 = (ushort *)0x40;
      }
      else {
        plStack_b0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        plVar12 = (long *)0x0;
        plStack_a8 = (long *)0x0;
        plVar13 = (long *)0x0;
        puVar41 = (ushort *)0xa;
      }
LAB_10978bee8:
      if (1 < (long)puVar17 + 1U) {
        (*(code *)plVar40[2])(plVar40,puVar17);
      }
      if (plVar13 != (long *)0x0) {
        (*(code *)plVar40[2])(plVar40,plVar13);
      }
      if (plStack_a8 != (long *)0x0) {
        (*(code *)plVar40[2])(plVar40,plStack_a8);
      }
      if (plVar12 != (long *)0x0) {
        (*(code *)plVar40[2])();
      }
      if (plStack_b0 != (long *)0x0) {
        (*(code *)plVar40[2])(plVar40,plStack_b0);
      }
      if (plStack_98 != (long *)0x0) {
        (*(code *)plVar40[2])();
      }
      goto LAB_10978bf8c;
    }
  }
  puVar41 = (ushort *)0x8;
LAB_10978bf8c:
  if (*(long *)(puVar33 + 0x14) != 0) {
    if (*(long *)puVar33 != 0) {
      (**(code **)(*(long *)(puVar33 + 0x1c) + 0x10))();
    }
    puVar33[0] = 0;
    puVar33[1] = 0;
    puVar33[2] = 0;
    puVar33[3] = 0;
  }
  puVar32[0] = 0;
  puVar32[1] = 0;
  puVar32[2] = 0;
  puVar32[3] = 0;
  puVar33[0x24] = 0;
  puVar33[0x25] = 0;
  puVar33[0x26] = 0;
  puVar33[0x27] = 0;
  return puVar41;
}



/* Entry: 10978c4fc; end: 10978c757;  */

/* WARNING: Removing unreachable block (ram,0x00010978cb50) */

void FUN_10978c4fc(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack_54;
  
  lVar8 = param_1[3];
  uVar7 = param_1[6];
  uVar2 = *(ushort *)(lVar8 + 0x1a);
  iVar1 = uVar2 + 4;
  if (*(uint *)(lVar8 + 8) < (uint)*(ushort *)(lVar8 + 0x62) + (uint)uVar2 + iVar1) {
    lVar11 = lVar8;
    FUN_109753a7c(lVar8,iVar1,0);
    if ((int)lVar11 != 0) {
      return;
    }
    uVar2 = *(ushort *)(lVar8 + 0x1a);
  }
  lVar11 = param_1[0xe];
  plVar6 = (long *)(*(long *)(lVar8 + 0x20) + (ulong)uVar2 * 0x10);
  plVar6[1] = param_1[0xf];
  *plVar6 = lVar11;
  lVar11 = *(long *)(lVar8 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x1a) * 0x10;
  lVar12 = param_1[0x10];
  *(long *)(lVar11 + 0x18) = param_1[0x11];
  *(long *)(lVar11 + 0x10) = lVar12;
  lVar11 = *(long *)(lVar8 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x1a) * 0x10;
  lVar12 = param_1[0x27];
  *(long *)(lVar11 + 0x28) = param_1[0x28];
  *(long *)(lVar11 + 0x20) = lVar12;
  lVar8 = *(long *)(lVar8 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x1a) * 0x10;
  lVar11 = param_1[0x29];
  *(long *)(lVar8 + 0x38) = param_1[0x2a];
  *(long *)(lVar8 + 0x30) = lVar11;
  lVar11 = param_1[0x22];
  lVar8 = *(long *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x2c8) != 0) {
    if (*(long *)(lVar11 + 0x2d0) != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    *(undefined8 *)(lVar11 + 0x2d0) = 0;
  }
  *(undefined4 *)(lVar11 + 0x2c8) = 0;
  uVar10 = param_1[0x24];
  if (*(code **)(uVar7 + 0x28) == (code *)0x0) {
    if (*(ulong *)(uVar7 + 8) < uVar10) {
      return;
    }
  }
  else {
    uVar3 = uVar7;
    (**(code **)(uVar7 + 0x28))(uVar7,uVar10,0,0);
    if (uVar3 != 0) {
      return;
    }
  }
  *(ulong *)(uVar7 + 0x10) = uVar10;
  iStack_54 = 0;
  uVar10 = uVar7;
  func_0x000109757520(uVar7,&iStack_54);
  if (((iStack_54 != 0) || (uVar9 = (uint)uVar10, uVar9 == 0)) || (*(uint *)(param_1 + 7) < uVar9))
  {
    return;
  }
  (**(code **)(lVar8 + 8))(lVar8,uVar10 & 0xffffffff);
  if (lVar8 == 0) {
    *(undefined8 *)(lVar11 + 0x2d0) = 0;
    return;
  }
  *(long *)(lVar11 + 0x2d0) = lVar8;
  FUN_109757778(uVar7,*(undefined8 *)(uVar7 + 0x10),lVar8,uVar10 & 0xffffffff);
  if ((int)uVar7 == 0) {
    *(uint *)(lVar11 + 0x2c8) = uVar9;
    lVar5 = param_1[3];
    uVar2 = *(ushort *)(lVar5 + 0x1a);
    *(ushort *)((long)param_1 + 0xdc) = (uVar2 - (short)param_2) + 4;
    *(short *)((long)param_1 + 0xde) = *(short *)(lVar5 + 0x18) - (short)param_3;
    lVar11 = *(long *)(lVar5 + 0x48);
    lVar8 = *(long *)(lVar5 + 0x20);
    lVar12 = *(long *)(lVar5 + 0x28);
    param_1[0x1c] = *(long *)(lVar5 + 0x40) + (ulong)param_2 * 0x10;
    param_1[0x1d] = lVar8 + (ulong)param_2 * 0x10;
    param_1[0x1e] = lVar11 + (ulong)param_2 * 0x10;
    param_1[0x1f] = lVar12 + (ulong)param_2;
    param_1[0x20] = *(long *)(lVar5 + 0x30) + (ulong)param_3 * 2;
    *(short *)(param_1 + 0x21) = (short)param_2;
    if ((uint)uVar2 != (param_2 & 0xffff)) {
      uVar7 = 0;
      do {
        *(byte *)(param_1[0x1f] + uVar7) = *(byte *)(param_1[0x1f] + uVar7) & 0xe7;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)((long)param_1 + 0xdc) - 4);
    }
    lVar8 = *(long *)(*param_1 + 0xb0);
    plVar6 = (long *)param_1[0x22];
    uVar9 = *(uint *)(plVar6 + 0x59);
    if (uVar9 != 0) {
      _memcpy(param_1[0x1c],param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4);
    }
    lVar11 = param_1[1];
    lVar12 = *(long *)(lVar11 + 0x158);
    lVar13 = *(long *)(lVar11 + 0x170);
    lVar5 = *(long *)(lVar11 + 0x168);
    plVar6[0x44] = *(long *)(lVar11 + 0x160);
    plVar6[0x43] = lVar12;
    plVar6[0x46] = lVar13;
    plVar6[0x45] = lVar5;
    lVar5 = *(long *)(lVar11 + 0x180);
    lVar12 = *(long *)(lVar11 + 0x178);
    lVar14 = *(long *)(lVar11 + 400);
    lVar13 = *(long *)(lVar11 + 0x188);
    lVar15 = *(long *)(lVar11 + 0x198);
    lVar17 = *(long *)(lVar11 + 0x1b0);
    lVar16 = *(long *)(lVar11 + 0x1a8);
    plVar6[0x4c] = *(long *)(lVar11 + 0x1a0);
    plVar6[0x4b] = lVar15;
    plVar6[0x4e] = lVar17;
    plVar6[0x4d] = lVar16;
    plVar6[0x48] = lVar5;
    plVar6[0x47] = lVar12;
    plVar6[0x4a] = lVar14;
    plVar6[0x49] = lVar13;
    plVar6[0x33] = 0x10000;
    plVar6[0x34] = 0x10000;
    _memcpy(param_1[0x1e],param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4);
    lVar11 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
    *(ulong *)(lVar11 + -0x40) = *(long *)(lVar11 + -0x40) + 0x20U & 0xffffffffffffffc0;
    *(ulong *)(lVar11 + -0x30) = *(long *)(lVar11 + -0x30) + 0x20U & 0xffffffffffffffc0;
    *(ulong *)(lVar11 + -0x18) = *(long *)(lVar11 + -0x18) + 0x20U & 0xffffffffffffffc0;
    *(ulong *)(lVar11 + -8) = *(long *)(lVar11 + -8) + 0x20U & 0xffffffffffffffc0;
    if (uVar9 != 0) {
      plVar6[0x67] = plVar6[0x5a];
      plVar6[0x68] = (ulong)uVar9;
      *(undefined1 *)(plVar6 + 0x7d) = 1;
      plVar4 = plVar6 + 0x21;
      lVar12 = param_1[0x1f];
      lVar11 = param_1[0x1e];
      lVar13 = param_1[0x21];
      lVar5 = param_1[0x20];
      lVar17 = param_1[0x1b];
      lVar16 = param_1[0x1a];
      lVar15 = param_1[0x1d];
      lVar14 = param_1[0x1c];
      plVar6[0x26] = lVar12;
      plVar6[0x25] = lVar11;
      plVar6[0x28] = lVar13;
      plVar6[0x27] = lVar5;
      plVar6[0x22] = lVar17;
      *plVar4 = lVar16;
      plVar6[0x24] = lVar15;
      plVar6[0x23] = lVar14;
      plVar6[0x50] = plVar6[0x5a];
      plVar6[0x52] = (ulong)uVar9;
      plVar6[0x51] = 0;
      *(undefined4 *)((long)plVar6 + 0x27c) = 3;
      plVar6[10] = lVar17;
      plVar6[9] = lVar16;
      plVar6[0xc] = lVar15;
      plVar6[0xb] = lVar14;
      plVar6[0xe] = lVar12;
      plVar6[0xd] = lVar11;
      plVar6[0x10] = lVar13;
      plVar6[0xf] = lVar5;
      plVar6[0x18] = plVar6[0x28];
      plVar6[0x17] = plVar6[0x27];
      plVar6[0x16] = plVar6[0x26];
      plVar6[0x15] = plVar6[0x25];
      plVar6[0x14] = plVar6[0x24];
      plVar6[0x13] = plVar6[0x23];
      plVar6[0x12] = plVar6[0x22];
      plVar6[0x11] = *plVar4;
      plVar6[0x20] = plVar6[0x28];
      plVar6[0x1f] = plVar6[0x27];
      plVar6[0x1e] = plVar6[0x26];
      plVar6[0x1d] = plVar6[0x25];
      plVar6[0x1c] = plVar6[0x24];
      plVar6[0x1b] = plVar6[0x23];
      plVar6[0x1a] = plVar6[0x22];
      plVar6[0x19] = *plVar4;
      *(undefined4 *)((long)plVar6 + 0x26c) = 0x10001;
      *(undefined2 *)(plVar6 + 0x4e) = 1;
      *(undefined4 *)((long)plVar6 + 0x222) = 0x4000;
      *(undefined4 *)((long)plVar6 + 0x226) = *(undefined4 *)((long)plVar6 + 0x222);
      *(undefined4 *)((long)plVar6 + 0x21e) = *(undefined4 *)((long)plVar6 + 0x222);
      *(undefined4 *)(plVar6 + 0x48) = 1;
      plVar6[0x46] = 1;
      plVar6[4] = 0;
      *(undefined4 *)(plVar6 + 0x60) = 0;
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x488))();
      if (((int)plVar4 != 0) && (*(char *)((long)plVar6 + 0x3e9) != '\0')) {
        return;
      }
      **(byte **)(param_1[3] + 0x70) = **(byte **)(param_1[3] + 0x70) | (char)plVar6[0x4d] << 5 | 4;
    }
    if ((*(int *)(lVar8 + 0x78) != 0x28) || (*(char *)((long)plVar6 + 1099) == '\0')) {
      lVar8 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
      lVar11 = *(long *)(lVar8 + -0x40);
      param_1[0xf] = *(long *)(lVar8 + -0x38);
      param_1[0xe] = lVar11;
      lVar11 = *(long *)(lVar8 + -0x30);
      param_1[0x11] = *(long *)(lVar8 + -0x28);
      param_1[0x10] = lVar11;
      lVar11 = *(long *)(lVar8 + -0x20);
      param_1[0x28] = *(long *)(lVar8 + -0x18);
      param_1[0x27] = lVar11;
      lVar11 = *(long *)(lVar8 + -0x10);
      param_1[0x2a] = *(long *)(lVar8 + -8);
      param_1[0x29] = lVar11;
    }
    return;
  }
  return;
}



/* Entry: 10978c758; end: 10978c9b3;  */

void FUN_10978c758(ushort *param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  
  if (*param_1 != 0) {
    uVar14 = 0;
    sVar20 = 0;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 0xc) + (long)sVar20 * 2);
      uVar16 = (ulong)uVar4;
      iVar13 = (int)uVar14;
      uVar17 = uVar14;
      if (iVar13 <= (int)(uint)uVar4) {
        lVar11 = 0;
        lVar9 = (long)iVar13;
        uVar15 = (uint)uVar4;
        lVar12 = -(lVar9 << 0x20);
LAB_10978c7e8:
        if (*(char *)(param_4 + iVar13 + lVar11) == '\0') goto code_r0x00010978c7f0;
        uVar2 = lVar11 + (uVar14 & 0xffffffff);
        iVar10 = (int)uVar2;
        if (iVar10 < (int)uVar15) {
          uVar6 = uVar2;
          uVar18 = uVar2;
          uVar19 = 0x100000000 - lVar12 >> 0x20;
          do {
            if (*(char *)(param_4 + uVar19) != '\0') {
              FUN_10978c9b4((int)uVar18 + 1,uVar6,uVar18,uVar19,param_3,param_2);
              uVar18 = uVar19;
            }
            uVar17 = uVar19 + 1;
            bVar1 = (long)uVar19 < (long)uVar16;
            uVar6 = uVar19;
            uVar19 = uVar17;
          } while (bVar1);
          if ((iVar13 - (int)uVar18) + (int)lVar11 != 0) {
            FUN_10978c9b4((int)uVar18 + 1,uVar16,uVar18,uVar2,param_3,param_2);
            if (0 < lVar9 + lVar11) {
              FUN_10978c9b4(uVar14 & 0xffffffff,iVar13 + (int)lVar11 + -1,uVar18,uVar2,param_3,
                            param_2);
            }
            goto LAB_10978c980;
          }
        }
        else {
          uVar17 = uVar2 + 1;
        }
        lVar11 = -lVar12 >> 0x1c;
        plVar7 = (long *)(param_2 + lVar11);
        plVar3 = (long *)(param_3 + lVar11);
        lVar11 = plVar7[1];
        lVar8 = plVar3[1];
        lVar5 = *plVar7 - *plVar3;
        if (lVar5 != 0 || lVar11 != lVar8) {
          lVar12 = -lVar12 >> 0x20;
          lVar11 = lVar11 - lVar8;
          if (iVar13 < iVar10) {
            lVar8 = lVar12 - lVar9;
            plVar7 = (long *)(param_2 + 8 + lVar9 * 0x10);
            do {
              plVar7[-1] = plVar7[-1] + lVar5;
              *plVar7 = *plVar7 + lVar11;
              plVar7 = plVar7 + 2;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (iVar10 < (int)uVar15) {
            lVar9 = uVar16 - lVar12;
            plVar7 = (long *)(param_2 + 0x18 + lVar12 * 0x10);
            do {
              plVar7[-1] = plVar7[-1] + lVar5;
              *plVar7 = *plVar7 + lVar11;
              plVar7 = plVar7 + 2;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
      }
LAB_10978c980:
      uVar14 = uVar17;
      sVar20 = sVar20 + 1;
    } while ((int)sVar20 < (int)(uint)*param_1);
  }
  return;
code_r0x00010978c7f0:
  lVar11 = lVar11 + 1;
  lVar12 = lVar12 + -0x100000000;
  uVar17 = (ulong)(uVar15 + 1);
  if (~uVar16 + (long)iVar13 + lVar11 == 0) goto LAB_10978c980;
  goto LAB_10978c7e8;
}



/* Entry: 10978c9b4; end: 10978cac7;  */

void FUN_10978c9b4(ulong param_1,int param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  
  if ((int)param_1 <= param_2) {
    lVar16 = 0;
    uVar12 = -(param_1 >> 0x1f & 1) & 0xfffffff000000000 | (param_1 & 0xffffffff) << 4;
    bVar6 = true;
    do {
      bVar14 = bVar6;
      lVar1 = param_5 + lVar16 * 8;
      lVar2 = param_6 + lVar16 * 8;
      lVar13 = *(long *)(lVar1 + (-(param_3 >> 0x1f & 1) & 0xfffffff000000000 |
                                 (param_3 & 0xffffffff) << 4));
      lVar15 = *(long *)(lVar1 + (-(param_4 >> 0x1f & 1) & 0xfffffff000000000 |
                                 (param_4 & 0xffffffff) << 4));
      uVar9 = (uint)param_4;
      uVar4 = (uint)param_3;
      if (lVar13 <= lVar15) {
        uVar4 = uVar9;
      }
      param_4 = (ulong)uVar4;
      if (lVar13 <= lVar15) {
        uVar9 = (uint)param_3;
      }
      param_3 = (ulong)uVar9;
      uVar19 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | param_3 << 4;
      lVar15 = *(long *)(lVar1 + uVar19);
      uVar7 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | param_4 << 4;
      lVar18 = *(long *)(lVar1 + uVar7);
      lVar20 = *(long *)(lVar2 + uVar19);
      lVar13 = *(long *)(lVar2 + uVar7);
      if (lVar18 != lVar15 || lVar13 == lVar20) {
        uVar7 = lVar18 - lVar15;
        uVar19 = 0;
        if (uVar7 != 0) {
          uVar8 = lVar13 - lVar20;
          uVar19 = -uVar7;
          if (-1 < (long)uVar7) {
            uVar19 = uVar7;
          }
          uVar3 = -uVar8;
          if (-1 < (long)uVar8) {
            uVar3 = uVar8;
          }
          uVar5 = 0;
          if (uVar19 != 0) {
            uVar5 = (uVar3 * 0x10000 + (uVar19 >> 1)) / uVar19;
          }
          uVar19 = -uVar5;
          if (-1 < (long)(uVar8 ^ uVar7)) {
            uVar19 = uVar5;
          }
        }
        plVar11 = (long *)(param_6 + uVar12 + lVar16 * 8);
        plVar17 = (long *)(param_5 + uVar12 + lVar16 * 8);
        iVar10 = (param_2 - (int)param_1) + 1;
        do {
          lVar16 = *plVar17;
          if (lVar16 - lVar15 == 0 || lVar16 < lVar15) {
            lVar16 = (lVar20 - lVar15) + lVar16;
          }
          else if (lVar16 < lVar18) {
            lVar16 = (lVar16 - lVar15) * uVar19;
            lVar16 = lVar20 + (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10);
          }
          else {
            lVar16 = (lVar13 - lVar18) + lVar16;
          }
          *plVar11 = lVar16;
          iVar10 = iVar10 + -1;
          plVar11 = plVar11 + 2;
          plVar17 = plVar17 + 2;
        } while (iVar10 != 0);
      }
      lVar16 = 1;
      param_5 = lVar1;
      param_6 = lVar2;
      bVar6 = false;
    } while (bVar14);
  }
  return;
}



/* Entry: 10978cac8; end: 10978cd03;  */

void FUN_10978cac8(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar5 = *(long *)(*param_1 + 0xb0);
  plVar4 = (long *)param_1[0x22];
  uVar1 = *(uint *)(plVar4 + 0x59);
  if (uVar1 != 0) {
    _memcpy(param_1[0x1c],param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4);
  }
  lVar3 = param_1[1];
  lVar6 = *(long *)(lVar3 + 0x158);
  lVar8 = *(long *)(lVar3 + 0x170);
  lVar7 = *(long *)(lVar3 + 0x168);
  plVar4[0x44] = *(long *)(lVar3 + 0x160);
  plVar4[0x43] = lVar6;
  plVar4[0x46] = lVar8;
  plVar4[0x45] = lVar7;
  lVar7 = *(long *)(lVar3 + 0x180);
  lVar6 = *(long *)(lVar3 + 0x178);
  lVar9 = *(long *)(lVar3 + 400);
  lVar8 = *(long *)(lVar3 + 0x188);
  lVar10 = *(long *)(lVar3 + 0x198);
  lVar12 = *(long *)(lVar3 + 0x1b0);
  lVar11 = *(long *)(lVar3 + 0x1a8);
  plVar4[0x4c] = *(long *)(lVar3 + 0x1a0);
  plVar4[0x4b] = lVar10;
  plVar4[0x4e] = lVar12;
  plVar4[0x4d] = lVar11;
  plVar4[0x48] = lVar7;
  plVar4[0x47] = lVar6;
  plVar4[0x4a] = lVar9;
  plVar4[0x49] = lVar8;
  if (param_2 == 0) {
    lVar3 = *(long *)(*(long *)(param_1[1] + 0x58) + 8);
    plVar4[0x34] = *(long *)(*(long *)(param_1[1] + 0x58) + 0x10);
    plVar4[0x33] = lVar3;
  }
  else {
    plVar4[0x33] = 0x10000;
    plVar4[0x34] = 0x10000;
    _memcpy(param_1[0x1e],param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4);
  }
  lVar3 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
  *(ulong *)(lVar3 + -0x40) = *(long *)(lVar3 + -0x40) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar3 + -0x30) = *(long *)(lVar3 + -0x30) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar3 + -0x18) = *(long *)(lVar3 + -0x18) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + 0x20U & 0xffffffffffffffc0;
  if (uVar1 != 0) {
    plVar4[0x67] = plVar4[0x5a];
    plVar4[0x68] = (ulong)uVar1;
    *(char *)(plVar4 + 0x7d) = (char)param_2;
    plVar2 = plVar4 + 0x21;
    lVar6 = param_1[0x1f];
    lVar3 = param_1[0x1e];
    lVar8 = param_1[0x21];
    lVar7 = param_1[0x20];
    lVar12 = param_1[0x1b];
    lVar11 = param_1[0x1a];
    lVar10 = param_1[0x1d];
    lVar9 = param_1[0x1c];
    plVar4[0x26] = lVar6;
    plVar4[0x25] = lVar3;
    plVar4[0x28] = lVar8;
    plVar4[0x27] = lVar7;
    plVar4[0x22] = lVar12;
    *plVar2 = lVar11;
    plVar4[0x24] = lVar10;
    plVar4[0x23] = lVar9;
    plVar4[0x50] = plVar4[0x5a];
    plVar4[0x52] = (ulong)uVar1;
    plVar4[0x51] = 0;
    *(undefined4 *)((long)plVar4 + 0x27c) = 3;
    plVar4[10] = lVar12;
    plVar4[9] = lVar11;
    plVar4[0xc] = lVar10;
    plVar4[0xb] = lVar9;
    plVar4[0xe] = lVar6;
    plVar4[0xd] = lVar3;
    plVar4[0x10] = lVar8;
    plVar4[0xf] = lVar7;
    plVar4[0x18] = plVar4[0x28];
    plVar4[0x17] = plVar4[0x27];
    plVar4[0x16] = plVar4[0x26];
    plVar4[0x15] = plVar4[0x25];
    plVar4[0x14] = plVar4[0x24];
    plVar4[0x13] = plVar4[0x23];
    plVar4[0x12] = plVar4[0x22];
    plVar4[0x11] = *plVar2;
    plVar4[0x20] = plVar4[0x28];
    plVar4[0x1f] = plVar4[0x27];
    plVar4[0x1e] = plVar4[0x26];
    plVar4[0x1d] = plVar4[0x25];
    plVar4[0x1c] = plVar4[0x24];
    plVar4[0x1b] = plVar4[0x23];
    plVar4[0x1a] = plVar4[0x22];
    plVar4[0x19] = *plVar2;
    *(undefined4 *)((long)plVar4 + 0x26c) = 0x10001;
    *(undefined2 *)(plVar4 + 0x4e) = 1;
    *(undefined4 *)((long)plVar4 + 0x222) = 0x4000;
    *(undefined4 *)((long)plVar4 + 0x226) = *(undefined4 *)((long)plVar4 + 0x222);
    *(undefined4 *)((long)plVar4 + 0x21e) = *(undefined4 *)((long)plVar4 + 0x222);
    *(undefined4 *)(plVar4 + 0x48) = 1;
    plVar4[0x46] = 1;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 0x60) = 0;
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x488))();
    if (((int)plVar2 != 0) && (*(char *)((long)plVar4 + 0x3e9) != '\0')) {
      return;
    }
    **(byte **)(param_1[3] + 0x70) = **(byte **)(param_1[3] + 0x70) | (char)plVar4[0x4d] << 5 | 4;
  }
  if ((*(int *)(lVar5 + 0x78) != 0x28) || (*(char *)((long)plVar4 + 1099) == '\0')) {
    lVar5 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
    lVar3 = *(long *)(lVar5 + -0x40);
    param_1[0xf] = *(long *)(lVar5 + -0x38);
    param_1[0xe] = lVar3;
    lVar3 = *(long *)(lVar5 + -0x30);
    param_1[0x11] = *(long *)(lVar5 + -0x28);
    param_1[0x10] = lVar3;
    lVar3 = *(long *)(lVar5 + -0x20);
    param_1[0x28] = *(long *)(lVar5 + -0x18);
    param_1[0x27] = lVar3;
    lVar3 = *(long *)(lVar5 + -0x10);
    param_1[0x2a] = *(long *)(lVar5 + -8);
    param_1[0x29] = lVar3;
  }
  return;
}



/* Entry: 10978cd04; end: 10978ce57;  */

void FUN_10978cd04(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  ushort uVar12;
  long lVar13;
  
  lVar13 = *param_1;
  plVar3 = param_1;
  FUN_109789c90();
  if ((int)plVar3 == 0) {
    if ((*(ushort *)(lVar13 + 0x150) >> 3 & 1) != 0) {
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x88);
      if (uVar6 == 0) {
        uVar4 = 0x7fffffff;
        uVar7 = 0x7fffffff;
      }
      else {
        uVar9 = (ulong)(*(ushort *)(lVar13 + 0x88) >> 1);
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = (uVar9 | (ulong)*(ushort *)(param_1 + 0xc) << 0x16) / uVar6;
        }
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = (uVar9 | (ulong)*(ushort *)((long)param_1 + 0x62) << 0x16) / uVar6;
        }
      }
      param_1[0xd] = uVar4;
      param_1[0xe] = uVar7;
      lVar5 = uVar4 * (long)*(short *)(lVar13 + 0x90);
      param_1[0x12] = (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
    }
    uVar1 = *(ushort *)(param_1 + 0xc);
    uVar12 = *(ushort *)((long)param_1 + 0x62);
    if (uVar1 < uVar12) {
      param_1[0x17] = param_1[0xe];
      *(ushort *)(param_1 + 0x15) = uVar12;
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = CONCAT22(uVar1,uVar12 >> 1) / (uint)uVar12;
      }
      param_1[0x13] = (ulong)uVar10;
      uVar6 = 0x10000;
    }
    else {
      param_1[0x17] = param_1[0xd];
      *(ushort *)(param_1 + 0x15) = uVar1;
      param_1[0x13] = 0x10000;
      if (uVar1 == 0) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar10 = 0;
        if (uVar1 != 0) {
          uVar10 = CONCAT22(uVar12,uVar1 >> 1) / (uint)uVar1;
        }
        uVar6 = (ulong)uVar10;
      }
    }
    param_1[0x14] = uVar6;
    uVar10 = *(uint *)(lVar13 + 0x518);
    if (uVar10 != 0) {
      uVar8 = 0;
      do {
        uVar2 = uVar10 + uVar8 >> 1;
        pbVar11 = *(byte **)(*(long *)(lVar13 + 0x528) + (ulong)uVar2 * 8);
        uVar12 = (ushort)*pbVar11;
        if (uVar12 <= uVar1) {
          if (uVar1 <= uVar12) {
            pbVar11 = pbVar11 + 2;
            goto LAB_10978ce34;
          }
          uVar8 = uVar2 + 1;
          uVar2 = uVar10;
        }
        uVar10 = uVar2;
      } while (uVar8 < uVar10);
    }
    pbVar11 = (byte *)0x0;
LAB_10978ce34:
    param_1[0x1d] = (long)pbVar11;
    param_1[0xb] = (long)(param_1 + 0xc);
    *(undefined4 *)((long)param_1 + 0x224) = 0xffffffff;
  }
  return;
}



/* Entry: 10978ce58; end: 10978cfa3;  */

void FUN_10978ce58(long param_1)

{
  short sVar1;
  short sVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar8;
  ulong uVar7;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  if (*(long *)(param_1 + 0x1e0) == 0) {
    sVar1 = *(short *)(param_1 + 0x224);
    if (sVar1 == 0) {
      plVar3 = *(long **)(param_1 + 0x1c8);
    }
    else {
      sVar2 = *(short *)(param_1 + 0x222);
      if (sVar2 == 0) {
        plVar3 = *(long **)(param_1 + 0x1d0);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x1c8);
        uVar6 = MP_INT_ABS((int)uVar5);
        uVar8 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 0x1d0));
        iVar9 = MP_INT_ABS((int)sVar2);
        iVar10 = MP_INT_ABS((int)sVar1);
        uVar7 = CONCAT44(uVar8,uVar6) & 0xffff0000ffff;
        uVar6 = (uVar6 >> 0x10) * iVar9;
        uVar11 = (uVar8 >> 0x10) * iVar10;
        uVar8 = uVar6 * 0x10000;
        uVar12 = uVar11 * 0x10000;
        uVar4 = CONCAT44(uVar12,uVar8) | 0x200000002000;
        uVar13 = (int)uVar4 + (int)uVar7 * iVar9;
        uVar14 = (int)(uVar4 >> 0x20) + (int)(uVar7 >> 0x20) * iVar10;
        iVar9 = ((uVar6 >> 0x10) + (uint)(uVar13 < (uVar8 | 0x2000))) * 0x40000 + (uVar13 >> 0xe);
        iVar10 = ((uVar11 >> 0x10) + (uint)(uVar14 < (uVar12 | 0x2000))) * 0x40000 + (uVar14 >> 0xe)
        ;
        uVar4 = CONCAT44(iVar10,iVar9);
        uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(-iVar10,-iVar9)) &
                        CONCAT44(-(uint)((char)((byte)((ulong)*(undefined8 *)(param_1 + 0x1d0) >>
                                                      0x18) ^ (byte)(sVar1 >> 0xf)) < '\0'),
                                 -(uint)((char)((byte)((ulong)uVar5 >> 0x18) ^ (byte)(sVar2 >> 0xf))
                                        < '\0'));
        lStack_30 = (long)(int)uVar4;
        lStack_28 = (long)(int)(uVar4 >> 0x20);
        FUN_1097531c8();
      }
    }
    *(long **)(param_1 + 0x1e0) = plVar3;
  }
  return;
}



/* Entry: 10978cfa4; end: 10978cfb3;  */

undefined8 FUN_10978cfa4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10978cfb4; end: 10978d00b;  */

long FUN_10978cfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010978d284(param_2,param_3,(long)*(short *)(param_1 + 0x222),
                      (long)*(short *)(param_1 + 0x224));
  return (long)(int)param_2;
}



/* Entry: 10978d00c; end: 10978d1a7;  */

void FUN_10978d00c(long *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((long)*(short *)((long)param_1 + 0x226) != 0) {
    iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
    if ((iVar1 == 0x23) || ((iVar1 == 0x28 && (*(char *)((long)param_1 + 1099) == '\0')))) {
      lVar3 = *(long *)(param_2 + 0x18);
      lVar2 = (param_3 & 0xffffffff) * 0x10;
      lVar5 = *(long *)(lVar3 + lVar2);
      lVar4 = param_4;
      FUN_1097532ac(param_4,(long)*(short *)((long)param_1 + 0x226),param_1[0x7e]);
      *(long *)(lVar3 + lVar2) = lVar4 + lVar5;
    }
    *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffffffff)) =
         *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffffffff)) | 8;
  }
  if ((long)(short)param_1[0x45] != 0) {
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
       || (*(char *)((long)param_1 + 0x44d) == '\0')) {
      lVar2 = *(long *)(param_2 + 0x18) + (param_3 & 0xffffffff) * 0x10;
      lVar4 = *(long *)(lVar2 + 8);
      FUN_1097532ac(param_4,(long)(short)param_1[0x45],param_1[0x7e]);
      *(long *)(lVar2 + 8) = param_4 + lVar4;
    }
    *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffffffff)) =
         *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffffffff)) | 0x10;
  }
  return;
}



/* Entry: 10978d1a8; end: 10978d4eb;  */

void FUN_10978d1a8(long *param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
  if ((iVar1 == 0x23) || ((iVar1 == 0x28 && (*(char *)((long)param_1 + 1099) == '\0')))) {
    *(long *)(*(long *)(param_2 + 0x18) + (ulong)param_3 * 0x10) =
         *(long *)(*(long *)(param_2 + 0x18) + (ulong)param_3 * 0x10) + param_4;
  }
  *(byte *)(*(long *)(param_2 + 0x28) + (ulong)param_3) =
       *(byte *)(*(long *)(param_2 + 0x28) + (ulong)param_3) | 8;
  return;
}



/* Entry: 10978d4ec; end: 10978d587;  */

undefined8 FUN_10978d4ec(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 < *(ushort *)(param_1 + 0xd4)) && (param_3 < *(ushort *)(param_1 + 0x94))) {
    plVar1 = (long *)(*(long *)(param_1 + 0xa0) + (ulong)param_3 * 0x10);
    plVar2 = (long *)(*(long *)(param_1 + 0xe0) + (ulong)param_2 * 0x10);
    lVar5 = *plVar1 - *plVar2;
    lVar6 = plVar1[1] - plVar2[1];
    lVar3 = 0x4000;
    if (lVar5 != 0 || lVar6 != 0) {
      lVar3 = lVar5;
    }
    lVar4 = lVar3;
    if ((lVar5 != 0 || lVar6 != 0) && (*(byte *)(param_1 + 0x298) & 1) != 0) {
      lVar4 = -lVar6;
      lVar6 = lVar3;
    }
    FUN_10978d588(lVar4,lVar6,param_4);
    return 0;
  }
  if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  return 1;
}



/* Entry: 10978d588; end: 10978d5eb;  */

void FUN_10978d588(ulong param_1,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  ulong uStack_30;
  ulong uStack_28;
  
  if (param_2 != 0 || param_1 != 0) {
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_109753604(&uStack_30);
    uVar1 = (ulong)((int)uStack_30 + 3);
    if (-1 < (long)uStack_30) {
      uVar1 = uStack_30;
    }
    *param_3 = (short)(uVar1 >> 2);
    uVar1 = (ulong)((int)uStack_28 + 3);
    if (-1 < (long)uStack_28) {
      uVar1 = uStack_28;
    }
    param_3[1] = (short)(uVar1 >> 2);
  }
  return;
}



/* Entry: 10978d5ec; end: 10978d7bb;  */

undefined8 FUN_10978d5ec(long param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = *(long *)(param_1 + 0x288) + (long)*(int *)(param_1 + 0x29c);
  *(long *)(param_1 + 0x288) = lVar1;
  lVar4 = *(long *)(param_1 + 0x290);
  if (lVar1 < lVar4) {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x280) + lVar1);
    *(byte *)(param_1 + 0x298) = bVar2;
    cVar3 = (&UNK_10dff9620)[bVar2];
    iVar5 = (int)cVar3;
    *(int *)(param_1 + 0x29c) = (int)cVar3;
    if ((bVar2 & 0xfe) == 0x40) {
      if (lVar4 <= lVar1 + 1) goto LAB_10978d658;
      iVar5 = 2 - (uint)*(byte *)(*(long *)(param_1 + 0x280) + lVar1 + 1) * (int)cVar3;
      *(int *)(param_1 + 0x29c) = iVar5;
    }
    if (lVar1 + iVar5 <= lVar4) {
      return 0;
    }
  }
LAB_10978d658:
  *(undefined4 *)(param_1 + 0x18) = 0x83;
  return 1;
}



/* Entry: 10978d7bc; end: 10978d913;  */

undefined8
FUN_10978d7bc(long param_1,long *param_2,long *param_3,undefined8 *param_4,ushort *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  undefined2 uVar9;
  ushort uVar10;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  bVar11 = (*(byte *)(param_1 + 0x298) & 1) != 0;
  lVar13 = 0x94;
  if (bVar11) {
    lVar13 = 0x54;
  }
  lVar14 = 0x96;
  if (bVar11) {
    lVar14 = 0x56;
  }
  lVar4 = 0x98;
  if (bVar11) {
    lVar4 = 0x58;
  }
  lVar5 = 0xa0;
  if (bVar11) {
    lVar5 = 0x60;
  }
  lVar6 = 0xa8;
  if (bVar11) {
    lVar6 = 0x68;
  }
  lVar7 = 0x21c;
  if (bVar11) {
    lVar7 = 0x21a;
  }
  uVar8 = *(ushort *)(param_1 + lVar13);
  uVar9 = *(undefined2 *)(param_1 + lVar14);
  lVar13 = *(long *)(param_1 + lVar4);
  lVar14 = *(long *)(param_1 + lVar5);
  puVar1 = (undefined8 *)(param_1 + lVar6);
  uVar16 = puVar1[1];
  uVar12 = *puVar1;
  uVar18 = puVar1[3];
  uVar17 = puVar1[2];
  uVar10 = *(ushort *)(param_1 + lVar7);
  if (uVar10 < uVar8) {
    lVar4 = 0x88;
    if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
      lVar4 = 0x48;
    }
    uVar15 = *(undefined8 *)(param_1 + lVar4);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)((undefined8 *)(param_1 + lVar4) + 1);
    *param_4 = uVar15;
    *(ushort *)((long)param_4 + 0xc) = uVar8;
    *(undefined2 *)((long)param_4 + 0xe) = uVar9;
    param_4[2] = lVar13;
    param_4[3] = lVar14;
    param_4[5] = uVar16;
    param_4[4] = uVar12;
    param_4[7] = uVar18;
    param_4[6] = uVar17;
    *param_5 = uVar10;
    plVar2 = (long *)(lVar14 + (ulong)uVar10 * 0x10);
    plVar3 = (long *)(lVar13 + (ulong)uVar10 * 0x10);
    lVar13 = param_1;
    (**(code **)(param_1 + 0x400))(param_1,*plVar2 - *plVar3,plVar2[1] - plVar3[1]);
    lVar14 = lVar13;
    FUN_1097532ac();
    *param_2 = lVar14;
    FUN_1097532ac(lVar13,(long)*(short *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x3f0));
    uVar12 = 0;
    *param_3 = lVar13;
  }
  else {
    if (*(char *)(param_1 + 0x3e9) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
    *param_5 = 0;
    uVar12 = 1;
  }
  return uVar12;
}



/* Entry: 10978d914; end: 10978da53;  */

void FUN_10978d914(long *param_1,uint param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  
  if (*(short *)((long)param_1 + 0x226) != 0) {
    if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
       (*(char *)((long)param_1 + 1099) == '\0')) {
      *(long *)(param_1[0x1c] + (ulong)param_2 * 0x10) =
           *(long *)(param_1[0x1c] + (ulong)param_2 * 0x10) + param_3;
    }
    if (param_5 != 0) {
      *(byte *)(param_1[0x1e] + (ulong)param_2) = *(byte *)(param_1[0x1e] + (ulong)param_2) | 8;
    }
  }
  if ((short)param_1[0x45] != 0) {
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 1099) == '\0')) || (*(char *)((long)param_1 + 0x44c) == '\0'))
       || (*(char *)((long)param_1 + 0x44d) == '\0')) {
      lVar1 = param_1[0x1c] + (ulong)param_2 * 0x10;
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + param_4;
    }
    if (param_5 != 0) {
      *(byte *)(param_1[0x1e] + (ulong)param_2) = *(byte *)(param_1[0x1e] + (ulong)param_2) | 0x10;
    }
  }
  return;
}



/* Entry: 10978da54; end: 10978df77;  */

undefined * FUN_10978da54(long param_1,undefined *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uStack_178;
  int aiStack_f0 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined *)0x0;
  if (param_1 != 0) {
    pcVar14 = *(char **)(param_1 + 0x28);
    if (pcVar14 != (char *)0x0) {
      if ((((((int)*pcVar14 - 0x41U < 0x1a) && ((int)pcVar14[1] - 0x41U < 0x1a)) &&
           ((int)pcVar14[2] - 0x41U < 0x1a)) &&
          (((int)pcVar14[3] - 0x41U < 0x1a && ((int)pcVar14[4] - 0x41U < 0x1a)))) &&
         (((int)pcVar14[5] - 0x41U < 0x1a && ((pcVar14[6] == '+' && (pcVar14[7] != '\0')))))) {
        pcVar14 = pcVar14 + 7;
      }
      puVar8 = &UNK_10dff988c;
      lVar16 = 0x14;
      do {
        pcVar5 = pcVar14;
        param_2 = puVar8;
        _strstr();
        if (pcVar5 != (char *)0x0) goto LAB_10978dd74;
        puVar8 = puVar8 + 0x14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    aiStack_f0[0x1d] = 0;
    aiStack_f0[0x1e] = 0;
    aiStack_f0[0x1c] = 0;
    aiStack_f0[0x16] = 0;
    aiStack_f0[0x17] = 0;
    aiStack_f0[0x14] = 0;
    aiStack_f0[0x15] = 0;
    aiStack_f0[0x1a] = 0;
    aiStack_f0[0x1b] = 0;
    aiStack_f0[0x18] = 0;
    aiStack_f0[0x19] = 0;
    aiStack_f0[0xe] = 0;
    aiStack_f0[0xf] = 0;
    aiStack_f0[0xc] = 0;
    aiStack_f0[0xd] = 0;
    aiStack_f0[0x12] = 0;
    aiStack_f0[0x13] = 0;
    aiStack_f0[0x10] = 0;
    aiStack_f0[0x11] = 0;
    aiStack_f0[6] = 0;
    aiStack_f0[7] = 0;
    aiStack_f0[4] = 0;
    aiStack_f0[5] = 0;
    aiStack_f0[10] = 0;
    aiStack_f0[0xb] = 0;
    aiStack_f0[8] = 0;
    aiStack_f0[9] = 0;
    aiStack_f0[2] = 0;
    aiStack_f0[3] = 0;
    aiStack_f0[0] = 0;
    aiStack_f0[1] = 0;
    uVar9 = (ulong)*(ushort *)(param_1 + 0x120);
    if (*(ushort *)(param_1 + 0x120) == 0) {
      bVar4 = true;
    }
    else {
      uVar17 = 0;
      bVar4 = false;
      do {
        lVar16 = *(long *)(*(long *)(param_1 + 0x128) + uVar17 * 0x20);
        if (lVar16 == 0x63767420) {
          lVar16 = 0;
          bVar4 = true;
LAB_10978dbc8:
          lVar19 = 0;
          uVar9 = 0;
          do {
            if (*(ulong *)(*(long *)(param_1 + 0x128) + uVar17 * 0x20 + 0x18) ==
                *(ulong *)((long)(&UNK_10dff9a20 + lVar16 * 0x10 + lVar19 * 0x30) + 8)) {
              if (uVar9 == 0) {
                uVar9 = 0;
                if (*(code **)(param_1 + 0x340) != (code *)0x0) {
                  param_2 = *(undefined **)(*(long *)(param_1 + 0x128) + uVar17 * 0x20);
                  lVar6 = param_1;
                  (**(code **)(param_1 + 0x340))(param_1,param_2,*(undefined8 *)(param_1 + 0xc0),0);
                  if ((int)lVar6 == 0) {
                    puVar15 = *(undefined8 **)(param_1 + 0xc0);
                    puVar8 = *(undefined **)(*(long *)(param_1 + 0x128) + uVar17 * 0x20 + 0x18);
                    puVar7 = puVar15;
                    param_2 = puVar8;
                    func_0x00010975780c();
                    if ((int)puVar7 == 0) {
                      uVar9 = 0;
                      puVar10 = (uint *)puVar15[8];
                      for (; (undefined *)0x3 < puVar8; puVar8 = puVar8 + -4) {
                        uVar13 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
                        uVar9 = (ulong)((uVar13 >> 0x10 | uVar13 << 0x10) + (int)uVar9);
                        puVar10 = puVar10 + 1;
                      }
                      if (puVar8 != (undefined *)0x0) {
                        uVar13 = 0x18;
                        do {
                          uVar9 = (ulong)(((uint)(byte)*puVar10 << (ulong)(uVar13 & 0x1f)) +
                                         (int)uVar9);
                          uVar13 = uVar13 - 8;
                          puVar8 = puVar8 + -1;
                          puVar10 = (uint *)((long)puVar10 + 1);
                        } while (puVar8 != (undefined *)0x0);
                      }
                      if (puVar15[5] != 0) {
                        param_2 = (undefined *)*puVar15;
                        if (param_2 != (undefined *)0x0) {
                          (**(code **)(puVar15[7] + 0x10))();
                        }
                        *puVar15 = 0;
                      }
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                    }
                    else {
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar9 = 0;
                  }
                }
              }
              iVar12 = aiStack_f0[lVar19];
              if (*(ulong *)(&UNK_10dff9a20 + lVar16 * 0x10 + lVar19 * 0x30) == uVar9) {
                iVar12 = iVar12 + 1;
                aiStack_f0[lVar19] = iVar12;
              }
              if (iVar12 == 3) goto LAB_10978dd74;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x1f);
          uVar9 = (ulong)*(ushort *)(param_1 + 0x120);
        }
        else {
          if (lVar16 == 0x70726570) {
            lVar16 = 2;
            goto LAB_10978dbc8;
          }
          if (lVar16 == 0x6670676d) {
            lVar16 = 1;
            goto LAB_10978dbc8;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar9);
      bVar4 = !bVar4;
    }
    lVar16 = 0;
    do {
      bVar3 = false;
      if (lVar16 - 0x10U < 0xc) {
        bVar3 = bVar4;
      }
      iVar12 = aiStack_f0[lVar16];
      if (bVar3) {
        iVar12 = iVar12 + 1;
        aiStack_f0[lVar16] = iVar12;
      }
      if (iVar12 == 3) goto LAB_10978dd74;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x1f);
    puVar8 = (undefined *)0x0;
  }
LAB_10978dd78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(param_2 + 0x38);
  puVar18 = puVar8;
  (**(code **)(puVar8 + 0x340))();
  if ((int)puVar18 != 0 || uStack_178 < 8) {
    return (undefined *)0x0;
  }
  puVar18 = param_2;
  func_0x00010975780c();
  if ((int)puVar18 != 0) {
    return puVar18;
  }
  *(undefined8 *)(puVar8 + 0x508) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  lVar19 = *(long *)(puVar8 + 0x508);
  uVar20 = (ulong)*(byte *)(lVar19 + 3);
  uVar17 = (ulong)*(byte *)(lVar19 + 4) << 0x18 | (ulong)*(byte *)(lVar19 + 5) << 0x10;
  uVar9 = 0;
  if (uVar17 != 0xffff0000) {
    uVar9 = uVar17;
  }
  if (*(char *)(lVar19 + 2) == '\0' && *(byte *)(lVar19 + 3) != 0) {
    bVar1 = *(byte *)(lVar19 + 6);
    bVar2 = *(byte *)(lVar19 + 7);
    uVar17 = CONCAT11(bVar1,bVar2) | uVar9;
    if (uVar17 != (*(long *)(puVar8 + 0x20) + 5U & 0xfffffffffffffffc)) goto LAB_10978dee8;
    (**(code **)(lVar16 + 8))(lVar16,uVar20 << 3);
    if (lVar16 != 0) {
      uVar11 = 0;
      lVar6 = lVar19 + 8;
      *(long *)(puVar8 + 0x528) = lVar16;
      do {
        lVar16 = *(long *)(puVar8 + 0x528);
        if (lVar19 + uStack_178 < lVar6 + uVar9 + (ulong)bVar1 * 0x100 + (ulong)bVar2)
        goto LAB_10978df4c;
        *(long *)(lVar16 + uVar11 * 8) = lVar6;
        lVar6 = lVar6 + uVar17;
        uVar11 = uVar11 + 1;
      } while (uVar20 != uVar11);
      lVar16 = *(long *)(puVar8 + 0x528);
      uVar11 = uVar20;
LAB_10978df4c:
      _qsort(lVar16,uVar11 & 0xffffffff,8,FUN_10978e310);
      puVar18 = (undefined *)0x0;
      *(int *)(puVar8 + 0x518) = (int)uVar11;
      *(ulong *)(puVar8 + 0x510) = uStack_178;
      lVar16 = 0x520;
      goto LAB_10978df14;
    }
    *(undefined8 *)(puVar8 + 0x528) = 0;
    puVar18 = (undefined *)0x40;
  }
  else {
LAB_10978dee8:
    puVar18 = (undefined *)0x0;
  }
  if ((*(long *)(param_2 + 0x28) != 0) && (*(long *)(puVar8 + 0x508) != 0)) {
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))();
  }
  uVar17 = 0;
  *(undefined8 *)(puVar8 + 0x508) = 0;
  lVar16 = 0x510;
LAB_10978df14:
  *(ulong *)(puVar8 + lVar16) = uVar17;
  return puVar18;
LAB_10978dd74:
  puVar8 = (undefined *)0x1;
  goto LAB_10978dd78;
}



/* Entry: 10978df78; end: 10978e0eb;  */

void FUN_10978df78(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_38;
  
  lVar4 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x676c7966,param_2,(undefined8 *)(param_1 + 0x4a8));
  if (((uint)lVar4 & 0xff) == 0x8e) {
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  else {
    if ((uint)lVar4 != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x10);
  }
  lVar4 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x6c6f6361,param_2,&uStack_38);
  if ((int)lVar4 != 0) {
    return;
  }
  lVar4 = 1;
  if (*(short *)(param_1 + 0x186) != 0) {
    lVar4 = 2;
  }
  if ((ulong)(0x10000L << lVar4) < uStack_38) {
    uStack_38 = 0x10000L << lVar4;
  }
  uVar5 = uStack_38 >> lVar4;
  *(ulong *)(param_1 + 0x4f8) = uVar5;
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  if (uVar1 <= uVar5) goto LAB_10978e0c0;
  if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
LAB_10978e094:
    uVar6 = *(long *)(param_2 + 8) - *(long *)(param_2 + 0x10);
  }
  else {
    bVar3 = false;
    uVar7 = *(ulong *)(param_1 + 0x128);
    uVar2 = uVar7 + (ulong)*(ushort *)(param_1 + 0x120) * 0x20;
    uVar6 = 0x7fffffff;
    do {
      uVar8 = *(long *)(uVar7 + 0x10) - *(long *)(param_2 + 0x10);
      if (0 < (long)uVar8 && (long)uVar8 < (long)uVar6) {
        bVar3 = true;
        uVar6 = uVar8;
      }
      uVar7 = uVar7 + 0x20;
    } while (uVar7 < uVar2);
    if (!bVar3) goto LAB_10978e094;
  }
  if (uVar6 < uVar1 << lVar4) {
    lVar4 = 0;
    if (uVar5 != 0) {
      lVar4 = uVar5 - 1;
    }
    *(long *)(param_1 + 0x20) = lVar4;
  }
  else {
    *(ulong *)(param_1 + 0x4f8) = uVar1;
    uStack_38 = uVar1 << lVar4;
  }
LAB_10978e0c0:
  lVar4 = param_2;
  func_0x00010975780c(param_2,uStack_38);
  if ((int)lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10978e0ec; end: 10978e1db;  */

void FUN_10978e0ec(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  (**(code **)(param_1 + 0x340))(param_1,0x6670676d,param_2,&uStack_28);
  puVar2 = (undefined8 *)(param_1 + 0x458);
  if ((int)lVar1 == 0) {
    *puVar2 = uStack_28;
    lVar1 = param_2;
    func_0x00010975780c();
    if ((int)lVar1 != 0) {
      return;
    }
    puVar2 = (undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x460) = *puVar2;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10978e1dc; end: 10978e30f;  */

undefined8 * FUN_10978e1dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(param_1 + 0x4f8);
  if (puVar3 == (undefined8 *)0x0) {
LAB_10978e2cc:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    bVar4 = false;
    bVar5 = true;
    puVar1 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
    do {
      while (puVar2 = puVar1, param_2 = puVar2, FUN_10978a040(param_1,puVar2,&lStack_68),
            lStack_68 == 0) {
        puVar1 = (undefined8 *)((long)puVar2 + 1);
        if (puVar3 == (undefined8 *)((long)puVar2 + 1)) {
          puVar2 = puVar6;
          if (!bVar4) goto LAB_10978e2cc;
          goto LAB_10978e27c;
        }
      }
      if (!bVar5) goto LAB_10978e2cc;
      bVar5 = false;
      bVar4 = true;
      puVar1 = (undefined8 *)((long)puVar2 + 1);
      puVar6 = puVar2;
    } while ((undefined8 *)((long)puVar3 + -1) != puVar2);
LAB_10978e27c:
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x1;
    }
    else {
      FUN_109755cd4(param_1,puVar2,&cStack_60,8);
      puVar3 = (undefined8 *)0x0;
      param_2 = puVar2;
      if (((int)param_1 == 0) && (cStack_60 == '.')) {
        puVar3 = (undefined8 *)(ulong)(CONCAT71(uStack_5f,0x2e) == 0x666564746f6e2e);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return (undefined8 *)(ulong)((uint)*(byte *)*puVar3 - (uint)*(byte *)*param_2);
  }
  return puVar3;
}



/* Entry: 10978e310; end: 10978e327;  */

int FUN_10978e310(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)*(byte *)*param_1 - (uint)*(byte *)*param_2;
}



/* Entry: 10978e328; end: 10978e3ab;  */

void FUN_10978e328(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(code **)(lVar2 + 0x28) == (code *)0x0) {
    if (*(ulong *)(lVar2 + 8) < param_3) {
      return;
    }
  }
  else {
    lVar1 = lVar2;
    (**(code **)(lVar2 + 0x28))(lVar2,param_3,0,0);
    if (lVar1 != 0) {
      return;
    }
  }
  *(ulong *)(lVar2 + 0x10) = param_3;
  lVar1 = lVar2;
  func_0x00010975780c(lVar2,param_4);
  if ((int)lVar1 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0x158) = uVar3;
  }
  return;
}



/* Entry: 10978e3ac; end: 10978e443;  */

undefined8 FUN_10978e3ac(long param_1)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_1 + 0x158);
  if (*(ushort **)(param_1 + 0x160) < puVar1 + 5) {
    return 0x14;
  }
  *(ushort *)(param_1 + 0x3c) = *puVar1 >> 8 | *puVar1 << 8;
  *(ulong *)(param_1 + 0x40) =
       (long)(short)((ushort)(byte)puVar1[1] << 8) | (ulong)*(byte *)((long)puVar1 + 3);
  *(ulong *)(param_1 + 0x48) =
       (long)(short)((ushort)(byte)puVar1[2] << 8) | (ulong)*(byte *)((long)puVar1 + 5);
  *(ulong *)(param_1 + 0x50) =
       (long)(short)((ushort)(byte)puVar1[3] << 8) | (ulong)*(byte *)((long)puVar1 + 7);
  *(ulong *)(param_1 + 0x58) =
       (long)(short)((ushort)(byte)puVar1[4] << 8) | (ulong)*(byte *)((long)puVar1 + 9);
  *(ushort **)(param_1 + 0x158) = puVar1 + 5;
  return 0;
}



/* Entry: 10978e444; end: 10978e9bb;  */

void FUN_10978e444(long param_1)

{
  long *plVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  long *plVar12;
  uint uVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  long lVar24;
  int iStack_64;
  
  puVar21 = *(ushort **)(param_1 + 0x158);
  puVar2 = *(ushort **)(param_1 + 0x160);
  lVar18 = *(long *)(param_1 + 0x18);
  sVar6 = *(short *)(param_1 + 0x3c);
  lVar19 = (long)sVar6;
  if (lVar19 == 0) {
    if (puVar2 < puVar21 + 1) {
      return;
    }
  }
  else {
    if ((*(uint *)(lVar18 + 0xc) <
         (uint)*(ushort *)(lVar18 + 0x18) + (int)sVar6 + (uint)*(ushort *)(lVar18 + 0x60)) &&
       (lVar24 = lVar18, FUN_109753a7c(lVar18,0,lVar19), (int)lVar24 != 0)) {
      return;
    }
    if (0xffe < sVar6) {
      return;
    }
    if (puVar2 < puVar21 + lVar19 + 1) {
      return;
    }
    if (0 < sVar6) {
      puVar8 = *(undefined2 **)(lVar18 + 0x78);
      puVar9 = puVar8;
      puVar20 = puVar21;
      uVar13 = 0xffffffff;
      do {
        puVar21 = puVar20 + 1;
        uVar5 = *puVar20;
        uVar23 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
        puVar10 = puVar9 + 1;
        *puVar9 = (short)uVar23;
        if ((int)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) <= (int)uVar13) {
          return;
        }
        puVar9 = puVar10;
        puVar20 = puVar21;
        uVar13 = uVar23;
      } while (puVar10 < puVar8 + lVar19);
      goto LAB_10978e530;
    }
  }
  uVar23 = 0xffffffff;
LAB_10978e530:
  if ((uVar23 + 5 + (uint)*(ushort *)(lVar18 + 0x1a) + (uint)*(ushort *)(lVar18 + 0x62) <=
       *(uint *)(lVar18 + 8)) ||
     (lVar19 = lVar18, FUN_109753a7c(lVar18,uVar23 + 5,0), (int)lVar19 == 0)) {
    iStack_64 = 0;
    uVar13 = (uint)(*puVar21 >> 8) | (*puVar21 & 0xff00ff) << 8;
    puVar20 = (ushort *)((long)(puVar21 + 1) + (ulong)uVar13);
    if (puVar20 <= puVar2) {
      if ((*(byte *)(param_1 + 0x20) >> 1 & 1) == 0) {
        lVar24 = *(long *)(param_1 + 0x110);
        lVar19 = *(long *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x2c8) != 0) {
          if (*(long *)(lVar24 + 0x2d0) != 0) {
            (**(code **)(lVar19 + 0x10))(lVar19);
          }
          *(undefined8 *)(lVar24 + 0x2d0) = 0;
        }
        *(undefined4 *)(lVar24 + 0x2c8) = 0;
        if (uVar13 != 0) {
          func_0x000109757fa4(lVar19,puVar21 + 1,(ulong)uVar13,&iStack_64);
          *(long *)(lVar24 + 0x2d0) = lVar19;
          if (iStack_64 != 0) {
            return;
          }
          *(uint *)(lVar24 + 0x2c8) = uVar13;
        }
      }
      uVar23 = uVar23 + 1;
      if (uVar23 != 0) {
        pbVar11 = *(byte **)(lVar18 + 0x70) + uVar23;
        pbVar14 = *(byte **)(lVar18 + 0x70);
        do {
          puVar21 = (ushort *)((long)puVar20 + 1);
          if (puVar2 < puVar21) {
            return;
          }
          puVar22 = puVar20 + 1;
          bVar4 = (byte)*puVar20;
          pbVar7 = pbVar14 + 1;
          *pbVar14 = bVar4;
          if ((bVar4 >> 3 & 1) != 0) {
            if (puVar2 < puVar22) {
              return;
            }
            bVar3 = *(byte *)puVar21;
            if (pbVar11 < pbVar7 + bVar3) {
              return;
            }
            puVar21 = puVar22;
            if (bVar3 != 0) {
              _memset(pbVar7,bVar4,(ulong)bVar3);
              pbVar7 = pbVar14 + (ulong)(byte)(bVar3 - 1) + 2;
            }
          }
          puVar20 = puVar21;
          pbVar14 = pbVar7;
        } while (pbVar7 < pbVar11);
        pbVar11 = *(byte **)(lVar18 + 0x70);
        if ((*pbVar11 >> 6 & 1) != 0) {
          *(uint *)(lVar18 + 0x38) = *(uint *)(lVar18 + 0x38) | 0x40;
        }
        lVar19 = 0;
        plVar12 = *(long **)(lVar18 + 0x68);
        plVar1 = plVar12 + (ulong)uVar23 * 2;
        pbVar14 = pbVar11;
        plVar15 = plVar12;
        do {
          bVar4 = *pbVar14;
          if ((bVar4 >> 1 & 1) == 0) {
            if ((bVar4 >> 4 & 1) == 0) {
              puVar22 = puVar21 + 1;
              if (puVar2 < puVar22) {
                return;
              }
              uVar17 = (long)(short)((ushort)(byte)*puVar21 << 8) |
                       (ulong)*(byte *)((long)puVar21 + 1);
            }
            else {
              uVar17 = 0;
              puVar22 = puVar21;
            }
          }
          else {
            puVar22 = (ushort *)((long)puVar21 + 1);
            if (puVar2 < puVar22) {
              return;
            }
            uVar17 = -(ulong)(byte)*puVar21;
            if ((bVar4 & 0x10) != 0) {
              uVar17 = (ulong)(byte)*puVar21;
            }
          }
          lVar19 = uVar17 + lVar19;
          plVar16 = plVar15 + 2;
          *plVar15 = lVar19;
          pbVar14 = pbVar14 + 1;
          plVar15 = plVar16;
          puVar21 = puVar22;
        } while (plVar16 < plVar1);
        lVar19 = 0;
        do {
          bVar4 = *pbVar11;
          if ((bVar4 >> 2 & 1) == 0) {
            if ((bVar4 >> 5 & 1) == 0) {
              puVar20 = puVar22 + 1;
              if (puVar2 < puVar20) {
                return;
              }
              uVar17 = (long)(short)((ushort)(byte)*puVar22 << 8) |
                       (ulong)*(byte *)((long)puVar22 + 1);
            }
            else {
              uVar17 = 0;
              puVar20 = puVar22;
            }
          }
          else {
            puVar20 = (ushort *)((long)puVar22 + 1);
            if (puVar2 < puVar20) {
              return;
            }
            uVar17 = -(ulong)(byte)*puVar22;
            if ((bVar4 & 0x20) != 0) {
              uVar17 = (ulong)(byte)*puVar22;
            }
          }
          lVar19 = uVar17 + lVar19;
          plVar12[1] = lVar19;
          *pbVar11 = bVar4 & 1;
          plVar12 = plVar12 + 2;
          pbVar11 = pbVar11 + 1;
          puVar22 = puVar20;
        } while (plVar12 < plVar1);
      }
      *(short *)(lVar18 + 0x62) = (short)uVar23;
      *(short *)(lVar18 + 0x60) = sVar6;
      *(ushort **)(param_1 + 0x158) = puVar20;
    }
  }
  return;
}



/* Entry: 10978e9bc; end: 10978e9fb;  */

void FUN_10978e9bc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1[5] != 0) {
    if (*plVar1 != 0) {
      (**(code **)(plVar1[7] + 0x10))();
    }
    *plVar1 = 0;
  }
  plVar1[8] = 0;
  plVar1[9] = 0;
  return;
}



/* Entry: 10978e9fc; end: 10978ea43;  */

void FUN_10978e9fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0x20028888;
  ppuVar4 = &PTR_FUN_110b0d548;
  do {
    if (iVar5 == *(int *)(param_1 + 0x90)) {
      puVar2 = ppuVar4[-2];
      puVar1 = ppuVar4[-1];
      puVar3 = *ppuVar4;
      *(undefined **)(param_1 + 200) = ppuVar4[-3];
      *(undefined **)(param_1 + 0xd0) = puVar1;
      puVar1 = ppuVar4[2];
      *(undefined **)(param_1 + 0xd8) = ppuVar4[1];
      *(undefined **)(param_1 + 0xe0) = puVar2;
      *(undefined **)(param_1 + 0xe8) = puVar3;
      *(undefined **)(param_1 + 0xf0) = puVar1;
      return;
    }
    iVar5 = *(int *)(ppuVar4 + 3);
    ppuVar4 = ppuVar4 + 7;
  } while (iVar5 != 0);
  return;
}



/* Entry: 10978ea44; end: 10978eaf3;  */

void FUN_10978ea44(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      lVar1 = lVar2;
      (**(code **)(param_1 + 0xf8))(lVar2,4);
      *param_5 = (int)lVar1;
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978eaf4; end: 10978eb13;  */

void FUN_10978eaf4(long param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010978eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xf8))
            (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
             (long)param_2 * 4,4);
  return;
}



/* Entry: 10978eb14; end: 10978eb5f;  */

undefined4 FUN_10978eb14(long param_1)

{
  long lVar1;
  undefined4 uStack_34;
  undefined4 auStack_30 [4];
  
  lVar1 = param_1;
  (**(code **)(param_1 + 0xd0))();
  uStack_34 = (undefined4)lVar1;
  FUN_1097c2a18(auStack_30,&uStack_34,*(undefined4 *)(param_1 + 0x90),1);
  return auStack_30[0];
}



/* Entry: 10978eb60; end: 10978ebc7;  */

void FUN_10978eb60(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*param_5,4);
      lVar1 = lVar1 + 4;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10978ebc8; end: 10978ec5f;  */

void FUN_10978ebc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if ((uint)param_4 < 0x1fffffff) {
    uVar1 = (ulong)((uint)param_4 << 2);
    _malloc();
    if (uVar1 != 0) {
      func_0x0001097c2b44();
      (**(code **)(param_1 + 0xd8))(param_1,param_2,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10978ec60; end: 10978eccb;  */

void FUN_10978ec60(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      lVar1 = lVar2;
      (**(code **)(param_1 + 0xf8))(lVar2,4);
      *param_5 = (uint)lVar1 | 0xff000000;
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978eccc; end: 10978ecff;  */

uint FUN_10978eccc(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  return (uint)lVar1 | 0xff000000;
}


