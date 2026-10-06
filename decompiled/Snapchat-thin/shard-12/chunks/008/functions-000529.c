/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109851b70; end: 109851b7f;  */

undefined8 FUN_109851b70(void)

{
  return 1;
}



/* Entry: 109851b80; end: 109851c13;  */

undefined8 FUN_109851b80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar4 + 100) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) &&
     (*(char *)(lVar2 + 100) == '\x01')) {
    lVar1 = *(long *)(lVar4 + 0x48);
    lVar4 = *(long *)(lVar4 + 0x50);
    *(undefined1 *)(lVar2 + 100) = 0;
    FUN_109851e9c(lVar2 + 0x48,lVar4 - lVar1 >> 2,&UNK_10e002ab0);
    lVar4 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar4 + 100) & 1) == 0) {
      uVar5 = (ulong)(*(long *)(lVar4 + 0x50) - (long)*(undefined4 **)(lVar4 + 0x48)) >> 2 &
              0xffffffff;
      if (uVar5 != 0) {
        puVar3 = *(undefined4 **)(lVar4 + 0x48);
        puVar6 = *(undefined4 **)(*(long *)(param_1 + 0x20) + 0x48);
        do {
          *puVar6 = *puVar3;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109851c14; end: 109851d2b;  */

void FUN_109851c14(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))();
  if (0 < (int)plVar3) {
    iVar4 = 0;
    while( true ) {
      lVar5 = *(long *)(*(long *)(param_1 + 8) + 8);
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x30))(param_2,iVar4);
      iVar2 = (int)plVar3;
      if (((iVar2 == -1 || 4 < iVar2) ||
          (lVar5 = lVar5 + (long)iVar2 * 0x18, piVar1 = *(int **)(lVar5 + 0x28),
          (int)((ulong)(*(long *)(lVar5 + 0x30) - (long)piVar1) >> 2) < 1)) ||
         (iVar2 = *piVar1, iVar2 == -1)) break;
      lVar5 = *(long *)(param_1 + 8);
      if (*(byte *)(lVar5 + 0x48) < 2) {
        plVar3 = param_2;
        (**(code **)(*param_2 + 0x38))
                  (param_2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 8) + 0x10) + (long)iVar2 * 8)
                  );
        if (((ulong)plVar3 & 1) == 0) {
          return;
        }
      }
      else {
        FUN_10987583c();
        if (lVar5 == 0) {
          return;
        }
        plVar3 = param_2;
        (**(code **)(*param_2 + 0x38))(param_2,lVar5);
        if ((int)plVar3 == 0) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x28))();
      if ((int)plVar3 <= iVar4) {
        return;
      }
    }
  }
  return;
}



/* Entry: 109851d2c; end: 109851e23;  */

bool FUN_109851d2c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_2;
  lVar2 = param_2[1];
  lVar4 = (long)*(int *)(*(long *)(param_1 + 0x10) + 0x28);
  lVar1 = lVar4;
  __Znam(lVar4);
  iVar5 = (int)((ulong)(lVar2 - lVar8) >> 2);
  if (iVar5 < 1) {
LAB_109851df8:
    bVar3 = true;
  }
  else {
    lVar2 = param_3[2];
    lVar8 = lVar2 + lVar4;
    if (param_3[1] < lVar8) {
      bVar3 = false;
    }
    else {
      iVar6 = 0;
      lVar7 = 0;
      do {
        _memcpy(lVar1,*param_3 + lVar2,lVar4);
        param_3[2] = lVar8;
        _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar7,lVar1,lVar4);
        if (iVar5 + -1 == iVar6) goto LAB_109851df8;
        lVar7 = lVar7 + lVar4;
        lVar2 = param_3[2];
        lVar8 = lVar2 + lVar4;
        iVar6 = iVar6 + 1;
      } while (lVar8 <= param_3[1]);
      bVar3 = iVar5 <= iVar6;
    }
  }
  __ZdaPv(lVar1);
  return bVar3;
}



/* Entry: 109851e24; end: 109851e9b;  */

undefined8 * FUN_109851e24(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b14d50;
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    func_0x000109846568();
  }
  return param_1;
}



/* Entry: 109851e9c; end: 109851ecb;  */

void FUN_109851e9c(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar8 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar8) {
    if (param_2 < uVar8) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return;
  }
  puVar5 = (undefined8 *)(param_2 - uVar8);
  puVar7 = (undefined4 *)param_1[1];
  if ((undefined8 *)(param_1[2] - (long)puVar7 >> 2) < puVar5) {
    lVar12 = (long)puVar7 - *param_1;
    uVar8 = (long)puVar5 + (lVar12 >> 2);
    if (uVar8 >> 0x3e != 0) {
      FUN_10984697c();
      if (puStack_48 != puStack_50) {
        puStack_48 = (undefined4 *)
                     ((long)puStack_48 +
                     (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar6 = (undefined4 *)*param_1;
      puVar1 = (undefined4 *)param_1[1];
      puVar7 = (undefined4 *)((long)puVar6 + (puVar5[1] - (long)puVar1));
      puVar3 = puVar7;
      for (puVar11 = puVar6; puVar1 != puVar11; puVar11 = puVar11 + 1) {
        *puVar3 = *puVar11;
        puVar3 = puVar3 + 1;
      }
      puVar5[1] = puVar7;
      lVar12 = *param_1;
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar6;
      puVar5[1] = lVar12;
      lVar12 = param_1[1];
      param_1[1] = puVar5[2];
      puVar5[2] = lVar12;
      lVar12 = param_1[2];
      param_1[2] = puVar5[3];
      puVar5[3] = lVar12;
      *puVar5 = puVar5[1];
      return;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 1;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7ffffffffffffffb < uVar9) {
      uVar10 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_109846990();
    }
    puStack_50 = (undefined4 *)((long)plVar4 + lVar12);
    lStack_40 = (long)plVar4 + uVar10 * 4;
    puStack_48 = puStack_50 + (long)puVar5;
    lVar12 = (long)puVar5 * 4;
    uVar2 = *param_3;
    puVar7 = puStack_50;
    do {
      *puVar7 = uVar2;
      lVar12 = lVar12 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar12 != 0);
    plStack_58 = plVar4;
    FUN_109852024(param_1,&plStack_58);
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    puVar6 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = *param_3;
      lVar12 = (long)puVar5 * 4;
      puVar6 = puVar7 + (long)puVar5;
      do {
        *puVar7 = uVar2;
        lVar12 = lVar12 + -4;
        puVar7 = puVar7 + 1;
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar6;
  }
  return;
}



/* Entry: 109851ecc; end: 109852023;  */

void FUN_109851ecc(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar7 = (undefined4 *)param_1[1];
  if ((undefined8 *)(param_1[2] - (long)puVar7 >> 2) < param_2) {
    lVar11 = (long)puVar7 - *param_1;
    uVar1 = (long)param_2 + (lVar11 >> 2);
    if (uVar1 >> 0x3e != 0) {
      FUN_10984697c();
      if (puStack_48 != puStack_50) {
        puStack_48 = (undefined4 *)
                     ((long)puStack_48 +
                     (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar6 = (undefined4 *)*param_1;
      puVar2 = (undefined4 *)param_1[1];
      puVar7 = (undefined4 *)((long)puVar6 + (param_2[1] - (long)puVar2));
      puVar4 = puVar7;
      for (puVar10 = puVar6; puVar2 != puVar10; puVar10 = puVar10 + 1) {
        *puVar4 = *puVar10;
        puVar4 = puVar4 + 1;
      }
      param_2[1] = puVar7;
      lVar11 = *param_1;
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar6;
      param_2[1] = lVar11;
      lVar11 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar11;
      lVar11 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar11;
      *param_2 = param_2[1];
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 1;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar9 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_109846990();
    }
    puStack_50 = (undefined4 *)((long)plVar5 + lVar11);
    lStack_40 = (long)plVar5 + uVar9 * 4;
    puStack_48 = puStack_50 + (long)param_2;
    lVar11 = (long)param_2 << 2;
    uVar3 = *param_3;
    puVar7 = puStack_50;
    do {
      *puVar7 = uVar3;
      lVar11 = lVar11 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
    plStack_58 = plVar5;
    FUN_109852024(param_1,&plStack_58);
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    puVar6 = puVar7;
    if (param_2 != (undefined8 *)0x0) {
      uVar3 = *param_3;
      lVar11 = (long)param_2 << 2;
      puVar6 = puVar7 + (long)param_2;
      do {
        *puVar7 = uVar3;
        lVar11 = lVar11 + -4;
        puVar7 = puVar7 + 1;
      } while (lVar11 != 0);
    }
    param_1[1] = (long)puVar6;
  }
  return;
}



/* Entry: 109852024; end: 10985208f;  */

void FUN_109852024(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
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



/* Entry: 109852090; end: 1098522c7;  */

long * FUN_109852090(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_68;
  
  plVar12 = param_1;
  plVar6 = param_2;
  FUN_1098469d0();
  if ((int)plVar12 != 0) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x30))();
    iVar3 = (int)plVar5;
    uVar15 = (ulong)iVar3;
    lVar14 = param_1[9];
    plVar12 = (long *)param_1[10];
    lVar13 = (long)plVar12 - lVar14;
    uVar16 = lVar13 >> 3;
    if (uVar16 < uVar15) {
      uVar17 = uVar15 - uVar16;
      if ((ulong)(param_1[0xb] - (long)plVar12 >> 3) < uVar17) {
        if (iVar3 < 0) {
          FUN_109852884();
LAB_1098522c4:
          func_0x000104c4f740();
          plVar12 = (long *)plVar5[0xf];
          if (plVar12 != (long *)0x0) {
            plVar12[1] = (long)(plVar5 + 0xc);
            (**(code **)(*plVar12 + 0x18))();
            if ((int)plVar12 != 0) {
              plVar12 = plVar5;
              (**(code **)(*plVar5 + 0x30))();
              if (0 < (int)plVar12) {
                iVar3 = 0;
                do {
                  plVar7 = plVar5;
                  (**(code **)(*plVar5 + 0x38))();
                  lVar14 = plVar7[1];
                  plVar7 = plVar5;
                  (**(code **)(*plVar5 + 0x28))(plVar5,iVar3);
                  plVar8 = (long *)plVar5[0xf];
                  (**(code **)(*plVar8 + 0x10))
                            (plVar8,*(undefined8 *)
                                     (*(long *)(lVar14 + 0x10) + (long)(int)plVar7 * 8));
                  if (((ulong)plVar8 & 1) == 0) {
                    return (long *)0x0;
                  }
                  iVar3 = iVar3 + 1;
                } while ((int)plVar12 != iVar3);
              }
              plVar12 = plVar5;
              (**(code **)(*plVar5 + 0x48))(plVar5,plVar6);
              if (((int)plVar12 != 0) &&
                 (plVar12 = plVar5, (**(code **)(*plVar5 + 0x50))(plVar5,plVar6), (int)plVar12 != 0)
                 ) {
                    /* WARNING: Could not recover jumptable at 0x0001098523c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar5 + 0x58))(plVar5);
                return plVar5;
              }
            }
          }
          return (long *)0x0;
        }
        uVar9 = param_1[0xb] - lVar14;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar15) {
          uVar10 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 >> 0x3d != 0) goto LAB_1098522c4;
        lVar4 = uVar10 << 3;
        __Znwm();
        lVar1 = lVar4 + lVar13;
        _bzero(lVar1,uVar17 * 8);
        lVar11 = lVar1 + uVar16 * -8;
        _memcpy(lVar11,lVar14,lVar13);
        param_1[9] = lVar11;
        param_1[10] = lVar1 + uVar17 * 8;
        param_1[0xb] = lVar4 + uVar10 * 8;
        if (lVar14 != 0) {
          __ZdlPv(lVar14);
        }
      }
      else {
        _bzero(plVar12,uVar17 * 8);
        param_1[10] = (long)(plVar12 + uVar17);
      }
    }
    else if (uVar15 < uVar16) {
      plVar6 = (long *)(lVar14 + uVar15 * 8);
      while (plVar12 != plVar6) {
        plVar12 = plVar12 + -1;
        plVar5 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      param_1[10] = (long)plVar6;
    }
    if (0 < iVar3) {
      uVar16 = 0;
      do {
        lVar14 = param_2[2] + 1;
        if (param_2[1] < lVar14) {
          return (long *)0x0;
        }
        uVar2 = *(undefined1 *)(*param_2 + param_2[2]);
        param_2[2] = lVar14;
        (**(code **)(*param_1 + 0x60))(&plStack_68,param_1,uVar2);
        plVar12 = plStack_68;
        plStack_68 = (long *)0x0;
        plVar6 = *(long **)(param_1[9] + uVar16 * 8);
        *(long **)(param_1[9] + uVar16 * 8) = plVar12;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar12 = plStack_68;
        plStack_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar12 = *(long **)(param_1[9] + uVar16 * 8);
        if (plVar12 == (long *)0x0) {
          return (long *)0x0;
        }
        plVar6 = param_1;
        (**(code **)(*param_1 + 0x38))(param_1);
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x28))(param_1,uVar16);
        (**(code **)(*plVar12 + 0x10))(plVar12,plVar6,plVar5);
        if (((ulong)plVar12 & 1) == 0) {
          return (long *)0x0;
        }
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
    plVar12 = (long *)0x1;
  }
  return plVar12;
}



/* Entry: 1098522c8; end: 1098523db;  */

long * FUN_1098522c8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = (long *)param_1[0xf];
  if (plVar1 != (long *)0x0) {
    plVar1[1] = (long)(param_1 + 0xc);
    (**(code **)(*plVar1 + 0x18))();
    if ((int)plVar1 != 0) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x30))();
      if (0 < (int)plVar1) {
        iVar4 = 0;
        do {
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x38))();
          lVar5 = plVar2[1];
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x28))(param_1,iVar4);
          plVar3 = (long *)param_1[0xf];
          (**(code **)(*plVar3 + 0x10))
                    (plVar3,*(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(int)plVar2 * 8));
          if (((ulong)plVar3 & 1) == 0) {
            return (long *)0x0;
          }
          iVar4 = iVar4 + 1;
        } while ((int)plVar1 != iVar4);
      }
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x48))(param_1,param_2);
      if (((int)plVar1 != 0) &&
         (plVar1 = param_1, (**(code **)(*param_1 + 0x50))(param_1,param_2), (int)plVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001098523c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x58))(param_1);
        return param_1;
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 1098523dc; end: 10985252b;  */

void FUN_1098523dc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if (0 < (int)plVar1) {
    plVar2 = *(long **)param_1[9];
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0xc,param_2);
    if ((int)plVar2 != 0) {
      uVar3 = 1;
      do {
        if (((ulong)plVar1 & 0xffffffff) == uVar3) {
          return;
        }
        plVar2 = *(long **)(param_1[9] + uVar3 * 8);
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0xc,param_2);
        uVar3 = uVar3 + 1;
      } while (((ulong)plVar2 & 1) != 0);
    }
  }
  return;
}



/* Entry: 10985252c; end: 109852687;  */

bool FUN_10985252c(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined4 uStack_54;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if ((int)plVar2 < 1) {
    bVar1 = true;
  }
  else {
    uVar6 = 0;
    bVar1 = false;
    do {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x38))();
      if (plVar4[10] == 0) {
LAB_109852614:
        plVar4 = *(long **)(param_1[9] + uVar6 * 8);
        (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0xc);
        if ((int)plVar4 == 0) {
          return bVar1;
        }
      }
      else {
        lVar3 = *(long *)(param_1[9] + uVar6 * 8);
        lVar7 = *(long *)(lVar3 + 0x10);
        FUN_109851b80();
        if (lVar3 == 0) goto LAB_109852614;
        plVar4 = param_1;
        (**(code **)(*param_1 + 0x38))();
        uVar5 = plVar4[10];
        uStack_54 = *(undefined4 *)(lVar7 + 0x38);
        func_0x000107c31940(auStack_70,&UNK_10f581c43);
        FUN_1098488e4(uVar5,&uStack_54,auStack_70,0);
        if (cStack_59 < '\0') {
          __ZdlPv(auStack_70[0]);
        }
        if ((uVar5 & 1) == 0) goto LAB_109852614;
        FUN_10984671c(*(undefined8 *)(*(long *)(param_1[9] + uVar6 * 8) + 0x10),lVar3);
      }
      uVar6 = uVar6 + 1;
      bVar1 = ((ulong)plVar2 & 0xffffffff) <= uVar6;
    } while (((ulong)plVar2 & 0xffffffff) != uVar6);
  }
  return bVar1;
}



/* Entry: 109852688; end: 109852853;  */

void FUN_109852688(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (param_3 < 2) {
    if (param_3 == 0) {
      puVar1 = (undefined8 *)0x28;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_110b14d50;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      puVar1[4] = 0;
    }
    else if (param_3 == 1) {
      puVar1 = (undefined8 *)0x30;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0xffffffff;
      *puVar1 = &PTR_FUN_110b14e48;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
  else if (param_3 == 2) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_DAT_110b15d48;
    puVar1[6] = &PTR_FUN_110b14b98;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
  }
  else if (param_3 == 3) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_DAT_110b15778;
    puVar1[6] = &PTR_DAT_110b14b10;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 109852854; end: 109852883;  */

undefined8 FUN_109852854(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  if ((param_2 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 2)) &&
     (uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (long)param_2 * 4), -1 < (int)uVar2)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + (ulong)uVar2 * 8);
    lVar6 = *(long *)(lVar3 + 0x10);
    if ((((*(byte *)(lVar6 + 100) & 1) == 0) && (lVar4 = *(long *)(lVar3 + 0x20), lVar4 != 0)) &&
       (*(char *)(lVar4 + 100) == '\x01')) {
      lVar1 = *(long *)(lVar6 + 0x48);
      lVar6 = *(long *)(lVar6 + 0x50);
      *(undefined1 *)(lVar4 + 100) = 0;
      FUN_109851e9c(lVar4 + 0x48,lVar6 - lVar1 >> 2,&UNK_10e002ab0);
      lVar6 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar6 + 100) & 1) == 0) {
        uVar7 = (ulong)(*(long *)(lVar6 + 0x50) - (long)*(undefined4 **)(lVar6 + 0x48)) >> 2 &
                0xffffffff;
        if (uVar7 != 0) {
          puVar5 = *(undefined4 **)(lVar6 + 0x48);
          puVar8 = *(undefined4 **)(*(long *)(lVar3 + 0x20) + 0x48);
          do {
            *puVar8 = *puVar5;
            uVar7 = uVar7 - 1;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    return *(undefined8 *)(lVar3 + 0x20);
  }
  return 0;
}



/* Entry: 109852884; end: 109852897;  */

void FUN_109852884(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar3 = (long *)*puVar1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar1[1];
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar2 = (long *)*puVar1;
    }
    puVar1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 109852898; end: 10985290b;  */

void FUN_109852898(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10985290c; end: 10985295b;  */

undefined8 FUN_10985290c(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + (long)param_3 * 8);
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x18) = param_3;
  return 1;
}



/* Entry: 10985295c; end: 109852ab7;  */

long * FUN_10985295c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plStack_38;
  
  lVar2 = param_3[2];
  lVar1 = lVar2 + 1;
  if (param_3[1] < lVar1) {
    return (long *)0x0;
  }
  cVar3 = *(char *)(*param_3 + lVar2);
  param_3[2] = lVar1;
  iVar6 = (int)cVar3;
  if ((iVar6 - 7U & 0xff) < 0xf7) {
    return (long *)0x0;
  }
  if (iVar6 != -2) {
    if (param_3[1] < lVar2 + 2) {
      return (long *)0x0;
    }
    cVar3 = *(char *)(*param_3 + lVar1);
    param_3[2] = lVar2 + 2;
    if ((byte)(cVar3 - 4U) < 0xfb) {
      return (long *)0x0;
    }
    (**(code **)(*param_1 + 0x50))(&plStack_38,param_1);
    plVar4 = plStack_38;
    plStack_38 = (long *)0x0;
    plVar5 = (long *)param_1[5];
    param_1[5] = (long)plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar4 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if ((param_1[5] != 0) && (plVar4 = param_1, (**(code **)(*param_1 + 0x38))(), (int)plVar4 == 0)) {
    return plVar4;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
  if ((int)plVar4 == 0) {
    return plVar4;
  }
  if (((param_1[1] != 0) && (*(byte *)(param_1[1] + 0x48) < 2)) &&
     ((**(code **)(*param_1 + 0x60))(param_1,(ulong)(param_2[1] - *param_2) >> 2), (int)param_1 == 0
     )) {
    return param_1;
  }
  return (long *)0x1;
}



/* Entry: 109852ab8; end: 109852edf;  */

void FUN_109852ab8(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_4 != 1) || (param_3 == -2)) {
    puVar3 = (undefined8 *)0x0;
    goto LAB_109852ba4;
  }
  lVar8 = (long)*(int *)(param_2 + 0x18);
  plVar9 = *(long **)(param_2 + 8);
  uVar11 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar8 * 8);
  plVar4 = plVar9;
  (**(code **)(*plVar9 + 0x10))();
  if ((int)plVar4 == 1) {
    uVar2 = *(ushort *)(plVar9 + 9);
    uVar10 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar8 * 8);
    plVar4 = plVar9;
    (**(code **)(*plVar9 + 0x10))();
    if ((5 < param_3 - 1U) || ((int)plVar4 != 1)) goto LAB_109852b80;
    plVar4 = plVar9;
    (**(code **)(*plVar9 + 0x48))();
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x58))(plVar9,lVar8);
    if (plVar4 == (long *)0x0 || plVar5 == (long *)0x0) goto LAB_109852b80;
    plVar6 = plVar9;
    (**(code **)(*plVar9 + 0x50))(plVar9,lVar8);
    plVar1 = plVar5 + 3;
    lVar8 = plVar9[0xb];
    if (plVar6 == (long *)0x0) {
      if (3 < param_3) {
        if (param_3 == 4) {
          puVar3 = (undefined8 *)0xc8;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar4;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          ppuVar7 = &PTR_FUN_110b15470;
          goto LAB_109852e14;
        }
        if (param_3 != 5) {
          puVar3 = (undefined8 *)0xd0;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar4;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          *puVar3 = &PTR_FUN_110b15608;
          puVar3[1] = uVar10;
          puVar3[0xe] = 0;
          puVar3[0xf] = lVar8;
          puVar3[0x10] = plVar4;
          puVar3[0x11] = plVar1;
          puVar3[0x12] = plVar5;
          ppuVar7 = &PTR_DAT_110b15690;
          goto LAB_109852eac;
        }
        puVar3 = (undefined8 *)0xb0;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar4;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        *puVar3 = &PTR_FUN_110b15580;
        puVar3[1] = uVar10;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = lVar8;
        puVar3[0x13] = plVar4;
        goto LAB_109852d04;
      }
      if (param_3 == 1) {
        puVar3 = (undefined8 *)0x60;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar4;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        ppuVar7 = &PTR_FUN_110b15348;
      }
      else {
        if (param_3 != 2) {
          puVar3 = (undefined8 *)0xa0;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar4;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          ppuVar7 = &PTR_FUN_110b154f8;
          goto LAB_109852e50;
        }
        puVar3 = (undefined8 *)0x60;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar4;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        ppuVar7 = &PTR_FUN_110b153e8;
      }
    }
    else {
      if (3 < param_3) {
        if (param_3 == 4) {
          puVar3 = (undefined8 *)0xc8;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar6;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          ppuVar7 = &PTR_FUN_110b150c8;
LAB_109852e14:
          *puVar3 = ppuVar7;
          puVar3[1] = uVar10;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0x15] = 0;
          puVar3[0x14] = 0;
          puVar3[0x17] = 0;
          puVar3[0x16] = 0;
          *(undefined4 *)(puVar3 + 0x18) = 0;
          goto LAB_109852ba4;
        }
        if (param_3 != 5) {
          puVar3 = (undefined8 *)0xd0;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar6;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          *puVar3 = &PTR_FUN_110b15260;
          puVar3[1] = uVar10;
          puVar3[0xe] = 0;
          puVar3[0xf] = lVar8;
          puVar3[0x10] = plVar6;
          puVar3[0x11] = plVar1;
          puVar3[0x12] = plVar5;
          ppuVar7 = &PTR_FUN_110b152e8;
LAB_109852eac:
          puVar3[0xc] = ppuVar7;
          puVar3[0xd] = 0;
          *(undefined4 *)(puVar3 + 0x13) = 1;
          puVar3[0x14] = 0xffffffffffffffff;
          puVar3[0x15] = 0x3f800000ffffffff;
          *(undefined4 *)(puVar3 + 0x16) = 0xffffffff;
          puVar3[0x17] = 0;
          puVar3[0x18] = 0;
          *(undefined1 *)(puVar3 + 0x19) = 0;
          goto LAB_109852ba4;
        }
        puVar3 = (undefined8 *)0xb0;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar6;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        *puVar3 = &PTR_FUN_110b151d8;
        puVar3[1] = uVar10;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = lVar8;
        puVar3[0x13] = plVar6;
LAB_109852d04:
        puVar3[0x14] = plVar1;
        puVar3[0x15] = plVar5;
        goto LAB_109852ba4;
      }
      if (param_3 == 1) {
        puVar3 = (undefined8 *)0x60;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar6;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        ppuVar7 = &PTR_FUN_110b14ed8;
      }
      else {
        if (param_3 != 2) {
          puVar3 = (undefined8 *)0xa0;
          __Znwm();
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          puVar3[8] = lVar8;
          puVar3[9] = plVar6;
          puVar3[10] = plVar1;
          puVar3[0xb] = plVar5;
          ppuVar7 = &PTR_DAT_110b15150;
LAB_109852e50:
          *puVar3 = ppuVar7;
          puVar3[1] = uVar10;
          puVar3[0x11] = 0;
          puVar3[0x12] = 0;
          puVar3[0x10] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = 0;
          puVar3[0xc] = 0;
          *(undefined4 *)(puVar3 + 0xf) = 0;
          *(uint *)(puVar3 + 0x13) = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          goto LAB_109852ba4;
        }
        puVar3 = (undefined8 *)0x60;
        __Znwm();
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[8] = lVar8;
        puVar3[9] = plVar6;
        puVar3[10] = plVar1;
        puVar3[0xb] = plVar5;
        ppuVar7 = &PTR_FUN_110b15040;
      }
    }
    puVar3[1] = uVar10;
  }
  else {
LAB_109852b80:
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    ppuVar7 = &PTR_FUN_110b156f0;
    puVar3[1] = uVar11;
  }
  *puVar3 = ppuVar7;
LAB_109852ba4:
  *param_1 = puVar3;
  return;
}



/* Entry: 109852ee0; end: 1098531bf;  */

