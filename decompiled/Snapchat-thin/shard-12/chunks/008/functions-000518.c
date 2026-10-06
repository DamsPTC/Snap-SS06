/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097e7d8c; end: 1097e7f6b;  */

long FUN_1097e7d8c(long param_1,undefined4 *param_2,long param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined1 *puStack_3d0;
  undefined1 auStack_3c8 [904];
  
  if (param_4 == 0) {
    lVar5 = 0;
    param_2 = (undefined4 *)(param_1 + 0x34);
  }
  else {
    if ((int)param_4 < 1) {
      puStack_3d0 = auStack_3c8;
      uStack_3d8 = 0x20;
      uStack_400 = 0x80000000;
      uStack_408 = 0x800000007fffffff;
      uStack_410 = 0x7fffffff00000000;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
    }
    else {
      uVar4 = (ulong)param_4;
      piVar2 = (int *)(param_3 + 8);
      uVar3 = uVar4;
      do {
        if ((((piVar2[-2] <= *(int *)(param_1 + 4)) && (*(int *)(param_1 + 0xc) <= *piVar2)) &&
            (piVar2[-1] <= *(int *)(param_1 + 8))) && (*(int *)(param_1 + 0x10) <= piVar2[1])) {
          return 0;
        }
        piVar2 = piVar2 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puStack_3d0 = auStack_3c8;
      uStack_3d8 = 0x20;
      uStack_400 = 0x80000000;
      uStack_408 = 0x800000007fffffff;
      uStack_410 = 0x7fffffff00000000;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      piVar2 = (int *)(param_3 + 8);
      do {
        if (((*(int *)(param_1 + 4) < *piVar2) &&
            (iVar1 = piVar2[-2], iVar1 < *(int *)(param_1 + 0xc))) &&
           ((*(int *)(param_1 + 8) < piVar2[1] && (piVar2[-1] < *(int *)(param_1 + 0x10))))) {
          iStack_420 = iVar1;
          iStack_41c = piVar2[1];
          iStack_418 = iVar1;
          iStack_414 = piVar2[-1];
          FUN_1097e9f2c(&uStack_410,&iStack_418,&iStack_420,1);
          iStack_420 = *piVar2;
          iStack_418 = iStack_420;
          FUN_1097e9f2c(&uStack_410,&iStack_420,&iStack_418,1);
        }
        piVar2 = piVar2 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    FUN_1097e71dc(param_1,*param_2,&uStack_410,0);
    lVar5 = param_1;
    if (puStack_3d0 != auStack_3c8) {
      _free();
    }
  }
  *param_2 = 0;
  return lVar5;
}



/* Entry: 1097e7f6c; end: 1097e823b;  */

void FUN_1097e7f6c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_70;
  ulong uStack_68;
  
  iVar9 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_3 + 4);
  if ((((iVar9 != iVar2) || (*(int *)(param_2 + 8) != *(int *)(param_3 + 8))) ||
      (*(int *)(param_2 + 0xc) != *(int *)(param_3 + 0xc))) ||
     (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10))) {
    iVar3 = *(int *)(param_2 + 0xc);
    iVar4 = *(int *)(param_3 + 0xc);
    uVar10 = (long)iVar3 - (long)iVar9;
    uVar12 = (uint)((long)iVar4 - (long)iVar2);
    if ((uint)uVar10 == 0) {
      uVar10 = (ulong)-uVar12;
    }
    else if ((iVar4 != iVar2) && (-1 < (int)(uVar12 ^ (uint)uVar10))) {
      lVar11 = ((long)*(int *)(param_3 + 0x10) - (long)*(int *)(param_3 + 8)) * uVar10;
      lVar13 = ((long)*(int *)(param_2 + 0x10) - (long)*(int *)(param_2 + 8)) *
               ((long)iVar4 - (long)iVar2);
      uVar12 = 1;
      if (lVar11 < lVar13) {
        uVar12 = 0xffffffff;
      }
      uVar10 = (ulong)uVar12;
      if (lVar11 - lVar13 == 0) {
        return;
      }
    }
    if (0 < (int)uVar10) {
      iVar5 = *(int *)(param_2 + 8);
      lVar15 = (long)iVar5 - (long)*(int *)(param_2 + 0x10);
      iVar6 = *(int *)(param_3 + 8);
      lVar16 = (long)iVar6 - (long)*(int *)(param_3 + 0x10);
      lVar13 = (long)(iVar9 - iVar3);
      lVar11 = (long)(iVar2 - iVar4);
      lVar14 = lVar16 * lVar13 - lVar15 * lVar11;
      if ((((long)iVar6 - (long)iVar5) * lVar11 - lVar16 * (iVar2 - iVar9) < lVar14) &&
         (lVar15 * (iVar9 - iVar2) - (long)(iVar9 - iVar3) * (long)(iVar5 - iVar6) < lVar14)) {
        uVar18 = (long)*(int *)(param_2 + 0x10) * (long)iVar9 - (long)iVar5 * (long)iVar3;
        uVar17 = (long)*(int *)(param_3 + 0x10) * (long)iVar2 - (long)iVar6 * (long)iVar4;
        uVar7 = uVar18;
        FUN_109800ef0();
        uVar8 = uVar17;
        FUN_109800ef0();
        uVar10 = uVar7 - uVar8;
        lVar11 = (lVar11 - lVar13) - (ulong)(uVar7 < uVar8);
        FUN_109800ff4(uVar10,lVar11,lVar14);
        if (lVar11 != lVar14) {
          lVar13 = lVar11 * 2;
          uVar7 = uVar10;
          if (lVar14 <= lVar13) {
            uVar7 = uVar10 + 1;
          }
          lVar1 = lVar11 * -2;
          if (lVar13 < lVar14) {
            lVar1 = lVar13;
          }
          if (lVar14 + lVar11 * 2 < 0 != SCARRY8(lVar14,lVar11 * 2)) {
            lVar1 = lVar11 * -2;
            uVar7 = uVar10 + 0xffffffff;
          }
          uVar10 = 0x100000000;
          if (lVar1 < 0) {
            uVar10 = 0xffffffff00000000;
          }
          uStack_70 = 0;
          if (lVar1 != 0) {
            uStack_70 = uVar10;
          }
          uStack_70 = uStack_70 | uVar7 & 0xffffffff;
          FUN_109800ef0();
          FUN_109800ef0();
          uVar10 = uVar18 - uVar17;
          lVar11 = (lVar16 - lVar15) - (ulong)(uVar18 < uVar17);
          FUN_109800ff4(uVar10,lVar11,lVar14);
          if (lVar11 != lVar14) {
            lVar13 = lVar11 * 2;
            uVar7 = uVar10;
            if (lVar14 <= lVar13) {
              uVar7 = uVar10 + 1;
            }
            lVar16 = lVar11 * -2;
            if (lVar13 < lVar14) {
              lVar16 = lVar13;
            }
            if (lVar13 < -lVar14) {
              lVar16 = lVar11 * -2;
              uVar7 = uVar10 + 0xffffffff;
            }
            uVar10 = 0x100000000;
            if (lVar16 < 0) {
              uVar10 = 0xffffffff00000000;
            }
            uStack_68 = 0;
            if (lVar16 != 0) {
              uStack_68 = uVar10;
            }
            iVar9 = (int)uVar7;
            uStack_68 = uStack_68 | uVar7 & 0xffffffff;
            if ((iVar9 <= *(int *)(param_2 + 0x18)) &&
               (lVar16 < 0 || iVar9 < *(int *)(param_2 + 0x18))) {
              if ((iVar9 <= *(int *)(param_3 + 0x18)) &&
                 (lVar16 < 0 || iVar9 < *(int *)(param_3 + 0x18))) {
                FUN_1097e86f4(param_1,0,param_2,param_3,&uStack_70);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1097e823c; end: 1097e82a7;  */

void FUN_1097e823c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x38) < (int)param_2) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x0001097ea0b0(param_3,param_1 + 4,*(int *)(param_1 + 0x38),param_2,1);
    func_0x0001097ea0b0(param_3,lVar1 + 4,*(undefined4 *)(param_1 + 0x38),param_2,0xffffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1097e82a8; end: 1097e832f;  */

uint FUN_1097e82a8(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar1 > param_3 && iVar2 != param_3) && (iVar1 <= param_3 || param_3 <= iVar2)) {
    uVar4 = 1;
  }
  else {
    uVar3 = param_3 - iVar1;
    if ((uVar3 != 0 && iVar1 <= param_3) && iVar2 < param_3) {
      return 0xffffffff;
    }
    uVar4 = iVar2 - iVar1;
    if (uVar4 == 0) {
      return -uVar3;
    }
    if ((param_3 != iVar1) && (-1 < (int)(uVar4 ^ uVar3))) {
      lVar6 = ((long)param_2 - (long)*(int *)(param_1 + 8)) * (long)(int)uVar4;
      lVar5 = ((long)*(int *)(param_1 + 0x10) - (long)*(int *)(param_1 + 8)) * (long)(int)uVar3;
      uVar4 = (uint)(lVar6 - lVar5 != 0 && lVar5 <= lVar6);
      if (lVar6 < lVar5) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return uVar4;
}



/* Entry: 1097e8330; end: 1097e86f3;  */

void FUN_1097e8330(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_3 + 4);
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  if ((((iVar3 != iVar5) || (iVar4 != *(int *)(param_3 + 8))) ||
      (*(int *)(param_2 + 0xc) != *(int *)(param_3 + 0xc))) ||
     (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10))) {
    iVar9 = (int)param_1;
    if (iVar9 == iVar4) {
      uVar8 = 3;
    }
    else if (*(int *)(param_2 + 0x10) == iVar9) {
      uVar8 = 3;
    }
    else {
      uVar8 = 2;
    }
    iVar7 = iVar5;
    if (iVar9 != *(int *)(param_3 + 8)) {
      if (*(int *)(param_3 + 0x10) == iVar9) {
        iVar7 = *(int *)(param_3 + 0xc);
      }
      else {
        uVar8 = uVar8 & 1;
        iVar7 = 0;
      }
    }
    if (uVar8 == 1) {
      FUN_1097e82a8(param_3,param_1);
    }
    else if (uVar8 == 2) {
      FUN_1097e82a8(param_2,param_1,iVar7);
    }
    else if (uVar8 != 3) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar9 = iVar3;
      if (iVar3 <= iVar7) {
        iVar9 = iVar7;
      }
      iVar6 = *(int *)(param_3 + 0xc);
      iVar1 = iVar5;
      if (iVar6 <= iVar5) {
        iVar1 = iVar6;
      }
      if (iVar1 <= iVar9) {
        iVar9 = iVar5;
        if (iVar5 <= iVar6) {
          iVar9 = iVar6;
        }
        iVar1 = iVar3;
        if (iVar7 <= iVar3) {
          iVar1 = iVar7;
        }
        if (iVar1 <= iVar9) {
          uVar8 = 5;
          if (iVar7 - iVar3 != 0) {
            uVar8 = 7;
          }
          uVar2 = uVar8 & 3;
          if (iVar6 - iVar5 != 0) {
            uVar2 = uVar8;
          }
          uVar8 = uVar2 & 6;
          if (iVar3 != iVar5) {
            uVar8 = uVar2;
          }
          if ((3 < uVar8) && (5 < uVar8)) {
            if (uVar8 == 6) {
              if ((-1 < (iVar6 - iVar5 ^ iVar7 - iVar3)) && (iVar4 != *(int *)(param_3 + 8))) {
                FUN_109800ef0();
                FUN_109800ef0();
              }
            }
            else {
              FUN_109800ef0();
              FUN_109800ef0();
              FUN_109800ef0();
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1097e86f4; end: 1097e8847;  */

undefined8
FUN_1097e86f4(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)param_1;
  if (piVar9 == (int *)0x0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar2 = param_1[6];
    if (*(uint *)(lVar5 + 0xc) < uVar2) {
      piVar9 = param_1;
      func_0x0001097cf700();
    }
    else {
      piVar9 = *(int **)(lVar5 + 0x10);
      *(ulong *)(lVar5 + 0x10) = (long)piVar9 + (ulong)uVar2;
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) - uVar2;
    }
    if (piVar9 != (int *)0x0) goto LAB_1097e875c;
LAB_1097e8820:
    uVar3 = 1;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)piVar9;
LAB_1097e875c:
    *piVar9 = param_2;
    *(undefined8 *)(piVar9 + 6) = param_3;
    *(undefined8 *)(piVar9 + 8) = param_4;
    uVar3 = *param_5;
    *(undefined8 *)(piVar9 + 3) = param_5[1];
    *(undefined8 *)(piVar9 + 1) = uVar3;
    iVar6 = param_1[0x108];
    iVar4 = iVar6 + 1;
    if (iVar4 == param_1[0x109]) {
      piVar7 = param_1 + 0x108;
      FUN_1097e8848();
      if ((int)piVar7 != 0) goto LAB_1097e8820;
      iVar6 = param_1[0x108];
      iVar4 = iVar6 + 1;
    }
    lVar5 = *(long *)(param_1 + 0x10a);
    param_1[0x108] = iVar4;
    if (iVar6 != 0) {
      iVar6 = piVar9[3];
      do {
        iVar1 = iVar4 >> 1;
        piVar7 = *(int **)(lVar5 + (long)iVar1 * 8);
        iVar8 = iVar6 - piVar7[3];
        if ((((iVar8 == 0) && (iVar8 = piVar9[4] - piVar7[4], iVar8 == 0)) &&
            (iVar8 = piVar9[1] - piVar7[1], iVar8 == 0)) && (iVar8 = *piVar9 - *piVar7, iVar8 == 0))
        {
          if (piVar7 <= piVar9) break;
        }
        else if (-1 < iVar8) break;
        *(int **)(lVar5 + (long)iVar4 * 8) = piVar7;
        iVar4 = iVar1;
      } while (iVar1 != 1);
    }
    uVar3 = 0;
    *(int **)(lVar5 + (long)iVar4 * 8) = piVar9;
  }
  return uVar3;
}



/* Entry: 1097e8848; end: 1097e88d3;  */

undefined8 FUN_1097e8848(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = iVar1 << 1;
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == param_1 + 0x10) {
    if (0 < iVar1) {
      lVar3 = (ulong)uVar2 << 3;
      _malloc();
      if (lVar3 != 0) {
        _memcpy();
        goto LAB_1097e88b4;
      }
    }
  }
  else if ((-1 < iVar1) && (_realloc(lVar3,(ulong)uVar2 << 3), lVar3 != 0)) {
LAB_1097e88b4:
    *(long *)(param_1 + 8) = lVar3;
    return 0;
  }
  return 1;
}



/* Entry: 1097e88d4; end: 1097e9187;  */

/* WARNING: Type propagation algorithm not settling */

int FUN_1097e88d4(int *param_1,int *******param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int *******pppppppiVar9;
  uint uVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  int *piVar25;
  ulong uVar26;
  int *******pppppppiVar27;
  int *******pppppppiVar28;
  undefined8 *puVar29;
  int *******pppppppiVar30;
  ulong uVar31;
  int *******pppppppiVar32;
  int *******pppppppiVar33;
  int *******pppppppiVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  int *piStack_2d58;
  int aiStack_2d48 [52];
  int aiStack_2c78 [500];
  int *******pppppppiStack_24a8;
  undefined8 *puStack_24a0;
  undefined8 uStack_2498;
  uint uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined1 *puStack_2478;
  undefined1 auStack_2470 [1000];
  undefined8 uStack_2088;
  undefined1 *puStack_2080;
  undefined1 auStack_2078 [8];
  undefined8 uStack_2070;
  int *piStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = (uint)param_2;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1[0xd];
  uVar26 = (ulong)uVar3;
  if (uVar3 == 0) {
    iVar7 = 0;
    piStack_2d58 = param_1;
    goto LAB_1097e9128;
  }
  if ((int)uVar3 < 0x1a) {
    piVar14 = aiStack_2d48;
    if (0 < (int)uVar3) {
      piStack_2d58 = aiStack_2c78;
      goto LAB_1097e8960;
    }
    piStack_2d58 = aiStack_2c78;
  }
  else {
    piStack_2d58 = (int *)((ulong)uVar3 * 0x58 + 8);
    uVar17 = uVar10;
    _malloc();
    if (piStack_2d58 == (int *)0x0) {
      iVar7 = 1;
      uVar10 = uVar17;
      goto LAB_1097e9128;
    }
    piVar14 = piStack_2d58 + (ulong)uVar3 * 0x14;
LAB_1097e8960:
    uVar31 = 0;
    puVar29 = *(undefined8 **)(param_1 + 0x10);
    piVar25 = piStack_2d58;
    do {
      *(int **)(piVar14 + uVar31 * 2) = piVar25;
      *piVar25 = 2;
      param_2 = (int *******)(ulong)*(uint *)(puVar29 + 2);
      piVar25[2] = *(uint *)(puVar29 + 2);
      puVar8 = puVar29;
      FUN_1097e9188();
      piVar25[1] = (int)puVar8;
      uVar36 = *(undefined8 *)((long)puVar29 + 0x14);
      uVar35 = *(undefined8 *)((long)puVar29 + 0xc);
      uVar37 = *puVar29;
      *(undefined8 *)(piVar25 + 6) = puVar29[1];
      *(undefined8 *)(piVar25 + 4) = uVar37;
      *(undefined8 *)(piVar25 + 9) = uVar36;
      *(undefined8 *)(piVar25 + 7) = uVar35;
      uVar31 = uVar31 + 1;
      piVar25[0xe] = 0;
      piVar25[0xf] = 0;
      piVar25[0x10] = 0;
      piVar25[0x11] = 0;
      piVar25[0xc] = 0;
      piVar25[0xd] = 0;
      piVar25 = piVar25 + 0x14;
      puVar29 = (undefined8 *)((long)puVar29 + 0x1c);
    } while (uVar26 != uVar31);
  }
  iVar4 = param_1[0xc];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  do {
    uVar6 = (int)uVar26 * 10;
    uVar17 = uVar6 / 0xd;
    if (uVar6 / 0xd < 2) {
      uVar17 = 1;
    }
    uVar2 = 0xb;
    if (0x19 < uVar6 - 0x75) {
      uVar2 = uVar17;
    }
    uVar26 = (ulong)uVar2;
    bVar1 = 1 < uVar2;
    uVar31 = (ulong)(uVar3 - uVar2);
    piVar25 = piVar14;
    uVar21 = uVar26;
    if (uVar3 - uVar2 != 0) {
      do {
        piVar23 = *(int **)piVar25;
        puVar24 = *(uint **)(piVar14 + uVar21 * 2);
        param_2 = (int *******)(ulong)puVar24[2];
        iVar7 = piVar23[2] - puVar24[2];
        if (iVar7 == 0) {
          param_2 = (int *******)(ulong)puVar24[1];
          iVar7 = piVar23[1] - puVar24[1];
          if (iVar7 == 0) {
            param_2 = (int *******)(ulong)*puVar24;
            iVar7 = *piVar23 - *puVar24;
            if (iVar7 == 0) {
              iVar7 = (int)((ulong)((long)piVar23 - (long)puVar24) >> 2) * -0x55555555;
            }
          }
        }
        if (0 < iVar7) {
          *(uint **)piVar25 = puVar24;
          *(int **)(piVar14 + uVar21 * 2) = piVar23;
          bVar1 = true;
        }
        uVar31 = uVar31 - 1;
        piVar25 = piVar25 + 2;
        uVar21 = (ulong)((int)uVar21 + 1);
      } while (uVar31 != 0);
    }
  } while (bVar1);
  pppppppiVar33 = (int *******)0x0;
  (piVar14 + (long)(int)uVar3 * 2)[0] = 0;
  (piVar14 + (long)(int)uVar3 * 2)[1] = 0;
  pppppppiStack_24a8 = (int *******)0x0;
  puStack_24a0 = &uStack_2488;
  uStack_2498 = 0;
  uStack_2490 = 0x20;
  uStack_2488 = 0;
  uStack_2480 = 0x3e8000003e8;
  puStack_2478 = auStack_2470;
  uStack_2088 = 0x40000000000;
  puStack_2080 = auStack_2078;
  uStack_2070 = 0;
  uVar3 = 1;
  if (uVar10 == 0) {
    uVar3 = 0xffffffff;
  }
  pppppppiVar28 = (int *******)0x80000000;
  pppppppiVar30 = (int *******)0x0;
  piStack_78 = piVar14;
LAB_1097e8b04:
  uVar10 = (uint)param_2;
  pppppppiVar27 = *(int ********)(puStack_2080 + 8);
  pppppppiVar13 = *(int ********)piStack_78;
  if (pppppppiVar27 == (int *******)0x0) {
LAB_1097e8c70:
    piStack_78 = piStack_78 + 2;
    pppppppiVar27 = pppppppiVar13;
joined_r0x0001097e8c7c:
    if (pppppppiVar27 == (int *******)0x0) {
      iVar7 = 0;
      goto LAB_1097e90f0;
    }
  }
  else {
    if (pppppppiVar13 != (int *******)0x0) {
      iVar7 = *(int *)(pppppppiVar13 + 1) - *(int *)(pppppppiVar27 + 1);
      if ((*(int *)(pppppppiVar13 + 1) - *(int *)(pppppppiVar27 + 1) == 0) &&
         (iVar7 = *(int *)((long)pppppppiVar13 + 4) - *(int *)((long)pppppppiVar27 + 4), iVar7 == 0)
         ) {
        iVar7 = *(int *)pppppppiVar13 - *(int *)pppppppiVar27;
        if (*(int *)pppppppiVar13 - *(int *)pppppppiVar27 == 0) {
          iVar7 = (int)((ulong)((long)pppppppiVar13 - (long)pppppppiVar27) >> 2) * -0x55555555;
        }
      }
      if (iVar7 < 0) goto LAB_1097e8c70;
    }
    iVar15 = (int)uStack_2088;
    lVar16 = (long)(int)uStack_2088;
    iVar7 = (int)uStack_2088 + -1;
    uStack_2088 = CONCAT44(uStack_2088._4_4_,iVar7);
    if (iVar7 != 0) {
      piVar14 = *(int **)(puStack_2080 + lVar16 * 8);
      if (iVar15 < 3) {
        lVar16 = 1;
      }
      else {
        iVar5 = piVar14[2];
        iVar19 = 2;
        iVar18 = 1;
        do {
          iVar20 = iVar7;
          if (iVar19 != iVar7) {
            piVar25 = *(int **)(puStack_2080 + ((long)iVar19 | 1U) * 8);
            puVar24 = *(uint **)(puStack_2080 + (long)iVar19 * 8);
            param_2 = (int *******)(ulong)puVar24[2];
            iVar22 = piVar25[2] - puVar24[2];
            if (iVar22 == 0) {
              param_2 = (int *******)(ulong)puVar24[1];
              iVar22 = piVar25[1] - puVar24[1];
              if (iVar22 == 0) {
                param_2 = (int *******)(ulong)*puVar24;
                iVar22 = *piVar25 - *puVar24;
                if (iVar22 == 0) {
                  iVar22 = (int)((ulong)((long)piVar25 - (long)puVar24) >> 2) * -0x55555555;
                }
              }
            }
            iVar20 = (int)((long)iVar19 | 1U);
            if (-1 < iVar22) {
              iVar20 = iVar19;
            }
          }
          piVar25 = *(int **)(puStack_2080 + (long)iVar20 * 8);
          iVar19 = piVar25[2] - iVar5;
          if ((piVar25[2] - iVar5 == 0) &&
             (iVar19 = piVar25[1] - piVar14[1], piVar25[1] - piVar14[1] == 0)) {
            param_2 = (int *******)0xaaaaaaab;
            iVar19 = *piVar25 - *piVar14;
            if (*piVar25 - *piVar14 == 0) {
              iVar19 = (int)((ulong)((long)piVar25 - (long)piVar14) >> 2) * -0x55555555;
            }
          }
          lVar16 = (long)iVar18;
          if (-1 < iVar19) goto LAB_1097e8c3c;
          *(int **)(puStack_2080 + lVar16 * 8) = piVar25;
          iVar19 = iVar20 * 2;
          iVar18 = iVar20;
        } while (iVar19 < iVar15);
        lVar16 = (long)iVar20;
      }
LAB_1097e8c3c:
      uVar10 = (uint)param_2;
      *(int **)(puStack_2080 + lVar16 * 8) = piVar14;
      goto joined_r0x0001097e8c7c;
    }
    *(undefined8 *)(puStack_2080 + 8) = 0;
  }
  pppppppiVar13 = pppppppiVar33;
  if (*(int *)(pppppppiVar27 + 1) != (int)pppppppiVar28) {
    while (pppppppiVar13 != (int *******)0x0) {
      pppppppiVar11 = pppppppiVar13 + 6;
      uVar10 = *(uint *)(pppppppiVar13 + 3);
      pppppppiVar32 = (int *******)pppppppiVar13[5];
      if (*pppppppiVar11 == (int ******)0x0) {
        pppppppiVar34 = pppppppiVar32;
        if (pppppppiVar32 == (int *******)0x0) break;
        do {
          if (pppppppiVar34[6] != (int ******)0x0) {
            pppppppiVar9 = pppppppiVar13;
            param_2 = pppppppiVar34;
            FUN_1097e950c();
            if ((int)pppppppiVar9 != 0) {
              ppppppiVar12 = pppppppiVar34[6];
              pppppppiVar13[7] = pppppppiVar34[7];
              *pppppppiVar11 = ppppppiVar12;
              pppppppiVar34[6] = (int ******)0x0;
            }
            break;
          }
          pppppppiVar9 = pppppppiVar34 + 5;
          pppppppiVar34 = (int *******)*pppppppiVar9;
        } while ((int *******)*pppppppiVar9 != (int *******)0x0);
      }
      do {
        pppppppiVar34 = pppppppiVar32;
        if (pppppppiVar34 == (int *******)0x0) {
          if (*pppppppiVar11 != (int ******)0x0) {
            FUN_1097e94a4(pppppppiVar13,pppppppiVar28,param_1);
            param_2 = pppppppiVar28;
          }
          goto LAB_1097e8da8;
        }
        if (pppppppiVar34[6] != (int ******)0x0) {
          param_2 = pppppppiVar28;
          FUN_1097e94a4(pppppppiVar34,pppppppiVar28,param_1);
        }
        uVar10 = *(int *)(pppppppiVar34 + 3) + uVar10;
        pppppppiVar32 = (int *******)pppppppiVar34[5];
      } while (((uVar10 & uVar3) != 0) ||
              ((pppppppiVar32 != (int *******)0x0 &&
               (pppppppiVar9 = pppppppiVar34, param_2 = pppppppiVar32, FUN_1097e950c(),
               (int)pppppppiVar9 != 0))));
      pppppppiVar32 = (int *******)*pppppppiVar11;
      if (pppppppiVar32 != pppppppiVar34) {
        if (pppppppiVar32 == (int *******)0x0) {
LAB_1097e8d68:
          pppppppiVar32 = pppppppiVar13;
          param_2 = pppppppiVar34;
          FUN_1097e950c();
          if ((int)pppppppiVar32 != 0) goto LAB_1097e8d80;
          *(int *)(pppppppiVar13 + 7) = (int)pppppppiVar28;
        }
        else {
          param_2 = pppppppiVar34;
          FUN_1097e950c();
          if ((int)pppppppiVar32 == 0) {
            FUN_1097e94a4(pppppppiVar13,pppppppiVar28,param_1);
            goto LAB_1097e8d68;
          }
        }
        *pppppppiVar11 = (int ******)pppppppiVar34;
      }
LAB_1097e8d80:
      pppppppiVar13 = (int *******)pppppppiVar34[5];
    }
LAB_1097e8da8:
    pppppppiVar28 = (int *******)(ulong)*(uint *)(pppppppiVar27 + 1);
  }
  iVar15 = (int)pppppppiVar28;
  iVar7 = *(int *)pppppppiVar27;
  if (iVar7 == 0) {
    pppppppiVar11 = (int *******)pppppppiVar27[2];
    *pppppppiVar27 = (int ******)pppppppiStack_24a8;
    pppppppiStack_24a8 = pppppppiVar27;
    pppppppiVar13 = (int *******)pppppppiVar11[4];
    pppppppiVar27 = (int *******)pppppppiVar11[5];
    pppppppiVar32 = pppppppiVar27;
    if (pppppppiVar13 != (int *******)0x0) {
      pppppppiVar13[5] = (int ******)pppppppiVar27;
      pppppppiVar32 = pppppppiVar33;
    }
    pppppppiVar33 = pppppppiVar32;
    if (pppppppiVar27 != (int *******)0x0) {
      pppppppiVar27[4] = (int ******)pppppppiVar13;
    }
    if ((pppppppiVar30 == pppppppiVar11) &&
       (pppppppiVar30 = pppppppiVar27, (int *******)pppppppiVar11[4] != (int *******)0x0)) {
      pppppppiVar30 = (int *******)pppppppiVar11[4];
    }
    if (pppppppiVar11[6] != (int ******)0x0) {
      param_2 = (int *******)(ulong)*(uint *)((long)pppppppiVar11 + 0x14);
      FUN_1097e94a4(pppppppiVar11,param_2,param_1);
    }
    if (pppppppiVar13 == (int *******)0x0) goto LAB_1097e8b04;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 2) goto LAB_1097e8b04;
      pppppppiVar13 = pppppppiVar27 + 2;
      pppppppiVar32 = pppppppiVar13;
      if (pppppppiVar30 != (int *******)0x0) {
        iVar7 = iVar15;
        FUN_1097e96b8(pppppppiVar28,pppppppiVar30,pppppppiVar13);
        if (iVar7 < 0) {
          do {
            pppppppiVar32 = pppppppiVar30;
            pppppppiVar30 = (int *******)pppppppiVar32[5];
            if (pppppppiVar30 == (int *******)0x0) {
              pppppppiVar32[5] = (int ******)pppppppiVar13;
              pppppppiVar27[6] = (int ******)pppppppiVar32;
              pppppppiVar27[7] = (int ******)0x0;
              pppppppiVar32 = pppppppiVar33;
              goto LAB_1097e8f88;
            }
            iVar7 = iVar15;
            FUN_1097e96b8(pppppppiVar28,pppppppiVar30,pppppppiVar13);
          } while (iVar7 < 0);
          pppppppiVar32[5] = (int ******)pppppppiVar13;
          pppppppiVar27[6] = (int ******)pppppppiVar32;
          pppppppiVar27[7] = (int ******)pppppppiVar30;
          pppppppiVar30[4] = (int ******)pppppppiVar13;
          pppppppiVar32 = pppppppiVar33;
        }
        else if (iVar7 == 0) {
          ppppppiVar12 = pppppppiVar30[5];
          pppppppiVar27[6] = (int ******)pppppppiVar30;
          pppppppiVar27[7] = ppppppiVar12;
          if (ppppppiVar12 != (int ******)0x0) {
            ppppppiVar12[4] = (int *****)pppppppiVar13;
          }
          pppppppiVar30[5] = (int ******)pppppppiVar13;
          pppppppiVar32 = pppppppiVar33;
        }
        else {
          do {
            pppppppiVar11 = pppppppiVar30;
            pppppppiVar30 = (int *******)pppppppiVar11[4];
            if (pppppppiVar30 == (int *******)0x0) {
              pppppppiVar11[4] = (int ******)pppppppiVar13;
              pppppppiVar27[6] = (int ******)0x0;
              pppppppiVar27[7] = (int ******)pppppppiVar11;
              goto LAB_1097e8f88;
            }
            iVar7 = iVar15;
            FUN_1097e96b8(pppppppiVar28,pppppppiVar30,pppppppiVar13);
          } while (0 < iVar7);
          pppppppiVar11[4] = (int ******)pppppppiVar13;
          pppppppiVar27[6] = (int ******)pppppppiVar30;
          pppppppiVar27[7] = (int ******)pppppppiVar11;
          pppppppiVar30[5] = (int ******)pppppppiVar13;
          pppppppiVar32 = pppppppiVar33;
        }
      }
LAB_1097e8f88:
      pppppppiVar33 = pppppppiVar32;
      uVar10 = *(uint *)((long)pppppppiVar27 + 0x24);
      uVar26 = (ulong)uVar10;
      pppppppiVar32 = pppppppiVar13;
      FUN_1097e9188();
      pppppppiVar30 = pppppppiStack_24a8;
      if (pppppppiStack_24a8 == (int *******)0x0) {
        if (*(uint *)((long)puStack_24a0 + 0xc) < uStack_2490) {
          pppppppiVar30 = (int *******)&pppppppiStack_24a8;
          func_0x0001097cf700();
        }
        else {
          pppppppiVar30 = (int *******)puStack_24a0[2];
          puStack_24a0[2] = (long)pppppppiVar30 + (ulong)uStack_2490;
          *(uint *)((long)puStack_24a0 + 0xc) = *(uint *)((long)puStack_24a0 + 0xc) - uStack_2490;
        }
        if (pppppppiVar30 == (int *******)0x0) goto LAB_1097e90e4;
      }
      else {
        pppppppiStack_24a8 = (int *******)*pppppppiStack_24a8;
      }
      *(int *)pppppppiVar30 = 0;
      pppppppiVar30[2] = (int ******)pppppppiVar13;
      pppppppiVar30[3] = (int ******)0x0;
      *(ulong *)((long)pppppppiVar30 + 4) = (ulong)pppppppiVar32 & 0xffffffff | uVar26 << 0x20;
      iVar7 = (int)uStack_2088 + 1;
      iVar15 = (int)uStack_2088;
      if (iVar7 == uStack_2088._4_4_) {
        iVar7 = (int)&uStack_2088;
        FUN_1097e9bc8();
        if (iVar7 != 0) goto LAB_1097e90e4;
        iVar7 = (int)uStack_2088 + 1;
        iVar15 = (int)uStack_2088;
      }
      uStack_2088 = CONCAT44(uStack_2088._4_4_,iVar7);
      if (iVar15 != 0) {
        iVar15 = *(int *)(pppppppiVar30 + 1);
        do {
          iVar5 = iVar7 >> 1;
          piVar14 = *(int **)(puStack_2080 + (long)iVar5 * 8);
          iVar19 = iVar15 - piVar14[2];
          if ((iVar15 - piVar14[2] == 0) &&
             (iVar19 = *(int *)((long)pppppppiVar30 + 4) - piVar14[1], iVar19 == 0)) {
            iVar19 = *(int *)pppppppiVar30 - *piVar14;
            if (*(int *)pppppppiVar30 - *piVar14 == 0) {
              iVar19 = (int)((ulong)((long)pppppppiVar30 - (long)piVar14) >> 2) * -0x55555555;
            }
          }
        } while ((iVar19 < 0) &&
                (*(int **)(puStack_2080 + (long)iVar7 * 8) = piVar14, iVar7 = iVar5, iVar5 != 1));
      }
      *(int ********)(puStack_2080 + (long)iVar7 * 8) = pppppppiVar30;
      param_2 = (int *******)pppppppiVar27[6];
      ppppppiVar12 = pppppppiVar27[7];
      if (param_2 != (int *******)0x0) {
        pppppppiVar30 = (int *******)&pppppppiStack_24a8;
        FUN_1097e91e4(pppppppiVar30,param_2,pppppppiVar13);
        uVar10 = (uint)param_2;
        if ((int)pppppppiVar30 != 0) goto LAB_1097e90e4;
      }
      pppppppiVar30 = pppppppiVar13;
      if (ppppppiVar12 == (int ******)0x0) goto LAB_1097e8b04;
      pppppppiVar27 = (int *******)&pppppppiStack_24a8;
      param_2 = pppppppiVar13;
      FUN_1097e91e4(pppppppiVar27,pppppppiVar13,ppppppiVar12);
      uVar10 = (uint)param_2;
      iVar7 = (int)pppppppiVar27;
      goto joined_r0x0001097e90a0;
    }
    pppppppiVar13 = (int *******)pppppppiVar27[2];
    pppppppiVar32 = (int *******)pppppppiVar27[3];
    *pppppppiVar27 = (int ******)pppppppiStack_24a8;
    pppppppiStack_24a8 = pppppppiVar27;
    if (pppppppiVar32 != (int *******)pppppppiVar13[5]) goto LAB_1097e8b04;
    param_2 = (int *******)pppppppiVar13[4];
    pppppppiVar27 = (int *******)pppppppiVar32[5];
    pppppppiVar11 = pppppppiVar27;
    pppppppiVar34 = pppppppiVar32;
    if (param_2 != (int *******)0x0) {
      param_2[5] = (int ******)pppppppiVar32;
      pppppppiVar11 = (int *******)pppppppiVar32[5];
      pppppppiVar34 = pppppppiVar33;
    }
    pppppppiVar33 = param_2;
    if (pppppppiVar11 != (int *******)0x0) {
      pppppppiVar11[4] = (int ******)pppppppiVar13;
      pppppppiVar33 = (int *******)pppppppiVar13[4];
    }
    pppppppiVar32[4] = (int ******)pppppppiVar33;
    pppppppiVar13[5] = (int ******)pppppppiVar11;
    pppppppiVar32[5] = (int ******)pppppppiVar13;
    pppppppiVar13[4] = (int ******)pppppppiVar32;
    pppppppiVar33 = pppppppiVar34;
    if (param_2 != (int *******)0x0) {
      iVar7 = (int)&pppppppiStack_24a8;
      FUN_1097e91e4();
      uVar10 = (uint)param_2;
      if (iVar7 == 0) goto joined_r0x0001097e8ed4;
      goto LAB_1097e90e4;
    }
  }
joined_r0x0001097e8ed4:
  if (pppppppiVar27 == (int *******)0x0) goto LAB_1097e8b04;
  pppppppiVar32 = (int *******)&pppppppiStack_24a8;
  FUN_1097e91e4(pppppppiVar32,pppppppiVar13,pppppppiVar27);
  uVar10 = (uint)pppppppiVar13;
  iVar7 = (int)pppppppiVar32;
  param_2 = pppppppiVar13;
joined_r0x0001097e90a0:
  if (iVar7 != 0) goto LAB_1097e90e4;
  goto LAB_1097e8b04;
LAB_1097e90e4:
  iVar7 = 1;
LAB_1097e90f0:
  if (puStack_2080 != auStack_2078) {
    _free();
  }
  FUN_1097cf6a0(&pppppppiStack_24a8);
  param_1[0xc] = iVar4;
  if (piStack_2d58 != aiStack_2c78) {
    _free();
  }
LAB_1097e9128:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return iVar7;
  }
  ___stack_chk_fail();
  iVar7 = uVar10 - piStack_2d58[1];
  if (iVar7 == 0) {
    iVar4 = *piStack_2d58;
  }
  else {
    if (piStack_2d58[3] == uVar10) {
      return piStack_2d58[2];
    }
    iVar4 = *piStack_2d58;
    iVar15 = piStack_2d58[3] - piStack_2d58[1];
    if (iVar15 != 0) {
      iVar5 = 0;
      if ((long)iVar15 != 0) {
        iVar5 = (int)((((long)piStack_2d58[2] - (long)iVar4) * (long)iVar7) / (long)iVar15);
      }
      return iVar4 + iVar5;
    }
  }
  return iVar4;
}



/* Entry: 1097e9188; end: 1097e91e3;  */

int FUN_1097e9188(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1[1];
  if (iVar3 == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_1[3] == param_2) {
      return param_1[2];
    }
    iVar1 = *param_1;
    iVar4 = param_1[3] - param_1[1];
    if (iVar4 != 0) {
      iVar2 = 0;
      if ((long)iVar4 != 0) {
        iVar2 = (int)((((long)param_1[2] - (long)iVar1) * (long)iVar3) / (long)iVar4);
      }
      return iVar1 + iVar2;
    }
  }
  return iVar1;
}



/* Entry: 1097e91e4; end: 1097e94a3;  */

void FUN_1097e91e4(undefined8 param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar3 = *param_2;
  iVar4 = *param_3;
  if ((((iVar3 != iVar4) || (param_2[1] != param_3[1])) || (param_2[2] != param_3[2])) ||
     (param_2[3] != param_3[3])) {
    iVar5 = param_2[2];
    iVar6 = param_3[2];
    uVar13 = (long)iVar5 - (long)iVar3;
    uVar15 = (uint)((long)iVar6 - (long)iVar4);
    if ((uint)uVar13 == 0) {
      uVar13 = (ulong)-uVar15;
    }
    else if ((iVar6 != iVar4) && (-1 < (int)(uVar15 ^ (uint)uVar13))) {
      lVar14 = ((long)param_3[3] - (long)param_3[1]) * uVar13;
      lVar16 = ((long)param_2[3] - (long)param_2[1]) * ((long)iVar6 - (long)iVar4);
      uVar15 = 1;
      if (lVar14 < lVar16) {
        uVar15 = 0xffffffff;
      }
      uVar13 = (ulong)uVar15;
      if (lVar14 - lVar16 == 0) {
        return;
      }
    }
    if (0 < (int)uVar13) {
      iVar7 = param_2[1];
      lVar18 = (long)iVar7 - (long)param_2[3];
      iVar8 = param_3[1];
      lVar19 = (long)iVar8 - (long)param_3[3];
      lVar16 = (long)(iVar3 - iVar5);
      lVar14 = (long)(iVar4 - iVar6);
      uVar13 = lVar19 * lVar16 - lVar18 * lVar14;
      lVar17 = ((long)iVar8 - (long)iVar7) * lVar14 - lVar19 * (iVar4 - iVar3);
      if ((long)uVar13 < 0) {
        if (lVar17 <= (long)uVar13) {
          return;
        }
      }
      else if ((long)uVar13 <= lVar17) {
        return;
      }
      lVar17 = lVar18 * (iVar3 - iVar4) - (long)(iVar3 - iVar5) * (long)(iVar7 - iVar8);
      if ((long)uVar13 < 0) {
        if (lVar17 <= (long)uVar13) {
          return;
        }
      }
      else if ((long)uVar13 <= lVar17) {
        return;
      }
      uVar21 = (long)param_2[3] * (long)iVar3 - (long)iVar7 * (long)iVar5;
      uVar20 = (long)param_3[3] * (long)iVar4 - (long)iVar8 * (long)iVar6;
      uVar12 = uVar21;
      FUN_109800ef0();
      uVar9 = uVar20;
      FUN_109800ef0();
      uVar10 = uVar12 - uVar9;
      uVar12 = (lVar14 - lVar16) - (ulong)(uVar12 < uVar9);
      FUN_109800ff4(uVar10,uVar12,uVar13);
      if (uVar12 != uVar13) {
        uVar9 = -uVar12;
        if (-1 < (long)(uVar12 ^ uVar13)) {
          uVar9 = uVar12;
        }
        uVar1 = 0x100000000;
        uVar2 = uVar10;
        if ((long)uVar13 <= (long)(uVar9 * 2)) {
          uVar1 = 0;
          uVar2 = ((long)uVar10 >> 0x3f | 1U) + uVar10;
        }
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar2;
          uVar9 = uVar1;
        }
        FUN_109800ef0();
        FUN_109800ef0();
        uVar12 = uVar21 - uVar20;
        uVar21 = (lVar19 - lVar18) - (ulong)(uVar21 < uVar20);
        FUN_109800ff4(uVar12,uVar21,uVar13);
        if (uVar21 != uVar13) {
          uVar20 = -uVar21;
          if (-1 < (long)(uVar21 ^ uVar13)) {
            uVar20 = uVar21;
          }
          uVar1 = 0x100000000;
          uVar2 = uVar12;
          if ((long)uVar13 <= (long)(uVar20 * 2)) {
            uVar1 = 0;
            uVar2 = ((long)uVar12 >> 0x3f | 1U) + uVar12;
          }
          uVar13 = 0;
          if (uVar21 != 0) {
            uVar12 = uVar2;
            uVar13 = uVar1;
          }
          piVar11 = param_2;
          FUN_1097e9c54(param_2,uVar10 & 0xffffffff | uVar9,uVar12 & 0xffffffff | uVar13);
          if (((int)piVar11 != 0) &&
             (piVar11 = param_3,
             FUN_1097e9c54(param_3,uVar10 & 0xffffffff | uVar9,uVar12 & 0xffffffff | uVar13),
             (int)piVar11 != 0)) {
            uStack_68 = (undefined4)uVar10;
            uStack_64 = (undefined4)uVar12;
            FUN_1097e9a7c(param_1,1,param_2,param_3,&uStack_68);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1097e94a4; end: 1097e950b;  */

void FUN_1097e94a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x38) < (int)param_2) {
    func_0x0001097ea0b0(param_3,param_1,*(int *)(param_1 + 0x38),param_2,1);
    func_0x0001097ea0b0(param_3,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                        param_2,0xffffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1097e950c; end: 1097e962f;  */

bool FUN_1097e950c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar1 = *param_1;
  iVar5 = *param_2;
  bVar4 = iVar1 == iVar5;
  if ((((bVar4) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return true;
  }
  iVar2 = param_2[2];
  uVar3 = param_1[2] - iVar1;
  if (uVar3 == 0) {
    if (iVar2 != iVar5) {
      return false;
    }
    uVar6 = (ulong)(uint)param_1[1];
    uVar7 = (ulong)(uint)param_2[1];
  }
  else {
    if (iVar2 == iVar5) {
      return false;
    }
    if ((int)(iVar2 - iVar5 ^ uVar3) < 0) {
      return false;
    }
    uVar6 = (ulong)param_1[1];
    uVar7 = (ulong)param_2[1];
    if (((long)param_2[3] - uVar7) * (long)(int)uVar3 -
        ((long)param_1[3] - uVar6) * (long)(iVar2 - iVar5) != 0) {
      return false;
    }
  }
  if ((int)uVar6 != (int)uVar7) {
    if (param_1[3] == param_2[3]) {
      bVar4 = param_1[2] == iVar2;
    }
    else {
      if ((int)uVar6 < (int)uVar7) {
        param_1 = param_2;
        uVar7 = uVar6;
        iVar5 = iVar1;
      }
      FUN_1097e9630(param_1,uVar7,iVar5);
      bVar4 = (int)param_1 == 0;
    }
  }
  return bVar4;
}



/* Entry: 1097e9630; end: 1097e96b7;  */

uint FUN_1097e9630(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if ((iVar1 > param_3 && iVar2 != param_3) && (iVar1 <= param_3 || param_3 <= iVar2)) {
    uVar4 = 1;
  }
  else {
    uVar3 = param_3 - iVar1;
    if ((uVar3 != 0 && iVar1 <= param_3) && iVar2 < param_3) {
      return 0xffffffff;
    }
    uVar4 = iVar2 - iVar1;
    if (uVar4 == 0) {
      return -uVar3;
    }
    if ((param_3 != iVar1) && (-1 < (int)(uVar4 ^ uVar3))) {
      lVar6 = ((long)param_2 - (long)param_1[1]) * (long)(int)uVar4;
      lVar5 = ((long)param_1[3] - (long)param_1[1]) * (long)(int)uVar3;
      uVar4 = (uint)(lVar6 - lVar5 != 0 && lVar5 <= lVar6);
      if (lVar6 < lVar5) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return uVar4;
}



/* Entry: 1097e96b8; end: 1097e9a7b;  */

void FUN_1097e96b8(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = *param_3;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  if ((((iVar3 != iVar5) || (iVar4 != param_3[1])) || (param_2[2] != param_3[2])) ||
     (param_2[3] != param_3[3])) {
    iVar9 = (int)param_1;
    if (iVar9 == iVar4) {
      uVar8 = 3;
    }
    else if (param_2[3] == iVar9) {
      uVar8 = 3;
    }
    else {
      uVar8 = 2;
    }
    iVar7 = iVar5;
    if (iVar9 != param_3[1]) {
      if (param_3[3] == iVar9) {
        iVar7 = param_3[2];
      }
      else {
        uVar8 = uVar8 & 1;
        iVar7 = 0;
      }
    }
    if (uVar8 == 1) {
      FUN_1097e9630(param_3,param_1);
    }
    else if (uVar8 == 2) {
      FUN_1097e9630(param_2,param_1,iVar7);
    }
    else if (uVar8 != 3) {
      iVar7 = param_2[2];
      iVar9 = iVar3;
      if (iVar3 <= iVar7) {
        iVar9 = iVar7;
      }
      iVar6 = param_3[2];
      iVar1 = iVar5;
      if (iVar6 <= iVar5) {
        iVar1 = iVar6;
      }
      if (iVar1 <= iVar9) {
        iVar9 = iVar5;
        if (iVar5 <= iVar6) {
          iVar9 = iVar6;
        }
        iVar1 = iVar3;
        if (iVar7 <= iVar3) {
          iVar1 = iVar7;
        }
        if (iVar1 <= iVar9) {
          uVar8 = 5;
          if (iVar7 - iVar3 != 0) {
            uVar8 = 7;
          }
          uVar2 = uVar8 & 3;
          if (iVar6 - iVar5 != 0) {
            uVar2 = uVar8;
          }
          uVar8 = uVar2 & 6;
          if (iVar3 != iVar5) {
            uVar8 = uVar2;
          }
          if ((3 < uVar8) && (5 < uVar8)) {
            if (uVar8 == 6) {
              if ((-1 < (iVar6 - iVar5 ^ iVar7 - iVar3)) && (iVar4 != param_3[1])) {
                FUN_109800ef0();
                FUN_109800ef0();
              }
            }
            else {
              FUN_109800ef0();
              FUN_109800ef0();
              FUN_109800ef0();
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1097e9a7c; end: 1097e9bc7;  */

undefined8
FUN_1097e9a7c(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)param_1;
  if (piVar9 == (int *)0x0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar2 = param_1[6];
    if (*(uint *)(lVar5 + 0xc) < uVar2) {
      piVar9 = param_1;
      func_0x0001097cf700();
    }
    else {
      piVar9 = *(int **)(lVar5 + 0x10);
      *(ulong *)(lVar5 + 0x10) = (long)piVar9 + (ulong)uVar2;
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) - uVar2;
    }
    if (piVar9 != (int *)0x0) goto LAB_1097e9ae4;
LAB_1097e9ba0:
    uVar3 = 1;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)piVar9;
LAB_1097e9ae4:
    *piVar9 = param_2;
    *(undefined8 *)(piVar9 + 4) = param_3;
    *(undefined8 *)(piVar9 + 6) = param_4;
    *(undefined8 *)(piVar9 + 1) = *param_5;
    iVar6 = param_1[0x108];
    iVar4 = iVar6 + 1;
    if (iVar4 == param_1[0x109]) {
      piVar7 = param_1 + 0x108;
      FUN_1097e9bc8();
      if ((int)piVar7 != 0) goto LAB_1097e9ba0;
      iVar6 = param_1[0x108];
      iVar4 = iVar6 + 1;
    }
    lVar5 = *(long *)(param_1 + 0x10a);
    param_1[0x108] = iVar4;
    if (iVar6 != 0) {
      iVar6 = piVar9[2];
      do {
        iVar1 = iVar4 >> 1;
        piVar7 = *(int **)(lVar5 + (long)iVar1 * 8);
        iVar8 = iVar6 - piVar7[2];
        if ((iVar6 - piVar7[2] == 0) && (iVar8 = piVar9[1] - piVar7[1], piVar9[1] - piVar7[1] == 0))
        {
          iVar8 = *piVar9 - *piVar7;
          if (*piVar9 - *piVar7 == 0) {
            iVar8 = (int)((ulong)((long)piVar9 - (long)piVar7) >> 2) * -0x55555555;
          }
        }
      } while ((iVar8 < 0) &&
              (*(int **)(lVar5 + (long)iVar4 * 8) = piVar7, iVar4 = iVar1, iVar1 != 1));
    }
    uVar3 = 0;
    *(int **)(lVar5 + (long)iVar4 * 8) = piVar9;
  }
  return uVar3;
}



/* Entry: 1097e9bc8; end: 1097e9c53;  */

undefined8 FUN_1097e9bc8(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = iVar1 << 1;
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == param_1 + 0x10) {
    if (0 < iVar1) {
      lVar3 = (ulong)uVar2 << 3;
      _malloc();
      if (lVar3 != 0) {
        _memcpy();
        goto LAB_1097e9c34;
      }
    }
  }
  else if ((-1 < iVar1) && (_realloc(lVar3,(ulong)uVar2 << 3), lVar3 != 0)) {
LAB_1097e9c34:
    *(long *)(param_1 + 8) = lVar3;
    return 0;
  }
  return 1;
}



/* Entry: 1097e9c54; end: 1097e9d0b;  */

bool FUN_1097e9c54(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar6 = (int)param_3;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar5 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) <= iVar6) {
    uVar5 = (uint)(iVar3 == 1);
  }
  uVar1 = 1;
  if (iVar6 <= *(int *)(param_1 + 0x10)) {
    uVar1 = uVar5;
  }
  if (iVar2 < iVar6) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if ((-1 < (int)uVar1) && (iVar3 != 1 || iVar6 < iVar2)) {
      if ((uVar1 == 0) || (iVar2 <= iVar6)) {
        iVar6 = (int)param_2;
        if (uVar1 == 0) {
          FUN_1097e9188();
          bVar4 = (int)param_1 < iVar6 || (int)param_1 <= iVar6 && param_2 >> 0x20 == 1;
        }
        else {
          FUN_1097e9188(param_1,iVar2);
          bVar4 = iVar6 < (int)param_1;
        }
      }
      else {
        bVar4 = true;
      }
    }
  }
  return bVar4;
}



/* Entry: 1097e9d0c; end: 1097e9e0b;  */

void FUN_1097e9d0c(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  *(undefined8 **)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x30) = param_3;
  if (param_3 != 0) {
    uVar8 = *param_2;
    *(undefined8 *)(param_1 + 0x1c) = param_2[1];
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    if (1 < (int)param_3) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar5 = *(int *)(param_1 + 0x20);
      lVar6 = (ulong)param_3 - 1;
      piVar7 = (int *)((long)param_2 + 0x1c);
      do {
        iVar1 = piVar7[-3];
        if (iVar1 < iVar2) {
          *(int *)(param_1 + 0x14) = iVar1;
          iVar2 = iVar1;
        }
        iVar1 = piVar7[-2];
        if (iVar1 < iVar3) {
          *(int *)(param_1 + 0x18) = iVar1;
          iVar3 = iVar1;
        }
        iVar1 = piVar7[-1];
        if (iVar4 < iVar1) {
          *(int *)(param_1 + 0x1c) = iVar1;
          iVar4 = iVar1;
        }
        iVar1 = *piVar7;
        if (iVar5 < iVar1) {
          *(int *)(param_1 + 0x20) = iVar1;
          iVar5 = iVar1;
        }
        piVar7 = piVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



/* Entry: 1097e9e0c; end: 1097e9f2b;  */

undefined4 FUN_1097e9e0c(undefined4 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  *param_1 = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0x12;
  *(undefined8 *)(param_1 + 0xd) = 0x2000000000;
  uVar1 = *(uint *)(param_2 + 0x24);
  if (0x10 < (int)uVar1) {
    param_1[0xe] = uVar1 << 1;
    lVar4 = (ulong)uVar1 * 0x70;
    _malloc();
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 == 0) {
      *param_1 = 1;
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 3) = 0x8000000080000000;
  *(undefined8 *)(param_1 + 1) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  plVar2 = (long *)(param_2 + 0x30);
  do {
    if (0 < (int)plVar2[2]) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        uStack_38 = *(undefined8 *)(plVar2[1] + lVar3);
        uStack_3c = *(undefined4 *)(plVar2[1] + lVar3 + 0xc);
        uStack_40 = (undefined4)uStack_38;
        FUN_1097e9f2c(param_1,&uStack_38,&uStack_40,1);
        uStack_38 = *(undefined8 *)(plVar2[1] + lVar3 + 8);
        uStack_3c = *(undefined4 *)(plVar2[1] + lVar3 + 4);
        uStack_40 = (undefined4)uStack_38;
        FUN_1097e9f2c(param_1,&uStack_38,&uStack_40,1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < (int)plVar2[2]);
    }
    plVar2 = (long *)*plVar2;
  } while (plVar2 != (long *)0x0);
  return *param_1;
}



/* Entry: 1097e9f2c; end: 1097e9f87;  */

void FUN_1097e9f2c(long param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  iVar9 = param_2[1];
  iVar15 = param_3[1];
  if (iVar9 == iVar15) {
    return;
  }
  piVar1 = param_2;
  if (iVar9 < iVar15) {
    piVar1 = param_3;
  }
  iVar12 = -param_4;
  if (iVar9 < iVar15) {
    param_3 = param_2;
    iVar12 = param_4;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar15 = param_3[1];
    iVar24 = piVar1[1];
    iVar9 = *(int *)(param_1 + 0x34);
    if (iVar9 == *(int *)(param_1 + 0x38)) {
      lVar22 = param_1;
      FUN_1097ea868();
      if ((int)lVar22 == 0) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x34);
    }
    *(int *)(param_1 + 0x34) = iVar9 + 1;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar9 * 0x1c);
    *puVar10 = *(undefined8 *)param_3;
    puVar10[1] = *(undefined8 *)piVar1;
    *(int *)(puVar10 + 2) = iVar15;
    *(int *)((long)puVar10 + 0x14) = iVar24;
    *(int *)(puVar10 + 3) = iVar12;
    if (iVar15 < *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar15;
    }
    if (*(int *)(param_1 + 0x10) < iVar24) {
      *(int *)(param_1 + 0x10) = iVar24;
    }
    iVar9 = *param_3;
    iVar12 = *(int *)(param_1 + 4);
    if ((iVar9 < iVar12) || (iVar11 = *(int *)(param_1 + 0xc), iVar11 < iVar9)) {
      iVar11 = iVar15 - param_3[1];
      if (iVar11 != 0) {
        if (piVar1[1] == iVar15) {
          iVar9 = *piVar1;
        }
        else {
          iVar15 = piVar1[1] - param_3[1];
          if (iVar15 != 0) {
            iVar23 = 0;
            if ((long)iVar15 != 0) {
              iVar23 = (int)((((long)*piVar1 - (long)iVar9) * (long)iVar11) / (long)iVar15);
            }
            iVar9 = iVar9 + iVar23;
          }
        }
      }
      if (iVar9 < iVar12) {
        *(int *)(param_1 + 4) = iVar9;
        iVar12 = iVar9;
      }
      iVar11 = *(int *)(param_1 + 0xc);
      if (iVar11 < iVar9) {
        *(int *)(param_1 + 0xc) = iVar9;
        iVar11 = iVar9;
      }
    }
    iVar9 = *piVar1;
    if ((iVar9 < iVar12) || (iVar11 < iVar9)) {
      iVar15 = iVar9;
      if (piVar1[1] != iVar24) {
        iVar15 = *param_3;
        iVar24 = iVar24 - param_3[1];
        if ((iVar24 != 0) && (iVar23 = piVar1[1] - param_3[1], iVar23 != 0)) {
          iVar16 = 0;
          if ((long)iVar23 != 0) {
            iVar16 = (int)(((long)(iVar9 - iVar15) * (long)iVar24) / (long)iVar23);
          }
          iVar15 = iVar15 + iVar16;
        }
      }
      if (iVar15 < iVar12) {
        *(int *)(param_1 + 4) = iVar15;
      }
      if (iVar11 < iVar15) {
        *(int *)(param_1 + 0xc) = iVar15;
      }
    }
    return;
  }
  iVar9 = piVar1[1];
  if (iVar9 <= *(int *)(param_1 + 0x18)) {
    return;
  }
  iVar15 = param_3[1];
  if (*(int *)(param_1 + 0x20) <= iVar15) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar21 = 0;
    lVar22 = 0;
    do {
      piVar4 = (int *)(*(long *)(param_1 + 0x28) + lVar21);
      iStack_64 = piVar4[3];
      if ((iVar15 < iStack_64) && (iStack_6c = piVar4[1], iStack_6c < iVar9)) {
        iStack_68 = *piVar4;
        iVar11 = piVar4[2];
        iVar24 = iStack_6c;
        if (iStack_6c <= iVar15) {
          iVar24 = iVar15;
        }
        iVar23 = iStack_64;
        if (iVar9 <= iStack_64) {
          iVar23 = iVar9;
        }
        iVar2 = *param_3;
        iVar8 = *piVar1;
        iVar16 = iVar2;
        if (iVar8 <= iVar2) {
          iVar16 = iVar8;
        }
        iVar17 = iVar2;
        if (iVar2 <= iVar8) {
          iVar17 = iVar8;
        }
        piVar5 = param_3;
        piVar7 = piVar1;
        iStack_70 = iVar11;
        if (iVar16 < iStack_68 || iVar11 < iVar17) {
          if (iStack_68 < iVar17) {
            if (iVar16 < iVar11) {
              iVar13 = param_3[1];
              iVar19 = piVar1[1];
              iVar14 = iVar23;
              if (iVar2 <= iVar8 == iVar19 < iVar13) {
                iVar18 = iVar24;
                if (iVar11 < iVar17) {
                  iVar18 = iVar13;
                  iVar17 = iVar11;
                  if (iVar11 - iVar2 != 0) {
                    iVar20 = iVar19;
                    iVar17 = iVar2;
                    if (iVar8 != iVar11) {
                      iVar3 = iVar8 - iVar2;
                      if (iVar3 == 0) goto LAB_1097ea44c;
                      iVar20 = 0;
                      if ((long)iVar3 != 0) {
                        iVar20 = (int)(((long)(iVar19 - iVar13) * (long)(iVar11 - iVar2)) /
                                      (long)iVar3);
                      }
                      iVar20 = iVar13 + iVar20;
                    }
                    if (((iVar20 - iVar13 != 0) &&
                        (iVar18 = iVar19, iVar17 = iVar8, iVar19 != iVar20)) &&
                       (iVar19 = iVar19 - iVar13, iVar18 = iVar20, iVar17 = iVar2, iVar19 != 0)) {
                      iVar17 = 0;
                      if ((long)iVar19 != 0) {
                        iVar17 = (int)(((long)(iVar20 - iVar13) * (long)(iVar8 - iVar2)) /
                                      (long)iVar19);
                      }
                      iVar17 = iVar2 + iVar17;
                    }
                  }
LAB_1097ea44c:
                  if (iVar11 < iVar17) {
                    iVar18 = iVar18 + 1;
                  }
                }
                if (iVar23 <= iVar18) {
                  iVar18 = iVar23;
                }
                iVar11 = iStack_68;
                if (iVar24 < iVar18) {
                  FUN_1097ea5c8(param_1,&iStack_70,piVar4 + 2,iVar24,iVar18,iVar12);
                  iVar11 = *piVar4;
                  iVar24 = iVar18;
                }
                if (iVar16 < iVar11) {
                  iVar16 = *param_3;
                  if (iVar11 - iVar16 == 0) {
                    iVar14 = param_3[1];
                    iVar8 = iVar11;
                  }
                  else {
                    iVar2 = *piVar1;
                    iVar8 = iVar16;
                    if (iVar2 == iVar11) {
                      iVar13 = piVar1[1];
                      iVar19 = iVar13;
                      iVar17 = param_3[1];
                    }
                    else {
                      iVar14 = param_3[1];
                      iVar17 = iVar2 - iVar16;
                      if (iVar17 == 0) goto LAB_1097ea530;
                      iVar19 = piVar1[1];
                      iVar13 = 0;
                      if ((long)iVar17 != 0) {
                        iVar13 = (int)(((long)(iVar19 - iVar14) * (long)(iVar11 - iVar16)) /
                                      (long)iVar17);
                      }
                      iVar13 = iVar14 + iVar13;
                      iVar17 = iVar14;
                    }
                    iVar14 = iVar17;
                    if (((iVar13 - iVar17 != 0) &&
                        (iVar14 = iVar19, iVar8 = iVar2, iVar19 != iVar13)) &&
                       (iVar19 = iVar19 - iVar17, iVar14 = iVar13, iVar8 = iVar16, iVar19 != 0)) {
                      iVar8 = 0;
                      if ((long)iVar19 != 0) {
                        iVar8 = (int)(((long)(iVar13 - iVar17) * (long)(iVar2 - iVar16)) /
                                     (long)iVar19);
                      }
                      iVar8 = iVar16 + iVar8;
                    }
                  }
LAB_1097ea530:
                  iVar14 = iVar14 - (uint)(iVar8 < iVar11);
                }
                if (iVar14 <= iVar24) {
                  iVar14 = iVar24;
                }
                if (iVar14 < iVar23) {
                  piVar6 = &iStack_68;
                  goto LAB_1097ea558;
                }
              }
              else {
                iVar18 = iVar24;
                if (iVar16 < iStack_68) {
                  iVar18 = iVar13;
                  iVar16 = iStack_68;
                  if (iStack_68 - iVar2 != 0) {
                    iVar20 = iVar19;
                    iVar16 = iVar2;
                    if (iVar8 != iStack_68) {
                      iVar3 = iVar8 - iVar2;
                      if (iVar3 == 0) goto LAB_1097ea328;
                      iVar20 = 0;
                      if ((long)iVar3 != 0) {
                        iVar20 = (int)(((long)(iVar19 - iVar13) * (long)(iStack_68 - iVar2)) /
                                      (long)iVar3);
                      }
                      iVar20 = iVar13 + iVar20;
                    }
                    if (((iVar20 - iVar13 != 0) &&
                        (iVar18 = iVar19, iVar16 = iVar8, iVar19 != iVar20)) &&
                       (iVar19 = iVar19 - iVar13, iVar18 = iVar20, iVar16 = iVar2, iVar19 != 0)) {
                      iVar16 = 0;
                      if ((long)iVar19 != 0) {
                        iVar16 = (int)(((long)(iVar20 - iVar13) * (long)(iVar8 - iVar2)) /
                                      (long)iVar19);
                      }
                      iVar16 = iVar2 + iVar16;
                    }
                  }
LAB_1097ea328:
                  if (iVar16 < iStack_68) {
                    iVar18 = iVar18 + 1;
                  }
                }
                if (iVar23 <= iVar18) {
                  iVar18 = iVar23;
                }
                if (iVar24 < iVar18) {
                  FUN_1097ea5c8(param_1,piVar4,&iStack_68,iVar24,iVar18,iVar12);
                  iVar11 = piVar4[2];
                  iVar24 = iVar18;
                }
                if (iVar11 < iVar17) {
                  iVar16 = *param_3;
                  if (iVar11 - iVar16 == 0) {
                    iVar8 = iVar11;
                    iVar14 = param_3[1];
                  }
                  else {
                    iVar2 = *piVar1;
                    iVar8 = iVar16;
                    if (iVar2 == iVar11) {
                      iVar13 = piVar1[1];
                      iVar19 = iVar13;
                      iVar17 = param_3[1];
                    }
                    else {
                      iVar14 = param_3[1];
                      iVar17 = iVar2 - iVar16;
                      if (iVar17 == 0) goto LAB_1097ea40c;
                      iVar19 = piVar1[1];
                      iVar13 = 0;
                      if ((long)iVar17 != 0) {
                        iVar13 = (int)(((long)(iVar19 - iVar14) * (long)(iVar11 - iVar16)) /
                                      (long)iVar17);
                      }
                      iVar13 = iVar14 + iVar13;
                      iVar17 = iVar14;
                    }
                    iVar14 = iVar17;
                    if (((iVar13 - iVar17 != 0) &&
                        (iVar8 = iVar2, iVar14 = iVar19, iVar19 != iVar13)) &&
                       (iVar19 = iVar19 - iVar17, iVar8 = iVar16, iVar14 = iVar13, iVar19 != 0)) {
                      iVar8 = 0;
                      if ((long)iVar19 != 0) {
                        iVar8 = (int)(((long)(iVar13 - iVar17) * (long)(iVar2 - iVar16)) /
                                     (long)iVar19);
                      }
                      iVar8 = iVar16 + iVar8;
                    }
                  }
LAB_1097ea40c:
                  iVar14 = iVar14 - (uint)(iVar11 < iVar8);
                }
                if (iVar14 <= iVar24) {
                  iVar14 = iVar24;
                }
                if (iVar14 < iVar23) {
                  piVar6 = piVar4 + 2;
                  piVar4 = &iStack_70;
LAB_1097ea558:
                  FUN_1097ea5c8(param_1,piVar4,piVar6,iVar14,iVar23,iVar12);
                  iVar23 = iVar14;
                }
              }
              if (iVar24 == iVar23) goto LAB_1097ea594;
            }
            else {
              piVar5 = &iStack_70;
              piVar7 = piVar4 + 2;
            }
          }
          else {
            piVar5 = piVar4;
            piVar7 = &iStack_68;
          }
        }
        FUN_1097ea5c8(param_1,piVar5,piVar7,iVar24,iVar23,iVar12);
      }
LAB_1097ea594:
      lVar22 = lVar22 + 1;
      lVar21 = lVar21 + 0x10;
    } while (lVar22 < *(int *)(param_1 + 0x30));
  }
  return;
}



/* Entry: 1097e9f88; end: 1097ea087;  */

undefined4 FUN_1097e9f88(undefined4 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  *param_1 = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0x12;
  *(undefined8 *)(param_1 + 0xd) = 0x2000000000;
  if (0x10 < (int)param_3) {
    param_1[0xe] = param_3 << 1;
    lVar2 = (ulong)(param_3 << 1) * 0x38;
    _malloc();
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      *param_1 = 1;
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 3) = 0x8000000080000000;
  *(undefined8 *)(param_1 + 1) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  if ((int)param_3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar4 = (ulong)param_3;
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      uStack_38 = puVar3[-1];
      uStack_3c = *(undefined4 *)((long)puVar3 + 4);
      uStack_40 = (undefined4)uStack_38;
      FUN_1097e9f2c(param_1,&uStack_38,&uStack_40,1);
      uStack_38 = *puVar3;
      uStack_3c = *(undefined4 *)((long)puVar3 + -4);
      uStack_40 = (undefined4)uStack_38;
      FUN_1097e9f2c(param_1,&uStack_38,&uStack_40,1);
      puVar3 = puVar3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Entry: 1097ea088; end: 1097ea13b;  */

undefined4 FUN_1097ea088(undefined4 *param_1)

{
  FUN_1097e9f2c();
  return *param_1;
}



/* Entry: 1097ea13c; end: 1097ea5c7;  */

void FUN_1097ea13c(long param_1,int *param_2,int *param_3,int param_4,int param_5,undefined4 param_6
                  )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar16 = 0;
    lVar17 = 0;
    do {
      piVar3 = (int *)(*(long *)(param_1 + 0x28) + lVar16);
      iStack_64 = piVar3[3];
      if ((param_4 < iStack_64) && (iStack_6c = piVar3[1], iStack_6c < param_5)) {
        iStack_68 = *piVar3;
        iVar8 = piVar3[2];
        iVar19 = iStack_6c;
        if (iStack_6c <= param_4) {
          iVar19 = param_4;
        }
        iVar18 = iStack_64;
        if (param_5 <= iStack_64) {
          iVar18 = param_5;
        }
        iVar1 = *param_2;
        iVar7 = *param_3;
        iVar11 = iVar1;
        if (iVar7 <= iVar1) {
          iVar11 = iVar7;
        }
        iVar12 = iVar1;
        if (iVar1 <= iVar7) {
          iVar12 = iVar7;
        }
        piVar4 = param_2;
        piVar6 = param_3;
        iStack_70 = iVar8;
        if (iVar11 < iStack_68 || iVar8 < iVar12) {
          if (iStack_68 < iVar12) {
            if (iVar11 < iVar8) {
              iVar9 = param_2[1];
              iVar14 = param_3[1];
              iVar10 = iVar18;
              if (iVar1 <= iVar7 == iVar14 < iVar9) {
                iVar13 = iVar19;
                if (iVar8 < iVar12) {
                  iVar13 = iVar9;
                  iVar12 = iVar8;
                  if (iVar8 - iVar1 != 0) {
                    iVar15 = iVar14;
                    iVar12 = iVar1;
                    if (iVar7 != iVar8) {
                      iVar2 = iVar7 - iVar1;
                      if (iVar2 == 0) goto LAB_1097ea44c;
                      iVar15 = 0;
                      if ((long)iVar2 != 0) {
                        iVar15 = (int)(((long)(iVar14 - iVar9) * (long)(iVar8 - iVar1)) /
                                      (long)iVar2);
                      }
                      iVar15 = iVar9 + iVar15;
                    }
                    if (((iVar15 - iVar9 != 0) &&
                        (iVar13 = iVar14, iVar12 = iVar7, iVar14 != iVar15)) &&
                       (iVar14 = iVar14 - iVar9, iVar13 = iVar15, iVar12 = iVar1, iVar14 != 0)) {
                      iVar12 = 0;
                      if ((long)iVar14 != 0) {
                        iVar12 = (int)(((long)(iVar15 - iVar9) * (long)(iVar7 - iVar1)) /
                                      (long)iVar14);
                      }
                      iVar12 = iVar1 + iVar12;
                    }
                  }
LAB_1097ea44c:
                  if (iVar8 < iVar12) {
                    iVar13 = iVar13 + 1;
                  }
                }
                if (iVar18 <= iVar13) {
                  iVar13 = iVar18;
                }
                iVar8 = iStack_68;
                if (iVar19 < iVar13) {
                  FUN_1097ea5c8(param_1,&iStack_70,piVar3 + 2,iVar19,iVar13,param_6);
                  iVar8 = *piVar3;
                  iVar19 = iVar13;
                }
                if (iVar11 < iVar8) {
                  iVar11 = *param_2;
                  if (iVar8 - iVar11 == 0) {
                    iVar10 = param_2[1];
                    iVar7 = iVar8;
                  }
                  else {
                    iVar1 = *param_3;
                    iVar7 = iVar11;
                    if (iVar1 == iVar8) {
                      iVar9 = param_3[1];
                      iVar14 = iVar9;
                      iVar12 = param_2[1];
                    }
                    else {
                      iVar10 = param_2[1];
                      iVar12 = iVar1 - iVar11;
                      if (iVar12 == 0) goto LAB_1097ea530;
                      iVar14 = param_3[1];
                      iVar9 = 0;
                      if ((long)iVar12 != 0) {
                        iVar9 = (int)(((long)(iVar14 - iVar10) * (long)(iVar8 - iVar11)) /
                                     (long)iVar12);
                      }
                      iVar9 = iVar10 + iVar9;
                      iVar12 = iVar10;
                    }
                    iVar10 = iVar12;
                    if (((iVar9 - iVar12 != 0) && (iVar10 = iVar14, iVar7 = iVar1, iVar14 != iVar9))
                       && (iVar14 = iVar14 - iVar12, iVar10 = iVar9, iVar7 = iVar11, iVar14 != 0)) {
                      iVar7 = 0;
                      if ((long)iVar14 != 0) {
                        iVar7 = (int)(((long)(iVar9 - iVar12) * (long)(iVar1 - iVar11)) /
                                     (long)iVar14);
                      }
                      iVar7 = iVar11 + iVar7;
                    }
                  }
LAB_1097ea530:
                  iVar10 = iVar10 - (uint)(iVar7 < iVar8);
                }
                if (iVar10 <= iVar19) {
                  iVar10 = iVar19;
                }
                if (iVar10 < iVar18) {
                  piVar5 = &iStack_68;
                  goto LAB_1097ea558;
                }
              }
              else {
                iVar13 = iVar19;
                if (iVar11 < iStack_68) {
                  iVar13 = iVar9;
                  iVar11 = iStack_68;
                  if (iStack_68 - iVar1 != 0) {
                    iVar15 = iVar14;
                    iVar11 = iVar1;
                    if (iVar7 != iStack_68) {
                      iVar2 = iVar7 - iVar1;
                      if (iVar2 == 0) goto LAB_1097ea328;
                      iVar15 = 0;
                      if ((long)iVar2 != 0) {
                        iVar15 = (int)(((long)(iVar14 - iVar9) * (long)(iStack_68 - iVar1)) /
                                      (long)iVar2);
                      }
                      iVar15 = iVar9 + iVar15;
                    }
                    if (((iVar15 - iVar9 != 0) &&
                        (iVar13 = iVar14, iVar11 = iVar7, iVar14 != iVar15)) &&
                       (iVar14 = iVar14 - iVar9, iVar13 = iVar15, iVar11 = iVar1, iVar14 != 0)) {
                      iVar11 = 0;
                      if ((long)iVar14 != 0) {
                        iVar11 = (int)(((long)(iVar15 - iVar9) * (long)(iVar7 - iVar1)) /
                                      (long)iVar14);
                      }
                      iVar11 = iVar1 + iVar11;
                    }
                  }
LAB_1097ea328:
                  if (iVar11 < iStack_68) {
                    iVar13 = iVar13 + 1;
                  }
                }
                if (iVar18 <= iVar13) {
                  iVar13 = iVar18;
                }
                if (iVar19 < iVar13) {
                  FUN_1097ea5c8(param_1,piVar3,&iStack_68,iVar19,iVar13,param_6);
                  iVar8 = piVar3[2];
                  iVar19 = iVar13;
                }
                if (iVar8 < iVar12) {
                  iVar11 = *param_2;
                  if (iVar8 - iVar11 == 0) {
                    iVar7 = iVar8;
                    iVar10 = param_2[1];
                  }
                  else {
                    iVar1 = *param_3;
                    iVar7 = iVar11;
                    if (iVar1 == iVar8) {
                      iVar9 = param_3[1];
                      iVar14 = iVar9;
                      iVar12 = param_2[1];
                    }
                    else {
                      iVar10 = param_2[1];
                      iVar12 = iVar1 - iVar11;
                      if (iVar12 == 0) goto LAB_1097ea40c;
                      iVar14 = param_3[1];
                      iVar9 = 0;
                      if ((long)iVar12 != 0) {
                        iVar9 = (int)(((long)(iVar14 - iVar10) * (long)(iVar8 - iVar11)) /
                                     (long)iVar12);
                      }
                      iVar9 = iVar10 + iVar9;
                      iVar12 = iVar10;
                    }
                    iVar10 = iVar12;
                    if (((iVar9 - iVar12 != 0) && (iVar7 = iVar1, iVar10 = iVar14, iVar14 != iVar9))
                       && (iVar14 = iVar14 - iVar12, iVar7 = iVar11, iVar10 = iVar9, iVar14 != 0)) {
                      iVar7 = 0;
                      if ((long)iVar14 != 0) {
                        iVar7 = (int)(((long)(iVar9 - iVar12) * (long)(iVar1 - iVar11)) /
                                     (long)iVar14);
                      }
                      iVar7 = iVar11 + iVar7;
                    }
                  }
LAB_1097ea40c:
                  iVar10 = iVar10 - (uint)(iVar8 < iVar7);
                }
                if (iVar10 <= iVar19) {
                  iVar10 = iVar19;
                }
                if (iVar10 < iVar18) {
                  piVar5 = piVar3 + 2;
                  piVar3 = &iStack_70;
LAB_1097ea558:
                  FUN_1097ea5c8(param_1,piVar3,piVar5,iVar10,iVar18,param_6);
                  iVar18 = iVar10;
                }
              }
              if (iVar19 == iVar18) goto LAB_1097ea594;
            }
            else {
              piVar4 = &iStack_70;
              piVar6 = piVar3 + 2;
            }
          }
          else {
            piVar4 = piVar3;
            piVar6 = &iStack_68;
          }
        }
        FUN_1097ea5c8(param_1,piVar4,piVar6,iVar19,iVar18,param_6);
      }
LAB_1097ea594:
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar17 < *(int *)(param_1 + 0x30));
  }
  return;
}



/* Entry: 1097ea5c8; end: 1097ea807;  */

void FUN_1097ea5c8(long param_1,int *param_2,int *param_3,int param_4,int param_5,undefined4 param_6
                  )

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == *(int *)(param_1 + 0x38)) {
    lVar3 = param_1;
    FUN_1097ea868();
    if ((int)lVar3 == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x34) = iVar4 + 1;
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar4 * 0x1c);
  *puVar6 = *(undefined8 *)param_2;
  puVar6[1] = *(undefined8 *)param_3;
  *(int *)(puVar6 + 2) = param_4;
  *(int *)((long)puVar6 + 0x14) = param_5;
  *(undefined4 *)(puVar6 + 3) = param_6;
  if (param_4 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_4;
  }
  if (*(int *)(param_1 + 0x10) < param_5) {
    *(int *)(param_1 + 0x10) = param_5;
  }
  iVar4 = *param_2;
  iVar7 = *(int *)(param_1 + 4);
  if ((iVar4 < iVar7) || (iVar5 = *(int *)(param_1 + 0xc), iVar5 < iVar4)) {
    iVar5 = param_4 - param_2[1];
    if (iVar5 != 0) {
      if (param_3[1] == param_4) {
        iVar4 = *param_3;
      }
      else {
        iVar8 = param_3[1] - param_2[1];
        if (iVar8 != 0) {
          iVar2 = 0;
          if ((long)iVar8 != 0) {
            iVar2 = (int)((((long)*param_3 - (long)iVar4) * (long)iVar5) / (long)iVar8);
          }
          iVar4 = iVar4 + iVar2;
        }
      }
    }
    if (iVar4 < iVar7) {
      *(int *)(param_1 + 4) = iVar4;
      iVar7 = iVar4;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar4) {
      *(int *)(param_1 + 0xc) = iVar4;
      iVar5 = iVar4;
    }
  }
  iVar4 = *param_3;
  if ((iVar4 < iVar7) || (iVar5 < iVar4)) {
    iVar8 = iVar4;
    if (param_3[1] != param_5) {
      iVar8 = *param_2;
      param_5 = param_5 - param_2[1];
      if ((param_5 != 0) && (iVar2 = param_3[1] - param_2[1], iVar2 != 0)) {
        iVar1 = 0;
        if ((long)iVar2 != 0) {
          iVar1 = (int)(((long)(iVar4 - iVar8) * (long)param_5) / (long)iVar2);
        }
        iVar8 = iVar8 + iVar1;
      }
    }
    if (iVar8 < iVar7) {
      *(int *)(param_1 + 4) = iVar8;
    }
    if (iVar5 < iVar8) {
      *(int *)(param_1 + 0xc) = iVar8;
    }
  }
  return;
}



/* Entry: 1097ea808; end: 1097ea867;  */

void FUN_1097ea808(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_2 = param_2 * 0x100;
  param_3 = param_3 * 0x100;
  *(ulong *)(param_1 + 0xc) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) + param_3,
                (int)*(undefined8 *)(param_1 + 0xc) + param_2);
  *(ulong *)(param_1 + 4) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) + param_3,
                (int)*(undefined8 *)(param_1 + 4) + param_2);
  uVar1 = (ulong)*(uint *)(param_1 + 0x34);
  if (0 < (int)*(uint *)(param_1 + 0x34)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
    do {
      *puVar2 = CONCAT44((int)((ulong)*puVar2 >> 0x20) + param_3,(int)*puVar2 + param_3);
      puVar2[-1] = CONCAT44((int)((ulong)puVar2[-1] >> 0x20) + param_3,(int)puVar2[-1] + param_2);
      puVar2[-2] = CONCAT44((int)((ulong)puVar2[-2] >> 0x20) + param_3,(int)puVar2[-2] + param_2);
      puVar2 = (undefined8 *)((long)puVar2 + 0x1c);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 1097ea868; end: 1097ea923;  */

undefined8 FUN_1097ea868(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar5 = (long)(int)param_1[0xe] << 2;
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  puVar3 = (undefined4 *)((long)(int)param_1[0xe] * 0x70);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  bVar2 = SUB168(auVar1 * ZEXT816(0x1c),8) == 0;
  if (puVar4 == param_1 + 0x12) {
    if ((puVar3 != (undefined4 *)0x0 && bVar2) && (_malloc(), puVar3 != (undefined4 *)0x0)) {
      _memcpy();
      goto LAB_1097ea8f4;
    }
  }
  else if ((bVar2) && (_realloc(), puVar3 = puVar4, puVar4 != (undefined4 *)0x0)) {
LAB_1097ea8f4:
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    param_1[0xe] = (int)uVar5;
    return 1;
  }
  *param_1 = 1;
  return 0;
}



/* Entry: 1097ea924; end: 1097eaa37;  */

undefined * FUN_1097ea924(undefined8 param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  puVar4 = (undefined *)0x1;
  _calloc(1,600);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_10dffecb8;
  }
  else {
    FUN_1097f6418();
    *(undefined4 *)(puVar4 + 0x1a0) = 1;
    if (param_2 != (double *)0x0) {
      dVar5 = *param_2;
      dVar8 = param_2[3];
      dVar7 = param_2[2];
      dVar2 = *param_2;
      dVar3 = param_2[1];
      *(double *)(puVar4 + 0x178) = param_2[1];
      *(double *)(puVar4 + 0x170) = dVar5;
      *(double *)(puVar4 + 0x188) = dVar8;
      *(double *)(puVar4 + 0x180) = dVar7;
      iVar1 = (int)(long)(double)(long)dVar2;
      iVar6 = (int)(long)(double)(long)dVar3;
      dVar7 = param_2[3];
      dVar5 = param_2[2];
      auVar9._0_8_ = (long)iVar1;
      auVar9._8_8_ = (long)iVar6;
      auVar9 = NEON_scvtf(auVar9,8);
      *(ulong *)(puVar4 + 400) = CONCAT44(iVar6,iVar1);
      *(ulong *)(puVar4 + 0x198) =
           CONCAT44((int)(long)((double)(long)(dVar3 + dVar7) - auVar9._8_8_),
                    (int)(long)((double)(long)(dVar2 + dVar5) - auVar9._0_8_));
      *(undefined4 *)(puVar4 + 0x1a0) = 0;
    }
    *(undefined8 *)(puVar4 + 0x1a8) = 0;
    *(undefined4 *)(puVar4 + 0x1b0) = 8;
    *(undefined8 *)(puVar4 + 0x1b8) = 0;
    *(undefined8 *)(puVar4 + 0x1c0) = 0;
    puVar4[0x30] = puVar4[0x30] | 4;
    *(undefined8 *)(puVar4 + 0x1f0) = 0;
    *(undefined8 *)(puVar4 + 0x1f8) = 0;
    *(undefined8 *)(puVar4 + 0x200) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x1d0) = 0;
    *(undefined8 *)(puVar4 + 0x1c8) = 0x100000000;
    *(undefined4 *)(puVar4 + 0x1d8) = 0;
    *(undefined8 *)(puVar4 + 0x208) = 0x32aaaba7;
    *(undefined8 *)(puVar4 + 0x218) = 0;
    *(undefined8 *)(puVar4 + 0x210) = 0;
    *(undefined8 *)(puVar4 + 0x228) = 0;
    *(undefined8 *)(puVar4 + 0x220) = 0;
    *(undefined8 *)(puVar4 + 0x238) = 0;
    *(undefined8 *)(puVar4 + 0x230) = 0;
    *(undefined8 *)(puVar4 + 0x240) = 0;
    *(undefined **)(puVar4 + 0x248) = puVar4 + 0x248;
    *(undefined **)(puVar4 + 0x250) = puVar4 + 0x248;
  }
  return puVar4;
}



/* Entry: 1097eaa38; end: 1097eab37;  */

undefined8 FUN_1097eaa38(long param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar5 = 1;
  piVar1 = (int *)0x1;
  _calloc(1,0x30);
  iVar6 = iRam000000011382af48;
  if (piVar1 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    _pthread_mutex_lock(0x1132e0448);
    if (iRam000000011382af48 != iVar6) {
      do {
        _pthread_mutex_unlock(0x1132e0448);
        iVar6 = iRam000000011382af48;
        _pthread_mutex_lock(0x1132e0448);
      } while (iRam000000011382af48 != iVar6);
    }
    iVar4 = 1;
    if (1 < iVar6 + 1U) {
      iVar4 = iVar6 + 1;
    }
    iRam000000011382af48 = iVar4;
    _pthread_mutex_unlock(0x1132e0448);
    *piVar1 = iVar4;
    piVar1[1] = 1;
    piVar1[4] = 0xc;
    _pthread_mutex_lock(param_1 + 0x208);
    lVar2 = *(long *)(param_1 + 0x248);
    plVar3 = (long *)(piVar1 + 8);
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    *(long *)(piVar1 + 10) = param_1 + 0x248;
    *(long **)(param_1 + 0x248) = plVar3;
    _pthread_mutex_unlock(param_1 + 0x208);
    uVar5 = 0;
    iVar6 = *piVar1;
  }
  *param_2 = iVar6;
  return uVar5;
}



/* Entry: 1097eab38; end: 1097eabfb;  */

void FUN_1097eab38(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  
  if (param_2 == 0) {
    return;
  }
  _pthread_mutex_lock(param_1 + 0x208);
  plVar9 = (long *)(param_1 + 0x248);
  do {
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)(param_1 + 0x248)) goto LAB_1097eaba4;
  } while ((int)plVar9[-4] != param_2);
  _pthread_mutex_lock(0x1132e0448);
  iVar5 = *(int *)((long)plVar9 + -0x1c) + -1;
  *(int *)((long)plVar9 + -0x1c) = iVar5;
  _pthread_mutex_unlock(0x1132e0448);
  if (iVar5 != 0) {
LAB_1097eaba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x208);
    return;
  }
  lVar11 = *plVar9;
  plVar2 = (long *)plVar9[1];
  *(long **)(lVar11 + 8) = plVar2;
  *plVar2 = lVar11;
  *plVar9 = (long)plVar9;
  plVar9[1] = (long)plVar9;
  _pthread_mutex_unlock(param_1 + 0x208);
  uVar3 = *(uint *)(param_1 + 0x1ac);
  uVar4 = *(uint *)((long)plVar9 + -0x14);
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  uVar8 = (ulong)uVar1;
  if (uVar3 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x1b8);
  }
  if (uVar4 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar9[-1];
  }
  if (0 < (int)uVar1) {
    do {
      piVar12 = (int *)*puVar10;
      iVar5 = *piVar12;
      if (iVar5 - 2U < 3 || iVar5 == 0) {
        lVar6 = 0x30;
        lVar7 = 4;
LAB_1097eac6c:
        FUN_1097ecdac((long)piVar12 + lVar6,*(undefined4 *)(lVar11 + lVar7));
      }
      else if (iVar5 == 1) {
        FUN_1097ecdac(piVar12 + 0xc,*(undefined4 *)(lVar11 + 4));
        lVar6 = 0x150;
        lVar7 = 8;
        goto LAB_1097eac6c;
      }
      lVar11 = lVar11 + 0xc;
      uVar8 = uVar8 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar8 != 0);
  }
  _free(plVar9[-1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar9 + -4);
  return;
}



/* Entry: 1097eabfc; end: 1097eacc7;  */

void FUN_1097eabfc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  
  uVar2 = *(uint *)(param_1 + 0x1ac);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  uVar7 = (ulong)uVar1;
  if (uVar2 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x1b8);
  }
  if (uVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x18);
  }
  if (0 < (int)uVar1) {
    do {
      piVar10 = (int *)*puVar8;
      iVar4 = *piVar10;
      if (iVar4 - 2U < 3 || iVar4 == 0) {
        lVar5 = 0x30;
        lVar6 = 4;
LAB_1097eac6c:
        FUN_1097ecdac((long)piVar10 + lVar5,*(undefined4 *)(lVar9 + lVar6));
      }
      else if (iVar4 == 1) {
        FUN_1097ecdac(piVar10 + 0xc,*(undefined4 *)(lVar9 + 4));
        lVar5 = 0x150;
        lVar6 = 8;
        goto LAB_1097eac6c;
      }
      lVar9 = lVar9 + 0xc;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
  }
  _free(*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1097eacc8; end: 1097eae13;  */

uint * FUN_1097eacc8(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint auStack_308 [8];
  undefined4 uStack_2e8;
  byte bStack_2e4;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 auStack_2d0 [640];
  
  puVar3 = (uint *)(ulong)*(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) == 0) {
    uVar1 = *(uint *)(param_1 + 0x1ac);
    uVar4 = (ulong)uVar1;
    if ((uVar1 != 0) && (0 < (int)uVar1)) {
      puVar5 = *(undefined8 **)(param_1 + 0x1b8);
      do {
        puVar3 = (uint *)*puVar5;
        uVar1 = *puVar3;
        if ((int)uVar1 < 3) {
          if (uVar1 == 2) {
            uStack_2e0 = 0x1000000000;
            auStack_308[0] = 0;
            uStack_2e8 = 0;
            bStack_2e4 = bStack_2e4 & 0xf0 | 1;
            puVar2 = puVar3 + 0x54;
            puStack_2d8 = auStack_2d0;
            FUN_1097e2a70(*(undefined8 *)(puVar3 + 0x106),puVar2,puVar3 + 0xde,puVar3 + 0xee,
                          puVar3 + 0xfa,auStack_308);
            if ((int)puVar2 == 0) {
              puVar2 = auStack_308;
              FUN_1097ffc8c(puVar2,param_2);
            }
            if (puStack_2d8 != auStack_2d0) {
              _free();
            }
            goto LAB_1097eadd0;
          }
          if (uVar1 < 2) {
            return (uint *)0x64;
          }
        }
        else {
          if (uVar1 == 3) {
            puVar2 = param_2;
            func_0x0001097dcf64(param_2,puVar3 + 0x54,0,0);
          }
          else {
            if (uVar1 != 4) goto LAB_1097eadd4;
            puVar2 = *(uint **)(puVar3 + 0x60);
            func_0x0001097f0648(puVar2,*(undefined8 *)(puVar3 + 0x58),puVar3[0x5a],param_2);
          }
LAB_1097eadd0:
          if ((int)puVar2 != 0) {
            return puVar2;
          }
        }
LAB_1097eadd4:
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    puVar3 = (uint *)0x0;
  }
  return puVar3;
}



/* Entry: 1097eae14; end: 1097eb773;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1097eae14(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined *puVar19;
  int *piVar20;
  long *******ppppppplVar21;
  int *piVar22;
  long lVar23;
  bool bVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  long lStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  long *******appppppplStack_f8 [10];
  long lStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return;
  }
  if (*(int *)(param_2[2] + 0x1c) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
    return;
  }
  if (*(int *)((long)param_2 + 0x2c) == 0) {
LAB_1097eae94:
    lVar23 = 0;
  }
  else {
    plVar12 = (long *)(param_1 + 0x248);
    do {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)(param_1 + 0x248)) goto LAB_1097eae94;
    } while (*(int *)(plVar12 + -4) != *(int *)((long)param_2 + 0x2c));
    lVar23 = (long)(plVar12 + -4);
  }
  func_0x0001097f5d68(appppppplStack_f8);
  if (*param_2 != 0) {
    FUN_1097f5bb8(appppppplStack_f8);
  }
  if ((*(int *)(param_1 + 0x1a0) == 0) && ((int)param_2[4] == 0)) {
    puVar19 = (undefined *)(param_1 + 400);
    FUN_1097f5bb8(appppppplStack_f8,puVar19);
  }
  else {
    puVar19 = &UNK_10dffe9c0;
  }
  func_0x0001097f5cbc(appppppplStack_f8,param_2[1]);
  lStack_a8 = param_2[3];
  lVar5 = param_2[6];
  if (lVar5 != 0) {
    func_0x0001097e44ac();
    lVar9 = param_2[2];
    *(long *)(lVar9 + 0x160) = lVar5;
    *(undefined4 *)(lVar9 + 0x168) = 0;
  }
  ppppppplVar21 = (long *******)appppppplStack_f8;
  FUN_1097f5e0c(ppppppplVar21,(int)param_2[4],&iStack_110);
  if ((int)ppppppplVar21 == 0) goto LAB_1097eb710;
  *(undefined8 *)(param_1 + 0x1d0) = 0x100000001;
  uVar17 = *(uint *)(param_1 + 0x1ac);
  uVar18 = (ulong)uVar17;
  if (lVar23 == 0) {
    if (uVar17 == 0) {
      uVar18 = 0;
      lStack_118 = 0;
      goto LAB_1097eafb4;
    }
    lVar23 = 0;
    lStack_118 = *(long *)(param_1 + 0x1b8);
  }
  else {
    if (*(int *)((long)param_2 + 0x24) == 1) {
      lVar5 = lVar23 + 8;
      FUN_1097c54b0(lVar5,uVar18);
      if ((int)lVar5 != 0) {
        return;
      }
      uVar14 = *(uint *)(lVar23 + 0xc);
      *(uint *)(lVar23 + 0xc) = uVar14 + uVar17;
      _bzero(*(long *)(lVar23 + 0x18) + (ulong)*(uint *)(lVar23 + 0x10) * (ulong)uVar14,uVar18 * 0xc
            );
      uVar18 = (ulong)*(uint *)(param_1 + 0x1ac);
    }
    if ((int)uVar18 == 0) {
      lStack_118 = 0;
    }
    else {
      lStack_118 = *(long *)(param_1 + 0x1b8);
    }
    if (*(int *)(lVar23 + 0xc) == 0) {
LAB_1097eafb4:
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(lVar23 + 0x18);
    }
  }
  if ((*(int *)((long)param_2 + 0x3c) == 0) &&
     ((iStack_108 < *(int *)(puVar19 + 8) || (iStack_104 < *(int *)(puVar19 + 0xc))))) {
    uVar17 = (uint)uVar18;
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uStack_90 = CONCAT44(iStack_10c << 8,iStack_110 << 8);
      uStack_88 = CONCAT44((iStack_10c + *(int *)((ulong)&iStack_110 | 0xc)) * 0x100,
                           (iStack_110 + iStack_108) * 0x100);
      if (*(long *)(param_1 + 0x200) == -1) {
        lVar5 = *(long *)(param_1 + 0x1b8);
        puVar6 = *(uint **)(param_1 + 0x1c0);
        if (*(uint *)(param_1 + 0x1c8) < uVar17) {
          _free();
          puVar6 = (uint *)(uVar18 << 2);
          _malloc();
          *(uint **)(param_1 + 0x1c0) = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_1097eb190;
          *(uint *)(param_1 + 0x1c8) = uVar17;
        }
        uVar10 = 0;
        do {
          puVar6[uVar10] = (uint)uVar10;
          uVar10 = uVar10 + 1;
          uVar13 = uVar18;
        } while (uVar18 != uVar10);
        do {
          uVar2 = (int)uVar13 * 10;
          uVar14 = uVar2 / 0xd;
          if (uVar2 / 0xd < 2) {
            uVar14 = 1;
          }
          uVar1 = 0xb;
          if (0x19 < uVar2 - 0x75) {
            uVar1 = uVar14;
          }
          bVar4 = 1 < uVar1;
          uVar10 = (ulong)(uVar17 - uVar1);
          puVar15 = puVar6;
          uVar13 = (ulong)uVar1;
          if (uVar17 - uVar1 != 0) {
            do {
              uVar14 = *puVar15;
              lVar16 = *(long *)(lVar5 + (ulong)uVar14 * 8);
              lVar9 = *(long *)(lVar5 + (ulong)puVar6[uVar13] * 8);
              if (0 < *(int *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x10) -
                      *(int *)(lVar16 + 0x14) * *(int *)(lVar16 + 0x10)) {
                *puVar15 = puVar6[uVar13];
                puVar6[uVar13] = uVar14;
                bVar4 = true;
              }
              uVar10 = uVar10 - 1;
              puVar15 = puVar15 + 1;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar10 != 0);
          }
          uVar13 = (ulong)uVar1;
        } while (bVar4);
        lVar9 = *(long *)(lVar5 + (ulong)*puVar6 * 8);
        iVar27 = (int)*(undefined8 *)(lVar9 + 8);
        iVar28 = (int)((ulong)*(undefined8 *)(lVar9 + 8) >> 0x20);
        *(ulong *)(param_1 + 0x1e8) =
             CONCAT44(((int)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20) + iVar28) * 0x100,
                      ((int)*(undefined8 *)(lVar9 + 0x10) + iVar27) * 0x100);
        *(ulong *)(param_1 + 0x1e0) = CONCAT44(iVar28 << 8,iVar27 << 8);
        *(long *)(param_1 + 0x200) = lVar9;
        if (uVar17 != 1) {
          lVar9 = uVar18 - 1;
          do {
            puVar6 = puVar6 + 1;
            lVar8 = *(long *)(lVar5 + (ulong)*puVar6 * 8);
            iVar27 = (int)*(undefined8 *)(lVar8 + 8);
            iVar28 = (int)((ulong)*(undefined8 *)(lVar8 + 8) >> 0x20);
            lStack_80 = CONCAT44(iVar28 << 8,iVar27 << 8);
            uStack_78 = CONCAT44(((int)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) + iVar28) *
                                 0x100,((int)*(undefined8 *)(lVar8 + 0x10) + iVar27) * 0x100);
            lVar16 = param_1 + 0x1e0;
            FUN_1097ed0b0(lVar16,lVar8,&lStack_80);
            if ((int)lVar16 != 0) {
              if (*(long *)(param_1 + 0x1f0) != 0) {
                FUN_1097ecc80();
              }
              if (*(long *)(param_1 + 0x1f8) != 0) {
                FUN_1097ecc80();
              }
              break;
            }
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
LAB_1097eb190:
      lStack_80 = *(long *)(param_1 + 0x1c0);
      FUN_1097ecfc0(param_1 + 0x1e0,&uStack_90,&lStack_80);
      piVar22 = *(int **)(param_1 + 0x1c0);
      uVar18 = (ulong)(lStack_80 - (long)piVar22) >> 2;
      uVar17 = (uint)uVar18;
      if (1 < uVar17) {
        do {
          uVar2 = (int)uVar18 * 10;
          uVar14 = uVar2 / 0xd;
          if (uVar2 / 0xd < 2) {
            uVar14 = 1;
          }
          uVar1 = 0xb;
          if (0x19 < uVar2 - 0x75) {
            uVar1 = uVar14;
          }
          uVar18 = (ulong)uVar1;
          bVar4 = 1 < uVar1;
          uVar10 = (ulong)(uVar17 - uVar1);
          piVar26 = piVar22;
          uVar13 = uVar18;
          if (uVar17 - uVar1 != 0) {
            do {
              iVar27 = *piVar26;
              if (0 < iVar27 - piVar22[uVar13]) {
                *piVar26 = piVar22[uVar13];
                piVar22[uVar13] = iVar27;
                bVar4 = true;
              }
              uVar10 = uVar10 - 1;
              piVar26 = piVar26 + 1;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar10 != 0);
          }
        } while (bVar4);
      }
    }
    bVar4 = uVar17 == *(uint *)(param_1 + 0x1ac);
  }
  else {
    bVar4 = true;
  }
  if (uVar17 != 0) {
    uVar18 = 0;
    iVar27 = **(int **)param_2[2];
    do {
      if (bVar4) {
        piVar22 = *(int **)(lStack_118 + uVar18 * 8);
        uVar10 = uVar18;
        if (lVar23 == 0) goto LAB_1097eb2d0;
LAB_1097eb2a0:
        piVar26 = (int *)(lVar23 + uVar10 * 0xc);
        if ((*(int *)((long)param_2 + 0x24) != 2) || (*piVar26 == (int)param_2[5])) {
          bVar24 = false;
          bVar3 = true;
          goto LAB_1097eb2dc;
        }
      }
      else {
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x1c0) + uVar18 * 4);
        piVar22 = *(int **)(lStack_118 + uVar10 * 8);
        if (lVar23 != 0) goto LAB_1097eb2a0;
LAB_1097eb2d0:
        bVar3 = false;
        piVar26 = (int *)0x0;
        bVar24 = true;
LAB_1097eb2dc:
        if (((((piVar22[2] < iStack_108 + iStack_110) && (iStack_110 < piVar22[4] + piVar22[2])) &&
             (piVar22[3] < iStack_104 + iStack_10c)) && (iStack_10c < piVar22[5] + piVar22[3])) ||
           (*piVar22 == 5)) {
          plVar12 = (long *)param_2[2];
          if ((*(code **)(*plVar12 + 0xe8) != (code *)0x0) &&
             ((**(code **)(*plVar12 + 0xe8))(plVar12,*(undefined4 *)((long)param_2 + 0x2c),uVar18),
             (int)plVar12 != 0)) {
            return;
          }
          ppppppplVar21 = (long *******)0x0;
          iVar28 = *piVar22;
          if (iVar28 < 3) {
            if (iVar28 == 0) {
              if (bVar3) {
                iVar28 = piVar26[1];
              }
              else {
                iVar28 = 0;
              }
              ppppppplVar21 = (long *******)appppppplStack_f8;
              FUN_1097f4e18(ppppppplVar21,piVar22[1],piVar22 + 0xc,iVar28,
                            *(undefined8 *)(piVar22 + 6));
              goto LAB_1097eb674;
            }
            if (iVar28 == 1) {
              if (bVar3) {
                iVar28 = piVar26[1];
                iVar25 = piVar26[2];
              }
              else {
                iVar28 = 0;
                iVar25 = 0;
              }
              ppppppplVar21 = (long *******)appppppplStack_f8;
              FUN_1097f50f0(ppppppplVar21,piVar22[1],piVar22 + 0xc,iVar28,piVar22 + 0x54,iVar25,
                            *(undefined8 *)(piVar22 + 6));
              if (*(int *)((long)param_2 + 0x24) == 1) {
                FUN_1097ecdd8(param_1,piVar22[1],piVar22 + 0xc);
                FUN_1097ecdd8(param_1,piVar22[1],piVar22 + 0x54);
                bVar24 = false;
                if (iVar27 == 0x1002) {
                  bVar24 = bVar3;
                }
                if (bVar24) {
                  *(undefined8 *)(piVar26 + 1) = *(undefined8 *)(param_2[2] + 0x1dc);
                }
              }
              goto LAB_1097eb6b8;
            }
            if (iVar28 == 2) {
              if (bVar3) {
                iVar28 = piVar26[1];
              }
              else {
                iVar28 = 0;
              }
              ppppppplVar21 = (long *******)appppppplStack_f8;
              FUN_1097f51f4(*(undefined8 *)(piVar22 + 0x106),ppppppplVar21,piVar22[1],piVar22 + 0xc,
                            iVar28,piVar22 + 0x54,piVar22 + 0xde,piVar22 + 0xee,piVar22 + 0xfa,
                            piVar22[0x108]);
              goto LAB_1097eb674;
            }
          }
          else {
            if (iVar28 == 3) {
              if (bVar3) {
                iVar28 = piVar26[1];
              }
              else {
                iVar28 = 0;
              }
              if ((((*appppppplStack_f8[0])[0x15] != (long *****)0x0) && ((uint)uVar18 < uVar17 - 1)
                  ) && (*(int *)((long)param_2 + 0x24) != 1)) {
                uVar14 = (uint)uVar18 + 1;
                piVar20 = *(int **)(lStack_118 + (ulong)uVar14 * 8);
                if (bVar24) {
                  if (piVar20 != (int *)0x0) {
                    iVar25 = 0;
LAB_1097eb580:
                    if (*piVar20 == 2) {
                      piVar11 = piVar22 + 0x54;
                      FUN_1097dc3e4(piVar11,piVar20 + 0x54);
                      if ((int)piVar11 != 0) {
                        uVar7 = *(undefined8 *)(piVar22 + 6);
                        func_0x0001097ca874(uVar7,*(undefined8 *)(piVar20 + 6));
                        if ((int)uVar7 != 0) {
                          ppppppplVar21 = (long *******)appppppplStack_f8;
                          func_0x0001097f543c(*(undefined8 *)(piVar22 + 0xe0),
                                              *(undefined8 *)(piVar20 + 0x106),ppppppplVar21,
                                              piVar22[1],piVar22 + 0xc,iVar28,piVar22[0xde],
                                              piVar22[0xe2],piVar22 + 0x54,piVar20[1],piVar20 + 0xc,
                                              iVar25);
                          if (*(int *)((long)param_2 + 0x24) == 1) {
                            FUN_1097ecdd8(param_1,piVar22[1],piVar22 + 0xc);
                            FUN_1097ecdd8(param_1,piVar22[1],piVar22 + 0xc);
                          }
                          uVar18 = (ulong)uVar14;
                          if ((int)ppppppplVar21 != 100) goto LAB_1097eb6b8;
                        }
                      }
                    }
                  }
                }
                else if (piVar20 != (int *)0x0) {
                  piVar11 = (int *)(lVar23 + (ulong)uVar14 * 0xc);
                  iVar25 = piVar11[1];
                  if (((*(int *)((long)param_2 + 0x24) != 2) || ((int)param_2[5] == 0)) ||
                     (*piVar11 == (int)param_2[5])) goto LAB_1097eb580;
                }
              }
              ppppppplVar21 = (long *******)appppppplStack_f8;
              func_0x0001097f56ec(*(undefined8 *)(piVar22 + 0xe0),ppppppplVar21,piVar22[1],
                                  piVar22 + 0xc,iVar28,piVar22 + 0x54,piVar22[0xde],piVar22[0xe2],
                                  *(undefined8 *)(piVar22 + 6));
            }
            else {
              if (iVar28 != 4) {
                if (iVar28 != 5) goto LAB_1097eb6c0;
                ppppppplVar21 = (long *******)(ulong)*(uint *)((long)appppppplStack_f8[0] + 0x1c);
                if (*(uint *)((long)appppppplStack_f8[0] + 0x1c) == 0) {
                  ppppppplVar21 = appppppplStack_f8[0];
                  FUN_1097f8620(appppppplStack_f8[0],piVar22[0xc],*(undefined8 *)(piVar22 + 0xe),
                                *(undefined8 *)(piVar22 + 0x10));
                }
                goto LAB_1097eb6b8;
              }
              if (bVar3) {
                iVar28 = piVar26[1];
              }
              else {
                iVar28 = 0;
              }
              ppppppplVar21 = (long *******)appppppplStack_f8;
              FUN_1097f5894(ppppppplVar21,piVar22[1],piVar22 + 0xc,iVar28,
                            *(undefined8 *)(piVar22 + 0x54),piVar22[0x56],
                            *(undefined8 *)(piVar22 + 0x58),piVar22[0x5a],
                            *(undefined8 *)(piVar22 + 0x5c),piVar22[0x5e],piVar22[0x5f],
                            *(undefined8 *)(piVar22 + 0x60),*(undefined8 *)(piVar22 + 6));
            }
LAB_1097eb674:
            if (*(int *)((long)param_2 + 0x24) == 1) {
              FUN_1097ecdd8(param_1,piVar22[1],piVar22 + 0xc);
              bVar24 = false;
              if (iVar27 == 0x1002) {
                bVar24 = bVar3;
              }
              if (bVar24) {
                piVar26[1] = *(int *)(param_2[2] + 0x1dc);
              }
            }
LAB_1097eb6b8:
            if ((int)ppppppplVar21 == 0x66) {
              ppppppplVar21 = (long *******)0x0;
            }
          }
LAB_1097eb6c0:
          bVar3 = (bool)(bVar3 ^ 1);
          if (*(int *)((long)param_2 + 0x24) != 1) {
            bVar3 = true;
          }
          iVar28 = (int)ppppppplVar21;
          if (bVar3) {
            if (iVar28 != 0) goto LAB_1097eb714;
          }
          else {
            if (iVar28 == 0) {
              iVar28 = 1;
            }
            else {
              if (iVar28 != 0x68) goto LAB_1097eb714;
              iVar28 = 2;
            }
            *piVar26 = iVar28;
          }
        }
      }
      uVar14 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar14;
    } while (uVar14 < uVar17);
  }
LAB_1097eb710:
  ppppppplVar21 = (long *******)0x0;
LAB_1097eb714:
  if (param_2[6] != 0) {
    FUN_1097e4880(*(undefined8 *)(param_2[2] + 0x160));
    lVar23 = param_2[2];
    *(undefined8 *)(lVar23 + 0x160) = 0;
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(lVar23 + 0x168);
  }
  FUN_1097f61ac(appppppplStack_f8[0]);
  FUN_1097f610c(param_1,ppppppplVar21);
  return;
}



/* Entry: 1097eb774; end: 1097eb827;  */

ulong FUN_1097eb774(ulong param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x14);
  FUN_1097c3ba0();
  uVar2 = uVar1;
  FUN_1097c3a40();
  FUN_1097f61ac(uVar1);
  uVar1 = (ulong)*(uint *)(uVar2 + 0x1c);
  if (*(uint *)(uVar2 + 0x1c) == 0) {
    if (param_3 != 0) {
      FUN_1097c3b24(uVar2,param_3);
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_44 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_70 = uVar2;
    FUN_1097eae14(param_1,&uStack_80);
    uVar3 = *(undefined8 *)(uVar2 + 0x1c8);
    param_2[1] = *(undefined8 *)(uVar2 + 0x1d0);
    *param_2 = uVar3;
    FUN_1097f61ac(uVar2);
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 1097eb828; end: 1097eb86b;  */

ulong FUN_1097eb828(ulong param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x14);
    FUN_1097c3ba0();
    uVar2 = uVar1;
    FUN_1097c3a40();
    FUN_1097f61ac(uVar1);
    uVar1 = (ulong)*(uint *)(uVar2 + 0x1c);
    if (*(uint *)(uVar2 + 0x1c) == 0) {
      if (param_3 != 0) {
        FUN_1097c3b24(uVar2,param_3);
      }
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_44 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_70 = uVar2;
      FUN_1097eae14(param_1,&uStack_80);
      uVar4 = *(undefined8 *)(uVar2 + 0x1c8);
      param_2[1] = *(undefined8 *)(uVar2 + 0x1d0);
      *param_2 = uVar4;
      FUN_1097f61ac(uVar2);
      uVar1 = param_1;
    }
    return uVar1;
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 400);
  iVar5 = (int)((ulong)*(undefined8 *)(param_1 + 400) >> 0x20);
  param_2[1] = CONCAT44(((int)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20) + iVar5) * 0x100,
                        ((int)*(undefined8 *)(param_1 + 0x198) + iVar3) * 0x100);
  *param_2 = CONCAT44(iVar5 << 8,iVar3 << 8);
  if (param_3 != 0) {
    FUN_1097d9534(param_3,param_2,0);
  }
  return 0;
}



/* Entry: 1097eb86c; end: 1097eba47;  */

undefined8 FUN_1097eb86c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  plVar5 = *(long **)(param_1 + 0x248);
  while (plVar5 != (long *)(param_1 + 0x248)) {
    plVar1 = (long *)*plVar5;
    plVar2 = (long *)plVar5[1];
    plVar1[1] = (long)plVar2;
    *plVar2 = (long)plVar1;
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    FUN_1097eabfc(param_1,plVar5 + -4);
    plVar5 = plVar1;
  }
  uVar3 = *(uint *)(param_1 + 0x1ac);
  if ((uVar3 != 0) && (0 < (int)uVar3)) {
    uVar8 = 0;
    lVar9 = *(long *)(param_1 + 0x1b8);
    do {
      piVar7 = *(int **)(lVar9 + uVar8 * 8);
      iVar4 = *piVar7;
      if (iVar4 < 3) {
        if (iVar4 == 0) {
          piVar6 = piVar7 + 0xc;
        }
        else {
          if (iVar4 != 1) {
            if (iVar4 == 2) {
              func_0x0001097e434c(piVar7 + 0xc);
              piVar6 = *(int **)(piVar7 + 0x5e);
              while (piVar6 != piVar7 + 0x5e) {
                piVar6 = *(int **)piVar6;
                _free();
              }
              _free(*(undefined8 *)(piVar7 + 0xe4));
              piVar7[0xe4] = 0;
              piVar7[0xe5] = 0;
              piVar7[0xe6] = 0;
            }
            goto LAB_1097eb9e8;
          }
          func_0x0001097e434c(piVar7 + 0xc);
          piVar6 = piVar7 + 0x54;
        }
        func_0x0001097e434c(piVar6);
      }
      else if (iVar4 == 3) {
        func_0x0001097e434c(piVar7 + 0xc);
        piVar6 = *(int **)(piVar7 + 0x5e);
        while (piVar6 != piVar7 + 0x5e) {
          piVar6 = *(int **)piVar6;
          _free();
        }
      }
      else if (iVar4 == 4) {
        func_0x0001097e434c(piVar7 + 0xc);
        _free(*(undefined8 *)(piVar7 + 0x54));
        _free(*(undefined8 *)(piVar7 + 0x58));
        _free(*(undefined8 *)(piVar7 + 0x5c));
        FUN_1097ef278(*(undefined8 *)(piVar7 + 0x60),0);
      }
      else if ((iVar4 == 5) && (_free(*(undefined8 *)(piVar7 + 0xe)), piVar7[0xc] != 0)) {
        _free(*(undefined8 *)(piVar7 + 0x10));
      }
LAB_1097eb9e8:
      FUN_1097ca284(*(undefined8 *)(piVar7 + 6));
      _free(piVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  _free(*(undefined8 *)(param_1 + 0x1b8));
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1097ecc80();
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_1097ecc80();
  }
  _free(*(undefined8 *)(param_1 + 0x1c0));
  return 0;
}



/* Entry: 1097eba48; end: 1097eba7b;  */

void FUN_1097eba48(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_20 = (double)param_3;
  uStack_30 = 0;
  uStack_28 = 0;
  dStack_18 = (double)param_4;
  FUN_1097ea924(param_2,&uStack_30);
  return;
}



/* Entry: 1097eba7c; end: 1097ebc23;  */

ulong FUN_1097eba7c(ulong param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  plVar5 = (long *)(param_1 + 0x108);
  do {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)(param_1 + 0x108)) {
      if (*(int *)(param_1 + 0x1a0) != 0) {
        return 100;
      }
      iVar2 = *(int *)(param_1 + 0x14);
      uVar6 = 0xffffffff;
      if (iVar2 == 0x2000) {
        uVar6 = 2;
      }
      uVar1 = 0;
      if (iVar2 != 0x3000) {
        uVar1 = uVar6;
      }
      uVar6 = 1;
      if (iVar2 != 0x1000) {
        uVar6 = uVar1;
      }
      uVar3 = (ulong)uVar6;
      FUN_1097d8718(uVar3,*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      FUN_1097f7010((double)-*(int *)(param_1 + 400),(double)-*(int *)(param_1 + 0x194));
      if (*(uint *)(uVar3 + 0x1c) != 0) {
        return (ulong)*(uint *)(uVar3 + 0x1c);
      }
      FUN_1097f7010((double)-*(int *)(param_1 + 400),(double)-*(int *)(param_1 + 0x194),uVar3);
      puVar4 = (undefined *)0x1;
      _calloc(1,0x178);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &DAT_10dffecb8;
      }
      else {
        FUN_1097f6418();
        *(ulong *)(puVar4 + 0x170) = uVar3;
        func_0x0001097f6298(param_1,puVar4,0);
      }
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_44 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_70 = uVar3;
      FUN_1097eae14(param_1,&uStack_80);
      FUN_1097f68f0(puVar4);
      func_0x0001097f61ac(puVar4);
      if ((int)param_1 != 0) {
        func_0x0001097f61ac(uVar3);
        return param_1;
      }
      *param_2 = uVar3;
      goto LAB_1097ebbec;
    }
  } while ((undefined *)plVar5[-0x23] != &UNK_110b11968);
  uVar3 = plVar5[0xb];
  FUN_1097f6324();
  param_1 = 0;
  *param_2 = uVar3;
LAB_1097ebbec:
  *param_3 = 0;
  return param_1;
}



/* Entry: 1097ebc24; end: 1097ebc2b;  */

void FUN_1097ebc24(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x18) != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar2 = *(int *)(param_2 + 0x18) + -1;
    *(int *)(param_2 + 0x18) = iVar2;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar2 == 0) {
      if ((*(byte *)(param_2 + 0x30) >> 1 & 1) == 0) {
        *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 1;
        FUN_1097f6378(param_2,0);
        if (*(int *)(param_2 + 0x18) != 0) {
          return;
        }
        FUN_1097f6afc(param_2);
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        func_0x0001097cc6a8();
      }
      func_0x0001097c55d4(param_2 + 0x38);
      func_0x0001097c55d4(param_2 + 0x50);
      if (*(long *)(param_2 + 0x160) != 0) {
        FUN_1097e4880();
      }
      bVar1 = *(byte *)(param_2 + 0x30);
      if ((bVar1 >> 4 & 1) != 0) {
        FUN_1097ce1d0(*(undefined8 *)(param_2 + 8));
        bVar1 = *(byte *)(param_2 + 0x30);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        _free(*(undefined8 *)(param_2 + 0x140));
        _free(*(undefined8 *)(param_2 + 0x150));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1097ebc2c; end: 1097ec307;  */

undefined * FUN_1097ebc2c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puStack_68;
  
  puVar4 = (undefined *)0x1;
  _calloc(1,600);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_10dffecb8;
  }
  else {
    FUN_1097f6418();
    uVar14 = *(undefined8 *)(param_1 + 0x170);
    uVar16 = *(undefined8 *)(param_1 + 0x188);
    uVar15 = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(puVar4 + 0x178) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(puVar4 + 0x170) = uVar14;
    *(undefined8 *)(puVar4 + 0x188) = uVar16;
    *(undefined8 *)(puVar4 + 0x180) = uVar15;
    uVar14 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(puVar4 + 0x198) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(puVar4 + 400) = uVar14;
    *(undefined4 *)(puVar4 + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
    uVar14 = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined4 *)(puVar4 + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
    puVar4[0x30] = puVar4[0x30] & 0xfb | *(byte *)(param_1 + 0x30) & 4;
    *(undefined8 *)(puVar4 + 0x1f0) = 0;
    *(undefined8 *)(puVar4 + 0x1f8) = 0;
    *(undefined8 *)(puVar4 + 0x200) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x1c8) = 0x100000000;
    *(undefined8 *)(puVar4 + 0x1d0) = uVar14;
    *(undefined8 *)(puVar4 + 0x208) = 0x32aaaba7;
    *(undefined8 *)(puVar4 + 0x218) = 0;
    *(undefined8 *)(puVar4 + 0x210) = 0;
    *(undefined8 *)(puVar4 + 0x228) = 0;
    *(undefined8 *)(puVar4 + 0x220) = 0;
    *(undefined8 *)(puVar4 + 0x238) = 0;
    *(undefined8 *)(puVar4 + 0x230) = 0;
    *(undefined8 *)(puVar4 + 0x240) = 0;
    *(undefined **)(puVar4 + 0x248) = puVar4 + 0x248;
    *(undefined **)(puVar4 + 0x250) = puVar4 + 0x248;
    *(undefined8 *)(puVar4 + 0x1a8) = 0;
    *(undefined4 *)(puVar4 + 0x1b0) = 8;
    *(undefined8 *)(puVar4 + 0x1b8) = 0;
    *(undefined8 *)(puVar4 + 0x1c0) = 0;
    uVar1 = *(uint *)(param_1 + 0x1ac);
    uVar12 = (ulong)uVar1;
    if ((uVar1 != 0) && (0 < (int)uVar1)) {
      puVar11 = *(undefined8 **)(param_1 + 0x1b8);
LAB_1097ebd24:
      piVar13 = (int *)*puVar11;
      iVar3 = *piVar13;
      if (iVar3 < 3) {
        if (iVar3 == 0) {
          iVar3 = 1;
          puVar5 = (undefined4 *)0x1;
          _calloc(1,0x150);
          if (puVar5 == (undefined4 *)0x0) goto LAB_1097ec208;
          *puVar5 = 0;
          puVar5[1] = piVar13[1];
          uVar14 = *(undefined8 *)(piVar13 + 2);
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
          *(undefined8 *)(puVar5 + 2) = uVar14;
          puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
          uVar14 = *(undefined8 *)(piVar13 + 6);
          FUN_1097ca2ec();
          *(undefined8 *)(puVar5 + 6) = uVar14;
          puVar10 = puVar5 + 0xc;
          puVar8 = puVar10;
          func_0x0001097e3fa4(puVar10,piVar13 + 0xc);
          iVar3 = (int)puVar8;
          if (iVar3 != 0) goto LAB_1097ec200;
          puStack_68 = puVar5;
          func_0x0001097f6f54(puVar4);
          puVar9 = puVar4 + 0x1a8;
          FUN_1097c5574(puVar9,&puStack_68,1);
          iVar3 = (int)puVar9;
          if (iVar3 != 0) goto LAB_1097ec1fc;
LAB_1097ec1b0:
          uVar12 = uVar12 - 1;
          puVar11 = puVar11 + 1;
          if (uVar12 == 0) {
            return puVar4;
          }
          goto LAB_1097ebd24;
        }
        if (iVar3 == 1) {
          puVar5 = (undefined4 *)0x1;
          _calloc(1,0x270);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 1;
            puVar5[1] = piVar13[1];
            uVar14 = *(undefined8 *)(piVar13 + 2);
            *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
            *(undefined8 *)(puVar5 + 2) = uVar14;
            puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
            uVar14 = *(undefined8 *)(piVar13 + 6);
            FUN_1097ca2ec();
            *(undefined8 *)(puVar5 + 6) = uVar14;
            puVar10 = puVar5 + 0xc;
            puVar8 = puVar10;
            func_0x0001097e3fa4(puVar10,piVar13 + 0xc);
            iVar3 = (int)puVar8;
            if (iVar3 == 0) {
              puVar8 = puVar5 + 0x54;
              func_0x0001097e3fa4(puVar8,piVar13 + 0x54);
              iVar3 = (int)puVar8;
              if (iVar3 == 0) {
                puStack_68 = puVar5;
                func_0x0001097f6f54(puVar4);
                puVar9 = puVar4 + 0x1a8;
                FUN_1097c5574(puVar9,&puStack_68,1);
                iVar3 = (int)puVar9;
                if (iVar3 == 0) goto LAB_1097ec1b0;
                func_0x0001097e434c(puVar5 + 0x54);
              }
              goto LAB_1097ec1fc;
            }
            goto LAB_1097ec200;
          }
        }
        else {
          if (iVar3 != 2) goto LAB_1097ec1b0;
          puVar5 = (undefined4 *)0x1;
          _calloc(1,0x428);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 2;
            puVar5[1] = piVar13[1];
            uVar14 = *(undefined8 *)(piVar13 + 2);
            *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
            *(undefined8 *)(puVar5 + 2) = uVar14;
            puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
            uVar14 = *(undefined8 *)(piVar13 + 6);
            FUN_1097ca2ec();
            *(undefined8 *)(puVar5 + 6) = uVar14;
            puVar10 = puVar5 + 0xc;
            puVar8 = puVar10;
            func_0x0001097e3fa4(puVar10,piVar13 + 0xc);
            iVar3 = (int)puVar8;
            if (iVar3 == 0) {
              puVar8 = puVar5 + 0x54;
              FUN_1097dc170(puVar8,piVar13 + 0x54);
              iVar3 = (int)puVar8;
              if (iVar3 == 0) {
                puVar8 = puVar5 + 0xde;
                FUN_1097f3e34(puVar8,piVar13 + 0xde);
                iVar3 = (int)puVar8;
                if (iVar3 == 0) {
                  uVar15 = *(undefined8 *)(piVar13 + 0xf0);
                  uVar14 = *(undefined8 *)(piVar13 + 0xee);
                  uVar16 = *(undefined8 *)(piVar13 + 0xf2);
                  uVar18 = *(undefined8 *)(piVar13 + 0xf8);
                  uVar17 = *(undefined8 *)(piVar13 + 0xf6);
                  *(undefined8 *)(puVar5 + 0xf4) = *(undefined8 *)(piVar13 + 0xf4);
                  *(undefined8 *)(puVar5 + 0xf2) = uVar16;
                  *(undefined8 *)(puVar5 + 0xf8) = uVar18;
                  *(undefined8 *)(puVar5 + 0xf6) = uVar17;
                  *(undefined8 *)(puVar5 + 0xf0) = uVar15;
                  *(undefined8 *)(puVar5 + 0xee) = uVar14;
                  uVar15 = *(undefined8 *)(piVar13 + 0xfc);
                  uVar14 = *(undefined8 *)(piVar13 + 0xfa);
                  uVar16 = *(undefined8 *)(piVar13 + 0xfe);
                  uVar18 = *(undefined8 *)(piVar13 + 0x104);
                  uVar17 = *(undefined8 *)(piVar13 + 0x102);
                  *(undefined8 *)(puVar5 + 0x100) = *(undefined8 *)(piVar13 + 0x100);
                  *(undefined8 *)(puVar5 + 0xfe) = uVar16;
                  *(undefined8 *)(puVar5 + 0x104) = uVar18;
                  *(undefined8 *)(puVar5 + 0x102) = uVar17;
                  *(undefined8 *)(puVar5 + 0xfc) = uVar15;
                  *(undefined8 *)(puVar5 + 0xfa) = uVar14;
                  *(undefined8 *)(puVar5 + 0x106) = *(undefined8 *)(piVar13 + 0x106);
                  puVar5[0x108] = piVar13[0x108];
                  puStack_68 = puVar5;
                  func_0x0001097f6f54(puVar4);
                  puVar9 = puVar4 + 0x1a8;
                  FUN_1097c5574(puVar9,&puStack_68,1);
                  iVar3 = (int)puVar9;
                  if (iVar3 == 0) goto LAB_1097ec1b0;
                  _free(*(undefined8 *)(puVar5 + 0xe4));
                  *(undefined8 *)(puVar5 + 0xe4) = 0;
                  puVar5[0xe6] = 0;
                }
                puVar11 = *(undefined8 **)(puVar5 + 0x5e);
                while (puVar11 != (undefined8 *)(puVar5 + 0x5e)) {
                  puVar11 = (undefined8 *)*puVar11;
                  _free();
                }
              }
              goto LAB_1097ec1fc;
            }
            goto LAB_1097ec200;
          }
        }
      }
      else {
        if (iVar3 == 3) {
          puVar5 = (undefined4 *)0x1;
          _calloc(1,0x390);
          if (puVar5 == (undefined4 *)0x0) goto LAB_1097ec234;
          *puVar5 = 3;
          puVar5[1] = piVar13[1];
          uVar14 = *(undefined8 *)(piVar13 + 2);
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
          *(undefined8 *)(puVar5 + 2) = uVar14;
          puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
          uVar14 = *(undefined8 *)(piVar13 + 6);
          FUN_1097ca2ec();
          *(undefined8 *)(puVar5 + 6) = uVar14;
          puVar10 = puVar5 + 0xc;
          puVar8 = puVar10;
          func_0x0001097e3fa4(puVar10,piVar13 + 0xc);
          iVar3 = (int)puVar8;
          if (iVar3 == 0) {
            puVar8 = puVar5 + 0x54;
            FUN_1097dc170(puVar8,piVar13 + 0x54);
            iVar3 = (int)puVar8;
            if (iVar3 == 0) {
              puVar5[0xde] = piVar13[0xde];
              *(undefined8 *)(puVar5 + 0xe0) = *(undefined8 *)(piVar13 + 0xe0);
              puVar5[0xe2] = piVar13[0xe2];
              puStack_68 = puVar5;
              func_0x0001097f6f54(puVar4);
              puVar9 = puVar4 + 0x1a8;
              FUN_1097c5574(puVar9,&puStack_68,1);
              iVar3 = (int)puVar9;
              if (iVar3 == 0) goto LAB_1097ec1b0;
              puVar11 = *(undefined8 **)(puVar5 + 0x5e);
              while (puVar11 != (undefined8 *)(puVar5 + 0x5e)) {
                puVar11 = (undefined8 *)*puVar11;
                _free();
              }
            }
            goto LAB_1097ec1fc;
          }
          goto LAB_1097ec200;
        }
        if (iVar3 != 4) {
          if (iVar3 != 5) goto LAB_1097ec1b0;
          puVar5 = (undefined4 *)0x1;
          _calloc(1,0x48);
          if (puVar5 == (undefined4 *)0x0) goto LAB_1097ec234;
          *puVar5 = 5;
          puVar5[1] = piVar13[1];
          uVar14 = *(undefined8 *)(piVar13 + 2);
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
          *(undefined8 *)(puVar5 + 2) = uVar14;
          puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
          uVar14 = *(undefined8 *)(piVar13 + 6);
          FUN_1097ca2ec();
          *(undefined8 *)(puVar5 + 6) = uVar14;
          iVar3 = piVar13[0xc];
          puVar5[0xc] = iVar3;
          lVar6 = *(long *)(piVar13 + 0xe);
          _strdup();
          *(long *)(puVar5 + 0xe) = lVar6;
          if (lVar6 == 0) {
LAB_1097ec248:
            iVar3 = 1;
          }
          else {
            if ((iVar3 != 0) && (lVar7 = *(long *)(piVar13 + 0x10), lVar7 != 0)) {
              _strdup();
              *(long *)(puVar5 + 0x10) = lVar7;
              if (lVar7 == 0) goto LAB_1097ec248;
            }
            puStack_68 = puVar5;
            func_0x0001097f6f54(puVar4);
            puVar9 = puVar4 + 0x1a8;
            FUN_1097c5574(puVar9,&puStack_68,1);
            iVar3 = (int)puVar9;
            if (iVar3 == 0) goto LAB_1097ec1b0;
            lVar6 = *(long *)(puVar5 + 0xe);
          }
          _free(lVar6);
          _free(*(undefined8 *)(puVar5 + 0x10));
LAB_1097ec200:
          _free(puVar5);
LAB_1097ec208:
          FUN_1097f61ac(puVar4);
          if (iVar3 - 6U < 0x22) {
            return (&PTR_DAT_110b11b70)[iVar3 - 6U];
          }
          return &DAT_10dffecb8;
        }
        puVar5 = (undefined4 *)0x1;
        _calloc(1,0x188);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 4;
          puVar5[1] = piVar13[1];
          uVar14 = *(undefined8 *)(piVar13 + 2);
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(piVar13 + 4);
          *(undefined8 *)(puVar5 + 2) = uVar14;
          puVar5[8] = *(undefined4 *)(puVar4 + 0x1ac);
          uVar14 = *(undefined8 *)(piVar13 + 6);
          FUN_1097ca2ec();
          *(undefined8 *)(puVar5 + 6) = uVar14;
          puVar10 = puVar5 + 0xc;
          func_0x0001097e3fa4(puVar10,piVar13 + 0xc);
          iVar3 = (int)puVar10;
          if (iVar3 == 0) {
            *(undefined8 *)(puVar5 + 0x54) = 0;
            iVar3 = piVar13[0x56];
            puVar5[0x56] = iVar3;
            *(undefined8 *)(puVar5 + 0x58) = 0;
            uVar1 = piVar13[0x5a];
            puVar5[0x5a] = uVar1;
            *(undefined8 *)(puVar5 + 0x5c) = 0;
            uVar2 = piVar13[0x5e];
            puVar5[0x5e] = uVar2;
            if (iVar3 == 0) {
              lVar6 = 0;
              if (uVar1 == 0) goto LAB_1097ec120;
LAB_1097ec130:
              lVar7 = (ulong)uVar1 * 0x18;
              _malloc();
              *(long *)(puVar5 + 0x58) = lVar7;
              if (lVar7 == 0) goto LAB_1097ec1dc;
              _memcpy();
              if (uVar2 != 0) goto LAB_1097ec158;
LAB_1097ec17c:
              puVar5[0x5f] = piVar13[0x5f];
              uVar14 = *(undefined8 *)(piVar13 + 0x60);
              func_0x0001097efce0();
              *(undefined8 *)(puVar5 + 0x60) = uVar14;
              puStack_68 = puVar5;
              func_0x0001097f6f54(puVar4);
              puVar9 = puVar4 + 0x1a8;
              FUN_1097c5574(puVar9,&puStack_68,1);
              iVar3 = (int)puVar9;
              if (iVar3 == 0) goto LAB_1097ec1b0;
              lVar6 = *(long *)(puVar5 + 0x54);
            }
            else {
              lVar6 = (long)iVar3;
              _malloc();
              *(long *)(puVar5 + 0x54) = lVar6;
              if (lVar6 != 0) {
                _memcpy(lVar6,*(undefined8 *)(piVar13 + 0x54),(long)iVar3);
                if (uVar1 != 0) goto LAB_1097ec130;
LAB_1097ec120:
                if (uVar2 == 0) goto LAB_1097ec17c;
LAB_1097ec158:
                if (-1 < (int)uVar2) {
                  lVar7 = (ulong)uVar2 << 3;
                  _malloc();
                  *(long *)(puVar5 + 0x5c) = lVar7;
                  if (lVar7 != 0) {
                    _memcpy();
                    goto LAB_1097ec17c;
                  }
                }
              }
LAB_1097ec1dc:
              iVar3 = 1;
            }
            _free(lVar6);
            _free(*(undefined8 *)(puVar5 + 0x58));
            _free(*(undefined8 *)(puVar5 + 0x5c));
            puVar10 = puVar5 + 0xc;
LAB_1097ec1fc:
            func_0x0001097e434c(puVar10);
          }
          goto LAB_1097ec200;
        }
      }
LAB_1097ec234:
      iVar3 = 1;
      goto LAB_1097ec208;
    }
  }
  return puVar4;
}



/* Entry: 1097ec308; end: 1097ec327;  */

undefined8 FUN_1097ec308(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 400);
  param_2[1] = *(undefined8 *)(param_1 + 0x198);
  *param_2 = uVar1;
  return 1;
}



/* Entry: 1097ec328; end: 1097ec4cb;  */

undefined1 * FUN_1097ec328(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_320 [720];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = auStack_320;
  iVar2 = (int)param_2;
  if ((iVar2 == 0) && (param_4 == 0)) {
    if (*(int *)(param_1 + 0x1cc) != 0) {
      FUN_1097eb86c(param_1);
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = 8;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      return (undefined1 *)0x0;
    }
  }
  else if (((param_4 == 0) && (*(int *)(param_1 + 0x1cc) != 0)) &&
          ((iVar2 == 1 ||
           ((iVar2 == 2 &&
            (((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0 ||
             ((*(int *)(param_3 + 0x30) == 0 && (*(char *)(param_3 + 0xa7) == -1)))))))))) {
    FUN_1097eb86c(param_1);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 8;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  FUN_1097cb2f0(auStack_320,param_1,param_2,param_3,param_4);
  if ((int)puVar3 != 0) {
    return puVar3;
  }
  puVar3 = (undefined1 *)0x1;
  lVar1 = 1;
  _calloc(1,0x150);
  if (lVar1 != 0) {
    FUN_1097ecce0(param_1,lVar1,0,param_2,auStack_320);
    puVar3 = (undefined1 *)(lVar1 + 0x30);
    func_0x0001097e42d0(puVar3,param_3);
    if ((int)puVar3 == 0) {
      lStack_48 = lVar1;
      func_0x0001097f6f54(param_1);
      puVar3 = (undefined1 *)(param_1 + 0x1a8);
      FUN_1097c5574(puVar3,&lStack_48,1);
      if ((int)puVar3 == 0) {
        func_0x0001097ecd38(param_1);
        goto LAB_1097ec41c;
      }
      func_0x0001097e434c(lVar1 + 0x30);
    }
    FUN_1097ca284(*(undefined8 *)(lVar1 + 0x18));
    _free(lVar1);
  }
LAB_1097ec41c:
  FUN_1097ca284(uStack_50);
  return puVar3;
}



/* Entry: 1097ec4cc; end: 1097ec5f7;  */

undefined1 *
FUN_1097ec4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_330 [720];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = auStack_330;
  FUN_1097cb608(auStack_330,param_1,param_2,param_3,param_4,param_5);
  if ((int)puVar2 != 0) {
    return puVar2;
  }
  puVar2 = (undefined1 *)0x1;
  lVar1 = 1;
  _calloc(1,0x270);
  if (lVar1 != 0) {
    FUN_1097ecce0(param_1,lVar1,1,param_2,auStack_330);
    puVar2 = (undefined1 *)(lVar1 + 0x30);
    func_0x0001097e42d0(puVar2,param_3);
    if ((int)puVar2 == 0) {
      puVar2 = (undefined1 *)(lVar1 + 0x150);
      func_0x0001097e42d0(puVar2,param_4);
      if ((int)puVar2 == 0) {
        lStack_58 = lVar1;
        func_0x0001097f6f54(param_1);
        puVar2 = (undefined1 *)(param_1 + 0x1a8);
        FUN_1097c5574(puVar2,&lStack_58,1);
        if ((int)puVar2 == 0) {
          func_0x0001097ecd38(param_1);
          goto LAB_1097ec594;
        }
        func_0x0001097e434c(lVar1 + 0x150);
      }
      func_0x0001097e434c(lVar1 + 0x30);
    }
    FUN_1097ca284(*(undefined8 *)(lVar1 + 0x18));
    _free(lVar1);
  }
LAB_1097ec594:
  FUN_1097ca284(uStack_60);
  return puVar2;
}



/* Entry: 1097ec5f8; end: 1097ec933;  */

undefined1 *
FUN_1097ec5f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9,undefined8 param_10)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_358 [720];
  undefined8 uStack_88;
  long alStack_80 [2];
  
  puVar3 = auStack_358;
  FUN_1097cb8f4(puVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_10);
  if ((int)puVar3 != 0) {
    return puVar3;
  }
  puVar3 = (undefined1 *)0x1;
  lVar1 = 1;
  _calloc(1,0x428);
  if (lVar1 != 0) {
    FUN_1097ecce0(param_2,lVar1,2,param_3,auStack_358);
    puVar3 = (undefined1 *)(lVar1 + 0x30);
    func_0x0001097e42d0(puVar3,param_4);
    if ((int)puVar3 == 0) {
      puVar3 = (undefined1 *)(lVar1 + 0x150);
      FUN_1097dc170(puVar3,param_5);
      if ((int)puVar3 == 0) {
        puVar3 = (undefined1 *)(lVar1 + 0x378);
        FUN_1097f3e34(puVar3,param_6);
        if ((int)puVar3 == 0) {
          uVar4 = *param_7;
          uVar6 = param_7[3];
          uVar5 = param_7[2];
          *(undefined8 *)(lVar1 + 0x3c0) = param_7[1];
          *(undefined8 *)(lVar1 + 0x3b8) = uVar4;
          *(undefined8 *)(lVar1 + 0x3d0) = uVar6;
          *(undefined8 *)(lVar1 + 0x3c8) = uVar5;
          uVar4 = param_7[4];
          *(undefined8 *)(lVar1 + 0x3e0) = param_7[5];
          *(undefined8 *)(lVar1 + 0x3d8) = uVar4;
          uVar4 = *param_8;
          uVar6 = param_8[3];
          uVar5 = param_8[2];
          *(undefined8 *)(lVar1 + 0x3f0) = param_8[1];
          *(undefined8 *)(lVar1 + 1000) = uVar4;
          *(undefined8 *)(lVar1 + 0x400) = uVar6;
          *(undefined8 *)(lVar1 + 0x3f8) = uVar5;
          uVar4 = param_8[4];
          *(undefined8 *)(lVar1 + 0x410) = param_8[5];
          *(undefined8 *)(lVar1 + 0x408) = uVar4;
          *(undefined8 *)(lVar1 + 0x418) = param_1;
          *(undefined4 *)(lVar1 + 0x420) = param_9;
          alStack_80[0] = lVar1;
          func_0x0001097f6f54(param_2);
          puVar3 = (undefined1 *)(param_2 + 0x1a8);
          FUN_1097c5574(puVar3,alStack_80,1);
          if ((int)puVar3 == 0) {
            func_0x0001097ecd38(param_2);
            goto LAB_1097ec724;
          }
          _free(*(undefined8 *)(lVar1 + 0x390));
          *(undefined8 *)(lVar1 + 0x390) = 0;
          *(undefined4 *)(lVar1 + 0x398) = 0;
        }
        plVar2 = *(long **)(lVar1 + 0x178);
        while (plVar2 != (long *)(lVar1 + 0x178)) {
          plVar2 = (long *)*plVar2;
          _free();
        }
      }
      func_0x0001097e434c(lVar1 + 0x30);
    }
    FUN_1097ca284(*(undefined8 *)(lVar1 + 0x18));
    _free(lVar1);
  }
LAB_1097ec724:
  FUN_1097ca284(uStack_88);
  return puVar3;
}



/* Entry: 1097ec934; end: 1097ec93b;  */

undefined8 FUN_1097ec934(void)

{
  return 1;
}



/* Entry: 1097ec93c; end: 1097ecb6f;  */

undefined1 *
FUN_1097ec93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,ulong param_7,undefined8 param_8,uint param_9,undefined4 param_10,
             long param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_348 [720];
  undefined8 uStack_78;
  long alStack_70 [2];
  
  puVar4 = auStack_348;
  FUN_1097cbe14(puVar4,param_1,param_2,param_3,param_11,param_6,param_7,param_12,0);
  if ((int)puVar4 != 0) {
    return puVar4;
  }
  puVar4 = (undefined1 *)0x1;
  lVar2 = 1;
  _calloc(1,0x188);
  if (lVar2 == 0) goto LAB_1097ecb34;
  FUN_1097ecce0(param_1,lVar2,4,param_2,auStack_348);
  puVar4 = (undefined1 *)(lVar2 + 0x30);
  func_0x0001097e42d0(puVar4,param_3);
  if ((int)puVar4 == 0) {
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(int *)(lVar2 + 0x158) = param_5;
    *(undefined8 *)(lVar2 + 0x160) = 0;
    iVar6 = (int)param_7;
    *(int *)(lVar2 + 0x168) = iVar6;
    *(undefined8 *)(lVar2 + 0x170) = 0;
    *(uint *)(lVar2 + 0x178) = param_9;
    if (param_5 == 0) {
      lVar5 = 0;
      if (iVar6 == 0) goto LAB_1097eca30;
LAB_1097eca40:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)iVar6;
      puVar4 = (undefined1 *)0x1;
      if ((SUB168(auVar1 * ZEXT816(0x18),8) == 0) &&
         (lVar3 = ((-(param_7 >> 0x1f & 1) & 0xfffffffe00000000 | (param_7 & 0xffffffff) << 1) +
                  (long)iVar6) * 8, lVar3 != 0)) {
        _malloc();
        *(long *)(lVar2 + 0x160) = lVar3;
        if (lVar3 == 0) goto LAB_1097ecb00;
        _memcpy();
        if (param_9 != 0) goto LAB_1097eca88;
        goto LAB_1097ecaac;
      }
    }
    else {
      lVar5 = (long)param_5;
      _malloc();
      *(long *)(lVar2 + 0x150) = lVar5;
      if (lVar5 != 0) {
        _memcpy(lVar5,param_4,(long)param_5);
        if (iVar6 != 0) goto LAB_1097eca40;
LAB_1097eca30:
        if (param_9 == 0) {
LAB_1097ecaac:
          *(undefined4 *)(lVar2 + 0x17c) = param_10;
          puVar4 = (undefined1 *)(ulong)*(uint *)(param_11 + 8);
          if (*(uint *)(param_11 + 8) == 0) {
            func_0x0001097efce0(param_11);
            *(long *)(lVar2 + 0x180) = param_11;
            alStack_70[0] = lVar2;
            func_0x0001097f6f54(param_1);
            puVar4 = (undefined1 *)(param_1 + 0x1a8);
            FUN_1097c5574(puVar4,alStack_70,1);
            if ((int)puVar4 == 0) goto LAB_1097ecb34;
            FUN_1097ef278(*(undefined8 *)(lVar2 + 0x180),0);
            lVar5 = *(long *)(lVar2 + 0x150);
          }
          goto LAB_1097ecb04;
        }
LAB_1097eca88:
        if (-1 < (int)param_9) {
          lVar3 = (ulong)param_9 << 3;
          _malloc();
          *(long *)(lVar2 + 0x170) = lVar3;
          if (lVar3 != 0) {
            _memcpy();
            goto LAB_1097ecaac;
          }
        }
      }
LAB_1097ecb00:
      puVar4 = (undefined1 *)0x1;
    }
LAB_1097ecb04:
    _free(lVar5);
    _free(*(undefined8 *)(lVar2 + 0x160));
    _free(*(undefined8 *)(lVar2 + 0x170));
    func_0x0001097e434c(lVar2 + 0x30);
  }
  FUN_1097ca284(*(undefined8 *)(lVar2 + 0x18));
  _free(lVar2);
LAB_1097ecb34:
  FUN_1097ca284(uStack_78);
  return puVar4;
}



/* Entry: 1097ecb70; end: 1097ecc77;  */

long FUN_1097ecb70(long param_1,int param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_48;
  
  *(undefined4 *)(param_1 + 0x1d8) = 1;
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x48);
  if (puVar1 == (undefined8 *)0x0) {
    return 1;
  }
  *puVar1 = 0x100000005;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x1ac);
  *(int *)(puVar1 + 6) = param_2;
  _strdup();
  puVar1[7] = param_3;
  if (param_3 == 0) {
    lVar2 = 1;
    goto LAB_1097ecc68;
  }
  if ((param_2 == 0) || (param_4 == 0)) {
LAB_1097ecbf8:
    puStack_48 = puVar1;
    func_0x0001097f6f54(param_1);
    lVar2 = param_1 + 0x1a8;
    FUN_1097c5574(lVar2,&puStack_48,1);
    if ((int)lVar2 == 0) {
      func_0x0001097ecd38(param_1);
      return lVar2;
    }
    param_3 = puVar1[7];
  }
  else {
    _strdup();
    puVar1[8] = param_4;
    if (param_4 != 0) goto LAB_1097ecbf8;
    lVar2 = 1;
  }
  _free(param_3);
  _free(puVar1[8]);
LAB_1097ecc68:
  FUN_1097ca284();
  _free(puVar1);
  return lVar2;
}



/* Entry: 1097ecc78; end: 1097ecc7f;  */

undefined8 FUN_1097ecc78(void)

{
  return 1;
}



/* Entry: 1097ecc80; end: 1097eccb7;  */

void FUN_1097ecc80(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1097ecc80();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1097ecc80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1097eccb8; end: 1097eccdf;  */

undefined8 FUN_1097eccb8(void)

{
  return 0;
}



/* Entry: 1097ecce0; end: 1097ecdab;  */

void FUN_1097ecce0(long param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = param_3;
  param_2[1] = param_4;
  uVar2 = *(undefined8 *)(param_5 + 0x4c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_5 + 0x54);
  *(undefined8 *)(param_2 + 2) = uVar2;
  *(undefined8 *)(param_2 + 10) = 0;
  param_2[8] = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined8 *)(param_2 + 6) = 0;
  lVar1 = param_5;
  FUN_1097cbfac(param_5,*(undefined8 *)(param_5 + 0x2d0));
  if ((int)lVar1 == 0) {
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_5 + 0x2d0);
    *(undefined8 *)(param_5 + 0x2d0) = 0;
  }
  return;
}



/* Entry: 1097ecdac; end: 1097ecdd7;  */

void FUN_1097ecdac(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  
  if (((param_2 == 0) || (*(int *)(param_1 + 0x30) != 1)) ||
     (puVar6 = *(undefined8 **)(param_1 + 0x80), *(int *)*puVar6 != 0x10)) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  _pthread_mutex_lock(puVar6 + 0x41);
  plVar10 = puVar6 + 0x49;
  do {
    plVar10 = (long *)*plVar10;
    if (plVar10 == puVar6 + 0x49) goto LAB_1097eaba4;
  } while ((int)plVar10[-4] != param_2);
  _pthread_mutex_lock(0x1132e0448);
  iVar5 = *(int *)((long)plVar10 + -0x1c) + -1;
  *(int *)((long)plVar10 + -0x1c) = iVar5;
  _pthread_mutex_unlock(0x1132e0448);
  if (iVar5 != 0) {
LAB_1097eaba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(puVar6 + 0x41);
    return;
  }
  lVar11 = *plVar10;
  plVar2 = (long *)plVar10[1];
  *(long **)(lVar11 + 8) = plVar2;
  *plVar2 = lVar11;
  *plVar10 = (long)plVar10;
  plVar10[1] = (long)plVar10;
  _pthread_mutex_unlock(puVar6 + 0x41);
  uVar3 = *(uint *)((long)puVar6 + 0x1ac);
  uVar4 = *(uint *)((long)plVar10 + -0x14);
  uVar1 = uVar3;
  if (uVar4 <= uVar3) {
    uVar1 = uVar4;
  }
  uVar9 = (ulong)uVar1;
  if (uVar3 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)puVar6[0x37];
  }
  if (uVar4 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar10[-1];
  }
  if (0 < (int)uVar1) {
    do {
      piVar12 = (int *)*puVar6;
      iVar5 = *piVar12;
      if (iVar5 - 2U < 3 || iVar5 == 0) {
        lVar7 = 0x30;
        lVar8 = 4;
LAB_1097eac6c:
        FUN_1097ecdac((long)piVar12 + lVar7,*(undefined4 *)(lVar11 + lVar8));
      }
      else if (iVar5 == 1) {
        FUN_1097ecdac(piVar12 + 0xc,*(undefined4 *)(lVar11 + 4));
        lVar7 = 0x150;
        lVar8 = 8;
        goto LAB_1097eac6c;
      }
      lVar11 = lVar11 + 0xc;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != 0);
  }
  _free(plVar10[-1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar10 + -4);
  return;
}



/* Entry: 1097ecdd8; end: 1097ecfbf;  */

void FUN_1097ecdd8(long param_1,int param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_2 != 2) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  if (*(int *)(param_3 + 0x30) == 5) {
    uVar3 = 0;
    FUN_1097d866c(0,0x20028888,1,1,0xffffffff);
    if (*(code **)(param_3 + 0x98) == (code *)0x0) {
      FUN_1097f61ac(uVar3);
    }
    else {
      lVar4 = param_3;
      (**(code **)(param_3 + 0x98))(param_3,*(undefined8 *)(param_3 + 0xc0),uVar3,param_3 + 0x84);
      FUN_1097f61ac(uVar3);
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x10) == 0) && (lVar5 = lVar4, func_0x0001097d8d3c(), (int)lVar5 == 2)
           ) {
          *(undefined4 *)(param_1 + 0x1d0) = 0;
        }
        if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
          (**(code **)(param_3 + 0xa0))(param_3,*(undefined8 *)(param_3 + 0xc0),lVar4);
        }
        if (*(int *)(lVar4 + 0x10) == 0) {
          return;
        }
      }
    }
LAB_1097ecf40:
    lVar4 = param_3;
    FUN_1097e5818();
    if (((int)lVar4 == 0) && (FUN_1097e59e8(param_3,0), (int)param_3 == 0)) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
    }
    return;
  }
  if (*(int *)(param_3 + 0x30) != 1) goto LAB_1097ecf40;
  puVar7 = *(undefined8 **)(param_3 + 0x80);
  if (*(int *)*puVar7 == 0x1000) {
    _pthread_mutex_lock(puVar7 + 0x2e);
    puVar6 = (undefined8 *)puVar7[0x36];
    if (*(int *)(puVar6 + 3) != -1) {
      _pthread_mutex_lock(0x1132e0448);
      *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
      _pthread_mutex_unlock(0x1132e0448);
    }
    _pthread_mutex_unlock(puVar7 + 0x2e);
    puVar7 = puVar6;
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  if (*(int *)((long)puVar7 + 0x1c) != 0) {
    return;
  }
  if (*(int *)(puVar7 + 2) == 0) {
    func_0x0001097d8d3c();
    if ((int)puVar7 != 2) goto LAB_1097ecfa8;
  }
  else {
    if (*(int *)(puVar7 + 2) == 0x10) {
      if (*(int *)(puVar7 + 0x3a) == 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
      }
      if (*(int *)((long)puVar7 + 0x1d4) == 0) {
        *(undefined4 *)(param_1 + 0x1d4) = 0;
      }
      goto LAB_1097ecfa8;
    }
    lVar4 = param_3;
    FUN_1097e5818();
    if (((int)lVar4 != 0) || (FUN_1097e59e8(param_3,0), (int)param_3 != 0)) goto LAB_1097ecfa8;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
LAB_1097ecfa8:
  if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 3) != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar1 = *(int *)(puVar6 + 3);
    *(int *)(puVar6 + 3) = iVar1 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar1 + -1 == 0) {
      if ((*(byte *)(puVar6 + 6) >> 1 & 1) == 0) {
        *(byte *)(puVar6 + 6) = *(byte *)(puVar6 + 6) | 1;
        FUN_1097f6378(puVar6,0);
        if (*(int *)(puVar6 + 3) != 0) {
          return;
        }
        FUN_1097f6afc(puVar6);
      }
      if (puVar6[5] != 0) {
        func_0x0001097cc6a8();
      }
      func_0x0001097c55d4(puVar6 + 7);
      func_0x0001097c55d4(puVar6 + 10);
      if (puVar6[0x2c] != 0) {
        FUN_1097e4880();
      }
      bVar2 = *(byte *)(puVar6 + 6);
      if ((bVar2 >> 4 & 1) != 0) {
        FUN_1097ce1d0(puVar6[1]);
        bVar2 = *(byte *)(puVar6 + 6);
      }
      if ((bVar2 >> 3 & 1) != 0) {
        _free(puVar6[0x28]);
        _free(puVar6[0x2a]);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(puVar6);
      return;
    }
  }
  return;
}



/* Entry: 1097ecfc0; end: 1097ed0af;  */

void FUN_1097ecfc0(int *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  
  do {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined4 *)*param_3;
      do {
        uVar1 = *(undefined4 *)(lVar3 + 0x20);
        *param_3 = puVar4 + 1;
        *puVar4 = uVar1;
        lVar3 = *(long *)(lVar3 + 0x28);
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
    }
    piVar2 = *(int **)(param_1 + 4);
    if ((((piVar2 != (int *)0x0) && (*param_2 < piVar2[2])) && (param_2[1] < piVar2[3])) &&
       ((*piVar2 < param_2[2] && (piVar2[1] < param_2[3])))) {
      FUN_1097ecfc0(piVar2,param_2,param_3);
    }
    param_1 = *(int **)(param_1 + 6);
  } while (((param_1 != (int *)0x0) && (*param_2 < param_1[2])) &&
          ((param_2[1] < param_1[3] && ((*param_1 < param_2[2] && (param_1[1] < param_2[3]))))));
  return;
}



/* Entry: 1097ed0b0; end: 1097ed2c3;  */

undefined8 FUN_1097ed0b0(int *param_1,long param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar9 = *param_3;
LAB_1097ed0d0:
  do {
    piVar1 = param_1;
    iVar5 = *piVar1;
    if ((((iVar9 < iVar5) || (iVar6 = piVar1[1], param_3[1] < iVar6)) ||
        (iVar7 = piVar1[2], iVar7 < param_3[2])) || (iVar11 = piVar1[3], iVar11 < param_3[3])) {
      lVar8 = *(long *)(piVar1 + 8);
      if (lVar8 != 0) {
        piVar2 = piVar1;
        FUN_1097ed2c4(piVar1,piVar1);
        if ((int)piVar2 == 0) {
          lVar3 = *(long *)(piVar1 + 6);
          if (lVar3 == 0) {
            puVar4 = (undefined8 *)0x1;
            _calloc(1,0x28);
            if (puVar4 == (undefined8 *)0x0) goto LAB_1097ed284;
            uVar10 = *(undefined8 *)piVar1;
            puVar4[1] = *(undefined8 *)(piVar1 + 2);
            *puVar4 = uVar10;
            puVar4[4] = lVar8;
            *(undefined8 **)(piVar1 + 6) = puVar4;
          }
          else {
LAB_1097ed15c:
            FUN_1097ed0b0(lVar3,lVar8,piVar1);
          }
        }
        else {
          lVar3 = *(long *)(piVar1 + 4);
          if (lVar3 != 0) goto LAB_1097ed15c;
          puVar4 = (undefined8 *)0x1;
          _calloc(1,0x28);
          if (puVar4 == (undefined8 *)0x0) goto LAB_1097ed27c;
          uVar10 = *(undefined8 *)piVar1;
          puVar4[1] = *(undefined8 *)(piVar1 + 2);
          *puVar4 = uVar10;
          puVar4[4] = lVar8;
          *(undefined8 **)(piVar1 + 4) = puVar4;
        }
        piVar1[8] = 0;
        piVar1[9] = 0;
        iVar5 = *piVar1;
        iVar9 = *param_3;
      }
      if (iVar9 <= iVar5) {
        iVar5 = iVar9;
      }
      iVar6 = piVar1[1];
      if (param_3[1] <= piVar1[1]) {
        iVar6 = param_3[1];
      }
      *piVar1 = iVar5;
      piVar1[1] = iVar6;
      uVar10 = NEON_smax(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_3 + 2),4);
      *(undefined8 *)(piVar1 + 2) = uVar10;
      iVar9 = *param_3;
      iVar11 = (int)((ulong)uVar10 >> 0x20);
      iVar7 = (int)uVar10;
    }
    if (((iVar9 == iVar5) && (param_3[1] == iVar6)) &&
       ((param_3[2] == iVar7 && (lVar8 = param_2, param_3[3] == iVar11)))) {
      do {
        lVar3 = lVar8;
        lVar8 = *(long *)(lVar3 + 0x28);
      } while (lVar8 != 0);
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(piVar1 + 8);
      *(long *)(piVar1 + 8) = param_2;
      return 0;
    }
    piVar2 = piVar1;
    FUN_1097ed2c4(piVar1,param_3);
    if ((int)piVar2 == 0) {
      param_1 = *(int **)(piVar1 + 6);
      if (*(int **)(piVar1 + 6) == (int *)0x0) {
        puVar4 = (undefined8 *)0x1;
        _calloc(1,0x28);
        if (puVar4 != (undefined8 *)0x0) {
          uVar10 = *(undefined8 *)param_3;
          puVar4[1] = *(undefined8 *)(param_3 + 2);
          *puVar4 = uVar10;
          puVar4[4] = param_2;
          *(undefined8 **)(piVar1 + 6) = puVar4;
          return 0;
        }
LAB_1097ed284:
        piVar1[6] = 0;
        piVar1[7] = 0;
        return 1;
      }
      goto LAB_1097ed0d0;
    }
    param_1 = *(int **)(piVar1 + 4);
    if (*(int **)(piVar1 + 4) == (int *)0x0) {
      puVar4 = (undefined8 *)0x1;
      _calloc(1,0x28);
      if (puVar4 != (undefined8 *)0x0) {
        uVar10 = *(undefined8 *)param_3;
        puVar4[1] = *(undefined8 *)(param_3 + 2);
        *puVar4 = uVar10;
        puVar4[4] = param_2;
        *(undefined8 **)(piVar1 + 4) = puVar4;
        return 0;
      }
LAB_1097ed27c:
      piVar1[4] = 0;
      piVar1[5] = 0;
      return 1;
    }
  } while( true );
}



/* Entry: 1097ed2c4; end: 1097ed7b3;  */

bool FUN_1097ed2c4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar9 = *(int **)(param_1 + 0x10);
  iVar8 = 0;
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
    iVar4 = piVar9[1];
    iVar8 = iVar10;
    if (*param_2 <= iVar10) {
      iVar8 = *param_2;
    }
    iVar6 = iVar4;
    if (param_2[1] <= iVar4) {
      iVar6 = param_2[1];
    }
    iVar3 = piVar9[2];
    iVar5 = piVar9[3];
    iVar1 = iVar3;
    if (iVar3 <= param_2[2]) {
      iVar1 = param_2[2];
    }
    iVar7 = iVar5;
    if (iVar5 <= param_2[3]) {
      iVar7 = param_2[3];
    }
    iVar8 = (iVar7 - iVar6 >> 8) * (iVar1 - iVar8 >> 8) -
            (iVar5 - iVar4 >> 8) * (iVar3 - iVar10 >> 8);
  }
  piVar9 = *(int **)(param_1 + 0x18);
  iVar10 = 0;
  if (piVar9 != (int *)0x0) {
    iVar4 = *piVar9;
    iVar6 = piVar9[1];
    iVar10 = iVar4;
    if (*param_2 <= iVar4) {
      iVar10 = *param_2;
    }
    iVar1 = iVar6;
    if (param_2[1] <= iVar6) {
      iVar1 = param_2[1];
    }
    iVar5 = piVar9[2];
    iVar7 = piVar9[3];
    iVar3 = iVar5;
    if (iVar5 <= param_2[2]) {
      iVar3 = param_2[2];
    }
    iVar2 = iVar7;
    if (iVar7 <= param_2[3]) {
      iVar2 = param_2[3];
    }
    iVar10 = (iVar2 - iVar1 >> 8) * (iVar3 - iVar10 >> 8) -
             (iVar7 - iVar6 >> 8) * (iVar5 - iVar4 >> 8);
  }
  return iVar8 <= iVar10;
}



/* Entry: 1097ed7b4; end: 1097ed8fb;  */

undefined8 FUN_1097ed7b4(long param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  piVar5 = (int *)(puVar7 + 2);
  iVar6 = *piVar5;
  if (iVar6 == *(int *)((long)puVar7 + 0x14)) {
    uVar8 = (long)iVar6 << 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    if (SUB168(auVar3 * ZEXT816(0x30),8) == 0) {
      puVar4 = (undefined8 *)((long)iVar6 * 0x60 | 0x18);
      _malloc();
      *puVar7 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        return 1;
      }
      iVar6 = 0;
      *(int *)((long)puVar4 + 0x14) = (int)uVar8;
      puVar7 = puVar4 + 3;
      *puVar4 = 0;
      puVar4[1] = puVar7;
      *(undefined8 **)(param_1 + 0x40) = puVar4;
      piVar5 = (int *)(puVar4 + 2);
      *piVar5 = 1;
LAB_1097ed860:
      *(undefined4 *)(puVar7 + 5) = param_3;
      iVar1 = *param_2;
      if (*param_2 <= *(int *)(param_1 + 0x18)) {
        iVar1 = *(int *)(param_1 + 0x18);
      }
      iVar2 = param_2[2];
      if (*(int *)(param_1 + 0x20) <= param_2[2]) {
        iVar2 = *(int *)(param_1 + 0x20);
      }
      *(int *)(puVar7 + 2) = iVar1;
      *(int *)((long)puVar7 + 0x14) = iVar2;
      if (iVar1 < iVar2) {
        iVar1 = param_2[1];
        if (param_2[1] <= *(int *)(param_1 + 0x1c)) {
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        iVar2 = param_2[3];
        if (*(int *)(param_1 + 0x24) <= param_2[3]) {
          iVar2 = *(int *)(param_1 + 0x24);
        }
        *(int *)(puVar7 + 3) = iVar1;
        *(int *)((long)puVar7 + 0x1c) = iVar2;
        *(int *)(puVar7 + 4) = iVar1 >> 8;
        *(int *)((long)puVar7 + 0x24) = iVar2 >> 8;
        if (iVar1 < iVar2) {
          *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + 1;
          return 0;
        }
      }
      *piVar5 = iVar6;
      return 0;
    }
    *puVar7 = 0;
  }
  else {
    *(int *)(puVar7 + 2) = iVar6 + 1;
    if (puVar7[1] != 0) {
      puVar7 = (undefined8 *)(puVar7[1] + (long)iVar6 * 0x30);
      goto LAB_1097ed860;
    }
  }
  return 1;
}



/* Entry: 1097ed8fc; end: 1097ed92b;  */

void FUN_1097ed8fc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  return;
}



/* Entry: 1097ed92c; end: 1097edbaf;  */

long * FUN_1097ed92c(long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5,
                    code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  int iStack_36c8;
  char acStack_36c4 [28];
  long lStack_36a8;
  undefined1 **ppuStack_36a0;
  code *pcStack_3698;
  long *plStack_3690;
  uint uStack_3688;
  uint uStack_3684;
  undefined1 *puStack_3680;
  undefined1 auStack_3678 [8];
  undefined8 uStack_3670;
  long *aplStack_1678 [2];
  undefined4 uStack_1668;
  long lStack_1648;
  long **pplStack_1640;
  undefined4 uStack_1638;
  long *plStack_1618;
  int iStack_1610;
  int iStack_160c;
  int iStack_1608;
  undefined8 uStack_1600;
  undefined4 uStack_15f0;
  undefined8 uStack_15d8;
  undefined4 uStack_15d0;
  undefined8 uStack_15b0;
  undefined8 *puStack_15a8;
  undefined8 uStack_15a0;
  undefined4 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined1 *puStack_1580;
  undefined1 auStack_1578 [1000];
  long alStack_1190 [256];
  long *plStack_990;
  undefined4 uStack_984;
  long alStack_980 [24];
  long lStack_8c0;
  undefined1 *puStack_860;
  code *pcStack_858;
  long alStack_848 [256];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(uint *)(param_1 + 0x109);
  plVar9 = param_2;
  if (uVar6 == 1) {
    lVar13 = param_1[6];
    uVar5 = *(uint *)(lVar13 + 0x18);
    uVar6 = (int)uVar5 >> 8;
    plVar21 = (long *)(ulong)uVar6;
    uVar10 = *(int *)(lVar13 + 0x1c) >> 8;
    if ((int)uVar6 < (int)uVar10) {
      plVar14 = plVar21;
      if ((uVar5 & 0xff) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)(ulong)(0x100 - (uVar5 & 0xff));
        plVar9 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
        param_3 = (long *)(ulong)*(uint *)(lVar13 + 0x14);
        param_1 = param_2;
        FUN_1097ee3d8();
        plVar14 = (long *)(ulong)(uVar6 + 1);
        param_4 = plVar21;
      }
      uVar6 = uVar10 - (int)plVar14;
      param_5 = (ulong)uVar6;
      if (uVar6 != 0 && (int)plVar14 <= (int)uVar10) {
        plVar9 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
        param_3 = (long *)(ulong)*(uint *)(lVar13 + 0x14);
        UNRECOVERED_JUMPTABLE = (code *)0x100;
        param_1 = param_2;
        FUN_1097ee3d8();
        param_4 = plVar14;
      }
      uVar5 = (uint)*(byte *)(lVar13 + 0x1c);
      plVar14 = param_1;
      plVar21 = (long *)(ulong)uVar10;
      if (*(byte *)(lVar13 + 0x1c) != 0) goto LAB_1097edaec;
    }
    else {
      uVar5 = *(int *)(lVar13 + 0x1c) - uVar5;
LAB_1097edaec:
      param_4 = plVar21;
      plVar9 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
      param_3 = (long *)(ulong)*(uint *)(lVar13 + 0x14);
      UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar5 & 0xffff);
      param_5 = 1;
      FUN_1097ee3d8();
      plVar14 = param_2;
    }
    plVar21 = (long *)0x0;
LAB_1097edb08:
    param_1 = plVar14;
    param_2 = plVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar21;
    }
  }
  else {
    if (uVar6 != 0) {
      if ((int)uVar6 < 0x100) {
        plVar15 = alStack_848;
LAB_1097ed978:
        uVar7 = 0;
        plVar9 = param_1 + 5;
        do {
          uVar6 = *(uint *)(plVar9 + 2);
          uVar11 = (ulong)uVar6;
          if (0 < (int)uVar6) {
            lVar13 = plVar9[1];
            iVar4 = (int)uVar7;
            uVar7 = (ulong)(iVar4 + uVar6);
            plVar21 = plVar15 + iVar4;
            do {
              *plVar21 = lVar13;
              lVar13 = lVar13 + 0x30;
              uVar11 = uVar11 - 1;
              plVar21 = plVar21 + 1;
            } while (uVar11 != 0);
          }
          plVar9 = (long *)*plVar9;
          uVar11 = uVar7;
        } while (plVar9 != (long *)0x0);
        do {
          uVar10 = (int)uVar11 * 10;
          uVar6 = uVar10 / 0xd;
          if (uVar10 / 0xd < 2) {
            uVar6 = 1;
          }
          uVar5 = 0xb;
          if (0x19 < uVar10 - 0x75) {
            uVar5 = uVar6;
          }
          bVar1 = 1 < uVar5;
          uVar6 = (int)uVar7 - uVar5;
          uVar11 = (ulong)uVar6;
          plVar9 = plVar15;
          uVar2 = (ulong)uVar5;
          if (uVar6 != 0) {
            do {
              lVar13 = *plVar9;
              lVar19 = plVar15[uVar2];
              iVar4 = *(int *)(lVar13 + 0x20) - *(int *)(lVar19 + 0x20);
              if (iVar4 == 0) {
                iVar4 = *(int *)(lVar13 + 0x10) - *(int *)(lVar19 + 0x10);
              }
              if (0 < iVar4) {
                *plVar9 = lVar19;
                plVar15[uVar2] = lVar13;
                bVar1 = true;
              }
              uVar11 = uVar11 - 1;
              plVar9 = plVar9 + 1;
              uVar2 = (ulong)((int)uVar2 + 1);
            } while (uVar11 != 0);
          }
          uVar11 = (ulong)uVar5;
        } while (bVar1);
        plVar15[(int)uVar7] = 0;
        param_3 = plVar15;
        FUN_1097edbb0();
        plVar14 = param_1;
        plVar9 = param_2;
        plVar21 = param_1;
        if (plVar15 != alStack_848) {
          _free();
          plVar14 = plVar15;
          plVar9 = param_2;
        }
      }
      else {
        plVar14 = (long *)((ulong)uVar6 * 8 + 8);
        _malloc();
        plVar15 = plVar14;
        if (plVar14 != (long *)0x0) goto LAB_1097ed978;
        plVar21 = (long *)0x1;
      }
      goto LAB_1097edb08;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_2[2];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x0001097edb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (param_2,*(int *)((long)param_1 + 0x1c) >> 8,
                 *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0x1c) >> 8,0,0);
      return param_2;
    }
  }
  ___stack_chk_fail();
  pcStack_858 = FUN_1097edbb0;
  puStack_860 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_8c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1668 = 0x80000000;
  aplStack_1678[0] = &lStack_1648;
  uStack_1638 = 0x7fffffff;
  pplStack_1640 = aplStack_1678;
  plStack_1618 = aplStack_1678[0];
  uStack_15b0 = 0;
  puStack_15a8 = &uStack_1590;
  uStack_15a0 = 0;
  uStack_1598 = 0x20;
  uStack_1590 = 0;
  uStack_1588 = 0x3e8000003e8;
  puStack_1580 = auStack_1578;
  plStack_990 = alStack_1190;
  uStack_984 = 0x100;
  uStack_1600 = 0;
  uStack_15f0 = 0x80000000;
  uStack_15d8 = 0;
  uStack_15d0 = 0x7fffffff;
  uStack_3688 = 0;
  uStack_3684 = 0x400;
  uStack_3670 = 0;
  iStack_160c = (int)param_1[3] >> 8;
  iStack_1608 = (int)param_1[4] >> 8;
  plVar9 = alStack_980;
  plVar21 = param_2;
  plStack_3690 = param_3;
  puStack_3680 = auStack_3678;
  _setjmp();
  iVar4 = (int)UNRECOVERED_JUMPTABLE;
  uVar6 = (uint)plVar21;
  uVar10 = (uint)param_3;
  if ((int)plVar9 == 0) {
    iStack_1610 = *(int *)((long)param_1 + 0x1c) >> 8;
    plVar21 = (long *)*plStack_3690;
    plStack_3690 = plStack_3690 + 1;
LAB_1097edcf4:
    do {
      uVar6 = (int)plVar21[4] - iStack_1610;
      uVar7 = (ulong)uVar6;
      if (uVar6 != 0) {
        FUN_1097ee4ec(&plStack_3690,param_2);
        iStack_1610 = (int)plVar21[4];
      }
      do {
        iVar4 = (int)plVar21[2];
        plVar14 = plStack_1618;
        if ((int)plStack_1618[2] != iVar4) {
          if (iVar4 < (int)plStack_1618[2]) {
            do {
              plVar15 = (long *)plStack_1618[1];
              plVar14 = plStack_1618;
              if (((int)plVar15[2] < iVar4) ||
                 (plVar12 = (long *)plVar15[1], plVar14 = plVar15, (int)plVar12[2] < iVar4)) break;
              plStack_1618 = (long *)plVar12[1];
              plVar14 = plVar12;
            } while (iVar4 <= (int)plStack_1618[2]);
          }
          else {
            do {
              plVar14 = (long *)*plStack_1618;
              if ((iVar4 <= (int)plVar14[2]) ||
                 (plVar14 = (long *)*plVar14, iVar4 <= (int)plVar14[2])) break;
              plStack_1618 = (long *)*plVar14;
              plVar14 = plStack_1618;
            } while ((int)plStack_1618[2] < iVar4);
          }
        }
        puVar8 = (undefined8 *)plVar14[1];
        *puVar8 = plVar21;
        *plVar21 = (long)plVar14;
        plVar21[1] = (long)puVar8;
        plVar14[1] = (long)plVar21;
        uVar6 = uStack_3688 + 1;
        plStack_1618 = plVar21;
        if (uVar6 == uStack_3684) {
          iVar18 = (int)&uStack_3688;
          FUN_1097ee960();
          iVar4 = (int)UNRECOVERED_JUMPTABLE;
          uVar10 = (uint)uVar7;
          if (iVar18 == 0) {
            plVar21 = alStack_980;
            uVar6 = 1;
            _longjmp();
            goto LAB_1097ee3d4;
          }
          uVar6 = uStack_3688 + 1;
        }
        uVar10 = uVar6;
        if (uStack_3688 != 0) {
          iVar4 = *(int *)((long)plVar21 + 0x24);
          do {
            uVar5 = (int)uVar10 >> 1;
            if (*(int *)(*(long *)(puStack_3680 + (long)(int)uVar5 * 8) + 0x24) <= iVar4) break;
            *(long *)(puStack_3680 + (long)(int)uVar10 * 8) =
                 *(long *)(puStack_3680 + (long)(int)uVar5 * 8);
            uVar10 = uVar5;
          } while (uVar5 != 1);
        }
        *(long **)(puStack_3680 + (long)(int)uVar10 * 8) = plVar21;
        plVar14 = plStack_3690 + 1;
        plVar21 = (long *)*plStack_3690;
        plStack_3690 = plVar14;
        uStack_3688 = uVar6;
        if (plVar21 == (long *)0x0) {
          uVar10 = 1;
          plVar21 = param_2;
          FUN_1097ee4ec(&plStack_3690);
          iVar4 = (int)UNRECOVERED_JUMPTABLE;
          plVar14 = *(long **)(puStack_3680 + 8);
          uVar7 = (long)(int)uStack_3688;
          goto LAB_1097ee108;
        }
      } while ((int)plVar21[4] == iStack_1610);
      FUN_1097ee4ec(&plStack_3690,param_2,1);
      plVar14 = *(long **)(puStack_3680 + 8);
      uVar7 = (long)(int)uStack_3688;
      do {
        iVar4 = *(int *)((long)plVar14 + 0x24);
        if (iVar4 != iStack_1610) {
          iStack_1610 = iStack_1610 + 1;
          if (iVar4 < (int)plVar21[4]) {
            do {
              if (iVar4 - iStack_1610 != 0) {
                FUN_1097ee4ec(&plStack_3690,param_2,iVar4 - iStack_1610);
                iStack_1610 = *(int *)((long)plVar14 + 0x24);
              }
              FUN_1097ee4ec(&plStack_3690,param_2,1);
              uVar7 = (long)(int)uStack_3688;
              do {
                if (plStack_1618 == plVar14) {
                  plStack_1618 = (long *)*plVar14;
                }
                puVar8 = (undefined8 *)plVar14[1];
                *puVar8 = (long *)*plVar14;
                *(undefined8 **)(*plVar14 + 8) = puVar8;
                uVar11 = uVar7 - 1;
                uStack_3688 = (uint)uVar11;
                if (uVar11 == 0) {
                  *(undefined8 *)(puStack_3680 + 8) = 0;
                }
                else {
                  lVar13 = *(long *)(puStack_3680 + uVar7 * 8);
                  if ((long)uVar7 < 3) {
                    lVar19 = 1;
                  }
                  else {
                    iVar4 = *(int *)(lVar13 + 0x24);
                    uVar6 = 2;
                    uVar2 = 1;
                    do {
                      uVar20 = uVar11;
                      if (uVar6 != uStack_3688) {
                        uVar10 = (uint)((long)(int)uVar6 | 1U);
                        if (*(int *)(*(long *)(puStack_3680 + (long)(int)uVar6 * 8) + 0x24) <=
                            *(int *)(*(long *)(puStack_3680 + ((long)(int)uVar6 | 1U) * 8) + 0x24))
                        {
                          uVar10 = uVar6;
                        }
                        uVar20 = (ulong)uVar10;
                      }
                      iVar18 = (int)uVar20;
                      lVar19 = (long)(int)uVar2;
                      if (iVar4 <= *(int *)(*(long *)(puStack_3680 + (long)iVar18 * 8) + 0x24))
                      goto LAB_1097ee084;
                      *(long *)(puStack_3680 + lVar19 * 8) =
                           *(long *)(puStack_3680 + (long)iVar18 * 8);
                      uVar6 = iVar18 << 1;
                      uVar2 = uVar20;
                    } while ((long)(int)uVar6 < (long)uVar7);
                    lVar19 = (long)iVar18;
                  }
LAB_1097ee084:
                  *(long *)(puStack_3680 + lVar19 * 8) = lVar13;
                }
                plVar14 = *(long **)(puStack_3680 + 8);
                if (plVar14 == (long *)0x0) goto LAB_1097ee0d4;
                iVar4 = *(int *)((long)plVar14 + 0x24);
                uVar7 = uVar11;
              } while (iVar4 == iStack_1610);
              iStack_1610 = iStack_1610 + 1;
            } while (iVar4 < (int)plVar21[4]);
          }
          goto LAB_1097edcf4;
        }
        if (plStack_1618 == plVar14) {
          plStack_1618 = (long *)*plVar14;
        }
        puVar8 = (undefined8 *)plVar14[1];
        *puVar8 = (long *)*plVar14;
        *(undefined8 **)(*plVar14 + 8) = puVar8;
        uVar11 = uVar7 - 1;
        uStack_3688 = (uint)uVar11;
        if (uVar11 == 0) {
          *(undefined8 *)(puStack_3680 + 8) = 0;
        }
        else {
          lVar13 = *(long *)(puStack_3680 + uVar7 * 8);
          if ((long)uVar7 < 3) {
            lVar19 = 1;
          }
          else {
            iVar4 = *(int *)(lVar13 + 0x24);
            uVar6 = 2;
            uVar2 = 1;
            do {
              uVar20 = uVar11;
              if (uVar6 != uStack_3688) {
                uVar10 = (uint)((long)(int)uVar6 | 1U);
                if (*(int *)(*(long *)(puStack_3680 + (long)(int)uVar6 * 8) + 0x24) <=
                    *(int *)(*(long *)(puStack_3680 + ((long)(int)uVar6 | 1U) * 8) + 0x24)) {
                  uVar10 = uVar6;
                }
                uVar20 = (ulong)uVar10;
              }
              iVar18 = (int)uVar20;
              lVar19 = (long)(int)uVar2;
              if (iVar4 <= *(int *)(*(long *)(puStack_3680 + (long)iVar18 * 8) + 0x24))
              goto LAB_1097edf4c;
              *(long *)(puStack_3680 + lVar19 * 8) = *(long *)(puStack_3680 + (long)iVar18 * 8);
              uVar6 = iVar18 << 1;
              uVar2 = uVar20;
            } while ((long)(int)uVar6 < (long)uVar7);
            lVar19 = (long)iVar18;
          }
LAB_1097edf4c:
          *(long *)(puStack_3680 + lVar19 * 8) = lVar13;
        }
        plVar14 = *(long **)(puStack_3680 + 8);
        uVar7 = uVar11;
      } while (plVar14 != (long *)0x0);
LAB_1097ee0d4:
      iStack_1610 = iStack_1610 + 1;
    } while( true );
  }
  goto LAB_1097ee35c;
LAB_1097ee108:
  do {
    uVar6 = (uint)plVar21;
    iVar18 = *(int *)((long)plVar14 + 0x24);
    if (iVar18 != iStack_1610) {
      iStack_1610 = iStack_1610 + 1;
      if (iStack_1610 < *(int *)((long)param_1 + 0x24) >> 8) {
        do {
          if (iVar18 - iStack_1610 != 0) {
            FUN_1097ee4ec(&plStack_3690,param_2,iVar18 - iStack_1610);
            iStack_1610 = *(int *)((long)plVar14 + 0x24);
          }
          uVar10 = 1;
          plVar21 = param_2;
          FUN_1097ee4ec(&plStack_3690);
          iVar4 = (int)UNRECOVERED_JUMPTABLE;
          uVar7 = (long)(int)uStack_3688;
          do {
            if (plStack_1618 == plVar14) {
              plStack_1618 = (long *)*plVar14;
            }
            plVar15 = (long *)plVar14[1];
            *plVar15 = *plVar14;
            *(long **)(*plVar14 + 8) = plVar15;
            uVar11 = uVar7 - 1;
            uStack_3688 = (uint)uVar11;
            if (uVar11 == 0) {
              *(undefined8 *)(puStack_3680 + 8) = 0;
            }
            else {
              lVar13 = *(long *)(puStack_3680 + uVar7 * 8);
              if ((long)uVar7 < 3) {
                lVar19 = 1;
              }
              else {
                iVar18 = *(int *)(lVar13 + 0x24);
                uVar6 = 2;
                uVar2 = 1;
                do {
                  uVar20 = uVar11;
                  if (uVar6 != uStack_3688) {
                    uVar5 = (uint)((long)(int)uVar6 | 1U);
                    if (*(int *)(*(long *)(puStack_3680 + (long)(int)uVar6 * 8) + 0x24) <=
                        *(int *)(*(long *)(puStack_3680 + ((long)(int)uVar6 | 1U) * 8) + 0x24)) {
                      uVar5 = uVar6;
                    }
                    uVar20 = (ulong)uVar5;
                  }
                  iVar17 = (int)uVar20;
                  uVar6 = *(uint *)(*(long *)(puStack_3680 + (long)iVar17 * 8) + 0x24);
                  plVar21 = (long *)(ulong)uVar6;
                  lVar19 = (long)(int)uVar2;
                  if (iVar18 <= (int)uVar6) goto LAB_1097ee30c;
                  *(long *)(puStack_3680 + lVar19 * 8) = *(long *)(puStack_3680 + (long)iVar17 * 8);
                  uVar6 = iVar17 << 1;
                  uVar2 = uVar20;
                } while ((long)(int)uVar6 < (long)uVar7);
                lVar19 = (long)iVar17;
              }
LAB_1097ee30c:
              *(long *)(puStack_3680 + lVar19 * 8) = lVar13;
            }
            uVar6 = (uint)plVar21;
            plVar14 = *(long **)(puStack_3680 + 8);
            if (plVar14 == (long *)0x0) goto LAB_1097ee35c;
            iVar18 = *(int *)((long)plVar14 + 0x24);
            uVar7 = uVar11;
          } while (iVar18 == iStack_1610);
          iStack_1610 = iStack_1610 + 1;
        } while (iStack_1610 < *(int *)((long)param_1 + 0x24) >> 8);
      }
      break;
    }
    if (plStack_1618 == plVar14) {
      plStack_1618 = (long *)*plVar14;
    }
    puVar8 = (undefined8 *)plVar14[1];
    *puVar8 = (long *)*plVar14;
    *(undefined8 **)(*plVar14 + 8) = puVar8;
    uVar11 = uVar7 - 1;
    uStack_3688 = (uint)uVar11;
    if (uVar11 == 0) {
      *(undefined8 *)(puStack_3680 + 8) = 0;
    }
    else {
      lVar13 = *(long *)(puStack_3680 + uVar7 * 8);
      if ((long)uVar7 < 3) {
        lVar19 = 1;
      }
      else {
        iVar18 = *(int *)(lVar13 + 0x24);
        uVar6 = 2;
        uVar2 = 1;
        do {
          uVar20 = uVar11;
          if (uVar6 != uStack_3688) {
            uVar5 = (uint)((long)(int)uVar6 | 1U);
            if (*(int *)(*(long *)(puStack_3680 + (long)(int)uVar6 * 8) + 0x24) <=
                *(int *)(*(long *)(puStack_3680 + ((long)(int)uVar6 | 1U) * 8) + 0x24)) {
              uVar5 = uVar6;
            }
            uVar20 = (ulong)uVar5;
          }
          iVar17 = (int)uVar20;
          uVar6 = *(uint *)(*(long *)(puStack_3680 + (long)iVar17 * 8) + 0x24);
          plVar21 = (long *)(ulong)uVar6;
          lVar19 = (long)(int)uVar2;
          if (iVar18 <= (int)uVar6) goto LAB_1097ee1d0;
          *(long *)(puStack_3680 + lVar19 * 8) = *(long *)(puStack_3680 + (long)iVar17 * 8);
          uVar6 = iVar17 << 1;
          uVar2 = uVar20;
        } while ((long)(int)uVar6 < (long)uVar7);
        lVar19 = (long)iVar17;
      }
LAB_1097ee1d0:
      *(long *)(puStack_3680 + lVar19 * 8) = lVar13;
    }
    uVar6 = (uint)plVar21;
    plVar14 = *(long **)(puStack_3680 + 8);
    uVar7 = uVar11;
  } while (plVar14 != (long *)0x0);
LAB_1097ee35c:
  FUN_1097cf6a0(&uStack_15b0);
  if (puStack_3680 != auStack_3678) {
    _free();
  }
  plVar21 = plStack_990;
  if (plStack_990 != alStack_1190) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c0) {
    return plVar9;
  }
LAB_1097ee3d4:
  ___stack_chk_fail();
  pcStack_3698 = FUN_1097ee3d8;
  lStack_36a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar17 = (int)uVar10 >> 8;
  iVar18 = (int)uVar6 >> 8;
  if (iVar18 < iVar17) {
    uVar6 = uVar6 & 0xff;
    iVar16 = iVar18;
    if (uVar6 != 0) {
      acStack_36c4[0] = (char)((0x100 - uVar6) * iVar4 >> 8);
      iVar16 = iVar18 + 1;
      iStack_36c8 = iVar18;
    }
    uVar6 = (uint)(uVar6 != 0);
    if (iVar16 < iVar17) {
      *(int *)(acStack_36c4 + (ulong)uVar6 * 8 + -4) = iVar16;
      acStack_36c4[(ulong)uVar6 * 8] = (char)iVar4 - (char)((uint)iVar4 >> 8);
      uVar6 = uVar6 + 1;
    }
    iVar18 = iVar17;
    if ((uVar10 & 0xff) != 0) {
      *(int *)(acStack_36c4 + (ulong)uVar6 * 8 + -4) = iVar17;
      iVar18 = iVar17 + 1;
      acStack_36c4[(ulong)uVar6 * 8] = (char)((uVar10 & 0xff) * iVar4 >> 8);
      uVar6 = uVar6 + 1;
    }
  }
  else {
    iVar18 = iVar17 + 1;
    acStack_36c4[0] = (char)((uVar10 - uVar6) * iVar4 >> 8);
    uVar6 = 1;
    iStack_36c8 = iVar17;
  }
  *(int *)(acStack_36c4 + (ulong)uVar6 * 8 + -4) = iVar18;
  acStack_36c4[(ulong)uVar6 * 8] = '\0';
  piVar3 = &iStack_36c8;
  ppuStack_36a0 = &puStack_860;
  (*(code *)plVar21[2])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_36a8) {
    return plVar21;
  }
  ___stack_chk_fail();
  lVar13 = plVar21[0x410];
  *(undefined4 *)(plVar21 + 0x5a1) = 0;
  plVar9 = (long *)plVar21[0x403];
  if (plVar9 == plVar21 + 0x409) {
    iVar4 = 0;
LAB_1097ee798:
    lVar13 = plVar21[0x5a0];
    (*(code *)param_4[2])(param_4,(int)plVar21[0x410],param_5,lVar13,iVar4);
    iVar18 = (int)lVar13;
    iVar4 = (int)param_5;
    if ((int)param_4 == 0) {
      return param_4;
    }
    _longjmp(plVar21 + 0x5a2,param_4);
  }
  else {
    plVar14 = plVar21 + 0x416;
    plVar21[0x413] = (long)plVar14;
    plVar21[0x416] = (long)(plVar21 + 0x412);
    plVar21[0x41a] = (long)plVar14;
    *(undefined4 *)(plVar21 + 0x41b) = 0;
    uVar7 = param_5;
    do {
      if ((int)lVar13 == *(int *)((long)plVar9 + 0x24)) {
        uVar6 = (uint)*(byte *)((long)plVar9 + 0x1c);
        if (*(byte *)((long)plVar9 + 0x1c) != 0) goto LAB_1097ee570;
      }
      else {
        uVar6 = 0x100;
LAB_1097ee570:
        if ((int)lVar13 == (int)plVar9[4]) {
          uVar6 = uVar6 - *(byte *)(plVar9 + 3);
        }
        iVar4 = (int)plVar9[5] * uVar6;
        uVar6 = *(uint *)(plVar9 + 2);
        FUN_1097ee7f0(plVar21,(int)uVar6 >> 8,(0x100 - (uVar6 & 0xff)) * iVar4,
                      (uVar6 & 0xff) * iVar4);
        uVar6 = *(uint *)((long)plVar9 + 0x14);
        uVar7 = (ulong)((uVar6 | 0xffffff00) * iVar4);
        piVar3 = (int *)(ulong)-(iVar4 * (uVar6 & 0xff));
        FUN_1097ee7f0(plVar21,(int)uVar6 >> 8);
      }
      iVar18 = (int)piVar3;
      iVar4 = (int)uVar7;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != plVar21 + 0x409);
    uVar6 = (int)plVar21[0x41b] * 2;
    uVar10 = *(uint *)((long)plVar21 + 0x2d0c);
    if (uVar6 < *(uint *)((long)plVar21 + 0x2d0c)) {
LAB_1097ee628:
      plVar9 = (long *)plVar21[0x413];
      if (plVar9 == plVar14) {
        iVar17 = 0;
        iVar18 = -0x80000000;
      }
      else {
        iVar17 = 0;
        iVar4 = 0;
        iVar18 = -0x80000000;
        do {
          iVar16 = (int)plVar9[2];
          if (iVar16 != iVar18 && iVar17 != iVar4) {
            lVar13 = plVar21[0x5a1];
            *(int *)(plVar21 + 0x5a1) = (int)lVar13 + 1;
            piVar3 = (int *)(plVar21[0x5a0] + (long)(int)lVar13 * 8);
            *piVar3 = iVar18;
            *(undefined1 *)((long)piVar3 + 5) = 0;
            *(char *)(piVar3 + 1) = (char)((uint)iVar17 >> 8) - (char)((uint)iVar17 >> 0x10);
            iVar4 = iVar17;
          }
          iVar17 = *(int *)((long)plVar9 + 0x14) + iVar17;
          if (iVar17 != iVar4) {
            lVar13 = plVar21[0x5a1];
            *(int *)(plVar21 + 0x5a1) = (int)lVar13 + 1;
            piVar3 = (int *)(plVar21[0x5a0] + (long)(int)lVar13 * 8);
            *piVar3 = iVar16;
            *(undefined1 *)((long)piVar3 + 5) = 0;
            *(char *)(piVar3 + 1) = (char)((uint)iVar17 >> 8) - (char)((uint)iVar17 >> 0x10);
            iVar4 = iVar17;
          }
          iVar17 = (int)plVar9[3] + iVar17;
          iVar18 = iVar16 + 1;
          plVar9 = (long *)plVar9[1];
        } while (plVar9 != plVar14);
      }
      if ((long *)plVar21[0x41d] != plVar21 + 0x420) {
        plVar9 = (long *)plVar21[0x41d];
        plVar14 = (long *)plVar21[0x41e];
        do {
          plVar15 = plVar9;
          plVar9 = (long *)*plVar15;
          *plVar15 = (long)plVar14;
          plVar14 = plVar15;
        } while (plVar9 != plVar21 + 0x420);
        plVar21[0x41d] = (long)plVar9;
        plVar21[0x41e] = (long)plVar15;
      }
      *(undefined4 *)((long)plVar21 + 0x210c) = 1000;
      plVar21[0x422] = (long)(plVar21 + 0x423);
      iVar4 = (int)plVar21[0x5a1];
      if (iVar4 != 0) {
        iVar16 = (int)plVar21[0x411];
        if (iVar18 <= iVar16) {
          lVar13 = (long)iVar4;
          iVar4 = iVar4 + 1;
          *(int *)(plVar21 + 0x5a1) = iVar4;
          piVar3 = (int *)(plVar21[0x5a0] + lVar13 * 8);
          *piVar3 = iVar18;
          *(undefined1 *)((long)piVar3 + 5) = 0;
          *(char *)(piVar3 + 1) = (char)((uint)iVar17 >> 8) - (char)((uint)iVar17 >> 0x10);
        }
        if ((iVar17 != 0) && (iVar18 < iVar16)) {
          piVar3 = (int *)(plVar21[0x5a0] + (long)iVar4 * 8);
          iVar4 = iVar4 + 1;
          *(int *)(plVar21 + 0x5a1) = iVar4;
          *piVar3 = iVar16;
          *(undefined2 *)(piVar3 + 1) = 0x100;
        }
      }
      goto LAB_1097ee798;
    }
    do {
      uVar5 = uVar10;
      uVar10 = uVar5 << 1;
    } while (uVar5 <= uVar6);
    if ((long *)plVar21[0x5a0] != plVar21 + 0x4a0) {
      _free();
    }
    lVar13 = (ulong)uVar5 << 3;
    _malloc();
    plVar21[0x5a0] = lVar13;
    if (lVar13 != 0) {
      *(uint *)((long)plVar21 + 0x2d0c) = uVar5;
      goto LAB_1097ee628;
    }
  }
  plVar21 = plVar21 + 0x5a2;
  iVar17 = 1;
  _longjmp();
  plVar9 = (long *)plVar21[0x41a];
  if (iVar17 < (int)plVar9[2]) {
    do {
      plVar15 = (long *)*plVar9;
      plVar14 = plVar9;
      if (((int)plVar15[2] < iVar17) ||
         (plVar12 = (long *)*plVar15, plVar14 = plVar15, (int)plVar12[2] < iVar17)) break;
      plVar9 = (long *)*plVar12;
      plVar14 = plVar12;
    } while (iVar17 <= (int)plVar9[2]);
  }
  else {
    if ((int)plVar9[2] == iVar17) goto LAB_1097ee900;
    do {
      plVar14 = (long *)plVar9[1];
      if ((iVar17 <= (int)plVar14[2]) || (plVar14 = (long *)plVar14[1], iVar17 <= (int)plVar14[2]))
      break;
      plVar9 = (long *)plVar14[1];
      plVar14 = plVar9;
    } while ((int)plVar9[2] < iVar17);
  }
  plVar9 = plVar14;
  if ((int)plVar9[2] != iVar17) {
    *(int *)(plVar21 + 0x41b) = (int)plVar21[0x41b] + 1;
    plVar14 = (long *)plVar21[0x41c];
    if (plVar14 == (long *)0x0) {
      lVar13 = plVar21[0x41d];
      uVar6 = *(uint *)(plVar21 + 0x41f);
      if (*(uint *)(lVar13 + 0xc) < uVar6) {
        plVar14 = plVar21 + 0x41c;
        func_0x0001097cf700();
      }
      else {
        plVar14 = *(long **)(lVar13 + 0x10);
        *(ulong *)(lVar13 + 0x10) = (long)plVar14 + (ulong)uVar6;
        *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) - uVar6;
      }
      if (plVar14 == (long *)0x0) {
        plVar21 = plVar21 + 0x5a2;
        _longjmp(plVar21,1);
        iVar4 = *(int *)((long)plVar21 + 4);
        uVar6 = iVar4 << 1;
        *(uint *)((long)plVar21 + 4) = uVar6;
        plVar9 = (long *)plVar21[1];
        if (plVar9 == plVar21 + 2) {
          if (iVar4 < 1) {
            return (long *)0x0;
          }
          plVar9 = (long *)((ulong)uVar6 << 3);
          _malloc();
          if (plVar9 == (long *)0x0) {
            return (long *)0x0;
          }
          _memcpy();
        }
        else {
          if (iVar4 < 0) {
            return (long *)0x0;
          }
          _realloc(plVar9,(ulong)uVar6 << 3);
          if (plVar9 == (long *)0x0) {
            return (long *)0x0;
          }
        }
        plVar21[1] = (long)plVar9;
        return (long *)0x1;
      }
    }
    else {
      plVar21[0x41c] = *plVar14;
    }
    lVar13 = *plVar9;
    *(long **)(lVar13 + 8) = plVar14;
    *plVar14 = lVar13;
    plVar14[1] = (long)plVar9;
    *plVar9 = (long)plVar14;
    *(undefined4 *)((long)plVar14 + 0x14) = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    *(int *)(plVar14 + 2) = iVar17;
    plVar9 = plVar14;
  }
LAB_1097ee900:
  *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + iVar4;
  *(int *)(plVar9 + 3) = (int)plVar9[3] + iVar18;
  plVar21[0x41a] = (long)plVar9;
  return plVar21;
}



/* Entry: 1097edbb0; end: 1097ee3d7;  */

undefined1 *
FUN_1097edbb0(long param_1,ulong param_2,undefined8 *param_3,undefined1 *param_4,ulong param_5,
             int param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  int iStack_2e78;
  char acStack_2e74 [28];
  long lStack_2e58;
  undefined1 *puStack_2e50;
  code *pcStack_2e48;
  undefined8 *puStack_2e40;
  uint uStack_2e38;
  uint uStack_2e34;
  undefined1 *puStack_2e30;
  undefined1 auStack_2e28 [8];
  undefined8 uStack_2e20;
  long alStack_e28 [2];
  undefined4 uStack_e18;
  long lStack_df8;
  long *plStack_df0;
  undefined4 uStack_de8;
  long *plStack_dc8;
  int iStack_dc0;
  int iStack_dbc;
  int iStack_db8;
  undefined8 uStack_db0;
  undefined4 uStack_da0;
  undefined8 uStack_d88;
  undefined4 uStack_d80;
  undefined8 uStack_d60;
  undefined8 *puStack_d58;
  undefined8 uStack_d50;
  undefined4 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined1 *puStack_d30;
  undefined1 auStack_d28 [1000];
  undefined1 auStack_940 [2048];
  undefined1 *puStack_140;
  undefined4 uStack_134;
  undefined1 auStack_130 [192];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e18 = 0x80000000;
  alStack_e28[0] = (long)&lStack_df8;
  uStack_de8 = 0x7fffffff;
  plStack_df0 = alStack_e28;
  uStack_d60 = 0;
  puStack_d58 = &uStack_d40;
  uStack_d50 = 0;
  uStack_d48 = 0x20;
  uStack_d40 = 0;
  uStack_d38 = 0x3e8000003e8;
  puStack_d30 = auStack_d28;
  uStack_134 = 0x100;
  uStack_db0 = 0;
  uStack_da0 = 0x80000000;
  uStack_d88 = 0;
  uStack_d80 = 0x7fffffff;
  uStack_2e38 = 0;
  uStack_2e34 = 0x400;
  uStack_2e20 = 0;
  iStack_dbc = *(int *)(param_1 + 0x18) >> 8;
  iStack_db8 = *(int *)(param_1 + 0x20) >> 8;
  puVar6 = auStack_130;
  uVar7 = param_2;
  puStack_2e40 = param_3;
  puStack_2e30 = auStack_2e28;
  plStack_dc8 = (long *)alStack_e28[0];
  puStack_140 = auStack_940;
  _setjmp();
  uVar10 = (uint)uVar7;
  uVar12 = (uint)param_3;
  if ((int)puVar6 == 0) {
    iStack_dc0 = *(int *)(param_1 + 0x1c) >> 8;
    plVar26 = (long *)*puStack_2e40;
    puStack_2e40 = puStack_2e40 + 1;
LAB_1097edcf4:
    do {
      uVar10 = (int)plVar26[4] - iStack_dc0;
      uVar7 = (ulong)uVar10;
      if (uVar10 != 0) {
        FUN_1097ee4ec(&puStack_2e40,param_2);
        iStack_dc0 = (int)plVar26[4];
      }
      do {
        iVar13 = (int)plVar26[2];
        plVar16 = plStack_dc8;
        if ((int)plStack_dc8[2] != iVar13) {
          if (iVar13 < (int)plStack_dc8[2]) {
            do {
              plVar19 = (long *)plStack_dc8[1];
              plVar16 = plStack_dc8;
              if (((int)plVar19[2] < iVar13) ||
                 (plVar15 = (long *)plVar19[1], plVar16 = plVar19, (int)plVar15[2] < iVar13)) break;
              plStack_dc8 = (long *)plVar15[1];
              plVar16 = plVar15;
            } while (iVar13 <= (int)plStack_dc8[2]);
          }
          else {
            do {
              plVar16 = (long *)*plStack_dc8;
              if ((iVar13 <= (int)plVar16[2]) ||
                 (plVar16 = (long *)*plVar16, iVar13 <= (int)plVar16[2])) break;
              plStack_dc8 = (long *)*plVar16;
              plVar16 = plStack_dc8;
            } while ((int)plStack_dc8[2] < iVar13);
          }
        }
        puVar11 = (undefined8 *)plVar16[1];
        *puVar11 = plVar26;
        *plVar26 = (long)plVar16;
        plVar26[1] = (long)puVar11;
        plVar16[1] = (long)plVar26;
        uVar10 = uStack_2e38 + 1;
        plStack_dc8 = plVar26;
        if (uVar10 == uStack_2e34) {
          iVar13 = (int)&uStack_2e38;
          FUN_1097ee960();
          uVar12 = (uint)uVar7;
          if (iVar13 == 0) {
            puVar5 = auStack_130;
            uVar10 = 1;
            _longjmp();
            goto LAB_1097ee3d4;
          }
          uVar10 = uStack_2e38 + 1;
        }
        uVar12 = uVar10;
        if (uStack_2e38 != 0) {
          iVar13 = *(int *)((long)plVar26 + 0x24);
          do {
            uVar1 = (int)uVar12 >> 1;
            if (*(int *)(*(long *)(puStack_2e30 + (long)(int)uVar1 * 8) + 0x24) <= iVar13) break;
            *(long *)(puStack_2e30 + (long)(int)uVar12 * 8) =
                 *(long *)(puStack_2e30 + (long)(int)uVar1 * 8);
            uVar12 = uVar1;
          } while (uVar1 != 1);
        }
        *(long **)(puStack_2e30 + (long)(int)uVar12 * 8) = plVar26;
        puVar11 = puStack_2e40 + 1;
        plVar26 = (long *)*puStack_2e40;
        puStack_2e40 = puVar11;
        uStack_2e38 = uVar10;
        if (plVar26 == (long *)0x0) {
          uVar12 = 1;
          uVar7 = param_2;
          FUN_1097ee4ec(&puStack_2e40);
          plVar26 = *(long **)(puStack_2e30 + 8);
          uVar17 = (long)(int)uStack_2e38;
          goto LAB_1097ee108;
        }
      } while ((int)plVar26[4] == iStack_dc0);
      FUN_1097ee4ec(&puStack_2e40,param_2,1);
      plVar16 = *(long **)(puStack_2e30 + 8);
      uVar7 = (long)(int)uStack_2e38;
      do {
        iVar13 = *(int *)((long)plVar16 + 0x24);
        if (iVar13 != iStack_dc0) {
          iStack_dc0 = iStack_dc0 + 1;
          if (iVar13 < (int)plVar26[4]) {
            do {
              if (iVar13 - iStack_dc0 != 0) {
                FUN_1097ee4ec(&puStack_2e40,param_2,iVar13 - iStack_dc0);
                iStack_dc0 = *(int *)((long)plVar16 + 0x24);
              }
              FUN_1097ee4ec(&puStack_2e40,param_2,1);
              uVar7 = (long)(int)uStack_2e38;
              do {
                if (plStack_dc8 == plVar16) {
                  plStack_dc8 = (long *)*plVar16;
                }
                puVar11 = (undefined8 *)plVar16[1];
                *puVar11 = (long *)*plVar16;
                *(undefined8 **)(*plVar16 + 8) = puVar11;
                uVar17 = uVar7 - 1;
                uStack_2e38 = (uint)uVar17;
                if (uVar17 == 0) {
                  *(undefined8 *)(puStack_2e30 + 8) = 0;
                }
                else {
                  lVar22 = *(long *)(puStack_2e30 + uVar7 * 8);
                  if ((long)uVar7 < 3) {
                    lVar3 = 1;
                  }
                  else {
                    iVar13 = *(int *)(lVar22 + 0x24);
                    uVar10 = 2;
                    uVar4 = 1;
                    do {
                      uVar25 = uVar17;
                      if (uVar10 != uStack_2e38) {
                        uVar12 = (uint)((long)(int)uVar10 | 1U);
                        if (*(int *)(*(long *)(puStack_2e30 + (long)(int)uVar10 * 8) + 0x24) <=
                            *(int *)(*(long *)(puStack_2e30 + ((long)(int)uVar10 | 1U) * 8) + 0x24))
                        {
                          uVar12 = uVar10;
                        }
                        uVar25 = (ulong)uVar12;
                      }
                      iVar23 = (int)uVar25;
                      lVar3 = (long)(int)uVar4;
                      if (iVar13 <= *(int *)(*(long *)(puStack_2e30 + (long)iVar23 * 8) + 0x24))
                      goto LAB_1097ee084;
                      *(long *)(puStack_2e30 + lVar3 * 8) =
                           *(long *)(puStack_2e30 + (long)iVar23 * 8);
                      uVar10 = iVar23 << 1;
                      uVar4 = uVar25;
                    } while ((long)(int)uVar10 < (long)uVar7);
                    lVar3 = (long)iVar23;
                  }
LAB_1097ee084:
                  *(long *)(puStack_2e30 + lVar3 * 8) = lVar22;
                }
                plVar16 = *(long **)(puStack_2e30 + 8);
                if (plVar16 == (long *)0x0) goto LAB_1097ee0d4;
                iVar13 = *(int *)((long)plVar16 + 0x24);
                uVar7 = uVar17;
              } while (iVar13 == iStack_dc0);
              iStack_dc0 = iStack_dc0 + 1;
            } while (iVar13 < (int)plVar26[4]);
          }
          goto LAB_1097edcf4;
        }
        if (plStack_dc8 == plVar16) {
          plStack_dc8 = (long *)*plVar16;
        }
        puVar11 = (undefined8 *)plVar16[1];
        *puVar11 = (long *)*plVar16;
        *(undefined8 **)(*plVar16 + 8) = puVar11;
        uVar17 = uVar7 - 1;
        uStack_2e38 = (uint)uVar17;
        if (uVar17 == 0) {
          *(undefined8 *)(puStack_2e30 + 8) = 0;
        }
        else {
          lVar22 = *(long *)(puStack_2e30 + uVar7 * 8);
          if ((long)uVar7 < 3) {
            lVar3 = 1;
          }
          else {
            iVar13 = *(int *)(lVar22 + 0x24);
            uVar10 = 2;
            uVar4 = 1;
            do {
              uVar25 = uVar17;
              if (uVar10 != uStack_2e38) {
                uVar12 = (uint)((long)(int)uVar10 | 1U);
                if (*(int *)(*(long *)(puStack_2e30 + (long)(int)uVar10 * 8) + 0x24) <=
                    *(int *)(*(long *)(puStack_2e30 + ((long)(int)uVar10 | 1U) * 8) + 0x24)) {
                  uVar12 = uVar10;
                }
                uVar25 = (ulong)uVar12;
              }
              iVar23 = (int)uVar25;
              lVar3 = (long)(int)uVar4;
              if (iVar13 <= *(int *)(*(long *)(puStack_2e30 + (long)iVar23 * 8) + 0x24))
              goto LAB_1097edf4c;
              *(long *)(puStack_2e30 + lVar3 * 8) = *(long *)(puStack_2e30 + (long)iVar23 * 8);
              uVar10 = iVar23 << 1;
              uVar4 = uVar25;
            } while ((long)(int)uVar10 < (long)uVar7);
            lVar3 = (long)iVar23;
          }
LAB_1097edf4c:
          *(long *)(puStack_2e30 + lVar3 * 8) = lVar22;
        }
        plVar16 = *(long **)(puStack_2e30 + 8);
        uVar7 = uVar17;
      } while (plVar16 != (long *)0x0);
LAB_1097ee0d4:
      iStack_dc0 = iStack_dc0 + 1;
    } while( true );
  }
  goto LAB_1097ee35c;
LAB_1097ee108:
  do {
    uVar10 = (uint)uVar7;
    iVar13 = *(int *)((long)plVar26 + 0x24);
    if (iVar13 != iStack_dc0) {
      iStack_dc0 = iStack_dc0 + 1;
      if (iStack_dc0 < *(int *)(param_1 + 0x24) >> 8) {
        do {
          if (iVar13 - iStack_dc0 != 0) {
            FUN_1097ee4ec(&puStack_2e40,param_2,iVar13 - iStack_dc0);
            iStack_dc0 = *(int *)((long)plVar26 + 0x24);
          }
          uVar12 = 1;
          uVar7 = param_2;
          FUN_1097ee4ec(&puStack_2e40);
          uVar17 = (long)(int)uStack_2e38;
          do {
            if (plStack_dc8 == plVar26) {
              plStack_dc8 = (long *)*plVar26;
            }
            plVar16 = (long *)plVar26[1];
            *plVar16 = *plVar26;
            *(long **)(*plVar26 + 8) = plVar16;
            uVar4 = uVar17 - 1;
            uStack_2e38 = (uint)uVar4;
            if (uVar4 == 0) {
              *(undefined8 *)(puStack_2e30 + 8) = 0;
            }
            else {
              lVar22 = *(long *)(puStack_2e30 + uVar17 * 8);
              if ((long)uVar17 < 3) {
                lVar3 = 1;
              }
              else {
                iVar13 = *(int *)(lVar22 + 0x24);
                uVar10 = 2;
                uVar25 = 1;
                do {
                  uVar24 = uVar4;
                  if (uVar10 != uStack_2e38) {
                    uVar1 = (uint)((long)(int)uVar10 | 1U);
                    if (*(int *)(*(long *)(puStack_2e30 + (long)(int)uVar10 * 8) + 0x24) <=
                        *(int *)(*(long *)(puStack_2e30 + ((long)(int)uVar10 | 1U) * 8) + 0x24)) {
                      uVar1 = uVar10;
                    }
                    uVar24 = (ulong)uVar1;
                  }
                  iVar23 = (int)uVar24;
                  uVar10 = *(uint *)(*(long *)(puStack_2e30 + (long)iVar23 * 8) + 0x24);
                  uVar7 = (ulong)uVar10;
                  lVar3 = (long)(int)uVar25;
                  if (iVar13 <= (int)uVar10) goto LAB_1097ee30c;
                  *(long *)(puStack_2e30 + lVar3 * 8) = *(long *)(puStack_2e30 + (long)iVar23 * 8);
                  uVar10 = iVar23 << 1;
                  uVar25 = uVar24;
                } while ((long)(int)uVar10 < (long)uVar17);
                lVar3 = (long)iVar23;
              }
LAB_1097ee30c:
              *(long *)(puStack_2e30 + lVar3 * 8) = lVar22;
            }
            uVar10 = (uint)uVar7;
            plVar26 = *(long **)(puStack_2e30 + 8);
            if (plVar26 == (long *)0x0) goto LAB_1097ee35c;
            iVar13 = *(int *)((long)plVar26 + 0x24);
            uVar17 = uVar4;
          } while (iVar13 == iStack_dc0);
          iStack_dc0 = iStack_dc0 + 1;
        } while (iStack_dc0 < *(int *)(param_1 + 0x24) >> 8);
      }
      break;
    }
    if (plStack_dc8 == plVar26) {
      plStack_dc8 = (long *)*plVar26;
    }
    puVar11 = (undefined8 *)plVar26[1];
    *puVar11 = (long *)*plVar26;
    *(undefined8 **)(*plVar26 + 8) = puVar11;
    uVar4 = uVar17 - 1;
    uStack_2e38 = (uint)uVar4;
    if (uVar4 == 0) {
      *(undefined8 *)(puStack_2e30 + 8) = 0;
    }
    else {
      lVar22 = *(long *)(puStack_2e30 + uVar17 * 8);
      if ((long)uVar17 < 3) {
        lVar3 = 1;
      }
      else {
        iVar13 = *(int *)(lVar22 + 0x24);
        uVar10 = 2;
        uVar25 = 1;
        do {
          uVar24 = uVar4;
          if (uVar10 != uStack_2e38) {
            uVar1 = (uint)((long)(int)uVar10 | 1U);
            if (*(int *)(*(long *)(puStack_2e30 + (long)(int)uVar10 * 8) + 0x24) <=
                *(int *)(*(long *)(puStack_2e30 + ((long)(int)uVar10 | 1U) * 8) + 0x24)) {
              uVar1 = uVar10;
            }
            uVar24 = (ulong)uVar1;
          }
          iVar23 = (int)uVar24;
          uVar10 = *(uint *)(*(long *)(puStack_2e30 + (long)iVar23 * 8) + 0x24);
          uVar7 = (ulong)uVar10;
          lVar3 = (long)(int)uVar25;
          if (iVar13 <= (int)uVar10) goto LAB_1097ee1d0;
          *(long *)(puStack_2e30 + lVar3 * 8) = *(long *)(puStack_2e30 + (long)iVar23 * 8);
          uVar10 = iVar23 << 1;
          uVar25 = uVar24;
        } while ((long)(int)uVar10 < (long)uVar17);
        lVar3 = (long)iVar23;
      }
LAB_1097ee1d0:
      *(long *)(puStack_2e30 + lVar3 * 8) = lVar22;
    }
    uVar10 = (uint)uVar7;
    plVar26 = *(long **)(puStack_2e30 + 8);
    uVar17 = uVar4;
  } while (plVar26 != (long *)0x0);
LAB_1097ee35c:
  FUN_1097cf6a0(&uStack_d60);
  if (puStack_2e30 != auStack_2e28) {
    _free();
  }
  puVar5 = puStack_140;
  if (puStack_140 != auStack_940) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
LAB_1097ee3d4:
  ___stack_chk_fail();
  pcStack_2e48 = FUN_1097ee3d8;
  lStack_2e58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar23 = (int)uVar12 >> 8;
  iVar13 = (int)uVar10 >> 8;
  if (iVar13 < iVar23) {
    uVar10 = uVar10 & 0xff;
    iVar20 = iVar13;
    if (uVar10 != 0) {
      acStack_2e74[0] = (char)((0x100 - uVar10) * param_6 >> 8);
      iVar20 = iVar13 + 1;
      iStack_2e78 = iVar13;
    }
    uVar10 = (uint)(uVar10 != 0);
    if (iVar20 < iVar23) {
      *(int *)(acStack_2e74 + (ulong)uVar10 * 8 + -4) = iVar20;
      acStack_2e74[(ulong)uVar10 * 8] = (char)param_6 - (char)((uint)param_6 >> 8);
      uVar10 = uVar10 + 1;
    }
    iVar13 = iVar23;
    if ((uVar12 & 0xff) != 0) {
      *(int *)(acStack_2e74 + (ulong)uVar10 * 8 + -4) = iVar23;
      iVar13 = iVar23 + 1;
      acStack_2e74[(ulong)uVar10 * 8] = (char)((uVar12 & 0xff) * param_6 >> 8);
      uVar10 = uVar10 + 1;
    }
  }
  else {
    iVar13 = iVar23 + 1;
    acStack_2e74[0] = (char)((uVar12 - uVar10) * param_6 >> 8);
    uVar10 = 1;
    iStack_2e78 = iVar23;
  }
  *(int *)(acStack_2e74 + (ulong)uVar10 * 8 + -4) = iVar13;
  acStack_2e74[(ulong)uVar10 * 8] = '\0';
  piVar8 = &iStack_2e78;
  puStack_2e50 = &stack0xfffffffffffffff0;
  (**(code **)(puVar5 + 0x10))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e58) {
    return puVar5;
  }
  ___stack_chk_fail();
  iVar13 = *(int *)(puVar5 + 0x2080);
  *(undefined4 *)(puVar5 + 0x2d08) = 0;
  puVar11 = *(undefined8 **)(puVar5 + 0x2018);
  if (puVar11 == (undefined8 *)(puVar5 + 0x2048)) {
    iVar13 = 0;
LAB_1097ee798:
    uVar9 = *(undefined8 *)(puVar5 + 0x2d00);
    (**(code **)(param_4 + 0x10))(param_4,*(undefined4 *)(puVar5 + 0x2080),param_5,uVar9,iVar13);
    iVar20 = (int)uVar9;
    iVar23 = (int)param_5;
    if ((int)param_4 == 0) {
      return param_4;
    }
    _longjmp(puVar5 + 0x2d10,param_4);
  }
  else {
    puVar6 = puVar5 + 0x20b0;
    *(undefined1 **)(puVar5 + 0x2098) = puVar6;
    *(undefined1 **)(puVar5 + 0x20b0) = puVar5 + 0x2090;
    *(undefined1 **)(puVar5 + 0x20d0) = puVar6;
    *(undefined4 *)(puVar5 + 0x20d8) = 0;
    uVar7 = param_5;
    do {
      if (iVar13 == *(int *)((long)puVar11 + 0x24)) {
        uVar10 = (uint)*(byte *)((long)puVar11 + 0x1c);
        if (*(byte *)((long)puVar11 + 0x1c) != 0) goto LAB_1097ee570;
      }
      else {
        uVar10 = 0x100;
LAB_1097ee570:
        if (iVar13 == *(int *)(puVar11 + 4)) {
          uVar10 = uVar10 - *(byte *)(puVar11 + 3);
        }
        iVar23 = *(int *)(puVar11 + 5) * uVar10;
        uVar10 = *(uint *)(puVar11 + 2);
        FUN_1097ee7f0(puVar5,(int)uVar10 >> 8,(0x100 - (uVar10 & 0xff)) * iVar23,
                      (uVar10 & 0xff) * iVar23);
        uVar10 = *(uint *)((long)puVar11 + 0x14);
        uVar7 = (ulong)((uVar10 | 0xffffff00) * iVar23);
        piVar8 = (int *)(ulong)-(iVar23 * (uVar10 & 0xff));
        FUN_1097ee7f0(puVar5,(int)uVar10 >> 8);
      }
      iVar20 = (int)piVar8;
      iVar23 = (int)uVar7;
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)(puVar5 + 0x2048));
    uVar10 = *(uint *)(puVar5 + 0x2d0c);
    if ((uint)(*(int *)(puVar5 + 0x20d8) * 2) < *(uint *)(puVar5 + 0x2d0c)) {
LAB_1097ee628:
      puVar14 = *(undefined1 **)(puVar5 + 0x2098);
      if (puVar14 == puVar6) {
        iVar20 = 0;
        iVar23 = -0x80000000;
      }
      else {
        iVar20 = 0;
        iVar13 = 0;
        iVar23 = -0x80000000;
        do {
          iVar2 = *(int *)(puVar14 + 0x10);
          if (iVar2 != iVar23 && iVar20 != iVar13) {
            iVar13 = *(int *)(puVar5 + 0x2d08);
            *(int *)(puVar5 + 0x2d08) = iVar13 + 1;
            piVar8 = (int *)(*(long *)(puVar5 + 0x2d00) + (long)iVar13 * 8);
            *piVar8 = iVar23;
            *(undefined1 *)((long)piVar8 + 5) = 0;
            *(char *)(piVar8 + 1) = (char)((uint)iVar20 >> 8) - (char)((uint)iVar20 >> 0x10);
            iVar13 = iVar20;
          }
          iVar20 = *(int *)(puVar14 + 0x14) + iVar20;
          if (iVar20 != iVar13) {
            iVar13 = *(int *)(puVar5 + 0x2d08);
            *(int *)(puVar5 + 0x2d08) = iVar13 + 1;
            piVar8 = (int *)(*(long *)(puVar5 + 0x2d00) + (long)iVar13 * 8);
            *piVar8 = iVar2;
            *(undefined1 *)((long)piVar8 + 5) = 0;
            *(char *)(piVar8 + 1) = (char)((uint)iVar20 >> 8) - (char)((uint)iVar20 >> 0x10);
            iVar13 = iVar20;
          }
          iVar20 = *(int *)(puVar14 + 0x18) + iVar20;
          iVar23 = iVar2 + 1;
          puVar14 = *(undefined1 **)(puVar14 + 8);
        } while (puVar14 != puVar6);
      }
      if (*(undefined8 **)(puVar5 + 0x20e8) != (undefined8 *)(puVar5 + 0x2100)) {
        puVar11 = *(undefined8 **)(puVar5 + 0x20e8);
        puVar21 = *(undefined8 **)(puVar5 + 0x20f0);
        do {
          puVar18 = puVar11;
          puVar11 = (undefined8 *)*puVar18;
          *puVar18 = puVar21;
          puVar21 = puVar18;
        } while (puVar11 != (undefined8 *)(puVar5 + 0x2100));
        *(undefined8 **)(puVar5 + 0x20e8) = puVar11;
        *(undefined8 **)(puVar5 + 0x20f0) = puVar18;
      }
      *(undefined4 *)(puVar5 + 0x210c) = 1000;
      *(undefined1 **)(puVar5 + 0x2110) = puVar5 + 0x2118;
      iVar13 = *(int *)(puVar5 + 0x2d08);
      if (iVar13 != 0) {
        iVar2 = *(int *)(puVar5 + 0x2088);
        if (iVar23 <= iVar2) {
          lVar22 = (long)iVar13;
          iVar13 = iVar13 + 1;
          *(int *)(puVar5 + 0x2d08) = iVar13;
          piVar8 = (int *)(*(long *)(puVar5 + 0x2d00) + lVar22 * 8);
          *piVar8 = iVar23;
          *(undefined1 *)((long)piVar8 + 5) = 0;
          *(char *)(piVar8 + 1) = (char)((uint)iVar20 >> 8) - (char)((uint)iVar20 >> 0x10);
        }
        if ((iVar20 != 0) && (iVar23 < iVar2)) {
          piVar8 = (int *)(*(long *)(puVar5 + 0x2d00) + (long)iVar13 * 8);
          iVar13 = iVar13 + 1;
          *(int *)(puVar5 + 0x2d08) = iVar13;
          *piVar8 = iVar2;
          *(undefined2 *)(piVar8 + 1) = 0x100;
        }
      }
      goto LAB_1097ee798;
    }
    do {
      uVar12 = uVar10;
      uVar10 = uVar12 << 1;
    } while (uVar12 <= (uint)(*(int *)(puVar5 + 0x20d8) * 2));
    if (*(undefined1 **)(puVar5 + 0x2d00) != puVar5 + 0x2500) {
      _free();
    }
    lVar22 = (ulong)uVar12 << 3;
    _malloc();
    *(long *)(puVar5 + 0x2d00) = lVar22;
    if (lVar22 != 0) {
      *(uint *)(puVar5 + 0x2d0c) = uVar12;
      goto LAB_1097ee628;
    }
  }
  puVar5 = puVar5 + 0x2d10;
  iVar13 = 1;
  _longjmp();
  plVar26 = *(long **)(puVar5 + 0x20d0);
  if (iVar13 < (int)plVar26[2]) {
    do {
      plVar19 = (long *)*plVar26;
      plVar16 = plVar26;
      if (((int)plVar19[2] < iVar13) ||
         (plVar15 = (long *)*plVar19, plVar16 = plVar19, (int)plVar15[2] < iVar13)) break;
      plVar26 = (long *)*plVar15;
      plVar16 = plVar15;
    } while (iVar13 <= (int)plVar26[2]);
  }
  else {
    if ((int)plVar26[2] == iVar13) goto LAB_1097ee900;
    do {
      plVar16 = (long *)plVar26[1];
      if ((iVar13 <= (int)plVar16[2]) || (plVar16 = (long *)plVar16[1], iVar13 <= (int)plVar16[2]))
      break;
      plVar26 = (long *)plVar16[1];
      plVar16 = plVar26;
    } while ((int)plVar26[2] < iVar13);
  }
  plVar26 = plVar16;
  if ((int)plVar26[2] != iVar13) {
    *(int *)(puVar5 + 0x20d8) = *(int *)(puVar5 + 0x20d8) + 1;
    plVar16 = *(long **)(puVar5 + 0x20e0);
    if (plVar16 == (long *)0x0) {
      lVar22 = *(long *)(puVar5 + 0x20e8);
      uVar10 = *(uint *)(puVar5 + 0x20f8);
      if (*(uint *)(lVar22 + 0xc) < uVar10) {
        plVar16 = (long *)(puVar5 + 0x20e0);
        func_0x0001097cf700();
      }
      else {
        plVar16 = *(long **)(lVar22 + 0x10);
        *(ulong *)(lVar22 + 0x10) = (long)plVar16 + (ulong)uVar10;
        *(uint *)(lVar22 + 0xc) = *(uint *)(lVar22 + 0xc) - uVar10;
      }
      if (plVar16 == (long *)0x0) {
        puVar5 = puVar5 + 0x2d10;
        _longjmp(puVar5,1);
        iVar13 = *(int *)(puVar5 + 4);
        uVar10 = iVar13 << 1;
        *(uint *)(puVar5 + 4) = uVar10;
        puVar6 = *(undefined1 **)(puVar5 + 8);
        if (puVar6 == puVar5 + 0x10) {
          if (iVar13 < 1) {
            return (undefined1 *)0x0;
          }
          puVar6 = (undefined1 *)((ulong)uVar10 << 3);
          _malloc();
          if (puVar6 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
          _memcpy();
        }
        else {
          if (iVar13 < 0) {
            return (undefined1 *)0x0;
          }
          _realloc(puVar6,(ulong)uVar10 << 3);
          if (puVar6 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
        }
        *(undefined1 **)(puVar5 + 8) = puVar6;
        return (undefined1 *)0x1;
      }
    }
    else {
      *(long *)(puVar5 + 0x20e0) = *plVar16;
    }
    lVar22 = *plVar26;
    *(long **)(lVar22 + 8) = plVar16;
    *plVar16 = lVar22;
    plVar16[1] = (long)plVar26;
    *plVar26 = (long)plVar16;
    *(undefined4 *)((long)plVar16 + 0x14) = 0;
    *(undefined4 *)(plVar16 + 3) = 0;
    *(int *)(plVar16 + 2) = iVar13;
    plVar26 = plVar16;
  }
LAB_1097ee900:
  *(int *)((long)plVar26 + 0x14) = *(int *)((long)plVar26 + 0x14) + iVar23;
  *(int *)(plVar26 + 3) = (int)plVar26[3] + iVar20;
  *(long **)(puVar5 + 0x20d0) = plVar26;
  return puVar5;
}



/* Entry: 1097ee3d8; end: 1097ee4eb;  */

void FUN_1097ee3d8(long param_1,uint param_2,uint param_3,long param_4,ulong param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  int iStack_38;
  char acStack_34 [28];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = (int)param_3 >> 8;
  iVar10 = (int)param_2 >> 8;
  if (iVar10 < iVar9) {
    param_2 = param_2 & 0xff;
    iVar15 = iVar10;
    if (param_2 != 0) {
      acStack_34[0] = (char)((0x100 - param_2) * param_6 >> 8);
      iVar15 = iVar10 + 1;
      iStack_38 = iVar10;
    }
    uVar7 = (uint)(param_2 != 0);
    if (iVar15 < iVar9) {
      *(int *)(acStack_34 + (ulong)uVar7 * 8 + -4) = iVar15;
      acStack_34[(ulong)uVar7 * 8] = (char)param_6 - (char)((uint)param_6 >> 8);
      uVar7 = uVar7 + 1;
    }
    iVar10 = iVar9;
    if ((param_3 & 0xff) != 0) {
      *(int *)(acStack_34 + (ulong)uVar7 * 8 + -4) = iVar9;
      iVar10 = iVar9 + 1;
      acStack_34[(ulong)uVar7 * 8] = (char)((param_3 & 0xff) * param_6 >> 8);
      uVar7 = uVar7 + 1;
    }
  }
  else {
    iVar10 = iVar9 + 1;
    acStack_34[0] = (char)((param_3 - param_2) * param_6 >> 8);
    uVar7 = 1;
    iStack_38 = iVar9;
  }
  *(int *)(acStack_34 + (ulong)uVar7 * 8 + -4) = iVar10;
  acStack_34[(ulong)uVar7 * 8] = '\0';
  piVar5 = &iStack_38;
  (**(code **)(param_1 + 0x10))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  iVar10 = *(int *)(param_1 + 0x2080);
  *(undefined4 *)(param_1 + 0x2d08) = 0;
  plVar16 = *(long **)(param_1 + 0x2018);
  if (plVar16 == (long *)(param_1 + 0x2048)) {
    iVar10 = 0;
LAB_1097ee798:
    uVar6 = *(undefined8 *)(param_1 + 0x2d00);
    (**(code **)(param_4 + 0x10))(param_4,*(undefined4 *)(param_1 + 0x2080),param_5,uVar6,iVar10);
    iVar15 = (int)uVar6;
    iVar9 = (int)param_5;
    if ((int)param_4 == 0) {
      return;
    }
    _longjmp(param_1 + 0x2d10,param_4);
  }
  else {
    lVar13 = param_1 + 0x20b0;
    *(long *)(param_1 + 0x2098) = lVar13;
    *(long *)(param_1 + 0x20b0) = param_1 + 0x2090;
    *(long *)(param_1 + 0x20d0) = lVar13;
    *(undefined4 *)(param_1 + 0x20d8) = 0;
    uVar4 = param_5;
    do {
      if (iVar10 == *(int *)((long)plVar16 + 0x24)) {
        uVar7 = (uint)*(byte *)((long)plVar16 + 0x1c);
        if (*(byte *)((long)plVar16 + 0x1c) != 0) goto LAB_1097ee570;
      }
      else {
        uVar7 = 0x100;
LAB_1097ee570:
        if (iVar10 == (int)plVar16[4]) {
          uVar7 = uVar7 - *(byte *)(plVar16 + 3);
        }
        iVar9 = (int)plVar16[5] * uVar7;
        uVar7 = *(uint *)(plVar16 + 2);
        FUN_1097ee7f0(param_1,(int)uVar7 >> 8,(0x100 - (uVar7 & 0xff)) * iVar9,
                      (uVar7 & 0xff) * iVar9);
        uVar7 = *(uint *)((long)plVar16 + 0x14);
        uVar4 = (ulong)((uVar7 | 0xffffff00) * iVar9);
        piVar5 = (int *)(ulong)-(iVar9 * (uVar7 & 0xff));
        FUN_1097ee7f0(param_1,(int)uVar7 >> 8);
      }
      iVar15 = (int)piVar5;
      iVar9 = (int)uVar4;
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)(param_1 + 0x2048));
    uVar7 = *(int *)(param_1 + 0x20d8) * 2;
    uVar3 = *(uint *)(param_1 + 0x2d0c);
    if (uVar7 < *(uint *)(param_1 + 0x2d0c)) {
LAB_1097ee628:
      lVar11 = *(long *)(param_1 + 0x2098);
      if (lVar11 == lVar13) {
        iVar15 = 0;
        iVar9 = -0x80000000;
      }
      else {
        iVar15 = 0;
        iVar10 = 0;
        iVar9 = -0x80000000;
        do {
          iVar1 = *(int *)(lVar11 + 0x10);
          if (iVar1 != iVar9 && iVar15 != iVar10) {
            iVar10 = *(int *)(param_1 + 0x2d08);
            *(int *)(param_1 + 0x2d08) = iVar10 + 1;
            piVar5 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar10 * 8);
            *piVar5 = iVar9;
            *(undefined1 *)((long)piVar5 + 5) = 0;
            *(char *)(piVar5 + 1) = (char)((uint)iVar15 >> 8) - (char)((uint)iVar15 >> 0x10);
            iVar10 = iVar15;
          }
          iVar15 = *(int *)(lVar11 + 0x14) + iVar15;
          if (iVar15 != iVar10) {
            iVar10 = *(int *)(param_1 + 0x2d08);
            *(int *)(param_1 + 0x2d08) = iVar10 + 1;
            piVar5 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar10 * 8);
            *piVar5 = iVar1;
            *(undefined1 *)((long)piVar5 + 5) = 0;
            *(char *)(piVar5 + 1) = (char)((uint)iVar15 >> 8) - (char)((uint)iVar15 >> 0x10);
            iVar10 = iVar15;
          }
          iVar15 = *(int *)(lVar11 + 0x18) + iVar15;
          iVar9 = iVar1 + 1;
          lVar11 = *(long *)(lVar11 + 8);
        } while (lVar11 != lVar13);
      }
      if (*(long **)(param_1 + 0x20e8) != (long *)(param_1 + 0x2100)) {
        plVar16 = *(long **)(param_1 + 0x20e8);
        plVar8 = *(long **)(param_1 + 0x20f0);
        do {
          plVar14 = plVar16;
          plVar16 = (long *)*plVar14;
          *plVar14 = (long)plVar8;
          plVar8 = plVar14;
        } while (plVar16 != (long *)(param_1 + 0x2100));
        *(long **)(param_1 + 0x20e8) = plVar16;
        *(long **)(param_1 + 0x20f0) = plVar14;
      }
      *(undefined4 *)(param_1 + 0x210c) = 1000;
      *(long *)(param_1 + 0x2110) = param_1 + 0x2118;
      iVar10 = *(int *)(param_1 + 0x2d08);
      if (iVar10 != 0) {
        iVar1 = *(int *)(param_1 + 0x2088);
        if (iVar9 <= iVar1) {
          lVar13 = (long)iVar10;
          iVar10 = iVar10 + 1;
          *(int *)(param_1 + 0x2d08) = iVar10;
          piVar5 = (int *)(*(long *)(param_1 + 0x2d00) + lVar13 * 8);
          *piVar5 = iVar9;
          *(undefined1 *)((long)piVar5 + 5) = 0;
          *(char *)(piVar5 + 1) = (char)((uint)iVar15 >> 8) - (char)((uint)iVar15 >> 0x10);
        }
        if ((iVar15 != 0) && (iVar9 < iVar1)) {
          piVar5 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar10 * 8);
          iVar10 = iVar10 + 1;
          *(int *)(param_1 + 0x2d08) = iVar10;
          *piVar5 = iVar1;
          *(undefined2 *)(piVar5 + 1) = 0x100;
        }
      }
      goto LAB_1097ee798;
    }
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 << 1;
    } while (uVar2 <= uVar7);
    if (*(long *)(param_1 + 0x2d00) != param_1 + 0x2500) {
      _free();
    }
    lVar11 = (ulong)uVar2 << 3;
    _malloc();
    *(long *)(param_1 + 0x2d00) = lVar11;
    if (lVar11 != 0) {
      *(uint *)(param_1 + 0x2d0c) = uVar2;
      goto LAB_1097ee628;
    }
  }
  param_1 = param_1 + 0x2d10;
  iVar10 = 1;
  _longjmp();
  plVar16 = *(long **)(param_1 + 0x20d0);
  if (iVar10 < (int)plVar16[2]) {
    do {
      plVar14 = (long *)*plVar16;
      plVar8 = plVar16;
      if (((int)plVar14[2] < iVar10) ||
         (plVar12 = (long *)*plVar14, plVar8 = plVar14, (int)plVar12[2] < iVar10)) break;
      plVar16 = (long *)*plVar12;
      plVar8 = plVar12;
    } while (iVar10 <= *(int *)(plVar16 + 2));
  }
  else {
    if ((int)plVar16[2] == iVar10) goto LAB_1097ee900;
    do {
      plVar8 = (long *)plVar16[1];
      if ((iVar10 <= (int)plVar8[2]) || (plVar8 = (long *)plVar8[1], iVar10 <= (int)plVar8[2]))
      break;
      plVar16 = (long *)plVar8[1];
      plVar8 = plVar16;
    } while ((int)plVar16[2] < iVar10);
  }
  plVar16 = plVar8;
  if ((int)plVar16[2] != iVar10) {
    *(int *)(param_1 + 0x20d8) = *(int *)(param_1 + 0x20d8) + 1;
    plVar8 = *(long **)(param_1 + 0x20e0);
    if (plVar8 == (long *)0x0) {
      lVar13 = *(long *)(param_1 + 0x20e8);
      uVar7 = *(uint *)(param_1 + 0x20f8);
      if (*(uint *)(lVar13 + 0xc) < uVar7) {
        plVar8 = (long *)(param_1 + 0x20e0);
        func_0x0001097cf700();
      }
      else {
        plVar8 = *(long **)(lVar13 + 0x10);
        *(ulong *)(lVar13 + 0x10) = (long)plVar8 + (ulong)uVar7;
        *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) - uVar7;
      }
      if (plVar8 == (long *)0x0) {
        param_1 = param_1 + 0x2d10;
        _longjmp(param_1,1);
        iVar10 = *(int *)(param_1 + 4);
        uVar7 = iVar10 << 1;
        *(uint *)(param_1 + 4) = uVar7;
        lVar13 = *(long *)(param_1 + 8);
        if (lVar13 == param_1 + 0x10) {
          if (iVar10 < 1) {
            return;
          }
          lVar13 = (ulong)uVar7 << 3;
          _malloc();
          if (lVar13 == 0) {
            return;
          }
          _memcpy();
        }
        else {
          if (iVar10 < 0) {
            return;
          }
          _realloc(lVar13,(ulong)uVar7 << 3);
          if (lVar13 == 0) {
            return;
          }
        }
        *(long *)(param_1 + 8) = lVar13;
        return;
      }
    }
    else {
      *(long *)(param_1 + 0x20e0) = *plVar8;
    }
    lVar13 = *plVar16;
    *(long **)(lVar13 + 8) = plVar8;
    *plVar8 = lVar13;
    plVar8[1] = (long)plVar16;
    *plVar16 = (long)plVar8;
    *(undefined4 *)((long)plVar8 + 0x14) = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    *(int *)(plVar8 + 2) = iVar10;
    plVar16 = plVar8;
  }
LAB_1097ee900:
  *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + iVar9;
  *(int *)(plVar16 + 3) = (int)plVar16[3] + iVar15;
  *(long **)(param_1 + 0x20d0) = plVar16;
  return;
}



/* Entry: 1097ee4ec; end: 1097ee7ef;  */

void FUN_1097ee4ec(long param_1,long param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  
  iVar15 = *(int *)(param_1 + 0x2080);
  *(undefined4 *)(param_1 + 0x2d08) = 0;
  plVar16 = *(long **)(param_1 + 0x2018);
  if (plVar16 == (long *)(param_1 + 0x2048)) {
    iVar15 = 0;
LAB_1097ee798:
    uVar6 = *(undefined8 *)(param_1 + 0x2d00);
    (**(code **)(param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x2080),param_3,uVar6,iVar15);
    iVar8 = (int)uVar6;
    iVar10 = (int)param_3;
    if ((int)param_2 == 0) {
      return;
    }
    _longjmp(param_1 + 0x2d10,param_2);
  }
  else {
    lVar13 = param_1 + 0x20b0;
    *(long *)(param_1 + 0x2098) = lVar13;
    *(long *)(param_1 + 0x20b0) = param_1 + 0x2090;
    *(long *)(param_1 + 0x20d0) = lVar13;
    *(undefined4 *)(param_1 + 0x20d8) = 0;
    uVar5 = param_3;
    do {
      if (iVar15 == *(int *)((long)plVar16 + 0x24)) {
        uVar7 = (uint)*(byte *)((long)plVar16 + 0x1c);
        if (*(byte *)((long)plVar16 + 0x1c) != 0) goto LAB_1097ee570;
      }
      else {
        uVar7 = 0x100;
LAB_1097ee570:
        if (iVar15 == (int)plVar16[4]) {
          uVar7 = uVar7 - *(byte *)(plVar16 + 3);
        }
        iVar10 = (int)plVar16[5] * uVar7;
        uVar7 = *(uint *)(plVar16 + 2);
        FUN_1097ee7f0(param_1,(int)uVar7 >> 8,(0x100 - (uVar7 & 0xff)) * iVar10,
                      (uVar7 & 0xff) * iVar10);
        uVar7 = *(uint *)((long)plVar16 + 0x14);
        uVar5 = (ulong)((uVar7 | 0xffffff00) * iVar10);
        param_4 = (ulong)-(iVar10 * (uVar7 & 0xff));
        FUN_1097ee7f0(param_1,(int)uVar7 >> 8);
      }
      iVar8 = (int)param_4;
      iVar10 = (int)uVar5;
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)(param_1 + 0x2048));
    uVar7 = *(int *)(param_1 + 0x20d8) * 2;
    uVar4 = *(uint *)(param_1 + 0x2d0c);
    if (uVar7 < *(uint *)(param_1 + 0x2d0c)) {
LAB_1097ee628:
      lVar11 = *(long *)(param_1 + 0x2098);
      if (lVar11 == lVar13) {
        iVar8 = 0;
        iVar10 = -0x80000000;
      }
      else {
        iVar8 = 0;
        iVar15 = 0;
        iVar10 = -0x80000000;
        do {
          iVar2 = *(int *)(lVar11 + 0x10);
          if (iVar2 != iVar10 && iVar8 != iVar15) {
            iVar15 = *(int *)(param_1 + 0x2d08);
            *(int *)(param_1 + 0x2d08) = iVar15 + 1;
            piVar1 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar15 * 8);
            *piVar1 = iVar10;
            *(undefined1 *)((long)piVar1 + 5) = 0;
            *(char *)(piVar1 + 1) = (char)((uint)iVar8 >> 8) - (char)((uint)iVar8 >> 0x10);
            iVar15 = iVar8;
          }
          iVar8 = *(int *)(lVar11 + 0x14) + iVar8;
          if (iVar8 != iVar15) {
            iVar15 = *(int *)(param_1 + 0x2d08);
            *(int *)(param_1 + 0x2d08) = iVar15 + 1;
            piVar1 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar15 * 8);
            *piVar1 = iVar2;
            *(undefined1 *)((long)piVar1 + 5) = 0;
            *(char *)(piVar1 + 1) = (char)((uint)iVar8 >> 8) - (char)((uint)iVar8 >> 0x10);
            iVar15 = iVar8;
          }
          iVar8 = *(int *)(lVar11 + 0x18) + iVar8;
          iVar10 = iVar2 + 1;
          lVar11 = *(long *)(lVar11 + 8);
        } while (lVar11 != lVar13);
      }
      if (*(long **)(param_1 + 0x20e8) != (long *)(param_1 + 0x2100)) {
        plVar16 = *(long **)(param_1 + 0x20e8);
        plVar9 = *(long **)(param_1 + 0x20f0);
        do {
          plVar14 = plVar16;
          plVar16 = (long *)*plVar14;
          *plVar14 = (long)plVar9;
          plVar9 = plVar14;
        } while (plVar16 != (long *)(param_1 + 0x2100));
        *(long **)(param_1 + 0x20e8) = plVar16;
        *(long **)(param_1 + 0x20f0) = plVar14;
      }
      *(undefined4 *)(param_1 + 0x210c) = 1000;
      *(long *)(param_1 + 0x2110) = param_1 + 0x2118;
      iVar15 = *(int *)(param_1 + 0x2d08);
      if (iVar15 != 0) {
        iVar2 = *(int *)(param_1 + 0x2088);
        if (iVar10 <= iVar2) {
          lVar13 = (long)iVar15;
          iVar15 = iVar15 + 1;
          *(int *)(param_1 + 0x2d08) = iVar15;
          piVar1 = (int *)(*(long *)(param_1 + 0x2d00) + lVar13 * 8);
          *piVar1 = iVar10;
          *(undefined1 *)((long)piVar1 + 5) = 0;
          *(char *)(piVar1 + 1) = (char)((uint)iVar8 >> 8) - (char)((uint)iVar8 >> 0x10);
        }
        if ((iVar8 != 0) && (iVar10 < iVar2)) {
          piVar1 = (int *)(*(long *)(param_1 + 0x2d00) + (long)iVar15 * 8);
          iVar15 = iVar15 + 1;
          *(int *)(param_1 + 0x2d08) = iVar15;
          *piVar1 = iVar2;
          *(undefined2 *)(piVar1 + 1) = 0x100;
        }
      }
      goto LAB_1097ee798;
    }
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 << 1;
    } while (uVar3 <= uVar7);
    if (*(long *)(param_1 + 0x2d00) != param_1 + 0x2500) {
      _free();
    }
    lVar11 = (ulong)uVar3 << 3;
    _malloc();
    *(long *)(param_1 + 0x2d00) = lVar11;
    if (lVar11 != 0) {
      *(uint *)(param_1 + 0x2d0c) = uVar3;
      goto LAB_1097ee628;
    }
  }
  param_1 = param_1 + 0x2d10;
  iVar15 = 1;
  _longjmp();
  plVar16 = *(long **)(param_1 + 0x20d0);
  if (iVar15 < (int)plVar16[2]) {
    do {
      plVar14 = (long *)*plVar16;
      plVar9 = plVar16;
      if (((int)plVar14[2] < iVar15) ||
         (plVar12 = (long *)*plVar14, plVar9 = plVar14, (int)plVar12[2] < iVar15)) break;
      plVar16 = (long *)*plVar12;
      plVar9 = plVar12;
    } while (iVar15 <= *(int *)(plVar16 + 2));
  }
  else {
    if ((int)plVar16[2] == iVar15) goto LAB_1097ee900;
    do {
      plVar9 = (long *)plVar16[1];
      if ((iVar15 <= (int)plVar9[2]) || (plVar9 = (long *)plVar9[1], iVar15 <= (int)plVar9[2]))
      break;
      plVar16 = (long *)plVar9[1];
      plVar9 = plVar16;
    } while ((int)plVar16[2] < iVar15);
  }
  plVar16 = plVar9;
  if ((int)plVar16[2] != iVar15) {
    *(int *)(param_1 + 0x20d8) = *(int *)(param_1 + 0x20d8) + 1;
    plVar9 = *(long **)(param_1 + 0x20e0);
    if (plVar9 == (long *)0x0) {
      lVar13 = *(long *)(param_1 + 0x20e8);
      uVar7 = *(uint *)(param_1 + 0x20f8);
      if (*(uint *)(lVar13 + 0xc) < uVar7) {
        plVar9 = (long *)(param_1 + 0x20e0);
        func_0x0001097cf700();
      }
      else {
        plVar9 = *(long **)(lVar13 + 0x10);
        *(ulong *)(lVar13 + 0x10) = (long)plVar9 + (ulong)uVar7;
        *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) - uVar7;
      }
      if (plVar9 == (long *)0x0) {
        param_1 = param_1 + 0x2d10;
        _longjmp(param_1,1);
        iVar15 = *(int *)(param_1 + 4);
        uVar7 = iVar15 << 1;
        *(uint *)(param_1 + 4) = uVar7;
        lVar13 = *(long *)(param_1 + 8);
        if (lVar13 == param_1 + 0x10) {
          if (iVar15 < 1) {
            return;
          }
          lVar13 = (ulong)uVar7 << 3;
          _malloc();
          if (lVar13 == 0) {
            return;
          }
          _memcpy();
        }
        else {
          if (iVar15 < 0) {
            return;
          }
          _realloc(lVar13,(ulong)uVar7 << 3);
          if (lVar13 == 0) {
            return;
          }
        }
        *(long *)(param_1 + 8) = lVar13;
        return;
      }
    }
    else {
      *(long *)(param_1 + 0x20e0) = *plVar9;
    }
    lVar13 = *plVar16;
    *(long **)(lVar13 + 8) = plVar9;
    *plVar9 = lVar13;
    plVar9[1] = (long)plVar16;
    *plVar16 = (long)plVar9;
    *(undefined4 *)((long)plVar9 + 0x14) = 0;
    *(undefined4 *)(plVar9 + 3) = 0;
    *(int *)(plVar9 + 2) = iVar15;
    plVar16 = plVar9;
  }
LAB_1097ee900:
  *(int *)((long)plVar16 + 0x14) = *(int *)((long)plVar16 + 0x14) + iVar10;
  *(int *)(plVar16 + 3) = (int)plVar16[3] + iVar8;
  *(long **)(param_1 + 0x20d0) = plVar16;
  return;
}



/* Entry: 1097ee7f0; end: 1097ee95f;  */

void FUN_1097ee7f0(long param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar3 = *(long **)(param_1 + 0x20d0);
  if (param_2 < (int)plVar3[2]) {
    do {
      plVar7 = (long *)*plVar3;
      plVar4 = plVar3;
      if (((int)plVar7[2] < param_2) ||
         (plVar5 = (long *)*plVar7, plVar4 = plVar7, (int)plVar5[2] < param_2)) break;
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
    } while (param_2 <= *(int *)(plVar3 + 2));
  }
  else {
    if ((int)plVar3[2] == param_2) goto LAB_1097ee900;
    do {
      plVar4 = (long *)plVar3[1];
      if ((param_2 <= (int)plVar4[2]) || (plVar4 = (long *)plVar4[1], param_2 <= (int)plVar4[2]))
      break;
      plVar3 = (long *)plVar4[1];
      plVar4 = plVar3;
    } while ((int)plVar3[2] < param_2);
  }
  plVar3 = plVar4;
  if ((int)plVar3[2] != param_2) {
    *(int *)(param_1 + 0x20d8) = *(int *)(param_1 + 0x20d8) + 1;
    plVar4 = *(long **)(param_1 + 0x20e0);
    if (plVar4 == (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x20e8);
      uVar1 = *(uint *)(param_1 + 0x20f8);
      if (*(uint *)(lVar6 + 0xc) < uVar1) {
        plVar4 = (long *)(param_1 + 0x20e0);
        func_0x0001097cf700();
      }
      else {
        plVar4 = *(long **)(lVar6 + 0x10);
        *(ulong *)(lVar6 + 0x10) = (long)plVar4 + (ulong)uVar1;
        *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) - uVar1;
      }
      if (plVar4 == (long *)0x0) {
        param_1 = param_1 + 0x2d10;
        _longjmp(param_1,1);
        iVar2 = *(int *)(param_1 + 4);
        uVar1 = iVar2 << 1;
        *(uint *)(param_1 + 4) = uVar1;
        lVar6 = *(long *)(param_1 + 8);
        if (lVar6 == param_1 + 0x10) {
          if (iVar2 < 1) {
            return;
          }
          lVar6 = (ulong)uVar1 << 3;
          _malloc();
          if (lVar6 == 0) {
            return;
          }
          _memcpy();
        }
        else {
          if (iVar2 < 0) {
            return;
          }
          _realloc(lVar6,(ulong)uVar1 << 3);
          if (lVar6 == 0) {
            return;
          }
        }
        *(long *)(param_1 + 8) = lVar6;
        return;
      }
    }
    else {
      *(long *)(param_1 + 0x20e0) = *plVar4;
    }
    lVar6 = *plVar3;
    *(long **)(lVar6 + 8) = plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)plVar3;
    *plVar3 = (long)plVar4;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(int *)(plVar4 + 2) = param_2;
    plVar3 = plVar4;
  }
LAB_1097ee900:
  *(int *)((long)plVar3 + 0x14) = *(int *)((long)plVar3 + 0x14) + param_3;
  *(int *)(plVar3 + 3) = (int)plVar3[3] + param_4;
  *(long **)(param_1 + 0x20d0) = plVar3;
  return;
}



/* Entry: 1097ee960; end: 1097ee9eb;  */

void FUN_1097ee960(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = iVar1 << 1;
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == param_1 + 0x10) {
    if (iVar1 < 1) {
      return;
    }
    lVar3 = (ulong)uVar2 << 3;
    _malloc();
    if (lVar3 == 0) {
      return;
    }
    _memcpy();
  }
  else {
    if (iVar1 < 0) {
      return;
    }
    _realloc(lVar3,(ulong)uVar2 << 3);
    if (lVar3 == 0) {
      return;
    }
  }
  *(long *)(param_1 + 8) = lVar3;
  return;
}



/* Entry: 1097ee9ec; end: 1097eeb3b;  */

int * FUN_1097ee9ec(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int aiStack_848 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar3 = (int *)0x1;
  _calloc(1,0x20);
  piVar6 = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 1;
    iVar8 = (int)param_2;
    if (iVar8 == 1) {
      piVar6 = piVar3 + 2;
      FUN_1097bfd2c(piVar6,*param_1,param_1[1],param_1[2],param_1[3]);
      goto LAB_1097eead8;
    }
    if (iVar8 < 0x81) {
      if (0 < iVar8) {
        piVar4 = aiStack_848;
        goto LAB_1097eea84;
      }
      piVar6 = piVar3 + 2;
      FUN_1097c19f8(piVar6,aiStack_848,param_2);
      iVar8 = (int)piVar6;
joined_r0x0001097eeb20:
      if (iVar8 != 0) goto LAB_1097eead8;
    }
    else {
      piVar4 = (int *)((param_2 & 0xffffffff) << 4);
      _malloc();
      if (piVar4 != (int *)0x0) {
LAB_1097eea84:
        uVar7 = param_2 & 0xffffffff;
        piVar6 = param_1 + 2;
        piVar5 = piVar4 + 2;
        do {
          iVar8 = piVar6[-2];
          iVar1 = piVar6[-1];
          piVar5[-2] = iVar8;
          piVar5[-1] = iVar1;
          iVar2 = piVar6[1];
          *piVar5 = *piVar6 + iVar8;
          piVar5[1] = iVar2 + iVar1;
          uVar7 = uVar7 - 1;
          piVar6 = piVar6 + 4;
          piVar5 = piVar5 + 4;
        } while (uVar7 != 0);
        piVar5 = piVar3 + 2;
        FUN_1097c19f8(piVar5,piVar4,param_2);
        piVar6 = piVar5;
        if (piVar4 != aiStack_848) {
          _free();
          piVar6 = piVar4;
        }
        iVar8 = (int)piVar5;
        goto joined_r0x0001097eeb20;
      }
    }
    _free();
    piVar6 = piVar3;
  }
  piVar3 = (int *)&UNK_10dffe9d8;
LAB_1097eead8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return piVar3;
  }
  ___stack_chk_fail();
  piVar3 = piVar6;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    piVar3 = (int *)0x1132e0448;
    _pthread_mutex_lock(0x1132e0448);
    iVar8 = *piVar6;
    *piVar6 = iVar8 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar8 + -1 == 0) {
      if ((*(long **)(piVar6 + 6) != (long *)0x0) && (**(long **)(piVar6 + 6) != 0)) {
        _free();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(piVar6);
      return piVar6;
    }
  }
  return piVar3;
}



/* Entry: 1097eeb3c; end: 1097eebbf;  */

void FUN_1097eeb3c(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar1 + -1 == 0) {
      if ((*(long **)(param_1 + 6) != (long *)0x0) && (**(long **)(param_1 + 6) != 0)) {
        _free();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097eebc0; end: 1097eed3b;  */

int * FUN_1097eebc0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == -1) {
      param_1 = (int *)0x0;
    }
    else {
      _pthread_mutex_lock(0x1132e0448);
      *param_1 = *param_1 + 1;
      _pthread_mutex_unlock(0x1132e0448);
    }
  }
  return param_1;
}



/* Entry: 1097eed3c; end: 1097eed97;  */

uint FUN_1097eed3c(long param_1,int *param_2)

{
  uint uVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 1;
  }
  iStack_20 = *param_2;
  iStack_1c = param_2[1];
  iStack_18 = param_2[2] + iStack_20;
  iStack_14 = param_2[3] + iStack_1c;
  param_1 = param_1 + 8;
  FUN_1097c182c(param_1,&iStack_20);
  uVar1 = (uint)param_1;
  if (uVar1 != 2) {
    uVar1 = (uint)(uVar1 != 1);
  }
  return uVar1;
}



/* Entry: 1097eed98; end: 1097eede3;  */

undefined8 FUN_1097eed98(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 8) == 0) {
      *(int *)(param_1 + 8) = (int)param_2;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return param_2;
}



/* Entry: 1097eede4; end: 1097eedeb;  */

/* WARNING: Removing unreachable block (ram,0x0001097ef2f0) */

void FUN_1097eede4(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(int *)((long)param_1 + 0xc) == -1) {
    return;
  }
  plVar1 = param_1;
  FUN_1097efc60();
  _pthread_mutex_lock(0x1132e0448);
  iVar2 = *(int *)((long)param_1 + 0xc) + -1;
  *(int *)((long)param_1 + 0xc) = iVar2;
  _pthread_mutex_unlock(0x1132e0448);
  if ((iVar2 == 0) && (*(int *)((long)param_1 + 0xc) < 1)) {
    plVar4 = param_1;
    if (((*(byte *)(param_1 + 0x1a) & 1) != 0) || (*param_1 == 0)) goto LAB_1097ef2ec;
    if ((*(byte *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      iVar2 = (int)plVar1[0x102];
      if (iVar2 == 0x100) {
        plVar4 = (long *)plVar1[2];
        func_0x0001097d2e5c(plVar1[1],plVar4);
        lVar3 = (long)(int)plVar1[0x102] + -1;
        *(int *)(plVar1 + 0x102) = (int)lVar3;
        _memmove(plVar1 + 2,plVar1 + 3,lVar3 * 8);
        iVar2 = (int)plVar1[0x102];
      }
      else {
        plVar4 = (long *)0x0;
      }
      *(int *)(plVar1 + 0x102) = iVar2 + 1;
      plVar1[(long)iVar2 + 2] = (long)param_1;
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | 2;
      goto LAB_1097ef2ec;
    }
  }
  plVar4 = (long *)0x0;
LAB_1097ef2ec:
  _pthread_mutex_unlock(0x1132e0348);
  if (plVar4 == (long *)0x0) {
    return;
  }
  func_0x0001097ef168(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar4);
  return;
}



/* Entry: 1097eedec; end: 1097ef0bb;  */

ulong FUN_1097eedec(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) == 0) {
    plVar2 = (long *)0x1;
    plVar1 = (long *)0x1;
    _calloc(1,0x230);
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1;
      func_0x0001097eeeb4();
      if ((int)plVar2 == 0) {
        *(byte *)(plVar1 + 0x1a) = *(byte *)(plVar1 + 0x1a) | 1;
        plVar2 = plVar1;
        FUN_1097ef0bc();
        *plVar1 = (long)plVar2;
        plVar2 = *(long **)(lRam000000011382af50 + 8);
        FUN_1097d2c28(plVar2,plVar1);
        if ((int)plVar2 == 0) {
          _pthread_mutex_lock(plVar1 + 0x32);
          return (ulong)plVar2;
        }
        func_0x0001097ef168(plVar1);
      }
      _free(plVar1);
      FUN_1097eed98(param_1,plVar2);
    }
  }
  return (ulong)plVar2;
}



/* Entry: 1097ef0bc; end: 1097ef277;  */

long FUN_1097ef0bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  uVar2 = 0xcbf29ce484222325;
  do {
    uVar2 = uVar2 * 0x100000001b3 ^ (ulong)*(byte *)(param_1 + 0x38 + lVar3);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 != 0x30);
  lVar3 = 0;
  do {
    uVar2 = uVar2 * 0x100000001b3 ^ (ulong)*(byte *)(param_1 + 0x68 + lVar3);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 != 0x30);
  uVar1 = (uVar2 * 0x1001 ^ uVar2 * 0x1001 >> 7) * 9;
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar2 = param_1 + 0x98;
  func_0x0001097cf5f4(uVar2);
  uVar2 = ((uVar1 ^ uVar1 >> 0x11) * 0x21 ^ uVar4 ^ uVar2) * 0x1001;
  uVar2 = (uVar2 ^ uVar2 >> 7) * 9;
  return (uVar2 ^ uVar2 >> 0x11) * 0x21;
}



/* Entry: 1097ef278; end: 1097ef3b7;  */

void FUN_1097ef278(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(int *)((long)param_1 + 0xc) == -1) {
    return;
  }
  plVar1 = param_2;
  if (param_2 == (long *)0x0) {
    plVar1 = param_1;
    FUN_1097efc60();
  }
  _pthread_mutex_lock(0x1132e0448);
  iVar2 = *(int *)((long)param_1 + 0xc) + -1;
  *(int *)((long)param_1 + 0xc) = iVar2;
  _pthread_mutex_unlock(0x1132e0448);
  if ((iVar2 == 0) && (*(int *)((long)param_1 + 0xc) < 1)) {
    plVar4 = param_1;
    if (((*(byte *)(param_1 + 0x1a) & 1) != 0) || (*param_1 == 0)) goto LAB_1097ef2ec;
    if ((*(byte *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      iVar2 = (int)plVar1[0x102];
      if (iVar2 == 0x100) {
        plVar4 = (long *)plVar1[2];
        func_0x0001097d2e5c(plVar1[1],plVar4);
        lVar3 = (long)(int)plVar1[0x102] + -1;
        *(int *)(plVar1 + 0x102) = (int)lVar3;
        _memmove(plVar1 + 2,plVar1 + 3,lVar3 * 8);
        iVar2 = (int)plVar1[0x102];
      }
      else {
        plVar4 = (long *)0x0;
      }
      *(int *)(plVar1 + 0x102) = iVar2 + 1;
      plVar1[(long)iVar2 + 2] = (long)param_1;
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | 2;
      goto LAB_1097ef2ec;
    }
  }
  plVar4 = (long *)0x0;
LAB_1097ef2ec:
  if (param_2 == (long *)0x0) {
    _pthread_mutex_unlock(0x1132e0348);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  func_0x0001097ef168(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar4);
  return;
}



/* Entry: 1097ef3b8; end: 1097ef42b;  */

void FUN_1097ef3b8(long param_1)

{
  if (*(int *)(param_1 + 0x1ec) != 0) {
    _pthread_mutex_lock(0x1132e0388);
    iRam000000011382af80 = iRam000000011382af80 + -1;
    if (iRam000000011382af80 == 0) {
      FUN_1097c938c(0x11382af58,0);
    }
    _pthread_mutex_unlock(0x1132e0388);
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  FUN_1097ef42c(param_1);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 400);
  return;
}



/* Entry: 1097ef42c; end: 1097ef64b;  */

void FUN_1097ef42c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_1 + 500);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_1097c5544(param_1 + 0x1f0,iVar2,&uStack_38);
      FUN_1097f68f0(uStack_38);
      FUN_1097f61ac(uStack_38);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
    if (*(int *)(param_1 + 500) != 0) {
      *(undefined4 *)(param_1 + 500) = 0;
    }
  }
  return;
}



/* Entry: 1097ef64c; end: 1097efbbf;  */

undefined8 * FUN_1097ef64c(undefined8 *param_1,double *param_2,double *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 *puStack_2a0;
  undefined8 ****ppppuStack_298;
  undefined4 uStack_290;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  byte bStack_1c8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)(ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
LAB_1097efae4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
LAB_1097efafc:
      do {
        ___stack_chk_fail();
LAB_1097efb00:
        puVar4 = (undefined8 *)&UNK_10dffea20;
LAB_1097efaa8:
      } while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68);
      return puVar4;
    }
LAB_1097ef6e4:
    if ((int)puVar2 == 1) {
      puVar11 = (undefined8 *)&UNK_10dffea20;
    }
    else {
      _pthread_mutex_lock(0x1132e03c8);
      puVar11 = *(undefined8 **)((long)puVar2 * 8 + 0x11382af88);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x1;
        _calloc(1,0x230);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&UNK_10dffea20;
        }
        else {
          _memcpy();
          *(int *)(puVar11 + 1) = (int)puVar2;
          *(undefined8 **)((long)puVar2 * 8 + 0x11382af88) = puVar11;
        }
      }
      _pthread_mutex_unlock(0x1132e03c8);
    }
    return puVar11;
  }
  dVar13 = -(param_2[1] * param_2[2]) + param_2[3] * *param_2;
  if ((dVar13 * dVar13 < 0.0) ||
     (dVar13 = -(param_3[1] * param_3[2]) + param_3[3] * *param_3, dVar13 * dVar13 < 0.0)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_1097efafc;
    puVar2 = (undefined8 *)0x5;
    goto LAB_1097ef6e4;
  }
  uVar8 = 7;
  if (param_4 != (undefined *)0x0) {
    uVar8 = (uint)(param_4 == &UNK_10dffe2e0);
  }
  puVar2 = (undefined8 *)(ulong)uVar8;
  if (uVar8 != 0) goto LAB_1097efae4;
  FUN_1097efc60();
  if (puVar2 == (undefined8 *)0x0) goto LAB_1097efb00;
  puVar11 = (undefined8 *)*puVar2;
  if ((puVar11 == (undefined8 *)0x0) || ((undefined8 *)puVar11[5] != param_1)) {
LAB_1097ef770:
    bStack_1c8 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar4 = puVar11 + 7;
    _memcmp(puVar4,param_2,0x30);
    if ((int)puVar4 != 0) goto LAB_1097ef770;
    puVar4 = puVar11 + 0xd;
    _memcmp(puVar4,param_3,0x30);
    if ((int)puVar4 != 0) goto LAB_1097ef770;
    puVar4 = puVar11 + 0x13;
    FUN_1097cf4b0(puVar4,param_4);
    if ((int)puVar4 == 0) goto LAB_1097ef770;
    if (*(int *)(puVar11 + 1) == 0) {
      func_0x0001097c574c((long)puVar11 + 0xc);
      _pthread_mutex_unlock(0x1132e0348);
      puVar4 = puVar11;
      goto LAB_1097efaa8;
    }
    func_0x0001097d2e5c(puVar2[1],puVar11);
    *puVar11 = 0;
    *puVar2 = 0;
    bStack_1c8 = bStack_1c8 & 0xfe;
  }
  dStack_258 = param_2[1];
  dStack_260 = *param_2;
  dStack_248 = param_2[3];
  dStack_250 = param_2[2];
  dStack_238 = param_2[5];
  dStack_240 = param_2[4];
  dStack_228 = param_3[1];
  dStack_230 = *param_3;
  dStack_218 = param_3[3];
  dStack_220 = param_3[2];
  uStack_290 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  puStack_270 = param_1;
  puStack_268 = param_1;
  func_0x0001097cf140(auStack_200,param_4);
  pppppuVar3 = &ppppuStack_298;
  FUN_1097ef0bc();
  puVar4 = (undefined8 *)puVar2[1];
  ppppuStack_298 = pppppuVar3;
  FUN_1097d2a14(puVar4,&ppppuStack_298);
  while (puStack_2a0 = puVar4, puVar4 != (undefined8 *)0x0) {
    if ((*(byte *)(puVar4 + 0x1a) & 1) == 0) {
      _free(uStack_1e8);
      _free(uStack_1d8);
      if (0 < *(int *)((long)puVar4 + 0xc)) {
        if (*(int *)(puVar4 + 1) == 0) goto LAB_1097efa48;
        func_0x0001097d2e5c(puVar2[1],puVar4);
        *puVar4 = 0;
        goto LAB_1097ef868;
      }
      bVar7 = *(byte *)(puVar4 + 0x1a);
      if ((bVar7 >> 1 & 1) == 0) goto LAB_1097efa44;
      uVar8 = *(uint *)(puVar2 + 0x102);
      uVar10 = (ulong)uVar8;
      if ((int)uVar8 < 1) goto LAB_1097efa3c;
      puVar11 = puVar2 + 2;
      uVar6 = -(ulong)(uVar8 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar8 - 1) << 3;
      goto LAB_1097ef9d8;
    }
    if (*(int *)((long)puVar4 + 0xc) != -1) {
      _pthread_mutex_lock(0x1132e0448);
      *(int *)((long)puVar4 + 0xc) = *(int *)((long)puVar4 + 0xc) + 1;
      _pthread_mutex_unlock(0x1132e0448);
    }
    _pthread_mutex_unlock(0x1132e0348);
    _pthread_mutex_lock(puVar4 + 0x32);
    _pthread_mutex_unlock(puVar4 + 0x32);
    FUN_1097ef278(puVar4,0);
    _pthread_mutex_lock(0x1132e0348);
    puVar4 = (undefined8 *)puVar2[1];
    FUN_1097d2a14(puVar4,&ppppuStack_298);
  }
  _free(uStack_1e8);
  _free(uStack_1d8);
LAB_1097ef868:
  lVar9 = param_1[5];
  puVar4 = param_1;
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,param_3,param_4);
    if (*(int *)(puVar4 + 1) != 0) {
      _pthread_mutex_unlock(0x1132e0348);
      puVar5 = (undefined8 *)(ulong)*(uint *)(puVar4 + 1);
      goto LAB_1097efb90;
    }
    lVar9 = puVar4[5];
  }
  puVar5 = puVar4;
  (**(code **)(lVar9 + 0x18))(puVar4,param_2,param_3,param_4,&puStack_2a0);
  if ((int)puVar5 == 0) {
    if (*(int *)(puStack_2a0 + 1) != 0) {
      _pthread_mutex_unlock(0x1132e0348);
      if (puVar4 != param_1) {
        func_0x0001097cf084(puVar4);
      }
      puVar4 = puStack_2a0;
      if (puVar11 == (undefined8 *)0x0) goto LAB_1097efaa8;
      FUN_1097ef278(puVar11,0);
      puVar4 = puStack_2a0;
      goto LAB_1097efaa8;
    }
    func_0x0001097cf028(param_1);
    puStack_2a0[5] = param_1;
    puVar5 = puStack_2a0;
    FUN_1097ef0bc();
    *puStack_2a0 = puVar5;
    puVar5 = (undefined8 *)puVar2[1];
    FUN_1097d2c28();
    puVar1 = puStack_2a0;
    if ((int)puVar5 == 0) {
      uVar12 = *puVar2;
      *puVar2 = puStack_2a0;
      _pthread_mutex_lock(0x1132e0448);
      *(int *)((long)puVar1 + 0xc) = *(int *)((long)puVar1 + 0xc) + 1;
      _pthread_mutex_unlock(0x1132e0448);
    }
    else {
      uVar12 = 0;
    }
    _pthread_mutex_unlock(0x1132e0348);
    FUN_1097ef278(uVar12,0);
    if (puVar4 != param_1) {
      func_0x0001097cf084(puVar4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1097ef278(puVar11,0);
    }
    puVar4 = puStack_2a0;
    if ((int)puVar5 == 0) goto LAB_1097efaa8;
    func_0x0001097ef168(puStack_2a0);
    _free(puStack_2a0);
  }
  else {
    _pthread_mutex_unlock(0x1132e0348);
    if (puVar4 != param_1) {
      func_0x0001097cf084(puVar4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1097ef278(puVar11,0);
    }
  }
LAB_1097efb90:
  FUN_1097efbc0(puVar5);
  puVar4 = puVar5;
  goto LAB_1097efaa8;
  while( true ) {
    puVar11 = puVar11 + 1;
    uVar6 = uVar6 - 8;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) break;
LAB_1097ef9d8:
    if ((undefined8 *)*puVar11 == puVar4) {
      *(uint *)(puVar2 + 0x102) = uVar8 - 1;
      _memmove(puVar11,puVar11 + 1,uVar6);
      bVar7 = *(byte *)(puVar4 + 0x1a);
      break;
    }
  }
LAB_1097efa3c:
  *(byte *)(puVar4 + 0x1a) = bVar7 & 0xfd;
LAB_1097efa44:
  *(undefined4 *)(puVar4 + 1) = 0;
LAB_1097efa48:
  uVar12 = *puVar2;
  *puVar2 = puVar4;
  _pthread_mutex_lock(0x1132e0448);
  *(int *)((long)puVar4 + 0xc) = *(int *)((long)puVar4 + 0xc) + 1;
  _pthread_mutex_unlock(0x1132e0448);
  _pthread_mutex_lock(0x1132e0448);
  *(int *)((long)puVar4 + 0xc) = *(int *)((long)puVar4 + 0xc) + 1;
  _pthread_mutex_unlock(0x1132e0448);
  _pthread_mutex_unlock(0x1132e0348);
  FUN_1097ef278(uVar12,0);
  goto LAB_1097efaa8;
}



/* Entry: 1097efbc0; end: 1097efc5f;  */

undefined * FUN_1097efbc0(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 1) {
    puVar1 = &UNK_10dffea20;
  }
  else {
    _pthread_mutex_lock(0x1132e03c8);
    puVar1 = *(undefined **)((ulong)param_1 * 8 + 0x11382af88);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0x1;
      _calloc(1,0x230);
      if (puVar1 == (undefined *)0x0) {
        puVar1 = &UNK_10dffea20;
      }
      else {
        _memcpy();
        *(uint *)(puVar1 + 8) = param_1;
        *(undefined **)((ulong)param_1 * 8 + 0x11382af88) = puVar1;
      }
    }
    _pthread_mutex_unlock(0x1132e03c8);
  }
  return puVar1;
}



/* Entry: 1097efc60; end: 1097efd33;  */

long FUN_1097efc60(void)

{
  long lVar1;
  code *pcVar2;
  
  _pthread_mutex_lock(0x1132e0348);
  lVar1 = lRam000000011382af50;
  if (lRam000000011382af50 == 0) {
    lVar1 = 1;
    _calloc(1,0x818);
    lRam000000011382af50 = lVar1;
    if (lVar1 != 0) {
      pcVar2 = FUN_1097f0df4;
      FUN_1097d298c();
      lVar1 = lRam000000011382af50;
      *(code **)(lRam000000011382af50 + 8) = pcVar2;
      if (pcVar2 != (code *)0x0) {
        *(undefined4 *)(lVar1 + 0x810) = 0;
        return lVar1;
      }
      _free();
      lRam000000011382af50 = 0;
    }
    _pthread_mutex_unlock(0x1132e0348);
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1097efd34; end: 1097eff1b;  */

void FUN_1097efd34(long param_1,long param_2,uint param_3,double *param_4)

{
  bool bVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_78;
  
  param_4[3] = 0.0;
  param_4[2] = 0.0;
  param_4[5] = 0.0;
  param_4[4] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  if (((param_3 == 0) || (*(int *)(param_1 + 8) != 0 || param_2 == 0)) || ((int)param_3 < 0)) {
    return;
  }
  _pthread_mutex_lock(param_1 + 400);
  bVar1 = false;
  *(undefined4 *)(param_1 + 0x1e8) = 1;
  pdVar3 = (double *)(param_2 + 0x10);
  dVar12 = 0.0;
  uVar4 = (ulong)param_3;
  dVar5 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  do {
    lVar2 = param_1;
    FUN_1097eff1c(param_1,pdVar3[-2],1,0,&lStack_78);
    if ((int)lVar2 != 0) {
      FUN_1097eed98(param_1,lVar2);
      goto FUN_1097ef3b8;
    }
    dVar8 = dVar5;
    dVar6 = dVar7;
    dVar11 = dVar9;
    if ((*(double *)(lStack_78 + 0x18) != 0.0) && (*(double *)(lStack_78 + 0x20) != 0.0)) {
      dVar8 = *(double *)(lStack_78 + 8) + pdVar3[-1];
      dVar11 = *(double *)(lStack_78 + 0x18) + dVar8;
      dVar6 = *(double *)(lStack_78 + 0x10) + *pdVar3;
      dVar10 = *(double *)(lStack_78 + 0x20) + dVar6;
      if (bVar1) {
        if (dVar5 <= dVar8) {
          dVar8 = dVar5;
        }
        if (dVar11 <= dVar9) {
          dVar11 = dVar9;
        }
        if (dVar7 <= dVar6) {
          dVar6 = dVar7;
        }
        bVar1 = true;
        if (dVar12 < dVar10) {
          dVar12 = dVar10;
        }
      }
      else {
        bVar1 = true;
        dVar12 = dVar10;
      }
    }
    pdVar3 = pdVar3 + 3;
    uVar4 = uVar4 - 1;
    dVar5 = dVar8;
    dVar7 = dVar6;
    dVar9 = dVar11;
  } while (uVar4 != 0);
  dVar5 = *(double *)(param_2 + 8);
  if (bVar1) {
    dVar9 = dVar8 - dVar5;
    dVar7 = *(double *)(param_2 + 0x10);
    dVar10 = dVar6 - dVar7;
    dVar11 = dVar11 - dVar8;
    dVar12 = dVar12 - dVar6;
  }
  else {
    dVar7 = *(double *)(param_2 + 0x10);
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
  }
  *param_4 = dVar9;
  param_4[1] = dVar10;
  param_4[2] = dVar11;
  param_4[3] = dVar12;
  param_2 = param_2 + (ulong)param_3 * 0x18;
  dVar9 = *(double *)(param_2 + -0x10);
  dVar12 = *(double *)(lStack_78 + 0x28);
  param_4[5] = (*(double *)(param_2 + -8) + *(double *)(lStack_78 + 0x30)) - dVar7;
  param_4[4] = (dVar9 + dVar12) - dVar5;
FUN_1097ef3b8:
  if (*(int *)(param_1 + 0x1ec) != 0) {
    _pthread_mutex_lock(0x1132e0388);
    iRam000000011382af80 = iRam000000011382af80 + -1;
    if (iRam000000011382af80 == 0) {
      FUN_1097c938c(0x11382af58,0);
    }
    _pthread_mutex_unlock(0x1132e0388);
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  FUN_1097ef42c(param_1);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 400);
  return;
}



/* Entry: 1097eff1c; end: 1097f022f;  */

ulong FUN_1097eff1c(ulong param_1,ulong param_2,uint param_3,undefined *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uStack_68;
  
  *param_5 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    return (ulong)*(uint *)(param_1 + 8);
  }
  puVar1 = &UNK_10dffcd48;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  puVar2 = *(ulong **)(param_1 + 0x1d0);
  uStack_68 = param_2;
  FUN_1097d2a14(puVar2,&uStack_68);
  if (puVar2 == (ulong *)0x0) {
    if (*(ulong *)(param_1 + 0x1d8) == param_1 + 0x1d8) {
LAB_1097effac:
      uVar4 = 1;
      puVar3 = (ulong *)0x1;
      _calloc(1,0x1e30);
      if (puVar3 != (ulong *)0x0) {
        *puVar3 = param_1;
        puVar3[1] = 1;
        puVar3[2] = param_1;
        _pthread_mutex_lock(0x1132e0388);
        if (*(int *)(param_1 + 0x1ec) == 0) {
          if (lRam000000011382af58 == 0) {
            lVar6 = 0;
            FUN_1097d298c();
            lRam000000011382af58 = lVar6;
            if (lVar6 == 0) {
              _pthread_mutex_unlock(0x1132e0388);
              _free(puVar3);
              uVar4 = 1;
              goto LAB_1097f01c0;
            }
            uRam000000011382af60 = 0x1097f0e64;
            uRam000000011382af68 = 0x1097f0ea8;
            uRam000000011382af78 = 0;
            uRam000000011382af70 = 0x200;
            iRam000000011382af80 = 1;
          }
          else {
            iRam000000011382af80 = iRam000000011382af80 + 1;
          }
          *(undefined4 *)(param_1 + 0x1ec) = 1;
        }
        uVar4 = 0x11382af58;
        func_0x0001097c93e4(0x11382af58,puVar3);
        _pthread_mutex_unlock(0x1132e0388);
        if ((int)uVar4 == 0) {
          puVar7 = puVar3 + 5;
          puVar2 = puVar3 + 3;
          *puVar2 = param_1 + 0x1d8;
          puVar9 = *(undefined8 **)(param_1 + 0x1e0);
          *(ulong **)(param_1 + 0x1e0) = puVar2;
          puVar3[4] = (ulong)puVar9;
          *puVar9 = puVar2;
          puVar2 = puVar3 + 6;
          uVar8 = (uint)puVar3[5];
          goto LAB_1097f004c;
        }
        _free(puVar3);
        goto LAB_1097f01b8;
      }
    }
    else {
      puVar7 = (ulong *)(*(long *)(param_1 + 0x1e0) + 0x10);
      uVar8 = *(uint *)puVar7;
      if (0x1f < uVar8) goto LAB_1097effac;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x1e0) + 0x18);
LAB_1097f004c:
      *(uint *)puVar7 = uVar8 + 1;
      puVar2 = puVar2 + (ulong)uVar8 * 0x1e;
      puVar2[0x1b] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x19] = 0;
      puVar2[0x18] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar7 = puVar2 + 0x16;
      puVar2[0x17] = 0;
      *puVar7 = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      *puVar2 = param_2;
      *puVar7 = (ulong)puVar7;
      puVar2[0x17] = (ulong)puVar7;
      uVar4 = param_1;
      (**(code **)(*(long *)(param_1 + 0x218) + 0x10))(param_1,puVar2,param_3 | 1,puVar1);
      if ((int)uVar4 == 0) {
        uVar4 = *(ulong *)(param_1 + 0x1d0);
        FUN_1097d2c28(uVar4,puVar2);
        if ((int)uVar4 == 0) goto LAB_1097f00c4;
      }
      func_0x0001097f0c30(param_1,puVar2);
LAB_1097f01b8:
      if ((int)uVar4 == 100) goto LAB_1097f0158;
    }
LAB_1097f01c0:
    FUN_1097eed98(param_1,uVar4);
  }
  else {
LAB_1097f00c4:
    uVar8 = param_3 & (*(uint *)((long)puVar2 + 0x7c) ^ 0xffffffff);
    if (((uVar8 >> 4 & 1) == 0) || ((puVar2[0x1d] & 0xc) != 4)) {
      uVar10 = uVar8;
      if (((param_3 & 0x18) != 0) && ((puVar2[0x1d] & 1) != 0)) {
        puVar5 = puVar1;
        func_0x0001097cb234(puVar1,puVar2 + 0x18);
        uVar10 = uVar8 | 8;
        if ((int)puVar5 != 0) {
          uVar10 = uVar8;
        }
      }
      if ((((param_3 >> 4 & 1) == 0) || ((puVar2[0x1d] & 3) == 0)) ||
         (puVar5 = puVar1, func_0x0001097cb234(puVar1,puVar2 + 0x18), (int)puVar5 != 0)) {
        if (uVar10 == 0) goto LAB_1097f0160;
      }
      else {
        uVar10 = uVar10 | 0x10;
      }
      uVar4 = param_1;
      (**(code **)(*(long *)(param_1 + 0x218) + 0x10))(param_1,puVar2,uVar10,puVar1);
      if ((int)uVar4 != 0) goto LAB_1097f01b8;
      if ((param_3 & (*(uint *)((long)puVar2 + 0x7c) ^ 0xffffffff)) == 0) {
LAB_1097f0160:
        *param_5 = puVar2;
        return 0;
      }
    }
LAB_1097f0158:
    uVar4 = 100;
  }
  return uVar4;
}



/* Entry: 1097f0230; end: 1097f099b;  */

undefined8 *
FUN_1097f0230(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
             uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  double *pdVar12;
  ulong *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  int iStack_364;
  byte *pbStack_360;
  int iStack_354;
  long lStack_338;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined8 *)&UNK_10dffe248) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)((long)param_1 + 0xac) == 1;
  }
  puVar7 = (undefined8 *)(ulong)*(uint *)(param_1 + 1);
  puVar9 = param_2;
  uVar10 = param_3;
  puVar11 = param_4;
  if (*(uint *)(param_1 + 1) != 0) goto LAB_1097f05e4;
  if ((int)param_3 == 1) {
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    _pthread_mutex_lock(param_1 + 0x32);
    *(undefined4 *)(param_1 + 0x3d) = 1;
    puVar9 = (undefined8 *)*param_2;
    uVar10 = 1;
    puVar11 = (undefined8 *)0x0;
    puVar7 = param_1;
    FUN_1097eff1c();
    if ((int)puVar7 == 0) {
      if (param_1 == (undefined8 *)&UNK_10dffe248) {
        dVar31 = (double)param_2[1];
LAB_1097f053c:
        bVar5 = false;
        iVar19 = SUB84(dVar31 + 26388279066624.0,0);
      }
      else {
        dVar31 = (double)param_2[1];
        if (*(int *)((long)param_1 + 0xac) != 1) goto LAB_1097f053c;
        iVar19 = (int)(dVar31 + 0.5) << 8;
        bVar5 = true;
      }
      lVar8 = CONCAT44(iStack_28c,iStack_290);
      if (bVar5) {
        iVar26 = (int)((double)param_2[2] + 0.5) << 8;
      }
      else {
        iVar26 = SUB84((double)param_2[2] + 26388279066624.0,0);
      }
      uStack_280 = CONCAT44(*(int *)(lVar8 + 0x6c) + iVar26,*(int *)(lVar8 + 0x68) + iVar19);
      uStack_278 = CONCAT44(*(int *)(lVar8 + 0x74) + iVar26,*(int *)(lVar8 + 0x70) + iVar19);
      func_0x0001097ed40c(&uStack_280);
      puVar9 = param_4;
    }
    FUN_1097ef3b8(param_1);
    goto LAB_1097f05e4;
  }
  uVar14 = (uint)(param_5 == (uint *)0x0);
  _pthread_mutex_lock(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x3d) = 1;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
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
  uStack_190 = 0;
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
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((int)param_3 < 1) {
    FUN_1097ef3b8(param_1);
LAB_1097f05d0:
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    pdVar12 = (double *)(param_2 + 2);
    iVar24 = 0x7fffffff;
    iVar19 = -0x80000000;
    iVar22 = -0x80000000;
    iVar26 = 0x7fffffff;
    param_3 = param_3 & 0xffffffff;
    iVar27 = -0x80000000;
    iVar21 = 0x7fffffff;
    iVar29 = -0x80000000;
    iVar28 = 0x7fffffff;
    do {
      puVar9 = (undefined8 *)pdVar12[-2];
      uVar25 = (ulong)puVar9 & 0x3f;
      puVar13 = (ulong *)(&uStack_280)[uVar25];
      if ((puVar13 == (ulong *)0x0) || ((undefined8 *)(*puVar13 & 0xffffff) != puVar9)) {
        uVar10 = 1;
        puVar11 = (undefined8 *)0x0;
        puVar7 = param_1;
        FUN_1097eff1c();
        if ((int)puVar7 != 0) {
          FUN_1097ef3b8(param_1);
          puVar9 = puVar7;
          FUN_1097eed98(param_1);
          goto LAB_1097f05e4;
        }
        puVar13 = (ulong *)CONCAT44(iStack_28c,iStack_290);
        (&uStack_280)[uVar25] = puVar13;
      }
      if (bVar5) {
        iVar16 = (int)(pdVar12[-1] + 0.5);
        iVar15 = (int)puVar13[0xd] + iVar16 * 0x100;
        iVar16 = (int)puVar13[0xe] + iVar16 * 0x100;
        iVar30 = (int)(*pdVar12 + 0.5) << 8;
      }
      else {
        iVar16 = SUB84(pdVar12[-1] + 26388279066624.0,0);
        iVar15 = (int)puVar13[0xd] + iVar16;
        iVar16 = (int)puVar13[0xe] + iVar16;
        iVar30 = SUB84(*pdVar12 + 26388279066624.0,0);
      }
      iVar2 = *(int *)((long)puVar13 + 0x6c);
      iVar1 = iVar2 + iVar30;
      iVar3 = *(int *)((long)puVar13 + 0x74);
      iVar30 = iVar3 + iVar30;
      uVar18 = 0;
      if (((((iVar15 != iVar16 && iVar2 != iVar3) && iVar21 < iVar16) && iVar29 != iVar15) &&
          (((iVar15 == iVar16 || iVar2 == iVar3) || iVar21 >= iVar16) || iVar15 <= iVar29)) &&
          iVar28 < iVar30) {
        uVar18 = (uint)(iVar1 < iVar27);
      }
      bVar6 = uVar14 == 0;
      uVar14 = 1;
      if (bVar6) {
        uVar14 = uVar18;
      }
      iVar2 = iVar15;
      if (iVar21 <= iVar15) {
        iVar15 = iVar21;
        iVar2 = iVar26;
      }
      iVar26 = iVar2;
      iVar21 = iVar16;
      if (iVar16 <= iVar29) {
        iVar16 = iVar29;
        iVar21 = iVar22;
      }
      iVar22 = iVar21;
      iVar21 = iVar1;
      if (iVar28 <= iVar1) {
        iVar1 = iVar28;
        iVar21 = iVar24;
      }
      iVar24 = iVar21;
      iVar21 = iVar30;
      if (iVar30 <= iVar27) {
        iVar30 = iVar27;
        iVar21 = iVar19;
      }
      iVar19 = iVar21;
      pdVar12 = pdVar12 + 3;
      param_3 = param_3 - 1;
      iVar27 = iVar30;
      iVar21 = iVar15;
      iVar29 = iVar16;
      iVar28 = iVar1;
    } while (param_3 != 0);
    iStack_290 = iVar26;
    iStack_28c = iVar24;
    iStack_288 = iVar22;
    iStack_284 = iVar19;
    FUN_1097ef3b8(param_1);
    if (iVar16 <= iVar15) goto LAB_1097f05d0;
    func_0x0001097ed40c(&iStack_290);
    puVar9 = param_4;
  }
  puVar7 = (undefined8 *)0x0;
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar14;
  }
LAB_1097f05e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar23 = (undefined8 *)(ulong)*(uint *)(puVar7 + 1);
  if (*(uint *)(puVar7 + 1) == 0) {
    _pthread_mutex_lock(puVar7 + 0x32);
    *(undefined4 *)(puVar7 + 0x3d) = 1;
    if (0 < (int)uVar10) {
      uVar25 = 0;
      do {
        puVar20 = puVar9 + uVar25 * 3;
        puVar23 = puVar7;
        FUN_1097eff1c(puVar7,*puVar20,4,0,&lStack_338);
        if ((int)puVar23 == 100) {
          puVar23 = puVar7;
          FUN_1097eff1c(puVar7,*puVar20,2,0,&lStack_338);
          if ((int)puVar23 != 0) goto LAB_1097f0958;
          lVar8 = *(long *)(lStack_338 + 0x80);
          dVar34 = (double)puVar20[1];
          dVar31 = (double)puVar20[2];
          FUN_1097d8c50(lVar8,3);
          puVar23 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x1c);
          if (*(uint *)(lVar8 + 0x1c) != 0) goto LAB_1097f0958;
          iStack_364 = *(int *)(lVar8 + 0x19c);
          if (iStack_364 == 0) {
            puVar23 = (undefined8 *)0x0;
          }
          else {
            iStack_354 = 0;
            dVar32 = *(double *)(lVar8 + 0x88);
            dVar33 = *(double *)(lVar8 + 0x90);
            pbStack_360 = *(byte **)(lVar8 + 400);
            iVar19 = *(int *)(lVar8 + 0x198);
            uVar14 = iVar19 + 0xeU;
            if (-8 < iVar19) {
              uVar14 = iVar19 + 7;
            }
            do {
              if (0xe < iVar19 + 0xeU) {
                iVar22 = SUB84((dVar31 - dVar33) + 26388279066624.0,0) + iStack_354 * 0x100;
                pbVar17 = pbStack_360;
                iVar24 = (int)uVar14 >> 3;
                iVar26 = 0;
                do {
                  bVar4 = *pbVar17;
                  if (bVar4 == 0) {
                    iVar27 = iVar26 + 8;
                  }
                  else {
                    iVar21 = iVar26 + 8;
                    iVar29 = SUB84((dVar34 - dVar32) + 26388279066624.0,0) + iVar26 * 0x100;
                    uVar18 = 0x80;
                    iVar28 = 8;
                    do {
                      iVar27 = iVar26;
                      if (*(int *)(lVar8 + 0x198) <= iVar26) break;
                      if ((uVar18 & (((uint)bVar4 << 1 | (uint)bVar4 << 0xb) & 0x22110 |
                                    ((uint)bVar4 << 5 | (uint)bVar4 << 0xf) & 0x88440) * 0x10101 >>
                                    0x10) != 0) {
                        FUN_1097dc6f0(puVar11);
                        *(byte *)(puVar11 + 2) = *(byte *)(puVar11 + 2) | 1;
                        *(int *)(puVar11 + 1) = iVar29;
                        *(int *)((long)puVar11 + 0xc) = iVar22;
                        *puVar11 = puVar11[1];
                        puVar23 = puVar11;
                        func_0x0001097dc7a0(puVar11,iVar29 + 0x100,iVar22);
                        if ((int)puVar23 == 0) {
                          if ((*(byte *)(puVar11 + 2) & 1) != 0) {
                            puVar23 = puVar11;
                            func_0x0001097dc7a0(puVar11,*(undefined4 *)(puVar11 + 1),
                                                *(int *)((long)puVar11 + 0xc) + 0x100);
                            if ((int)puVar23 != 0) goto LAB_1097f0938;
                            if ((*(byte *)(puVar11 + 2) & 1) != 0) {
                              puVar23 = puVar11;
                              func_0x0001097dc7a0(puVar11,*(int *)(puVar11 + 1) + -0x100,
                                                  *(undefined4 *)((long)puVar11 + 0xc));
                              if (((int)puVar23 == 0) &&
                                 (puVar23 = puVar11, FUN_1097dcd9c(), (int)puVar23 == 0))
                              goto LAB_1097f08b8;
                              goto LAB_1097f0938;
                            }
                          }
                          puVar23 = (undefined8 *)0x4;
                        }
                        goto LAB_1097f0938;
                      }
LAB_1097f08b8:
                      uVar18 = uVar18 >> 1;
                      iVar26 = iVar26 + 1;
                      iVar29 = iVar29 + 0x100;
                      iVar28 = iVar28 + -1;
                      iVar27 = iVar21;
                    } while (iVar28 != 0);
                  }
                  iVar24 = iVar24 + -1;
                  pbVar17 = pbVar17 + 1;
                  iVar26 = iVar27;
                } while (iVar24 != 0);
              }
              pbStack_360 = pbStack_360 + *(long *)(lVar8 + 0x1a0);
              iStack_354 = iStack_354 + 1;
              iStack_364 = iStack_364 + -1;
            } while (iStack_364 != 0);
            puVar23 = (undefined8 *)0x0;
          }
LAB_1097f0938:
          FUN_1097f61ac(lVar8);
        }
        else if ((int)puVar23 == 0) {
          puVar23 = puVar11;
          func_0x0001097dcf64(puVar11,*(undefined8 *)(lStack_338 + 0x88),
                              (double)puVar20[1] + 26388279066624.0,
                              (double)puVar20[2] + 26388279066624.0);
        }
        if ((int)puVar23 != 0) goto LAB_1097f0958;
        uVar25 = uVar25 + 1;
      } while (uVar25 != (uVar10 & 0xffffffff));
    }
    puVar23 = (undefined8 *)0x0;
LAB_1097f0958:
    FUN_1097ef3b8(puVar7);
    FUN_1097eed98(puVar7,puVar23);
  }
  return puVar23;
}



/* Entry: 1097f099c; end: 1097f0b1f;  */

void FUN_1097f099c(long param_1,long param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  dVar17 = *param_3;
  dVar18 = param_3[1];
  dVar19 = param_3[2];
  dVar20 = param_3[3];
  dVar23 = param_3[4];
  *(double *)(param_1 + 0x60) = param_3[5];
  *(double *)(param_1 + 0x58) = dVar23;
  *(double *)(param_1 + 0x50) = dVar20;
  *(double *)(param_1 + 0x48) = dVar19;
  *(double *)(param_1 + 0x40) = dVar18;
  *(double *)(param_1 + 0x38) = dVar17;
  dVar18 = *(double *)(param_2 + 0x40);
  dVar17 = *(double *)(param_2 + 0x38);
  dVar20 = *(double *)(param_2 + 0x50);
  dVar19 = *(double *)(param_2 + 0x48);
  auVar21 = ZEXT216(0);
  dVar23 = 0.0;
  auVar22 = ZEXT216(0);
  auVar14 = ZEXT216(0);
  auVar16 = ZEXT216(0);
  bVar11 = false;
  do {
    dVar23 = param_3[1] + dVar23 * param_3[3];
    dVar24 = *(double *)(param_2 + 0xe8) * dVar23;
    dVar25 = *(double *)(param_2 + 0xf0) * dVar23;
    dVar26 = 0.0;
    bVar13 = false;
    bVar12 = bVar11;
    do {
      dVar26 = *param_3 + dVar26 * param_3[2];
      dVar27 = dVar19 * dVar23 + dVar17 * dVar26 + *(double *)(param_2 + 0x58);
      dVar28 = dVar20 * dVar23 + dVar18 * dVar26 + *(double *)(param_2 + 0x60);
      if (bVar12) {
        dVar29 = dVar24 + *(double *)(param_2 + 0xd8) * dVar26;
        dVar26 = dVar25 + *(double *)(param_2 + 0xe0) * dVar26;
        auVar15._8_8_ = auVar16._8_8_;
        lVar6 = -(ulong)(dVar28 < auVar22._8_8_);
        auVar1._8_8_ = dVar28;
        auVar1._0_8_ = dVar27;
        auVar4._8_4_ = (int)lVar6;
        auVar4._0_8_ = -(ulong)(dVar27 < auVar22._0_8_);
        auVar4._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar22 = auVar22 ^ (auVar22 ^ auVar1) & auVar4;
        lVar6 = -(ulong)(dVar26 < auVar14._8_8_);
        auVar7._8_8_ = dVar26;
        auVar7._0_8_ = dVar29;
        auVar5._8_4_ = (int)lVar6;
        auVar5._0_8_ = -(ulong)(dVar29 < auVar14._0_8_);
        auVar5._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar14 = auVar14 ^ (auVar14 ^ auVar7) & auVar5;
        if (dVar29 <= auVar16._0_8_) {
          dVar29 = auVar16._0_8_;
        }
        auVar15._0_8_ = dVar29;
        auVar2._8_8_ = dVar28;
        auVar2._0_8_ = dVar27;
        auVar9._8_8_ = -(ulong)(auVar21._8_8_ < dVar28);
        auVar9._0_8_ = -(ulong)(auVar21._0_8_ < dVar27);
        auVar21 = auVar21 ^ (auVar21 ^ auVar2) & auVar9;
        auVar8._8_8_ = dVar26;
        auVar8._0_8_ = dVar29;
        auVar3._8_8_ = -(ulong)(auVar15._8_8_ < dVar26);
        auVar3._0_8_ = -(ulong)(auVar15._8_8_ < dVar26);
        auVar16 = auVar15 ^ (auVar15 ^ auVar8) & auVar3;
      }
      else {
        auVar14._0_8_ = dVar24 + *(double *)(param_2 + 0xd8) * dVar26;
        auVar14._8_8_ = dVar25 + *(double *)(param_2 + 0xe0) * dVar26;
        auVar21._8_8_ = dVar28;
        auVar21._0_8_ = dVar27;
        auVar22._8_8_ = dVar28;
        auVar22._0_8_ = dVar27;
        auVar16._8_8_ = auVar14._8_8_;
        auVar16._0_8_ = auVar14._0_8_;
      }
      dVar26 = 1.0;
      bVar12 = true;
      bVar10 = !bVar13;
      bVar13 = true;
    } while (bVar10);
    dVar23 = 1.0;
    bVar12 = !bVar11;
    bVar11 = true;
  } while (bVar12);
  *(double *)(param_1 + 0x10) = auVar22._8_8_;
  *(double *)(param_1 + 8) = auVar22._0_8_;
  *(double *)(param_1 + 0x20) = auVar21._8_8_ - auVar22._8_8_;
  *(double *)(param_1 + 0x18) = auVar21._0_8_ - auVar22._0_8_;
  dVar23 = param_3[4];
  dVar24 = param_3[5];
  *(double *)(param_1 + 0x28) = dVar23;
  *(double *)(param_1 + 0x30) = dVar20 * dVar24 + dVar18 * dVar23;
  *(double *)(param_1 + 0x28) = dVar19 * dVar24 + dVar17 * dVar23;
  dVar17 = param_3[4];
  dVar18 = param_3[5];
  dVar19 = *(double *)(param_2 + 0xe8);
  dVar20 = *(double *)(param_2 + 0xf0);
  dVar23 = *(double *)(param_2 + 0xd8);
  dVar24 = *(double *)(param_2 + 0xe0);
  *(ulong *)(param_1 + 0x68) =
       CONCAT44(SUB84(auVar14._8_8_ + 26388279066624.0,0),SUB84(auVar14._0_8_ + 26388279066624.0,0))
  ;
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(SUB84(auVar16._8_8_ + 26388279066624.0,0),SUB84(auVar16._0_8_ + 26388279066624.0,0))
  ;
  *(short *)(param_1 + 0x78) = (short)(int)(dVar18 * dVar19 + dVar17 * dVar23 + 0.5);
  *(short *)(param_1 + 0x7a) = (short)(int)(dVar18 * dVar20 + dVar17 * dVar24 + 0.5);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  return;
}



/* Entry: 1097f0b20; end: 1097f0cdf;  */

void FUN_1097f0b20(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_1097f68f0();
    FUN_1097f61ac(*(undefined8 *)(param_1 + 0x90));
  }
  *(long *)(param_1 + 0x90) = param_3;
  bVar1 = *(byte *)(param_1 + 0xe8) & 0xfe;
  if (param_4 != (undefined8 *)0x0) {
    bVar1 = bVar1 + 1;
  }
  *(byte *)(param_1 + 0xe8) = bVar1;
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    *(undefined8 *)(param_1 + 0xe0) = param_4[4];
    *(undefined8 *)(param_1 + 200) = uVar4;
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    *(undefined8 *)(param_1 + 0xd8) = uVar6;
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = 8;
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffff7 | uVar2;
  return;
}



/* Entry: 1097f0ce0; end: 1097f0d4f;  */

void FUN_1097f0ce0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 != (undefined8 *)0x0) && (param_2 != (undefined8 *)&UNK_10dffe2e0)) {
    if (*(int *)(param_1 + 8) == 0) {
      _free(param_2[3]);
      _free(param_2[5]);
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      param_2[1] = *(undefined8 *)(param_1 + 0xa0);
      *param_2 = uVar3;
      param_2[2] = *(undefined8 *)(param_1 + 0xa8);
      lVar2 = *(long *)(param_1 + 0xb0);
      if (lVar2 != 0) {
        _strdup();
      }
      param_2[3] = lVar2;
      param_2[4] = *(undefined8 *)(param_1 + 0xb8);
      uVar1 = *(uint *)(param_1 + 200);
      *(uint *)(param_2 + 6) = uVar1;
      param_2[5] = 0;
      if (*(long *)(param_1 + 0xc0) != 0) {
        lVar2 = (ulong)uVar1 * 0x28;
        _malloc();
        param_2[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)();
        return;
      }
      return;
    }
    *(undefined4 *)(param_2 + 6) = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}



/* Entry: 1097f0d50; end: 1097f0df3;  */

void FUN_1097f0d50(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0xb0);
  while (puVar3 != (undefined8 *)(param_2 + 0xb0)) {
    (*(code *)puVar3[3])(puVar3,param_2,param_1);
    puVar3 = *(undefined8 **)(param_2 + 0xb0);
  }
  FUN_1097d31d4(param_1,param_2);
  if (*(long *)(param_2 + 0x80) != 0) {
    FUN_1097f61ac();
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    FUN_1097dc6a4();
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    FUN_1097c5574(param_1 + 0x1f0,(long *)(param_2 + 0x90),1);
  }
  lVar4 = *(long *)(param_2 + 0x98);
  if (lVar4 != 0) {
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != -1)) {
      _pthread_mutex_lock(0x1132e0448);
      iVar2 = *(int *)(lVar4 + 0x18) + -1;
      *(int *)(lVar4 + 0x18) = iVar2;
      _pthread_mutex_unlock(0x1132e0448);
      if (iVar2 == 0) {
        if ((*(byte *)(lVar4 + 0x30) >> 1 & 1) == 0) {
          *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) | 1;
          FUN_1097f6378(lVar4,0);
          if (*(int *)(lVar4 + 0x18) != 0) {
            return;
          }
          FUN_1097f6afc(lVar4);
        }
        if (*(long *)(lVar4 + 0x28) != 0) {
          func_0x0001097cc6a8();
        }
        func_0x0001097c55d4(lVar4 + 0x38);
        func_0x0001097c55d4(lVar4 + 0x50);
        if (*(long *)(lVar4 + 0x160) != 0) {
          FUN_1097e4880();
        }
        bVar1 = *(byte *)(lVar4 + 0x30);
        if ((bVar1 >> 4 & 1) != 0) {
          FUN_1097ce1d0(*(undefined8 *)(lVar4 + 8));
          bVar1 = *(byte *)(lVar4 + 0x30);
        }
        if ((bVar1 >> 3 & 1) != 0) {
          _free(*(undefined8 *)(lVar4 + 0x140));
          _free(*(undefined8 *)(lVar4 + 0x150));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(lVar4);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 1097f0df4; end: 1097f0ed3;  */

bool FUN_1097f0df4(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)) {
    return false;
  }
  lVar4 = param_1 + 0x38;
  _memcmp(lVar4,param_2 + 0x38,0x30);
  if ((int)lVar4 != 0) {
    return false;
  }
  lVar4 = param_1 + 0x68;
  _memcmp(lVar4,param_2 + 0x68,0x30);
  if ((int)lVar4 != 0) {
    return false;
  }
  piVar1 = (int *)(param_1 + 0x98);
  piVar2 = (int *)(param_2 + 0x98);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  if (piVar1 == (int *)&UNK_10dffe2e0) {
    return false;
  }
  if (piVar2 == (int *)0x0) {
    return false;
  }
  if (piVar2 == (int *)&UNK_10dffe2e0) {
    return false;
  }
  if (piVar1 != piVar2) {
    if (((((*piVar1 == *piVar2) && (*(int *)(param_1 + 0x9c) == *(int *)(param_2 + 0x9c))) &&
         (*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0))) &&
        ((*(int *)(param_1 + 0xa4) == *(int *)(param_2 + 0xa4) &&
         (*(int *)(param_1 + 0xa8) == *(int *)(param_2 + 0xa8))))) &&
       (*(int *)(param_1 + 0xac) == *(int *)(param_2 + 0xac))) {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 == 0) {
        if (*(long *)(param_2 + 0xb0) != 0) {
          return false;
        }
      }
      else {
        if (*(long *)(param_2 + 0xb0) == 0) {
          return false;
        }
        _strcmp();
        if ((int)lVar4 != 0) {
          return false;
        }
      }
      if ((*(int *)(param_1 + 0xb8) == *(int *)(param_2 + 0xb8)) &&
         (*(int *)(param_1 + 0xbc) == *(int *)(param_2 + 0xbc))) {
        lVar4 = *(long *)(param_1 + 0xc0);
        lVar5 = *(long *)(param_2 + 0xc0);
        bVar3 = lVar4 == 0 && lVar5 == 0;
        if (lVar4 == 0) {
          return bVar3;
        }
        if (lVar5 == 0) {
          return bVar3;
        }
        if (*(uint *)(param_1 + 200) == *(uint *)(param_2 + 200)) {
          _memcmp(lVar4,lVar5,(ulong)*(uint *)(param_1 + 200) * 0x28);
          return (int)lVar4 == 0;
        }
      }
    }
    return false;
  }
  return true;
}



/* Entry: 1097f0ed4; end: 1097f10a7;  */

ulong FUN_1097f0ed4(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_f0 [52];
  undefined8 uStack_bc;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(int *)((long)param_2 + 0x5c) == 0) {
    return 100;
  }
  uVar1 = *param_2;
  FUN_1097f6978(uVar1,0x2000,*(undefined4 *)((long)param_2 + 0x44),(int)param_2[9],0);
  if (*(uint *)(uVar1 + 0x1c) != 0) {
    return (ulong)*(uint *)(uVar1 + 0x1c);
  }
  uVar4 = param_2[0x5a];
  uVar2 = uVar4;
  FUN_1097ca0b0();
  if ((int)uVar2 == 0) {
    func_0x0001097ca490();
  }
  if (((((*(byte *)(uVar1 + 0x30) >> 2 & 1) == 0) &&
       (uVar2 = uVar1,
       FUN_1097f4330(uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8],0,&UNK_10dffe668,
                     uVar4), (int)uVar2 != 0)) ||
      (uVar2 = uVar1,
      func_0x0001097f476c(uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8],0xc,
                          &UNK_10dffe710,param_3,param_4,param_5,uVar4), (int)uVar2 != 0)) ||
     ((uVar2 = param_2[0x5a], uVar4 != uVar2 &&
      (FUN_1097ca114(uVar2,uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8]),
      (int)uVar2 != 0)))) goto LAB_1097f1060;
  func_0x0001097e43f4(auStack_f0,uVar1);
  uStack_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x3ff0000000000000;
  auVar5._0_8_ = (long)-(int)*(undefined8 *)((long)param_2 + 0x3c);
  auVar5._8_8_ = (long)-(int)((ulong)*(undefined8 *)((long)param_2 + 0x3c) >> 0x20);
  auVar5 = NEON_scvtf(auVar5,8);
  uStack_80 = auVar5._8_8_;
  uStack_88 = auVar5._0_8_;
  uStack_bc = 3;
  iVar3 = (int)param_2[1];
  uVar2 = *param_2;
  if (iVar3 == 1) {
    FUN_1097f72c4(uVar2,9,&UNK_10dffe710,auStack_f0,uVar4);
    if ((int)uVar2 == 0) {
      uVar2 = *param_2;
      iVar3 = 0xc;
      goto LAB_1097f104c;
    }
  }
  else {
LAB_1097f104c:
    FUN_1097f72c4(uVar2,iVar3,param_2 + 0x10,auStack_f0,uVar4);
  }
  func_0x0001097e434c(auStack_f0);
LAB_1097f1060:
  if (uVar4 != param_2[0x5a]) {
    FUN_1097ca284(uVar4);
  }
  FUN_1097f61ac(uVar1);
  return uVar2;
}



/* Entry: 1097f10a8; end: 1097f1293;  */

ulong FUN_1097f10a8(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_100 [52];
  undefined8 uStack_cc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (*(int *)((long)param_2 + 0x5c) == 0) {
    return 100;
  }
  uVar1 = *param_2;
  FUN_1097f6978(uVar1,0x2000,*(undefined4 *)((long)param_2 + 0x44),(int)param_2[9],0);
  if (*(uint *)(uVar1 + 0x1c) != 0) {
    return (ulong)*(uint *)(uVar1 + 0x1c);
  }
  uVar4 = param_2[0x5a];
  uVar2 = uVar4;
  FUN_1097ca0b0();
  if ((int)uVar2 == 0) {
    func_0x0001097ca490();
  }
  if (((((*(byte *)(uVar1 + 0x30) >> 2 & 1) == 0) &&
       (uVar2 = uVar1,
       FUN_1097f4330(uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8],0,&UNK_10dffe668,
                     uVar4), (int)uVar2 != 0)) ||
      (uVar2 = uVar1,
      FUN_1097f44d8(uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8],0xc,&UNK_10dffe710,
                    param_3,param_4,param_5,param_6,param_7), (int)uVar2 != 0)) ||
     ((uVar2 = param_2[0x5a], uVar4 != uVar2 &&
      (FUN_1097ca114(uVar2,uVar1,*(undefined4 *)((long)param_2 + 0x3c),(int)param_2[8]),
      (int)uVar2 != 0)))) goto LAB_1097f1248;
  func_0x0001097e43f4(auStack_100,uVar1);
  uStack_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0x3ff0000000000000;
  auVar5._0_8_ = (long)-(int)*(undefined8 *)((long)param_2 + 0x3c);
  auVar5._8_8_ = (long)-(int)((ulong)*(undefined8 *)((long)param_2 + 0x3c) >> 0x20);
  auVar5 = NEON_scvtf(auVar5,8);
  uStack_90 = auVar5._8_8_;
  uStack_98 = auVar5._0_8_;
  uStack_cc = 3;
  iVar3 = (int)param_2[1];
  uVar2 = *param_2;
  if (iVar3 == 1) {
    FUN_1097f72c4(uVar2,9,&UNK_10dffe710,auStack_100,uVar4);
    if ((int)uVar2 == 0) {
      uVar2 = *param_2;
      iVar3 = 0xc;
      goto LAB_1097f1234;
    }
  }
  else {
LAB_1097f1234:
    FUN_1097f72c4(uVar2,iVar3,param_2 + 0x10,auStack_100,uVar4);
  }
  func_0x0001097e434c(auStack_100);
LAB_1097f1248:
  FUN_1097f61ac(uVar1);
  if (uVar4 != param_2[0x5a]) {
    FUN_1097ca284(uVar4);
  }
  return uVar2;
}



/* Entry: 1097f1294; end: 1097f12fb;  */

uint FUN_1097f1294(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar6 = 1;
  if (uVar3 == 0 && 0 < (int)uVar5 || 0 < (int)uVar3) {
    uVar6 = 0xffffffff;
  }
  uVar1 = 0;
  if (((uVar3 ^ uVar2 | uVar4 ^ uVar5) & 0x80000000) != 0) {
    uVar1 = uVar6;
  }
  uVar6 = 0xffffffff;
  if (uVar4 != 0 || uVar2 != 0) {
    uVar6 = uVar1;
  }
  if (uVar3 == 0 && uVar5 == 0) {
    uVar6 = (uint)(uVar4 != 0 || uVar2 != 0);
  }
  uVar1 = 1;
  if ((long)(int)uVar2 * (long)(int)uVar5 < (long)(int)uVar3 * (long)(int)uVar4) {
    uVar1 = 0xffffffff;
  }
  if ((long)(int)uVar2 * (long)(int)uVar5 - (long)(int)uVar3 * (long)(int)uVar4 == 0) {
    uVar1 = uVar6;
  }
  return uVar1;
}



/* Entry: 1097f12fc; end: 1097f145b;  */

void FUN_1097f12fc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_290 [36];
  undefined4 uStack_26c;
  undefined8 *puStack_258;
  undefined8 uStack_240;
  undefined8 uStack_238;
  
  lVar2 = *(long *)(param_2 + 0x2d0);
  puVar1 = *(undefined8 **)(lVar2 + 0x18);
  if (puVar1 == (undefined8 *)(lVar2 + 0x34)) {
    puVar1 = &uStack_240;
    uStack_238 = *(undefined8 *)(lVar2 + 0x3c);
    uStack_240 = *(undefined8 *)(lVar2 + 0x34);
  }
  func_0x0001097c8e04(auStack_290,puVar1,*(undefined4 *)(lVar2 + 0x20));
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  FUN_1097f1ab0(param_1,param_2,auStack_290);
  lVar2 = *(long *)(param_2 + 0x2d0);
  if (puStack_258 == &uStack_240) {
    puVar1 = puStack_258 + 1;
    uVar3 = *puStack_258;
    puStack_258 = (undefined8 *)(lVar2 + 0x34);
    *(undefined8 *)(lVar2 + 0x3c) = *puVar1;
    *(undefined8 *)(lVar2 + 0x34) = uVar3;
  }
  *(undefined8 **)(lVar2 + 0x18) = puStack_258;
  *(undefined4 *)(lVar2 + 0x20) = uStack_26c;
  return;
}



/* Entry: 1097f145c; end: 1097f178b;  */

ulong * FUN_1097f145c(undefined8 param_1,ulong *param_2,long param_3,ulong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  ulong auStack_430 [2];
  undefined4 uStack_420;
  undefined8 uStack_41c;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 *puStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  long ***ppplStack_3f0;
  long **pplStack_3e8;
  undefined1 auStack_3e0 [892];
  undefined4 uStack_64;
  
  uStack_64 = (undefined4)param_5;
  if ((((byte)param_4[2] >> 5 & 1) != 0) &&
     (((((byte)param_4[2] & 3) != 1 || ((int)param_4[1] == (int)*param_4)) ||
      (*(int *)((long)param_4 + 0xc) == *(int *)((long)param_4 + 4))))) {
    auStack_430[0] = auStack_430[0] & 0xffffffff00000000;
    uStack_410 = 0;
    uStack_40c = 0;
    pplStack_3e8 = &plStack_400;
    uStack_3f8 = auStack_3e0;
    plStack_400 = (long *)0x0;
    ppplStack_3f0 = (long ***)0x2000000000;
    puStack_408 = (undefined8 *)CONCAT44(puStack_408._4_4_,1);
    lVar4 = *(long *)(param_3 + 0x2d0);
    lVar3 = lVar4;
    FUN_1097c956c(lVar4,param_3 + 0x1c);
    if ((int)lVar3 == 0) {
      func_0x0001097c8d74(auStack_430,*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20));
    }
    puVar2 = param_4;
    FUN_1097dbfa4(param_4,param_5,param_6,auStack_430);
    plVar5 = plStack_400;
    if ((int)puVar2 == 0) {
      puVar2 = param_2;
      FUN_1097f1ab0(param_2,param_3,auStack_430);
      plVar5 = plStack_400;
    }
    while (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      _free();
    }
    uStack_3f8._4_4_ = (undefined4)((ulong)uStack_3f8 >> 0x20);
    if ((int)puVar2 != 100) {
      return puVar2;
    }
  }
  iVar1 = *(int *)(param_3 + 0x4c);
  if ((*(int *)(param_3 + 0x1c) < iVar1) ||
     (*(int *)(param_3 + 0x54) + iVar1 < *(int *)(param_3 + 0x24) + *(int *)(param_3 + 0x1c))) {
LAB_1097f15bc:
    if (*(int *)(*(long *)(param_3 + 0x2d0) + 0x20) == 1) {
      puStack_408 = *(undefined8 **)(*(long *)(param_3 + 0x2d0) + 0x18);
      uVar6 = puStack_408[1];
      uStack_41c = *puStack_408;
    }
    else {
      iStack_440 = iVar1 << 8;
      iStack_43c = *(int *)(param_3 + 0x50) << 8;
      iStack_438 = (*(int *)(param_3 + 0x54) + iVar1) * 0x100;
      iStack_434 = (*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x50)) * 0x100;
      uVar6 = CONCAT44(iStack_434,iStack_438);
      uStack_41c = CONCAT44(iStack_43c,iStack_440);
      puStack_408 = (undefined8 *)&iStack_440;
    }
    plStack_400 = (long *)0x1;
    uStack_414 = (undefined4)uVar6;
    uStack_410 = (undefined4)((ulong)uVar6 >> 0x20);
  }
  else {
    if ((*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x50)) ||
       (*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x50) <
        *(int *)(param_3 + 0x28) + *(int *)(param_3 + 0x20))) goto LAB_1097f15bc;
    plStack_400 = (long *)0x0;
    puStack_408 = (undefined8 *)0x0;
  }
  uStack_3f8 = (undefined1 *)CONCAT44(uStack_3f8._4_4_,0x20);
  ppplStack_3f0 = &pplStack_3e8;
  auStack_430[1] = 0x800000007fffffff;
  auStack_430[0] = 0x7fffffff00000000;
  uStack_420 = 0x80000000;
  FUN_1097dbaa0(param_1,param_4,auStack_430);
  plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
  if ((int)param_4 == 0) {
    lVar3 = *(long *)(param_3 + 0x2d0);
    if (1 < *(int *)(lVar3 + 0x20)) {
      param_4 = auStack_430;
      FUN_1097e7d8c(param_4,&uStack_64,*(undefined8 *)(lVar3 + 0x18));
      if ((int)param_4 != 0) goto LAB_1097f171c;
      lVar3 = *(long *)(param_3 + 0x2d0);
    }
    if (*(int *)(param_3 + 0x5c) != 0) {
      lVar4 = lVar3;
      func_0x0001097ca404();
      *(long *)(param_3 + 0x2d0) = lVar4;
      FUN_1097c9804();
      *(long *)(param_3 + 0x2d0) = lVar4;
    }
    FUN_1097f24c4(param_2,param_3,auStack_430,uStack_64,param_6);
    param_4 = param_2;
    if (*(int *)(param_3 + 0x5c) != 0) {
      FUN_1097ca284(*(undefined8 *)(param_3 + 0x2d0));
      *(long *)(param_3 + 0x2d0) = lVar3;
    }
  }
LAB_1097f171c:
  if (ppplStack_3f0 != &pplStack_3e8) {
    _free();
  }
  return param_4;
}



/* Entry: 1097f178c; end: 1097f1aaf;  */

ulong * FUN_1097f178c(undefined8 param_1,ulong *param_2,long param_3,ulong *param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uStack_454;
  int iStack_450;
  int iStack_44c;
  int iStack_448;
  int iStack_444;
  ulong auStack_440 [2];
  undefined4 uStack_430;
  undefined8 uStack_42c;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  int *piStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  long ***ppplStack_400;
  long **pplStack_3f8;
  undefined1 auStack_3f0 [896];
  
  if (((byte)param_4[2] >> 4 & 1) != 0) {
    auStack_440[0] = auStack_440[0] & 0xffffffff00000000;
    uStack_420 = 0;
    uStack_41c = 0;
    pplStack_3f8 = &plStack_410;
    uStack_408 = auStack_3f0;
    plStack_410 = (long *)0x0;
    ppplStack_400 = (long ***)0x2000000000;
    piStack_418 = (int *)CONCAT44(piStack_418._4_4_,1);
    lVar4 = *(long *)(param_3 + 0x2d0);
    lVar3 = lVar4;
    FUN_1097c956c(lVar4,param_3 + 0x1c);
    if ((int)lVar3 == 0) {
      func_0x0001097c8d74(auStack_440,*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20));
    }
    puVar2 = param_4;
    FUN_1097de0d4(param_4,param_5,param_6,param_8,auStack_440);
    plVar5 = plStack_410;
    if ((int)puVar2 == 0) {
      puVar2 = param_2;
      FUN_1097f1ab0(param_2,param_3,auStack_440);
      plVar5 = plStack_410;
    }
    while (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      _free();
    }
    uStack_408._4_4_ = (undefined4)((ulong)uStack_408 >> 0x20);
    if ((int)puVar2 != 100) {
      return puVar2;
    }
  }
  uStack_454 = 0;
  iVar1 = *(int *)(param_3 + 0x4c);
  if ((*(int *)(param_3 + 0x1c) < iVar1) ||
     (*(int *)(param_3 + 0x54) + iVar1 < *(int *)(param_3 + 0x24) + *(int *)(param_3 + 0x1c))) {
LAB_1097f18d0:
    if (*(int *)(*(long *)(param_3 + 0x2d0) + 0x20) == 1) {
      piStack_418 = *(int **)(*(long *)(param_3 + 0x2d0) + 0x18);
      uVar6 = *(undefined8 *)(piStack_418 + 2);
      uStack_42c = *(undefined8 *)piStack_418;
    }
    else {
      iStack_450 = iVar1 << 8;
      iStack_44c = *(int *)(param_3 + 0x50) << 8;
      iStack_448 = (*(int *)(param_3 + 0x54) + iVar1) * 0x100;
      iStack_444 = (*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x50)) * 0x100;
      piStack_418 = &iStack_450;
      uVar6 = CONCAT44(iStack_444,iStack_448);
      uStack_42c = CONCAT44(iStack_44c,iStack_450);
    }
    plStack_410 = (long *)0x1;
    uStack_424 = (undefined4)uVar6;
    uStack_420 = (undefined4)((ulong)uVar6 >> 0x20);
  }
  else {
    if ((*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x50)) ||
       (*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x50) <
        *(int *)(param_3 + 0x28) + *(int *)(param_3 + 0x20))) goto LAB_1097f18d0;
    plStack_410 = (long *)0x0;
    piStack_418 = (int *)0x0;
  }
  uStack_408 = (undefined1 *)CONCAT44(uStack_408._4_4_,0x20);
  ppplStack_400 = &pplStack_3f8;
  auStack_440[1] = 0x800000007fffffff;
  auStack_440[0] = 0x7fffffff00000000;
  uStack_430 = 0x80000000;
  FUN_1097ded14(param_1,param_4,param_5,param_6,param_7,auStack_440);
  plStack_410 = (long *)((ulong)plStack_410 & 0xffffffff00000000);
  if ((int)param_4 == 0) {
    lVar3 = *(long *)(param_3 + 0x2d0);
    if (1 < *(int *)(lVar3 + 0x20)) {
      param_4 = auStack_440;
      FUN_1097e7d8c(param_4,&uStack_454,*(undefined8 *)(lVar3 + 0x18));
      if ((int)param_4 != 0) goto LAB_1097f1a3c;
      lVar3 = *(long *)(param_3 + 0x2d0);
    }
    if (*(int *)(param_3 + 0x5c) != 0) {
      lVar4 = lVar3;
      func_0x0001097ca404();
      *(long *)(param_3 + 0x2d0) = lVar4;
      FUN_1097c9804();
      *(long *)(param_3 + 0x2d0) = lVar4;
    }
    FUN_1097f24c4(param_2,param_3,auStack_440,uStack_454,param_8);
    param_4 = param_2;
    if (*(int *)(param_3 + 0x5c) != 0) {
      FUN_1097ca284(*(undefined8 *)(param_3 + 0x2d0));
      *(long *)(param_3 + 0x2d0) = lVar3;
    }
  }
LAB_1097f1a3c:
  if (ppplStack_400 != &pplStack_3f8) {
    _free();
  }
  return param_4;
}



/* Entry: 1097f1ab0; end: 1097f2143;  */

long * FUN_1097f1ab0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_42c;
  undefined1 *puStack_428;
  undefined1 auStack_420 [896];
  long alStack_a0 [6];
  int aiStack_6c [3];
  
  FUN_1097c9114(param_3,&uStack_468);
  plVar5 = param_2;
  FUN_1097cb460(param_2,&uStack_468);
  if ((int)plVar5 != 0) {
    return plVar5;
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    if (*(int *)((long)param_2 + 0x5c) == 0) {
      FUN_1097f2144(param_1,param_2,param_3);
      return param_1;
    }
LAB_1097f1bec:
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)param_2[0x5a];
    if ((plVar5[2] != 0) && (*(int *)((long)param_2 + 0x5c) != 0)) {
      FUN_1097ca2ec();
      func_0x0001097c9660();
      if (plVar5 == (long *)0x11386a1e0) {
        return (long *)0x66;
      }
      plVar12 = plVar5;
      FUN_1097c9cdc();
      FUN_1097ca1f4(plVar5[2]);
      plVar5[2] = 0;
      if ((int)plVar12 == 0) {
        lVar11 = param_2[0x5a];
        param_2[0x5a] = (long)plVar5;
        plVar12 = param_1;
        FUN_1097f24c4(param_1,param_2,&uStack_468,(int)alStack_a0[0],aiStack_6c[0]);
        plVar5 = (long *)param_2[0x5a];
        param_2[0x5a] = lVar11;
        if (puStack_428 != auStack_420) {
          _free();
        }
      }
      FUN_1097ca284(plVar5);
      if ((int)plVar12 != 100) {
        return plVar12;
      }
    }
    if (*(int *)(param_3 + 0x28) != 0) {
      plVar5 = (long *)*param_2;
      iVar9 = (int)param_2[1];
      uVar4 = (uint)param_2[0x5a];
      FUN_1097f2e04();
      if ((uVar4 != 0) || (*(int *)((long)param_2 + 0x5c) != 0)) {
        if ((int)param_2[0x3a] == 0) {
          uVar10 = (uint)(0xfe < *(byte *)((long)param_2 + 0x247));
        }
        else {
          uVar10 = 0;
        }
        plVar12 = plVar5;
        if (iVar9 == 1) {
          if (((uVar4 & uVar10) == 0) && ((*(byte *)(param_1 + 6) & 1) == 0)) goto LAB_1097f2014;
          if ((uVar4 & uVar10) == 0) {
            bVar2 = false;
            goto LAB_1097f1dd8;
          }
LAB_1097f1c8c:
          if ((int)param_2[0x16] != 1) {
LAB_1097f1dc4:
            if ((uVar4 & uVar10) != 0) {
              bVar2 = true;
              bVar3 = true;
              goto LAB_1097f1dd0;
            }
            goto LAB_1097f1ddc;
          }
          puVar6 = (undefined8 *)param_2[0x20];
          if (*(int *)*puVar6 != 0x10) goto LAB_1097f1dc4;
          if (((int)param_2[0x17] != 0) &&
             ((**(code **)((int *)*puVar6 + 0xe))(puVar6,&uStack_468), *(int *)(puVar6 + 0x34) == 0)
             ) {
            if ((*(int *)(puVar6 + 0x32) <= (int)param_2[0xc]) &&
               ((int)param_2[0xd] + (int)param_2[0xc] <=
                *(int *)(puVar6 + 0x33) + *(int *)(puVar6 + 0x32))) {
              if (*(int *)((long)puVar6 + 0x194) <= *(int *)((long)param_2 + 100)) {
                if (*(int *)((long)puVar6 + 0x19c) + *(int *)((long)puVar6 + 0x194) <
                    *(int *)((long)param_2 + 0x6c) + *(int *)((long)param_2 + 100)) {
                  bVar3 = true;
                  bVar2 = true;
                  if ((uVar4 & uVar10) != 0) goto LAB_1097f1dd0;
                  goto LAB_1097f1dd8;
                }
                goto LAB_1097f1cc8;
              }
            }
            goto LAB_1097f1dc4;
          }
LAB_1097f1cc8:
          if ((*(byte *)(plVar5 + 6) >> 2 & 1) == 0) {
            (*(code *)param_1[7])(plVar5,0,&UNK_10dffcd70,param_3);
            if ((int)plVar12 == 0) {
              *(byte *)(plVar5 + 6) = *(byte *)(plVar5 + 6) | 4;
              goto LAB_1097f1cfc;
            }
          }
          else {
LAB_1097f1cfc:
            plVar7 = param_2 + 0x19;
            plVar12 = plVar5;
            FUN_1097f7168();
            if ((int)plVar12 != 0) {
              func_0x0001097d92b4(alStack_a0,plVar7,plVar5 + 0xd);
              plVar7 = alStack_a0;
            }
            lVar11 = param_3;
            func_0x0001097c9c5c();
            plVar12 = (long *)param_2[0x20];
            (**(code **)(*plVar12 + 0x38))(plVar12,&uStack_468);
            uStack_468 = 0;
            uStack_42c = 0;
            uStack_440 = 0;
            uStack_438 = 0;
            uStack_448 = 0;
            uStack_460 = plVar7;
            plStack_458 = plVar5;
            lStack_450 = lVar11;
            FUN_1097eae14();
            FUN_1097ca284(lVar11);
          }
        }
        else {
          if ((*(byte *)(plVar5 + 6) >> 2 & 1) == 0) {
            uVar1 = 0;
            if (iVar9 == 2) {
              uVar1 = uVar10;
            }
            if (uVar1 != 0) {
              plVar7 = param_2 + 0x10;
              FUN_1097e59e8(plVar7,param_2 + 0xc);
              bVar3 = (int)plVar7 != 0;
              goto LAB_1097f1c80;
            }
            if ((uVar4 & uVar10) != 0) {
              bVar2 = false;
              bVar3 = false;
              goto LAB_1097f1dd0;
            }
LAB_1097f1ec4:
            if (uVar4 == 0) {
              plVar7 = param_1;
              FUN_1097f29ac(param_1,plVar5,param_2[0x5a],(long)param_2 + 0x3c);
              plVar12 = (long *)(ulong)*(uint *)((long)plVar7 + 0x1c);
              if (*(uint *)((long)plVar7 + 0x1c) != 0) goto LAB_1097f200c;
              iVar13 = -*(int *)((long)param_2 + 0x3c);
              iVar15 = -(int)param_2[8];
            }
            else {
              plVar7 = (long *)0x0;
              iVar13 = 0;
              iVar15 = 0;
            }
            plVar8 = plVar7;
            iVar14 = iVar13;
            iVar16 = iVar15;
            if (uVar10 == 0) {
              plVar8 = plVar5;
              (*(code *)param_1[10])
                        (plVar5,param_2 + 0x34,1,(long)param_2 + 0x3c,param_2 + 0xe,&uStack_468,
                         alStack_a0);
              if (*(int *)((long)plVar8 + 0x1c) != 0) {
                FUN_1097f61ac(plVar7);
                plVar12 = (long *)(ulong)*(uint *)((long)plVar8 + 0x1c);
                goto LAB_1097f200c;
              }
              iVar14 = (int)uStack_468;
              iVar16 = (int)alStack_a0[0];
              if (plVar7 != (long *)0x0) {
                (*(code *)param_1[0xb])
                          (plVar7,3,plVar8,0,uStack_468 & 0xffffffff,(int)alStack_a0[0],0,0,iVar13,
                           iVar15,param_3,(long)param_2 + 0x3c);
                FUN_1097f61ac(plVar8);
                plVar8 = plVar7;
                iVar14 = iVar13;
                iVar16 = iVar15;
              }
            }
            plVar7 = plVar5;
            (*(code *)param_1[10])
                      (plVar5,param_2 + 0x10,0,(long)param_2 + 0x3c,param_2 + 0xc,&uStack_468,
                       alStack_a0);
            plVar12 = (long *)(ulong)*(uint *)((long)plVar7 + 0x1c);
            if (*(uint *)((long)plVar7 + 0x1c) == 0) {
              (*(code *)param_1[0xb])
                        (plVar5,iVar9,plVar7,plVar8,uStack_468 & 0xffffffff,(int)alStack_a0[0],
                         iVar14,iVar16,0,param_3,(long)param_2 + 0x3c);
              FUN_1097f61ac(plVar7);
              plVar12 = plVar5;
            }
            FUN_1097f61ac(plVar8);
          }
          else {
            bVar3 = iVar9 == 2 || iVar9 == 0xc;
LAB_1097f1c80:
            if ((uVar4 & uVar10 & (uint)bVar3) != 0) goto LAB_1097f1c8c;
            bVar2 = false;
            if ((uVar4 & uVar10) == 0) goto LAB_1097f1dd8;
LAB_1097f1dd0:
            if ((int)param_2[0x16] != 0) {
LAB_1097f1dd8:
              if (bVar2) {
LAB_1097f1ddc:
                if ((int)param_2[0x16] == 1) {
                  plVar12 = (long *)*param_2;
                  plVar7 = (long *)param_2[0x20];
                  (**(code **)(*plVar7 + 0x38))(plVar7,&uStack_468);
                  if (((int)plVar7[2] == 0) || ((int)plVar7[2] == (int)plVar12[2])) {
                    plVar8 = param_2 + 0x19;
                    FUN_1097d979c(plVar8,alStack_a0,aiStack_6c);
                    if ((int)plVar8 != 0) {
                      iVar13 = (int)alStack_a0[0] + *(int *)((long)param_2 + 0x3c);
                      if ((int)uStack_468 <= iVar13) {
                        iVar15 = aiStack_6c[0] + (int)param_2[8];
                        if (((uStack_468._4_4_ <= iVar15) &&
                            (*(int *)((long)param_2 + 0x44) + iVar13 <=
                             (int)uStack_460 + (int)uStack_468)) &&
                           ((int)param_2[9] + iVar15 <= uStack_460._4_4_ + uStack_468._4_4_)) {
                          alStack_a0[0]._0_4_ = (int)uStack_468 + (int)alStack_a0[0];
                          aiStack_6c[0] = uStack_468._4_4_ + aiStack_6c[0];
                          if ((int)plVar7[2] == 0) {
                            (*(code *)param_1[8])
                                      (plVar12,plVar7,param_3,(int)alStack_a0[0],aiStack_6c[0]);
                          }
                          else {
                            (*(code *)param_1[9])(plVar12,plVar7,param_3);
                          }
                          goto LAB_1097f1ebc;
                        }
                      }
                    }
                  }
                  plVar12 = (long *)0x64;
                  goto LAB_1097f1ebc;
                }
              }
              goto LAB_1097f1ec4;
            }
            if (bVar3 != false) {
              iVar9 = 1;
            }
            (*(code *)param_1[7])(plVar5,iVar9,param_2 + 0x20,param_3);
LAB_1097f1ebc:
            if ((int)plVar12 == 100) goto LAB_1097f1ec4;
          }
          if ((int)plVar12 == 0) {
            if (*(int *)((long)param_2 + 0x5c) != 0) goto LAB_1097f1bec;
            plVar12 = param_1;
            FUN_1097f2144(param_1,param_2,param_3);
          }
        }
LAB_1097f200c:
        if ((int)plVar12 != 100) {
          return plVar12;
        }
      }
    }
LAB_1097f2014:
    plVar5 = param_1;
    FUN_1097f2664(param_1,param_2,param_3);
    if ((int)plVar5 == 100) {
      plVar5 = &uStack_468;
      FUN_1097e9e0c(plVar5,param_3);
      if (((int)plVar5 == 0) &&
         (FUN_1097f2828(param_1,param_2,&uStack_468,0,0), plVar5 = param_1,
         puStack_428 != auStack_420)) {
        _free();
      }
    }
  }
  return plVar5;
}



/* Entry: 1097f2144; end: 1097f24c3;  */

undefined4 * FUN_1097f2144(undefined4 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  long *plVar6;
  int iStack_f60;
  int iStack_f5c;
  int iStack_f58;
  int iStack_f54;
  undefined4 auStack_f50 [8];
  undefined8 uStack_f30;
  int iStack_f28;
  long *plStack_f20;
  undefined1 *puStack_f18;
  undefined8 uStack_f10;
  long **pplStack_f08;
  undefined1 auStack_f00 [512];
  undefined4 auStack_d00 [8];
  undefined8 uStack_ce0;
  undefined4 uStack_cd8;
  long lStack_cd0;
  undefined1 *puStack_cc8;
  undefined8 uStack_cc0;
  long *plStack_cb8;
  undefined1 auStack_cb0 [512];
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 auStack_aa8 [180];
  undefined8 uStack_7d8;
  undefined4 auStack_7d0 [16];
  undefined1 *puStack_790;
  undefined1 auStack_788 [896];
  undefined4 auStack_408 [16];
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [344];
  undefined1 auStack_268 [52];
  undefined8 uStack_234;
  undefined8 uStack_138;
  
  if (*(int *)((long)param_2 + 0x44) == *(int *)((long)param_2 + 0x54)) {
    iVar5 = (int)param_2[0xb];
    if ((int)param_2[9] == iVar5) {
      return (undefined4 *)0x0;
    }
  }
  else {
    iVar5 = (int)param_2[0xb];
  }
  auStack_f50[0] = 0;
  uStack_f30 = 0;
  pplStack_f08 = &plStack_f20;
  puStack_f18 = auStack_f00;
  plStack_f20 = (long *)0x0;
  uStack_f10 = 0x2000000000;
  iStack_f28 = 1;
  iStack_f58 = (*(int *)((long)param_2 + 0x4c) + *(int *)((long)param_2 + 0x54)) * 0x100;
  iStack_f5c = (int)param_2[10] << 8;
  iStack_f60 = *(int *)((long)param_2 + 0x4c) << 8;
  iStack_f54 = (iVar5 + (int)param_2[10]) * 0x100;
  if (*(int *)(param_3 + 0x24) == 0) {
    FUN_1097c8e80(auStack_f50,0,&iStack_f60);
  }
  else {
    auStack_d00[0] = 0;
    uStack_ce0 = 0;
    plStack_cb8 = &lStack_cd0;
    puStack_cc8 = auStack_cb0;
    lStack_cd0 = 0;
    uStack_cc0 = 0x2000000000;
    uStack_cd8 = 1;
    iVar5 = iStack_f60;
    iStack_f60 = iStack_f58;
    iStack_f58 = iVar5;
    FUN_1097c8e80(auStack_d00,0,&iStack_f60);
    lStack_cd0 = param_3 + 0x30;
    uStack_ce0 = CONCAT44(uStack_ce0._4_4_ + *(int *)(param_3 + 0x24),(undefined4)uStack_ce0);
    puVar4 = auStack_d00;
    FUN_1097c5b20(puVar4,0,auStack_f50);
    lStack_cd0 = 0;
    plVar6 = plStack_f20;
    if ((int)puVar4 != 0) goto joined_r0x0001097f2474;
  }
  lVar2 = param_2[0x5a];
  if (*(long *)(lVar2 + 0x10) == 0) {
    if (*(int *)(lVar2 + 0x20) != 0) {
      func_0x0001097c8e04(auStack_d00,*(undefined8 *)(lVar2 + 0x18));
      puVar4 = auStack_f50;
      FUN_1097c8010(puVar4,auStack_d00,auStack_f50);
      plVar6 = plStack_f20;
      if ((int)puVar4 != 0) goto joined_r0x0001097f2474;
    }
    if (iStack_f28 == 0) {
      puVar4 = auStack_408;
      func_0x0001097cbcd0(puVar4,*param_2,0,&UNK_10dffe668,auStack_f50,0);
      plVar6 = plStack_f20;
      if ((int)puVar4 == 0) {
        FUN_1097f2664(param_1,auStack_408,auStack_f50);
        FUN_1097ca284(uStack_138);
        plVar6 = plStack_f20;
        puVar4 = param_1;
      }
    }
    else {
      puVar4 = (undefined4 *)*param_2;
      (**(code **)(param_1 + 0xe))(puVar4,0,&UNK_10dffcd70,auStack_f50);
      plVar6 = plStack_f20;
    }
  }
  else {
    FUN_1097c9cdc(lVar2,auStack_408,&uStack_aac,&uStack_ab0);
    if ((int)lVar2 != 100) {
      puVar4 = auStack_7d0;
      FUN_1097e9e0c(puVar4,auStack_f50);
      if ((int)puVar4 == 0) {
        puVar4 = auStack_408;
        FUN_1097e71dc(puVar4,uStack_aac,auStack_7d0,0);
        if (puStack_790 != auStack_788) {
          _free();
        }
        if ((int)puVar4 == 0) {
          puVar4 = auStack_aa8;
          func_0x0001097cbba0(puVar4,*param_2,0,&UNK_10dffe668,auStack_408,0);
          if ((int)puVar4 == 0) {
            puVar4 = param_1;
            FUN_1097f2828(param_1,auStack_aa8,auStack_408,uStack_aac,uStack_ab0);
            FUN_1097ca284(uStack_7d8);
            uStack_7d8 = 0;
          }
        }
      }
      if (puStack_3c8 != auStack_3c0) {
        _free();
      }
      plVar6 = plStack_f20;
      if ((int)puVar4 != 100) goto joined_r0x0001097f2474;
    }
    puVar3 = param_1;
    FUN_1097f29ac(param_1,*param_2,param_2[0x5a],(long)param_2 + 0x4c);
    uVar1 = puVar3[7];
    if (uVar1 == 0) {
      puVar4 = auStack_408;
      func_0x0001097cbcd0(puVar4,*param_2,0,&UNK_10dffe668,auStack_f50,0);
      if ((int)puVar4 == 0) {
        func_0x0001097e43f4(auStack_268,puVar3);
        uStack_234 = 3;
        FUN_1097f2664(param_1,auStack_408,auStack_f50);
        func_0x0001097e434c(auStack_268);
        FUN_1097ca284(uStack_138);
        uStack_138 = 0;
        puVar4 = param_1;
      }
      FUN_1097f61ac(puVar3);
      plVar6 = plStack_f20;
    }
    else {
      plVar6 = plStack_f20;
      puVar4 = (undefined4 *)(ulong)uVar1;
      if (uVar1 == 0x66) {
        puVar4 = (undefined4 *)0x0;
      }
    }
  }
joined_r0x0001097f2474:
  while (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    _free();
  }
  return puVar4;
}



/* Entry: 1097f24c4; end: 1097f2663;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1097f24c4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_420;
  int aiStack_41c [9];
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 *puStack_3e0;
  undefined8 **ppuStack_3d8;
  undefined8 *puStack_3d0;
  undefined1 auStack_3c8 [888];
  
  lVar1 = param_2;
  FUN_1097cb460(param_2,param_3 + 4);
  if ((int)lVar1 == 0) {
    if ((*(int *)(param_3 + 0x34) == 0) || (*(int *)(param_3 + 0xc) <= *(int *)(param_3 + 4))) {
      if (*(int *)(param_2 + 0x5c) == 0) {
        aiStack_41c[1] = 0;
        uStack_3f8 = 0;
        puStack_3d0 = &uStack_3e8;
        puStack_3e0 = auStack_3c8;
        uStack_3e8 = 0;
        ppuStack_3d8 = (undefined8 **)0x2000000000;
        uStack_3f0 = 1;
        *(undefined8 *)(param_2 + 0x44) = 0;
        FUN_1097f2144(param_1,param_2,aiStack_41c + 1);
        lVar1 = param_1;
      }
      else {
        lVar1 = 0;
      }
    }
    else {
      if (((*(int *)(param_2 + 0x5c) != 0) &&
          (lVar1 = *(long *)(param_2 + 0x2d0), *(long *)(lVar1 + 0x10) != 0)) &&
         (FUN_1097c9cdc(lVar1,aiStack_41c + 1,&uStack_420,aiStack_41c), (int)lVar1 == 0)) {
        if (aiStack_41c[0] == (int)param_5) {
          lVar1 = param_3;
          FUN_1097e71dc(param_3,param_4,aiStack_41c + 1,uStack_420);
          if (ppuStack_3d8 != &puStack_3d0) {
            _free();
          }
          if ((int)lVar1 != 0) {
            return lVar1;
          }
          uVar3 = *(undefined8 *)(param_2 + 0x2d0);
          uVar2 = uVar3;
          func_0x0001097ca490();
          *(undefined8 *)(param_2 + 0x2d0) = uVar2;
          FUN_1097ca284(uVar3);
          lVar1 = param_2;
          FUN_1097cb460(param_2,param_3 + 4);
          if ((int)lVar1 != 0) {
            return lVar1;
          }
          param_4 = 0;
        }
        else if (ppuStack_3d8 != &puStack_3d0) {
          _free();
        }
      }
      FUN_1097f2828(param_1,param_2,param_3,param_4,param_5);
      lVar1 = param_1;
    }
  }
  return lVar1;
}



/* Entry: 1097f2664; end: 1097f2827;  */

/* WARNING: Type propagation algorithm not settling */

code ** FUN_1097f2664(long param_1,long param_2,long param_3,int *param_4,code **param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code *pcVar8;
  undefined4 uVar9;
  code **ppcVar10;
  code **ppcVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  code **ppcVar16;
  int iVar17;
  code *pcStack_3470;
  undefined8 uStack_3468;
  undefined4 uStack_3460;
  undefined8 uStack_3448;
  undefined8 uStack_3440;
  undefined4 uStack_3438;
  undefined1 *puStack_3430;
  undefined1 auStack_3428 [904];
  code *pcStack_30a0;
  undefined8 uStack_3098;
  undefined4 uStack_3090;
  undefined8 uStack_308c;
  undefined8 uStack_3084;
  undefined8 *puStack_3078;
  undefined8 uStack_3070;
  undefined4 uStack_3068;
  undefined1 *puStack_3060;
  undefined1 auStack_3058 [904];
  undefined8 uStack_2cd0;
  undefined8 uStack_2cc8;
  code *apcStack_2cc0 [90];
  undefined8 uStack_29f0;
  code *apcStack_2968 [516];
  long lStack_1948;
  int iStack_18e8;
  int iStack_18e4;
  int iStack_18e0;
  int iStack_18dc;
  code *pcStack_18d8;
  code *pcStack_18d0;
  int iStack_18c0;
  int iStack_18bc;
  int iStack_18b8;
  int iStack_18b4;
  undefined8 uStack_18b0;
  undefined1 *puStack_18a8;
  undefined8 uStack_18a0;
  undefined8 *puStack_1898;
  undefined1 auStack_1890 [2048];
  undefined4 uStack_1090;
  code *apcStack_1088 [516];
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = *(int *)(param_2 + 0x4c) << 8;
  iVar17 = *(int *)(param_2 + 0x50) << 8;
  iVar1 = (*(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x4c)) * 0x100;
  iVar2 = (*(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x50)) * 0x100;
  ppcVar10 = *(code ***)(param_2 + 0x2d0);
  iStack_18e8 = iVar13;
  iStack_18e4 = iVar17;
  iStack_18e0 = iVar1;
  iStack_18dc = iVar2;
  func_0x0001097ed40c(&iStack_18e8,apcStack_1088);
  ppcVar5 = apcStack_1088;
  ppcVar6 = (code **)&iStack_18e8;
  FUN_1097c948c();
  if ((int)ppcVar10 == 0) {
    ppcVar11 = (code **)0x64;
  }
  else {
    pcStack_18d8 = FUN_1097ed8fc;
    pcStack_18d0 = FUN_1097ed92c;
    puStack_18a8 = auStack_1890;
    puStack_1898 = &uStack_18b0;
    uStack_18b0 = 0;
    uStack_18a0 = 0x2a00000000;
    uStack_1090 = 0;
    plVar12 = (long *)(param_3 + 0x30);
    iStack_18c0 = iVar13;
    iStack_18bc = iVar17;
    iStack_18b8 = iVar1;
    iStack_18b4 = iVar2;
    do {
      if (0 < (int)plVar12[2]) {
        lVar15 = 0;
        ppcVar10 = (code **)plVar12[1];
        do {
          ppcVar11 = &pcStack_18d8;
          ppcVar6 = (code **)0x1;
          ppcVar5 = ppcVar10;
          FUN_1097ed7b4();
          if ((int)ppcVar11 != 0) goto LAB_1097f27d8;
          lVar15 = lVar15 + 1;
          ppcVar10 = ppcVar10 + 2;
        } while (lVar15 < (int)plVar12[2]);
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
    ppcVar11 = apcStack_1088;
    ppcVar6 = (code **)0x0;
    param_4 = (int *)0x0;
    (**(code **)(param_1 + 0x60))(ppcVar11,param_2);
    if ((int)ppcVar11 == 0) {
      ppcVar11 = &pcStack_18d8;
      (*pcStack_18d0)(ppcVar11,apcStack_1088);
    }
    ppcVar5 = ppcVar11;
    (**(code **)(param_1 + 0x68))(apcStack_1088);
LAB_1097f27d8:
    ppcVar10 = &pcStack_18d8;
    (*pcStack_18d8)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppcVar11;
  }
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1948 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar16 = (code **)ppcVar5[0x5a];
  ppcVar11 = ppcVar5;
  ppcVar7 = ppcVar6;
  if (*(int *)((long)ppcVar5 + 0x5c) == 0) {
    ppcVar4 = ppcVar16;
    FUN_1097f2e04();
    if (((int)ppcVar4 != 0) && (*(int *)(ppcVar16 + 4) < 2)) goto LAB_1097f28b4;
LAB_1097f28ac:
    ppcVar6 = ppcVar11;
    ppcVar11 = (code **)0x64;
  }
  else {
    ppcVar4 = ppcVar10;
    if (ppcVar16[2] != (code *)0x0) goto LAB_1097f28ac;
LAB_1097f28b4:
    ppcVar4 = (code **)(ulong)*(uint *)((long)ppcVar5 + 0x4c);
    ppcVar7 = (code **)(ulong)(*(int *)((long)ppcVar5 + 0x54) + *(uint *)((long)ppcVar5 + 0x4c));
    param_4 = (int *)(ulong)(uint)(*(int *)(ppcVar5 + 0xb) + *(int *)(ppcVar5 + 10));
    if ((int)param_5 == 1) {
      FUN_1097daf08();
      ppcVar11 = ppcVar4;
      FUN_1097dad18();
    }
    else if ((int)param_5 == 4) {
      FUN_1097fa6a0();
      ppcVar11 = ppcVar4;
      FUN_1097fa430();
    }
    else {
      FUN_1097f8a68();
      ppcVar11 = ppcVar4;
      FUN_1097f87c4();
    }
    if ((int)ppcVar11 == 0) {
      ppcVar11 = apcStack_2968;
      param_4 = (int *)0x0;
      (*ppcVar10[0xc])(ppcVar11,ppcVar5);
      ppcVar7 = param_5;
      if ((int)ppcVar11 == 0) {
        ppcVar11 = ppcVar4;
        (*ppcVar4[1])(ppcVar4,apcStack_2968);
        ppcVar7 = param_5;
      }
      ppcVar6 = ppcVar11;
      (*ppcVar10[0xd])(apcStack_2968);
    }
    (**ppcVar4)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1948) {
    return ppcVar11;
  }
  ___stack_chk_fail();
  FUN_1097f6978(ppcVar6,0x2000,param_4[2],param_4[3],&UNK_10dffcd70);
  iVar13 = (int)*(undefined8 *)param_4;
  iVar17 = (int)((ulong)*(undefined8 *)param_4 >> 0x20);
  uStack_308c = CONCAT44(iVar17 << 8,iVar13 << 8);
  uStack_3084 = CONCAT44(((int)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20) + iVar17) * 0x100,
                         ((int)*(undefined8 *)(param_4 + 2) + iVar13) * 0x100);
  uStack_3068 = 0x20;
  uStack_3090 = 0x80000000;
  uStack_3098 = 0x800000007fffffff;
  pcStack_30a0 = (code *)0x7fffffff00000000;
  puStack_3078 = &uStack_2cd0;
  uStack_3070 = 1;
  pcVar8 = ppcVar7[2];
  ppcVar5 = (code **)(pcVar8 + 8);
  puStack_3060 = auStack_3058;
  uStack_2cd0 = uStack_308c;
  uStack_2cc8 = uStack_3084;
  FUN_1097dbaa0(*(undefined8 *)(pcVar8 + 0x238),ppcVar5,&pcStack_30a0);
  if ((int)ppcVar5 == 0) {
    uStack_3070 = uStack_3070 & 0xffffffff00000000;
    iVar13 = *(int *)(pcVar8 + 0x240);
    uVar9 = *(undefined4 *)(pcVar8 + 0x230);
    if (ppcVar7[3] == (code *)0x0) {
LAB_1097f2ad8:
      puStack_3078 = (undefined8 *)0x0;
      uStack_3070 = uStack_3070 & 0xffffffff00000000;
      lVar15 = *(long *)(pcVar8 + 0x248);
      if (lVar15 != 0) {
        do {
          if (*(int *)(lVar15 + 0x240) == iVar13) {
            uStack_3438 = 0x20;
            uStack_3460 = 0x80000000;
            uStack_3468 = 0x800000007fffffff;
            pcStack_3470 = (code *)0x7fffffff00000000;
            uStack_3440 = 0;
            uStack_3448 = 0;
            ppcVar5 = (code **)(lVar15 + 8);
            puStack_3430 = auStack_3428;
            FUN_1097dbaa0(*(undefined8 *)(lVar15 + 0x238),ppcVar5,&pcStack_3470);
            if ((int)ppcVar5 != 0) {
              if (puStack_3430 != auStack_3428) {
                _free();
              }
              goto LAB_1097f2d80;
            }
            ppcVar5 = &pcStack_30a0;
            FUN_1097e71dc(ppcVar5,uVar9,&pcStack_3470,*(undefined4 *)(lVar15 + 0x230));
            if (puStack_3430 != auStack_3428) {
              _free();
            }
            if ((int)ppcVar5 != 0) goto LAB_1097f2d80;
            uVar9 = 0;
          }
          lVar15 = *(long *)(lVar15 + 0x248);
        } while (lVar15 != 0);
      }
      FUN_1097ea808(&pcStack_30a0,-*param_4,-param_4[1]);
      ppcVar5 = apcStack_2cc0;
      func_0x0001097cbba0(ppcVar5,ppcVar6,0xc,&UNK_10dffe710,&pcStack_30a0,0);
      if ((int)ppcVar5 == 0) {
        ppcVar5 = ppcVar4;
        FUN_1097f2828(ppcVar4,apcStack_2cc0,&pcStack_30a0,uVar9,iVar13);
        FUN_1097ca284(uStack_29f0);
        uStack_29f0 = 0;
        if (puStack_3060 != auStack_3058) {
          _free();
        }
        if ((int)ppcVar5 != 0) goto LAB_1097f2d94;
        uStack_3068 = 0x20;
        uStack_3090 = 0x80000000;
        uStack_3098 = 0x800000007fffffff;
        pcStack_30a0 = (code *)0x7fffffff00000000;
        puStack_3078 = &uStack_2cd0;
        uStack_3070 = 1;
        uStack_3084 = uStack_2cc8;
        uStack_308c = uStack_2cd0;
        bVar3 = *(int *)(ppcVar7[2] + 0x240) == 0;
        lVar15 = *(long *)(ppcVar7[2] + 0x248);
        if (lVar15 == 0) {
          return ppcVar6;
        }
        puStack_3060 = auStack_3058;
        do {
          if (*(uint *)(lVar15 + 0x240) == (uint)bVar3) {
            if (uStack_3070._4_4_ == 0) {
              ppcVar5 = (code **)(lVar15 + 8);
              FUN_1097dbaa0(*(undefined8 *)(lVar15 + 0x238),ppcVar5,&pcStack_30a0);
              uVar9 = *(undefined4 *)(lVar15 + 0x230);
              puStack_3078 = (undefined8 *)0x0;
              uStack_3070 = uStack_3070 & 0xffffffff00000000;
              iVar13 = (int)ppcVar5;
            }
            else {
              uStack_3438 = 0x20;
              uStack_3460 = 0x80000000;
              uStack_3468 = 0x800000007fffffff;
              pcStack_3470 = (code *)0x7fffffff00000000;
              uStack_3440 = 0;
              uStack_3448 = 0;
              ppcVar5 = (code **)(lVar15 + 8);
              puStack_3430 = auStack_3428;
              FUN_1097dbaa0(*(undefined8 *)(lVar15 + 0x238),ppcVar5,&pcStack_3470);
              if ((int)ppcVar5 == 0) {
                ppcVar5 = &pcStack_30a0;
                FUN_1097e71dc(ppcVar5,uVar9,&pcStack_3470,*(undefined4 *)(lVar15 + 0x230));
              }
              if (puStack_3430 != auStack_3428) {
                _free();
              }
              uVar9 = 0;
              iVar13 = (int)ppcVar5;
            }
            if (iVar13 != 0) goto LAB_1097f2d94;
          }
          lVar15 = *(long *)(lVar15 + 0x248);
        } while (lVar15 != 0);
        if (uStack_3070._4_4_ == 0) {
          return ppcVar6;
        }
        FUN_1097ea808(&pcStack_30a0,-*param_4,-param_4[1]);
        ppcVar5 = apcStack_2cc0;
        func_0x0001097cbba0(ppcVar5,ppcVar6,3,&UNK_10dffe710,&pcStack_30a0,0);
        if ((int)ppcVar5 == 0) {
          FUN_1097f2828(ppcVar4,apcStack_2cc0,&pcStack_30a0,uVar9,bVar3);
          FUN_1097ca284(uStack_29f0);
          uStack_29f0 = 0;
          if (puStack_3060 != auStack_3058) {
            _free();
          }
          ppcVar5 = ppcVar4;
          if ((int)ppcVar4 == 0) {
            return ppcVar6;
          }
          goto LAB_1097f2d94;
        }
      }
    }
    else {
      func_0x0001097c8e04(apcStack_2cc0,ppcVar7[3],*(undefined4 *)(ppcVar7 + 4));
      ppcVar5 = &pcStack_3470;
      FUN_1097e9e0c(ppcVar5,apcStack_2cc0);
      if ((int)ppcVar5 == 0) {
        ppcVar5 = &pcStack_30a0;
        FUN_1097e71dc(ppcVar5,uVar9,&pcStack_3470,0);
        if (puStack_3430 != auStack_3428) {
          _free();
        }
        if ((int)ppcVar5 == 0) {
          uVar9 = 0;
          goto LAB_1097f2ad8;
        }
      }
    }
  }
LAB_1097f2d80:
  if (puStack_3060 != auStack_3058) {
    _free();
  }
LAB_1097f2d94:
  FUN_1097f61ac(ppcVar6);
  uVar14 = (uint)ppcVar5;
  if (uVar14 < 0x2d) {
    FUN_1097f6584(ppcVar5);
  }
  else {
    ppcVar6 = (code **)&UNK_10e0003b8;
    if (uVar14 != 0x66) {
      ppcVar6 = (code **)&DAT_10dffecb8;
    }
    ppcVar5 = (code **)&UNK_10e000248;
    if (uVar14 != 100) {
      ppcVar5 = ppcVar6;
    }
  }
  return ppcVar5;
}



/* Entry: 1097f2828; end: 1097f29ab;  */

undefined8 *
FUN_1097f2828(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
             undefined8 *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined4 uStack_1b70;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined4 uStack_1b48;
  undefined1 *puStack_1b40;
  undefined1 auStack_1b38 [904];
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined4 uStack_17a0;
  undefined8 uStack_179c;
  undefined8 uStack_1794;
  undefined8 *puStack_1788;
  undefined8 uStack_1780;
  undefined4 uStack_1778;
  undefined1 *puStack_1770;
  undefined1 auStack_1768 [904];
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 auStack_13d0 [90];
  undefined8 uStack_1100;
  undefined8 auStack_1078 [516];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)param_2[0x5a];
  puVar6 = param_2;
  puVar3 = param_3;
  if (*(int *)((long)param_2 + 0x5c) == 0) {
    puVar2 = puVar9;
    FUN_1097f2e04();
    if (((int)puVar2 != 0) && (*(int *)(puVar9 + 4) < 2)) goto LAB_1097f28b4;
LAB_1097f28ac:
    param_3 = puVar6;
    puVar6 = (undefined8 *)0x64;
  }
  else {
    puVar2 = param_1;
    if (puVar9[2] != 0) goto LAB_1097f28ac;
LAB_1097f28b4:
    puVar2 = (undefined8 *)(ulong)*(uint *)((long)param_2 + 0x4c);
    puVar3 = (undefined8 *)(ulong)(*(int *)((long)param_2 + 0x54) + *(uint *)((long)param_2 + 0x4c))
    ;
    param_4 = (int *)(ulong)(uint)(*(int *)(param_2 + 0xb) + *(int *)(param_2 + 10));
    if ((int)param_5 == 1) {
      FUN_1097daf08();
      puVar6 = puVar2;
      FUN_1097dad18();
    }
    else if ((int)param_5 == 4) {
      FUN_1097fa6a0();
      puVar6 = puVar2;
      FUN_1097fa430();
    }
    else {
      FUN_1097f8a68();
      puVar6 = puVar2;
      FUN_1097f87c4();
    }
    if ((int)puVar6 == 0) {
      puVar6 = auStack_1078;
      param_4 = (int *)0x0;
      (*(code *)param_1[0xc])(puVar6,param_2);
      puVar3 = param_5;
      if ((int)puVar6 == 0) {
        puVar6 = puVar2;
        (*(code *)puVar2[1])(puVar2,auStack_1078);
        puVar3 = param_5;
      }
      param_3 = puVar6;
      (*(code *)param_1[0xd])(auStack_1078);
    }
    (*(code *)*puVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_1097f6978(param_3,0x2000,param_4[2],param_4[3],&UNK_10dffcd70);
  iVar7 = (int)*(undefined8 *)param_4;
  iVar10 = (int)((ulong)*(undefined8 *)param_4 >> 0x20);
  uStack_179c = CONCAT44(iVar10 << 8,iVar7 << 8);
  uStack_1794 = CONCAT44(((int)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20) + iVar10) * 0x100,
                         ((int)*(undefined8 *)(param_4 + 2) + iVar7) * 0x100);
  uStack_1778 = 0x20;
  uStack_17a0 = 0x80000000;
  uStack_17a8 = 0x800000007fffffff;
  uStack_17b0 = 0x7fffffff00000000;
  puStack_1788 = &uStack_13e0;
  uStack_1780 = 1;
  lVar4 = puVar3[2];
  puVar6 = (undefined8 *)(lVar4 + 8);
  puStack_1770 = auStack_1768;
  uStack_13e0 = uStack_179c;
  uStack_13d8 = uStack_1794;
  FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar6,&uStack_17b0);
  if ((int)puVar6 == 0) {
    uStack_1780 = uStack_1780 & 0xffffffff00000000;
    iVar7 = *(int *)(lVar4 + 0x240);
    uVar5 = *(undefined4 *)(lVar4 + 0x230);
    if (puVar3[3] == 0) {
LAB_1097f2ad8:
      puStack_1788 = (undefined8 *)0x0;
      uStack_1780 = uStack_1780 & 0xffffffff00000000;
      lVar4 = *(long *)(lVar4 + 0x248);
      if (lVar4 != 0) {
        do {
          if (*(int *)(lVar4 + 0x240) == iVar7) {
            uStack_1b48 = 0x20;
            uStack_1b70 = 0x80000000;
            uStack_1b78 = 0x800000007fffffff;
            uStack_1b80 = 0x7fffffff00000000;
            uStack_1b50 = 0;
            uStack_1b58 = 0;
            puVar6 = (undefined8 *)(lVar4 + 8);
            puStack_1b40 = auStack_1b38;
            FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar6,&uStack_1b80);
            if ((int)puVar6 != 0) {
              if (puStack_1b40 != auStack_1b38) {
                _free();
              }
              goto LAB_1097f2d80;
            }
            puVar6 = &uStack_17b0;
            FUN_1097e71dc(puVar6,uVar5,&uStack_1b80,*(undefined4 *)(lVar4 + 0x230));
            if (puStack_1b40 != auStack_1b38) {
              _free();
            }
            if ((int)puVar6 != 0) goto LAB_1097f2d80;
            uVar5 = 0;
          }
          lVar4 = *(long *)(lVar4 + 0x248);
        } while (lVar4 != 0);
      }
      FUN_1097ea808(&uStack_17b0,-*param_4,-param_4[1]);
      puVar6 = auStack_13d0;
      func_0x0001097cbba0(puVar6,param_3,0xc,&UNK_10dffe710,&uStack_17b0,0);
      if ((int)puVar6 == 0) {
        puVar6 = puVar2;
        FUN_1097f2828(puVar2,auStack_13d0,&uStack_17b0,uVar5,iVar7);
        FUN_1097ca284(uStack_1100);
        uStack_1100 = 0;
        if (puStack_1770 != auStack_1768) {
          _free();
        }
        if ((int)puVar6 != 0) goto LAB_1097f2d94;
        uStack_1778 = 0x20;
        uStack_17a0 = 0x80000000;
        uStack_17a8 = 0x800000007fffffff;
        uStack_17b0 = 0x7fffffff00000000;
        puStack_1788 = &uStack_13e0;
        uStack_1780 = 1;
        uStack_1794 = uStack_13d8;
        uStack_179c = uStack_13e0;
        bVar1 = *(int *)(puVar3[2] + 0x240) == 0;
        lVar4 = *(long *)(puVar3[2] + 0x248);
        if (lVar4 == 0) {
          return param_3;
        }
        puStack_1770 = auStack_1768;
        do {
          if (*(uint *)(lVar4 + 0x240) == (uint)bVar1) {
            if (uStack_1780._4_4_ == 0) {
              puVar6 = (undefined8 *)(lVar4 + 8);
              FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar6,&uStack_17b0);
              uVar5 = *(undefined4 *)(lVar4 + 0x230);
              puStack_1788 = (undefined8 *)0x0;
              uStack_1780 = uStack_1780 & 0xffffffff00000000;
              iVar7 = (int)puVar6;
            }
            else {
              uStack_1b48 = 0x20;
              uStack_1b70 = 0x80000000;
              uStack_1b78 = 0x800000007fffffff;
              uStack_1b80 = 0x7fffffff00000000;
              uStack_1b50 = 0;
              uStack_1b58 = 0;
              puVar6 = (undefined8 *)(lVar4 + 8);
              puStack_1b40 = auStack_1b38;
              FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar6,&uStack_1b80);
              if ((int)puVar6 == 0) {
                puVar6 = &uStack_17b0;
                FUN_1097e71dc(puVar6,uVar5,&uStack_1b80,*(undefined4 *)(lVar4 + 0x230));
              }
              if (puStack_1b40 != auStack_1b38) {
                _free();
              }
              uVar5 = 0;
              iVar7 = (int)puVar6;
            }
            if (iVar7 != 0) goto LAB_1097f2d94;
          }
          lVar4 = *(long *)(lVar4 + 0x248);
        } while (lVar4 != 0);
        if (uStack_1780._4_4_ == 0) {
          return param_3;
        }
        FUN_1097ea808(&uStack_17b0,-*param_4,-param_4[1]);
        puVar6 = auStack_13d0;
        func_0x0001097cbba0(puVar6,param_3,3,&UNK_10dffe710,&uStack_17b0,0);
        if ((int)puVar6 == 0) {
          FUN_1097f2828(puVar2,auStack_13d0,&uStack_17b0,uVar5,bVar1);
          FUN_1097ca284(uStack_1100);
          uStack_1100 = 0;
          if (puStack_1770 != auStack_1768) {
            _free();
          }
          puVar6 = puVar2;
          if ((int)puVar2 == 0) {
            return param_3;
          }
          goto LAB_1097f2d94;
        }
      }
    }
    else {
      func_0x0001097c8e04(auStack_13d0,puVar3[3],*(undefined4 *)(puVar3 + 4));
      puVar6 = &uStack_1b80;
      FUN_1097e9e0c(puVar6,auStack_13d0);
      if ((int)puVar6 == 0) {
        puVar6 = &uStack_17b0;
        FUN_1097e71dc(puVar6,uVar5,&uStack_1b80,0);
        if (puStack_1b40 != auStack_1b38) {
          _free();
        }
        if ((int)puVar6 == 0) {
          uVar5 = 0;
          goto LAB_1097f2ad8;
        }
      }
    }
  }
LAB_1097f2d80:
  if (puStack_1770 != auStack_1768) {
    _free();
  }
LAB_1097f2d94:
  FUN_1097f61ac(param_3);
  uVar8 = (uint)puVar6;
  if (uVar8 < 0x2d) {
    FUN_1097f6584(puVar6);
  }
  else {
    puVar3 = (undefined8 *)&UNK_10e0003b8;
    if (uVar8 != 0x66) {
      puVar3 = (undefined8 *)&DAT_10dffecb8;
    }
    puVar6 = (undefined8 *)&UNK_10e000248;
    if (uVar8 != 100) {
      puVar6 = puVar3;
    }
  }
  return puVar6;
}



/* Entry: 1097f29ac; end: 1097f2e03;  */

undefined8 * FUN_1097f29ac(undefined8 *param_1,undefined8 *param_2,long param_3,int *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined4 uStack_af0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined4 uStack_ac8;
  undefined1 *puStack_ac0;
  undefined1 auStack_ab8 [904];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined8 uStack_71c;
  undefined8 uStack_714;
  undefined8 *puStack_708;
  undefined8 uStack_700;
  undefined4 uStack_6f8;
  undefined1 *puStack_6f0;
  undefined1 auStack_6e8 [904];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 auStack_350 [90];
  undefined8 uStack_80;
  
  FUN_1097f6978(param_2,0x2000,param_4[2],param_4[3],&UNK_10dffcd70);
  iVar6 = (int)*(undefined8 *)param_4;
  iVar8 = (int)((ulong)*(undefined8 *)param_4 >> 0x20);
  uStack_71c = CONCAT44(iVar8 << 8,iVar6 << 8);
  uStack_714 = CONCAT44(((int)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20) + iVar8) * 0x100,
                        ((int)*(undefined8 *)(param_4 + 2) + iVar6) * 0x100);
  uStack_6f8 = 0x20;
  uStack_720 = 0x80000000;
  uStack_728 = 0x800000007fffffff;
  uStack_730 = 0x7fffffff00000000;
  puStack_708 = &uStack_360;
  uStack_700 = 1;
  lVar4 = *(long *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(lVar4 + 8);
  puStack_6f0 = auStack_6e8;
  uStack_360 = uStack_71c;
  uStack_358 = uStack_714;
  FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar3,&uStack_730);
  if ((int)puVar3 == 0) {
    uStack_700 = uStack_700 & 0xffffffff00000000;
    iVar6 = *(int *)(lVar4 + 0x240);
    uVar5 = *(undefined4 *)(lVar4 + 0x230);
    if (*(long *)(param_3 + 0x18) == 0) {
LAB_1097f2ad8:
      puStack_708 = (undefined8 *)0x0;
      uStack_700 = uStack_700 & 0xffffffff00000000;
      lVar4 = *(long *)(lVar4 + 0x248);
      if (lVar4 != 0) {
        do {
          if (*(int *)(lVar4 + 0x240) == iVar6) {
            uStack_ac8 = 0x20;
            uStack_af0 = 0x80000000;
            uStack_af8 = 0x800000007fffffff;
            uStack_b00 = 0x7fffffff00000000;
            uStack_ad0 = 0;
            uStack_ad8 = 0;
            puVar3 = (undefined8 *)(lVar4 + 8);
            puStack_ac0 = auStack_ab8;
            FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar3,&uStack_b00);
            if ((int)puVar3 != 0) {
              if (puStack_ac0 != auStack_ab8) {
                _free();
              }
              goto LAB_1097f2d80;
            }
            puVar3 = &uStack_730;
            FUN_1097e71dc(puVar3,uVar5,&uStack_b00,*(undefined4 *)(lVar4 + 0x230));
            if (puStack_ac0 != auStack_ab8) {
              _free();
            }
            if ((int)puVar3 != 0) goto LAB_1097f2d80;
            uVar5 = 0;
          }
          lVar4 = *(long *)(lVar4 + 0x248);
        } while (lVar4 != 0);
      }
      FUN_1097ea808(&uStack_730,-*param_4,-param_4[1]);
      puVar3 = auStack_350;
      func_0x0001097cbba0(puVar3,param_2,0xc,&UNK_10dffe710,&uStack_730,0);
      if ((int)puVar3 == 0) {
        puVar3 = param_1;
        FUN_1097f2828(param_1,auStack_350,&uStack_730,uVar5,iVar6);
        FUN_1097ca284(uStack_80);
        uStack_80 = 0;
        if (puStack_6f0 != auStack_6e8) {
          _free();
        }
        if ((int)puVar3 != 0) goto LAB_1097f2d94;
        uStack_6f8 = 0x20;
        uStack_720 = 0x80000000;
        uStack_728 = 0x800000007fffffff;
        uStack_730 = 0x7fffffff00000000;
        puStack_708 = &uStack_360;
        uStack_700 = 1;
        uStack_714 = uStack_358;
        uStack_71c = uStack_360;
        bVar2 = *(int *)(*(long *)(param_3 + 0x10) + 0x240) == 0;
        lVar4 = *(long *)(*(long *)(param_3 + 0x10) + 0x248);
        if (lVar4 == 0) {
          return param_2;
        }
        puStack_6f0 = auStack_6e8;
        do {
          if (*(uint *)(lVar4 + 0x240) == (uint)bVar2) {
            if (uStack_700._4_4_ == 0) {
              puVar3 = (undefined8 *)(lVar4 + 8);
              FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar3,&uStack_730);
              uVar5 = *(undefined4 *)(lVar4 + 0x230);
              puStack_708 = (undefined8 *)0x0;
              uStack_700 = uStack_700 & 0xffffffff00000000;
              iVar6 = (int)puVar3;
            }
            else {
              uStack_ac8 = 0x20;
              uStack_af0 = 0x80000000;
              uStack_af8 = 0x800000007fffffff;
              uStack_b00 = 0x7fffffff00000000;
              uStack_ad0 = 0;
              uStack_ad8 = 0;
              puVar3 = (undefined8 *)(lVar4 + 8);
              puStack_ac0 = auStack_ab8;
              FUN_1097dbaa0(*(undefined8 *)(lVar4 + 0x238),puVar3,&uStack_b00);
              if ((int)puVar3 == 0) {
                puVar3 = &uStack_730;
                FUN_1097e71dc(puVar3,uVar5,&uStack_b00,*(undefined4 *)(lVar4 + 0x230));
              }
              if (puStack_ac0 != auStack_ab8) {
                _free();
              }
              uVar5 = 0;
              iVar6 = (int)puVar3;
            }
            if (iVar6 != 0) goto LAB_1097f2d94;
          }
          lVar4 = *(long *)(lVar4 + 0x248);
        } while (lVar4 != 0);
        if (uStack_700._4_4_ == 0) {
          return param_2;
        }
        FUN_1097ea808(&uStack_730,-*param_4,-param_4[1]);
        puVar3 = auStack_350;
        func_0x0001097cbba0(puVar3,param_2,3,&UNK_10dffe710,&uStack_730,0);
        if ((int)puVar3 == 0) {
          FUN_1097f2828(param_1,auStack_350,&uStack_730,uVar5,bVar2);
          FUN_1097ca284(uStack_80);
          uStack_80 = 0;
          if (puStack_6f0 != auStack_6e8) {
            _free();
          }
          puVar3 = param_1;
          if ((int)param_1 == 0) {
            return param_2;
          }
          goto LAB_1097f2d94;
        }
      }
    }
    else {
      func_0x0001097c8e04(auStack_350,*(long *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x20));
      puVar3 = &uStack_b00;
      FUN_1097e9e0c(puVar3,auStack_350);
      if ((int)puVar3 == 0) {
        puVar3 = &uStack_730;
        FUN_1097e71dc(puVar3,uVar5,&uStack_b00,0);
        if (puStack_ac0 != auStack_ab8) {
          _free();
        }
        if ((int)puVar3 == 0) {
          uVar5 = 0;
          goto LAB_1097f2ad8;
        }
      }
    }
  }
LAB_1097f2d80:
  if (puStack_6f0 != auStack_6e8) {
    _free();
  }
LAB_1097f2d94:
  FUN_1097f61ac(param_2);
  uVar7 = (uint)puVar3;
  if (uVar7 < 0x2d) {
    FUN_1097f6584(puVar3);
  }
  else {
    puVar1 = (undefined8 *)&UNK_10e0003b8;
    if (uVar7 != 0x66) {
      puVar1 = (undefined8 *)&DAT_10dffecb8;
    }
    puVar3 = (undefined8 *)&UNK_10e000248;
    if (uVar7 != 100) {
      puVar3 = puVar1;
    }
  }
  return puVar3;
}



/* Entry: 1097f2e04; end: 1097f33d3;  */

undefined8 FUN_1097f2e04(long param_1)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return 0;
    }
    uVar1 = (ulong)*(uint *)(param_1 + 0x20);
    if (0 < (int)*(uint *)(param_1 + 0x20)) {
      pauVar2 = *(undefined1 (**) [16])(param_1 + 0x18);
      do {
        auVar3 = NEON_ext(*pauVar2,*pauVar2,8,1);
        if (((char)*(undefined8 *)*pauVar2 != '\0' || auVar3[0] != '\0') ||
            ((char)((ulong)*(undefined8 *)*pauVar2 >> 0x20) != '\0' || auVar3[4] != '\0')) {
          return 0;
        }
        uVar1 = uVar1 - 1;
        pauVar2 = pauVar2 + 1;
      } while (uVar1 != 0);
    }
  }
  return 1;
}



/* Entry: 1097f33d4; end: 1097f35ef;  */

bool FUN_1097f33d4(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = *param_5;
  iStack_c = *param_1;
  if (((((iVar1 <= iStack_c) && (iStack_c <= param_5[2])) && (param_5[1] <= param_1[1])) &&
      (param_1[1] <= param_5[3])) ||
     (((((iVar2 = *param_2, iVar1 <= iVar2 && (iVar2 <= param_5[2])) &&
        ((param_5[1] <= param_2[1] && (param_2[1] <= param_5[3])))) ||
       (((iVar3 = *param_3, iVar1 <= iVar3 && (iVar3 <= param_5[2])) &&
        ((param_5[1] <= param_3[1] && (param_3[1] <= param_5[3])))))) ||
      ((((iVar4 = *param_4, iVar1 <= iVar4 && (iVar4 <= param_5[2])) && (param_5[1] <= param_4[1]))
       && (param_4[1] <= param_5[3])))))) {
    return true;
  }
  piVar6 = &iStack_10;
  piVar9 = &iStack_10;
  piVar7 = &iStack_10;
  iStack_10 = param_1[1];
  iStack_8 = iStack_10;
  iStack_4 = iStack_c;
  if (iVar2 < iStack_c) {
    piVar8 = &iStack_4;
LAB_1097f34d0:
    *piVar8 = iVar2;
  }
  else if (iStack_c < iVar2) {
    piVar8 = &iStack_c;
    goto LAB_1097f34d0;
  }
  iVar2 = param_2[1];
  if (iVar2 < iStack_10) {
    piVar6 = &iStack_8;
LAB_1097f34f0:
    *piVar6 = iVar2;
  }
  else if (iStack_10 < iVar2) goto LAB_1097f34f0;
  if (iVar3 < iStack_4) {
    piVar6 = &iStack_4;
LAB_1097f3518:
    *piVar6 = iVar3;
  }
  else if (iStack_c < iVar3) {
    piVar6 = &iStack_c;
    goto LAB_1097f3518;
  }
  iVar2 = param_3[1];
  if (iVar2 < iStack_8) {
    piVar9 = &iStack_8;
LAB_1097f3544:
    *piVar9 = iVar2;
  }
  else if (iStack_10 < iVar2) goto LAB_1097f3544;
  if (iVar4 < iStack_4) {
    piVar6 = &iStack_4;
LAB_1097f356c:
    *piVar6 = iVar4;
  }
  else if (iStack_c < iVar4) {
    piVar6 = &iStack_c;
    goto LAB_1097f356c;
  }
  iVar2 = param_4[1];
  if (iVar2 < iStack_8) {
    piVar7 = &iStack_8;
  }
  else if (iVar2 <= iStack_10) goto LAB_1097f359c;
  *piVar7 = iVar2;
LAB_1097f359c:
  if (((iVar1 < iStack_c) && (iStack_4 < param_5[2])) && (param_5[1] < iStack_10)) {
    bVar5 = iStack_8 < param_5[3];
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



/* Entry: 1097f35f0; end: 1097f3743;  */

undefined8
FUN_1097f35f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5,
             int *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  
  if ((((*param_4 != *param_5) || (param_4[1] != param_5[1])) || (*param_6 != *param_7)) ||
     (param_6[1] != param_7[1])) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar12 = *(undefined8 *)param_4;
    param_1[2] = uVar12;
    uVar7 = *(undefined8 *)param_5;
    param_1[3] = uVar7;
    uVar6 = *(undefined8 *)param_6;
    param_1[4] = uVar6;
    uVar5 = *(undefined8 *)param_7;
    param_1[5] = uVar5;
    iVar1 = *param_4;
    iVar9 = (int)((ulong)uVar7 >> 0x20);
    iVar2 = *param_5;
    iVar10 = (int)((ulong)uVar6 >> 0x20);
    iVar8 = (int)((ulong)uVar5 >> 0x20);
    iVar11 = (int)uVar12;
    iVar13 = (int)((ulong)uVar12 >> 0x20);
    if ((iVar1 == iVar2) && (iVar3 = param_4[1], iVar3 == param_5[1])) {
      iVar4 = *param_6;
      if ((iVar1 == iVar4) && (iVar3 == param_6[1])) {
        if ((iVar1 == *param_7) && (iVar3 == param_7[1])) {
          return 0;
        }
        *(int *)(param_1 + 6) = (int)uVar5 - iVar11;
        *(int *)((long)param_1 + 0x34) = iVar8 - iVar13;
        iVar4 = iVar1;
      }
      else {
        *(int *)(param_1 + 6) = (int)uVar6 - iVar11;
        *(int *)((long)param_1 + 0x34) = iVar10 - iVar13;
      }
    }
    else {
      *(int *)(param_1 + 6) = (int)uVar7 - iVar11;
      *(int *)((long)param_1 + 0x34) = iVar9 - iVar13;
      iVar4 = *param_6;
    }
    if ((((iVar4 != *param_7) || (param_6[1] != param_7[1])) ||
        (uVar6 = uVar7, iVar10 = iVar9, iVar2 != iVar4)) || (param_5[1] != param_6[1])) {
      *(int *)(param_1 + 7) = (int)uVar5 - (int)uVar6;
      *(int *)((long)param_1 + 0x3c) = iVar8 - iVar10;
      return 1;
    }
  }
  return 0;
}