void FUN_109852ee0(long *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  ulong uVar16;
  
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((int)plVar6 < 1) {
    return;
  }
  lVar13 = *param_2;
  lVar3 = param_2[1];
  uVar4 = *(undefined4 *)(param_1[2] + 0x38);
  puVar7 = (undefined8 *)0x70;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  *(char *)(puVar7 + 3) = (char)plVar6;
  *(undefined4 *)((long)puVar7 + 0x1c) = 5;
  *(undefined1 *)(puVar7 + 4) = 0;
  puVar7[5] = (ulong)(uint)((int)plVar6 << 2);
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = uVar4;
  puVar7[0xd] = 0;
  *(undefined8 *)((long)puVar7 + 0x44) = 0;
  *(undefined8 *)((long)puVar7 + 0x3c) = 0;
  *(undefined8 *)((long)puVar7 + 0x54) = 0;
  *(undefined8 *)((long)puVar7 + 0x4c) = 0;
  *(undefined8 *)((long)puVar7 + 0x5c) = 0;
  *(undefined1 *)((long)puVar7 + 100) = 1;
  FUN_109846678();
  plVar8 = param_1 + 4;
  lVar9 = *plVar8;
  *(undefined4 *)((long)puVar7 + 0x3c) = *(undefined4 *)(param_1[2] + 0x3c);
  *plVar8 = (long)puVar7;
  if (lVar9 != 0) {
    func_0x000109846568(plVar8);
    puVar7 = (undefined8 *)*plVar8;
  }
  if (*(int *)(puVar7 + 0xc) == 0) {
    return;
  }
  puVar1 = (uint *)(*(long *)*puVar7 + puVar7[6]);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  lVar2 = param_3[1];
  lVar10 = param_3[2];
  lVar9 = lVar10 + 1;
  if (lVar2 < lVar9) {
    return;
  }
  uVar14 = (lVar3 - lVar13 >> 2) * ((ulong)plVar6 & 0xffffffff);
  lVar13 = *param_3;
  cVar5 = *(char *)(lVar13 + lVar10);
  param_3[2] = lVar9;
  if (cVar5 == '\0') {
    lVar10 = lVar10 + 2;
    if (lVar2 < lVar10) {
      return;
    }
    uVar16 = (ulong)*(byte *)(lVar13 + lVar9);
    param_3[2] = lVar10;
    uVar11 = ((long *)puVar7[8])[1] - *(long *)puVar7[8];
    if (uVar16 == 4) {
      if (lVar2 < (long)(lVar10 + uVar14 * 4)) {
        return;
      }
      uVar16 = uVar14 * 4;
      if (uVar11 < uVar16) {
        return;
      }
      _memcpy(puVar1,lVar13 + lVar10,uVar16);
      param_3[2] = param_3[2] + uVar16;
      goto LAB_109853010;
    }
    if (uVar11 < uVar14 * uVar16 || lVar2 - lVar10 < (long)(uVar14 * uVar16)) {
      return;
    }
    puVar12 = puVar1;
    uVar11 = uVar14;
    if (uVar14 == 0) goto LAB_109853120;
    do {
      if (param_3[1] < (long)(lVar10 + uVar16)) {
        return;
      }
      _memcpy(puVar12,*param_3 + lVar10,uVar16);
      lVar10 = param_3[2] + uVar16;
      param_3[2] = lVar10;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar11 = uVar14;
    FUN_10985ea30(uVar14,plVar6,param_3,puVar1);
    if ((uVar11 & 1) == 0) {
      return;
    }
LAB_109853010:
    if (uVar14 == 0) {
LAB_109853120:
      bVar15 = true;
      goto LAB_109853154;
    }
  }
  plVar8 = (long *)param_1[5];
  if (plVar8 == (long *)0x0) {
    if (0 < (int)uVar14) goto LAB_109853130;
  }
  else {
    (**(code **)(*plVar8 + 0x40))();
    bVar15 = false;
    if ((((ulong)plVar8 & 1) != 0) || ((int)uVar14 < 1)) goto LAB_109853154;
LAB_109853130:
    uVar11 = uVar14 & 0x7fffffff;
    puVar12 = puVar1;
    do {
      *puVar12 = -(*puVar12 & 1) ^ *puVar12 >> 1;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  bVar15 = false;
LAB_109853154:
  plVar8 = (long *)param_1[5];
  if (((plVar8 != (long *)0x0) && ((**(code **)(*plVar8 + 0x50))(plVar8,param_3), (int)plVar8 != 0))
     && (!bVar15)) {
    (**(code **)(*(long *)param_1[5] + 0x58))
              ((long *)param_1[5],puVar1,puVar1,uVar14,plVar6,*param_2);
  }
  return;
}



/* Entry: 1098531c0; end: 1098535f3;  */

undefined8 FUN_1098531c0(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  lVar4 = *(long *)(param_1 + 0x10);
  iVar11 = *(int *)(lVar4 + 0x1c);
  if (iVar11 < 4) {
    if (iVar11 == 1) {
      bVar2 = *(byte *)(lVar4 + 0x18);
      puVar10 = (undefined4 *)(ulong)bVar2;
      puVar3 = puVar10;
      __Znam();
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (*(int *)(puVar5 + 0xc) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)*puVar5 + puVar5[6];
      }
      if (param_2 != 0) {
        lVar12 = 0;
        iVar11 = 0;
        do {
          if (bVar2 != 0) {
            puVar7 = (undefined4 *)(lVar4 + (long)(int)lVar12 * 4);
            puVar8 = puVar3;
            puVar6 = puVar10;
            do {
              *(char *)puVar8 = (char)*puVar7;
              puVar6 = (undefined4 *)((long)puVar6 + -1);
              puVar7 = puVar7 + 1;
              puVar8 = (undefined4 *)((long)puVar8 + 1);
            } while (puVar6 != (undefined4 *)0x0);
          }
          _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
          lVar12 = lVar12 + (long)puVar10;
          iVar11 = iVar11 + 1;
        } while (iVar11 != param_2);
      }
    }
    else if (iVar11 == 2) {
      bVar2 = *(byte *)(lVar4 + 0x18);
      puVar10 = (undefined4 *)(ulong)bVar2;
      puVar3 = puVar10;
      __Znam();
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (*(int *)(puVar5 + 0xc) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)*puVar5 + puVar5[6];
      }
      if (param_2 != 0) {
        lVar12 = 0;
        iVar11 = 0;
        do {
          if (bVar2 != 0) {
            puVar7 = (undefined4 *)(lVar4 + (long)(int)lVar12 * 4);
            puVar8 = puVar3;
            puVar6 = puVar10;
            do {
              *(char *)puVar8 = (char)*puVar7;
              puVar6 = (undefined4 *)((long)puVar6 + -1);
              puVar7 = puVar7 + 1;
              puVar8 = (undefined4 *)((long)puVar8 + 1);
            } while (puVar6 != (undefined4 *)0x0);
          }
          _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
          lVar12 = lVar12 + (long)puVar10;
          iVar11 = iVar11 + 1;
        } while (iVar11 != param_2);
      }
    }
    else {
      if (iVar11 != 3) {
        return 0;
      }
      bVar2 = *(byte *)(lVar4 + 0x18);
      puVar10 = (undefined4 *)((ulong)bVar2 * 2);
      puVar3 = puVar10;
      __Znam();
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (*(int *)(puVar5 + 0xc) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)*puVar5 + puVar5[6];
      }
      if (param_2 != 0) {
        lVar12 = 0;
        iVar13 = 0;
        iVar11 = 0;
        do {
          if (bVar2 != 0) {
            lVar1 = (long)iVar13;
            iVar13 = (uint)bVar2 + iVar13;
            puVar6 = (undefined4 *)(lVar4 + lVar1 * 4);
            puVar7 = puVar3;
            uVar9 = (ulong)bVar2;
            do {
              *(short *)puVar7 = (short)*puVar6;
              uVar9 = uVar9 - 1;
              puVar6 = puVar6 + 1;
              puVar7 = (undefined4 *)((long)puVar7 + 2);
            } while (uVar9 != 0);
          }
          _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
          lVar12 = lVar12 + (long)puVar10;
          iVar11 = iVar11 + 1;
        } while (iVar11 != param_2);
      }
    }
  }
  else if (iVar11 == 4) {
    bVar2 = *(byte *)(lVar4 + 0x18);
    puVar10 = (undefined4 *)((ulong)bVar2 * 2);
    puVar3 = puVar10;
    __Znam();
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar5 + 0xc) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)*puVar5 + puVar5[6];
    }
    if (param_2 != 0) {
      lVar12 = 0;
      iVar13 = 0;
      iVar11 = 0;
      do {
        if (bVar2 != 0) {
          lVar1 = (long)iVar13;
          iVar13 = (uint)bVar2 + iVar13;
          puVar6 = (undefined4 *)(lVar4 + lVar1 * 4);
          puVar7 = puVar3;
          uVar9 = (ulong)bVar2;
          do {
            *(short *)puVar7 = (short)*puVar6;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
            puVar7 = (undefined4 *)((long)puVar7 + 2);
          } while (uVar9 != 0);
        }
        _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
        lVar12 = lVar12 + (long)puVar10;
        iVar11 = iVar11 + 1;
      } while (iVar11 != param_2);
    }
  }
  else if (iVar11 == 5) {
    bVar2 = *(byte *)(lVar4 + 0x18);
    puVar10 = (undefined4 *)((ulong)bVar2 * 4);
    puVar3 = puVar10;
    __Znam();
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar5 + 0xc) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)*puVar5 + puVar5[6];
    }
    if (param_2 != 0) {
      lVar12 = 0;
      iVar13 = 0;
      iVar11 = 0;
      do {
        if (bVar2 != 0) {
          lVar1 = (long)iVar13;
          iVar13 = (uint)bVar2 + iVar13;
          puVar6 = (undefined4 *)(lVar4 + lVar1 * 4);
          puVar7 = puVar3;
          uVar9 = (ulong)bVar2;
          do {
            *puVar7 = *puVar6;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 != 0);
        }
        _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
        lVar12 = lVar12 + (long)puVar10;
        iVar11 = iVar11 + 1;
      } while (iVar11 != param_2);
    }
  }
  else {
    if (iVar11 != 6) {
      return 0;
    }
    bVar2 = *(byte *)(lVar4 + 0x18);
    puVar10 = (undefined4 *)((ulong)bVar2 * 4);
    puVar3 = puVar10;
    __Znam();
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar5 + 0xc) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)*puVar5 + puVar5[6];
    }
    if (param_2 != 0) {
      lVar12 = 0;
      iVar13 = 0;
      iVar11 = 0;
      do {
        if (bVar2 != 0) {
          lVar1 = (long)iVar13;
          iVar13 = (uint)bVar2 + iVar13;
          puVar6 = (undefined4 *)(lVar4 + lVar1 * 4);
          puVar7 = puVar3;
          uVar9 = (ulong)bVar2;
          do {
            *puVar7 = *puVar6;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 != 0);
        }
        _memcpy(**(long **)(*(long *)(param_1 + 0x10) + 0x40) + lVar12,puVar3,puVar10);
        lVar12 = lVar12 + (long)puVar10;
        iVar11 = iVar11 + 1;
      } while (iVar11 != param_2);
    }
  }
  __ZdaPv(puVar3);
  return 1;
}



/* Entry: 1098535f4; end: 1098536bb;  */

undefined8 * FUN_1098535f4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b14e48;
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_FUN_110b14d50;
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    func_0x000109846568();
  }
  return param_1;
}



/* Entry: 1098536bc; end: 1098536c7;  */

undefined1 FUN_1098536bc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x18);
}



/* Entry: 1098536c8; end: 10985373f;  */

undefined8 * FUN_1098536c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109853740; end: 1098537af;  */

undefined8 FUN_109853740(void)

{
  return 1;
}



/* Entry: 1098537b0; end: 109853bc3;  */

undefined8 FUN_1098537b0(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  
  iVar10 = (int)param_5;
  *(int *)(param_1 + 0x10) = iVar10;
  lVar26 = (long)iVar10;
  func_0x000108a5942c(param_1 + 0x28,lVar26);
  plVar1 = *(long **)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x50);
  piVar16 = (int *)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
  if (iVar10 < 0) {
    piVar16 = (int *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  uVar7 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar18 = 0;
    do {
      iVar24 = piVar16[lVar18];
      iVar20 = *(int *)(param_1 + 0x18);
      if (iVar20 < iVar24) {
        lVar17 = *(long *)(param_1 + 0x28);
LAB_10985384c:
        *(int *)(lVar17 + lVar18 * 4) = iVar20;
      }
      else {
        iVar20 = *(int *)(param_1 + 0x14);
        lVar17 = *(long *)(param_1 + 0x28);
        if (iVar24 < iVar20) goto LAB_10985384c;
        *(int *)(lVar17 + lVar18 * 4) = iVar24;
      }
      lVar18 = lVar18 + 1;
      uVar7 = (ulong)*(int *)(param_1 + 0x10);
    } while (lVar18 < (long)uVar7);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar18 = 0;
      do {
        iVar20 = *(int *)(param_2 + lVar18 * 4) + *(int *)(lVar17 + lVar18 * 4);
        *(int *)(param_3 + lVar18 * 4) = iVar20;
        if (*(int *)(param_1 + 0x18) < iVar20) {
          iVar24 = -*(int *)(param_1 + 0x1c);
LAB_1098538b4:
          *(int *)(param_3 + lVar18 * 4) = iVar20 + iVar24;
        }
        else if (iVar20 < *(int *)(param_1 + 0x14)) {
          iVar24 = *(int *)(param_1 + 0x1c);
          goto LAB_1098538b4;
        }
        lVar18 = lVar18 + 1;
        uVar7 = (ulong)*(int *)(param_1 + 0x10);
      } while (lVar18 < (long)uVar7);
    }
  }
  lVar18 = **(long **)(param_1 + 0x58);
  uVar21 = (*(long **)(param_1 + 0x58))[1] - lVar18;
  uVar19 = (long)uVar21 >> 2;
  if (1 < (int)uVar19) {
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    lVar22 = lVar26 * 4;
    uVar23 = 1;
    lVar17 = param_3 + lVar26 * 4;
    param_2 = param_2 + lVar26 * 4;
    uVar9 = uVar7;
    lVar26 = param_3;
    do {
      if (uVar23 == uVar19) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109853bb0);
        (*pcVar6)();
      }
      uVar3 = *(uint *)(lVar18 + uVar23 * 4);
      if ((uVar3 == 0xffffffff) ||
         ((*(ulong *)(*plVar1 + (ulong)(uVar3 >> 6) * 8) >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
LAB_109853944:
        uVar9 = uVar7;
        if (0 < (int)uVar7) {
          lVar8 = 0;
          do {
            iVar24 = *(int *)(lVar26 + lVar8 * 4);
            iVar20 = *(int *)(param_1 + 0x18);
            if (iVar20 < iVar24) {
              lVar11 = *(long *)(param_1 + 0x28);
LAB_10985397c:
              *(int *)(lVar11 + lVar8 * 4) = iVar20;
            }
            else {
              iVar20 = *(int *)(param_1 + 0x14);
              lVar11 = *(long *)(param_1 + 0x28);
              if (iVar24 < iVar20) goto LAB_10985397c;
              *(int *)(lVar11 + lVar8 * 4) = iVar24;
            }
            lVar8 = lVar8 + 1;
            uVar7 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar8 < (long)uVar7);
          uVar9 = uVar7;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar8 = 0;
            do {
              iVar20 = *(int *)(param_2 + lVar8 * 4) + *(int *)(lVar11 + lVar8 * 4);
              *(int *)(lVar17 + lVar8 * 4) = iVar20;
              if (*(int *)(param_1 + 0x18) < iVar20) {
                iVar24 = -*(int *)(param_1 + 0x1c);
LAB_1098539e4:
                *(int *)(lVar17 + lVar8 * 4) = iVar20 + iVar24;
              }
              else if (iVar20 < *(int *)(param_1 + 0x14)) {
                iVar24 = *(int *)(param_1 + 0x1c);
                goto LAB_1098539e4;
              }
              lVar8 = lVar8 + 1;
              uVar7 = (ulong)*(int *)(param_1 + 0x10);
              uVar9 = uVar7;
            } while (lVar8 < (long)uVar7);
          }
        }
      }
      else {
        uVar3 = *(uint *)(*(long *)(plVar1[0x10] + 0x18) + (ulong)uVar3 * 4);
        if (uVar3 == 0xffffffff) goto LAB_109853944;
        lVar8 = plVar1[7];
        lVar11 = *plVar2;
        iVar20 = *(int *)(lVar11 + (ulong)*(uint *)(lVar8 + (ulong)uVar3 * 4) * 4);
        uVar5 = uVar3 - 2;
        if (0x55555555 < uVar3 * -0x55555555 + 0xaaaaaaab) {
          uVar5 = uVar3 + 1;
        }
        iVar4 = *(int *)(lVar11 + (ulong)*(uint *)(lVar8 + (ulong)uVar5 * 4) * 4);
        iVar24 = 2;
        if (0x55555555 < uVar3 * -0x55555555) {
          iVar24 = -1;
        }
        iVar24 = *(int *)(lVar11 + (ulong)*(uint *)(lVar8 + (ulong)(iVar24 + uVar3) * 4) * 4);
        if (((long)uVar23 <= (long)iVar20 || (long)uVar23 <= (long)iVar4) ||
            (long)uVar23 <= (long)iVar24) goto LAB_109853944;
        if (0 < iVar10) {
          piVar12 = (int *)(param_3 + (long)(iVar4 * iVar10) * 4);
          piVar13 = (int *)(param_3 + (long)(iVar24 * iVar10) * 4);
          piVar14 = (int *)(param_3 + (long)(iVar20 * iVar10) * 4);
          piVar15 = piVar16;
          uVar25 = param_5 & 0xffffffff;
          do {
            *piVar15 = (*piVar13 + *piVar12) - *piVar14;
            uVar25 = uVar25 - 1;
            piVar12 = piVar12 + 1;
            piVar13 = piVar13 + 1;
            piVar14 = piVar14 + 1;
            piVar15 = piVar15 + 1;
          } while (uVar25 != 0);
        }
        if (0 < (int)uVar9) {
          lVar8 = 0;
          do {
            iVar24 = piVar16[lVar8];
            iVar20 = *(int *)(param_1 + 0x18);
            if (iVar20 < iVar24) {
              lVar11 = *(long *)(param_1 + 0x28);
LAB_109853b00:
              *(int *)(lVar11 + lVar8 * 4) = iVar20;
            }
            else {
              iVar20 = *(int *)(param_1 + 0x14);
              lVar11 = *(long *)(param_1 + 0x28);
              if (iVar24 < iVar20) goto LAB_109853b00;
              *(int *)(lVar11 + lVar8 * 4) = iVar24;
            }
            lVar8 = lVar8 + 1;
            uVar7 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar8 < (long)uVar7);
          uVar9 = uVar7;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar8 = 0;
            do {
              iVar20 = *(int *)(param_2 + lVar8 * 4) + *(int *)(lVar11 + lVar8 * 4);
              *(int *)(lVar17 + lVar8 * 4) = iVar20;
              if (*(int *)(param_1 + 0x18) < iVar20) {
                iVar24 = -*(int *)(param_1 + 0x1c);
LAB_109853b68:
                *(int *)(lVar17 + lVar8 * 4) = iVar20 + iVar24;
              }
              else if (iVar20 < *(int *)(param_1 + 0x14)) {
                iVar24 = *(int *)(param_1 + 0x1c);
                goto LAB_109853b68;
              }
              lVar8 = lVar8 + 1;
              uVar7 = (ulong)*(int *)(param_1 + 0x10);
              uVar9 = uVar7;
            } while (lVar8 < (long)uVar7);
          }
        }
      }
      uVar23 = uVar23 + 1;
      lVar17 = lVar17 + lVar22;
      param_2 = param_2 + lVar22;
      lVar26 = lVar26 + lVar22;
    } while (uVar23 != (uVar21 >> 2 & 0x7fffffff));
  }
  __ZdaPv(piVar16);
  return 1;
}



/* Entry: 109853bc4; end: 109853c47;  */

undefined8 FUN_109853bc4(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  lVar3 = param_2[2];
  lVar2 = lVar3 + 4;
  if (lVar2 <= param_2[1]) {
    iVar4 = *(int *)(*param_2 + lVar3);
    param_2[2] = lVar2;
    if (lVar3 + 8 <= param_2[1]) {
      iVar5 = *(int *)(*param_2 + lVar2);
      param_2[2] = lVar3 + 8;
      if (iVar4 <= iVar5) {
        *(int *)(param_1 + 4) = iVar4;
        *(int *)(param_1 + 8) = iVar5;
        uVar6 = (long)iVar5 - (long)iVar4;
        if (uVar6 < 0x7fffffff) {
          uVar1 = (int)uVar6 + 1;
          *(uint *)(param_1 + 0xc) = uVar1;
          *(uint *)(param_1 + 0x10) = uVar1 >> 1;
          *(uint *)(param_1 + 0x14) = -(uVar1 >> 1);
          if ((uVar6 & 1) != 0) {
            *(uint *)(param_1 + 0x10) = (uVar1 >> 1) - 1;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109853c48; end: 109853c5b;  */

undefined8 * FUN_109853c48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109262df8();
  *puVar1 = &PTR_DAT_110b14fd0;
  if (puVar1[5] != 0) {
    puVar1[6] = puVar1[5];
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 109853c5c; end: 109853cd3;  */

undefined8 * FUN_109853c5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109853cd4; end: 109853d0b;  */

undefined8 FUN_109853cd4(void)

{
  return 2;
}



/* Entry: 109853d0c; end: 1098542a3;  */

undefined8 FUN_109853d0c(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  ulong uVar30;
  int *piVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar23;
  
  *(uint *)(param_1 + 0x10) = param_5;
  lVar34 = (long)(int)param_5;
  func_0x000108a5942c(param_1 + 0x28,lVar34);
  piVar13 = (int *)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
  if ((int)param_5 < 0) {
    piVar13 = (int *)0xffffffffffffffff;
  }
  piVar11 = piVar13;
  __Znam();
  _bzero();
  __Znam();
  _bzero();
  uVar33 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar18 = 0;
    do {
      iVar12 = piVar11[lVar18];
      iVar25 = *(int *)(param_1 + 0x18);
      if (iVar25 < iVar12) {
        lVar14 = *(long *)(param_1 + 0x28);
LAB_109853dc4:
        *(int *)(lVar14 + lVar18 * 4) = iVar25;
      }
      else {
        iVar25 = *(int *)(param_1 + 0x14);
        lVar14 = *(long *)(param_1 + 0x28);
        if (iVar12 < iVar25) goto LAB_109853dc4;
        *(int *)(lVar14 + lVar18 * 4) = iVar12;
      }
      lVar18 = lVar18 + 1;
      uVar33 = (ulong)*(int *)(param_1 + 0x10);
    } while (lVar18 < (long)uVar33);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar18 = 0;
      do {
        iVar25 = *(int *)(param_2 + lVar18 * 4) + *(int *)(lVar14 + lVar18 * 4);
        *(int *)(param_3 + lVar18 * 4) = iVar25;
        if (*(int *)(param_1 + 0x18) < iVar25) {
          iVar12 = -*(int *)(param_1 + 0x1c);
LAB_109853e2c:
          *(int *)(param_3 + lVar18 * 4) = iVar25 + iVar12;
        }
        else if (iVar25 < *(int *)(param_1 + 0x14)) {
          iVar12 = *(int *)(param_1 + 0x1c);
          goto LAB_109853e2c;
        }
        lVar18 = lVar18 + 1;
        uVar33 = (ulong)*(int *)(param_1 + 0x10);
      } while (lVar18 < (long)uVar33);
    }
  }
  lVar18 = **(long **)(param_1 + 0x58);
  uVar15 = (*(long **)(param_1 + 0x58))[1] - lVar18;
  uVar19 = (long)uVar15 >> 2;
  if (1 < (int)uVar19) {
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    lVar16 = lVar34 * 4;
    uVar35 = 1;
    uVar9 = (ulong)param_5;
    plVar2 = *(long **)(param_1 + 0x48);
    plVar3 = *(long **)(param_1 + 0x50);
    param_2 = param_2 + lVar34 * 4;
    lVar34 = param_3 + lVar34 * 4;
    lVar14 = param_3;
    uVar36 = uVar33;
    do {
      if (uVar35 == uVar19) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109854280);
        (*pcVar10)();
      }
      uVar4 = *(uint *)(lVar18 + uVar35 * 4);
      if (0 < (int)param_5) {
        _bzero(piVar11,(ulong)param_5 << 2);
      }
      if (uVar4 == 0xffffffff) {
LAB_109854170:
        uVar36 = uVar33;
        if (0 < (int)uVar33) {
          lVar20 = 0;
          do {
            iVar12 = *(int *)(lVar14 + lVar20 * 4);
            iVar25 = *(int *)(param_1 + 0x18);
            if (iVar25 < iVar12) {
              lVar17 = *(long *)(param_1 + 0x28);
LAB_1098541a8:
              *(int *)(lVar17 + lVar20 * 4) = iVar25;
            }
            else {
              iVar25 = *(int *)(param_1 + 0x14);
              lVar17 = *(long *)(param_1 + 0x28);
              if (iVar12 < iVar25) goto LAB_1098541a8;
              *(int *)(lVar17 + lVar20 * 4) = iVar12;
            }
            lVar20 = lVar20 + 1;
            uVar33 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar20 < (long)uVar33);
          uVar36 = uVar33;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar20 = 0;
            do {
              iVar25 = *(int *)(param_2 + lVar20 * 4) + *(int *)(lVar17 + lVar20 * 4);
              *(int *)(lVar34 + lVar20 * 4) = iVar25;
              if (*(int *)(param_1 + 0x18) < iVar25) {
                iVar12 = -*(int *)(param_1 + 0x1c);
LAB_109854210:
                *(int *)(lVar34 + lVar20 * 4) = iVar25 + iVar12;
              }
              else if (iVar25 < *(int *)(param_1 + 0x14)) {
                iVar12 = *(int *)(param_1 + 0x1c);
                goto LAB_109854210;
              }
              lVar20 = lVar20 + 1;
              uVar33 = (ulong)*(int *)(param_1 + 0x10);
              uVar36 = uVar33;
            } while (lVar20 < (long)uVar33);
          }
        }
      }
      else {
        iVar25 = 0;
        lVar20 = *plVar2;
        uVar22 = uVar4;
        do {
          uVar23 = (ulong)uVar22;
          iVar12 = 2;
          if ((*(ulong *)(lVar20 + (ulong)(uVar22 >> 6) * 8) >> (uVar23 & 0x3f) & 1) == 0) {
            uVar6 = *(uint *)(*(long *)(plVar2[0x10] + 0x18) + uVar23 * 4);
            if (uVar6 != 0xffffffff) {
              lVar17 = plVar2[7];
              lVar32 = *plVar3;
              iVar5 = *(int *)(lVar32 + (ulong)*(uint *)(lVar17 + (ulong)uVar6 * 4) * 4);
              uVar8 = uVar6 - 2;
              if (0x55555555 < uVar6 * -0x55555555 + 0xaaaaaaab) {
                uVar8 = uVar6 + 1;
              }
              iVar7 = *(int *)(lVar32 + (ulong)*(uint *)(lVar17 + (ulong)uVar8 * 4) * 4);
              iVar1 = iVar12;
              if (0x55555555 < uVar6 * -0x55555555) {
                iVar1 = -1;
              }
              iVar1 = *(int *)(lVar32 + (ulong)*(uint *)(lVar17 + (ulong)(iVar1 + uVar6) * 4) * 4);
              if (((long)iVar5 < (long)uVar35 && (long)iVar7 < (long)uVar35) &&
                  (long)iVar1 < (long)uVar35) {
                if (0 < (int)param_5) {
                  piVar21 = (int *)(param_3 + (long)(int)(iVar7 * param_5) * 4);
                  piVar27 = (int *)(param_3 + (long)(int)(iVar1 * param_5) * 4);
                  piVar29 = (int *)(param_3 + (long)(int)(iVar5 * param_5) * 4);
                  piVar31 = piVar13;
                  uVar24 = uVar9;
                  do {
                    *piVar31 = (*piVar27 + *piVar21) - *piVar29;
                    uVar24 = uVar24 - 1;
                    piVar26 = piVar11;
                    piVar21 = piVar21 + 1;
                    piVar28 = piVar13;
                    piVar27 = piVar27 + 1;
                    uVar30 = uVar9;
                    piVar29 = piVar29 + 1;
                    piVar31 = piVar31 + 1;
                  } while (uVar24 != 0);
                  do {
                    *piVar26 = *piVar28 + *piVar26;
                    uVar30 = uVar30 - 1;
                    piVar26 = piVar26 + 1;
                    piVar28 = piVar28 + 1;
                  } while (uVar30 != 0);
                }
                iVar25 = iVar25 + 1;
              }
            }
          }
          lVar17 = 2;
          if (0x55555555 < uVar22 * -0x55555555) {
            lVar17 = 0xffffffff;
          }
          uVar24 = lVar17 + uVar23 & 0xffffffff;
          if (((uVar24 == 0xffffffff) ||
              ((*(ulong *)(lVar20 + (uVar24 >> 6) * 8) >> (lVar17 + uVar23 & 0x3f) & 1) != 0)) ||
             (iVar5 = *(int *)(*(long *)(plVar2[0x10] + 0x18) + uVar24 * 4), iVar5 == -1)) break;
          if (0x55555555 < (uint)(iVar5 * -0x55555555)) {
            iVar12 = -1;
          }
          uVar22 = iVar12 + iVar5;
        } while (uVar22 != uVar4 && uVar22 != 0xffffffff);
        if (iVar25 == 0) goto LAB_109854170;
        piVar21 = piVar11;
        uVar23 = uVar9;
        if (0 < (int)param_5) {
          do {
            iVar12 = 0;
            if (iVar25 != 0) {
              iVar12 = *piVar21 / iVar25;
            }
            *piVar21 = iVar12;
            uVar23 = uVar23 - 1;
            piVar21 = piVar21 + 1;
          } while (uVar23 != 0);
        }
        if (0 < (int)uVar36) {
          lVar20 = 0;
          do {
            iVar12 = piVar11[lVar20];
            iVar25 = *(int *)(param_1 + 0x18);
            if (iVar25 < iVar12) {
              lVar17 = *(long *)(param_1 + 0x28);
LAB_1098540f0:
              *(int *)(lVar17 + lVar20 * 4) = iVar25;
            }
            else {
              iVar25 = *(int *)(param_1 + 0x14);
              lVar17 = *(long *)(param_1 + 0x28);
              if (iVar12 < iVar25) goto LAB_1098540f0;
              *(int *)(lVar17 + lVar20 * 4) = iVar12;
            }
            lVar20 = lVar20 + 1;
            uVar33 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar20 < (long)uVar33);
          uVar36 = uVar33;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar20 = 0;
            do {
              iVar25 = *(int *)(param_2 + lVar20 * 4) + *(int *)(lVar17 + lVar20 * 4);
              *(int *)(lVar34 + lVar20 * 4) = iVar25;
              if (*(int *)(param_1 + 0x18) < iVar25) {
                iVar12 = -*(int *)(param_1 + 0x1c);
LAB_109854158:
                *(int *)(lVar34 + lVar20 * 4) = iVar25 + iVar12;
              }
              else if (iVar25 < *(int *)(param_1 + 0x14)) {
                iVar12 = *(int *)(param_1 + 0x1c);
                goto LAB_109854158;
              }
              lVar20 = lVar20 + 1;
              uVar33 = (ulong)*(int *)(param_1 + 0x10);
              uVar36 = uVar33;
            } while (lVar20 < (long)uVar33);
          }
        }
      }
      uVar35 = uVar35 + 1;
      lVar34 = lVar34 + lVar16;
      param_2 = param_2 + lVar16;
      lVar14 = lVar14 + lVar16;
    } while (uVar35 != (uVar15 >> 2 & 0x7fffffff));
  }
  __ZdaPv(piVar13);
  __ZdaPv(piVar11);
  return 1;
}



/* Entry: 1098542a4; end: 10985436b;  */

undefined8 * FUN_1098542a4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b150c8;
  lVar1 = 0xa8;
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      __ZdlPv();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x48);
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10985436c; end: 1098543a3;  */

undefined8 FUN_10985436c(void)

{
  return 4;
}



/* Entry: 1098543a4; end: 1098544eb;  */

void FUN_1098543a4(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  uint uStack_64;
  
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar8 = param_2[2] + 1;
    if (param_2[1] < lVar8) {
      return;
    }
    cVar1 = *(char *)(*param_2 + param_2[2]);
    param_2[2] = lVar8;
    if (cVar1 != '\0') {
      return;
    }
  }
  lVar8 = 0;
  do {
    iVar2 = 1;
    FUN_109854d50(1,&uStack_64,param_2);
    if (iVar2 == 0) {
      return;
    }
    uVar6 = (ulong)uStack_64;
    plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 0x80);
    if ((uint)((ulong)(plVar3[1] - *plVar3) >> 2) < uStack_64) {
      return;
    }
    if (uStack_64 != 0) {
      plVar3 = (long *)(param_1 + 0x60 + lVar8 * 0x18);
      func_0x000104bec9f0(plVar3,uVar6,0);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      iVar2 = (int)&uStack_80;
      FUN_10985d80c(&uStack_80,param_2);
      if (iVar2 == 0) {
        return;
      }
      uVar9 = 0;
      lVar7 = *plVar3;
      do {
        iVar2 = (int)&uStack_80;
        FUN_10985d980();
        uVar4 = uVar9 >> 6;
        uVar5 = 1L << (uVar9 & 0x3f);
        if (iVar2 == 0) {
          uVar5 = *(ulong *)(lVar7 + uVar4 * 8) & (uVar5 ^ 0xffffffffffffffff);
        }
        else {
          uVar5 = *(ulong *)(lVar7 + uVar4 * 8) | uVar5;
        }
        *(ulong *)(lVar7 + uVar4 * 8) = uVar5;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  FUN_109853bc4(param_1 + 0x10,param_2);
  return;
}



/* Entry: 1098544ec; end: 109854d4f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1098544ec(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  uint uVar12;
  uint *puVar13;
  long *plVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  long *plVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  int *piVar31;
  long lVar32;
  int *piVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint *puVar38;
  uint *puVar39;
  long lVar40;
  uint uStack_11c;
  undefined8 uStack_100;
  long lStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long alStack_d0 [14];
  
  alStack_d0[0xc] = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(uint *)(param_1 + 0x10) = param_5;
  puVar38 = (uint *)(long)(int)param_5;
  func_0x000108a5942c(param_1 + 0x28,puVar38);
  lVar34 = 0;
  alStack_d0[9] = 0;
  alStack_d0[8] = 0;
  alStack_d0[0xb] = 0;
  alStack_d0[10] = 0;
  alStack_d0[5] = 0;
  alStack_d0[4] = 0;
  alStack_d0[7] = 0;
  alStack_d0[6] = 0;
  alStack_d0[1] = 0;
  alStack_d0[0] = 0;
  alStack_d0[3] = 0;
  alStack_d0[2] = 0;
  do {
    uStack_e8 = 0;
    FUN_1094f81d8((long)alStack_d0 + lVar34,puVar38,&uStack_e8);
    lVar34 = lVar34 + 0x18;
  } while (lVar34 != 0x60);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar34 = 0;
    do {
      iVar28 = *(int *)(alStack_d0[0] + lVar34 * 4);
      iVar26 = *(int *)(param_1 + 0x18);
      if (iVar26 < iVar28) {
        lVar17 = *(long *)(param_1 + 0x28);
LAB_1098545b4:
        *(int *)(lVar17 + lVar34 * 4) = iVar26;
      }
      else {
        iVar26 = *(int *)(param_1 + 0x14);
        lVar17 = *(long *)(param_1 + 0x28);
        if (iVar28 < iVar26) goto LAB_1098545b4;
        *(int *)(lVar17 + lVar34 * 4) = iVar28;
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 < *(int *)(param_1 + 0x10));
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar34 = 0;
      do {
        iVar26 = *(int *)(param_2 + lVar34 * 4) + *(int *)(lVar17 + lVar34 * 4);
        *(int *)(param_3 + lVar34 * 4) = iVar26;
        if (*(int *)(param_1 + 0x18) < iVar26) {
          iVar28 = -*(int *)(param_1 + 0x1c);
LAB_109854618:
          *(int *)(param_3 + lVar34 * 4) = iVar26 + iVar28;
        }
        else if (iVar26 < *(int *)(param_1 + 0x14)) {
          iVar28 = *(int *)(param_1 + 0x1c);
          goto LAB_109854618;
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 < *(int *)(param_1 + 0x10));
    }
  }
  plVar1 = *(long **)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x50);
  uStack_100._0_4_ = 0;
  plVar14 = &uStack_100;
  FUN_1092cd11c(&uStack_e8,4);
  puVar13 = puVar38;
  FUN_10925b8c4(&uStack_100);
  lVar34 = **(long **)(param_1 + 0x58);
  uVar20 = (*(long **)(param_1 + 0x58))[1] - lVar34;
  puVar18 = (uint *)((long)uVar20 >> 2);
  if (1 < (int)puVar18) {
    uStack_11c = 0;
    piVar6 = (int *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    puVar24 = (uint *)(uVar20 >> 2 & 0x7fffffff);
    if (puVar18 < (uint *)0x2) {
      puVar18 = (uint *)0x1;
    }
    lVar40 = (long)puVar38 * 4;
    uVar20 = (ulong)param_5;
    lVar7 = CONCAT44(uStack_e4,uStack_e8);
    puVar39 = (uint *)0x1;
    iVar26 = 1;
    lVar17 = param_3 + (long)puVar38 * 4;
    lVar35 = param_2 + (long)puVar38 * 4;
    lVar36 = param_3;
    do {
      if (puVar39 == puVar18) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x109854ce4);
        (*pcVar11)();
      }
      uVar12 = *(uint *)(lVar34 + (long)puVar39 * 4);
      uVar19 = (ulong)uVar12;
      if (uVar12 == 0xffffffff) {
LAB_109854b60:
        iVar15 = (int)puVar39;
LAB_109854b64:
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar21 = 0;
          lVar22 = param_3 + (long)(int)(iVar15 * param_5) * 4;
          do {
            iVar3 = *(int *)(lVar36 + lVar21 * 4);
            iVar28 = *(int *)(param_1 + 0x18);
            if (iVar28 < iVar3) {
              lVar23 = *(long *)(param_1 + 0x28);
LAB_109854bb0:
              *(int *)(lVar23 + lVar21 * 4) = iVar28;
            }
            else {
              iVar28 = *(int *)(param_1 + 0x14);
              lVar23 = *(long *)(param_1 + 0x28);
              if (iVar3 < iVar28) goto LAB_109854bb0;
              *(int *)(lVar23 + lVar21 * 4) = iVar3;
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar21 = 0;
            do {
              iVar28 = *(int *)(param_2 + (long)(int)(iVar15 * param_5) * 4 + lVar21 * 4) +
                       *(int *)(lVar23 + lVar21 * 4);
              *(int *)(lVar22 + lVar21 * 4) = iVar28;
              if (*(int *)(param_1 + 0x18) < iVar28) {
                iVar3 = -*(int *)(param_1 + 0x1c);
LAB_109854c14:
                *(int *)(lVar22 + lVar21 * 4) = iVar28 + iVar3;
              }
              else if (iVar28 < *(int *)(param_1 + 0x14)) {
                iVar3 = *(int *)(param_1 + 0x1c);
                goto LAB_109854c14;
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < *(int *)(param_1 + 0x10));
          }
        }
      }
      else {
        uVar37 = 0;
        lVar21 = *plVar1;
        lVar22 = 2;
        if (0x55555555 < uVar12 * -0x55555555) {
          lVar22 = 0xffffffff;
        }
        uVar27 = lVar22 + uVar19;
        bVar9 = true;
        do {
          if ((*(ulong *)(lVar21 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) == 0) {
            uVar29 = *(uint *)(*(long *)(plVar1[0x10] + 0x18) + uVar19 * 4);
            if (uVar29 != 0xffffffff) {
              lVar23 = plVar1[7];
              lVar22 = *plVar2;
              iVar28 = *(int *)(lVar22 + (ulong)*(uint *)(lVar23 + (ulong)uVar29 * 4) * 4);
              lVar32 = (long)iVar28;
              uVar5 = uVar29 - 2;
              if (0x55555555 < uVar29 * -0x55555555 + 0xaaaaaaab) {
                uVar5 = uVar29 + 1;
              }
              iVar3 = *(int *)(lVar22 + (ulong)*(uint *)(lVar23 + (ulong)uVar5 * 4) * 4);
              iVar15 = 2;
              if (0x55555555 < uVar29 * -0x55555555) {
                iVar15 = -1;
              }
              uVar29 = *(uint *)(lVar22 + (ulong)*(uint *)(lVar23 + (ulong)(iVar15 + uVar29) * 4) *
                                          4);
              plVar14 = (long *)(ulong)uVar29;
              puVar38 = (uint *)(long)iVar3;
              puVar13 = (uint *)(long)(int)uVar29;
              if ((((lVar32 < (long)puVar39 && puVar39 != puVar38) &&
                   ((long)puVar39 <= lVar32 || (long)puVar38 <= (long)puVar39)) &&
                  puVar39 != puVar13) &&
                  (((long)puVar39 <= lVar32 || (long)puVar39 <= (long)puVar38) ||
                  (long)puVar13 <= (long)puVar39)) {
                if (0 < (int)param_5) {
                  uVar30 = uVar20;
                  piVar16 = (int *)(param_3 + (long)(int)(iVar28 * param_5) * 4);
                  puVar38 = (uint *)alStack_d0[(long)(int)uVar37 * 3];
                  piVar31 = (int *)(param_3 + (long)(int)(iVar3 * param_5) * 4);
                  piVar33 = (int *)(param_3 + (long)(int)(uVar29 * param_5) * 4);
                  do {
                    uVar29 = (*piVar33 + *piVar31) - *piVar16;
                    plVar14 = (long *)(ulong)uVar29;
                    *puVar38 = uVar29;
                    uVar30 = uVar30 - 1;
                    puVar13 = (uint *)0x0;
                    piVar16 = piVar16 + 1;
                    puVar38 = puVar38 + 1;
                    piVar31 = piVar31 + 1;
                    piVar33 = piVar33 + 1;
                  } while (uVar30 != 0);
                }
                uVar37 = uVar37 + 1;
                if (uVar37 == 4) goto LAB_109854994;
              }
            }
          }
          iVar28 = (int)uVar19;
          if (bVar9) {
            uVar29 = iVar28 - 2;
            if (0x55555555 < (uint)((iVar28 + 1) * -0x55555555)) {
              uVar29 = iVar28 + 1;
            }
            if (((uVar29 == 0xffffffff) ||
                ((*(ulong *)(lVar21 + (ulong)(uVar29 >> 6) * 8) >> ((ulong)uVar29 & 0x3f) & 1) != 0)
                ) || (iVar28 = *(int *)(*(long *)(plVar1[0x10] + 0x18) + (ulong)uVar29 * 4),
                     iVar28 == -1)) {
LAB_1098547cc:
              uVar29 = 0xffffffff;
            }
            else {
              uVar29 = iVar28 - 2;
              if (0x55555555 < (uint)((iVar28 + 1) * -0x55555555)) {
                uVar29 = iVar28 + 1;
              }
            }
          }
          else {
            uVar29 = 0xffffffff;
            lVar22 = 2;
            if (0x55555555 < (uint)(iVar28 * -0x55555555)) {
              lVar22 = 0xffffffff;
            }
            uVar30 = lVar22 + uVar19 & 0xffffffff;
            if (uVar30 != 0xffffffff) {
              if (((*(ulong *)(lVar21 + (uVar30 >> 6) * 8) >> (lVar22 + uVar19 & 0x3f) & 1) != 0) ||
                 (iVar28 = *(int *)(*(long *)(plVar1[0x10] + 0x18) + uVar30 * 4), iVar28 == -1))
              goto LAB_1098547cc;
              if ((uint)(iVar28 * -0x55555555) < 0x55555556) {
                uVar29 = iVar28 + 2;
              }
              else {
                uVar29 = iVar28 - 1;
              }
            }
          }
          if (uVar29 == uVar12) break;
          bVar10 = (bool)(uVar29 == 0xffffffff & bVar9);
          bVar8 = (bool)(bVar10 ^ 1);
          if (bVar10) {
            uVar29 = 0xffffffff;
          }
          uVar19 = (ulong)uVar29;
          bVar9 = (bool)(bVar8 & bVar9);
          if ((!bVar8) && ((uVar27 & 0xffffffff) != 0xffffffff)) {
            if (((*(ulong *)(lVar21 + (uVar27 >> 6 & 0x3ffffff) * 8) & 1L << (uVar27 & 0x3f)) != 0)
               || (iVar28 = *(int *)(*(long *)(plVar1[0x10] + 0x18) + (uVar27 & 0xffffffff) * 4),
                  iVar28 == -1)) break;
            if ((uint)(iVar28 * -0x55555555) < 0x55555556) {
              bVar9 = false;
              uVar19 = (ulong)(iVar28 + 2);
            }
            else {
              bVar9 = false;
              uVar19 = (ulong)(iVar28 - 1);
            }
          }
        } while ((int)uVar19 != -1);
        if ((int)uVar37 < 1) goto LAB_109854b60;
LAB_109854994:
        if (0 < (int)param_5) {
          puVar13 = (uint *)((ulong)param_5 << 2);
          _bzero();
        }
        uVar19 = 0;
        iVar28 = 0;
        uVar12 = uVar37 - 1;
        plVar25 = (long *)(param_1 + 0x60 + (ulong)uVar12 * 0x18);
        uVar27 = plVar25[1];
        do {
          iVar15 = *(int *)(lVar7 + (ulong)uVar12 * 4);
          uVar30 = (ulong)iVar15;
          *(int *)(lVar7 + (ulong)uVar12 * 4) = iVar15 + 1;
          if (uVar27 <= uVar30) goto LAB_109854c58;
          if (((*(ulong *)(*plVar25 + (uVar30 >> 6) * 8) >> (uVar30 & 0x3f) & 1) == 0) &&
             (iVar28 = iVar28 + 1, 0 < (int)param_5)) {
            piVar16 = (int *)alStack_d0[uVar19 * 3];
            puVar38 = (uint *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
            uVar30 = uVar20;
            do {
              plVar14 = (long *)(ulong)*puVar38;
              uVar29 = *piVar16 + *puVar38;
              puVar13 = (uint *)(ulong)uVar29;
              *puVar38 = uVar29;
              uVar30 = uVar30 - 1;
              piVar16 = piVar16 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar30 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar37);
        iVar15 = iVar26;
        if (iVar28 == 0) goto LAB_109854b64;
        piVar16 = piVar6;
        uVar19 = uVar20;
        if (0 < (int)param_5) {
          do {
            iVar15 = 0;
            if (iVar28 != 0) {
              iVar15 = *piVar16 / iVar28;
            }
            *piVar16 = iVar15;
            uVar19 = uVar19 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar19 != 0);
        }
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar22 = 0;
          do {
            iVar15 = piVar6[lVar22];
            iVar28 = *(int *)(param_1 + 0x18);
            if (iVar28 < iVar15) {
              lVar21 = *(long *)(param_1 + 0x28);
LAB_109854ae4:
              *(int *)(lVar21 + lVar22 * 4) = iVar28;
            }
            else {
              iVar28 = *(int *)(param_1 + 0x14);
              lVar21 = *(long *)(param_1 + 0x28);
              if (iVar15 < iVar28) goto LAB_109854ae4;
              *(int *)(lVar21 + lVar22 * 4) = iVar15;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar22 = 0;
            do {
              iVar28 = *(int *)(lVar35 + lVar22 * 4) + *(int *)(lVar21 + lVar22 * 4);
              *(int *)(lVar17 + lVar22 * 4) = iVar28;
              if (*(int *)(param_1 + 0x18) < iVar28) {
                iVar15 = -*(int *)(param_1 + 0x1c);
LAB_109854b48:
                *(int *)(lVar17 + lVar22 * 4) = iVar28 + iVar15;
              }
              else if (iVar28 < *(int *)(param_1 + 0x14)) {
                iVar15 = *(int *)(param_1 + 0x1c);
                goto LAB_109854b48;
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)(param_1 + 0x10));
          }
        }
      }
      puVar39 = (uint *)((long)puVar39 + 1);
      iVar26 = iVar26 + 1;
      lVar17 = lVar17 + lVar40;
      lVar35 = lVar35 + lVar40;
      lVar36 = lVar36 + lVar40;
      uStack_11c = (uint)(puVar24 <= puVar39);
    } while (puVar39 != puVar24);
  }
  uStack_11c = 1;
LAB_109854c58:
  if (CONCAT44(uStack_100._4_4_,(undefined4)uStack_100) != 0) {
    lStack_f8 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    __ZdlPv();
  }
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    lStack_e0 = CONCAT44(uStack_e4,uStack_e8);
    __ZdlPv();
  }
  lVar34 = 0;
  do {
    lVar17 = *(long *)((long)alStack_d0 + lVar34 + 0x48);
    if (lVar17 != 0) {
      *(long *)((long)alStack_d0 + lVar34 + 0x50) = lVar17;
      __ZdlPv();
    }
    uVar12 = (uint)lVar17;
    lVar34 = lVar34 + -0x18;
  } while (lVar34 != -0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_d0[0xc]) {
    ___stack_chk_fail();
    if (CONCAT44(uStack_e4,uStack_e8) != 0) {
      lStack_e0 = CONCAT44(uStack_e4,uStack_e8);
      __ZdlPv();
    }
    lVar34 = 0;
    do {
      lVar17 = *(long *)((long)alStack_d0 + lVar34 + 0x48);
      if (lVar17 != 0) {
        *(long *)((long)alStack_d0 + lVar34 + 0x50) = lVar17;
        __ZdlPv();
      }
      lVar34 = lVar34 + -0x18;
    } while (lVar34 != -0x60);
    __Unwind_Resume();
    if (uVar12 < 6) {
      lVar34 = plVar14[2] + 1;
      if (plVar14[1] < lVar34) {
        return 0;
      }
      bVar4 = *(byte *)(*plVar14 + plVar14[2]);
      uVar37 = (uint)bVar4;
      plVar14[2] = lVar34;
      if ((char)bVar4 < '\0') {
        uVar20 = (ulong)(uVar12 + 1);
        FUN_109854d50(uVar20,puVar13);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        uVar37 = uVar37 & 0x7f | *puVar13 << 7;
      }
      *puVar13 = uVar37;
      return 1;
    }
    return 0;
  }
  return (ulong)uStack_11c;
}



/* Entry: 109854d50; end: 109854e87;  */

ulong FUN_109854d50(uint param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (5 < param_1) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar4 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar3 = (ulong)(param_1 + 1);
      FUN_109854d50(uVar3,param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = uVar4 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar4;
    return 1;
  }
  return 0;
}



/* Entry: 109854e88; end: 109854f03;  */

undefined8 FUN_109854e88(void)

{
  return 3;
}



/* Entry: 109854f04; end: 10985504f;  */

void FUN_109854f04(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  uint uStack_54;
  
  iVar3 = (int)&uStack_70;
  uStack_54 = 0;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar10 = param_2[2] + 4;
    if (param_2[1] < lVar10) {
      return;
    }
    uVar2 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar10;
  }
  else {
    iVar4 = 1;
    FUN_109854d50(1,&uStack_54,param_2);
    uVar2 = uStack_54;
    if (iVar4 == 0) {
      return;
    }
  }
  if ((uVar2 != 0) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x48) + 0x80),
     uVar2 <= (uint)((ulong)(plVar6[1] - *plVar6) >> 2))) {
    func_0x000104bec9f0(param_1 + 0x80,(ulong)uVar2,0);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_10985d80c(&uStack_70,param_2);
    if (iVar3 != 0) {
      uVar9 = 0;
      uVar12 = 0;
      lVar10 = *(long *)(param_1 + 0x80);
      uVar11 = 1;
      do {
        uVar5 = 0;
        FUN_10985d980();
        uVar1 = uVar12 ^ uVar5;
        uVar7 = uVar9 >> 6;
        uVar8 = 1L << (uVar9 & 0x3f);
        if ((uVar1 & 1) == 0) {
          uVar8 = *(ulong *)(lVar10 + uVar7 * 8) & (uVar8 ^ 0xffffffffffffffff);
        }
        else {
          uVar8 = *(ulong *)(lVar10 + uVar7 * 8) | uVar8;
        }
        uVar12 = uVar11 ^ uVar5;
        *(ulong *)(lVar10 + uVar7 * 8) = uVar8;
        uVar9 = uVar9 + 1;
        uVar11 = uVar1;
      } while (uVar2 != uVar9);
      FUN_109853bc4(param_1 + 0x10,param_2);
    }
  }
  return;
}



/* Entry: 109855050; end: 109855697;  */

undefined8 *
FUN_109855050(long param_1,ulong param_2,long param_3,float *param_4,int param_5,undefined8 param_6)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  float *pfVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float afStack_128 [4];
  float afStack_118 [4];
  float afStack_108 [4];
  float afStack_f8 [4];
  float afStack_e8 [4];
  float afStack_d8 [4];
  float afStack_c8 [2];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3;
  if (param_5 == 2) {
    *(undefined4 *)(param_1 + 0x78) = 2;
    *(undefined8 *)(param_1 + 0x68) = param_6;
    uVar9 = 8;
    __Znam();
    uVar13 = (uint)lVar10;
    lVar10 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar9;
    if (lVar10 != 0) {
      __ZdaPv();
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
    uVar12 = 2;
    func_0x000108a5942c(param_1 + 0x28);
    uVar15 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
    if (0 < (int)(uVar15 >> 2)) {
      uVar23 = 0;
      uVar21 = param_2;
      lVar24 = param_3;
      do {
        param_2 = 0x55555556;
        puVar11 = (undefined8 *)0xaaaaaaab;
        uVar13 = 0xffffffff;
        lVar10 = **(long **)(param_1 + 0x58);
        if ((ulong)((*(long **)(param_1 + 0x58))[1] - lVar10 >> 2) <= uVar23) {
LAB_109855690:
          FUN_109853c48();
          goto LAB_109855694;
        }
        uVar13 = *(uint *)(lVar10 + uVar23 * 4);
        if (uVar13 == 0xffffffff) {
          uVar14 = 0xffffffff;
          uVar12 = 0xffffffff;
        }
        else {
          uVar14 = uVar13 - 2;
          if (0x55555555 < uVar13 * -0x55555555 + 0xaaaaaaab) {
            uVar14 = uVar13 + 1;
          }
          if (uVar13 * -0x55555555 < 0x55555556) {
            uVar12 = (ulong)uVar13 + 2;
          }
          else {
            uVar12 = (ulong)uVar13 + 0xffffffff;
          }
        }
        lVar19 = *(long *)(*(long *)(param_1 + 0x48) + 0x38);
        uVar16 = (ulong)*(int *)(lVar19 + (ulong)uVar14 * 4);
        lVar10 = **(long **)(param_1 + 0x50);
        uVar20 = (*(long **)(param_1 + 0x50))[1] - lVar10 >> 2;
        if ((uVar20 <= uVar16) ||
           (uVar12 = (ulong)*(int *)(lVar19 + (uVar12 & 0xffffffff) * 4), uVar20 <= uVar12)) {
          uVar13 = 0xffffffff;
          FUN_1092e2168();
          goto LAB_109855690;
        }
        iVar25 = *(int *)(lVar10 + uVar16 * 4);
        iVar6 = *(int *)(lVar10 + uVar12 * 4);
        iVar22 = (int)uVar23;
        if (iVar6 < iVar22 && iVar25 < iVar22) {
          piVar17 = (int *)(param_3 + (long)(*(int *)(param_1 + 0x78) * iVar25) * 4);
          fVar31 = (float)*piVar17;
          fVar32 = (float)piVar17[1];
          piVar17 = (int *)(param_3 + (long)(*(int *)(param_1 + 0x78) * iVar6) * 4);
          fVar33 = (float)*piVar17;
          fVar34 = (float)piVar17[1];
          afStack_c8[0] = fVar33;
          afStack_c8[1] = fVar34;
          bVar8 = true;
          pfVar18 = afStack_c8;
          fVar26 = fVar31;
          do {
            fVar29 = fVar26;
            fVar27 = *pfVar18;
            if (!bVar8) break;
            bVar8 = false;
            pfVar18 = afStack_c8 + 1;
            fVar26 = fVar32;
          } while (fVar27 == fVar29);
          if (fVar27 == fVar29) {
            lVar10 = 0;
            uStack_c0 = 0x100000000;
            piVar17 = *(int **)(param_1 + 0x70);
            do {
              fVar26 = afStack_c8[*(int *)((long)&uStack_c0 + lVar10)];
              bVar8 = true;
              if ((fVar26 <= 2.1474836e+09) && (bVar8 = true, !NAN(fVar26))) {
                bVar8 = false;
              }
              bVar7 = true;
              if ((!bVar8) && (bVar7 = false, !NAN(fVar26))) {
                bVar7 = fVar26 < -2.1474836e+09;
              }
              iVar25 = -0x80000000;
              if (!bVar7) {
                iVar25 = (int)fVar26;
              }
              piVar17[*(int *)((long)&uStack_c0 + lVar10)] = iVar25;
              lVar10 = lVar10 + 4;
            } while (lVar10 != 8);
          }
          else {
            lVar10 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) +
                                     (-(uVar23 >> 0x1f & 1) & 0xfffffffc00000000 |
                                     (uVar23 & 0xffffffff) << 2));
            uStack_c0 = 0;
            uStack_b8 = 0;
            if ((*(byte *)(lVar10 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + uVar12 * 4);
            }
            FUN_109855698(lVar10,uVar12,(long)*(char *)(lVar10 + 0x18),&uStack_c0);
            lVar10 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)iVar25 * 4);
            afStack_d8[0] = 0.0;
            afStack_d8[1] = 0.0;
            afStack_d8[2] = 0.0;
            if ((*(byte *)(lVar10 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + uVar12 * 4);
            }
            FUN_109855698(lVar10,uVar12,(long)*(char *)(lVar10 + 0x18),afStack_d8);
            lVar10 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)iVar6 * 4);
            afStack_e8[0] = 0.0;
            afStack_e8[1] = 0.0;
            afStack_e8[2] = 0.0;
            if ((*(byte *)(lVar10 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + uVar12 * 4);
            }
            param_4 = afStack_e8;
            FUN_109855698(lVar10,uVar12,(long)*(char *)(lVar10 + 0x18));
            lVar10 = 0;
            afStack_f8[2] = 0.0;
            afStack_f8[0] = 0.0;
            afStack_f8[1] = 0.0;
            do {
              *(float *)((long)afStack_f8 + lVar10) =
                   *(float *)((long)afStack_e8 + lVar10) - *(float *)((long)afStack_d8 + lVar10);
              lVar10 = lVar10 + 4;
            } while (lVar10 != 0xc);
            lVar19 = 0;
            afStack_108[2] = 0.0;
            afStack_108[0] = 0.0;
            afStack_108[1] = 0.0;
            param_2 = 0x55555556;
            lVar10 = 0xffffffff;
            do {
              *(float *)((long)afStack_108 + lVar19) =
                   *(float *)((long)&uStack_c0 + lVar19) - *(float *)((long)afStack_d8 + lVar19);
              lVar19 = lVar19 + 4;
            } while (lVar19 != 0xc);
            lVar19 = 0;
            fVar26 = 0.0;
            do {
              fVar26 = fVar26 + *(float *)((long)afStack_f8 + lVar19) *
                                *(float *)((long)afStack_f8 + lVar19);
              lVar19 = lVar19 + 4;
            } while (lVar19 != 0xc);
            if (*(int *)(param_1 + 0x98) < 0x102) {
LAB_10985540c:
              lVar19 = 0;
              fVar27 = 0.0;
              do {
                fVar27 = fVar27 + *(float *)((long)afStack_108 + lVar19) *
                                  *(float *)((long)afStack_f8 + lVar19);
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc);
              lVar19 = 0;
              afStack_128[2] = 0.0;
              afStack_128[0] = 0.0;
              afStack_128[1] = 0.0;
              fVar27 = fVar27 / fVar26;
              do {
                *(float *)((long)afStack_128 + lVar19) =
                     fVar27 * *(float *)((long)afStack_f8 + lVar19);
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc);
              lVar19 = 0;
              afStack_118[2] = 0.0;
              afStack_118[0] = 0.0;
              afStack_118[1] = 0.0;
              do {
                *(float *)((long)afStack_118 + lVar19) =
                     *(float *)((long)afStack_108 + lVar19) - *(float *)((long)afStack_128 + lVar19)
                ;
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc);
              lVar19 = 0;
              fVar29 = 0.0;
              do {
                fVar29 = fVar29 + *(float *)((long)afStack_118 + lVar19) *
                                  *(float *)((long)afStack_118 + lVar19);
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc);
              fVar29 = SQRT(fVar29 / fVar26);
            }
            else {
              fVar27 = 0.0;
              fVar29 = 0.0;
              if (0.0 < fVar26) goto LAB_10985540c;
            }
            if (*(long *)(param_1 + 0x88) == 0) goto LAB_109855640;
            fVar34 = fVar34 - fVar32;
            fVar33 = fVar33 - fVar31;
            uVar12 = *(long *)(param_1 + 0x88) - 1;
            uVar16 = *(ulong *)(*(long *)(param_1 + 0x80) + (uVar12 >> 6) * 8);
            *(ulong *)(param_1 + 0x88) = uVar12;
            bVar8 = (uVar16 & 1L << (uVar12 & 0x3f)) != 0;
            fVar26 = fVar34 * fVar29;
            if (bVar8) {
              fVar26 = -(fVar34 * fVar29);
            }
            fVar28 = -(fVar33 * fVar29);
            if (bVar8) {
              fVar28 = fVar33 * fVar29;
            }
            fVar26 = fVar31 + fVar27 * fVar33 + fVar26 + 0.5;
            dVar30 = (double)(long)fVar26;
            bVar8 = true;
            if ((dVar30 <= 2147483647.0) && (bVar8 = true, !NAN(dVar30))) {
              bVar8 = false;
            }
            bVar7 = true;
            if ((!bVar8) && (bVar7 = false, !NAN(dVar30))) {
              bVar7 = dVar30 < -2147483648.0;
            }
            iVar25 = -0x80000000;
            if (!bVar7) {
              iVar25 = (int)fVar26;
            }
            piVar17 = *(int **)(param_1 + 0x70);
            fVar26 = fVar32 + fVar27 * fVar34 + fVar28 + 0.5;
            dVar30 = (double)(long)fVar26;
            bVar8 = true;
            if ((dVar30 <= 2147483647.0) && (bVar8 = true, !NAN(dVar30))) {
              bVar8 = false;
            }
            bVar7 = true;
            if ((!bVar8) && (bVar7 = false, !NAN(dVar30))) {
              bVar7 = dVar30 < -2147483648.0;
            }
            iVar6 = -0x80000000;
            if (!bVar7) {
              iVar6 = (int)fVar26;
            }
            *piVar17 = iVar25;
            piVar17[1] = iVar6;
          }
        }
        else {
          if (iVar22 <= iVar25) {
            if (uVar23 == 0) {
              piVar17 = *(int **)(param_1 + 0x70);
              if (0 < *(int *)(param_1 + 0x78)) {
                lVar10 = 0;
                do {
                  piVar17[lVar10] = 0;
                  lVar10 = lVar10 + 1;
                } while (lVar10 < *(int *)(param_1 + 0x78));
              }
              goto LAB_109855574;
            }
            iVar25 = iVar22 + -1;
          }
          iVar6 = *(int *)(param_1 + 0x78);
          piVar17 = *(int **)(param_1 + 0x70);
          if (0 < iVar6) {
            lVar10 = 0;
            do {
              piVar17[lVar10] = *(int *)(param_3 + (long)(iVar6 * iVar25) * 4 + lVar10 * 4);
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(param_1 + 0x78));
          }
        }
LAB_109855574:
        uVar12 = 0x55555556;
        uVar13 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar10 = 0;
          do {
            iVar6 = piVar17[lVar10];
            iVar25 = *(int *)(param_1 + 0x18);
            if (iVar25 < iVar6) {
              lVar19 = *(long *)(param_1 + 0x28);
LAB_1098555ac:
              *(int *)(lVar19 + lVar10 * 4) = iVar25;
            }
            else {
              iVar25 = *(int *)(param_1 + 0x14);
              lVar19 = *(long *)(param_1 + 0x28);
              if (iVar6 < iVar25) goto LAB_1098555ac;
              *(int *)(lVar19 + lVar10 * 4) = iVar6;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar10 = 0;
            do {
              iVar25 = *(int *)(uVar21 + lVar10 * 4) + *(int *)(lVar19 + lVar10 * 4);
              *(int *)(lVar24 + lVar10 * 4) = iVar25;
              if (*(int *)(param_1 + 0x18) < iVar25) {
                iVar6 = -*(int *)(param_1 + 0x1c);
LAB_109855610:
                *(int *)(lVar24 + lVar10 * 4) = iVar25 + iVar6;
              }
              else if (iVar25 < *(int *)(param_1 + 0x14)) {
                iVar6 = *(int *)(param_1 + 0x1c);
                goto LAB_109855610;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(param_1 + 0x10));
          }
        }
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 8;
        uVar21 = uVar21 + 8;
      } while (uVar23 != (uVar15 >> 2 & 0x7fffffff));
    }
    puVar11 = (undefined8 *)0x1;
    param_2 = uVar12;
  }
  else {
LAB_109855640:
    uVar13 = (uint)lVar10;
    puVar11 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return puVar11;
  }
LAB_109855694:
  ___stack_chk_fail();
  if (param_4 != (float *)0x0) {
    switch(*(undefined4 *)((long)puVar11 + 0x1c)) {
    case 1:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        uVar12 = 0;
        lVar10 = puVar11[5];
        lVar19 = puVar11[6];
        lVar24 = *(long *)*puVar11;
        pcVar3 = (char *)((long *)*puVar11)[1];
        do {
          pcVar1 = (char *)(lVar24 + lVar10 * (param_2 & 0xffffffff) + lVar19 + uVar12);
          if (pcVar3 <= pcVar1) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)(int)*pcVar1;
          fVar26 = fVar34 / 127.0;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 2:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        uVar12 = 0;
        lVar10 = puVar11[5];
        lVar19 = puVar11[6];
        lVar24 = *(long *)*puVar11;
        pbVar4 = (byte *)((long *)*puVar11)[1];
        do {
          pbVar2 = (byte *)(lVar24 + lVar10 * (param_2 & 0xffffffff) + lVar19 + uVar12);
          if (pbVar4 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)NEON_ucvtf((uint)*pbVar2);
          fVar26 = fVar34 / 255.0;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 3:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)(int)*(short *)(lVar24 + uVar12 * 2);
          fVar26 = fVar34 / 32767.0;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 2;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 4:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)NEON_ucvtf((uint)*(ushort *)(lVar24 + uVar12 * 2));
          fVar26 = fVar34 / 65535.0;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 2;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 5:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)*(int *)(lVar24 + uVar12 * 4);
          fVar26 = fVar34 * 4.656613e-10;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 4;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 6:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          fVar34 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + uVar12 * 4));
          fVar26 = fVar34 * 2.3283064e-10;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = fVar34;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 4;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 7:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          lVar19 = *(long *)(lVar24 + uVar12 * 8);
          fVar26 = (float)lVar19 / -9.223372e+18;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = (float)lVar19;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 8;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 8:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          uVar23 = *(ulong *)(lVar24 + uVar12 * 8);
          fVar26 = (float)uVar23 / 1.0;
          if (*(char *)(puVar11 + 4) == '\0') {
            fVar26 = (float)uVar23;
          }
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 8;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 9:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          param_4[uVar12] = *(float *)(lVar24 + uVar12 * 4);
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 4;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 10:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        uVar15 = ((long *)*puVar11)[1];
        lVar24 = *(long *)*puVar11 + puVar11[5] * (param_2 & 0xffffffff) + puVar11[6];
        do {
          if (uVar15 <= (ulong)(lVar24 + lVar10)) {
            return (undefined8 *)0x0;
          }
          param_4[uVar12] = (float)*(double *)(lVar24 + uVar12 * 8);
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
          lVar10 = lVar10 + 8;
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    case 0xb:
      uVar13 = uVar13 & 0xff;
      bVar5 = *(byte *)(puVar11 + 3);
      uVar14 = (uint)bVar5;
      if (uVar13 <= bVar5) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        uVar12 = 0;
        lVar10 = puVar11[5];
        lVar19 = puVar11[6];
        lVar24 = *(long *)*puVar11;
        pbVar4 = (byte *)((long *)*puVar11)[1];
        do {
          pbVar2 = (byte *)(lVar24 + lVar10 * (param_2 & 0xffffffff) + lVar19 + uVar12);
          if (pbVar4 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          fVar26 = (float)NEON_ucvtf((uint)*pbVar2);
          param_4[uVar12] = fVar26;
          uVar12 = uVar12 + 1;
          bVar5 = *(byte *)(puVar11 + 3);
          uVar14 = (uint)bVar5;
          if (uVar13 <= bVar5) {
            uVar14 = uVar13;
          }
        } while (uVar12 < uVar14);
      }
      uVar14 = (uint)bVar5;
      if (uVar14 < uVar13) {
        _bzero(param_4 + uVar14,(ulong)(~uVar14 + uVar13) * 4 + 4);
      }
      return (undefined8 *)0x1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 109855698; end: 10985574f;  */

undefined8 FUN_109855698(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  float fVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  
  if (param_4 != 0) {
    switch(*(undefined4 *)((long)param_1 + 0x1c)) {
    case 1:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar10 = 0;
        lVar9 = param_1[5];
        lVar12 = param_1[6];
        lVar3 = *(long *)*param_1;
        pcVar4 = (char *)((long *)*param_1)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar9 * (ulong)param_2 + lVar12 + uVar10);
          if (pcVar4 <= pcVar1) {
            return 0;
          }
          fVar14 = (float)(int)*pcVar1;
          fVar8 = fVar14 / 127.0;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar8 = fVar14;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar8;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 2:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar10 = 0;
        lVar9 = param_1[5];
        lVar12 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar6 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar9 * (ulong)param_2 + lVar12 + uVar10);
          if (pbVar6 <= pbVar2) {
            return 0;
          }
          fVar14 = (float)NEON_ucvtf((uint)*pbVar2);
          fVar8 = fVar14 / 255.0;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar8 = fVar14;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar8;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 3:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          fVar8 = (float)(int)*(short *)(lVar3 + uVar10 * 2);
          fVar14 = fVar8 / 32767.0;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar14 = fVar8;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar14;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 2;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 4:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + uVar10 * 2));
          fVar14 = fVar8 / 65535.0;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar14 = fVar8;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar14;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 2;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 5:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          fVar8 = (float)*(int *)(lVar3 + uVar10 * 4);
          fVar14 = fVar8 * 4.656613e-10;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar14 = fVar8;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar14;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 6:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + uVar10 * 4));
          fVar8 = fVar14 * 2.3283064e-10;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar8 = fVar14;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar8;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 7:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          lVar12 = *(long *)(lVar3 + uVar10 * 8);
          fVar8 = (float)lVar12 / -9.223372e+18;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar8 = (float)lVar12;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar8;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 8:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          uVar13 = *(ulong *)(lVar3 + uVar10 * 8);
          fVar8 = (float)uVar13 / 1.0;
          if (*(char *)(param_1 + 4) == '\0') {
            fVar8 = (float)uVar13;
          }
          *(float *)(param_4 + uVar10 * 4) = fVar8;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 9:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          *(undefined4 *)(param_4 + uVar10 * 4) = *(undefined4 *)(lVar3 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 4;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 10:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar9)) {
            return 0;
          }
          *(float *)(param_4 + uVar10 * 4) = (float)*(double *)(lVar3 + uVar10 * 8);
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar9 = lVar9 + 8;
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 0xb:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar10 = 0;
        lVar9 = param_1[5];
        lVar12 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar6 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar9 * (ulong)param_2 + lVar12 + uVar10);
          if (pbVar6 <= pbVar2) {
            return 0;
          }
          uVar15 = NEON_ucvtf((uint)*pbVar2);
          *(undefined4 *)(param_4 + uVar10 * 4) = uVar15;
          uVar10 = uVar10 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar10 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109855750; end: 109855ebf;  */

undefined8 FUN_109855750(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pcVar5 <= pcVar1) {
        return 0;
      }
      fVar9 = (float)(int)*pcVar1;
      fVar10 = fVar9 / 127.0;
      if (*(char *)(param_1 + 4) == '\0') {
        fVar10 = fVar9;
      }
      *(float *)(param_4 + uVar7 * 4) = fVar10;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 4,(ulong)(~uVar8 + param_3) * 4 + 4);
  }
  return 1;
}



/* Entry: 109855ec0; end: 109855f67;  */

undefined8 * FUN_109855ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b151d8;
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109855f68; end: 109855fe3;  */

undefined8 FUN_109855f68(void)

{
  return 5;
}



/* Entry: 109855fe4; end: 1098560eb;  */

long FUN_109855fe4(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_2[2] + 4;
  if (param_2[1] < lVar5) {
    return 0;
  }
  uVar2 = *(uint *)(*param_2 + param_2[2]);
  param_2[2] = lVar5;
  if ((int)uVar2 < 0) {
    lVar5 = 0;
  }
  else {
    func_0x000104bec9f0(param_1 + 0x78,(ulong)uVar2,0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puVar4 = &uStack_68;
    FUN_10985d80c(puVar4,param_2);
    lVar5 = 0;
    if ((int)puVar4 != 0) {
      if (uVar2 != 0) {
        uVar8 = 0;
        uVar10 = 0;
        lVar5 = *(long *)(param_1 + 0x78);
        uVar9 = 1;
        do {
          uVar3 = 0;
          FUN_10985d980();
          uVar1 = uVar10 ^ uVar3;
          uVar6 = uVar8 >> 6;
          uVar7 = 1L << (uVar8 & 0x3f);
          if ((uVar1 & 1) == 0) {
            uVar7 = *(ulong *)(lVar5 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
          }
          else {
            uVar7 = *(ulong *)(lVar5 + uVar6 * 8) | uVar7;
          }
          uVar10 = uVar9 ^ uVar3;
          *(ulong *)(lVar5 + uVar6 * 8) = uVar7;
          uVar8 = uVar8 + 1;
          uVar9 = uVar1;
        } while (uVar2 != uVar8);
      }
      lVar5 = param_1 + 0x10;
      FUN_109853bc4(lVar5,param_2);
    }
  }
  return lVar5;
}



/* Entry: 1098560ec; end: 109856687;  */

undefined8
FUN_1098560ec(long param_1,long param_2,long param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  bool bVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *extraout_x8;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  long *plVar38;
  double dVar39;
  float fVar40;
  long alStack_128 [25];
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    *(undefined4 *)(param_1 + 0x10) = 2;
    plVar21 = (long *)0x2;
    func_0x000108a5942c(param_1 + 0x28);
    uVar24 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
    if (0 < (int)(uVar24 >> 2)) {
      plVar38 = (long *)0x0;
      plVar19 = (long *)(uVar24 >> 2 & 0x7fffffff);
      lVar28 = param_3;
      do {
        iVar23 = (int)plVar21;
        lVar27 = **(long **)(param_1 + 0x58);
        if ((long *)((*(long **)(param_1 + 0x58))[1] - lVar27 >> 2) <= plVar38) {
LAB_109856684:
          FUN_109853c48();
          puVar10 = (undefined8 *)*plVar19;
          uVar25 = *(uint *)(plVar19[1] + (long)iVar23 * 4);
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          *extraout_x8 = 0;
          if ((*(byte *)((long)puVar10 + 100) & 1) == 0) {
            uVar25 = *(uint *)(puVar10[9] + (ulong)uVar25 * 4);
          }
          uVar24 = (ulong)uVar25;
          bVar14 = *(byte *)(puVar10 + 3);
          if (extraout_x8 != (undefined8 *)0x0) {
            switch(*(undefined4 *)((long)puVar10 + 0x1c)) {
            case 1:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                uVar31 = 0;
                lVar28 = puVar10[5];
                lVar30 = puVar10[6];
                lVar27 = *(long *)*puVar10;
                pcVar11 = (char *)((long *)*puVar10)[1];
                do {
                  pcVar3 = (char *)(lVar27 + lVar28 * uVar24 + lVar30 + uVar31);
                  if (pcVar11 <= pcVar3) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (long)*pcVar3;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 2:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                uVar31 = 0;
                lVar28 = puVar10[5];
                lVar30 = puVar10[6];
                lVar27 = *(long *)*puVar10;
                pbVar12 = (byte *)((long *)*puVar10)[1];
                do {
                  pbVar4 = (byte *)(lVar27 + lVar28 * uVar24 + lVar30 + uVar31);
                  if (pbVar12 <= pbVar4) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (ulong)*pbVar4;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 3:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (long)*(short *)(lVar27 + uVar31 * 2);
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 2;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 4:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (ulong)*(ushort *)(lVar27 + uVar31 * 2);
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 2;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 5:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (long)*(int *)(lVar27 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 4;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 6:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (ulong)*(uint *)(lVar27 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 4;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 7:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = *(undefined8 *)(lVar27 + uVar31 * 8);
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 8;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 8:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if ((uVar26 <= (ulong)(lVar27 + lVar28)) ||
                     (lVar30 = *(long *)(lVar27 + uVar31 * 8), lVar30 < 0)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = lVar30;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 8;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 9:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  fVar40 = *(float *)(lVar27 + uVar31 * 4);
                  if (9.223372e+18 <= fVar40) {
                    return 0;
                  }
                  if ((*(byte *)(puVar10 + 4) & 1) != 0) {
                    return 0;
                  }
                  if (fVar40 < -9.223372e+18) {
                    return 0;
                  }
                  if (0x7f7fffff < (uint)ABS(fVar40)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (long)fVar40;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 4;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 10:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                lVar28 = 0;
                uVar31 = 0;
                uVar26 = ((long *)*puVar10)[1];
                lVar27 = *(long *)*puVar10 + puVar10[5] * uVar24 + puVar10[6];
                do {
                  if (uVar26 <= (ulong)(lVar27 + lVar28)) {
                    return 0;
                  }
                  dVar39 = *(double *)(lVar27 + uVar31 * 8);
                  if (9.223372036854776e+18 <= dVar39) {
                    return 0;
                  }
                  if ((*(byte *)(puVar10 + 4) & 1) != 0) {
                    return 0;
                  }
                  if (dVar39 < -9.223372036854776e+18) {
                    return 0;
                  }
                  if (0x7fefffffffffffff < (ulong)ABS(dVar39)) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (long)dVar39;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                  lVar28 = lVar28 + 8;
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            case 0xb:
              uVar25 = (uint)bVar14;
              bVar14 = *(byte *)(puVar10 + 3);
              uVar22 = (uint)bVar14;
              if (uVar25 <= bVar14) {
                uVar22 = uVar25;
              }
              if (uVar22 != 0) {
                uVar31 = 0;
                lVar28 = puVar10[5];
                lVar30 = puVar10[6];
                lVar27 = *(long *)*puVar10;
                pbVar12 = (byte *)((long *)*puVar10)[1];
                do {
                  pbVar4 = (byte *)(lVar27 + lVar28 * uVar24 + lVar30 + uVar31);
                  if (pbVar12 <= pbVar4) {
                    return 0;
                  }
                  extraout_x8[uVar31] = (ulong)*pbVar4;
                  uVar31 = uVar31 + 1;
                  bVar14 = *(byte *)(puVar10 + 3);
                  uVar22 = (uint)bVar14;
                  if (uVar25 <= bVar14) {
                    uVar22 = uVar25;
                  }
                } while (uVar31 < uVar22);
              }
              uVar22 = (uint)bVar14;
              if (uVar22 < uVar25) {
                _bzero(extraout_x8 + uVar22,(ulong)(~uVar22 + uVar25) * 8 + 8);
              }
              return 1;
            }
          }
          return 0;
        }
        iVar13 = *(int *)(lVar27 + (long)plVar38 * 4);
        if (iVar13 == -1) {
          uVar22 = 0xffffffff;
          uVar25 = 0xffffffff;
        }
        else {
          uVar22 = iVar13 - 2;
          if (0x55555555 < iVar13 * -0x55555555 + 0xaaaaaaabU) {
            uVar22 = iVar13 + 1;
          }
          if ((uint)(iVar13 * -0x55555555) < 0x55555556) {
            uVar25 = iVar13 + 2;
          }
          else {
            uVar25 = iVar13 - 1;
          }
        }
        lVar30 = *(long *)(*(long *)(param_1 + 0x98) + 0x38);
        uVar24 = (ulong)*(int *)(lVar30 + (ulong)uVar22 * 4);
        lVar27 = **(long **)(param_1 + 0xa0);
        uVar31 = (*(long **)(param_1 + 0xa0))[1] - lVar27 >> 2;
        if ((uVar31 <= uVar24) ||
           (uVar26 = (ulong)*(int *)(lVar30 + (ulong)uVar25 * 4), uVar31 <= uVar26)) {
          FUN_1092e2168();
          goto LAB_109856684;
        }
        iVar23 = *(int *)(lVar27 + uVar24 * 4);
        iVar13 = *(int *)(lVar27 + uVar26 * 4);
        iVar37 = (int)plVar38;
        if (iVar13 < iVar37 && iVar23 < iVar37) {
          piVar2 = (int *)(param_3 + (long)iVar23 * 8);
          iVar6 = *piVar2;
          iVar8 = piVar2[1];
          uVar24 = (ulong)iVar6;
          piVar2 = (int *)(param_3 + (long)iVar13 * 8);
          iVar7 = *piVar2;
          iVar9 = piVar2[1];
          if (iVar7 == iVar6 && iVar9 == iVar8) {
            *(int *)(param_1 + 0x70) = iVar7;
            *(int *)(param_1 + 0x74) = iVar9;
          }
          else {
            uVar31 = (ulong)iVar8;
            FUN_109856688(alStack_128 + 0x15,param_1 + 0x60,plVar38);
            FUN_109856688(alStack_128 + 0x12,param_1 + 0x60,(long)iVar23);
            FUN_109856688(alStack_128 + 0xf,param_1 + 0x60,(long)iVar13);
            lVar27 = 0;
            alStack_128[0xc] = 0;
            alStack_128[0xd] = 0;
            alStack_128[0xe] = 0;
            do {
              *(long *)((long)alStack_128 + lVar27 + 0x60) =
                   *(long *)((long)alStack_128 + lVar27 + 0x78) -
                   *(long *)((long)alStack_128 + lVar27 + 0x90);
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            uVar26 = 0;
            plVar21 = (long *)0x7fffffffffffffff;
            do {
              lVar30 = *(long *)((long)alStack_128 + lVar27 + 0x60);
              uVar26 = uVar26 + lVar30 * lVar30;
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            if (uVar26 == 0) goto LAB_10985621c;
            lVar27 = 0;
            alStack_128[9] = 0;
            alStack_128[10] = 0;
            alStack_128[0xb] = 0;
            do {
              *(long *)((long)alStack_128 + lVar27 + 0x48) =
                   *(long *)((long)alStack_128 + lVar27 + 0xa8) -
                   *(long *)((long)alStack_128 + lVar27 + 0x90);
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            uVar32 = 0;
            do {
              uVar32 = uVar32 + *(long *)((long)alStack_128 + lVar27 + 0x48) *
                                *(long *)((long)alStack_128 + lVar27 + 0x60);
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            uVar33 = -uVar24;
            if (-1 < (long)uVar24) {
              uVar33 = uVar24;
            }
            uVar17 = -uVar31;
            if (-1 < (long)uVar31) {
              uVar17 = uVar31;
            }
            if (uVar33 <= uVar17) {
              uVar33 = uVar17;
            }
            uVar17 = 0;
            if (uVar26 != 0) {
              uVar17 = 0x7fffffffffffffff / uVar26;
            }
            if (uVar17 < uVar33) goto LAB_10985665c;
            uVar17 = (long)iVar7 - uVar24;
            uVar29 = (long)iVar9 - uVar31;
            uVar33 = -uVar17;
            if (-1 < (long)uVar17) {
              uVar33 = uVar17;
            }
            uVar34 = -uVar29;
            if (-1 < (long)uVar29) {
              uVar34 = uVar29;
            }
            if (uVar33 <= uVar34) {
              uVar33 = uVar34;
            }
            uVar34 = -uVar32;
            if (-1 < (long)uVar32) {
              uVar34 = uVar32;
            }
            uVar35 = 0;
            if (uVar33 != 0) {
              uVar35 = 0x7fffffffffffffff / uVar33;
            }
            if (uVar35 < uVar34) goto LAB_10985665c;
            uVar33 = -alStack_128[0xc];
            if (-1 < alStack_128[0xc]) {
              uVar33 = alStack_128[0xc];
            }
            uVar35 = -alStack_128[0xd];
            if (-1 < alStack_128[0xd]) {
              uVar35 = alStack_128[0xd];
            }
            uVar5 = -alStack_128[0xe];
            if (-1 < alStack_128[0xe]) {
              uVar5 = alStack_128[0xe];
            }
            if (uVar33 <= uVar35) {
              uVar33 = uVar35;
            }
            if (uVar33 <= uVar5) {
              uVar33 = uVar5;
            }
            uVar35 = 0;
            if (uVar33 != 0) {
              uVar35 = 0x7fffffffffffffff / uVar33;
            }
            if (uVar35 < uVar34) goto LAB_10985665c;
            lVar27 = 0;
            alStack_128[0] = 0;
            alStack_128[1] = 0;
            alStack_128[2] = 0;
            do {
              *(ulong *)((long)alStack_128 + lVar27) =
                   *(long *)((long)alStack_128 + lVar27 + 0x60) * uVar32;
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            alStack_128[3] = 0;
            alStack_128[4] = 0;
            alStack_128[5] = 0;
            do {
              lVar30 = 0;
              if (uVar26 != 0) {
                lVar30 = *(long *)((long)alStack_128 + lVar27) / (long)uVar26;
              }
              *(long *)((long)alStack_128 + lVar27 + 0x18) = lVar30;
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            alStack_128[6] = 0;
            alStack_128[7] = 0;
            alStack_128[8] = 0;
            plVar21 = alStack_128 + 6;
            do {
              *(long *)((long)plVar21 + lVar27) =
                   *(long *)((long)alStack_128 + lVar27 + 0x18) +
                   *(long *)((long)alStack_128 + lVar27 + 0x90);
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            alStack_128[3] = 0;
            alStack_128[4] = 0;
            alStack_128[5] = 0;
            do {
              *(long *)((long)alStack_128 + lVar27 + 0x18) =
                   *(long *)((long)alStack_128 + lVar27 + 0xa8) - *(long *)((long)plVar21 + lVar27);
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            lVar27 = 0;
            lVar30 = 0;
            do {
              lVar36 = *(long *)((long)alStack_128 + lVar27 + 0x18);
              lVar30 = lVar30 + lVar36 * lVar36;
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x18);
            uVar33 = lVar30 * uVar26;
            if (uVar33 == 0) {
              uVar34 = 0;
            }
            else {
              if (uVar33 == 1) {
                uVar34 = 1;
              }
              else {
                uVar34 = 1;
                uVar35 = uVar33;
                do {
                  uVar34 = uVar34 << 1;
                  bVar18 = 7 < uVar35;
                  uVar35 = uVar35 >> 2;
                } while (bVar18);
              }
              do {
                uVar35 = 0;
                if (uVar34 != 0) {
                  uVar35 = uVar33 / uVar34;
                }
                uVar34 = uVar35 + uVar34 >> 1;
              } while (uVar33 <= uVar34 * uVar34 && uVar34 * uVar34 - uVar33 != 0);
            }
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_10985665c;
            uVar33 = *(long *)(param_1 + 0x80) - 1;
            uVar35 = *(ulong *)(*(long *)(param_1 + 0x78) + (uVar33 >> 6) * 8);
            *(ulong *)(param_1 + 0x80) = uVar33;
            bVar18 = (uVar35 & 1L << (uVar33 & 0x3f)) == 0;
            lVar27 = -(uVar34 * uVar17);
            if (bVar18) {
              lVar27 = uVar34 * uVar17;
            }
            lVar30 = -(uVar34 * uVar29);
            if (!bVar18) {
              lVar30 = uVar34 * uVar29;
            }
            uVar15 = 0;
            if (uVar26 != 0) {
              uVar15 = (undefined4)
                       ((long)(uVar26 * uVar24 + uVar32 * uVar17 + lVar30) / (long)uVar26);
            }
            uVar16 = 0;
            if (uVar26 != 0) {
              uVar16 = (undefined4)
                       ((long)(uVar26 * uVar31 + uVar32 * uVar29 + lVar27) / (long)uVar26);
            }
            *(undefined4 *)(param_1 + 0x70) = uVar15;
            *(undefined4 *)(param_1 + 0x74) = uVar16;
          }
        }
        else {
LAB_10985621c:
          if (iVar23 < iVar37) {
            iVar23 = iVar23 << 1;
          }
          else {
            if (plVar38 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0x70) = 0;
              goto LAB_109856590;
            }
            iVar23 = iVar37 * 2 + -2;
          }
          puVar1 = (undefined4 *)(param_3 + (long)iVar23 * 4);
          *(undefined4 *)(param_1 + 0x70) = *puVar1;
          *(undefined4 *)(param_1 + 0x74) = puVar1[1];
        }
LAB_109856590:
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar27 = 0;
          do {
            iVar13 = *(int *)(param_1 + 0x70 + lVar27 * 4);
            iVar23 = *(int *)(param_1 + 0x18);
            if (iVar23 < iVar13) {
              lVar30 = *(long *)(param_1 + 0x28);
LAB_1098565c8:
              *(int *)(lVar30 + lVar27 * 4) = iVar23;
            }
            else {
              iVar23 = *(int *)(param_1 + 0x14);
              lVar30 = *(long *)(param_1 + 0x28);
              if (iVar13 < iVar23) goto LAB_1098565c8;
              *(int *)(lVar30 + lVar27 * 4) = iVar13;
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar27 = 0;
            do {
              iVar23 = *(int *)(param_2 + lVar27 * 4) + *(int *)(lVar30 + lVar27 * 4);
              *(int *)(lVar28 + lVar27 * 4) = iVar23;
              if (*(int *)(param_1 + 0x18) < iVar23) {
                iVar13 = -*(int *)(param_1 + 0x1c);
LAB_10985662c:
                *(int *)(lVar28 + lVar27 * 4) = iVar23 + iVar13;
              }
              else if (iVar23 < *(int *)(param_1 + 0x14)) {
                iVar13 = *(int *)(param_1 + 0x1c);
                goto LAB_10985662c;
              }
              lVar27 = lVar27 + 1;
            } while (lVar27 < *(int *)(param_1 + 0x10));
          }
        }
        plVar38 = (long *)((long)plVar38 + 1);
        lVar28 = lVar28 + 8;
        param_2 = param_2 + 8;
      } while (plVar38 != plVar19);
    }
    uVar20 = 1;
  }
  else {
LAB_10985665c:
    uVar20 = 0;
  }
  return uVar20;
}



/* Entry: 109856688; end: 10985676f;  */

undefined8 FUN_109856688(undefined8 *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  double dVar15;
  float fVar16;
  
  puVar3 = (undefined8 *)*param_2;
  uVar10 = *(uint *)(param_2[1] + (long)param_3 * 4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*(byte *)((long)puVar3 + 100) & 1) == 0) {
    uVar10 = *(uint *)(puVar3[9] + (ulong)uVar10 * 4);
  }
  uVar9 = (ulong)uVar10;
  bVar8 = *(byte *)(puVar3 + 3);
  if (param_1 != (undefined8 *)0x0) {
    switch(*(undefined4 *)((long)puVar3 + 0x1c)) {
    case 1:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar3[5];
        lVar14 = puVar3[6];
        lVar4 = *(long *)*puVar3;
        pcVar5 = (char *)((long *)*puVar3)[1];
        do {
          pcVar1 = (char *)(lVar4 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pcVar5 <= pcVar1) {
            return 0;
          }
          param_1[uVar11] = (long)*pcVar1;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 2:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar3[5];
        lVar14 = puVar3[6];
        lVar4 = *(long *)*puVar3;
        pbVar7 = (byte *)((long *)*puVar3)[1];
        do {
          pbVar2 = (byte *)(lVar4 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          param_1[uVar11] = (ulong)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 3:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (long)*(short *)(lVar4 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 4:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (ulong)*(ushort *)(lVar4 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 5:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (long)*(int *)(lVar4 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 6:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (ulong)*(uint *)(lVar4 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 7:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = *(undefined8 *)(lVar4 + uVar11 * 8);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 8:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if ((uVar6 <= (ulong)(lVar4 + lVar12)) ||
             (lVar14 = *(long *)(lVar4 + uVar11 * 8), lVar14 < 0)) {
            return 0;
          }
          param_1[uVar11] = lVar14;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 9:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          fVar16 = *(float *)(lVar4 + uVar11 * 4);
          if (9.223372e+18 <= fVar16) {
            return 0;
          }
          if ((*(byte *)(puVar3 + 4) & 1) != 0) {
            return 0;
          }
          if (fVar16 < -9.223372e+18) {
            return 0;
          }
          if (0x7f7fffff < (uint)ABS(fVar16)) {
            return 0;
          }
          param_1[uVar11] = (long)fVar16;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 10:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar3)[1];
        lVar4 = *(long *)*puVar3 + puVar3[5] * uVar9 + puVar3[6];
        do {
          if (uVar6 <= (ulong)(lVar4 + lVar12)) {
            return 0;
          }
          dVar15 = *(double *)(lVar4 + uVar11 * 8);
          if (9.223372036854776e+18 <= dVar15) {
            return 0;
          }
          if ((*(byte *)(puVar3 + 4) & 1) != 0) {
            return 0;
          }
          if (dVar15 < -9.223372036854776e+18) {
            return 0;
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
            return 0;
          }
          param_1[uVar11] = (long)dVar15;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 0xb:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar3 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar3[5];
        lVar14 = puVar3[6];
        lVar4 = *(long *)*puVar3;
        pbVar7 = (byte *)((long *)*puVar3)[1];
        do {
          pbVar2 = (byte *)(lVar4 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          param_1[uVar11] = (ulong)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar3 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109856770; end: 109856e9f;  */

undefined8 FUN_109856770(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pcVar5 <= pcVar1) {
        return 0;
      }
      *(long *)(param_4 + uVar7 * 8) = (long)*pcVar1;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 8,(ulong)(~uVar8 + param_3) * 8 + 8);
  }
  return 1;
}



/* Entry: 109856ea0; end: 109856ea3;  */

void FUN_109856ea0(void)

{
  return;
}



/* Entry: 109856ea4; end: 109856f1b;  */

undefined8 * FUN_109856ea4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109856f1c; end: 109856fa3;  */

undefined8 FUN_109856f1c(void)

{
  return 6;
}



/* Entry: 109856fa4; end: 10985701b;  */

undefined8 FUN_109856fa4(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  FUN_109853bc4();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x98) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xb8) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xc0) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xc4) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xc0) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xc4) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985701c; end: 10985731f;  */

long FUN_10985701c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lStack_80;
  int iStack_78;
  undefined8 uStack_70;
  int iStack_68;
  int aiStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x70) = param_6;
  uVar3 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
  iStack_68 = 0;
  uStack_70 = 0;
  lVar1 = param_1;
  if (0 < (int)(uVar3 >> 2)) {
    uVar9 = 0;
    do {
      lVar4 = **(long **)(param_1 + 0x58);
      if ((ulong)((*(long **)(param_1 + 0x58))[1] - lVar4 >> 2) <= uVar9) {
        FUN_109853c48();
        goto LAB_10985731c;
      }
      FUN_109857344(param_1 + 0x60,*(undefined4 *)(lVar4 + uVar9 * 4),&uStack_70);
      func_0x0001098578b4(param_1 + 0xa0,&uStack_70);
      lVar1 = param_1 + 0xb8;
      FUN_10985d980();
      if ((int)lVar1 != 0) {
        lVar4 = 0;
        iStack_78 = 0;
        lStack_80 = 0;
        do {
          *(int *)((long)&lStack_80 + lVar4) = -*(int *)((long)&uStack_70 + lVar4);
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        uStack_70 = lStack_80;
        iStack_68 = iStack_78;
      }
      if ((int)uStack_70 < 0) {
        if (uStack_70 < 0) {
          iVar2 = -iStack_68;
          if (-1 < iStack_68) {
            iVar2 = iStack_68;
          }
        }
        else {
          iVar2 = -iStack_68;
          if (-1 < iStack_68) {
            iVar2 = iStack_68;
          }
          iVar2 = *(int *)(param_1 + 0xa8) - iVar2;
        }
        if (iStack_68 < 0) {
          iVar6 = -uStack_70._4_4_;
          if (-1 < uStack_70) {
            iVar6 = uStack_70._4_4_;
          }
        }
        else {
          iVar6 = -uStack_70._4_4_;
          if (-1 < uStack_70) {
            iVar6 = uStack_70._4_4_;
          }
          iVar6 = *(int *)(param_1 + 0xa8) - iVar6;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xb0) + uStack_70._4_4_;
        iVar6 = iStack_68 + *(int *)(param_1 + 0xb0);
      }
      if (iVar6 == 0 && iVar2 == 0) {
        aiStack_60[0] = *(int *)(param_1 + 0xa8);
        aiStack_60[1] = *(int *)(param_1 + 0xa8);
      }
      else {
        iVar7 = *(int *)(param_1 + 0xa8);
        if (iVar2 == 0) {
          aiStack_60[0] = iVar6;
          aiStack_60[1] = iVar6;
          if (iVar7 != iVar6) {
            iVar8 = *(int *)(param_1 + 0xb0);
            if (iVar6 <= iVar8) {
              if (iVar7 == 0) goto LAB_109857270;
              goto LAB_1098572a0;
            }
            iVar2 = 0;
LAB_109857290:
            aiStack_60[0] = iVar2;
            aiStack_60[1] = iVar8 * 2 - iVar6;
          }
        }
        else if ((iVar6 != 0) || (aiStack_60[0] = iVar2, aiStack_60[1] = iVar2, iVar7 != iVar2)) {
          if (iVar7 == iVar2) {
            iVar8 = *(int *)(param_1 + 0xb0);
LAB_109857270:
            iVar7 = iVar2;
            if (iVar6 < iVar8) goto LAB_109857290;
          }
LAB_1098572a0:
          if ((iVar7 == iVar6) && (iVar2 < *(int *)(param_1 + 0xb0))) {
            aiStack_60[0] = *(int *)(param_1 + 0xb0) * 2 - iVar2;
            aiStack_60[1] = iVar6;
          }
          else {
            aiStack_60[0] = iVar2;
            aiStack_60[1] = iVar6;
            if (iVar6 == 0) {
              aiStack_60[1] = 0;
              if (*(int *)(param_1 + 0xb0) < iVar2) {
                aiStack_60[0] = *(int *)(param_1 + 0xb0) * 2 - iVar2;
              }
            }
          }
        }
      }
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar4 = 0;
        do {
          iVar6 = aiStack_60[lVar4];
          iVar2 = *(int *)(param_1 + 0x18);
          if (iVar2 < iVar6) {
            lVar5 = *(long *)(param_1 + 0x28);
LAB_1098571d4:
            *(int *)(lVar5 + lVar4 * 4) = iVar2;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x14);
            lVar5 = *(long *)(param_1 + 0x28);
            if (iVar6 < iVar2) goto LAB_1098571d4;
            *(int *)(lVar5 + lVar4 * 4) = iVar6;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x10));
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar4 = 0;
          do {
            iVar2 = *(int *)(param_2 + lVar4 * 4) + *(int *)(lVar5 + lVar4 * 4);
            *(int *)(param_3 + lVar4 * 4) = iVar2;
            if (*(int *)(param_1 + 0x18) < iVar2) {
              iVar6 = -*(int *)(param_1 + 0x1c);
LAB_109857238:
              *(int *)(param_3 + lVar4 * 4) = iVar2 + iVar6;
            }
            else if (iVar2 < *(int *)(param_1 + 0x14)) {
              iVar6 = *(int *)(param_1 + 0x1c);
              goto LAB_109857238;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)(param_1 + 0x10));
        }
      }
      uVar9 = uVar9 + 1;
      param_3 = param_3 + 8;
      param_2 = param_2 + 8;
    } while (uVar9 != (uVar3 >> 2 & 0x7fffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 1;
  }
LAB_10985731c:
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return lVar1;
}



/* Entry: 109857320; end: 109857343;  */

void FUN_109857320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109857344; end: 109857657;  */

void FUN_109857344(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_109857658(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_109857658(alStack_110 + 9,param_1,iVar4);
      FUN_109857658(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_1098576b4(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_109857624;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_109857624;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_1098575e4;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_109857624;
LAB_1098575e4:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_109857624:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 109857658; end: 1098576b3;  */

long * FUN_109857658(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  double dVar18;
  float fVar19;
  
  uVar12 = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0x20) + 0x38) + param_3 * 4);
  lVar15 = **(long **)(param_2 + 0x28);
  if (uVar12 < (ulong)((*(long **)(param_2 + 0x28))[1] - lVar15 >> 2)) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar10 = *(uint *)(*(long *)(param_2 + 0x10) + (long)*(int *)(lVar15 + uVar12 * 4) * 4);
    if ((*(byte *)((long)puVar4 + 100) & 1) == 0) {
      uVar10 = *(uint *)(puVar4[9] + (ulong)uVar10 * 4);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar12 = (ulong)uVar10;
    bVar8 = *(byte *)(puVar4 + 3);
    if (param_1 != (long *)0x0) {
      switch(*(undefined4 *)((long)puVar4 + 0x1c)) {
      case 1:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          uVar11 = 0;
          lVar15 = puVar4[5];
          lVar17 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pcVar5 = (char *)((long *)*puVar4)[1];
          do {
            pcVar1 = (char *)(lVar3 + lVar15 * uVar12 + lVar17 + uVar11);
            if (pcVar5 <= pcVar1) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*pcVar1;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 2:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          uVar11 = 0;
          lVar15 = puVar4[5];
          lVar17 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pbVar7 = (byte *)((long *)*puVar4)[1];
          do {
            pbVar2 = (byte *)(lVar3 + lVar15 * uVar12 + lVar17 + uVar11);
            if (pbVar7 <= pbVar2) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*pbVar2;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 3:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*(short *)(lVar3 + uVar11 * 2);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 2;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 4:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*(ushort *)(lVar3 + uVar11 * 2);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 2;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 5:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*(int *)(lVar3 + uVar11 * 4);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 4;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 6:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*(uint *)(lVar3 + uVar11 * 4);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 4;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 7:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            param_1[uVar11] = *(long *)(lVar3 + uVar11 * 8);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 8;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 8:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if ((uVar6 <= (ulong)(lVar3 + lVar15)) ||
               (lVar17 = *(long *)(lVar3 + uVar11 * 8), lVar17 < 0)) {
              return (long *)0x0;
            }
            param_1[uVar11] = lVar17;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 8;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 9:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            fVar19 = *(float *)(lVar3 + uVar11 * 4);
            if (9.223372e+18 <= fVar19) {
              return (long *)0x0;
            }
            if ((*(byte *)(puVar4 + 4) & 1) != 0) {
              return (long *)0x0;
            }
            if (fVar19 < -9.223372e+18) {
              return (long *)0x0;
            }
            if (0x7f7fffff < (uint)ABS(fVar19)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)fVar19;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 4;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 10:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          lVar15 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar15)) {
              return (long *)0x0;
            }
            dVar18 = *(double *)(lVar3 + uVar11 * 8);
            if (9.223372036854776e+18 <= dVar18) {
              return (long *)0x0;
            }
            if ((*(byte *)(puVar4 + 4) & 1) != 0) {
              return (long *)0x0;
            }
            if (dVar18 < -9.223372036854776e+18) {
              return (long *)0x0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)dVar18;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
            lVar15 = lVar15 + 8;
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      case 0xb:
        uVar10 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar16 = (uint)bVar8;
        if (uVar10 <= bVar8) {
          uVar16 = uVar10;
        }
        if (uVar16 != 0) {
          uVar11 = 0;
          lVar15 = puVar4[5];
          lVar17 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pbVar7 = (byte *)((long *)*puVar4)[1];
          do {
            pbVar2 = (byte *)(lVar3 + lVar15 * uVar12 + lVar17 + uVar11);
            if (pbVar7 <= pbVar2) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*pbVar2;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar16 = (uint)bVar8;
            if (uVar10 <= bVar8) {
              uVar16 = uVar10;
            }
          } while (uVar11 < uVar16);
        }
        uVar16 = (uint)bVar8;
        if (uVar16 < uVar10) {
          _bzero(param_1 + uVar16,(ulong)(~uVar16 + uVar10) * 8 + 8);
        }
        return (long *)0x1;
      }
    }
    return (long *)0x0;
  }
  FUN_1092e2168();
  plVar13 = (long *)*param_1;
  uVar10 = *(uint *)((long)param_1 + 0xc);
  if ((char)param_1[2] != '\x01') {
    if (uVar10 != 0xffffffff) {
      iVar14 = -1;
      lVar15 = 2;
      if (0x55555555 < uVar10 * -0x55555555) {
        lVar15 = 0xffffffff;
      }
      uVar12 = lVar15 + (ulong)uVar10 & 0xffffffff;
      if (uVar12 == 0xffffffff) goto LAB_1098577d0;
      if (((*(ulong *)(*plVar13 + (uVar12 >> 6) * 8) >> (lVar15 + (ulong)uVar10 & 0x3f) & 1) == 0)
         && (iVar14 = *(int *)(*(long *)(plVar13[0x10] + 0x18) + uVar12 * 4), iVar14 != -1)) {
        if ((uint)(iVar14 * -0x55555555) < 0x55555556) {
          iVar14 = iVar14 + 2;
        }
        else {
          iVar14 = iVar14 + -1;
        }
        goto LAB_1098577d0;
      }
    }
    iVar14 = -1;
LAB_1098577d0:
    *(int *)((long)param_1 + 0xc) = iVar14;
    return param_1;
  }
  if (uVar10 == 0xffffffff) {
LAB_109857710:
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
  else {
    uVar16 = uVar10 - 2;
    if (0x55555555 < (uVar10 + 1) * -0x55555555) {
      uVar16 = uVar10 + 1;
    }
    if (((uVar16 == 0xffffffff) ||
        ((*(ulong *)(*plVar13 + (ulong)(uVar16 >> 6) * 8) >> ((ulong)uVar16 & 0x3f) & 1) != 0)) ||
       (iVar14 = *(int *)(*(long *)(plVar13[0x10] + 0x18) + (ulong)uVar16 * 4), iVar14 == -1))
    goto LAB_109857710;
    iVar9 = iVar14 + -2;
    if (0x55555555 < (uint)((iVar14 + 1) * -0x55555555)) {
      iVar9 = iVar14 + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar9;
    if (iVar9 != -1) {
      if (iVar9 != (int)param_1[1]) {
        return param_1;
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      return param_1;
    }
  }
  uVar10 = *(uint *)(param_1 + 1);
  if (uVar10 != 0xffffffff) {
    iVar14 = -1;
    lVar15 = 2;
    if (0x55555555 < uVar10 * -0x55555555) {
      lVar15 = 0xffffffff;
    }
    uVar12 = lVar15 + (ulong)uVar10 & 0xffffffff;
    if (uVar12 == 0xffffffff) goto LAB_109857770;
    if (((*(ulong *)(*plVar13 + (uVar12 >> 6) * 8) >> (lVar15 + (ulong)uVar10 & 0x3f) & 1) == 0) &&
       (iVar14 = *(int *)(*(long *)(plVar13[0x10] + 0x18) + uVar12 * 4), iVar14 != -1)) {
      if ((uint)(iVar14 * -0x55555555) < 0x55555556) {
        iVar14 = iVar14 + 2;
      }
      else {
        iVar14 = iVar14 + -1;
      }
      goto LAB_109857770;
    }
  }
  iVar14 = -1;
LAB_109857770:
  *(int *)((long)param_1 + 0xc) = iVar14;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 1098576b4; end: 10985793b;  */

void FUN_1098576b4(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  
  plVar5 = (long *)*param_1;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if ((char)param_1[2] != '\x01') {
    if (uVar2 != 0xffffffff) {
      iVar6 = -1;
      lVar1 = 2;
      if (0x55555555 < uVar2 * -0x55555555) {
        lVar1 = 0xffffffff;
      }
      uVar7 = lVar1 + (ulong)uVar2 & 0xffffffff;
      if (uVar7 == 0xffffffff) goto LAB_1098577d0;
      if (((*(ulong *)(*plVar5 + (uVar7 >> 6) * 8) >> (lVar1 + (ulong)uVar2 & 0x3f) & 1) == 0) &&
         (iVar6 = *(int *)(*(long *)(plVar5[0x10] + 0x18) + uVar7 * 4), iVar6 != -1)) {
        if ((uint)(iVar6 * -0x55555555) < 0x55555556) {
          iVar6 = iVar6 + 2;
        }
        else {
          iVar6 = iVar6 + -1;
        }
        goto LAB_1098577d0;
      }
    }
    iVar6 = -1;
LAB_1098577d0:
    *(int *)((long)param_1 + 0xc) = iVar6;
    return;
  }
  if (uVar2 == 0xffffffff) {
LAB_109857710:
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
  else {
    uVar3 = uVar2 - 2;
    if (0x55555555 < (uVar2 + 1) * -0x55555555) {
      uVar3 = uVar2 + 1;
    }
    if (((uVar3 == 0xffffffff) ||
        ((*(ulong *)(*plVar5 + (ulong)(uVar3 >> 6) * 8) >> ((ulong)uVar3 & 0x3f) & 1) != 0)) ||
       (iVar6 = *(int *)(*(long *)(plVar5[0x10] + 0x18) + (ulong)uVar3 * 4), iVar6 == -1))
    goto LAB_109857710;
    iVar4 = iVar6 + -2;
    if (0x55555555 < (uint)((iVar6 + 1) * -0x55555555)) {
      iVar4 = iVar6 + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar4;
    if (iVar4 != -1) {
      if (iVar4 != (int)param_1[1]) {
        return;
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0xffffffff) {
    iVar6 = -1;
    lVar1 = 2;
    if (0x55555555 < uVar2 * -0x55555555) {
      lVar1 = 0xffffffff;
    }
    uVar7 = lVar1 + (ulong)uVar2 & 0xffffffff;
    if (uVar7 == 0xffffffff) goto LAB_109857770;
    if (((*(ulong *)(*plVar5 + (uVar7 >> 6) * 8) >> (lVar1 + (ulong)uVar2 & 0x3f) & 1) == 0) &&
       (iVar6 = *(int *)(*(long *)(plVar5[0x10] + 0x18) + uVar7 * 4), iVar6 != -1)) {
      if ((uint)(iVar6 * -0x55555555) < 0x55555556) {
        iVar6 = iVar6 + 2;
      }
      else {
        iVar6 = iVar6 + -1;
      }
      goto LAB_109857770;
    }
  }
  iVar6 = -1;
LAB_109857770:
  *(int *)((long)param_1 + 0xc) = iVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10985793c; end: 1098579b3;  */

undefined8 * FUN_10985793c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098579b4; end: 1098579eb;  */

undefined8 FUN_1098579b4(void)

{
  return 1;
}



/* Entry: 1098579ec; end: 109857e07;  */

undefined8 FUN_1098579ec(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  
  iVar10 = (int)param_5;
  *(int *)(param_1 + 0x10) = iVar10;
  lVar27 = (long)iVar10;
  func_0x000108a5942c(param_1 + 0x28,lVar27);
  plVar1 = *(long **)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x50);
  piVar18 = (int *)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
  if (iVar10 < 0) {
    piVar18 = (int *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  uVar8 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar20 = 0;
    do {
      iVar3 = piVar18[lVar20];
      iVar25 = *(int *)(param_1 + 0x18);
      if (iVar25 < iVar3) {
        lVar19 = *(long *)(param_1 + 0x28);
LAB_109857a88:
        *(int *)(lVar19 + lVar20 * 4) = iVar25;
      }
      else {
        iVar25 = *(int *)(param_1 + 0x14);
        lVar19 = *(long *)(param_1 + 0x28);
        if (iVar3 < iVar25) goto LAB_109857a88;
        *(int *)(lVar19 + lVar20 * 4) = iVar3;
      }
      lVar20 = lVar20 + 1;
      uVar8 = (ulong)*(int *)(param_1 + 0x10);
    } while (lVar20 < (long)uVar8);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar20 = 0;
      do {
        iVar25 = *(int *)(param_2 + lVar20 * 4) + *(int *)(lVar19 + lVar20 * 4);
        *(int *)(param_3 + lVar20 * 4) = iVar25;
        if (*(int *)(param_1 + 0x18) < iVar25) {
          iVar3 = -*(int *)(param_1 + 0x1c);
LAB_109857af0:
          *(int *)(param_3 + lVar20 * 4) = iVar25 + iVar3;
        }
        else if (iVar25 < *(int *)(param_1 + 0x14)) {
          iVar3 = *(int *)(param_1 + 0x1c);
          goto LAB_109857af0;
        }
        lVar20 = lVar20 + 1;
        uVar8 = (ulong)*(int *)(param_1 + 0x10);
      } while (lVar20 < (long)uVar8);
    }
  }
  lVar20 = **(long **)(param_1 + 0x58);
  uVar22 = (*(long **)(param_1 + 0x58))[1] - lVar20;
  uVar21 = (long)uVar22 >> 2;
  if (1 < (int)uVar21) {
    if (uVar21 < 2) {
      uVar21 = 1;
    }
    lVar23 = lVar27 * 4;
    uVar24 = 1;
    lVar19 = param_3 + lVar27 * 4;
    param_2 = param_2 + lVar27 * 4;
    uVar9 = uVar8;
    lVar27 = param_3;
    do {
      if (uVar24 == uVar21) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109857df4);
        (*pcVar7)();
      }
      uVar4 = *(uint *)(lVar20 + uVar24 * 4);
      if (uVar4 == 0xffffffff) {
LAB_109857bf4:
        uVar9 = uVar8;
        if (0 < (int)uVar8) {
          lVar12 = 0;
          do {
            iVar3 = *(int *)(lVar27 + lVar12 * 4);
            iVar25 = *(int *)(param_1 + 0x18);
            if (iVar25 < iVar3) {
              lVar26 = *(long *)(param_1 + 0x28);
LAB_109857c2c:
              *(int *)(lVar26 + lVar12 * 4) = iVar25;
            }
            else {
              iVar25 = *(int *)(param_1 + 0x14);
              lVar26 = *(long *)(param_1 + 0x28);
              if (iVar3 < iVar25) goto LAB_109857c2c;
              *(int *)(lVar26 + lVar12 * 4) = iVar3;
            }
            lVar12 = lVar12 + 1;
            uVar8 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar12 < (long)uVar8);
          uVar9 = uVar8;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar12 = 0;
            do {
              iVar25 = *(int *)(param_2 + lVar12 * 4) + *(int *)(lVar26 + lVar12 * 4);
              *(int *)(lVar19 + lVar12 * 4) = iVar25;
              if (*(int *)(param_1 + 0x18) < iVar25) {
                iVar3 = -*(int *)(param_1 + 0x1c);
LAB_109857c94:
                *(int *)(lVar19 + lVar12 * 4) = iVar25 + iVar3;
              }
              else if (iVar25 < *(int *)(param_1 + 0x14)) {
                iVar3 = *(int *)(param_1 + 0x1c);
                goto LAB_109857c94;
              }
              lVar12 = lVar12 + 1;
              uVar8 = (ulong)*(int *)(param_1 + 0x10);
              uVar9 = uVar8;
            } while (lVar12 < (long)uVar8);
          }
        }
      }
      else {
        uVar4 = *(uint *)(plVar1[3] + (ulong)uVar4 * 4);
        if (uVar4 == 0xffffffff) goto LAB_109857bf4;
        lVar12 = *plVar1;
        uVar6 = uVar4 - 2;
        if (0x55555555 < (uVar4 + 1) * -0x55555555) {
          uVar6 = uVar4 + 1;
        }
        if (uVar6 == 0xffffffff) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = (ulong)*(uint *)(lVar12 + (ulong)uVar6 * 4);
        }
        iVar25 = 2;
        if (0x55555555 < uVar4 * -0x55555555) {
          iVar25 = -1;
        }
        if (iVar25 + uVar4 == 0xffffffff) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = (ulong)*(uint *)(lVar12 + (ulong)(iVar25 + uVar4) * 4);
        }
        lVar26 = *plVar2;
        iVar3 = *(int *)(lVar26 + (ulong)*(uint *)(lVar12 + (ulong)uVar4 * 4) * 4);
        iVar5 = *(int *)(lVar26 + uVar14 * 4);
        iVar25 = *(int *)(lVar26 + uVar16 * 4);
        if (((long)uVar24 <= (long)iVar3 || (long)uVar24 <= (long)iVar5) ||
            (long)uVar24 <= (long)iVar25) goto LAB_109857bf4;
        if (0 < iVar10) {
          piVar11 = (int *)(param_3 + (long)(iVar5 * iVar10) * 4);
          piVar13 = (int *)(param_3 + (long)(iVar25 * iVar10) * 4);
          piVar15 = (int *)(param_3 + (long)(iVar3 * iVar10) * 4);
          piVar17 = piVar18;
          uVar14 = param_5 & 0xffffffff;
          do {
            *piVar17 = (*piVar13 + *piVar11) - *piVar15;
            uVar14 = uVar14 - 1;
            piVar11 = piVar11 + 1;
            piVar13 = piVar13 + 1;
            piVar15 = piVar15 + 1;
            piVar17 = piVar17 + 1;
          } while (uVar14 != 0);
        }
        if (0 < (int)uVar9) {
          lVar12 = 0;
          do {
            iVar3 = piVar18[lVar12];
            iVar25 = *(int *)(param_1 + 0x18);
            if (iVar25 < iVar3) {
              lVar26 = *(long *)(param_1 + 0x28);
LAB_109857d44:
              *(int *)(lVar26 + lVar12 * 4) = iVar25;
            }
            else {
              iVar25 = *(int *)(param_1 + 0x14);
              lVar26 = *(long *)(param_1 + 0x28);
              if (iVar3 < iVar25) goto LAB_109857d44;
              *(int *)(lVar26 + lVar12 * 4) = iVar3;
            }
            lVar12 = lVar12 + 1;
            uVar8 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar12 < (long)uVar8);
          uVar9 = uVar8;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar12 = 0;
            do {
              iVar25 = *(int *)(param_2 + lVar12 * 4) + *(int *)(lVar26 + lVar12 * 4);
              *(int *)(lVar19 + lVar12 * 4) = iVar25;
              if (*(int *)(param_1 + 0x18) < iVar25) {
                iVar3 = -*(int *)(param_1 + 0x1c);
LAB_109857dac:
                *(int *)(lVar19 + lVar12 * 4) = iVar25 + iVar3;
              }
              else if (iVar25 < *(int *)(param_1 + 0x14)) {
                iVar3 = *(int *)(param_1 + 0x1c);
                goto LAB_109857dac;
              }
              lVar12 = lVar12 + 1;
              uVar8 = (ulong)*(int *)(param_1 + 0x10);
              uVar9 = uVar8;
            } while (lVar12 < (long)uVar8);
          }
        }
      }
      uVar24 = uVar24 + 1;
      lVar19 = lVar19 + lVar23;
      param_2 = param_2 + lVar23;
      lVar27 = lVar27 + lVar23;
    } while (uVar24 != (uVar22 >> 2 & 0x7fffffff));
  }
  __ZdaPv(piVar18);
  return 1;
}



/* Entry: 109857e08; end: 109857e7f;  */

undefined8 * FUN_109857e08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109857e80; end: 109857eb7;  */

undefined8 FUN_109857e80(void)

{
  return 2;
}



/* Entry: 109857eb8; end: 10985842b;  */

undefined8 FUN_109857eb8(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  
  iVar12 = (int)param_5;
  *(int *)(param_1 + 0x10) = iVar12;
  lVar35 = (long)iVar12;
  func_0x000108a5942c(param_1 + 0x28,lVar35);
  piVar13 = (int *)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
  if (iVar12 < 0) {
    piVar13 = (int *)0xffffffffffffffff;
  }
  piVar10 = piVar13;
  __Znam();
  _bzero();
  __Znam();
  _bzero();
  uVar32 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar17 = 0;
    do {
      iVar34 = piVar10[lVar17];
      iVar22 = *(int *)(param_1 + 0x18);
      if (iVar22 < iVar34) {
        lVar14 = *(long *)(param_1 + 0x28);
LAB_109857f74:
        *(int *)(lVar14 + lVar17 * 4) = iVar22;
      }
      else {
        iVar22 = *(int *)(param_1 + 0x14);
        lVar14 = *(long *)(param_1 + 0x28);
        if (iVar34 < iVar22) goto LAB_109857f74;
        *(int *)(lVar14 + lVar17 * 4) = iVar34;
      }
      lVar17 = lVar17 + 1;
      uVar32 = (ulong)*(int *)(param_1 + 0x10);
    } while (lVar17 < (long)uVar32);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar17 = 0;
      do {
        iVar22 = *(int *)(param_2 + lVar17 * 4) + *(int *)(lVar14 + lVar17 * 4);
        *(int *)(param_3 + lVar17 * 4) = iVar22;
        if (*(int *)(param_1 + 0x18) < iVar22) {
          iVar34 = -*(int *)(param_1 + 0x1c);
LAB_109857fdc:
          *(int *)(param_3 + lVar17 * 4) = iVar22 + iVar34;
        }
        else if (iVar22 < *(int *)(param_1 + 0x14)) {
          iVar34 = *(int *)(param_1 + 0x1c);
          goto LAB_109857fdc;
        }
        lVar17 = lVar17 + 1;
        uVar32 = (ulong)*(int *)(param_1 + 0x10);
      } while (lVar17 < (long)uVar32);
    }
  }
  lVar17 = **(long **)(param_1 + 0x58);
  uVar15 = (*(long **)(param_1 + 0x58))[1] - lVar17;
  uVar18 = (long)uVar15 >> 2;
  if (1 < (int)uVar18) {
    if (uVar18 < 2) {
      uVar18 = 1;
    }
    lVar16 = lVar35 * 4;
    uVar36 = 1;
    uVar11 = param_5 & 0xffffffff;
    plVar2 = *(long **)(param_1 + 0x48);
    plVar3 = *(long **)(param_1 + 0x50);
    param_2 = param_2 + lVar35 * 4;
    lVar35 = param_3 + lVar35 * 4;
    uVar33 = uVar32;
    lVar14 = param_3;
    do {
      if (uVar36 == uVar18) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109858408);
        (*pcVar9)();
      }
      uVar4 = *(uint *)(lVar17 + uVar36 * 4);
      if (0 < iVar12) {
        _bzero(piVar10,(param_5 & 0xffffffff) << 2);
      }
      if (uVar4 == 0xffffffff) {
LAB_1098582f4:
        uVar32 = uVar33;
        if (0 < (int)uVar33) {
          lVar19 = 0;
          do {
            iVar34 = *(int *)(lVar14 + lVar19 * 4);
            iVar22 = *(int *)(param_1 + 0x18);
            if (iVar22 < iVar34) {
              lVar24 = *(long *)(param_1 + 0x28);
LAB_109858330:
              *(int *)(lVar24 + lVar19 * 4) = iVar22;
            }
            else {
              iVar22 = *(int *)(param_1 + 0x14);
              lVar24 = *(long *)(param_1 + 0x28);
              if (iVar34 < iVar22) goto LAB_109858330;
              *(int *)(lVar24 + lVar19 * 4) = iVar34;
            }
            lVar19 = lVar19 + 1;
            uVar32 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar19 < (long)uVar32);
          uVar33 = uVar32;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar19 = 0;
            do {
              iVar22 = *(int *)(param_2 + lVar19 * 4) + *(int *)(lVar24 + lVar19 * 4);
              *(int *)(lVar35 + lVar19 * 4) = iVar22;
              if (*(int *)(param_1 + 0x18) < iVar22) {
                iVar34 = -*(int *)(param_1 + 0x1c);
LAB_109858398:
                *(int *)(lVar35 + lVar19 * 4) = iVar22 + iVar34;
              }
              else if (iVar22 < *(int *)(param_1 + 0x14)) {
                iVar34 = *(int *)(param_1 + 0x1c);
                goto LAB_109858398;
              }
              lVar19 = lVar19 + 1;
              uVar32 = (ulong)*(int *)(param_1 + 0x10);
              uVar33 = uVar32;
            } while (lVar19 < (long)uVar32);
          }
        }
      }
      else {
        iVar22 = 0;
        lVar19 = plVar2[3];
        uVar21 = uVar4;
        do {
          uVar5 = *(uint *)(lVar19 + (ulong)uVar21 * 4);
          iVar34 = 2;
          if (uVar5 != 0xffffffff) {
            lVar24 = *plVar2;
            uVar8 = uVar5 - 2;
            if (0x55555555 < (uVar5 + 1) * -0x55555555) {
              uVar8 = uVar5 + 1;
            }
            if (uVar8 == 0xffffffff) {
              uVar27 = 0xffffffff;
            }
            else {
              uVar27 = (ulong)*(uint *)(lVar24 + (ulong)uVar8 * 4);
            }
            iVar1 = iVar34;
            if (0x55555555 < uVar5 * -0x55555555) {
              iVar1 = -1;
            }
            if (iVar1 + uVar5 == 0xffffffff) {
              uVar29 = 0xffffffff;
            }
            else {
              uVar29 = (ulong)*(uint *)(lVar24 + (ulong)(iVar1 + uVar5) * 4);
            }
            lVar31 = *plVar3;
            iVar6 = *(int *)(lVar31 + (ulong)*(uint *)(lVar24 + (ulong)uVar5 * 4) * 4);
            iVar7 = *(int *)(lVar31 + uVar27 * 4);
            iVar1 = *(int *)(lVar31 + uVar29 * 4);
            if (((long)iVar6 < (long)uVar36 && (long)iVar7 < (long)uVar36) &&
                (long)iVar1 < (long)uVar36) {
              if (0 < iVar12) {
                piVar20 = (int *)(param_3 + (long)(iVar7 * iVar12) * 4);
                piVar25 = (int *)(param_3 + (long)(iVar1 * iVar12) * 4);
                piVar28 = (int *)(param_3 + (long)(iVar6 * iVar12) * 4);
                piVar30 = piVar13;
                uVar27 = uVar11;
                do {
                  *piVar30 = (*piVar25 + *piVar20) - *piVar28;
                  uVar27 = uVar27 - 1;
                  piVar23 = piVar10;
                  piVar20 = piVar20 + 1;
                  piVar26 = piVar13;
                  piVar25 = piVar25 + 1;
                  uVar29 = uVar11;
                  piVar28 = piVar28 + 1;
                  piVar30 = piVar30 + 1;
                } while (uVar27 != 0);
                do {
                  *piVar23 = *piVar26 + *piVar23;
                  uVar29 = uVar29 - 1;
                  piVar23 = piVar23 + 1;
                  piVar26 = piVar26 + 1;
                } while (uVar29 != 0);
              }
              iVar22 = iVar22 + 1;
            }
          }
          iVar1 = iVar34;
          if (0x55555555 < uVar21 * -0x55555555) {
            iVar1 = -1;
          }
          if ((iVar1 + uVar21 == 0xffffffff) ||
             (iVar1 = *(int *)(lVar19 + (ulong)(iVar1 + uVar21) * 4), iVar1 == -1)) break;
          if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
            iVar34 = -1;
          }
          uVar21 = iVar34 + iVar1;
        } while (uVar21 != uVar4 && uVar21 != 0xffffffff);
        if (iVar22 == 0) goto LAB_1098582f4;
        piVar20 = piVar10;
        uVar27 = uVar11;
        if (0 < iVar12) {
          do {
            iVar34 = 0;
            if (iVar22 != 0) {
              iVar34 = *piVar20 / iVar22;
            }
            *piVar20 = iVar34;
            uVar27 = uVar27 - 1;
            piVar20 = piVar20 + 1;
          } while (uVar27 != 0);
        }
        if (0 < (int)uVar32) {
          lVar19 = 0;
          do {
            iVar34 = piVar10[lVar19];
            iVar22 = *(int *)(param_1 + 0x18);
            if (iVar22 < iVar34) {
              lVar24 = *(long *)(param_1 + 0x28);
LAB_109858274:
              *(int *)(lVar24 + lVar19 * 4) = iVar22;
            }
            else {
              iVar22 = *(int *)(param_1 + 0x14);
              lVar24 = *(long *)(param_1 + 0x28);
              if (iVar34 < iVar22) goto LAB_109858274;
              *(int *)(lVar24 + lVar19 * 4) = iVar34;
            }
            lVar19 = lVar19 + 1;
            uVar32 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar19 < (long)uVar32);
          uVar33 = uVar32;
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar19 = 0;
            do {
              iVar22 = *(int *)(param_2 + lVar19 * 4) + *(int *)(lVar24 + lVar19 * 4);
              *(int *)(lVar35 + lVar19 * 4) = iVar22;
              if (*(int *)(param_1 + 0x18) < iVar22) {
                iVar34 = -*(int *)(param_1 + 0x1c);
LAB_1098582dc:
                *(int *)(lVar35 + lVar19 * 4) = iVar22 + iVar34;
              }
              else if (iVar22 < *(int *)(param_1 + 0x14)) {
                iVar34 = *(int *)(param_1 + 0x1c);
                goto LAB_1098582dc;
              }
              lVar19 = lVar19 + 1;
              uVar32 = (ulong)*(int *)(param_1 + 0x10);
              uVar33 = uVar32;
            } while (lVar19 < (long)uVar32);
          }
        }
      }
      uVar36 = uVar36 + 1;
      lVar35 = lVar35 + lVar16;
      param_2 = param_2 + lVar16;
      lVar14 = lVar14 + lVar16;
    } while (uVar36 != (uVar15 >> 2 & 0x7fffffff));
  }
  __ZdaPv(piVar13);
  __ZdaPv(piVar10);
  return 1;
}



/* Entry: 10985842c; end: 1098584f3;  */

undefined8 * FUN_10985842c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b15470;
  lVar1 = 0xa8;
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      __ZdlPv();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x48);
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098584f4; end: 10985852b;  */

undefined8 FUN_1098584f4(void)

{
  return 4;
}



/* Entry: 10985852c; end: 10985866f;  */

void FUN_10985852c(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  uint uStack_64;
  
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar8 = param_2[2] + 1;
    if (param_2[1] < lVar8) {
      return;
    }
    cVar1 = *(char *)(*param_2 + param_2[2]);
    param_2[2] = lVar8;
    if (cVar1 != '\0') {
      return;
    }
  }
  lVar8 = 0;
  do {
    iVar2 = 1;
    FUN_109854d50(1,&uStack_64,param_2);
    if (iVar2 == 0) {
      return;
    }
    uVar5 = (ulong)uStack_64;
    if ((uint)((ulong)((*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48)) >> 2) <
        uStack_64) {
      return;
    }
    if (uStack_64 != 0) {
      plVar6 = (long *)(param_1 + 0x60 + lVar8 * 0x18);
      func_0x000104bec9f0(plVar6,uVar5,0);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      iVar2 = (int)&uStack_80;
      FUN_10985d80c(&uStack_80,param_2);
      if (iVar2 == 0) {
        return;
      }
      uVar9 = 0;
      lVar7 = *plVar6;
      do {
        iVar2 = (int)&uStack_80;
        FUN_10985d980();
        uVar3 = uVar9 >> 6;
        uVar4 = 1L << (uVar9 & 0x3f);
        if (iVar2 == 0) {
          uVar4 = *(ulong *)(lVar7 + uVar3 * 8) & (uVar4 ^ 0xffffffffffffffff);
        }
        else {
          uVar4 = *(ulong *)(lVar7 + uVar3 * 8) | uVar4;
        }
        *(ulong *)(lVar7 + uVar3 * 8) = uVar4;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  FUN_109853bc4(param_1 + 0x10,param_2);
  return;
}



/* Entry: 109858670; end: 109858e27;  */

undefined8 * FUN_109858670(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  int *piVar28;
  int *piVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  uint uStack_12c;
  uint uStack_114;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long alStack_d0 [14];
  
  alStack_d0[0xc] = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(uint *)(param_1 + 0x10) = param_5;
  lVar36 = (long)(int)param_5;
  func_0x000108a5942c(param_1 + 0x28,lVar36);
  lVar31 = 0;
  alStack_d0[9] = 0;
  alStack_d0[8] = 0;
  alStack_d0[0xb] = 0;
  alStack_d0[10] = 0;
  alStack_d0[5] = 0;
  alStack_d0[4] = 0;
  alStack_d0[7] = 0;
  alStack_d0[6] = 0;
  alStack_d0[1] = 0;
  alStack_d0[0] = 0;
  alStack_d0[3] = 0;
  alStack_d0[2] = 0;
  do {
    uStack_e8 = 0;
    FUN_1094f81d8((long)alStack_d0 + lVar31,lVar36,&uStack_e8);
    lVar31 = lVar31 + 0x18;
  } while (lVar31 != 0x60);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar31 = 0;
    do {
      iVar14 = *(int *)(alStack_d0[0] + lVar31 * 4);
      iVar13 = *(int *)(param_1 + 0x18);
      if (iVar13 < iVar14) {
        lVar16 = *(long *)(param_1 + 0x28);
LAB_109858738:
        *(int *)(lVar16 + lVar31 * 4) = iVar13;
      }
      else {
        iVar13 = *(int *)(param_1 + 0x14);
        lVar16 = *(long *)(param_1 + 0x28);
        if (iVar14 < iVar13) goto LAB_109858738;
        *(int *)(lVar16 + lVar31 * 4) = iVar14;
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 < *(int *)(param_1 + 0x10));
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar31 = 0;
      do {
        iVar13 = *(int *)(param_2 + lVar31 * 4) + *(int *)(lVar16 + lVar31 * 4);
        *(int *)(param_3 + lVar31 * 4) = iVar13;
        if (*(int *)(param_1 + 0x18) < iVar13) {
          iVar14 = -*(int *)(param_1 + 0x1c);
LAB_10985879c:
          *(int *)(param_3 + lVar31 * 4) = iVar13 + iVar14;
        }
        else if (iVar13 < *(int *)(param_1 + 0x14)) {
          iVar14 = *(int *)(param_1 + 0x1c);
          goto LAB_10985879c;
        }
        lVar31 = lVar31 + 1;
      } while (lVar31 < *(int *)(param_1 + 0x10));
    }
  }
  plVar1 = *(long **)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x50);
  uStack_100 = 0;
  FUN_1092cd11c(&uStack_e8,4,&uStack_100);
  FUN_10925b8c4(&uStack_100,lVar36);
  lVar31 = **(long **)(param_1 + 0x58);
  uVar19 = (*(long **)(param_1 + 0x58))[1] - lVar31;
  uVar17 = (long)uVar19 >> 2;
  if (1 < (int)uVar17) {
    uStack_12c = 0;
    piVar6 = (int *)CONCAT44(uStack_fc,uStack_100);
    uVar19 = uVar19 >> 2 & 0x7fffffff;
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    lVar33 = lVar36 * 4;
    uVar37 = (ulong)param_5;
    lVar7 = CONCAT44(uStack_e4,uStack_e8);
    uVar34 = 1;
    uStack_114 = 1;
    lVar16 = param_3 + lVar36 * 4;
    lVar36 = param_2 + lVar36 * 4;
    lVar32 = param_3;
    do {
      if (uVar34 == uVar17) {
        FUN_109853c48();
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109858dbc);
        (*pcVar10)();
      }
      uVar3 = *(uint *)(lVar31 + uVar34 * 4);
      uVar18 = (ulong)uVar3;
      uVar21 = uVar34;
      if (uVar3 == 0xffffffff) {
LAB_109858c3c:
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar25 = 0;
          iVar13 = (int)uVar21 * param_5;
          lVar20 = param_3 + (long)iVar13 * 4;
          do {
            iVar15 = *(int *)(lVar32 + lVar25 * 4);
            iVar14 = *(int *)(param_1 + 0x18);
            if (iVar14 < iVar15) {
              lVar12 = *(long *)(param_1 + 0x28);
LAB_109858c84:
              *(int *)(lVar12 + lVar25 * 4) = iVar14;
            }
            else {
              iVar14 = *(int *)(param_1 + 0x14);
              lVar12 = *(long *)(param_1 + 0x28);
              if (iVar15 < iVar14) goto LAB_109858c84;
              *(int *)(lVar12 + lVar25 * 4) = iVar15;
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar25 = 0;
            do {
              iVar14 = *(int *)(param_2 + (long)iVar13 * 4 + lVar25 * 4) +
                       *(int *)(lVar12 + lVar25 * 4);
              *(int *)(lVar20 + lVar25 * 4) = iVar14;
              if (*(int *)(param_1 + 0x18) < iVar14) {
                iVar15 = -*(int *)(param_1 + 0x1c);
LAB_109858ce8:
                *(int *)(lVar20 + lVar25 * 4) = iVar14 + iVar15;
              }
              else if (iVar14 < *(int *)(param_1 + 0x14)) {
                iVar15 = *(int *)(param_1 + 0x1c);
                goto LAB_109858ce8;
              }
              lVar25 = lVar25 + 1;
            } while (lVar25 < *(int *)(param_1 + 0x10));
          }
        }
      }
      else {
        uVar35 = 0;
        lVar20 = plVar1[3];
        iVar13 = 2;
        if (0x55555555 < uVar3 * -0x55555555) {
          iVar13 = -1;
        }
        bVar9 = true;
        do {
          uVar24 = *(uint *)(lVar20 + uVar18 * 4);
          if (uVar24 != 0xffffffff) {
            lVar25 = *plVar1;
            uVar5 = uVar24 - 2;
            if (0x55555555 < (uVar24 + 1) * -0x55555555) {
              uVar5 = uVar24 + 1;
            }
            if (uVar5 == 0xffffffff) {
              uVar27 = 0xffffffff;
            }
            else {
              uVar27 = (ulong)*(uint *)(lVar25 + (ulong)uVar5 * 4);
            }
            iVar14 = 2;
            if (0x55555555 < uVar24 * -0x55555555) {
              iVar14 = -1;
            }
            if (iVar14 + uVar24 == 0xffffffff) {
              uVar30 = 0xffffffff;
            }
            else {
              uVar30 = (ulong)*(uint *)(lVar25 + (ulong)(iVar14 + uVar24) * 4);
            }
            lVar12 = *plVar2;
            iVar15 = *(int *)(lVar12 + (ulong)*(uint *)(lVar25 + (ulong)uVar24 * 4) * 4);
            iVar4 = *(int *)(lVar12 + uVar27 * 4);
            iVar14 = *(int *)(lVar12 + uVar30 * 4);
            if (((long)iVar15 < (long)uVar34 && (long)iVar4 < (long)uVar34) &&
                (long)iVar14 < (long)uVar34) {
              if (0 < (int)param_5) {
                piVar22 = (int *)alStack_d0[(long)(int)uVar35 * 3];
                piVar26 = (int *)(param_3 + (long)(int)(iVar4 * param_5) * 4);
                piVar28 = (int *)(param_3 + (long)(int)(iVar14 * param_5) * 4);
                piVar29 = (int *)(param_3 + (long)(int)(iVar15 * param_5) * 4);
                uVar27 = uVar37;
                do {
                  *piVar22 = (*piVar28 + *piVar26) - *piVar29;
                  uVar27 = uVar27 - 1;
                  piVar22 = piVar22 + 1;
                  piVar26 = piVar26 + 1;
                  piVar28 = piVar28 + 1;
                  piVar29 = piVar29 + 1;
                } while (uVar27 != 0);
              }
              uVar35 = uVar35 + 1;
              if (uVar35 == 4) goto LAB_109858a6c;
            }
          }
          iVar14 = (int)uVar18;
          if (bVar9) {
            uVar24 = iVar14 - 2;
            if (0x55555555 < (uint)((iVar14 + 1) * -0x55555555)) {
              uVar24 = iVar14 + 1;
            }
            if (((uVar24 != 0xffffffff) &&
                (uVar5 = *(uint *)(lVar20 + (ulong)uVar24 * 4), uVar24 = uVar5, uVar5 != 0xffffffff)
                ) && (uVar24 = uVar5 - 2, 0x55555555 < (uVar5 + 1) * -0x55555555)) {
              uVar24 = uVar5 + 1;
            }
          }
          else {
            iVar15 = 2;
            if (0x55555555 < (uint)(iVar14 * -0x55555555)) {
              iVar15 = -1;
            }
            uVar24 = iVar15 + iVar14;
            if ((uVar24 != 0xffffffff) &&
               (uVar24 = *(uint *)(lVar20 + (ulong)uVar24 * 4), uVar24 != 0xffffffff)) {
              if (uVar24 * -0x55555555 < 0x55555556) {
                uVar24 = uVar24 + 2;
              }
              else {
                uVar24 = uVar24 - 1;
              }
            }
          }
          if (uVar24 == uVar3) break;
          bVar8 = (bool)(uVar24 == 0xffffffff & bVar9);
          if (bVar8) {
            uVar24 = 0xffffffff;
          }
          uVar18 = (ulong)uVar24;
          bVar9 = (bool)((bVar8 ^ 1U) & bVar9);
          if ((iVar13 + uVar3 != 0xffffffff) && (bVar8)) {
            iVar14 = *(int *)(lVar20 + (ulong)(iVar13 + uVar3) * 4);
            if (iVar14 == -1) break;
            uVar24 = iVar14 + 2;
            if (0x55555555 < (uint)(iVar14 * -0x55555555)) {
              uVar24 = iVar14 - 1;
            }
            uVar18 = (ulong)uVar24;
            bVar9 = false;
          }
        } while ((int)uVar18 != -1);
        if ((int)uVar35 < 1) goto LAB_109858c3c;
LAB_109858a6c:
        if (0 < (int)param_5) {
          _bzero(piVar6,(ulong)param_5 << 2);
        }
        uVar21 = 0;
        iVar13 = 0;
        uVar3 = uVar35 - 1;
        plVar23 = (long *)(param_1 + 0x60 + (ulong)uVar3 * 0x18);
        uVar18 = plVar23[1];
        do {
          iVar14 = *(int *)(lVar7 + (ulong)uVar3 * 4);
          uVar27 = (ulong)iVar14;
          *(int *)(lVar7 + (ulong)uVar3 * 4) = iVar14 + 1;
          if (uVar18 <= uVar27) goto LAB_109858d30;
          if (((*(ulong *)(*plVar23 + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) == 0) &&
             (iVar13 = iVar13 + 1, 0 < (int)param_5)) {
            piVar22 = (int *)alStack_d0[uVar21 * 3];
            piVar26 = (int *)CONCAT44(uStack_fc,uStack_100);
            uVar27 = uVar37;
            do {
              *piVar26 = *piVar22 + *piVar26;
              uVar27 = uVar27 - 1;
              piVar22 = piVar22 + 1;
              piVar26 = piVar26 + 1;
            } while (uVar27 != 0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar35);
        uVar21 = (ulong)uStack_114;
        if (iVar13 == 0) goto LAB_109858c3c;
        piVar22 = piVar6;
        uVar21 = uVar37;
        if (0 < (int)param_5) {
          do {
            iVar14 = 0;
            if (iVar13 != 0) {
              iVar14 = *piVar22 / iVar13;
            }
            *piVar22 = iVar14;
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 1;
          } while (uVar21 != 0);
        }
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar20 = 0;
          do {
            iVar14 = piVar6[lVar20];
            iVar13 = *(int *)(param_1 + 0x18);
            if (iVar13 < iVar14) {
              lVar25 = *(long *)(param_1 + 0x28);
LAB_109858bb8:
              *(int *)(lVar25 + lVar20 * 4) = iVar13;
            }
            else {
              iVar13 = *(int *)(param_1 + 0x14);
              lVar25 = *(long *)(param_1 + 0x28);
              if (iVar14 < iVar13) goto LAB_109858bb8;
              *(int *)(lVar25 + lVar20 * 4) = iVar14;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar20 = 0;
            do {
              iVar13 = *(int *)(lVar36 + lVar20 * 4) + *(int *)(lVar25 + lVar20 * 4);
              *(int *)(lVar16 + lVar20 * 4) = iVar13;
              if (*(int *)(param_1 + 0x18) < iVar13) {
                iVar14 = -*(int *)(param_1 + 0x1c);
LAB_109858c1c:
                *(int *)(lVar16 + lVar20 * 4) = iVar13 + iVar14;
              }
              else if (iVar13 < *(int *)(param_1 + 0x14)) {
                iVar14 = *(int *)(param_1 + 0x1c);
                goto LAB_109858c1c;
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(int *)(param_1 + 0x10));
          }
        }
      }
      uVar34 = uVar34 + 1;
      uStack_114 = uStack_114 + 1;
      lVar16 = lVar16 + lVar33;
      lVar36 = lVar36 + lVar33;
      lVar32 = lVar32 + lVar33;
      uStack_12c = (uint)(uVar19 <= uVar34);
    } while (uVar34 != uVar19);
  }
  uStack_12c = 1;
LAB_109858d30:
  if (CONCAT44(uStack_fc,uStack_100) != 0) {
    lStack_f8 = CONCAT44(uStack_fc,uStack_100);
    __ZdlPv();
  }
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    lStack_e0 = CONCAT44(uStack_e4,uStack_e8);
    __ZdlPv();
  }
  lVar31 = 0;
  do {
    puVar11 = *(undefined8 **)((long)alStack_d0 + lVar31 + 0x48);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 **)((long)alStack_d0 + lVar31 + 0x50) = puVar11;
      __ZdlPv();
    }
    lVar31 = lVar31 + -0x18;
  } while (lVar31 != -0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_d0[0xc]) {
    return (undefined8 *)(ulong)uStack_12c;
  }
  ___stack_chk_fail();
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    lStack_e0 = CONCAT44(uStack_e4,uStack_e8);
    __ZdlPv();
  }
  lVar31 = 0;
  do {
    lVar36 = *(long *)((long)alStack_d0 + lVar31 + 0x48);
    if (lVar36 != 0) {
      *(long *)((long)alStack_d0 + lVar31 + 0x50) = lVar36;
      __ZdlPv();
    }
    lVar31 = lVar31 + -0x18;
  } while (lVar31 != -0x60);
  __Unwind_Resume();
  *puVar11 = &PTR_FUN_110b154f8;
  if (puVar11[0x10] != 0) {
    __ZdlPv();
  }
  lVar31 = puVar11[0xe];
  puVar11[0xe] = 0;
  if (lVar31 != 0) {
    __ZdaPv();
  }
  *puVar11 = &PTR_DAT_110b14fd0;
  if (puVar11[5] != 0) {
    puVar11[6] = puVar11[5];
    __ZdlPv();
  }
  return puVar11;
}



/* Entry: 109858e28; end: 109858eef;  */

undefined8 * FUN_109858e28(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b154f8;
  if (param_1[0x10] != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109858ef0; end: 109858f6b;  */

undefined8 FUN_109858ef0(void)

{
  return 3;
}



/* Entry: 109858f6c; end: 1098590b3;  */

void FUN_109858f6c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  uint uStack_54;
  
  iVar3 = (int)&uStack_70;
  uStack_54 = 0;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar9 = param_2[2] + 4;
    if (param_2[1] < lVar9) {
      return;
    }
    uVar2 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar9;
  }
  else {
    iVar4 = 1;
    FUN_109854d50(1,&uStack_54,param_2);
    uVar2 = uStack_54;
    if (iVar4 == 0) {
      return;
    }
  }
  if ((uVar2 != 0) &&
     (uVar2 <= (uint)((ulong)((*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48)) >> 2)))
  {
    func_0x000104bec9f0(param_1 + 0x80,(ulong)uVar2,0);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_10985d80c(&uStack_70,param_2);
    if (iVar3 != 0) {
      uVar8 = 0;
      uVar11 = 0;
      lVar9 = *(long *)(param_1 + 0x80);
      uVar10 = 1;
      do {
        uVar5 = 0;
        FUN_10985d980();
        uVar1 = uVar11 ^ uVar5;
        uVar6 = uVar8 >> 6;
        uVar7 = 1L << (uVar8 & 0x3f);
        if ((uVar1 & 1) == 0) {
          uVar7 = *(ulong *)(lVar9 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
        }
        else {
          uVar7 = *(ulong *)(lVar9 + uVar6 * 8) | uVar7;
        }
        uVar11 = uVar10 ^ uVar5;
        *(ulong *)(lVar9 + uVar6 * 8) = uVar7;
        uVar8 = uVar8 + 1;
        uVar10 = uVar1;
      } while (uVar2 != uVar8);
      FUN_109853bc4(param_1 + 0x10,param_2);
    }
  }
  return;
}



/* Entry: 1098590b4; end: 10985971f;  */

undefined8 *
FUN_1098590b4(long param_1,long param_2,long param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float afStack_128 [4];
  float afStack_118 [4];
  float afStack_108 [4];
  float afStack_f8 [4];
  float afStack_e8 [4];
  float afStack_d8 [4];
  float afStack_c8 [2];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == 2) {
    *(undefined4 *)(param_1 + 0x78) = 2;
    *(undefined8 *)(param_1 + 0x68) = param_6;
    uVar5 = 8;
    __Znam();
    lVar6 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    if (lVar6 != 0) {
      __ZdaPv();
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
    func_0x000108a5942c(param_1 + 0x28,2);
    uVar10 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
    if (0 < (int)(uVar10 >> 2)) {
      uVar18 = 0;
      lVar6 = param_3;
      do {
        puVar7 = (undefined8 *)0x55555556;
        lVar13 = **(long **)(param_1 + 0x58);
        if ((ulong)((*(long **)(param_1 + 0x58))[1] - lVar13 >> 2) <= uVar18) {
LAB_109859718:
          FUN_109853c48();
          goto LAB_10985971c;
        }
        uVar1 = *(uint *)(lVar13 + uVar18 * 4);
        if (uVar1 == 0xffffffff) {
          uVar12 = 0xffffffffffffffff;
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = uVar1 - 2;
          if (0x55555555 < (uVar1 + 1) * -0x55555555) {
            uVar9 = uVar1 + 1;
          }
          if (uVar9 != 0xffffffff) {
            uVar9 = *(uint *)(**(long **)(param_1 + 0x48) + (ulong)uVar9 * 4);
          }
          iVar8 = 2;
          if (uVar1 != (uVar1 / 3) * 3) {
            iVar8 = -1;
          }
          if (iVar8 + uVar1 == 0xffffffff) {
            uVar12 = 0xffffffffffffffff;
          }
          else {
            uVar12 = (ulong)*(int *)(**(long **)(param_1 + 0x48) + (ulong)(iVar8 + uVar1) * 4);
          }
        }
        lVar13 = **(long **)(param_1 + 0x50);
        uVar16 = (*(long **)(param_1 + 0x50))[1] - lVar13 >> 2;
        if ((uVar16 <= (ulong)(long)(int)uVar9) || (uVar16 <= uVar12)) {
          FUN_1092e2168();
          goto LAB_109859718;
        }
        iVar8 = *(int *)(lVar13 + (long)(int)uVar9 * 4);
        iVar2 = *(int *)(lVar13 + uVar12 * 4);
        iVar17 = (int)uVar18;
        if (iVar2 < iVar17 && iVar8 < iVar17) {
          piVar11 = (int *)(param_3 + (long)(*(int *)(param_1 + 0x78) * iVar8) * 4);
          fVar24 = (float)*piVar11;
          fVar25 = (float)piVar11[1];
          piVar11 = (int *)(param_3 + (long)(*(int *)(param_1 + 0x78) * iVar2) * 4);
          fVar26 = (float)*piVar11;
          fVar27 = (float)piVar11[1];
          afStack_c8[0] = fVar26;
          afStack_c8[1] = fVar27;
          bVar4 = true;
          pfVar14 = afStack_c8;
          fVar19 = fVar24;
          do {
            fVar22 = fVar19;
            fVar20 = *pfVar14;
            if (!bVar4) break;
            bVar4 = false;
            pfVar14 = afStack_c8 + 1;
            fVar19 = fVar25;
          } while (fVar20 == fVar22);
          if (fVar20 == fVar22) {
            lVar13 = 0;
            uStack_c0 = 0x100000000;
            piVar11 = *(int **)(param_1 + 0x70);
            do {
              fVar19 = afStack_c8[*(int *)((long)&uStack_c0 + lVar13)];
              bVar4 = true;
              if ((fVar19 <= 2.1474836e+09) && (bVar4 = true, !NAN(fVar19))) {
                bVar4 = false;
              }
              bVar3 = true;
              if ((!bVar4) && (bVar3 = false, !NAN(fVar19))) {
                bVar3 = fVar19 < -2.1474836e+09;
              }
              iVar8 = -0x80000000;
              if (!bVar3) {
                iVar8 = (int)fVar19;
              }
              piVar11[*(int *)((long)&uStack_c0 + lVar13)] = iVar8;
              lVar13 = lVar13 + 4;
            } while (lVar13 != 8);
          }
          else {
            lVar13 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) +
                                     (-(uVar18 >> 0x1f & 1) & 0xfffffffc00000000 |
                                     (uVar18 & 0xffffffff) << 2));
            uStack_c0 = 0;
            uStack_b8 = 0;
            if ((*(byte *)(lVar13 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + uVar12 * 4);
            }
            FUN_109855698(lVar13,uVar12,(long)*(char *)(lVar13 + 0x18),&uStack_c0);
            lVar13 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)iVar8 * 4);
            afStack_d8[0] = 0.0;
            afStack_d8[1] = 0.0;
            afStack_d8[2] = 0.0;
            if ((*(byte *)(lVar13 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + uVar12 * 4);
            }
            FUN_109855698(lVar13,uVar12,(long)*(char *)(lVar13 + 0x18),afStack_d8);
            lVar13 = *(long *)(param_1 + 0x60);
            uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 4);
            afStack_e8[0] = 0.0;
            afStack_e8[1] = 0.0;
            afStack_e8[2] = 0.0;
            if ((*(byte *)(lVar13 + 100) & 1) == 0) {
              uVar12 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + uVar12 * 4);
            }
            FUN_109855698(lVar13,uVar12,(long)*(char *)(lVar13 + 0x18),afStack_e8);
            lVar13 = 0;
            afStack_f8[2] = 0.0;
            afStack_f8[0] = 0.0;
            afStack_f8[1] = 0.0;
            do {
              *(float *)((long)afStack_f8 + lVar13) =
                   *(float *)((long)afStack_e8 + lVar13) - *(float *)((long)afStack_d8 + lVar13);
              lVar13 = lVar13 + 4;
            } while (lVar13 != 0xc);
            lVar13 = 0;
            afStack_108[2] = 0.0;
            afStack_108[0] = 0.0;
            afStack_108[1] = 0.0;
            do {
              *(float *)((long)afStack_108 + lVar13) =
                   *(float *)((long)&uStack_c0 + lVar13) - *(float *)((long)afStack_d8 + lVar13);
              lVar13 = lVar13 + 4;
            } while (lVar13 != 0xc);
            lVar13 = 0;
            fVar19 = 0.0;
            do {
              fVar19 = fVar19 + *(float *)((long)afStack_f8 + lVar13) *
                                *(float *)((long)afStack_f8 + lVar13);
              lVar13 = lVar13 + 4;
            } while (lVar13 != 0xc);
            if (*(int *)(param_1 + 0x98) < 0x102) {
LAB_109859494:
              lVar13 = 0;
              fVar20 = 0.0;
              do {
                fVar20 = fVar20 + *(float *)((long)afStack_108 + lVar13) *
                                  *(float *)((long)afStack_f8 + lVar13);
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0xc);
              lVar13 = 0;
              afStack_128[2] = 0.0;
              afStack_128[0] = 0.0;
              afStack_128[1] = 0.0;
              fVar20 = fVar20 / fVar19;
              do {
                *(float *)((long)afStack_128 + lVar13) =
                     fVar20 * *(float *)((long)afStack_f8 + lVar13);
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0xc);
              lVar13 = 0;
              afStack_118[2] = 0.0;
              afStack_118[0] = 0.0;
              afStack_118[1] = 0.0;
              do {
                *(float *)((long)afStack_118 + lVar13) =
                     *(float *)((long)afStack_108 + lVar13) - *(float *)((long)afStack_128 + lVar13)
                ;
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0xc);
              lVar13 = 0;
              fVar22 = 0.0;
              do {
                fVar22 = fVar22 + *(float *)((long)afStack_118 + lVar13) *
                                  *(float *)((long)afStack_118 + lVar13);
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0xc);
              fVar22 = SQRT(fVar22 / fVar19);
            }
            else {
              fVar20 = 0.0;
              fVar22 = 0.0;
              if (0.0 < fVar19) goto LAB_109859494;
            }
            if (*(long *)(param_1 + 0x88) == 0) goto LAB_1098596c8;
            fVar27 = fVar27 - fVar25;
            fVar26 = fVar26 - fVar24;
            uVar12 = *(long *)(param_1 + 0x88) - 1;
            uVar16 = *(ulong *)(*(long *)(param_1 + 0x80) + (uVar12 >> 6) * 8);
            *(ulong *)(param_1 + 0x88) = uVar12;
            bVar4 = (uVar16 & 1L << (uVar12 & 0x3f)) != 0;
            fVar19 = fVar27 * fVar22;
            if (bVar4) {
              fVar19 = -(fVar27 * fVar22);
            }
            fVar21 = -(fVar26 * fVar22);
            if (bVar4) {
              fVar21 = fVar26 * fVar22;
            }
            fVar19 = fVar24 + fVar20 * fVar26 + fVar19 + 0.5;
            dVar23 = (double)(long)fVar19;
            bVar4 = true;
            if ((dVar23 <= 2147483647.0) && (bVar4 = true, !NAN(dVar23))) {
              bVar4 = false;
            }
            bVar3 = true;
            if ((!bVar4) && (bVar3 = false, !NAN(dVar23))) {
              bVar3 = dVar23 < -2147483648.0;
            }
            iVar8 = -0x80000000;
            if (!bVar3) {
              iVar8 = (int)fVar19;
            }
            piVar11 = *(int **)(param_1 + 0x70);
            fVar19 = fVar25 + fVar20 * fVar27 + fVar21 + 0.5;
            dVar23 = (double)(long)fVar19;
            bVar4 = true;
            if ((dVar23 <= 2147483647.0) && (bVar4 = true, !NAN(dVar23))) {
              bVar4 = false;
            }
            bVar3 = true;
            if ((!bVar4) && (bVar3 = false, !NAN(dVar23))) {
              bVar3 = dVar23 < -2147483648.0;
            }
            iVar2 = -0x80000000;
            if (!bVar3) {
              iVar2 = (int)fVar19;
            }
            *piVar11 = iVar8;
            piVar11[1] = iVar2;
          }
        }
        else {
          if (iVar17 <= iVar8) {
            if (uVar18 == 0) {
              piVar11 = *(int **)(param_1 + 0x70);
              if (0 < *(int *)(param_1 + 0x78)) {
                lVar13 = 0;
                do {
                  piVar11[lVar13] = 0;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < *(int *)(param_1 + 0x78));
              }
              goto LAB_1098595fc;
            }
            iVar8 = iVar17 + -1;
          }
          iVar2 = *(int *)(param_1 + 0x78);
          piVar11 = *(int **)(param_1 + 0x70);
          if (0 < iVar2) {
            lVar13 = 0;
            do {
              piVar11[lVar13] = *(int *)(param_3 + (long)(iVar2 * iVar8) * 4 + lVar13 * 4);
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(param_1 + 0x78));
          }
        }
LAB_1098595fc:
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar13 = 0;
          do {
            iVar2 = piVar11[lVar13];
            iVar8 = *(int *)(param_1 + 0x18);
            if (iVar8 < iVar2) {
              lVar15 = *(long *)(param_1 + 0x28);
LAB_109859634:
              *(int *)(lVar15 + lVar13 * 4) = iVar8;
            }
            else {
              iVar8 = *(int *)(param_1 + 0x14);
              lVar15 = *(long *)(param_1 + 0x28);
              if (iVar2 < iVar8) goto LAB_109859634;
              *(int *)(lVar15 + lVar13 * 4) = iVar2;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar13 = 0;
            do {
              iVar8 = *(int *)(param_2 + lVar13 * 4) + *(int *)(lVar15 + lVar13 * 4);
              *(int *)(lVar6 + lVar13 * 4) = iVar8;
              if (*(int *)(param_1 + 0x18) < iVar8) {
                iVar2 = -*(int *)(param_1 + 0x1c);
LAB_109859698:
                *(int *)(lVar6 + lVar13 * 4) = iVar8 + iVar2;
              }
              else if (iVar8 < *(int *)(param_1 + 0x14)) {
                iVar2 = *(int *)(param_1 + 0x1c);
                goto LAB_109859698;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(param_1 + 0x10));
          }
        }
        uVar18 = uVar18 + 1;
        lVar6 = lVar6 + 8;
        param_2 = param_2 + 8;
      } while (uVar18 != (uVar10 >> 2 & 0x7fffffff));
    }
    puVar7 = (undefined8 *)0x1;
  }
  else {
LAB_1098596c8:
    puVar7 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return puVar7;
  }
LAB_10985971c:
  ___stack_chk_fail();
  *puVar7 = &PTR_FUN_110b15580;
  if (puVar7[0xf] != 0) {
    __ZdlPv();
  }
  *puVar7 = &PTR_DAT_110b14fd0;
  if (puVar7[5] != 0) {
    puVar7[6] = puVar7[5];
    __ZdlPv();
  }
  return puVar7;
}



/* Entry: 109859720; end: 1098597c7;  */

undefined8 * FUN_109859720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b15580;
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098597c8; end: 109859843;  */

undefined8 FUN_1098597c8(void)

{
  return 5;
}



/* Entry: 109859844; end: 10985994b;  */

long FUN_109859844(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_2[2] + 4;
  if (param_2[1] < lVar5) {
    return 0;
  }
  uVar2 = *(uint *)(*param_2 + param_2[2]);
  param_2[2] = lVar5;
  if ((int)uVar2 < 0) {
    lVar5 = 0;
  }
  else {
    func_0x000104bec9f0(param_1 + 0x78,(ulong)uVar2,0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puVar4 = &uStack_68;
    FUN_10985d80c(puVar4,param_2);
    lVar5 = 0;
    if ((int)puVar4 != 0) {
      if (uVar2 != 0) {
        uVar8 = 0;
        uVar10 = 0;
        lVar5 = *(long *)(param_1 + 0x78);
        uVar9 = 1;
        do {
          uVar3 = 0;
          FUN_10985d980();
          uVar1 = uVar10 ^ uVar3;
          uVar6 = uVar8 >> 6;
          uVar7 = 1L << (uVar8 & 0x3f);
          if ((uVar1 & 1) == 0) {
            uVar7 = *(ulong *)(lVar5 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
          }
          else {
            uVar7 = *(ulong *)(lVar5 + uVar6 * 8) | uVar7;
          }
          uVar10 = uVar9 ^ uVar3;
          *(ulong *)(lVar5 + uVar6 * 8) = uVar7;
          uVar8 = uVar8 + 1;
          uVar9 = uVar1;
        } while (uVar2 != uVar8);
      }
      lVar5 = param_1 + 0x10;
      FUN_109853bc4(lVar5,param_2);
    }
  }
  return lVar5;
}



/* Entry: 10985994c; end: 109859f0f;  */

undefined8
FUN_10985994c(long param_1,long param_2,long param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  char *pcVar2;
  byte *pbVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  bool bVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *extraout_x8;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  ulong uVar38;
  double dVar39;
  float fVar40;
  long alStack_128 [25];
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    *(undefined4 *)(param_1 + 0x10) = 2;
    func_0x000108a5942c(param_1 + 0x28,2);
    uVar23 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
    if (0 < (int)(uVar23 >> 2)) {
      uVar38 = 0;
      uVar23 = uVar23 >> 2 & 0x7fffffff;
      lVar26 = param_3;
      do {
        puVar21 = (undefined8 *)0x2;
        lVar28 = **(long **)(param_1 + 0x58);
        if ((ulong)((*(long **)(param_1 + 0x58))[1] - lVar28 >> 2) <= uVar38) {
LAB_109859f0c:
          iVar19 = (int)uVar23;
          FUN_109853c48();
          puVar10 = (undefined8 *)*puVar21;
          uVar22 = *(uint *)(puVar21[1] + (long)iVar19 * 4);
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          *extraout_x8 = 0;
          if ((*(byte *)((long)puVar10 + 100) & 1) == 0) {
            uVar22 = *(uint *)(puVar10[9] + (ulong)uVar22 * 4);
          }
          uVar23 = (ulong)uVar22;
          bVar13 = *(byte *)(puVar10 + 3);
          if (extraout_x8 != (undefined8 *)0x0) {
            switch(*(undefined4 *)((long)puVar10 + 0x1c)) {
            case 1:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                uVar38 = 0;
                lVar26 = puVar10[5];
                lVar25 = puVar10[6];
                lVar28 = *(long *)*puVar10;
                pcVar11 = (char *)((long *)*puVar10)[1];
                do {
                  pcVar2 = (char *)(lVar28 + lVar26 * uVar23 + lVar25 + uVar38);
                  if (pcVar11 <= pcVar2) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (long)*pcVar2;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 2:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                uVar38 = 0;
                lVar26 = puVar10[5];
                lVar25 = puVar10[6];
                lVar28 = *(long *)*puVar10;
                pbVar12 = (byte *)((long *)*puVar10)[1];
                do {
                  pbVar3 = (byte *)(lVar28 + lVar26 * uVar23 + lVar25 + uVar38);
                  if (pbVar12 <= pbVar3) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (ulong)*pbVar3;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 3:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (long)*(short *)(lVar28 + uVar38 * 2);
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 2;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 4:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (ulong)*(ushort *)(lVar28 + uVar38 * 2);
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 2;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 5:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (long)*(int *)(lVar28 + uVar38 * 4);
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 4;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 6:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (ulong)*(uint *)(lVar28 + uVar38 * 4);
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 4;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 7:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = *(undefined8 *)(lVar28 + uVar38 * 8);
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 8;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 8:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if ((uVar27 <= (ulong)(lVar28 + lVar26)) ||
                     (lVar25 = *(long *)(lVar28 + uVar38 * 8), lVar25 < 0)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = lVar25;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 8;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 9:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  fVar40 = *(float *)(lVar28 + uVar38 * 4);
                  if (9.223372e+18 <= fVar40) {
                    return 0;
                  }
                  if ((*(byte *)(puVar10 + 4) & 1) != 0) {
                    return 0;
                  }
                  if (fVar40 < -9.223372e+18) {
                    return 0;
                  }
                  if (0x7f7fffff < (uint)ABS(fVar40)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (long)fVar40;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 4;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 10:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                lVar26 = 0;
                uVar38 = 0;
                uVar27 = ((long *)*puVar10)[1];
                lVar28 = *(long *)*puVar10 + puVar10[5] * uVar23 + puVar10[6];
                do {
                  if (uVar27 <= (ulong)(lVar28 + lVar26)) {
                    return 0;
                  }
                  dVar39 = *(double *)(lVar28 + uVar38 * 8);
                  if (9.223372036854776e+18 <= dVar39) {
                    return 0;
                  }
                  if ((*(byte *)(puVar10 + 4) & 1) != 0) {
                    return 0;
                  }
                  if (dVar39 < -9.223372036854776e+18) {
                    return 0;
                  }
                  if (0x7fefffffffffffff < (ulong)ABS(dVar39)) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (long)dVar39;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                  lVar26 = lVar26 + 8;
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            case 0xb:
              uVar22 = (uint)bVar13;
              bVar13 = *(byte *)(puVar10 + 3);
              uVar29 = (uint)bVar13;
              if (uVar22 <= bVar13) {
                uVar29 = uVar22;
              }
              if (uVar29 != 0) {
                uVar38 = 0;
                lVar26 = puVar10[5];
                lVar25 = puVar10[6];
                lVar28 = *(long *)*puVar10;
                pbVar12 = (byte *)((long *)*puVar10)[1];
                do {
                  pbVar3 = (byte *)(lVar28 + lVar26 * uVar23 + lVar25 + uVar38);
                  if (pbVar12 <= pbVar3) {
                    return 0;
                  }
                  extraout_x8[uVar38] = (ulong)*pbVar3;
                  uVar38 = uVar38 + 1;
                  bVar13 = *(byte *)(puVar10 + 3);
                  uVar29 = (uint)bVar13;
                  if (uVar22 <= bVar13) {
                    uVar29 = uVar22;
                  }
                } while (uVar38 < uVar29);
              }
              uVar29 = (uint)bVar13;
              if (uVar29 < uVar22) {
                _bzero(extraout_x8 + uVar29,(ulong)(~uVar29 + uVar22) * 8 + 8);
              }
              return 1;
            }
          }
          return 0;
        }
        uVar22 = *(uint *)(lVar28 + uVar38 * 4);
        if (uVar22 == 0xffffffff) {
          uVar27 = 0xffffffffffffffff;
          uVar29 = 0xffffffff;
        }
        else {
          uVar29 = uVar22 - 2;
          if (0x55555555 < (uVar22 + 1) * -0x55555555) {
            uVar29 = uVar22 + 1;
          }
          if (uVar29 != 0xffffffff) {
            uVar29 = *(uint *)(**(long **)(param_1 + 0x98) + (ulong)uVar29 * 4);
          }
          iVar19 = 2;
          if (uVar22 != (uVar22 / 3) * 3) {
            iVar19 = -1;
          }
          if (iVar19 + uVar22 == 0xffffffff) {
            uVar27 = 0xffffffffffffffff;
          }
          else {
            uVar27 = (ulong)*(int *)(**(long **)(param_1 + 0x98) + (ulong)(iVar19 + uVar22) * 4);
          }
        }
        lVar28 = **(long **)(param_1 + 0xa0);
        uVar31 = (*(long **)(param_1 + 0xa0))[1] - lVar28 >> 2;
        if ((uVar31 <= (ulong)(long)(int)uVar29) || (uVar31 <= uVar27)) {
          FUN_1092e2168();
          goto LAB_109859f0c;
        }
        iVar19 = *(int *)(lVar28 + (long)(int)uVar29 * 4);
        iVar14 = *(int *)(lVar28 + uVar27 * 4);
        iVar37 = (int)uVar38;
        if (iVar14 < iVar37 && iVar19 < iVar37) {
          piVar4 = (int *)(param_3 + (long)iVar19 * 8);
          iVar6 = *piVar4;
          iVar8 = piVar4[1];
          uVar27 = (ulong)iVar6;
          piVar4 = (int *)(param_3 + (long)iVar14 * 8);
          iVar7 = *piVar4;
          iVar9 = piVar4[1];
          if (iVar7 == iVar6 && iVar9 == iVar8) {
            *(int *)(param_1 + 0x70) = iVar7;
            *(int *)(param_1 + 0x74) = iVar9;
          }
          else {
            uVar31 = (ulong)iVar8;
            FUN_109859f10(alStack_128 + 0x15,param_1 + 0x60,uVar38);
            FUN_109859f10(alStack_128 + 0x12,param_1 + 0x60,(long)iVar19);
            FUN_109859f10(alStack_128 + 0xf,param_1 + 0x60,(long)iVar14);
            lVar28 = 0;
            alStack_128[0xc] = 0;
            alStack_128[0xd] = 0;
            alStack_128[0xe] = 0;
            do {
              *(long *)((long)alStack_128 + lVar28 + 0x60) =
                   *(long *)((long)alStack_128 + lVar28 + 0x78) -
                   *(long *)((long)alStack_128 + lVar28 + 0x90);
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            uVar24 = 0;
            do {
              lVar25 = *(long *)((long)alStack_128 + lVar28 + 0x60);
              uVar24 = uVar24 + lVar25 * lVar25;
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            if (uVar24 == 0) goto LAB_109859aa0;
            lVar28 = 0;
            alStack_128[9] = 0;
            alStack_128[10] = 0;
            alStack_128[0xb] = 0;
            do {
              *(long *)((long)alStack_128 + lVar28 + 0x48) =
                   *(long *)((long)alStack_128 + lVar28 + 0xa8) -
                   *(long *)((long)alStack_128 + lVar28 + 0x90);
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            uVar32 = 0;
            do {
              uVar32 = uVar32 + *(long *)((long)alStack_128 + lVar28 + 0x48) *
                                *(long *)((long)alStack_128 + lVar28 + 0x60);
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            uVar33 = -uVar27;
            if (-1 < (long)uVar27) {
              uVar33 = uVar27;
            }
            uVar17 = -uVar31;
            if (-1 < (long)uVar31) {
              uVar17 = uVar31;
            }
            if (uVar33 <= uVar17) {
              uVar33 = uVar17;
            }
            uVar17 = 0;
            if (uVar24 != 0) {
              uVar17 = 0x7fffffffffffffff / uVar24;
            }
            if (uVar17 < uVar33) goto LAB_109859ee4;
            uVar17 = (long)iVar7 - uVar27;
            uVar30 = (long)iVar9 - uVar31;
            uVar33 = -uVar17;
            if (-1 < (long)uVar17) {
              uVar33 = uVar17;
            }
            uVar34 = -uVar30;
            if (-1 < (long)uVar30) {
              uVar34 = uVar30;
            }
            if (uVar33 <= uVar34) {
              uVar33 = uVar34;
            }
            uVar34 = -uVar32;
            if (-1 < (long)uVar32) {
              uVar34 = uVar32;
            }
            uVar35 = 0;
            if (uVar33 != 0) {
              uVar35 = 0x7fffffffffffffff / uVar33;
            }
            if (uVar35 < uVar34) goto LAB_109859ee4;
            uVar33 = -alStack_128[0xc];
            if (-1 < alStack_128[0xc]) {
              uVar33 = alStack_128[0xc];
            }
            uVar35 = -alStack_128[0xd];
            if (-1 < alStack_128[0xd]) {
              uVar35 = alStack_128[0xd];
            }
            uVar5 = -alStack_128[0xe];
            if (-1 < alStack_128[0xe]) {
              uVar5 = alStack_128[0xe];
            }
            if (uVar33 <= uVar35) {
              uVar33 = uVar35;
            }
            if (uVar33 <= uVar5) {
              uVar33 = uVar5;
            }
            uVar35 = 0;
            if (uVar33 != 0) {
              uVar35 = 0x7fffffffffffffff / uVar33;
            }
            if (uVar35 < uVar34) goto LAB_109859ee4;
            lVar28 = 0;
            alStack_128[0] = 0;
            alStack_128[1] = 0;
            alStack_128[2] = 0;
            do {
              *(ulong *)((long)alStack_128 + lVar28) =
                   *(long *)((long)alStack_128 + lVar28 + 0x60) * uVar32;
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            alStack_128[3] = 0;
            alStack_128[4] = 0;
            alStack_128[5] = 0;
            do {
              lVar25 = 0;
              if (uVar24 != 0) {
                lVar25 = *(long *)((long)alStack_128 + lVar28) / (long)uVar24;
              }
              *(long *)((long)alStack_128 + lVar28 + 0x18) = lVar25;
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            alStack_128[6] = 0;
            alStack_128[7] = 0;
            alStack_128[8] = 0;
            do {
              *(long *)((long)alStack_128 + lVar28 + 0x30) =
                   *(long *)((long)alStack_128 + lVar28 + 0x18) +
                   *(long *)((long)alStack_128 + lVar28 + 0x90);
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            alStack_128[3] = 0;
            alStack_128[4] = 0;
            alStack_128[5] = 0;
            do {
              *(long *)((long)alStack_128 + lVar28 + 0x18) =
                   *(long *)((long)alStack_128 + lVar28 + 0xa8) -
                   *(long *)((long)alStack_128 + lVar28 + 0x30);
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            lVar28 = 0;
            lVar25 = 0;
            do {
              lVar36 = *(long *)((long)alStack_128 + lVar28 + 0x18);
              lVar25 = lVar25 + lVar36 * lVar36;
              lVar28 = lVar28 + 8;
            } while (lVar28 != 0x18);
            uVar33 = lVar25 * uVar24;
            if (uVar33 == 0) {
              uVar34 = 0;
            }
            else {
              if (uVar33 == 1) {
                uVar34 = 1;
              }
              else {
                uVar34 = 1;
                uVar35 = uVar33;
                do {
                  uVar34 = uVar34 << 1;
                  bVar18 = 7 < uVar35;
                  uVar35 = uVar35 >> 2;
                } while (bVar18);
              }
              do {
                uVar35 = 0;
                if (uVar34 != 0) {
                  uVar35 = uVar33 / uVar34;
                }
                uVar34 = uVar35 + uVar34 >> 1;
              } while (uVar33 <= uVar34 * uVar34 && uVar34 * uVar34 - uVar33 != 0);
            }
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_109859ee4;
            uVar33 = *(long *)(param_1 + 0x80) - 1;
            uVar35 = *(ulong *)(*(long *)(param_1 + 0x78) + (uVar33 >> 6) * 8);
            *(ulong *)(param_1 + 0x80) = uVar33;
            bVar18 = (uVar35 & 1L << (uVar33 & 0x3f)) == 0;
            lVar28 = -(uVar34 * uVar17);
            if (bVar18) {
              lVar28 = uVar34 * uVar17;
            }
            lVar25 = -(uVar34 * uVar30);
            if (!bVar18) {
              lVar25 = uVar34 * uVar30;
            }
            uVar15 = 0;
            if (uVar24 != 0) {
              uVar15 = (undefined4)
                       ((long)(uVar24 * uVar27 + uVar32 * uVar17 + lVar25) / (long)uVar24);
            }
            uVar16 = 0;
            if (uVar24 != 0) {
              uVar16 = (undefined4)
                       ((long)(uVar24 * uVar31 + uVar32 * uVar30 + lVar28) / (long)uVar24);
            }
            *(undefined4 *)(param_1 + 0x70) = uVar15;
            *(undefined4 *)(param_1 + 0x74) = uVar16;
          }
        }
        else {
LAB_109859aa0:
          if (iVar19 < iVar37) {
            iVar19 = iVar19 << 1;
          }
          else {
            if (uVar38 == 0) {
              *(undefined8 *)(param_1 + 0x70) = 0;
              goto LAB_109859e18;
            }
            iVar19 = iVar37 * 2 + -2;
          }
          puVar1 = (undefined4 *)(param_3 + (long)iVar19 * 4);
          *(undefined4 *)(param_1 + 0x70) = *puVar1;
          *(undefined4 *)(param_1 + 0x74) = puVar1[1];
        }
LAB_109859e18:
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar28 = 0;
          do {
            iVar14 = *(int *)(param_1 + 0x70 + lVar28 * 4);
            iVar19 = *(int *)(param_1 + 0x18);
            if (iVar19 < iVar14) {
              lVar25 = *(long *)(param_1 + 0x28);
LAB_109859e50:
              *(int *)(lVar25 + lVar28 * 4) = iVar19;
            }
            else {
              iVar19 = *(int *)(param_1 + 0x14);
              lVar25 = *(long *)(param_1 + 0x28);
              if (iVar14 < iVar19) goto LAB_109859e50;
              *(int *)(lVar25 + lVar28 * 4) = iVar14;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < *(int *)(param_1 + 0x10));
          if (0 < *(int *)(param_1 + 0x10)) {
            lVar28 = 0;
            do {
              iVar19 = *(int *)(param_2 + lVar28 * 4) + *(int *)(lVar25 + lVar28 * 4);
              *(int *)(lVar26 + lVar28 * 4) = iVar19;
              if (*(int *)(param_1 + 0x18) < iVar19) {
                iVar14 = -*(int *)(param_1 + 0x1c);
LAB_109859eb4:
                *(int *)(lVar26 + lVar28 * 4) = iVar19 + iVar14;
              }
              else if (iVar19 < *(int *)(param_1 + 0x14)) {
                iVar14 = *(int *)(param_1 + 0x1c);
                goto LAB_109859eb4;
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(param_1 + 0x10));
          }
        }
        uVar38 = uVar38 + 1;
        lVar26 = lVar26 + 8;
        param_2 = param_2 + 8;
      } while (uVar38 != uVar23);
    }
    uVar20 = 1;
  }
  else {
LAB_109859ee4:
    uVar20 = 0;
  }
  return uVar20;
}



/* Entry: 109859f10; end: 109859f43;  */

undefined8 FUN_109859f10(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  double dVar15;
  float fVar16;
  
  puVar4 = (undefined8 *)*param_2;
  uVar10 = *(uint *)(param_2[1] + (long)param_3 * 4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*(byte *)((long)puVar4 + 100) & 1) == 0) {
    uVar10 = *(uint *)(puVar4[9] + (ulong)uVar10 * 4);
  }
  uVar9 = (ulong)uVar10;
  bVar8 = *(byte *)(puVar4 + 3);
  if (param_1 != (undefined8 *)0x0) {
    switch(*(undefined4 *)((long)puVar4 + 0x1c)) {
    case 1:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pcVar5 = (char *)((long *)*puVar4)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pcVar5 <= pcVar1) {
            return 0;
          }
          param_1[uVar11] = (long)*pcVar1;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 2:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          param_1[uVar11] = (ulong)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 3:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (long)*(short *)(lVar3 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 4:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (ulong)*(ushort *)(lVar3 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 5:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (long)*(int *)(lVar3 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 6:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = (ulong)*(uint *)(lVar3 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 7:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          param_1[uVar11] = *(undefined8 *)(lVar3 + uVar11 * 8);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 8:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if ((uVar6 <= (ulong)(lVar3 + lVar12)) ||
             (lVar14 = *(long *)(lVar3 + uVar11 * 8), lVar14 < 0)) {
            return 0;
          }
          param_1[uVar11] = lVar14;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 9:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          fVar16 = *(float *)(lVar3 + uVar11 * 4);
          if (9.223372e+18 <= fVar16) {
            return 0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return 0;
          }
          if (fVar16 < -9.223372e+18) {
            return 0;
          }
          if (0x7f7fffff < (uint)ABS(fVar16)) {
            return 0;
          }
          param_1[uVar11] = (long)fVar16;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 10:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar9 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          dVar15 = *(double *)(lVar3 + uVar11 * 8);
          if (9.223372036854776e+18 <= dVar15) {
            return 0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return 0;
          }
          if (dVar15 < -9.223372036854776e+18) {
            return 0;
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
            return 0;
          }
          param_1[uVar11] = (long)dVar15;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    case 0xb:
      uVar10 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar10 <= bVar8) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar9 + lVar14 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          param_1[uVar11] = (ulong)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar10 <= bVar8) {
            uVar13 = uVar10;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar10) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar10) * 8 + 8);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109859f44; end: 109859fbb;  */

undefined8 * FUN_109859f44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109859fbc; end: 10985a043;  */

undefined8 FUN_109859fbc(void)

{
  return 6;
}



/* Entry: 10985a044; end: 10985a0bb;  */

undefined8 FUN_10985a044(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  FUN_109853bc4();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x98) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xb8) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xc0) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xc4) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xc0) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xc4) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985a0bc; end: 10985a3bf;  */

long FUN_10985a0bc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lStack_80;
  int iStack_78;
  undefined8 uStack_70;
  int iStack_68;
  int aiStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x70) = param_6;
  uVar3 = (*(long **)(param_1 + 0x58))[1] - **(long **)(param_1 + 0x58);
  iStack_68 = 0;
  uStack_70 = 0;
  lVar1 = param_1;
  if (0 < (int)(uVar3 >> 2)) {
    uVar9 = 0;
    do {
      lVar4 = **(long **)(param_1 + 0x58);
      if ((ulong)((*(long **)(param_1 + 0x58))[1] - lVar4 >> 2) <= uVar9) {
        FUN_109853c48();
        goto LAB_10985a3bc;
      }
      FUN_10985a3e4(param_1 + 0x60,*(undefined4 *)(lVar4 + uVar9 * 4),&uStack_70);
      func_0x0001098578b4(param_1 + 0xa0,&uStack_70);
      lVar1 = param_1 + 0xb8;
      FUN_10985d980();
      if ((int)lVar1 != 0) {
        lVar4 = 0;
        iStack_78 = 0;
        lStack_80 = 0;
        do {
          *(int *)((long)&lStack_80 + lVar4) = -*(int *)((long)&uStack_70 + lVar4);
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        uStack_70 = lStack_80;
        iStack_68 = iStack_78;
      }
      if ((int)uStack_70 < 0) {
        if (uStack_70 < 0) {
          iVar2 = -iStack_68;
          if (-1 < iStack_68) {
            iVar2 = iStack_68;
          }
        }
        else {
          iVar2 = -iStack_68;
          if (-1 < iStack_68) {
            iVar2 = iStack_68;
          }
          iVar2 = *(int *)(param_1 + 0xa8) - iVar2;
        }
        if (iStack_68 < 0) {
          iVar6 = -uStack_70._4_4_;
          if (-1 < uStack_70) {
            iVar6 = uStack_70._4_4_;
          }
        }
        else {
          iVar6 = -uStack_70._4_4_;
          if (-1 < uStack_70) {
            iVar6 = uStack_70._4_4_;
          }
          iVar6 = *(int *)(param_1 + 0xa8) - iVar6;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xb0) + uStack_70._4_4_;
        iVar6 = iStack_68 + *(int *)(param_1 + 0xb0);
      }
      if (iVar6 == 0 && iVar2 == 0) {
        aiStack_60[0] = *(int *)(param_1 + 0xa8);
        aiStack_60[1] = *(int *)(param_1 + 0xa8);
      }
      else {
        iVar7 = *(int *)(param_1 + 0xa8);
        if (iVar2 == 0) {
          aiStack_60[0] = iVar6;
          aiStack_60[1] = iVar6;
          if (iVar7 != iVar6) {
            iVar8 = *(int *)(param_1 + 0xb0);
            if (iVar6 <= iVar8) {
              if (iVar7 == 0) goto LAB_10985a310;
              goto LAB_10985a340;
            }
            iVar2 = 0;
LAB_10985a330:
            aiStack_60[0] = iVar2;
            aiStack_60[1] = iVar8 * 2 - iVar6;
          }
        }
        else if ((iVar6 != 0) || (aiStack_60[0] = iVar2, aiStack_60[1] = iVar2, iVar7 != iVar2)) {
          if (iVar7 == iVar2) {
            iVar8 = *(int *)(param_1 + 0xb0);
LAB_10985a310:
            iVar7 = iVar2;
            if (iVar6 < iVar8) goto LAB_10985a330;
          }
LAB_10985a340:
          if ((iVar7 == iVar6) && (iVar2 < *(int *)(param_1 + 0xb0))) {
            aiStack_60[0] = *(int *)(param_1 + 0xb0) * 2 - iVar2;
            aiStack_60[1] = iVar6;
          }
          else {
            aiStack_60[0] = iVar2;
            aiStack_60[1] = iVar6;
            if (iVar6 == 0) {
              aiStack_60[1] = 0;
              if (*(int *)(param_1 + 0xb0) < iVar2) {
                aiStack_60[0] = *(int *)(param_1 + 0xb0) * 2 - iVar2;
              }
            }
          }
        }
      }
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar4 = 0;
        do {
          iVar6 = aiStack_60[lVar4];
          iVar2 = *(int *)(param_1 + 0x18);
          if (iVar2 < iVar6) {
            lVar5 = *(long *)(param_1 + 0x28);
LAB_10985a274:
            *(int *)(lVar5 + lVar4 * 4) = iVar2;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x14);
            lVar5 = *(long *)(param_1 + 0x28);
            if (iVar6 < iVar2) goto LAB_10985a274;
            *(int *)(lVar5 + lVar4 * 4) = iVar6;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x10));
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar4 = 0;
          do {
            iVar2 = *(int *)(param_2 + lVar4 * 4) + *(int *)(lVar5 + lVar4 * 4);
            *(int *)(param_3 + lVar4 * 4) = iVar2;
            if (*(int *)(param_1 + 0x18) < iVar2) {
              iVar6 = -*(int *)(param_1 + 0x1c);
LAB_10985a2d8:
              *(int *)(param_3 + lVar4 * 4) = iVar2 + iVar6;
            }
            else if (iVar2 < *(int *)(param_1 + 0x14)) {
              iVar6 = *(int *)(param_1 + 0x1c);
              goto LAB_10985a2d8;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)(param_1 + 0x10));
        }
      }
      uVar9 = uVar9 + 1;
      param_3 = param_3 + 8;
      param_2 = param_2 + 8;
    } while (uVar9 != (uVar3 >> 2 & 0x7fffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 1;
  }
LAB_10985a3bc:
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return lVar1;
}



/* Entry: 10985a3c0; end: 10985a3e3;  */

void FUN_10985a3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10985a3e4; end: 10985a6f7;  */

void FUN_10985a3e4(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_10985a6f8(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_10985a6f8(alStack_110 + 9,param_1,iVar4);
      FUN_10985a6f8(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_10985a764(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_10985a6c4;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_10985a6c4;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_10985a684;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_10985a6c4;
LAB_10985a684:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_10985a6c4:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 10985a6f8; end: 10985a763;  */

long * FUN_10985a6f8(long *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  double dVar17;
  float fVar18;
  
  uVar12 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar12 = (ulong)*(uint *)(**(long **)(param_2 + 0x20) + param_3 * 4);
  }
  lVar13 = **(long **)(param_2 + 0x28);
  if (uVar12 < (ulong)((*(long **)(param_2 + 0x28))[1] - lVar13 >> 2)) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar9 = *(uint *)(*(long *)(param_2 + 0x10) + (long)*(int *)(lVar13 + uVar12 * 4) * 4);
    if ((*(byte *)((long)puVar4 + 100) & 1) == 0) {
      uVar9 = *(uint *)(puVar4[9] + (ulong)uVar9 * 4);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar12 = (ulong)uVar9;
    bVar8 = *(byte *)(puVar4 + 3);
    if (param_1 != (long *)0x0) {
      switch(*(undefined4 *)((long)puVar4 + 0x1c)) {
      case 1:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          uVar11 = 0;
          lVar13 = puVar4[5];
          lVar16 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pcVar5 = (char *)((long *)*puVar4)[1];
          do {
            pcVar1 = (char *)(lVar3 + lVar13 * uVar12 + lVar16 + uVar11);
            if (pcVar5 <= pcVar1) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*pcVar1;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 2:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          uVar11 = 0;
          lVar13 = puVar4[5];
          lVar16 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pbVar7 = (byte *)((long *)*puVar4)[1];
          do {
            pbVar2 = (byte *)(lVar3 + lVar13 * uVar12 + lVar16 + uVar11);
            if (pbVar7 <= pbVar2) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*pbVar2;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 3:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*(short *)(lVar3 + uVar11 * 2);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 2;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 4:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*(ushort *)(lVar3 + uVar11 * 2);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 2;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 5:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)*(int *)(lVar3 + uVar11 * 4);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 4;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 6:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*(uint *)(lVar3 + uVar11 * 4);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 4;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 7:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            param_1[uVar11] = *(long *)(lVar3 + uVar11 * 8);
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 8;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 8:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if ((uVar6 <= (ulong)(lVar3 + lVar13)) ||
               (lVar16 = *(long *)(lVar3 + uVar11 * 8), lVar16 < 0)) {
              return (long *)0x0;
            }
            param_1[uVar11] = lVar16;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 8;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 9:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            fVar18 = *(float *)(lVar3 + uVar11 * 4);
            if (9.223372e+18 <= fVar18) {
              return (long *)0x0;
            }
            if ((*(byte *)(puVar4 + 4) & 1) != 0) {
              return (long *)0x0;
            }
            if (fVar18 < -9.223372e+18) {
              return (long *)0x0;
            }
            if (0x7f7fffff < (uint)ABS(fVar18)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)fVar18;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 4;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 10:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          uVar6 = ((long *)*puVar4)[1];
          lVar3 = *(long *)*puVar4 + puVar4[5] * uVar12 + puVar4[6];
          do {
            if (uVar6 <= (ulong)(lVar3 + lVar13)) {
              return (long *)0x0;
            }
            dVar17 = *(double *)(lVar3 + uVar11 * 8);
            if (9.223372036854776e+18 <= dVar17) {
              return (long *)0x0;
            }
            if ((*(byte *)(puVar4 + 4) & 1) != 0) {
              return (long *)0x0;
            }
            if (dVar17 < -9.223372036854776e+18) {
              return (long *)0x0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
              return (long *)0x0;
            }
            param_1[uVar11] = (long)dVar17;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
            lVar13 = lVar13 + 8;
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      case 0xb:
        uVar9 = (uint)bVar8;
        bVar8 = *(byte *)(puVar4 + 3);
        uVar14 = (uint)bVar8;
        if (uVar9 <= bVar8) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          uVar11 = 0;
          lVar13 = puVar4[5];
          lVar16 = puVar4[6];
          lVar3 = *(long *)*puVar4;
          pbVar7 = (byte *)((long *)*puVar4)[1];
          do {
            pbVar2 = (byte *)(lVar3 + lVar13 * uVar12 + lVar16 + uVar11);
            if (pbVar7 <= pbVar2) {
              return (long *)0x0;
            }
            param_1[uVar11] = (ulong)*pbVar2;
            uVar11 = uVar11 + 1;
            bVar8 = *(byte *)(puVar4 + 3);
            uVar14 = (uint)bVar8;
            if (uVar9 <= bVar8) {
              uVar14 = uVar9;
            }
          } while (uVar11 < uVar14);
        }
        uVar14 = (uint)bVar8;
        if (uVar14 < uVar9) {
          _bzero(param_1 + uVar14,(ulong)(~uVar14 + uVar9) * 8 + 8);
        }
        return (long *)0x1;
      }
    }
    return (long *)0x0;
  }
  FUN_1092e2168();
  lVar13 = *param_1;
  iVar10 = *(int *)((long)param_1 + 0xc);
  if ((char)param_1[2] != '\x01') {
    if (iVar10 != -1) {
      iVar15 = 2;
      if (0x55555555 < (uint)(iVar10 * -0x55555555)) {
        iVar15 = -1;
      }
      if (iVar15 + iVar10 != 0xffffffff) {
        iVar10 = *(int *)(*(long *)(lVar13 + 0x18) + (ulong)(uint)(iVar15 + iVar10) * 4);
        if (iVar10 != -1) {
          if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
            iVar10 = iVar10 + 2;
          }
          else {
            iVar10 = iVar10 + -1;
          }
        }
        goto LAB_10985a8dc;
      }
    }
LAB_10985a8d8:
    iVar10 = -1;
LAB_10985a8dc:
    *(int *)((long)param_1 + 0xc) = iVar10;
    return param_1;
  }
  if (iVar10 == -1) {
LAB_10985a864:
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
  else {
    uVar9 = iVar10 - 2;
    if (0x55555555 < (uint)((iVar10 + 1) * -0x55555555)) {
      uVar9 = iVar10 + 1;
    }
    if ((uVar9 == 0xffffffff) ||
       (iVar10 = *(int *)(*(long *)(lVar13 + 0x18) + (ulong)uVar9 * 4), iVar10 == -1))
    goto LAB_10985a864;
    iVar15 = iVar10 + -2;
    if (0x55555555 < (uint)((iVar10 + 1) * -0x55555555)) {
      iVar15 = iVar10 + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar15;
    if (iVar15 != -1) {
      if (iVar15 != (int)param_1[1]) {
        return param_1;
      }
      goto LAB_10985a8d8;
    }
  }
  iVar10 = (int)param_1[1];
  if (iVar10 != -1) {
    iVar15 = 2;
    if (0x55555555 < (uint)(iVar10 * -0x55555555)) {
      iVar15 = -1;
    }
    if (iVar15 + iVar10 != 0xffffffff) {
      iVar10 = *(int *)(*(long *)(lVar13 + 0x18) + (ulong)(uint)(iVar15 + iVar10) * 4);
      if (iVar10 != -1) {
        if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
          iVar10 = iVar10 + 2;
        }
        else {
          iVar10 = iVar10 + -1;
        }
      }
      goto LAB_10985a8e8;
    }
  }
  iVar10 = -1;
LAB_10985a8e8:
  *(int *)((long)param_1 + 0xc) = iVar10;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 10985a764; end: 10985a903;  */

void FUN_10985a764(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *param_1;
  iVar2 = *(int *)((long)param_1 + 0xc);
  if ((char)param_1[2] != '\x01') {
    if (iVar2 != -1) {
      iVar4 = 2;
      if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
        iVar4 = -1;
      }
      if (iVar4 + iVar2 != 0xffffffff) {
        iVar2 = *(int *)(*(long *)(lVar3 + 0x18) + (ulong)(uint)(iVar4 + iVar2) * 4);
        if (iVar2 != -1) {
          if ((uint)(iVar2 * -0x55555555) < 0x55555556) {
            iVar2 = iVar2 + 2;
          }
          else {
            iVar2 = iVar2 + -1;
          }
        }
        goto LAB_10985a8dc;
      }
    }
LAB_10985a8d8:
    iVar2 = -1;
LAB_10985a8dc:
    *(int *)((long)param_1 + 0xc) = iVar2;
    return;
  }
  if (iVar2 == -1) {
LAB_10985a864:
    *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  }
  else {
    uVar1 = iVar2 - 2;
    if (0x55555555 < (uint)((iVar2 + 1) * -0x55555555)) {
      uVar1 = iVar2 + 1;
    }
    if ((uVar1 == 0xffffffff) ||
       (iVar2 = *(int *)(*(long *)(lVar3 + 0x18) + (ulong)uVar1 * 4), iVar2 == -1))
    goto LAB_10985a864;
    iVar4 = iVar2 + -2;
    if (0x55555555 < (uint)((iVar2 + 1) * -0x55555555)) {
      iVar4 = iVar2 + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar4;
    if (iVar4 != -1) {
      if (iVar4 != (int)param_1[1]) {
        return;
      }
      goto LAB_10985a8d8;
    }
  }
  iVar2 = (int)param_1[1];
  if (iVar2 != -1) {
    iVar4 = 2;
    if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
      iVar4 = -1;
    }
    if (iVar4 + iVar2 != 0xffffffff) {
      iVar2 = *(int *)(*(long *)(lVar3 + 0x18) + (ulong)(uint)(iVar4 + iVar2) * 4);
      if (iVar2 != -1) {
        if ((uint)(iVar2 * -0x55555555) < 0x55555556) {
          iVar2 = iVar2 + 2;
        }
        else {
          iVar2 = iVar2 + -1;
        }
      }
      goto LAB_10985a8e8;
    }
  }
  iVar2 = -1;
LAB_10985a8e8:
  *(int *)((long)param_1 + 0xc) = iVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10985a904; end: 10985a97b;  */

undefined8 * FUN_10985a904(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b14fd0;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10985a97c; end: 10985a98b;  */

undefined8 FUN_10985a97c(void)

{
  return 0;
}



/* Entry: 10985a98c; end: 10985aba7;  */

undefined8 FUN_10985a98c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  *(uint *)(param_1 + 0x10) = param_5;
  lVar10 = (long)(int)param_5;
  func_0x000108a5942c(param_1 + 0x28,lVar10);
  uVar2 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  if ((int)param_5 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  uVar8 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar4 = 0;
    do {
      iVar1 = *(int *)(uVar2 + lVar4 * 4);
      iVar6 = *(int *)(param_1 + 0x18);
      if (iVar6 < iVar1) {
        lVar3 = *(long *)(param_1 + 0x28);
LAB_10985aa24:
        *(int *)(lVar3 + lVar4 * 4) = iVar6;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x14);
        lVar3 = *(long *)(param_1 + 0x28);
        if (iVar1 < iVar6) goto LAB_10985aa24;
        *(int *)(lVar3 + lVar4 * 4) = iVar1;
      }
      lVar4 = lVar4 + 1;
      uVar8 = (ulong)*(int *)(param_1 + 0x10);
    } while (lVar4 < (long)uVar8);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar4 = 0;
      do {
        iVar6 = *(int *)(param_2 + lVar4 * 4) + *(int *)(lVar3 + lVar4 * 4);
        *(int *)(param_3 + lVar4 * 4) = iVar6;
        if (*(int *)(param_1 + 0x18) < iVar6) {
          iVar1 = -*(int *)(param_1 + 0x1c);
LAB_10985aa8c:
          *(int *)(param_3 + lVar4 * 4) = iVar6 + iVar1;
        }
        else if (iVar6 < *(int *)(param_1 + 0x14)) {
          iVar1 = *(int *)(param_1 + 0x1c);
          goto LAB_10985aa8c;
        }
        lVar4 = lVar4 + 1;
        uVar8 = (ulong)*(int *)(param_1 + 0x10);
      } while (lVar4 < (long)uVar8);
    }
  }
  if ((int)param_5 < param_4) {
    lVar5 = lVar10 * 4;
    lVar4 = param_3 + lVar10 * 4;
    param_2 = param_2 + lVar10 * 4;
    lVar3 = lVar10;
    do {
      if (0 < (int)uVar8) {
        lVar9 = 0;
        do {
          iVar1 = *(int *)(param_3 + lVar9 * 4);
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 < iVar1) {
            lVar7 = *(long *)(param_1 + 0x28);
LAB_10985aaf0:
            *(int *)(lVar7 + lVar9 * 4) = iVar6;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x14);
            lVar7 = *(long *)(param_1 + 0x28);
            if (iVar1 < iVar6) goto LAB_10985aaf0;
            *(int *)(lVar7 + lVar9 * 4) = iVar1;
          }
          lVar9 = lVar9 + 1;
          uVar8 = (ulong)*(int *)(param_1 + 0x10);
        } while (lVar9 < (long)uVar8);
        if (0 < *(int *)(param_1 + 0x10)) {
          lVar9 = 0;
          do {
            iVar6 = *(int *)(param_2 + lVar9 * 4) + *(int *)(lVar7 + lVar9 * 4);
            *(int *)(lVar4 + lVar9 * 4) = iVar6;
            if (*(int *)(param_1 + 0x18) < iVar6) {
              iVar1 = -*(int *)(param_1 + 0x1c);
LAB_10985ab54:
              *(int *)(lVar4 + lVar9 * 4) = iVar6 + iVar1;
            }
            else if (iVar6 < *(int *)(param_1 + 0x14)) {
              iVar1 = *(int *)(param_1 + 0x1c);
              goto LAB_10985ab54;
            }
            lVar9 = lVar9 + 1;
            uVar8 = (ulong)*(int *)(param_1 + 0x10);
          } while (lVar9 < (long)uVar8);
        }
      }
      lVar3 = lVar3 + lVar10;
      param_3 = param_3 + lVar5;
      lVar4 = lVar4 + lVar5;
      param_2 = param_2 + lVar5;
    } while (lVar3 < param_4);
  }
  __ZdaPv(uVar2);
  return 1;
}



/* Entry: 10985aba8; end: 10985ac1b;  */

bool FUN_10985aba8(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + (long)param_3 * 8);
  *(long *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  *(int *)(param_1 + 0x18) = param_3;
  if (*(char *)(lVar1 + 0x18) == '\x03') {
    return *(int *)(lVar1 + 0x1c) == 9;
  }
  return false;
}



/* Entry: 10985ac1c; end: 10985ad7f;  */

undefined8 FUN_10985ac1c(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  
  if (1 < *(byte *)(*(long *)(param_1 + 8) + 0x48)) {
    FUN_109851b80(param_1);
    lVar3 = param_3[2] + 1;
    if (param_3[1] < lVar3) {
      return 0;
    }
    bVar1 = *(byte *)(*param_3 + param_3[2]);
    param_3[2] = lVar3;
    *(uint *)(param_1 + 0x38) = (uint)bVar1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  puVar2 = (undefined4 *)0x30;
  __Znwm();
  *puVar2 = 0xffffffff;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))((long *)(param_1 + 0x30),puVar2);
  plVar4 = (long *)(lVar3 + 0x68);
  lVar3 = *plVar4;
  *plVar4 = (long)puVar2;
  if (lVar3 != 0) {
    FUN_109846530(plVar4);
  }
  return 1;
}



/* Entry: 10985ad80; end: 10985b057;  */

void FUN_10985ad80(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_4 == 3) {
    if (param_3 == -2) goto LAB_10985ae94;
    lVar10 = (long)*(int *)(param_2 + 0x18);
    plVar9 = *(long **)(param_2 + 8);
    uVar11 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar10 * 8);
    plVar2 = plVar9;
    (**(code **)(*plVar9 + 0x10))();
    if ((int)plVar2 == 1) {
      uVar12 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar10 * 8);
      plVar2 = plVar9;
      (**(code **)(*plVar9 + 0x10))();
      if ((param_3 - 1U < 6) && ((int)plVar2 == 1)) {
        plVar2 = plVar9;
        (**(code **)(*plVar9 + 0x48))();
        plVar3 = plVar9;
        (**(code **)(*plVar9 + 0x58))(plVar9,lVar10);
        if ((plVar2 != (long *)0x0 && plVar3 != (long *)0x0) &&
           (plVar4 = plVar9, (**(code **)(*plVar9 + 0x50))(plVar9,lVar10), param_3 == 6)) {
          bVar1 = plVar4 == (long *)0x0;
          ppuVar7 = &PTR_FUN_110b15c60;
          if (!bVar1) {
            ppuVar7 = &PTR_FUN_110b15b60;
          }
          ppuVar6 = &PTR_DAT_110b15aa8;
          ppuVar8 = &PTR_DAT_110b15bc0;
          goto LAB_10985af6c;
        }
      }
    }
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    puVar5[2] = 0xffffffffffffffff;
    puVar5[3] = 0x3f800000ffffffff;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    ppuVar7 = &PTR_FUN_110b15cc0;
  }
  else {
    if ((param_4 != 2) || (param_3 == -2)) {
LAB_10985ae94:
      puVar5 = (undefined8 *)0x0;
      goto LAB_10985b03c;
    }
    lVar10 = (long)*(int *)(param_2 + 0x18);
    plVar9 = *(long **)(param_2 + 8);
    uVar11 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar10 * 8);
    plVar2 = plVar9;
    (**(code **)(*plVar9 + 0x10))();
    if ((int)plVar2 == 1) {
      uVar12 = *(undefined8 *)(*(long *)(plVar9[1] + 0x10) + lVar10 * 8);
      plVar2 = plVar9;
      (**(code **)(*plVar9 + 0x10))();
      if ((param_3 - 1U < 6) && ((int)plVar2 == 1)) {
        plVar2 = plVar9;
        (**(code **)(*plVar9 + 0x48))();
        plVar3 = plVar9;
        (**(code **)(*plVar9 + 0x58))(plVar9,lVar10);
        if ((plVar2 != (long *)0x0 && plVar3 != (long *)0x0) &&
           (plVar4 = plVar9, (**(code **)(*plVar9 + 0x50))(plVar9,lVar10), param_3 == 6)) {
          bVar1 = plVar4 == (long *)0x0;
          ppuVar7 = &PTR_DAT_110b159c0;
          if (!bVar1) {
            ppuVar7 = &PTR_DAT_110b158c0;
          }
          ppuVar6 = &PTR_DAT_110b15808;
          ppuVar8 = &PTR_DAT_110b15920;
LAB_10985af6c:
          if (!bVar1) {
            plVar2 = plVar4;
            ppuVar8 = ppuVar6;
          }
          lVar10 = plVar9[0xb];
          puVar5 = (undefined8 *)0xb8;
          __Znwm();
          puVar5[2] = 0xffffffffffffffff;
          puVar5[3] = 0x3f800000ffffffff;
          *(undefined4 *)(puVar5 + 4) = 0xffffffff;
          puVar5[5] = lVar10;
          puVar5[6] = plVar2;
          puVar5[7] = plVar3 + 3;
          puVar5[8] = plVar3;
          *puVar5 = ppuVar8;
          puVar5[1] = uVar12;
          puVar5[0xb] = 0;
          puVar5[0xc] = lVar10;
          puVar5[0xd] = plVar2;
          puVar5[0xe] = plVar3 + 3;
          puVar5[0xf] = plVar3;
          puVar5[9] = ppuVar7;
          puVar5[10] = 0;
          *(undefined4 *)(puVar5 + 0x10) = 1;
          puVar5[0x11] = 0xffffffffffffffff;
          puVar5[0x12] = 0x3f800000ffffffff;
          *(undefined4 *)(puVar5 + 0x13) = 0xffffffff;
          puVar5[0x14] = 0;
          puVar5[0x15] = 0;
          *(undefined1 *)(puVar5 + 0x16) = 0;
          goto LAB_10985b03c;
        }
      }
    }
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    puVar5[2] = 0xffffffffffffffff;
    puVar5[3] = 0x3f800000ffffffff;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    ppuVar7 = &PTR_FUN_110b15a20;
  }
  *puVar5 = ppuVar7;
  puVar5[1] = uVar11;
LAB_10985b03c:
  *param_1 = puVar5;
  return;
}



/* Entry: 10985b058; end: 10985b117;  */

undefined8 FUN_10985b058(void)

{
  return 2;
}



/* Entry: 10985b118; end: 10985b18f;  */

undefined8 FUN_10985b118(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  func_0x00010985b434();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x80) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xa0) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xa8) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xac) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xa8) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xac) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985b190; end: 10985b413;  */

undefined8
FUN_10985b190(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lStack_78;
  int iStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 - 2 < 0x1d) {
    uVar3 = -1 << (ulong)(uVar2 & 0x1f);
    *(uint *)(param_1 + 0x88) = uVar2;
    *(uint *)(param_1 + 0x8c) = ~uVar3;
    uVar2 = -uVar3 - 2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(float *)(param_1 + 0x94) = 2.0 / (float)uVar2;
    *(uint *)(param_1 + 0x98) = uVar2 >> 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_6;
  uVar5 = (*(long **)(param_1 + 0x40))[1] - **(long **)(param_1 + 0x40);
  iStack_60 = 0;
  uStack_68 = 0;
  if (0 < (int)(uVar5 >> 2)) {
    uVar10 = 0;
    do {
      lVar6 = **(long **)(param_1 + 0x40);
      if ((ulong)((*(long **)(param_1 + 0x40))[1] - lVar6 >> 2) <= uVar10) {
        FUN_109853c48();
        return 0;
      }
      FUN_10985b4f4(param_1 + 0x48,*(undefined4 *)(lVar6 + uVar10 * 4),&uStack_68);
      func_0x0001098578b4(param_1 + 0x88,&uStack_68);
      iVar4 = (int)param_1 + 0xa0;
      FUN_10985d980();
      if (iVar4 != 0) {
        lVar6 = 0;
        iStack_70 = 0;
        lStack_78 = 0;
        do {
          *(int *)((long)&lStack_78 + lVar6) = -*(int *)((long)&uStack_68 + lVar6);
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0xc);
        uStack_68 = lStack_78;
        iStack_60 = iStack_70;
      }
      if ((int)uStack_68 < 0) {
        if (uStack_68 < 0) {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
        }
        else {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
          iVar4 = *(int *)(param_1 + 0x90) - iVar4;
        }
        if (iStack_60 < 0) {
          iVar7 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar7 = uStack_68._4_4_;
          }
        }
        else {
          iVar7 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar7 = uStack_68._4_4_;
          }
          iVar7 = *(int *)(param_1 + 0x90) - iVar7;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x98) + uStack_68._4_4_;
        iVar7 = iStack_60 + *(int *)(param_1 + 0x98);
      }
      if (iVar7 == 0 && iVar4 == 0) {
        iStack_58 = *(int *)(param_1 + 0x90);
        iStack_54 = *(int *)(param_1 + 0x90);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x90);
        if (iVar4 == 0) {
          iStack_58 = iVar7;
          iStack_54 = iVar7;
          if (iVar8 != iVar7) {
            iVar9 = *(int *)(param_1 + 0x98);
            if (iVar7 <= iVar9) {
              if (iVar8 == 0) goto LAB_10985b380;
              goto LAB_10985b3b0;
            }
            iVar4 = 0;
LAB_10985b3a0:
            iStack_58 = iVar4;
            iStack_54 = iVar9 * 2 - iVar7;
          }
        }
        else if ((iVar7 != 0) || (iStack_58 = iVar4, iStack_54 = iVar4, iVar8 != iVar4)) {
          if (iVar8 == iVar4) {
            iVar9 = *(int *)(param_1 + 0x98);
LAB_10985b380:
            iVar8 = iVar4;
            if (iVar7 < iVar9) goto LAB_10985b3a0;
          }
LAB_10985b3b0:
          if ((iVar8 == iVar7) && (iVar4 < *(int *)(param_1 + 0x98))) {
            iStack_58 = *(int *)(param_1 + 0x98) * 2 - iVar4;
            iStack_54 = iVar7;
          }
          else {
            iStack_58 = iVar4;
            iStack_54 = iVar7;
            if (iVar7 == 0) {
              iStack_54 = 0;
              if (*(int *)(param_1 + 0x98) < iVar4) {
                iStack_58 = *(int *)(param_1 + 0x98) * 2 - iVar4;
              }
            }
          }
        }
      }
      puVar1 = (undefined4 *)(param_2 + uVar10 * 8);
      FUN_10985b864(&lStack_78,(uint *)(param_1 + 0x10),&iStack_58,*puVar1,puVar1[1]);
      *(long *)(param_3 + uVar10 * 8) = lStack_78;
      uVar10 = uVar10 + 1;
    } while (uVar10 != (uVar5 >> 2 & 0x7fffffff));
  }
  return 1;
}



/* Entry: 10985b414; end: 10985b4f3;  */

undefined8 FUN_10985b414(void)

{
  return 0;
}



/* Entry: 10985b4f4; end: 10985b807;  */

void FUN_10985b4f4(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_10985b808(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_10985b808(alStack_110 + 9,param_1,iVar4);
      FUN_10985b808(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_1098576b4(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_10985b7d4;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_10985b7d4;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_10985b794;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_10985b7d4;
LAB_10985b794:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_10985b7d4:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 10985b808; end: 10985b863;  */

int * FUN_10985b808(int *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  double dVar21;
  float fVar22;
  
  uVar16 = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + (long)param_3 * 4);
  lVar18 = **(long **)(param_2 + 10);
  if ((ulong)((*(long **)(param_2 + 10))[1] - lVar18 >> 2) <= uVar16) {
    FUN_1092e2168();
    iVar10 = param_2[4];
    iVar14 = *param_3 - iVar10;
    iVar17 = param_3[1] - iVar10;
    *(ulong *)param_3 = CONCAT44(iVar17,iVar14);
    iVar3 = -iVar14;
    if (-1 < iVar14) {
      iVar3 = iVar14;
    }
    iVar4 = -iVar17;
    if (-1 < iVar17) {
      iVar4 = iVar17;
    }
    uVar13 = param_2[4];
    piVar12 = param_1;
    uVar19 = uVar13;
    if (uVar13 < (uint)(iVar4 + iVar3)) {
      piVar12 = param_2;
      FUN_10985b980(param_2,param_3);
      iVar14 = *param_3;
      iVar17 = param_3[1];
      uVar19 = param_2[4];
    }
    iVar14 = iVar14 + param_4;
    iVar17 = iVar17 + param_5;
    if ((int)uVar19 < iVar14) {
      iVar14 = iVar14 - param_2[1];
    }
    else if ((int)(iVar14 + uVar19) < 0 != SCARRY4(iVar14,uVar19)) {
      iVar14 = param_2[1] + iVar14;
    }
    *param_1 = iVar14;
    if ((int)uVar19 < iVar17) {
      iVar17 = iVar17 - param_2[1];
    }
    else if ((int)(iVar17 + uVar19) < 0 != SCARRY4(iVar17,uVar19)) {
      iVar17 = param_2[1] + iVar17;
    }
    param_1[1] = iVar17;
    if (uVar13 < (uint)(iVar4 + iVar3)) {
      FUN_10985b980(param_2,param_1,param_1 + 1);
      iVar14 = *param_1;
      iVar17 = param_1[1];
      piVar12 = param_2;
    }
    *(ulong *)param_1 = CONCAT44(iVar17 + iVar10,iVar14 + iVar10);
    return piVar12;
  }
  puVar6 = *(undefined8 **)(param_2 + 2);
  uVar13 = *(uint *)(*(long *)(param_2 + 4) + (long)*(int *)(lVar18 + uVar16 * 4) * 4);
  if ((*(byte *)((long)puVar6 + 100) & 1) == 0) {
    uVar13 = *(uint *)(puVar6[9] + (ulong)uVar13 * 4);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar16 = (ulong)uVar13;
  bVar11 = *(byte *)(puVar6 + 3);
  if (param_1 != (int *)0x0) {
    switch(*(undefined4 *)((long)puVar6 + 0x1c)) {
    case 1:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        uVar15 = 0;
        lVar18 = puVar6[5];
        lVar20 = puVar6[6];
        lVar5 = *(long *)*puVar6;
        pcVar7 = (char *)((long *)*puVar6)[1];
        do {
          pcVar1 = (char *)(lVar5 + lVar18 * uVar16 + lVar20 + uVar15);
          if (pcVar7 <= pcVar1) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = (long)*pcVar1;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 2:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        uVar15 = 0;
        lVar18 = puVar6[5];
        lVar20 = puVar6[6];
        lVar5 = *(long *)*puVar6;
        pbVar9 = (byte *)((long *)*puVar6)[1];
        do {
          pbVar2 = (byte *)(lVar5 + lVar18 * uVar16 + lVar20 + uVar15);
          if (pbVar9 <= pbVar2) {
            return (int *)0x0;
          }
          *(ulong *)(param_1 + uVar15 * 2) = (ulong)*pbVar2;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 3:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = (long)*(short *)(lVar5 + uVar15 * 2);
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 2;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 4:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          *(ulong *)(param_1 + uVar15 * 2) = (ulong)*(ushort *)(lVar5 + uVar15 * 2);
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 2;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 5:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = (long)*(int *)(lVar5 + uVar15 * 4);
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 4;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 6:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          *(ulong *)(param_1 + uVar15 * 2) = (ulong)*(uint *)(lVar5 + uVar15 * 4);
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 4;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 7:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          *(undefined8 *)(param_1 + uVar15 * 2) = *(undefined8 *)(lVar5 + uVar15 * 8);
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 8;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 8:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if ((uVar8 <= (ulong)(lVar5 + lVar18)) ||
             (lVar20 = *(long *)(lVar5 + uVar15 * 8), lVar20 < 0)) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = lVar20;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 8;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 9:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          fVar22 = *(float *)(lVar5 + uVar15 * 4);
          if (9.223372e+18 <= fVar22) {
            return (int *)0x0;
          }
          if ((*(byte *)(puVar6 + 4) & 1) != 0) {
            return (int *)0x0;
          }
          if (fVar22 < -9.223372e+18) {
            return (int *)0x0;
          }
          if (0x7f7fffff < (uint)ABS(fVar22)) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = (long)fVar22;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 4;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 10:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        lVar18 = 0;
        uVar15 = 0;
        uVar8 = ((long *)*puVar6)[1];
        lVar5 = *(long *)*puVar6 + puVar6[5] * uVar16 + puVar6[6];
        do {
          if (uVar8 <= (ulong)(lVar5 + lVar18)) {
            return (int *)0x0;
          }
          dVar21 = *(double *)(lVar5 + uVar15 * 8);
          if (9.223372036854776e+18 <= dVar21) {
            return (int *)0x0;
          }
          if ((*(byte *)(puVar6 + 4) & 1) != 0) {
            return (int *)0x0;
          }
          if (dVar21 < -9.223372036854776e+18) {
            return (int *)0x0;
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
            return (int *)0x0;
          }
          *(long *)(param_1 + uVar15 * 2) = (long)dVar21;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
          lVar18 = lVar18 + 8;
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    case 0xb:
      uVar13 = (uint)bVar11;
      bVar11 = *(byte *)(puVar6 + 3);
      uVar19 = (uint)bVar11;
      if (uVar13 <= bVar11) {
        uVar19 = uVar13;
      }
      if (uVar19 != 0) {
        uVar15 = 0;
        lVar18 = puVar6[5];
        lVar20 = puVar6[6];
        lVar5 = *(long *)*puVar6;
        pbVar9 = (byte *)((long *)*puVar6)[1];
        do {
          pbVar2 = (byte *)(lVar5 + lVar18 * uVar16 + lVar20 + uVar15);
          if (pbVar9 <= pbVar2) {
            return (int *)0x0;
          }
          *(ulong *)(param_1 + uVar15 * 2) = (ulong)*pbVar2;
          uVar15 = uVar15 + 1;
          bVar11 = *(byte *)(puVar6 + 3);
          uVar19 = (uint)bVar11;
          if (uVar13 <= bVar11) {
            uVar19 = uVar13;
          }
        } while (uVar15 < uVar19);
      }
      uVar19 = (uint)bVar11;
      if (uVar19 < uVar13) {
        _bzero(param_1 + (ulong)uVar19 * 2,(ulong)(~uVar19 + uVar13) * 8 + 8);
      }
      return (int *)0x1;
    }
  }
  return (int *)0x0;
}



/* Entry: 10985b864; end: 10985b97f;  */

void FUN_10985b864(int *param_1,long param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar5 = *param_3 - iVar3;
  iVar6 = param_3[1] - iVar3;
  *(ulong *)param_3 = CONCAT44(iVar6,iVar5);
  iVar1 = -iVar5;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  iVar2 = -iVar6;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar7 = uVar4;
  if (uVar4 < (uint)(iVar2 + iVar1)) {
    FUN_10985b980(param_2,param_3);
    iVar5 = *param_3;
    iVar6 = param_3[1];
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  iVar5 = iVar5 + param_4;
  iVar6 = iVar6 + param_5;
  if ((int)uVar7 < iVar5) {
    iVar5 = iVar5 - *(int *)(param_2 + 4);
  }
  else if ((int)(iVar5 + uVar7) < 0 != SCARRY4(iVar5,uVar7)) {
    iVar5 = *(int *)(param_2 + 4) + iVar5;
  }
  *param_1 = iVar5;
  if ((int)uVar7 < iVar6) {
    iVar6 = iVar6 - *(int *)(param_2 + 4);
  }
  else if ((int)(iVar6 + uVar7) < 0 != SCARRY4(iVar6,uVar7)) {
    iVar6 = *(int *)(param_2 + 4) + iVar6;
  }
  param_1[1] = iVar6;
  if (uVar4 < (uint)(iVar2 + iVar1)) {
    FUN_10985b980(param_2,param_1,param_1 + 1);
    iVar5 = *param_1;
    iVar6 = param_1[1];
  }
  *(ulong *)param_1 = CONCAT44(iVar6 + iVar3,iVar5 + iVar3);
  return;
}



/* Entry: 10985b980; end: 10985bad3;  */

void FUN_10985b980(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (iVar1 < 0) {
    iVar5 = -1;
    iVar6 = iVar5;
    iVar7 = -1;
    if (iVar2 < 1) goto LAB_10985b9c8;
  }
  else {
    if (-1 < iVar2) {
      iVar6 = 1;
      iVar7 = 1;
      goto LAB_10985b9c8;
    }
    if (iVar1 == 0) {
      iVar6 = -1;
      iVar7 = -1;
      goto LAB_10985b9c8;
    }
    iVar5 = 1;
  }
  iVar6 = 1;
  iVar7 = iVar5;
  if (iVar2 < 1) {
    iVar6 = -1;
  }
LAB_10985b9c8:
  iVar5 = *(int *)(param_1 + 0x10) * iVar7;
  iVar3 = *(int *)(param_1 + 0x10) * iVar6;
  iVar4 = iVar1 * 2 - iVar5;
  iVar2 = iVar2 * 2 - iVar3;
  iVar1 = -iVar2;
  if (0x7fffffff < (uint)(iVar7 * iVar6)) {
    iVar1 = iVar2;
  }
  iVar2 = -iVar4;
  if (0x7fffffff < (uint)(iVar7 * iVar6)) {
    iVar2 = iVar4;
  }
  *param_2 = iVar1 + iVar5;
  *param_3 = iVar2 + iVar3;
  *param_2 = *param_2 / 2;
  *param_3 = *param_3 / 2;
  return;
}



/* Entry: 10985bad4; end: 10985bb4b;  */

undefined8 FUN_10985bad4(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  func_0x00010985b434();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x80) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xa0) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xa8) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xac) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xa8) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xac) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985bb4c; end: 10985bdcf;  */

long * FUN_10985bb4c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                    long param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lStack_78;
  int iStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 - 2 < 0x1d) {
    uVar3 = -1 << (ulong)(uVar2 & 0x1f);
    *(uint *)(param_1 + 0x11) = uVar2;
    *(uint *)((long)param_1 + 0x8c) = ~uVar3;
    uVar2 = -uVar3 - 2;
    *(uint *)(param_1 + 0x12) = uVar2;
    *(float *)((long)param_1 + 0x94) = 2.0 / (float)uVar2;
    *(uint *)(param_1 + 0x13) = uVar2 >> 1;
  }
  param_1[0xb] = param_6;
  uVar6 = ((long *)param_1[8])[1] - *(long *)param_1[8];
  iStack_60 = 0;
  uStack_68 = 0;
  if (0 < (int)(uVar6 >> 2)) {
    uVar11 = 0;
    plVar5 = param_1;
    do {
      lVar7 = *(long *)param_1[8];
      if ((ulong)(((long *)param_1[8])[1] - lVar7 >> 2) <= uVar11) {
        FUN_109853c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar5;
      }
      FUN_10985bdf4(param_1 + 9,*(undefined4 *)(lVar7 + uVar11 * 4),&uStack_68);
      func_0x0001098578b4(param_1 + 0x11,&uStack_68);
      iVar4 = (int)param_1 + 0xa0;
      FUN_10985d980();
      if (iVar4 != 0) {
        lVar7 = 0;
        iStack_70 = 0;
        lStack_78 = 0;
        do {
          *(int *)((long)&lStack_78 + lVar7) = -*(int *)((long)&uStack_68 + lVar7);
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0xc);
        uStack_68 = lStack_78;
        iStack_60 = iStack_70;
      }
      if ((int)uStack_68 < 0) {
        if (uStack_68 < 0) {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
        }
        else {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
          iVar4 = (int)param_1[0x12] - iVar4;
        }
        if (iStack_60 < 0) {
          iVar8 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar8 = uStack_68._4_4_;
          }
        }
        else {
          iVar8 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar8 = uStack_68._4_4_;
          }
          iVar8 = (int)param_1[0x12] - iVar8;
        }
      }
      else {
        iVar4 = (int)param_1[0x13] + uStack_68._4_4_;
        iVar8 = iStack_60 + (int)param_1[0x13];
      }
      if (iVar8 == 0 && iVar4 == 0) {
        iStack_58 = (int)param_1[0x12];
        iStack_54 = (int)param_1[0x12];
      }
      else {
        iVar9 = (int)param_1[0x12];
        if (iVar4 == 0) {
          iStack_58 = iVar8;
          iStack_54 = iVar8;
          if (iVar9 != iVar8) {
            iVar10 = (int)param_1[0x13];
            if (iVar8 <= iVar10) {
              if (iVar9 == 0) goto LAB_10985bd3c;
              goto LAB_10985bd6c;
            }
            iVar4 = 0;
LAB_10985bd5c:
            iStack_58 = iVar4;
            iStack_54 = iVar10 * 2 - iVar8;
          }
        }
        else if ((iVar8 != 0) || (iStack_58 = iVar4, iStack_54 = iVar4, iVar9 != iVar4)) {
          if (iVar9 == iVar4) {
            iVar10 = (int)param_1[0x13];
LAB_10985bd3c:
            iVar9 = iVar4;
            if (iVar8 < iVar10) goto LAB_10985bd5c;
          }
LAB_10985bd6c:
          if ((iVar9 == iVar8) && (iVar4 < (int)param_1[0x13])) {
            iStack_58 = (int)param_1[0x13] * 2 - iVar4;
            iStack_54 = iVar8;
          }
          else {
            iStack_58 = iVar4;
            iStack_54 = iVar8;
            if (iVar8 == 0) {
              iStack_54 = 0;
              if ((int)param_1[0x13] < iVar4) {
                iStack_58 = (int)param_1[0x13] * 2 - iVar4;
              }
            }
          }
        }
      }
      puVar1 = (undefined4 *)(param_2 + uVar11 * 8);
      plVar5 = &lStack_78;
      FUN_10985b864(plVar5,param_1 + 2,&iStack_58,*puVar1,puVar1[1]);
      *(long *)(param_3 + uVar11 * 8) = lStack_78;
      uVar11 = uVar11 + 1;
    } while (uVar11 != (uVar6 >> 2 & 0x7fffffff));
  }
  return (long *)0x1;
}



/* Entry: 10985bdd0; end: 10985bdf3;  */

void FUN_10985bdd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


